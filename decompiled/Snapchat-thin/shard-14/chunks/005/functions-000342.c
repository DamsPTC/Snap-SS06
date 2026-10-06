/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2d5630; end: 10b2d566b;  */

long FUN_10b2d5630(long param_1,long param_2)

{
  FUN_10b2d5674(param_2 + 0x30,*(undefined8 *)(param_1 + 8),param_2);
  func_0x000107c27f38(param_1);
  return param_2;
}



/* Entry: 10b2d566c; end: 10b2d5673;  */

void FUN_10b2d566c(void)

{
  return;
}



/* Entry: 10b2d5674; end: 10b2d569f;  */

void FUN_10b2d5674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b2d56a0(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b2d56a0; end: 10b2d56fb;  */

undefined1  [16] FUN_10b2d56a0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_10b2d56fc(lVar1,param_2);
    lVar1 = lVar1 + 0x30;
    param_4 = param_4 + 0x30;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 10b2d56fc; end: 10b2d572f;  */

long FUN_10b2d56fc(long param_1,long param_2)

{
  func_0x000107c27b9c();
  func_0x000107c27b9c(param_1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 10b2d5730; end: 10b2d5737;  */

void FUN_10b2d5730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Unwind_Resume_11034bd20)();
  return;
}



/* Entry: 10b2d5738; end: 10b2d579b;  */

undefined8 FUN_10b2d5738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_28 [8];
  
  __ZNSt3__16localeC1ERKS0_(auStack_28,param_3);
  FUN_10b2d589c(param_1,param_2,auStack_28);
  __ZNSt3__16localeD1Ev(auStack_28);
  return param_1;
}



/* Entry: 10b2d579c; end: 10b2d57af;  */

void FUN_10b2d579c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x000107c60c98(param_1,param_2,0,3,&uStack_11);
  return;
}



/* Entry: 10b2d57b0; end: 10b2d57ef;  */

void FUN_10b2d57b0(void)

