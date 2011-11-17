

package jjAIS;

import jcas.Object;
import jjAIS.AIS_InteractiveContext;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.TCollection_AsciiString;
import jjAIS.Select3D_Projector;
import jjAIS.AIS_InteractiveObject;
import jjAIS.AIS_ClearMode;
import jcas.Standard_Short;
import jjAIS.TopAbs_ShapeEnum;
import jjAIS.TColStd_ListOfInteger;
import jjAIS.SelectMgr_Filter;
import jjAIS.SelectMgr_ListOfFilter;
import jjAIS.SelectMgr_OrFilter;
import jjAIS.AIS_StatusOfDetection;
import jjAIS.V3d_View;
import jjAIS.AIS_StatusOfPick;
import jjAIS.TColgp_Array1OfPnt2d;
import jjAIS.TopoDS_Shape;
import jjAIS.SelectMgr_EntityOwner;
import jjAIS.Standard_Transient;
import jjAIS.TColStd_MapOfTransient;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Real;
import jjAIS.StdSelect_ViewerSelector3d;


public class AIS_LocalContext extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_LocalContext() {
   AIS_LocalContext_Create_1();
}

private final native void AIS_LocalContext_Create_1();

public AIS_LocalContext(AIS_InteractiveContext aCtx,int anIndex,boolean LoadDisplayed,boolean AcceptStandardModes,boolean AcceptErase,boolean UseBothViewers) {
   AIS_LocalContext_Create_2(aCtx,anIndex,LoadDisplayed,AcceptStandardModes,AcceptErase,UseBothViewers);
}

private final native void AIS_LocalContext_Create_2(AIS_InteractiveContext aCtx,int anIndex,boolean LoadDisplayed,boolean AcceptStandardModes,boolean AcceptErase,boolean UseBothViewers);

final public void AcceptErase(boolean aStatus) {
    AIS_LocalContext_AcceptErase_1(aStatus);
}

private final native void AIS_LocalContext_AcceptErase_1(boolean aStatus);

final public boolean AcceptErase() {
   return AIS_LocalContext_AcceptErase_2();
}

private final native boolean AIS_LocalContext_AcceptErase_2();

native public final void SetContext(AIS_InteractiveContext aCtx);
native public final TCollection_AsciiString SelectionName();
native public final void Terminate(boolean updateviewer);
native public final boolean HasSameProjector(Select3D_Projector aPrj);
native public final void Reactivate();
native public final boolean Display(AIS_InteractiveObject anInteractive,int DisplayMode,boolean AllowShapeDecomposition,int ActivationMode);
native public final boolean Load(AIS_InteractiveObject anInteractive,boolean AllowShapeDecomposition,int ActivationMode);
native public final boolean Erase(AIS_InteractiveObject anInteractive);
native public final boolean Remove(AIS_InteractiveObject aSelectable);
native public final boolean ClearPrs(AIS_InteractiveObject anInteractive,int aMode);
native public final void SetShapeDecomposition(AIS_InteractiveObject aStoredObject,boolean aStatus);
native public final void Clear(short atype);
native public final void ActivateMode(AIS_InteractiveObject aSelectable,int aMode);
native public final void DeactivateMode(AIS_InteractiveObject aSelectable,int aMode);
native public final void Deactivate(AIS_InteractiveObject aSelectable);
native public final void ActivateStandardMode(short aType);
native public final void DeactivateStandardMode(short aType);
native public final TColStd_ListOfInteger StandardModes();
native public final void AddFilter(SelectMgr_Filter aFilter);
native public final void RemoveFilter(SelectMgr_Filter aFilter);
native public final SelectMgr_ListOfFilter ListOfFilter();
native public final SelectMgr_OrFilter Filter();
native public final void SetAutomaticHilight(boolean aStatus);
native public final boolean AutomaticHilight();
native public final short MoveTo(int Xpix,int Ypix,V3d_View aview);
native public final boolean HasNextDetected();
native public final int HilightNextDetected(V3d_View aView);
native public final int HilightPreviousDetected(V3d_View aView);
native public final boolean UnhilightLastDetected(V3d_View aView);
final public short Select(boolean updateviewer) {
   return AIS_LocalContext_Select_1(updateviewer);
}

private final native short AIS_LocalContext_Select_1(boolean updateviewer);

