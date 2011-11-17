
#include <jjAIS_AIS_Plane.h>
#include <AIS_Plane.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Geom_Plane.hxx>
#include <Standard_Boolean.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Axis2Placement.hxx>
#include <AIS_TypeOfPlane.hxx>
#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <AIS_InteractiveContext.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <SelectMgr_Selection.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Color.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_11 (JNIEnv *env, jobject theobj, jobject aComponent, jboolean aCurrentMode)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Plane )*  )ptr_aComponent   );

Handle(AIS_Plane)* theret = new Handle(AIS_Plane);
*theret = new AIS_Plane(the_aComponent,(Standard_Boolean) aCurrentMode);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_12 (JNIEnv *env, jobject theobj, jobject aComponent, jobject aCenter, jboolean aCurrentMode)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Plane )*  )ptr_aComponent   );

gp_Pnt* the_aCenter = (gp_Pnt*) jcas_GetHandle(env,aCenter);
if ( the_aCenter == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aCenter = new gp_Pnt ();
 // jcas_SetHandle ( env, aCenter, the_aCenter );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Plane)* theret = new Handle(AIS_Plane);
*theret = new AIS_Plane(the_aComponent,*the_aCenter,(Standard_Boolean) aCurrentMode);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_13 (JNIEnv *env, jobject theobj, jobject aComponent, jobject aCenter, jobject aPmin, jobject aPmax, jboolean aCurrentMode)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Plane )*  )ptr_aComponent   );

gp_Pnt* the_aCenter = (gp_Pnt*) jcas_GetHandle(env,aCenter);
if ( the_aCenter == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aCenter = new gp_Pnt ();
 // jcas_SetHandle ( env, aCenter, the_aCenter );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPmin = (gp_Pnt*) jcas_GetHandle(env,aPmin);
if ( the_aPmin == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPmin = new gp_Pnt ();
 // jcas_SetHandle ( env, aPmin, the_aPmin );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPmax = (gp_Pnt*) jcas_GetHandle(env,aPmax);
if ( the_aPmax == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPmax = new gp_Pnt ();
 // jcas_SetHandle ( env, aPmax, the_aPmax );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Plane)* theret = new Handle(AIS_Plane);
*theret = new AIS_Plane(the_aComponent,*the_aCenter,*the_aPmin,*the_aPmax,(Standard_Boolean) aCurrentMode);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Create_14 (JNIEnv *env, jobject theobj, jobject aComponent, jshort aPlaneType, jboolean aCurrentMode)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis2Placement ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Axis2Placement )*  )ptr_aComponent   );

Handle(AIS_Plane)* theret = new Handle(AIS_Plane);
*theret = new AIS_Plane(the_aComponent,(AIS_TypeOfPlane) aPlaneType,(Standard_Boolean) aCurrentMode);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetSize_11 (JNIEnv *env, jobject theobj, jdouble aValue)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetSize_12 (JNIEnv *env, jobject theobj, jdouble Xval, jdouble YVal)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
the_this->SetSize((Standard_Real) Xval,(Standard_Real) YVal);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_UnsetSize (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_Size (JNIEnv *env, jobject theobj, jobject X, jobject Y)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Standard_Real the_X = jcas_GetReal(env,X);
Standard_Real the_Y = jcas_GetReal(env,Y);
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Size(the_X,the_Y);
jcas_SetReal(env,X,the_X);
jcas_SetReal(env,Y,the_Y);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_HasOwnSize (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Plane_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Plane_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Plane_Component (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
Handle(Geom_Plane)* theret = new Handle(Geom_Plane);
*theret = the_this->Component();
thejret = jcas_CreateObject(env,"jjAIS/Geom_Plane",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetComponent (JNIEnv *env, jobject theobj, jobject aComponent)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Plane )*  )ptr_aComponent   );

Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_PlaneAttributes (JNIEnv *env, jobject theobj, jobject aComponent, jobject aCenter, jobject aPmin, jobject aPmax)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Plane )*  )ptr_aComponent   );

