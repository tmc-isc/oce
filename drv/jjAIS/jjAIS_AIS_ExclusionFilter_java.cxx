
#include <jjAIS_AIS_ExclusionFilter.h>
#include <AIS_ExclusionFilter.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Boolean.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Standard_Integer.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <TColStd_ListOfInteger.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Create_11 (JNIEnv *env, jobject theobj, jboolean ExclusionFlagOn)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter)* theret = new Handle(AIS_ExclusionFilter);
*theret = new AIS_ExclusionFilter((Standard_Boolean) ExclusionFlagOn);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Create_12 (JNIEnv *env, jobject theobj, jshort TypeToExclude, jboolean ExclusionFlagOn)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter)* theret = new Handle(AIS_ExclusionFilter);
*theret = new AIS_ExclusionFilter((AIS_KindOfInteractive) TypeToExclude,(Standard_Boolean) ExclusionFlagOn);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Create_13 (JNIEnv *env, jobject theobj, jshort TypeToExclude, jint SignatureInType, jboolean ExclusionFlagOn)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter)* theret = new Handle(AIS_ExclusionFilter);
*theret = new AIS_ExclusionFilter((AIS_KindOfInteractive) TypeToExclude,(Standard_Integer) SignatureInType,(Standard_Boolean) ExclusionFlagOn);
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_IsOk (JNIEnv *env, jobject theobj, jobject anObj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_anObj;
 void*                ptr_anObj = jcas_GetHandle(env,anObj);
 
 if ( ptr_anObj != NULL ) the_anObj = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_anObj   );

Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Add_11 (JNIEnv *env, jobject theobj, jshort TypeToExclude)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Add((AIS_KindOfInteractive) TypeToExclude);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Add_12 (JNIEnv *env, jobject theobj, jshort TypeToExclude, jint SignatureInType)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Add((AIS_KindOfInteractive) TypeToExclude,(Standard_Integer) SignatureInType);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Remove_11 (JNIEnv *env, jobject theobj, jshort TypeToExclude)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Remove((AIS_KindOfInteractive) TypeToExclude);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_AIS_1ExclusionFilter_1Remove_12 (JNIEnv *env, jobject theobj, jshort TypeToExclude, jint SignatureInType)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Remove((AIS_KindOfInteractive) TypeToExclude,(Standard_Integer) SignatureInType);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_Clear (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
the_this->Clear();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_IsExclusionFlagOn (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsExclusionFlagOn();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_SetExclusionFlag (JNIEnv *env, jobject theobj, jboolean Status)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
the_this->SetExclusionFlag((Standard_Boolean) Status);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ExclusionFilter_IsStored (JNIEnv *env, jobject theobj, jshort aType)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsStored((AIS_KindOfInteractive) aType);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_ListOfStoredTypes (JNIEnv *env, jobject theobj, jobject TheList)
{

jcas_Locking alock(env);
{
try {
TColStd_ListOfInteger* the_TheList = (TColStd_ListOfInteger*) jcas_GetHandle(env,TheList);
if ( the_TheList == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_TheList = new TColStd_ListOfInteger ();
 // jcas_SetHandle ( env, TheList, the_TheList );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
the_this->ListOfStoredTypes(*the_TheList);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ExclusionFilter_ListOfSignature (JNIEnv *env, jobject theobj, jshort aType, jobject TheStoredList)
{

jcas_Locking alock(env);
{
try {
TColStd_ListOfInteger* the_TheStoredList = (TColStd_ListOfInteger*) jcas_GetHandle(env,TheStoredList);
if ( the_TheStoredList == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_TheStoredList = new TColStd_ListOfInteger ();
 // jcas_SetHandle ( env, TheStoredList, the_TheStoredList );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_ExclusionFilter) the_this = *((Handle(AIS_ExclusionFilter)*) jcas_GetHandle(env,theobj));
the_this->ListOfSignature((AIS_KindOfInteractive) aType,*the_TheStoredList);

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
