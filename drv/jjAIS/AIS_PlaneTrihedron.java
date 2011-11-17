

package jjAIS;

import jcas.Object;
import jjAIS.Geom_Plane;
import jjAIS.AIS_Line;
import jjAIS.AIS_Point;
import jcas.Standard_Real;
import jcas.Standard_Boolean;
import jcas.Standard_Integer;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.AIS_KindOfInteractive;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jjAIS.TCollection_AsciiString;


public class AIS_PlaneTrihedron extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_PlaneTrihedron(Geom_Plane aPlane) {
   AIS_PlaneTrihedron_Create_0(aPlane);
}

private final native void AIS_PlaneTrihedron_Create_0(Geom_Plane aPlane);

native public final Geom_Plane Component();
native public final void SetComponent(Geom_Plane aPlane);
native public final AIS_Line XAxis();
native public final AIS_Line YAxis();
native public final AIS_Point Position();
native public final void SetLength(double theLength);
native public final double GetLength();
native public final boolean AcceptDisplayMode(int aMode);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_PlaneTrihedron_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_PlaneTrihedron_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public  int Signature();
native public  short Type();
final public void SetColor(short aColor) {
    AIS_PlaneTrihedron_SetColor_1(aColor);
}

private final native void AIS_PlaneTrihedron_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_PlaneTrihedron_SetColor_2(aColor);
}

private final native void AIS_PlaneTrihedron_SetColor_2(Quantity_Color aColor);

native public final void SetXLabel(TCollection_AsciiString aLabel);
native public final void SetYLabel(TCollection_AsciiString aLabel);
public AIS_PlaneTrihedron() {
}




}
