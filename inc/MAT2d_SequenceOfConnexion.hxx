// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_SequenceOfConnexion_HeaderFile
#define _MAT2d_SequenceOfConnexion_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_MAT2d_Connexion_HeaderFile
#include <Handle_MAT2d_Connexion.hxx>
#endif
#ifndef _Handle_MAT2d_SequenceNodeOfSequenceOfConnexion_HeaderFile
#include <Handle_MAT2d_SequenceNodeOfSequenceOfConnexion.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class MAT2d_Connexion;
class MAT2d_SequenceNodeOfSequenceOfConnexion;



class MAT2d_SequenceOfConnexion  : public TCollection_BaseSequence {
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

  
      MAT2d_SequenceOfConnexion();
  
  Standard_EXPORT     void Clear() ;
~MAT2d_SequenceOfConnexion()
{
  Clear();
}
  
  Standard_EXPORT    const MAT2d_SequenceOfConnexion& Assign(const MAT2d_SequenceOfConnexion& Other) ;
   const MAT2d_SequenceOfConnexion& operator =(const MAT2d_SequenceOfConnexion& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(MAT2d_Connexion)& T) ;
  
        void Append(MAT2d_SequenceOfConnexion& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(MAT2d_Connexion)& T) ;
  
        void Prepend(MAT2d_SequenceOfConnexion& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(MAT2d_Connexion)& T) ;
  
        void InsertBefore(const Standard_Integer Index,MAT2d_SequenceOfConnexion& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(MAT2d_Connexion)& T) ;
  
        void InsertAfter(const Standard_Integer Index,MAT2d_SequenceOfConnexion& S) ;
  
  Standard_EXPORT    const Handle_MAT2d_Connexion& First() const;
  
  Standard_EXPORT    const Handle_MAT2d_Connexion& Last() const;
  
        void Split(const Standard_Integer Index,MAT2d_SequenceOfConnexion& Sub) ;
  
  Standard_EXPORT    const Handle_MAT2d_Connexion& Value(const Standard_Integer Index) const;
   const Handle_MAT2d_Connexion& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(MAT2d_Connexion)& I) ;
  
  Standard_EXPORT     Handle_MAT2d_Connexion& ChangeValue(const Standard_Integer Index) ;
    Handle_MAT2d_Connexion& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   MAT2d_SequenceOfConnexion(const MAT2d_SequenceOfConnexion& Other);




};

#define SeqItem Handle_MAT2d_Connexion
#define SeqItem_hxx <MAT2d_Connexion.hxx>
#define TCollection_SequenceNode MAT2d_SequenceNodeOfSequenceOfConnexion
#define TCollection_SequenceNode_hxx <MAT2d_SequenceNodeOfSequenceOfConnexion.hxx>
#define Handle_TCollection_SequenceNode Handle_MAT2d_SequenceNodeOfSequenceOfConnexion
#define TCollection_SequenceNode_Type_() MAT2d_SequenceNodeOfSequenceOfConnexion_Type_()
#define TCollection_Sequence MAT2d_SequenceOfConnexion
#define TCollection_Sequence_hxx <MAT2d_SequenceOfConnexion.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
