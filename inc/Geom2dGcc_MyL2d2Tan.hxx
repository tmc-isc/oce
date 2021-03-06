// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_MyL2d2Tan_HeaderFile
#define _Geom2dGcc_MyL2d2Tan_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _GccEnt_Position_HeaderFile
#include <GccEnt_Position.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class GccEnt_BadQualifier;
class StdFail_NotDone;
class Geom2dAdaptor_Curve;
class Geom2dGcc_CurveTool;
class Geom2dGcc_MyQCurve;
class Geom2dGcc_FuncTCuCuOfMyL2d2Tan;
class Geom2dGcc_FuncTCuPtOfMyL2d2Tan;
class Geom2dGcc_FuncTCirCuOfMyL2d2Tan;
class gp_Pnt2d;
class GccEnt_QualifiedCirc;
class gp_Lin2d;



class Geom2dGcc_MyL2d2Tan  {
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

  
  Standard_EXPORT   Geom2dGcc_MyL2d2Tan(const Geom2dGcc_MyQCurve& Qualified1,const gp_Pnt2d& ThePoint,const Standard_Real Param1,const Standard_Real Tolang);
  
  Standard_EXPORT   Geom2dGcc_MyL2d2Tan(const GccEnt_QualifiedCirc& Qualified1,const Geom2dGcc_MyQCurve& Qualified2,const Standard_Real Param2,const Standard_Real Tolang);
  
  Standard_EXPORT   Geom2dGcc_MyL2d2Tan(const Geom2dGcc_MyQCurve& Qualified1,const Geom2dGcc_MyQCurve& Qualified2,const Standard_Real Param1,const Standard_Real Param2,const Standard_Real Tolang);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     gp_Lin2d ThisSolution() const;
  
  Standard_EXPORT     void WhichQualifier(GccEnt_Position& Qualif1,GccEnt_Position& Qualif2) const;
  
  Standard_EXPORT     void Tangency1(Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;
  
  Standard_EXPORT     void Tangency2(Standard_Real& ParSol,Standard_Real& ParArg,gp_Pnt2d& PntSol) const;





protected:





private:



Standard_Boolean WellDone;
gp_Lin2d linsol;
GccEnt_Position qualifier1;
GccEnt_Position qualifier2;
gp_Pnt2d pnttg1sol;
gp_Pnt2d pnttg2sol;
Standard_Real par1sol;
Standard_Real par2sol;
Standard_Real pararg1;
Standard_Real pararg2;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
