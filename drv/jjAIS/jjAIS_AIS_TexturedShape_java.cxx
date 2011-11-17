
#include <jjAIS_AIS_TexturedShape.h>
#include <AIS_TexturedShape.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Shape.hxx>
#include <TCollection_AsciiString.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Standard_CString.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_AIS_1TexturedShape_1Create_10 (JNIEnv *env, jobject theobj, jobject shap)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_shap = (TopoDS_Shape*) jcas_GetHandle(env,shap);
if ( the_shap == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_shap = new TopoDS_Shape ();
 // jcas_SetHandle ( env, shap, the_shap );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_TexturedShape)* theret = new Handle(AIS_TexturedShape);
*theret = new AIS_TexturedShape(*the_shap);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_SetTextureFileName (JNIEnv *env, jobject theobj, jobject TextureFileName)
{

jcas_Locking alock(env);
{
try {
TCollection_AsciiString* the_TextureFileName = (TCollection_AsciiString*) jcas_GetHandle(env,TextureFileName);
if ( the_TextureFileName == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_TextureFileName = new TCollection_AsciiString ();
 // jcas_SetHandle ( env, TextureFileName, the_TextureFileName );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->SetTextureFileName(*the_TextureFileName);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_SetTextureRepeat (JNIEnv *env, jobject theobj, jboolean RepeatYN, jdouble URepeat, jdouble VRepeat)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->SetTextureRepeat((Standard_Boolean) RepeatYN,(Standard_Real) URepeat,(Standard_Real) VRepeat);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_SetTextureOrigin (JNIEnv *env, jobject theobj, jboolean SetTextureOriginYN, jdouble UOrigin, jdouble VOrigin)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->SetTextureOrigin((Standard_Boolean) SetTextureOriginYN,(Standard_Real) UOrigin,(Standard_Real) VOrigin);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_SetTextureScale (JNIEnv *env, jobject theobj, jboolean SetTextureScaleYN, jdouble ScaleU, jdouble ScaleV)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->SetTextureScale((Standard_Boolean) SetTextureScaleYN,(Standard_Real) ScaleU,(Standard_Real) ScaleV);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_AIS_1TexturedShape_1ShowTriangles_11 (JNIEnv *env, jobject theobj, jboolean ShowTrianglesYN)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->ShowTriangles((Standard_Boolean) ShowTrianglesYN);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_SetTextureMapOn (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->SetTextureMapOn();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_SetTextureMapOff (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->SetTextureMapOff();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_EnableTextureModulate (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->EnableTextureModulate();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_DisableTextureModulate (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->DisableTextureModulate();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1TexturedShape_UpdateAttributes (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
the_this->UpdateAttributes();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1TexturedShape_TextureMapState (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureMapState();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1TexturedShape_URepeat (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->URepeat();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1TexturedShape_TextureRepeat (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureRepeat();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1TexturedShape_Deflection (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Deflection();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1TexturedShape_TextureFile (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
Standard_CString sret = the_this->TextureFile();
jclass CLSret  = env->FindClass("jcas/Standard_CString");
thejret = env->AllocObject(CLSret);
jcas_SetCStringValue(env,thejret,sret);

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1TexturedShape_VRepeat (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->VRepeat();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1TexturedShape_AIS_1TexturedShape_1ShowTriangles_12 (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ShowTriangles();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1TexturedShape_TextureUOrigin (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureUOrigin();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1TexturedShape_TextureVOrigin (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureVOrigin();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1TexturedShape_TextureScaleU (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureScaleU();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1TexturedShape_TextureScaleV (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureScaleV();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1TexturedShape_TextureScale (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureScale();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1TexturedShape_TextureOrigin (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureOrigin();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1TexturedShape_TextureModulate (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_TexturedShape) the_this = *((Handle(AIS_TexturedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextureModulate();

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
