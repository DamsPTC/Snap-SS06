/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1086d2d2c; end: 1086d2db3;  */

void FUN_1086d2d2c(long *param_1)

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



/* Entry: 1086d2db4; end: 1086d2dff;  */

void FUN_1086d2db4(void)

{
  long alStack_30 [2];
  
  func_0x0001086da128();
  FUN_1086d2e00();
  if (alStack_30[0] != 0) {
    func_0x000107c3271c();
    func_0x0001086db6e4();
  }
  func_0x000107c29134(alStack_30);
  return;
}



/* Entry: 1086d2e00; end: 1086d2e6f;  */

void FUN_1086d2e00(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      func_0x0001086dbcfc();
    }
  }
  return;
}



/* Entry: 1086d2e70; end: 1086d2ea3;  */

undefined8 FUN_1086d2e70(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c32730(param_1 + 8);
  FUN_1086cc6ac();
  func_0x0001086d2cb4();
  func_0x000107c327e0();
  FUN_1086d2d2c();
  return unaff_x19;
}



/* Entry: 1086d2ea4; end: 1086d2ef7;  */

void FUN_1086d2ea4(void)

{
  undefined8 uStack_30;
  
  func_0x0001086da128();
  FUN_1086ce034();
  if ((uStack_30 != 0) && ((*(byte *)(uStack_30 + 0x110) & 1) == 0)) {
    FUN_1086a656c(*(undefined8 *)(*(long *)(uStack_30 + 0xd0) + 0x130));
  }
  func_0x0001086da520();
  return;
}



/* Entry: 1086d2ef8; end: 1086d2f27;  */

void FUN_1086d2ef8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010055315c();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 1086d2f28; end: 1086d2f3b;  */

void FUN_1086d2f28(void)

{
  func_0x0001086d2f1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d2f3c; end: 1086d2f53;  */

void FUN_1086d2f3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d2f54; end: 1086d2f83;  */

undefined8 * FUN_1086d2f54(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)((long)param_1 + 0xd) = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c31408(uVar1);
  return param_1;
}



/* Entry: 1086d2f84; end: 1086d2fbb;  */

void FUN_1086d2f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1086d2fbc; end: 1086d2fe3;  */

long FUN_1086d2fbc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1086d2fe4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1086d2fe4; end: 1086d300b;  */

void FUN_1086d2fe4(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x88);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a64578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d300c; end: 1086d300f;  */

void FUN_1086d300c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64578;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d3010; end: 1086d3023;  */

void FUN_1086d3010(void)

{
  FUN_1086d32a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d3024; end: 1086d302b;  */

void FUN_1086d3024(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d302c; end: 1086d3137;  */

void FUN_1086d302c(long param_1)

{
  undefined1 in_ZR;
  long **pplVar1;
  long *plVar2;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int extraout_w10;
  long lVar3;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *aplStack_a8 [2];
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_38;
  
  func_0x0001086d9a34();
  lVar3 = *(long *)(param_1 + 0x10);
  uStack_38 = extraout_x8;
  FUN_1086d3138(aplStack_a8,lVar3 + 0x18);
  if (aplStack_a8[0] != (long *)0x0) {
    uStack_c8 = *(undefined8 *)(lVar3 + 0x30);
    uStack_d0 = *(undefined8 *)(lVar3 + 0x28);
    if (*(long *)(lVar3 + 0x30) != 0) {
      do {
        func_0x000107c325f8();
      } while (extraout_w10 != 0);
    }
    func_0x000107c27994(&uStack_c0,lVar3);
    uStack_80 = uStack_c8;
    uStack_88 = uStack_d0;
    pcStack_98 = FUN_1086d3190;
    ppuStack_90 = &PTR_FUN_110a645b8;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_70 = uStack_b8;
    uStack_78 = uStack_c0;
    uStack_68 = uStack_b0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    func_0x0001086da7cc(*(undefined8 *)(*aplStack_a8[0] + 0x10));
    func_0x000100864c04(ppuStack_90);
    func_0x0001086d3170(&uStack_d0);
  }
  func_0x000107c27c20();
  func_0x000107c325c0(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100864c04(ppuStack_90);
    func_0x0001086d3170(&uStack_d0);
    pplVar1 = aplStack_a8;
    func_0x000107c27c20();
    func_0x0001086d9ff8();
    *extraout_x8_00 = 0;
    extraout_x8_00[1] = 0;
    plVar2 = pplVar1[1];
    if (plVar2 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      extraout_x8_00[1] = plVar2;
      if (plVar2 != (long *)0x0) {
        func_0x0001086dbcfc();
      }
    }
    return;
  }
  return;
}



/* Entry: 1086d3138; end: 1086d318f;  */

void FUN_1086d3138(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      func_0x0001086dbcfc();
    }
  }
  return;
}



