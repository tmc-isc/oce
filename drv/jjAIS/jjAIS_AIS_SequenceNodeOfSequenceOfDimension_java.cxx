
#include <jjAIS_AIS_SequenceNodeOfSequenceOfDimension.h>
#include <AIS_SequenceNodeOfSequenceOfDimension.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <AIS_Relation.hxx>


extern "C" {


JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1SequenceNodeOfSequenceOfDimension_Value (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_SequenceNodeOfSequenceOfDimension) the_this = *((Handle(AIS_SequenceNodeOfSequenceOfDimension)*) jcas_GetHandle(env,theobj));
Handle(AIS_Relation)* theret = new Handle(AIS_Relation);
*theret = the_this->Value();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Relation",theret);

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