{
  long unaff_x19;
  
  func_0x00010b2d5b40();
  if (*(long *)(unaff_x19 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b2d57f0; end: 10b2d57f3;  */

undefined8 * FUN_10b2d57f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1d70;
  func_0x00010563d08c(param_1 + 6);
  func_0x000107c281e0(param_1 + 4);
  func_0x00010b2d584c(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d57f4; end: 10b2d5807;  */

void FUN_10b2d57f4(void)

{
  FUN_10b2d5808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d5808; end: 10b2d589b;  */

undefined8 * FUN_10b2d5808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1d70;
  func_0x00010563d08c(param_1 + 6);
  func_0x000107c281e0(param_1 + 4);
  func_0x00010b2d584c(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d589c; end: 10b2d591f;  */

void FUN_10b2d589c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  func_0x000107c28354();
  lVar3 = lVar2;
  func_0x000105643358();
  while ((param_1 != lVar2 && param_2 != lVar3 &&
         (uVar1 = param_3, func_0x000107c2c558(param_3,param_1,param_2), (int)uVar1 != 0))) {
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}



/* Entry: 10b2d5920; end: 10b2d597f;  */

void FUN_10b2d5920(void)

{
  undefined1 auStack_48 [24];
  long *plStack_30;
  
  func_0x00010b2d5b1c();
  if (plStack_30 != (long *)0x0) {
    func_0x000107c278b8(auStack_48,&UNK_10f2e0182);
    func_0x00010b2d5afc(*(undefined8 *)(*plStack_30 + 0x10));
    func_0x00010b2d5b0c();
  }
  func_0x00010b2d5b14();
  return;
}



/* Entry: 10b2d5980; end: 10b2d59bf;  */

void FUN_10b2d5980(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10b2d59c0; end: 10b2d59fb;  */

void FUN_10b2d59c0(long param_1)

{
  long unaff_x19;
  
  func_0x00010b2d5b40(param_1 + 8);
  if (*(long *)(unaff_x19 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b2d59fc; end: 10b2d5a5b;  */

void FUN_10b2d59fc(void)

{
  undefined1 auStack_48 [24];
  long *plStack_30;
  
  func_0x00010b2d5b1c();
  if (plStack_30 != (long *)0x0) {
    func_0x000107c278b8(auStack_48,&UNK_10f2e018e);
    func_0x00010b2d5afc(*(undefined8 *)(*plStack_30 + 0x10));
    func_0x00010b2d5b0c();
  }
  func_0x00010b2d5b14();
  return;
}



/* Entry: 10b2d5a5c; end: 10b2d5b8b;  */

void FUN_10b2d5a5c(long param_1)

{
  long unaff_x19;
  
  func_0x00010b2d5b40(param_1 + 8);
  if (*(long *)(unaff_x19 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b2d5b8c; end: 10b2d5cf3;  */

undefined8 FUN_10b2d5b8c(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  undefined1 uStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  FUN_10b2d6610(*param_2);
  lVar1 = 0xc0;
  if ((bool)in_ZR) {
    lVar1 = extraout_x9;
  }
  uVar5 = *(undefined8 *)(extraout_x8 + lVar1);
  plVar4 = plVar4 + 3;
  func_0x00010b2d6620();
  if (((ulong)plVar4 & 1) == 0) {
    plVar4 = param_1 + 8;
    func_0x00010b2d6620();
    if (((ulong)plVar4 & 1) == 0) {
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x48))();
      bVar2 = plVar4 == (long *)param_1[1];
      if ((long *)param_1[1] <= plVar4) {
        return 2;
      }
      FUN_10b2d6610(*param_2);
      lVar1 = 0xc0;
      if (bVar2) {
        lVar1 = extraout_x9_00;
      }
      uVar3 = false;
      lStack_50 = extraout_x8_00;
      if (*(char *)(extraout_x8_00 + lVar1 + 0x4c) == '\x01') {
        plVar4 = param_1;
        (**(code **)(*param_1 + 0x40))(param_1,1);
        uVar3 = plVar4 == (long *)param_1[2];
        if ((long *)param_1[2] <= plVar4) {
          return 3;
        }
        lStack_50 = *param_2;
      }
      lStack_48 = param_2[1];
      if (lStack_48 != 0) {
        do {
          func_0x000107c356b4();
        } while (extraout_w10 != 0);
      }
      uStack_40 = 0;
      func_0x000107c316c4();
      plStack_38 = plVar4;
      FUN_10b2d6610(*param_2);
      lVar1 = 0xc0;
      if ((bool)uVar3) {
        lVar1 = extraout_x9_01;
      }
      uStack_58 = uVar5;
      if (*(char *)(extraout_x8_01 + lVar1 + 0x4c) == '\x01') {
        FUN_10b2d5d10(param_1 + 8,&uStack_58);
      }
      else {
        FUN_10b2d5d10(param_1 + 3,&uStack_58);
      }
      FUN_10b2d60a4();
      func_0x000107c2c578(&lStack_50);
      return 0;
    }
  }
  return 1;
}



/* Entry: 10b2d5cf4; end: 10b2d5d0f;  */

bool FUN_10b2d5cf4(long param_1)

{
  func_0x00010b2d6318();
  return param_1 != 0;
}



/* Entry: 10b2d5d10; end: 10b2d60a3;  */

long * FUN_10b2d5d10(long *param_1,ulong *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong unaff_x21;
  ulong uVar12;
  ulong uVar13;
  
  uVar12 = *param_2;
  uVar13 = param_1[1];
  if (uVar13 != 0) {
    uVar4 = uVar13 - 1;
    if ((uVar13 & uVar4) == 0) {
      unaff_x21 = uVar4 & uVar12;
    }
    else {
      unaff_x21 = uVar12;
      if (uVar13 <= uVar12) {
        uVar5 = 0;
        if (uVar13 != 0) {
          uVar5 = uVar12 / uVar13;
        }
        unaff_x21 = uVar12 - uVar5 * uVar13;
      }
    }
    plVar11 = *(long **)(*param_1 + unaff_x21 * 8);
    if (plVar11 != (long *)0x0) {
      do {
        while( true ) {
          plVar11 = (long *)*plVar11;
          if (plVar11 == (long *)0x0) goto LAB_10b2d5dbc;
          uVar5 = plVar11[1];
          if (uVar5 != uVar12) break;
          if (plVar11[2] == uVar12) goto LAB_10b2d6070;
        }
        if ((uVar13 & uVar4) == 0) {
          uVar5 = uVar5 & uVar4;
        }
        else if (uVar13 <= uVar5) {
          uVar6 = 0;
          if (uVar13 != 0) {
            uVar6 = uVar5 / uVar13;
          }
          uVar5 = uVar5 - uVar6 * uVar13;
        }
      } while (uVar5 == unaff_x21);
    }
  }
LAB_10b2d5dbc:
  plVar1 = param_1 + 2;
  plVar11 = (long *)0x38;
  __Znwm();
  *plVar11 = 0;
  plVar11[1] = uVar12;
  plVar11[2] = uVar12;
  plVar11[4] = 0;
  plVar11[3] = 0;
  plVar11[6] = 0;
  plVar11[5] = 0;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_10b2d5ffc;
  uVar4 = 1;
  if (2 < uVar13) {
    uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar4 = uVar4 | uVar13 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar4) {
LAB_10b2d5e70:
    if (uVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b2d6094);
      (*pcVar2)();
    }
    lVar3 = uVar4 << 3;
    __Znwm(lVar3);
    func_0x00010b2d63b0(param_1,lVar3);
    param_1[1] = uVar4;
    lVar3 = *param_1;
    for (uVar13 = 0; uVar4 != uVar13; uVar13 = uVar13 + 1) {
      *(undefined8 *)(lVar3 + uVar13 * 8) = 0;
    }
    plVar7 = (long *)*plVar1;
    uVar13 = uVar4;
    if (plVar7 != (long *)0x0) {
      uVar9 = plVar7[1];
      uVar6 = uVar4 - 1;
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar9 / uVar4;
      }
      uVar10 = uVar9;
      if (uVar4 <= uVar9) {
        uVar10 = uVar9 - uVar5 * uVar4;
      }
      if ((uVar4 & uVar6) == 0) {
        uVar10 = uVar9 & uVar6;
      }
      *(long **)(lVar3 + uVar10 * 8) = plVar1;
      while (plVar8 = plVar7, plVar7 = (long *)*plVar8, plVar7 != (long *)0x0) {
        uVar5 = plVar7[1];
        if ((uVar4 & uVar6) == 0) {
          uVar5 = uVar5 & uVar6;
        }
        else if (uVar4 <= uVar5) {
          uVar9 = 0;
          if (uVar4 != 0) {
            uVar9 = uVar5 / uVar4;
          }
          uVar5 = uVar5 - uVar9 * uVar4;
        }
        if (uVar5 != uVar10) {
          if (*(long *)(lVar3 + uVar5 * 8) == 0) {
            *(long **)(lVar3 + uVar5 * 8) = plVar8;
            uVar10 = uVar5;
          }
          else {
            *plVar8 = *plVar7;
            *plVar7 = **(undefined8 **)(lVar3 + uVar5 * 8);
            **(long **)(lVar3 + uVar5 * 8) = (long)plVar7;
            plVar7 = plVar8;
          }
        }
      }
    }
  }
  else if (uVar4 < uVar13) {
    uVar5 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar13 < 3) || ((uVar13 & uVar13 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar5) {
      uVar5 = 1L << (-LZCOUNT(uVar5 - 1) & 0x3fU);
    }
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
    if (uVar4 < uVar13) {
      if (uVar4 != 0) goto LAB_10b2d5e70;
      func_0x00010b2d63b0(param_1,0);
      param_1[1] = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = param_1[1];
    }
  }
  if ((uVar13 & uVar13 - 1) == 0) {
    unaff_x21 = uVar13 - 1 & uVar12;
  }
  else {
    unaff_x21 = uVar12;
    if (uVar13 <= uVar12) {
      uVar4 = 0;
      if (uVar13 != 0) {
        uVar4 = uVar12 / uVar13;
      }
      unaff_x21 = uVar12 - uVar4 * uVar13;
    }
  }
LAB_10b2d5ffc:
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + unaff_x21 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar11 = *plVar1;
    *plVar1 = (long)plVar11;
    *(long **)(lVar3 + unaff_x21 * 8) = plVar1;
    if (*plVar11 != 0) {
      uVar12 = *(ulong *)(*plVar11 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar12 = uVar12 & uVar13 - 1;
      }
      else if (uVar13 <= uVar12) {
        uVar4 = 0;
        if (uVar13 != 0) {
          uVar4 = uVar12 / uVar13;
        }
        uVar12 = uVar12 - uVar4 * uVar13;
      }
      *(long **)(lVar3 + uVar12 * 8) = plVar11;
    }
  }
  else {
    *plVar11 = *plVar7;
    *plVar7 = (long)plVar11;
  }
  param_1[3] = param_1[3] + 1;
  func_0x00010b2d6640();
LAB_10b2d6070:
  return plVar11 + 3;
}



/* Entry: 10b2d60a4; end: 10b2d60cf;  */

long FUN_10b2d60a4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c2c570();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return param_1;
}



/* Entry: 10b2d60d0; end: 10b2d616f;  */

void FUN_10b2d60d0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  iVar1 = (int)param_2 + 0x18;
  FUN_10b2d5cf4();
  if (iVar1 == 0) {
    iVar1 = (int)param_2 + 0x40;
    func_0x00010b2d6620();
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      puVar2 = (undefined8 *)(param_2 + 0x40);
      FUN_10b2d6170(puVar2,param_3);
      lVar3 = puVar2[1];
      uVar4 = *puVar2;
      param_1[1] = puVar2[1];
      *param_1 = uVar4;
      if (lVar3 != 0) {
        do {
          func_0x000107c356b4();
        } while (extraout_w10_00 != 0);
      }
    }
  }
  else {
    puVar2 = (undefined8 *)(param_2 + 0x18);
    FUN_10b2d6170(puVar2,param_3);
    lVar3 = puVar2[1];
    uVar4 = *puVar2;
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    if (lVar3 != 0) {
      do {
        func_0x000107c356b4();
      } while (extraout_w10 != 0);
    }
  }
  return;
}



/* Entry: 10b2d6170; end: 10b2d6197;  */

long * FUN_10b2d6170(long param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  
  func_0x00010b2d6318();
  if (param_1 != 0) {
    return (long *)(param_1 + 0x18);
  }
  puVar2 = &UNK_10f639994;
  func_0x000104c03f28();
  FUN_10b2d640c(puVar2 + 0x18);
  plVar3 = (long *)(puVar2 + 0x40);
  uVar7 = *(ulong *)(puVar2 + 0x48);
  if ((uVar7 != 0) && (lVar5 = *(long *)(puVar2 + 0x58), lVar5 != 0)) {
    uVar9 = uVar7 - 1;
    if ((uVar7 & uVar9) == 0) {
      uVar10 = uVar9 & param_2;
    }
    else {
      uVar10 = param_2;
      if (uVar7 <= param_2) {
        uVar10 = 0;
        if (uVar7 != 0) {
          uVar10 = param_2 / uVar7;
        }
        uVar10 = param_2 - uVar10 * uVar7;
      }
    }
    lVar8 = *plVar3;
    plVar6 = *(long **)(lVar8 + uVar10 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) {
            return plVar3;
          }
          uVar12 = plVar6[1];
          if (uVar12 != param_2) break;
          if (plVar6[2] == param_2) {
            lVar11 = *plVar6;
            uVar10 = plVar6[1];
            if ((uVar7 & uVar9) == 0) {
              uVar10 = uVar10 & uVar9;
            }
            else if (uVar7 <= uVar10) {
              uVar12 = 0;
              if (uVar7 != 0) {
                uVar12 = uVar10 / uVar7;
              }
              uVar10 = uVar10 - uVar12 * uVar7;
            }
            plVar1 = *(long **)(lVar8 + uVar10 * 8);
            do {
              plVar13 = plVar1;
              plVar1 = (long *)*plVar13;
            } while ((long *)*plVar13 != plVar6);
            if (plVar13 == (long *)(puVar2 + 0x50)) {
LAB_10b2d651c:
              if (lVar11 == 0) {
LAB_10b2d6550:
                *(undefined8 *)(lVar8 + uVar10 * 8) = 0;
                lVar11 = *plVar6;
                goto LAB_10b2d6558;
              }
              uVar12 = *(ulong *)(lVar11 + 8);
              if ((uVar7 & uVar9) == 0) {
                uVar4 = uVar12 & uVar9;
              }
              else {
                uVar4 = uVar12;
                if (uVar7 <= uVar12) {
                  uVar4 = 0;
                  if (uVar7 != 0) {
                    uVar4 = uVar12 / uVar7;
                  }
                  uVar4 = uVar12 - uVar4 * uVar7;
                }
              }
              if (uVar4 != uVar10) goto LAB_10b2d6550;
            }
            else {
              uVar12 = plVar13[1];
              if ((uVar7 & uVar9) == 0) {
                uVar12 = uVar12 & uVar9;
              }
              else if (uVar7 <= uVar12) {
                uVar4 = 0;
                if (uVar7 != 0) {
                  uVar4 = uVar12 / uVar7;
                }
                uVar12 = uVar12 - uVar4 * uVar7;
              }
              if (uVar12 != uVar10) goto LAB_10b2d651c;
LAB_10b2d6558:
              if (lVar11 == 0) goto LAB_10b2d6590;
              uVar12 = *(ulong *)(lVar11 + 8);
            }
            if ((uVar7 & uVar9) == 0) {
              uVar12 = uVar12 & uVar9;
            }
            else if (uVar7 <= uVar12) {
              uVar9 = 0;
              if (uVar7 != 0) {
                uVar9 = uVar12 / uVar7;
              }
              uVar12 = uVar12 - uVar9 * uVar7;
            }
            if (uVar12 != uVar10) {
              *(long **)(lVar8 + uVar12 * 8) = plVar13;
              lVar11 = *plVar6;
            }
LAB_10b2d6590:
            *plVar13 = lVar11;
            *plVar6 = 0;
            *(long *)(puVar2 + 0x58) = lVar5 + -1;
            func_0x00010b2d6640();
            return plVar3;
          }
        }
        if ((uVar7 & uVar9) == 0) {
          uVar12 = uVar12 & uVar9;
        }
        else if (uVar7 <= uVar12) {
          uVar4 = 0;
          if (uVar7 != 0) {
            uVar4 = uVar12 / uVar7;
          }
          uVar12 = uVar12 - uVar4 * uVar7;
        }
      } while (uVar12 == uVar10);
    }
  }
  return plVar3;
}



/* Entry: 10b2d6198; end: 10b2d61c7;  */

void FUN_10b2d6198(long param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  FUN_10b2d640c(param_1 + 0x18);
  uVar5 = *(ulong *)(param_1 + 0x48);
  if ((uVar5 != 0) && (lVar3 = *(long *)(param_1 + 0x58), lVar3 != 0)) {
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar7 & param_2;
    }
    else {
      uVar8 = param_2;
      if (uVar5 <= param_2) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = param_2 / uVar5;
        }
        uVar8 = param_2 - uVar8 * uVar5;
      }
    }
    lVar6 = *(long *)(param_1 + 0x40);
    plVar4 = *(long **)(lVar6 + uVar8 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return;
          }
          uVar10 = plVar4[1];
          if (uVar10 != param_2) break;
          if (plVar4[2] == param_2) {
            lVar9 = *plVar4;
            uVar8 = plVar4[1];
            if ((uVar5 & uVar7) == 0) {
              uVar8 = uVar8 & uVar7;
            }
            else if (uVar5 <= uVar8) {
              uVar10 = 0;
              if (uVar5 != 0) {
                uVar10 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar10 * uVar5;
            }
            plVar1 = *(long **)(lVar6 + uVar8 * 8);
            do {
              plVar11 = plVar1;
              plVar1 = (long *)*plVar11;
            } while ((long *)*plVar11 != plVar4);
            if (plVar11 == (long *)(param_1 + 0x50)) {
LAB_10b2d651c:
              if (lVar9 == 0) {
LAB_10b2d6550:
                *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
                lVar9 = *plVar4;
                goto LAB_10b2d6558;
              }
              uVar10 = *(ulong *)(lVar9 + 8);
              if ((uVar5 & uVar7) == 0) {
                uVar2 = uVar10 & uVar7;
              }
              else {
                uVar2 = uVar10;
                if (uVar5 <= uVar10) {
                  uVar2 = 0;
                  if (uVar5 != 0) {
                    uVar2 = uVar10 / uVar5;
                  }
                  uVar2 = uVar10 - uVar2 * uVar5;
                }
              }
              if (uVar2 != uVar8) goto LAB_10b2d6550;
            }
            else {
              uVar10 = plVar11[1];
              if ((uVar5 & uVar7) == 0) {
                uVar10 = uVar10 & uVar7;
              }
              else if (uVar5 <= uVar10) {
                uVar2 = 0;
                if (uVar5 != 0) {
                  uVar2 = uVar10 / uVar5;
                }
                uVar10 = uVar10 - uVar2 * uVar5;
              }
              if (uVar10 != uVar8) goto LAB_10b2d651c;
LAB_10b2d6558:
              if (lVar9 == 0) goto LAB_10b2d6590;
              uVar10 = *(ulong *)(lVar9 + 8);
            }
            if ((uVar5 & uVar7) == 0) {
              uVar10 = uVar10 & uVar7;
            }
            else if (uVar5 <= uVar10) {
              uVar7 = 0;
              if (uVar5 != 0) {
                uVar7 = uVar10 / uVar5;
              }
              uVar10 = uVar10 - uVar7 * uVar5;
            }
            if (uVar10 != uVar8) {
              *(long **)(lVar6 + uVar10 * 8) = plVar11;
              lVar9 = *plVar4;
            }
LAB_10b2d6590:
            *plVar11 = lVar9;
            *plVar4 = 0;
            *(long *)(param_1 + 0x58) = lVar3 + -1;
            func_0x00010b2d6640();
            return;
          }
        }
        if ((uVar5 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar5 <= uVar10) {
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = uVar10 / uVar5;
          }
          uVar10 = uVar10 - uVar2 * uVar5;
        }
      } while (uVar10 == uVar8);
    }
  }
  return;
}



