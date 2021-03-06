// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_UnitContext_HeaderFile
#define _STEPConstruct_UnitContext_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx_HeaderFile
#include <Handle_StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_StepRepr_GlobalUnitAssignedContext_HeaderFile
#include <Handle_StepRepr_GlobalUnitAssignedContext.hxx>
#endif
#ifndef _Handle_StepBasic_NamedUnit_HeaderFile
#include <Handle_StepBasic_NamedUnit.hxx>
#endif
#ifndef _Handle_StepRepr_GlobalUncertaintyAssignedContext_HeaderFile
#include <Handle_StepRepr_GlobalUncertaintyAssignedContext.hxx>
#endif
#ifndef _Handle_StepBasic_SiUnit_HeaderFile
#include <Handle_StepBasic_SiUnit.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _StepBasic_SiPrefix_HeaderFile
#include <StepBasic_SiPrefix.hxx>
#endif
class StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx;
class StepRepr_GlobalUnitAssignedContext;
class StepBasic_NamedUnit;
class StepRepr_GlobalUncertaintyAssignedContext;
class StepBasic_SiUnit;


//! Tool for creation (encoding) and decoding (for writing and reading <br>
//!          accordingly) context defining units and tolerances (uncerntanties) <br>
class STEPConstruct_UnitContext  {
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

  //! Creates empty tool <br>
  Standard_EXPORT   STEPConstruct_UnitContext();
  //! Creates new context (units are MM and radians, <br>
//!          uncertainty equal to Tol3d) <br>
  Standard_EXPORT     void Init(const Standard_Real Tol3d) ;
  //! Returns True if Init was called successfully <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Returns context (or Null if not done) <br>
  Standard_EXPORT     Handle_StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx Value() const;
  //! Computes the length, plane angle and solid angle conversion <br>
//!          factor  .  Returns a status, 0 if OK <br>
  Standard_EXPORT     Standard_Integer ComputeFactors(const Handle(StepRepr_GlobalUnitAssignedContext)& aContext) ;
  
  Standard_EXPORT     Standard_Integer ComputeFactors(const Handle(StepBasic_NamedUnit)& aUnit) ;
  //! Computes the uncertainty value (for length) <br>
  Standard_EXPORT     Standard_Integer ComputeTolerance(const Handle(StepRepr_GlobalUncertaintyAssignedContext)& aContext) ;
  //! Returns the lengthFactor <br>
  Standard_EXPORT     Standard_Real LengthFactor() const;
  //! Returns the planeAngleFactor <br>
  Standard_EXPORT     Standard_Real PlaneAngleFactor() const;
  //! Returns the solidAngleFactor <br>
  Standard_EXPORT     Standard_Real SolidAngleFactor() const;
  //! Returns the Uncertainty value (for length) <br>
//!          It has been converted  with LengthFactor <br>
  Standard_EXPORT     Standard_Real Uncertainty() const;
  //! Returns the areaFactor <br>
  Standard_EXPORT     Standard_Real AreaFactor() const;
  //! Returns the volumeFactor <br>
  Standard_EXPORT     Standard_Real VolumeFactor() const;
  //! Tells if a Uncertainty (for length) is recorded <br>
  Standard_EXPORT     Standard_Boolean HasUncertainty() const;
  //! Returns true if ComputeFactors has calculated <br>
//!          a LengthFactor <br>
  Standard_EXPORT     Standard_Boolean LengthDone() const;
  //! Returns true if ComputeFactors has calculated <br>
//!          a PlaneAngleFactor <br>
  Standard_EXPORT     Standard_Boolean PlaneAngleDone() const;
  //! Returns true if ComputeFactors has calculated <br>
//!          a SolidAngleFactor <br>
  Standard_EXPORT     Standard_Boolean SolidAngleDone() const;
  //! Returns true if areaFactor is computed <br>
  Standard_EXPORT     Standard_Boolean AreaDone() const;
  //! Returns true if volumeFactor is computed <br>
  Standard_EXPORT     Standard_Boolean VolumeDone() const;
  //! Returns a message for a given status (0 - empty) <br>
//!          This message can then be added as warning for transfer <br>
  Standard_EXPORT     Standard_CString StatusMessage(const Standard_Integer status) const;
  //! Convert SI prefix defined by enumertaion to corresponding <br>
//!          real factor (e.g. 1e6 for mega) <br>
  Standard_EXPORT   static  Standard_Real ConvertSiPrefix(const StepBasic_SiPrefix aPrefix) ;





protected:





private:

  //! Fills numerical equivalent of SiUnitName (in SI value) <br>
//!          Returns False if name SiUnit Name not recognized <br>
  Standard_EXPORT     Standard_Boolean SiUnitNameFactor(const Handle(StepBasic_SiUnit)& aSiUnit,Standard_Real& val) const;


Standard_Boolean done;
Handle_StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx GRC;
Standard_Real lengthFactor;
Standard_Real planeAngleFactor;
Standard_Real solidAngleFactor;
Standard_Real theUncertainty;
Standard_Real areaFactor;
Standard_Real volumeFactor;
Standard_Boolean areaDone;
Standard_Boolean volumeDone;
Standard_Boolean lengthDone;
Standard_Boolean planeAngleDone;
Standard_Boolean solidAngleDone;
Standard_Boolean hasUncertainty;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
