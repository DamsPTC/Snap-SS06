/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b4b39d4; end: 10b4b3a43;  */

undefined8 * FUN_10b4b39d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110cf0080;
  puVar1 = param_1 + 1;
  *puVar1 = &PTR_DAT_110cf00b8;
  func_0x00010bcccbd4(auStack_30,puVar1);
  FUN_10b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  func_0x000107c29bb4(param_1 + 9);
  func_0x00010bcccb8c(puVar1);
  return param_1;
}



/* Entry: 10b4b3a44; end: 10b4b3a4f;  */

undefined8 * FUN_10b4b3a44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  *param_1 = &PTR_FUN_110cf0080;
  puVar1 = param_1 + 1;
  *puVar1 = &PTR_DAT_110cf00b8;
  func_0x00010bcccbd4(auStack_30,puVar1);
  FUN_10b106068(auStack_30);
  func_0x00010b1059a4(auStack_30);
  func_0x000107c29bb4(param_1 + 9);
  func_0x00010bcccb8c(puVar1);
  return param_1;
}



/* Entry: 10b4b3a50; end: 10b4b3a63;  */

void FUN_10b4b3a50(void)

{
  FUN_10b4b39d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b3a64; end: 10b4b3a6b;  */

void FUN_10b4b3a64(long param_1)

{
  FUN_10b4b39d4(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b3a6c; end: 10b4b3af3;  */

void FUN_10b4b3a6c(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b21be60(auStack_58);
  FUN_10b21bd60(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x50);
  uStack_30 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  func_0x000107c29bb4(&uStack_30);
  func_0x00010b21bdac(auStack_58,&uStack_30);
  FUN_10b21c0c8(auStack_58);
  return;
}



/* Entry: 10b4b3af4; end: 10b4b3b2b;  */

void FUN_10b4b3af4(undefined8 param_1,long param_2)

{
  undefined1 auStack_58 [40];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10b21be60(auStack_58);
  FUN_10b21bd60(param_1,auStack_58);
  uStack_28 = *(undefined8 *)(param_2 + 0x48);
  uStack_30 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  func_0x000107c29bb4(&uStack_30);
  func_0x00010b21bdac(auStack_58,&uStack_30);
  FUN_10b21c0c8(auStack_58);
  return;
}



/* Entry: 10b4b3b2c; end: 10b4b3bbb;  */

undefined1 * FUN_10b4b3b2c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10b4b3bbc(auStack_40,1);
  FUN_10b4b3c18(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010b4b3c98();
  func_0x00010b4b3cc0(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b4b3c98();
  func_0x00010b4b3cb8();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10b4b3be8();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10b4b3bbc; end: 10b4b3be7;  */

long FUN_10b4b3bbc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b4b3be8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b4b3be8; end: 10b4b3c17;  */

undefined8 * FUN_10b4b3be8(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x24924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cf0150;
  FUN_10b4b3868(param_1 + 3);
  return param_1;
}



/* Entry: 10b4b3c18; end: 10b4b3c5f;  */

undefined8 * FUN_10b4b3c18(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cf0150;
  FUN_10b4b3868(param_1 + 3);
  return param_1;
}



/* Entry: 10b4b3c60; end: 10b4b3c63;  */

void FUN_10b4b3c60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf0150;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b3c64; end: 10b4b3c77;  */

void FUN_10b4b3c64(void)

{
  func_0x00010b4b3c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b3c78; end: 10b4b3cd7;  */

void FUN_10b4b3c78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b4b3c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b4b3cd8; end: 10b4b3d47;  */

undefined8 * FUN_10b4b3cd8(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x9;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lStack_38;
  
  uVar1 = *(uint *)((long)param_1 + 0x5c) <= *(uint *)(param_2 + 0x30);
  uVar2 = *(uint *)(param_2 + 0x30) == *(uint *)((long)param_1 + 0x5c);
  if ((bool)uVar2) {
    func_0x00010b4b4a78();
    FUN_10b4b8d7c();
    param_1 = (undefined8 *)(unaff_x20 + 8);
    lStack_38 = param_2;
    FUN_10b4b3d48(param_1,&lStack_38);
    func_0x00010b4b49e0();
    if ((bool)uVar1 && !(bool)uVar2) {
      puVar4 = unaff_x19 + 3;
      func_0x000100563630();
      if (param_1 < (undefined8 *)unaff_x19[2]) {
        puVar3 = param_1 + 1;
        *param_1 = *puVar4;
      }
      else {
        puVar3 = unaff_x19;
        func_0x00010065b904();
      }
      unaff_x19[1] = puVar3;
      return puVar3 + -1;
    }
    func_0x00010b4b4a48();
    func_0x00010b4b4a2c();
    if (!(bool)uVar1) {
      *(undefined8 *)(extraout_x9 + extraout_x8 * 8) = unaff_x19[3];
    }
  }
  return param_1;
}



/* Entry: 10b4b3d48; end: 10b4b40df;  */

long * FUN_10b4b3d48(long *param_1,ulong *param_2)

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
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
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
          if (plVar11 == (long *)0x0) goto LAB_10b4b3df4;
          uVar5 = plVar11[1];
          if (uVar5 != uVar12) break;
          if (plVar11[2] == uVar12) goto LAB_10b4b40ac;
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
LAB_10b4b3df4:
  plVar1 = param_1 + 2;
  plVar11 = (long *)0x38;
  __Znwm();
  uStack_48 = 1;
  *plVar11 = 0;
  plVar11[1] = uVar12;
  plVar11[2] = uVar12;
  *(undefined4 *)(plVar11 + 3) = 0;
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[4] = 0;
  plStack_50 = plVar1;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_10b4b4034;
  uVar4 = 1;
  if (2 < uVar13) {
    uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar4 = uVar4 | uVar13 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  plStack_58 = plVar11;
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar4) {
LAB_10b4b3ea8:
    if (uVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b4b40d0);
      (*pcVar2)();
    }
    lVar3 = uVar4 << 3;
    __Znwm(lVar3);
    FUN_10b4b4940(param_1,lVar3);
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
      if (uVar4 != 0) goto LAB_10b4b3ea8;
      FUN_10b4b4940(param_1,0);
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
LAB_10b4b4034:
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
  plStack_58 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b4b4958(&plStack_58);
LAB_10b4b40ac:
  return plVar11 + 3;
}



/* Entry: 10b4b40e0; end: 10b4b4153;  */

undefined8 * FUN_10b4b40e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x9;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *puStack_38;
  
  uVar1 = *(uint *)((long)param_1 + 0x5c) <= *(uint *)*param_2;
  uVar2 = *(uint *)*param_2 == *(uint *)((long)param_1 + 0x5c);
  if ((bool)uVar2) {
    func_0x00010b4b4a78();
    FUN_10b4b787c();
    param_1 = (undefined8 *)(unaff_x20 + 0x30);
    puStack_38 = param_2;
    FUN_10b4b3d48(param_1,&puStack_38);
    func_0x00010b4b49e0();
    if ((bool)uVar1 && !(bool)uVar2) {
      puVar4 = unaff_x19 + 4;
      func_0x000100563630();
      if (param_1 < (undefined8 *)unaff_x19[2]) {
        puVar3 = param_1 + 1;
        *param_1 = *puVar4;
      }
      else {
        puVar3 = unaff_x19;
        func_0x00010065b904();
      }
      unaff_x19[1] = puVar3;
      return puVar3 + -1;
    }
    func_0x00010b4b4a48();
    func_0x00010b4b4a2c();
    if (!(bool)uVar1) {
      *(undefined8 *)(extraout_x9 + extraout_x8 * 8) = unaff_x19[4];
    }
  }
  return param_1;
}



/* Entry: 10b4b4154; end: 10b4b41a3;  */

void FUN_10b4b4154(long param_1)

{
  undefined8 extraout_x8;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  func_0x00010b4b4ab4();
  FUN_10b4b41a4(extraout_x8,*(undefined8 *)(param_1 + 0x20));
  plVar3 = (long *)(unaff_x20 + 0x18);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x00010b4b4a08();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010b4b4aa8();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10b4b41a4; end: 10b4b422b;  */

void FUN_10b4b41a4(long *param_1,ulong param_2)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_b8 [16];
  long lStack_a8;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x28) < param_2) {
    if (0x666666666666666 < param_2) {
      func_0x00010b4b4430();
      func_0x00010b4b4a24();
      func_0x00010b4b4a1c();
      if ((ulong)param_1[1] < (ulong)param_1[2]) {
        func_0x00010b4b499c();
        lVar2 = extraout_x8 + 0x28;
        param_1[1] = lVar2;
      }
      else {
        plVar1 = param_1;
        FUN_10b4b4758(param_1,(param_1[1] - *param_1) / 0x28 + 1);
        FUN_10b4b44cc(auStack_b8,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
        func_0x00010b4b499c(lStack_a8);
        lStack_a8 = lStack_a8 + 0x28;
        func_0x00010b4b4a84();
        lVar2 = param_1[1];
        func_0x00010b4b4a24();
      }
      param_1[1] = lVar2;
      return;
    }
    FUN_10b4b44cc(auStack_48,param_2,(param_1[1] - *param_1) / 0x28);
    func_0x00010b4b4a84();
    func_0x00010b4b4a24();
  }
  return;
}



/* Entry: 10b4b422c; end: 10b4b42f7;  */

void FUN_10b4b422c(long *param_1)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_10b4b499c();
    lVar2 = extraout_x8 + 0x28;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_10b4b4758(param_1,(param_1[1] - *param_1) / 0x28 + 1);
    FUN_10b4b44cc(auStack_68,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
    FUN_10b4b499c(lStack_58);
    lStack_58 = lStack_58 + 0x28;
    func_0x00010b4b4a84();
    lVar2 = param_1[1];
    func_0x00010b4b4a24();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b4b42f8; end: 10b4b4347;  */

void FUN_10b4b42f8(long param_1)

{
  undefined8 extraout_x8;
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  func_0x00010b4b4ab4();
  FUN_10b4b41a4(extraout_x8,*(undefined8 *)(param_1 + 0x48));
  plVar3 = (long *)(unaff_x20 + 0x40);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x00010b4b4a08();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b4b4aa8();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10b4b4348; end: 10b4b43ef;  */

void FUN_10b4b4348(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 auStack_24 [4];
  
  if ((bRam00000001137f66e0 & 1) == 0) {
    iVar1 = 0x137f66e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c2a878(auStack_24);
      puVar2 = auStack_24;
      __ZNSt3__113random_deviceclEv(puVar2);
      func_0x000107c2849c(0x1137f66e8,puVar2);
      __ZNSt3__113random_deviceD1Ev(auStack_24);
      ___cxa_guard_release(0x1137f66e0);
    }
  }
  func_0x000107c284a0(0x1137f66e8);
  return;
}



/* Entry: 10b4b43f0; end: 10b4b4417;  */

/* WARNING: Possible PIC construction at 0x00010b4b4404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4b4408) */

void FUN_10b4b43f0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[4] != 0) {
    func_0x00010b4b4aa8();
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b4b4418; end: 10b4b441b;  */

undefined8 * FUN_10b4b4418(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf0268;
  func_0x00010b4b4890(param_1 + 6);
  func_0x00010b4b4890(param_1 + 1);
  return param_1;
}



/* Entry: 10b4b441c; end: 10b4b4443;  */

void FUN_10b4b441c(void)

{
  func_0x00010b4b4854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b4444; end: 10b4b44cb;  */

void FUN_10b4b4444(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b4b4a78();
  lVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x28) * 0x28;
  FUN_10b4b4568(param_1 + 2,*param_1,param_1[1],lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b4b44cc; end: 10b4b453b;  */

long * FUN_10b4b44cc(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b4b4518();
  }
  lVar1 = param_4 + param_3 * 0x28;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x28;
  return param_1;
}



/* Entry: 10b4b453c; end: 10b4b4567;  */

void FUN_10b4b453c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x28) {
    FUN_10b4b463c(param_4,uVar1);
    param_4 = lStack_48 + 0x28;
  }
  uStack_58 = 1;
  FUN_10b4b460c(param_1,param_2,param_3);
  FUN_10b4b4670(&uStack_70);
  return;
}



/* Entry: 10b4b4568; end: 10b4b460b;  */

void FUN_10b4b4568(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x28) {
    FUN_10b4b463c(param_4,lVar1);
    param_4 = lStack_38 + 0x28;
  }
  uStack_48 = 1;
  FUN_10b4b460c(param_1,param_2,param_3);
  FUN_10b4b4670(&uStack_60);
  return;
}



/* Entry: 10b4b460c; end: 10b4b463b;  */

void FUN_10b4b460c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x28) {
    func_0x000107c27ae4();
  }
  return;
}



