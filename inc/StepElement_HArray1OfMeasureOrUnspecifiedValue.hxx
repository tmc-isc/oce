// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_HArray1OfMeasureOrUnspecifiedValue_HeaderFile
#define _StepElement_HArray1OfMeasureOrUnspecifiedValue_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepElement_HArray1OfMeasureOrUnspecifiedValue_HeaderFile
#include <Handle_StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx>
#endif

#ifndef _StepElement_Array1OfMeasureOrUnspecifiedValue_HeaderFile
#include <StepElement_Array1OfMeasureOrUnspecifiedValue.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepElement_MeasureOrUnspecifiedValue;
class StepElement_Array1OfMeasureOrUnspecifiedValue;



class StepElement_HArray1OfMeasureOrUnspecifiedValue : public MMgt_TShared {

public:

  
  Standard_EXPORT   StepElement_HArray1OfMeasureOrUnspecifiedValue(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepElement_HArray1OfMeasureOrUnspecifiedValue(const Standard_Integer Low,const Standard_Integer Up,const StepElement_MeasureOrUnspecifiedValue& V);
  
  Standard_EXPORT     void Init(const StepElement_MeasureOrUnspecifiedValue& V) ;
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const StepElement_MeasureOrUnspecifiedValue& Value) ;
  
       const StepElement_MeasureOrUnspecifiedValue& Value(const Standard_Integer Index) const;
  
        StepElement_MeasureOrUnspecifiedValue& ChangeValue(const Standard_Integer Index) ;
  
       const StepElement_Array1OfMeasureOrUnspecifiedValue& Array1() const;
  
        StepElement_Array1OfMeasureOrUnspecifiedValue& ChangeArray1() ;




  DEFINE_STANDARD_RTTI(StepElement_HArray1OfMeasureOrUnspecifiedValue)

protected:




private: 


StepElement_Array1OfMeasureOrUnspecifiedValue myArray;


};

#define ItemHArray1 StepElement_MeasureOrUnspecifiedValue
#define ItemHArray1_hxx <StepElement_MeasureOrUnspecifiedValue.hxx>
#define TheArray1 StepElement_Array1OfMeasureOrUnspecifiedValue
#define TheArray1_hxx <StepElement_Array1OfMeasureOrUnspecifiedValue.hxx>
#define TCollection_HArray1 StepElement_HArray1OfMeasureOrUnspecifiedValue
#define TCollection_HArray1_hxx <StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx>
#define Handle_TCollection_HArray1 Handle_StepElement_HArray1OfMeasureOrUnspecifiedValue
#define TCollection_HArray1_Type_() StepElement_HArray1OfMeasureOrUnspecifiedValue_Type_()

#include <TCollection_HArray1.lxx>

#undef ItemHArray1
#undef ItemHArray1_hxx
#undef TheArray1
#undef TheArray1_hxx
#undef TCollection_HArray1
#undef TCollection_HArray1_hxx
#undef Handle_TCollection_HArray1
#undef TCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
