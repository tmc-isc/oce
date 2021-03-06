// File:	BOPTest_EFCommands.cxx
// Created:	Mon Feb 26 10:44:30 2001
// Author:	Peter KURNEV
//		<pkv@irinox>


#include <BOPTest.ixx>

#include <stdio.h>

#include <Draw_Interpretor.hxx>

#include <TopoDS.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>

#include <DBRep.hxx>

#include <IntTools_EdgeFace.hxx>
#include <BRep_Tool.hxx>
#include <IntTools_SequenceOfCommonPrts.hxx>
#include <IntTools_CommonPrt.hxx>

//=======================================================================
//function :bedge
//purpose  : 
//=======================================================================
static Standard_Integer bef   (Draw_Interpretor& di, 
			       Standard_Integer n, 
			       const char** a)
{
  if (n<3) {
    di << " Use bef> Edge Face Discr[33] Tol[1.e-7] Deflection[0.01]\n";
    return 1;
  }

  TopoDS_Shape S1 = DBRep::Get(a[1]);
  TopoDS_Shape S2 = DBRep::Get(a[2]);
  
  if (S1.IsNull() || S2.IsNull()) {
    di << " Null shapes is not allowed \n";
    return 1;
  }

  if (S1.ShapeType()!=TopAbs_EDGE && S2.ShapeType()!=TopAbs_FACE) {
    di << " Shapes must be EDGE and  FACE type\n";
    return 1;
  }

  TopoDS_Edge E=TopoDS::Edge(S1);
  TopoDS_Face F=TopoDS::Face(S2);

  Standard_Integer aDiscr=33;
  Standard_Real aTol=.0000001, aDeflection=.01, aFrom, aTo;
  
  if (n>=4) {  
    aDiscr=atoi (a[3]);
  }

  if (n>=5) {  
    aTol=atof (a[4]);
  }

  if (n>=6) {  
    aDeflection=atof (a[5]);
  }

  di << " bef: ===Begin===\n";
  di << " bef: Discretize=" << aDiscr << "%d\n";
  di << " bef: Tolerance =" << aTol << "\n";
  di << " bef: Deflection=" << aDeflection << "\n";
  
  IntTools_EdgeFace aEF;
  
  aEF.SetEdge(E); 
  aEF.SetFace(F); 
  aEF.SetTolE(aTol);
  aEF.SetTolF(aTol);

  aEF.SetDiscretize(aDiscr);
  aEF.SetDeflection(aDeflection);

  BRep_Tool::Range(E, aFrom, aTo);
  aEF.SetRange (aFrom, aTo);

  aEF.Perform();
  //
  // Results treatment
  Standard_Boolean anIsDone=aEF.IsDone();
  
  di << "\n aEF.IsDone()=" << (Standard_Integer) anIsDone << ", aEF.ErrorStatus()=" << aEF.ErrorStatus() << "\n";
  
  if (anIsDone) {
    Standard_Integer i, aNb;
    Standard_Real tF, tL;

    const IntTools_SequenceOfCommonPrts& aCPs=aEF.CommonParts();
    aNb=aCPs.Length();
    di << " aNb Common Parts=" << aNb << "\n";
    for (i=1; i<=aNb; i++) {
      const IntTools_CommonPrt& aCP=aCPs(i);
      TopAbs_ShapeEnum aType=aCP.Type();
      if (aType==TopAbs_VERTEX)
	di << " aCP => Type=Vertex\n";
      else if (aType==TopAbs_EDGE)
	di << " aCP => Type=Edge\n";
      else 
	di << " aCP => Type=Unknown\n";

      aCP.Range1(tF, tL);
      di << " Part " << i << " Edge#1 (" << tF << ", " << tL << ")\n";
    }
  }

  di << " bef: ===End===\n";
  return 0;
}

//=======================================================================
//function : EFCommands
//purpose  : 
//=======================================================================
  void  BOPTest::EFCommands(Draw_Interpretor& theCommands)
{
  static Standard_Boolean done = Standard_False;
  if (done) return;
  done = Standard_True;
  // Chapter's name
  const char* g = "Mtest commands";

  theCommands.Add("bef", "Use bef> Edge Face Discr[33] Tol[1.e-7] Deflection[0.01]", __FILE__, bef, g);
}
