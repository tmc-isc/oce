

package jjAIS;

import jcas.Object;
import jjAIS.Geom_Point;
import jcas.Standard_Integer;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jjAIS.Aspect_TypeOfMarker;
import jjAIS.TopoDS_Vertex;


public class AIS_Point extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Point(Geom_Point aComponent) {
   AIS_Point_Create_0(aComponent);
}

private final native void AIS_Point_Create_0(Geom_Point aComponent);

native public  int Signature();
native public  short Type();
native public final Geom_Point Component();
native public final void SetComponent(Geom_Point aComponent);
native public final boolean AcceptDisplayMode(int aMode);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_Point_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_Point_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

final public void SetColor(short aColor) {
    AIS_Point_SetColor_1(aColor);
}

private final native void AIS_Point_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_Point_SetColor_2(aColor);
}

private final native void AIS_Point_SetColor_2(Quantity_Color aColor);

native public final void UnsetColor();
native public final void SetMarker(short aType);
native public final void UnsetMarker();
native public final boolean HasMarker();
native public final TopoDS_Vertex Vertex();
public AIS_Point() {
}




}
