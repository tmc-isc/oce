

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


public class AIS_Chamf3dDimension extends jjAIS.AIS_Relation {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Chamf3dDimension(TopoDS_Shape aFShape,double aVal,TCollection_ExtendedString aText) {
   AIS_Chamf3dDimension_Create_1(aFShape,aVal,aText);
}

private final native void AIS_Chamf3dDimension_Create_1(TopoDS_Shape aFShape,double aVal,TCollection_ExtendedString aText);

public AIS_Chamf3dDimension(TopoDS_Shape aFShape,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize) {
   AIS_Chamf3dDimension_Create_2(aFShape,aVal,aText,aPosition,aSymbolPrs,anArrowSize);
}

private final native void AIS_Chamf3dDimension_Create_2(TopoDS_Shape aFShape,double aVal,TCollection_ExtendedString aText,gp_Pnt aPosition,short aSymbolPrs,double anArrowSize);

native public  short KindOfDimension();
native public  boolean IsMovable();
 public void Compute(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation) {
    AIS_Chamf3dDimension_Compute_4(aProjector,aTrsf,aPresentation);
}

private  native void AIS_Chamf3dDimension_Compute_4(Prs3d_Projector aProjector,Geom_Transformation aTrsf,Prs3d_Presentation aPresentation);

public AIS_Chamf3dDimension() {
}




}
