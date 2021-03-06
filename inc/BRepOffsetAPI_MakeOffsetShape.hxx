// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_MakeOffsetShape_HeaderFile
#define _BRepOffsetAPI_MakeOffsetShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepOffset_MakeOffset_HeaderFile
#include <BRepOffset_MakeOffset.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _BRepOffset_Mode_HeaderFile
#include <BRepOffset_Mode.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomAbs_JoinType_HeaderFile
#include <GeomAbs_JoinType.hxx>
#endif
class TopoDS_Shape;
class BRepOffset_MakeOffset;
class TopTools_ListOfShape;


//! Describes functions to build a shell out of a shape. The <br>
//! result is an unlooped shape parallel to the source shape. <br>
//! A MakeOffsetShape object provides a framework for: <br>
//! - defining the construction of a shell <br>
//! - implementing the construction algorithm <br>
//! - consulting the result. <br>
class BRepOffsetAPI_MakeOffsetShape  : public BRepBuilderAPI_MakeShape {
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

  
  Standard_EXPORT   BRepOffsetAPI_MakeOffsetShape();
  //! Constructs a shape parallel to the shape S, where <br>
//! - S may be a face, a shell, a solid or a compound of these shape kinds; <br>
//! - Offset is the offset value. The offset shape is constructed: <br>
//! - outside S, if Offset is positive, <br>
//! - inside S, if Offset is negative; <br>
//! - Tol defines the coincidence tolerance criterion for generated shapes; <br>
//! - Mode defines the construction type of parallels <br>
//!   applied to the free edges of shape S; currently, only one <br>
//!   construction type is implemented, namely the one where the free <br>
//! edges do not generate parallels; this corresponds to the default <br>
//!   value BRepOffset_Skin; <br>
//! - Intersection specifies how the algorithm must work in <br>
//!   order to limit the parallels to two adjacent shapes: <br>
//! - if Intersection is false (default value), the intersection <br>
//! is calculated with the parallels to the two adjacent shapes, <br>
//! - if Intersection is true, the intersection is calculated by <br>
//! taking all generated parallels into account; this computation method is <br>
//! more general as it avoids some self-intersections generated in the <br>
//! offset shape from features of small dimensions on shape S, however this <br>
//! method has not been completely implemented and therefore is not <br>
//! recommended for use; <br>
//! - SelfInter tells the algorithm whether a computation <br>
//!   to eliminate self-intersections must be applied to the resulting <br>
//! shape; however, as this functionality is not yet <br>
//! implemented, it is recommended to use the default value (false); <br>
//! - Join defines how to fill the holes that may appear between <br>
//!   parallels to the two adjacent faces. It may take values <br>
//!   GeomAbs_Arc or GeomAbs_Intersection: <br>
//! - if Join is equal to GeomAbs_Arc, then pipes are generated <br>
//! between two free edges of two adjacent parallels, <br>
//! and spheres are generated on "images" of vertices; <br>
//!           it is the default value, <br>
//! - if Join is equal to GeomAbs_Intersection, then the parallels to the <br>
//! two adjacent faces are enlarged and intersected, <br>
//! so that there are no free edges on parallels to faces. <br>
//!   Warnings <br>
//! 1. All the faces of the shape S should be based on the surfaces <br>
//! with continuity at least C1. <br>
//! 2. The offset value should be sufficiently small to avoid <br>
//! self-intersections in resulting shape. Otherwise these <br>
//! self-intersections may appear inside an offset face if its <br>
//! initial surface is not plane or sphere or cylinder, also some <br>
//! non-adjacent offset faces may intersect each other. Also, some <br>
//! offset surfaces may "turn inside out". <br>
//!   3. The algorithm may fail if the shape S contains vertices where <br>
//! more than 3 edges converge. <br>
//! 4. Since 3d-offset algorithm involves intersection of surfaces, <br>
//! it is under limitations of surface intersection algorithm. <br>
//! 5. A result cannot be generated if the underlying geometry of S is <br>
//! BSpline with continuity C0. <br>
//! Exceptions <br>
//! Geom_UndefinedDerivative if the underlying <br>
//! geometry of S is BSpline with continuity C0. <br>
  Standard_EXPORT   BRepOffsetAPI_MakeOffsetShape(const TopoDS_Shape& S,const Standard_Real Offset,const Standard_Real Tol,const BRepOffset_Mode Mode = BRepOffset_Skin,const Standard_Boolean Intersection = Standard_False,const Standard_Boolean SelfInter = Standard_False,const GeomAbs_JoinType Join = GeomAbs_Arc);
  
  Standard_EXPORT   virtual const BRepOffset_MakeOffset& MakeOffset() const;
  //! Builds the resulting shape (redefined from MakeShape). <br>
  Standard_EXPORT   virtual  void Build() ;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;
  //! Returns the list of edges generated from the shape <S>. <br>
  Standard_EXPORT    const TopTools_ListOfShape& GeneratedEdge(const TopoDS_Shape& S) ;
  //! Returns offset join type. <br>
  Standard_EXPORT     GeomAbs_JoinType GetJoinType() const;





protected:



BRepOffset_MakeOffset myOffsetShape;


private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
