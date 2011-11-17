
#include <jjAIS_AIS_EqualRadiusRelation.h>
#include <AIS_EqualRadiusRelation.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <TopoDS_Edge.hxx>
#include <Geom_Plane.hxx>
#include <Prs3d_Projector.hxx>
#include <Geom_Transformation.hxx>
#include <Prs3d_Presentation.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualRadiusRelation_AIS_1EqualRadiusRelation_1Create_10 (JNIEnv *env, jobject theobj, jobject aFirstEdge, jobject aSecondEdge, jobject aPlane)
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

Handle(AIS_EqualRadiusRelation)* theret = new Handle(AIS_EqualRadiusRelation);
*theret = new AIS_EqualRadiusRelation(*the_aFirstEdge,*the_aSecondEdge,the_aPlane);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1EqualRadiusRelation_AIS_1EqualRadiusRelation_1Compute_14 (JNIEnv *env, jobject theobj, jobject aProjector, jobject aTrsf, jobject aPresentation)
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

Handle(AIS_EqualRadiusRelation) the_this = *((Handle(AIS_EqualRadiusRelation)*) jcas_GetHandle(env,theobj));
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
