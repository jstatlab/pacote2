#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

SEXP exp_smooth_c (SEXP y_, SEXP a_) {
  // C objects
  int n;
  double *y, *ys;
  double a;

  // R object
  SEXP ys_;
  y_ = PROTECT(Rf_coerceVector(y_, REALSXP));
  n = Rf_length(y_);
  ys_ = PROTECT(Rf_allocVector(REALSXP, n));

  // R -> C
  a = REAL(a_)[0];
  y = REAL(y_);
  ys = REAL(ys_);   // ys_ -> ys

  ys[0] = y[0];
  for (int i = 1; i < n; ++i) {
    ys[i] = a * ys[i-1] + (1-a) * y[i];
  }
  UNPROTECT(2);
  return ys_;
}
