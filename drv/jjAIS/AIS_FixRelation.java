

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jjAIS.TopoDS_Wire;
import jjAIS.gp_Pnt;
import jcas.Standard_Real;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_FixRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_FixRelation(TopoDS_Shape aShape,Geom_Plane aPlane,TopoDS_Wire aWire) {
   AIS_FixRelation_Create_1(aShape,aPlane,aWire);
}

private final native void AIS_FixRelation_Create_1(TopoDS_Shape aShape,Geom_Plane aPlane,TopoDS_Wire aWire);

public AIS_FixRelation(TopoDS_Shape aShape,Geom_Plane aPlane,TopoDS_Wire aWire,gp_Pnt aPosition,double anArrowSize) {
   AIS_FixRelation_Create_2(aShape,aPlane,aWire,aPosition,anArrowSize);
}

private final native void AIS_FixRelation_Create_2(TopoDS_Shape aShape,Geom_Plane aPlane,TopoDS_Wire aWire,gp_Pnt aPosition,double anArrowSize);

public AIS_FixRelation(TopoDS_Shape aShape,Geom_Plane aPlane) {
   AIS_FixRelation_Create_3(aShape,aPlane);
}

private final native void AIS_FixRelation_Create_3(TopoDS_Shape aShape,Geom_Plane aPlane);

public AIS_FixRelation(TopoDS_Shape aShape,Geom_Plane aPlane,gp_Pnt aPosition,double anArrowSize) {
   AIS_FixRelation_Create_4(aShape,aPlane,aPosition,anArrowSize);
}

private final native void AIS_FixRelation_Create_4(TopoDS_Shape aShape,Geom_Plane aPlane,gp_Pnt aPosition,double anArrowSize);

native public final TopoDS_Wire Wire();
native public final void SetWire(TopoDS_Wire aWire);
native public  boolean IsMovable();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_FixRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_FixRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_FixRelation() {
}




}
