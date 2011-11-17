
#include <jjAIS_AIS_LengthDimension.h>
#include <AIS_LengthDimension.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Face.hxx>
#include <Standard_Real.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <Geom_Plane.hxx>
#include <AIS_TypeOfDist.hxx>
#include <AIS_KindOfDimension.hxx>
#include <Standard_Boolean.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <AIS_Drawer.hxx>
#include <Bnd_Box.hxx>
#include <Standard_Integer.hxx>
#include <gp_Dir.hxx>
#include <TopoDS_Vertex.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_11 (JNIEnv *env, jobject theobj, jobject aFirstFace, jobject aSecondFace, jdouble aVal, jobject aText)
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
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_LengthDimension)* theret = new Handle(AIS_LengthDimension);
*theret = new AIS_LengthDimension(*the_aFirstFace,*the_aSecondFace,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_12 (JNIEnv *env, jobject theobj, jobject aFirstFace, jobject aSecondFace, jdouble aVal, jobject aText, jobject aPosition, jshort aSymbolPrs, jdouble anArrowSize)
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
Handle(AIS_LengthDimension)* theret = new Handle(AIS_LengthDimension);
*theret = new AIS_LengthDimension(*the_aFirstFace,*the_aSecondFace,(Standard_Real) aVal,*the_aText,*the_aPosition,(DsgPrs_ArrowSide) aSymbolPrs,(Standard_Real) anArrowSize);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_13 (JNIEnv *env, jobject theobj, jobject Face, jobject Edge, jdouble Val, jobject Text)
{

jcas_Locking alock(env);
{
try {
TopoDS_Face* the_Face = (TopoDS_Face*) jcas_GetHandle(env,Face);
if ( the_Face == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Face = new TopoDS_Face ();
 // jcas_SetHandle ( env, Face, the_Face );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Edge* the_Edge = (TopoDS_Edge*) jcas_GetHandle(env,Edge);
if ( the_Edge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Edge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, Edge, the_Edge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TCollection_ExtendedString* the_Text = (TCollection_ExtendedString*) jcas_GetHandle(env,Text);
if ( the_Text == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Text = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, Text, the_Text );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_LengthDimension)* theret = new Handle(AIS_LengthDimension);
*theret = new AIS_LengthDimension(*the_Face,*the_Edge,(Standard_Real) Val,*the_Text);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_14 (JNIEnv *env, jobject theobj, jobject aFShape, jobject aSShape, jobject aPlane, jdouble aVal, jobject aText)
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
TopoDS_Shape* the_aSShape = (TopoDS_Shape*) jcas_GetHandle(env,aSShape);
if ( the_aSShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aSShape, the_aSShape );
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
Handle(AIS_LengthDimension)* theret = new Handle(AIS_LengthDimension);
*theret = new AIS_LengthDimension(*the_aFShape,*the_aSShape,the_aPlane,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Create_15 (JNIEnv *env, jobject theobj, jobject aFShape, jobject aSShape, jobject aPlane, jdouble aVal, jobject aText, jobject aPosition, jshort aSymbolPrs, jshort aTypeDist, jdouble anArrowSize)
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
TopoDS_Shape* the_aSShape = (TopoDS_Shape*) jcas_GetHandle(env,aSShape);
if ( the_aSShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aSShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aSShape, the_aSShape );
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
Handle(AIS_LengthDimension)* theret = new Handle(AIS_LengthDimension);
*theret = new AIS_LengthDimension(*the_aFShape,*the_aSShape,the_aPlane,(Standard_Real) aVal,*the_aText,*the_aPosition,(DsgPrs_ArrowSide) aSymbolPrs,(AIS_TypeOfDist) aTypeDist,(Standard_Real) anArrowSize);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_SetFirstShape (JNIEnv *env, jobject theobj, jobject aFShape)
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
Handle(AIS_LengthDimension) the_this = *((Handle(AIS_LengthDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_SetSecondShape (JNIEnv *env, jobject theobj, jobject aSShape)
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
Handle(AIS_LengthDimension) the_this = *((Handle(AIS_LengthDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LengthDimension_KindOfDimension (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LengthDimension) the_this = *((Handle(AIS_LengthDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LengthDimension_IsMovable (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LengthDimension) the_this = *((Handle(AIS_LengthDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LengthDimension_TypeOfDist (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LengthDimension) the_this = *((Handle(AIS_LengthDimension)*) jcas_GetHandle(env,theobj));
 thejret = the_this->TypeOfDist();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_SetTypeOfDist (JNIEnv *env, jobject theobj, jshort aTypeDist)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LengthDimension) the_this = *((Handle(AIS_LengthDimension)*) jcas_GetHandle(env,theobj));
the_this->SetTypeOfDist((AIS_TypeOfDist) aTypeDist);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_AIS_1LengthDimension_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_LengthDimension) the_this = *((Handle(AIS_LengthDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_ComputeTwoEdgesLength (JNIEnv *env, jclass, jobject aPresentation, jobject aDrawer, jobject aText, jdouble ArrowSize, jobject FirstEdge, jobject SecondEdge, jobject Plane, jboolean AutomaticPos, jboolean IsSetBndBox, jobject BndBox, jobject ExtShape, jobject Val, jobject DirAttach, jobject Position, jobject FirstAttach, jobject SecondAttach, jobject SymbolPrs)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_Presentation ) the_aPresentation;
 void*                ptr_aPresentation = jcas_GetHandle(env,aPresentation);
 
 if ( ptr_aPresentation != NULL ) the_aPresentation = *(   (  Handle( Prs3d_Presentation )*  )ptr_aPresentation   );

 Handle( AIS_Drawer ) the_aDrawer;
 void*                ptr_aDrawer = jcas_GetHandle(env,aDrawer);
 
 if ( ptr_aDrawer != NULL ) the_aDrawer = *(   (  Handle( AIS_Drawer )*  )ptr_aDrawer   );

TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Edge* the_FirstEdge = (TopoDS_Edge*) jcas_GetHandle(env,FirstEdge);
if ( the_FirstEdge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstEdge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, FirstEdge, the_FirstEdge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Edge* the_SecondEdge = (TopoDS_Edge*) jcas_GetHandle(env,SecondEdge);
if ( the_SecondEdge == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondEdge = new TopoDS_Edge ();
 // jcas_SetHandle ( env, SecondEdge, the_SecondEdge );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( Geom_Plane ) the_Plane;
 void*                ptr_Plane = jcas_GetHandle(env,Plane);
 
 if ( ptr_Plane != NULL ) the_Plane = *(   (  Handle( Geom_Plane )*  )ptr_Plane   );

Bnd_Box* the_BndBox = (Bnd_Box*) jcas_GetHandle(env,BndBox);
if ( the_BndBox == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_BndBox = new Bnd_Box ();
 // jcas_SetHandle ( env, BndBox, the_BndBox );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Standard_Integer the_ExtShape = jcas_GetInteger(env,ExtShape);
Standard_Real the_Val = jcas_GetReal(env,Val);
gp_Dir* the_DirAttach = (gp_Dir*) jcas_GetHandle(env,DirAttach);
if ( the_DirAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_DirAttach = new gp_Dir ();
 // jcas_SetHandle ( env, DirAttach, the_DirAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_Position = (gp_Pnt*) jcas_GetHandle(env,Position);
if ( the_Position == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Position = new gp_Pnt ();
 // jcas_SetHandle ( env, Position, the_Position );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_FirstAttach = (gp_Pnt*) jcas_GetHandle(env,FirstAttach);
if ( the_FirstAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstAttach = new gp_Pnt ();
 // jcas_SetHandle ( env, FirstAttach, the_FirstAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_SecondAttach = (gp_Pnt*) jcas_GetHandle(env,SecondAttach);
if ( the_SecondAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondAttach = new gp_Pnt ();
 // jcas_SetHandle ( env, SecondAttach, the_SecondAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
DsgPrs_ArrowSide the_SymbolPrs = ( DsgPrs_ArrowSide )jcas_GetShort ( env, SymbolPrs );
AIS_LengthDimension::ComputeTwoEdgesLength(the_aPresentation,the_aDrawer,*the_aText,(Standard_Real) ArrowSize,*the_FirstEdge,*the_SecondEdge,the_Plane,(Standard_Boolean) AutomaticPos,(Standard_Boolean) IsSetBndBox,*the_BndBox,the_ExtShape,the_Val,*the_DirAttach,*the_Position,*the_FirstAttach,*the_SecondAttach,the_SymbolPrs);
jcas_SetInteger(env,ExtShape,the_ExtShape);
jcas_SetReal(env,Val,the_Val);
jcas_SetShort(env,SymbolPrs,the_SymbolPrs);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_ComputeOneEdgeOneVertexLength (JNIEnv *env, jclass, jobject aPresentation, jobject aDrawer, jobject aText, jdouble ArrowSize, jobject FirstShape, jobject SecondShape, jobject Plane, jboolean AutomaticPos, jboolean IsSetBndBox, jobject BndBox, jobject ExtShape, jobject Val, jobject DirAttach, jobject Position, jobject FirstAttach, jobject SecondAttach, jobject SymbolPrs)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_Presentation ) the_aPresentation;
 void*                ptr_aPresentation = jcas_GetHandle(env,aPresentation);
 
 if ( ptr_aPresentation != NULL ) the_aPresentation = *(   (  Handle( Prs3d_Presentation )*  )ptr_aPresentation   );

 Handle( AIS_Drawer ) the_aDrawer;
 void*                ptr_aDrawer = jcas_GetHandle(env,aDrawer);
 
 if ( ptr_aDrawer != NULL ) the_aDrawer = *(   (  Handle( AIS_Drawer )*  )ptr_aDrawer   );

TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Shape* the_FirstShape = (TopoDS_Shape*) jcas_GetHandle(env,FirstShape);
if ( the_FirstShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, FirstShape, the_FirstShape );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Shape* the_SecondShape = (TopoDS_Shape*) jcas_GetHandle(env,SecondShape);
if ( the_SecondShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, SecondShape, the_SecondShape );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( Geom_Plane ) the_Plane;
 void*                ptr_Plane = jcas_GetHandle(env,Plane);
 
 if ( ptr_Plane != NULL ) the_Plane = *(   (  Handle( Geom_Plane )*  )ptr_Plane   );

Bnd_Box* the_BndBox = (Bnd_Box*) jcas_GetHandle(env,BndBox);
if ( the_BndBox == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_BndBox = new Bnd_Box ();
 // jcas_SetHandle ( env, BndBox, the_BndBox );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Standard_Integer the_ExtShape = jcas_GetInteger(env,ExtShape);
Standard_Real the_Val = jcas_GetReal(env,Val);
gp_Dir* the_DirAttach = (gp_Dir*) jcas_GetHandle(env,DirAttach);
if ( the_DirAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_DirAttach = new gp_Dir ();
 // jcas_SetHandle ( env, DirAttach, the_DirAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_Position = (gp_Pnt*) jcas_GetHandle(env,Position);
if ( the_Position == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Position = new gp_Pnt ();
 // jcas_SetHandle ( env, Position, the_Position );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_FirstAttach = (gp_Pnt*) jcas_GetHandle(env,FirstAttach);
if ( the_FirstAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstAttach = new gp_Pnt ();
 // jcas_SetHandle ( env, FirstAttach, the_FirstAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_SecondAttach = (gp_Pnt*) jcas_GetHandle(env,SecondAttach);
if ( the_SecondAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondAttach = new gp_Pnt ();
 // jcas_SetHandle ( env, SecondAttach, the_SecondAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
DsgPrs_ArrowSide the_SymbolPrs = ( DsgPrs_ArrowSide )jcas_GetShort ( env, SymbolPrs );
AIS_LengthDimension::ComputeOneEdgeOneVertexLength(the_aPresentation,the_aDrawer,*the_aText,(Standard_Real) ArrowSize,*the_FirstShape,*the_SecondShape,the_Plane,(Standard_Boolean) AutomaticPos,(Standard_Boolean) IsSetBndBox,*the_BndBox,the_ExtShape,the_Val,*the_DirAttach,*the_Position,*the_FirstAttach,*the_SecondAttach,the_SymbolPrs);
jcas_SetInteger(env,ExtShape,the_ExtShape);
jcas_SetReal(env,Val,the_Val);
jcas_SetShort(env,SymbolPrs,the_SymbolPrs);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LengthDimension_ComputeTwoVerticesLength (JNIEnv *env, jclass, jobject aPresentation, jobject aDrawer, jobject aText, jdouble ArrowSize, jobject FirstVertex, jobject SecondVertex, jobject Plane, jboolean AutomaticPos, jboolean IsSetBndBox, jobject BndBox, jshort TypeDist, jobject ExtShape, jobject Val, jobject DirAttach, jobject Position, jobject FirstAttach, jobject SecondAttach, jobject SymbolPrs)
{

jcas_Locking alock(env);
{
try {
 Handle( Prs3d_Presentation ) the_aPresentation;
 void*                ptr_aPresentation = jcas_GetHandle(env,aPresentation);
 
 if ( ptr_aPresentation != NULL ) the_aPresentation = *(   (  Handle( Prs3d_Presentation )*  )ptr_aPresentation   );

 Handle( AIS_Drawer ) the_aDrawer;
 void*                ptr_aDrawer = jcas_GetHandle(env,aDrawer);
 
 if ( ptr_aDrawer != NULL ) the_aDrawer = *(   (  Handle( AIS_Drawer )*  )ptr_aDrawer   );

TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Vertex* the_FirstVertex = (TopoDS_Vertex*) jcas_GetHandle(env,FirstVertex);
if ( the_FirstVertex == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstVertex = new TopoDS_Vertex ();
 // jcas_SetHandle ( env, FirstVertex, the_FirstVertex );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Vertex* the_SecondVertex = (TopoDS_Vertex*) jcas_GetHandle(env,SecondVertex);
if ( the_SecondVertex == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondVertex = new TopoDS_Vertex ();
 // jcas_SetHandle ( env, SecondVertex, the_SecondVertex );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( Geom_Plane ) the_Plane;
 void*                ptr_Plane = jcas_GetHandle(env,Plane);
 
 if ( ptr_Plane != NULL ) the_Plane = *(   (  Handle( Geom_Plane )*  )ptr_Plane   );

Bnd_Box* the_BndBox = (Bnd_Box*) jcas_GetHandle(env,BndBox);
if ( the_BndBox == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_BndBox = new Bnd_Box ();
 // jcas_SetHandle ( env, BndBox, the_BndBox );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Standard_Integer the_ExtShape = jcas_GetInteger(env,ExtShape);
Standard_Real the_Val = jcas_GetReal(env,Val);
gp_Dir* the_DirAttach = (gp_Dir*) jcas_GetHandle(env,DirAttach);
if ( the_DirAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_DirAttach = new gp_Dir ();
 // jcas_SetHandle ( env, DirAttach, the_DirAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_Position = (gp_Pnt*) jcas_GetHandle(env,Position);
if ( the_Position == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Position = new gp_Pnt ();
 // jcas_SetHandle ( env, Position, the_Position );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_FirstAttach = (gp_Pnt*) jcas_GetHandle(env,FirstAttach);
if ( the_FirstAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstAttach = new gp_Pnt ();
 // jcas_SetHandle ( env, FirstAttach, the_FirstAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_SecondAttach = (gp_Pnt*) jcas_GetHandle(env,SecondAttach);
if ( the_SecondAttach == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondAttach = new gp_Pnt ();
 // jcas_SetHandle ( env, SecondAttach, the_SecondAttach );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
DsgPrs_ArrowSide the_SymbolPrs = ( DsgPrs_ArrowSide )jcas_GetShort ( env, SymbolPrs );
AIS_LengthDimension::ComputeTwoVerticesLength(the_aPresentation,the_aDrawer,*the_aText,(Standard_Real) ArrowSize,*the_FirstVertex,*the_SecondVertex,the_Plane,(Standard_Boolean) AutomaticPos,(Standard_Boolean) IsSetBndBox,*the_BndBox,(AIS_TypeOfDist) TypeDist,the_ExtShape,the_Val,*the_DirAttach,*the_Position,*the_FirstAttach,*the_SecondAttach,the_SymbolPrs);
jcas_SetInteger(env,ExtShape,the_ExtShape);
jcas_SetReal(env,Val,the_Val);
jcas_SetShort(env,SymbolPrs,the_SymbolPrs);

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
