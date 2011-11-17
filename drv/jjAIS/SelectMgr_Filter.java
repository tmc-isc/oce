

package jjAIS;

import jcas.Object;
import jcas.Standard_Boolean;
import jjAIS.SelectMgr_EntityOwner;
import jjAIS.TopAbs_ShapeEnum;
import jcas.Standard_Short;


public class SelectMgr_Filter extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public  boolean IsOk(SelectMgr_EntityOwner anObj);
native public  boolean ActsOn(short aStandardMode);
public SelectMgr_Filter() {
}




}
