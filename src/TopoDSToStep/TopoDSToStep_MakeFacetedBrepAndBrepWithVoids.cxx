// File:	TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.cxx
// Created:	Fri Jul 23 17:48:46 1993
// Author:	Martine LANGLOIS
//		<mla@mastox>


#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.ixx>
#include <TopoDSToStep.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <MoniTool_DataMapOfShapeTransient.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_OrientedClosedShell.hxx>
#include <StepShape_HArray1OfOrientedClosedShell.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS.hxx>
#include <TColStd_SequenceOfTransient.hxx>
#include <BRepTools.hxx>
#include <StdFail_NotDone.hxx>
#include <Transfer_FinderProcess.hxx>
#include <TransferBRep_ShapeMapper.hxx>
#include <TCollection_HAsciiString.hxx>

//=============================================================================
// Create a FacetedBrepAndBrepWithVoids of StepShape from a Solid of TopoDS
// containing more than one closed shell 
//=============================================================================

TopoDSToStep_MakeFacetedBrepAndBrepWithVoids::
  TopoDSToStep_MakeFacetedBrepAndBrepWithVoids(const TopoDS_Solid& aSolid,
				    const Handle(Transfer_FinderProcess)& FP)
{
  done = Standard_False;
  TopoDS_Iterator              It;
  MoniTool_DataMapOfShapeTransient   aMap;
  TColStd_SequenceOfTransient  S;
  TopoDS_Shell                 aOutShell;

  Handle(StepShape_TopologicalRepresentationItem) aItem;
  Handle(StepShape_ClosedShell)                   aOuter, aCShell;
  Handle(StepShape_OrientedClosedShell)           aOCShell;
  Handle(StepShape_HArray1OfOrientedClosedShell)  aVoids;

  aOutShell = BRepTools::OuterShell(aSolid);

  TopoDSToStep_Builder StepB;
  TopoDSToStep_Tool    aTool;

  if (!aOutShell.IsNull()) {
    It.Initialize(aSolid);
    for ( ; It.More(); It.Next() ) {
      if (It.Value().ShapeType() == TopAbs_SHELL) {
	TopoDS_Shell CurrentShell = TopoDS::Shell(It.Value());
	if (It.Value().Closed()) {

	  aTool.Init(aMap, Standard_False);
	  StepB.Init(CurrentShell, aTool, FP);
	  TopoDSToStep::AddResult ( FP, aTool );

	  if (StepB.IsDone()) {
	    aCShell = Handle(StepShape_ClosedShell)::DownCast(StepB.Value());
	    if ( aOutShell.IsEqual(It.Value()) ) 
	      aOuter = aCShell;
	    else 
	      S.Append(aCShell);
	  }
	  else {
	    Handle(TransferBRep_ShapeMapper) errShape =
	      new TransferBRep_ShapeMapper(CurrentShell);
	    FP->AddWarning(errShape," Shell from Solid not mapped to FacetedBrepAndBrepWithVoids");
	  }
	}
	else {
	  done = Standard_False;
	  Handle(TransferBRep_ShapeMapper) errShape =
	    new TransferBRep_ShapeMapper(CurrentShell);
	  FP->AddWarning(errShape," Shell from Solid not closed; not mapped to FacetedBrepAndBrepWithVoids");
	}
      }
    }
  }
  Standard_Integer N = S.Length();
  if ( N>=1 ) {
    aVoids = new StepShape_HArray1OfOrientedClosedShell(1,N);
    Handle(TCollection_HAsciiString) aName = 
      new TCollection_HAsciiString("");
    for ( Standard_Integer i=1; i<=N; i++ ) {
      aOCShell = new StepShape_OrientedClosedShell();
      aOCShell->Init(aName, Handle(StepShape_ClosedShell)::DownCast(S.Value(i)),
		     Standard_True);
      aVoids->SetValue(i, aOCShell);
    }
    theFacetedBrepAndBrepWithVoids = 
      new StepShape_FacetedBrepAndBrepWithVoids();
    theFacetedBrepAndBrepWithVoids->Init(aName, aOuter, aVoids);
    done = Standard_True;
  }
  else {
    done = Standard_False;
    Handle(TransferBRep_ShapeMapper) errShape =
      new TransferBRep_ShapeMapper(aSolid);
    FP->AddWarning(errShape," Solid contains no Shell to be mapped to FacetedBrepAndBrepWithVoids");
  }
}

//=============================================================================
// renvoi des valeurs
//=============================================================================

const Handle(StepShape_FacetedBrepAndBrepWithVoids) &
      TopoDSToStep_MakeFacetedBrepAndBrepWithVoids::Value() const
{
  StdFail_NotDone_Raise_if(!done,"");
  return theFacetedBrepAndBrepWithVoids;
}
