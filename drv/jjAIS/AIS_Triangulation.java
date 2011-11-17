

package jjAIS;

import jcas.Object;
import jjAIS.Poly_Triangulation;
import jjAIS.TColStd_HArray1OfInteger;


public class AIS_Triangulation extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Triangulation(Poly_Triangulation aTriangulation) {
   AIS_Triangulation_Create_0(aTriangulation);
}

private final native void AIS_Triangulation_Create_0(Poly_Triangulation aTriangulation);

native public final void SetColors(TColStd_HArray1OfInteger aColor);
native public final TColStd_HArray1OfInteger GetColors();
native public final void SetTriangulation(Poly_Triangulation aTriangulation);
native public final Poly_Triangulation GetTriangulation();
public AIS_Triangulation() {
}




}
