

package jjAIS;

import jcas.Object;
import jjAIS.Geom_Circle;
import jcas.Standard_Real;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jcas.Standard_Integer;
import jjAIS.AIS_KindOfInteractive;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;


public class AIS_Circle extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Circle(Geom_Circle aCircle) {
   AIS_Circle_Create_1(aCircle);
}

private final native void AIS_Circle_Create_1(Geom_Circle aCircle);

public AIS_Circle(Geom_Circle aCircle,double aUStart,double aUEnd,boolean aSens) {
   AIS_Circle_Create_2(aCircle,aUStart,aUEnd,aSens);
}

private final native void AIS_Circle_Create_2(Geom_Circle aCircle,double aUStart,double aUEnd,boolean aSens);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_Circle_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_Circle_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public  int Signature();
native public  short Type();
native public final Geom_Circle Circle();
native public final void Parameters(Standard_Real u1,Standard_Real u2);
native public final void SetCircle(Geom_Circle aCircle);
native public final void SetFirstParam(double u);
native public final void SetLastParam(double u);
final public void SetColor(short aColor) {
    AIS_Circle_SetColor_1(aColor);
}

private final native void AIS_Circle_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_Circle_SetColor_2(aColor);
}

private final native void AIS_Circle_SetColor_2(Quantity_Color aColor);

native public final void SetWidth(double aValue);
native public final void UnsetColor();
native public final void UnsetWidth();
public AIS_Circle() {
}




}
