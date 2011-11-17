
#include <jjAIS_AIS_Drawer.h>
#include <AIS_Drawer.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Aspect_TypeOfDeflection.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
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
#include <Prs3d_Drawer.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1Create_10 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer)* theret = new Handle(AIS_Drawer);
*theret = new AIS_Drawer();
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Drawer_TypeOfDeflection (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_MaximalChordialDeviation (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetDeviationCoefficient_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetDeviationCoefficient();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetHLRDeviationCoefficient_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetHLRDeviationCoefficient();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetDeviationAngle_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetDeviationAngle();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetHLRAngle_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
the_this->SetHLRAngle();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetDeviationCoefficient_12 (JNIEnv *env, jobject theobj, jdouble aCoefficient)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetHLRDeviationCoefficient_12 (JNIEnv *env, jobject theobj, jdouble aCoefficient)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetDeviationAngle_12 (JNIEnv *env, jobject theobj, jdouble anAngle)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1SetHLRAngle_12 (JNIEnv *env, jobject theobj, jdouble anAngle)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_DeviationCoefficient (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_HLRDeviationCoefficient (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_DeviationAngle (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_HLRAngle (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_PreviousDeviationCoefficient (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->PreviousDeviationCoefficient();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_PreviousHLRDeviationCoefficient (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->PreviousHLRDeviationCoefficient();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_PreviousDeviationAngle (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->PreviousDeviationAngle();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_PreviousHLRDeviationAngle (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->PreviousHLRDeviationAngle();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_IsOwnDeviationCoefficient (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOwnDeviationCoefficient();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_IsOwnHLRDeviationCoefficient (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOwnHLRDeviationCoefficient();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_IsOwnDeviationAngle (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOwnDeviationAngle();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_IsOwnHLRDeviationAngle (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOwnHLRDeviationAngle();

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Drawer_Discretisation (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Drawer_MaximalParameterValue (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_IsoOnPlane (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_UIsoAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_VIsoAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_FreeBoundaryAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_FreeBoundaryDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_WireAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasLineAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasLineAspect();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasWireAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasWireAspect();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_WireDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_UnFreeBoundaryAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_UnFreeBoundaryDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_LineAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasTextAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasTextAspect();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_TextAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_LineArrowDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_ArrowAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_PointAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasPointAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasPointAspect();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_ShadingAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasShadingAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasShadingAspect();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_ShadingAspectGlobal (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_DrawHiddenLine (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_HiddenLineAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_SeenLineAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasPlaneAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasPlaneAspect();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_PlaneAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_VectorAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasDatumAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasDatumAspect();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_DatumAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_LengthAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasLengthAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasLengthAspect();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_AngleAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasAngleAspect (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasAngleAspect();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_RadiusAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_SectionAspect (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1Link_11 (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_Drawer)* theret = new Handle(Prs3d_Drawer);
*theret = the_this->Link();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_Drawer",theret);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasLink (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasLink();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_AIS_1Drawer_1Link_12 (JNIEnv *env, jobject theobj, jobject aDrawer)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_Drawer ) the_aDrawer;
 void*                ptr_aDrawer = jcas_GetHandle(env,aDrawer);
 
 if ( ptr_aDrawer != NULL ) the_aDrawer = *(   (  Handle( Prs3d_Drawer )*  )ptr_aDrawer   );

Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
the_this->Link(the_aDrawer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Drawer_ClearLocalAttributes (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
the_this->ClearLocalAttributes();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_WasLastLocal (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->WasLastLocal();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Drawer_HasLocalAttributes (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Drawer) the_this = *((Handle(AIS_Drawer)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasLocalAttributes();

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


}
