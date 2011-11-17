
#include <jjAIS_AIS_MultipleConnectedShape.h>
#include <AIS_MultipleConnectedShape.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Shape.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <PrsMgr_PresentationManager2d.hxx>
#include <Graphic2d_GraphicObject.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedShape_AIS_1MultipleConnectedShape_1Create_10 (JNIEnv *env, jobject theobj, jobject aShape)
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
Handle(AIS_MultipleConnectedShape)* theret = new Handle(AIS_MultipleConnectedShape);
*theret = new AIS_MultipleConnectedShape(*the_aShape);
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1MultipleConnectedShape_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedShape) the_this = *((Handle(AIS_MultipleConnectedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Type();

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1MultipleConnectedShape_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedShape) the_this = *((Handle(AIS_MultipleConnectedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Signature();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1MultipleConnectedShape_AcceptShapeDecomposition (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedShape) the_this = *((Handle(AIS_MultipleConnectedShape)*) jcas_GetHandle(env,theobj));
 thejret = the_this->AcceptShapeDecomposition();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedShape_Set (JNIEnv *env, jobject theobj, jobject ashap)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_ashap = (TopoDS_Shape*) jcas_GetHandle(env,ashap);
if ( the_ashap == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_ashap = new TopoDS_Shape ();
 // jcas_SetHandle ( env, ashap, the_ashap );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_MultipleConnectedShape) the_this = *((Handle(AIS_MultipleConnectedShape)*) jcas_GetHandle(env,theobj));
the_this->Set(*the_ashap);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1MultipleConnectedShape_Shape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedShape) the_this = *((Handle(AIS_MultipleConnectedShape)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->Shape();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedShape_AIS_1MultipleConnectedShape_1Compute_15 (JNIEnv *env, jobject theobj, jobject aPresentationManager, jobject aPresentation, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( PrsMgr_PresentationManager2d ) the_aPresentationManager;
 void*                ptr_aPresentationManager = jcas_GetHandle(env,aPresentationManager);
 
 if ( ptr_aPresentationManager != NULL ) the_aPresentationManager = *(   (  Handle( PrsMgr_PresentationManager2d )*  )ptr_aPresentationManager   );

 Handle( Graphic2d_GraphicObject ) the_aPresentation;
 void*                ptr_aPresentation = jcas_GetHandle(env,aPresentation);
 
 if ( ptr_aPresentation != NULL ) the_aPresentation = *(   (  Handle( Graphic2d_GraphicObject )*  )ptr_aPresentation   );

Handle(AIS_MultipleConnectedShape) the_this = *((Handle(AIS_MultipleConnectedShape)*) jcas_GetHandle(env,theobj));
the_this->Compute(the_aPresentationManager,the_aPresentation,(Standard_Integer) aMode);

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
