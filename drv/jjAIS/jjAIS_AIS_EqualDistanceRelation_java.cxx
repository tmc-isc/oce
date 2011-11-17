
#include <jjAIS_AIS_EqualDistanceRelation.h>
#include <AIS_EqualDistanceRelation.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Shape.hxx>
#include <Geom_Plane.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <AIS_Drawer.hxx>
#include <Standard_Real.hxx>
#include <TopoDS_Edge.hxx>
#include <Standard_Boolean.hxx>
#include <Bnd_Box.hxx>
#include <gp_Pnt.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <TopoDS_Vertex.hxx>
#include <AIS_TypeOfDist.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_AIS_1EqualDistanceRelation_1Create_10 (JNIEnv *env, jobject theobj, jobject aShape1, jobject aShape2, jobject aShape3, jobject aShape4, jobject aPlane)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_aShape1 = (TopoDS_Shape*) jcas_GetHandle(env,aShape1);
if ( the_aShape1 == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aShape1 = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aShape1, the_aShape1 );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Shape* the_aShape2 = (TopoDS_Shape*) jcas_GetHandle(env,aShape2);
if ( the_aShape2 == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aShape2 = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aShape2, the_aShape2 );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Shape* the_aShape3 = (TopoDS_Shape*) jcas_GetHandle(env,aShape3);
if ( the_aShape3 == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aShape3 = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aShape3, the_aShape3 );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
TopoDS_Shape* the_aShape4 = (TopoDS_Shape*) jcas_GetHandle(env,aShape4);
if ( the_aShape4 == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aShape4 = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aShape4, the_aShape4 );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( Geom_Plane ) the_aPlane;
 void*                ptr_aPlane = jcas_GetHandle(env,aPlane);
 
 if ( ptr_aPlane != NULL ) the_aPlane = *(   (  Handle( Geom_Plane )*  )ptr_aPlane   );

