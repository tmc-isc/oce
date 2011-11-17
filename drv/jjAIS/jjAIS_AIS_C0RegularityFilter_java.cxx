
#include <jjAIS_AIS_C0RegularityFilter.h>
#include <AIS_C0RegularityFilter.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Shape.hxx>
#include <Standard_Boolean.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <SelectMgr_EntityOwner.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1C0RegularityFilter_AIS_1C0RegularityFilter_1Create_10 (JNIEnv *env, jobject theobj, jobject aShape)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_aShape = (TopoDS_Shape*) jcas_GetHandle(env,aShape);
if ( the_aShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aShape, the_aShape );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_C0RegularityFilter)* theret = new Handle(AIS_C0RegularityFilter);
*theret = new AIS_C0RegularityFilter(*the_aShape);
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1C0RegularityFilter_ActsOn (JNIEnv *env, jobject theobj, jshort aType)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_C0RegularityFilter) the_this = *((Handle(AIS_C0RegularityFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ActsOn((TopAbs_ShapeEnum) aType);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1C0RegularityFilter_IsOk (JNIEnv *env, jobject theobj, jobject EO)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_EO;
 void*                ptr_EO = jcas_GetHandle(env,EO);
 
 if ( ptr_EO != NULL ) the_EO = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_EO   );

Handle(AIS_C0RegularityFilter) the_this = *((Handle(AIS_C0RegularityFilter)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsOk(the_EO);

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
