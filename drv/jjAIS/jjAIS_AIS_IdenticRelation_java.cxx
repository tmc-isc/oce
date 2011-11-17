
#include <jjAIS_AIS_IdenticRelation.h>
#include <AIS_IdenticRelation.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Shape.hxx>
#include <Geom_Plane.hxx>
#include <Standard_Boolean.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1IdenticRelation_AIS_1IdenticRelation_1Create_10 (JNIEnv *env, jobject theobj, jobject FirstShape, jobject SecondShape, jobject aPlane)
{

jcas_Locking alock(env);
{
try {
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
 Handle( Geom_Plane ) the_aPlane;
 void*                ptr_aPlane = jcas_GetHandle(env,aPlane);
 
 if ( ptr_aPlane != NULL ) the_aPlane = *(   (  Handle( Geom_Plane )*  )ptr_aPlane   );

Handle(AIS_IdenticRelation)* theret = new Handle(AIS_IdenticRelation);
*theret = new AIS_IdenticRelation(*the_FirstShape,*the_SecondShape,the_aPlane);
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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1IdenticRelation_IsMovable (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_IdenticRelation) the_this = *((Handle(AIS_IdenticRelation)*) jcas_GetHandle(env,theobj));
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1IdenticRelation_AIS_1IdenticRelation_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_IdenticRelation) the_this = *((Handle(AIS_IdenticRelation)*) jcas_GetHandle(env,theobj));
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
