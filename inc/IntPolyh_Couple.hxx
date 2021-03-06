// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntPolyh_Couple_HeaderFile
#define _IntPolyh_Couple_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif



class IntPolyh_Couple  {
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

  
  Standard_EXPORT   IntPolyh_Couple();
  
  Standard_EXPORT   IntPolyh_Couple(const Standard_Integer i1,const Standard_Integer i2);
  
  Standard_EXPORT     Standard_Integer FirstValue() const;
  
  Standard_EXPORT     Standard_Integer SecondValue() const;
  
  Standard_EXPORT     Standard_Integer AnalyseFlagValue() const;
  
  Standard_EXPORT     Standard_Real AngleValue() const;
  
  Standard_EXPORT     void SetCoupleValue(const Standard_Integer v,const Standard_Integer w) ;
  
  Standard_EXPORT     void SetAnalyseFlag(const Standard_Integer v) ;
  
  Standard_EXPORT     void SetAngleValue(const Standard_Real ang) ;
  
  Standard_EXPORT     void Dump(const Standard_Integer v) const;





protected:





private:



Standard_Integer t1;
Standard_Integer t2;
Standard_Integer ia;
Standard_Real angle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
