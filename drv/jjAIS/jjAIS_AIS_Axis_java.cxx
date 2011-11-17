
#include <jjAIS_AIS_Axis.h>
#include <AIS_Axis.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Geom_Line.hxx>
#include <Geom_Axis2Placement.hxx>
#include <AIS_TypeOfAxis.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Color.hxx>
#include <Standard_Real.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_AIS_1Axis_1Create_11 (JNIEnv *env, jobject theobj, jobject aComponent)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Line ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Line )*  )ptr_aComponent   );

Handle(AIS_Axis)* theret = new Handle(AIS_Axis);
*theret = new AIS_Axis(the_aComponent);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_AIS_1Axis_1Create_12 (JNIEnv *env, jobject theobj, jobject aComponent, jshort anAxisType)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis2Placement ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Axis2Placement )*  )ptr_aComponent   );

Handle(AIS_Axis)* theret = new Handle(AIS_Axis);
*theret = new AIS_Axis(the_aComponent,(AIS_TypeOfAxis) anAxisType);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_AIS_1Axis_1Create_13 (JNIEnv *env, jobject theobj, jobject anAxis)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis1Placement ) the_anAxis;
 void*                ptr_anAxis = jcas_GetHandle(env,anAxis);
 
 if ( ptr_anAxis != NULL ) the_anAxis = *(   (  Handle( Geom_Axis1Placement )*  )ptr_anAxis   );

Handle(AIS_Axis)* theret = new Handle(AIS_Axis);
*theret = new AIS_Axis(the_anAxis);
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Axis_Component (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
Handle(Geom_Line)* theret = new Handle(Geom_Line);
*theret = the_this->Component();
thejret = jcas_CreateObject(env,"jjAIS/Geom_Line",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_SetComponent (JNIEnv *env, jobject theobj, jobject aComponent)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Line ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Line )*  )ptr_aComponent   );

Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->SetComponent(the_aComponent);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Axis_Axis2Placement (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
Handle(Geom_Axis2Placement)* theret = new Handle(Geom_Axis2Placement);
*theret = the_this->Axis2Placement();
thejret = jcas_CreateObject(env,"jjAIS/Geom_Axis2Placement",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_SetAxis2Placement (JNIEnv *env, jobject theobj, jobject aComponent, jshort anAxisType)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis2Placement ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Axis2Placement )*  )ptr_aComponent   );

Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->SetAxis2Placement(the_aComponent,(AIS_TypeOfAxis) anAxisType);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_SetAxis1Placement (JNIEnv *env, jobject theobj, jobject anAxis)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis1Placement ) the_anAxis;
 void*                ptr_anAxis = jcas_GetHandle(env,anAxis);
 
 if ( ptr_anAxis != NULL ) the_anAxis = *(   (  Handle( Geom_Axis1Placement )*  )ptr_anAxis   );

Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->SetAxis1Placement(the_anAxis);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Axis_TypeOfAxis (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TypeOfAxis();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_SetTypeOfAxis (JNIEnv *env, jobject theobj, jshort aTypeAxis)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->SetTypeOfAxis((AIS_TypeOfAxis) aTypeAxis);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Axis_IsXYZAxis (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsXYZAxis();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Axis_AcceptDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
 thejret = the_this->AcceptDisplayMode((Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_AIS_1Axis_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Axis_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Axis_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_AIS_1Axis_1SetColor_11 (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->SetColor((Quantity_NameOfColor) aColor);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_AIS_1Axis_1SetColor_12 (JNIEnv *env, jobject theobj, jobject aColor)
{

jcas_Locking alock(env);
{
try {
Quantity_Color* the_aColor = (Quantity_Color*) jcas_GetHandle(env,aColor);
if ( the_aColor == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aColor = new Quantity_Color ();
 // jcas_SetHandle ( env, aColor, the_aColor );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->SetColor(*the_aColor);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_SetWidth (JNIEnv *env, jobject theobj, jdouble aValue)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->SetWidth((Standard_Real) aValue);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_UnsetColor (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->UnsetColor();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Axis_UnsetWidth (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Axis) the_this = *((Handle(AIS_Axis)*) jcas_GetHandle(env,theobj));
the_this->UnsetWidth();

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
