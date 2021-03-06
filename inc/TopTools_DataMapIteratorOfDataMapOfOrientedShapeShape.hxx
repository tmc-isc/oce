// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfOrientedShapeShape_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfOrientedShapeShape.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_OrientedShapeMapHasher;
class TopTools_DataMapOfOrientedShapeShape;
class TopTools_DataMapNodeOfDataMapOfOrientedShapeShape;



class TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape();
  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfOrientedShapeShape(const TopTools_DataMapOfOrientedShapeShape& aMap);
  
  Standard_EXPORT     void Initialize(const TopTools_DataMapOfOrientedShapeShape& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const TopoDS_Shape& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