/* Entry: 1086d3190; end: 1086d323b;  */

long **** FUN_1086d3190(long param_1)

{
  undefined1 in_ZR;
  long ****pppplVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long ***appplStack_50 [2];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  func_0x0001086d9934();
  uStack_28 = extraout_x8;
  func_0x000107c29138(appplStack_50,param_1 + 0x10);
  if ((long ****)appplStack_50[0] != (long ****)0x0) {
    func_0x000107c27994(auStack_40,unaff_x20 + 0x20);
    func_0x0001086daf8c(auStack_68,auStack_40);
    func_0x000107c326ec((*appplStack_50[0])[0x19]);
    (*extraout_x8_00)();
    func_0x000107c27a04(auStack_68);
    func_0x0001086da684();
  }
  pppplVar1 = appplStack_50;
  func_0x000107c28ab4(pppplVar1);
  func_0x000107c325c0(uStack_28);
  if ((bool)in_ZR) {
    return pppplVar1;
  }
  ___stack_chk_fail();
  func_0x0001086da024();
  func_0x000107c27a04();
  func_0x0001086da684();
  pppplVar1 = appplStack_50;
  func_0x000107c28ab4(pppplVar1);
  func_0x0001086d9ff8();
  func_0x0001086da1bc(pppplVar1 + 1);
  pppplVar1 = (long ****)appplStack_50[0];
  func_0x00010055315c();
  if (pppplVar1 != (long ****)0x0) {
    func_0x000107c60d68();
  }
  return (long ****)appplStack_50[0];
}



/* Entry: 1086d323c; end: 1086d327f;  */

long FUN_1086d323c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1bc(param_1 + 8);
  lVar1 = unaff_x19;
  func_0x00010055315c();
  if (lVar1 != 0) {
    func_0x000107c60d68();
  }
  return unaff_x19;
}



/* Entry: 1086d3280; end: 1086d329f;  */

