

package jjAIS;

import jcas.Object;
import jjAIS.Geom_Line;
import jjAIS.Geom_Point;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jcas.Standard_Integer;
import jjAIS.AIS_KindOfInteractive;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jcas.Standard_Real;


public class AIS_Line extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Line(Geom_Line aLine) {
   AIS_Line_Create_1(aLine);
}

private final native void AIS_Line_Create_1(Geom_Line aLine);

public AIS_Line(Geom_Point aStartPoint,Geom_Point aEndPoint) {
   AIS_Line_Create_2(aStartPoint,aEndPoint);
}

private final native void AIS_Line_Create_2(Geom_Point aStartPoint,Geom_Point aEndPoint);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_Line_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_Line_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public  int Signature();
native public  short Type();
native public final Geom_Line Line();
native public final void Points(Geom_Point PStart,Geom_Point PEnd);
native public final void SetLine(Geom_Line L);
native public final void SetPoints(Geom_Point P1,Geom_Point P2);
final public void SetColor(short aColor) {
    AIS_Line_SetColor_1(aColor);
}

private final native void AIS_Line_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_Line_SetColor_2(aColor);
}

private final native void AIS_Line_SetColor_2(Quantity_Color aColor);

native public final void SetWidth(double aValue);
native public final void UnsetColor();
native public final void UnsetWidth();
public AIS_Line() {
}




}