/* Entry: 10b4b463c; end: 10b4b466f;  */

void FUN_10b4b463c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar1;
  return;
}



/* Entry: 10b4b4670; end: 10b4b469f;  */

long FUN_10b4b4670(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b4b46a0(param_1);
  }
  return param_1;
}



/* Entry: 10b4b46a0; end: 10b4b46bf;  */

void FUN_10b4b46a0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27ae4();
  }
  return;
}



/* Entry: 10b4b46c0; end: 10b4b471b;  */

void FUN_10b4b46c0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x28;
    func_0x000107c27ae4();
  }
  return;
}



/* Entry: 10b4b471c; end: 10b4b4723;  */

void FUN_10b4b471c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4b4a78(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x28;
    func_0x000107c27ae4();
  }
  return;
}



/* Entry: 10b4b4724; end: 10b4b4757;  */

void FUN_10b4b4724(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4b4a78();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x28;
    func_0x000107c27ae4();
  }
  return;
}



/* Entry: 10b4b4758; end: 10b4b47a7;  */

long * FUN_10b4b4758(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plStack_38;
  
  if ((long *)0x666666666666666 < param_2) {
    func_0x00010b4b4430();
    plStack_38 = param_1;
    func_0x00010b4b47dc(&plStack_38);
    return param_1;
  }
  uVar1 = (param_1[2] - *param_1) / 0x28;
  plVar2 = (long *)(uVar1 * 2);
  if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
    plVar2 = param_2;
  }
  if (0x333333333333332 < uVar1) {
    plVar2 = (long *)0x666666666666666;
  }
  return plVar2;
}



/* Entry: 10b4b47a8; end: 10b4b4817;  */

undefined8 FUN_10b4b47a8(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010b4b47dc(&uStack_28);
  return param_1;
}



/* Entry: 10b4b4818; end: 10b4b481f;  */

void FUN_10b4b4818(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4b4a78(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27ae4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b4b4820; end: 10b4b493f;  */

void FUN_10b4b4820(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b4b4a78();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x28;
    func_0x000107c27ae4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b4b4940; end: 10b4b4957;  */

void FUN_10b4b4940(long *param_1,long param_2)

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



/* Entry: 10b4b4958; end: 10b4b499b;  */

long * FUN_10b4b4958(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c27ae4(lVar1 + 0x20);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 10b4b499c; end: 10b4b4ac7;  */

void FUN_10b4b499c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 *unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *unaff_x22;
  uVar2 = *unaff_x21;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar3 = *unaff_x20;
  param_1[1] = unaff_x20[1];
  *param_1 = uVar3;
  param_1[2] = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  param_1[3] = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 10b4b4ac8; end: 10b4b4b17;  */

void FUN_10b4b4ac8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  if (*(int *)(param_2 + 0x30) != 0) {
    return;
  }
  lVar2 = *(long *)(param_2 + 0x18);
  FUN_10b4b8d7c();
  plVar1 = (long *)(param_1 + 8);
  lStack_28 = param_2;
  FUN_10b4b4b18(plVar1,&lStack_28);
  *plVar1 = *plVar1 + lVar2;
  return;
}



/* Entry: 10b4b4b18; end: 10b4b4ea7;  */

long * FUN_10b4b4b18(long *param_1,ulong *param_2)

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
  long *plStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
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
          if (plVar11 == (long *)0x0) goto LAB_10b4b4bc4;
          uVar5 = plVar11[1];
          if (uVar5 != uVar12) break;
          if (plVar11[2] == uVar12) goto LAB_10b4b4e70;
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
LAB_10b4b4bc4:
  plVar1 = param_1 + 2;
  plVar11 = (long *)0x20;
  __Znwm();
  uStack_48 = 1;
  *plVar11 = 0;
  plVar11[1] = uVar12;
  plVar11[2] = uVar12;
  plVar11[3] = 0;
  plStack_50 = plVar1;
  if ((uVar13 != 0) && ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)uVar13))
  goto LAB_10b4b4df8;
  uVar4 = 1;
  if (2 < uVar13) {
    uVar4 = (ulong)((uVar13 & uVar13 - 1) != 0);
  }
  uVar4 = uVar4 | uVar13 << 1;
  uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (uVar4 <= uVar5) {
    uVar4 = uVar5;
  }
  plStack_58 = plVar11;
  if (uVar4 - 1 == 0) {
    uVar4 = 2;
  }
  else if ((uVar4 & uVar4 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar13 = param_1[1];
  }
  if (uVar13 < uVar4) {
LAB_10b4b4c6c:
    if (uVar4 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b4b4e94);
      (*pcVar2)();
    }
    lVar3 = uVar4 << 3;
    __Znwm(lVar3);
    FUN_10b4b520c(param_1,lVar3);
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
      if (uVar4 != 0) goto LAB_10b4b4c6c;
      FUN_10b4b520c(param_1,0);
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
LAB_10b4b4df8:
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
  plStack_58 = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_10b4b5224(&plStack_58);
LAB_10b4b4e70:
  return plVar11 + 3;
}



/* Entry: 10b4b4ea8; end: 10b4b4efb;  */

void FUN_10b4b4ea8(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  if (*(int *)*param_2 != 0) {
    return;
  }
  lVar2 = param_2[4];
  FUN_10b4b787c();
  plVar1 = (long *)(param_1 + 0x30);
  puStack_28 = param_2;
  FUN_10b4b4b18(plVar1,&puStack_28);
  *plVar1 = *plVar1 + lVar2;
  return;
}



/* Entry: 10b4b4efc; end: 10b4b4f83;  */

void FUN_10b4b4efc(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long extraout_x8;
  long unaff_x20;
  long lVar2;
  long *plVar3;
  undefined1 auStack_c8 [16];
  long lStack_b8;
  
  func_0x00010b4b5280();
  FUN_10b4b41a4();
  plVar3 = (long *)(unaff_x20 + 0x18);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x00010b4b52d0();
    func_0x00010b4b52a4();
    func_0x00010b4b52c8();
  }
  plVar3 = (long *)(unaff_x20 + 8);
  func_0x00010b4b51c0();
  func_0x00010b4b52e0();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_10b4b47a8();
    __Unwind_Resume();
    if ((ulong)plVar3[1] < (ulong)plVar3[2]) {
      func_0x00010b4b5250();
      lVar2 = extraout_x8 + 0x28;
      plVar3[1] = lVar2;
    }
    else {
      plVar1 = plVar3;
      FUN_10b4b4758(plVar3,(plVar3[1] - *plVar3) / 0x28 + 1);
      FUN_10b4b44cc(auStack_c8,plVar1,(plVar3[1] - *plVar3) / 0x28,plVar3 + 2);
      func_0x00010b4b5250(lStack_b8);
      lStack_b8 = lStack_b8 + 0x28;
      FUN_10b4b4444(plVar3,auStack_c8);
      lVar2 = plVar3[1];
      func_0x00010b4b46f0(auStack_c8);
    }
    plVar3[1] = lVar2;
    return;
  }
  return;
}



