

package jjAIS;

import jcas.Object;
import jjAIS.Quantity_NameOfColor;
import jcas.Standard_Short;
import jjAIS.Quantity_Color;
import jjAIS.AIS_KindOfInteractive;
import jjAIS.AIS_KindOfDimension;
import jcas.Standard_Boolean;
import jjAIS.TopoDS_Shape;
import jcas.Standard_Real;
import jjAIS.Geom_Plane;
import jjAIS.gp_Pnt;
import jjAIS.TCollection_ExtendedString;
import jjAIS.DsgPrs_ArrowSide;
import jcas.Standard_Integer;


public class AIS_Relation extends jjAIS.AIS_InteractiveObject {

 static {
    System.loadLibrary("jjAIS");
 }
            
final public void SetColor(short aColor) {
    AIS_Relation_SetColor_1(aColor);
}

private final native void AIS_Relation_SetColor_1(short aColor);

final public void SetColor(Quantity_Color aColor) {
    AIS_Relation_SetColor_2(aColor);
}

private final native void AIS_Relation_SetColor_2(Quantity_Color aColor);

native public final void UnsetColor();
native public  short Type();
native public  short KindOfDimension();
native public  boolean IsMovable();
native public final TopoDS_Shape FirstShape();
native public  void SetFirstShape(TopoDS_Shape aFShape);
native public final TopoDS_Shape SecondShape();
native public  void SetSecondShape(TopoDS_Shape aSShape);
native public final void SetBndBox(double Xmin,double Ymin,double Zmin,double Xmax,double Ymax,double Zmax);
native public final void UnsetBndBox();
native public final Geom_Plane Plane();
native public final void SetPlane(Geom_Plane aPlane);
native public final double Value();
native public final void SetValue(double aVal);
native public final gp_Pnt Position();
native public final void SetPosition(gp_Pnt aPosition);
native public final TCollection_ExtendedString Text();
native public final void SetText(TCollection_ExtendedString aText);
native public final double ArrowSize();
native public final void SetArrowSize(double anArrowSize);
native public final short SymbolPrs();
native public final void SetSymbolPrs(short aSymbolPrs);
native public final void SetExtShape(int aIndex);
native public final int ExtShape();
native public  boolean AcceptDisplayMode(int aMode);
native public final void SetAutomaticPosition(boolean aStatus);
native public final boolean AutomaticPosition();
public AIS_Relation() {
}




}
