

package jjAIS;

import jcas.Object;
import jjAIS.PrsMgr_TypeOfPresentation3d;
import jjAIS.gp_Pnt;
import jcas.Standard_Short;
import jcas.Standard_Integer;
import jjAIS.TColStd_ListOfInteger;
import jjAIS.TopLoc_Location;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Presentation;


public class PrsMgr_PresentableObject extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final short TypeOfPresentation3d();
native public final gp_Pnt GetTransformPersistencePoint();
native public final void SetTypeOfPresentation(short aType);
final public void SetToUpdate(int aMode) {
    PrsMgr_PresentableObject_SetToUpdate_1(aMode);
}

private final native void PrsMgr_PresentableObject_SetToUpdate_1(int aMode);

final public void SetToUpdate() {
    PrsMgr_PresentableObject_SetToUpdate_2();
}

private final native void PrsMgr_PresentableObject_SetToUpdate_2();

native public final void ToBeUpdated(TColStd_ListOfInteger ListOfMode);
native public  void SetLocation(TopLoc_Location aLoc);
native public final boolean HasLocation();
native public final TopLoc_Location Location();
native public  void ResetLocation();
 public void UpdateLocation() {
    PrsMgr_PresentableObject_UpdateLocation_1();
}

private  native void PrsMgr_PresentableObject_UpdateLocation_1();

 public void UpdateLocation(Prs3d_Presentation P) {
    PrsMgr_PresentableObject_UpdateLocation_2(P);
}

private  native void PrsMgr_PresentableObject_UpdateLocation_2(Prs3d_Presentation P);

public PrsMgr_PresentableObject() {
}




}
