// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_Comment_HeaderFile
#define _TDataStd_Comment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_Comment_HeaderFile
#include <Handle_TDataStd_Comment.hxx>
#endif

#ifndef _TCollection_ExtendedString_HeaderFile
#include <TCollection_ExtendedString.hxx>
#endif
#ifndef _TDF_Attribute_HeaderFile
#include <TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_RelocationTable_HeaderFile
#include <Handle_TDF_RelocationTable.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_GUID;
class TDF_Label;
class TCollection_ExtendedString;
class TDF_Attribute;
class TDF_RelocationTable;


//! Comment attribute. may be  associated to any label <br>
//!          to store user comment. <br>
class TDataStd_Comment : public TDF_Attribute {

public:

  //! class methods <br>
//!          ============= <br>//! Returns the GUID for comments. <br>
  Standard_EXPORT   static const Standard_GUID& GetID() ;
  //!  Find, or create  a   Comment attribute.  the  Comment <br>
//!          attribute is returned. <br>
  Standard_EXPORT   static  Handle_TDataStd_Comment Set(const TDF_Label& label) ;
  //! Finds, or creates a Comment attribute and sets the string. <br>
//!          the Comment attribute is returned. <br>//! Comment methods <br>
//!          ============ <br>
  Standard_EXPORT   static  Handle_TDataStd_Comment Set(const TDF_Label& label,const TCollection_ExtendedString& string) ;
  
  Standard_EXPORT   TDataStd_Comment();
  
  Standard_EXPORT     void Set(const TCollection_ExtendedString& S) ;
  
//!    Returns the comment attribute. <br>
  Standard_EXPORT    const TCollection_ExtendedString& Get() const;
  
  Standard_EXPORT    const Standard_GUID& ID() const;
  
  Standard_EXPORT     void Restore(const Handle(TDF_Attribute)& with) ;
  
  Standard_EXPORT     Handle_TDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& into,const Handle(TDF_RelocationTable)& RT) const;
  
  Standard_EXPORT   virtual  Standard_OStream& Dump(Standard_OStream& anOS) const;
  
  Standard_EXPORT     Standard_Boolean AfterRetrieval(const Standard_Boolean forceIt = Standard_False) ;




  DEFINE_STANDARD_RTTI(TDataStd_Comment)

protected:




private: 


TCollection_ExtendedString myString;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
