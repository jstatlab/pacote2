// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>
#include <math.h>

//' Rayleigh's Probability Density Function
//'
//' Function to calculate the Rayleigh probability density function
//'
//' @param x Value to return its density
//' @param sigma The variance associated
//' @return The probability density function of `x`
//' @useDynLib pacote2, .registration = TRUE
//' @importFrom Rcpp evalCpp
//' @export
// [[Rcpp::export]]
double drayleigh (double x, double sigma) {
  double y = 0.0;
  if (sigma <= 0.0) {
    throw std::range_error("Inadmissible value");
  }
  y = (x / pow(sigma, 2)) * exp(-pow(x, 2)/2*pow(sigma, 2));
  return(y);
}
