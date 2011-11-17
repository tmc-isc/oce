
#include <jjAIS_AIS_Circle.h>
#include <AIS_Circle.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Geom_Circle.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <Standard_Integer.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Color.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_AIS_1Circle_1Create_11 (JNIEnv *env, jobject theobj, jobject aCircle)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Circle ) the_aCircle;
 void*                ptr_aCircle = jcas_GetHandle(env,aCircle);
 
 if ( ptr_aCircle != NULL ) the_aCircle = *(   (  Handle( Geom_Circle )*  )ptr_aCircle   );

Handle(AIS_Circle)* theret = new Handle(AIS_Circle);
*theret = new AIS_Circle(the_aCircle);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_AIS_1Circle_1Create_12 (JNIEnv *env, jobject theobj, jobject aCircle, jdouble aUStart, jdouble aUEnd, jboolean aSens)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Circle ) the_aCircle;
 void*                ptr_aCircle = jcas_GetHandle(env,aCircle);
 
 if ( ptr_aCircle != NULL ) the_aCircle = *(   (  Handle( Geom_Circle )*  )ptr_aCircle   );

Handle(AIS_Circle)* theret = new Handle(AIS_Circle);
*theret = new AIS_Circle(the_aCircle,(Standard_Real) aUStart,(Standard_Real) aUEnd,(Standard_Boolean) aSens);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_AIS_1Circle_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Circle_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Circle_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Circle_Circle (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
Handle(Geom_Circle)* theret = new Handle(Geom_Circle);
*theret = the_this->Circle();
thejret = jcas_CreateObject(env,"jjAIS/Geom_Circle",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_Parameters (JNIEnv *env, jobject theobj, jobject u1, jobject u2)
{

jcas_Locking alock(env);
{
try {
Standard_Real the_u1 = jcas_GetReal(env,u1);
Standard_Real the_u2 = jcas_GetReal(env,u2);
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
the_this->Parameters(the_u1,the_u2);
jcas_SetReal(env,u1,the_u1);
jcas_SetReal(env,u2,the_u2);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_SetCircle (JNIEnv *env, jobject theobj, jobject aCircle)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Circle ) the_aCircle;
 void*                ptr_aCircle = jcas_GetHandle(env,aCircle);
 
 if ( ptr_aCircle != NULL ) the_aCircle = *(   (  Handle( Geom_Circle )*  )ptr_aCircle   );

Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
the_this->SetCircle(the_aCircle);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_SetFirstParam (JNIEnv *env, jobject theobj, jdouble u)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
the_this->SetFirstParam((Standard_Real) u);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_SetLastParam (JNIEnv *env, jobject theobj, jdouble u)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
the_this->SetLastParam((Standard_Real) u);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_AIS_1Circle_1SetColor_11 (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_AIS_1Circle_1SetColor_12 (JNIEnv *env, jobject theobj, jobject aColor)
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
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_SetWidth (JNIEnv *env, jobject theobj, jdouble aValue)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_UnsetColor (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Circle_UnsetWidth (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Circle) the_this = *((Handle(AIS_Circle)*) jcas_GetHandle(env,theobj));
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
