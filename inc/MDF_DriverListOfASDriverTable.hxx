// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DriverListOfASDriverTable_HeaderFile
#define _MDF_DriverListOfASDriverTable_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_MDF_ASDriver_HeaderFile
#include <Handle_MDF_ASDriver.hxx>
#endif
#ifndef _Handle_MDF_ListNodeOfDriverListOfASDriverTable_HeaderFile
#include <Handle_MDF_ListNodeOfDriverListOfASDriverTable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class MDF_ListIteratorOfDriverListOfASDriverTable;
class MDF_ASDriver;
class MDF_ListNodeOfDriverListOfASDriverTable;



class MDF_DriverListOfASDriverTable  {
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

  
  Standard_EXPORT   MDF_DriverListOfASDriverTable();
  
  Standard_EXPORT     void Assign(const MDF_DriverListOfASDriverTable& Other) ;
    void operator=(const MDF_DriverListOfASDriverTable& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~MDF_DriverListOfASDriverTable()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(MDF_ASDriver)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(MDF_ASDriver)& I,MDF_ListIteratorOfDriverListOfASDriverTable& theIt) ;
  
  Standard_EXPORT     void Prepend(MDF_DriverListOfASDriverTable& Other) ;
  
  Standard_EXPORT     void Append(const Handle(MDF_ASDriver)& I) ;
  
  Standard_EXPORT     void Append(const Handle(MDF_ASDriver)& I,MDF_ListIteratorOfDriverListOfASDriverTable& theIt) ;
  
  Standard_EXPORT     void Append(MDF_DriverListOfASDriverTable& Other) ;
  
  Standard_EXPORT     Handle_MDF_ASDriver& First() const;
  
  Standard_EXPORT     Handle_MDF_ASDriver& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(MDF_ListIteratorOfDriverListOfASDriverTable& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(MDF_ASDriver)& I,MDF_ListIteratorOfDriverListOfASDriverTable& It) ;
  
  Standard_EXPORT     void InsertBefore(MDF_DriverListOfASDriverTable& Other,MDF_ListIteratorOfDriverListOfASDriverTable& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(MDF_ASDriver)& I,MDF_ListIteratorOfDriverListOfASDriverTable& It) ;
  
  Standard_EXPORT     void InsertAfter(MDF_DriverListOfASDriverTable& Other,MDF_ListIteratorOfDriverListOfASDriverTable& It) ;


friend class MDF_ListIteratorOfDriverListOfASDriverTable;



protected:





private:

  
  Standard_EXPORT   MDF_DriverListOfASDriverTable(const MDF_DriverListOfASDriverTable& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_MDF_ASDriver
#define Item_hxx <MDF_ASDriver.hxx>
#define TCollection_ListNode MDF_ListNodeOfDriverListOfASDriverTable
#define TCollection_ListNode_hxx <MDF_ListNodeOfDriverListOfASDriverTable.hxx>
#define TCollection_ListIterator MDF_ListIteratorOfDriverListOfASDriverTable
#define TCollection_ListIterator_hxx <MDF_ListIteratorOfDriverListOfASDriverTable.hxx>
#define Handle_TCollection_ListNode Handle_MDF_ListNodeOfDriverListOfASDriverTable
#define TCollection_ListNode_Type_() MDF_ListNodeOfDriverListOfASDriverTable_Type_()
#define TCollection_List MDF_DriverListOfASDriverTable
#define TCollection_List_hxx <MDF_DriverListOfASDriverTable.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