/* Entry: 10b2d61c8; end: 10b2d61db;  */

void FUN_10b2d61c8(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  func_0x00010b2d6634();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b2d6628();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10b2d61dc; end: 10b2d6203;  */

void FUN_10b2d61dc(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  FUN_10b2d65c4(param_1 + 0x18);
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x00010b2d6628();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10b2d6204; end: 10b2d6213;  */

long FUN_10b2d6204(long param_1)

{
  return *(long *)(param_1 + 0x58) + *(long *)(param_1 + 0x30);
}



/* Entry: 10b2d6214; end: 10b2d622b;  */

undefined8 FUN_10b2d6214(long param_1)

{
  func_0x00010b2d6634();
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b2d622c; end: 10b2d622f;  */

undefined8 * FUN_10b2d622c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1e38;
  func_0x00010b2d6280(param_1 + 8);
  func_0x00010b2d6280(param_1 + 3);
  return param_1;
}



/* Entry: 10b2d6230; end: 10b2d6243;  */

void FUN_10b2d6230(void)

{
  FUN_10b2d6244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d6244; end: 10b2d62ff;  */

undefined8 * FUN_10b2d6244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1e38;
  func_0x00010b2d6280(param_1 + 8);
  func_0x00010b2d6280(param_1 + 3);
  return param_1;
}



/* Entry: 10b2d6300; end: 10b2d63c7;  */

void FUN_10b2d6300(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2d63c8; end: 10b2d640b;  */

long * FUN_10b2d63c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c2c578(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b2d640c; end: 10b2d65c3;  */

void FUN_10b2d640c(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  
  uVar5 = param_1[1];
  if ((uVar5 != 0) && (lVar3 = param_1[3], lVar3 != 0)) {
    uVar7 = uVar5 - 1;
    if ((uVar5 & uVar7) == 0) {
      uVar8 = uVar7 & param_2;
    }
    else {
      uVar8 = param_2;
      if (uVar5 <= param_2) {
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = param_2 / uVar5;
        }
        uVar8 = param_2 - uVar8 * uVar5;
      }
    }
    lVar6 = *param_1;
    plVar4 = *(long **)(lVar6 + uVar8 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        while( true ) {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return;
          }
          uVar10 = plVar4[1];
          if (uVar10 != param_2) break;
          if (plVar4[2] == param_2) {
            lVar9 = *plVar4;
            uVar8 = plVar4[1];
            if ((uVar5 & uVar7) == 0) {
              uVar8 = uVar8 & uVar7;
            }
            else if (uVar5 <= uVar8) {
              uVar10 = 0;
              if (uVar5 != 0) {
                uVar10 = uVar8 / uVar5;
              }
              uVar8 = uVar8 - uVar10 * uVar5;
            }
            plVar1 = *(long **)(lVar6 + uVar8 * 8);
            do {
              plVar11 = plVar1;
              plVar1 = (long *)*plVar11;
            } while ((long *)*plVar11 != plVar4);
            if (plVar11 == param_1 + 2) {
LAB_10b2d651c:
              if (lVar9 == 0) {
LAB_10b2d6550:
                *(undefined8 *)(lVar6 + uVar8 * 8) = 0;
                lVar9 = *plVar4;
                goto LAB_10b2d6558;
              }
              uVar10 = *(ulong *)(lVar9 + 8);
              if ((uVar5 & uVar7) == 0) {
                uVar2 = uVar10 & uVar7;
              }
              else {
                uVar2 = uVar10;
                if (uVar5 <= uVar10) {
                  uVar2 = 0;
                  if (uVar5 != 0) {
                    uVar2 = uVar10 / uVar5;
                  }
                  uVar2 = uVar10 - uVar2 * uVar5;
                }
              }
              if (uVar2 != uVar8) goto LAB_10b2d6550;
            }
            else {
              uVar10 = plVar11[1];
              if ((uVar5 & uVar7) == 0) {
                uVar10 = uVar10 & uVar7;
              }
              else if (uVar5 <= uVar10) {
                uVar2 = 0;
                if (uVar5 != 0) {
                  uVar2 = uVar10 / uVar5;
                }
                uVar10 = uVar10 - uVar2 * uVar5;
              }
              if (uVar10 != uVar8) goto LAB_10b2d651c;
LAB_10b2d6558:
              if (lVar9 == 0) goto LAB_10b2d6590;
              uVar10 = *(ulong *)(lVar9 + 8);
            }
            if ((uVar5 & uVar7) == 0) {
              uVar10 = uVar10 & uVar7;
            }
            else if (uVar5 <= uVar10) {
              uVar7 = 0;
              if (uVar5 != 0) {
                uVar7 = uVar10 / uVar5;
              }
              uVar10 = uVar10 - uVar7 * uVar5;
            }
            if (uVar10 != uVar8) {
              *(long **)(lVar6 + uVar10 * 8) = plVar11;
              lVar9 = *plVar4;
            }
LAB_10b2d6590:
            *plVar11 = lVar9;
            *plVar4 = 0;
            param_1[3] = lVar3 + -1;
            func_0x00010b2d6640();
            return;
          }
        }
        if ((uVar5 & uVar7) == 0) {
          uVar10 = uVar10 & uVar7;
        }
        else if (uVar5 <= uVar10) {
          uVar2 = 0;
          if (uVar5 != 0) {
            uVar2 = uVar10 / uVar5;
          }
          uVar10 = uVar10 - uVar2 * uVar5;
        }
      } while (uVar10 == uVar8);
    }
  }
  return;
}



/* Entry: 10b2d65c4; end: 10b2d660f;  */

void FUN_10b2d65c4(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010b2d6628();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10b2d6610; end: 10b2d6647;  */

void FUN_10b2d6610(void)

{
  return;
}



/* Entry: 10b2d6648; end: 10b2d666f;  */

undefined8 FUN_10b2d6648(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c2c578(param_1 + 0x10);
  func_0x000100610140();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10b2d6670; end: 10b2d6677;  */

void FUN_10b2d6670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100670d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10b2d6678; end: 10b2d682f;  */

void FUN_10b2d6678(undefined1 *param_1,code **param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 *puVar4;
  code **ppcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code **ppcVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  code **ppcVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  code *extraout_x8;
  code *extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x22;
  long lVar12;
  code *unaff_x23;
  long lVar13;
  code **unaff_x24;
  undefined8 uStack_160;
  undefined8 uStack_158;
  code **ppcStack_150;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code **ppcStack_120;
  undefined1 *puStack_110;
  code **ppcStack_100;
  code *pcStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  code **ppcStack_e0;
  code **ppcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  code **ppcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined1 *puStack_50;
  
  puVar6 = &uStack_c0;
  puVar10 = &uStack_c0;
  puVar4 = param_1;
  func_0x00010b2d7640();
  if ((int)puVar4 == 0) {
    unaff_x22 = *(long *)(param_1 + 0x1a0);
    FUN_10b2d74a0(&uStack_c0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    uStack_a0 = param_3[1];
    uStack_a8 = *param_3;
    uStack_90 = param_3[3];
    uStack_98 = param_3[2];
    ppcStack_b0 = param_2;
    func_0x000107c28150();
    param_2 = *(code ***)(unaff_x22 + 0x10);
    __ZNSt3__15mutex4lockEv(param_2 + 1);
    unaff_x23 = param_2[0xe];
    pcStack_80 = FUN_10b2d7540;
    ppuStack_78 = &PTR_FUN_110cd2288;
    puVar7 = (undefined8 *)0x38;
    __Znwm();
    uVar2 = uStack_b8;
    uVar1 = uStack_c0;
    unaff_x24 = &pcStack_80;
    uStack_c0 = 0;
    uStack_b8 = 0;
    puVar7[1] = uVar2;
    *puVar7 = uVar1;
    puVar7[3] = uStack_a8;
    puVar7[2] = ppcStack_b0;
    puVar7[5] = uStack_98;
    puVar7[4] = uStack_a0;
    puVar7[6] = uStack_90;
    ppcVar11 = &pcStack_80;
    puStack_70 = puVar7;
    puStack_50 = (undefined1 *)puVar6;
    func_0x000107c28154(param_2 + 9);
    func_0x00010b2d7634(ppuStack_78);
    ppcVar5 = param_2 + 1;
    __ZNSt3__15mutex6unlockEv();
    if (unaff_x23 == (code *)0x0) {
      ppuStack_78 = *(undefined ***)(unaff_x22 + 0x18);
      pcStack_80 = *(code **)(unaff_x22 + 0x10);
      if (*(long *)(unaff_x22 + 0x18) != 0) {
        do {
          func_0x000107c356c0();
        } while (extraout_w10 != 0);
      }
      func_0x000107c35708();
      ppcVar11 = &pcStack_80;
      (*extraout_x8)();
      ppcVar5 = &pcStack_80;
      func_0x000107c27e74();
    }
    func_0x00010b2d76a8();
    func_0x00010b2d761c();
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    ppcVar11 = param_2;
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x18))(*(long **)(param_1 + 0x1b0),param_2,param_3);
    ppcVar5 = *(code ***)(param_1 + 0x18);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*ppcVar5 + 0x30);
    func_0x00010b2d761c();
    puVar10 = (undefined8 *)param_1;
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b2d66ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  uVar3 = 0;
  ___stack_chk_fail();
  ppcVar8 = &pcStack_80;
  func_0x000107c27e74();
  func_0x00010b2d76a8();
  func_0x00010b2d7670();
  puVar6 = &uStack_160;
  pcStack_c8 = FUN_10b2d6830;
  ppcVar9 = ppcVar8;
  ppcStack_100 = unaff_x24;
  pcStack_f8 = unaff_x23;
  lStack_f0 = unaff_x22;
  puStack_e8 = (undefined1 *)puVar10;
  ppcStack_e0 = param_2;
  ppcStack_d8 = ppcVar5;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010b2d7640();
  if ((int)ppcVar9 == 0) {
    UNRECOVERED_JUMPTABLE_00 = ppcVar8[0x34];
    FUN_10b2d74a0(&uStack_160,ppcVar8[1],ppcVar8[2]);
    ppcStack_150 = ppcVar11;
    func_0x000107c28150();
    lVar12 = *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar12 + 8);
    lVar13 = *(long *)(lVar12 + 0x70);
    uStack_140 = 0x10b2d75c8;
    ppuStack_138 = &PTR_DAT_110cd22a0;
    uStack_128 = uStack_158;
    uStack_130 = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
    ppcStack_120 = ppcVar11;
    puStack_110 = (undefined1 *)puVar6;
    func_0x000107c28154(lVar12 + 0x48,&uStack_140);
    func_0x00010b2d7634(ppuStack_138);
    __ZNSt3__15mutex6unlockEv(lVar12 + 8);
    if (lVar13 == 0) {
      ppuStack_138 = *(undefined ***)(UNRECOVERED_JUMPTABLE_00 + 0x18);
      uStack_140 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10);
      if (*(long *)(UNRECOVERED_JUMPTABLE_00 + 0x18) != 0) {
        do {
          func_0x000107c356c0();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c35708();
      (*extraout_x8_00)();
      func_0x000107c27e74(&uStack_140);
    }
    func_0x00010b2d76a8();
    func_0x00010b2d761c();
    if ((bool)uVar3) {
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)ppcVar8[0x36] + 0x20);
    func_0x00010b2d761c();
    if ((bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010b2d6884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  ___stack_chk_fail();
  puVar10 = &uStack_140;
  func_0x000107c27e74();
  func_0x00010b2d76a8();
  func_0x00010b2d7670();
                    /* WARNING: Could not recover jumptable at 0x00010b2d69a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)puVar10[3] + 0x38))();
  return;
}



/* Entry: 10b2d6830; end: 10b2d6997;  */

void FUN_10b2d6830(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  code *extraout_x8;
  int extraout_w10;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_50;
  
  puVar1 = &uStack_a0;
  lVar2 = param_1;
  func_0x00010b2d7640();
  if ((int)lVar2 == 0) {
    lVar2 = *(long *)(param_1 + 0x1a0);
    FUN_10b2d74a0(&uStack_a0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    uStack_90 = param_2;
    func_0x000107c28150();
    lVar3 = *(long *)(lVar2 + 0x10);
    __ZNSt3__15mutex4lockEv(lVar3 + 8);
    lVar4 = *(long *)(lVar3 + 0x70);
    uStack_80 = 0x10b2d75c8;
    ppuStack_78 = &PTR_DAT_110cd22a0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_60 = param_2;
    puStack_50 = (undefined1 *)puVar1;
    func_0x000107c28154(lVar3 + 0x48,&uStack_80);
    func_0x00010b2d7634(ppuStack_78);
    __ZNSt3__15mutex6unlockEv(lVar3 + 8);
    if (lVar4 == 0) {
      ppuStack_78 = *(undefined ***)(lVar2 + 0x18);
      uStack_80 = *(undefined8 *)(lVar2 + 0x10);
      if (*(long *)(lVar2 + 0x18) != 0) {
        do {
          func_0x000107c356c0();
        } while (extraout_w10 != 0);
      }
      func_0x000107c35708();
      (*extraout_x8)();
      func_0x000107c27e74(&uStack_80);
    }
    func_0x00010b2d76a8();
    func_0x00010b2d761c();
    if ((bool)in_ZR) {
      return;
    }
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x1b0) + 0x20);
    func_0x00010b2d761c();
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b2d6884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  ___stack_chk_fail();
  puVar1 = &uStack_80;
  func_0x000107c27e74();
  func_0x00010b2d76a8();
  func_0x00010b2d7670();
                    /* WARNING: Could not recover jumptable at 0x00010b2d69a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)puVar1[3] + 0x38))();
  return;
}



/* Entry: 10b2d6998; end: 10b2d69d7;  */

void FUN_10b2d6998(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b2d69a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x38))();
  return;
}



/* Entry: 10b2d69d8; end: 10b2d6a97;  */

long FUN_10b2d69d8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  int extraout_w10;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0x1d0);
  if ((int)plVar1[7] == 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x20);
      ___dynamic_cast(lVar2,&PTR_DAT_110cd22b8,&PTR_DAT_110cd3870,0);
      if ((lVar2 != 0) && (lVar3 != 0)) {
        do {
          func_0x000107c356c0();
        } while (extraout_w10 != 0);
      }
    }
    FUN_10b2e3594();
    func_0x00010b2d7754();
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    param_3 = (long)plVar1 * 1000;
  }
  return param_3;
}



