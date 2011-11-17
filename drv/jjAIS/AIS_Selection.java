

package jjAIS;

import jcas.Object;
import jcas.Standard_CString;
import jcas.Standard_Boolean;
import jjAIS.AIS_SelectStatus;
import jjAIS.Standard_Transient;
import jcas.Standard_Integer;


public class AIS_Selection extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Selection(Standard_CString aName) {
   AIS_Selection_Create_0(aName);
}

private final native void AIS_Selection_Create_0(Standard_CString aName);

native public static void Remove(Standard_CString aName);
native public static boolean Find(Standard_CString aName);
native public static boolean CreateSelection(Standard_CString aName);
native public static AIS_Selection Selection(Standard_CString aName);
native public static boolean SetCurrentSelection(Standard_CString aName);
native public static AIS_Selection CurrentSelection();
static public void Select() {
    AIS_Selection_Select_1();
}

private static native void AIS_Selection_Select_1();

static public short Select(Standard_Transient anObject) {
   return AIS_Selection_Select_2(anObject);
}

private static native short AIS_Selection_Select_2(Standard_Transient anObject);

native public static short AddSelect(Standard_Transient anObject);
native public static void ClearAndSelect(Standard_Transient anObject);
native public static boolean IsSelected(Standard_Transient anObject);
native public static int Extent();
native public static Standard_Transient Single();
native public final void Init();
native public final boolean More();
native public final void Next();
native public final Standard_Transient Value();
native public final int NbStored();
native public static int Index(Standard_CString aName);
public AIS_Selection() {
}




}
