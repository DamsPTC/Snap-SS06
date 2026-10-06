/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10096bce8; end: 10096bcef; +[SCAttributedAppInsightsTask crashToReportPostStartup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096bce8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309abe8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309abf0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096bcf0; end: 10096bd4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096bcf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309abe8) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11309abf0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096bd4c; end: 10096bd63; +[SCAttributedCameraTask lockScreenWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096bd4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 4;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096bd64; end: 10096be0f;  */

void FUN_10096bd64(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    func_0x000107c61174(param_2);
    ppuStack_38 = &PTR_DAT_11093e048;
    lStack_40 = param_2;
    FUN_1000de59c(&uStack_30,&ppuStack_38,&lStack_40,FUN_10096be10);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    FUN_1000df524(&uStack_30);
    func_0x000107c61170(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10096bf10(&uStack_50);
  }
  FUN_10096bf3c();
  return;
}



/* Entry: 10096be10; end: 10096bf0f;  */

void FUN_10096be10(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_11093e088;
  puVar4[3] = &PTR_DAT_11093e108;
  puVar5 = puVar8;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar6 = puVar5;
  FUN_1000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000107c61174(puVar8);
  puVar4[6] = puVar8;
  func_0x000107c61108(puVar5);
  func_0x000107c61170(puVar8);
  puVar4[3] = &PTR_DAT_11093e0d8;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10096bf10(&uStack_50);
  return;
}



/* Entry: 10096bf10; end: 10096bf3b;  */

long FUN_10096bf10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10096bf3c; end: 10096bf43;  */

void FUN_10096bf3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10096bf44; end: 10096bf4b; +[SCAttributedWorkSchedulingTask backgroundCleanUp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096bf44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309be68) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309be70) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096bf4c; end: 10096cd3f;  */

