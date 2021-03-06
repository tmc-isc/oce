// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_HeaderFile
#define _IntTools_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class TopoDS_Edge;
class IntTools_SequenceOfRoots;
class gp_Pnt;
class Geom_Curve;
class BRepAdaptor_Curve;
class IntTools_CArray1OfReal;
class IntTools_Range;
class IntTools_CommonPrt;
class IntTools_Root;
class IntTools_Compare;
class IntTools_CompareRange;
class IntTools_EdgeEdge;
class IntTools_EdgeFace;
class IntTools_FClass2d;
class IntTools_LineConstructor;
class IntTools_MarkedRangeSet;
class IntTools_BaseRangeSample;
class IntTools_CurveRangeSample;
class IntTools_SurfaceRangeSample;
class IntTools_CurveRangeLocalizeData;
class IntTools_SurfaceRangeLocalizeData;
class IntTools_BeanFaceIntersector;
class IntTools_BeanBeanIntersector;
class IntTools_Curve;
class IntTools_PntOnFace;
class IntTools_PntOn2Faces;
class IntTools_TopolTool;
class IntTools_FaceFace;
class IntTools_ShrunkRange;
class IntTools_Context;
class IntTools_Tools;
class IntTools_CArray1;
class IntTools_SequenceOfPntOn2Faces;
class IntTools_SequenceOfCurves;
class IntTools_SequenceOfRanges;
class IntTools_CArray1OfInteger;
class IntTools_CArray1OfReal;
class IntTools_SequenceOfRoots;
class IntTools_Array1OfRoots;
class IntTools_Array1OfRange;
class IntTools_QuickSort;
class IntTools_QuickSortRange;
class IntTools_SequenceOfCommonPrts;
class IntTools_IndexedDataMapOfTransientAddress;
class IntTools_ListOfCurveRangeSample;
class IntTools_ListOfSurfaceRangeSample;
class IntTools_ListOfBox;
class IntTools_CurveRangeSampleMapHasher;
class IntTools_SurfaceRangeSampleMapHasher;
class IntTools_MapOfCurveSample;
class IntTools_MapOfSurfaceSample;
class IntTools_DataMapOfCurveSampleBox;
class IntTools_DataMapOfSurfaceSampleBox;
class IntTools_SequenceNodeOfSequenceOfPntOn2Faces;
class IntTools_SequenceNodeOfSequenceOfCurves;
class IntTools_SequenceNodeOfSequenceOfRanges;
class IntTools_SequenceNodeOfSequenceOfRoots;
class IntTools_SequenceNodeOfSequenceOfCommonPrts;
class IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress;
class IntTools_ListNodeOfListOfCurveRangeSample;
class IntTools_ListIteratorOfListOfCurveRangeSample;
class IntTools_ListNodeOfListOfSurfaceRangeSample;
class IntTools_ListIteratorOfListOfSurfaceRangeSample;
class IntTools_ListNodeOfListOfBox;
class IntTools_ListIteratorOfListOfBox;
class IntTools_StdMapNodeOfMapOfCurveSample;
class IntTools_MapIteratorOfMapOfCurveSample;
class IntTools_StdMapNodeOfMapOfSurfaceSample;
class IntTools_MapIteratorOfMapOfSurfaceSample;
class IntTools_DataMapNodeOfDataMapOfCurveSampleBox;
class IntTools_DataMapIteratorOfDataMapOfCurveSampleBox;
class IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox;
class IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox;


//! Contains classes for intersection and classification <br>
//!         purposes and accompanying classes <br>
class IntTools  {
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

  //!  returns the length of the edge; <br>
  Standard_EXPORT   static  Standard_Real Length(const TopoDS_Edge& E) ;
  //! Remove from  the  sequence aSeq the Roots  that  have <br>
//!          values ti and tj such as  |ti-tj]  <  anEpsT. <br>
  Standard_EXPORT   static  void RemoveIdenticalRoots(IntTools_SequenceOfRoots& aSeq,const Standard_Real anEpsT) ;
  //! Sort the sequence aSeq of the Roots to arrange the <br>
//!          Roons  in  increasing  order <br>
  Standard_EXPORT   static  void SortRoots(IntTools_SequenceOfRoots& aSeq,const Standard_Real anEpsT) ;
  //! Find the states (before  and  after) for  each  Root <br>
//!          from  the sequence aSeq <br>
  Standard_EXPORT   static  void FindRootStates(IntTools_SequenceOfRoots& aSeq,const Standard_Real anEpsNull) ;
  
