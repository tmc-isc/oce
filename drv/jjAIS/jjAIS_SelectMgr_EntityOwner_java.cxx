
#include <jjAIS_SelectMgr_EntityOwner.h>
#include <SelectMgr_EntityOwner.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Integer.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <Standard_Boolean.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Quantity_NameOfColor.hxx>
#include <TopLoc_Location.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Create_11 (JNIEnv *env, jobject theobj, jint aPriority)
{

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner)* theret = new Handle(SelectMgr_EntityOwner);
*theret = new SelectMgr_EntityOwner((Standard_Integer) aPriority);
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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Create_12 (JNIEnv *env, jobject theobj, jobject aSO, jint aPriority)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_SelectableObject ) the_aSO;
 void*                ptr_aSO = jcas_GetHandle(env,aSO);
 
 if ( ptr_aSO != NULL ) the_aSO = *(   (  Handle( SelectMgr_SelectableObject )*  )ptr_aSO   );

Handle(SelectMgr_EntityOwner)* theret = new Handle(SelectMgr_EntityOwner);
*theret = new SelectMgr_EntityOwner(the_aSO,(Standard_Integer) aPriority);
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



JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_HasSelectable (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasSelectable();

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



JNIEXPORT jobject JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Selectable (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_SelectableObject)* theret = new Handle(SelectMgr_SelectableObject);
*theret = the_this->Selectable();
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_SelectableObject",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Set (JNIEnv *env, jobject theobj, jobject aSO)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_SelectableObject ) the_aSO;
 void*                ptr_aSO = jcas_GetHandle(env,aSO);
 
 if ( ptr_aSO != NULL ) the_aSO = *(   (  Handle( SelectMgr_SelectableObject )*  )ptr_aSO   );

Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->Set(the_aSO);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Hilight_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->Hilight();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_IsHilighted (JNIEnv *env, jobject theobj, jobject aPM, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( PrsMgr_PresentationManager ) the_aPM;
 void*                ptr_aPM = jcas_GetHandle(env,aPM);
 
 if ( ptr_aPM != NULL ) the_aPM = *(   (  Handle( PrsMgr_PresentationManager )*  )ptr_aPM   );

Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsHilighted(the_aPM,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1Hilight_12 (JNIEnv *env, jobject theobj, jobject aPM, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( PrsMgr_PresentationManager ) the_aPM;
 void*                ptr_aPM = jcas_GetHandle(env,aPM);
 
 if ( ptr_aPM != NULL ) the_aPM = *(   (  Handle( PrsMgr_PresentationManager )*  )ptr_aPM   );

Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->Hilight(the_aPM,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_HilightWithColor (JNIEnv *env, jobject theobj, jobject aPM, jshort aColor, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( PrsMgr_PresentationManager3d ) the_aPM;
 void*                ptr_aPM = jcas_GetHandle(env,aPM);
 
 if ( ptr_aPM != NULL ) the_aPM = *(   (  Handle( PrsMgr_PresentationManager3d )*  )ptr_aPM   );

Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->HilightWithColor(the_aPM,(Quantity_NameOfColor) aColor,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Unhilight (JNIEnv *env, jobject theobj, jobject aPM, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( PrsMgr_PresentationManager ) the_aPM;
 void*                ptr_aPM = jcas_GetHandle(env,aPM);
 
 if ( ptr_aPM != NULL ) the_aPM = *(   (  Handle( PrsMgr_PresentationManager )*  )ptr_aPM   );

Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->Unhilight(the_aPM,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Clear (JNIEnv *env, jobject theobj, jobject aPM, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( PrsMgr_PresentationManager ) the_aPM;
 void*                ptr_aPM = jcas_GetHandle(env,aPM);
 
 if ( ptr_aPM != NULL ) the_aPM = *(   (  Handle( PrsMgr_PresentationManager )*  )ptr_aPM   );

Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->Clear(the_aPM,(Standard_Integer) aMode);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_HasLocation (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasLocation();

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SetLocation (JNIEnv *env, jobject theobj, jobject aLoc)
{

jcas_Locking alock(env);
{
try {
TopLoc_Location* the_aLoc = (TopLoc_Location*) jcas_GetHandle(env,aLoc);
if ( the_aLoc == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aLoc = new TopLoc_Location ();
 // jcas_SetHandle ( env, aLoc, the_aLoc );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->SetLocation(*the_aLoc);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_ResetLocation (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->ResetLocation();

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



JNIEXPORT jobject JNICALL Java_jjAIS_SelectMgr_1EntityOwner_Location (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
const TopLoc_Location& theret = the_this->Location();
thejret = jcas_CreateObject(env,"jjAIS/TopLoc_Location",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1State_11 (JNIEnv *env, jobject theobj, jint aStatus)
{

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->State((Standard_Integer) aStatus);

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



JNIEXPORT jint JNICALL Java_jjAIS_SelectMgr_1EntityOwner_SelectMgr_1EntityOwner_1State_12 (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
 thejret = the_this->State();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_IsAutoHilight (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsAutoHilight();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1EntityOwner_IsForcedHilight (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_EntityOwner) the_this = *((Handle(SelectMgr_EntityOwner)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsForcedHilight();

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