void FUN_1086d3280(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086b90a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d32a0; end: 1086d32c3;  */

void FUN_1086d32a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d32c4; end: 1086d32e7;  */

void FUN_1086d32c4(long param_1)

{
  func_0x000107c32694();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 1086d32e8; end: 1086d3337;  */

void FUN_1086d32e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 1086d3338; end: 1086d3367;  */

void FUN_1086d3338(void)

{
  func_0x0001086db5dc();
  FUN_1086d3368();
  return;
}



/* Entry: 1086d3368; end: 1086d339b;  */

void FUN_1086d3368(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c325fc();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 4) {
    func_0x0001086da840();
    FUN_1086d339c();
  }
  return;
}



/* Entry: 1086d339c; end: 1086d33cf;  */

void FUN_1086d339c(void)

{
  func_0x0001086d33b4();
  return;
}



/* Entry: 1086d33d0; end: 1086d3587;  */

undefined1  [16] FUN_1086d33d0(undefined8 param_1,long *param_2,int *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 in_NG;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  undefined8 extraout_x9;
  ulong uVar6;
  long *unaff_x21;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x23;
  undefined1 auVar9 [16];
  undefined1 auStack_58 [24];
  
  iVar1 = *param_3;
  uVar6 = (ulong)iVar1;
  uVar8 = param_2[1];
  if (uVar8 != 0) {
    uVar4 = uVar8 - 1;
    if ((uVar8 & uVar4) == 0) {
      unaff_x23 = uVar4 & uVar6;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar8 - uVar6) < 0;
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar5 * uVar8;
      }
    }
    plVar7 = *(long **)(*param_2 + unaff_x23 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar7;
          if (unaff_x21 == (long *)0x0) goto LAB_1086d347c;
          uVar5 = unaff_x21[1];
          plVar7 = unaff_x21;
          if (uVar5 != uVar6) break;
          in_NG = (int)unaff_x21[2] - iVar1 < 0;
          if ((int)unaff_x21[2] == iVar1) {
            uVar3 = 0;
            goto LAB_1086d3560;
          }
        }
        if ((uVar8 & uVar4) == 0) {
          uVar5 = uVar5 & uVar4;
        }
        else if (uVar8 <= uVar5) {
          uVar2 = 0;
          if (uVar8 != 0) {
            uVar2 = uVar5 / uVar8;
          }
          uVar5 = uVar5 - uVar2 * uVar8;
        }
        in_NG = (long)(uVar5 - unaff_x23) < 0;
      } while (uVar5 == unaff_x23);
    }
  }
LAB_1086d347c:
  func_0x0001086da5dc(auStack_58);
  FUN_1086d3588();
  func_0x0001086dbec8(param_2[3]);
  if ((uVar8 == 0) || (func_0x0001086dbc80(param_1,(int)param_2[4],(float)uVar8), (bool)in_NG)) {
    func_0x0001086d9f3c(uVar8 << 1);
    func_0x0001086d35c8(param_2);
    uVar8 = param_2[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x23 = uVar8 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar8 <= uVar6) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar6 / uVar8;
        }
        unaff_x23 = uVar6 - uVar4 * uVar8;
      }
    }
  }
  if (*(long *)(*param_2 + unaff_x23 * 8) == 0) {
    func_0x0001086db498();
    *(undefined8 *)(extraout_x8 + unaff_x23 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar6 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar6 = uVar6 & uVar8 - 1;
      }
      else if (uVar8 <= uVar6) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar6 / uVar8;
        }
        uVar6 = uVar6 - uVar4 * uVar8;
      }
      *(long **)(extraout_x8 + uVar6 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001086dbc6c();
  }
  func_0x0001086db4f8();
  FUN_1086d3754();
  uVar3 = 1;
LAB_1086d3560:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = unaff_x21;
  return auVar9;
}



/* Entry: 1086d3588; end: 1086d365f;  */

void FUN_1086d3588(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001086da3e4();
  puVar1 = param_1 + 2;
  func_0x0001086da44c();
  *extraout_x8 = param_1;
  extraout_x8[1] = puVar1;
  extraout_x8[2] = 1;
  *param_1 = 0;
  param_1[1] = unaff_x20;
  *(undefined4 *)(param_1 + 2) = *unaff_x19;
  return;
}



/* Entry: 1086d3660; end: 1086d371f;  */

