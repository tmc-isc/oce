
#include <jjAIS_AIS_GlobalStatus.h>
#include <AIS_GlobalStatus.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <AIS_DisplayStatus.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <Quantity_NameOfColor.hxx>
#include <TColStd_ListOfInteger.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_AIS_1GlobalStatus_1Create_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus)* theret = new Handle(AIS_GlobalStatus);
*theret = new AIS_GlobalStatus();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_AIS_1GlobalStatus_1Create_12 (JNIEnv *env, jobject theobj, jshort aStat, jint aDispMode, jint aSelMode, jboolean ishilighted, jshort TheHiCol, jint aLayerIndex)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus)* theret = new Handle(AIS_GlobalStatus);
*theret = new AIS_GlobalStatus((AIS_DisplayStatus) aStat,(Standard_Integer) aDispMode,(Standard_Integer) aSelMode,(Standard_Boolean) ishilighted,(Quantity_NameOfColor) TheHiCol,(Standard_Integer) aLayerIndex);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_SetGraphicStatus (JNIEnv *env, jobject theobj, jshort aStat)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetGraphicStatus((AIS_DisplayStatus) aStat);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_AddDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
the_this->AddDisplayMode((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_AddSelectionMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_SetLayerIndex (JNIEnv *env, jobject theobj, jint AnIndex)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetLayerIndex((Standard_Integer) AnIndex);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_SetHilightStatus (JNIEnv *env, jobject theobj, jboolean aStat)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
the_this->SetHilightStatus((Standard_Boolean) aStat);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_SetHilightColor (JNIEnv *env, jobject theobj, jshort aHiCol)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1GlobalStatus_IsSubIntensityOn (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_SubIntensityOn (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_SubIntensityOff (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_RemoveDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
the_this->RemoveDisplayMode((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_RemoveSelectionMode (JNIEnv *env, jobject theobj, jint aMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1GlobalStatus_ClearSelectionModes (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1GlobalStatus_GraphicStatus (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->GraphicStatus();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1GlobalStatus_DisplayedModes (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
const TColStd_ListOfInteger& theret = the_this->DisplayedModes();
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1GlobalStatus_SelectionModes (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1GlobalStatus_IsHilighted (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsHilighted();

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1GlobalStatus_HilightColor (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1GlobalStatus_IsDModeIn (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsDModeIn((Standard_Integer) aMode);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1GlobalStatus_IsSModeIn (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_GlobalStatus) the_this = *((Handle(AIS_GlobalStatus)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsSModeIn((Standard_Integer) aMode);

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
