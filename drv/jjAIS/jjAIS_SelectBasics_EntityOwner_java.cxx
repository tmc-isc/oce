
#include <jjAIS_SelectBasics_EntityOwner.h>
#include <SelectBasics_EntityOwner.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <TopLoc_Location.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_SelectBasics_1EntityOwner_Set (JNIEnv *env, jobject theobj, jint aPriority)
{

jcas_Locking alock(env);
{
try {
Handle(SelectBasics_EntityOwner) the_this = *((Handle(SelectBasics_EntityOwner)*) jcas_GetHandle(env,theobj));
the_this->Set((Standard_Integer) aPriority);

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



JNIEXPORT jint JNICALL Java_jjAIS_SelectBasics_1EntityOwner_Priority (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectBasics_EntityOwner) the_this = *((Handle(SelectBasics_EntityOwner)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Priority();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_SelectBasics_1EntityOwner_HasLocation (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectBasics_EntityOwner) the_this = *((Handle(SelectBasics_EntityOwner)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_SelectBasics_1EntityOwner_SetLocation (JNIEnv *env, jobject theobj, jobject aLoc)
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
Handle(SelectBasics_EntityOwner) the_this = *((Handle(SelectBasics_EntityOwner)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_SelectBasics_1EntityOwner_ResetLocation (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(SelectBasics_EntityOwner) the_this = *((Handle(SelectBasics_EntityOwner)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_SelectBasics_1EntityOwner_Location (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectBasics_EntityOwner) the_this = *((Handle(SelectBasics_EntityOwner)*) jcas_GetHandle(env,theobj));
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


}
