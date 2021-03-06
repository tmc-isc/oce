// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_PointClassifier_HeaderFile
#define _TopOpeBRep_PointClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_BRepTopAdaptor_TopolTool_HeaderFile
#include <Handle_BRepTopAdaptor_TopolTool.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif
#ifndef _TopOpeBRep_DataMapOfTopolTool_HeaderFile
#include <TopOpeBRep_DataMapOfTopolTool.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class BRepTopAdaptor_TopolTool;
class BRepAdaptor_HSurface;
class TopoDS_Face;
class gp_Pnt2d;



class TopOpeBRep_PointClassifier  {
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

  
  Standard_EXPORT   TopOpeBRep_PointClassifier();
  
  Standard_EXPORT     void Init() ;
  
  Standard_EXPORT     void Load(const TopoDS_Face& F) ;
  //! compute position of point <P> regarding with the face <F>. <br>
  Standard_EXPORT     TopAbs_State Classify(const TopoDS_Face& F,const gp_Pnt2d& P,const Standard_Real Tol) ;
  
  Standard_EXPORT     TopAbs_State State() const;





protected:





private:



Handle_BRepTopAdaptor_TopolTool myTopolTool;
Handle_BRepAdaptor_HSurface myHSurface;
TopOpeBRep_DataMapOfTopolTool myTopolToolMap;
TopAbs_State myState;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
