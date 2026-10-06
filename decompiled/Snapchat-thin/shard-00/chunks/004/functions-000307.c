/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006853ac; end: 1006854a7;  */

void FUN_1006853ac(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_1126e3030;
    func_0x000107c61158(PTR_PTR_1126e3030);
    uVar3 = param_2;
    func_0x000107c6115c(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61174(param_2);
      ppuStack_38 = &PTR_DAT_110d98ee8;
      uStack_40 = param_2;
      FUN_1000de59c(&uStack_30,&ppuStack_38,&uStack_40,FUN_1006854a8);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_1000df524(&uStack_30);
      func_0x000107c61170(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_1006855b0(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_1006855a0();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1006854a8; end: 10068559f;  */

void FUN_1006854a8(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)0x38;
  func_0x000107c60e20();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110d98f28;
  puVar1[3] = &PTR_DAT_110875398;
  puVar2 = puVar5;
  func_0x000107c61174();
  func_0x000107c6110c();
  puVar3 = puVar2;
  FUN_1000de520();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  puVar1[5] = puVar3[1];
  puVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_1006855a0();
    } while (extraout_w10 != 0);
  }
  func_0x000107c61174(puVar5);
  puVar1[6] = puVar5;
  func_0x000107c61108(puVar2);
  func_0x000107c61170(puVar5);
  puVar1[3] = &PTR_DAT_110d98f78;
  *param_1 = puVar1 + 3;
  param_1[1] = puVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_1006855b0(&uStack_50);
  return;
}



/* Entry: 1006855a0; end: 1006855af;  */

void FUN_1006855a0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1006855b0; end: 1006855d7;  */

long FUN_1006855b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1006855d8; end: 1006855df;  */

void FUN_1006855d8(void)

{
  return;
}



/* Entry: 1006855e0; end: 10068564b;  */

undefined1  [16] FUN_1006855e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c41214(uVar2);
  func_0x000107c61180();
  FUN_100685674();
  func_0x0001006856d8();
  func_0x000107c61108(lVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10068564c; end: 100685673; -[SCDataProvider data] */

void FUN_10068564c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100685674; end: 1006856cf;  */

undefined1  [16] FUN_100685674(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c61178(param_1);
  func_0x000107c3eea8();
  func_0x000107c4adac(param_1);
  FUN_1006856d0();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 1006856d0; end: 1006856e7;  */

void FUN_1006856d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1006856e8; end: 10068570f;  */

long FUN_1006856e8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 100685710; end: 100685717;  */

long FUN_100685710(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  func_0x000107c6110c();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110d98ee8;
    func_0x000107c61174(lVar4);
    FUN_1005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  func_0x000107c61170(uVar3);
  func_0x0001005f2294(lVar1);
  func_0x000107c61108(lVar2);
  return lVar1;
}



/* Entry: 100685718; end: 1006857ab;  */

long FUN_100685718(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110d98ee8;
    func_0x000107c61174(lVar3);
    FUN_1005f2030(param_1,&ppuStack_38,lVar3);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  func_0x000107c61170(uVar2);
  func_0x0001005f2294(param_1);
  func_0x000107c61108(lVar1);
  return param_1;
}



/* Entry: 1006857ac; end: 1006857b7;  */

void FUN_1006857ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1006857b8; end: 1006859c7;  */

void FUN_1006857b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x18);
  return;
}



/* Entry: 1006859c8; end: 100685a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006859c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113035b58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113035b60) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100685a2c; end: 100685a2f;  */

void FUN_100685a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 100685a30; end: 100685a4f;  */

void FUN_100685a30(void)

{
  func_0x000107c61168(&PTR_PTR_112926640);
  return;
}



/* Entry: 100685a50; end: 100685b3f;  */

void FUN_100685a50(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(unaff_x19 + 0x10);
  return;
}



/* Entry: 100685b40; end: 100685b4f;  */

void FUN_100685b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000008;
  undefined1 uStack_11;
  
  uStack0000000000000008 = param_2;
  FUN_1000df1ac(&uStack_11,&stack0x00000008,8);
  return;
}



/* Entry: 100685b50; end: 100685b87;  */

void FUN_100685b50(void)

{
  FUN_100685b40();
  return;
}



/* Entry: 100685b88; end: 100685d5f;  */

undefined1  [16] FUN_100685b88(undefined8 param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar2;
  undefined8 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x25;
  undefined1 auVar9 [16];
  long *aplStack_68 [3];
  
  plVar5 = param_2 + 3;
  func_0x000100685b68();
  plVar8 = (long *)param_2[1];
  if (plVar8 != (long *)0x0) {
    func_0x000100686abc();
    if ((bool)in_ZR) {
      unaff_x25 = (long *)(extraout_x8 & (ulong)plVar5);
    }
    else {
      in_NG = (long)plVar5 - (long)plVar8 < 0;
      unaff_x25 = plVar5;
      if (plVar8 <= plVar5) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar1 * (long)plVar8);
      }
    }
    plVar7 = *(long **)(*param_2 + (long)unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      do {
        while( true ) {
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_100685c48;
          plVar6 = (long *)plVar7[1];
          if (plVar6 != plVar5) break;
          in_NG = plVar7[2] - *param_3 < 0;
          if (plVar7[2] == *param_3) {
            uVar3 = 0;
            goto LAB_100685d48;
          }
        }
        if (((ulong)plVar8 & extraout_x8) == 0) {
          plVar6 = (long *)((ulong)plVar6 & extraout_x8);
        }
        else if (plVar8 <= plVar6) {
          uVar1 = 0;
          if (plVar8 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)plVar8;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar8);
        }
        in_NG = (long)plVar6 - (long)unaff_x25 < 0;
      } while (plVar6 == unaff_x25);
    }
  }
