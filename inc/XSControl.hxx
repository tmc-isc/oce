// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSControl_HeaderFile
#define _XSControl_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_XSControl_WorkSession_HeaderFile
#include <Handle_XSControl_WorkSession.hxx>
#endif
#ifndef _Handle_IFSelect_SessionPilot_HeaderFile
#include <Handle_IFSelect_SessionPilot.hxx>
#endif
#ifndef _Handle_XSControl_Vars_HeaderFile
#include <Handle_XSControl_Vars.hxx>
#endif
class XSControl_WorkSession;
class IFSelect_SessionPilot;
class XSControl_Vars;
class XSControl_Controller;
class XSControl_TransferReader;
class XSControl_TransferWriter;
class XSControl_WorkSession;
class XSControl_SelectForTransfer;
class XSControl_SignTransferStatus;
class XSControl_ConnectedShapes;
class XSControl_Reader;
class XSControl_Writer;
class XSControl_Functions;
class XSControl_FuncShape;
class XSControl_Utils;
class XSControl_Vars;


//! This package provides complements to IFSelect & Co for <br>
//!           control of a session <br>
class XSControl  {
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

  //! Returns the WorkSession of a SessionPilot, but casts it as <br>
//!           from XSControl : it then gives access to Control & Transfers <br>
  Standard_EXPORT   static  Handle_XSControl_WorkSession Session(const Handle(IFSelect_SessionPilot)& pilot) ;
  //! Returns the Vars of a SessionPilot, it is brought by Session <br>
//!           it provides access to external variables <br>
  Standard_EXPORT   static  Handle_XSControl_Vars Vars(const Handle(IFSelect_SessionPilot)& pilot) ;





protected:





private:




friend class XSControl_Controller;
friend class XSControl_TransferReader;
friend class XSControl_TransferWriter;
friend class XSControl_WorkSession;
friend class XSControl_SelectForTransfer;
friend class XSControl_SignTransferStatus;
friend class XSControl_ConnectedShapes;
friend class XSControl_Reader;
friend class XSControl_Writer;
friend class XSControl_Functions;
friend class XSControl_FuncShape;
friend class XSControl_Utils;
friend class XSControl_Vars;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