/* Entry: 10b4b4f84; end: 10b4b5063;  */

void FUN_10b4b4f84(long *param_1)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_10b4b5250();
    lVar2 = extraout_x8 + 0x28;
    param_1[1] = lVar2;
  }
  else {
    plVar1 = param_1;
    FUN_10b4b4758(param_1,(param_1[1] - *param_1) / 0x28 + 1);
    FUN_10b4b44cc(auStack_68,plVar1,(param_1[1] - *param_1) / 0x28,param_1 + 2);
    FUN_10b4b5250(lStack_58);
    lStack_58 = lStack_58 + 0x28;
    FUN_10b4b4444(param_1,auStack_68);
    lVar2 = param_1[1];
    func_0x00010b4b46f0(auStack_68);
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10b4b5064; end: 10b4b50eb;  */

/* WARNING: Possible PIC construction at 0x00010b4b50b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010b4b5100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4b50b4) */
/* WARNING: Removing unreachable block (ram,0x00010b4b50c4) */
/* WARNING: Removing unreachable block (ram,0x00010b4b50cc) */
/* WARNING: Removing unreachable block (ram,0x00010b4b50dc) */
/* WARNING: Removing unreachable block (ram,0x00010b4b50bc) */
/* WARNING: Removing unreachable block (ram,0x00010b4b52b8) */
/* WARNING: Removing unreachable block (ram,0x00010b4b5104) */

void FUN_10b4b5064(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  long unaff_x20;
  long *plVar3;
  
  func_0x00010b4b5280();
  FUN_10b4b41a4();
  plVar3 = (long *)(unaff_x20 + 0x40);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    func_0x00010b4b52d0();
    func_0x00010b4b52a4();
    func_0x00010b4b52c8();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b4b5300();
    unaff_x19[2] = 0;
    lVar2 = unaff_x19[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*unaff_x19 + lVar1 * 8) = 0;
    }
    unaff_x19[3] = 0;
  }
  return;
}



/* Entry: 10b4b50ec; end: 10b4b5113;  */

/* WARNING: Possible PIC construction at 0x00010b4b5100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b4b5104) */

