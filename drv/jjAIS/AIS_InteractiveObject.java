

package jjAIS;

import jcas.Object;
import jjAIS.AIS_KindOfInteractive;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
import jjAIS.Aspect_TypeOfFacingModel;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Real;
import jjAIS.AIS_InteractiveContext;
import jjAIS.Standard_Transient;
import jjAIS.TColStd_ListOfTransient;
import jjAIS.Graphic3d_NameOfMaterial;
import jjAIS.Graphic3d_MaterialAspect;
import jjAIS.AIS_Drawer;
import jjAIS.Aspect_TypeOfDegenerateModel;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;
import jjAIS.Prs3d_BasicAspect;


public class AIS_InteractiveObject extends jjAIS.SelectMgr_SelectableObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
native public  short Type();
native public  int Signature();
native public  boolean AcceptShapeDecomposition();
native public final void SetCurrentFacingModel(short aModel);
native public final short CurrentFacingModel();
 public void SetColor(Quantity_Color aColor) {
    AIS_InteractiveObject_SetColor_1(aColor);
}

private  native void AIS_InteractiveObject_SetColor_1(Quantity_Color aColor);

 public void SetColor(short aColor) {
    AIS_InteractiveObject_SetColor_2(aColor);
}

private  native void AIS_InteractiveObject_SetColor_2(short aColor);

native public  void UnsetColor();
native public  void SetWidth(double aValue);
native public  void UnsetWidth();
native public  boolean AcceptDisplayMode(int aMode);
native public  int DefaultDisplayMode();
native public final void Redisplay(boolean AllModes);
native public final void SetInfiniteState(boolean aFlag);
native public final boolean IsInfinite();
native public final boolean HasInteractiveContext();
native public final AIS_InteractiveContext GetContext();
native public  void SetContext(AIS_InteractiveContext aCtx);
native public final boolean HasOwner();
native public final Standard_Transient GetOwner();
native public final void SetOwner(Standard_Transient ApplicativeEntity);
native public final void ClearOwner();
native public final boolean HasUsers();
native public final TColStd_ListOfTransient Users();
native public final void AddUser(Standard_Transient aUser);
native public final void ClearUsers();
native public final boolean HasDisplayMode();
native public final void SetDisplayMode(int aMode);
native public final void UnsetDisplayMode();
native public final int DisplayMode();
native public final boolean HasSelectionMode();
native public final int SelectionMode();
native public final void SetSelectionMode(int aMode);
native public final void UnsetSelectionMode();
native public final int SelectionPriority();
native public final void SetSelectionPriority(int aPriority);
native public final void UnsetSelectionPriority();
native public final boolean HasSelectionPriority();
native public final boolean HasHilightMode();
native public final int HilightMode();
native public final void SetHilightMode(int anIndex);
native public final void UnsetHilightMode();
native public final boolean HasColor();
 public short Color() {
   return AIS_InteractiveObject_Color_1();
}

private  native short AIS_InteractiveObject_Color_1();

 public void Color(Quantity_Color aColor) {
    AIS_InteractiveObject_Color_2(aColor);
}

private  native void AIS_InteractiveObject_Color_2(Quantity_Color aColor);

native public final boolean HasWidth();
native public final double Width();
native public final boolean HasMaterial();
native public  short Material();
 public void SetMaterial(short aName) {
    AIS_InteractiveObject_SetMaterial_1(aName);
}

private  native void AIS_InteractiveObject_SetMaterial_1(short aName);

 public void SetMaterial(Graphic3d_MaterialAspect aName) {
    AIS_InteractiveObject_SetMaterial_2(aName);
}

private  native void AIS_InteractiveObject_SetMaterial_2(Graphic3d_MaterialAspect aName);

native public  void UnsetMaterial();
native public  void SetTransparency(double aValue);
native public final boolean IsTransparent();
native public  double Transparency();
native public  void UnsetTransparency();
native public  void SetAttributes(AIS_Drawer aDrawer);
native public final AIS_Drawer Attributes();
native public  void UnsetAttributes();
final public void State(int theState) {
    AIS_InteractiveObject_State_1(theState);
}

private final native void AIS_InteractiveObject_State_1(int theState);

final public int State() {
   return AIS_InteractiveObject_State_2();
}

private final native int AIS_InteractiveObject_State_2();

native public  void SetDegenerateModel(short aModel,double aRatio);
native public  short DegenerateModel(Standard_Real aRatio);
native public final void SetTransformation(Geom_Transformation aTranformation,boolean postConcatenate,boolean updateSelection);
native public final void UnsetTransformation();
native public final Geom_Transformation Transformation();
native public final boolean HasTransformation();
native public final boolean HasPresentation();
native public final Prs3d_Presentation Presentation();
native public final void SetAspect(Prs3d_BasicAspect anAspect,boolean globalChange);
native public  void SetPolygonOffsets(int aMode,double aFactor,double aUnits);
native public  boolean HasPolygonOffsets();
native public  void PolygonOffsets(Standard_Integer aMode,Standard_Real aFactor,Standard_Real aUnits);
public AIS_InteractiveObject() {
}




}
