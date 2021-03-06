// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepFilletAPI_LocalOperation_HeaderFile
#define _BRepFilletAPI_LocalOperation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_ChFiDS_SecHArray1_HeaderFile
#include <Handle_ChFiDS_SecHArray1.hxx>
#endif
class TopoDS_Edge;
class TopoDS_Vertex;
class ChFiDS_SecHArray1;


//! Construction of fillets on the edges of a Shell. <br>
class BRepFilletAPI_LocalOperation  : public BRepBuilderAPI_MakeShape {
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

  //! Adds a  contour in  the  builder  (builds a <br>
//!          contour  of tangent edges). <br>
  Standard_EXPORT   virtual  void Add(const TopoDS_Edge& E)  = 0;
  //! Reset the contour of index IC, there is nomore <br>
//!          information in the contour. <br>
  Standard_EXPORT   virtual  void ResetContour(const Standard_Integer IC)  = 0;
  //! Number of contours. <br>
  Standard_EXPORT   virtual  Standard_Integer NbContours() const = 0;
  //! Returns the index of  the  contour containing the edge <br>
//!          E, returns 0 if E doesn't belong to any contour. <br>
  Standard_EXPORT   virtual  Standard_Integer Contour(const TopoDS_Edge& E) const = 0;
  //! Number of Edges in the contour I. <br>
//! <br>
  Standard_EXPORT   virtual  Standard_Integer NbEdges(const Standard_Integer I) const = 0;
  //! Returns the Edge J in the contour I. <br>
//! <br>
  Standard_EXPORT   virtual const TopoDS_Edge& Edge(const Standard_Integer I,const Standard_Integer J) const = 0;
  //! remove the contour containing the Edge E. <br>
  Standard_EXPORT   virtual  void Remove(const TopoDS_Edge& E)  = 0;
  //! returns the length the contour of index IC. <br>
  Standard_EXPORT   virtual  Standard_Real Length(const Standard_Integer IC) const = 0;
  //! Returns the first Vertex of the contour of index IC. <br>
  Standard_EXPORT   virtual  TopoDS_Vertex FirstVertex(const Standard_Integer IC) const = 0;
  //! Returns the last Vertex of the contour of index IC. <br>
  Standard_EXPORT   virtual  TopoDS_Vertex LastVertex(const Standard_Integer IC) const = 0;
  //! returns the abscissa of the vertex V on <br>
//!          the contour of index IC. <br>
  Standard_EXPORT   virtual  Standard_Real Abscissa(const Standard_Integer IC,const TopoDS_Vertex& V) const = 0;
  //! returns the relative abscissa([0.,1.]) of the <br>
//!          vertex V on the contour of index IC. <br>
  Standard_EXPORT   virtual  Standard_Real RelativeAbscissa(const Standard_Integer IC,const TopoDS_Vertex& V) const = 0;
  //! returns true if the contour of index IC is closed <br>
//!          an tangent. <br>
  Standard_EXPORT   virtual  Standard_Boolean ClosedAndTangent(const Standard_Integer IC) const = 0;
  //! returns true if the contour of index IC is closed <br>
  Standard_EXPORT   virtual  Standard_Boolean Closed(const Standard_Integer IC) const = 0;
  //! Reset all the fields updated   by Build operation  and <br>
//!          leave the  algorithm in  the  same state  than  before <br>
//!          build    call.  It   allows   contours    and   radius <br>
//!          modifications  to build the result another time. <br>
  Standard_EXPORT   virtual  void Reset()  = 0;
  
  Standard_EXPORT   virtual  void Simulate(const Standard_Integer IC)  = 0;
  
  Standard_EXPORT   virtual  Standard_Integer NbSurf(const Standard_Integer IC) const = 0;
  
  Standard_EXPORT   virtual  Handle_ChFiDS_SecHArray1 Sect(const Standard_Integer IC,const Standard_Integer IS) const = 0;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