void FUN_10096bf4c(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  long **pplVar3;
  long ***ppplVar4;
  undefined1 in_ZR;
  long ****pppplVar5;
  undefined8 *puVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  undefined8 *puVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  undefined1 extraout_w8;
  undefined1 uVar13;
  long *extraout_x8;
  long **extraout_x8_00;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  int extraout_w9_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w10_16;
  int extraout_w10_17;
  long lVar14;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  long *plVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  long ***ppplVar19;
  long ***ppplVar20;
  long **pplVar21;
  undefined8 uVar22;
  long ***ppplStack_190;
  long ***ppplStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long ***ppplStack_170;
  long ***ppplStack_168;
  long **pplStack_160;
  long **pplStack_158;
  long **pplStack_150;
  long **pplStack_148;
  long **pplStack_138;
  long **pplStack_130;
  long *plStack_128;
  long lStack_120;
  long *plStack_118;
  undefined1 auStack_110 [16];
  long ***ppplStack_100;
  long ***ppplStack_f8;
  long **pplStack_f0;
  long **pplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  long **pplStack_a0;
  long **pplStack_90;
  long **pplStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = param_2;
  FUN_10028b86c();
  FUN_100450688(&ppplStack_b0,1);
  pplVar21 = pplStack_a0;
  pplStack_a0[2] = (long *)0x0;
  *pplStack_a0 = (long *)&PTR_DAT_1107ea880;
  pplStack_a0[1] = (long *)0x0;
  FUN_10096cd40();
  func_0x00010096cd4c();
  FUN_10028bc78(pplVar21 + 3,&pplStack_90,0x13,lVar14,0);
  func_0x00010096cd54();
  pplStack_e8 = pplStack_a0;
  pplStack_a0 = (long **)0x0;
  pplStack_f0 = pplStack_e8 + 3;
  pppplVar5 = &ppplStack_b0;
  func_0x000100450b64();
  func_0x00010096cd5c();
  pppplVar18 = pppplVar5 + 1;
  *pppplVar18 = (long ***)0x0;
  pppplVar5[2] = (long ***)0x0;
  *pppplVar5 = (long ***)&PTR_DAT_11093e4e8;
  pppplVar16 = pppplVar5 + 3;
  *pppplVar16 = (long ***)&PTR_DAT_11093e538;
  pppplVar5[4] = (long ***)0x0;
  pppplVar5[5] = (long ***)0x0;
  ppplStack_100 = (long ***)pppplVar16;
  ppplStack_f8 = (long ***)pppplVar5;
  FUN_1004896c8(auStack_110,param_7);
  FUN_10055c758(&plStack_118);
  FUN_1004695d8(&plStack_128);
  plVar15 = plStack_128;
  func_0x00010096cd4c();
  func_0x000107c60ca4(plVar15 + 0x13,&pplStack_90);
  func_0x00010096cd54();
  *(undefined4 *)((long)plStack_128 + 0x8c) = 2;
  FUN_1002a8234(plStack_128 + 1,param_8);
  plStack_128[0x12] = 10000;
  plStack_128[0xd] = 20000;
  *(undefined1 *)(plStack_128 + 0xe) = 1;
  pplStack_90 = (long **)plStack_128;
  pplStack_88 = (long **)lStack_120;
  if (lStack_120 != 0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10 != 0);
  }
  FUN_10046a2d4();
  FUN_10046e224(&pplStack_90);
  puVar6 = (undefined8 *)0x40;
  func_0x000107c60e20();
  plVar15 = puVar6 + 1;
  *plVar15 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_11093e588;
  ppplVar20 = (long ***)(puVar6 + 3);
  *ppplVar20 = (long **)&PTR_DAT_11093e5d8;
  FUN_10028af84(puVar6 + 4,param_9);
  ppplVar7 = (long ***)0x58;
  ppplStack_e0 = ppplVar20;
  ppplStack_d8 = (long ***)puVar6;
  func_0x000107c60e20();
  ppplVar19 = ppplVar7 + 1;
  *ppplVar19 = (long **)0x0;
  ppplVar7[2] = (long **)0x0;
  *ppplVar7 = (long **)&PTR_DAT_11093e620;
  ppplVar12 = ppplVar7 + 3;
  ppplVar8 = ppplVar7;
  ppplStack_d0 = (long ***)pppplVar16;
  ppplStack_c8 = (long ***)pppplVar5;
  do {
    FUN_1009b59f4();
    pplStack_160 = (long **)plStack_118;
  } while (extraout_w9 != 0);
  plStack_118 = (long *)0x0;
  pplVar21 = (long **)*param_6;
  ppplVar7[5] = (long **)param_6[1];
  ppplVar7[4] = pplVar21;
  ppplVar7[3] = (long **)&PTR_DAT_11093e948;
  if (param_6[1] != 0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_00 != 0);
  }
  ppplVar7[6] = (long **)pppplVar16;
  ppplVar7[7] = (long **)pppplVar5;
  do {
    FUN_1009b59f4();
  } while (extraout_w9_00 != 0);
  ppplVar7[9] = (long **)0x0;
  ppplVar7[10] = (long **)0x0;
  FUN_1009b5a6c();
  ppplVar7[8] = (long **)ppplVar8;
  FUN_10055d588(&pplStack_90,1);
  pplStack_150 = pplStack_160;
  puStack_80[1] = 0;
  puStack_80[2] = 0;
  *puStack_80 = &PTR_DAT_1107e9bc8;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar2) {
      *plVar15 = *plVar15 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pplStack_160 = (long **)0x0;
  ppplStack_b0 = ppplVar20;
  ppplStack_a8 = (long ***)puVar6;
  FUN_10055d67c(puStack_80 + 3,&pplStack_f0,auStack_110,&ppplStack_b0,&pplStack_150,0xb,0,0);
  func_0x00010055f5a0(&pplStack_150);
  FUN_100561d44(&ppplStack_b0);
  puVar10 = puStack_80;
  puStack_80 = (undefined8 *)0x0;
  FUN_100561d68(&ppplStack_c0,puVar10 + 3);
  ppplVar9 = &pplStack_90;
  FUN_100561e6c();
  func_0x00010096cd5c();
  ppplVar9[1] = (long **)0x0;
  ppplVar9[2] = (long **)0x0;
  *ppplVar9 = (long **)&PTR_DAT_11093e670;
  ppplVar8 = ppplVar9 + 3;
  pplStack_88 = (long **)ppplStack_b8;
  pplStack_90 = (long **)ppplStack_c0;
  ppplStack_c0 = (long ***)0x0;
  ppplStack_b8 = (long ***)0x0;
  func_0x0001009ba214(ppplVar8,&pplStack_90);
  FUN_100561f40(&pplStack_90);
  ppplStack_b0 = (long ***)0x0;
  ppplStack_a8 = (long ***)0x0;
  pplStack_88 = ppplVar7[10];
  pplStack_90 = ppplVar7[9];
  ppplVar7[9] = (long **)ppplVar8;
  ppplVar7[10] = (long **)ppplVar9;
  FUN_1009ba2dc();
  FUN_1009ba2dc(&ppplStack_b0);
  FUN_100561f40(&ppplStack_c0);
  func_0x00010055f5a0(&pplStack_160);
  FUN_1009ba300();
  pplStack_138 = (long **)ppplVar12;
  pplStack_130 = (long **)ppplVar7;
  func_0x0001009ba32c(&ppplStack_e0);
  FUN_1009ba350(&ppplStack_d0,param_2 + 0x18);
  puVar10 = (undefined8 *)0xd0;
  func_0x000107c60e20();
  FUN_100ade6e4();
  *puVar10 = &PTR_DAT_11093e6c0;
  func_0x000107c60c94(&pplStack_90,param_2);
  ppplVar4 = ppplStack_d0;
  ppplVar9 = (long ***)(puVar6 + 6);
  ppplStack_d0 = (long ***)0x0;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
    if (bVar2) {
      *ppplVar19 = (long **)((long)*ppplVar19 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
    ppplStack_c0 = (long ***)pppplVar16;
    ppplStack_b8 = (long ***)pppplVar5;
    ppplStack_b0 = ppplVar12;
    ppplStack_a8 = ppplVar7;
  } while (cVar1 != '\0');
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppplVar18,0x10);
    if (bVar2) {
      *pppplVar18 = (long ***)((long)*pppplVar18 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  uVar13 = *(undefined1 *)(param_2 + 0x48);
  puVar6[8] = 0;
  puVar6[6] = &PTR_DAT_11093ee90;
  puVar6[7] = 0;
  puVar6[10] = pplStack_88;
  puVar6[9] = pplStack_90;
  puVar6[0xb] = puStack_80;
  pplStack_90 = (long **)0x0;
  pplStack_88 = (long **)0x0;
  puStack_80 = (long *)0x0;
  lVar14 = param_3[1];
  uVar22 = *param_3;
  puVar6[0xd] = param_3[1];
  puVar6[0xc] = uVar22;
  if (lVar14 != 0) {
    plVar15 = (long *)(lVar14 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar2) {
        *plVar15 = *plVar15 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar6[0xe] = ppplVar4;
  puVar6[0x10] = pplStack_e8;
  puVar6[0xf] = pplStack_f0;
  if ((long ***)pplStack_e8 != (long ***)0x0) {
    do {
      func_0x000100ade6f8();
      uVar13 = extraout_w8;
    } while (extraout_w11 != 0);
  }
  puVar6[0x11] = ppplVar12;
  puVar6[0x12] = ppplVar7;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
    if (bVar2) {
      *ppplVar19 = (long **)((long)*ppplVar19 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar6[0x13] = pppplVar16;
  puVar6[0x14] = pppplVar5;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(pppplVar18,0x10);
    if (bVar2) {
      *pppplVar18 = (long ***)((long)*pppplVar18 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(undefined1 *)(puVar6 + 0x15) = uVar13;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  puVar6[0x19] = 0;
  puVar6[0x18] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  *(undefined2 *)(puVar6 + 0x1c) = 0;
  func_0x0001009ba308(&ppplStack_c0);
  FUN_100ade708(&ppplStack_b0);
  func_0x00010096cd54();
  pplStack_150 = (long **)ppplVar9;
  pplStack_148 = (long **)ppplVar20;
  ppplVar12 = ppplVar9;
  ppplVar7 = ppplVar20;
  if ((puVar6[8] == 0) || (in_ZR = *(long *)(puVar6[8] + 8) == -1, (bool)in_ZR)) {
    do {
      ppplStack_a8 = ppplVar7;
      ppplStack_b0 = ppplVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(ppplVar8,0x10);
      if (bVar2) {
        *ppplVar8 = (long **)((long)*ppplVar8 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      ppplVar12 = ppplStack_b0;
      ppplVar7 = ppplStack_a8;
    } while (cVar1 != '\0');
    do {
      func_0x000100ade6f8();
    } while (extraout_w11_00 != 0);
    pplStack_90 = (long **)puVar6[7];
    puVar6[7] = ppplVar9;
    puVar6[8] = ppplVar20;
    pplStack_88 = (long **)extraout_x8;
    func_0x000100ade72c(&pplStack_90);
    func_0x000100ade750(&ppplStack_b0);
  }
  ppplVar7 = (long ***)0x48;
  func_0x000107c60e20();
  ppplVar19 = ppplVar7 + 1;
  *ppplVar19 = (long **)0x0;
  ppplVar7[2] = (long **)0x0;
  *ppplVar7 = (long **)&PTR_DAT_11093e710;
  ppplVar12 = ppplVar7 + 3;
  ppplVar8 = ppplVar7;
  ppplStack_d0 = (long ***)pppplVar16;
  ppplStack_c8 = (long ***)pppplVar5;
  do {
    FUN_1009b59f4();
  } while (extraout_w9_01 != 0);
  ppplVar7[5] = (long **)0x0;
  ppplVar7[3] = (long **)&PTR_DAT_11093ecf8;
  ppplVar7[6] = (long **)0x0;
  ppplVar7[7] = (long **)pppplVar16;
  ppplVar7[8] = (long **)pppplVar5;
  do {
    FUN_1009b59f4();
  } while (extraout_w9_02 != 0);
  FUN_1009b5a6c();
  ppplVar7[4] = (long **)ppplVar8;
  FUN_10055af74(&ppplStack_b0,1);
  pplVar21 = pplStack_a0;
  pplStack_a0[2] = (long *)0x0;
  *pplStack_a0 = (long *)&PTR_DAT_11093e760;
  pplStack_a0[1] = (long *)0x0;
  func_0x00010096cd4c();
  pplVar21[3] = (long *)&PTR_DAT_11093e7b0;
  pplVar21[5] = (long *)pplStack_88;
  pplVar21[4] = (long *)pplStack_90;
  pplVar21[6] = puStack_80;
  pplStack_90 = (long **)0x0;
  pplStack_88 = (long **)0x0;
  puStack_80 = (undefined8 *)0x0;
  func_0x000107c60ca0();
  pplVar21 = pplStack_a0;
  pplStack_a0 = (long **)0x0;
  func_0x00010055afa4(&ppplStack_b0);
  ppplStack_c0 = (long ***)0x0;
  ppplStack_b8 = (long ***)0x0;
  pplStack_88 = ppplVar7[6];
  pplStack_90 = ppplVar7[5];
  ppplVar7[5] = pplVar21 + 3;
  ppplVar7[6] = pplVar21;
  FUN_10055b138(&pplStack_90);
  FUN_10055b138(&ppplStack_c0);
  FUN_1009ba300();
  pplStack_160 = (long **)ppplVar12;
  pplStack_158 = (long **)ppplVar7;
  FUN_1009ba350();
  pppplVar11 = (long ****)0xc8;
  func_0x000107c60e20();
  pppplVar17 = pppplVar11 + 1;
  *pppplVar17 = (long ***)0x0;
  pppplVar11[2] = (long ***)0x0;
  *pppplVar11 = (long ***)&PTR_DAT_11093e800;
  func_0x000107c60c94(&pplStack_90,param_2);
  ppplVar8 = ppplStack_d0;
  pppplVar18 = pppplVar11 + 3;
  ppplStack_d0 = (long ***)0x0;
  ppplStack_b0 = (long ***)pppplVar16;
  ppplStack_a8 = (long ***)pppplVar5;
  do {
    FUN_1009b59f4();
  } while (extraout_w9_03 != 0);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppplVar19,0x10);
    if (bVar2) {
      *ppplVar19 = (long **)((long)*ppplVar19 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  pppplVar11[4] = (long ***)0x0;
  pppplVar11[5] = (long ***)0x0;
  pppplVar11[3] = (long ***)&PTR_DAT_11093ef98;
  ppplStack_c0 = ppplVar12;
  ppplStack_b8 = ppplVar7;
  func_0x000107c60c94(pppplVar11 + 6,&pplStack_90);
  lVar14 = param_4[1];
  ppplVar7 = (long ***)*param_4;
  pppplVar11[10] = (long ***)param_4[1];
  pppplVar11[9] = ppplVar7;
  if (lVar14 != 0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_01 != 0);
  }
  pppplVar11[0xb] = ppplVar8;
  pppplVar11[0xd] = (long ***)pplStack_e8;
  pppplVar11[0xc] = (long ***)pplStack_f0;
  if ((long ***)pplStack_e8 != (long ***)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_02 != 0);
  }
  pppplVar11[0xe] = (long ***)pppplVar16;
  pppplVar11[0xf] = ppplStack_a8;
  if ((long ****)ppplStack_a8 != (long ****)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_03 != 0);
  }
  pppplVar11[0x10] = ppplVar12;
  pppplVar11[0x11] = ppplStack_b8;
  if (ppplStack_b8 != (long ***)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_04 != 0);
  }
  *(undefined2 *)(pppplVar11 + 0x18) = 0;
  pppplVar11[0x15] = (long ***)0x0;
  pppplVar11[0x14] = (long ***)0x0;
  pppplVar11[0x17] = (long ***)0x0;
  pppplVar11[0x16] = (long ***)0x0;
  pppplVar11[0x13] = (long ***)0x0;
  pppplVar11[0x12] = (long ***)0x0;
  FUN_100bbb800(&ppplStack_c0);
  func_0x0001009ba308(&ppplStack_b0);
  func_0x00010096cd54();
  ppplStack_170 = (long ***)pppplVar18;
  ppplStack_168 = (long ***)pppplVar11;
  if ((pppplVar11[5] == (long ***)0x0) ||
     (in_ZR = pppplVar11[5][1] == (long **)0xffffffffffffffff, (bool)in_ZR)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pppplVar17,0x10);
      if (bVar2) {
        *pppplVar17 = (long ***)((long)*pppplVar17 + 1);
        cVar1 = ExclusiveMonitorsStatus();
      }
      ppplStack_b0 = (long ***)pppplVar18;
      ppplStack_a8 = (long ***)pppplVar11;
    } while (cVar1 != '\0');
    do {
      func_0x000100ade6f8();
    } while (extraout_w11_01 != 0);
    pplStack_90 = (long **)pppplVar11[4];
    pppplVar11[4] = (long ***)pppplVar18;
    pppplVar11[5] = (long ***)pppplVar11;
    pplStack_88 = extraout_x8_00;
    func_0x000100bbb824(&pplStack_90);
    func_0x000100bbb848(&ppplStack_b0);
  }
  ppplVar12 = &pplStack_f0;
  FUN_1004b5250(&uStack_180);
  pplVar3 = pplStack_148;
  pplVar21 = pplStack_150;
  func_0x00010096cd5c();
  FUN_100ade6e4();
  *ppplVar12 = (long **)&PTR_DAT_11093e850;
  pplStack_90 = pplVar21;
  pplStack_88 = pplVar3;
  if ((long ***)pplVar3 != (long ***)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_05 != 0);
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_06 != 0);
  }
  pppplVar5 = pppplVar11 + 3;
  *pppplVar5 = (long ***)&PTR_DAT_11093e908;
  pppplVar11[4] = (long ***)pplVar21;
  pppplVar11[5] = (long ***)pplVar3;
  FUN_100bbb874(&pplStack_90);
  pplVar3 = pplStack_148;
  pplVar21 = pplStack_150;
  puVar6 = (undefined8 *)0xf8;
  ppplStack_190 = (long ***)pppplVar5;
  ppplStack_188 = (long ***)pppplVar11;
  func_0x000107c60e20();
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_11093e8a0;
  ppplStack_c8 = (long ***)pplVar3;
  ppplStack_d0 = (long ***)pplVar21;
  if ((long ***)pplVar3 != (long ***)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_07 != 0);
  }
  ppplVar7 = ppplStack_168;
  ppplVar12 = ppplStack_170;
  ppplStack_e0 = ppplStack_170;
  ppplStack_d8 = ppplStack_168;
  if ((long ****)ppplStack_168 != (long ****)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_08 != 0);
  }
  puVar6[3] = &PTR_DAT_11093e480;
  func_0x000107c60c94(puVar6 + 4,param_2);
  func_0x000107c60c94(puVar6 + 7,param_2 + 0x18);
  func_0x000107c60c94(puVar6 + 10,param_2 + 0x30);
  uVar13 = *(undefined1 *)(param_2 + 0x48);
  uVar22 = *param_3;
  puVar6[0xf] = param_3[1];
  puVar6[0xe] = uVar22;
  *(undefined1 *)(puVar6 + 0xd) = uVar13;
  if (param_3[1] != 0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_09 != 0);
  }
  uVar22 = *param_6;
  puVar6[0x11] = param_6[1];
  puVar6[0x10] = uVar22;
  if (param_6[1] != 0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_10 != 0);
  }
  puVar6[0x13] = pplStack_e8;
  puVar6[0x12] = pplStack_f0;
  if ((long ***)pplStack_e8 != (long ***)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_11 != 0);
  }
  puVar6[0x15] = lStack_178;
  puVar6[0x14] = uStack_180;
  if (lStack_178 != 0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_12 != 0);
  }
  uVar22 = *param_5;
  puVar10 = puVar6 + 0x16;
  puVar6[0x17] = param_5[1];
  *puVar10 = uVar22;
  if (param_5[1] != 0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_13 != 0);
  }
  puVar6[0x18] = pppplVar5;
  puVar6[0x19] = pppplVar11;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(ppplVar8,0x10);
    if (bVar2) {
      *ppplVar8 = (long **)((long)*ppplVar8 + 1);
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  puVar6[0x1b] = ppplStack_c8;
  puVar6[0x1a] = ppplStack_d0;
  if (ppplStack_c8 != (long ***)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_14 != 0);
  }
  puVar6[0x1c] = ppplVar12;
  puVar6[0x1d] = ppplVar7;
  if ((long ****)ppplVar7 != (long ****)0x0) {
    do {
      func_0x00010096cd7c();
    } while (extraout_w10_15 != 0);
  }
  *(undefined1 *)(puVar6 + 0x1e) = 0;
  plVar15 = (long *)puVar6[0x16];
  if (plVar15 != (long *)0x0) {
    FUN_10096cd40();
    func_0x00010096cd4c();
    (**(code **)(*plVar15 + 0x20))(plVar15,&pplStack_90);
    func_0x00010096cd54();
    plVar15 = (long *)*puVar10;
    FUN_10096cd40();
    FUN_10002b838();
    ppplStack_a8 = (long ***)puVar6[0x19];
    ppplStack_b0 = (long ***)puVar6[0x18];
    if (puVar6[0x19] != 0) {
      do {
        func_0x00010096cd7c();
      } while (extraout_w10_16 != 0);
    }
    ppplStack_b8 = (long ***)puVar6[0x15];
    ppplStack_c0 = (long ***)puVar6[0x14];
    if (puVar6[0x15] != 0) {
      do {
        func_0x00010096cd7c();
      } while (extraout_w10_17 != 0);
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,&pplStack_90,&ppplStack_b0,&ppplStack_c0);
    FUN_100554470(&ppplStack_c0);
    FUN_10057201c(&ppplStack_b0);
    func_0x00010096cd54();
  }
  func_0x000100bbba78(&ppplStack_e0);
  FUN_100bbb874(&ppplStack_d0);
  *param_1 = (long)(puVar6 + 3);
  param_1[1] = (long)puVar6;
  func_0x000100bbba9c(&ppplStack_190);
  FUN_1005544a0(&uStack_180);
  func_0x000100bbb848(&ppplStack_170);
  func_0x000100bbbac0(&pplStack_160);
  func_0x000100ade750(&pplStack_150);
  func_0x000100bbbae4(&pplStack_138);
  func_0x00010046e248(&plStack_128);
  func_0x00010055f5a0(&plStack_118);
  FUN_10048b4e8(auStack_110);
  func_0x000100bbbb08(&ppplStack_100);
  ppplVar12 = &pplStack_f0;
  FUN_100450be4(ppplVar12);
  FUN_100bbbb2c(uStack_70);
  if (!(bool)in_ZR) {
    func_0x000107c60e78();
    FUN_100554470(&ppplStack_c0);
    FUN_10057201c(&ppplStack_b0);
    func_0x00010096cd54();
    func_0x000100bbba78(puVar6 + 0x1c);
    FUN_100bbb874(puVar6 + 0x1a);
    func_0x000100bbba9c(puVar6 + 0x18);
    FUN_10048d450(puVar10);
    FUN_1005544a0(puVar6 + 0x14);
    FUN_100450be4(puVar6 + 0x12);
    FUN_100bbbb4c(puVar6 + 0x10);
    func_0x000100bbbb9c(puVar6 + 0xe);
    func_0x000100bbbbc0(puVar6 + 4);
    func_0x000100bbba78(&ppplStack_e0);
    FUN_100bbb874(&ppplStack_d0);
    func_0x0001067de3e4();
    func_0x000107c60e14();
    func_0x000100bbba9c(&ppplStack_190);
    FUN_1005544a0(&uStack_180);
    func_0x000100bbb848(&ppplStack_170);
    func_0x000100bbbac0(&pplStack_160);
    func_0x000100ade750(&pplStack_150);
    func_0x000100bbbae4(&pplStack_138);
    func_0x00010046e248(&plStack_128);
    do {
      func_0x00010055f5a0(&plStack_118);
      FUN_10048b4e8(auStack_110);
      func_0x000100bbbb08(&ppplStack_100);
      FUN_100450be4(&pplStack_f0);
      func_0x000107c60bd8(ppplVar12);
    } while( true );
  }
  return;
}



