

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.AIS_Drawer;
import jcas.Standard_Real;
import jjAIS.TopoDS_Edge;
import jcas.Standard_Boolean;
import jjAIS.Bnd_Box;
import jjAIS.gp_Pnt;
import jjAIS.DsgPrs_ArrowSide;
import jcas.Standard_Short;
import jjAIS.TopoDS_Vertex;
import jjAIS.AIS_TypeOfDist;


public class AIS_EqualDistanceRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_EqualDistanceRelation(TopoDS_Shape aShape1,TopoDS_Shape aShape2,TopoDS_Shape aShape3,TopoDS_Shape aShape4,Geom_Plane aPlane) {
   AIS_EqualDistanceRelation_Create_0(aShape1,aShape2,aShape3,aShape4,aPlane);
}

private final native void AIS_EqualDistanceRelation_Create_0(TopoDS_Shape aShape1,TopoDS_Shape aShape2,TopoDS_Shape aShape3,TopoDS_Shape aShape4,Geom_Plane aPlane);

native public final void SetShape3(TopoDS_Shape aShape);
native public final TopoDS_Shape Shape3();
native public final void SetShape4(TopoDS_Shape aShape);
native public final TopoDS_Shape Shape4();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_EqualDistanceRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_EqualDistanceRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public static void ComputeTwoEdgesLength(Prs3d_Presentation aPresentation,AIS_Drawer aDrawer,double ArrowSize,TopoDS_Edge FirstEdge,TopoDS_Edge SecondEdge,Geom_Plane Plane,boolean AutomaticPos,boolean IsSetBndBox,Bnd_Box BndBox,gp_Pnt Position,gp_Pnt FirstAttach,gp_Pnt SecondAttach,gp_Pnt FirstExtreme,gp_Pnt SecondExtreme,Standard_Short SymbolPrs);
native public static void ComputeTwoVerticesLength(Prs3d_Presentation aPresentation,AIS_Drawer aDrawer,double ArrowSize,TopoDS_Vertex FirstVertex,TopoDS_Vertex SecondVertex,Geom_Plane Plane,boolean AutomaticPos,boolean IsSetBndBox,Bnd_Box BndBox,short TypeDist,gp_Pnt Position,gp_Pnt FirstAttach,gp_Pnt SecondAttach,gp_Pnt FirstExtreme,gp_Pnt SecondExtreme,Standard_Short SymbolPrs);
native public static void ComputeOneEdgeOneVertexLength(Prs3d_Presentation aPresentation,AIS_Drawer aDrawer,double ArrowSize,TopoDS_Shape FirstShape,TopoDS_Shape SecondShape,Geom_Plane Plane,boolean AutomaticPos,boolean IsSetBndBox,Bnd_Box BndBox,gp_Pnt Position,gp_Pnt FirstAttach,gp_Pnt SecondAttach,gp_Pnt FirstExtreme,gp_Pnt SecondExtreme,Standard_Short SymbolPrs);
public AIS_EqualDistanceRelation() {
}




}
