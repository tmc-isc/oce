
#include <jjAIS_AIS_MultipleConnectedInteractive.h>
#include <AIS_MultipleConnectedInteractive.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <PrsMgr_TypeOfPresentation3d.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <AIS_SequenceOfInteractive.hxx>
#include <PrsMgr_PresentationManager2d.hxx>
#include <Graphic2d_GraphicObject.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_AIS_1MultipleConnectedInteractive_1Create_10 (JNIEnv *env, jobject theobj, jshort aTypeOfPresentation3d)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedInteractive)* theret = new Handle(AIS_MultipleConnectedInteractive);
*theret = new AIS_MultipleConnectedInteractive((PrsMgr_TypeOfPresentation3d) aTypeOfPresentation3d);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_Connect (JNIEnv *env, jobject theobj, jobject anotherIObj)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anotherIObj;
 void*                ptr_anotherIObj = jcas_GetHandle(env,anotherIObj);
 
 if ( ptr_anotherIObj != NULL ) the_anotherIObj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anotherIObj   );

Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_HasConnection (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_ConnectedTo (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
const AIS_SequenceOfInteractive& theret = the_this->ConnectedTo();
thejret = jcas_CreateObject(env,"jjAIS/AIS_SequenceOfInteractive",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_Disconnect (JNIEnv *env, jobject theobj, jobject anotherIObj)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anotherIObj;
 void*                ptr_anotherIObj = jcas_GetHandle(env,anotherIObj);
 
 if ( ptr_anotherIObj != NULL ) the_anotherIObj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anotherIObj   );

Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
the_this->Disconnect(the_anotherIObj);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_DisconnectAll (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
the_this->DisconnectAll();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_AIS_1MultipleConnectedInteractive_1Compute_12 (JNIEnv *env, jobject theobj, jobject aPresentationManager, jobject aPresentation, jint aMode)
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

Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_AIS_1MultipleConnectedInteractive_1Compute_13 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1MultipleConnectedInteractive_AIS_1MultipleConnectedInteractive_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aPresentation)
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

Handle(AIS_MultipleConnectedInteractive) the_this = *((Handle(AIS_MultipleConnectedInteractive)*) jcas_GetHandle(env,theobj));
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


}
