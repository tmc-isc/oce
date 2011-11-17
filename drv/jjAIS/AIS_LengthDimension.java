

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Face;
import jcas.Standard_Real;
import jjAIS.TCollection_ExtendedString;
import jjAIS.gp_Pnt;
import jjAIS.DsgPrs_ArrowSide;
import jcas.Standard_Short;
import jjAIS.TopoDS_Edge;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jjAIS.AIS_TypeOfDist;
import jjAIS.AIS_KindOfDimension;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.AIS_Drawer;
import jjAIS.Bnd_Box;
import jcas.Standard_Integer;
import jjAIS.gp_Dir;
import jjAIS.TopoDS_Vertex;


public class AIS_LengthDimension extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_LengthDimension(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,double aVal,TCollection_ExtendedString aText) {
   AIS_LengthDimension_Create_1(aFirstFace,aSecondFace,aVal,aText);
}

private final native void AIS_LengthDimension_Create_1(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,double aVal,TCollection_ExtendedString aText);

public AIS_LengthDimension(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_LengthDimension_Create_2(aFirstFace,aSecondFace,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_LengthDimension_Create_2(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

public AIS_LengthDimension(TopoDS_Face Face,TopoDS_Edge Edge,double Val,TCollection_ExtendedString Text) {
   AIS_LengthDimension_Create_3(Face,Edge,Val,Text);
}

private final native void AIS_LengthDimension_Create_3(TopoDS_Face Face,TopoDS_Edge Edge,double Val,TCollection_ExtendedString Text);

public AIS_LengthDimension(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText) {
   AIS_LengthDimension_Create_4(aFShape,aSShape,aPlane,aVal,aText);
}

private final native void AIS_LengthDimension_Create_4(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText);

public AIS_LengthDimension(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,short aTypeDist,double anArrowSize) {
   AIS_LengthDimension_Create_5(aFShape,aSShape,aPlane,aVal,aText,aPosition,aSymbolPrs,aTypeDist,anArrowSize);
}

private final native void AIS_LengthDimension_Create_5(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,short aTypeDist,double anArrowSize);

native public final void SetFirstShape(TopoDS_Shape aFShape);
native public final void SetSecondShape(TopoDS_Shape aSShape);
native public  short KindOfDimension();
native public  boolean IsMovable();
native public final short TypeOfDist();
native public final void SetTypeOfDist(short aTypeDist);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_LengthDimension_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_LengthDimension_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public static void ComputeTwoEdgesLength(Prs3d_Presentation aPresentation,AIS_Drawer aDrawer,TCollection_ExtendedString aText,double ArrowSize,TopoDS_Edge FirstEdge,TopoDS_Edge SecondEdge,Geom_Plane Plane,boolean AutomaticPos,boolean IsSetBndBox,Bnd_Box BndBox,Standard_Integer ExtShape,Standard_Real Val,gp_Dir DirAttach,gp_Pnt Position,gp_Pnt FirstAttach,gp_Pnt SecondAttach,Standard_Short SymbolPrs);
native public static void ComputeOneEdgeOneVertexLength(Prs3d_Presentation aPresentation,AIS_Drawer aDrawer,TCollection_ExtendedString aText,double ArrowSize,TopoDS_Shape FirstShape,TopoDS_Shape SecondShape,Geom_Plane Plane,boolean AutomaticPos,boolean IsSetBndBox,Bnd_Box BndBox,Standard_Integer ExtShape,Standard_Real Val,gp_Dir DirAttach,gp_Pnt Position,gp_Pnt FirstAttach,gp_Pnt SecondAttach,Standard_Short SymbolPrs);
native public static void ComputeTwoVerticesLength(Prs3d_Presentation aPresentation,AIS_Drawer aDrawer,TCollection_ExtendedString aText,double ArrowSize,TopoDS_Vertex FirstVertex,TopoDS_Vertex SecondVertex,Geom_Plane Plane,boolean AutomaticPos,boolean IsSetBndBox,Bnd_Box BndBox,short TypeDist,Standard_Integer ExtShape,Standard_Real Val,gp_Dir DirAttach,gp_Pnt Position,gp_Pnt FirstAttach,gp_Pnt SecondAttach,Standard_Short SymbolPrs);
public AIS_LengthDimension() {
}




}
