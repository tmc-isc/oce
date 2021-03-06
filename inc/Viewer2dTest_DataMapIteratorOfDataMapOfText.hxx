// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Viewer2dTest_DataMapIteratorOfDataMapOfText_HeaderFile
#define _Viewer2dTest_DataMapIteratorOfDataMapOfText_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_Graphic2d_Text_HeaderFile
#include <Handle_Graphic2d_Text.hxx>
#endif
#ifndef _Handle_Viewer2dTest_DataMapNodeOfDataMapOfText_HeaderFile
#include <Handle_Viewer2dTest_DataMapNodeOfDataMapOfText.hxx>
#endif
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Graphic2d_Text;
class Viewer2dTest_DataMapOfText;
class Viewer2dTest_DataMapNodeOfDataMapOfText;



class Viewer2dTest_DataMapIteratorOfDataMapOfText  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   Viewer2dTest_DataMapIteratorOfDataMapOfText();
  
  Standard_EXPORT   Viewer2dTest_DataMapIteratorOfDataMapOfText(const Viewer2dTest_DataMapOfText& aMap);
  
  Standard_EXPORT     void Initialize(const Viewer2dTest_DataMapOfText& aMap) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Key() const;
  
  Standard_EXPORT    const Handle_Graphic2d_Text& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
