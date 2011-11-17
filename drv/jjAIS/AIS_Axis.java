

package jjAIS;

import jcas.Object;
import jjAIS.Geom_Line;
import jjAIS.Geom_Axis2Placement;
import jjAIS.AIS_TypeOfAxis;
import jcas.Standard_Short;
import jjAIS.Geom_Axis1Placement;
import jcas.Standard_Boolean;
import jcas.Standard_Integer;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.AIS_KindOfInteractive;
import jjAIS.Quantity_NameOfColor;
import jjAIS.Quantity_Color;
import jcas.Standard_Real;


public class AIS_Axis extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Axis(Geom_Line aComponent) {
   AIS_Axis_Create_1(aComponent);
}

private final native void AIS_Axis_Create_1(Geom_Line aComponent);

public AIS_Axis(Geom_Axis2Placement aComponent,short anAxisType) {
   AIS_Axis_Create_2(aComponent,anAxisType);
}

private final native void AIS_Axis_Create_2(Geom_Axis2Placement aComponent,short anAxisType);

public AIS_Axis(Geom_Axis1Placement anAxis) {
   AIS_Axis_Create_3(anAxis);
}

private final native void AIS_Axis_Create_3(Geom_Axis1Placement anAxis);

native public final Geom_Line Component();
native public final void SetComponent(Geom_Line aComponent);
native public final Geom_Axis2Placement Axis2Placement();
native public final void SetAxis2Placement(Geom_Axis2Placement aComponent,short anAxisType);
native public final void SetAxis1Placement(Geom_Axis1Placement anAxis);
native public final short TypeOfAxis();
native public final void SetTypeOfAxis(short aTypeAxis);
native public final boolean IsXYZAxis();
native public final boolean AcceptDisplayMode(int aMode);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_Axis_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_Axis_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public  int Signature();
native public  short Type();
final public void SetColor(short aColor) {
    AIS_Axis_SetColor_1(aColor);
}

private final native void AIS_Axis_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_Axis_SetColor_2(aColor);
}

private final native void AIS_Axis_SetColor_2(Quantity_Color aColor);

native public final void SetWidth(double aValue);
native public final void UnsetColor();
native public final void UnsetWidth();
public AIS_Axis() {
}




}
