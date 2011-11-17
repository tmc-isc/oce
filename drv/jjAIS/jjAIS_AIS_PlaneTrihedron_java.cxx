
#include <jjAIS_AIS_PlaneTrihedron.h>
#include <AIS_PlaneTrihedron.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Geom_Plane.hxx>
#include <AIS_Line.hxx>
#include <AIS_Point.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Integer.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Color.hxx>
#include <TCollection_AsciiString.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_AIS_1PlaneTrihedron_1Create_10 (JNIEnv *env, jobject theobj, jobject aPlane)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aPlane;
 void*                ptr_aPlane = jcas_GetHandle(env,aPlane);
 
 if ( ptr_aPlane != NULL ) the_aPlane = *(   (  Handle( Geom_Plane )*  )ptr_aPlane   );

Handle(AIS_PlaneTrihedron)* theret = new Handle(AIS_PlaneTrihedron);
*theret = new AIS_PlaneTrihedron(the_aPlane);
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1PlaneTrihedron_Component (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_SetComponent (JNIEnv *env, jobject theobj, jobject aPlane)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aPlane;
 void*                ptr_aPlane = jcas_GetHandle(env,aPlane);
 
 if ( ptr_aPlane != NULL ) the_aPlane = *(   (  Handle( Geom_Plane )*  )ptr_aPlane   );

Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
the_this->SetComponent(the_aPlane);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1PlaneTrihedron_XAxis (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Line)* theret = new Handle(AIS_Line);
*theret = the_this->XAxis();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Line",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1PlaneTrihedron_YAxis (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
Handle(AIS_Line)* theret = new Handle(AIS_Line);
*theret = the_this->YAxis();
thejret = jcas_CreateObject(env,"jjAIS/AIS_Line",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1PlaneTrihedron_Position (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_SetLength (JNIEnv *env, jobject theobj, jdouble theLength)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
the_this->SetLength((Standard_Real) theLength);

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1PlaneTrihedron_GetLength (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
 thejret = the_this->GetLength();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1PlaneTrihedron_AcceptDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_AIS_1PlaneTrihedron_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1PlaneTrihedron_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1PlaneTrihedron_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_AIS_1PlaneTrihedron_1SetColor_11 (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_AIS_1PlaneTrihedron_1SetColor_12 (JNIEnv *env, jobject theobj, jobject aColor)
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
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_SetXLabel (JNIEnv *env, jobject theobj, jobject aLabel)
{

jcas_Locking alock(env);
{
try {
TCollection_AsciiString* the_aLabel = (TCollection_AsciiString*) jcas_GetHandle(env,aLabel);
if ( the_aLabel == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aLabel = new TCollection_AsciiString ();
 // jcas_SetHandle ( env, aLabel, the_aLabel );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
the_this->SetXLabel(*the_aLabel);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1PlaneTrihedron_SetYLabel (JNIEnv *env, jobject theobj, jobject aLabel)
{

jcas_Locking alock(env);
{
try {
TCollection_AsciiString* the_aLabel = (TCollection_AsciiString*) jcas_GetHandle(env,aLabel);
if ( the_aLabel == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aLabel = new TCollection_AsciiString ();
 // jcas_SetHandle ( env, aLabel, the_aLabel );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_PlaneTrihedron) the_this = *((Handle(AIS_PlaneTrihedron)*) jcas_GetHandle(env,theobj));
the_this->SetYLabel(*the_aLabel);

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
