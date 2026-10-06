/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086437ec; end: 1086437ff;  */

void FUN_1086437ec(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = (ulong)((float)param_2 / *(float *)(param_1 + 4));
  if (uVar1 - 1 == 0) {
    uVar1 = 2;
  }
  else if ((uVar1 & uVar1 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar8 = param_1[1];
  if (uVar1 <= uVar8) {
    if (uVar1 < uVar8) {
      uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar5) {
        uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
      }
      if (uVar1 <= uVar5) {
        uVar1 = uVar5;
      }
      if (uVar1 < uVar8) goto LAB_108643848;
    }
    return;
  }
LAB_108643848:
  if (uVar1 == 0) {
    FUN_1086439c8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1086439e0(plVar3);
    FUN_1086439c8(param_1,plVar3);
    param_1[1] = uVar1;
    lVar2 = *param_1;
    for (uVar8 = 0; uVar1 != uVar8; uVar8 = uVar8 + 1) {
      *(undefined8 *)(lVar2 + uVar8 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = uVar1 - 1;
      uVar8 = 0;
      if (uVar1 != 0) {
        uVar8 = uVar6 / uVar1;
      }
      uVar7 = uVar6;
      if (uVar1 <= uVar6) {
        uVar7 = uVar6 - uVar8 * uVar1;
      }
      if ((uVar1 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar2 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar8 = plVar3[1];
        if ((uVar1 & uVar5) == 0) {
          uVar8 = uVar8 & uVar5;
        }
        else if (uVar1 <= uVar8) {
          uVar6 = 0;
          if (uVar1 != 0) {
            uVar6 = uVar8 / uVar1;
          }
          uVar8 = uVar8 - uVar6 * uVar1;
        }
        if (uVar8 != uVar7) {
          if (*(long *)(lVar2 + uVar8 * 8) == 0) {
            *(long **)(lVar2 + uVar8 * 8) = plVar4;
            uVar7 = uVar8;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar2 + uVar8 * 8);
            **(long **)(lVar2 + uVar8 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108643800; end: 1086438c7;  */

void FUN_108643800(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (param_2 <= uVar7) {
    if (param_2 < uVar7) {
      uVar4 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar4) {
        uVar4 = 1L << (-LZCOUNT(uVar4 - 1) & 0x3fU);
      }
      if (param_2 <= uVar4) {
        param_2 = uVar4;
      }
      if (param_2 < uVar7) goto LAB_108643848;
    }
    return;
  }
LAB_108643848:
  if (param_2 == 0) {
    FUN_1086439c8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar2 = param_1 + 1;
    FUN_1086439e0(plVar2);
    FUN_1086439c8(param_1,plVar2);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar7 = 0; param_2 != uVar7; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar1 + uVar7 * 8) = 0;
    }
    plVar2 = (long *)param_1[2];
    if (plVar2 != (long *)0x0) {
      uVar5 = plVar2[1];
      uVar4 = param_2 - 1;
      uVar7 = 0;
      if (param_2 != 0) {
        uVar7 = uVar5 / param_2;
      }
      uVar6 = uVar5;
      if (param_2 <= uVar5) {
        uVar6 = uVar5 - uVar7 * param_2;
      }
      if ((param_2 & uVar4) == 0) {
        uVar6 = uVar5 & uVar4;
      }
      *(long **)(lVar1 + uVar6 * 8) = param_1 + 2;
      while (plVar3 = plVar2, plVar2 = (long *)*plVar3, plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        if ((param_2 & uVar4) == 0) {
          uVar7 = uVar7 & uVar4;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        if (uVar7 != uVar6) {
          if (*(long *)(lVar1 + uVar7 * 8) == 0) {
            *(long **)(lVar1 + uVar7 * 8) = plVar3;
            uVar6 = uVar7;
          }
          else {
            *plVar3 = *plVar2;
            *plVar2 = **(undefined8 **)(lVar1 + uVar7 * 8);
            **(long **)(lVar1 + uVar7 * 8) = (long)plVar2;
            plVar2 = plVar3;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086438c8; end: 1086439c7;  */

void FUN_1086438c8(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1086439c8(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1086439e0(plVar3);
    FUN_1086439c8(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086439c8; end: 1086439df;  */

void FUN_1086439c8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086439e0; end: 108643a1b;  */

void FUN_1086439e0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_108643a1c();
  return;
}



/* Entry: 108643a1c; end: 108643bcb;  */

undefined1  [16] FUN_108643a1c(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar4;
  ulong extraout_x8_01;
  long lVar5;
  long extraout_x8_02;
  ulong uVar6;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  iVar1 = *param_4;
  uVar7 = (ulong)iVar1;
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    func_0x000108643fb0();
    if ((bool)in_ZR) {
      unaff_x23 = extraout_x8 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_3 + unaff_x23 * 8);
    uVar4 = extraout_x8;
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108643ac0;
          uVar6 = plVar8[1];
          if (uVar6 != uVar7) break;
          if ((int)plVar8[2] == iVar1) {
            uVar3 = 0;
            aplStack_58[0] = plVar8;
            goto LAB_108643ba4;
          }
        }
        if ((uVar9 & uVar4) == 0) {
          uVar6 = uVar6 & uVar4;
        }
        else if (uVar9 <= uVar6) {
          func_0x000108643f90();
          uVar4 = extraout_x8_00;
          uVar6 = extraout_x9;
        }
      } while (uVar6 == unaff_x23);
    }
  }
LAB_108643ac0:
  FUN_108643bcc(aplStack_58,param_3,uVar7);
  func_0x000108643f9c();
  if ((uVar9 == 0) || (param_2 * (float)uVar9 < param_1)) {
    func_0x000108643f34();
    uVar2 = uVar9 == 3;
    func_0x000108643f4c();
    FUN_108643800(param_3);
    uVar9 = param_3[1];
    func_0x000108643fb0();
    if ((bool)uVar2) {
      unaff_x23 = extraout_x8_01 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_3;
  plVar8 = *(long **)(lVar5 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    param_3 = param_3 + 2;
    *aplStack_58[0] = *param_3;
    *param_3 = (long)aplStack_58[0];
    *(long **)(lVar5 + unaff_x23 * 8) = param_3;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        func_0x000108643f90();
        lVar5 = extraout_x8_02;
        uVar7 = extraout_x9_00;
      }
      *(long **)(lVar5 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar8;
    *plVar8 = (long)aplStack_58[0];
  }
  func_0x000108643f14();
  uVar3 = 1;
LAB_108643ba4:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = aplStack_58[0];
  return auVar10;
}



/* Entry: 108643bcc; end: 108643c2f;  */

void FUN_108643bcc(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  puVar1[3] = *param_5;
  return;
}



/* Entry: 108643c30; end: 108643c57;  */

undefined8 FUN_108643c30(undefined8 param_1)

{
  FUN_108643c58(param_1,0);
  return param_1;
}



/* Entry: 108643c58; end: 108643c6f;  */

void FUN_108643c58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108643c70; end: 108643ccf;  */

undefined8 * FUN_108643c70(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  FUN_108643800(param_1,*(undefined8 *)(param_2 + 8));
  FUN_108643cd0(param_1,*(undefined8 *)(param_2 + 0x10),0);
  return param_1;
}



/* Entry: 108643cd0; end: 108643d0f;  */

void FUN_108643cd0(undefined8 param_1,long *param_2,long param_3)

{
  for (; param_2 != (long *)param_3; param_2 = (long *)*param_2) {
    FUN_108643d10(param_1,param_2 + 2);
  }
  return;
}



/* Entry: 108643d10; end: 108643d43;  */

void FUN_108643d10(void)

{
  func_0x000108643d28();
  return;
}



/* Entry: 108643d44; end: 108643f0b;  */

undefined1  [16]
FUN_108643d44(undefined8 param_1,float param_2,long *param_3,int *param_4,long *param_5)

{
  long *plVar1;
  int iVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar5;
  ulong extraout_x8_01;
  long lVar6;
  long extraout_x8_02;
  ulong uVar7;
  ulong extraout_x9;
  long *plVar8;
  ulong extraout_x9_00;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  iVar2 = *param_4;
  uVar11 = (ulong)iVar2;
  uVar10 = param_3[1];
  if (uVar10 != 0) {
    func_0x000108643fb0();
    if ((bool)in_ZR) {
      unaff_x24 = extraout_x8 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar5 * uVar10;
      }
    }
    plVar9 = *(long **)(*param_3 + unaff_x24 * 8);
    uVar5 = extraout_x8;
    if (plVar9 != (long *)0x0) {
      do {
        while( true ) {
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_108643df0;
          uVar7 = plVar9[1];
          if (uVar7 != uVar11) break;
          if ((int)plVar9[2] == iVar2) {
            uVar4 = 0;
            goto LAB_108643ee0;
          }
        }
        if ((uVar10 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar10 <= uVar7) {
          func_0x000108643f90();
          uVar5 = extraout_x8_00;
          uVar7 = extraout_x9;
        }
      } while (uVar7 == unaff_x24);
    }
  }
LAB_108643df0:
  plVar1 = param_3 + 2;
  plVar9 = (long *)0x20;
  __Znwm();
  *plVar9 = 0;
  plVar9[1] = uVar11;
  lVar6 = *param_5;
  plVar9[3] = param_5[1];
  plVar9[2] = lVar6;
  func_0x000108643f9c();
  if ((uVar10 == 0) || (param_2 * (float)uVar10 < (float)lVar6)) {
    func_0x000108643f34();
    uVar3 = uVar10 == 3;
    func_0x000108643f4c();
    FUN_108643800(param_3);
    uVar10 = param_3[1];
    func_0x000108643fb0();
    if ((bool)uVar3) {
      unaff_x24 = extraout_x8_01 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar5 * uVar10;
      }
    }
  }
  lVar6 = *param_3;
  plVar8 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar9 = *plVar1;
    *plVar1 = (long)plVar9;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar1;
    if (*plVar9 != 0) {
      uVar11 = *(ulong *)(*plVar9 + 8);
      if ((uVar10 & uVar10 - 1) == 0) {
        uVar11 = uVar11 & uVar10 - 1;
      }
      else if (uVar10 <= uVar11) {
        func_0x000108643f90();
        lVar6 = extraout_x8_02;
        uVar11 = extraout_x9_00;
      }
      *(long **)(lVar6 + uVar11 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar8;
    *plVar8 = (long)plVar9;
  }
  func_0x000108643f14();
  uVar4 = 1;
LAB_108643ee0:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = plVar9;
  return auVar12;
}



/* Entry: 108643f0c; end: 108643fbb;  */

void FUN_108643f0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108643fbc; end: 108644033; -[SCNMessagingUploadMediaReferencesCallback initWithCpp:] */

undefined1 * FUN_108643fbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd308;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010864489c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1086445a4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108644034; end: 108644313; -[SCNMessagingUploadMediaReferencesCallback onUploadFinished:] */

void FUN_108644034(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  undefined1 auStack_1f0 [144];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar6 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  uStack_200 = 0;
  uStack_1f8 = 0;
  lStack_208 = 0;
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    if (0x1c71c71c71c71c7 < uVar4) goto LAB_108644270;
    FUN_1086446e0(auStack_1f0,uVar4,0,&uStack_1f8);
    FUN_1086445e0(&lStack_208,auStack_1f0);
    func_0x00010864484c(auStack_1f0);
  }
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uVar4 = param_3;
  _objc_retain();
  func_0x0001086448b4();
  if (uVar4 != 0) {
    lVar9 = *plStack_150;
    do {
      uVar10 = 0;
      do {
        if (*plStack_150 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(ulong *)(lStack_158 + uVar10 * 8);
        _objc_retain(uVar8);
        FUN_108643470(auStack_1f0,uVar8);
        if (uStack_200 < uStack_1f8) {
          FUN_108644780(uStack_200,auStack_1f0);
          uVar7 = uStack_200 + 0x90;
        }
        else {
          lVar1 = (long)(uStack_200 - lStack_208) / 0x90;
          uVar7 = lVar1 + 1;
          if (0x1c71c71c71c71c7 < uVar7) {
            FUN_1086445cc();
            goto LAB_1086442e4;
          }
          uVar2 = (long)(uStack_1f8 - lStack_208) / 0x90;
          uVar5 = uVar2 * 2;
          if (uVar5 < uVar7 || uVar5 - uVar7 == 0) {
            uVar5 = uVar7;
          }
          if (0xe38e38e38e38e2 < uVar2) {
            uVar5 = 0x1c71c71c71c71c7;
          }
          FUN_1086446e0(auStack_120,uVar5,lVar1,&uStack_1f8);
          FUN_108644780(lStack_110,auStack_1f0);
          lStack_110 = lStack_110 + 0x90;
          FUN_1086445e0(&lStack_208,auStack_120);
          uVar7 = uStack_200;
          func_0x00010864484c(auStack_120);
        }
        uStack_200 = uVar7;
        func_0x000108644484(auStack_1f0);
        _objc_release();
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
      func_0x0001086448b4();
      uVar4 = uVar8;
    } while (uVar8 != 0);
  }
  func_0x0001086448ac();
  func_0x0001086448ac();
  (**(code **)(*plVar6 + 0x10))(plVar6,&lStack_208);
  func_0x0001086448e0();
  func_0x0001086448ac();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
LAB_108644270:
  FUN_1086445cc();
LAB_1086442e4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1086442e8);
  (*pcVar3)();
}



/* Entry: 108644314; end: 10864433f;  */

void FUN_108644314(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1086444b8();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108644340; end: 108644393; -[SCNMessagingUploadMediaReferencesCallback .cxx_destruct] */

void FUN_108644340(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f978;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_1086445a4((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108644394; end: 108644443; -[SCNMessagingUploadMediaReferencesCallback .cxx_construct] */

undefined8 * FUN_108644394(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010864489c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108644444; end: 10864444b;  */

void FUN_108644444(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x90;
    func_0x000108644484();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10864444c; end: 1086444b7;  */

void FUN_10864444c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x90;
    func_0x000108644484();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1086444b8; end: 10864452f;  */

void FUN_1086444b8(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f978;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010864489c();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108644530);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086448d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108644530; end: 1086445a3;  */

void FUN_108644530(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126dac98;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010864489c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1086445a4(&uStack_30);
  return;
}



/* Entry: 1086445a4; end: 1086445cb;  */

long FUN_1086445a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1086445cc; end: 1086445df;  */

void FUN_1086445cc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  long lStack_60;
  long lStack_58;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar4 = *plVar2;
  lVar1 = plVar2[1];
  lVar5 = param_2[1] + ((lVar1 - lVar4) / -0x90) * 0x90;
  plStack_80 = plVar2 + 2;
  plStack_78 = &lStack_60;
  plStack_70 = &lStack_58;
  lStack_58 = lVar5;
  lStack_60 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x90) {
    FUN_108644780(lStack_58,lVar3);
    lStack_58 = lStack_58 + 0x90;
  }
  uStack_68 = 1;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x90) {
    func_0x000108644484(lVar4);
  }
  FUN_1086447cc(&plStack_80);
  param_2[1] = lVar5;
  lVar3 = *plVar2;
  plVar2[1] = lVar3;
  *plVar2 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = plVar2[1];
  plVar2[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = plVar2[2];
  plVar2[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086445e0; end: 1086446df;  */

void FUN_1086445e0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = param_2[1] + ((lVar1 - lVar3) / -0x90) * 0x90;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar2 = lVar3; lVar2 != lVar1; lVar2 = lVar2 + 0x90) {
    FUN_108644780(lStack_48,lVar2);
    lStack_48 = lStack_48 + 0x90;
  }
  uStack_58 = 1;
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x90) {
    func_0x000108644484(lVar3);
  }
  FUN_1086447cc(&plStack_70);
  param_2[1] = lVar4;
  lVar2 = *param_1;
  param_1[1] = lVar2;
  *param_1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1086446e0; end: 10864474f;  */

long * FUN_1086446e0(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010864472c();
  }
  lVar1 = param_4 + param_3 * 0x90;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x90;
  return param_1;
}



/* Entry: 108644750; end: 10864477f;  */

undefined4 * FUN_108644750(undefined4 *param_1,undefined4 *param_2)

{
  if (param_2 < (undefined4 *)0x1c71c71c71c71c8) {
    param_2 = (undefined4 *)((long)param_2 * 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2);
    return param_2;
  }
  func_0x000104bd35f4();
  *param_1 = *param_2;
  func_0x0001006b78fc(param_1 + 2,param_2 + 2);
  func_0x0001006b7b9c(param_1 + 10,param_2 + 10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_10864284c(param_1 + 0x1a,param_2 + 0x1a);
  return param_1;
}



/* Entry: 108644780; end: 1086447cb;  */

undefined4 * FUN_108644780(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x0001006b78fc(param_1 + 2,param_2 + 2);
  func_0x0001006b7b9c(param_1 + 10,param_2 + 10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_10864284c(param_1 + 0x1a,param_2 + 0x1a);
  return param_1;
}



/* Entry: 1086447cc; end: 1086447fb;  */

long FUN_1086447cc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1086447fc(param_1);
  }
  return param_1;
}



/* Entry: 1086447fc; end: 10864481b;  */

void FUN_1086447fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x90;
    func_0x000108644484();
  }
  return;
}



/* Entry: 10864481c; end: 108644893;  */

void FUN_10864481c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x90;
    func_0x000108644484();
  }
  return;
}



/* Entry: 108644894; end: 1086448fb;  */

void FUN_108644894(void)

{
  return;
}



/* Entry: 1086448fc; end: 108644973; -[SCNMessagingUploadResetCallback initWithCpp:] */

undefined1 * FUN_1086448fc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd310;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108645348();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_108644e80(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108644974; end: 108644bfb; -[SCNMessagingUploadResetCallback onUploadReset:] */

/* WARNING: Removing unreachable block (ram,0x000108644bb8) */

void FUN_108644974(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined1 auStack_1c0 [112];
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long lStack_100;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  plVar3 = *(long **)(param_1 + 0x18);
  _objc_retain(param_3);
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  lStack_1d8 = 0;
  uVar1 = param_3;
  func_0x00010bf529e0(param_3);
  FUN_108644ea8(&lStack_1d8,uVar1);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uVar1 = param_3;
  _objc_retain();
  func_0x000108645370();
  if (uVar1 != 0) {
    lVar5 = *plStack_140;
    do {
      uVar6 = 0;
      do {
        if (*plStack_140 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(ulong *)(lStack_148 + uVar6 * 8);
        _objc_retain(uVar4);
        FUN_1086453b8(auStack_1c0,uVar4);
        if (uStack_1d0 < uStack_1c8) {
          FUN_108645158(uStack_1d0,auStack_1c0);
          uVar7 = uStack_1d0 + 0x70;
        }
        else {
          plVar2 = &lStack_1d8;
          FUN_1086452e8(plVar2,(long)(uStack_1d0 - lStack_1d8) / 0x70 + 1);
          FUN_108644fe4(auStack_110,plVar2,(long)(uStack_1d0 - lStack_1d8) / 0x70,&uStack_1c8);
          FUN_108645158(lStack_100,auStack_1c0);
          lStack_100 = lStack_100 + 0x70;
          FUN_108644f58(&lStack_1d8,auStack_110);
          uVar7 = uStack_1d0;
          func_0x00010864527c(auStack_110);
        }
        uStack_1d0 = uVar7;
        func_0x000108644d6c(auStack_1c0);
        _objc_release();
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
      func_0x000108645370();
      uVar1 = uVar4;
    } while (uVar4 != 0);
  }
  func_0x000108645358();
  func_0x000108645358();
  (**(code **)(*plVar3 + 0x10))(plVar3,&lStack_1d8);
  func_0x0001086453b0();
  func_0x000108645358();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x000108645384();
    func_0x0001086453b0();
    func_0x000108645358();
    __Unwind_Resume();
    if (*plVar3 != 0) {
      FUN_108644d9c();
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  return;
}



/* Entry: 108644bfc; end: 108644c27;  */

void FUN_108644bfc(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108644d9c();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108644c28; end: 108644c7b; -[SCNMessagingUploadResetCallback .cxx_destruct] */

void FUN_108644c28(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f988;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_108644e80((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 108644c7c; end: 108644d2b; -[SCNMessagingUploadResetCallback .cxx_construct] */

undefined8 * FUN_108644c7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_108645348();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108644d2c; end: 108644d33;  */

void FUN_108644d2c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x70;
    func_0x000108644d6c();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 108644d34; end: 108644d9b;  */

void FUN_108644d34(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x70;
    func_0x000108644d6c();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 108644d9c; end: 108644e0f;  */

void FUN_108644d9c(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f988;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_108645348();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_108644e10);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086453a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108644e10; end: 108644e7f;  */

void FUN_108644e10(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126daca0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_108645348();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_108644e80(&uStack_30);
  return;
}



/* Entry: 108644e80; end: 108644ea7;  */

long FUN_108644e80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108644ea8; end: 108644f43;  */

void FUN_108644ea8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [40];
  
  if ((undefined8 *)((param_1[2] - *param_1) / 0x70) < param_2) {
    if ((undefined8 *)0x249249249249249 < param_2) {
      FUN_108644f44();
      func_0x00010864527c(auStack_48);
      func_0x000108645390();
      plVar1 = (long *)&DAT_10f62a4d8;
      func_0x000104bd47e8();
      lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x70) * 0x70;
      FUN_108645084(plVar1 + 2,*plVar1,plVar1[1],lVar2);
      param_2[1] = lVar2;
      lVar2 = *plVar1;
      plVar1[1] = lVar2;
      *plVar1 = param_2[1];
      param_2[1] = lVar2;
      lVar2 = plVar1[1];
      plVar1[1] = param_2[2];
      param_2[2] = lVar2;
      lVar2 = plVar1[2];
      plVar1[2] = param_2[3];
      param_2[3] = lVar2;
      *param_2 = param_2[1];
      return;
    }
    FUN_108644fe4(auStack_48,param_2,(param_1[1] - *param_1) / 0x70);
    FUN_108644f58(param_1,auStack_48);
    func_0x00010864527c(auStack_48);
  }
  return;
}



/* Entry: 108644f44; end: 108644f57;  */

void FUN_108644f44(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = param_2[1] + ((plVar1[1] - *plVar1) / -0x70) * 0x70;
  FUN_108645084(plVar1 + 2,*plVar1,plVar1[1],lVar2);
  param_2[1] = lVar2;
  lVar2 = *plVar1;
  plVar1[1] = lVar2;
  *plVar1 = param_2[1];
  param_2[1] = lVar2;
  lVar2 = plVar1[1];
  plVar1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = plVar1[2];
  plVar1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108644f58; end: 108644fe3;  */

void FUN_108644f58(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x70) * 0x70;
  FUN_108645084(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 108644fe4; end: 108645053;  */

long * FUN_108644fe4(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000108645030();
  }
  lVar1 = param_4 + param_3 * 0x70;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x70;
  return param_1;
}



/* Entry: 108645054; end: 108645083;  */

void FUN_108645054(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x24924924924924a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x70);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x70) {
    FUN_108645158(param_4,uVar1);
    param_4 = lStack_48 + 0x70;
  }
  uStack_58 = 1;
  FUN_108645128(param_1,param_2,param_3);
  FUN_1086451fc(&uStack_70);
  return;
}



/* Entry: 108645084; end: 108645127;  */

void FUN_108645084(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x70) {
    FUN_108645158(param_4,lVar1);
    param_4 = lStack_38 + 0x70;
  }
  uStack_48 = 1;
  FUN_108645128(param_1,param_2,param_3);
  FUN_1086451fc(&uStack_60);
  return;
}



/* Entry: 108645128; end: 108645157;  */

void FUN_108645128(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x70) {
    func_0x000108644d6c();
  }
  return;
}



/* Entry: 108645158; end: 1086451fb;  */

void FUN_108645158(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  uVar1 = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_2 + 9) == '\x01') {
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[6] = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_2 + 0xd) == '\x01') {
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[10] = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



/* Entry: 1086451fc; end: 10864522b;  */

long FUN_1086451fc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10864522c(param_1);
  }
  return param_1;
}



/* Entry: 10864522c; end: 10864524b;  */

void FUN_10864522c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x70;
    func_0x000108644d6c();
  }
  return;
}



/* Entry: 10864524c; end: 1086452a7;  */

void FUN_10864524c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x70;
    func_0x000108644d6c();
  }
  return;
}



/* Entry: 1086452a8; end: 1086452af;  */

void FUN_1086452a8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x70;
    func_0x000108644d6c();
  }
  return;
}



/* Entry: 1086452b0; end: 1086452e7;  */

void FUN_1086452b0(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x70;
    func_0x000108644d6c();
  }
  return;
}



/* Entry: 1086452e8; end: 108645347;  */

long * FUN_1086452e8(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long *extraout_x8;
  long *plVar3;
  
  if ((long *)0x249249249249249 < param_2) {
    FUN_108644f44();
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = *extraout_x8 + 1;
      ExclusiveMonitorsStatus();
    }
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x70;
  plVar3 = (long *)(uVar1 * 2);
  if (plVar3 < param_2 || (long)plVar3 - (long)param_2 == 0) {
    plVar3 = param_2;
  }
  if (0x124924924924923 < uVar1) {
    plVar3 = (long *)0x249249249249249;
  }
  return plVar3;
}



/* Entry: 108645348; end: 1086453b7;  */

void FUN_108645348(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1086453b8; end: 108645557;  */

void FUN_1086453b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c09dbc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862f33c(auStack_78);
  uVar2 = param_2;
  func_0x00010c0ee640(param_2);
  uVar3 = param_2;
  func_0x00010bf98940(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c28134();
  uVar5 = param_2;
  func_0x00010bf98a40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_98);
  uVar6 = param_2;
  func_0x00010bfa0040(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_b8);
  FUN_108645558(param_1,auStack_78,uVar2,uVar4,param_3 & 0xff,auStack_98,auStack_b8);
  func_0x000107c279a4(auStack_b8);
  _objc_release(uVar6);
  func_0x000107c279a4(auStack_98);
  _objc_release(uVar5);
  _objc_release(uVar3);
  func_0x000107c27914(auStack_78);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 108645558; end: 1086455f3;  */

void FUN_108645558(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(char *)(param_6 + 3) == '\x01') {
    uVar2 = param_6[1];
    uVar1 = *param_6;
    param_1[8] = param_6[2];
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    param_6[1] = 0;
    param_6[2] = 0;
    *param_6 = 0;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_7 + 3) == '\x01') {
    uVar2 = param_7[1];
    uVar1 = *param_7;
    param_1[0xc] = param_7[2];
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
    param_7[1] = 0;
    param_7[2] = 0;
    *param_7 = 0;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}



/* Entry: 1086455f4; end: 108645a0b;  */

void FUN_1086455f4(undefined4 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_1b0 [32];
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 auStack_168 [72];
  undefined1 uStack_120;
  undefined1 auStack_118 [40];
  undefined1 auStack_f0 [32];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c252d60();
  uVar2 = param_2;
  func_0x00010bfa00c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_10862474c();
  uVar4 = param_2;
  func_0x00010bfa0040(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_d0);
  uVar5 = param_2;
  func_0x00010bf3cd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_f0);
  uVar6 = param_2;
  func_0x00010bf9fd20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010862476c();
  uVar8 = param_2;
  func_0x00010c270960();
  _objc_retainAutoreleasedReturnValue();
  FUN_1086435e8(auStack_118);
  uVar9 = param_2;
  func_0x00010c12a240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar9 == 0) {
    auStack_168[0] = 0;
    uStack_120 = 0;
  }
  else {
    FUN_1086382ac(&uStack_b0,uVar9);
    func_0x00010529099c(auStack_168,&uStack_b0);
    uStack_120 = 1;
    func_0x000104be16a0(&uStack_b0);
  }
  func_0x000108645a18();
  uVar9 = param_2;
  func_0x00010c12a260();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar9 == 0) {
    uStack_190 = uStack_190 & 0xffffffffffffff00;
    uStack_178 = 0;
  }
  else {
    FUN_108631cf8(&uStack_b0,uVar9);
    uStack_188 = uStack_a8;
    uStack_190 = uStack_b0;
    uStack_180 = uStack_a0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_b0 = 0;
    uStack_178 = 1;
    func_0x0001006994c8(&uStack_b0);
  }
  func_0x000108645a20();
  uVar9 = param_2;
  func_0x00010c0c59e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c285bc(auStack_1b0);
  uVar10 = param_2;
  func_0x00010c0c6500();
  _objc_retainAutoreleasedReturnValue();
  if (uVar10 == 0) {
    uVar11 = 0;
  }
  else {
    _objc_retain(uVar10);
    uVar11 = uVar10;
    func_0x00010c067fc0();
    _objc_release(uVar10);
    uVar11 = uVar11 & 0xffffffff | 0x100000000;
  }
  *param_1 = (int)uVar1;
  *(ulong *)(param_1 + 1) = uVar3 & 0xffffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (cStack_b8 == '\x01') {
    *(undefined8 *)(param_1 + 6) = uStack_c8;
    *(undefined8 *)(param_1 + 4) = uStack_d0;
    *(undefined8 *)(param_1 + 8) = uStack_c0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_d0 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  func_0x0001006b78fc(param_1 + 0xc,auStack_f0);
  *(ulong *)(param_1 + 0x14) = uVar7 & 0xffffffffff;
  FUN_10864284c(param_1 + 0x16,auStack_118);
  FUN_1086428bc(param_1 + 0x20,auStack_168);
  FUN_108642918(param_1 + 0x34,&uStack_190);
  func_0x000107c27afc(param_1 + 0x3c,auStack_1b0);
  *(ulong *)(param_1 + 0x44) = uVar11;
  _objc_release(uVar10);
  func_0x000107c279dc(auStack_1b0);
  _objc_release(uVar9);
  FUN_108642380(&uStack_190);
  func_0x000108645a20();
  func_0x0001086423a0(auStack_168);
  func_0x000108645a18();
  FUN_1086423c0(auStack_118);
  _objc_release(uVar8);
  _objc_release(uVar6);
  func_0x000107c279c4(auStack_f0);
  _objc_release(uVar5);
  func_0x000107c279a4(&uStack_d0);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 108645a0c; end: 108645a27;  */

void FUN_108645a0c(void)

{
  return;
}



/* Entry: 108645a28; end: 108645edb;  */

void FUN_108645a28(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  char cStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined8 uStack_89;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  uVar2 = param_2;
  func_0x00010c09dbc0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10862f33c(&uStack_e0);
  uVar3 = param_2;
  func_0x00010c252440();
  uVar4 = param_2;
  func_0x00010c0892c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010862476c();
  uVar6 = param_2;
  func_0x00010c15cca0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 == 0) {
    uVar22 = 0;
  }
  else {
    _objc_retain(uVar6);
    uVar22 = uVar6;
    func_0x00010c067fc0();
    _objc_release(uVar6);
    uVar22 = uVar22 & 0xffffffff | 0x100000000;
  }
  uVar7 = param_2;
  func_0x00010bfa00c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010862474c();
  uVar9 = param_2;
  func_0x00010bfa0040();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(&uStack_100);
  uVar10 = param_2;
  func_0x00010bf3cd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_120);
  uVar11 = param_2;
  func_0x00010c28e340();
  uVar12 = param_2;
  func_0x00010bf26040();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x000107c28134();
  uVar14 = param_2;
  uVar20 = param_3;
  func_0x00010c2760c0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x000107c28134();
  uVar16 = param_2;
  uVar21 = uVar20;
  func_0x00010c08a740();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x000107c28134();
  uVar18 = param_2;
  func_0x00010c0c59e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c285bc(auStack_140);
  uVar19 = param_2;
  func_0x00010c279ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar19 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_108641060(&uStack_c0,uVar19);
    uStack_98 = uStack_b7;
    uStack_a0 = uStack_bf;
    uStack_89 = uStack_a8;
    uStack_91 = uStack_b0;
    uStack_90 = uStack_af;
    uVar1 = uStack_c0;
  }
  FUN_108645edc();
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[2] = uStack_d0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e0 = 0;
  *(int *)(param_1 + 3) = (int)uVar3;
  *(ulong *)((long)param_1 + 0x1c) = uVar5 & 0xffffffffff;
  *(ulong *)((long)param_1 + 0x24) = uVar22;
  *(ulong *)((long)param_1 + 0x2c) = uVar8 & 0xffffffffff;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if (cStack_e8 == '\x01') {
    param_1[8] = uStack_f8;
    param_1[7] = uStack_100;
    param_1[9] = uStack_f0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_100 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  func_0x0001006b78fc(param_1 + 0xb,auStack_120);
  *(int *)(param_1 + 0xf) = (int)uVar11;
  param_1[0x10] = uVar13;
  param_1[0x11] = param_3 & 0xff;
  param_1[0x12] = uVar15;
  param_1[0x13] = uVar20 & 0xff;
  param_1[0x14] = uVar17;
  param_1[0x15] = uVar21 & 0xff;
  func_0x000107c27afc(param_1 + 0x16,auStack_140);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  *(ulong *)((long)param_1 + 0xd9) = CONCAT17(uStack_91,uStack_98);
  *(undefined8 *)((long)param_1 + 0xd1) = uStack_a0;
  param_1[0x1d] = uStack_89;
  param_1[0x1c] = CONCAT71(uStack_90,uStack_91);
  *(bool *)(param_1 + 0x1e) = uVar19 != 0;
  FUN_108645edc();
  func_0x000107c279dc(auStack_140);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar12);
  func_0x000107c279c4(auStack_120);
  _objc_release(uVar10);
  func_0x000107c279a4(&uStack_100);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  func_0x000107c27914(&uStack_e0);
  _objc_release(uVar2);
  uVar3 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  FUN_108645edc();
  FUN_108645edc();
  func_0x000107c279dc(auStack_140);
  _objc_release(uVar18);
  _objc_release(uVar16);
  _objc_release(uVar14);
  _objc_release(uVar12);
  func_0x000107c279c4(auStack_120);
  _objc_release(uVar10);
  func_0x000107c279a4(&uStack_100);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  func_0x000107c27914(&uStack_e0);
  _objc_release(uVar2);
  _objc_release(param_2);
  __Unwind_Resume(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar19);
  return;
}



/* Entry: 108645edc; end: 108645ee3;  */

void FUN_108645edc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108645ee4; end: 108645f5b; -[SCNMessagingUploadStatusCallback initWithCpp:] */

undefined1 * FUN_108645ee4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd318;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1086461fc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1086461d0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108645f5c; end: 10864601f; -[SCNMessagingUploadStatusCallback onUploadStatus:] */

void FUN_108645f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_48 [24];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_108642050(auStack_48,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_48);
  FUN_108642450(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 108646020; end: 10864604b;  */

void FUN_108646020(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1086460e4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864604c; end: 10864609f; -[SCNMessagingUploadStatusCallback .cxx_destruct] */

void FUN_10864604c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f998;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_1086461d0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1086460a0; end: 1086460e3; -[SCNMessagingUploadStatusCallback .cxx_construct] */

undefined8 * FUN_1086460a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_1086461fc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1086460e4; end: 10864615b;  */

void FUN_1086460e4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5f998;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_1086461fc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10864615c);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108646218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10864615c; end: 1086461cf;  */

void FUN_10864615c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126daca8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1086461fc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1086461d0(&uStack_30);
  return;
}



/* Entry: 1086461d0; end: 1086461fb;  */

long FUN_1086461d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1086461fc; end: 108646223;  */

void FUN_1086461fc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 108646224; end: 1086462bb;  */

void FUN_108646224(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dacb0;
  _objc_alloc(PTR_PTR_1126dacb0);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05aee0(puVar1,param_2,lVar2,param_1);
  FUN_1086462bc();
  func_0x0001086462c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086462bc; end: 1086462cb;  */

void FUN_1086462bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086462cc; end: 108646363;  */

void FUN_1086462cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dacb8;
  _objc_alloc(PTR_PTR_1126dacb8);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  FUN_108636130(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b9e0(puVar1,param_2,lVar2,param_1);
  func_0x00010864636c();
  func_0x000108646364();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108646364; end: 108646373;  */

void FUN_108646364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108646374; end: 10864640b;  */

void FUN_108646374(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126dacc0;
  _objc_alloc(PTR_PTR_1126dacc0);
  lVar2 = param_1;
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x0001006a7a88(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05b240(puVar1,param_2,lVar2,param_1);
  FUN_108646458();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10864640c; end: 108646457;  */

undefined8 * FUN_10864640c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  func_0x000100671a50(param_1 + 3,param_3);
  return param_1;
}



/* Entry: 108646458; end: 108646463;  */

void FUN_108646458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108646464; end: 1086464fb;  */

void FUN_108646464(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126dacc8;
  _objc_alloc(PTR_PTR_1126dacc8);
  lVar2 = param_1;
  FUN_108646224(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  param_1 = param_1 + 0x38;
  func_0x000107c28138(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a880(puVar1,param_2,lVar2,uVar3,param_1);
  FUN_1086465a0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086464fc; end: 108646533;  */

void FUN_1086464fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_108646534();
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  return;
}



/* Entry: 108646534; end: 108646577;  */

void FUN_108646534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}



/* Entry: 108646578; end: 10864659f;  */

/* WARNING: Possible PIC construction at 0x00010864658c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108646590) */

long FUN_108646578(long param_1)

{
  long lStack_48;
  
  lStack_48 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_48);
  return param_1 + 0x18;
}



/* Entry: 1086465a0; end: 1086465ab;  */

void FUN_1086465a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1086465ac; end: 10864660f;  */

ulong FUN_1086465ac(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0c60c0(param_1);
  uVar2 = param_1;
  func_0x00010c29aca0(param_1);
  _objc_release(param_1);
  return uVar1 & 0xffffffff | uVar2 << 0x20;
}



/* Entry: 108646610; end: 10864663f;  */

void FUN_108646610(void)

{
  _objc_alloc(PTR_PTR_1126ba698);
  func_0x00010c029b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108646640; end: 1086466bf; -[SCNE2eeBlizzardEventDelegateCppProxy initWithCpp:] */

undefined1 * FUN_108646640(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd320;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x0001086467f8(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 1086466c0; end: 108646757; -[SCNE2eeBlizzardEventDelegateCppProxy onInitializationComplete:] */

void FUN_1086466c0(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  FUN_10864ad20();
  uStack_30 = uVar1;
  uStack_28 = param_2;
  (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_30);
  _objc_release(param_3);
  return;
}



/* Entry: 108646758; end: 1086467ab; -[SCNE2eeBlizzardEventDelegateCppProxy .cxx_destruct] */

void FUN_108646758(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5f9a8;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  func_0x0001086467f8((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 1086467ac; end: 108646823; -[SCNE2eeBlizzardEventDelegateCppProxy .cxx_construct] */

undefined8 * FUN_1086467ac(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x000107c31704();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 108646824; end: 10864682f;  */

void FUN_108646824(void)

{
  return;
}



/* Entry: 108646830; end: 1086468fb;  */

void FUN_108646830(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126dacd0;
  _objc_alloc(PTR_PTR_1126dacd0);
  lVar2 = param_1;
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x000107c28044(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  FUN_10864acb4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffede0(puVar1,param_2,lVar2,lVar3,lVar4,*(undefined4 *)(param_1 + 0x48));
  func_0x00010864690c();
  func_0x0001086468fc();
  func_0x000108646904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1086468fc; end: 108646913;  */

void FUN_1086468fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108646914; end: 108646a07;  */

void FUN_108646914(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_48);
  uVar1 = param_2;
  func_0x00010c1142a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_60);
  func_0x00010c298be0(param_2);
  func_0x000107c28760(param_1,auStack_48,auStack_60,param_2);
  func_0x000107c27914(auStack_60);
  _objc_release(uVar1);
  func_0x000107c27914(auStack_48);
  FUN_108646a08();
  func_0x000108646a10();
  return;
}



/* Entry: 108646a08; end: 108646a17;  */

void FUN_108646a08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108646a18; end: 108646a8f; -[SCNE2eeE2EEKeyManager initWithCpp:] */

undefined1 * FUN_108646a18(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd328;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_108648838();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000108647940(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108646a90; end: 108646b17; -[SCNE2eeE2EEKeyManager destroyAsync] */

void FUN_108646a90(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000108648a38();
  func_0x000108648a14();
  FUN_108646b18(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001086488a0();
  func_0x000108648948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108646b18; end: 108646ba7;  */

void FUN_108646b18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  func_0x000108648a04();
  uVar1 = param_1;
  func_0x00010bfc5fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108648990();
  FUN_108647368(auStack_40);
  func_0x000108648948();
  _objc_release(param_1);
  func_0x0001086488b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108646ba8; end: 108646c2f; -[SCNE2eeE2EEKeyManager getCurrentUserKeyAsync] */

void FUN_108646ba8(void)

{
  undefined1 auStack_40 [32];
  
  func_0x000108648a38();
  func_0x000108648a14();
  FUN_108646c30(auStack_40);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108648868();
  func_0x0001086488f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


