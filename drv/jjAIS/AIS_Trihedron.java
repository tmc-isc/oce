

package jjAIS;

import jcas.Object;
import jjAIS.Geom_Axis2Placement;
import jcas.Standard_Boolean;
import jcas.Standard_Real;
import jjAIS.AIS_Axis;
import jjAIS.AIS_Point;
import jjAIS.AIS_Plane;
import jjAIS.AIS_InteractiveContext;
import jcas.Standard_Integer;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.AIS_KindOfInteractive;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jjAIS.TColgp_Array1OfPnt;


public class AIS_Trihedron extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Trihedron(Geom_Axis2Placement aComponent) {
   AIS_Trihedron_Create_0(aComponent);
}

private final native void AIS_Trihedron_Create_0(Geom_Axis2Placement aComponent);

native public final Geom_Axis2Placement Component();
native public final void SetComponent(Geom_Axis2Placement aComponent);
native public final boolean HasOwnSize();
native public final void SetSize(double aValue);
native public final void UnsetSize();
native public final double Size();
native public final AIS_Axis XAxis();
native public final AIS_Axis YAxis();
native public final AIS_Axis Axis();
native public final AIS_Point Position();
native public final AIS_Plane XYPlane();
native public final AIS_Plane XZPlane();
native public final AIS_Plane YZPlane();
native public  void SetContext(AIS_InteractiveContext aCtx);
native public final boolean AcceptDisplayMode(int aMode);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_Trihedron_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_Trihedron_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public  int Signature();
native public  short Type();
final public void SetColor(short aColor) {
    AIS_Trihedron_SetColor_1(aColor);
}

private final native void AIS_Trihedron_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_Trihedron_SetColor_2(aColor);
}

private final native void AIS_Trihedron_SetColor_2(Quantity_Color aColor);

native public final void SetTextColor(short aColor);
native public final boolean HasTextColor();
native public final short TextColor();
native public final void SetArrowColor(short aColor);
native public final boolean HasArrowColor();
native public final short ArrowColor();
native public final void ExtremityPoints(TColgp_Array1OfPnt TheExtrem);
native public final void UnsetColor();
native public final void UnsetWidth();
public AIS_Trihedron() {
}




}
