
#include <jjAIS_AIS_LocalContext.h>
#include <AIS_LocalContext.hxx>
#include <jcas.hxx>
#include <stdlib.h>
#include <Standard_ErrorHandler.hxx>
#include <Standard_Failure.hxx>
#include <Standard_SStream.hxx>

#include <AIS_InteractiveContext.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
#include <TCollection_AsciiString.hxx>
#include <Select3D_Projector.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_ClearMode.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <TColStd_ListOfInteger.hxx>
#include <SelectMgr_Filter.hxx>
#include <SelectMgr_ListOfFilter.hxx>
#include <SelectMgr_OrFilter.hxx>
#include <AIS_StatusOfDetection.hxx>
#include <V3d_View.hxx>
#include <AIS_StatusOfPick.hxx>
#include <TColgp_Array1OfPnt2d.hxx>
#include <TopoDS_Shape.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <Standard_Transient.hxx>
#include <TColStd_MapOfTransient.hxx>
#include <Quantity_NameOfColor.hxx>
#include <Standard_Real.hxx>
#include <StdSelect_ViewerSelector3d.hxx>


extern "C" {


JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Create_11 (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext)* theret = new Handle(AIS_LocalContext);
*theret = new AIS_LocalContext();
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Create_12 (JNIEnv *env, jobject theobj, jobject aCtx, jint anIndex, jboolean LoadDisplayed, jboolean AcceptStandardModes, jboolean AcceptErase, jboolean UseBothViewers)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveContext ) the_aCtx;
 void*                ptr_aCtx = jcas_GetHandle(env,aCtx);
 
 if ( ptr_aCtx != NULL ) the_aCtx = *(   (  Handle( AIS_InteractiveContext )*  )ptr_aCtx   );

