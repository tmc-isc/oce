
#include <jjAIS_AIS_Line.h>
#include <AIS_Line.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Geom_Line.hxx>
#include <Geom_Point.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>
#include <Standard_Integer.hxx>
#include <AIS_KindOfInteractive.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Quantity_Color.hxx>
#include <Standard_Real.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_AIS_1Line_1Create_11 (JNIEnv *env, jobject theobj, jobject aLine)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Line ) the_aLine;
 void*                ptr_aLine = jcas_GetHandle(env,aLine);
 
 if ( ptr_aLine != NULL ) the_aLine = *(   (  Handle( Geom_Line )*  )ptr_aLine   );

Handle(AIS_Line)* theret = new Handle(AIS_Line);
*theret = new AIS_Line(the_aLine);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_AIS_1Line_1Create_12 (JNIEnv *env, jobject theobj, jobject aStartPoint, jobject aEndPoint)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Point ) the_aStartPoint;
 void*                ptr_aStartPoint = jcas_GetHandle(env,aStartPoint);
 
 if ( ptr_aStartPoint != NULL ) the_aStartPoint = *(   (  Handle( Geom_Point )*  )ptr_aStartPoint   );

 Handle( Geom_Point ) the_aEndPoint;
 void*                ptr_aEndPoint = jcas_GetHandle(env,aEndPoint);
 
 if ( ptr_aEndPoint != NULL ) the_aEndPoint = *(   (  Handle( Geom_Point )*  )ptr_aEndPoint   );

Handle(AIS_Line)* theret = new Handle(AIS_Line);
*theret = new AIS_Line(the_aStartPoint,the_aEndPoint);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_AIS_1Line_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1Line_Signature (JNIEnv *env, jobject theobj)
{
jint thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1Line_Type (JNIEnv *env, jobject theobj)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Line_Line (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
Handle(Geom_Line)* theret = new Handle(Geom_Line);
*theret = the_this->Line();
thejret = jcas_CreateObject(env,"jjAIS/Geom_Line",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_Points (JNIEnv *env, jobject theobj, jobject PStart, jobject PEnd)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Point ) the_PStart;
 void*                ptr_PStart = jcas_GetHandle(env,PStart);
 
 if ( ptr_PStart != NULL ) the_PStart = *(   (  Handle( Geom_Point )*  )ptr_PStart   );

 Handle( Geom_Point ) the_PEnd;
 void*                ptr_PEnd = jcas_GetHandle(env,PEnd);
 
 if ( ptr_PEnd != NULL ) the_PEnd = *(   (  Handle( Geom_Point )*  )ptr_PEnd   );

Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
the_this->Points(the_PStart,the_PEnd);

 Handle( Geom_Point )* theprevious_PStart =
  (  Handle( Geom_Point )*  )jcas_GetHandle ( env, PStart );

 if ( theprevious_PStart ) delete theprevious_PStart;

 Handle( Geom_Point )* thenew_PStart = new Handle( Geom_Point );

 ( *thenew_PStart ) = the_PStart;

 jcas_SetHandle (env, PStart, thenew_PStart );


 Handle( Geom_Point )* theprevious_PEnd =
  (  Handle( Geom_Point )*  )jcas_GetHandle ( env, PEnd );

 if ( theprevious_PEnd ) delete theprevious_PEnd;

 Handle( Geom_Point )* thenew_PEnd = new Handle( Geom_Point );

 ( *thenew_PEnd ) = the_PEnd;

 jcas_SetHandle (env, PEnd, thenew_PEnd );


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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_SetLine (JNIEnv *env, jobject theobj, jobject L)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Line ) the_L;
 void*                ptr_L = jcas_GetHandle(env,L);
 
 if ( ptr_L != NULL ) the_L = *(   (  Handle( Geom_Line )*  )ptr_L   );

Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
the_this->SetLine(the_L);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_SetPoints (JNIEnv *env, jobject theobj, jobject P1, jobject P2)
{

jcas_Locking alock(env);
{
try {
 Handle( Geom_Point ) the_P1;
 void*                ptr_P1 = jcas_GetHandle(env,P1);
 
 if ( ptr_P1 != NULL ) the_P1 = *(   (  Handle( Geom_Point )*  )ptr_P1   );

 Handle( Geom_Point ) the_P2;
 void*                ptr_P2 = jcas_GetHandle(env,P2);
 
 if ( ptr_P2 != NULL ) the_P2 = *(   (  Handle( Geom_Point )*  )ptr_P2   );

Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
the_this->SetPoints(the_P1,the_P2);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_AIS_1Line_1SetColor_11 (JNIEnv *env, jobject theobj, jshort aColor)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_AIS_1Line_1SetColor_12 (JNIEnv *env, jobject theobj, jobject aColor)
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
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_SetWidth (JNIEnv *env, jobject theobj, jdouble aValue)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_UnsetColor (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Line_UnsetWidth (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_Line) the_this = *((Handle(AIS_Line)*) jcas_GetHandle(env,theobj));
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
