/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PCCI_2.h
 *
 * Code generated for Simulink model 'PCCI_2'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Mon Jul  7 18:59:25 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PCCI_2_h_
#define PCCI_2_h_
#ifndef PCCI_2_COMMON_INCLUDES_
#define PCCI_2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PCCI_2_COMMON_INCLUDES_ */

#include "PCCI_2_types.h"
#include "CalculatePercentFunction.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_CalculatePercentFunction_P_T CalculatePercentFunction;/* '<Root>/CalculatePercentFunction' */
} DW_PCCI_2_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCE_CalculatePercentFunction__T CalculatePercentFunction;/* '<Root>/CalculatePercentFunction' */
} PrevZCX_PCCI_2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real32_T PercentRawValue_U16;        /* '<Root>/PercentRawValue_U16' */
  real_T motorRotatorDir_B;            /* '<Root>/motorRotatorDir_B' */
} ExtU_PCCI_2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T IndicatorLamp_B;           /* '<Root>/IndicatorLamp_B' */
  boolean_T motorTerminalA_B;          /* '<Root>/motorTerminalA_B' */
  boolean_T motorTerminalB_B;          /* '<Root>/motorTerminalB_B' */
} ExtY_PCCI_2_T;

/* Real-time Model Data Structure */
struct tag_RTM_PCCI_2_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_PCCI_2_T PCCI_2_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_PCCI_2_T PCCI_2_PrevZCX;

/* External inputs (root inport signals with default storage) */
extern ExtU_PCCI_2_T PCCI_2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PCCI_2_T PCCI_2_Y;

/* Model entry point functions */
extern void PCCI_2_initialize(void);
extern void PCCI_2_step(void);
extern void PCCI_2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PCCI_2_T *const PCCI_2_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'PCCI_2'
 * '<S1>'   : 'PCCI_2/CalculatePercentFunction'
 */
#endif                                 /* PCCI_2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
