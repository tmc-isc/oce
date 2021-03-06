// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_BuildWires_HeaderFile
#define _LocOpe_BuildWires_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _Handle_LocOpe_ProjectedWires_HeaderFile
#include <Handle_LocOpe_ProjectedWires.hxx>
#endif
class StdFail_NotDone;
class TopTools_ListOfShape;
class LocOpe_ProjectedWires;



class LocOpe_BuildWires  {
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

  
  Standard_EXPORT   LocOpe_BuildWires();
  
  Standard_EXPORT   LocOpe_BuildWires(const TopTools_ListOfShape& Ledges,const Handle(LocOpe_ProjectedWires)& PW);
  
  Standard_EXPORT     void Perform(const TopTools_ListOfShape& Ledges,const Handle(LocOpe_ProjectedWires)& PW) ;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT    const TopTools_ListOfShape& Result() const;





protected:





private:



Standard_Boolean myDone;
TopTools_ListOfShape myRes;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
