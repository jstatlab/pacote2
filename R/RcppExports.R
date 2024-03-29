# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' Rayleigh's Probability Density Function
#'
#' Function to calculate the Rayleigh probability density function
#'
#' @param x Value to return its density
#' @param sigma The variance associated
#' @return The probability density function of `x`
#' @useDynLib pacote2, .registration = TRUE
#' @importFrom Rcpp evalCpp
#' @export
drayleigh <- function(x, sigma) {
    .Call(`_pacote2_drayleigh`, x, sigma)
}

