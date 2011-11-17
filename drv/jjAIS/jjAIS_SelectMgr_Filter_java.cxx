
#include <jjAIS_SelectMgr_Filter.h>
#include <SelectMgr_Filter.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Boolean.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <TopAbs_ShapeEnum.hxx>


extern "C" {


JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1Filter_IsOk (JNIEnv *env, jobject theobj, jobject anObj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_anObj;
 void*                ptr_anObj = jcas_GetHandle(env,anObj);
 
 if ( ptr_anObj != NULL ) the_anObj = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_anObj   );

Handle(SelectMgr_Filter) the_this = *((Handle(SelectMgr_Filter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOk(the_anObj);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_SelectMgr_1Filter_ActsOn (JNIEnv *env, jobject theobj, jshort aStandardMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(SelectMgr_Filter) the_this = *((Handle(SelectMgr_Filter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ActsOn((TopAbs_ShapeEnum) aStandardMode);

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