/* Entry: 10b2d6a98; end: 10b2d6a9b;  */

undefined8 * FUN_10b2d6a98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1ec0;
  func_0x000107c27f60(param_1 + 0x3c);
  func_0x000107c27f58(param_1 + 0x3a);
  func_0x00010b2d6b78(param_1 + 0x38);
  func_0x000107c2c5f4(param_1 + 0x36);
  func_0x000107c2814c(param_1 + 0x34);
  func_0x000107c27e70(param_1 + 0x32);
  func_0x000107c2c52c(param_1 + 7);
  func_0x000107c2c5b0(param_1 + 5);
  func_0x000107c2c5fc(param_1 + 3);
  func_0x000107c2c5f8(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d6a9c; end: 10b2d6aaf;  */

void FUN_10b2d6a9c(void)

{
  func_0x00010b2d7014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d6ab0; end: 10b2d6acf;  */

void FUN_10b2d6ab0(long param_1)

{
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010b2d6ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x1c0) + 0x20))();
    return;
  }
  return;
}



/* Entry: 10b2d6ad0; end: 10b2d6b07;  */

void FUN_10b2d6ad0(long param_1)

{
  func_0x00010b2d7684();
  func_0x00010b2d7684();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10b51a248();
  }
  return;
}



/* Entry: 10b2d6b08; end: 10b2d6b0f;  */

