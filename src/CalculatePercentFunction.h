/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CalculatePercentFunction.h
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

#ifndef CalculatePercentFunction_h_
#define CalculatePercentFunction_h_
#ifndef PCCI_2_COMMON_INCLUDES_
#define PCCI_2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* PCCI_2_COMMON_INCLUDES_ */

#include "zero_crossing_types.h"

/* Block states (default storage) for system '<Root>/CalculatePercentFunction' */
typedef struct {
  uint8_T Delay_DSTATE;                /* '<S1>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<S1>/Delay1' */
} DW_CalculatePercentFunction_P_T;

/* Zero-crossing (trigger) state for system '<Root>/CalculatePercentFunction' */
typedef struct {
  ZCSigState Delay_Reset_ZCE;          /* '<S1>/Delay' */
} ZCE_CalculatePercentFunction__T;

extern void PCCI_2_CalculatePercentFunction(real32_T rtu_PercentRawValue_U16,
  real_T rtu_motorRotatorDir_B, boolean_T *rty_IndicatorLamp_B, boolean_T
  *rty_motorTerminalA_B, boolean_T *rty_motorTerminalB_B,
  DW_CalculatePercentFunction_P_T *localDW, ZCE_CalculatePercentFunction__T
  *localZCE);

#endif                                 /* CalculatePercentFunction_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
