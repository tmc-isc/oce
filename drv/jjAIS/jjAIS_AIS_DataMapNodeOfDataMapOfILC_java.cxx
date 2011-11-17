
#include <jjAIS_AIS_DataMapNodeOfDataMapOfILC.h>
#include <AIS_DataMapNodeOfDataMapOfILC.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Integer.hxx>
#include <AIS_LocalContext.hxx>


extern "C" {


JNIEXPORT jint JNICALL Java_jjAIS_AIS_1DataMapNodeOfDataMapOfILC_Key (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DataMapNodeOfDataMapOfILC) the_this = *((Handle(AIS_DataMapNodeOfDataMapOfILC)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapNodeOfDataMapOfILC_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DataMapNodeOfDataMapOfILC) the_this = *((Handle(AIS_DataMapNodeOfDataMapOfILC)*) jcas_GetHandle(env,theobj));
Handle(AIS_LocalContext)* theret = new Handle(AIS_LocalContext);
*theret = the_this->Value();
thejret = jcas_CreateObject(env,"jjAIS/AIS_LocalContext",theret);

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
