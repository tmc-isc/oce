// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_CompositeTextWithExtent_HeaderFile
#define _StepVisual_CompositeTextWithExtent_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepVisual_CompositeTextWithExtent_HeaderFile
#include <Handle_StepVisual_CompositeTextWithExtent.hxx>
#endif

#ifndef _Handle_StepVisual_PlanarExtent_HeaderFile
#include <Handle_StepVisual_PlanarExtent.hxx>
#endif
#ifndef _StepVisual_CompositeText_HeaderFile
#include <StepVisual_CompositeText.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_StepVisual_HArray1OfTextOrCharacter_HeaderFile
#include <Handle_StepVisual_HArray1OfTextOrCharacter.hxx>
#endif
class StepVisual_PlanarExtent;
class TCollection_HAsciiString;
class StepVisual_HArray1OfTextOrCharacter;



class StepVisual_CompositeTextWithExtent : public StepVisual_CompositeText {

public:

  //! Returns a CompositeTextWithExtent <br>
  Standard_EXPORT   StepVisual_CompositeTextWithExtent();
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText) ;
  
  Standard_EXPORT   virtual  void Init(const Handle(TCollection_HAsciiString)& aName,const Handle(StepVisual_HArray1OfTextOrCharacter)& aCollectedText,const Handle(StepVisual_PlanarExtent)& aExtent) ;
  
  Standard_EXPORT     void SetExtent(const Handle(StepVisual_PlanarExtent)& aExtent) ;
  
  Standard_EXPORT     Handle_StepVisual_PlanarExtent Extent() const;




  DEFINE_STANDARD_RTTI(StepVisual_CompositeTextWithExtent)

protected:




private: 


Handle_StepVisual_PlanarExtent extent;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
