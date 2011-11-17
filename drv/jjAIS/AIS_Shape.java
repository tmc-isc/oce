

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jcas.Standard_Integer;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Boolean;
import jcas.Standard_Real;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jjAIS.Graphic3d_NameOfMaterial;
import jjAIS.Graphic3d_MaterialAspect;
import jjAIS.Bnd_Box;
import jjAIS.TopAbs_ShapeEnum;
import jjAIS.Prs3d_Drawer;


public class AIS_Shape extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Shape(TopoDS_Shape shap) {
   AIS_Shape_Create_0(shap);
}

private final native void AIS_Shape_Create_0(TopoDS_Shape shap);

native public  int Signature();
native public  short Type();
native public  boolean AcceptShapeDecomposition();
native public final void Set(TopoDS_Shape ashap);
native public final TopoDS_Shape Shape();
final public boolean SetOwnDeviationCoefficient() {
   return AIS_Shape_SetOwnDeviationCoefficient_1();
}

private final native boolean AIS_Shape_SetOwnDeviationCoefficient_1();

final public boolean SetOwnHLRDeviationCoefficient() {
   return AIS_Shape_SetOwnHLRDeviationCoefficient_1();
}

private final native boolean AIS_Shape_SetOwnHLRDeviationCoefficient_1();

final public boolean SetOwnDeviationAngle() {
   return AIS_Shape_SetOwnDeviationAngle_1();
}

private final native boolean AIS_Shape_SetOwnDeviationAngle_1();

final public boolean SetOwnHLRDeviationAngle() {
   return AIS_Shape_SetOwnHLRDeviationAngle_1();
}

private final native boolean AIS_Shape_SetOwnHLRDeviationAngle_1();

final public void SetOwnDeviationCoefficient(double aCoefficient) {
    AIS_Shape_SetOwnDeviationCoefficient_2(aCoefficient);
}

private final native void AIS_Shape_SetOwnDeviationCoefficient_2(double aCoefficient);

final public void SetOwnHLRDeviationCoefficient(double aCoefficient) {
    AIS_Shape_SetOwnHLRDeviationCoefficient_2(aCoefficient);
}

private final native void AIS_Shape_SetOwnHLRDeviationCoefficient_2(double aCoefficient);

native public final void SetAngleAndDeviation(double anAngle);
native public final double UserAngle();
final public void SetOwnDeviationAngle(double anAngle) {
    AIS_Shape_SetOwnDeviationAngle_2(anAngle);
}

private final native void AIS_Shape_SetOwnDeviationAngle_2(double anAngle);

native public final void SetHLRAngleAndDeviation(double anAngle);
final public void SetOwnHLRDeviationAngle(double anAngle) {
    AIS_Shape_SetOwnHLRDeviationAngle_2(anAngle);
}

private final native void AIS_Shape_SetOwnHLRDeviationAngle_2(double anAngle);

native public final boolean OwnDeviationCoefficient(Standard_Real aCoefficient,Standard_Real aPreviousCoefficient);
native public final boolean OwnHLRDeviationCoefficient(Standard_Real aCoefficient,Standard_Real aPreviousCoefficient);
native public final boolean OwnDeviationAngle(Standard_Real anAngle,Standard_Real aPreviousAngle);
native public final boolean OwnHLRDeviationAngle(Standard_Real anAngle,Standard_Real aPreviousAngle);
 public void SetColor(short aColor) {
    AIS_Shape_SetColor_1(aColor);
}

private  native void AIS_Shape_SetColor_1(short aColor);

 public void SetColor(Quantity_Color aColor) {
    AIS_Shape_SetColor_2(aColor);
}

private  native void AIS_Shape_SetColor_2(Quantity_Color aColor);

native public  void UnsetColor();
native public  void SetWidth(double aValue);
native public  void UnsetWidth();
 public void SetMaterial(short aName) {
    AIS_Shape_SetMaterial_1(aName);
}

private  native void AIS_Shape_SetMaterial_1(short aName);

 public void SetMaterial(Graphic3d_MaterialAspect aName) {
    AIS_Shape_SetMaterial_2(aName);
}

private  native void AIS_Shape_SetMaterial_2(Graphic3d_MaterialAspect aName);

native public  void UnsetMaterial();
native public  void SetTransparency(double aValue);
native public  void UnsetTransparency();
native public  Bnd_Box BoundingBox();
 public short Color() {
   return AIS_Shape_Color_1();
}

private  native short AIS_Shape_Color_1();

 public void Color(Quantity_Color aColor) {
    AIS_Shape_Color_2(aColor);
}

private  native void AIS_Shape_Color_2(Quantity_Color aColor);

native public  short Material();
native public  double Transparency();
native public static short SelectionType(int aDecompositionMode);
native public static int SelectionMode(short aShapeType);
native public static double GetDeflection(TopoDS_Shape aShape,Prs3d_Drawer aDrawer);
public AIS_Shape() {
}




}
