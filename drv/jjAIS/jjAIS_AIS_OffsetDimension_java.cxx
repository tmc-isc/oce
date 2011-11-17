
#include <jjAIS_AIS_OffsetDimension.h>
#include <AIS_OffsetDimension.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Shape.hxx>
#include <Standard_Real.hxx>
#include <TCollection_ExtendedString.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <AIS_KindOfDimension.hxx>
#include <Standard_Boolean.hxx>
#include <gp_Trsf.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1OffsetDimension_AIS_1OffsetDimension_1Create_10 (JNIEnv *env, jobject theobj, jobject FistShape, jobject SecondShape, jdouble aVal, jobject aText)
{

jcas_Locking alock(env);
{
try {
TopoDS_Shape* the_FistShape = (TopoDS_Shape*) jcas_GetHandle(env,FistShape);
if ( the_FistShape == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_FistShape = new TopoDS_Shape ();
 // jcas_SetHandle ( env, FistShape, the_FistShape );
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
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_OffsetDimension)* theret = new Handle(AIS_OffsetDimension);
*theret = new AIS_OffsetDimension(*the_FistShape,*the_SecondShape,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1OffsetDimension_AIS_1OffsetDimension_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_OffsetDimension) the_this = *((Handle(AIS_OffsetDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1OffsetDimension_KindOfDimension (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_OffsetDimension) the_this = *((Handle(AIS_OffsetDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1OffsetDimension_IsMovable (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_OffsetDimension) the_this = *((Handle(AIS_OffsetDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1OffsetDimension_SetRelativePos (JNIEnv *env, jobject theobj, jobject aTrsf)
{

jcas_Locking alock(env);
{
try {
gp_Trsf* the_aTrsf = (gp_Trsf*) jcas_GetHandle(env,aTrsf);
if ( the_aTrsf == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aTrsf = new gp_Trsf ();
 // jcas_SetHandle ( env, aTrsf, the_aTrsf );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_OffsetDimension) the_this = *((Handle(AIS_OffsetDimension)*) jcas_GetHandle(env,theobj));
the_this->SetRelativePos(*the_aTrsf);

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