final public short ShiftSelect(boolean updateviewer) {
   return AIS_LocalContext_ShiftSelect_1(updateviewer);
}

private final native short AIS_LocalContext_ShiftSelect_1(boolean updateviewer);

final public short Select(int XPMin,int YPMin,int XPMax,int YPMax,V3d_View aView,boolean updateviewer) {
   return AIS_LocalContext_Select_2(XPMin,YPMin,XPMax,YPMax,aView,updateviewer);
}

private final native short AIS_LocalContext_Select_2(int XPMin,int YPMin,int XPMax,int YPMax,V3d_View aView,boolean updateviewer);

final public short ShiftSelect(int XPMin,int YPMin,int XPMax,int YPMax,V3d_View aView,boolean updateviewer) {
   return AIS_LocalContext_ShiftSelect_2(XPMin,YPMin,XPMax,YPMax,aView,updateviewer);
}

private final native short AIS_LocalContext_ShiftSelect_2(int XPMin,int YPMin,int XPMax,int YPMax,V3d_View aView,boolean updateviewer);

final public short Select(TColgp_Array1OfPnt2d Polyline,V3d_View aView,boolean updateviewer) {
   return AIS_LocalContext_Select_3(Polyline,aView,updateviewer);
}

private final native short AIS_LocalContext_Select_3(TColgp_Array1OfPnt2d Polyline,V3d_View aView,boolean updateviewer);

final public short ShiftSelect(TColgp_Array1OfPnt2d Polyline,V3d_View aView,boolean updateviewer) {
   return AIS_LocalContext_ShiftSelect_3(Polyline,aView,updateviewer);
}

private final native short AIS_LocalContext_ShiftSelect_3(TColgp_Array1OfPnt2d Polyline,V3d_View aView,boolean updateviewer);

native public final void HilightPicked(boolean updateviewer);
native public final void UnhilightPicked(boolean updateviewer);
final public void UpdateSelected(boolean updateviewer) {
    AIS_LocalContext_UpdateSelected_1(updateviewer);
}

private final native void AIS_LocalContext_UpdateSelected_1(boolean updateviewer);

final public void UpdateSelected(AIS_InteractiveObject anobj,boolean updateviewer) {
    AIS_LocalContext_UpdateSelected_2(anobj,updateviewer);
}

private final native void AIS_LocalContext_UpdateSelected_2(AIS_InteractiveObject anobj,boolean updateviewer);

native public final void SetSelected(AIS_InteractiveObject anobj,boolean updateviewer);
final public void AddOrRemoveSelected(AIS_InteractiveObject anobj,boolean updateviewer) {
    AIS_LocalContext_AddOrRemoveSelected_1(anobj,updateviewer);
}

private final native void AIS_LocalContext_AddOrRemoveSelected_1(AIS_InteractiveObject anobj,boolean updateviewer);

final public void AddOrRemoveSelected(TopoDS_Shape aShape,boolean updateviewer) {
    AIS_LocalContext_AddOrRemoveSelected_2(aShape,updateviewer);
}

private final native void AIS_LocalContext_AddOrRemoveSelected_2(TopoDS_Shape aShape,boolean updateviewer);

final public void AddOrRemoveSelected(SelectMgr_EntityOwner Ownr,boolean updateviewer) {
    AIS_LocalContext_AddOrRemoveSelected_3(Ownr,updateviewer);
}

private final native void AIS_LocalContext_AddOrRemoveSelected_3(SelectMgr_EntityOwner Ownr,boolean updateviewer);

native public final void ClearSelected(boolean updateviewer);
native public final boolean HasDetected();
native public final void InitDetected();
native public final boolean MoreDetected();
native public final void NextDetected();
native public final TopoDS_Shape DetectedCurrentShape();
native public final AIS_InteractiveObject DetectedCurrentObject();
native public final boolean HasDetectedShape();
native public final TopoDS_Shape DetectedShape();
native public final AIS_InteractiveObject DetectedInteractive();
native public final SelectMgr_EntityOwner DetectedOwner();
native public final void InitSelected();
native public final boolean MoreSelected();
native public final void NextSelected();
native public final boolean HasShape();
native public final TopoDS_Shape SelectedShape();
native public final SelectMgr_EntityOwner SelectedOwner();
final public boolean IsSelected(AIS_InteractiveObject aniobj) {
   return AIS_LocalContext_IsSelected_1(aniobj);
}

