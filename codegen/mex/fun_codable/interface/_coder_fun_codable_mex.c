/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_fun_codable_mex.c
 *
 * Code generation for function '_coder_fun_codable_mex'
 *
 */

/* Include files */
#include "_coder_fun_codable_mex.h"
#include "_coder_fun_codable_api.h"
#include "fun_codable_data.h"
#include "fun_codable_initialize.h"
#include "fun_codable_terminate.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void fun_codable_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
                             const mxArray *prhs[1])
{
  emlrtStack st = {
      NULL, /* site */
      NULL, /* tls */
      NULL  /* prev */
  };
  const mxArray *outputs[2];
  int32_T i;
  st.tls = emlrtRootTLSGlobal;
  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        11, "fun_codable");
  }
  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "fun_codable");
  }
  /* Call the function. */
  fun_codable_api(prhs[0], nlhs, outputs);
  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    i = 1;
  } else {
    i = nlhs;
  }
  emlrtReturnArrays(i, &plhs[0], &outputs[0]);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs,
                 const mxArray *prhs[])
{
  mexAtExit(&fun_codable_atexit);
  fun_codable_initialize();
  fun_codable_mexFunction(nlhs, plhs, nrhs, prhs);
  fun_codable_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLSR2022a(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1,
                           NULL, "windows-1252", true);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_fun_codable_mex.c) */
