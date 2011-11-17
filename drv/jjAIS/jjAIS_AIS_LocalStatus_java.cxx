
#include <jjAIS_AIS_LocalStatus.h>
#include <AIS_LocalStatus.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Quantity_NameOfColor.hxx>
#include <TColStd_ListOfInteger.hxx>
#include <Standard_Transient.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_AIS_1LocalStatus_1Create_10 (JNIEnv *env, jobject theobj, jboolean IsTemporary, jboolean Decompose, jint DisplayMode, jint SelectionMode, jint HilightMode, jboolean SubIntensity, jshort TheHiCol)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus)* theret = new Handle(AIS_LocalStatus);
*theret = new AIS_LocalStatus((Standard_Boolean) IsTemporary,(Standard_Boolean) Decompose,(Standard_Integer) DisplayMode,(Standard_Integer) SelectionMode,(Standard_Integer) HilightMode,(Standard_Boolean) SubIntensity,(Quantity_NameOfColor) TheHiCol);
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalStatus_Decomposed (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Decomposed();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalStatus_IsTemporary (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsTemporary();

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1LocalStatus_DisplayMode (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->DisplayMode();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalStatus_SelectionModes (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
const TColStd_ListOfInteger& theret = the_this->SelectionModes();
thejret = jcas_CreateObject(env,"jjAIS/TColStd_ListOfInteger",&theret,0);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalStatus_IsActivated (JNIEnv *env, jobject theobj, jint aSelMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsActivated((Standard_Integer) aSelMode);

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1LocalStatus_HilightMode (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HilightMode();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalStatus_IsSubIntensityOn (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsSubIntensityOn();

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalStatus_HilightColor (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HilightColor();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SetDecomposition (JNIEnv *env, jobject theobj, jboolean astatus)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetDecomposition((Standard_Boolean) astatus);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SetTemporary (JNIEnv *env, jobject theobj, jboolean astatus)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetTemporary((Standard_Boolean) astatus);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SetDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetDisplayMode((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SetFirstDisplay (JNIEnv *env, jobject theobj, jboolean aStatus)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetFirstDisplay((Standard_Boolean) aStatus);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalStatus_IsFirstDisplay (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsFirstDisplay();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_AddSelectionMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->AddSelectionMode((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_RemoveSelectionMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->RemoveSelectionMode((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_ClearSelectionModes (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->ClearSelectionModes();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalStatus_IsSelModeIn (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsSelModeIn((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SetHilightMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetHilightMode((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SetHilightColor (JNIEnv *env, jobject theobj, jshort aHiCol)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetHilightColor((Quantity_NameOfColor) aHiCol);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SubIntensityOn (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SubIntensityOn();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SubIntensityOff (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SubIntensityOff();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalStatus_SetPreviousState (JNIEnv *env, jobject theobj, jobject aStatus)
{

jcas_Locking alock(env);
{
try {
 Handle( Standard_Transient ) the_aStatus;
 void*                ptr_aStatus = jcas_GetHandle(env,aStatus);
 
 if ( ptr_aStatus != NULL ) the_aStatus = *(   (  Handle( Standard_Transient )*  )ptr_aStatus   );

Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetPreviousState(the_aStatus);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalStatus_PreviousState (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalStatus) the_this = *((Handle(AIS_LocalStatus)*) jcas_GetHandle(env,theobj));
Handle(Standard_Transient)* theret = new Handle(Standard_Transient);
*theret = the_this->PreviousState();
thejret = jcas_CreateObject(env,"jjAIS/Standard_Transient",theret);

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
