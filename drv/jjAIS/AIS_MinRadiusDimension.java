

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jcas.Standard_Real;
import jjAIS.TCollection_ExtendedString;
import jjAIS.gp_Pnt;
import jjAIS.DsgPrs_ArrowSide;
import jcas.Standard_Short;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_MinRadiusDimension extends jjAIS.AIS_EllipseRadiusDimension {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_MinRadiusDimension(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText) {
   AIS_MinRadiusDimension_Create_1(aShape,aVal,aText);
}

private final native void AIS_MinRadiusDimension_Create_1(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText);

public AIS_MinRadiusDimension(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_MinRadiusDimension_Create_2(aShape,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_MinRadiusDimension_Create_2(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_MinRadiusDimension_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_MinRadiusDimension_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_MinRadiusDimension() {
}




}
