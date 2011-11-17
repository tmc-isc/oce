

package jjAIS;

import jcas.Object;
import jjAIS.PrsMgr_TypeOfPresentation3d;
import jcas.Standard_Short;
import jjAIS.AIS_InteractiveObject;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.AIS_SequenceOfInteractive;
import jjAIS.PrsMgr_PresentationManager2d;
import jjAIS.Graphic2d_GraphicObject;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_MultipleConnectedInteractive extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_MultipleConnectedInteractive(short aTypeOfPresentation3d) {
   AIS_MultipleConnectedInteractive_Create_0(aTypeOfPresentation3d);
}

private final native void AIS_MultipleConnectedInteractive_Create_0(short aTypeOfPresentation3d);

native public final void Connect(AIS_InteractiveObject anotherIObj);
native public  short Type();
native public  int Signature();
native public final boolean HasConnection();
native public final AIS_SequenceOfInteractive ConnectedTo();
native public final void Disconnect(AIS_InteractiveObject anotherIObj);
native public final void DisconnectAll();
 public void Compute(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode) {
    AIS_MultipleConnectedInteractive_Compute_2(aPresentationManager,aPresentation,aMode);
}

private  native void AIS_MultipleConnectedInteractive_Compute_2(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_MultipleConnectedInteractive_Compute_3(aProjector,aTrsf,aPresentation);
}

private  native void AIS_MultipleConnectedInteractive_Compute_3(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

 public void Compute(Prs3d_Projector aProjector,Prs3d_Presentation aPresentation) {
    AIS_MultipleConnectedInteractive_Compute_4(aProjector,aPresentation);
}

private  native void AIS_MultipleConnectedInteractive_Compute_4(Prs3d_Projector aProjector,Prs3d_Presentation aPresentation);

public AIS_MultipleConnectedInteractive() {
}




}