void FUN_10b2d6b08(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b2d76f0(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -1;
    func_0x00010b2d70b4();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b2d6b10; end: 10b2d6b3f;  */

void FUN_10b2d6b10(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b2d76f0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    func_0x00010b2d70b4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b2d6b40; end: 10b2d6b47;  */

void FUN_10b2d6b40(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x00010b2d76f0(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -1;
    func_0x00010b2d7090();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b2d6b48; end: 10b2d6cab;  */

void FUN_10b2d6b48(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b2d76f0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    func_0x00010b2d7090();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b2d6cac; end: 10b2d6cc3;  */

void FUN_10b2d6cac(long *param_1,long param_2)

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



/* Entry: 10b2d6cc4; end: 10b2d6d13;  */

void FUN_10b2d6cc4(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010b2d6cf8();
  return;
}



/* Entry: 10b2d6d14; end: 10b2d6f17;  */

undefined1  [16] FUN_10b2d6d14(long *param_1,int *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = (ulong)*param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10b2d6dc0;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if ((int)plVar8[2] == *param_2) {
            uVar2 = 0;
            goto LAB_10b2d6eec;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_10b2d6dc0:
  FUN_10b2d6f18(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x000107c2c59c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x00010b2d6f98(aplStack_58);
  uVar2 = 1;
LAB_10b2d6eec:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 10b2d6f18; end: 10b2d6f6f;  */

void FUN_10b2d6f18(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x60;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10b2d6f70(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10b2d6f70; end: 10b2d6fbb;  */

undefined4 * FUN_10b2d6f70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c2c510(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 10b2d6fbc; end: 10b2d6fd3;  */

void FUN_10b2d6fbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000107c2ab24(lVar1 + 0x30);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 10b2d6fd4; end: 10b2d70d7;  */

void FUN_10b2d6fd4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000107c2ab24(param_2 + 0x30);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b2d70d8; end: 10b2d70db;  */

undefined8 * FUN_10b2d70d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1fa0;
  func_0x000107c2826c(param_1 + 9);
  func_0x000107c2c5b4(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d70dc; end: 10b2d70ef;  */

void FUN_10b2d70dc(void)

{
  FUN_10b2d70f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d70f0; end: 10b2d712b;  */

undefined8 * FUN_10b2d70f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1fa0;
  func_0x000107c2826c(param_1 + 9);
  func_0x000107c2c5b4(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d712c; end: 10b2d712f;  */

void FUN_10b2d712c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd1fe0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d7130; end: 10b2d7143;  */

void FUN_10b2d7130(void)

{
  func_0x00010b2d714c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d7144; end: 10b2d7157;  */

void FUN_10b2d7144(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a4754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2d7158; end: 10b2d719f;  */

void FUN_10b2d7158(long param_1)

{
  func_0x000107c356cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b2d71a0; end: 10b2d71a3;  */

void FUN_10b2d71a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cd2030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d71a4; end: 10b2d71b7;  */

void FUN_10b2d71a4(void)

{
  FUN_10b2d71e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d71b8; end: 10b2d71df;  */

long FUN_10b2d71b8(long param_1)

{
  FUN_10b2d7158(param_1 + 0x68);
  func_0x00010b519afc();
  FUN_10b5198f4(param_1 + 0x28);
  return param_1 + 0x18;
}



/* Entry: 10b2d71e0; end: 10b2d71ef;  */

void FUN_10b2d71e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d71f0; end: 10b2d7213;  */

void FUN_10b2d71f0(long param_1)

{
  func_0x000107c356cc();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b2d7214; end: 10b2d7227;  */

void FUN_10b2d7214(void)

{
  return;
}



/* Entry: 10b2d7228; end: 10b2d724f;  */

void FUN_10b2d7228(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _open(param_2,param_3);
  return;
}



/* Entry: 10b2d7250; end: 10b2d72a7;  */

void FUN_10b2d7250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__read_11034ca00)(param_2,param_3,param_4);
  return;
}



/* Entry: 10b2d72a8; end: 10b2d72bb;  */

void FUN_10b2d72a8(void)

{
  func_0x00010b2d72c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d72bc; end: 10b2d72d3;  */

void FUN_10b2d72bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a4754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2d72d4; end: 10b2d72e7;  */

void FUN_10b2d72d4(void)

{
  func_0x00010b2d72f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d72e8; end: 10b2d72ff;  */

void FUN_10b2d72e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a4754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2d7300; end: 10b2d7313;  */

void FUN_10b2d7300(void)

{
  func_0x00010b2d7444();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d7314; end: 10b2d7323;  */

void FUN_10b2d7314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a4754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2d7324; end: 10b2d7353;  */

void FUN_10b2d7324(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b2d76f0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -8;
    FUN_10b2d7360();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b2d7354; end: 10b2d735f;  */

void FUN_10b2d7354(long param_1)

{
  func_0x00010b2d7684();
  func_0x000107c356d4();
  if (param_1 != 0) {
    func_0x00010b2d7610();
  }
  return;
}



/* Entry: 10b2d7360; end: 10b2d742b;  */

void FUN_10b2d7360(long param_1)

{
  func_0x000107c356d4();
  if (param_1 != 0) {
    func_0x00010b2d7610();
  }
  return;
}



/* Entry: 10b2d742c; end: 10b2d7453;  */

void FUN_10b2d742c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2d7454; end: 10b2d7467;  */

void FUN_10b2d7454(void)

{
  func_0x00010b2d7470();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d7468; end: 10b2d747f;  */

void FUN_10b2d7468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008a4754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b2d7480; end: 10b2d7493;  */

void FUN_10b2d7480(void)

{
  FUN_10b2d7494();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2d7494; end: 10b2d749f;  */

void FUN_10b2d7494(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd2230;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2d74a0; end: 10b2d74db;  */

long * FUN_10b2d74a0(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    plVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    plVar1 = (long *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  func_0x00010527822c();
  plVar2 = *(long **)(plVar1[2] + 0x1b0);
                    /* WARNING: Could not recover jumptable at 0x00010b2d74f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))(plVar2,plVar1 + 4);
  return plVar2;
}



/* Entry: 10b2d74dc; end: 10b2d753f;  */

void FUN_10b2d74dc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x1b0);
                    /* WARNING: Could not recover jumptable at 0x00010b2d74f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x20);
  return;
}



/* Entry: 10b2d7540; end: 10b2d758f;  */

void FUN_10b2d7540(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(**(long **)(*plVar1 + 0x1b0) + 0x18))
            (*(long **)(*plVar1 + 0x1b0),plVar1[2],plVar1 + 3);
                    /* WARNING: Could not recover jumptable at 0x00010b2d758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*plVar1 + 0x18) + 0x30))(*(long **)(*plVar1 + 0x18),plVar1[2],plVar1 + 3)
  ;
  return;
}



/* Entry: 10b2d7590; end: 10b2d75af;  */

void FUN_10b2d7590(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c2c5c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b2d75b0; end: 10b2d775f;  */

void FUN_10b2d75b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b2d7760; end: 10b2d78e3;  */

void FUN_10b2d7760(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined ***pppuVar3;
  long extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  long alStack_40 [2];
  
  alStack_40[0] = 0;
  alStack_40[1] = 0;
  (**(code **)(**(long **)(param_1 + 0x130) + 0x18))(&ppuStack_68);
  FUN_10b2d78e4(alStack_40,&ppuStack_68);
  func_0x000107c2c578(&ppuStack_68);
  if (alStack_40[0] == 0) {
    func_0x00010b2d91a8(*(undefined8 *)(param_1 + 0x28));
    (*extraout_x8_02)();
  }
  else {
    uVar4 = *param_3;
    uVar6 = param_3[3];
    uVar5 = param_3[2];
    *(undefined8 *)(alStack_40[0] + 0x180) = param_3[1];
    *(undefined8 *)(alStack_40[0] + 0x178) = uVar4;
    *(undefined8 *)(alStack_40[0] + 400) = uVar6;
    *(undefined8 *)(alStack_40[0] + 0x188) = uVar5;
    func_0x000107c30134();
    func_0x00010b2d9134(alStack_40[0]);
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x9;
    }
    uVar2 = *(char *)(extraout_x8 + lVar1 + 0x4c) == '\x01';
    if ((bool)uVar2) {
      FUN_10b2d9b8c();
      uStack_58 = 0;
      uStack_50 = 0;
      ppuStack_68 = &PTR_FUN_110cd23f0;
      uStack_60 = 0;
      uStack_48 = 1;
      func_0x000107c278b8(auStack_80,"path");
      func_0x00010b2d9134(alStack_40[0]);
      lVar1 = 0xc0;
      if ((bool)uVar2) {
        lVar1 = extraout_x9_00;
      }
      func_0x00010b2d91c8(auStack_98,extraout_x8_00 + lVar1 + 8);
      pppuVar3 = &ppuStack_68;
      func_0x00010b2d7918(pppuVar3,auStack_80,auStack_98);
      func_0x00010b2d794c(&ppuStack_68,pppuVar3);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
      func_0x00010b2d9174();
      func_0x00010b2d91ec();
      (*extraout_x8_01)();
      FUN_10b2d7cec(&ppuStack_68);
    }
  }
  func_0x000107c2c578(alStack_40);
  return;
}



/* Entry: 10b2d78e4; end: 10b2d797b;  */

void FUN_10b2d78e4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 in_register_00005008;
  
  func_0x000107c357a0();
  *param_3 = 0;
  param_3[1] = 0;
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  func_0x00010b2d9190();
  return;
}



/* Entry: 10b2d797c; end: 10b2d797f;  */

undefined8 * FUN_10b2d797c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cd2458;
  func_0x000107c278a8(param_1 + 1);
  return param_1;
}



/* Entry: 10b2d7980; end: 10b2d7af7;  */

void FUN_10b2d7980(long param_1)

{
  int iVar1;
  code *extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  long *aplStack_260 [2];
  long *plStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [32];
  undefined1 uStack_220;
  undefined1 auStack_218 [104];
  undefined1 auStack_1b0 [176];
  undefined1 uStack_100;
  undefined1 auStack_f8 [192];
  undefined1 uStack_38;
  
  func_0x000107c35790();
  plStack_250 = (long *)0x0;
  uStack_248 = 0;
  (**(code **)(**(long **)(param_1 + 0x130) + 0x18))(auStack_f8);
  FUN_10b2d78e4(&plStack_250,auStack_f8);
  func_0x000107c2c578(auStack_f8);
  func_0x00010b2d910c(*(undefined8 *)(unaff_x20 + 0x130));
  (*extraout_x8)();
  if (plStack_250 == (long *)0x0) {
    func_0x00010b2d910c(*(undefined8 *)(unaff_x20 + 0x28));
    (*extraout_x8_00)();
  }
  else {
    (**(code **)(*plStack_250 + 0x28))(aplStack_260);
    if (aplStack_260[0] != (long *)0x0) {
      if ((bRam00000001137f4978 & 1) == 0) {
        iVar1 = 0x137f4978;
        ___cxa_guard_acquire();
        if (iVar1 != 0) {
          auStack_f8[0] = 0;
          uStack_38 = 0;
          auStack_1b0[0] = 0;
          uStack_100 = 0;
          func_0x000107c30170(auStack_218);
          auStack_240[0] = 0;
          uStack_220 = 0;
          func_0x000107c2c614(0x1137f4980,auStack_f8,auStack_1b0,auStack_218,auStack_240);
          func_0x000107c27f14(auStack_240);
          func_0x000107c2c62c(auStack_218);
          func_0x000107c2c63c(auStack_1b0);
          func_0x000107c2c644(auStack_f8);
          ___cxa_guard_release(0x1137f4978);
        }
      }
      (**(code **)(*aplStack_260[0] + 0x40))();
    }
    func_0x000107c2c53c(aplStack_260);
  }
  func_0x00010b2d917c();
  return;
}



/* Entry: 10b2d7af8; end: 10b2d7bd7;  */

void FUN_10b2d7af8(long *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar2 = param_2;
    func_0x000107c35728(param_1);
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x000107c35754((undefined1 *)((long)register0x00000008 + -0x50));
    func_0x000107c35784();
    *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
    *(undefined8 *)(extraout_x8_00 + 0x18) = extraout_x9;
    *(undefined8 *)(extraout_x8_00 + 0x20) = 0x10b2d8f80;
    *(undefined ***)(extraout_x8_00 + 0x28) = &PTR_DAT_110cd27b0;
    *(long **)(extraout_x8_00 + 0x30) = unaff_x19;
    *(int *)(extraout_x8_00 + 0x38) = (int)param_2;
    unaff_x21 = *(long *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    unaff_x20 = (long *)(unaff_x21 + 0x18);
    *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x21;
    func_0x000107c27f8c((undefined1 *)((long)register0x00000008 + -0x50));
    iVar1 = (int)unaff_x19[7];
    func_0x00010b2d910c();
    (*extraout_x8_01)();
    if (iVar1 == 0) {
      unaff_x19 = (long *)unaff_x19[7];
      *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      func_0x000107c35750();
      param_2 = (undefined1 *)((long)register0x00000008 + -0x50);
      (*extraout_x8_02)();
      func_0x000107c357a8();
    }
    else {
      unaff_x19 = unaff_x20;
      (**(code **)(*unaff_x20 + 0x10))();
      param_2 = puVar2;
    }
    func_0x000107c357b8();
    func_0x000107c35720(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x000107c357a8();
    func_0x000107c357b8();
    unaff_x30 = FUN_10b2d7bd8;
    func_0x00010b2d909c();
    param_1 = param_1 + -3;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  return;
}



/* Entry: 10b2d7bd8; end: 10b2d7bdf;  */

void FUN_10b2d7bd8(long *param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    puVar2 = param_2;
    func_0x000107c35728(param_1 + -3);
    *(undefined8 *)((long)register0x00000008 + -0x38) = extraout_x8;
    func_0x000107c35754((undefined1 *)((long)register0x00000008 + -0x50));
    func_0x000107c35784();
    *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
    *(undefined8 *)(extraout_x8_00 + 0x18) = extraout_x9;
    *(undefined8 *)(extraout_x8_00 + 0x20) = 0x10b2d8f80;
    *(undefined ***)(extraout_x8_00 + 0x28) = &PTR_DAT_110cd27b0;
    *(long **)(extraout_x8_00 + 0x30) = unaff_x19;
    *(int *)(extraout_x8_00 + 0x38) = (int)param_2;
    unaff_x21 = *(long *)((long)register0x00000008 + -0x40);
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
    unaff_x20 = (long *)(unaff_x21 + 0x18);
    *(long **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x21;
    func_0x000107c27f8c((undefined1 *)((long)register0x00000008 + -0x50));
    iVar1 = (int)unaff_x19[7];
    func_0x00010b2d910c();
    (*extraout_x8_01)();
    if (iVar1 == 0) {
      unaff_x19 = (long *)unaff_x19[7];
      *(long **)((long)register0x00000008 + -0x50) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x48) = unaff_x21;
      *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
      *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
      func_0x000107c35750();
      param_2 = (undefined1 *)((long)register0x00000008 + -0x50);
      (*extraout_x8_02)();
      func_0x000107c357a8();
    }
    else {
      unaff_x19 = unaff_x20;
      (**(code **)(*unaff_x20 + 0x10))();
      param_2 = puVar2;
    }
    func_0x000107c357b8();
    func_0x000107c35720(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x000107c357a8();
    func_0x000107c357b8();
    unaff_x30 = FUN_10b2d7bd8;
    func_0x00010b2d909c();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
  }
  return;
}



/* Entry: 10b2d7be0; end: 10b2d7c7f;  */

void FUN_10b2d7be0(undefined8 param_1,undefined8 param_2,int param_3)

{
  code *extraout_x8;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  func_0x000107c35770();
  if ((param_3 == 0) || ((*(uint *)(unaff_x19 + 0x24) & 0xfffffffe) != 2)) {
    alStack_30[0] = 0;
    alStack_30[1] = 0;
    (**(code **)(*(long *)unaff_x19[0x26] + 0x18))(auStack_40);
    FUN_10b2d78e4(alStack_30,auStack_40);
    func_0x00010b2d9190();
    func_0x00010b2d910c(unaff_x19[0x26]);
    (*extraout_x8)();
    if (alStack_30[0] != 0) {
      (**(code **)(*unaff_x19 + 0x10))();
    }
    func_0x00010b2d917c();
  }
  return;
}



/* Entry: 10b2d7c80; end: 10b2d7c93;  */

void FUN_10b2d7c80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b2d7c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
  return;
}


