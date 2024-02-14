test_that("drayleigh(1, 1) < 0.61 works!", {
  expect_lt(
    drayleigh(1, 1),
    0.61
  )
})
