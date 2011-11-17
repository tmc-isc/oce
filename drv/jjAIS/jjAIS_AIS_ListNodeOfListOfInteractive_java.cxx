
#include <jjAIS_AIS_ListNodeOfListOfInteractive.h>
#include <AIS_ListNodeOfListOfInteractive.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <AIS_InteractiveObject.hxx>


extern "C" {


JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1ListNodeOfListOfInteractive_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ListNodeOfListOfInteractive) the_this = *((Handle(AIS_ListNodeOfListOfInteractive)*) jcas_GetHandle(env,theobj));
Handle(AIS_InteractiveObject)* theret = new Handle(AIS_InteractiveObject);
*theret = the_this->Value();
thejret = jcas_CreateObject(env,"jjAIS/AIS_InteractiveObject",theret);

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
