
#include <jjAIS_AIS_DimensionOwner.h>
#include <AIS_DimensionOwner.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <SelectMgr_SelectableObject.hxx>
#include <Standard_Integer.hxx>
#include <TopoDS_Shape.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1DimensionOwner_AIS_1DimensionOwner_1Create_10 (JNIEnv *env, jobject theobj, jobject aSO, jint aPriority)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_SelectableObject ) the_aSO;
 void*                ptr_aSO = jcas_GetHandle(env,aSO);
 
 if ( ptr_aSO != NULL ) the_aSO = *(   (  Handle( SelectMgr_SelectableObject )*  )ptr_aSO   );

Handle(AIS_DimensionOwner)* theret = new Handle(AIS_DimensionOwner);
*theret = new AIS_DimensionOwner(the_aSO,(Standard_Integer) aPriority);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DimensionOwner_SetShape (JNIEnv *env, jobject theobj, jobject aShape)
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
Handle(AIS_DimensionOwner) the_this = *((Handle(AIS_DimensionOwner)*) jcas_GetHandle(env,theobj));
the_this->SetShape(*the_aShape);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1DimensionOwner_FixedShape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DimensionOwner) the_this = *((Handle(AIS_DimensionOwner)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->FixedShape();
thejret = jcas_CreateObject(env,"jjAIS/TopoDS_Shape",&theret,0);

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
