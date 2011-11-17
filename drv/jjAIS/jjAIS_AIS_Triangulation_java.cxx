
#include <jjAIS_AIS_Triangulation.h>
#include <AIS_Triangulation.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <Poly_Triangulation.hxx>
#include <TColStd_HArray1OfInteger.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1Triangulation_AIS_1Triangulation_1Create_10 (JNIEnv *env, jobject theobj, jobject aTriangulation)
{

jcas_Locking alock(env);
{
try {
 Handle( Poly_Triangulation ) the_aTriangulation;
 void*                ptr_aTriangulation = jcas_GetHandle(env,aTriangulation);
 
 if ( ptr_aTriangulation != NULL ) the_aTriangulation = *(   (  Handle( Poly_Triangulation )*  )ptr_aTriangulation   );

Handle(AIS_Triangulation)* theret = new Handle(AIS_Triangulation);
*theret = new AIS_Triangulation(the_aTriangulation);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Triangulation_SetColors (JNIEnv *env, jobject theobj, jobject aColor)
{

jcas_Locking alock(env);
{
try {
 Handle( TColStd_HArray1OfInteger ) the_aColor;
 void*                ptr_aColor = jcas_GetHandle(env,aColor);
 
 if ( ptr_aColor != NULL ) the_aColor = *(   (  Handle( TColStd_HArray1OfInteger )*  )ptr_aColor   );

Handle(AIS_Triangulation) the_this = *((Handle(AIS_Triangulation)*) jcas_GetHandle(env,theobj));
the_this->SetColors(the_aColor);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Triangulation_GetColors (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Triangulation) the_this = *((Handle(AIS_Triangulation)*) jcas_GetHandle(env,theobj));
Handle(TColStd_HArray1OfInteger)* theret = new Handle(TColStd_HArray1OfInteger);
*theret = the_this->GetColors();
thejret = jcas_CreateObject(env,"jjAIS/TColStd_HArray1OfInteger",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1Triangulation_SetTriangulation (JNIEnv *env, jobject theobj, jobject aTriangulation)
{

jcas_Locking alock(env);
{
try {
 Handle( Poly_Triangulation ) the_aTriangulation;
 void*                ptr_aTriangulation = jcas_GetHandle(env,aTriangulation);
 
 if ( ptr_aTriangulation != NULL ) the_aTriangulation = *(   (  Handle( Poly_Triangulation )*  )ptr_aTriangulation   );

Handle(AIS_Triangulation) the_this = *((Handle(AIS_Triangulation)*) jcas_GetHandle(env,theobj));
the_this->SetTriangulation(the_aTriangulation);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1Triangulation_GetTriangulation (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_Triangulation) the_this = *((Handle(AIS_Triangulation)*) jcas_GetHandle(env,theobj));
Handle(Poly_Triangulation)* theret = new Handle(Poly_Triangulation);
*theret = the_this->GetTriangulation();
thejret = jcas_CreateObject(env,"jjAIS/Poly_Triangulation",theret);

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
