test_that("mean(exp_smooth(y, 0.8)) < 105 works!", {
  expect_lt(
    {
      set.seed(10)
      y <- cumsum(100)
      ys <- exp_smooth(y, 0.8)
      mean(ys)
    },
    105
  )
})

