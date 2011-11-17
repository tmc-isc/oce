

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jcas.Standard_Real;
import jjAIS.TCollection_ExtendedString;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.AIS_KindOfDimension;
import jcas.Standard_Boolean;
import jjAIS.gp_Trsf;


public class AIS_OffsetDimension extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_OffsetDimension(TopoDS_Shape FistShape,TopoDS_Shape SecondShape,double aVal,TCollection_ExtendedString aText) {
   AIS_OffsetDimension_Create_0(FistShape,SecondShape,aVal,aText);
}

private final native void AIS_OffsetDimension_Create_0(TopoDS_Shape FistShape,TopoDS_Shape SecondShape,double aVal,TCollection_ExtendedString aText);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_OffsetDimension_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_OffsetDimension_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public  short KindOfDimension();
native public  boolean IsMovable();
native public final void SetRelativePos(gp_Trsf aTrsf);
public AIS_OffsetDimension() {
}




}
