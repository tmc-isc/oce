

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.PrsMgr_PresentationManager2d;
import jjAIS.Graphic2d_GraphicObject;


public class AIS_MultipleConnectedShape extends jjAIS.AIS_MultipleConnectedInteractive {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_MultipleConnectedShape(TopoDS_Shape aShape) {
   AIS_MultipleConnectedShape_Create_0(aShape);
}

private final native void AIS_MultipleConnectedShape_Create_0(TopoDS_Shape aShape);

native public  short Type();
native public  int Signature();
native public  boolean AcceptShapeDecomposition();
native public final void Set(TopoDS_Shape ashap);
native public final TopoDS_Shape Shape();
 public void Compute(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode) {
    AIS_MultipleConnectedShape_Compute_5(aPresentationManager,aPresentation,aMode);
}

private  native void AIS_MultipleConnectedShape_Compute_5(PrsMgr_PresentationManager2d aPresentationManager,Graphic2d_GraphicObject aPresentation,int aMode);

public AIS_MultipleConnectedShape() {
}




}
