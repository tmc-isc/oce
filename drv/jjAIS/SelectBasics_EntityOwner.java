

package jjAIS;

import jcas.Object;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.TopLoc_Location;


public class SelectBasics_EntityOwner extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public final void Set(int aPriority);
native public final int Priority();
native public  boolean HasLocation();
native public  void SetLocation(TopLoc_Location aLoc);
native public  void ResetLocation();
native public  TopLoc_Location Location();
public SelectBasics_EntityOwner() {
}




}