void FUN_10b4b50ec(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[4] != 0) {
    func_0x00010b4b5300();
    param_1[2] = 0;
    lVar2 = param_1[1];
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b4b5114; end: 10b4b5117;  */

undefined8 * FUN_10b4b5114(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf02e0;
  func_0x00010b4b5168(param_1 + 6);
  func_0x00010b4b5168(param_1 + 1);
  return param_1;
}



/* Entry: 10b4b5118; end: 10b4b512b;  */

void FUN_10b4b5118(void)

{
  FUN_10b4b512c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b512c; end: 10b4b520b;  */

undefined8 * FUN_10b4b512c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf02e0;
  func_0x00010b4b5168(param_1 + 6);
  func_0x00010b4b5168(param_1 + 1);
  return param_1;
}



/* Entry: 10b4b520c; end: 10b4b5223;  */

void FUN_10b4b520c(long *param_1,long param_2)

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



/* Entry: 10b4b5224; end: 10b4b524f;  */

long * FUN_10b4b5224(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4b5250; end: 10b4b531f;  */

void FUN_10b4b5250(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 unaff_w20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  
  uVar1 = *unaff_x22;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = *unaff_x21;
  param_1[1] = unaff_x21[1];
  *param_1 = uVar2;
  param_1[2] = unaff_x21[2];
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  param_1[3] = uVar1;
  *(undefined4 *)(param_1 + 4) = unaff_w20;
  return;
}



/* Entry: 10b4b5320; end: 10b4b5763;  */

ulong FUN_10b4b5320(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x8;
  undefined8 uVar9;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  undefined8 extraout_x8_06;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long lVar11;
  int extraout_w10;
  long extraout_x10;
  long extraout_x10_00;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 auStack_88 [4];
  undefined8 **ppuStack_68;
  
  do {
    func_0x000107c39848();
  } while (extraout_w10 != 0);
  lVar12 = *(long *)(param_1 + 0x60);
  __ZNSt3__15mutex4lockEv(lVar12);
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  uVar14 = *(uint *)(lVar12 + 0x4c);
  uVar3 = *(uint *)(lVar12 + 0x50);
  uVar1 = uVar14 + uVar3 + ~*(uint *)(lVar12 + 0x48);
  uVar4 = 0;
  if (uVar3 != 0) {
    uVar4 = uVar1 / uVar3;
  }
  uVar1 = uVar1 - uVar4 * uVar3;
  puVar6 = (undefined8 *)(ulong)uVar1;
  if (uVar1 != 0) {
    ppuStack_68 = &puStack_90;
    FUN_10b4b7268();
    puVar16 = puVar6 + (long)param_2;
    puVar15 = (undefined8 *)((long)puVar6 - ((long)puStack_98 - (long)puStack_a0));
    param_2 = puStack_a0;
    _memcpy(puVar15);
    func_0x00010b4b74f0();
    puStack_a0 = puVar15;
    puStack_98 = puVar6;
    puStack_90 = puVar16;
    auStack_88[0] = extraout_x8;
    func_0x00010b4b7450();
    func_0x00010b4b7294();
    uVar14 = *(uint *)(lVar12 + 0x4c);
  }
  do {
    if (*(uint *)(lVar12 + 0x48) == uVar14) {
      __ZNSt3__15mutex6unlockEv(lVar12);
      puVar6 = puStack_98;
      uVar13 = (ulong)((long)puStack_98 - (long)puStack_a0) >> 3;
      for (puVar16 = puStack_a0; puVar16 != puVar6; puVar16 = puVar16 + 1) {
        FUN_10b4b8c44(*puVar16);
        FUN_10b4b8c88(*puVar16);
        puVar2 = *(undefined8 **)(param_1 + 0x78);
        for (puVar15 = *(undefined8 **)(param_1 + 0x70); uVar9 = *puVar16, puVar15 != puVar2;
            puVar15 = puVar15 + 1) {
          (**(code **)(*(long *)*puVar15 + 8))();
        }
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        *puVar16 = 0;
        param_2 = auStack_88;
        auStack_88[0] = uVar9;
        func_0x00010b4b7b28(uVar7);
        func_0x000107c301fc(auStack_88);
      }
      func_0x00010b4b6a50(&puStack_a0);
      lVar12 = *(long *)(param_1 + 0x68);
      __ZNSt3__15mutex4lockEv(lVar12);
      puStack_a0 = (undefined8 *)0x0;
      puStack_98 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      uVar14 = *(uint *)(lVar12 + 0x4c);
      uVar3 = *(uint *)(lVar12 + 0x50);
      uVar1 = uVar14 + uVar3 + ~*(uint *)(lVar12 + 0x48);
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar1 / uVar3;
      }
      uVar1 = uVar1 - uVar4 * uVar3;
      puVar6 = (undefined8 *)(ulong)uVar1;
      if (uVar1 != 0) {
        ppuStack_68 = &puStack_90;
        FUN_10b4b72e8();
        puVar16 = (undefined8 *)((long)puVar6 - ((long)puStack_98 - (long)puStack_a0));
        _memcpy(puVar16);
        func_0x00010b4b74f0();
        puStack_a0 = puVar16;
        puStack_98 = puVar6;
        puStack_90 = puVar6 + (long)param_2;
        auStack_88[0] = extraout_x8_03;
        func_0x00010b4b7450();
        func_0x00010b4b7314();
        uVar14 = *(uint *)(lVar12 + 0x4c);
      }
      do {
        if (*(uint *)(lVar12 + 0x48) == uVar14) {
          __ZNSt3__15mutex6unlockEv(lVar12);
          puVar6 = puStack_98;
          for (puVar16 = puStack_a0; puVar16 != puVar6; puVar16 = puVar16 + 1) {
            FUN_10b4b76d0(*puVar16);
            puVar2 = *(undefined8 **)(param_1 + 0x78);
            for (puVar15 = *(undefined8 **)(param_1 + 0x70); uVar9 = *puVar16, puVar15 != puVar2;
                puVar15 = puVar15 + 1) {
              (**(code **)(*(long *)*puVar15 + 0x10))();
            }
            uVar7 = *(undefined8 *)(param_1 + 0x88);
            *puVar16 = 0;
            auStack_88[0] = uVar9;
            FUN_10b4b7b88(uVar7,auStack_88);
            func_0x000107c30208(auStack_88);
            uVar13 = uVar13 + 1;
          }
          func_0x00010b4b6a8c(&puStack_a0);
          return uVar13;
        }
        lVar17 = *(long *)(lVar12 + 0x40);
        if (puStack_98 < puStack_90) {
          uVar9 = *(undefined8 *)(lVar17 + (ulong)uVar14 * 8);
          *(undefined8 *)(lVar17 + (ulong)uVar14 * 8) = 0;
          puVar16 = puStack_98 + 1;
          *puStack_98 = uVar9;
        }
        else {
          lVar18 = (long)puStack_98 - (long)puStack_a0;
          if ((lVar18 >> 3) + 1U >> 0x3d != 0) {
            FUN_10b4b72dc();
LAB_10b4b56e4:
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10b4b56e8);
            (*pcVar5)();
          }
          func_0x00010b4b7540();
          lVar8 = extraout_x10_00;
          if (0x7ffffffffffffff7 < extraout_x8_04) {
            lVar8 = 0x1fffffffffffffff;
          }
          if (lVar8 == 0) {
            lVar10 = 0;
            lVar11 = extraout_x9_01;
            ppuStack_68 = &puStack_90;
          }
          else {
            ppuStack_68 = &puStack_90;
            FUN_10b4b72e8();
            func_0x00010b4b7514();
            lVar10 = extraout_x8_05;
            lVar11 = extraout_x9_02;
          }
          puVar6 = (undefined8 *)(lVar8 + lVar18);
          uVar9 = *(undefined8 *)(lVar17 + (ulong)uVar14 * 8);
          *(undefined8 *)(lVar17 + (ulong)uVar14 * 8) = 0;
          puVar16 = puVar6 + 1;
          *puVar6 = uVar9;
          _memcpy(puVar6 + -lVar11);
          func_0x00010b4b74f0();
          puStack_a0 = puVar6 + -lVar11;
          puStack_98 = puVar16;
          puStack_90 = (undefined8 *)(lVar8 + lVar10 * 8);
          auStack_88[0] = extraout_x8_06;
          func_0x00010b4b7450();
          func_0x00010b4b7314();
          uVar14 = *(uint *)(lVar12 + 0x4c);
        }
        uVar1 = *(uint *)(lVar12 + 0x50);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = (uVar14 + 1) / uVar1;
        }
        uVar14 = (uVar14 + 1) - uVar3 * uVar1;
        *(uint *)(lVar12 + 0x4c) = uVar14;
        puStack_98 = puVar16;
      } while( true );
    }
    lVar17 = *(long *)(lVar12 + 0x40);
    if (puStack_98 < puStack_90) {
      uVar9 = *(undefined8 *)(lVar17 + (ulong)uVar14 * 8);
      *(undefined8 *)(lVar17 + (ulong)uVar14 * 8) = 0;
      puVar16 = puStack_98 + 1;
      *puStack_98 = uVar9;
    }
    else {
      lVar18 = (long)puStack_98 - (long)puStack_a0;
      if ((lVar18 >> 3) + 1U >> 0x3d != 0) {
        FUN_10b4b725c();
        goto LAB_10b4b56e4;
      }
      param_2 = puStack_a0;
      func_0x00010b4b7540();
      lVar8 = extraout_x10;
      if (0x7ffffffffffffff7 < extraout_x8_00) {
        lVar8 = 0x1fffffffffffffff;
      }
      if (lVar8 == 0) {
        lVar10 = 0;
        lVar11 = extraout_x9;
        ppuStack_68 = &puStack_90;
      }
      else {
        ppuStack_68 = &puStack_90;
        FUN_10b4b7268();
        func_0x00010b4b7514();
        lVar10 = extraout_x8_01;
        lVar11 = extraout_x9_00;
      }
      puVar6 = (undefined8 *)(lVar8 + lVar18);
      uVar9 = *(undefined8 *)(lVar17 + (ulong)uVar14 * 8);
      *(undefined8 *)(lVar17 + (ulong)uVar14 * 8) = 0;
      puVar16 = puVar6 + 1;
      *puVar6 = uVar9;
      _memcpy(puVar6 + -lVar11);
      func_0x00010b4b74f0();
      puStack_a0 = puVar6 + -lVar11;
      puStack_98 = puVar16;
      puStack_90 = (undefined8 *)(lVar8 + lVar10 * 8);
      auStack_88[0] = extraout_x8_02;
      func_0x00010b4b7450();
      func_0x00010b4b7294();
      uVar14 = *(uint *)(lVar12 + 0x4c);
    }
    uVar1 = *(uint *)(lVar12 + 0x50);
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = (uVar14 + 1) / uVar1;
    }
    uVar14 = (uVar14 + 1) - uVar3 * uVar1;
    *(uint *)(lVar12 + 0x4c) = uVar14;
    puStack_98 = puVar16;
  } while( true );
}



/* Entry: 10b4b5764; end: 10b4b6807;  */

