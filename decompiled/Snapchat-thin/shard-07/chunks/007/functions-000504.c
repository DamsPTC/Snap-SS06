/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10596c69c; end: 10596c6af;  */

void FUN_10596c69c(void)

{
  FUN_10596c6b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596c6b0; end: 10596c6db;  */

undefined8 * FUN_10596c6b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108c34b0;
  func_0x0001009044a8(param_1 + 1);
  return param_1;
}



/* Entry: 10596c6dc; end: 10596c75b;  */

undefined1 * FUN_10596c6dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *unaff_x19;
  undefined1 auStack_40 [16];
  long lStack_30;
  
  puVar2 = auStack_40;
  func_0x00010596cb30();
  FUN_10596c75c(auStack_40,1);
  FUN_10596c7b4(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *unaff_x19 = lVar1 + 0x18;
  unaff_x19[1] = lVar1;
  func_0x00010596c868();
  func_0x00010596cb48();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010596c868(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = param_2;
  puVar3 = puVar2;
  FUN_10596c784();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 10596c75c; end: 10596c783;  */

long FUN_10596c75c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10596c784();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10596c784; end: 10596c7b3;  */

undefined8 * FUN_10596c784(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x492492492492493) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c3510;
  FUN_10596c804(param_1 + 3);
  return param_1;
}



/* Entry: 10596c7b4; end: 10596c7e3;  */

undefined8 * FUN_10596c7b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c3510;
  FUN_10596c804(param_1 + 3);
  return param_1;
}



/* Entry: 10596c7e4; end: 10596c7e7;  */

void FUN_10596c7e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596c7e8; end: 10596c7fb;  */

void FUN_10596c7e8(void)

{
  FUN_10596c858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596c7fc; end: 10596c803;  */

void FUN_10596c7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596cb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596c804; end: 10596c857;  */

undefined8 * FUN_10596c804(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = &PTR_DAT_1108c34b0;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  func_0x0001009044a8(&uStack_30);
  return param_1;
}



/* Entry: 10596c858; end: 10596c877;  */

void FUN_10596c858(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596c878; end: 10596c89f;  */

long FUN_10596c878(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10596c8a0; end: 10596c93b;  */

void FUN_10596c8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 *extraout_x8;
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  puVar5 = auStack_50;
  func_0x00010596cb30();
  FUN_10596c958(auStack_50,1);
  FUN_10596c9b0(lStack_40,param_2,param_3,param_4);
  lVar6 = lStack_40;
  lStack_40 = 0;
  FUN_10596c93c(lVar6 + 0x18);
  func_0x00010596cb18();
  func_0x00010596cb48();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010596cb18(auStack_50);
  __Unwind_Resume();
  *extraout_x8 = puVar5;
  extraout_x8[1] = lVar6;
  puVar2 = (undefined8 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = (undefined8 *)(puVar5 + 8);
  }
  if ((puVar2 != (undefined8 *)0x0) && ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == -1)))) {
    pcStack_58 = FUN_10596c93c;
    lStack_78 = extraout_x8[1];
    if (lStack_78 != 0) {
      plVar1 = (long *)(lStack_78 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_78 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_68 = puVar2[1];
    uStack_70 = *puVar2;
    *puVar2 = puVar5;
    puVar2[1] = lStack_78;
    puStack_80 = puVar5;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000105969650(&uStack_70);
    func_0x0001059695dc(&puStack_80);
    return;
  }
  return;
}



/* Entry: 10596c93c; end: 10596c957;  */

void FUN_10596c93c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  plVar2 = (long *)0x0;
  if (param_2 != 0) {
    plVar2 = (long *)(param_2 + 8);
  }
  if ((plVar2 != (long *)0x0) && ((plVar2[1] == 0 || (*(long *)(plVar2[1] + 8) == -1)))) {
    lStack_28 = param_1[1];
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_18 = plVar2[1];
    lStack_20 = *plVar2;
    *plVar2 = param_2;
    plVar2[1] = lStack_28;
    lStack_30 = param_2;
    func_0x000105969650(&lStack_20);
    func_0x0001059695dc(&lStack_30);
    return;
  }
  return;
}



/* Entry: 10596c958; end: 10596c97f;  */

