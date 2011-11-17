
#include <jjAIS_AIS_Trihedron.h>
#include <AIS_Trihedron.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Geom_Axis2Placement.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <AIS_Axis.hxx>
#include <AIS_Point.hxx>
#include <AIS_Plane.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Standard_Integer.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Color.hxx>
#include <TColgp_Array1OfPnt.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_AIS_1Trihedron_1Create_10 (JNIEnv *env, jobject theobj, jobject aComponent)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis2Placement ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Axis2Placement )*  )ptr_aComponent   );

Handle(AIS_Trihedron)* theret = new Handle(AIS_Trihedron);
*theret = new AIS_Trihedron(the_aComponent);
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_Component (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(Geom_Axis2Placement)* theret = new Handle(Geom_Axis2Placement);
*theret = the_this->Component();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_SetComponent (JNIEnv *env, jobject theobj, jobject aComponent)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis2Placement ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Axis2Placement )*  )ptr_aComponent   );

Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Trihedron_HasOwnSize (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasOwnSize();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_SetSize (JNIEnv *env, jobject theobj, jdouble aValue)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
the_this->SetSize((Standard_Real) aValue);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_UnsetSize (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
the_this->UnsetSize();

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Trihedron_Size (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Size();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_XAxis (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Axis)* theret = new Handle(AIS_Axis);
*theret = the_this->XAxis();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Axis",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_YAxis (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Axis)* theret = new Handle(AIS_Axis);
*theret = the_this->YAxis();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Axis",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_Axis (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Axis)* theret = new Handle(AIS_Axis);
*theret = the_this->Axis();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Axis",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_Position (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Point)* theret = new Handle(AIS_Point);
*theret = the_this->Position();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Point",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_XYPlane (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Plane)* theret = new Handle(AIS_Plane);
*theret = the_this->XYPlane();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Plane",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_XZPlane (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Plane)* theret = new Handle(AIS_Plane);
*theret = the_this->XZPlane();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Plane",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Trihedron_YZPlane (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Plane)* theret = new Handle(AIS_Plane);
*theret = the_this->YZPlane();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Plane",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_SetContext (JNIEnv *env, jobject theobj, jobject aCtx)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveContext ) the_aCtx;
 void*                ptr_aCtx = jcas_GetHandle(env,aCtx);
 
 if ( ptr_aCtx != NULL ) the_aCtx = *(   (  Handle( AIS_InteractiveContext )*  )ptr_aCtx   );

Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
the_this->SetContext(the_aCtx);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Trihedron_AcceptDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_AIS_1Trihedron_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Trihedron_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Trihedron_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_AIS_1Trihedron_1SetColor_11 (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_AIS_1Trihedron_1SetColor_12 (JNIEnv *env, jobject theobj, jobject aColor)
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
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_SetTextColor (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
the_this->SetTextColor((Quantity_NameOfColor) aColor);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Trihedron_HasTextColor (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasTextColor();

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Trihedron_TextColor (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TextColor();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_SetArrowColor (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
the_this->SetArrowColor((Quantity_NameOfColor) aColor);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Trihedron_HasArrowColor (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasArrowColor();

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Trihedron_ArrowColor (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ArrowColor();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_ExtremityPoints (JNIEnv *env, jobject theobj, jobject TheExtrem)
{

jcas_Locking alock(env);
{
try {
TColgp_Array1OfPnt* the_TheExtrem = (TColgp_Array1OfPnt*) jcas_GetHandle(env,TheExtrem);
if ( the_TheExtrem == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_TheExtrem = new TColgp_Array1OfPnt ();
 // jcas_SetHandle ( env, TheExtrem, the_TheExtrem );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
the_this->ExtremityPoints(*the_TheExtrem);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_UnsetColor (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Trihedron_UnsetWidth (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Trihedron) the_this = *((Handle(AIS_Trihedron)*) jcas_GetHandle(env,theobj));
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
