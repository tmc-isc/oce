// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_AttributeMap_HeaderFile
#define _TDF_AttributeMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_StdMapNodeOfAttributeMap_HeaderFile
#include <Handle_TDF_StdMapNodeOfAttributeMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_StdMapNodeOfAttributeMap;
class TDF_MapIteratorOfAttributeMap;



class TDF_AttributeMap  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   TDF_AttributeMap(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TDF_AttributeMap& Assign(const TDF_AttributeMap& Other) ;
    TDF_AttributeMap& operator =(const TDF_AttributeMap& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TDF_AttributeMap()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(TDF_Attribute)& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(TDF_Attribute)& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(TDF_Attribute)& aKey) ;





protected:





private:

  
  Standard_EXPORT   TDF_AttributeMap(const TDF_AttributeMap& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
