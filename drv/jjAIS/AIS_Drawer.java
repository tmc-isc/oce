

package jjAIS;

import jcas.Object;
import jjAIS.Aspect_TypeOfDeflection;
import jcas.Standard_Real;
import jcas.Standard_Boolean;
import jcas.Standard_Integer;
import jjAIS.Prs3d_IsoAspect;
import jjAIS.Prs3d_LineAspect;
import jjAIS.Prs3d_TextAspect;
import jjAIS.Prs3d_ArrowAspect;
import jjAIS.Prs3d_PointAspect;
import jjAIS.Prs3d_ShadingAspect;
import jjAIS.Prs3d_PlaneAspect;
import jjAIS.Prs3d_DatumAspect;
import jjAIS.Prs3d_LengthAspect;
import jjAIS.Prs3d_AngleAspect;
import jjAIS.Prs3d_RadiusAspect;
import jjAIS.Prs3d_Drawer;


public class AIS_Drawer extends jjAIS.Prs3d_Drawer {

 static {
    System.loadLibrary("jjAIS");
 }
            
public AIS_Drawer() {
   AIS_Drawer_Create_0();
}

private final native void AIS_Drawer_Create_0();

native public final short TypeOfDeflection();
native public final double MaximalChordialDeviation();
final public void SetDeviationCoefficient() {
    AIS_Drawer_SetDeviationCoefficient_1();
}

private final native void AIS_Drawer_SetDeviationCoefficient_1();

final public void SetHLRDeviationCoefficient() {
    AIS_Drawer_SetHLRDeviationCoefficient_1();
}

private final native void AIS_Drawer_SetHLRDeviationCoefficient_1();

final public void SetDeviationAngle() {
    AIS_Drawer_SetDeviationAngle_1();
}

private final native void AIS_Drawer_SetDeviationAngle_1();

final public void SetHLRAngle() {
    AIS_Drawer_SetHLRAngle_1();
}

private final native void AIS_Drawer_SetHLRAngle_1();

final public void SetDeviationCoefficient(double aCoefficient) {
    AIS_Drawer_SetDeviationCoefficient_2(aCoefficient);
}

private final native void AIS_Drawer_SetDeviationCoefficient_2(double aCoefficient);

final public void SetHLRDeviationCoefficient(double aCoefficient) {
    AIS_Drawer_SetHLRDeviationCoefficient_2(aCoefficient);
}

private final native void AIS_Drawer_SetHLRDeviationCoefficient_2(double aCoefficient);

 public void SetDeviationAngle(double anAngle) {
    AIS_Drawer_SetDeviationAngle_2(anAngle);
}

private  native void AIS_Drawer_SetDeviationAngle_2(double anAngle);

final public void SetHLRAngle(double anAngle) {
    AIS_Drawer_SetHLRAngle_2(anAngle);
}

private final native void AIS_Drawer_SetHLRAngle_2(double anAngle);

native public final double DeviationCoefficient();
native public final double HLRDeviationCoefficient();
native public  double DeviationAngle();
native public final double HLRAngle();
native public final double PreviousDeviationCoefficient();
native public final double PreviousHLRDeviationCoefficient();
native public final double PreviousDeviationAngle();
native public final double PreviousHLRDeviationAngle();
native public final boolean IsOwnDeviationCoefficient();
native public final boolean IsOwnHLRDeviationCoefficient();
native public final boolean IsOwnDeviationAngle();
native public final boolean IsOwnHLRDeviationAngle();
native public final int Discretisation();
native public final double MaximalParameterValue();
native public final boolean IsoOnPlane();
native public final Prs3d_IsoAspect UIsoAspect();
native public final Prs3d_IsoAspect VIsoAspect();
native public final Prs3d_LineAspect FreeBoundaryAspect();
native public final boolean FreeBoundaryDraw();
native public final Prs3d_LineAspect WireAspect();
native public final boolean HasLineAspect();
native public final boolean HasWireAspect();
native public final boolean WireDraw();
native public final Prs3d_LineAspect UnFreeBoundaryAspect();
native public final boolean UnFreeBoundaryDraw();
native public final Prs3d_LineAspect LineAspect();
native public final boolean HasTextAspect();
native public final Prs3d_TextAspect TextAspect();
native public final boolean LineArrowDraw();
native public final Prs3d_ArrowAspect ArrowAspect();
native public final Prs3d_PointAspect PointAspect();
native public final boolean HasPointAspect();
native public final Prs3d_ShadingAspect ShadingAspect();
native public final boolean HasShadingAspect();
native public final boolean ShadingAspectGlobal();
native public final boolean DrawHiddenLine();
native public final Prs3d_LineAspect HiddenLineAspect();
native public final Prs3d_LineAspect SeenLineAspect();
native public final boolean HasPlaneAspect();
native public final Prs3d_PlaneAspect PlaneAspect();
native public final Prs3d_LineAspect VectorAspect();
native public final boolean HasDatumAspect();
native public final Prs3d_DatumAspect DatumAspect();
native public final Prs3d_LengthAspect LengthAspect();
native public final boolean HasLengthAspect();
native public final Prs3d_AngleAspect AngleAspect();
native public final boolean HasAngleAspect();
native public final Prs3d_RadiusAspect RadiusAspect();
native public final Prs3d_LineAspect SectionAspect();
final public Prs3d_Drawer Link() {
   return AIS_Drawer_Link_1();
}

private final native Prs3d_Drawer AIS_Drawer_Link_1();

native public final boolean HasLink();
final public void Link(Prs3d_Drawer aDrawer) {
    AIS_Drawer_Link_2(aDrawer);
}

private final native void AIS_Drawer_Link_2(Prs3d_Drawer aDrawer);

native public  void ClearLocalAttributes();
native public final boolean WasLastLocal();
native public final boolean HasLocalAttributes();



}