LAB_100685c48:
  func_0x000100686848(aplStack_68);
  FUN_100686854();
  func_0x0001006868bc(param_2[3]);
  if ((plVar8 == (long *)0x0) ||
     (func_0x000100b4495c(param_1,(int)param_2[4],(float)plVar8), (bool)in_NG)) {
    func_0x0001006868c8();
    uVar2 = plVar8 == (long *)0x3;
    func_0x0001006868e0();
    FUN_1006868f8(param_2);
    plVar8 = (long *)param_2[1];
    func_0x000100686abc();
    if ((bool)uVar2) {
      unaff_x25 = (long *)(extraout_x8_00 & (ulong)plVar5);
    }
    else {
      unaff_x25 = plVar5;
      if (plVar8 <= plVar5) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar8;
        }
        unaff_x25 = (long *)((long)plVar5 - uVar1 * (long)plVar8);
      }
    }
  }
  plVar7 = aplStack_68[0];
  lVar4 = *param_2;
  plVar5 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_2 + 2;
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar5;
    if (*aplStack_68[0] != 0) {
      plVar5 = *(long **)(*aplStack_68[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar5) {
        uVar1 = 0;
        if (plVar8 != (long *)0x0) {
          uVar1 = (ulong)plVar5 / (ulong)plVar8;
        }
        plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar8);
      }
      *(long **)(lVar4 + (long)plVar5 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  param_2[3] = param_2[3] + 1;
  FUN_100686ae0(aplStack_68);
  uVar3 = 1;
LAB_100685d48:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = plVar7;
  return auVar9;
}



/* Entry: 100685d60; end: 100685dab;  */

void FUN_100685d60(undefined8 param_1,undefined8 param_2)

{
  FUN_100685b88(param_1,param_2,param_2);
  return;
}



/* Entry: 100685dac; end: 10068683f;  */

void FUN_100685dac(long param_1,ulong *param_2,long ****param_3,long *param_4)

{
  long **pplVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long *plVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  ulong uVar12;
  undefined8 *puVar13;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  code *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x9;
  long *plVar14;
  long ****extraout_x9_00;
  undefined8 *puVar15;
  undefined8 *extraout_x9_01;
  ulong uVar16;
  ulong extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long ****pppplVar17;
  ulong extraout_x10;
  long *plVar18;
  long *plVar19;
  long *extraout_x10_00;
  undefined8 *extraout_x11;
  undefined8 *puVar20;
  long lVar21;
  bool bVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  undefined8 *puVar25;
  long ****pppplVar26;
  long ****unaff_x27;
  float fVar27;
  long lVar28;
  float fVar29;
  undefined1 auStack_848 [32];
  undefined1 uStack_828;
  undefined1 auStack_820 [104];
  undefined1 auStack_7b8 [176];
  undefined1 uStack_708;
  undefined1 auStack_700 [160];
  undefined1 uStack_660;
  long ***ppplStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined1 auStack_640 [168];
  undefined1 auStack_598 [200];
  long ***ppplStack_4d0;
  long **pplStack_4c8;
  long *plStack_4c0;
  ulong uStack_2c0;
  long *plStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  long ***ppplStack_2a0;
  long ***ppplStack_298;
  long lStack_290;
  long ***ppplStack_288;
  undefined4 uStack_280;
  undefined1 uStack_27c;
  undefined4 uStack_278;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar11 = *param_2;
  pppplVar23 = param_3;
  uStack_2c0 = uVar11;
  func_0x000100685d94(param_1 + 0xa0);
  func_0x000100686b1c(*param_3);
  lVar21 = 0xc0;
  if ((bool)in_ZR) {
    lVar21 = extraout_x9;
  }
  pppplVar24 = *(long *****)(extraout_x8 + lVar21);
  ppplVar8 = (long ***)*param_2;
  pplVar1 = (long **)param_2[1];
  ppplStack_4d0 = (long ***)pppplVar24;
  pplStack_4c8 = (long **)ppplVar8;
  plStack_4c0 = (long *)pplVar1;
  if (pplVar1 != (long **)0x0) {
    do {
      FUN_10064ad10();
    } while (extraout_w10 != 0);
  }
  pppplVar26 = *(long *****)(param_1 + 0x58);
  if (pppplVar26 != (long ****)0x0) {
    func_0x000100686c9c();
    if ((bool)in_ZR) {
      unaff_x27 = (long ****)(extraout_x8_00 & (ulong)pppplVar24);
      in_ZR = true;
    }
    else {
      in_NG = (long)pppplVar24 - (long)pppplVar26 < 0;
      in_ZR = pppplVar24 == pppplVar26;
      unaff_x27 = pppplVar24;
      if (pppplVar26 <= pppplVar24) {
        uVar12 = 0;
        if (pppplVar26 != (long ****)0x0) {
          uVar12 = (ulong)pppplVar24 / (ulong)pppplVar26;
        }
        unaff_x27 = (long ****)((long)pppplVar24 - uVar12 * (long)pppplVar26);
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x50) + (long)unaff_x27 * 8);
    if (plVar14 != (long *)0x0) {
      do {
        while( true ) {
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) goto LAB_100685eb0;
          pppplVar17 = (long ****)plVar14[1];
          if (pppplVar17 != pppplVar24) break;
          in_NG = plVar14[2] - (long)pppplVar24 < 0;
          in_ZR = (long ****)plVar14[2] == pppplVar24;
          if ((bool)in_ZR) {
            bVar22 = false;
            goto LAB_100685fd0;
          }
        }
        if (((ulong)pppplVar26 & extraout_x8_00) == 0) {
          pppplVar17 = (long ****)((ulong)pppplVar17 & extraout_x8_00);
        }
        else if (pppplVar26 <= pppplVar17) {
          uVar12 = 0;
          if (pppplVar26 != (long ****)0x0) {
            uVar12 = (ulong)pppplVar17 / (ulong)pppplVar26;
          }
          pppplVar17 = (long ****)((long)pppplVar17 - uVar12 * (long)pppplVar26);
        }
        in_NG = (long)pppplVar17 - (long)unaff_x27 < 0;
        in_ZR = pppplVar17 == unaff_x27;
      } while ((bool)in_ZR);
    }
  }
LAB_100685eb0:
  ppplVar7 = (long ***)0x28;
  func_0x000107c60e20();
  pppplVar17 = (long ****)(param_1 + 0x60);
  lStack_290 = 1;
  *ppplVar7 = (long **)0x0;
  ppplVar7[1] = (long **)pppplVar24;
  ppplVar7[2] = (long **)pppplVar24;
  ppplVar7[3] = (long **)ppplVar8;
  ppplVar7[4] = pplVar1;
  pplStack_4c8 = (long **)0x0;
  plStack_4c0 = (long *)0x0;
  ppplStack_2a0 = ppplVar7;
  ppplStack_298 = (long ***)pppplVar17;
  func_0x0001006868bc(*(undefined8 *)(param_1 + 0x68));
  if (pppplVar26 == (long ****)0x0) {
LAB_100685f04:
    func_0x000100686b2c();
    uVar5 = (long)pppplVar26 + -3 < 0;
    uVar4 = pppplVar26 == (long ****)0x3;
    func_0x0001006868e0();
    FUN_100686b44(param_1 + 0x50);
    pppplVar26 = *(long *****)(param_1 + 0x58);
    func_0x000100686c9c();
    if ((bool)uVar4) {
      in_ZR = 1;
      unaff_x27 = (long ****)(extraout_x8_01 & (ulong)pppplVar24);
    }
    else {
      uVar5 = (long)pppplVar24 - (long)pppplVar26 < 0;
      in_ZR = pppplVar24 == pppplVar26;
      unaff_x27 = pppplVar24;
      if (pppplVar26 <= pppplVar24) {
        uVar12 = 0;
        if (pppplVar26 != (long ****)0x0) {
          uVar12 = (ulong)pppplVar24 / (ulong)pppplVar26;
        }
        unaff_x27 = (long ****)((long)pppplVar24 - uVar12 * (long)pppplVar26);
      }
    }
  }
  else {
    func_0x000100b4495c();
    uVar5 = 0;
    if ((bool)in_NG) goto LAB_100685f04;
  }
  in_NG = uVar5;
  lVar21 = *(long *)(param_1 + 0x50);
  puVar25 = *(undefined8 **)(lVar21 + (long)unaff_x27 * 8);
  if (puVar25 == (undefined8 *)0x0) {
    *ppplVar7 = (long **)*pppplVar17;
    *pppplVar17 = ppplVar7;
    *(long *****)(lVar21 + (long)unaff_x27 * 8) = pppplVar17;
    if (*ppplVar7 != (long **)0x0) {
      func_0x000107c35a44();
      if ((bool)in_ZR) {
        pppplVar17 = (long ****)((ulong)extraout_x9_00 & extraout_x10);
        in_ZR = true;
      }
      else {
        in_NG = (long)extraout_x9_00 - (long)pppplVar26 < 0;
        in_ZR = extraout_x9_00 == pppplVar26;
        pppplVar17 = extraout_x9_00;
        if (pppplVar26 <= extraout_x9_00) {
          uVar12 = 0;
          if (pppplVar26 != (long ****)0x0) {
            uVar12 = (ulong)extraout_x9_00 / (ulong)pppplVar26;
          }
          pppplVar17 = (long ****)((long)extraout_x9_00 - uVar12 * (long)pppplVar26);
        }
      }
      *(long ****)(extraout_x8_02 + (long)pppplVar17 * 8) = ppplVar7;
    }
  }
  else {
    *ppplVar7 = (long **)*puVar25;
    *puVar25 = ppplVar7;
  }
  ppplStack_2a0 = (long ***)0x0;
  *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
  FUN_100686cb8(&ppplStack_2a0);
  bVar22 = true;
LAB_100685fd0:
  pppplVar26 = (long ****)&pplStack_4c8;
  FUN_100683368();
  lVar21 = *(long *)(param_1 + 0x180);
  if (lVar21 != 0) {
    ppplVar8 = *param_3;
    ppplStack_2a0 = (long ***)CONCAT44(ppplStack_2a0._4_4_,*(undefined4 *)(ppplVar8 + 0x15));
    FUN_100686d00();
    func_0x000107c60c94(&ppplStack_298,ppplVar8);
    uStack_280 = SUB84(*param_3,0);
    FUN_100686db8();
    uStack_27c = SUB81(*param_3,0);
    FUN_100686eec();
    uStack_278 = 0;
    pppplVar23 = &ppplStack_2a0;
    func_0x0001006870c8();
    *(char *)(*param_3 + 0xb) = (char)lVar21;
    pppplVar26 = &ppplStack_298;
    func_0x000107c60ca0();
  }
  if (!bVar22) {
    func_0x000100686b1c(*param_3);
    lVar21 = 0xc0;
    if ((bool)in_ZR) {
      lVar21 = extraout_x9_04;
    }
    lVar21 = extraout_x8_09 + lVar21 + 8;
    FUN_1005d466c();
    ppplStack_298 = (long ***)0x0;
    ppplStack_2a0 = (long ***)pppplVar24;
    lStack_290 = lVar21;
    ppplStack_288 = (long ***)pppplVar23;
    FUN_1003a91d4(&UNK_10f742bc0);
    FUN_1003a9204(&ppplStack_4d0);
    ppplVar8 = (long ***)pplStack_4c8;
    pppplVar23 = (long ****)ppplStack_4d0;
    if (-1 < (long)plStack_4c0) {
      ppplVar8 = (long ***)((ulong)plStack_4c0 >> 0x38);
      pppplVar23 = &ppplStack_4d0;
    }
    func_0x000107c316d8(&ppplStack_2a0,pppplVar23,ppplVar8,&UNK_10f742bd5);
    pppplVar23 = (long ****)ppplStack_2a0;
    if (-1 < lStack_290) {
      pppplVar23 = &ppplStack_2a0;
    }
    func_0x000107c316dc(pppplVar23,"unknown",0xfb);
    goto LAB_100686780;
  }
  FUN_10054f908();
  func_0x00010068718c(*param_3);
  auStack_700[0] = 0;
  uStack_660 = 0;
  uStack_650 = 0xffffffffffffffff;
  uStack_648 = 0xffffffffffffffff;
  ppplStack_658 = (long ***)pppplVar26;
  FUN_1006871a8(auStack_640,auStack_700);
  FUN_100687214(auStack_598,&ppplStack_658);
  auStack_7b8[0] = 0;
  uStack_708 = 0;
  FUN_1006872c4(auStack_820);
  auStack_848[0] = 0;
  uStack_828 = 0;
  pppplVar23 = &ppplStack_4d0;
  FUN_1006873d8(pppplVar23,auStack_598,auStack_7b8,auStack_820,auStack_848);
  func_0x000107c60d9c();
  plVar9 = (long *)0x2b8;
  func_0x000107c60e20();
  plVar14 = (long *)(param_1 + 0x38);
  uStack_2a8 = 1;
  *plVar9 = 0;
  plVar9[1] = 0;
  plVar9[2] = uVar11;
  ppplVar7 = param_3[1];
  ppplVar8 = *param_3;
  plStack_2b8 = plVar9;
  plStack_2b0 = plVar14;
  if (param_3[1] != (long ***)0x0) {
    do {
      FUN_10064ad10();
    } while (extraout_w10_00 != 0);
  }
  lVar28 = param_4[1];
  lVar21 = *param_4;
  if (param_4[1] != 0) {
    do {
      FUN_10064ad10();
    } while (extraout_w10_01 != 0);
  }
  FUN_100687540(&ppplStack_2a0,&ppplStack_4d0);
  plVar9[4] = (long)ppplVar7;
  plVar9[3] = (long)ppplVar8;
  uStack_78 = 0;
  uStack_70 = 0;
  plVar9[5] = 0;
  plVar9[7] = lVar28;
  plVar9[6] = lVar21;
  uStack_88 = 0;
  uStack_80 = 0;
  uVar11 = 0;
  FUN_100687540(plVar9 + 8);
  fVar27 = (float)lVar21;
  *(undefined4 *)(plVar9 + 0x4a) = 0xffffffff;
  plVar9[0x4b] = (long)pppplVar23;
  *(undefined1 *)(plVar9 + 0x4c) = 0;
  *(undefined1 *)(plVar9 + 0x4e) = 0;
  *(undefined1 *)(plVar9 + 0x50) = 0;
  *(undefined1 *)(plVar9 + 0x51) = 0;
  plVar9[0x52] = (long)pppplVar23;
  *(undefined4 *)(plVar9 + 0x53) = 0;
  plVar9[0x54] = 0;
  plVar9[0x56] = 0;
  plVar9[0x55] = 0;
  FUN_1006875a4(&ppplStack_2a0);
  FUN_100683394(&uStack_88);
  puVar13 = &uStack_78;
  func_0x00010067c914();
  FUN_100687688();
  plVar9[1] = (long)puVar13;
  FUN_100687688();
  plVar9[1] = (long)puVar13;
  puVar25 = *(undefined8 **)(param_1 + 0x30);
  if (puVar25 != (undefined8 *)0x0) {
    uVar12 = (long)puVar25 - 1;
    if (((ulong)puVar25 & uVar12) == 0) {
      puVar15 = (undefined8 *)(uVar12 & (ulong)puVar13);
      in_NG = false;
    }
    else {
      in_NG = (long)puVar13 - (long)puVar25 < 0;
      puVar15 = puVar13;
      if (puVar25 <= puVar13) {
        uVar16 = 0;
        if (puVar25 != (undefined8 *)0x0) {
          uVar16 = (ulong)puVar13 / (ulong)puVar25;
        }
        puVar15 = (undefined8 *)((long)puVar13 - uVar16 * (long)puVar25);
      }
    }
    plVar18 = *(long **)(*(long *)(param_1 + 0x28) + (long)puVar15 * 8);
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_100686230;
          puVar20 = (undefined8 *)plVar18[1];
          if (puVar20 != puVar13) break;
          in_NG = plVar18[2] - plVar9[2] < 0;
          if (plVar18[2] == plVar9[2]) goto LAB_100686474;
        }
        if (((ulong)puVar25 & uVar12) == 0) {
          puVar20 = (undefined8 *)((ulong)puVar20 & uVar12);
        }
        else if (puVar25 <= puVar20) {
          uVar16 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar16 = (ulong)puVar20 / (ulong)puVar25;
          }
          puVar20 = (undefined8 *)((long)puVar20 - uVar16 * (long)puVar25);
        }
        in_NG = (long)puVar20 - (long)puVar15 < 0;
      } while (puVar20 == puVar15);
    }
  }
