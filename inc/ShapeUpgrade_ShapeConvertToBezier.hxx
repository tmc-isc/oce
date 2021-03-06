// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_ShapeConvertToBezier_HeaderFile
#define _ShapeUpgrade_ShapeConvertToBezier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _ShapeUpgrade_ShapeDivide_HeaderFile
#include <ShapeUpgrade_ShapeDivide.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_FaceDivide_HeaderFile
#include <Handle_ShapeUpgrade_FaceDivide.hxx>
#endif
class TopoDS_Shape;
class ShapeUpgrade_FaceDivide;


//! API class for performing conversion of 3D, 2D curves to bezier curves <br>
//!          and surfaces to bezier based surfaces ( <br>
//!           bezier surface, <br>
//!           surface of revolution based on bezier curve, <br>
//!           offset surface based on any previous type). <br>
class ShapeUpgrade_ShapeConvertToBezier  : public ShapeUpgrade_ShapeDivide {
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

  //! Empty constructor. <br>
  Standard_EXPORT   ShapeUpgrade_ShapeConvertToBezier();
  //! Initialize by a Shape. <br>
  Standard_EXPORT   ShapeUpgrade_ShapeConvertToBezier(const TopoDS_Shape& S);
  //! Sets mode for conversion 2D curves to bezier. <br>
        void Set2dConversion(const Standard_Boolean mode) ;
  //! Returns the 2D conversion mode. <br>
        Standard_Boolean Get2dConversion() const;
  //! Sets mode for conversion 3d curves to bezier. <br>
        void Set3dConversion(const Standard_Boolean mode) ;
  //! Returns the 3D conversion mode. <br>
        Standard_Boolean Get3dConversion() const;
  //! Sets mode for conversion surfaces curves to <br>
//!          bezier basis. <br>
        void SetSurfaceConversion(const Standard_Boolean mode) ;
  //! Returns the surface conversion mode. <br>
        Standard_Boolean GetSurfaceConversion() const;
  //! Sets mode for conversion Geom_Line to bezier. <br>
        void Set3dLineConversion(const Standard_Boolean mode) ;
  //! Returns the Geom_Line conversion mode. <br>
        Standard_Boolean Get3dLineConversion() const;
  //! Sets mode for conversion Geom_Circle to bezier. <br>
        void Set3dCircleConversion(const Standard_Boolean mode) ;
  //! Returns the Geom_Circle conversion mode. <br>
        Standard_Boolean Get3dCircleConversion() const;
  //! Sets mode for conversion Geom_Conic to bezier. <br>
        void Set3dConicConversion(const Standard_Boolean mode) ;
  //! Returns the Geom_Conic conversion mode. <br>
        Standard_Boolean Get3dConicConversion() const;
  //! Sets mode for conversion Geom_Plane to Bezier <br>
        void SetPlaneMode(const Standard_Boolean mode) ;
  //! Returns the Geom_Pline conversion mode. <br>
        Standard_Boolean GetPlaneMode() const;
  //! Sets mode for conversion Geom_SurfaceOfRevolution to Bezier <br>
        void SetRevolutionMode(const Standard_Boolean mode) ;
  //! Returns the Geom_SurfaceOfRevolution conversion mode. <br>
        Standard_Boolean GetRevolutionMode() const;
  //! Sets mode for conversion Geom_SurfaceOfLinearExtrusion to Bezier <br>
        void SetExtrusionMode(const Standard_Boolean mode) ;
  //! Returns the Geom_SurfaceOfLinearExtrusion conversion mode. <br>
        Standard_Boolean GetExtrusionMode() const;
  //! Sets mode for conversion Geom_BSplineSurface to Bezier <br>
        void SetBSplineMode(const Standard_Boolean mode) ;
  //! Returns the Geom_BSplineSurface conversion mode. <br>
        Standard_Boolean GetBSplineMode() const;
  //! Performs converting and computes the resulting shape <br>
  Standard_EXPORT   virtual  Standard_Boolean Perform(const Standard_Boolean newContext = Standard_True) ;





protected:

  //! Returns the tool for dividing faces. <br>
  Standard_EXPORT   virtual  Handle_ShapeUpgrade_FaceDivide GetSplitFaceTool() const;




private:



Standard_Boolean my2dMode;
Standard_Boolean my3dMode;
Standard_Boolean mySurfaceMode;
Standard_Boolean my3dLineMode;
Standard_Boolean my3dCircleMode;
Standard_Boolean my3dConicMode;
Standard_Boolean myPlaneMode;
Standard_Boolean myRevolutionMode;
Standard_Boolean myExtrusionMode;
Standard_Boolean myBSplineMode;
Standard_Integer myLevel;


};


#include <ShapeUpgrade_ShapeConvertToBezier.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
