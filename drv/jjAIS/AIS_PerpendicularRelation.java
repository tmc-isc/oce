

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_PerpendicularRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_PerpendicularRelation(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane) {
   AIS_PerpendicularRelation_Create_1(aFShape,aSShape,aPlane);
}

private final native void AIS_PerpendicularRelation_Create_1(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane);

public AIS_PerpendicularRelation(TopoDS_Shape aFShape,TopoDS_Shape aSShape) {
   AIS_PerpendicularRelation_Create_2(aFShape,aSShape);
}

private final native void AIS_PerpendicularRelation_Create_2(TopoDS_Shape aFShape,TopoDS_Shape aSShape);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_PerpendicularRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_PerpendicularRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_PerpendicularRelation() {
}




}
