

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_ConcentricRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_ConcentricRelation(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane) {
   AIS_ConcentricRelation_Create_0(aFShape,aSShape,aPlane);
}

private final native void AIS_ConcentricRelation_Create_0(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_ConcentricRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_ConcentricRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_ConcentricRelation() {
}




}