LAB_100686230:
  func_0x0001006868bc(*(undefined8 *)(param_1 + 0x40));
  fVar29 = *(float *)(param_1 + 0x48);
  if ((puVar25 == (undefined8 *)0x0) || (func_0x000100b4495c(), (bool)in_NG)) {
    uVar12 = 1;
    if ((undefined8 *)0x2 < puVar25) {
      uVar12 = (ulong)(((ulong)puVar25 & (long)puVar25 - 1U) != 0);
    }
    puVar13 = (undefined8 *)(uVar12 | (long)puVar25 << 1);
    if (puVar13 <= (undefined8 *)(long)(fVar27 / fVar29)) {
      puVar13 = (undefined8 *)(long)(fVar27 / fVar29);
    }
    if ((long)puVar13 - 1U == 0) {
      puVar13 = (undefined8 *)0x2;
    }
    else if (((ulong)puVar13 & (long)puVar13 - 1U) != 0) {
      func_0x000107c60c44();
      puVar25 = *(undefined8 **)(param_1 + 0x30);
    }
    if (puVar25 < puVar13) {
LAB_1006862ac:
      if ((ulong)puVar13 >> 0x3d != 0) {
        func_0x000104bd35f4();
LAB_100686780:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100686784);
        (*pcVar3)();
      }
      uVar11 = 0;
      func_0x000107c60e20();
      FUN_1006876ac(param_1 + 0x28);
      puVar25 = (undefined8 *)0x0;
      *(undefined8 **)(param_1 + 0x30) = puVar13;
      lVar21 = *(long *)(param_1 + 0x28);
      while (puVar13 != puVar25) {
        func_0x000100686ab0();
        lVar21 = extraout_x8_03;
        puVar25 = extraout_x9_01;
      }
      plVar18 = (long *)*plVar14;
      puVar25 = puVar13;
      if (plVar18 != (long *)0x0) {
        puVar15 = (undefined8 *)plVar18[1];
        uVar16 = (long)puVar13 - 1;
        uVar12 = 0;
        if (puVar13 != (undefined8 *)0x0) {
          uVar12 = (ulong)puVar15 / (ulong)puVar13;
        }
        puVar20 = puVar15;
        if (puVar13 <= puVar15) {
          puVar20 = (undefined8 *)((long)puVar15 - uVar12 * (long)puVar13);
        }
        if (((ulong)puVar13 & uVar16) == 0) {
          puVar20 = (undefined8 *)((ulong)puVar15 & uVar16);
        }
        *(long **)(lVar21 + (long)puVar20 * 8) = plVar14;
        while (plVar19 = plVar18, plVar18 = (long *)*plVar19, plVar18 != (long *)0x0) {
          puVar15 = (undefined8 *)plVar18[1];
          if (((ulong)puVar13 & uVar16) == 0) {
            puVar15 = (undefined8 *)((ulong)puVar15 & uVar16);
          }
          else if (puVar13 <= puVar15) {
            uVar12 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar12 = (ulong)puVar15 / (ulong)puVar13;
            }
            puVar15 = (undefined8 *)((long)puVar15 - uVar12 * (long)puVar13);
          }
          if (puVar15 != puVar20) {
            if (*(long *)(lVar21 + (long)puVar15 * 8) == 0) {
              *(long **)(lVar21 + (long)puVar15 * 8) = plVar19;
              puVar20 = puVar15;
            }
            else {
              *plVar19 = *plVar18;
              func_0x000107c359c8();
              lVar21 = extraout_x8_04;
              uVar16 = extraout_x9_02;
              plVar18 = extraout_x10_00;
              puVar20 = extraout_x11;
            }
          }
        }
      }
    }
    else if (puVar13 < puVar25) {
      puVar15 = (undefined8 *)(long)((float)*(ulong *)(param_1 + 0x40) / *(float *)(param_1 + 0x48))
      ;
      if ((puVar25 < (undefined8 *)0x3) || (((ulong)puVar25 & (long)puVar25 - 1U) != 0)) {
        func_0x000107c60c44();
      }
      else {
        func_0x000107c359c0();
      }
      if (puVar13 <= puVar15) {
        puVar13 = puVar15;
      }
      if (puVar13 < puVar25) {
        if (puVar13 != (undefined8 *)0x0) goto LAB_1006862ac;
        uVar11 = 0;
        FUN_1006876ac(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x30) = 0;
        puVar25 = (undefined8 *)0x0;
      }
      else {
        puVar25 = *(undefined8 **)(param_1 + 0x30);
      }
    }
  }
  puVar13 = (undefined8 *)plVar9[1];
  uVar12 = (long)puVar25 - 1;
  if (((ulong)puVar25 & uVar12) == 0) {
    puVar13 = (undefined8 *)(uVar12 & (ulong)puVar13);
  }
  else if (puVar25 <= puVar13) {
    uVar16 = 0;
    if (puVar25 != (undefined8 *)0x0) {
      uVar16 = (ulong)puVar13 / (ulong)puVar25;
    }
    puVar13 = (undefined8 *)((long)puVar13 - uVar16 * (long)puVar25);
  }
  lVar21 = *(long *)(param_1 + 0x28);
  plVar18 = *(long **)(lVar21 + (long)puVar13 * 8);
  if (plVar18 == (long *)0x0) {
    *plVar9 = *plVar14;
    *plVar14 = (long)plVar9;
    *(long **)(lVar21 + (long)puVar13 * 8) = plVar14;
    if (*plVar9 != 0) {
      puVar13 = *(undefined8 **)(*plVar9 + 8);
      if (((ulong)puVar25 & uVar12) == 0) {
        puVar13 = (undefined8 *)((ulong)puVar13 & uVar12);
      }
      else if (puVar25 <= puVar13) {
        uVar12 = 0;
        if (puVar25 != (undefined8 *)0x0) {
          uVar12 = (ulong)puVar13 / (ulong)puVar25;
        }
        puVar13 = (undefined8 *)((long)puVar13 - uVar12 * (long)puVar25);
      }
      *(long **)(lVar21 + (long)puVar13 * 8) = plVar9;
    }
  }
  else {
    *plVar9 = *plVar18;
    *plVar18 = (long)plVar9;
  }
  *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + 1;
  plStack_2b8 = (long *)0x0;
