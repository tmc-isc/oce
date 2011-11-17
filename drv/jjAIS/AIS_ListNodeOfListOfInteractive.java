

package jjAIS;

import jcas.Object;
import jjAIS.AIS_InteractiveObject;


public class AIS_ListNodeOfListOfInteractive extends jjAIS.TCollection_MapNode {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final AIS_InteractiveObject Value();
public AIS_ListNodeOfListOfInteractive() {
}




}
