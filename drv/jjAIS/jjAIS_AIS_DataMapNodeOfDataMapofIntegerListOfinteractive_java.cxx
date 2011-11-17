
#include <jjAIS_AIS_DataMapNodeOfDataMapofIntegerListOfinteractive.h>
#include <AIS_DataMapNodeOfDataMapofIntegerListOfinteractive.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Integer.hxx>
#include <AIS_ListOfInteractive.hxx>


extern "C" {


JNIEXPORT jint JNICALL Java_jjAIS_AIS_1DataMapNodeOfDataMapofIntegerListOfinteractive_Key (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DataMapNodeOfDataMapofIntegerListOfinteractive) the_this = *((Handle(AIS_DataMapNodeOfDataMapofIntegerListOfinteractive)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Key();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapNodeOfDataMapofIntegerListOfinteractive_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DataMapNodeOfDataMapofIntegerListOfinteractive) the_this = *((Handle(AIS_DataMapNodeOfDataMapofIntegerListOfinteractive)*) jcas_GetHandle(env,theobj));
const AIS_ListOfInteractive& theret = the_this->Value();
thejret = jcas_CreateObject(env,"jjAIS/AIS_ListOfInteractive",&theret,0);

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
