

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jjAIS.TCollection_AsciiString;
import jcas.Standard_Boolean;
import jcas.Standard_Real;
import jcas.Standard_CString;


public class AIS_TexturedShape extends jjAIS.AIS_Shape {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_TexturedShape(TopoDS_Shape shap) {
   AIS_TexturedShape_Create_0(shap);
}

private final native void AIS_TexturedShape_Create_0(TopoDS_Shape shap);

native public  void SetTextureFileName(TCollection_AsciiString TextureFileName);
native public  void SetTextureRepeat(boolean RepeatYN,double URepeat,double VRepeat);
native public  void SetTextureOrigin(boolean SetTextureOriginYN,double UOrigin,double VOrigin);
native public  void SetTextureScale(boolean SetTextureScaleYN,double ScaleU,double ScaleV);
 public void ShowTriangles(boolean ShowTrianglesYN) {
    AIS_TexturedShape_ShowTriangles_1(ShowTrianglesYN);
}

private  native void AIS_TexturedShape_ShowTriangles_1(boolean ShowTrianglesYN);

native public final void SetTextureMapOn();
native public final void SetTextureMapOff();
native public final void EnableTextureModulate();
native public final void DisableTextureModulate();
native public final void UpdateAttributes();
native public final boolean TextureMapState();
native public final double URepeat();
native public final boolean TextureRepeat();
native public final double Deflection();
native public final Standard_CString TextureFile();
native public final double VRepeat();
final public boolean ShowTriangles() {
   return AIS_TexturedShape_ShowTriangles_2();
}

private final native boolean AIS_TexturedShape_ShowTriangles_2();

native public final double TextureUOrigin();
native public final double TextureVOrigin();
native public final double TextureScaleU();
native public final double TextureScaleV();
native public final boolean TextureScale();
native public final boolean TextureOrigin();
native public final boolean TextureModulate();
public AIS_TexturedShape() {
}




}