LAB_100686474:
  FUN_1006876c4(&plStack_2b8);
  FUN_1006875a4(&ppplStack_4d0);
  FUN_100687584(auStack_848);
  func_0x0001006875dc(auStack_820);
  FUN_100687608(auStack_7b8);
  func_0x000100687658(auStack_598);
  func_0x000100687628(auStack_640);
  puVar10 = auStack_700;
  func_0x000100687628();
  FUN_1006876fc();
  puVar10[0x208] = *(undefined1 *)(*param_3 + 0xb);
  pppplVar24 = (long ****)*param_3;
  FUN_100687ad4(pppplVar24);
  pppplVar23 = pppplVar24;
  if ((bRam00000001137f4dc0 & 1) == 0) {
    pppplVar23 = (long ****)0x1137f4dc0;
    func_0x000107c60e48();
    if ((int)pppplVar23 != 0) {
      bVar2 = 0xe8;
      FUN_1005ec950();
      bRam00000001137f4db8 = bVar2;
      pppplVar23 = (long ****)0x1137f4dc0;
      func_0x000107c60e4c(0x1137f4dc0);
    }
  }
  if (((bRam00000001137f4db8 & 1) == 0) && ((uVar11 & 1) == 0)) {
    FUN_1006881ec();
    func_0x0001006881f4();
    if (extraout_x8_05 == 0) goto LAB_1006865c4;
  }
  FUN_1006881ec();
  func_0x0001006881f4();
  if (extraout_x8_06 != 0) {
    uVar5 = (uVar11 & 1) == 0;
    if ((bool)uVar5) {
      pppplVar24 = (long ****)0x0;
    }
    plVar14 = *(long **)(param_1 + 400);
    FUN_1006881ec();
    func_0x000100686b1c(*param_3);
    lVar21 = 0xc0;
    if ((bool)uVar5) {
      lVar21 = extraout_x9_03;
    }
    func_0x000107c60de8(&ppplStack_4d0,*(undefined8 *)(extraout_x8_07 + lVar21));
    (**(code **)(*plVar14 + 0x38))(&ppplStack_2a0,plVar14,pppplVar23,pppplVar24,&ppplStack_4d0);
    func_0x000107c60ca0(&ppplStack_4d0);
    if (ppplStack_2a0 != ppplStack_298) {
      if (puVar10[0x200] == '\x01') {
        if (*(long *)(puVar10 + 0x1e8) != 0) {
          *(long *)(puVar10 + 0x1f0) = *(long *)(puVar10 + 0x1e8);
          func_0x000107c60e14();
          *(undefined8 *)(puVar10 + 0x1e8) = 0;
          *(undefined8 *)(puVar10 + 0x1f0) = 0;
          *(undefined8 *)(puVar10 + 0x1f8) = 0;
        }
        func_0x000107c35a18(ppplStack_2a0);
      }
      else {
        func_0x000107c35a18();
        puVar10[0x200] = 1;
      }
    }
    pppplVar23 = &ppplStack_2a0;
    FUN_100688250(pppplVar23);
  }
LAB_1006865c4:
  if (*(char *)(param_1 + 0x168) == '\x01') {
    (**(code **)**(undefined8 **)(param_1 + 0x160))(&ppplStack_2a0);
    *(long ****)(puVar10 + 0x1a8) = ppplStack_2a0;
    uVar6 = (undefined4)*(undefined8 *)(param_1 + 0x160);
    func_0x0001006882d4();
    (*extraout_x8_08)();
    *(undefined4 *)(puVar10 + 0x1c0) = uVar6;
    pppplVar24 = (long ****)*param_3;
    pppplVar23 = pppplVar24;
    if (*(int *)(pppplVar24 + 0x15) != 7) {
      pppplVar23 = *(long *****)(param_1 + 0x150);
      FUN_100686d00();
      (*(code *)(*pppplVar23)[6])
                (pppplVar23,pppplVar24,*param_3 + 0x4f,0,*(undefined4 *)(*param_3 + 0x15));
      *(long *****)(puVar10 + 0x1b8) = pppplVar23;
    }
  }
  if ((*(char *)(param_1 + 0x158) == '\x01') && (((ulong)(*param_3)[0x4a] & 1) == 0)) {
    FUN_1006876fc();
    pppplVar24 = pppplVar23;
    func_0x000107c60d9c();
    FUN_100688334(*(undefined8 *)(param_1 + 0x150),pppplVar23,pppplVar24);
  }
  else {
    FUN_1006876fc();
    func_0x000107c2c7cc(*(undefined8 *)(param_1 + 0x150),pppplVar23,(*param_3)[0x49],
                        *(undefined1 *)(*param_3 + 0x4a));
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_1006876fc();
  }
  return;
}