void FUN_10b4b5764(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  code *pcVar11;
  undefined1 uVar12;
  int iVar13;
  ulong uVar14;
  undefined ***pppuVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 **ppuVar19;
  undefined8 ***pppuVar20;
  undefined **ppuVar21;
  undefined8 *puVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 **ppuVar25;
  undefined4 extraout_w8;
  long lVar26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined *extraout_x10;
  undefined *extraout_x10_00;
  bool bVar30;
  long *plVar31;
  undefined8 *puVar32;
  undefined **ppuVar33;
  ulong *puVar34;
  undefined8 *puVar35;
  long lVar36;
  undefined *puVar37;
  undefined8 *puVar38;
  long lVar39;
  long lVar40;
  long lStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  long **pplStack_278;
  undefined1 uStack_270;
  long *aplStack_268 [2];
  undefined1 auStack_258 [8];
  ulong uStack_250;
  uint uStack_248;
  undefined *puStack_240;
  undefined4 uStack_238;
  undefined *puStack_228;
  undefined4 uStack_220;
  undefined *puStack_210;
  undefined4 uStack_208;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  int iStack_1bc;
  ulong uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  char cStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  long lStack_168;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *apuStack_148 [7];
  undefined8 *puStack_110;
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  char acStack_a8 [8];
  long lStack_a0;
  
  plVar23 = param_2;
  func_0x000107c39868();
  plVar31 = plVar23 + 0x12;
  (**(code **)(*plVar23 + 0x18))();
  func_0x000107c301a8();
  do {
    lVar7 = *plVar31;
    cVar6 = '\x01';
    bVar30 = (bool)ExclusiveMonitorPass(plVar31,0x10);
    if (bVar30) {
      *(undefined4 *)plVar31 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  puVar1 = (undefined4 *)((long)param_2 + 0x94);
  do {
    uVar3 = *puVar1;
    cVar6 = '\x01';
    bVar30 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar30) {
      *puVar1 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  lVar26 = param_2[0x13];
  param_2[0x13] = (long)plVar23;
  func_0x00010b4bcaa4(auStack_258,0);
  iStack_1bc = (int)param_2 + 0xe0;
  func_0x00010b4bb7d4();
  uStack_248 = uStack_248 | 1;
  if (uStack_1d8 == 0) {
    uVar14 = uStack_250;
    if ((uStack_250 & 1) != 0) {
      uVar14 = *(ulong *)(uStack_250 & 0xfffffffffffffffe);
    }
    func_0x00010b4b6ac8();
    uStack_1d8 = uVar14;
  }
  FUN_10b4bb7fc(param_2 + 0x14);
  uStack_1c0 = 1;
  func_0x00010b4b7508();
  lVar27 = extraout_x8;
  if (((ulong)param_4 & 1) != 0) {
    func_0x00010b4b74fc();
    lVar27 = extraout_x8_00;
  }
  func_0x000107c30248(lVar27 + 0x60,param_3);
  func_0x00010b4b7508();
  lVar27 = extraout_x8_01;
  if (((ulong)param_4 & 1) != 0) {
    func_0x00010b4b74fc();
    lVar27 = extraout_x8_02;
  }
  func_0x000107c30248(lVar27 + 0x68,param_3 + 0x18);
  func_0x000107c30404(aplStack_268);
  pppuVar15 = (undefined ***)0x0;
  if (aplStack_268[0] != (long *)0x0) {
    func_0x00010b4b74c4();
    func_0x000107c27b7c(&ppuStack_c0,&puStack_158);
    func_0x000107c279c4(&puStack_158);
    if (acStack_a8[0] == '\x01') {
      func_0x000107c27994(&puStack_158,&ppuStack_c0);
      param_4 = puStack_150;
      func_0x000107c28494(&puStack_1a8,puStack_158);
      func_0x00010b4b7508();
      lVar27 = extraout_x8_03;
      if (((ulong)param_4 & 1) != 0) {
        func_0x00010b4b74fc();
        lVar27 = extraout_x8_04;
      }
      func_0x000107c30248(lVar27 + 0x78,&puStack_1a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_1a8);
      func_0x000107c27914(&puStack_158);
    }
    pppuVar15 = &ppuStack_c0;
    func_0x000107c279c4();
  }
  uStack_280 = 0;
  pplStack_278 = (long **)0x0;
  uStack_270 = 0;
  __ZNSt3__16chrono12steady_clock3nowEv();
  puVar32 = (undefined8 *)0x0;
  uStack_270 = 1;
  pplStack_278 = (long **)pppuVar15;
  if ((*(byte *)(param_2 + 0x1d) & 1) == 0) {
    if (aplStack_268[0] != (long *)0x0) {
      func_0x000107c278b8(&puStack_110,&UNK_10f773b23);
      puStack_d8 = (undefined *)0x0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      param_4 = (undefined8 *)0x0;
      func_0x000107c30400(&ppuStack_c0);
      func_0x000107c27914(&puStack_d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_110);
      plVar23 = aplStack_268[0];
      (**(code **)(*aplStack_268[0] + 0x38))(aplStack_268[0],&ppuStack_c0);
      if (((uint)plVar23 >> 8 & 1) == 0) {
        puStack_f0 = (undefined8 *)0x0;
        puStack_e8 = (undefined8 *)0x0;
        puStack_e0 = (undefined8 *)0x0;
      }
      else {
        puStack_f0 = (undefined8 *)0x0;
        puStack_e8 = (undefined8 *)0x0;
        puStack_e0 = (undefined8 *)0x0;
        if (((ulong)plVar23 & 1) != 0) {
          func_0x000107c278b8(&puStack_170,"");
          uStack_188 = 0;
          uStack_180 = 0;
          uStack_178 = 0;
          param_4 = (undefined8 *)0x1;
          func_0x000107c30400(&puStack_158,&puStack_170,0x45,1,0xd,&uStack_188);
          func_0x000107c27914(&uStack_188);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_170);
          (**(code **)(*aplStack_268[0] + 0x30))(&puStack_1a8,aplStack_268[0],&puStack_158);
          func_0x000107c30198(&uStack_1b0);
          puVar32 = puStack_e8;
          puVar38 = puStack_e0;
          if ((cStack_190 == '\x01') && (puStack_1a8 != puStack_1a0)) {
            param_4 = (undefined8 *)(ulong)(uint)((int)puStack_1a0 - (int)puStack_1a8);
            uVar14 = uStack_1b0;
            func_0x000107c3034c();
            puVar32 = puStack_e8;
            puVar38 = puStack_e0;
            if ((uVar14 & 1) != 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (param_2 + 0x28,*(ulong *)(uStack_1b0 + 0x28) & 0xfffffffffffffffc);
              puVar38 = (undefined8 *)0x0;
              puVar32 = (undefined8 *)0x0;
              uVar14 = *(ulong *)(uStack_1b0 + 0x10);
              puVar34 = (ulong *)(uStack_1b0 + 0x10);
              if ((uVar14 & 1) != 0) {
                puVar34 = (ulong *)(uVar14 + 7);
              }
              puVar2 = puVar34 + *(int *)(uStack_1b0 + 0x18);
              for (; puVar34 != puVar2; puVar34 = puVar34 + 1) {
                ppuVar21 = &PTR_PTR_113386140;
                if (*(undefined ***)(*puVar34 + 0x48) != (undefined **)0x0) {
                  ppuVar21 = *(undefined ***)(*puVar34 + 0x48);
                }
                if (*(int *)((long)ppuVar21 + 0x1c) == 5) {
                  puVar16 = (ulong *)((ulong)ppuVar21[2] & 0xfffffffffffffffc);
                  if ((char)*(byte *)((long)puVar16 + 0x17) < '\0') {
                    if (1 < puVar16[1]) {
                      puVar16 = (ulong *)*puVar16;
                      goto LAB_10b4b5aa8;
                    }
                  }
                  else if (1 < *(byte *)((long)puVar16 + 0x17)) {
LAB_10b4b5aa8:
                    param_4 = (undefined8 *)param_2[0x11];
                    FUN_10b4bbbd0(&lStack_f8,puVar16);
                    lVar27 = lStack_f8;
                    if (lStack_f8 != 0) {
                      if (puVar32 < puVar38) {
                        FUN_10b4b6bc0(puVar32,lStack_f8);
                        puVar32 = puVar32 + 0xc;
                      }
                      else {
                        lVar39 = (long)puVar32 - (long)puStack_f0;
                        uVar14 = lVar39 / 0x60 + 1;
                        if (0x2aaaaaaaaaaaaaa < uVar14) {
                          puStack_e8 = puVar32;
                          puStack_e0 = puVar38;
                          FUN_10b4b6c24();
                          goto LAB_10b4b65bc;
                        }
                        uVar5 = ((long)puVar38 - (long)puStack_f0) / 0x60;
                        uVar29 = uVar5 * 2;
                        if (uVar29 < uVar14 || uVar29 - uVar14 == 0) {
                          uVar29 = uVar14;
                        }
                        if (0x155555555555554 < uVar5) {
                          uVar29 = 0x2aaaaaaaaaaaaaa;
                        }
                        if (uVar29 == 0) {
                          lVar28 = 0;
                        }
                        else {
                          if (0x2aaaaaaaaaaaaaa < uVar29) {
                            puStack_e8 = puVar32;
                            puStack_e0 = puVar38;
                            func_0x000104bd35f4();
                            goto LAB_10b4b65bc;
                          }
                          lVar28 = uVar29 * 0x60;
                          __Znwm();
                        }
                        lVar39 = lVar28 + lVar39;
                        FUN_10b4b6bc0(lVar39,lVar27);
                        puVar24 = puStack_f0;
                        puVar22 = (undefined8 *)
                                  (lVar39 + (((long)puVar32 - (long)puStack_f0) / -0x60) * 0x60);
                        puVar17 = puVar22;
                        for (puVar38 = puStack_f0; puVar38 != puVar32; puVar38 = puVar38 + 0xc) {
                          FUN_10b4b6bc0(puVar17,puVar38);
                          puVar17 = puVar17 + 0xc;
                        }
                        for (; puVar24 != puVar32; puVar24 = puVar24 + 0xc) {
                          func_0x00010b4b6c30(puVar24);
                        }
                        puVar32 = (undefined8 *)(lVar39 + 0x60);
                        puVar38 = (undefined8 *)(lVar28 + uVar29 * 0x60);
                        bVar30 = puStack_f0 != (undefined8 *)0x0;
                        puStack_f0 = puVar22;
                        if (bVar30) {
                          __ZdlPv();
                        }
                      }
                    }
                    func_0x00010b4b735c(&lStack_f8);
                  }
                }
              }
            }
          }
          puStack_e0 = puVar38;
          puStack_e8 = puVar32;
          if ((*(byte *)(param_2 + 0x1d) & 1) == 0) {
            *(undefined1 *)(param_2 + 0x1d) = 1;
            uVar18 = 0x28;
            __Znwm(0x28);
            FUN_10b4ba090();
            lStack_f8 = 0;
            func_0x000107c301dc(param_2 + 0x1e,uVar18);
            func_0x000107c301d8(&lStack_f8);
            uVar18 = 0x78;
            __Znwm(0x78);
            FUN_10b4ba280();
            lStack_f8 = 0;
            func_0x000107c301e8(param_2 + 0x1f,uVar18);
            func_0x000107c301e4(&lStack_f8);
          }
          func_0x000107c3019c(&uStack_1b0);
          func_0x000107c279c4(&puStack_1a8);
          func_0x000107c27f6c(&puStack_158);
        }
      }
      func_0x00010b4b6c64(&puStack_f0);
      func_0x000107c27f6c(&ppuStack_c0);
    }
    puVar32 = &uStack_280;
    func_0x00010563be04();
  }
  func_0x00010b4b7508();
  lVar27 = extraout_x8_05;
  if (((ulong)param_4 & 1) != 0) {
    func_0x00010b4b74fc();
    lVar27 = extraout_x8_06;
  }
  func_0x000107c30248(lVar27 + 0x70,param_2 + 0x28);
  lStack_2b0 = 0;
  puVar37 = (undefined *)0x0;
  lVar39 = param_2[0xf];
  for (lVar27 = param_2[0xe]; lVar27 != lVar39; lVar27 = lVar27 + 8) {
    func_0x00010b4b74c4();
    puVar17 = puStack_150;
    for (puVar38 = puStack_158; puVar38 != puVar17; puVar38 = puVar38 + 5) {
      ppuVar19 = (undefined8 **)param_2[0x11];
      func_0x00010b4b7a40(ppuVar19,puVar38[3]);
      if (ppuVar19 == (undefined8 **)0x0) {
        lStack_2b0 = lStack_2b0 + 1;
      }
      else {
        if (*(long *)(param_2[0x1e] + 0x18) != 0) {
          FUN_10b4ba184(&ppuStack_c0,param_2[0x1e],ppuVar19);
          lVar28 = param_2[0x26];
          uVar10 = (uint)ppuStack_c0;
          if ((int)lVar28 < (int)(uint)ppuStack_c0) {
            if (lStack_a0 != 0) {
              puStack_1a0 = (undefined8 *)0x0;
              uStack_198 = 0;
              puStack_1a8 = (undefined8 *)0x0;
              func_0x000109f60c48(&puStack_1a8,
                                  ((long)ppuVar19[1] - (long)*ppuVar19) / 0x30 - lStack_a0);
              puVar22 = ppuVar19[1];
              for (puVar24 = *ppuVar19; puVar9 = puStack_1a0, puVar35 = puStack_1a8,
                  puVar24 != puVar22; puVar24 = puVar24 + 6) {
                pppuVar20 = &ppuStack_b8;
                func_0x00010596ff94(pppuVar20,puVar24);
                if (pppuVar20 == (undefined8 ***)0x0) {
                  func_0x00010b369384(&puStack_1a8,puVar24);
                }
                else {
                  puVar37 = puVar37 + 1;
                }
              }
              if (ppuVar19 != &puStack_1a8) {
                uVar14 = (long)puStack_1a0 - (long)puStack_1a8;
                lVar36 = (long)uVar14 / 0x30;
                if ((ulong)((long)ppuVar19[2] - (long)*ppuVar19) < uVar14) {
                  func_0x000109f60dc0(ppuVar19);
                  ppuVar25 = ppuVar19;
                  func_0x000107c280e0(ppuVar19,lVar36);
                  func_0x000107c280cc(ppuVar19,ppuVar25);
                }
                else {
                  uVar29 = (long)ppuVar19[1] - (long)*ppuVar19;
                  if (uVar14 <= uVar29) {
                    puVar24 = puStack_1a8;
                    FUN_10b4b6b1c(puStack_1a8);
                    func_0x000107c280d8(ppuVar19,puVar24);
                    goto LAB_10b4b5e84;
                  }
                  puVar35 = (undefined8 *)((long)puStack_1a8 + uVar29);
                  FUN_10b4b6b1c(puStack_1a8,puVar35);
                  lVar36 = ((long)ppuVar19[1] - (long)*ppuVar19) / -0x30 + lVar36;
                }
                func_0x000107c280f0(ppuVar19,puVar35,puVar9,lVar36);
              }
LAB_10b4b5e84:
              func_0x000107c280f8(&puStack_1a8);
            }
            uVar14 = (ulong)(uint)ppuStack_c0;
            if ((*(int *)(puVar38 + 4) == 0) && ((int)(uint)ppuStack_c0 < 10000)) {
              func_0x00010b4bbf70();
              *(long *)*puVar38 = *(long *)*puVar38 * (uVar14 & 0xffffffff);
            }
          }
          else {
            *(int *)(param_2 + 0x27) = (int)param_2[0x27] + 1;
          }
          func_0x00010b4b7488();
          if ((int)uVar10 <= (int)lVar28) goto LAB_10b4b5f38;
        }
        func_0x00010b4b7460(ppuVar19[4]);
        ppuVar21 = (undefined **)param_2[0x11];
        ppuVar25 = (undefined8 **)(ulong)*(uint *)(ppuVar19 + 5);
        func_0x00010b4b7c18();
        puVar22 = (undefined8 *)param_2[0x11];
        puVar24 = (undefined8 *)(ulong)*(uint *)(ppuVar19 + 5);
        ppuStack_c0 = ppuVar21;
        ppuStack_b8 = ppuVar25;
        func_0x000107c3022c(puVar22,puVar24,*(undefined4 *)((long)ppuVar19 + 0x2c));
        iVar13 = *(int *)(puVar38 + 4);
        ppuVar21 = &puStack_228;
        puStack_1a8 = puVar22;
        puStack_1a0 = puVar24;
        if (((iVar13 == 0) || (ppuVar21 = &puStack_240, iVar13 == 1)) ||
           (ppuVar21 = &puStack_210, iVar13 == 2)) {
          FUN_10b4b6b78(ppuVar21);
          FUN_10b4bb88c(&ppuStack_c0,&puStack_1a8,ppuVar19,puVar38,ppuVar21);
        }
      }
LAB_10b4b5f38:
    }
    func_0x00010b4b74bc();
    func_0x00010b4b74c4();
    puVar17 = puStack_150;
    for (puVar38 = puStack_158; puVar38 != puVar17; puVar38 = puVar38 + 5) {
      plVar23 = (long *)param_2[0x11];
      FUN_10b4b7aa0(plVar23,puVar38[3]);
      if (plVar23 == (long *)0x0) {
        lStack_2b0 = lStack_2b0 + 1;
      }
      else {
        lStack_168 = *(long *)(*plVar23 + 0x40);
        puStack_170 = *(undefined8 **)(*plVar23 + 0x38);
        func_0x000107c2795c(&puStack_1a8,plVar23 + 1);
        puStack_110 = (undefined8 *)0x0;
        lStack_108 = 0;
        uStack_100 = 0;
        ppuVar33 = (undefined **)param_2[0x1f];
        ppuVar21 = ppuVar33;
        FUN_10b4ba260();
        if (((ulong)ppuVar21 & 1) == 0) {
          ppuVar21 = ppuVar33;
          FUN_10b4ba9f4(&ppuStack_c0,ppuVar33,plVar23);
          iVar13 = *(int *)(*plVar23 + 0x48);
          if ((int)(uint)ppuStack_c0 < iVar13) {
            iVar4 = 0;
            if (iVar13 != 0) {
              iVar4 = 10000 / iVar13;
            }
            iVar4 = iVar4 * (uint)ppuStack_c0;
            if ((int)param_2[0x26] < iVar4) {
              if (iVar4 < 10000 && *(int *)(puVar38 + 4) == 0) {
                if (iVar4 == 0) {
                  lVar28 = 0;
                }
                else {
                  iVar13 = 0;
                  if (iVar4 != 0) {
                    iVar13 = 10000 / iVar4;
                  }
                  lVar28 = (long)iVar13;
                }
                *(long *)*puVar38 = lVar28 * *(long *)*puVar38;
              }
              goto LAB_10b4b604c;
            }
            bVar30 = false;
            *(int *)((long)param_2 + 0x13c) = *(int *)((long)param_2 + 0x13c) + 1;
          }
          else {
LAB_10b4b604c:
            if (lStack_a0 == 0) {
              bVar30 = true;
            }
            else {
              lVar40 = 0;
              lVar36 = 0;
              puStack_d8 = (undefined *)0x0;
              uStack_d0 = 0;
              uStack_c8 = 0;
              for (lVar28 = 0; lVar28 != *(long *)(*plVar23 + 0x40); lVar28 = lVar28 + 1) {
                func_0x000107c27958(&puStack_f0,(undefined *)((long)puStack_170 + lVar36));
                func_0x00010596ff94(&ppuStack_b8,&puStack_f0);
                func_0x00010b4b74cc();
                if (ppuVar33 == (undefined **)0x0) {
                  func_0x000107721028(&puStack_110,(undefined *)((long)puStack_170 + lVar36));
                  func_0x000107c281e8(&puStack_d8,plVar23[1] + lVar40);
                }
                else {
                  puVar37 = puVar37 + 1;
                }
                lVar36 = lVar36 + 0x10;
                lVar40 = lVar40 + 0x18;
              }
              lStack_168 = lStack_108 - (long)puStack_110 >> 4;
              puStack_170 = puStack_110;
              func_0x000107c27d2c(&puStack_1a8,&puStack_d8);
              ppuVar21 = &puStack_d8;
              func_0x000107c278a8(ppuVar21);
              bVar30 = true;
            }
          }
          func_0x00010b4b7488();
          if (bVar30) goto LAB_10b4b6114;
        }
        else {
LAB_10b4b6114:
          func_0x00010b4b7460(plVar23[5]);
          lVar28 = 8;
          if (*(long *)(*plVar23 + 0x20) != 0) {
            lVar28 = 0x18;
          }
          plVar31 = (long *)(*plVar23 + lVar28);
          ppuStack_b8 = (undefined8 **)plVar31[1];
          ppuStack_c0 = (undefined **)*plVar31;
          iVar13 = *(int *)(puVar38 + 4);
          if (iVar13 == 0) {
            lVar28 = *plVar23;
            func_0x00010b4b7414();
          }
          else if (iVar13 == 2) {
            lVar28 = *plVar23;
            ppuVar21 = &puStack_210;
            FUN_10b4b6b78(&puStack_210);
          }
          else {
            if (iVar13 != 1) goto LAB_10b4b6194;
            lVar28 = *plVar23;
            func_0x00010b4b74a8();
          }
          FUN_10b4bb964(&ppuStack_c0,lVar28 + 0x28,&puStack_170,&puStack_1a8,puVar38,ppuVar21);
        }
LAB_10b4b6194:
        func_0x000107264ef0(&puStack_110);
        func_0x000107c278a8(&puStack_1a8);
      }
    }
    func_0x00010b4b74bc();
  }
  FUN_10b4b7b00(param_2[0x11]);
  if (lStack_2b0 != 0) {
    puStack_1a8 = (undefined8 *)&UNK_10f773a64;
    puStack_1a0 = (undefined8 *)0xb;
    func_0x00010b4b7498(&UNK_10f773a70);
    puStack_d8 = extraout_x10;
    func_0x00010b4b73c8();
    func_0x00010b4b7414();
    func_0x00010b4b73b0();
    func_0x00010b4b7404();
    func_0x00010b4b740c();
  }
  if (*(int *)((long)param_2 + 0x134) != 0) {
    puStack_1a8 = (undefined8 *)&UNK_10f773a64;
    puStack_1a0 = (undefined8 *)0xb;
    func_0x00010b4b741c();
    func_0x00010b4b73c8();
    func_0x00010b4b7414();
    func_0x00010b4b73b0();
    func_0x00010b4b7404();
    func_0x00010b4b740c();
  }
  if ((int)param_2[0x27] != 0) {
    puStack_1a8 = (undefined8 *)&UNK_10f773a64;
    puStack_1a0 = (undefined8 *)0xb;
    func_0x00010b4b741c();
    func_0x00010b4b73c8();
    func_0x00010b4b7414();
    func_0x00010b4b73b0();
    func_0x00010b4b7404();
    func_0x00010b4b740c();
  }
  if (*(int *)((long)param_2 + 0x13c) != 0) {
    puStack_1a8 = (undefined8 *)&UNK_10f773a64;
    puStack_1a0 = (undefined8 *)0xb;
    func_0x00010b4b741c();
    func_0x00010b4b73c8();
    func_0x00010b4b7414();
    func_0x00010b4b73b0();
    func_0x00010b4b7404();
    func_0x00010b4b740c();
  }
  if (puVar37 != (undefined *)0x0) {
    puStack_1a8 = (undefined8 *)&UNK_10f773a64;
    puStack_1a0 = (undefined8 *)0xb;
    func_0x00010b4b7498(&UNK_10f773ad1);
    puStack_d8 = puVar37;
    func_0x00010b4b73c8();
    func_0x00010b4b7414();
    func_0x00010b4b73b0();
    func_0x00010b4b7404();
    func_0x00010b4b740c();
  }
  if (puVar32 != (undefined8 *)0x0) {
    puStack_1a8 = (undefined8 *)&UNK_10f773a64;
    puStack_1a0 = (undefined8 *)0xb;
    func_0x00010b4b7498(&UNK_10f773ade);
    puStack_d8 = extraout_x10_00;
    func_0x00010b4b73c8();
    func_0x00010b4b74a8();
    func_0x00010b4b73b0();
    func_0x00010b4b7404();
    func_0x00010b4b740c();
  }
  puVar32 = &uStack_280;
  func_0x00010563be04();
  puStack_110 = (undefined8 *)&UNK_10f773a64;
  lStack_108 = 0xb;
  puStack_d8 = &UNK_10f773afa;
  uStack_d0 = 0x17;
  func_0x000107c278b8(&ppuStack_c0,&UNK_10f773b12);
  func_0x000107c278b8(acStack_a8,"true");
  func_0x000107c280c8(&puStack_158,&ppuStack_c0,1);
  ppuVar19 = &puStack_1a8;
  puStack_f0 = puVar32;
  func_0x0001086d0774(ppuVar19,&puStack_f0,1);
  func_0x00010b4b74a8();
  FUN_10b4bb88c(&puStack_110,&puStack_d8,&puStack_158,&puStack_1a8,ppuVar19);
  func_0x000107c27ae4(&puStack_1a8);
  func_0x000107c280f8(&puStack_158);
  func_0x000107c27bbc(&ppuStack_c0);
  uStack_1d0 = 0xffffffffffffffff;
  uStack_1c8 = 0;
  uStack_1c0 = 2;
  puStack_158 = (undefined8 *)0x0;
  puStack_150 = (undefined8 *)0x0;
  apuStack_148[0] = (undefined *)0x0;
  __ZNSt3__15mutex4lockEv(param_2 + 1);
  if (&puStack_158 != (undefined8 **)(param_2 + 9)) {
    puVar32 = (undefined8 *)param_2[9];
    puVar38 = (undefined8 *)param_2[10];
    puVar17 = (undefined8 *)((long)puVar38 - (long)puVar32);
    if (puVar17 == (undefined8 *)0x0) {
      FUN_10b4b68b0(&puStack_158,0);
    }
    else {
      if (0x666666666666666 < (ulong)((long)puVar17 / 0x28)) goto LAB_10b4b65a0;
      puVar24 = puVar17;
      __Znwm();
      ppuStack_c0 = apuStack_148;
      apuStack_148[0] = (undefined *)((long)puVar24 + (long)puVar17);
      ppuStack_b8 = &puStack_110;
      ppuStack_b0 = &puStack_1a8;
      acStack_a8[0] = '\0';
      puStack_158 = puVar24;
      puStack_150 = puVar24;
      puStack_110 = puVar24;
      for (; puStack_1a8 = puVar24, puVar32 != puVar38; puVar32 = puVar32 + 5) {
        *puVar24 = *puVar32;
        func_0x00010b4b6ca0(puVar24 + 1,puVar32 + 1);
        puVar24 = puStack_1a8 + 5;
      }
      acStack_a8[0] = '\x01';
      FUN_10b4b6d00(&ppuStack_c0);
      puStack_150 = puVar24;
    }
  }
  __ZNSt3__15mutex6unlockEv(param_2 + 1);
  puVar38 = puStack_150;
  for (puVar32 = puStack_158; uVar12 = puVar32 == puVar38, !(bool)uVar12; puVar32 = puVar32 + 5) {
    plVar23 = (long *)puVar32[4];
    if (plVar23 == (long *)0x0) {
      func_0x000104bfeb48();
      goto LAB_10b4b65bc;
    }
    (**(code **)(*plVar23 + 0x30))(plVar23,auStack_258);
  }
  FUN_10b4b6874(&puStack_158);
  (*(code *)param_2[0x20])(param_2 + 0x20);
  func_0x000107c39850();
  *(undefined4 *)(param_2 + 0x26) = extraout_w8;
  *(undefined8 *)((long)param_2 + 0x134) = 0;
  *(undefined4 *)((long)param_2 + 0x13c) = 0;
  iVar13 = (int)auStack_258;
  FUN_10b4bbaa8(&uStack_2a0);
  uVar8 = uStack_1c8;
  uVar18 = uStack_1d0;
  func_0x000107c301a8();
  param_1[1] = uStack_298;
  *param_1 = uStack_2a0;
  param_1[2] = uStack_290;
  uStack_298 = 0;
  uStack_290 = 0;
  uStack_2a0 = 0;
  *(int *)(param_1 + 3) = (int)lVar7;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uStack_220;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_238;
  *(undefined4 *)(param_1 + 5) = uStack_208;
  *(int *)((long)param_1 + 0x2c) = (int)uVar8 - (int)uVar18;
  *(int *)(param_1 + 6) = iVar13 - (int)lVar26;
  func_0x000107c27914(&uStack_2a0);
  func_0x000107c27d08(aplStack_268);
  FUN_10b4bcb04(auStack_258);
  func_0x000107c3984c();
  if ((bool)uVar12) {
    return;
  }
  ___stack_chk_fail();
LAB_10b4b65a0:
  FUN_10b4b6d8c();
LAB_10b4b65bc:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10b4b65c0);
  (*pcVar11)();
}



/* Entry: 10b4b6808; end: 10b4b680b;  */

undefined8 * FUN_10b4b6808(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf03b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  func_0x000107c301e4(param_1 + 0x1f);
  func_0x000107c301d8(param_1 + 0x1e);
  func_0x000107c301b0(param_1 + 0x14);
  func_0x000107c301cc(param_1 + 0x11);
  FUN_10b4b682c(param_1 + 0xe);
  func_0x000107c301c8(param_1 + 0xd);
  func_0x000107c301c4(param_1 + 0xc);
  FUN_10b4b6874(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b4b680c; end: 10b4b682b;  */

void FUN_10b4b680c(void)

{
  FUN_10b4b6d98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b682c; end: 10b4b6873;  */

void FUN_10b4b682c(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long *plVar2;
  
  func_0x000107c39854();
  if (unaff_x20 != (long *)0x0) {
    plVar2 = *(long **)(unaff_x19 + 8);
    while (plVar2 != unaff_x20) {
      plVar2 = plVar2 + -1;
      lVar1 = *plVar2;
      *plVar2 = 0;
      if (lVar1 != 0) {
        func_0x00010b4b73e4();
      }
    }
    func_0x00010b4b73f0();
  }
  return;
}



/* Entry: 10b4b6874; end: 10b4b68a7;  */

long * FUN_10b4b6874(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10b4b68a8(param_1);
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10b4b68a8; end: 10b4b68af;  */

void FUN_10b4b68a8(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c39860(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    func_0x00010b4b74e4();
    lVar1 = unaff_x21;
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b4b68b0; end: 10b4b68e7;  */

void FUN_10b4b68b0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x000107c39860();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    func_0x00010b4b74e4();
    lVar1 = unaff_x21;
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10b4b68e8; end: 10b4b692f;  */

void FUN_10b4b68e8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    plVar1 = param_1 + 2;
    func_0x000107f4e338();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 3);
  }
  else {
    func_0x000107f4e324();
    plVar1 = param_1 + 2;
    FUN_10b4b6964();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10b4b6930; end: 10b4b6963;  */

void FUN_10b4b6930(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_10b4b6964();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10b4b6964; end: 10b4b6977;  */

void FUN_10b4b6964(void)

{
  FUN_10b4b6978();
  return;
}



/* Entry: 10b4b6978; end: 10b4b6a0b;  */

long FUN_10b4b6978(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_48 = 0;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (; lStack_38 = param_4, param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000107c2795c(param_4,param_2);
    param_4 = lStack_38 + 0x18;
  }
  uStack_48 = 1;
  FUN_10b4b6a0c(&uStack_60);
  return param_4;
}



/* Entry: 10b4b6a0c; end: 10b4b6b1b;  */

long FUN_10b4b6a0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x18;
      func_0x000107c278a8();
    }
  }
  return param_1;
}



/* Entry: 10b4b6b1c; end: 10b4b6b77;  */

long FUN_10b4b6b1c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1,param_1);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar1 + 0x18,param_1 + 0x18);
    param_3 = param_3 + 0x30;
    lVar1 = lVar1 + 0x30;
  }
  return param_3;
}



