// File:        TObj_TNameContainer.hxx
// Created:     Tue Nov 23 12:50:48 2004
// Author:      Pavel DURANDIN
// Copyright:   Open CASCADE  2007
// The original implementation Copyright: (C) RINA S.p.A

#ifndef TObj_TNameContainer_HeaderFile
#define TObj_TNameContainer_HeaderFile

#include <TObj_Common.hxx>
#include <TObj_Container.hxx>
#include <TDF_Attribute.hxx>

class Handle(TCollection_HExtendedString);
class Handle(TObj_TNameContainer);

/** 
* This class provides OCAF Attribute to storing the unique names of object in
* model. 
*/

class TObj_TNameContainer : public TDF_Attribute
{
  public:
  //! Standard methods of OCAF attribute

  //! Empty constructor
  Standard_EXPORT TObj_TNameContainer();
  
  //! This method is used in implementation of ID()
  static Standard_EXPORT const Standard_GUID& GetID();
  
  //! Returns the ID of TObj_TNameContainer attribute.
  Standard_EXPORT const Standard_GUID& ID() const;

 public:
  //! Method for create TObj_TNameContainer object
  
  //! Creates TObj_DataMapOfNameLabel attribute on given label if not exist
  static Standard_EXPORT Handle(TObj_TNameContainer) Set(const TDF_Label& theLabel);
  
 public:
  //! Methods for adding and removing names
  
  //! Records name with label attached
  Standard_EXPORT void RecordName(const Handle(TCollection_HExtendedString)& theName,
                                  const TDF_Label& theLabel);
  
  //! Remove name from the map
  Standard_EXPORT void RemoveName(const Handle(TCollection_HExtendedString)& theName);
  
  //! Return True is theName is registered in the Map
  Standard_EXPORT Standard_Boolean IsRegistered(const Handle(TCollection_HExtendedString)& theName) const;
  
  //! Remove all names registered in container
  Standard_EXPORT void Clear();

 public:
  //! Methods for setting and obtaining TObj_TNameContainer
  
  //! Sets the TObj_DataMapOfNameLabel object
  Standard_EXPORT void Set(const TObj_DataMapOfNameLabel& theElem);
  
  //! Returns the TObj_DataMapOfNameLabel object
  Standard_EXPORT const TObj_DataMapOfNameLabel& Get() const;
  
 public:
  //! Redefined OCAF abstract methods 
    
  //! Returns an new empty TObj_TNameContainer attribute. It is used by the
  //! copy algorithm.
  Standard_EXPORT Handle(TDF_Attribute) NewEmpty() const;
  
  //! Restores the backuped contents from <theWith> into this one. It is used 
  //! when aborting a transaction.
  Standard_EXPORT void Restore(const Handle(TDF_Attribute)& theWith);
  
  //! This method is used when copying an attribute from a source structure
  //! into a target structure.
  Standard_EXPORT void Paste(const Handle(TDF_Attribute)& theInto,
                             const Handle(TDF_RelocationTable)& theRT) const;
  
 private:
  //! Fields
  TObj_DataMapOfNameLabel myMap; //!< The map of the names
  
 public:
  //! CASCADE RTTI
  DEFINE_STANDARD_RTTI(TObj_TNameContainer)
};

//! Define handle class for TObj_TObject
DEFINE_STANDARD_HANDLE(TObj_TNameContainer,TDF_Attribute)

#endif

#ifdef _MSC_VER
#pragma once
#endif
