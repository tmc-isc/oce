// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepGeom_Array1OfSurfaceBoundary_HeaderFile
#define _StepGeom_Array1OfSurfaceBoundary_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepGeom_SurfaceBoundary;



class StepGeom_Array1OfSurfaceBoundary  {
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

  
  Standard_EXPORT   StepGeom_Array1OfSurfaceBoundary(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepGeom_Array1OfSurfaceBoundary(const StepGeom_SurfaceBoundary& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const StepGeom_SurfaceBoundary& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepGeom_Array1OfSurfaceBoundary()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepGeom_Array1OfSurfaceBoundary& Assign(const StepGeom_Array1OfSurfaceBoundary& Other) ;
   const StepGeom_Array1OfSurfaceBoundary& operator =(const StepGeom_Array1OfSurfaceBoundary& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepGeom_SurfaceBoundary& Value) ;
  
       const StepGeom_SurfaceBoundary& Value(const Standard_Integer Index) const;
     const StepGeom_SurfaceBoundary& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        StepGeom_SurfaceBoundary& ChangeValue(const Standard_Integer Index) ;
      StepGeom_SurfaceBoundary& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepGeom_Array1OfSurfaceBoundary(const StepGeom_Array1OfSurfaceBoundary& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item StepGeom_SurfaceBoundary
#define Array1Item_hxx <StepGeom_SurfaceBoundary.hxx>
#define TCollection_Array1 StepGeom_Array1OfSurfaceBoundary
#define TCollection_Array1_hxx <StepGeom_Array1OfSurfaceBoundary.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
