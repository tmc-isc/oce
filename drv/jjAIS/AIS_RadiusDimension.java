

package jjAIS;

import jcas.Object;
import jjAIS.TopoDS_Shape;
import jcas.Standard_Real;
import jjAIS.TCollection_ExtendedString;
import jjAIS.gp_Pnt;
import jjAIS.DsgPrs_ArrowSide;
import jcas.Standard_Short;
import jjAIS.AIS_KindOfDimension;
import jcas.Standard_Boolean;
import jjAIS.Prs3d_Projector;
import jjAIS.Geom_Transformation;
import jjAIS.Prs3d_Presentation;


public class AIS_RadiusDimension extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_RadiusDimension(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText) {
   AIS_RadiusDimension_Create_1(aShape,aVal,aText);
}

private final native void AIS_RadiusDimension_Create_1(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText);

public AIS_RadiusDimension(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_RadiusDimension_Create_2(aShape,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_RadiusDimension_Create_2(TopoDS_Shape aShape,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

native public final void SetFirstShape(TopoDS_Shape aFShape);
native public  short KindOfDimension();
native public  boolean IsMovable();
native public final boolean DrawFromCenter();
native public final void SetDrawFromCenter(boolean drawfromcenter);
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_RadiusDimension_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_RadiusDimension_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_RadiusDimension() {
}




}