  Standard_EXPORT   static  Standard_Integer Parameter(const gp_Pnt& P,const Handle(Geom_Curve)& Curve,Standard_Real& aParm) ;
  
  Standard_EXPORT   static  Standard_Integer GetRadius(const BRepAdaptor_Curve& C,const Standard_Real t1,const Standard_Real t3,Standard_Real& R) ;
  
  Standard_EXPORT   static  Standard_Integer PrepareArgs(BRepAdaptor_Curve& C,const Standard_Real tMax,const Standard_Real tMin,const Standard_Integer Discret,const Standard_Real Deflect,IntTools_CArray1OfReal& anArgs) ;





protected:





private:




friend class IntTools_Range;
friend class IntTools_CommonPrt;
friend class IntTools_Root;
friend class IntTools_Compare;
friend class IntTools_CompareRange;
friend class IntTools_EdgeEdge;
friend class IntTools_EdgeFace;
friend class IntTools_FClass2d;
friend class IntTools_LineConstructor;
friend class IntTools_MarkedRangeSet;
friend class IntTools_BaseRangeSample;
friend class IntTools_CurveRangeSample;
friend class IntTools_SurfaceRangeSample;
friend class IntTools_CurveRangeLocalizeData;
friend class IntTools_SurfaceRangeLocalizeData;
friend class IntTools_BeanFaceIntersector;
friend class IntTools_BeanBeanIntersector;
friend class IntTools_Curve;
friend class IntTools_PntOnFace;
friend class IntTools_PntOn2Faces;
friend class IntTools_TopolTool;
friend class IntTools_FaceFace;
friend class IntTools_ShrunkRange;
friend class IntTools_Context;
friend class IntTools_Tools;
friend class IntTools_CArray1;
friend class IntTools_SequenceOfPntOn2Faces;
friend class IntTools_SequenceOfCurves;
friend class IntTools_SequenceOfRanges;
friend class IntTools_CArray1OfInteger;
friend class IntTools_CArray1OfReal;
friend class IntTools_SequenceOfRoots;
friend class IntTools_Array1OfRoots;
friend class IntTools_Array1OfRange;
friend class IntTools_QuickSort;
friend class IntTools_QuickSortRange;
friend class IntTools_SequenceOfCommonPrts;
friend class IntTools_IndexedDataMapOfTransientAddress;
friend class IntTools_ListOfCurveRangeSample;
friend class IntTools_ListOfSurfaceRangeSample;
friend class IntTools_ListOfBox;
friend class IntTools_CurveRangeSampleMapHasher;
friend class IntTools_SurfaceRangeSampleMapHasher;
friend class IntTools_MapOfCurveSample;
friend class IntTools_MapOfSurfaceSample;
friend class IntTools_DataMapOfCurveSampleBox;
friend class IntTools_DataMapOfSurfaceSampleBox;
friend class IntTools_SequenceNodeOfSequenceOfPntOn2Faces;
friend class IntTools_SequenceNodeOfSequenceOfCurves;
friend class IntTools_SequenceNodeOfSequenceOfRanges;
friend class IntTools_SequenceNodeOfSequenceOfRoots;
friend class IntTools_SequenceNodeOfSequenceOfCommonPrts;
friend class IntTools_IndexedDataMapNodeOfIndexedDataMapOfTransientAddress;
friend class IntTools_ListNodeOfListOfCurveRangeSample;
friend class IntTools_ListIteratorOfListOfCurveRangeSample;
friend class IntTools_ListNodeOfListOfSurfaceRangeSample;
friend class IntTools_ListIteratorOfListOfSurfaceRangeSample;
friend class IntTools_ListNodeOfListOfBox;
friend class IntTools_ListIteratorOfListOfBox;
friend class IntTools_StdMapNodeOfMapOfCurveSample;
friend class IntTools_MapIteratorOfMapOfCurveSample;
friend class IntTools_StdMapNodeOfMapOfSurfaceSample;
friend class IntTools_MapIteratorOfMapOfSurfaceSample;
friend class IntTools_DataMapNodeOfDataMapOfCurveSampleBox;
friend class IntTools_DataMapIteratorOfDataMapOfCurveSampleBox;
friend class IntTools_DataMapNodeOfDataMapOfSurfaceSampleBox;
friend class IntTools_DataMapIteratorOfDataMapOfSurfaceSampleBox;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
