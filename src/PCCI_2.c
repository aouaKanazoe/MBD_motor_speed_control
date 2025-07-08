/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PCCI_2.c
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

#include "PCCI_2.h"
#include "CalculatePercentFunction.h"

/* Block states (default storage) */
DW_PCCI_2_T PCCI_2_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_PCCI_2_T PCCI_2_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_PCCI_2_T PCCI_2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PCCI_2_T PCCI_2_Y;

/* Real-time model */
static RT_MODEL_PCCI_2_T PCCI_2_M_;
RT_MODEL_PCCI_2_T *const PCCI_2_M = &PCCI_2_M_;

/* Model step function */
void PCCI_2_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/CalculatePercentFunction' */

  /* Inport: '<Root>/PercentRawValue_U16' incorporates:
   *  Inport: '<Root>/motorRotatorDir_B'
   *  Outport: '<Root>/IndicatorLamp_B'
   *  Outport: '<Root>/motorTerminalA_B'
   *  Outport: '<Root>/motorTerminalB_B'
   */
  PCCI_2_CalculatePercentFunction(PCCI_2_U.PercentRawValue_U16,
    PCCI_2_U.motorRotatorDir_B, &PCCI_2_Y.IndicatorLamp_B,
    &PCCI_2_Y.motorTerminalA_B, &PCCI_2_Y.motorTerminalB_B,
    &PCCI_2_DW.CalculatePercentFunction,
    &PCCI_2_PrevZCX.CalculatePercentFunction);

  /* End of Outputs for SubSystem: '<Root>/CalculatePercentFunction' */
}

/* Model initialize function */
void PCCI_2_initialize(void)
{
  PCCI_2_PrevZCX.CalculatePercentFunction.Delay_Reset_ZCE = POS_ZCSIG;
}

/* Model terminate function */
void PCCI_2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
