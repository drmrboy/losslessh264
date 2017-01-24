#ifndef _BILLING_H_
#define _BILLING_H_

#define GENERATE_LZMA_MODE_FILE 1
#if GENERATE_LZMA_MODE_FILE
enum {
    PIP_DEFAULT_TAG,
    PIP_SKIP_TAG,
    PIP_SKIP_END_TAG,
    PIP_CBPC_TAG,
    PIP_CBPL_TAG,
    PIP_LAST_MB_TAG,  // not needed & unused -- this can be computed from existing decoder state
    PIP_QPL_TAG,
    PIP_MB_TYPE_TAG,
    PIP_TRANSFORM_8x8_TAG,
    PIP_REF_TAG,
    PIP_8x8_TAG,
    PIP_16x16_TAG,
    PIP_PRED_TAG,
    PIP_PRED_MODE_TAG,
    PIP_SUB_MB_TAG,
    PIP_MVX_TAG,
    PIP_MVY_TAG,
    PIP_LDC_TAG,
    PIP_CRDC_TAG,
    PIP_LAC_0_EOB,
    PIP_LAC_0_BITMASK,
    PIP_LAC_0_EXP, //must be contiguous
    PIP_LAC_0_RES, //must be contiguous
    PIP_LAC_0_SIGN, //must be contiguous
    PIP_LAC_N_EOB, //must be contiguous
    PIP_LAC_N_BITMASK, //must be contiguous
    PIP_LAC_N_EXP, //must be contiguous
    PIP_LAC_N_RES, //must be contiguous
    PIP_LAC_N_SIGN, //must be contiguous
    PIP_CRAC_EOB, //must be contiguous
    PIP_CRAC_BITMASK, //must be contiguous
    PIP_CRAC_EXP, //must be contiguous
    PIP_CRAC_RES, //must be contiguous
    PIP_CRAC_SIGN, //must be contiguous
    PIP_LAST_NONVAR_TAG
};
const int PIP_AC_STEP = 1;
enum {
    PIP_LAC_TAG0 = PIP_LAST_NONVAR_TAG,
    PIP_CRAC_TAG0 = PIP_LAST_NONVAR_TAG + 16,
    PIP_LAST_VAR_TAG = PIP_LAST_NONVAR_TAG + 32
};
enum {
    PIP_PREV_PRED_TAG = PIP_LAST_VAR_TAG,
    PIP_PREV_PRED_MODE_TAG,
    PIP_NZC_TAG,
    PIP_PADBYTE_TAG,
    NUM_TOTAL_TAGS
};
#define BILLING
extern double pip_decisions[NUM_TOTAL_TAGS];
extern double bill[NUM_TOTAL_TAGS];
extern int curBillTag;
extern int pipBillTag;
#else
enum {
    PIP_DEFAULT_TAG=1,
    PIP_SKIP_TAG=1,
    PIP_SKIP_END_TAG=1,
    PIP_CBPC_TAG=1,
    PIP_CBPL_TAG=1,
    PIP_LAST_MB_TAG=1,
    PIP_QPL_TAG=1,
    PIP_QPC_TAG=1,
    PIP_MB_TYPE_TAG=1,
    PIP_REF_TAG=1,
    PIP_TRANSFORM_8x8_TAG=1,
    PIP_8x8_TAG=1,
    PIP_16x16_TAG=1,
    PIP_PRED_TAG=1,
    PIP_PRED_MODE_TAG=1,
    PIP_SUB_MB_TAG=1,
    PIP_MVX_TAG=1,
    PIP_MVY_TAG=1,
    PIP_LDC_TAG=1,
    PIP_CRDC_TAG=1,
};
const int PIP_AC_STEP = 0;
enum {
    PIP_LAC_TAG0 = 1,
    PIP_CRAC_TAG0 = 1,
};
enum {
    PIP_PREV_PRED_TAG = 1,
    PIP_PREV_PRED_MODE_TAG=1,
    PIP_NZC_TAG=1
};
#endif

#endif
