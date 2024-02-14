#include <Rcpp.h>
#include <numeric>
#include <boost/integer/common_factor_rt.hpp>

using namespace Rcpp;

//' Maximo Divisor Comum
//'
//' @param x Um número (int)
//' @param y Um número (int)
//' @return O MDC entre `x` e `y`
//' @useDynLib pacote2, .registration = TRUE
//' @importFrom Rcpp evalCpp
//' @export
 // [[Rcpp::export]]
 int mdc_rcpp (int& x, int& y) {
   return std::gcd(x, y);
 }