/* Entry: 100686840; end: 100686853;  */

void FUN_100686840(void)

{
  return;
}



/* Entry: 100686854; end: 1006868af;  */

void FUN_100686854(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  lVar2 = param_4[1];
  uVar3 = *param_4;
  puVar1[3] = param_4[1];
  puVar1[2] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10064ad10();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1006868b0; end: 1006868f7;  */

void FUN_1006868b0(void)

{
  return;
}



/* Entry: 1006868f8; end: 1006869a3;  */

void FUN_1006868f8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar5;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar2 = param_1;
  uVar4 = param_2;
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    func_0x000107c60c44();
    uVar2 = param_2;
  }
  uVar8 = *(ulong *)(param_1 + 8);
  if (uVar8 < param_2) {
LAB_100686940:
    func_0x000100686848();
    if (uVar4 == 0) {
      FUN_100686a88(uVar2);
      *(undefined8 *)(uVar2 + 8) = 0;
    }
    else {
      lVar3 = uVar2 + 8;
      FUN_1006869a4(lVar3);
      FUN_100686a88(uVar2,lVar3);
      func_0x000100686aa0();
      uVar8 = extraout_x9;
      while (uVar4 != uVar8) {
        func_0x000100686ab0();
        uVar8 = extraout_x9_00;
      }
      if (*(long *)(uVar2 + 0x10) != 0) {
        func_0x000107c359f0();
        func_0x000107c359ec();
        lVar3 = extraout_x8;
        plVar6 = extraout_x9_01;
        uVar2 = extraout_x10;
        uVar8 = extraout_x11;
        while (plVar5 = plVar6, plVar6 = (long *)*plVar5, plVar6 != (long *)0x0) {
          uVar7 = plVar6[1];
          if ((uVar4 & uVar2) == 0) {
            uVar7 = uVar7 & uVar2;
          }
          else if (uVar4 <= uVar7) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar7 / uVar4;
            }
            uVar7 = uVar7 - uVar1 * uVar4;
          }
          if (uVar7 != uVar8) {
            if (*(long *)(lVar3 + uVar7 * 8) == 0) {
              *(long **)(lVar3 + uVar7 * 8) = plVar5;
              uVar8 = uVar7;
            }
            else {
              *plVar5 = *plVar6;
              func_0x000107c359c8();
              lVar3 = extraout_x8_00;
              plVar6 = extraout_x9_02;
              uVar2 = extraout_x10_00;
              uVar8 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (param_2 < uVar8) {
    uVar2 = (ulong)((float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
    if ((uVar8 < 3) || ((uVar8 & uVar8 - 1) != 0)) {
      func_0x000107c60c44();
    }
    else {
      func_0x000107c359c0();
    }
    if (param_2 <= uVar2) {
      param_2 = uVar2;
    }
    if (param_2 < uVar8) goto LAB_100686940;
  }
  return;
}



/* Entry: 1006869a4; end: 1006869bf;  */

void FUN_1006869a4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  if (param_2 == 0) {
    FUN_100686a88(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1006869a4(lVar2);
    FUN_100686a88(param_1,lVar2);
    func_0x000100686aa0();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x000100686ab0();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c359f0();
      func_0x000107c359ec();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
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
            *plVar4 = *plVar6;
            func_0x000107c359c8();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1006869c0; end: 100686a87;  */

void FUN_1006869c0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_100686a88(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1006869a4(lVar2);
    FUN_100686a88(param_1,lVar2);
    func_0x000100686aa0();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x000100686ab0();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c359f0();
      func_0x000107c359ec();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
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
            *plVar4 = *plVar6;
            func_0x000107c359c8();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100686a88; end: 100686adf;  */

void FUN_100686a88(long *param_1,long param_2)

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



/* Entry: 100686ae0; end: 100686b03;  */

undefined8 FUN_100686ae0(undefined8 param_1)

{
  func_0x000100686ac8(param_1,0);
  return param_1;
}



/* Entry: 100686b04; end: 100686b43;  */

void FUN_100686b04(void)

{
  return;
}



/* Entry: 100686b44; end: 100686c83;  */

void FUN_100686b44(long *param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  long *extraout_x9_00;
  long *extraout_x9_01;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong uVar5;
  ulong extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = param_1;
  plVar4 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    func_0x000107c60c44();
    plVar6 = param_2;
  }
  plVar8 = (long *)param_1[1];
  bVar2 = plVar8 <= param_2;
  if (!bVar2 || param_2 == plVar8) {
    if (bVar2) {
      return;
    }
    func_0x000107c35a14();
    if ((bVar2) && (((ulong)plVar8 & (long)plVar8 - 1U) == 0)) {
      func_0x000107c359c0();
    }
    else {
      func_0x000107c60c44();
    }
    if (param_2 <= plVar6) {
      param_2 = plVar6;
    }
    if (plVar8 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_100686c84(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    func_0x000107c60e20(lVar3);
    FUN_100686c84(param_1,lVar3);
    func_0x000100686aa0();
    plVar6 = extraout_x9;
    while (param_2 != plVar6) {
      func_0x000100686ab0();
      plVar6 = extraout_x9_00;
    }
    if (param_1[2] != 0) {
      func_0x000107c359f0();
      func_0x000107c359ec();
      lVar3 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar5 = extraout_x10;
      plVar4 = extraout_x11;
      while (plVar8 = plVar6, plVar6 = (long *)*plVar8, plVar6 != (long *)0x0) {
        plVar7 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (param_2 <= plVar7) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)param_2;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)param_2);
        }
        if (plVar7 != plVar4) {
          if (*(long *)(lVar3 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar7 * 8) = plVar8;
            plVar4 = plVar7;
          }
          else {
            *plVar8 = *plVar6;
            func_0x000107c359c8();
            lVar3 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar5 = extraout_x10_00;
            plVar4 = extraout_x11_00;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar3 = *plVar6;
  *plVar6 = (long)plVar4;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100686c84; end: 100686cb7;  */

void FUN_100686c84(long *param_1,long param_2)

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



/* Entry: 100686cb8; end: 100686cef;  */

void FUN_100686cb8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100686ca8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      FUN_100683368(unaff_x20 + 0x18);
    }
    FUN_100666be0();
  }
  return;
}



/* Entry: 100686cf0; end: 100686cff;  */

void FUN_100686cf0(void)

{
  return;
}



/* Entry: 100686d00; end: 100686db7;  */

long FUN_100686d00(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(param_1 + 0x2a8) & 1) == 0) {
    FUN_100686cf0();
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x8;
    }
    lVar1 = param_1 + lVar1;
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f773978,0);
    lVar2 = 0;
    if (lVar3 != -1) {
      lVar2 = lVar3 + 3;
    }
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f77397c,lVar2);
    lVar4 = lVar3 - lVar2;
    if (lVar3 == -1) {
      lVar4 = -1;
    }
    FUN_1000e1048(auStack_48,lVar1 + 8,lVar2,lVar4);
    func_0x000100602604(param_1 + 0x290,auStack_48);
    func_0x000107c60ca0(auStack_48);
  }
  return param_1 + 0x290;
}



/* Entry: 100686db8; end: 100686eeb;  */

void FUN_100686db8(long param_1)

{
  bool bVar1;
  int iVar2;
  int extraout_w8;
  
  bVar1 = *(char *)(param_1 + 0x2e4) == '\x01';
  if (!bVar1) {
    FUN_100686cf0();
    iVar2 = 0xc0;
    if (bVar1) {
      iVar2 = extraout_w8;
    }
    iVar2 = (int)param_1 + iVar2 + 8;
    func_0x000100686e0c();
    *(int *)(param_1 + 0x2e0) = iVar2;
    *(undefined1 *)(param_1 + 0x2e4) = 1;
  }
  return;
}



/* Entry: 100686eec; end: 100686faf;  */

undefined1 FUN_100686eec(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [32];
  long lStack_80;
  long lStack_78;
  
  if ((*(byte *)(param_1 + 0x2b7) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x2b6) = 0x100;
    FUN_100686cf0();
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x8;
    }
    FUN_10067b954(auStack_a0,param_1 + lVar1);
    do {
      if (lStack_80 == lStack_78) goto LAB_100686f78;
      func_0x000107c60dac(auStack_a8);
      lVar1 = lStack_80;
      FUN_100686fbc(lStack_80,&UNK_10f77397e,auStack_a8);
      func_0x000107c60db0(auStack_a8);
      lStack_80 = lStack_80 + 0x30;
    } while ((int)lVar1 == 0);
    *(undefined2 *)(param_1 + 0x2b6) = 0x101;
LAB_100686f78:
    FUN_1005ae430(auStack_a0);
  }
  return *(undefined1 *)(param_1 + 0x2b6);
}



/* Entry: 100686fb0; end: 100686fbb;  */

void FUN_100686fb0(void)

{
  return;
}



/* Entry: 100686fbc; end: 100687017;  */

undefined8 FUN_100686fbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  undefined1 auStack_28 [8];
  
  FUN_100686fb0();
  func_0x000107c60da8(auStack_28,param_3);
  FUN_100687018();
  func_0x000107c60db0(auStack_28);
  return unaff_x20;
}



/* Entry: 100687018; end: 100687097;  */

void FUN_100687018(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_2;
  FUN_1006801f0();
  lVar2 = lVar1;
  FUN_100687098();
  lVar3 = param_2;
  while( true ) {
    if (param_1 == lVar1 || lVar3 == lVar2) {
      return;
    }
    func_0x000100686848();
    FUN_100680244();
    if ((int)param_2 == 0) break;
    param_1 = param_1 + 1;
    lVar3 = lVar3 + 1;
  }
  return;
}



/* Entry: 100687098; end: 10068709f;  */

undefined1  [16] FUN_100687098(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1;
  func_0x000107c613d0(param_1,1);
  auVar2._8_8_ = param_1 + lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1006870a0; end: 100687183;  */

undefined1  [16] FUN_1006870a0(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1;
  func_0x000107c613d0();
  auVar2._8_8_ = param_1 + lVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 100687184; end: 1006871a7;  */

undefined8 FUN_100687184(void)

{
  return 0;
}



/* Entry: 1006871a8; end: 1006871cf;  */

void FUN_1006871a8(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0xa0) = 0;
  FUN_1006871d0();
  return;
}



/* Entry: 1006871d0; end: 1006871ef;  */

void FUN_1006871d0(undefined8 param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    func_0x000107c35770();
    _memcpy();
    *(undefined1 *)(unaff_x19 + 0x80) = 0;
    *(undefined1 *)(unaff_x19 + 0x98) = 0;
    if (*(char *)(unaff_x20 + 0x98) == '\x01') {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
      *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x80) = uVar1;
      *(undefined8 *)(unaff_x20 + 0x88) = 0;
      *(undefined8 *)(unaff_x20 + 0x90) = 0;
      *(undefined8 *)(unaff_x20 + 0x80) = 0;
      *(undefined1 *)(unaff_x19 + 0x98) = 1;
    }
    *(undefined1 *)(unaff_x19 + 0xa0) = 1;
    return;
  }
  return;
}



