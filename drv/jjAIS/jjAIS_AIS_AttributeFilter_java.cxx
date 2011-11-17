
#include <jjAIS_AIS_AttributeFilter.h>
#include <AIS_AttributeFilter.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Quantity_NameOfColor.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <SelectMgr_EntityOwner.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1AttributeFilter_AIS_1AttributeFilter_1Create_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter)* theret = new Handle(AIS_AttributeFilter);
*theret = new AIS_AttributeFilter();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AttributeFilter_AIS_1AttributeFilter_1Create_12 (JNIEnv *env, jobject theobj, jshort aCol)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter)* theret = new Handle(AIS_AttributeFilter);
*theret = new AIS_AttributeFilter((Quantity_NameOfColor) aCol);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AttributeFilter_AIS_1AttributeFilter_1Create_13 (JNIEnv *env, jobject theobj, jdouble aWidth)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter)* theret = new Handle(AIS_AttributeFilter);
*theret = new AIS_AttributeFilter((Standard_Real) aWidth);
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1AttributeFilter_HasColor (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter) the_this = *((Handle(AIS_AttributeFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasColor();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1AttributeFilter_HasWidth (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter) the_this = *((Handle(AIS_AttributeFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasWidth();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AttributeFilter_SetColor (JNIEnv *env, jobject theobj, jshort aCol)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter) the_this = *((Handle(AIS_AttributeFilter)*) jcas_GetHandle(env,theobj));
the_this->SetColor((Quantity_NameOfColor) aCol);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AttributeFilter_SetWidth (JNIEnv *env, jobject theobj, jdouble aWidth)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter) the_this = *((Handle(AIS_AttributeFilter)*) jcas_GetHandle(env,theobj));
the_this->SetWidth((Standard_Real) aWidth);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AttributeFilter_UnsetColor (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter) the_this = *((Handle(AIS_AttributeFilter)*) jcas_GetHandle(env,theobj));
the_this->UnsetColor();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AttributeFilter_UnsetWidth (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_AttributeFilter) the_this = *((Handle(AIS_AttributeFilter)*) jcas_GetHandle(env,theobj));
the_this->UnsetWidth();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1AttributeFilter_IsOk (JNIEnv *env, jobject theobj, jobject anObj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_anObj;
 void*                ptr_anObj = jcas_GetHandle(env,anObj);
 
 if ( ptr_anObj != NULL ) the_anObj = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_anObj   );

Handle(AIS_AttributeFilter) the_this = *((Handle(AIS_AttributeFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOk(the_anObj);

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
