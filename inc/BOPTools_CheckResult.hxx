// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOPTools_CheckResult_HeaderFile
#define _BOPTools_CheckResult_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOPTools_CheckStatus_HeaderFile
#include <BOPTools_CheckStatus.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _Handle_Geom_Geometry_HeaderFile
#include <Handle_Geom_Geometry.hxx>
#endif
class Geom_Geometry;
class TopoDS_Shape;
class TopTools_ListOfShape;


//! contains information about faulty shapes <br>
//!          and faulty types <br>
class BOPTools_CheckResult  {
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

  //! empty constructor <br>
  Standard_EXPORT   BOPTools_CheckResult();
  //! adds a shape with faulty to a list <br>
  Standard_EXPORT     void AddShape(const TopoDS_Shape& TheShape) ;
  //! gets access to faulty shapes in a list const <br>
  Standard_EXPORT    const TopTools_ListOfShape& GetShapes() const;
  //! sets faulty status for shapes <br>
  Standard_EXPORT     void SetCheckStatus(const BOPTools_CheckStatus TheStatus) ;
  //! gets faulty status for shapes <br>
  Standard_EXPORT     BOPTools_CheckStatus GetCheckStatus() const;
  //! sets an attached geometry to faulty shapes if any <br>
  Standard_EXPORT     void SetInterferenceGeometry(const Handle(Geom_Geometry)& TheGeometry) ;
  //! gets an attached geometry to shapes if any <br>
  Standard_EXPORT    const Handle_Geom_Geometry& GetInterferenceGeometry() const;





protected:





private:



BOPTools_CheckStatus myStatus;
TopTools_ListOfShape myShapes;
Handle_Geom_Geometry myGeometry;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
