

package jjAIS;

import jcas.Object;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jcas.Standard_Real;
import jcas.Standard_Boolean;
import jjAIS.SelectMgr_EntityOwner;


public class AIS_AttributeFilter extends jjAIS.SelectMgr_Filter {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_AttributeFilter() {
   AIS_AttributeFilter_Create_1();
}

private final native void AIS_AttributeFilter_Create_1();

public AIS_AttributeFilter(short aCol) {
   AIS_AttributeFilter_Create_2(aCol);
}

private final native void AIS_AttributeFilter_Create_2(short aCol);

public AIS_AttributeFilter(double aWidth) {
   AIS_AttributeFilter_Create_3(aWidth);
}

private final native void AIS_AttributeFilter_Create_3(double aWidth);

native public final boolean HasColor();
native public final boolean HasWidth();
native public final void SetColor(short aCol);
native public final void SetWidth(double aWidth);
native public final void UnsetColor();
native public final void UnsetWidth();
native public  boolean IsOk(SelectMgr_EntityOwner anObj);



}