/* Entry: 1006871f0; end: 100687213;  */

void FUN_1006871f0(void)

{
  func_0x0001006871e4();
  FUN_100687230();
  FUN_1006871a8();
  return;
}



/* Entry: 100687214; end: 10068722f;  */

void FUN_100687214(long param_1)

{
  FUN_1006871f0();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 100687230; end: 100687243;  */

undefined1  [16] FUN_100687230(undefined8 param_1,undefined8 *param_2,long param_3)

{
  undefined8 in_register_00005008;
  undefined1 auVar1 [16];
  
  param_2[2] = *(undefined8 *)(param_3 + 0x10);
  auVar1._0_8_ = param_2 + 3;
  param_2[1] = in_register_00005008;
  *param_2 = param_1;
  auVar1._8_8_ = param_3 + 0x18;
  return auVar1;
}



/* Entry: 100687244; end: 10068726b;  */

void FUN_100687244(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_100687320();
  return;
}



/* Entry: 10068726c; end: 1006872c3;  */

undefined8 *
FUN_10068726c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined4 *)(param_1 + 3) = param_5;
  FUN_100687244(param_1 + 4,param_6);
  FUN_100687334(param_1 + 8,param_7);
  *(undefined1 *)(param_1 + 0xc) = param_8;
  return param_1;
}



/* Entry: 1006872c4; end: 10068731f;  */

void FUN_1006872c4(undefined8 param_1)

{
  undefined1 auStack_50 [24];
  undefined1 uStack_38;
  undefined1 auStack_30 [24];
  undefined1 uStack_18;
  
  auStack_30[0] = 0;
  uStack_18 = 0;
  auStack_50[0] = 0;
  uStack_38 = 0;
  FUN_10068726c(param_1,0,0,0,4,auStack_30,auStack_50,0);
  FUN_100687370(auStack_50);
  func_0x000100687390(auStack_30);
  return;
}



/* Entry: 100687320; end: 100687333;  */

void FUN_100687320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 100687334; end: 10068735b;  */

void FUN_100687334(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_10068735c();
  return;
}



/* Entry: 10068735c; end: 10068736f;  */

void FUN_10068735c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
    *(undefined1 *)(param_1 + 3) = 1;
    return;
  }
  return;
}



/* Entry: 100687370; end: 1006873af;  */

void FUN_100687370(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_100688250();
  }
  return;
}



/* Entry: 1006873b0; end: 1006873d7;  */

void FUN_1006873b0(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0xc0) = 0;
  FUN_100687434();
  return;
}



/* Entry: 1006873d8; end: 100687433;  */

long FUN_1006873d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006873b0();
  FUN_100687464(lVar1 + 200,param_3);
  FUN_1006874ac(param_1 + 0x180,param_4);
  FUN_100687510(param_1 + 0x1e8,param_5);
  return param_1;
}



/* Entry: 100687434; end: 100687447;  */

void FUN_100687434(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_1006871f0();
    *(undefined1 *)(param_1 + 0xc0) = 1;
    return;
  }
  return;
}



/* Entry: 100687448; end: 100687463;  */

void FUN_100687448(long param_1)

{
  FUN_1006871f0();
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



/* Entry: 100687464; end: 10068748b;  */

void FUN_100687464(long param_1)

{
  func_0x00010068719c();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_10068748c();
  return;
}



/* Entry: 10068748c; end: 1006874ab;  */

void FUN_10068748c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_10088afac();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return;
  }
  return;
}



/* Entry: 1006874ac; end: 1006874e3;  */

void FUN_1006874ac(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006874a0();
  FUN_1006874e4();
  FUN_100687244();
  FUN_100687334(unaff_x20 + 0x40,unaff_x19 + 0x40);
  *(undefined1 *)(unaff_x20 + 0x60) = *(undefined1 *)(unaff_x19 + 0x60);
  return;
}



/* Entry: 1006874e4; end: 10068750f;  */

undefined1  [16] FUN_1006874e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  auVar4._0_8_ = param_1 + 4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  auVar4._8_8_ = param_2 + 4;
  return auVar4;
}



/* Entry: 100687510; end: 10068753f;  */

undefined1 * FUN_100687510(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x20] = 0;
  func_0x0001006874fc();
  return param_1;
}



/* Entry: 100687540; end: 100687583;  */

void FUN_100687540(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001006874a0();
  FUN_1006873b0();
  FUN_100687464(param_1 + 200,unaff_x19 + 200);
  FUN_1006874ac(unaff_x20 + 0x180,unaff_x19 + 0x180);
  FUN_100687510(unaff_x20 + 0x1e8,unaff_x19 + 0x1e8);
  return;
}



/* Entry: 100687584; end: 1006875a3;  */

void FUN_100687584(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1000e30f4();
  }
  return;
}



/* Entry: 1006875a4; end: 100687607;  */

long FUN_1006875a4(long param_1)

{
  FUN_100687584(param_1 + 0x1e8);
  func_0x0001006875dc(param_1 + 0x180);
  FUN_100687608(param_1 + 200);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    FUN_100687628(param_1 + 0x18);
  }
  return param_1;
}



/* Entry: 100687608; end: 100687627;  */

