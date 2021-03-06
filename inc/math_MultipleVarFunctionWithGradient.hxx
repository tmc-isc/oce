// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_MultipleVarFunctionWithGradient_HeaderFile
#define _math_MultipleVarFunctionWithGradient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _math_MultipleVarFunction_HeaderFile
#include <math_MultipleVarFunction.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class math_Vector;



//! The abstract class MultipleVarFunctionWithGradient <br>
//! describes the virtual functions associated with a multiple variable function. <br>
class math_MultipleVarFunctionWithGradient  : public math_MultipleVarFunction {
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

  
  Standard_EXPORT   virtual  void Delete() ;
Standard_EXPORT virtual ~math_MultipleVarFunctionWithGradient(){Delete();}
  //! Returns the number of variables of the function. <br>
  Standard_EXPORT   virtual  Standard_Integer NbVariables() const = 0;
  //! Computes the values of the Functions <F> for the   variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Value(const math_Vector& X,Standard_Real& F)  = 0;
  //! Computes the gradient <G> of the functions for the   variable <X>. <br>
//!         Returns True if the computation was done successfully, <br>
//!         False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Gradient(const math_Vector& X,math_Vector& G)  = 0;
  //! computes the value <F> and the gradient <G> of the <br>
//!          functions for the variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT   virtual  Standard_Boolean Values(const math_Vector& X,Standard_Real& F,math_Vector& G)  = 0;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
