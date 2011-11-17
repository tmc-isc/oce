

package jjAIS;

import jcas.Object;
import jjAIS.PrsMgr_TypeOfPresentation3d;
import jcas.Standard_Short;
import jjAIS.AIS_Shape;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.AIS_InteractiveObject;
import jjAIS.TopLoc_Location;
import jjAIS.PrsMgr_PresentationManager3d;
import jjAIS.Prs3d_Presentation;
import jjAIS.PrsMgr_PresentationManager2d;
import jjAIS.Graphic2d_GraphicObject;
import jjAIS.TopoDS_Shape;


public class AIS_ConnectedShape extends jjAIS.AIS_ConnectedInteractive {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_ConnectedShape(short aTypeOfPresentation) {
   AIS_ConnectedShape_Create_1(aTypeOfPresentation);
}

private final native void AIS_ConnectedShape_Create_1(short aTypeOfPresentation);

public AIS_ConnectedShape(AIS_Shape aInteractiveShape,short aTypeOfPresentation) {
   AIS_ConnectedShape_Create_2(aInteractiveShape,aTypeOfPresentation);
}

private final native void AIS_ConnectedShape_Create_2(AIS_Shape aInteractiveShape,short aTypeOfPresentation);

public AIS_ConnectedShape(AIS_ConnectedShape aConnectedShape,short aTypeOfPresentation) {
   AIS_ConnectedShape_Create_3(aConnectedShape,aTypeOfPresentation);
}

private final native void AIS_ConnectedShape_Create_3(AIS_ConnectedShape aConnectedShape,short aTypeOfPresentation);

native public  short Type();
native public  int Signature();
native public  boolean AcceptShapeDecomposition();
 public void Connect(AIS_InteractiveObject anotherIObj) {
    AIS_ConnectedShape_Connect_1(anotherIObj);
}

private  native void AIS_ConnectedShape_Connect_1(AIS_InteractiveObject anotherIObj);

 public void Connect(AIS_InteractiveObject anotherIobj,TopLoc_Location aLocation) {
    AIS_ConnectedShape_Connect_2(anotherIobj,aLocation);
}

private  native void AIS_ConnectedShape_Connect_2(AIS_InteractiveObject anotherIobj,TopLoc_Location aLocation);

 public void Compute(PrsMgr_PresentationManager3d aPresentationManager,Prs3d_Presentation aPresentation,int aMode) {
    AIS_ConnectedShape_Compute_3(aPresentationManager,aPresentation,aMode);
}

private  native void AIS_ConnectedShape_Compute_3(PrsMgr_PresentationManager3d aPresentationManager,Prs3d_Presentation aPresentation,int aMode);

 public void Compute(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode) {
    AIS_ConnectedShape_Compute_4(aPresentationManager,aPresentation,aMode);
}

private  native void AIS_ConnectedShape_Compute_4(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode);

native public final TopoDS_Shape Shape();
public AIS_ConnectedShape() {
}




}
