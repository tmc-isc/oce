
#include <jjAIS_AIS_DataMapNodeOfDataMapOfSelStat.h>
#include <AIS_DataMapNodeOfDataMapOfSelStat.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <SelectMgr_SelectableObject.hxx>
#include <AIS_LocalStatus.hxx>


extern "C" {


JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapNodeOfDataMapOfSelStat_Key (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DataMapNodeOfDataMapOfSelStat) the_this = *((Handle(AIS_DataMapNodeOfDataMapOfSelStat)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_SelectableObject)* theret = new Handle(SelectMgr_SelectableObject);
*theret = the_this->Key();
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DataMapNodeOfDataMapOfSelStat_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DataMapNodeOfDataMapOfSelStat) the_this = *((Handle(AIS_DataMapNodeOfDataMapOfSelStat)*) jcas_GetHandle(env,theobj));
Handle(AIS_LocalStatus)* theret = new Handle(AIS_LocalStatus);
*theret = the_this->Value();
thejret = jcas_CreateObject(env,"jjAIS/AIS_LocalStatus",theret);

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
