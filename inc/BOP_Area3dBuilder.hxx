// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_Area3dBuilder_HeaderFile
#define _BOP_Area3dBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BOP_AreaBuilder_HeaderFile
#include <BOP_AreaBuilder.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class BOP_LoopSet;
class BOP_LoopClassifier;



class BOP_Area3dBuilder  : public BOP_AreaBuilder {
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

  
//! Empty  Constructor <br>
  Standard_EXPORT   BOP_Area3dBuilder();
  
//! Creates an  object to build solids on <br>
//! the (shells,  blocks of faces) of <LS>, <br>
//! using the classifier <LC>. <br>
  Standard_EXPORT   BOP_Area3dBuilder(BOP_LoopSet& LS,BOP_LoopClassifier& LC,const Standard_Boolean ForceClass = Standard_False);
  
//! Initialize the object to find the areas of <br>
//! the shapes described by <LS>, <br>
//! using the classifier <LC>. <br>
  Standard_EXPORT   virtual  void InitAreaBuilder(BOP_LoopSet& LS,BOP_LoopClassifier& LC,const Standard_Boolean ForceClass) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
