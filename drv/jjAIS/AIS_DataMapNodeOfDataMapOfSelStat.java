

package jjAIS;

import jcas.Object;
import jjAIS.SelectMgr_SelectableObject;
import jjAIS.AIS_LocalStatus;


public class AIS_DataMapNodeOfDataMapOfSelStat extends jjAIS.TCollection_MapNode {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final SelectMgr_SelectableObject Key();
native public final AIS_LocalStatus Value();
public AIS_DataMapNodeOfDataMapOfSelStat() {
}




}
