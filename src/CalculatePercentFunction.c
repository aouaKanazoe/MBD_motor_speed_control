/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: CalculatePercentFunction.c
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

#include "rtwtypes.h"
#include "CalculatePercentFunction.h"
#include "zero_crossing_types.h"

/* Output and update for atomic system: '<Root>/CalculatePercentFunction' */
void PCCI_2_CalculatePercentFunction(real32_T rtu_PercentRawValue_U16, real_T
  rtu_motorRotatorDir_B, boolean_T *rty_IndicatorLamp_B, boolean_T
  *rty_motorTerminalA_B, boolean_T *rty_motorTerminalB_B,
  DW_CalculatePercentFunction_P_T *localDW, ZCE_CalculatePercentFunction__T
  *localZCE)
{
  real32_T rtb_Product;

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  Product: '<S1>/Divide'
   */
  rtb_Product = rtu_PercentRawValue_U16 / 1023.0F * 100.0F;

  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  *rty_IndicatorLamp_B = (rtb_Product > 50.0F);

  /* Delay: '<S1>/Delay' incorporates:
   *  Delay: '<S1>/Delay1'
   */
  if (localDW->Delay1_DSTATE && (localZCE->Delay_Reset_ZCE != POS_ZCSIG)) {
    localDW->Delay_DSTATE = 0U;
  }

  localZCE->Delay_Reset_ZCE = localDW->Delay1_DSTATE;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Delay: '<S1>/Delay'
   */
  localDW->Delay_DSTATE++;

  /* RelationalOperator: '<S1>/Less Than' incorporates:
   *  Delay: '<S1>/Delay'
   */
  *rty_motorTerminalA_B = (localDW->Delay_DSTATE <= rtb_Product);

  /* Switch: '<S1>/Switch' */
  *rty_motorTerminalB_B = ((!(rtu_motorRotatorDir_B > 0.0)) &&
    (*rty_motorTerminalA_B));

  /* Switch: '<S1>/Switch2' */
  *rty_motorTerminalA_B = ((rtu_motorRotatorDir_B != 0.0) &&
    (*rty_motorTerminalA_B));

  /* RelationalOperator: '<S1>/Less Than1' incorporates:
   *  Constant: '<S1>/Constant6'
   *  Delay: '<S1>/Delay'
   *  Delay: '<S1>/Delay1'
   */
  localDW->Delay1_DSTATE = (localDW->Delay_DSTATE > 100);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
