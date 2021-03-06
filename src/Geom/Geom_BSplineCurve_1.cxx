// File:	Geom_BSplineCurve_1.cxx
// Created:	Tue Mar  9 19:35:13 1993
// Author:	JCV
//		<fid@phylox>
// Copyright:	Matra Datavision 1993

// Created:	Fri Jul  5 16:37:59 1991
// Author:	JCV

// 03-02-97 : pmn ->LocateU sur Periodic (PRO6963), 
//            bon appel a LocateParameter (PRO6973) et mise en conformite avec
//            le cdl de LocateU, lorsque U est un noeud (PRO6988)

#define No_Standard_OutOfRange
#define No_Standard_DimensionError

#include <Geom_BSplineCurve.jxx>
#include <BSplCLib.hxx>
#include <gp.hxx>

#include <Geom_UndefinedDerivative.hxx>
#include <Standard_DimensionError.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_RangeError.hxx>

#define  POLES    (poles->Array1())
#define  KNOTS    (knots->Array1())
#define  FKNOTS   (flatknots->Array1())
#define  FMULTS   (BSplCLib::NoMults())

//=======================================================================
//function : IsCN
//purpose  : 
//=======================================================================

Standard_Boolean Geom_BSplineCurve::IsCN ( const Standard_Integer N) const
{
  Standard_RangeError_Raise_if
    (N < 0, "Geom_BSplineCurve::IsCN");

  switch (smooth) {
  case GeomAbs_CN : return Standard_True;
  case GeomAbs_C0 : return N <= 0;
  case GeomAbs_G1 : return N <= 0;
  case GeomAbs_C1 : return N <= 1;
  case GeomAbs_G2 : return N <= 1;
  case GeomAbs_C2 : return N <= 2;
  case GeomAbs_C3 : 
    return N <= 3 ? Standard_True :
           N <= deg - BSplCLib::MaxKnotMult (mults->Array1(), mults->Lower() + 1, mults->Upper() - 1);
  default:
    return Standard_False;
  }
}

//=======================================================================
//function : IsClosed
//purpose  : 
//=======================================================================

Standard_Boolean Geom_BSplineCurve::IsClosed () const
//-- { return (StartPoint().Distance (EndPoint())) <= gp::Resolution (); }
{ return (StartPoint().SquareDistance(EndPoint())) <= 1e-16; }

//=======================================================================
//function : IsPeriodic
//purpose  : 
//=======================================================================

Standard_Boolean Geom_BSplineCurve::IsPeriodic () const
{ return periodic; }

//=======================================================================
//function : Continuity
//purpose  : 
//=======================================================================

GeomAbs_Shape Geom_BSplineCurve::Continuity () const
{ return smooth; }

//=======================================================================
//function : Degree
//purpose  : 
//=======================================================================

Standard_Integer Geom_BSplineCurve::Degree () const
{ return deg; }

//=======================================================================
//function : D0
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::D0 ( const Standard_Real U, 
                                   gp_Pnt& P)  const 
{
  Standard_Real  NewU = U ;
  PeriodicNormalization(NewU) ;
  if (!IsCacheValid(NewU)) 
    {
     Geom_BSplineCurve  * MyCurve = (Geom_BSplineCurve *) this ;
     MyCurve->ValidateCache(NewU) ;
    }
  if (rational) {

    BSplCLib::CacheD0(NewU,
		      deg,
		      parametercache,
		      spanlenghtcache,
		      (cachepoles->Array1()),
		      cacheweights->Array1(),
		      P) ;
    
  }
  else {

    BSplCLib::CacheD0(NewU,
                    deg,
                    parametercache,
                    spanlenghtcache,
                    (cachepoles->Array1()),
                    *((TColStd_Array1OfReal*) NULL),
		    P) ;
  }
}

//=======================================================================
//function : D1
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::D1 (const Standard_Real U,
                                  gp_Pnt& P,
                                  gp_Vec& V1) const
{
Standard_Real  NewU = U ;
  PeriodicNormalization(NewU) ;
  if (!IsCacheValid(NewU)) 
    {
     Geom_BSplineCurve  * MyCurve = (Geom_BSplineCurve *) this ;
     MyCurve->ValidateCache(NewU) ;
    }
  if (rational) {
    BSplCLib::CacheD1(NewU,
		      deg,
		      parametercache,
		      spanlenghtcache,
		      (cachepoles->Array1()),
		      cacheweights->Array1(),
		      P,
		      V1) ;
  }
  else {
    BSplCLib::CacheD1(NewU,
		     deg, 
		     parametercache,
		     spanlenghtcache,
		     (cachepoles->Array1()),
		     *((TColStd_Array1OfReal*) NULL),
		     P,
		     V1) ;
  }
}

