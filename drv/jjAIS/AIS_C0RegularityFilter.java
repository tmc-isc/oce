

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jcas.Standard_Boolean;
import jjAIS.TopAbs_ShapeEnum;
import jcas.Standard_Short;
import jjAIS.SelectMgr_EntityOwner;


public class AIS_C0RegularityFilter extends jjAIS.SelectMgr_Filter {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_C0RegularityFilter(TopoDS_Shape aShape) {
   AIS_C0RegularityFilter_Create_0(aShape);
}

private final native void AIS_C0RegularityFilter_Create_0(TopoDS_Shape aShape);

native public  boolean ActsOn(short aType);
native public  boolean IsOk(SelectMgr_EntityOwner EO);
public AIS_C0RegularityFilter() {
}




}
