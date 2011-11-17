

package jjAIS;

import jcas.Object;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Short;
import jcas.Standard_Boolean;
import jjAIS.SelectMgr_EntityOwner;


public class AIS_TypeFilter extends jjAIS.SelectMgr_Filter {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_TypeFilter(short aGivenKind) {
   AIS_TypeFilter_Create_0(aGivenKind);
}

private final native void AIS_TypeFilter_Create_0(short aGivenKind);

native public  boolean IsOk(SelectMgr_EntityOwner anobj);
public AIS_TypeFilter() {
}




}
