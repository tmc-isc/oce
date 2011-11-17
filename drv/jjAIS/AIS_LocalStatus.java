

package jjAIS;

import jcas.Object;
import jcas.Standard_Boolean;
import jcas.Standard_Integer;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.TColStd_ListOfInteger;
import jjAIS.Standard_Transient;


public class AIS_LocalStatus extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_LocalStatus(boolean IsTemporary,boolean Decompose,int DisplayMode,int SelectionMode,int HilightMode,boolean SubIntensity,short TheHiCol) {
   AIS_LocalStatus_Create_0(IsTemporary,Decompose,DisplayMode,SelectionMode,HilightMode,SubIntensity,TheHiCol);
}

private final native void AIS_LocalStatus_Create_0(boolean IsTemporary,boolean Decompose,int DisplayMode,int SelectionMode,int HilightMode,boolean SubIntensity,short TheHiCol);

native public final boolean Decomposed();
native public final boolean IsTemporary();
native public final int DisplayMode();
native public final TColStd_ListOfInteger SelectionModes();
native public final boolean IsActivated(int aSelMode);
native public final int HilightMode();
native public final boolean IsSubIntensityOn();
native public final short HilightColor();
native public final void SetDecomposition(boolean astatus);
native public final void SetTemporary(boolean astatus);
native public final void SetDisplayMode(int aMode);
native public final void SetFirstDisplay(boolean aStatus);
native public final boolean IsFirstDisplay();
native public final void AddSelectionMode(int aMode);
native public final void RemoveSelectionMode(int aMode);
native public final void ClearSelectionModes();
native public final boolean IsSelModeIn(int aMode);
native public final void SetHilightMode(int aMode);
native public final void SetHilightColor(short aHiCol);
native public final void SubIntensityOn();
native public final void SubIntensityOff();
native public final void SetPreviousState(Standard_Transient aStatus);
native public final Standard_Transient PreviousState();
public AIS_LocalStatus() {
}




}
