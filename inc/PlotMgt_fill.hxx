#ifndef PLOTMGT_FILL_HEADER
#define PLOTMGT_FILL_HEADER

//----------------------------------------------------
struct mpo_one_line
{
  double X1, X2, X3, X4;
  double Y1, Y2, Y3, Y4;
  int type;      // =0 then *---*  *---*
                 // =1 then *   *--*   *
                 // =2 then *-------*  *
                 // =3 then *    *-----*
                 // =4 then *          *
                 // =5 then *----------*
};

//!!!!!!!!!!!!!!!!!!! POLYARCS
// X, Y -- coordinates of ellipse
// a, b -- radiuses of ellipse
// alpha -- start angle of fill, beta -- add angle of filling
// gamma -- rotation angle of filling (non-dependent of delta)
// delta -- rotation angle of ellipse
// step -- filling step
int __InitFillArc(double X,  double Y, double a, double b, double alpha, 
                  double beta, double gamma, double delta, double step);

// Get another line of fill
// n -- number of line
// data -- structure for retrieving coordinates of points
// data->n -- number of lines = {0, 1, 2}
//   data->n = 1 line is (data->X1, data->Y1, data->X2, data->Y2)
//   data->n = 2 line is (data->X1, data->Y1, data->X2, data->Y2)
//                   and (data->X3, data->Y3, data->X4, data->Y4)
int __GetLineOfFilledArc(int n, mpo_one_line &data);

//Ending job with filler
void __DoneFillArc(void);

//!!!!!!!!!!!!!!!!!!! POLYGONS
// double *X, *Y - coordinates of a points of a polygon
// n = count of points
// Point(X[0],Y[0]) = Point(X[n-1],Y[n-1]) (if no return 0)
// step - step of filling
// gamma -- angle of rotating filling
// Returns 0 if failts
// else return number of lines
int __InitFillPolygon(double* X, double* Y, int n, double step, double gamma = 0.);

// Input: n = n-th point 0 <= n < number_of_lines 
// Output: coordinates of a lines
// N - number of lines
// (X[2*i],Y[2*i+1]) - the i-th line , 0 <= i < N
// Return 0 if error
int __GetLineOfFilledPolygon (int n, int &N, double* &X, double* &Y);

void __DoneFillPolygon(void); // Use it if you need

#endif // PLOTMGT_FILL_HEADER
