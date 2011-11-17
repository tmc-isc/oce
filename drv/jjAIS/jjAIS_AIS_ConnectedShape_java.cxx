
#include <jjAIS_AIS_ConnectedShape.h>
#include <AIS_ConnectedShape.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <PrsMgr_TypeOfPresentation3d.hxx>
#include <AIS_Shape.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TopLoc_Location.hxx>
#include <PrsMgr_PresentationManager3d.hxx>
#include <Prs3d_Presentation.hxx>
#include <PrsMgr_PresentationManager2d.hxx>
#include <Graphic2d_GraphicObject.hxx>
#include <TopoDS_Shape.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedShape_AIS_1ConnectedShape_1Create_11 (JNIEnv *env, jobject theobj, jshort aTypeOfPresentation)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedShape)* theret = new Handle(AIS_ConnectedShape);
*theret = new AIS_ConnectedShape((PrsMgr_TypeOfPresentation3d) aTypeOfPresentation);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedShape_AIS_1ConnectedShape_1Create_12 (JNIEnv *env, jobject theobj, jobject aInteractiveShape, jshort aTypeOfPresentation)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_Shape ) the_aInteractiveShape;
 void*                ptr_aInteractiveShape = jcas_GetHandle(env,aInteractiveShape);
 
 if ( ptr_aInteractiveShape != NULL ) the_aInteractiveShape = *(   (  Handle( AIS_Shape )*  )ptr_aInteractiveShape   );

Handle(AIS_ConnectedShape)* theret = new Handle(AIS_ConnectedShape);
*theret = new AIS_ConnectedShape(the_aInteractiveShape,(PrsMgr_TypeOfPresentation3d) aTypeOfPresentation);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedShape_AIS_1ConnectedShape_1Create_13 (JNIEnv *env, jobject theobj, jobject aConnectedShape, jshort aTypeOfPresentation)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_ConnectedShape ) the_aConnectedShape;
 void*                ptr_aConnectedShape = jcas_GetHandle(env,aConnectedShape);
 
 if ( ptr_aConnectedShape != NULL ) the_aConnectedShape = *(   (  Handle( AIS_ConnectedShape )*  )ptr_aConnectedShape   );

Handle(AIS_ConnectedShape)* theret = new Handle(AIS_ConnectedShape);
*theret = new AIS_ConnectedShape(the_aConnectedShape,(PrsMgr_TypeOfPresentation3d) aTypeOfPresentation);
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1ConnectedShape_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1ConnectedShape_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ConnectedShape_AcceptShapeDecomposition (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedShape_AIS_1ConnectedShape_1Connect_11 (JNIEnv *env, jobject theobj, jobject anotherIObj)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anotherIObj;
 void*                ptr_anotherIObj = jcas_GetHandle(env,anotherIObj);
 
 if ( ptr_anotherIObj != NULL ) the_anotherIObj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anotherIObj   );

Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
the_this->Connect(the_anotherIObj);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedShape_AIS_1ConnectedShape_1Connect_12 (JNIEnv *env, jobject theobj, jobject anotherIobj, jobject aLocation)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anotherIobj;
 void*                ptr_anotherIobj = jcas_GetHandle(env,anotherIobj);
 
 if ( ptr_anotherIobj != NULL ) the_anotherIobj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anotherIobj   );

TopLoc_Location* the_aLocation = (TopLoc_Location*) jcas_GetHandle(env,aLocation);
if ( the_aLocation == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aLocation = new TopLoc_Location ();
 // jcas_SetHandle ( env, aLocation, the_aLocation );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
the_this->Connect(the_anotherIobj,*the_aLocation);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedShape_AIS_1ConnectedShape_1Compute_13 (JNIEnv *env, jobject theobj, jobject aPresentationManager, jobject aPresentation, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( PrsMgr_PresentationManager3d ) the_aPresentationManager;
 void*                ptr_aPresentationManager = jcas_GetHandle(env,aPresentationManager);
 
 if ( ptr_aPresentationManager != NULL ) the_aPresentationManager = *(   (  Handle( PrsMgr_PresentationManager3d )*  )ptr_aPresentationManager   );

 Handle( Prs3d_Presentation ) the_aPresentation;
 void*                ptr_aPresentation = jcas_GetHandle(env,aPresentation);
 
 if ( ptr_aPresentation != NULL ) the_aPresentation = *(   (  Handle( Prs3d_Presentation )*  )ptr_aPresentation   );

Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedShape_AIS_1ConnectedShape_1Compute_14 (JNIEnv *env, jobject theobj, jobject aPresentationManager, jobject aPresentation, jint aMode)
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

Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1ConnectedShape_Shape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedShape) the_this = *((Handle(AIS_ConnectedShape)*) jcas_GetHandle(env,theobj));
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


}