Handle(AIS_EqualDistanceRelation)* theret = new Handle(AIS_EqualDistanceRelation);
*theret = new AIS_EqualDistanceRelation(*the_aShape1,*the_aShape2,*the_aShape3,*the_aShape4,the_aPlane);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_SetShape3 (JNIEnv *env, jobject theobj, jobject aShape)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_aShape = (TopoDS_Shape*) jcas_GetHandle(env,aShape);
if ( the_aShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aShape, the_aShape );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_EqualDistanceRelation) the_this = *((Handle(AIS_EqualDistanceRelation)*) jcas_GetHandle(env,theobj));
the_this->SetShape3(*the_aShape);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_Shape3 (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_EqualDistanceRelation) the_this = *((Handle(AIS_EqualDistanceRelation)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->Shape3();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_SetShape4 (JNIEnv *env, jobject theobj, jobject aShape)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_aShape = (TopoDS_Shape*) jcas_GetHandle(env,aShape);
if ( the_aShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, aShape, the_aShape );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_EqualDistanceRelation) the_this = *((Handle(AIS_EqualDistanceRelation)*) jcas_GetHandle(env,theobj));
the_this->SetShape4(*the_aShape);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_Shape4 (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_EqualDistanceRelation) the_this = *((Handle(AIS_EqualDistanceRelation)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->Shape4();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_AIS_1EqualDistanceRelation_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_EqualDistanceRelation) the_this = *((Handle(AIS_EqualDistanceRelation)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_ComputeTwoEdgesLength (JNIEnv *env, jclass, jobject aPresentation, jobject aDrawer, jdouble ArrowSize, jobject FirstEdge, jobject SecondEdge, jobject Plane, jboolean AutomaticPos, jboolean IsSetBndBox, jobject BndBox, jobject Position, jobject FirstAttach, jobject SecondAttach, jobject FirstExtreme, jobject SecondExtreme, jobject SymbolPrs)
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
gp_Pnt* the_FirstExtreme = (gp_Pnt*) jcas_GetHandle(env,FirstExtreme);
if ( the_FirstExtreme == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstExtreme = new gp_Pnt ();
 // jcas_SetHandle ( env, FirstExtreme, the_FirstExtreme );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_SecondExtreme = (gp_Pnt*) jcas_GetHandle(env,SecondExtreme);
if ( the_SecondExtreme == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondExtreme = new gp_Pnt ();
 // jcas_SetHandle ( env, SecondExtreme, the_SecondExtreme );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
DsgPrs_ArrowSide the_SymbolPrs = ( DsgPrs_ArrowSide )jcas_GetShort ( env, SymbolPrs );
AIS_EqualDistanceRelation::ComputeTwoEdgesLength(the_aPresentation,the_aDrawer,(Standard_Real) ArrowSize,*the_FirstEdge,*the_SecondEdge,the_Plane,(Standard_Boolean) AutomaticPos,(Standard_Boolean) IsSetBndBox,*the_BndBox,*the_Position,*the_FirstAttach,*the_SecondAttach,*the_FirstExtreme,*the_SecondExtreme,the_SymbolPrs);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_ComputeTwoVerticesLength (JNIEnv *env, jclass, jobject aPresentation, jobject aDrawer, jdouble ArrowSize, jobject FirstVertex, jobject SecondVertex, jobject Plane, jboolean AutomaticPos, jboolean IsSetBndBox, jobject BndBox, jshort TypeDist, jobject Position, jobject FirstAttach, jobject SecondAttach, jobject FirstExtreme, jobject SecondExtreme, jobject SymbolPrs)
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
gp_Pnt* the_FirstExtreme = (gp_Pnt*) jcas_GetHandle(env,FirstExtreme);
if ( the_FirstExtreme == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstExtreme = new gp_Pnt ();
 // jcas_SetHandle ( env, FirstExtreme, the_FirstExtreme );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_SecondExtreme = (gp_Pnt*) jcas_GetHandle(env,SecondExtreme);
if ( the_SecondExtreme == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondExtreme = new gp_Pnt ();
 // jcas_SetHandle ( env, SecondExtreme, the_SecondExtreme );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
DsgPrs_ArrowSide the_SymbolPrs = ( DsgPrs_ArrowSide )jcas_GetShort ( env, SymbolPrs );
AIS_EqualDistanceRelation::ComputeTwoVerticesLength(the_aPresentation,the_aDrawer,(Standard_Real) ArrowSize,*the_FirstVertex,*the_SecondVertex,the_Plane,(Standard_Boolean) AutomaticPos,(Standard_Boolean) IsSetBndBox,*the_BndBox,(AIS_TypeOfDist) TypeDist,*the_Position,*the_FirstAttach,*the_SecondAttach,*the_FirstExtreme,*the_SecondExtreme,the_SymbolPrs);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualDistanceRelation_ComputeOneEdgeOneVertexLength (JNIEnv *env, jclass, jobject aPresentation, jobject aDrawer, jdouble ArrowSize, jobject FirstShape, jobject SecondShape, jobject Plane, jboolean AutomaticPos, jboolean IsSetBndBox, jobject BndBox, jobject Position, jobject FirstAttach, jobject SecondAttach, jobject FirstExtreme, jobject SecondExtreme, jobject SymbolPrs)
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
gp_Pnt* the_FirstExtreme = (gp_Pnt*) jcas_GetHandle(env,FirstExtreme);
if ( the_FirstExtreme == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FirstExtreme = new gp_Pnt ();
 // jcas_SetHandle ( env, FirstExtreme, the_FirstExtreme );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
gp_Pnt* the_SecondExtreme = (gp_Pnt*) jcas_GetHandle(env,SecondExtreme);
if ( the_SecondExtreme == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_SecondExtreme = new gp_Pnt ();
 // jcas_SetHandle ( env, SecondExtreme, the_SecondExtreme );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
DsgPrs_ArrowSide the_SymbolPrs = ( DsgPrs_ArrowSide )jcas_GetShort ( env, SymbolPrs );
AIS_EqualDistanceRelation::ComputeOneEdgeOneVertexLength(the_aPresentation,the_aDrawer,(Standard_Real) ArrowSize,*the_FirstShape,*the_SecondShape,the_Plane,(Standard_Boolean) AutomaticPos,(Standard_Boolean) IsSetBndBox,*the_BndBox,*the_Position,*the_FirstAttach,*the_SecondAttach,*the_FirstExtreme,*the_SecondExtreme,the_SymbolPrs);
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
