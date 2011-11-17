
#include <jjAIS_AIS_SignatureFilter.h>
#include <AIS_SignatureFilter.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <AIS_KindOfInteractive.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <SelectMgr_EntityOwner.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1SignatureFilter_AIS_1SignatureFilter_1Create_10 (JNIEnv *env, jobject theobj, jshort aGivenKind, jint aGivenSignature)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_SignatureFilter)* theret = new Handle(AIS_SignatureFilter);
*theret = new AIS_SignatureFilter((AIS_KindOfInteractive) aGivenKind,(Standard_Integer) aGivenSignature);
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1SignatureFilter_IsOk (JNIEnv *env, jobject theobj, jobject anobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_anobj;
 void*                ptr_anobj = jcas_GetHandle(env,anobj);
 
 if ( ptr_anobj != NULL ) the_anobj = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_anobj   );

Handle(AIS_SignatureFilter) the_this = *((Handle(AIS_SignatureFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOk(the_anobj);

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