//=======================================================================
//function : D2
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::D2 (const Standard_Real U ,
                                  gp_Pnt& P ,
                                  gp_Vec& V1,
                                  gp_Vec& V2 ) const
{
 
  Standard_Real  NewU = U ;
  PeriodicNormalization(NewU) ;
  if (!IsCacheValid(NewU)) 
    {
     Geom_BSplineCurve  * MyCurve = (Geom_BSplineCurve *) this ;
     MyCurve->ValidateCache(NewU) ;
    }
  if (rational) {
    BSplCLib::CacheD2(NewU,
		      deg,
		      parametercache,
		      spanlenghtcache,
		      (cachepoles->Array1()),
		      cacheweights->Array1(),
		      P,
		      V1,
		      V2) ;
  }
  else {
    BSplCLib::CacheD2(NewU,
		      deg,
		      parametercache,
		      spanlenghtcache,
		      (cachepoles->Array1()),
		      *((TColStd_Array1OfReal*) NULL),
		      P,
		      V1,
		      V2) ;
  }
}

//=======================================================================
//function : D3
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::D3  (const Standard_Real U ,
			     gp_Pnt& P ,
			     gp_Vec& V1,
			     gp_Vec& V2,
			     gp_Vec& V3 ) const
{
  
Standard_Real  NewU = U ;
  PeriodicNormalization(NewU) ;
  if (!IsCacheValid(NewU)) 
    {
     Geom_BSplineCurve  * MyCurve = (Geom_BSplineCurve *) this ;
     MyCurve->ValidateCache(NewU) ;
    }
  if (rational) {
    BSplCLib::CacheD3(NewU,
		      deg,
		      parametercache,
		      spanlenghtcache,
		      (cachepoles->Array1()),
		      cacheweights->Array1(),
		      P,
		      V1,
		      V2,
		      V3) ;
  }
  else {
    BSplCLib::CacheD3(NewU,
		      deg,
		      parametercache,
		      spanlenghtcache,
		      (cachepoles->Array1()),
		      *((TColStd_Array1OfReal*) NULL),
		      P,
		      V1,
		      V2,
		      V3) ;
  }
}

//=======================================================================
//function : DN
//purpose  : 
//=======================================================================

gp_Vec Geom_BSplineCurve::DN  (const Standard_Real    U,
			       const Standard_Integer N ) const
{
  gp_Vec V;
  if (rational) {
    BSplCLib::DN(U,N,0,deg,periodic,POLES,
		 weights->Array1(),
		 FKNOTS,FMULTS,V);
  }
  else {
    BSplCLib::DN(U,N,0,deg,periodic,POLES,
		 *((TColStd_Array1OfReal*) NULL),
		 FKNOTS,FMULTS,V);
  }
  return V;
}

//=======================================================================
//function : EndPoint
//purpose  : 
//=======================================================================

gp_Pnt Geom_BSplineCurve::EndPoint () const
{ 
  if (mults->Value (knots->Upper ()) == deg + 1) 
    return poles->Value (poles->Upper());
  else
    return Value(LastParameter());
}

//=======================================================================
//function : FirstUKnotIndex
//purpose  : 
//=======================================================================

Standard_Integer Geom_BSplineCurve::FirstUKnotIndex () const
{ 
  if (periodic) return 1;
  else return BSplCLib::FirstUKnotIndex (deg, mults->Array1()); 
}

//=======================================================================
//function : FirstParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_BSplineCurve::FirstParameter () const
{
  return flatknots->Value (deg+1); 
}

//=======================================================================
//function : Knot
//purpose  : 
//=======================================================================

Standard_Real Geom_BSplineCurve::Knot (const Standard_Integer Index) const
{
  Standard_OutOfRange_Raise_if
    (Index < 1 || Index > knots->Length(), "Geom_BSplineCurve::Knot");
  return knots->Value (Index);
}

//=======================================================================
//function : KnotDistribution
//purpose  : 
//=======================================================================

GeomAbs_BSplKnotDistribution Geom_BSplineCurve::KnotDistribution () const
{ 
  return knotSet; 
}

//=======================================================================
//function : Knots
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::Knots (TColStd_Array1OfReal& K) const
{
  Standard_DimensionError_Raise_if
    (K.Length() != knots->Length(), "Geom_BSplineCurve::Knots");
  K = knots->Array1();
}

