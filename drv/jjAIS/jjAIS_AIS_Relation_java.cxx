
#include <jjAIS_AIS_Relation.h>
#include <AIS_Relation.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Quantity_NameOfColor.hxx>
#include <Quantity_Color.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <AIS_KindOfDimension.hxx>
#include <Standard_Boolean.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_Real.hxx>
#include <Geom_Plane.hxx>
#include <gp_Pnt.hxx>
#include <TCollection_ExtendedString.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <Standard_Integer.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_AIS_1Relation_1SetColor_11 (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_AIS_1Relation_1SetColor_12 (JNIEnv *env, jobject theobj, jobject aColor)
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
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_UnsetColor (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Relation_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Relation_KindOfDimension (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
 thejret = the_this->KindOfDimension();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Relation_IsMovable (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsMovable();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Relation_FirstShape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->FirstShape();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetFirstShape (JNIEnv *env, jobject theobj, jobject aFShape)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_aFShape = (TopoDS_Shape*) jcas_GetHandle(env,aFShape);
if ( the_aFShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aFShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aFShape, the_aFShape );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetFirstShape(*the_aFShape);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Relation_SecondShape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->SecondShape();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetSecondShape (JNIEnv *env, jobject theobj, jobject aSShape)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_aSShape = (TopoDS_Shape*) jcas_GetHandle(env,aSShape);
if ( the_aSShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aSShape, the_aSShape );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetSecondShape(*the_aSShape);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetBndBox (JNIEnv *env, jobject theobj, jdouble Xmin, jdouble Ymin, jdouble Zmin, jdouble Xmax, jdouble Ymax, jdouble Zmax)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetBndBox((Standard_Real) Xmin,(Standard_Real) Ymin,(Standard_Real) Zmin,(Standard_Real) Xmax,(Standard_Real) Ymax,(Standard_Real) Zmax);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_UnsetBndBox (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->UnsetBndBox();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Relation_Plane (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
Handle(Geom_Plane)* theret = new Handle(Geom_Plane);
*theret = the_this->Plane();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetPlane (JNIEnv *env, jobject theobj, jobject aPlane)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Plane ) the_aPlane;
 void*                ptr_aPlane = jcas_GetHandle(env,aPlane);
 
 if ( ptr_aPlane != NULL ) the_aPlane = *(   (  Handle( Geom_Plane )*  )ptr_aPlane   );

Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetPlane(the_aPlane);

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Relation_Value (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Value();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetValue (JNIEnv *env, jobject theobj, jdouble aVal)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetValue((Standard_Real) aVal);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Relation_Position (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
const gp_Pnt& theret = the_this->Position();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetPosition (JNIEnv *env, jobject theobj, jobject aPosition)
{

jcas_Locking alock(env);
{
try {
gp_Pnt* the_aPosition = (gp_Pnt*) jcas_GetHandle(env,aPosition);
if ( the_aPosition == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPosition = new gp_Pnt ();
 // jcas_SetHandle ( env, aPosition, the_aPosition );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetPosition(*the_aPosition);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Relation_Text (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
const TCollection_ExtendedString& theret = the_this->Text();
thejret = jcas_CreateObject(env,"jjAIS/TCollection_ExtendedString",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetText (JNIEnv *env, jobject theobj, jobject aText)
{

jcas_Locking alock(env);
{
try {
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetText(*the_aText);

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



JNIEXPORT jdouble JNICALL Java_jjAIS_AIS_1Relation_ArrowSize (JNIEnv *env, jobject theobj)
{
jdouble thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ArrowSize();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetArrowSize (JNIEnv *env, jobject theobj, jdouble anArrowSize)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetArrowSize((Standard_Real) anArrowSize);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Relation_SymbolPrs (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
 thejret = the_this->SymbolPrs();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetSymbolPrs (JNIEnv *env, jobject theobj, jshort aSymbolPrs)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetSymbolPrs((DsgPrs_ArrowSide) aSymbolPrs);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetExtShape (JNIEnv *env, jobject theobj, jint aIndex)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetExtShape((Standard_Integer) aIndex);

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Relation_ExtShape (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ExtShape();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Relation_AcceptDisplayMode (JNIEnv *env, jobject theobj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Relation_SetAutomaticPosition (JNIEnv *env, jobject theobj, jboolean aStatus)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
the_this->SetAutomaticPosition((Standard_Boolean) aStatus);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1Relation_AutomaticPosition (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Relation) the_this = *((Handle(AIS_Relation)*) jcas_GetHandle(env,theobj));
 thejret = the_this->AutomaticPosition();

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
