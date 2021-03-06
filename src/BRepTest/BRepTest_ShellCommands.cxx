// File:	BRepTest_ShellCommands.cxx
// Created:	Mon Dec 21 10:19:27 1998
// Author:	Michael KAZAKOV
//		<mko@vladox.nnov.matra-dtv.fr>


#include <BRepTest.hxx>
#include <Draw_Interpretor.hxx>
#include <Draw_Appli.hxx>
#include <DBRep.hxx>
#include <BRepTools.hxx>
#include <BRepOffset.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopoDS_Shape.hxx>
#include <TopExp_Explorer.hxx>
#include <TopAbs.hxx>
#include <BRep_Tool.hxx>
#include <gp_Pnt.hxx>
#include <TopExp_Explorer.hxx>
#include <TopAbs.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS.hxx>




static Standard_Boolean issame(TopoDS_Face& face, TopoDS_Face& newface)
{
  TopExp_Explorer exp(face,TopAbs_VERTEX),newexp(newface,TopAbs_VERTEX);
  Standard_Integer newcounter=0,counter=0;
  for (;exp.More();exp.Next())
    {
      counter++;
      gp_Pnt p(BRep_Tool::Pnt(TopoDS::Vertex(exp.Current())));
      for (;newexp.More();newexp.Next())
	{
	  gp_Pnt newp(BRep_Tool::Pnt(TopoDS::Vertex(newexp.Current())));
	  if (p.IsEqual(newp,1e-7))
	    {
	      newcounter++;
	      break;
	    };
	};
    };
  if (counter==newcounter)
    return Standard_True;
  return Standard_False;
}

static TopoDS_Face findface(TopoDS_Shape& shape, TopoDS_Face& face)
{
  TopoDS_Face newface;
  TopExp_Explorer exp(shape,TopAbs_FACE);
  for (;exp.More();exp.Next())
    {
      newface = TopoDS::Face(exp.Current());
      if (issame(face,newface))
	{
	  break;
	};
    };
  return newface;
}

static Standard_Integer shell(Draw_Interpretor& di, Standard_Integer n, const char** a)
{ 
  TopoDS_Shape Shape =  DBRep::Get(a[1]);
  TopTools_ListOfShape ListOfCorks;
  //cout <<"You have "<<n-2<<" of the reference faces" << endl;
  di <<"You have "<<n-2<<" of the reference faces" << "\n";
  Standard_Integer i=2;
  for (;i<n;i++)
    {
      //cout <<i-1<<"th element"<< endl;
      di <<i-1<<"th element"<< "\n";
//      ListOfCorks.Append(findface(Shape,TopoDS::Face(DBRep::Get(a[i]))));
      TopoDS_Shape aLocalFace(DBRep::Get(a[i]));
      ListOfCorks.Append(findface(Shape,(TopoDS_Face &) TopoDS::Face(aLocalFace)));
//      ListOfCorks.Append(findface(Shape,(TopoDS_Face &) TopoDS::Face(DBRep::Get(a[i]))));
    }
  Standard_Real Tol = 1e-5;
  Standard_Real OffsetValue = 1;
  OffsetValue = -OffsetValue; // Offset > 0 = Interior.
  BRepOffsetAPI_MakeThickSolid MKTS (Shape, 
			       ListOfCorks, 
			       OffsetValue, 
			       Tol, 
			       BRepOffset_Skin, 
			       1, Standard_False);

  DBRep::Set("Result.brep",MKTS.Shape());
  TopTools_ListOfShape Larg;
  Larg.Append(Shape);
  //Check if the shape has at least one face
  TopExp_Explorer FExp (MKTS.Shape (), TopAbs_FACE);
  if (FExp.More ()) {
    //cout << "Standard_True"<<endl;
    di << "Standard_True"<<"\n";
  }
  DBRep::Set("S",MKTS.Shape());
  return 0;
}
/*********************************************************************************/

void  BRepTest::ShellCommands(Draw_Interpretor& theCommands)
{
  static Standard_Boolean loaded = Standard_False;
  if (loaded) return;
  loaded = Standard_True;

  const char* g = "Projection of wire commands";

  theCommands.Add("shell","Make shell on bugged object",
		  __FILE__,
		  shell,g);

}
