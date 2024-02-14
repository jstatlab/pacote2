#' Smooth a Time Series
#'
#' A function to smooth a time series
#'
#' @param y Time series to be smoothed
#' @param a Smooth parameter
#' @return A time series smoothed
#'
#' @examples
#' # Example code
#' set.seed(10)
#' y <- cumsum(rnorm(1e5))
#' ys <- exp_smooth(y, 0.8)
#' plot(y, col = "grey80")
#' lines(ys, col = "red")
#'
#' @export
exp_smooth <- function (y, a) {
  .Call(
    "exp_smooth_c",
    y = as.double(y),
    a = as.double(a)
  )
}