private final native boolean AIS_LocalContext_IsSelected_1(AIS_InteractiveObject aniobj);

final public boolean IsSelected(SelectMgr_EntityOwner anOwner) {
   return AIS_LocalContext_IsSelected_2(anOwner);
}

private final native boolean AIS_LocalContext_IsSelected_2(SelectMgr_EntityOwner anOwner);

native public final AIS_InteractiveObject SelectedInteractive();
native public final boolean HasApplicative();
native public final Standard_Transient SelectedApplicative();
native public final void SetDisplayPriority(AIS_InteractiveObject anObject,int Prior);
native public final int DisplayedObjects(TColStd_MapOfTransient theMapToFill);
native public final boolean IsIn(AIS_InteractiveObject anObject);
final public boolean IsDisplayed(AIS_InteractiveObject anObject) {
   return AIS_LocalContext_IsDisplayed_1(anObject);
}

private final native boolean AIS_LocalContext_IsDisplayed_1(AIS_InteractiveObject anObject);

final public boolean IsDisplayed(AIS_InteractiveObject anObject,int aMode) {
   return AIS_LocalContext_IsDisplayed_2(anObject,aMode);
}

private final native boolean AIS_LocalContext_IsDisplayed_2(AIS_InteractiveObject anObject,int aMode);

native public final TColStd_ListOfInteger SelectionModes(AIS_InteractiveObject anObject);
native public final void SubIntensityOn(AIS_InteractiveObject anObject);
native public final void SubIntensityOff(AIS_InteractiveObject anObject);
final public void Hilight(AIS_InteractiveObject anObject) {
    AIS_LocalContext_Hilight_1(anObject);
}

private final native void AIS_LocalContext_Hilight_1(AIS_InteractiveObject anObject);

final public void Hilight(AIS_InteractiveObject anObject,short aCol) {
    AIS_LocalContext_Hilight_2(anObject,aCol);
}

private final native void AIS_LocalContext_Hilight_2(AIS_InteractiveObject anObject,short aCol);

final public void Unhilight(AIS_InteractiveObject anObject) {
    AIS_LocalContext_Unhilight_1(anObject);
}

private final native void AIS_LocalContext_Unhilight_1(AIS_InteractiveObject anObject);

final public boolean IsHilighted(AIS_InteractiveObject anObject) {
   return AIS_LocalContext_IsHilighted_1(anObject);
}

private final native boolean AIS_LocalContext_IsHilighted_1(AIS_InteractiveObject anObject);

final public boolean IsHilighted(AIS_InteractiveObject anObject,Standard_Boolean WithColor,Standard_Short HiCol) {
   return AIS_LocalContext_IsHilighted_2(anObject,WithColor,HiCol);
}

private final native boolean AIS_LocalContext_IsHilighted_2(AIS_InteractiveObject anObject,Standard_Boolean WithColor,Standard_Short HiCol);

final public void SetSensitivity(double aPrecision) {
    AIS_LocalContext_SetSensitivity_1(aPrecision);
}

private final native void AIS_LocalContext_SetSensitivity_1(double aPrecision);

final public void SetSensitivity(int aPrecision) {
    AIS_LocalContext_SetSensitivity_2(aPrecision);
}

private final native void AIS_LocalContext_SetSensitivity_2(int aPrecision);

native public final boolean BeginImmediateDraw();
native public final boolean ImmediateAdd(AIS_InteractiveObject anIObj,int aMode);
native public final boolean ImmediateRemove(AIS_InteractiveObject anIObj,int aMode);
native public final boolean EndImmediateDraw(V3d_View aView,boolean DoubleBuf);
native public final boolean IsImmediateModeOn();
native public final void UpdateConversion();
native public final void UpdateSort();
native public final void LoadContextObjects();
native public final void UnloadContextObjects();
native public final void DisplayAreas(V3d_View aviou);
native public final void ClearAreas(V3d_View aView);
native public final void DisplaySensitive(V3d_View aView);
native public final void ClearSensitive(V3d_View aView);
native public final StdSelect_ViewerSelector3d MainSelector();
native public final SelectMgr_EntityOwner FindSelectedOwnerFromIO(AIS_InteractiveObject anIObj);
native public final SelectMgr_EntityOwner FindSelectedOwnerFromShape(TopoDS_Shape aShape);



}
