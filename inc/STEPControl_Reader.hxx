// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPControl_Reader_HeaderFile
#define _STEPControl_Reader_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _XSControl_Reader_HeaderFile
#include <XSControl_Reader.hxx>
#endif
#ifndef _Handle_XSControl_WorkSession_HeaderFile
#include <Handle_XSControl_WorkSession.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepData_StepModel_HeaderFile
#include <Handle_StepData_StepModel.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class XSControl_WorkSession;
class StepData_StepModel;


//! Reads STEP files, checks them and translates their contents <br>
//! into Open CASCADE models. The STEP data can be that of <br>
//! a whole model or that of a specific list of entities in the model. <br>
//! As in XSControl_Reader, you specify the list using a selection. <br>
//! For the translation of iges files it is possible to use next sequence: <br>
//! To change translation parameters <br>
//! class Interface_Static should be used before beginning of <br>
//! translation  (see STEP Parameters and General Parameters) <br>
//!     Creation of reader - STEPControl_Reader reader; <br>
//!  To load s file in a model use method reader.ReadFile("filename.stp") <br>
//! To print load results reader.PrintCheckLoad(failsonly,mode) <br>
//! where mode is equal to the value of enumeration IFSelect_PrintCount <br>
//!   For definition number of candidates : <br>
//! Standard_Integer nbroots = reader. NbRootsForTransfer(); <br>
//! To transfer entities from a model the following methods can be used: <br>
//! for the whole model - reader.TransferRoots(); <br>
//! to transfer a list of entities: reader.TransferList(list); <br>
//! to transfer one entity Handle(Standard_Transient) <br>
//! ent = reader.RootForTransfer(num); <br>
//! reader.TransferEntity(ent), or <br>
//! reader.TransferOneRoot(num), or <br>
//! reader.TransferOne(num), or <br>
//! reader.TransferRoot(num) <br>
//!   To obtain the result the following method can be used: <br>
//! reader.NbShapes() and reader.Shape(num); or reader.OneShape(); <br>
//! To print the results of transfer use method: <br>
//! reader.PrintCheckTransfer(failwarn,mode); <br>
//! where printfail is equal to the value of enumeration <br>
//! IFSelect_PrintFail, mode see above; or reader.PrintStatsTransfer(); <br>
//! Gets correspondence between a STEP entity and a result <br>
//! shape obtained from it. <br>
//! Handle(XSControl_WorkSession) <br>
//! WS = reader.WS(); <br>
//! if ( WS->TransferReader()->HasResult(ent) ) <br>
//! TopoDS_Shape shape = WS->TransferReader()->ShapeResult(ent); <br>
class STEPControl_Reader  : public XSControl_Reader {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  //! Creates a reader object with an empty STEP model. <br>
  Standard_EXPORT   STEPControl_Reader();
  //! Creates a Reader for STEP from an already existing Session <br>
//!           Clears the session if it was not yet set for STEP <br>
  Standard_EXPORT   STEPControl_Reader(const Handle(XSControl_WorkSession)& WS,const Standard_Boolean scratch = Standard_True);
  //! Returns the model as a StepModel. <br>
//!           It can then be consulted (header, product) <br>
  Standard_EXPORT     Handle_StepData_StepModel StepModel() const;
  //! Transfers a root given its rank in the list of candidate roots <br>
//!           Default is the first one <br>
//!           Returns True if a shape has resulted, false else <br>
//!           Same as inherited TransferOneRoot, kept for compatibility <br>
  Standard_EXPORT     Standard_Boolean TransferRoot(const Standard_Integer num = 1) ;
  //! Determines the list of root entities from Model which are candidate for <br>
//!           a transfer to a Shape (type of entities is PRODUCT) <br>
  Standard_EXPORT   virtual  Standard_Integer NbRootsForTransfer() ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
