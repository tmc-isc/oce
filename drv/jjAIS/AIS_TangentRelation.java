

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.Geom_Plane;
import jcas.Standard_Integer;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_TangentRelation extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_TangentRelation(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,int anExternRef) {
   AIS_TangentRelation_Create_0(aFShape,aSShape,aPlane,anExternRef);
}

private final native void AIS_TangentRelation_Create_0(TopoDS_Shape aFShape,TopoDS_Shape aSShape,Geom_Plane aPlane,int anExternRef);

native public final int ExternRef();
native public final void SetExternRef(int aRef);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_TangentRelation_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_TangentRelation_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_TangentRelation() {
}




}