void FUN_100687608(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_10088b084();
  }
  return;
}



/* Entry: 100687628; end: 100687687;  */

long FUN_100687628(long param_1)

{
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_1001148fc(param_1 + 0x80);
  }
  return param_1;
}



/* Entry: 100687688; end: 100687693;  */

void FUN_100687688(void)

{
  long unaff_x19;
  long unaff_x21;
  
  FUN_100685b40(unaff_x19 + 0x40,*(undefined8 *)(unaff_x21 + 0x10));
  return;
}



/* Entry: 100687694; end: 1006876ab;  */

void FUN_100687694(void)

{
  FUN_100685b40();
  return;
}



/* Entry: 1006876ac; end: 1006876c3;  */

void FUN_1006876ac(long *param_1,long param_2)

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



/* Entry: 1006876c4; end: 1006876fb;  */

void FUN_1006876c4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000100686ca8();
  if (unaff_x20 != 0) {
    if (*(char *)(unaff_x19 + 0x10) == '\x01') {
      FUN_10089b318(unaff_x20 + 0x18);
    }
    FUN_100666be0();
  }
  return;
}



/* Entry: 1006876fc; end: 10068770f;  */

undefined * FUN_1006876fc(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x19;
  
  lVar1 = unaff_x19 + 0x28;
  FUN_100687710(lVar1,&stack0x000005b0);
  if (lVar1 != 0) {
    return (undefined *)(lVar1 + 0x18);
  }
  puVar2 = &UNK_10f639994;
  func_0x000104c03f28(&UNK_10f639994);
  return puVar2;
}



/* Entry: 100687710; end: 1006877cf;  */

long FUN_100687710(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    plVar2 = param_1 + 3;
    if (*plVar2 == 0) {
      return 0;
    }
    func_0x000100687708();
    uVar4 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar4) == 0) {
      plVar5 = (long *)((ulong)plVar2 & uVar4);
    }
    else {
      plVar5 = plVar2;
      if (plVar7 <= plVar2) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar2 - uVar1 * (long)plVar7);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar5 * 8);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar6 = (long *)plVar3[1];
        if (plVar6 != plVar2) break;
        if (plVar3[2] == *param_2) {
          return (long)plVar3;
        }
      }
      if (((ulong)plVar7 & uVar4) == 0) {
        plVar6 = (long *)((ulong)plVar6 & uVar4);
      }
      else if (plVar7 <= plVar6) {
        uVar1 = 0;
        if (plVar7 != (long *)0x0) {
          uVar1 = (ulong)plVar6 / (ulong)plVar7;
        }
        plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar7);
      }
    } while (plVar6 == plVar5);
  }
  return 0;
}



/* Entry: 1006877d0; end: 1006877f7;  */

undefined * FUN_1006877d0(long param_1)

{
  undefined *puVar1;
  
  FUN_100687710();
  if (param_1 != 0) {
    return (undefined *)(param_1 + 0x18);
  }
  puVar1 = &UNK_10f639994;
  func_0x000104c03f28(&UNK_10f639994);
  return puVar1;
}



/* Entry: 1006877f8; end: 100687803;  */

void FUN_1006877f8(void)

{
  return;
}



/* Entry: 100687804; end: 100687ad3;  */

undefined1  [16] FUN_100687804(undefined1 *param_1,undefined1 *param_2,undefined *param_3)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *extraout_x10;
  long extraout_x11;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lStack_168;
  char cStack_160;
  long lStack_158;
  byte bStack_150;
  char cStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [8];
  ulong uStack_f8;
  byte bStack_e9;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [32];
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_2;
  FUN_100686eec();
  if ((int)puVar4 == 0) {
LAB_1006878c0:
    *param_1 = 0;
    param_1[0x20] = 0;
  }
  else {
    if (param_2[0x2d8] != '\x01') {
      lVar6 = 0xc0;
      if (param_2[0x120] == '\0') {
        lVar6 = 0x60;
      }
      puVar4 = auStack_d0;
      param_3 = param_2 + lVar6;
      FUN_10067b954(puVar4,param_3);
      lVar6 = lStack_b0;
      while( true ) {
        cVar2 = SBORROW8(lVar6,lStack_a8);
        cVar3 = lVar6 - lStack_a8 < 0;
        if (lVar6 == lStack_a8) break;
        func_0x000107c60dac(auStack_e8);
        lVar5 = lVar6;
        param_3 = &UNK_10f77397e;
        FUN_100686fbc(lVar6,&UNK_10f77397e,auStack_e8);
        puVar4 = auStack_e8;
        func_0x000107c60db0(puVar4);
        if ((int)lVar5 != 0) {
          func_0x000107c60c94(auStack_e8,lVar6 + 0x18);
          func_0x000107c397dc();
          lVar6 = extraout_x11;
          puVar4 = extraout_x10;
          if (cVar3 == cVar2) {
            lVar6 = extraout_x8;
            puVar4 = auStack_e8;
          }
          auStack_100[0] = 0x20;
          FUN_100651c34(puVar4,puVar4 + lVar6,auStack_100);
          func_0x000107c397dc();
          FUN_10015bbdc(auStack_e8);
          FUN_10002b838(auStack_100,&DAT_10f45dd04);
          puVar4 = auStack_e8;
          param_3 = auStack_100;
          func_0x000107c2c82c(puVar4,param_3);
          if (((ulong)puVar4 & 1) == 0) {
            *param_1 = 0;
            param_1[0x20] = 0;
          }
          else {
            if (-1 < (char)bStack_e9) {
              uStack_f8 = (ulong)bStack_e9;
            }
            FUN_1000e1048(auStack_118,auStack_e8,uStack_f8,0xffffffffffffffff);
            lStack_130 = 0;
            lStack_128 = 0;
            uStack_120 = 0;
            func_0x000106886424(auStack_70,"-");
            param_3 = auStack_118;
            func_0x000106886398(&lStack_130,param_3,auStack_70,1);
            func_0x00010688c9f8(auStack_70);
            if (lStack_128 - lStack_130 == 0x30) {
              lVar5 = lStack_130;
              func_0x000107c30150();
              lVar6 = lStack_130 + 0x18;
              puVar7 = param_3;
              func_0x000107c30150();
              if ((param_2[0x2d8] & 1) == 0) {
                param_2[0x2d8] = 1;
              }
              *(long *)(param_2 + 0x2b8) = lVar5;
              param_2[0x2c0] = (char)param_3;
              *(long *)(param_2 + 0x2c8) = lVar6;
              param_2[0x2d0] = (char)puVar7;
              func_0x000107c397e4();
              param_3 = puVar7;
            }
            else {
              *param_1 = 0;
              param_1[0x20] = 0;
            }
            FUN_1000e30f4(&lStack_130);
            func_0x000107c60ca0(auStack_118);
          }
          func_0x000107c60ca0(auStack_100);
          puVar4 = auStack_e8;
          func_0x000107c60ca0(puVar4);
          func_0x000107c397d0();
          goto LAB_1006878c8;
        }
        lVar6 = lVar6 + 0x30;
      }
      func_0x000107c397d0();
      goto LAB_1006878c0;
    }
    func_0x000107c397e4();
  }
LAB_1006878c8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar11._8_8_ = param_3;
    auVar11._0_8_ = puVar4;
    return auVar11;
  }
  func_0x000107c60e78();
  FUN_1000e30f4(&lStack_130);
  func_0x000107c60ca0(auStack_118);
  func_0x000107c60ca0(auStack_100);
  func_0x000107c60ca0(auStack_e8);
  func_0x000107c397d0();
  func_0x000107c397a8();
  pcStack_138 = FUN_100687ad4;
  puStack_140 = &stack0xfffffffffffffff0;
  FUN_100687804(&lStack_168);
  if (cStack_148 == '\x01') {
    uVar8 = 0;
    if (cStack_160 != '\x01') {
      uVar9 = 0;
      uVar10 = 0;
      goto LAB_100687b54;
    }
    uVar9 = 0;
    uVar10 = 0;
    if ((bStack_150 & 1) == 0) goto LAB_100687b54;
    if (-1 < lStack_168) {
      uVar1 = (lStack_158 - lStack_168) + 1;
      uVar8 = (ulong)(lStack_168 <= lStack_158);
      uVar9 = 0;
      if (lStack_168 <= lStack_158) {
        uVar9 = uVar1 & 0xff;
      }
      uVar10 = 0;
      if (lStack_168 <= lStack_158) {
        uVar10 = uVar1 & 0xffffffffffffff00;
      }
      goto LAB_100687b54;
    }
  }
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
LAB_100687b54:
  auVar12._0_8_ = uVar10 | uVar9;
  auVar12._8_8_ = uVar8;
  return auVar12;
}



