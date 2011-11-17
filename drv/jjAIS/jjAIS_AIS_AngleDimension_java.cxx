
#include <jjAIS_AIS_AngleDimension.h>
#include <AIS_AngleDimension.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <Standard_Real.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <TopoDS_Face.hxx>
#include <gp_Ax1.hxx>
#include <TopoDS_Shape.hxx>
#include <AIS_KindOfDimension.hxx>
#include <Standard_Boolean.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_11 (JNIEnv *env, jobject theobj, jobject aFirstEdge, jobject aSecondEdge, jobject aPlane, jdouble aVal, jobject aText)
{

jcas_Locking alock(env);
{
try {
TopoDS_Edge* the_aFirstEdge = (TopoDS_Edge*) jcas_GetHandle(env,aFirstEdge);
if ( the_aFirstEdge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aFirstEdge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, aFirstEdge, the_aFirstEdge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Edge* the_aSecondEdge = (TopoDS_Edge*) jcas_GetHandle(env,aSecondEdge);
if ( the_aSecondEdge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSecondEdge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, aSecondEdge, the_aSecondEdge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( Geom_Plane ) the_aPlane;
 void*                ptr_aPlane = jcas_GetHandle(env,aPlane);
 
 if ( ptr_aPlane != NULL ) the_aPlane = *(   (  Handle( Geom_Plane )*  )ptr_aPlane   );

TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aFirstEdge,*the_aSecondEdge,the_aPlane,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_12 (JNIEnv *env, jobject theobj, jobject aFirstEdge, jobject aSecondEdge, jobject aPlane, jdouble aVal, jobject aText, jobject aPosition, jshort aSymbolPrs, jdouble anArrowSize)
{

jcas_Locking alock(env);
{
try {
TopoDS_Edge* the_aFirstEdge = (TopoDS_Edge*) jcas_GetHandle(env,aFirstEdge);
if ( the_aFirstEdge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aFirstEdge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, aFirstEdge, the_aFirstEdge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Edge* the_aSecondEdge = (TopoDS_Edge*) jcas_GetHandle(env,aSecondEdge);
if ( the_aSecondEdge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSecondEdge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, aSecondEdge, the_aSecondEdge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( Geom_Plane ) the_aPlane;
 void*                ptr_aPlane = jcas_GetHandle(env,aPlane);
 
 if ( ptr_aPlane != NULL ) the_aPlane = *(   (  Handle( Geom_Plane )*  )ptr_aPlane   );

TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPosition = (gp_Pnt*) jcas_GetHandle(env,aPosition);
if ( the_aPosition == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPosition = new gp_Pnt ();
 // jcas_SetHandle ( env, aPosition, the_aPosition );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aFirstEdge,*the_aSecondEdge,the_aPlane,(Standard_Real) aVal,*the_aText,*the_aPosition,(DsgPrs_ArrowSide) aSymbolPrs,(Standard_Real) anArrowSize);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_13 (JNIEnv *env, jobject theobj, jobject aCone, jdouble aVal, jobject aText)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_aCone = (TopoDS_Face*) jcas_GetHandle(env,aCone);
if ( the_aCone == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aCone = new TopoDS_Face ();
 // jcas_SetHandle ( env, aCone, the_aCone );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aCone,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_14 (JNIEnv *env, jobject theobj, jobject aCone, jdouble aVal, jobject aText, jobject aPosition, jshort aSymbolPrs, jdouble anArrowSize)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_aCone = (TopoDS_Face*) jcas_GetHandle(env,aCone);
if ( the_aCone == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aCone = new TopoDS_Face ();
 // jcas_SetHandle ( env, aCone, the_aCone );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPosition = (gp_Pnt*) jcas_GetHandle(env,aPosition);
if ( the_aPosition == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPosition = new gp_Pnt ();
 // jcas_SetHandle ( env, aPosition, the_aPosition );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aCone,(Standard_Real) aVal,*the_aText,*the_aPosition,(DsgPrs_ArrowSide) aSymbolPrs,(Standard_Real) anArrowSize);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_15 (JNIEnv *env, jobject theobj, jobject aFirstFace, jobject aSecondFace, jobject anAxis, jdouble aVal, jobject aText)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_aFirstFace = (TopoDS_Face*) jcas_GetHandle(env,aFirstFace);
if ( the_aFirstFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aFirstFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aFirstFace, the_aFirstFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Face* the_aSecondFace = (TopoDS_Face*) jcas_GetHandle(env,aSecondFace);
if ( the_aSecondFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSecondFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aSecondFace, the_aSecondFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Ax1* the_anAxis = (gp_Ax1*) jcas_GetHandle(env,anAxis);
if ( the_anAxis == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_anAxis = new gp_Ax1 ();
 // jcas_SetHandle ( env, anAxis, the_anAxis );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aFirstFace,*the_aSecondFace,*the_anAxis,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_16 (JNIEnv *env, jobject theobj, jobject aFirstFace, jobject aSecondFace, jobject anAxis, jdouble aVal, jobject aText, jobject aPosition, jshort aSymbolPrs, jdouble anArrowSize)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_aFirstFace = (TopoDS_Face*) jcas_GetHandle(env,aFirstFace);
if ( the_aFirstFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aFirstFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aFirstFace, the_aFirstFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Face* the_aSecondFace = (TopoDS_Face*) jcas_GetHandle(env,aSecondFace);
if ( the_aSecondFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSecondFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aSecondFace, the_aSecondFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Ax1* the_anAxis = (gp_Ax1*) jcas_GetHandle(env,anAxis);
if ( the_anAxis == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_anAxis = new gp_Ax1 ();
 // jcas_SetHandle ( env, anAxis, the_anAxis );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPosition = (gp_Pnt*) jcas_GetHandle(env,aPosition);
if ( the_aPosition == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPosition = new gp_Pnt ();
 // jcas_SetHandle ( env, aPosition, the_aPosition );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aFirstFace,*the_aSecondFace,*the_anAxis,(Standard_Real) aVal,*the_aText,*the_aPosition,(DsgPrs_ArrowSide) aSymbolPrs,(Standard_Real) anArrowSize);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_17 (JNIEnv *env, jobject theobj, jobject aFFace, jobject aSFace, jdouble aVal, jobject aText)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_aFFace = (TopoDS_Face*) jcas_GetHandle(env,aFFace);
if ( the_aFFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aFFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aFFace, the_aFFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Face* the_aSFace = (TopoDS_Face*) jcas_GetHandle(env,aSFace);
if ( the_aSFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aSFace, the_aSFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aFFace,*the_aSFace,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Create_18 (JNIEnv *env, jobject theobj, jobject aFFace, jobject aSFace, jdouble aVal, jobject aText, jobject aPosition, jshort aSymbolPrs, jdouble anArrowSize)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_aFFace = (TopoDS_Face*) jcas_GetHandle(env,aFFace);
if ( the_aFFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aFFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aFFace, the_aFFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Face* the_aSFace = (TopoDS_Face*) jcas_GetHandle(env,aSFace);
if ( the_aSFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aSFace, the_aSFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_aPosition = (gp_Pnt*) jcas_GetHandle(env,aPosition);
if ( the_aPosition == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aPosition = new gp_Pnt ();
 // jcas_SetHandle ( env, aPosition, the_aPosition );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension)* theret = new Handle(AIS_AngleDimension);
*theret = new AIS_AngleDimension(*the_aFFace,*the_aSFace,(Standard_Real) aVal,*the_aText,*the_aPosition,(DsgPrs_ArrowSide) aSymbolPrs,(Standard_Real) anArrowSize);
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1AngleDimension_Axis (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
const gp_Ax1& theret = the_this->Axis();
thejret = jcas_CreateObject(env,"jjAIS/gp_Ax1",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_SetAxis (JNIEnv *env, jobject theobj, jobject anAxis)
{

jcas_Locking alock(env);
{
try {
gp_Ax1* the_anAxis = (gp_Ax1*) jcas_GetHandle(env,anAxis);
if ( the_anAxis == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_anAxis = new gp_Ax1 ();
 // jcas_SetHandle ( env, anAxis, the_anAxis );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
the_this->SetAxis(*the_anAxis);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_SetConeFace (JNIEnv *env, jobject theobj, jobject aConeFace)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_aConeFace = (TopoDS_Face*) jcas_GetHandle(env,aConeFace);
if ( the_aConeFace == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aConeFace = new TopoDS_Face ();
 // jcas_SetHandle ( env, aConeFace, the_aConeFace );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
the_this->SetConeFace(*the_aConeFace);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_SetFirstShape (JNIEnv *env, jobject theobj, jobject aFShape)
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
Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_SetSecondShape (JNIEnv *env, jobject theobj, jobject aSShape)
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
Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1AngleDimension_KindOfDimension (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1AngleDimension_IsMovable (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1AngleDimension_AIS_1AngleDimension_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_AngleDimension) the_this = *((Handle(AIS_AngleDimension)*) jcas_GetHandle(env,theobj));
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


}