gp_Pnt* the_aCenter = (gp_Pnt*) jcas_GetHandle(env,aCenter);
if ( the_aCenter == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aCenter = new gp_Pnt ();
 // jcas_SetHandle ( env, aCenter, the_aCenter );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPmin = (gp_Pnt*) jcas_GetHandle(env,aPmin);
if ( the_aPmin == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPmin = new gp_Pnt ();
 // jcas_SetHandle ( env, aPmin, the_aPmin );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPmax = (gp_Pnt*) jcas_GetHandle(env,aPmax);
if ( the_aPmax == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPmax = new gp_Pnt ();
 // jcas_SetHandle ( env, aPmax, the_aPmax );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
 thejret = the_this->PlaneAttributes(the_aComponent,*the_aCenter,*the_aPmin,*the_aPmax);

 Handle( Geom_Plane )* theprevious_aComponent =
  (  Handle( Geom_Plane )*  )jcas_GetHandle ( env, aComponent );

 if ( theprevious_aComponent ) delete theprevious_aComponent;

 Handle( Geom_Plane )* thenew_aComponent = new Handle( Geom_Plane );

 ( *thenew_aComponent ) = the_aComponent;

 jcas_SetHandle (env, aComponent, thenew_aComponent );


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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetPlaneAttributes (JNIEnv *env, jobject theobj, jobject aComponent, jobject aCenter, jobject aPmin, jobject aPmax)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Plane )*  )ptr_aComponent   );

gp_Pnt* the_aCenter = (gp_Pnt*) jcas_GetHandle(env,aCenter);
if ( the_aCenter == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aCenter = new gp_Pnt ();
 // jcas_SetHandle ( env, aCenter, the_aCenter );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPmin = (gp_Pnt*) jcas_GetHandle(env,aPmin);
if ( the_aPmin == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPmin = new gp_Pnt ();
 // jcas_SetHandle ( env, aPmin, the_aPmin );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPmax = (gp_Pnt*) jcas_GetHandle(env,aPmax);
if ( the_aPmax == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPmax = new gp_Pnt ();
 // jcas_SetHandle ( env, aPmax, the_aPmax );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
the_this->SetPlaneAttributes(the_aComponent,*the_aCenter,*the_aPmin,*the_aPmax);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Plane_Center (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
const gp_Pnt& theret = the_this->Center();
thejret = jcas_CreateObject(env,"jjAIS/gp_Pnt",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetCenter (JNIEnv *env, jobject theobj, jobject aCenter)
{

jcas_Locking alock(env);
{
try {
gp_Pnt* the_aCenter = (gp_Pnt*) jcas_GetHandle(env,aCenter);
if ( the_aCenter == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aCenter = new gp_Pnt ();
 // jcas_SetHandle ( env, aCenter, the_aCenter );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
the_this->SetCenter(*the_aCenter);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetAxis2Placement (JNIEnv *env, jobject theobj, jobject aComponent, jshort aPlaneType)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Axis2Placement ) the_aComponent;
 void*                ptr_aComponent = jcas_GetHandle(env,aComponent);
 
 if ( ptr_aComponent != NULL ) the_aComponent = *(   (  Handle( Geom_Axis2Placement )*  )ptr_aComponent   );

Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
the_this->SetAxis2Placement(the_aComponent,(AIS_TypeOfPlane) aPlaneType);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Plane_Axis2Placement (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Plane_TypeOfPlane (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TypeOfPlane();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_IsXYZPlane (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsXYZPlane();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_CurrentMode (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
 thejret = the_this->CurrentMode();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetCurrentMode (JNIEnv *env, jobject theobj, jboolean aCurrentMode)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
the_this->SetCurrentMode((Standard_Boolean) aCurrentMode);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Plane_AcceptDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_SetContext (JNIEnv *env, jobject theobj, jobject aCtx)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveContext ) the_aCtx;
 void*                ptr_aCtx = jcas_GetHandle(env,aCtx);
 
 if ( ptr_aCtx != NULL ) the_aCtx = *(   (  Handle( AIS_InteractiveContext )*  )ptr_aCtx   );

Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_ComputeSelection (JNIEnv *env, jobject theobj, jobject aSelection, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_Selection ) the_aSelection;
 void*                ptr_aSelection = jcas_GetHandle(env,aSelection);
 
 if ( ptr_aSelection != NULL ) the_aSelection = *(   (  Handle( SelectMgr_Selection )*  )ptr_aSelection   );

Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
the_this->ComputeSelection(the_aSelection,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetColor_11 (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_AIS_1Plane_1SetColor_12 (JNIEnv *env, jobject theobj, jobject aColor)
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
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Plane_UnsetColor (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Plane) the_this = *((Handle(AIS_Plane)*) jcas_GetHandle(env,theobj));
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


}