//=======================================================================
//function : KnotSequence
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::KnotSequence (TColStd_Array1OfReal& K) const
{
  Standard_DimensionError_Raise_if
    (K.Length() != flatknots->Length(), "Geom_BSplineCurve::KnotSequence");
  K = flatknots->Array1();
}

//=======================================================================
//function : LastUKnotIndex
//purpose  : 
//=======================================================================

Standard_Integer Geom_BSplineCurve::LastUKnotIndex() const
{
  if (periodic) return knots->Length();
  else return BSplCLib::LastUKnotIndex (deg, mults->Array1()); 
}

//=======================================================================
//function : LastParameter
//purpose  : 
//=======================================================================

Standard_Real Geom_BSplineCurve::LastParameter () const
{
  return flatknots->Value (flatknots->Upper()-deg); 
}

//=======================================================================
//function : LocalValue
//purpose  : 
//=======================================================================

gp_Pnt Geom_BSplineCurve::LocalValue
  (const Standard_Real    U,
   const Standard_Integer FromK1,
   const Standard_Integer ToK2)   const
{
  gp_Pnt P;
  LocalD0(U,FromK1,ToK2,P);
  return P;
}

//=======================================================================
//function : LocalD0
//purpose  : 
//=======================================================================

void  Geom_BSplineCurve::LocalD0
  (const Standard_Real    U,
   const Standard_Integer FromK1,
   const Standard_Integer ToK2,
   gp_Pnt& P)   const
{
  Standard_DomainError_Raise_if (FromK1 == ToK2,
				 "Geom_BSplineCurve::LocalValue");

  Standard_Real u = U;
  Standard_Integer index = 0;
  BSplCLib::LocateParameter(deg, FKNOTS, U, periodic,FromK1,ToK2, index,u);
  index = BSplCLib::FlatIndex(deg,index,mults->Array1(),periodic);
  if (rational) {
    BSplCLib::D0(u,index,deg,periodic,POLES,
		 weights->Array1(),
		 FKNOTS,FMULTS,P);
  }
  else {
    BSplCLib::D0(u,index,deg,periodic,POLES,
		 *((TColStd_Array1OfReal*) NULL),
		 FKNOTS,FMULTS,P);
  }
}

//=======================================================================
//function : LocalD1
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::LocalD1 (const Standard_Real    U,
                                 const Standard_Integer FromK1,
                                 const Standard_Integer ToK2,
				 gp_Pnt&    P, 
				 gp_Vec&    V1)    const
{
  Standard_DomainError_Raise_if (FromK1 == ToK2,
				 "Geom_BSplineCurve::LocalD1");
  
  Standard_Real u = U;
  Standard_Integer index = 0;
  BSplCLib::LocateParameter(deg, FKNOTS, U, periodic, FromK1,ToK2, index, u);
  index = BSplCLib::FlatIndex(deg,index,mults->Array1(),periodic);
  if (rational) {
    BSplCLib::D1(u,index,deg,periodic,POLES,
		 weights->Array1(),
		 FKNOTS,FMULTS,P,V1);
  }
  else {
    BSplCLib::D1(u,index,deg,periodic,POLES,
		 *((TColStd_Array1OfReal*) NULL),
		 FKNOTS,FMULTS,P,V1);
  }
}

//=======================================================================
//function : LocalD2
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::LocalD2
  (const Standard_Real    U,
   const Standard_Integer FromK1,
   const Standard_Integer ToK2, 
   gp_Pnt&    P,
   gp_Vec&    V1,
   gp_Vec&    V2) const
{
  Standard_DomainError_Raise_if (FromK1 == ToK2,
				 "Geom_BSplineCurve::LocalD2");
  
  Standard_Real u = U;
  Standard_Integer index = 0;
  BSplCLib::LocateParameter(deg, FKNOTS, U, periodic, FromK1,ToK2, index, u);
  index = BSplCLib::FlatIndex(deg,index,mults->Array1(),periodic);
  if (rational) {
    BSplCLib::D2(u,index,deg,periodic,POLES,
		 weights->Array1(),
		 FKNOTS,FMULTS,P,V1,V2);
  }
  else {
    BSplCLib::D2(u,index,deg,periodic,POLES,
		 *((TColStd_Array1OfReal*) NULL),
		 FKNOTS,FMULTS,P,V1,V2);
  }
}

