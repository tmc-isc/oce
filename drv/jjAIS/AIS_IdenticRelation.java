

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_IdenticRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_IdenticRelation(TopoDS_Shape FirstShape,TopoDS_Shape SecondShape,Geom_Plane aPlane) {
   AIS_IdenticRelation_Create_0(FirstShape,SecondShape,aPlane);
}

private final native void AIS_IdenticRelation_Create_0(TopoDS_Shape FirstShape,TopoDS_Shape SecondShape,Geom_Plane aPlane);

native public  boolean IsMovable();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_IdenticRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_IdenticRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_IdenticRelation() {
}




}
