
#include <jjAIS_AIS_Selection.h>
#include <AIS_Selection.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_CString.hxx>
#include <Standard_Boolean.hxx>
#include <AIS_SelectStatus.hxx>
#include <Standard_Transient.hxx>
#include <Standard_Integer.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Selection_AIS_1Selection_1Create_10 (JNIEnv *env, jobject theobj, jobject aName)
{

jcas_Locking alock(env);
{
try {
Standard_CString the_aName = jcas_ConvertToCString(env,aName);
Handle(AIS_Selection)* theret = new Handle(AIS_Selection);
*theret = new AIS_Selection(the_aName);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Selection_Remove (JNIEnv *env, jclass, jobject aName)
{

jcas_Locking alock(env);
{
try {
Standard_CString the_aName = jcas_ConvertToCString(env,aName);
AIS_Selection::Remove(the_aName);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Selection_Find (JNIEnv *env, jclass, jobject aName)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Standard_CString the_aName = jcas_ConvertToCString(env,aName);
 thejret = AIS_Selection::Find(the_aName);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Selection_CreateSelection (JNIEnv *env, jclass, jobject aName)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Standard_CString the_aName = jcas_ConvertToCString(env,aName);
 thejret = AIS_Selection::CreateSelection(the_aName);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Selection_Selection (JNIEnv *env, jclass, jobject aName)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Standard_CString the_aName = jcas_ConvertToCString(env,aName);
Handle(AIS_Selection)* theret = new Handle(AIS_Selection);
*theret = AIS_Selection::Selection(the_aName);
thejret = jcas_CreateObject(env,"jjAIS/AIS_Selection",theret);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Selection_SetCurrentSelection (JNIEnv *env, jclass, jobject aName)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Standard_CString the_aName = jcas_ConvertToCString(env,aName);
 thejret = AIS_Selection::SetCurrentSelection(the_aName);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Selection_CurrentSelection (JNIEnv *env, jclass)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Selection)* theret = new Handle(AIS_Selection);
*theret = AIS_Selection::CurrentSelection();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Selection",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Selection_AIS_1Selection_1Select_11 (JNIEnv *env, jclass)
{

jcas_Locking alock(env);
{
try {
AIS_Selection::Select();

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Selection_AIS_1Selection_1Select_12 (JNIEnv *env, jclass, jobject anObject)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
 Handle( Standard_Transient ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( Standard_Transient )*  )ptr_anObject   );

 thejret = AIS_Selection::Select(the_anObject);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Selection_AddSelect (JNIEnv *env, jclass, jobject anObject)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
 Handle( Standard_Transient ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( Standard_Transient )*  )ptr_anObject   );

 thejret = AIS_Selection::AddSelect(the_anObject);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Selection_ClearAndSelect (JNIEnv *env, jclass, jobject anObject)
{

jcas_Locking alock(env);
{
try {
 Handle( Standard_Transient ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( Standard_Transient )*  )ptr_anObject   );

AIS_Selection::ClearAndSelect(the_anObject);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Selection_IsSelected (JNIEnv *env, jclass, jobject anObject)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( Standard_Transient ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( Standard_Transient )*  )ptr_anObject   );

 thejret = AIS_Selection::IsSelected(the_anObject);

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Selection_Extent (JNIEnv *env, jclass)
{
jint thejret;

jcas_Locking alock(env);
{
try {
 thejret = AIS_Selection::Extent();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Selection_Single (JNIEnv *env, jclass)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(Standard_Transient)* theret = new Handle(Standard_Transient);
*theret = AIS_Selection::Single();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Selection_Init (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Selection) the_this = *((Handle(AIS_Selection)*) jcas_GetHandle(env,theobj));
the_this->Init();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Selection_More (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Selection) the_this = *((Handle(AIS_Selection)*) jcas_GetHandle(env,theobj));
 thejret = the_this->More();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Selection_Next (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Selection) the_this = *((Handle(AIS_Selection)*) jcas_GetHandle(env,theobj));
the_this->Next();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Selection_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Selection) the_this = *((Handle(AIS_Selection)*) jcas_GetHandle(env,theobj));
Handle(Standard_Transient)* theret = new Handle(Standard_Transient);
*theret = the_this->Value();
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Selection_NbStored (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Selection) the_this = *((Handle(AIS_Selection)*) jcas_GetHandle(env,theobj));
 thejret = the_this->NbStored();

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Selection_Index (JNIEnv *env, jclass, jobject aName)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Standard_CString the_aName = jcas_ConvertToCString(env,aName);
 thejret = AIS_Selection::Index(the_aName);

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
