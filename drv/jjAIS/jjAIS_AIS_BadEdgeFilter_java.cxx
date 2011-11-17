
#include <jjAIS_AIS_BadEdgeFilter.h>
#include <AIS_BadEdgeFilter.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Standard_Boolean.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Standard_Integer.hxx>
#include <TopoDS_Edge.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1BadEdgeFilter_AIS_1BadEdgeFilter_1Create_10 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_BadEdgeFilter)* theret = new Handle(AIS_BadEdgeFilter);
*theret = new AIS_BadEdgeFilter();
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1BadEdgeFilter_ActsOn (JNIEnv *env, jobject theobj, jshort aType)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_BadEdgeFilter) the_this = *((Handle(AIS_BadEdgeFilter)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1BadEdgeFilter_IsOk (JNIEnv *env, jobject theobj, jobject EO)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_EO;
 void*                ptr_EO = jcas_GetHandle(env,EO);
 
 if ( ptr_EO != NULL ) the_EO = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_EO   );

Handle(AIS_BadEdgeFilter) the_this = *((Handle(AIS_BadEdgeFilter)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1BadEdgeFilter_SetContour (JNIEnv *env, jobject theobj, jint Index)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_BadEdgeFilter) the_this = *((Handle(AIS_BadEdgeFilter)*) jcas_GetHandle(env,theobj));
the_this->SetContour((Standard_Integer) Index);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1BadEdgeFilter_AddEdge (JNIEnv *env, jobject theobj, jobject anEdge, jint Index)
{

jcas_Locking alock(env);
{
try {
TopoDS_Edge* the_anEdge = (TopoDS_Edge*) jcas_GetHandle(env,anEdge);
if ( the_anEdge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_anEdge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, anEdge, the_anEdge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_BadEdgeFilter) the_this = *((Handle(AIS_BadEdgeFilter)*) jcas_GetHandle(env,theobj));
the_this->AddEdge(*the_anEdge,(Standard_Integer) Index);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1BadEdgeFilter_RemoveEdges (JNIEnv *env, jobject theobj, jint Index)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_BadEdgeFilter) the_this = *((Handle(AIS_BadEdgeFilter)*) jcas_GetHandle(env,theobj));
the_this->RemoveEdges((Standard_Integer) Index);

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


}
