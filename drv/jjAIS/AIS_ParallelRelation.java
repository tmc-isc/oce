

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jjAIS.gp_Pnt;
import jjAIS.DsgPrs_ArrowSide;
import jcas.Standard_Real;
import jcas.Standard_Short;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_ParallelRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_ParallelRelation(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane) {
   AIS_ParallelRelation_Create_1(aFShape,aSShape,aPlane);
}

private final native void AIS_ParallelRelation_Create_1(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane);

public AIS_ParallelRelation(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_ParallelRelation_Create_2(aFShape,aSShape,aPlane,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_ParallelRelation_Create_2(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

native public  boolean IsMovable();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_ParallelRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_ParallelRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_ParallelRelation() {
}




}