/* Entry: 10096cd40; end: 10096cd63;  */

void FUN_10096cd40(void)

{
  return;
}



/* Entry: 10096cd64; end: 10096cd6b; +[SCAttributedMemoriesTask logoutUserDataScrubber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096cd64(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 3;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096cd6c; end: 10096cd73; +[SCAttributedMobileCodeHealthTask scopeGraphPerformanceMetricsReporter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096cd6c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b850) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096cd74; end: 10096cd8b; +[SCAttributedFriendingTask snapAnyoneNativeMessagingListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096cd74(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096cd8c; end: 10096cd93; +[SCAttributedSnapchattersSubtask debugData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096cd8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b3a0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096cd94; end: 10096ce0b;  */

undefined8 FUN_10096cd94(void)

{
  int iVar1;
  
  if ((bRam000000011383a950 & 1) == 0) {
    iVar1 = 0x1383a950;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      FUN_10096ce20();
      FUN_10063a168(0x11383a938,0x1137f4e30);
      func_0x000107c60e4c(0x11383a950);
    }
  }
  return 0x11383a938;
}



/* Entry: 10096ce0c; end: 10096ce1f;  */

undefined8 FUN_10096ce0c(long param_1)

{
  long lVar1;
  
  FUN_10096cd94();
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x2f8);
  FUN_1001412c4(lVar1 + 0x60);
  return *(undefined8 *)(lVar1 + 0xd0);
}



