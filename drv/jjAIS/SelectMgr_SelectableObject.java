

package jjAIS;

import jcas.Object;
import jcas.Standard_Integer;
import jjAIS.SelectMgr_Selection;
import jcas.Standard_Boolean;
import jjAIS.PrsMgr_PresentationManager3d;
import jjAIS.SelectMgr_SequenceOfOwner;
import jjAIS.Quantity_NameOfColor;
import jjAIS.SelectMgr_EntityOwner;
import jcas.Standard_Short;
import jjAIS.Prs3d_Presentation;


public class SelectMgr_SelectableObject extends jjAIS.PrsMgr_PresentableObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public  int NbPossibleSelection();
final public void UpdateSelection() {
    SelectMgr_SelectableObject_UpdateSelection_1();
}

private final native void SelectMgr_SelectableObject_UpdateSelection_1();

final public void UpdateSelection(int aMode) {
    SelectMgr_SelectableObject_UpdateSelection_2(aMode);
}

private final native void SelectMgr_SelectableObject_UpdateSelection_2(int aMode);

native public final void AddSelection(SelectMgr_Selection aSelection,int aMode);
native public final void ClearSelections(boolean update);
native public final SelectMgr_Selection Selection(int aMode);
native public final boolean HasSelection(int aMode);
native public final void Init();
native public final boolean More();
native public final void Next();
native public final SelectMgr_Selection CurrentSelection();
native public final void ResetLocation();
 public void UpdateLocation() {
    SelectMgr_SelectableObject_UpdateLocation_1();
}

private  native void SelectMgr_SelectableObject_UpdateLocation_1();

native public  void HilightSelected(PrsMgr_PresentationManager3d PM,SelectMgr_SequenceOfOwner Seq);
native public  void ClearSelected();
native public  void HilightOwnerWithColor(PrsMgr_PresentationManager3d thePM,short theColor,SelectMgr_EntityOwner theOwner);
native public  boolean IsAutoHilight();
native public  void SetAutoHilight(boolean newAutoHilight);
native public final Prs3d_Presentation GetHilightPresentation(PrsMgr_PresentationManager3d TheMgr);
native public final Prs3d_Presentation GetSelectPresentation(PrsMgr_PresentationManager3d TheMgr);
public SelectMgr_SelectableObject() {
}




}