long FUN_10596c958(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10596c980();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10596c980; end: 10596c9af;  */

undefined8 * FUN_10596c980(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x276276276276277) {
    puVar1 = (undefined8 *)(param_2 * 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c3560;
  FUN_10596ca14(param_1 + 3);
  return param_1;
}



/* Entry: 10596c9b0; end: 10596c9f3;  */

undefined8 * FUN_10596c9b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108c3560;
  FUN_10596ca14(param_1 + 3);
  return param_1;
}



/* Entry: 10596c9f4; end: 10596c9f7;  */

void FUN_10596c9f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3560;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596c9f8; end: 10596ca0b;  */

void FUN_10596c9f8(void)

{
  FUN_10596ca84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596ca0c; end: 10596ca13;  */

void FUN_10596ca0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596cb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10596ca14; end: 10596ca83;  */

undefined8
FUN_10596ca14(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  func_0x000105968ca8(param_1,&uStack_30,&uStack_40,&uStack_50);
  func_0x000100902b24(&uStack_50);
  func_0x000100450be4(&uStack_40);
  FUN_10595dcac(&uStack_30);
  return param_1;
}



/* Entry: 10596ca84; end: 10596ca93;  */

void FUN_10596ca84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c3560;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10596ca94; end: 10596cb17;  */

void FUN_10596ca94(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lStack_28 = *(long *)(param_1 + 8);
    if (lStack_28 != 0) {
      plVar1 = (long *)(lStack_28 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = (long *)(lStack_28 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = lStack_28;
    uStack_30 = param_3;
    func_0x000105969650(&uStack_20);
    func_0x0001059695dc(&uStack_30);
    return;
  }
  return;
}



/* Entry: 10596cb18; end: 10596cb77;  */

void FUN_10596cb18(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10596cb78; end: 10596d283;  */

void FUN_10596cb78(long param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  code *extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  ulong *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [160];
  long lStack_430;
  undefined1 auStack_3a0 [56];
  char cStack_368;
  undefined1 auStack_360 [56];
  char cStack_328;
  undefined8 uStack_308;
  ulong uStack_300;
  undefined8 uStack_2f8;
  char cStack_2f0;
  undefined1 auStack_2e8 [4];
  undefined1 uStack_2e4;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c8;
  undefined1 uStack_2c0;
  undefined8 uStack_2b8;
  uint uStack_2b0;
  undefined1 uStack_2ac;
  undefined1 auStack_2a8 [24];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined1 uStack_248;
  undefined8 uStack_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined1 uStack_1f4;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_198;
  undefined1 uStack_190;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined **ppuStack_f0;
  long lStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_c8;
  undefined **ppuStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_98;
  undefined **ppuStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010007847c(auStack_2a8,&UNK_10f31586e);
  auStack_2e8[0] = 0;
  uStack_2e4 = 0;
  puStack_b0 = auStack_2e8;
  uStack_2c0 = 0;
  uStack_2e0 = 0;
  uStack_2d0 = 0;
  uStack_2d8 = 0;
  uStack_2c8 = 0;
  uStack_2b8 = 0x1000300000002;
  uStack_2b0 = uStack_2b0 & 0xffffff00;
  uStack_2ac = 0;
  pcStack_c8 = FUN_10596dda8;
  ppuStack_c0 = &PTR_DAT_1108c3608;
  auStack_360[0] = 0;
  cStack_2f0 = '\0';
  uStack_f8 = 0x10596ddc4;
  ppuStack_f0 = &PTR_DAT_1108c3620;
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  lStack_e8 = param_1;
  puStack_e0 = auStack_360;
  lStack_b8 = param_1;
  func_0x00010596deac();
  (*extraout_x8)();
  uStack_190 = (undefined1)*(undefined8 *)(param_1 + 0xb8);
  func_0x00010596deac();
  (*extraout_x8_00)();
  uStack_248 = 0;
  uStack_230 = uStack_230 & 0xffffffffffffff00;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_250 = 0;
  uStack_200 = 0;
  uStack_208 = 0;
  uStack_1f8 = 0;
  uStack_220 = 1;
  uStack_210 = 1;
  uStack_228 = uVar2;
  uStack_218 = uVar2;
  FUN_105988858(auStack_4d0,&uStack_290,param_2);
  func_0x0001059626bc(&uStack_290);
  FUN_10597a2d8(auStack_2e8,auStack_4d0);
  if (*(char *)(param_1 + 200) == '\x01') {
    FUN_10596f50c(&uStack_290,auStack_4d0,*(undefined4 *)(param_2 + 0x50),param_4,uVar2);
    uStack_80 = 0;
    lStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    pcStack_98 = FUN_10596de58;
    ppuStack_90 = &PTR_DAT_110873830;
    func_0x00010596deac(*(undefined8 *)(param_1 + 0x78));
    (*extraout_x8_01)();
    func_0x00010596def0();
    FUN_10596db74(&uStack_290);
  }
  pcStack_98 = FUN_10596ddf8;
  ppuStack_90 = &PTR_FUN_1108c3638;
  uStack_80 = CONCAT44(uStack_80._4_4_,(int)param_4);
  puVar7 = (ulong *)(param_1 + 8);
  puVar9 = (undefined8 *)*puVar7;
  lStack_88 = param_1;
  func_0x00010002b838(auStack_4e8,&UNK_10f31567c);
  FUN_10596e184(&uStack_290,puVar9,auStack_4e8);
  func_0x00010596df28();
  uVar3 = *puVar7;
  FUN_10596e2e0(uVar3,auStack_4d0);
  iVar8 = 0;
  if (lStack_430 == 0) {
    iVar8 = (int)uVar3;
  }
  uVar1 = iVar8 == 1;
  if ((bool)uVar1) {
    puVar6 = auStack_4d0;
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
              (*(long **)(param_1 + 0x18),puVar6,param_2,0,param_3);
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,1);
    func_0x00010596df60();
  }
  else {
    if (((uVar3 & 1) == 0) &&
       ((*(uint *)(param_2 + 0x50) < 7 && *(uint *)(param_2 + 0x50) != 1 || ((int)param_4 != 0)))) {
      func_0x00010596e214(*puVar7,auStack_4d0);
    }
    func_0x00010054cbac(&uStack_290);
    func_0x00010596df60();
    FUN_10598864c(&uStack_290,param_2,auStack_4d0);
    if (cStack_2f0 == '\x01') {
      puVar9 = &uStack_290;
      FUN_10596d9a0(auStack_360,&uStack_290);
      func_0x00010596df7c();
      func_0x000100066230(&uStack_308,&uStack_238);
    }
    else {
      auStack_360[0] = 0;
      cStack_328 = '\0';
      if ((char)uStack_258 == '\x01') {
        func_0x00010596da74(auStack_360,&uStack_290);
      }
      func_0x00010596df7c();
      uStack_300 = uStack_230;
      uStack_308 = uStack_238;
      uStack_2f8 = uStack_228;
      uStack_230 = 0;
      uStack_238 = 0;
      uStack_228 = 0;
      cStack_2f0 = '\x01';
    }
    func_0x00010596dadc(&uStack_290);
    if (cStack_368 == cStack_328) {
      if (cStack_368 != '\0') {
        FUN_10598a7d4(auStack_3a0,auStack_360);
      }
    }
    else if (cStack_368 == '\0') {
      FUN_10598a2c0(auStack_3a0,0,auStack_360);
      cStack_368 = '\x01';
    }
    else {
      FUN_10596da50(auStack_3a0);
    }
    (**(code **)(**(long **)(param_1 + 0x68) + 0x10))
              (&uStack_290,*(long **)(param_1 + 0x68),auStack_4d0);
    func_0x00010596deac(*(undefined8 *)(param_1 + 0x18));
    puVar6 = param_2;
    (*extraout_x8_02)();
    uStack_2b8 = uStack_2b8 & 0xffffffff00000000;
    uVar3 = *(ulong *)(param_1 + 0x48);
    func_0x00010596deac();
    (*extraout_x8_03)();
    uVar4 = *(ulong *)(param_1 + 0x98);
    func_0x00010596deac();
    (*extraout_x8_04)();
    uVar1 = uVar3 - uVar4 == 0;
    if (uVar4 <= uVar3) {
      uStack_100 = 0x7fffffffffffffff;
      puVar6 = (undefined1 *)(param_1 + 0x58);
      lStack_110 = uVar3 - uVar4;
      uStack_108 = uVar3;
      FUN_10597c0f8(puVar7,puVar6,&lStack_110);
    }
    FUN_10596a8f8(&uStack_290);
  }
  func_0x0001005ed4a0(&pcStack_98);
  FUN_10596db24(auStack_4d0);
  while( true ) {
    func_0x0001005ed4a0(&uStack_f8);
    FUN_10596db54(auStack_360);
    func_0x0001005ed4a0(&pcStack_c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2e0);
    puVar5 = auStack_2a8;
    func_0x000100078bd8();
    func_0x00010596df68(uStack_68);
    if ((bool)uVar1) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar6 != 0) break;
    do {
      __Unwind_Resume(puVar5);
      func_0x00010596df3c();
      iVar8 = (int)puVar9;
    } while (iVar8 == 0);
    if (iVar8 == 4) {
      ___cxa_begin_catch();
      uVar1 = *(uint *)(puVar5 + 8) == 0x813;
      if ((bool)uVar1) {
        uStack_2b8 = CONCAT44(uStack_2b8._4_4_,1);
      }
      else {
        uStack_2b0 = *(uint *)(puVar5 + 8) & 0xff;
        uStack_2b8 = CONCAT44(0x10004,(undefined4)uStack_2b8);
        uStack_2ac = 1;
      }
      func_0x00010596ded0();
      puVar6 = param_2;
      (*extraout_x8_06)();
      ___cxa_end_catch();
    }
    else {
      uVar1 = iVar8 == 3;
      if ((bool)uVar1) {
        ___cxa_begin_catch();
        uStack_2b8 = CONCAT44(0x10005,(undefined4)uStack_2b8);
        func_0x00010596ded0();
        puVar6 = param_2;
        (*extraout_x8_05)();
        ___cxa_end_catch();
      }
      else {
        ___cxa_begin_catch();
        uVar1 = iVar8 == 2;
        if ((bool)uVar1) {
          uStack_2b8 = CONCAT44(0x10006,(undefined4)uStack_2b8);
          func_0x00010596ded0();
          func_0x00010596df18();
          ___cxa_end_catch();
        }
        else {
          uStack_2b8 = CONCAT44(0x10007,(undefined4)uStack_2b8);
          func_0x00010596ded0();
          func_0x00010596df18();
          ___cxa_end_catch();
        }
      }
    }
  }
  func_0x000104bd46a0(puVar5);
  FUN_10596d2c8();
  func_0x00010596df00();
  return;
}



/* Entry: 10596d284; end: 10596d2c7;  */

void FUN_10596d284(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  FUN_10596d2c8(param_1,param_2,2,0,param_3,auStack_50);
  func_0x00010596df00();
  return;
}



/* Entry: 10596d2c8; end: 10596d80f;  */

void FUN_10596d2c8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 uVar5;
  int iVar6;
  undefined4 extraout_w8;
  undefined4 uVar7;
  code *extraout_x8;
  code *extraout_x8_00;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 auStack_4a0 [60];
  int iStack_464;
  undefined4 uStack_460;
  undefined4 uStack_408;
  undefined1 uStack_404;
  byte bStack_3a0;
  int iStack_398;
  undefined1 uStack_394;
  undefined1 uStack_390;
  undefined1 auStack_388 [24];
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined1 uStack_364;
  undefined1 auStack_360 [184];
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [160];
  code *pcStack_1e8;
  undefined **ppuStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  long lStack_c8;
  int *piStack_c0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_78 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  iVar6 = (int)param_3;
  uStack_394 = 0;
  uStack_390 = 0;
  iStack_398 = iVar6;
  func_0x00010002b838(auStack_388,"");
  uStack_370 = 0x3000c0002000b;
  uStack_368 = 0;
  uStack_364 = 0;
  uStack_d8 = 0x10596de68;
  ppuStack_d0 = &PTR_DAT_1108c3650;
  lStack_c8 = param_1;
  piStack_c0 = &iStack_398;
  FUN_10596e3a8(auStack_4a0,*(undefined8 *)(param_1 + 8),param_2);
  if ((bStack_3a0 & 1) == 0) {
    func_0x00010596df90();
    uStack_370 = CONCAT44(extraout_w8,(undefined4)uStack_370);
  }
  else {
    in_ZR = iStack_464 == iVar6;
    if ((bool)in_ZR) {
      uVar7 = 0x20009;
    }
    else if (iStack_464 == 2) {
      uVar7 = 0x2000a;
      in_ZR = 1;
    }
    else {
      FUN_10596e49c(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
      uStack_408 = (undefined4)param_4;
      uStack_404 = (undefined1)(param_4 >> 0x20);
      iStack_464 = iVar6;
      if (iVar6 == 3) {
        in_ZR = 0;
        if (*(char *)(param_1 + 200) == '\x01') {
          in_ZR = 0;
          if (*(char *)(param_1 + 0xca) == '\x01') {
            cVar2 = *(char *)(param_6 + 10);
            uVar7 = *param_6;
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            func_0x00010596deac(uVar5);
            (*extraout_x8_00)();
            if (cVar2 == '\0') {
              uVar7 = 0;
            }
            FUN_10596f50c(auStack_360,auStack_4a0,uStack_460,uVar7,uVar5);
            if ((param_4 >> 0x20 & 1) != 0) {
              pcStack_1e8 = (code *)&UNK_10f3158da;
              FUN_10596d948(auStack_288,&pcStack_1e8);
            }
            in_ZR = *(char *)(param_6 + 10) == '\x01';
            if (((bool)in_ZR) && ((*(byte *)(param_6 + 8) & 1) != 0)) {
              func_0x0001002a8234(auStack_288,param_6 + 2);
            }
            uStack_1d0 = 0;
            uStack_1d8 = 0;
            uStack_1c0 = 0;
            uStack_1c8 = 0;
            pcStack_1e8 = FUN_10596de58;
            ppuStack_1e0 = &PTR_DAT_110873830;
            (**(code **)(**(long **)(param_1 + 0x78) + 0x20))
                      (*(long **)(param_1 + 0x78),auStack_360,&pcStack_1e8);
            func_0x00010596de94(ppuStack_1e0);
            func_0x00010596df10();
          }
        }
      }
      else {
        in_ZR = 0;
        if (iVar6 == 2) {
          if ((bStack_3a0 & 1) == 0) goto LAB_10596d638;
          uStack_4a8 = *(undefined8 *)(param_1 + 0xb0);
          uStack_4b0 = *(undefined8 *)(param_1 + 0xa8);
          if (*(long *)(param_1 + 0xb0) != 0) {
            plVar1 = (long *)(*(long *)(param_1 + 0xb0) + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          FUN_105979b24(&pcStack_1e8,auStack_4a0,&uStack_4b0);
          func_0x000100902aac(&uStack_4b0);
          FUN_105979c60(&pcStack_1e8,param_1 + 0x58);
          in_ZR = 0;
          if (*(char *)(param_1 + 200) == '\x01') {
            in_ZR = 0;
            if (*(char *)(param_1 + 0xc9) == '\x01') {
              cVar2 = *(char *)(param_5 + 0xe);
              uVar7 = *param_5;
              uVar5 = *(undefined8 *)(param_1 + 0x48);
              func_0x00010596deac(uVar5);
              (*extraout_x8)();
              if (cVar2 == '\0') {
                uVar7 = 0;
              }
              FUN_10596f50c(auStack_360,auStack_4a0,uStack_460,uVar7,uVar5);
              in_ZR = 0;
              if (*(char *)(param_5 + 0xe) == '\x01') {
                uStack_2a8 = *(undefined8 *)(param_5 + 2);
                in_ZR = *(char *)(param_5 + 4) == '\0';
                if ((bool)in_ZR) {
                  uStack_2a8 = 0;
                }
                func_0x000104bff97c(&pcStack_a8,param_5 + 6,"");
                func_0x000100066230(auStack_2a0,&pcStack_a8);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_a8);
              }
              uStack_90 = 0;
              uStack_98 = 0;
              uStack_80 = 0;
              uStack_88 = 0;
              pcStack_a8 = FUN_10596de58;
              ppuStack_a0 = &PTR_DAT_110873830;
              (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
                        (*(long **)(param_1 + 0x78),auStack_360,&pcStack_a8);
              func_0x00010596de94(ppuStack_a0);
              func_0x00010596df10();
            }
          }
          func_0x00010596dd0c(&pcStack_1e8);
        }
      }
      FUN_10597a75c(&iStack_398,auStack_4a0);
      uVar7 = 0x20008;
    }
    uStack_370 = CONCAT44(uStack_370._4_4_,uVar7);
  }
  FUN_1059626f4(auStack_4a0);
  func_0x0001005ed4a0(&uStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_388);
  func_0x00010596df68(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10596d638:
  func_0x000104bdc2c8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10596d640);
  (*pcVar4)();
}



/* Entry: 10596d810; end: 10596d863;  */

void FUN_10596d810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [56];
  undefined1 uStack_28;
  
  auStack_60[0] = 0;
  uStack_28 = 0;
  FUN_10596d2c8(param_1,param_2,3,param_3,auStack_60,param_4);
  func_0x00010595cba4(auStack_60);
  return;
}



/* Entry: 10596d864; end: 10596d8c7;  */

void FUN_10596d864(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_90 [40];
  undefined1 uStack_68;
  undefined1 auStack_60 [56];
  undefined1 uStack_28;
  
  auStack_60[0] = 0;
  uStack_28 = 0;
  auStack_90[0] = 0;
  uStack_68 = 0;
  FUN_10596d2c8(param_1,param_2,5,0,auStack_60,auStack_90);
  func_0x00010596df00();
  func_0x00010595cba4(auStack_60);
  return;
}



/* Entry: 10596d8c8; end: 10596d947;  */

void FUN_10596d8c8(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined ***pppuVar3;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  ppuStack_48 = &PTR_FUN_1108c28b8;
  uStack_40 = 0;
  uStack_28 = 0x2f;
  uVar2 = 0x9001c;
  if (param_2 == 1) {
    uVar2 = 0x9001d;
  }
  uVar1 = 0x9001e;
  if (param_2 != 2) {
    uVar1 = uVar2;
  }
  pppuVar3 = &ppuStack_48;
  FUN_10596dbdc(pppuVar3,uVar1);
  FUN_10596dc7c(param_1,pppuVar3);
  func_0x000100907750(&ppuStack_48);
  return;
}



/* Entry: 10596d948; end: 10596d987;  */

long FUN_10596d948(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc(param_1,*param_2);
  }
  else {
    func_0x00010596dce4(param_1);
  }
  return param_1;
}



/* Entry: 10596d988; end: 10596d98b;  */

undefined8 * FUN_10596d988(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c35b0;
  func_0x000100904120(param_1 + 0x11);
  func_0x000100904158(param_1 + 0xf);
  func_0x00010090417c(param_1 + 0xd);
  func_0x000100902b24(param_1 + 0xb);
  func_0x000100902af4(param_1 + 9);
  func_0x000100450be4(param_1 + 7);
  func_0x000100902bd8(param_1 + 5);
  func_0x000100901b38(param_1 + 3);
  func_0x000100902b48(param_1 + 1);
  return param_1;
}



/* Entry: 10596d98c; end: 10596d99f;  */

void FUN_10596d98c(void)

{
  func_0x00010596dd34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10596d9a0; end: 10596d9c3;  */

undefined8 FUN_10596d9a0(undefined8 param_1)

{
  FUN_10596d9c4();
  return param_1;
}



/* Entry: 10596d9c4; end: 10596d9eb;  */

long FUN_10596d9c4(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        FUN_10598a384();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return param_1;
    }
    FUN_10596da90();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        FUN_10598a808(param_1);
      }
      else {
        FUN_10598a7d4(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 10596d9ec; end: 10596da4f;  */

long FUN_10596d9ec(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_10598a808(param_1);
    }
    else {
      FUN_10598a7d4(param_1);
    }
  }
  return param_1;
}



/* Entry: 10596da50; end: 10596da8f;  */

void FUN_10596da50(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10598a384();
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



/* Entry: 10596da90; end: 10596da9b;  */

undefined8 * FUN_10596da90(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_1108c5c60;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_10596d9ec(param_1,param_2);
  return param_1;
}



/* Entry: 10596da9c; end: 10596db03;  */

undefined8 * FUN_10596da9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1108c5c60;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  FUN_10596d9ec(param_1,param_3);
  return param_1;
}



/* Entry: 10596db04; end: 10596db23;  */

void FUN_10596db04(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_10598a384();
  }
  return;
}



/* Entry: 10596db24; end: 10596db53;  */

void FUN_10596db24(long param_1)

{
  FUN_10596db04(param_1 + 0x130);
  func_0x00010011a53c(param_1 + 0x100);
  func_0x0001001148fc(param_1 + 0xe0);
  func_0x0001001148fc(param_1 + 0xc0);
  func_0x0001001148fc(param_1 + 0x48);
  func_0x00010596405c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10596db54; end: 10596db73;  */

void FUN_10596db54(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x00010596dadc();
  }
  return;
}



/* Entry: 10596db74; end: 10596dbdb;  */

void FUN_10596db74(long param_1)

{
  func_0x0001001148fc(param_1 + 0x150);
  func_0x0001001148fc(param_1 + 0x130);
  func_0x0001001148fc(param_1 + 0x110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xf8);
  func_0x0001001148fc(param_1 + 0xd8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xc0);
  func_0x0001001148fc(param_1 + 0x88);
  func_0x0001001148fc(param_1 + 0x68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10596dbdc; end: 10596dc7b;  */

undefined8 FUN_10596dbdc(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x12) & 0x3fff) < 3) {
    puVar2 = (&PTR_DAT_11310f028)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_38,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x24) {
    puVar2 = (&PTR_DAT_11310f088)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  func_0x000100906e58(param_1,auStack_38,puVar2);
  func_0x00010596df28();
  return param_1;
}



/* Entry: 10596dc7c; end: 10596dda7;  */

void FUN_10596dc7c(undefined8 *param_1,long param_2)

{
  func_0x00010596dcb0();
  *param_1 = &PTR_FUN_1108c28b8;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return;
}



/* Entry: 10596dda8; end: 10596ddf7;  */

void FUN_10596dda8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
  func_0x000105979a54(auStack_80,*puVar2);
  plVar7 = (long *)*puVar1;
  func_0x00010597a744();
  uStack_88 = 4;
  func_0x00010002b838(auStack_c0,&UNK_10f31651e);
  func_0x00010597a754(auStack_d8);
  puVar5 = auStack_a8;
  FUN_105973c64(puVar5,auStack_c0,auStack_d8);
  func_0x00010002b838(auStack_f0,&UNK_10f315e2c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108,puVar2 + 1);
  FUN_105973c64(puVar5,auStack_f0,auStack_108);
  uVar3 = *(uint *)(puVar2 + 6);
  if (uVar3 >> 0x12 < 3) {
    puVar6 = (&PTR_DAT_11310f028)[uVar3 >> 0x10];
  }
  else {
    puVar6 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_68,puVar6);
  if ((uVar3 & 0xffff) < 0x24) {
    puVar6 = (&PTR_DAT_11310f088)[uVar3 & 0xffff];
  }
  else {
    puVar6 = &UNK_10f3158c2;
  }
  func_0x000100906e58(puVar5,auStack_68,puVar6);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  (**(code **)(*plVar7 + 0x18))(plVar7,puVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x00010597a73c();
  if (*(int *)(puVar2 + 6) == 2) {
    plVar7 = (long *)*puVar1;
    func_0x00010597a744();
    uStack_88 = 5;
    func_0x00010002b838(auStack_120,&UNK_10f31651e);
    func_0x00010597a754(auStack_138);
    puVar5 = auStack_a8;
    FUN_105973c64(puVar5,auStack_120,auStack_138);
    FUN_1059779d8();
    func_0x00010002b838(auStack_150,&DAT_10f2faa11);
    if (*(char *)((long)puVar2 + 0x3c) == '\x01') {
      uVar4 = *(undefined4 *)(puVar2 + 7);
    }
    else {
      uVar4 = 0xffffffff;
    }
    __ZNSt3__19to_stringEi(auStack_168,uVar4);
    FUN_105973c64(puVar5,auStack_150,auStack_168);
    (**(code **)(*plVar7 + 0x18))(plVar7,puVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x00010597a73c();
  }
  if (*(char *)(puVar2 + 5) == '\x01') {
    plVar7 = (long *)*puVar1;
    func_0x00010597a744();
    uStack_88 = 0xc;
    func_0x00010002b838(auStack_180,&UNK_10f31651e);
    func_0x00010597a754(auStack_198);
    puVar5 = auStack_a8;
    FUN_105973c64(puVar5,auStack_180,auStack_198);
    func_0x00010002b838(auStack_1b0,&UNK_10f315e2c);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1c8,puVar2 + 1)
    ;
    FUN_105973c64(puVar5,auStack_1b0,auStack_1c8);
    (**(code **)(*plVar7 + 0x28))(plVar7,puVar5,puVar2[4]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    func_0x00010597a73c();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  return;
}



/* Entry: 10596ddf8; end: 10596de47;  */

void FUN_10596ddf8(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  code *extraout_x8;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  iVar2 = (int)*(undefined8 *)(lVar4 + 0x88);
  func_0x00010596deac();
  (*extraout_x8)();
  if ((iVar2 != 0) && (plVar3 = *(long **)(lVar4 + 0x28), plVar3 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010596de38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar1);
    return;
  }
  return;
}



/* Entry: 10596de48; end: 10596de57;  */

void FUN_10596de48(void)

{
  return;
}



/* Entry: 10596de58; end: 10596de67;  */

void FUN_10596de58(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  long *plVar7;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000105277f8c();
  piVar2 = *(int **)(param_2 + 0x18);
  puVar1 = (undefined8 *)(*(long *)(param_2 + 0x10) + 0x58);
  func_0x000105979a54(auStack_a0,*(undefined8 *)(piVar2 + 1));
  plVar7 = (long *)*puVar1;
  uStack_b8 = 0;
  uStack_b0 = 0;
  ppuStack_c8 = &PTR_FUN_1108c28b8;
  uStack_c0 = 0;
  uStack_a8 = 8;
  func_0x00010002b838(auStack_e0,&UNK_10f31651e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_f8,auStack_a0);
  pppuVar5 = &ppuStack_c8;
  FUN_105973c64(pppuVar5,auStack_e0,auStack_f8);
  func_0x00010002b838(auStack_110,&UNK_10f31652a);
  func_0x000100906e58(pppuVar5,auStack_110,(&PTR_DAT_1108c48d8)[*piVar2]);
  func_0x00010002b838(auStack_128,&UNK_10f315e2c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_140,piVar2 + 4);
  FUN_105973c64(pppuVar5,auStack_128,auStack_140);
  uVar3 = piVar2[10];
  if (uVar3 >> 0x12 < 3) {
    puVar6 = (&PTR_DAT_11310f028)[uVar3 >> 0x10];
  }
  else {
    puVar6 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_88,puVar6);
  if ((uVar3 & 0xffff) < 0x24) {
    puVar6 = (&PTR_DAT_11310f088)[uVar3 & 0xffff];
  }
  else {
    puVar6 = &UNK_10f3158c2;
  }
  func_0x000100906e58(pppuVar5,auStack_88,puVar6);
  FUN_10597aba0();
  (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_128);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x00010597aba8();
  if (piVar2[10] == 0x2000b) {
    plVar7 = (long *)*puVar1;
    uStack_b8 = 0;
    uStack_b0 = 0;
    ppuStack_c8 = &PTR_FUN_1108c28b8;
    uStack_c0 = 0;
    uStack_a8 = 0xb;
    func_0x00010002b838(auStack_158,&UNK_10f31651e);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,auStack_a0)
    ;
    pppuVar5 = &ppuStack_c8;
    FUN_105973c64(pppuVar5,auStack_158,auStack_170);
    func_0x00010002b838(auStack_188,&UNK_10f31652a);
    func_0x000100906e58(pppuVar5,auStack_188,(&PTR_DAT_1108c48d8)[*piVar2]);
    uVar3 = piVar2[0xb];
    if (uVar3 < 0xc0000) {
      puVar6 = (&PTR_DAT_11310f028)[uVar3 >> 0x10];
    }
    else {
      puVar6 = &UNK_10f3158b1;
    }
    func_0x00010002b838(auStack_88,puVar6);
    if ((uVar3 & 0xffff) < 0x24) {
      puVar6 = (&PTR_DAT_11310f088)[uVar3 & 0xffff];
    }
    else {
      puVar6 = &UNK_10f3158c2;
    }
    func_0x000100906e58(pppuVar5,auStack_88,puVar6);
    FUN_10597aba0();
    func_0x00010002b838(auStack_1a0,&DAT_10f2faa11);
    if ((char)piVar2[0xd] == '\x01') {
      iVar4 = piVar2[0xc];
    }
    else {
      iVar4 = -1;
    }
    __ZNSt3__19to_stringEi(auStack_1b8,iVar4);
    FUN_105973c64(pppuVar5,auStack_1a0,auStack_1b8);
    (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
    func_0x00010597aba8();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  return;
}



/* Entry: 10596de68; end: 10596dfab;  */

void FUN_10596de68(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  long *plVar7;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  piVar2 = *(int **)(param_1 + 0x18);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x58);
  func_0x000105979a54(auStack_90,*(undefined8 *)(piVar2 + 1));
  plVar7 = (long *)*puVar1;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_FUN_1108c28b8;
  uStack_b0 = 0;
  uStack_98 = 8;
  func_0x00010002b838(auStack_d0,&UNK_10f31651e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,auStack_90);
  pppuVar5 = &ppuStack_b8;
  FUN_105973c64(pppuVar5,auStack_d0,auStack_e8);
  func_0x00010002b838(auStack_100,&UNK_10f31652a);
  func_0x000100906e58(pppuVar5,auStack_100,(&PTR_DAT_1108c48d8)[*piVar2]);
  func_0x00010002b838(auStack_118,&UNK_10f315e2c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130,piVar2 + 4);
  FUN_105973c64(pppuVar5,auStack_118,auStack_130);
  uVar3 = piVar2[10];
  if (uVar3 >> 0x12 < 3) {
    puVar6 = (&PTR_DAT_11310f028)[uVar3 >> 0x10];
  }
  else {
    puVar6 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_78,puVar6);
  if ((uVar3 & 0xffff) < 0x24) {
    puVar6 = (&PTR_DAT_11310f088)[uVar3 & 0xffff];
  }
  else {
    puVar6 = &UNK_10f3158c2;
  }
  func_0x000100906e58(pppuVar5,auStack_78,puVar6);
  FUN_10597aba0();
  (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x00010597aba8();
  if (piVar2[10] == 0x2000b) {
    plVar7 = (long *)*puVar1;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b8 = &PTR_FUN_1108c28b8;
    uStack_b0 = 0;
    uStack_98 = 0xb;
    func_0x00010002b838(auStack_148,&UNK_10f31651e);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_160,auStack_90)
    ;
    pppuVar5 = &ppuStack_b8;
    FUN_105973c64(pppuVar5,auStack_148,auStack_160);
    func_0x00010002b838(auStack_178,&UNK_10f31652a);
    func_0x000100906e58(pppuVar5,auStack_178,(&PTR_DAT_1108c48d8)[*piVar2]);
    uVar3 = piVar2[0xb];
    if (uVar3 < 0xc0000) {
      puVar6 = (&PTR_DAT_11310f028)[uVar3 >> 0x10];
    }
    else {
      puVar6 = &UNK_10f3158b1;
    }
    func_0x00010002b838(auStack_78,puVar6);
    if ((uVar3 & 0xffff) < 0x24) {
      puVar6 = (&PTR_DAT_11310f088)[uVar3 & 0xffff];
    }
    else {
      puVar6 = &UNK_10f3158c2;
    }
    func_0x000100906e58(pppuVar5,auStack_78,puVar6);
    FUN_10597aba0();
    func_0x00010002b838(auStack_190,&DAT_10f2faa11);
    if ((char)piVar2[0xd] == '\x01') {
      iVar4 = piVar2[0xc];
    }
    else {
      iVar4 = -1;
    }
    __ZNSt3__19to_stringEi(auStack_1a8,iVar4);
    FUN_105973c64(pppuVar5,auStack_190,auStack_1a8);
    (**(code **)(*plVar7 + 0x18))(plVar7,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    func_0x00010597aba8();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  return;
}



/* Entry: 10596dfac; end: 10596e183;  */

void FUN_10596dfac(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = auStack_a0;
  func_0x0001004b5bc4(&puStack_70,param_1,param_1 + 0x18);
  puVar1 = puStack_70;
  puStack_70 = (undefined *)0x0;
  lVar4 = *(long *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  if (lVar4 != 0) {
    FUN_10596ed00();
    puVar1 = puStack_70;
    puStack_70 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x0) {
      FUN_10596ed00();
    }
  }
  FUN_105960d64(&puStack_70);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  iVar3 = (int)&puStack_70;
  func_0x00010054b1c8();
  func_0x00010054d304(&puStack_70);
  if (iVar3 != -1) {
    uVar6 = 0x18;
    __Znwm();
    FUN_105960fd8();
    lVar4 = *(long *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    if (lVar4 != 0) {
      FUN_10596ed00();
    }
    return;
  }
  puStack_70 = &UNK_10f31592e;
  uStack_68 = 0;
  uStack_60 = 0x2c;
  uStack_58 = 0;
  func_0x0001003a91d4(&UNK_10f315928);
  func_0x0001003a9204(auStack_a0);
  func_0x0001005d466c();
  puStack_70 = puVar5;
  uStack_68 = uVar6;
  func_0x0001003a91d4(&UNK_10f3158f0);
  func_0x0001003a9204(auStack_88);
  func_0x00010596ed14();
  uVar6 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  ___cxa_throw(uVar6,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10596e174);
  (*pcVar2)();
}



/* Entry: 10596e184; end: 10596e1ef;  */

void FUN_10596e184(void)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000100698fb0();
  func_0x00010596df9c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_48 = unaff_x19[1];
  uStack_50 = *unaff_x19;
  uStack_40 = unaff_x19[2];
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  *unaff_x19 = 0;
  func_0x00010054b97c(extraout_x8,uVar1,&uStack_50);
  func_0x00010596ed14();
  return;
}



/* Entry: 10596e1f0; end: 10596e2df;  */

undefined8 FUN_10596e1f0(long param_1)

{
  func_0x00010596df9c();
  return *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
}



/* Entry: 10596e2e0; end: 10596e337;  */

uint FUN_10596e2e0(void)

{
  uint unaff_w19;
  undefined1 auStack_40 [32];
  
  func_0x00010596ed98();
  FUN_105961888(auStack_40);
  FUN_10596e338(auStack_40);
  FUN_10596e8dc(auStack_40);
  return unaff_w19 & 1;
}



/* Entry: 10596e338; end: 10596e387;  */

undefined1  [16] FUN_10596e338(void)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  long alStack_28 [2];
  char cStack_18;
  
  FUN_10596e910(alStack_28);
  bVar1 = cStack_18 == '\x01' && alStack_28[0] != 0;
  if (bVar1) {
    plVar3 = alStack_28;
    FUN_10596e928();
    lVar2 = *plVar3;
  }
  else {
    lVar2 = 0;
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar2;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10596e388; end: 10596e3a7;  */

void FUN_10596e388(long param_1)

{
  func_0x00010596ed98();
  func_0x000100852678(param_1 + 0x468,&stack0xffffffffffffffe8);
  return;
}



/* Entry: 10596e3a8; end: 10596e407;  */

void FUN_10596e3a8(long param_1)

{
  undefined1 auStack_148 [280];
  
  func_0x00010596ed2c();
  func_0x0001059618b0(auStack_148,param_1 + 0x78);
  FUN_10596e408(auStack_148);
  FUN_10596bdd4(auStack_148);
  return;
}



/* Entry: 10596e408; end: 10596e49b;  */

void FUN_10596e408(undefined1 *param_1)

{
  long *plVar1;
  undefined1 auStack_250 [272];
  long lStack_140;
  undefined1 auStack_138 [256];
  char cStack_38;
  
  FUN_10596b7c4(&lStack_140);
  _bzero(auStack_250,0x110);
  if (cStack_38 == '\x01') {
    func_0x00010596eda0();
    if (lStack_140 != 0) {
      plVar1 = &lStack_140;
      FUN_10596b7dc(plVar1);
      FUN_10596ea18(param_1,plVar1);
      goto LAB_10596e478;
    }
  }
  else {
    func_0x00010596eda0();
  }
  *param_1 = 0;
  param_1[0x100] = 0;
LAB_10596e478:
  FUN_1059626f4(auStack_138);
  return;
}



/* Entry: 10596e49c; end: 10596e55f;  */

void FUN_10596e49c(undefined8 param_1,undefined8 param_2,int param_3,code *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  code *pcStack_a8;
  long alStack_68 [3];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_50);
  func_0x0001000e3098(alStack_68,auStack_50,1);
  plVar3 = alStack_68;
  FUN_10596e560(param_1);
  func_0x0001000e30f4(alStack_68);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e30f4(alStack_68);
  puVar2 = auStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
  func_0x00010596ed0c();
  if ((param_3 != 3) && (((ulong)param_4 >> 0x20 & 1) != 0)) {
    pcStack_a8 = FUN_10596ea34;
    uStack_b0 = plVar3;
    func_0x0001003a91d4(&UNK_10f3159d9);
    func_0x0001003a9204(auStack_c8);
    func_0x00010596ed78();
    return;
  }
  FUN_10596e1f0();
  uStack_b0 = (long *)CONCAT44(param_3,(undefined4)uStack_b0);
  pcStack_a8 = param_4;
  func_0x000105964274(plVar3[1]);
  puVar2 = puVar2 + 0x4f0;
  FUN_105961d9c(puVar2);
  FUN_105961dc0();
  func_0x000105961de0(puVar2,2,&pcStack_a8);
  lVar1 = plVar3[1];
  for (lVar4 = *plVar3; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    func_0x00010596423c();
  }
  func_0x0001006204e0(puVar2);
  return;
}



/* Entry: 10596e560; end: 10596e5ef;  */

void FUN_10596e560(long param_1,long *param_2,int param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  code *pcStack_38;
  
  if ((param_3 != 3) && (((ulong)param_4 >> 0x20 & 1) != 0)) {
    pcStack_38 = FUN_10596ea34;
    uStack_40 = param_2;
    func_0x0001003a91d4(&UNK_10f3159d9);
    func_0x0001003a9204(auStack_58);
    func_0x00010596ed78();
    return;
  }
  FUN_10596e1f0();
  uStack_40 = (long *)CONCAT44(param_3,(undefined4)uStack_40);
  pcStack_38 = param_4;
  func_0x000105964274(param_2[1]);
  param_1 = param_1 + 0x4f0;
  FUN_105961d9c(param_1);
  FUN_105961dc0();
  func_0x000105961de0(param_1,2,&pcStack_38);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    func_0x00010596423c();
  }
  func_0x0001006204e0(param_1);
  return;
}



/* Entry: 10596e5f0; end: 10596e647;  */

void FUN_10596e5f0(undefined8 param_1,long param_2)

{
  FUN_10596e1f0();
  FUN_105961900(param_1,param_2 + 0xf0,&stack0xffffffffffffffe0,&stack0xffffffffffffffd8,
                &stack0xffffffffffffffd0);
  return;
}



/* Entry: 10596e648; end: 10596e6bf;  */

void FUN_10596e648(long param_1)

{
  func_0x00010596ed1c();
  FUN_10596e1f0();
  FUN_105961e50(param_1 + 0x510,&stack0xffffffffffffffe0,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 10596e6c0; end: 10596e713;  */

void FUN_10596e6c0(long param_1,long *param_2)

{
  long lVar1;
  long *unaff_x19;
  long lVar2;
  
  if (*param_2 != param_2[1]) {
    func_0x00010596ed98();
    func_0x000105964274(unaff_x19[1]);
    param_1 = param_1 + 0x620;
    FUN_105961d9c();
    lVar1 = unaff_x19[1];
    for (lVar2 = *unaff_x19; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
      func_0x00010596423c();
    }
    func_0x000107c60d88(param_1 + 0x18);
    func_0x00010054c3a4(param_1);
    func_0x00010062154c();
    func_0x000100621554();
    return;
  }
  return;
}



/* Entry: 10596e714; end: 10596e77b;  */

undefined1  [16] FUN_10596e714(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  FUN_10596e1f0();
  func_0x0001059619cc(auStack_60,param_1 + 600);
  FUN_10596e77c(&uStack_38,auStack_60);
  FUN_10596ebbc(auStack_60);
  if (cStack_28 == '\0') {
    uStack_30 = 0;
    uStack_38 = 0;
  }
  auVar1._8_8_ = uStack_30;
  auVar1._0_8_ = uStack_38;
  return auVar1;
}



/* Entry: 10596e77c; end: 10596e7d7;  */

void FUN_10596e77c(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long alStack_40 [3];
  char cStack_28;
  
  plVar2 = alStack_40;
  FUN_10596ebf0(alStack_40);
  bVar1 = cStack_28 == '\x01' && alStack_40[0] != 0;
  if (bVar1) {
    FUN_10596ec08();
    uVar3 = *plVar2;
    param_1[1] = plVar2[1];
    *param_1 = uVar3;
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 10596e7d8; end: 10596e847;  */

void FUN_10596e7d8(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  ulong unaff_x19;
  undefined8 unaff_x20;
  int iVar2;
  long *unaff_x21;
  long lVar3;
  undefined8 uStack_48;
  
  func_0x00010596ed1c();
  FUN_10596e1f0();
  if ((unaff_x19 & 1) == 0) {
    unaff_x20 = 1;
  }
  uStack_48 = unaff_x20;
  func_0x000105964274(unaff_x21[1]);
  param_1 = param_1 + 0x2d0;
  FUN_105961a88(param_1);
  lVar1 = unaff_x21[1];
  iVar2 = 1;
  for (lVar3 = *unaff_x21; lVar3 != lVar1; lVar3 = lVar3 + 0x18) {
    FUN_105961aac(param_1,iVar2,lVar3);
    iVar2 = iVar2 + 1;
  }
  func_0x000105961acc(param_1,iVar2,&uStack_48);
  FUN_105961aec(extraout_x8,param_1);
  return;
}



/* Entry: 10596e848; end: 10596e85f;  */

void FUN_10596e848(long param_1)

{
  FUN_10596e1f0();
  func_0x000107c60d88(param_1 + 0x6e0);
  func_0x00010054c3a4(param_1 + 0x6c8);
  func_0x00010062154c();
  func_0x000100621554();
  return;
}



/* Entry: 10596e860; end: 10596e887;  */

void FUN_10596e860(long param_1)

{
  func_0x00010596ed2c();
  FUN_105961b64(param_1 + 0x368,&stack0xffffffffffffffe0);
  return;
}



/* Entry: 10596e888; end: 10596e8db;  */

void FUN_10596e888(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_10596edbc(auStack_38);
  func_0x000100697a74(uVar1,&DAT_10f2fb62f,auStack_38);
  func_0x00010596ed78();
  *param_3 = uVar1;
  return;
}



/* Entry: 10596e8dc; end: 10596e90f;  */

undefined8 * FUN_10596e8dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  uVar1 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010054cac4(uVar1);
  return param_1;
}



/* Entry: 10596e910; end: 10596e927;  */

void FUN_10596e910(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_2 = param_2 + 8;
  func_0x000100698fb0(param_1,param_2);
  FUN_10596e9a4(param_1 + 1,param_2 + 8);
  func_0x00010596eda8();
  return;
}



/* Entry: 10596e928; end: 10596e97b;  */

long FUN_10596e928(long param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    func_0x00010596ed4c();
    func_0x00010596ed38();
    func_0x00010596ed60();
    func_0x00010596ed70();
    func_0x00010596ed14();
  }
  return param_1 + 8;
}



/* Entry: 10596e97c; end: 10596e9a3;  */

void FUN_10596e97c(long param_1,long param_2)

{
  func_0x000100698fb0();
  FUN_10596e9a4(param_1 + 8,param_2 + 8);
  func_0x00010596eda8();
  return;
}



/* Entry: 10596e9a4; end: 10596ea17;  */

void FUN_10596e9a4(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
      return;
    }
  }
  else if (cVar1 == '\0') {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    if (*(char *)(param_2 + 1) == '\x01') {
      *(undefined1 *)(param_2 + 1) = 0;
    }
  }
  else {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 1;
    if (*(char *)(param_1 + 1) == '\x01') {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  return;
}



/* Entry: 10596ea18; end: 10596ea33;  */

void FUN_10596ea18(long param_1)

{
  FUN_1059625e0();
  *(undefined1 *)(param_1 + 0x100) = 1;
  return;
}



/* Entry: 10596ea34; end: 10596ea67;  */

void FUN_10596ea34(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_10596ea68(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 10596ea68; end: 10596eb8f;  */

undefined8 FUN_10596ea68(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long alStack_190 [3];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [256];
  long lStack_60;
  long *plStack_58;
  
  plVar2 = param_2;
  FUN_105680760(auStack_178);
  for (lVar4 = *param_2; lVar4 != param_2[1]; lVar4 = lVar4 + 0x18) {
    lVar1 = lVar4;
    func_0x0001005d466c();
    lStack_60 = lVar1;
    plStack_58 = plVar2;
    func_0x0001003a91d4(&DAT_10f2fb62f);
    func_0x0001003a9204(alStack_190);
    plVar2 = alStack_190;
    func_0x0001006282fc(auStack_168);
    func_0x00010596ed14();
    if (lVar4 != param_2[1] + -0x18) {
      plVar2 = (long *)&DAT_10f68e8ee;
      FUN_10549023c(auStack_168);
    }
  }
  uVar3 = *param_3;
  FUN_105491b64(alStack_190,auStack_160);
  FUN_10596eb90(uVar3,&UNK_10f315a70,alStack_190);
  func_0x00010596ed14();
  func_0x000105673d7c(auStack_178);
  return uVar3;
}



/* Entry: 10596eb90; end: 10596ebbb;  */

void FUN_10596eb90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100698fb0();
  func_0x0001005d466c(param_3);
  func_0x000100698fbc();
  func_0x000100698fc8();
  return;
}



/* Entry: 10596ebbc; end: 10596ebef;  */

undefined8 * FUN_10596ebbc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 4) = 0;
  uVar1 = *param_1;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  func_0x00010054cac4(uVar1);
  return param_1;
}



/* Entry: 10596ebf0; end: 10596ec07;  */

void FUN_10596ebf0(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_2 = param_2 + 8;
  func_0x000100698fb0(param_1,param_2);
  FUN_10596ec84(param_1 + 1,param_2 + 8);
  func_0x00010596eda8();
  return;
}



/* Entry: 10596ec08; end: 10596ec5b;  */

long FUN_10596ec08(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x00010596ed4c();
    func_0x00010596ed38();
    func_0x00010596ed60();
    func_0x00010596ed70();
    func_0x00010596ed14();
  }
  return param_1 + 8;
}



/* Entry: 10596ec5c; end: 10596ec83;  */

void FUN_10596ec5c(long param_1,long param_2)

{
  func_0x000100698fb0();
  FUN_10596ec84(param_1 + 8,param_2 + 8);
  func_0x00010596eda8();
  return;
}



/* Entry: 10596ec84; end: 10596ecff;  */

void FUN_10596ec84(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      uVar3 = param_1[1];
      uVar2 = *param_1;
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_2[1] = uVar3;
      *param_2 = uVar2;
    }
  }
  else if (cVar1 == '\0') {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 2) = 1;
    if (*(char *)(param_2 + 2) == '\x01') {
      *(undefined1 *)(param_2 + 2) = 0;
    }
  }
  else {
    uVar2 = *param_1;
    param_2[1] = param_1[1];
    *param_2 = uVar2;
    *(undefined1 *)(param_2 + 2) = 1;
    if (*(char *)(param_1 + 2) == '\x01') {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  return;
}



/* Entry: 10596ed00; end: 10596edbb;  */

void FUN_10596ed00(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596ed08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10596edbc; end: 10596f073;  */

void FUN_10596edbc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  long lStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  long lStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_230;
  undefined4 uStack_220;
  long lStack_210;
  code *pcStack_208;
  undefined4 uStack_200;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_170;
  undefined4 uStack_160;
  uint uStack_150;
  undefined4 uStack_140;
  long lStack_130;
  code *pcStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined4 uStack_100;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d0;
  undefined4 uStack_c0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  
  FUN_1059870c4(auStack_2a8,*(undefined8 *)(param_2 + 0x30));
  func_0x000105987ce4(auStack_2c0,param_2 + 0x48);
  FUN_10598717c(auStack_2d8,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
  FUN_10598717c(auStack_2f0,*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x80));
  lVar17 = *(long *)(param_2 + 0x90);
  uVar9 = *(undefined8 *)(param_2 + 0xb0);
  FUN_10598717c(auStack_308,*(undefined8 *)(param_2 + 0xa8));
  lVar2 = param_2;
  func_0x0001005d4650();
  lVar3 = param_2 + 0x18;
  uVar10 = uVar9;
  func_0x0001005d4650();
  puVar4 = auStack_2a8;
  uVar11 = uVar10;
  func_0x0001005d4650();
  uVar1 = *(undefined4 *)(param_2 + 0x38);
  puVar5 = auStack_2c0;
  uVar12 = uVar11;
  func_0x0001005d4650();
  puVar6 = auStack_2d8;
  uVar13 = uVar12;
  func_0x0001005d4650();
  puVar7 = auStack_2f0;
  uVar14 = uVar13;
  func_0x0001005d4650();
  uVar18 = *(undefined8 *)(param_2 + 0x88);
  uVar16 = *(undefined8 *)(param_2 + 0xa0);
  puVar8 = auStack_308;
  uVar15 = uVar14;
  func_0x0001005d4650();
  uStack_d0 = *(undefined8 *)(param_2 + 0xb8);
  uStack_280 = 0xd;
  uStack_260 = 0xd;
  uStack_240 = 0xd;
  uStack_220 = 1;
  pcStack_208 = FUN_10596f074;
  uStack_200 = 0xf;
  uStack_1e8 = 0x10596f0ac;
  uStack_1e0 = 0xf;
  uStack_1c0 = 0xd;
  uStack_1a0 = 0xd;
  uStack_180 = 0xd;
  uStack_160 = 3;
  uStack_140 = 7;
  pcStack_128 = FUN_10596f104;
  uStack_120 = 0xf;
  uStack_100 = 3;
  uStack_e0 = 0xd;
  uStack_c0 = 3;
  uStack_a8 = 0x10596f1bc;
  uStack_a0 = 0xf;
  uStack_88 = 0x10596f1bc;
  uStack_80 = 0xf;
  lStack_290 = lVar2;
  uStack_288 = uVar9;
  lStack_270 = lVar3;
  uStack_268 = uVar10;
  puStack_250 = puVar4;
  uStack_248 = uVar11;
  uStack_230 = uVar1;
  lStack_210 = param_2 + 0x3c;
  lStack_1f0 = param_2 + 0x40;
  puStack_1d0 = puVar5;
  uStack_1c8 = uVar12;
  puStack_1b0 = puVar6;
  uStack_1a8 = uVar13;
  puStack_190 = puVar7;
  uStack_188 = uVar14;
  uStack_170 = uVar18;
  uStack_150 = (uint)(lVar17 != 0);
  lStack_130 = param_2 + 0x98;
  uStack_110 = uVar16;
  puStack_f0 = puVar8;
  uStack_e8 = uVar15;
  lStack_b0 = param_2 + 0xc0;
  lStack_90 = param_2 + 0xe0;
  func_0x0001003a91d4(&UNK_10f315a75);
  func_0x0001003a9204(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_308);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
  return;
}



/* Entry: 10596f074; end: 10596f0d7;  */

void FUN_10596f074(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  FUN_10596f264((&PTR_DAT_1108c3668)[*param_1]);
  *param_3 = uVar1;
  return;
}



/* Entry: 10596f0d8; end: 10596f103;  */

void FUN_10596f0d8(undefined8 param_1,int param_2,undefined8 *param_3)

{
  FUN_10596f264((&PTR_DAT_1108c3698)[param_2],*param_3);
  return;
}



/* Entry: 10596f104; end: 10596f18b;  */

void FUN_10596f104(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  long lStack_30;
  code *pcStack_28;
  
  uVar1 = *param_3;
  if (*(char *)(param_1 + 4) == '\x01') {
    pcStack_28 = FUN_10596f18c;
    lStack_30 = param_1;
    func_0x00010596f2a8();
    func_0x0001003a9204(auStack_48);
  }
  else {
    func_0x00010596f290();
  }
  func_0x000100697a74(uVar1,&DAT_10f2fb62f,auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  *param_3 = uVar1;
  return;
}



/* Entry: 10596f18c; end: 10596f1e7;  */

void FUN_10596f18c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_3;
  FUN_10596f264(&UNK_10f3158da);
  *param_3 = uVar1;
  return;
}



/* Entry: 10596f1e8; end: 10596f263;  */

undefined8 FUN_10596f1e8(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  long lStack_30;
  long lStack_28;
  
  uVar2 = *param_3;
  if (*(char *)(param_2 + 0x18) == '\x01') {
    lVar1 = param_2;
    func_0x0001005d466c();
    lStack_30 = param_2;
    lStack_28 = lVar1;
    func_0x00010596f2a8();
    func_0x0001003a9204(auStack_48);
  }
  else {
    func_0x00010596f290();
  }
  func_0x000100697a74(uVar2,&DAT_10f2fb62f,auStack_48);
  func_0x00010596f284();
  return uVar2;
}



/* Entry: 10596f264; end: 10596f2b7;  */

void FUN_10596f264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack0000000000000008;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &DAT_10f2fb62f;
  uStack_28 = 0;
  puVar2 = puVar1;
  uStack0000000000000008 = param_1;
  uStack_30 = param_1;
  func_0x0001003a91d4();
  puStack_40 = puVar1;
  puStack_38 = puVar2;
  func_0x0001005748e4(param_2,&puStack_40,0xc,&uStack_30);
  return;
}



/* Entry: 10596f2b8; end: 10596f39b;  */

undefined1 * FUN_10596f2b8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  long alStack_c0 [5];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [72];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uStack_c8 = *param_3;
  (**(code **)(param_3[1] + 0x10))(alStack_c0,param_3 + 1);
  uStack_98 = 0x10596f3dc;
  ppuStack_90 = &PTR_DAT_1108c3728;
  uStack_88 = uStack_c8;
  (**(code **)(alStack_c0[0] + 0x10))(auStack_80,alStack_c0);
  func_0x00010bcce9b8(auStack_d8,uVar2,&uStack_98,param_2);
  func_0x00010596f424();
  puVar1 = auStack_d8;
  func_0x000100688f2c();
  func_0x00010596f414();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010596f424();
  func_0x00010596f414();
  __Unwind_Resume(puVar1);
  func_0x00010596f434();
  return puVar1;
}



/* Entry: 10596f39c; end: 10596f3db;  */

void FUN_10596f39c(void)

{
  func_0x00010596f434();
  return;
}



/* Entry: 10596f3dc; end: 10596f50b;  */

void FUN_10596f3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010596f3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 10596f50c; end: 10596f7c3;  */

void FUN_10596f50c(undefined8 *param_1,long param_2,uint param_3,int param_4,undefined8 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined1 auStack_118 [80];
  undefined4 uStack_c8;
  undefined1 uStack_c4;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined2 *)((long)param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 6,param_2 + 0x18);
  param_1[3] = *(undefined8 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[0xb] = *(undefined8 *)(param_2 + 0x68);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0x70);
  *(short *)((long)param_1 + 0xb2) = (short)*(undefined8 *)(param_2 + 0x88);
  *(bool *)(param_1 + 9) = param_4 == 1;
  *(bool *)((long)param_1 + 0x4a) = param_3 == 1;
  if (param_3 == 1) {
    *(undefined1 *)((long)param_1 + 0x49) = 1;
    uVar2 = 2;
  }
  else if (param_3 < 7) {
    uVar2 = *(undefined4 *)(&UNK_10ddc4d80 + (ulong)param_3 * 4);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)((long)param_1 + 0x4c) = uVar2;
  *(bool *)(param_1 + 0x16) = param_3 == 3;
  param_1[5] = param_5;
  FUN_1059879d4(auStack_118,param_2 + 0x48);
  func_0x0001002a969c(param_1 + 0x11,auStack_118);
  if ((*(byte *)(param_2 + 0x60) & 1) == 0) {
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    uStack_128 = 0;
    goto LAB_10596f72c;
  }
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  func_0x000100114fd0(auStack_a8,param_2 + 0x48,&uStack_78);
  if ((bStack_80 & 1) == 0) {
LAB_10596f714:
    uStack_140 = uStack_140 & 0xffffffffffffff00;
    uStack_128 = 0;
  }
  else {
    puVar1 = auStack_a8;
    func_0x00010bcce248(puVar1,&DAT_10f315ca6,0xf);
    if ((puVar1 == (undefined1 *)0x0) || (puVar1[8] != '\x04')) goto LAB_10596f714;
    func_0x0001098f3384(&uStack_c0);
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_130 = uStack_b0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c0 = 0;
    uStack_128 = 1;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_c0);
  }
  func_0x00010011a53c(auStack_a8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
LAB_10596f72c:
  func_0x0001002a8208(param_1 + 0xd,&uStack_140);
  func_0x0001001148fc(&uStack_140);
  *(undefined4 *)(param_1 + 0x15) = uStack_c8;
  *(undefined1 *)((long)param_1 + 0xac) = uStack_c4;
  FUN_10596f7c4(auStack_118);
  return;
}



/* Entry: 10596f7c4; end: 10596f7eb;  */

void FUN_10596f7c4(long param_1)

{
  func_0x00010062706c(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c60ca0();
  }
  return;
}



/* Entry: 10596f7ec; end: 10596f813;  */

undefined * FUN_10596f7ec(int param_1)

{
  if (param_1 - 1U < 5) {
    return (&PTR_DAT_1108c3768)[param_1 - 1U];
  }
  return &UNK_10f315cb6;
}



/* Entry: 10596f814; end: 10596f8db;  */

undefined8 FUN_10596f814(ulong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  char cStack_28;
  
  func_0x000100902d70(auStack_40,param_1,0x18);
  if (cStack_28 == '\x01') {
    FUN_10596f8dc();
    if ((param_1 & 1) != 0) {
      uVar1 = 1;
      goto LAB_10596f864;
    }
    FUN_10596f8dc();
  }
  uVar1 = 0;
LAB_10596f864:
  func_0x0001001148fc(auStack_40);
  return uVar1;
}



/* Entry: 10596f8dc; end: 10596f8ef;  */

bool FUN_10596f8dc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  long unaff_x20;
  
  func_0x000100152bac();
  func_0x000107c613d0();
  uVar1 = *(ulong *)(unaff_x20 + 8);
  if (-1 < (char)*(byte *)(unaff_x20 + 0x17)) {
    uVar1 = (ulong)*(byte *)(unaff_x20 + 0x17);
  }
  if (param_2 == uVar1) {
    func_0x000107c60bf4();
    bVar2 = (int)unaff_x20 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 10596f8f0; end: 10596f92f;  */

undefined8 * FUN_10596f8f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_1108c37a0;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x000100609284(param_1 + 3,param_3);
  return param_1;
}


