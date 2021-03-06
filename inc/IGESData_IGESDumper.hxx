// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_IGESDumper_HeaderFile
#define _IGESData_IGESDumper_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
#ifndef _IGESData_SpecificLib_HeaderFile
#include <IGESData_SpecificLib.hxx>
#endif
#ifndef _Handle_IGESData_Protocol_HeaderFile
#include <Handle_IGESData_Protocol.hxx>
#endif
#ifndef _Handle_IGESData_IGESEntity_HeaderFile
#include <Handle_IGESData_IGESEntity.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class IGESData_IGESModel;
class Interface_InterfaceError;
class IGESData_Protocol;
class IGESData_IGESEntity;
class Message_Messenger;


//! Provides a way to obtain a clear Dump of an IGESEntity <br>
//!           (distinct from normalized output). It works with tools <br>
//!           attached to Entities, as for normalized Reade and Write <br>
//! <br>
//!           For each Entity, displaying data is splitted in own data <br>
//!           (specific to each type) and other attached data, which are <br>
//!           defined for all IGES Types (either from "Directory Entry" or <br>
//!           from Lists of Associativities and Properties) <br>
class IGESData_IGESDumper  {
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

  //! Returns an IGESDumper ready to work. The IGESModel provides <br>
//!           the numbering of Entities : as for any InterfaceModel, it <br>
//!           gives each Entity a number; but for IGESEntities, the "Number <br>
//!           of Directory Entry" according to the definition of IGES Files, <br>
//!           is also usefull <br>
  Standard_EXPORT   IGESData_IGESDumper(const Handle(IGESData_IGESModel)& model,const Handle(IGESData_Protocol)& protocol);
  //! Prints onto an output, the "Number of Directory Entry" which <br>
//!           corresponds to an IGESEntity in the IGESModel, under the form <br>
//!           "D#nnn" (a Null Handle gives D#0) <br>
  Standard_EXPORT     void PrintDNum(const Handle(IGESData_IGESEntity)& ent,const Handle(Message_Messenger)& S) const;
  //! Prints onto an output, the "Number of Directory Entry" (see <br>
//!           PrintDNum) plus IGES Type and Form Numbers, which gives <br>
//!           "D#nnn  Type nnn  Form nnn" <br>
  Standard_EXPORT     void PrintShort(const Handle(IGESData_IGESEntity)& ent,const Handle(Message_Messenger)& S) const;
  
  Standard_EXPORT     void Dump(const Handle(IGESData_IGESEntity)& ent,const Handle(Message_Messenger)& S,const Standard_Integer own,const Standard_Integer attached = -1) const;
  //! Specific Dump for each IGES Entity, call by Dump (just above) <br>
//!           <own> is the parameter <own> from Dump <br>
  Standard_EXPORT     void OwnDump(const Handle(IGESData_IGESEntity)& ent,const Handle(Message_Messenger)& S,const Standard_Integer own) const;





protected:





private:



Handle_IGESData_IGESModel themodel;
IGESData_SpecificLib thelib;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
