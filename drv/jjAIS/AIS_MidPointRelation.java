

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_MidPointRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_MidPointRelation(TopoDS_Shape aSymmTool,TopoDS_Shape FirstShape,TopoDS_Shape SecondShape,Geom_Plane aPlane) {
   AIS_MidPointRelation_Create_0(aSymmTool,FirstShape,SecondShape,aPlane);
}

private final native void AIS_MidPointRelation_Create_0(TopoDS_Shape aSymmTool,TopoDS_Shape FirstShape,TopoDS_Shape SecondShape,Geom_Plane aPlane);

native public  boolean IsMovable();
native public final void SetTool(TopoDS_Shape aMidPointTool);
native public final TopoDS_Shape GetTool();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_MidPointRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_MidPointRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_MidPointRelation() {
}




}
