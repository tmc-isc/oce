// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlMDF_MapOfDriver_HeaderFile
#define _XmlMDF_MapOfDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_XmlMDF_ADriver_HeaderFile
#include <Handle_XmlMDF_ADriver.hxx>
#endif
#ifndef _Handle_XmlMDF_DataMapNodeOfMapOfDriver_HeaderFile
#include <Handle_XmlMDF_DataMapNodeOfMapOfDriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_AsciiString;
class XmlMDF_ADriver;
class XmlMDF_DataMapNodeOfMapOfDriver;
class XmlMDF_DataMapIteratorOfMapOfDriver;



class XmlMDF_MapOfDriver  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   XmlMDF_MapOfDriver(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     XmlMDF_MapOfDriver& Assign(const XmlMDF_MapOfDriver& Other) ;
    XmlMDF_MapOfDriver& operator =(const XmlMDF_MapOfDriver& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~XmlMDF_MapOfDriver()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TCollection_AsciiString& K,const Handle(XmlMDF_ADriver)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TCollection_AsciiString& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TCollection_AsciiString& K) ;
  
  Standard_EXPORT    const Handle_XmlMDF_ADriver& Find(const TCollection_AsciiString& K) const;
   const Handle_XmlMDF_ADriver& operator()(const TCollection_AsciiString& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_XmlMDF_ADriver& ChangeFind(const TCollection_AsciiString& K) ;
    Handle_XmlMDF_ADriver& operator()(const TCollection_AsciiString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TCollection_AsciiString& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TCollection_AsciiString& K) ;





protected:





private:

  
  Standard_EXPORT   XmlMDF_MapOfDriver(const XmlMDF_MapOfDriver& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
