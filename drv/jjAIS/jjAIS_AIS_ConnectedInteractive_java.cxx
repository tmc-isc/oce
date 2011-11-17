
#include <jjAIS_AIS_ConnectedInteractive.h>
#include <AIS_ConnectedInteractive.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <PrsMgr_TypeOfPresentation3d.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Standard_Integer.hxx>
#include <AIS_InteractiveObject.hxx>
#include <TopLoc_Location.hxx>
#include <Standard_Boolean.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <PrsMgr_PresentationManager2d.hxx>
#include <Graphic2d_GraphicObject.hxx>
#include <SelectMgr_Selection.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1Create_10 (JNIEnv *env, jobject theobj, jshort aTypeOfPresentation3d)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive)* theret = new Handle(AIS_ConnectedInteractive);
*theret = new AIS_ConnectedInteractive((PrsMgr_TypeOfPresentation3d) aTypeOfPresentation3d);
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1ConnectedInteractive_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1ConnectedInteractive_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1Connect_11 (JNIEnv *env, jobject theobj, jobject anotherIObj)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anotherIObj;
 void*                ptr_anotherIObj = jcas_GetHandle(env,anotherIObj);
 
 if ( ptr_anotherIObj != NULL ) the_anotherIObj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anotherIObj   );

Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1Connect_12 (JNIEnv *env, jobject theobj, jobject anotherIobj, jobject aLocation)
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
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ConnectedInteractive_HasConnection (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasConnection();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1ConnectedInteractive_ConnectedTo (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
Handle(AIS_InteractiveObject)* theret = new Handle(AIS_InteractiveObject);
*theret = the_this->ConnectedTo();
thejret = jcas_CreateObject(env,"jjAIS/AIS_InteractiveObject",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_Disconnect (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
the_this->Disconnect();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1Compute_12 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_Projector ) the_aProjector;
 void*                ptr_aProjector = jcas_GetHandle(env,aProjector);
 
 if ( ptr_aProjector != NULL ) the_aProjector = *(   (  Handle( Prs3d_Projector )*  )ptr_aProjector   );

 Handle( Geom_Transformation ) the_aTrsf;
 void*                ptr_aTrsf = jcas_GetHandle(env,aTrsf);
 
 if ( ptr_aTrsf != NULL ) the_aTrsf = *(   (  Handle( Geom_Transformation )*  )ptr_aTrsf   );

 Handle( Prs3d_Presentation ) the_aPresentation;
 void*                ptr_aPresentation = jcas_GetHandle(env,aPresentation);
 
 if ( ptr_aPresentation != NULL ) the_aPresentation = *(   (  Handle( Prs3d_Presentation )*  )ptr_aPresentation   );

Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
the_this->Compute(the_aProjector,the_aTrsf,the_aPresentation);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1Compute_13 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aPresentation)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_Projector ) the_aProjector;
 void*                ptr_aProjector = jcas_GetHandle(env,aProjector);
 
 if ( ptr_aProjector != NULL ) the_aProjector = *(   (  Handle( Prs3d_Projector )*  )ptr_aProjector   );

 Handle( Prs3d_Presentation ) the_aPresentation;
 void*                ptr_aPresentation = jcas_GetHandle(env,aPresentation);
 
 if ( ptr_aPresentation != NULL ) the_aPresentation = *(   (  Handle( Prs3d_Presentation )*  )ptr_aPresentation   );

Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
the_this->Compute(the_aProjector,the_aPresentation);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1Compute_14 (JNIEnv *env, jobject theobj, jobject aPresentationManager, jobject aPresentation, jint aMode)
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

Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AcceptShapeDecomposition (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1UpdateLocation_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
the_this->UpdateLocation();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1ConnectedInteractive_AIS_1ConnectedInteractive_1UpdateLocation_12 (JNIEnv *env, jobject theobj, jobject aSel)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_Selection ) the_aSel;
 void*                ptr_aSel = jcas_GetHandle(env,aSel);
 
 if ( ptr_aSel != NULL ) the_aSel = *(   (  Handle( SelectMgr_Selection )*  )ptr_aSel   );

Handle(AIS_ConnectedInteractive) the_this = *((Handle(AIS_ConnectedInteractive)*) jcas_GetHandle(env,theobj));
the_this->UpdateLocation(the_aSel);

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
