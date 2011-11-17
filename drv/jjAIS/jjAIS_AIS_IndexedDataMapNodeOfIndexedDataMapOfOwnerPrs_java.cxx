
#include <jjAIS_AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.h>
#include <AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <SelectMgr_EntityOwner.hxx>
#include <Standard_Integer.hxx>
#include <Prs3d_Presentation.hxx>


extern "C" {


JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_Key1 (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs) the_this = *((Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_EntityOwner)* theret = new Handle(SelectMgr_EntityOwner);
*theret = the_this->Key1();
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_EntityOwner",theret);

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_Key2 (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs) the_this = *((Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Key2();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs) the_this = *((Handle(AIS_IndexedDataMapNodeOfIndexedDataMapOfOwnerPrs)*) jcas_GetHandle(env,theobj));
Handle(Prs3d_Presentation)* theret = new Handle(Prs3d_Presentation);
*theret = the_this->Value();
thejret = jcas_CreateObject(env,"jjAIS/Prs3d_Presentation",theret);

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