/* Entry: 100687ad4; end: 100687b8f;  */

undefined1  [16] FUN_100687ad4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long lStack_38;
  char cStack_30;
  long lStack_28;
  byte bStack_20;
  char cStack_18;
  
  FUN_100687804(&lStack_38);
  if (cStack_18 == '\x01') {
    uVar2 = 0;
    if (cStack_30 != '\x01') {
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_100687b54;
    }
    uVar3 = 0;
    uVar4 = 0;
    if ((bStack_20 & 1) == 0) goto LAB_100687b54;
    if (-1 < lStack_38) {
      uVar1 = (lStack_28 - lStack_38) + 1;
      uVar2 = (ulong)(lStack_38 <= lStack_28);
      uVar3 = 0;
      if (lStack_38 <= lStack_28) {
        uVar3 = uVar1 & 0xff;
      }
      uVar4 = 0;
      if (lStack_38 <= lStack_28) {
        uVar4 = uVar1 & 0xffffffffffffff00;
      }
      goto LAB_100687b54;
    }
  }
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
LAB_100687b54:
  auVar5._0_8_ = uVar4 | uVar3;
  auVar5._8_8_ = uVar2;
  return auVar5;
}



/* Entry: 100687b90; end: 100687e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100687b90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uVar6 = *(undefined8 *)(param_1 + _DAT_113082420);
  puVar1 = &UNK_110611178;
  func_0x000107c613fc(&UNK_110611178,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  puVar2 = &UNK_110611218;
  func_0x000107c613fc(&UNK_110611218,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  *(undefined8 *)(puVar2 + 0x40) = param_8;
  uVar6 = 0x112f42fb0;
  FUN_1000285a8(0x112f42fb0,&UNK_10db8f850);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  puVar1 = &UNK_103127d48;
  FUN_1000bdd8c(&UNK_103127d48,puVar2);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puStack_70 = &UNK_103127d44;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1031272c8;
  puStack_78 = &UNK_110611230;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar1;
  func_0x000107c60bc4(ppuVar4);
  puVar2 = puStack_68;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  puVar2 = &UNK_110611268;
  func_0x000107c613fc(&UNK_110611268,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar3;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c613fc(uVar6,0x18,7);
  func_0x000107c6157c(puVar1);
  func_0x000107c61174(puVar3);
  puVar5 = &UNK_103127d40;
  FUN_1000bdd8c(&UNK_103127d40,puVar2);
  func_0x0001005c6be0(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar3);
  puVar2 = puVar5;
  func_0x000107c6157c(puVar5);
  FUN_100687e94();
  func_0x000107c42c20(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61170(puVar2);
  return unaff_x20;
}



/* Entry: 100687e4c; end: 100687e6f;  */

void FUN_100687e4c(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100687e70; end: 100687e93;  */

void FUN_100687e70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100687e94; end: 100687ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100687e94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fe95f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fe9600) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100687ef8; end: 100687f03;  */

void FUN_100687ef8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100687f04; end: 100687f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100687f04(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_10035cb08();
  lVar1 = param_2;
  func_0x000107c610f8();
  lVar2 = lVar1;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112fae090) = lVar2;
  lStack_40 = lVar1;
  lStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 100687f6c; end: 100687f73;  */

void FUN_100687f6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100687f74; end: 100687fc7;  */

void FUN_100687f74(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100687fc8; end: 100687fcf;  */

void FUN_100687fc8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c2910();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100688068();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1006880d4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100687fd0; end: 100688067;  */

void FUN_100687fd0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  func_0x0001005c2910();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100688068();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_1006880d4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 100688068; end: 1006880d3;  */

void FUN_100688068(undefined8 param_1)

{
  if (lRam0000000112ee2d60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70d234);
  return;
}



/* Entry: 1006880d4; end: 1006881cb;  */

undefined8 FUN_1006880d4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  FUN_1000285a8(0x112ee2d20,&UNK_10db0def0);
  func_0x000107c613fc();
  pcVar1 = FUN_100806280;
  FUN_1000bdd8c(FUN_100806280,0);
  uVar5 = 0x112ee2d28;
  FUN_1000285a8(0x112ee2d28,&UNK_10db0def8);
  uVar2 = 0x100806394;
  FUN_1000cb480(0x100806394,0,uVar5);
  uVar3 = uVar2;
  FUN_1003a5b88();
  func_0x000107c61574(uVar2);
  uVar5 = 0x112ee2d30;
  FUN_1000285a8(0x112ee2d30,&UNK_10db0df00);
  puVar4 = &UNK_102a33038;
  FUN_1000cb480(&UNK_102a33038,0,uVar5);
  uVar5 = 0;
  func_0x0001005c2930(0);
  func_0x000107c610f8();
  FUN_100688de8(uVar3,puVar4,uVar5);
  func_0x000107c61574(pcVar1);
  return uVar3;
}



/* Entry: 1006881cc; end: 1006881eb;  */

void FUN_1006881cc(void)

{
  func_0x000107c61168(&PTR_PTR_112ee2c60);
  return;
}



/* Entry: 1006881ec; end: 10068824f;  */

long FUN_1006881ec(void)

{
  long lVar1;
  long lVar2;
  undefined1 in_ZR;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long lVar5;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x2a8) & 1) == 0) {
    FUN_100686cf0();
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x8;
    }
    lVar1 = lVar4 + lVar1;
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f773978,0);
    lVar2 = 0;
    if (lVar3 != -1) {
      lVar2 = lVar3 + 3;
    }
    lVar3 = lVar1 + 8;
    FUN_1005d480c(lVar3,&UNK_10f77397c,lVar2);
    lVar5 = lVar3 - lVar2;
    if (lVar3 == -1) {
      lVar5 = -1;
    }
    FUN_1000e1048(auStack_48,lVar1 + 8,lVar2,lVar5);
    func_0x000100602604(lVar4 + 0x290,auStack_48);
    func_0x000107c60ca0(auStack_48);
  }
  return lVar4 + 0x290;
}



/* Entry: 100688250; end: 100688283;  */

undefined8 FUN_100688250(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000100688238(&uStack_28);
  return param_1;
}



/* Entry: 100688284; end: 1006882df;  */

void FUN_100688284(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_2 + 200) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar1 = (*(long *)(param_2 + 200) + *(long *)(param_2 + 0xc0)) - 1;
  puVar2 = (undefined8 *)
           (*(long *)(*(long *)(param_2 + 0xa8) + (uVar1 / 0xaa) * 8) + (uVar1 % 0xaa) * 0x18);
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[2] = puVar2[2];
  return;
}



/* Entry: 1006882e0; end: 100688327;  */

int FUN_1006882e0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  if (*(long *)(param_1 + 0x70) != 0) {
    piVar1 = (int *)(param_1 + 0x48);
    func_0x000107c2c9bc();
    iVar2 = 5 - *piVar1;
    if (3 < *piVar1 - 2U) {
      iVar2 = 4;
    }
  }
  return iVar2;
}



/* Entry: 100688328; end: 100688333;  */

void FUN_100688328(void)

{
  return;
}



/* Entry: 100688334; end: 1006883c3;  */

void FUN_100688334(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 in_ZR;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_2;
  FUN_100688328(*(undefined1 *)(lVar3 + 0x120));
  lVar1 = 0xc0;
  if ((bool)in_ZR) {
    lVar1 = extraout_x8;
  }
  uVar4 = *(undefined8 *)(lVar3 + lVar1);
  uVar2 = *(undefined4 *)((undefined8 *)(lVar3 + lVar1) + 9);
  FUN_100686d00();
  (**(code **)(*param_1 + 0x20))(auStack_58,param_1,uVar4,uVar2,lVar3,*param_2 + 0x278,param_3);
  FUN_100689994(param_2 + 0x49,auStack_58);
  FUN_1006899b8(auStack_58);
  return;
}