/* Entry: 10b4b6b78; end: 10b4b6b83;  */

void FUN_10b4b6b78(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_10b4b6b84);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_10b4b6b84);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 10b4b6b84; end: 10b4b6bbf;  */

undefined8 * FUN_10b4b6b84(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x60);
  }
  *puVar1 = &PTR_FUN_110cf04e8;
  puVar1[1] = param_1;
  FUN_10b4bc5b4();
  return puVar1;
}



/* Entry: 10b4b6bc0; end: 10b4b6c23;  */

void FUN_10b4b6bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar1 = param_2[5];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[5] = uVar1;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[5] = 0;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  return;
}



/* Entry: 10b4b6c24; end: 10b4b6c2f;  */

long FUN_10b4b6c24(long param_1)

{
  func_0x00010b4b73d8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10b4b6c30; end: 10b4b6cff;  */

long FUN_10b4b6c30(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x40);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  return param_1;
}



/* Entry: 10b4b6d00; end: 10b4b6d47;  */

long FUN_10b4b6d00(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    lVar1 = **(long **)(param_1 + 0x10);
    while (lVar1 != lVar2) {
      func_0x00010b4b74e4();
      lVar1 = unaff_x21;
    }
  }
  return param_1;
}



/* Entry: 10b4b6d48; end: 10b4b6d8b;  */

