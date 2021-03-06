// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter_HeaderFile
#define _IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _IntSurf_Quadric_HeaderFile
#include <IntSurf_Quadric.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _math_FunctionWithDerivative_HeaderFile
#include <math_FunctionWithDerivative.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Adaptor3d_HCurve;
class IntSurf_Quadric;
class IntCurveSurface_TheHCurveTool;



class IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter  : public math_FunctionWithDerivative {
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

  
  Standard_EXPORT   IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter(const IntSurf_Quadric& Q,const Handle(Adaptor3d_HCurve)& C);
  
  Standard_EXPORT     Standard_Boolean Value(const Standard_Real Param,Standard_Real& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivative(const Standard_Real Param,Standard_Real& D) ;
  
  Standard_EXPORT     Standard_Boolean Values(const Standard_Real Param,Standard_Real& F,Standard_Real& D) ;





protected:





private:



IntSurf_Quadric myQuadric;
Handle_Adaptor3d_HCurve myCurve;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