void FUN_1086d3660(long param_1,ulong param_2)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  ulong extraout_x9;
  ulong uVar3;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1086d3720(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_1086d3738(param_1 + 8);
    func_0x0001086dbe00();
    FUN_1086d3720();
    func_0x0001086db3a8();
    for (uVar3 = extraout_x9; param_2 != uVar3; uVar3 = uVar3 + 1) {
      *(undefined8 *)(extraout_x8 + uVar3 * 8) = 0;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001086daa0c();
      func_0x0001086da9f8();
      lVar2 = extraout_x8_00;
      plVar6 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            func_0x0001086da070();
            lVar2 = extraout_x8_01;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1086d3720; end: 1086d3737;  */

void FUN_1086d3720(long *param_1,long param_2)

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



/* Entry: 1086d3738; end: 1086d3753;  */

void FUN_1086d3738(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c327e0();
  FUN_1086d3774();
  return;
}



/* Entry: 1086d3754; end: 1086d3773;  */

void FUN_1086d3754(void)

{
  func_0x000107c327e0();
  FUN_1086d3774();
  return;
}



/* Entry: 1086d3774; end: 1086d378b;  */

void FUN_1086d3774(long *param_1,long param_2)

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



/* Entry: 1086d378c; end: 1086d37ff;  */

undefined8 FUN_1086d378c(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001086d37b4(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x000107c327e0(param_1);
  FUN_1086d3800();
  return unaff_x19;
}



/* Entry: 1086d3800; end: 1086d3817;  */

void FUN_1086d3800(long *param_1)

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



/* Entry: 1086d3818; end: 1086d386f;  */

long * FUN_1086d3818(long *param_1,long *param_2)

{
  ulong uVar1;
  long extraout_x8;
  long extraout_x9;
  long *plVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  if (param_2 < (long *)0x13b13b13b13b13c) {
    uVar1 = (param_1[2] - *param_1) / 0xd0;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x9d89d89d89d89c < uVar1) {
      plVar2 = (long *)0x13b13b13b13b13b;
    }
    return plVar2;
  }
  FUN_1086d38c0();
  func_0x000107c32670();
  func_0x000107c327c8();
  FUN_1086d394c();
  *(long *)(unaff_x19 + 8) = extraout_x8 + (extraout_x9 / -0xd0) * 0xd0;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107c325c4();
  return param_1;
}



/* Entry: 1086d3870; end: 1086d38bf;  */

void FUN_1086d3870(void)

{
  long extraout_x8;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x000107c32670();
  func_0x000107c327c8();
  FUN_1086d394c();
  *(long *)(unaff_x19 + 8) = extraout_x8 + (extraout_x9 / -0xd0) * 0xd0;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x000107c325c4();
  return;
}



/* Entry: 1086d38c0; end: 1086d38cb;  */

void FUN_1086d38c0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001086d9d1c();
  func_0x000107c3274c();
  if (param_2 != 0) {
    func_0x0001086d3900(param_4);
  }
  func_0x000107c32700(0xd0);
  return;
}



/* Entry: 1086d38cc; end: 1086d391f;  */

void FUN_1086d38cc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c3274c();
  if (param_2 != 0) {
    func_0x0001086d3900(param_4);
  }
  func_0x000107c32700(0xd0);
  return;
}



/* Entry: 1086d3920; end: 1086d394b;  */

void FUN_1086d3920(undefined8 param_1,ulong param_2)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  if (param_2 < 0x13b13b13b13b13c) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xd0);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c325fc();
  func_0x000107c325e0();
  func_0x000107c3280c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xd0) {
    func_0x000107c32804();
    FUN_1086ad844();
    lStack_48 = lStack_48 + 0xd0;
  }
  func_0x000107c3273c();
  func_0x000107c326fc();
  FUN_1086d39b8();
  FUN_1086d39e4(auStack_70);
  return;
}



/* Entry: 1086d394c; end: 1086d39b7;  */

void FUN_1086d394c(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x000107c325fc();
  func_0x000107c325e0();
  func_0x000107c3280c();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0xd0) {
    func_0x000107c32804();
    FUN_1086ad844();
    lStack_38 = lStack_38 + 0xd0;
  }
  func_0x000107c3273c();
  func_0x000107c326fc();
  FUN_1086d39b8();
  FUN_1086d39e4(auStack_60);
  return;
}



/* Entry: 1086d39b8; end: 1086d39e3;  */

void FUN_1086d39b8(long param_1)

{
  long unaff_x19;
  
  func_0x000107c32814();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0xd0) {
    FUN_1086a9ac4();
  }
  return;
}