long * FUN_10b4b6d48(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10b4b6d8c; end: 10b4b6d97;  */

undefined8 * FUN_10b4b6d8c(undefined8 *param_1)

{
  func_0x00010b4b73d8();
  *param_1 = &PTR_FUN_110cf03b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  func_0x000107c301e4(param_1 + 0x1f);
  func_0x000107c301d8(param_1 + 0x1e);
  func_0x000107c301b0(param_1 + 0x14);
  func_0x000107c301cc(param_1 + 0x11);
  FUN_10b4b682c(param_1 + 0xe);
  func_0x000107c301c8(param_1 + 0xd);
  func_0x000107c301c4(param_1 + 0xc);
  FUN_10b4b6874(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b4b6d98; end: 10b4b6e1f;  */

undefined8 * FUN_10b4b6d98(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cf03b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  (**(code **)param_1[0x21])(param_1 + 0x21);
  func_0x000107c301e4(param_1 + 0x1f);
  func_0x000107c301d8(param_1 + 0x1e);
  func_0x000107c301b0(param_1 + 0x14);
  func_0x000107c301cc(param_1 + 0x11);
  FUN_10b4b682c(param_1 + 0xe);
  func_0x000107c301c8(param_1 + 0xd);
  func_0x000107c301c4(param_1 + 0xc);
  FUN_10b4b6874(param_1 + 9);
  __ZNSt3__15mutexD1Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10b4b6e20; end: 10b4b6e23;  */

void FUN_10b4b6e20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b4b6e24; end: 10b4b6e37;  */

void FUN_10b4b6e24(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b6e38; end: 10b4b6e3b;  */

void FUN_10b4b6e38(void)

{
  return;
}



/* Entry: 10b4b6e3c; end: 10b4b6e73;  */

long FUN_10b4b6e3c(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cf0460);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b4b6e74; end: 10b4b6e77;  */

void FUN_10b4b6e74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b6e78; end: 10b4b6f4b;  */

void FUN_10b4b6e78(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  while (param_2 != 0) {
    func_0x00010b4b7528();
    func_0x000107c30208();
    func_0x00010b4b7448();
    param_2 = unaff_x20;
  }
  return;
}



/* Entry: 10b4b6f4c; end: 10b4b6f63;  */

void FUN_10b4b6f4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x00010b4b6f8c(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b4b6f64; end: 10b4b6fff;  */

void FUN_10b4b6f64(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010b4b6f8c(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b4b7000; end: 10b4b7017;  */

void FUN_10b4b7000(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c2826c(lVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b4b7018; end: 10b4b705f;  */

void FUN_10b4b7018(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c2826c(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b4b7060; end: 10b4b7077;  */

void FUN_10b4b7060(long *param_1)

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



/* Entry: 10b4b7078; end: 10b4b7097;  */

void FUN_10b4b7078(void)

{
  func_0x000107c39838();
  FUN_10b4b7098();
  return;
}



/* Entry: 10b4b7098; end: 10b4b70af;  */

void FUN_10b4b7098(long *param_1)

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



/* Entry: 10b4b70b0; end: 10b4b714f;  */

undefined8 FUN_10b4b70b0(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b4b7534();
  func_0x00010b4b70d4();
  func_0x000107c39838();
  FUN_10b4b7150();
  return unaff_x19;
}



/* Entry: 10b4b7150; end: 10b4b7167;  */

void FUN_10b4b7150(long *param_1)

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



/* Entry: 10b4b7168; end: 10b4b71df;  */

undefined8 FUN_10b4b7168(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b4b7534();
  func_0x00010b4b718c();
  func_0x000107c39838();
  FUN_10b4b71e0();
  return unaff_x19;
}



/* Entry: 10b4b71e0; end: 10b4b71f7;  */

void FUN_10b4b71e0(long *param_1)

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



/* Entry: 10b4b71f8; end: 10b4b7217;  */

void FUN_10b4b71f8(void)

{
  func_0x000107c39864();
  func_0x000107c301f4();
  return;
}



/* Entry: 10b4b7218; end: 10b4b7233;  */

void FUN_10b4b7218(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c280f8(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b4b7234; end: 10b4b725b;  */

void FUN_10b4b7234(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c278a8(param_2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 10b4b725c; end: 10b4b7267;  */

long * FUN_10b4b725c(long *param_1)

{
  long lVar1;
  
  func_0x00010b4b73d8();
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b4b74d8();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000107c301fc();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b4b7268; end: 10b4b72db;  */

long * FUN_10b4b7268(long *param_1)

{
  long lVar1;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    func_0x00010b4b74d8();
    return param_1;
  }
  func_0x000104bd35f4();
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -8;
    func_0x000107c301fc();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


