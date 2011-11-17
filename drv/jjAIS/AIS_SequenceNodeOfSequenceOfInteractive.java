

package jjAIS;

import jcas.Object;
import jjAIS.AIS_InteractiveObject;


public class AIS_SequenceNodeOfSequenceOfInteractive extends jjAIS.TCollection_SeqNode {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final AIS_InteractiveObject Value();
public AIS_SequenceNodeOfSequenceOfInteractive() {
}




}
