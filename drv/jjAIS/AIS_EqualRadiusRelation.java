

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Edge;
import jjAIS.Geom_Plane;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_EqualRadiusRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_EqualRadiusRelation(TopoDS_Edge aFirstEdge,TopoDS_Edge aSecondEdge,Geom_Plane aPlane) {
   AIS_EqualRadiusRelation_Create_0(aFirstEdge,aSecondEdge,aPlane);
}

private final native void AIS_EqualRadiusRelation_Create_0(TopoDS_Edge aFirstEdge,TopoDS_Edge aSecondEdge,Geom_Plane aPlane);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_EqualRadiusRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_EqualRadiusRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_EqualRadiusRelation() {
}




}