/* Entry: 10096ce20; end: 10096d1f3;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_10096ce20(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [88];
  undefined1 uStack_238;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [176];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long alStack_138 [6];
  long lStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if ((bRam00000001137f4e08 & 1) == 0) {
    uVar5 = 0x1137f4e08;
    func_0x000107c60e48();
    if ((int)uVar5 != 0) {
      alStack_138[4] = 0;
      alStack_138[3] = 0;
      alStack_138[2] = 0;
      alStack_138[1] = 0;
      FUN_10060f2fc(alStack_138);
      if ((bRam00000001137f4e00 & 1) == 0) {
        uVar7 = 0x1137f4e00;
        uVar5 = uVar7;
        func_0x000107c60e48();
        if ((int)uVar5 != 0) {
          uRam00000001137f4e10 = 0;
          uRam00000001137f4e18 = 0;
          uRam00000001137f4e20 = 0;
          func_0x000107c60e4c(0x1137f4e00);
          uVar5 = uVar7;
        }
      }
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = 0;
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_168 = 0;
      FUN_100100a4c();
      puVar6 = auStack_230;
      func_0x000107c60c94(puVar6,uVar5);
      auStack_290[0] = 0;
      uStack_238 = 0;
      FUN_10054e900();
      func_0x000107c60d88();
      FUN_10054e9b4();
      func_0x000107c60c94(auStack_2a8,puVar6);
      FUN_10096d1f4();
      FUN_1000ff52c(auStack_218,auStack_230,auStack_290,auStack_2a8,0x500000,0,0,0,0,0);
      puVar6 = auStack_218;
      FUN_1000ff6c8();
      uStack_2b8 = 0;
      uStack_2b0 = 0;
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      FUN_1005d8c24(auStack_2d8);
      FUN_100639eec(alStack_138 + 5,alStack_138 + 3,alStack_138 + 1,alStack_138,0x1137f4e10,60000,
                    0x8000,0,1,&uStack_150,&uStack_168,puVar6,&uStack_2b8,0,0,0);
      uRam00000001137f4e50 = uStack_f0;
      lRam00000001137f4e38 = lStack_108;
      uRam00000001137f4e30 = alStack_138[5];
      if (lStack_108 != 0) {
        plVar1 = (long *)(lStack_108 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      lRam00000001137f4e48 = lStack_f8;
      uRam00000001137f4e40 = uStack_100;
      if (lStack_f8 != 0) {
        plVar1 = (long *)(lStack_f8 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_f0 = 0;
      func_0x000107c60c94(0x1137f4e58,auStack_e8);
      uRam00000001137f4e80 = uStack_c0;
      uRam00000001137f4e98 = uStack_a8;
      uRam00000001137f4e78 = uStack_c8;
      uRam00000001137f4e70 = uStack_d0;
      uRam00000001137f4e90 = uStack_b0;
      uRam00000001137f4e88 = uStack_b8;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uRam00000001137f4ea8 = uStack_98;
      uRam00000001137f4ea0 = uStack_a0;
      uRam00000001137f4eb0 = uStack_90;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uRam00000001137f4ec0 = uStack_80;
      uRam00000001137f4eb8 = uStack_88;
      uRam00000001137f4ec8 = uStack_78;
      uStack_80 = 0;
      uStack_78 = 0;
      uRam00000001137f4ee0 = uStack_60;
      uRam00000001137f4ed8 = uStack_68;
      uRam00000001137f4ed0 = uStack_70;
      uRam00000001137f4ef0 = uStack_50;
      uRam00000001137f4ee8 = uStack_58;
      uStack_58 = 0;
      uStack_50 = 0;
      uRam00000001137f4f00 = uStack_40;
      uRam00000001137f4ef8 = uStack_48;
      uStack_48 = 0;
      uStack_40 = 0;
      func_0x00010066a2d8(alStack_138 + 5);
      FUN_10046997c(auStack_2d8);
      FUN_100634724(&uStack_2c8);
      FUN_10063a040(&uStack_2b8);
      FUN_1001849e8(auStack_218);
      func_0x000107c60ca0(auStack_2a8);
      FUN_1000ff5ec(auStack_290);
      func_0x000107c60ca0(auStack_230);
      FUN_10063a074(&uStack_168);
      func_0x00010063a0d8(&uStack_150);
      lVar4 = alStack_138[0];
      alStack_138[0] = 0;
      if (lVar4 != 0) {
        func_0x000107c35ac8();
      }
      func_0x00010063a12c(alStack_138 + 1);
      FUN_100554470(alStack_138 + 3);
      func_0x000107c60e4c(0x1137f4e08);
    }
  }
  return 0x1137f4e30;
}



/* Entry: 10096d1f4; end: 10096d1ff;  */

