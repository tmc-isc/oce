
#include <jjAIS_Prs3d_Drawer.h>
#include <Prs3d_Drawer.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Aspect_TypeOfDeflection.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_LengthAspect.hxx>
#include <Prs3d_AngleAspect.hxx>
#include <Prs3d_RadiusAspect.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_Prs3d_1Drawer_1Create_10 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer)* theret = new Handle(Prs3d_Drawer);
*theret = new Prs3d_Drawer();
jcas_SetHandle(env,theobj,theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetTypeOfDeflection (JNIEnv *env, jobject theobj, jshort aTypeOfDeflection)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetTypeOfDeflection((Aspect_TypeOfDeflection) aTypeOfDeflection);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jshort JNICALL Java_jjAIS_Prs3d_1Drawer_TypeOfDeflection (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TypeOfDeflection();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetMaximalChordialDeviation (JNIEnv *env, jobject theobj, jdouble aChordialDeviation)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetMaximalChordialDeviation((Quantity_Length) aChordialDeviation);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jdouble JNICALL Java_jjAIS_Prs3d_1Drawer_MaximalChordialDeviation (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->MaximalChordialDeviation();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetDeviationCoefficient (JNIEnv *env, jobject theobj, jdouble aCoefficient)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetDeviationCoefficient((Standard_Real) aCoefficient);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jdouble JNICALL Java_jjAIS_Prs3d_1Drawer_DeviationCoefficient (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->DeviationCoefficient();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetHLRDeviationCoefficient (JNIEnv *env, jobject theobj, jdouble aCoefficient)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetHLRDeviationCoefficient((Standard_Real) aCoefficient);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jdouble JNICALL Java_jjAIS_Prs3d_1Drawer_HLRDeviationCoefficient (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HLRDeviationCoefficient();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetHLRAngle (JNIEnv *env, jobject theobj, jdouble anAngle)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetHLRAngle((Standard_Real) anAngle);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jdouble JNICALL Java_jjAIS_Prs3d_1Drawer_HLRAngle (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HLRAngle();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetDeviationAngle (JNIEnv *env, jobject theobj, jdouble anAngle)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetDeviationAngle((Standard_Real) anAngle);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jdouble JNICALL Java_jjAIS_Prs3d_1Drawer_DeviationAngle (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->DeviationAngle();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetDiscretisation (JNIEnv *env, jobject theobj, jint d)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetDiscretisation((Standard_Integer) d);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jint JNICALL Java_jjAIS_Prs3d_1Drawer_Discretisation (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Discretisation();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetMaximalParameterValue (JNIEnv *env, jobject theobj, jdouble Value)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetMaximalParameterValue((Standard_Real) Value);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jdouble JNICALL Java_jjAIS_Prs3d_1Drawer_MaximalParameterValue (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->MaximalParameterValue();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetIsoOnPlane (JNIEnv *env, jobject theobj, jboolean OnOff)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetIsoOnPlane((Standard_Boolean) OnOff);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jboolean JNICALL Java_jjAIS_Prs3d_1Drawer_IsoOnPlane (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsoOnPlane();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_UIsoAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_IsoAspect)* theret = new Handle(Prs3d_IsoAspect);
*theret = the_this->UIsoAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_IsoAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetUIsoAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_IsoAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_IsoAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetUIsoAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_VIsoAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_IsoAspect)* theret = new Handle(Prs3d_IsoAspect);
*theret = the_this->VIsoAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_IsoAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetVIsoAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_IsoAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_IsoAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetVIsoAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_FreeBoundaryAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->FreeBoundaryAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetFreeBoundaryAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetFreeBoundaryAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetFreeBoundaryDraw (JNIEnv *env, jobject theobj, jboolean OnOff)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetFreeBoundaryDraw((Standard_Boolean) OnOff);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jboolean JNICALL Java_jjAIS_Prs3d_1Drawer_FreeBoundaryDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->FreeBoundaryDraw();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_WireAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->WireAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetWireAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetWireAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetWireDraw (JNIEnv *env, jobject theobj, jboolean OnOff)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetWireDraw((Standard_Boolean) OnOff);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jboolean JNICALL Java_jjAIS_Prs3d_1Drawer_WireDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->WireDraw();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_UnFreeBoundaryAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->UnFreeBoundaryAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetUnFreeBoundaryAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetUnFreeBoundaryAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetUnFreeBoundaryDraw (JNIEnv *env, jobject theobj, jboolean OnOff)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetUnFreeBoundaryDraw((Standard_Boolean) OnOff);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jboolean JNICALL Java_jjAIS_Prs3d_1Drawer_UnFreeBoundaryDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->UnFreeBoundaryDraw();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_LineAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->LineAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetLineAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetLineAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_TextAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_TextAspect)* theret = new Handle(Prs3d_TextAspect);
*theret = the_this->TextAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_TextAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetTextAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_TextAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_TextAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetTextAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetLineArrowDraw (JNIEnv *env, jobject theobj, jboolean OnOff)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetLineArrowDraw((Standard_Boolean) OnOff);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jboolean JNICALL Java_jjAIS_Prs3d_1Drawer_LineArrowDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->LineArrowDraw();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_ArrowAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_ArrowAspect)* theret = new Handle(Prs3d_ArrowAspect);
*theret = the_this->ArrowAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_ArrowAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetArrowAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_ArrowAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_ArrowAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetArrowAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_PointAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_PointAspect)* theret = new Handle(Prs3d_PointAspect);
*theret = the_this->PointAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_PointAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetPointAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_PointAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_PointAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetPointAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_ShadingAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_ShadingAspect)* theret = new Handle(Prs3d_ShadingAspect);
*theret = the_this->ShadingAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_ShadingAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetShadingAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_ShadingAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_ShadingAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetShadingAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetShadingAspectGlobal (JNIEnv *env, jobject theobj, jboolean aValue)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetShadingAspectGlobal((Standard_Boolean) aValue);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jboolean JNICALL Java_jjAIS_Prs3d_1Drawer_ShadingAspectGlobal (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ShadingAspectGlobal();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT jboolean JNICALL Java_jjAIS_Prs3d_1Drawer_DrawHiddenLine (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->DrawHiddenLine();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_EnableDrawHiddenLine (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->EnableDrawHiddenLine();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_DisableDrawHiddenLine (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->DisableDrawHiddenLine();

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_HiddenLineAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->HiddenLineAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetHiddenLineAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetHiddenLineAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_SeenLineAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->SeenLineAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetSeenLineAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetSeenLineAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_PlaneAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_PlaneAspect)* theret = new Handle(Prs3d_PlaneAspect);
*theret = the_this->PlaneAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_PlaneAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetPlaneAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_PlaneAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_PlaneAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetPlaneAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_VectorAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->VectorAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetVectorAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetVectorAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_DatumAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_DatumAspect)* theret = new Handle(Prs3d_DatumAspect);
*theret = the_this->DatumAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_DatumAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetDatumAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_DatumAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_DatumAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetDatumAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_LengthAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LengthAspect)* theret = new Handle(Prs3d_LengthAspect);
*theret = the_this->LengthAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LengthAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetLengthAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LengthAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LengthAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetLengthAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_AngleAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_AngleAspect)* theret = new Handle(Prs3d_AngleAspect);
*theret = the_this->AngleAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_AngleAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetAngleAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_AngleAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_AngleAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetAngleAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_RadiusAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_RadiusAspect)* theret = new Handle(Prs3d_RadiusAspect);
*theret = the_this->RadiusAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_RadiusAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetRadiusAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_RadiusAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_RadiusAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetRadiusAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}



JNIEXPORT jobject JNICALL Java_jjAIS_Prs3d_1Drawer_SectionAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_LineAspect)* theret = new Handle(Prs3d_LineAspect);
*theret = the_this->SectionAspect();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_LineAspect",theret);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();
return thejret;
}



JNIEXPORT void JNICALL Java_jjAIS_Prs3d_1Drawer_SetSectionAspect (JNIEnv *env, jobject theobj, jobject anAspect)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_LineAspect ) the_anAspect;
 void*                ptr_anAspect = jcas_GetHandle(env,anAspect);
 
 if ( ptr_anAspect != NULL ) the_anAspect = *(   (  Handle( Prs3d_LineAspect )*  )ptr_anAspect   );

Handle(Prs3d_Drawer) the_this = *((Handle(Prs3d_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetSectionAspect(the_anAspect);

}
catch (Standard_Failure) {
  Standard_SStream Err;
  Err <<   Standard_Failure::Caught(); 
  Err << (char) 0;
  jcas_ThrowException(env,GetSString(Err));
}
}
alock.Release();

}


}
