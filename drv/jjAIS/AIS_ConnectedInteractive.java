

package jjAIS;

import jcas.Object;
import jjAIS.PrsMgr_TypeOfPresentation3d;
import jcas.Standard_Short;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Integer;
import jjAIS.AIS_InteractiveObject;
import jjAIS.TopLoc_Location;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.PrsMgr_PresentationManager2d;
import jjAIS.Graphic2d_GraphicObject;
import jjAIS.SelectMgr_Selection;


public class AIS_ConnectedInteractive extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_ConnectedInteractive(short aTypeOfPresentation3d) {
   AIS_ConnectedInteractive_Create_0(aTypeOfPresentation3d);
}

private final native void AIS_ConnectedInteractive_Create_0(short aTypeOfPresentation3d);

native public  short Type();
native public  int Signature();
 public void Connect(AIS_InteractiveObject anotherIObj) {
    AIS_ConnectedInteractive_Connect_1(anotherIObj);
}

private  native void AIS_ConnectedInteractive_Connect_1(AIS_InteractiveObject anotherIObj);

 public void Connect(AIS_InteractiveObject anotherIobj,TopLoc_Location aLocation) {
    AIS_ConnectedInteractive_Connect_2(anotherIobj,aLocation);
}

private  native void AIS_ConnectedInteractive_Connect_2(AIS_InteractiveObject anotherIobj,TopLoc_Location aLocation);

native public final boolean HasConnection();
native public final AIS_InteractiveObject ConnectedTo();
native public final void Disconnect();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_ConnectedInteractive_Compute_2(aProjector,aTrsf,aPresentation);
}

private  native void AIS_ConnectedInteractive_Compute_2(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

 public void Compute(Prs3d_Projector aProjector,Prs3d_Presentation aPresentation) {
    AIS_ConnectedInteractive_Compute_3(aProjector,aPresentation);
}

private  native void AIS_ConnectedInteractive_Compute_3(Prs3d_Projector aProjector,Prs3d_Presentation aPresentation);

 public void Compute(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode) {
    AIS_ConnectedInteractive_Compute_4(aPresentationManager,aPresentation,aMode);
}

private  native void AIS_ConnectedInteractive_Compute_4(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode);

native public  boolean AcceptShapeDecomposition();
 public void UpdateLocation() {
    AIS_ConnectedInteractive_UpdateLocation_1();
}

private  native void AIS_ConnectedInteractive_UpdateLocation_1();

 public void UpdateLocation(SelectMgr_Selection aSel) {
    AIS_ConnectedInteractive_UpdateLocation_2(aSel);
}

private  native void AIS_ConnectedInteractive_UpdateLocation_2(SelectMgr_Selection aSel);

public AIS_ConnectedInteractive() {
}




}
