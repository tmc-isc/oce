

package jjAIS;

import jcas.Object;
import jjAIS.AIS_DisplayStatus;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.TColStd_ListOfInteger;


public class AIS_GlobalStatus extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_GlobalStatus() {
   AIS_GlobalStatus_Create_1();
}

private final native void AIS_GlobalStatus_Create_1();

public AIS_GlobalStatus(short aStat,int aDispMode,int aSelMode,boolean ishilighted,short TheHiCol,int aLayerIndex) {
   AIS_GlobalStatus_Create_2(aStat,aDispMode,aSelMode,ishilighted,TheHiCol,aLayerIndex);
}

private final native void AIS_GlobalStatus_Create_2(short aStat,int aDispMode,int aSelMode,boolean ishilighted,short TheHiCol,int aLayerIndex);

native public final void SetGraphicStatus(short aStat);
native public final void AddDisplayMode(int aMode);
native public final void AddSelectionMode(int aMode);
native public final void SetLayerIndex(int AnIndex);
native public final void SetHilightStatus(boolean aStat);
native public final void SetHilightColor(short aHiCol);
native public final boolean IsSubIntensityOn();
native public final void SubIntensityOn();
native public final void SubIntensityOff();
native public final void RemoveDisplayMode(int aMode);
native public final void RemoveSelectionMode(int aMode);
native public final void ClearSelectionModes();
native public final short GraphicStatus();
native public final TColStd_ListOfInteger DisplayedModes();
native public final TColStd_ListOfInteger SelectionModes();
native public final boolean IsHilighted();
native public final short HilightColor();
native public final boolean IsDModeIn(int aMode);
native public final boolean IsSModeIn(int aMode);



}
