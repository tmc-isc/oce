

package jjAIS;

import jcas.Object;
import jcas.Standard_Integer;
import jjAIS.AIS_LocalContext;


public class AIS_DataMapNodeOfDataMapOfILC extends jjAIS.TCollection_MapNode {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final int Key();
native public final AIS_LocalContext Value();
public AIS_DataMapNodeOfDataMapOfILC() {
}




}
