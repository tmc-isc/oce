

package jjAIS;

import jcas.Object;
import jjAIS.Geom_Plane;
import jcas.Standard_Boolean;
import jjAIS.gp_Pnt;
import jjAIS.Geom_Axis2Placement;
import jjAIS.AIS_TypeOfPlane;
import jcas.Standard_Short;
import jcas.Standard_Real;
import jcas.Standard_Integer;
import jjAIS.AIS_KindOfInteractive;
import jjAIS.AIS_InteractiveContext;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.SelectMgr_Selection;
import jjAIS.Quantity_NameOfColor;
import jjAIS.Quantity_Color;


public class AIS_Plane extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Plane(Geom_Plane aComponent,boolean aCurrentMode) {
   AIS_Plane_Create_1(aComponent,aCurrentMode);
}

private final native void AIS_Plane_Create_1(Geom_Plane aComponent,boolean aCurrentMode);

public AIS_Plane(Geom_Plane aComponent,gp_Pnt aCenter,boolean aCurrentMode) {
   AIS_Plane_Create_2(aComponent,aCenter,aCurrentMode);
}

private final native void AIS_Plane_Create_2(Geom_Plane aComponent,gp_Pnt aCenter,boolean aCurrentMode);

public AIS_Plane(Geom_Plane aComponent,gp_Pnt aCenter,gp_Pnt aPmin,gp_Pnt aPmax,boolean aCurrentMode) {
   AIS_Plane_Create_3(aComponent,aCenter,aPmin,aPmax,aCurrentMode);
}

private final native void AIS_Plane_Create_3(Geom_Plane aComponent,gp_Pnt aCenter,gp_Pnt aPmin,gp_Pnt aPmax,boolean aCurrentMode);

public AIS_Plane(Geom_Axis2Placement aComponent,short aPlaneType,boolean aCurrentMode) {
   AIS_Plane_Create_4(aComponent,aPlaneType,aCurrentMode);
}

private final native void AIS_Plane_Create_4(Geom_Axis2Placement aComponent,short aPlaneType,boolean aCurrentMode);

final public void SetSize(double aValue) {
    AIS_Plane_SetSize_1(aValue);
}

private final native void AIS_Plane_SetSize_1(double aValue);

final public void SetSize(double Xval,double YVal) {
    AIS_Plane_SetSize_2(Xval,YVal);
}

private final native void AIS_Plane_SetSize_2(double Xval,double YVal);

native public final void UnsetSize();
native public final boolean Size(Standard_Real X,Standard_Real Y);
native public final boolean HasOwnSize();
native public  int Signature();
native public  short Type();
native public final Geom_Plane Component();
native public final void SetComponent(Geom_Plane aComponent);
native public final boolean PlaneAttributes(Geom_Plane aComponent,gp_Pnt aCenter,gp_Pnt aPmin,gp_Pnt aPmax);
native public final void SetPlaneAttributes(Geom_Plane aComponent,gp_Pnt aCenter,gp_Pnt aPmin,gp_Pnt aPmax);
native public final gp_Pnt Center();
native public final void SetCenter(gp_Pnt aCenter);
native public final void SetAxis2Placement(Geom_Axis2Placement aComponent,short aPlaneType);
native public final Geom_Axis2Placement Axis2Placement();
native public final short TypeOfPlane();
native public final boolean IsXYZPlane();
native public final boolean CurrentMode();
native public final void SetCurrentMode(boolean aCurrentMode);
native public  boolean AcceptDisplayMode(int aMode);
native public  void SetContext(AIS_InteractiveContext aCtx);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_Plane_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_Plane_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

native public  void ComputeSelection(SelectMgr_Selection aSelection,int aMode);
final public void SetColor(short aColor) {
    AIS_Plane_SetColor_1(aColor);
}

private final native void AIS_Plane_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_Plane_SetColor_2(aColor);
}

private final native void AIS_Plane_SetColor_2(Quantity_Color aColor);

native public final void UnsetColor();
public AIS_Plane() {
}




}
