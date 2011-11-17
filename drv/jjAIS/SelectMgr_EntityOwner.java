

package jjAIS;

import jcas.Object;
import jcas.Standard_Integer;
import jjAIS.SelectMgr_SelectableObject;
import jcas.Standard_Boolean;
import jjAIS.PrsMgr_PresentationManager;
import jjAIS.PrsMgr_PresentationManager3d;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.TopLoc_Location;


public class SelectMgr_EntityOwner extends jjAIS.SelectBasics_EntityOwner {

 static {
    System.loadLibrary("jjAIS");
 }
            
public SelectMgr_EntityOwner(int aPriority) {
   SelectMgr_EntityOwner_Create_1(aPriority);
}

private final native void SelectMgr_EntityOwner_Create_1(int aPriority);

public SelectMgr_EntityOwner(SelectMgr_SelectableObject aSO,int aPriority) {
   SelectMgr_EntityOwner_Create_2(aSO,aPriority);
}

private final native void SelectMgr_EntityOwner_Create_2(SelectMgr_SelectableObject aSO,int aPriority);

native public final boolean HasSelectable();
native public final SelectMgr_SelectableObject Selectable();
native public final void Set(SelectMgr_SelectableObject aSO);
 public void Hilight() {
    SelectMgr_EntityOwner_Hilight_1();
}

private  native void SelectMgr_EntityOwner_Hilight_1();

native public  boolean IsHilighted(PrsMgr_PresentationManager aPM,int aMode);
 public void Hilight(PrsMgr_PresentationManager aPM,int aMode) {
    SelectMgr_EntityOwner_Hilight_2(aPM,aMode);
}

private  native void SelectMgr_EntityOwner_Hilight_2(PrsMgr_PresentationManager aPM,int aMode);

native public  void HilightWithColor(PrsMgr_PresentationManager3d aPM,short aColor,int aMode);
native public  void Unhilight(PrsMgr_PresentationManager aPM,int aMode);
native public  void Clear(PrsMgr_PresentationManager aPM,int aMode);
native public  boolean HasLocation();
native public  void SetLocation(TopLoc_Location aLoc);
native public  void ResetLocation();
native public  TopLoc_Location Location();
final public void State(int aStatus) {
    SelectMgr_EntityOwner_State_1(aStatus);
}

private final native void SelectMgr_EntityOwner_State_1(int aStatus);

final public int State() {
   return SelectMgr_EntityOwner_State_2();
}

private final native int SelectMgr_EntityOwner_State_2();

native public  boolean IsAutoHilight();
native public  boolean IsForcedHilight();
public SelectMgr_EntityOwner() {
}




}
