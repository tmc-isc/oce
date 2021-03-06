// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Aspect_ColorPixel_HeaderFile
#define _Aspect_ColorPixel_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Quantity_Color_HeaderFile
#include <Quantity_Color.hxx>
#endif
#ifndef _Aspect_Pixel_HeaderFile
#include <Aspect_Pixel.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class Quantity_Color;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(Aspect_ColorPixel);


class Aspect_ColorPixel  : public Aspect_Pixel {

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

  
  Standard_EXPORT   Aspect_ColorPixel();
  
  Standard_EXPORT   Aspect_ColorPixel(const Quantity_Color& aColor);
  
  Standard_EXPORT    const Quantity_Color& Value() const;
  
  Standard_EXPORT     void SetValue(const Quantity_Color& aColor) ;
  //! Prints the contents of <me> on the stream <s> <br>
  Standard_EXPORT     void Print(Standard_OStream& s) const;
  //! Returns a hashed value denoting <me>. This value is in <br>
//!         the range 1..<Upper>. <br>
  Standard_EXPORT     Standard_Integer HashCode(const Standard_Integer Upper) const;
  
  Standard_EXPORT     Standard_Boolean IsEqual(const Aspect_ColorPixel& Other) const;
    Standard_Boolean operator==(const Aspect_ColorPixel& Other) const
{
  return IsEqual(Other);
}
  
  Standard_EXPORT     Standard_Boolean IsNotEqual(const Aspect_ColorPixel& Other) const;
    Standard_Boolean operator!=(const Aspect_ColorPixel& Other) const
{
  return IsNotEqual(Other);
}
    const Quantity_Color& _CSFDB_GetAspect_ColorPixelmyColor() const { return myColor; }



protected:




private: 


Quantity_Color myColor;


};





// other Inline functions and methods (like "C++: function call" methods)
inline Standard_Integer HashCode(const Aspect_ColorPixel& me,const Standard_Integer Upper) {
 return me.HashCode(Upper);
}



#endif