void FUN_10096d1f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(0x11383a8f0);
  return;
}



/* Entry: 10096d200; end: 10096d207; +[SCAttributedSnapchattersSubtask errorHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096d200(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b3a0) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096d208; end: 10096d20f; +[SCAttributedFriendingTask snapcodeWidget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096d208(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 2;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096d210; end: 10096d217; +[SCAttributedSpectaclesTask deviceConnection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096d210(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd40) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096d218; end: 10096d21f; +[SCAttributedMemoriesTask widgetDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096d218(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309b770) = 4;
  *(undefined8 *)(lVar1 + _DAT_11309b778) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b780) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309b788) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096d220; end: 10096d2e3;  */

void FUN_10096d220(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096d2e4; end: 10096d30b;  */

undefined ** FUN_10096d2e4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d30c; end: 10096d34b;  */

void FUN_10096d30c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096d2f0();
  FUN_100082720("SCAdBrowserServiceProviderWrapperScopeInitializationPluginProvider",0x42,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096d34c; end: 10096d353;  */

void FUN_10096d34c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c72c0c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d354; end: 10096d3d7;  */

void FUN_10096d354(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c72c0c,param_2,&UNK_101c72c10,param_2,&UNK_101c72c38,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d3d8; end: 10096d3ff;  */

undefined ** FUN_10096d3d8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d400; end: 10096d43f;  */

void FUN_10096d400(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096d3e4();
  FUN_100082720("SCAdEOVTimerServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096d440; end: 10096d447;  */

void FUN_10096d440(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c72d50);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d448; end: 10096d4cb;  */

void FUN_10096d448(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c72d50,param_2,&UNK_101c72d54,param_2,&UNK_101c72d7c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d4cc; end: 10096d4f3;  */

undefined ** FUN_10096d4cc(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d4f4; end: 10096d533;  */

void FUN_10096d4f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096d4d8();
  FUN_100082720("SCAdPrefetchServiceProviderWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096d534; end: 10096d53b;  */

void FUN_10096d534(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c736bc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d53c; end: 10096d5bf;  */

void FUN_10096d53c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c736bc,param_2,&UNK_101c736c0,param_2,&UNK_101c736e8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d5c0; end: 10096d5cb;  */

undefined ** FUN_10096d5c0(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d5cc; end: 10096d5f7;  */

void FUN_10096d5cc(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 10096d5f8; end: 10096d5ff;  */

void FUN_10096d5f8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab42d0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d600; end: 10096d683;  */

void FUN_10096d600(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101ab42d0,param_2,&UNK_101ab42d4,param_2,&UNK_101ab42fc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d684; end: 10096d6ab;  */

undefined ** FUN_10096d684(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d6ac; end: 10096d6eb;  */

void FUN_10096d6ac(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096d690();
  FUN_100082720("SCAdPromotedStoryDataServicesEntryPointWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096d6ec; end: 10096d6f3;  */

void FUN_10096d6ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c74224);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d6f4; end: 10096d777;  */

void FUN_10096d6f4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101c74224,param_2,&UNK_101c74228,param_2,&UNK_101c74250,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d778; end: 10096d79f;  */

undefined ** FUN_10096d778(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d7a0; end: 10096d7df;  */

void FUN_10096d7a0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096d784();
  FUN_100082720("SCAddFriendsLoggerEntryPointWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096d7e0; end: 10096d7e7;  */

void FUN_10096d7e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdea38);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d7e8; end: 10096d86b;  */

void FUN_10096d7e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdea38,param_2,&UNK_101cdea3c,param_2,&UNK_101cdea64,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d86c; end: 10096d893;  */

undefined ** FUN_10096d86c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d894; end: 10096d8d3;  */

void FUN_10096d894(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096d878();
  FUN_100082720("SCAddFriendsTakeOverLaunchServiceProviderWrapperScopeInitializationPluginProvider",
                0x51,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096d8d4; end: 10096d8db;  */

void FUN_10096d8d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdf964);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d8dc; end: 10096d95f;  */

void FUN_10096d8dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdf964,param_2,&UNK_101cdf968,param_2,&UNK_101cdf990,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d960; end: 10096d987;  */

undefined ** FUN_10096d960(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096d988; end: 10096d9c7;  */

void FUN_10096d988(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096d96c();
  FUN_100082720("SCArroyoChatLoggingServiceProviderWrapperScopeInitializationPluginProvider",0x4a,2)
  ;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096d9c8; end: 10096d9cf;  */

void FUN_10096d9c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc35b0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096d9d0; end: 10096da53;  */

void FUN_10096d9d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cc35b0,param_2,&UNK_101cc35b4,param_2,&UNK_101cc35dc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096da54; end: 10096da7b;  */

undefined ** FUN_10096da54(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096da7c; end: 10096dabb;  */

void FUN_10096da7c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096da60();
  FUN_100082720("SCAtlasRegistryServiceProviderWrapperScopeInitializationPluginProvider",0x46,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096dabc; end: 10096dac3;  */

void FUN_10096dabc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdd328);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096dac4; end: 10096db47;  */

void FUN_10096dac4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdd328,param_2,&UNK_101cdd32c,param_2,&UNK_101cdd354,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096db48; end: 10096db6f;  */

undefined ** FUN_10096db48(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096db70; end: 10096dbaf;  */

void FUN_10096db70(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096db54();
  FUN_100082720("SCAtlasServiceProviderWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096dbb0; end: 10096dbb7;  */

void FUN_10096dbb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdd46c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096dbb8; end: 10096dc3b;  */

void FUN_10096dbb8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdd46c,param_2,&UNK_101cdd470,param_2,&UNK_101cdd498,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096dc3c; end: 10096dc47;  */

undefined ** FUN_10096dc3c(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096dc48; end: 10096dc73;  */

void FUN_10096dc48(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 10096dc74; end: 10096dc7b;  */

void FUN_10096dc74(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8848;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101ab467c);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096dc7c; end: 10096dd1f;  */

void FUN_10096dc7c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8848;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101ab467c,param_2,&UNK_101ab4680,param_2,&UNK_101ab46a8,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096dd20; end: 10096dd7b; +[SCAtlasTimeZoneSyncerEntryPoint attributedTask] */

void FUN_10096dd20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126ae968;
  func_0x000107c3e294(PTR_PTR_1126ae968);
  func_0x000107c61180();
  func_0x000107c3d0cc(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10096dd7c; end: 10096ddab; +[SCAttributedActivationTask atlasTimeZoneSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096dd7c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 9;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096ddac; end: 10096ddeb;  */

void FUN_10096ddac(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096dd90();
  FUN_100082720("SCAtlasUserIdServiceProviderWrapperScopeInitializationPluginProvider",0x44,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096ddec; end: 10096ddf3;  */

void FUN_10096ddec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdd7e4);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096ddf4; end: 10096de77;  */

void FUN_10096ddf4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cdd7e4,param_2,&UNK_101cdd7e8,param_2,&UNK_101cdd810,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096de78; end: 10096de83;  */

undefined ** FUN_10096de78(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096de84; end: 10096deaf;  */

void FUN_10096de84(void)

{
  FUN_10095137c();
  return;
}



/* Entry: 10096deb0; end: 10096deb7;  */

void FUN_10096deb0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8850;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  FUN_1005d8744(puVar1,&UNK_101ab4970);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096deb8; end: 10096df5b;  */

void FUN_10096deb8(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a8850;
  func_0x000107c61168();
  func_0x000107c3e370();
  func_0x000107c61180();
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  FUN_1005d8744(puVar1,&UNK_101ab4970,param_2,&UNK_101ab4974,param_2,&UNK_101ab499c,param_2);
  *param_1 = puVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096df5c; end: 10096dfb7; +[SCAuthenticationSessionAuthenticatedServicesEntryPoint attributedTask] */

void FUN_10096df5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae960;
  puVar1 = PTR_PTR_1126ae968;
  func_0x000107c3e470(PTR_PTR_1126ae968);
  func_0x000107c61180();
  func_0x000107c3d0cc(puVar2,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10096dfb8; end: 10096dfe7; +[SCAttributedActivationTask authenticationSessionAuthenticatedServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096dfb8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309aac0) = 10;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309aac8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10096dfe8; end: 10096e027;  */

void FUN_10096dfe8(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096dfcc();
  FUN_100082720("SCBasemapPersonalizationServiceProviderWrapperScopeInitializationPluginProvider",
                0x4f,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096e028; end: 10096e02f;  */

void FUN_10096e028(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cfdd40);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096e030; end: 10096e0b3;  */

void FUN_10096e030(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_101cfdd40,param_2,&UNK_101cfdd44,param_2,&UNK_101cfdd6c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096e0b4; end: 10096e0bf;  */

undefined ** FUN_10096e0b4(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096e0c0; end: 10096e14b;  */

void FUN_10096e0c0(undefined8 param_1)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10096e14c,param_1);
  return;
}



/* Entry: 10096e14c; end: 10096e153;  */

void FUN_10096e14c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cdc488);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096e154; end: 10096e1d7;  */

void FUN_10096e154(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101cdc488,param_2,FUN_10096e1d8,param_2,&UNK_101cdc48c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096e1d8; end: 10096e1ff;  */

void FUN_10096e1d8(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10096e200; end: 10096e20b;  */

void FUN_10096e200(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100294760();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a9098;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar8);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 10096e20c; end: 10096e4ab;  */

void FUN_10096e20c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100294760();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9098;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef18660);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar7);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010efc82c0);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c3e740(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 10096e4ac; end: 10096e5df; -[SCBatteryPageViewReporterEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010096e528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010096e55c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010096e5a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010096e5b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010096e5a8) */
/* WARNING: Removing unreachable block (ram,0x00010096e560) */
/* WARNING: Removing unreachable block (ram,0x00010096e52c) */
/* WARNING: Removing unreachable block (ram,0x00010096e5b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096e4ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c61160(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c56330();
  func_0x000107c57a7c(puVar1,param_2,0x11);
  func_0x000107c56954(puVar1,param_2,&PTR____CFConstantStringClassReference_110e05558);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272a36c;
    func_0x000107c61148(param_1);
  }
  func_0x000107c3e710(param_1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10096e5e0; end: 10096e69f; -[SCBatteryPageViewReporter initWithObserveQueue:batteryLogger:] */

undefined1 *
FUN_10096e5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126ea770;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10096e6a0; end: 10096e7ab; -[SCBatteryPageViewReporter subscribeOnCurrentPageEvent:] */

void FUN_10096e6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_48,param_1);
  uVar1 = param_3;
  func_0x000107c4da80(param_3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x000107c5c320(uVar1);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10096e7ac; end: 10096e7e7;  */

void FUN_10096e7ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10096e7e8; end: 10096e80f;  */

undefined ** FUN_10096e7e8(void)

{
  return &PTR_DAT_113082b10;
}



/* Entry: 10096e810; end: 10096e84f;  */

void FUN_10096e810(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  func_0x00010096e7f4();
  FUN_100082720("SCBitmojiDeepLinkEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10096e850; end: 10096e857;  */

void FUN_10096e850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101c9a9e0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096e858; end: 10096e8db;  */

void FUN_10096e858(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  FUN_1005d8744(0,&UNK_101c9a9e0,param_2,FUN_10096e8dc,param_2,&UNK_101c9a9e4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 10096e8dc; end: 10096e947;  */

void FUN_10096e8dc(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10096e948; end: 10096f387;  */

void FUN_10096e948(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_1002bb550();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  *(undefined8 *)(param_2 + 0x78) = uStack_b8;
  *(undefined8 *)(param_2 + 0x80) = uStack_c0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  FUN_1000285a8(0x112e11a60,&UNK_10d9ece28);
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar15 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x18) = puVar13;
  FUN_1000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  uVar15 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x20) = puVar13;
  FUN_1000285a8(0x112e028b0,&UNK_10d9ecc00);
  func_0x000107c610f8();
  uVar15 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  FUN_10017da58();
  puVar13 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar15);
  *(undefined **)(param_2 + 0x28) = puVar13;
  puVar13 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x30) = puVar13;
  puVar13 = PTR_PTR_1126a8e18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar13;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef1a2d0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010effe2e0);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar13);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efc31c0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0087c0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0087f0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010effe330);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  lVar17 = *(long *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f008810);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(uVar15);
  uVar18 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f008830);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  uVar18 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  uVar18 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010effe380);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar16);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar17 != 0) {
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar12);
    func_0x000107c61574(uStack_d0);
    func_0x000107c61574(uStack_d8);
    func_0x000107c61574(uStack_e0);
    *(long *)(param_2 + 0x90) = lVar17;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f388);
  (*pcVar1)();
}



/* Entry: 10096f388; end: 10096f38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096f388(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1002303b0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_1130147f0) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10096f390; end: 10096f463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10096f390(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1002303b0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_1130147f0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}


