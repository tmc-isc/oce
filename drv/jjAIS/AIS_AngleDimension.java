

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Edge;
import jjAIS.Geom_Plane;
import jcas.Standard_Real;
import jjAIS.TCollection_ExtendedString;
import jjAIS.gp_Pnt;
import jjAIS.DsgPrs_ArrowSide;
import jcas.Standard_Short;
import jjAIS.TopoDS_Face;
import jjAIS.gp_Ax1;
import jjAIS.TopoDS_Shape;
import jjAIS.AIS_KindOfDimension;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_AngleDimension extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_AngleDimension(TopoDS_Edge aFirstEdge,TopoDS_Edge aSecondEdge,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText) {
   AIS_AngleDimension_Create_1(aFirstEdge,aSecondEdge,aPlane,aVal,aText);
}

private final native void AIS_AngleDimension_Create_1(TopoDS_Edge aFirstEdge,TopoDS_Edge aSecondEdge,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText);

public AIS_AngleDimension(TopoDS_Edge aFirstEdge,TopoDS_Edge aSecondEdge,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_AngleDimension_Create_2(aFirstEdge,aSecondEdge,aPlane,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_AngleDimension_Create_2(TopoDS_Edge aFirstEdge,TopoDS_Edge aSecondEdge,Geom_Plane aPlane,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

public AIS_AngleDimension(TopoDS_Face aCone,double aVal,TCollection_ExtendedString aText) {
   AIS_AngleDimension_Create_3(aCone,aVal,aText);
}

private final native void AIS_AngleDimension_Create_3(TopoDS_Face aCone,double aVal,TCollection_ExtendedString aText);

public AIS_AngleDimension(TopoDS_Face aCone,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_AngleDimension_Create_4(aCone,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_AngleDimension_Create_4(TopoDS_Face aCone,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

public AIS_AngleDimension(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,gp_Ax1 anAxis,double aVal,TCollection_ExtendedString aText) {
   AIS_AngleDimension_Create_5(aFirstFace,aSecondFace,anAxis,aVal,aText);
}

private final native void AIS_AngleDimension_Create_5(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,gp_Ax1 anAxis,double aVal,TCollection_ExtendedString aText);

public AIS_AngleDimension(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,gp_Ax1 anAxis,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_AngleDimension_Create_6(aFirstFace,aSecondFace,anAxis,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_AngleDimension_Create_6(TopoDS_Face aFirstFace,TopoDS_Face aSecondFace,gp_Ax1 anAxis,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

public AIS_AngleDimension(TopoDS_Face aFFace,TopoDS_Face aSFace,double aVal,TCollection_ExtendedString aText) {
   AIS_AngleDimension_Create_7(aFFace,aSFace,aVal,aText);
}

private final native void AIS_AngleDimension_Create_7(TopoDS_Face aFFace,TopoDS_Face aSFace,double aVal,TCollection_ExtendedString aText);

public AIS_AngleDimension(TopoDS_Face aFFace,TopoDS_Face aSFace,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_AngleDimension_Create_8(aFFace,aSFace,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_AngleDimension_Create_8(TopoDS_Face aFFace,TopoDS_Face aSFace,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

native public final gp_Ax1 Axis();
native public final void SetAxis(gp_Ax1 anAxis);
native public final void SetConeFace(TopoDS_Face aConeFace);
native public final void SetFirstShape(TopoDS_Shape aFShape);
native public final void SetSecondShape(TopoDS_Shape aSShape);
native public  short KindOfDimension();
native public  boolean IsMovable();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_AngleDimension_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_AngleDimension_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_AngleDimension() {
}




}
