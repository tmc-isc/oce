

package jjAIS;

import jcas.Object;
import jjAIS.Aspect_TypeOfDeflection;
import jcas.Standard_Short;
import jcas.Standard_Real;
import jcas.Standard_Integer;
import jcas.Standard_Boolean;
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


public class Prs3d_Drawer extends jjAIS.MMgt_TShared {

 static {
    System.loadLibrary("jjAIS");
 }
            
public Prs3d_Drawer() {
   Prs3d_Drawer_Create_0();
}

private final native void Prs3d_Drawer_Create_0();

native public  void SetTypeOfDeflection(short aTypeOfDeflection);
native public  short TypeOfDeflection();
native public  void SetMaximalChordialDeviation(double aChordialDeviation);
native public  double MaximalChordialDeviation();
native public  void SetDeviationCoefficient(double aCoefficient);
native public  double DeviationCoefficient();
native public  void SetHLRDeviationCoefficient(double aCoefficient);
native public  double HLRDeviationCoefficient();
native public  void SetHLRAngle(double anAngle);
native public  double HLRAngle();
native public  void SetDeviationAngle(double anAngle);
native public  double DeviationAngle();
native public  void SetDiscretisation(int d);
native public  int Discretisation();
native public  void SetMaximalParameterValue(double Value);
native public  double MaximalParameterValue();
native public  void SetIsoOnPlane(boolean OnOff);
native public  boolean IsoOnPlane();
native public  Prs3d_IsoAspect UIsoAspect();
native public  void SetUIsoAspect(Prs3d_IsoAspect anAspect);
native public  Prs3d_IsoAspect VIsoAspect();
native public  void SetVIsoAspect(Prs3d_IsoAspect anAspect);
native public  Prs3d_LineAspect FreeBoundaryAspect();
native public  void SetFreeBoundaryAspect(Prs3d_LineAspect anAspect);
native public  void SetFreeBoundaryDraw(boolean OnOff);
native public  boolean FreeBoundaryDraw();
native public  Prs3d_LineAspect WireAspect();
native public  void SetWireAspect(Prs3d_LineAspect anAspect);
native public  void SetWireDraw(boolean OnOff);
native public  boolean WireDraw();
native public  Prs3d_LineAspect UnFreeBoundaryAspect();
native public  void SetUnFreeBoundaryAspect(Prs3d_LineAspect anAspect);
native public  void SetUnFreeBoundaryDraw(boolean OnOff);
native public  boolean UnFreeBoundaryDraw();
native public  Prs3d_LineAspect LineAspect();
native public  void SetLineAspect(Prs3d_LineAspect anAspect);
native public  Prs3d_TextAspect TextAspect();
native public  void SetTextAspect(Prs3d_TextAspect anAspect);
native public  void SetLineArrowDraw(boolean OnOff);
native public  boolean LineArrowDraw();
native public  Prs3d_ArrowAspect ArrowAspect();
native public  void SetArrowAspect(Prs3d_ArrowAspect anAspect);
native public  Prs3d_PointAspect PointAspect();
native public  void SetPointAspect(Prs3d_PointAspect anAspect);
native public  Prs3d_ShadingAspect ShadingAspect();
native public  void SetShadingAspect(Prs3d_ShadingAspect anAspect);
native public  void SetShadingAspectGlobal(boolean aValue);
native public  boolean ShadingAspectGlobal();
native public  boolean DrawHiddenLine();
native public  void EnableDrawHiddenLine();
native public  void DisableDrawHiddenLine();
native public  Prs3d_LineAspect HiddenLineAspect();
native public  void SetHiddenLineAspect(Prs3d_LineAspect anAspect);
native public  Prs3d_LineAspect SeenLineAspect();
native public  void SetSeenLineAspect(Prs3d_LineAspect anAspect);
native public  Prs3d_PlaneAspect PlaneAspect();
native public  void SetPlaneAspect(Prs3d_PlaneAspect anAspect);
native public  Prs3d_LineAspect VectorAspect();
native public  void SetVectorAspect(Prs3d_LineAspect anAspect);
native public  Prs3d_DatumAspect DatumAspect();
native public  void SetDatumAspect(Prs3d_DatumAspect anAspect);
native public  Prs3d_LengthAspect LengthAspect();
native public  void SetLengthAspect(Prs3d_LengthAspect anAspect);
native public  Prs3d_AngleAspect AngleAspect();
native public  void SetAngleAspect(Prs3d_AngleAspect anAspect);
native public  Prs3d_RadiusAspect RadiusAspect();
native public  void SetRadiusAspect(Prs3d_RadiusAspect anAspect);
native public  Prs3d_LineAspect SectionAspect();
native public  void SetSectionAspect(Prs3d_LineAspect anAspect);



}