/* Entry: 1086d39e4; end: 1086d3a0f;  */

void FUN_1086d39e4(void)

{
  uint extraout_w8;
  
  func_0x000107c32760();
  if ((extraout_w8 & 1) == 0) {
    FUN_1086d3a10();
  }
  return;
}



/* Entry: 1086d3a10; end: 1086d3a1f;  */

void FUN_1086d3a10(long param_1)

{
  long unaff_x19;
  
  func_0x0001086da870();
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xd0;
    FUN_1086a9ac4();
  }
  return;
}



/* Entry: 1086d3a20; end: 1086d3a77;  */

void FUN_1086d3a20(long param_1)

{
  long unaff_x19;
  
  func_0x0001086db4b0();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xd0;
    FUN_1086a9ac4();
  }
  return;
}



/* Entry: 1086d3a78; end: 1086d3a7f;  */

void FUN_1086d3a78(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c32670(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x000107c3281c(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xd0;
    FUN_1086a9ac4();
  }
  return;
}



/* Entry: 1086d3a80; end: 1086d3aaf;  */

void FUN_1086d3a80(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x000107c32670();
  while (func_0x000107c3281c(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0xd0;
    FUN_1086a9ac4();
  }
  return;
}



/* Entry: 1086d3ab0; end: 1086d3b4b;  */

void FUN_1086d3ab0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c32678();
  func_0x000107c27994();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  func_0x00010869fbb8(param_1 + 0x28,unaff_x20 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x78,unaff_x20 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
  func_0x000107c27994(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  FUN_10867be90(unaff_x19 + 0xb8,unaff_x20 + 0xb8);
  return;
}



/* Entry: 1086d3b4c; end: 1086d3b8b;  */

void FUN_1086d3b4c(void)

{
  func_0x000107c32670();
  func_0x000107c327a8();
  func_0x000107c28de8();
  func_0x000107c326d0();
  func_0x000107c290b0();
  func_0x000107c32738();
  func_0x000107c290b0();
  func_0x000107c3277c();
  return;
}



/* Entry: 1086d3b8c; end: 1086d3bcf;  */

void FUN_1086d3b8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d3bd0; end: 1086d3c0f;  */

long FUN_1086d3bd0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  func_0x000107c327dc();
  if (plVar1 != (long *)0x0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1086d3c10; end: 1086d3d5b;  */

void FUN_1086d3c10(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong uVar4;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = param_1;
  plVar3 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar5 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar5 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x0001086da090();
    }
    if (param_2 <= plVar5) {
      param_2 = plVar5;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_1086d3d5c(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm((long)param_2 << 3);
    func_0x0001086dbe00();
    FUN_1086d3d5c();
    func_0x0001086db3a8();
    for (plVar5 = extraout_x9; param_2 != plVar5; plVar5 = (long *)((long)plVar5 + 1)) {
      *(undefined8 *)(extraout_x8 + (long)plVar5 * 8) = 0;
    }
    if (param_1[2] != 0) {
      func_0x0001086daa0c();
      func_0x0001086da9f8();
      lVar2 = extraout_x8_00;
      plVar5 = extraout_x9_00;
      uVar4 = extraout_x10;
      plVar3 = extraout_x11;
      while (plVar7 = plVar5, plVar5 = (long *)*plVar7, plVar5 != (long *)0x0) {
        plVar6 = (long *)plVar5[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar3) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar7;
            plVar3 = plVar6;
          }
          else {
            func_0x0001086da070();
            lVar2 = extraout_x8_01;
            plVar5 = extraout_x9_01;
            uVar4 = extraout_x10_00;
            plVar3 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar5;
  *plVar5 = (long)plVar3;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d3d5c; end: 1086d3d73;  */

void FUN_1086d3d5c(long *param_1,long param_2)

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



/* Entry: 1086d3d74; end: 1086d3d9b;  */

void FUN_1086d3d74(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c32714();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1086d3d9c; end: 1086d3d9f;  */

void FUN_1086d3d9c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1086d3da0; end: 1086d3dbf;  */

void FUN_1086d3da0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1086d3dc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1086d3dc0; end: 1086d3dc3;  */

void FUN_1086d3dc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1086d3dc4; end: 1086d3de3;  */

long FUN_1086d3dc4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001086da1bc();
  lVar1 = unaff_x19;
  func_0x00010054ffe4();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1086d3de4; end: 1086d3e73;  */

void FUN_1086d3de4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d3e74; end: 1086d3e9b;  */

void FUN_1086d3e74(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001086d9fd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a646a0;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1086d3e9c; end: 1086d3edf;  */

void FUN_1086d3e9c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a646a0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d3ee0; end: 1086d3f07;  */

void FUN_1086d3ee0(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64700);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d3f08; end: 1086d3f13;  */

undefined ** FUN_1086d3f08(void)

{
  return &PTR_DAT_110a64700;
}



/* Entry: 1086d3f14; end: 1086d3f47;  */

void FUN_1086d3f14(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return;
}



/* Entry: 1086d3f48; end: 1086d3f4f;  */

void FUN_1086d3f48(void)

{
  return;
}



/* Entry: 1086d3f50; end: 1086d3f6f;  */

void FUN_1086d3f50(undefined8 *param_1)

{
  func_0x0001086da65c();
  *param_1 = &PTR_FUN_110a64720;
  return;
}



/* Entry: 1086d3f70; end: 1086d3f8f;  */

void FUN_1086d3f70(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a64720;
  return;
}



/* Entry: 1086d3f90; end: 1086d3fb7;  */

void FUN_1086d3f90(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64780);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d3fb8; end: 1086d3fcb;  */

undefined ** FUN_1086d3fb8(void)

{
  return &PTR_DAT_110a64780;
}



/* Entry: 1086d3fcc; end: 1086d3ff3;  */

void FUN_1086d3fcc(void)

{
  func_0x0001086da44c();
  func_0x0001086db408(&PTR_DAT_110a647a0);
  return;
}



/* Entry: 1086d3ff4; end: 1086d401b;  */

void FUN_1086d3ff4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_110a647a0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d401c; end: 1086d4083;  */

void FUN_1086d401c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_3;
  uVar5 = *param_4;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  iVar3 = (int)lVar1 + 0x88;
  FUN_1086bf5ac();
  if (iVar3 != 0) {
    func_0x000108680494(*(undefined8 *)(*(long *)(lVar1 + 0xd0) + 0x80),param_2,uVar4,uVar5,uVar2);
    FUN_10867f028();
    func_0x000108680480();
    func_0x0001086804d0();
    return;
  }
  func_0x0001086dae70();
                    /* WARNING: Could not recover jumptable at 0x0001086db240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1086d4084; end: 1086d40ab;  */

void FUN_1086d4084(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64800);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d40ac; end: 1086d40b7;  */

undefined ** FUN_1086d40ac(void)

{
  return &PTR_DAT_110a64800;
}



/* Entry: 1086d40b8; end: 1086d40eb;  */

void FUN_1086d40b8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return;
}



/* Entry: 1086d40ec; end: 1086d40f3;  */

void FUN_1086d40ec(void)

{
  return;
}



/* Entry: 1086d40f4; end: 1086d411b;  */

void FUN_1086d40f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001086d9fd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a64820;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1086d411c; end: 1086d4163;  */

void FUN_1086d411c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a64820;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d4164; end: 1086d418b;  */

void FUN_1086d4164(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64880);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d418c; end: 1086d4197;  */

undefined ** FUN_1086d418c(void)

{
  return &PTR_DAT_110a64880;
}



/* Entry: 1086d4198; end: 1086d41cb;  */

void FUN_1086d4198(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return;
}



/* Entry: 1086d41cc; end: 1086d41d7;  */

void FUN_1086d41cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a648a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1086d41d8; end: 1086d41eb;  */

void FUN_1086d41d8(void)

{
  FUN_1086d41cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d41ec; end: 1086d420b;  */

void FUN_1086d41ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d9c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1086d420c; end: 1086d4233;  */

void FUN_1086d420c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001086d9fd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_DAT_110a64938;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1086d4234; end: 1086d4253;  */

void FUN_1086d4234(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_110a64938;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1086d4254; end: 1086d42c3;  */

void FUN_1086d4254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  long lVar1;
  undefined1 auStack_208 [472];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001086dac14(*(undefined8 *)(lVar1 + 0xd0));
  (**(code **)(extraout_x8 + 0x40))();
  lVar1 = *(long *)(lVar1 + 0xd0);
  FUN_1086cf1e4(auStack_208,param_3);
  func_0x0001086da0f0(*(undefined8 *)(lVar1 + 0x130),0x1e3,0x82,auStack_208);
  func_0x0001086da654();
  return;
}



/* Entry: 1086d42c4; end: 1086d42eb;  */

void FUN_1086d42c4(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a649a8);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d42ec; end: 1086d42f7;  */

undefined ** FUN_1086d42ec(void)

{
  return &PTR_DAT_110a649a8;
}



/* Entry: 1086d42f8; end: 1086d4357;  */

void FUN_1086d42f8(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  
  func_0x00010086ab64();
  if ((bool)in_ZR) {
    uVar1 = 0x20;
  }
  else {
    if (param_1 == 0) {
      return;
    }
    uVar1 = 0x28;
  }
  func_0x00010086abd4(uVar1);
  return;
}



/* Entry: 1086d4358; end: 1086d436b;  */

void FUN_1086d4358(void)

{
  func_0x0001086d432c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1086d436c; end: 1086d438f;  */

void FUN_1086d436c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c3268c();
  param_1 = param_1 + 8;
  func_0x0001086db60c(&PTR_SUB_110a649c8);
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d4390; end: 1086d43b3;  */

void FUN_1086d4390(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  param_1 = param_1 + 8;
  func_0x0001086db60c(&PTR_SUB_110a649c8);
  if (extraout_x8 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10 != 0);
  }
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c325f8();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 1086d43b4; end: 1086d4427;  */

void FUN_1086d43b4(long param_1)

{
  undefined4 *puVar1;
  undefined4 auStack_48 [6];
  int iStack_30;
  
  func_0x0001086d9e04();
  func_0x0001086dbd28();
  func_0x0001086dbea4();
  if (iStack_30 == 1) {
    FUN_1086b1a3c(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20));
  }
  else {
    puVar1 = auStack_48;
    FUN_1086d44b0();
    FUN_1086b18e0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20),*puVar1);
  }
  func_0x0001086da03c();
  return;
}



/* Entry: 1086d4428; end: 1086d444f;  */

void FUN_1086d4428(undefined8 param_1)

{
  func_0x0001086da3f0();
  func_0x0001086da290(param_1,&PTR_DAT_110a64a28);
  func_0x0001086d9b48();
  return;
}



/* Entry: 1086d4450; end: 1086d44af;  */

undefined ** FUN_1086d4450(void)

{
  return &PTR_DAT_110a64a28;
}



/* Entry: 1086d44b0; end: 1086d44c7;  */

void FUN_1086d44b0(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  func_0x00010563ab98();
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d44c8; end: 1086d4507;  */

void FUN_1086d44c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001086d97cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (*(long **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 1086d4508; end: 1086d4533;  */

undefined8 * FUN_1086d4508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a64a60;
  FUN_1086c16c8(param_1 + 1);
  return param_1;
}



/* Entry: 1086d4534; end: 1086d4547;  */

void FUN_1086d4534(void)

{
  FUN_1086d4508();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