//=======================================================================
//function : LocalD3
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::LocalD3
  (const Standard_Real    U,
   const Standard_Integer FromK1,
   const Standard_Integer ToK2, 
   gp_Pnt&    P,
   gp_Vec&    V1,
   gp_Vec&    V2,
   gp_Vec&    V3) const
{
  Standard_DomainError_Raise_if (FromK1 == ToK2,
				 "Geom_BSplineCurve::LocalD3");
  
  Standard_Real u = U;
  Standard_Integer index = 0;
  BSplCLib::LocateParameter(deg, FKNOTS, U, periodic, FromK1,ToK2, index, u);
  index = BSplCLib::FlatIndex(deg,index,mults->Array1(),periodic);
  if (rational) {
    BSplCLib::D3(u,index,deg,periodic,POLES,
		 weights->Array1(),
		 FKNOTS,FMULTS,P,V1,V2,V3);
  }
  else {
    BSplCLib::D3(u,index,deg,periodic,POLES,
		 *((TColStd_Array1OfReal*) NULL),
		 FKNOTS,FMULTS,P,V1,V2,V3);
  }
}

//=======================================================================
//function : LocalDN
//purpose  : 
//=======================================================================

gp_Vec Geom_BSplineCurve::LocalDN
  (const Standard_Real    U,
   const Standard_Integer FromK1,
   const Standard_Integer ToK2,
   const Standard_Integer N      ) const
{
  Standard_DomainError_Raise_if (FromK1 == ToK2,
				 "Geom_BSplineCurve::LocalD3");
  
  Standard_Real u = U;
  Standard_Integer index = 0;
  BSplCLib::LocateParameter(deg, FKNOTS, U, periodic, FromK1,ToK2, index, u);
  index = BSplCLib::FlatIndex(deg,index,mults->Array1(),periodic);
  
  gp_Vec V;
  if (rational) {
    BSplCLib::DN(u,N,index,deg,periodic,POLES,
		 weights->Array1(),
		 FKNOTS,FMULTS,V);
  }
  else {
    BSplCLib::DN(u,N,index,deg,periodic,POLES,
		 *((TColStd_Array1OfReal*) NULL),
		 FKNOTS,FMULTS,V);
  }
  return V;
}

//=======================================================================
//function : Multiplicity
//purpose  : 
//=======================================================================

Standard_Integer Geom_BSplineCurve::Multiplicity 
  (const Standard_Integer Index) const
{
  Standard_OutOfRange_Raise_if (Index < 1 || Index > mults->Length(),
				"Geom_BSplineCurve::Multiplicity");
  return mults->Value (Index);
}

//=======================================================================
//function : Multiplicities
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::Multiplicities (TColStd_Array1OfInteger& M) const
{
  Standard_DimensionError_Raise_if (M.Length() != mults->Length(),
				    "Geom_BSplineCurve::Multiplicities");
  M = mults->Array1();
}

//=======================================================================
//function : NbKnots
//purpose  : 
//=======================================================================

Standard_Integer Geom_BSplineCurve::NbKnots () const
{ return knots->Length(); }

//=======================================================================
//function : NbPoles
//purpose  : 
//=======================================================================

Standard_Integer Geom_BSplineCurve::NbPoles () const
{ return poles->Length(); }

//=======================================================================
//function : Pole
//purpose  : 
//=======================================================================

gp_Pnt Geom_BSplineCurve::Pole (const Standard_Integer Index) const
{
  Standard_OutOfRange_Raise_if (Index < 1 || Index > poles->Length(),
				"Geom_BSplineCurve::Pole");
  return poles->Value (Index);      
}

//=======================================================================
//function : Poles
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::Poles (TColgp_Array1OfPnt& P) const
{
  Standard_DimensionError_Raise_if (P.Length() != poles->Length(),
				    "Geom_BSplineCurve::Poles");
  P = poles->Array1();
}

//=======================================================================
//function : StartPoint
//purpose  : 
//=======================================================================

gp_Pnt Geom_BSplineCurve::StartPoint () const
{
  if (mults->Value (1) == deg + 1)  
    return poles->Value (1);
  else 
    return Value(FirstParameter());
}

//=======================================================================
//function : Weight
//purpose  : 
//=======================================================================

Standard_Real Geom_BSplineCurve::Weight
  (const Standard_Integer Index) const
{
  Standard_OutOfRange_Raise_if (Index < 1 || Index > poles->Length(),
				"Geom_BSplineCurve::Weight");
  if (IsRational())
    return weights->Value (Index);
  else
    return 1.;
}

//=======================================================================
//function : Weights
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::Weights
  (TColStd_Array1OfReal& W) const
{
  Standard_DimensionError_Raise_if (W.Length() != poles->Length(),
				    "Geom_BSplineCurve::Weights");
  if (IsRational())
    W = weights->Array1();
  else {
    Standard_Integer i;

    for (i = W.Lower(); i <= W.Upper(); i++)
      W(i) = 1.;
  }
}

