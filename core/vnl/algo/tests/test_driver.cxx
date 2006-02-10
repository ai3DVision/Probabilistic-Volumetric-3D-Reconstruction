#include <testlib/testlib_register.h>

DECLARE( test_amoeba );
DECLARE( test_cholesky );
DECLARE( test_complex_eigensystem );
DECLARE( test_convolve );
DECLARE( test_cpoly_roots );
DECLARE( test_determinant );
DECLARE( test_rank );
DECLARE( test_fft );
DECLARE( test_fft1d );
DECLARE( test_fft2d );
DECLARE( test_functions );
DECLARE( test_generalized_eigensystem );
DECLARE( test_levenberg_marquardt );
DECLARE( test_minimizers );
DECLARE( test_powell );
DECLARE( test_qr );
DECLARE( test_qsvd );
DECLARE( test_rational );
DECLARE( test_real_eigensystem );
DECLARE( test_rnpoly_roots );
DECLARE( test_rpoly_roots );
DECLARE( test_sparse_matrix );
DECLARE( test_integral );
DECLARE( test_svd );
DECLARE( test_symmetric_eigensystem );
DECLARE( test_algo );

void
register_tests()
{
  REGISTER( test_amoeba );
  REGISTER( test_cholesky );
  REGISTER( test_complex_eigensystem );
  REGISTER( test_convolve );
  REGISTER( test_cpoly_roots );
  REGISTER( test_determinant );
  REGISTER( test_rank );
  REGISTER( test_fft );
  REGISTER( test_fft1d );
  REGISTER( test_fft2d );
  REGISTER( test_functions );
  REGISTER( test_generalized_eigensystem );
  REGISTER( test_levenberg_marquardt );
  REGISTER( test_minimizers );
  REGISTER( test_powell );
  REGISTER( test_qr );
  REGISTER( test_qsvd );
  REGISTER( test_real_eigensystem );
  REGISTER( test_integral );
  REGISTER( test_rnpoly_roots );
  REGISTER( test_rpoly_roots );
  REGISTER( test_sparse_matrix );
  REGISTER( test_svd );
  REGISTER( test_symmetric_eigensystem );
  REGISTER( test_algo );
}

DEFINE_MAIN;
