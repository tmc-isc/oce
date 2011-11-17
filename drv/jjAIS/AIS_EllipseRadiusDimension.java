

package jjAIS;

import jcas.Object;
import jjAIS.AIS_KindOfDimension;
import jcas.Standard_Boolean;


public class AIS_EllipseRadiusDimension extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public  short KindOfDimension();
native public  boolean IsMovable();
native public final void ComputeGeometry();
public AIS_EllipseRadiusDimension() {
}




}
