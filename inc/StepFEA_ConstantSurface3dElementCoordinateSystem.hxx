// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_ConstantSurface3dElementCoordinateSystem_HeaderFile
#define _StepFEA_ConstantSurface3dElementCoordinateSystem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_ConstantSurface3dElementCoordinateSystem_HeaderFile
#include <Handle_StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepFEA_FeaRepresentationItem_HeaderFile
#include <StepFEA_FeaRepresentationItem.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
class TCollection_HAsciiString;


//! Representation of STEP entity ConstantSurface3dElementCoordinateSystem <br>
class StepFEA_ConstantSurface3dElementCoordinateSystem : public StepFEA_FeaRepresentationItem {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepFEA_ConstantSurface3dElementCoordinateSystem();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(TCollection_HAsciiString)& aRepresentationItem_Name,const Standard_Integer aAxis,const Standard_Real aAngle) ;
  //! Returns field Axis <br>
  Standard_EXPORT     Standard_Integer Axis() const;
  //! Set field Axis <br>
  Standard_EXPORT     void SetAxis(const Standard_Integer Axis) ;
  //! Returns field Angle <br>
  Standard_EXPORT     Standard_Real Angle() const;
  //! Set field Angle <br>
  Standard_EXPORT     void SetAngle(const Standard_Real Angle) ;




  DEFINE_STANDARD_RTTI(StepFEA_ConstantSurface3dElementCoordinateSystem)

protected:




private: 


Standard_Integer theAxis;
Standard_Real theAngle;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
