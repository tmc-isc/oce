
#include <jjAIS_AIS_DiameterDimension.h>
#include <AIS_DiameterDimension.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Shape.hxx>
#include <Standard_Real.hxx>
#include <TCollection_ExtendedString.hxx>
#include <gp_Pnt.hxx>
#include <DsgPrs_ArrowSide.hxx>
#include <Standard_Boolean.hxx>
#include <AIS_KindOfDimension.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_AIS_1DiameterDimension_1Create_11 (JNIEnv *env, jobject theobj, jobject aShape, jdouble aVal, jobject aText)
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
TCollection_ExtendedString* the_aText = (TCollection_ExtendedString*) jcas_GetHandle(env,aText);
if ( the_aText == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_aText = new TCollection_ExtendedString ();
 // jcas_SetHandle ( env, aText, the_aText );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_DiameterDimension)* theret = new Handle(AIS_DiameterDimension);
*theret = new AIS_DiameterDimension(*the_aShape,(Standard_Real) aVal,*the_aText);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_AIS_1DiameterDimension_1Create_12 (JNIEnv *env, jobject theobj, jobject aShape, jdouble aVal, jobject aText, jobject aPosition, jshort aSymbolPrs, jboolean aDiamSymbol, jdouble anArrowSize)
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
Handle(AIS_DiameterDimension)* theret = new Handle(AIS_DiameterDimension);
*theret = new AIS_DiameterDimension(*the_aShape,(Standard_Real) aVal,*the_aText,*the_aPosition,(DsgPrs_ArrowSide) aSymbolPrs,(Standard_Boolean) aDiamSymbol,(Standard_Real) anArrowSize);
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1DiameterDimension_KindOfDimension (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DiameterDimension) the_this = *((Handle(AIS_DiameterDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1DiameterDimension_IsMovable (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DiameterDimension) the_this = *((Handle(AIS_DiameterDimension)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1DiameterDimension_DiamSymbol (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_DiameterDimension) the_this = *((Handle(AIS_DiameterDimension)*) jcas_GetHandle(env,theobj));
 thejret = the_this->DiamSymbol();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_SetDiamSymbol (JNIEnv *env, jobject theobj, jboolean aDiamSymbol)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_DiameterDimension) the_this = *((Handle(AIS_DiameterDimension)*) jcas_GetHandle(env,theobj));
the_this->SetDiamSymbol((Standard_Boolean) aDiamSymbol);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1DiameterDimension_AIS_1DiameterDimension_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_DiameterDimension) the_this = *((Handle(AIS_DiameterDimension)*) jcas_GetHandle(env,theobj));
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