Handle(AIS_LocalContext)* theret = new Handle(AIS_LocalContext);
*theret = new AIS_LocalContext(the_aCtx,(Standard_Integer) anIndex,(Standard_Boolean) LoadDisplayed,(Standard_Boolean) AcceptStandardModes,(Standard_Boolean) AcceptErase,(Standard_Boolean) UseBothViewers);
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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1AcceptErase_11 (JNIEnv *env, jobject theobj, jboolean aStatus)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->AcceptErase((Standard_Boolean) aStatus);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1AcceptErase_12 (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->AcceptErase();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_SetContext (JNIEnv *env, jobject theobj, jobject aCtx)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveContext ) the_aCtx;
 void*                ptr_aCtx = jcas_GetHandle(env,aCtx);
 
 if ( ptr_aCtx != NULL ) the_aCtx = *(   (  Handle( AIS_InteractiveContext )*  )ptr_aCtx   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SetContext(the_aCtx);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_SelectionName (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
const TCollection_AsciiString& theret = the_this->SelectionName();
thejret = jcas_CreateObject(env,"jjAIS/TCollection_AsciiString",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_Terminate (JNIEnv *env, jobject theobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->Terminate((Standard_Boolean) updateviewer);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_HasSameProjector (JNIEnv *env, jobject theobj, jobject aPrj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( Select3D_Projector ) the_aPrj;
 void*                ptr_aPrj = jcas_GetHandle(env,aPrj);
 
 if ( ptr_aPrj != NULL ) the_aPrj = *(   (  Handle( Select3D_Projector )*  )ptr_aPrj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasSameProjector(the_aPrj);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_Reactivate (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->Reactivate();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_Display (JNIEnv *env, jobject theobj, jobject anInteractive, jint DisplayMode, jboolean AllowShapeDecomposition, jint ActivationMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anInteractive;
 void*                ptr_anInteractive = jcas_GetHandle(env,anInteractive);
 
 if ( ptr_anInteractive != NULL ) the_anInteractive = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anInteractive   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Display(the_anInteractive,(Standard_Integer) DisplayMode,(Standard_Boolean) AllowShapeDecomposition,(Standard_Integer) ActivationMode);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_Load (JNIEnv *env, jobject theobj, jobject anInteractive, jboolean AllowShapeDecomposition, jint ActivationMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anInteractive;
 void*                ptr_anInteractive = jcas_GetHandle(env,anInteractive);
 
 if ( ptr_anInteractive != NULL ) the_anInteractive = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anInteractive   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Load(the_anInteractive,(Standard_Boolean) AllowShapeDecomposition,(Standard_Integer) ActivationMode);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_Erase (JNIEnv *env, jobject theobj, jobject anInteractive)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anInteractive;
 void*                ptr_anInteractive = jcas_GetHandle(env,anInteractive);
 
 if ( ptr_anInteractive != NULL ) the_anInteractive = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anInteractive   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Erase(the_anInteractive);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_Remove (JNIEnv *env, jobject theobj, jobject aSelectable)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_aSelectable;
 void*                ptr_aSelectable = jcas_GetHandle(env,aSelectable);
 
 if ( ptr_aSelectable != NULL ) the_aSelectable = *(   (  Handle( AIS_InteractiveObject )*  )ptr_aSelectable   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Remove(the_aSelectable);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_ClearPrs (JNIEnv *env, jobject theobj, jobject anInteractive, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anInteractive;
 void*                ptr_anInteractive = jcas_GetHandle(env,anInteractive);
 
 if ( ptr_anInteractive != NULL ) the_anInteractive = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anInteractive   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ClearPrs(the_anInteractive,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_SetShapeDecomposition (JNIEnv *env, jobject theobj, jobject aStoredObject, jboolean aStatus)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_aStoredObject;
 void*                ptr_aStoredObject = jcas_GetHandle(env,aStoredObject);
 
 if ( ptr_aStoredObject != NULL ) the_aStoredObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_aStoredObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SetShapeDecomposition(the_aStoredObject,(Standard_Boolean) aStatus);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_Clear (JNIEnv *env, jobject theobj, jshort atype)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->Clear((AIS_ClearMode) atype);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_ActivateMode (JNIEnv *env, jobject theobj, jobject aSelectable, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_aSelectable;
 void*                ptr_aSelectable = jcas_GetHandle(env,aSelectable);
 
 if ( ptr_aSelectable != NULL ) the_aSelectable = *(   (  Handle( AIS_InteractiveObject )*  )ptr_aSelectable   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->ActivateMode(the_aSelectable,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_DeactivateMode (JNIEnv *env, jobject theobj, jobject aSelectable, jint aMode)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_aSelectable;
 void*                ptr_aSelectable = jcas_GetHandle(env,aSelectable);
 
 if ( ptr_aSelectable != NULL ) the_aSelectable = *(   (  Handle( AIS_InteractiveObject )*  )ptr_aSelectable   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->DeactivateMode(the_aSelectable,(Standard_Integer) aMode);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_Deactivate (JNIEnv *env, jobject theobj, jobject aSelectable)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_aSelectable;
 void*                ptr_aSelectable = jcas_GetHandle(env,aSelectable);
 
 if ( ptr_aSelectable != NULL ) the_aSelectable = *(   (  Handle( AIS_InteractiveObject )*  )ptr_aSelectable   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->Deactivate(the_aSelectable);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_ActivateStandardMode (JNIEnv *env, jobject theobj, jshort aType)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->ActivateStandardMode((TopAbs_ShapeEnum) aType);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_DeactivateStandardMode (JNIEnv *env, jobject theobj, jshort aType)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->DeactivateStandardMode((TopAbs_ShapeEnum) aType);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_StandardModes (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
const TColStd_ListOfInteger& theret = the_this->StandardModes();
thejret = jcas_CreateObject(env,"jjAIS/TColStd_ListOfInteger",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AddFilter (JNIEnv *env, jobject theobj, jobject aFilter)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_Filter ) the_aFilter;
 void*                ptr_aFilter = jcas_GetHandle(env,aFilter);
 
 if ( ptr_aFilter != NULL ) the_aFilter = *(   (  Handle( SelectMgr_Filter )*  )ptr_aFilter   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->AddFilter(the_aFilter);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_RemoveFilter (JNIEnv *env, jobject theobj, jobject aFilter)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_Filter ) the_aFilter;
 void*                ptr_aFilter = jcas_GetHandle(env,aFilter);
 
 if ( ptr_aFilter != NULL ) the_aFilter = *(   (  Handle( SelectMgr_Filter )*  )ptr_aFilter   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->RemoveFilter(the_aFilter);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_ListOfFilter (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
const SelectMgr_ListOfFilter& theret = the_this->ListOfFilter();
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_ListOfFilter",&theret,0);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_Filter (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_OrFilter)* theret = new Handle(SelectMgr_OrFilter);
*theret = the_this->Filter();
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_OrFilter",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_SetAutomaticHilight (JNIEnv *env, jobject theobj, jboolean aStatus)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SetAutomaticHilight((Standard_Boolean) aStatus);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AutomaticHilight (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->AutomaticHilight();

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalContext_MoveTo (JNIEnv *env, jobject theobj, jint Xpix, jint Ypix, jobject aview)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aview;
 void*                ptr_aview = jcas_GetHandle(env,aview);
 
 if ( ptr_aview != NULL ) the_aview = *(   (  Handle( V3d_View )*  )ptr_aview   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->MoveTo((Standard_Integer) Xpix,(Standard_Integer) Ypix,the_aview);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_HasNextDetected (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasNextDetected();

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1LocalContext_HilightNextDetected (JNIEnv *env, jobject theobj, jobject aView)
{
jint thejret;

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HilightNextDetected(the_aView);

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1LocalContext_HilightPreviousDetected (JNIEnv *env, jobject theobj, jobject aView)
{
jint thejret;

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HilightPreviousDetected(the_aView);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_UnhilightLastDetected (JNIEnv *env, jobject theobj, jobject aView)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->UnhilightLastDetected(the_aView);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Select_11 (JNIEnv *env, jobject theobj, jboolean updateviewer)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Select((Standard_Boolean) updateviewer);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1ShiftSelect_11 (JNIEnv *env, jobject theobj, jboolean updateviewer)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ShiftSelect((Standard_Boolean) updateviewer);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Select_12 (JNIEnv *env, jobject theobj, jint XPMin, jint YPMin, jint XPMax, jint YPMax, jobject aView, jboolean updateviewer)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Select((Standard_Integer) XPMin,(Standard_Integer) YPMin,(Standard_Integer) XPMax,(Standard_Integer) YPMax,the_aView,(Standard_Boolean) updateviewer);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1ShiftSelect_12 (JNIEnv *env, jobject theobj, jint XPMin, jint YPMin, jint XPMax, jint YPMax, jobject aView, jboolean updateviewer)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ShiftSelect((Standard_Integer) XPMin,(Standard_Integer) YPMin,(Standard_Integer) XPMax,(Standard_Integer) YPMax,the_aView,(Standard_Boolean) updateviewer);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Select_13 (JNIEnv *env, jobject theobj, jobject Polyline, jobject aView, jboolean updateviewer)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
TColgp_Array1OfPnt2d* the_Polyline = (TColgp_Array1OfPnt2d*) jcas_GetHandle(env,Polyline);
if ( the_Polyline == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Polyline = new TColgp_Array1OfPnt2d ();
 // jcas_SetHandle ( env, Polyline, the_Polyline );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->Select(*the_Polyline,the_aView,(Standard_Boolean) updateviewer);

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



JNIEXPORT jshort JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1ShiftSelect_13 (JNIEnv *env, jobject theobj, jobject Polyline, jobject aView, jboolean updateviewer)
{
jshort thejret;

jcas_Locking alock(env);
{
try {
TColgp_Array1OfPnt2d* the_Polyline = (TColgp_Array1OfPnt2d*) jcas_GetHandle(env,Polyline);
if ( the_Polyline == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_Polyline = new TColgp_Array1OfPnt2d ();
 // jcas_SetHandle ( env, Polyline, the_Polyline );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ShiftSelect(*the_Polyline,the_aView,(Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_HilightPicked (JNIEnv *env, jobject theobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->HilightPicked((Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_UnhilightPicked (JNIEnv *env, jobject theobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->UnhilightPicked((Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1UpdateSelected_11 (JNIEnv *env, jobject theobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->UpdateSelected((Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1UpdateSelected_12 (JNIEnv *env, jobject theobj, jobject anobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anobj;
 void*                ptr_anobj = jcas_GetHandle(env,anobj);
 
 if ( ptr_anobj != NULL ) the_anobj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anobj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->UpdateSelected(the_anobj,(Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_SetSelected (JNIEnv *env, jobject theobj, jobject anobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anobj;
 void*                ptr_anobj = jcas_GetHandle(env,anobj);
 
 if ( ptr_anobj != NULL ) the_anobj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anobj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SetSelected(the_anobj,(Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1AddOrRemoveSelected_11 (JNIEnv *env, jobject theobj, jobject anobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anobj;
 void*                ptr_anobj = jcas_GetHandle(env,anobj);
 
 if ( ptr_anobj != NULL ) the_anobj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anobj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->AddOrRemoveSelected(the_anobj,(Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1AddOrRemoveSelected_12 (JNIEnv *env, jobject theobj, jobject aShape, jboolean updateviewer)
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
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->AddOrRemoveSelected(*the_aShape,(Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1AddOrRemoveSelected_13 (JNIEnv *env, jobject theobj, jobject Ownr, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_Ownr;
 void*                ptr_Ownr = jcas_GetHandle(env,Ownr);
 
 if ( ptr_Ownr != NULL ) the_Ownr = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_Ownr   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->AddOrRemoveSelected(the_Ownr,(Standard_Boolean) updateviewer);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_ClearSelected (JNIEnv *env, jobject theobj, jboolean updateviewer)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->ClearSelected((Standard_Boolean) updateviewer);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_HasDetected (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasDetected();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_InitDetected (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->InitDetected();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_MoreDetected (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->MoreDetected();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_NextDetected (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->NextDetected();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_DetectedCurrentShape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->DetectedCurrentShape();
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_DetectedCurrentObject (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(AIS_InteractiveObject)* theret = new Handle(AIS_InteractiveObject);
*theret = the_this->DetectedCurrentObject();
thejret = jcas_CreateObject(env,"jjAIS/AIS_InteractiveObject",theret);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_HasDetectedShape (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasDetectedShape();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_DetectedShape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->DetectedShape();
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_DetectedInteractive (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(AIS_InteractiveObject)* theret = new Handle(AIS_InteractiveObject);
*theret = the_this->DetectedInteractive();
thejret = jcas_CreateObject(env,"jjAIS/AIS_InteractiveObject",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_DetectedOwner (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_EntityOwner)* theret = new Handle(SelectMgr_EntityOwner);
*theret = the_this->DetectedOwner();
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_EntityOwner",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_InitSelected (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->InitSelected();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_MoreSelected (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->MoreSelected();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_NextSelected (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->NextSelected();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_HasShape (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasShape();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_SelectedShape (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
const TopoDS_Shape& theret = the_this->SelectedShape();
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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_SelectedOwner (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_EntityOwner)* theret = new Handle(SelectMgr_EntityOwner);
*theret = the_this->SelectedOwner();
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_EntityOwner",theret);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1IsSelected_11 (JNIEnv *env, jobject theobj, jobject aniobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_aniobj;
 void*                ptr_aniobj = jcas_GetHandle(env,aniobj);
 
 if ( ptr_aniobj != NULL ) the_aniobj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_aniobj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsSelected(the_aniobj);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1IsSelected_12 (JNIEnv *env, jobject theobj, jobject anOwner)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( SelectMgr_EntityOwner ) the_anOwner;
 void*                ptr_anOwner = jcas_GetHandle(env,anOwner);
 
 if ( ptr_anOwner != NULL ) the_anOwner = *(   (  Handle( SelectMgr_EntityOwner )*  )ptr_anOwner   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsSelected(the_anOwner);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_SelectedInteractive (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(AIS_InteractiveObject)* theret = new Handle(AIS_InteractiveObject);
*theret = the_this->SelectedInteractive();
thejret = jcas_CreateObject(env,"jjAIS/AIS_InteractiveObject",theret);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_HasApplicative (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->HasApplicative();

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_SelectedApplicative (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(Standard_Transient)* theret = new Handle(Standard_Transient);
*theret = the_this->SelectedApplicative();
thejret = jcas_CreateObject(env,"jjAIS/Standard_Transient",theret);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_SetDisplayPriority (JNIEnv *env, jobject theobj, jobject anObject, jint Prior)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SetDisplayPriority(the_anObject,(Standard_Integer) Prior);

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



JNIEXPORT jint JNICALL Java_jjAIS_AIS_1LocalContext_DisplayedObjects (JNIEnv *env, jobject theobj, jobject theMapToFill)
{
jint thejret;

jcas_Locking alock(env);
{
try {
TColStd_MapOfTransient* the_theMapToFill = (TColStd_MapOfTransient*) jcas_GetHandle(env,theMapToFill);
if ( the_theMapToFill == NULL ) {

 // The following assumes availability of the default constructor (what may not
 // always be the case). Therefore explicit exception is thrown if the null
 // object has been passed.
 // the_theMapToFill = new TColStd_MapOfTransient ();
 // jcas_SetHandle ( env, theMapToFill, the_theMapToFill );
 jcas_ThrowException (env, "NULL object has been passed while expecting an object manipulated by value");

}  // end if
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->DisplayedObjects(*the_theMapToFill);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_IsIn (JNIEnv *env, jobject theobj, jobject anObject)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsIn(the_anObject);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1IsDisplayed_11 (JNIEnv *env, jobject theobj, jobject anObject)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsDisplayed(the_anObject);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1IsDisplayed_12 (JNIEnv *env, jobject theobj, jobject anObject, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsDisplayed(the_anObject,(Standard_Integer) aMode);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_SelectionModes (JNIEnv *env, jobject theobj, jobject anObject)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
const TColStd_ListOfInteger& theret = the_this->SelectionModes(the_anObject);
thejret = jcas_CreateObject(env,"jjAIS/TColStd_ListOfInteger",&theret,0);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_SubIntensityOn (JNIEnv *env, jobject theobj, jobject anObject)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SubIntensityOn(the_anObject);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_SubIntensityOff (JNIEnv *env, jobject theobj, jobject anObject)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SubIntensityOff(the_anObject);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Hilight_11 (JNIEnv *env, jobject theobj, jobject anObject)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->Hilight(the_anObject);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Hilight_12 (JNIEnv *env, jobject theobj, jobject anObject, jshort aCol)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->Hilight(the_anObject,(Quantity_NameOfColor) aCol);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1Unhilight_11 (JNIEnv *env, jobject theobj, jobject anObject)
{

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->Unhilight(the_anObject);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1IsHilighted_11 (JNIEnv *env, jobject theobj, jobject anObject)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsHilighted(the_anObject);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1IsHilighted_12 (JNIEnv *env, jobject theobj, jobject anObject, jobject WithColor, jobject HiCol)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anObject;
 void*                ptr_anObject = jcas_GetHandle(env,anObject);
 
 if ( ptr_anObject != NULL ) the_anObject = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anObject   );

Standard_Boolean the_WithColor = jcas_GetBoolean(env,WithColor);
Quantity_NameOfColor the_HiCol = ( Quantity_NameOfColor )jcas_GetShort ( env, HiCol );
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsHilighted(the_anObject,the_WithColor,the_HiCol);
jcas_SetBoolean(env,WithColor,the_WithColor);
jcas_SetShort(env,HiCol,the_HiCol);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1SetSensitivity_11 (JNIEnv *env, jobject theobj, jdouble aPrecision)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SetSensitivity((Standard_Real) aPrecision);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_AIS_1LocalContext_1SetSensitivity_12 (JNIEnv *env, jobject theobj, jint aPrecision)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->SetSensitivity((Standard_Integer) aPrecision);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_BeginImmediateDraw (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->BeginImmediateDraw();

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_ImmediateAdd (JNIEnv *env, jobject theobj, jobject anIObj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anIObj;
 void*                ptr_anIObj = jcas_GetHandle(env,anIObj);
 
 if ( ptr_anIObj != NULL ) the_anIObj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anIObj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ImmediateAdd(the_anIObj,(Standard_Integer) aMode);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_ImmediateRemove (JNIEnv *env, jobject theobj, jobject anIObj, jint aMode)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anIObj;
 void*                ptr_anIObj = jcas_GetHandle(env,anIObj);
 
 if ( ptr_anIObj != NULL ) the_anIObj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anIObj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->ImmediateRemove(the_anIObj,(Standard_Integer) aMode);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_EndImmediateDraw (JNIEnv *env, jobject theobj, jobject aView, jboolean DoubleBuf)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->EndImmediateDraw(the_aView,(Standard_Boolean) DoubleBuf);

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



JNIEXPORT jboolean JNICALL Java_jjAIS_AIS_1LocalContext_IsImmediateModeOn (JNIEnv *env, jobject theobj)
{
jboolean thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
 thejret = the_this->IsImmediateModeOn();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_UpdateConversion (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->UpdateConversion();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_UpdateSort (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->UpdateSort();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_LoadContextObjects (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->LoadContextObjects();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_UnloadContextObjects (JNIEnv *env, jobject theobj)
{

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->UnloadContextObjects();

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_DisplayAreas (JNIEnv *env, jobject theobj, jobject aviou)
{

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aviou;
 void*                ptr_aviou = jcas_GetHandle(env,aviou);
 
 if ( ptr_aviou != NULL ) the_aviou = *(   (  Handle( V3d_View )*  )ptr_aviou   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->DisplayAreas(the_aviou);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_ClearAreas (JNIEnv *env, jobject theobj, jobject aView)
{

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->ClearAreas(the_aView);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_DisplaySensitive (JNIEnv *env, jobject theobj, jobject aView)
{

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->DisplaySensitive(the_aView);

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



JNIEXPORT void JNICALL Java_jjAIS_AIS_1LocalContext_ClearSensitive (JNIEnv *env, jobject theobj, jobject aView)
{

jcas_Locking alock(env);
{
try {
 Handle( V3d_View ) the_aView;
 void*                ptr_aView = jcas_GetHandle(env,aView);
 
 if ( ptr_aView != NULL ) the_aView = *(   (  Handle( V3d_View )*  )ptr_aView   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
the_this->ClearSensitive(the_aView);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_MainSelector (JNIEnv *env, jobject theobj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(StdSelect_ViewerSelector3d)* theret = new Handle(StdSelect_ViewerSelector3d);
*theret = the_this->MainSelector();
thejret = jcas_CreateObject(env,"jjAIS/StdSelect_ViewerSelector3d",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_FindSelectedOwnerFromIO (JNIEnv *env, jobject theobj, jobject anIObj)
{
jobject thejret;

jcas_Locking alock(env);
{
try {
 Handle( AIS_InteractiveObject ) the_anIObj;
 void*                ptr_anIObj = jcas_GetHandle(env,anIObj);
 
 if ( ptr_anIObj != NULL ) the_anIObj = *(   (  Handle( AIS_InteractiveObject )*  )ptr_anIObj   );

Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_EntityOwner)* theret = new Handle(SelectMgr_EntityOwner);
*theret = the_this->FindSelectedOwnerFromIO(the_anIObj);
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_EntityOwner",theret);

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



JNIEXPORT jobject JNICALL Java_jjAIS_AIS_1LocalContext_FindSelectedOwnerFromShape (JNIEnv *env, jobject theobj, jobject aShape)
{
jobject thejret;

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
Handle(AIS_LocalContext) the_this = *((Handle(AIS_LocalContext)*) jcas_GetHandle(env,theobj));
Handle(SelectMgr_EntityOwner)* theret = new Handle(SelectMgr_EntityOwner);
*theret = the_this->FindSelectedOwnerFromShape(*the_aShape);
thejret = jcas_CreateObject(env,"jjAIS/SelectMgr_EntityOwner",theret);

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