//=======================================================================
//function : IsRational
//purpose  : 
//=======================================================================

Standard_Boolean Geom_BSplineCurve::IsRational () const
{ 
  return !weights.IsNull(); 
} 

//=======================================================================
//function : Transform
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::Transform
  (const gp_Trsf& T)
{
  TColgp_Array1OfPnt & CPoles = poles->ChangeArray1();
  for (Standard_Integer I = 1; I <= CPoles.Length(); I++)  
    CPoles (I).Transform (T);
  InvalidateCache() ;
  maxderivinvok = 0;
}

//=======================================================================
//function : LocateU
//purpose  : 
// pmn : 30/01/97 mise en conformite avec le cdl, lorsque U est un noeud
// (PRO6988)
//=======================================================================

void Geom_BSplineCurve::LocateU
  (const Standard_Real    U, 
   const Standard_Real    ParametricTolerance, 
   Standard_Integer&      I1,
   Standard_Integer&      I2,
   const Standard_Boolean WithKnotRepetition) const
{
  Standard_Real NewU = U;
  Handle(TColStd_HArray1OfReal) TheKnots;
  if (WithKnotRepetition)  TheKnots = flatknots;
  else                     TheKnots = knots;
  const TColStd_Array1OfReal & CKnots = TheKnots->Array1();

  PeriodicNormalization(NewU); //Attention a la periode
  
  Standard_Real UFirst = CKnots (1);
  Standard_Real ULast  = CKnots (CKnots.Length());
  if (Abs (NewU - UFirst) <= Abs(ParametricTolerance)) { I1 = I2 = 1; }
  else if (Abs (NewU - ULast) <= Abs(ParametricTolerance)) { 
    I1 = I2 = CKnots.Length();
  }
  else if (NewU < UFirst - Abs(ParametricTolerance)) {
    I2 = 1;
    I1 = 0;
  }
  else if (NewU > ULast + Abs(ParametricTolerance)) {
    I1 = CKnots.Length();
    I2 = I1 + 1;
  }
  else {
    I1 = 1;
    BSplCLib::Hunt (CKnots, NewU, I1);
    while ( Abs( CKnots(I1+1) - NewU) <= Abs(ParametricTolerance)) I1++;
    if ( Abs( CKnots(I1) - NewU) <= Abs(ParametricTolerance)) {
      I2 = I1;
    }
    else {
      I2 = I1 + 1;
    }
  }
}

//=======================================================================
//function : Resolution
//purpose  : 
//=======================================================================

void Geom_BSplineCurve::Resolution(const Standard_Real Tolerance3D,
				   Standard_Real &     UTolerance) 
{
  Standard_Integer ii;  
  if(!maxderivinvok){
    if ( periodic) {
      Standard_Integer NbKnots, NbPoles;
      BSplCLib::PrepareUnperiodize( deg, 
				    mults->Array1(),
				    NbKnots,
				    NbPoles);
      TColgp_Array1OfPnt    new_poles(1,NbPoles) ;
      TColStd_Array1OfReal  new_weights(1,NbPoles) ;
      for(ii = 1 ; ii <= NbPoles ; ii++) {
	new_poles(ii) = poles->Array1()((ii-1) % poles->Length() + 1) ;
      }
      if (rational) {
	for(ii = 1 ; ii <= NbPoles ; ii++) {
	  new_weights(ii) = weights->Array1()((ii-1) % poles->Length() + 1) ;
	}
	BSplCLib::Resolution(new_poles,
			     new_weights,
			     new_poles.Length(),
			     flatknots->Array1(),
			     deg,
			     1.,
			     maxderivinv) ;
      }
      else {
	BSplCLib::Resolution(new_poles,
			     *((TColStd_Array1OfReal*) NULL),
			     new_poles.Length(),
			     flatknots->Array1(),
			     deg,
			     1.,
			     maxderivinv) ;
      }
      
    }
    else {
      if (rational) {
	BSplCLib::Resolution(poles->Array1(),
			     weights->Array1(),
			     poles->Length(),
			     flatknots->Array1(),
			     deg,
			     1.,
			     maxderivinv) ;
      }
      else {
	BSplCLib::Resolution(poles->Array1(),
			     *((TColStd_Array1OfReal*) NULL),
			     poles->Length(),
			     flatknots->Array1(),
			     deg,
			     1.,
			     maxderivinv) ;
      }
    }
    maxderivinvok = 1;
  }
  UTolerance = Tolerance3D * maxderivinv;
}
