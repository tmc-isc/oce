

package jjAIS;

import jcas.Object;
import jjAIS.AIS_Relation;


public class AIS_SequenceNodeOfSequenceOfDimension extends jjAIS.TCollection_SeqNode {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final AIS_Relation Value();
public AIS_SequenceNodeOfSequenceOfDimension() {
}




}
