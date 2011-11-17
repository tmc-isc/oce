

package jjAIS;

import jcas.Object;
import jjAIS.AIS_InteractiveObject;
import jjAIS.AIS_GlobalStatus;


public class AIS_DataMapNodeOfDataMapOfIOStatus extends jjAIS.TCollection_MapNode {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final AIS_InteractiveObject Key();
native public final AIS_GlobalStatus Value();
public AIS_DataMapNodeOfDataMapOfIOStatus() {
}




}
