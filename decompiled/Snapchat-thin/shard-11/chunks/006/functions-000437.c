/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087fa55c; end: 1087fa633;  */

long FUN_1087fa55c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  lVar3 = param_4;
  func_0x0001087ff90c();
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  ppuVar1 = &PTR_PTR_113284418;
  if (*(undefined ***)(lVar3 + 0x18) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(lVar3 + 0x18);
  }
  FUN_1086a7798(lVar2 + 0x20,ppuVar1);
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  FUN_1087fa634(param_1 + 0x88,param_4);
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined1 *)(param_1 + 0x370) = 0;
  *(undefined1 *)(param_1 + 0x378) = 0;
  *(undefined1 *)(param_1 + 0x3b0) = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0;
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  *(undefined1 *)(param_1 + 0x3e0) = 0;
  *(undefined1 *)(param_1 + 0x408) = 0;
  *(undefined1 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(undefined1 *)(param_1 + 0x458) = 0;
  *(undefined1 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x4b0) = 0;
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  *(undefined1 *)(param_1 + 0x4e8) = 0;
  *(undefined1 *)(param_1 + 0x4f0) = 0;
  *(undefined1 *)(param_1 + 0x4f4) = 0;
  *(undefined2 *)(param_1 + 0x4f8) = 0;
  return param_1;
}



/* Entry: 1087fa634; end: 1087fa64f;  */

void FUN_1087fa634(long param_1)

{
  FUN_1086a7fe8();
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



/* Entry: 1087fa650; end: 1087fa733;  */

void FUN_1087fa650(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0xd0;
    func_0x0001087fa684();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1087fa734; end: 1087fa7c7;  */

void FUN_1087fa734(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c336c0();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x000107c27994(param_1 + 3,param_2 + 3);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1086a7e80(unaff_x19 + 0x38,unaff_x20 + 0x38);
  func_0x000108800264(unaff_x19 + 0x538);
  func_0x000105302f48(unaff_x19 + 0x558,unaff_x20 + 0x558);
  func_0x000105302f48(unaff_x19 + 0x578,unaff_x20 + 0x578);
  *(undefined8 *)(unaff_x19 + 0x598) = *(undefined8 *)(unaff_x20 + 0x598);
  *(undefined8 *)(unaff_x19 + 0x5a0) = *(undefined8 *)(unaff_x20 + 0x5a0);
  *(undefined8 *)(unaff_x20 + 0x5a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x598) = 0;
  return;
}



/* Entry: 1087fa7c8; end: 1087fa7cb;  */

undefined8 * FUN_1087fa7c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a730a0;
  func_0x000107c29a48(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1087fa7cc; end: 1087fa7df;  */

void FUN_1087fa7cc(void)

{
  FUN_1087fa848();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fa7e0; end: 1087fa847;  */

void FUN_1087fa7e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_x7;
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  FUN_1087fa884(param_1 + 8,param_1 + 0x18,param_2,param_3,0,0,auStack_40,in_x7,0,0);
  func_0x000107c279dc(auStack_40);
  return;
}



/* Entry: 1087fa848; end: 1087fa883;  */

undefined8 * FUN_1087fa848(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a730a0;
  func_0x000107c29a48(param_1 + 3);
  func_0x000107c28800(param_1 + 1);
  return param_1;
}



/* Entry: 1087fa884; end: 1087faa1f;  */

void FUN_1087fa884(long *param_1,undefined8 *param_2,long *param_3,long *param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  code *extraout_x8;
  long *plVar7;
  undefined4 uVar8;
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  undefined *apuStack_128 [19];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_78 = param_5;
  uStack_70 = param_6;
  FUN_1087faa20(auStack_90,param_4);
  if ((param_6 & 1) != 0) {
    apuStack_128[0] = PTR_DAT_1132691b0;
    FUN_1087e2c6c(auStack_90,apuStack_128,&uStack_78);
  }
  lVar6 = *param_1;
  func_0x0001087ff9e8(lVar6);
  (*extraout_x8)();
  if (*param_4 == param_4[1]) {
    uVar8 = 7;
  }
  else {
    uVar8 = *(undefined4 *)(param_4[1] + -0x6c);
  }
  lVar1 = *param_3;
  lVar2 = param_3[1];
  plVar7 = (long *)*param_2;
  lVar5 = param_3[0xa9];
  uVar3 = *(undefined4 *)((long)param_3 + 0x54c);
  FUN_1087faa9c(auStack_148,param_4);
  uVar4 = *(undefined4 *)((long)param_3 + 0x544);
  func_0x000107c279d4(auStack_168,param_7);
  FUN_1087faaec();
  FUN_1087e3114(apuStack_128,(int)lVar5,uVar3,uVar8,auStack_90,auStack_148,uVar4,lVar6 - lVar2,
                lVar2 - lVar1,auStack_168,param_9,param_10,(ulong)param_4 & 0xffffffffff);
  func_0x000108800104(*(undefined8 *)(*plVar7 + 0x10));
  func_0x0001087e3458(apuStack_128);
  func_0x000107c279dc(auStack_168);
  func_0x000107c279a4(auStack_148);
  func_0x0001087e348c(auStack_90);
  return;
}



/* Entry: 1087faa20; end: 1087faa9b;  */

void FUN_1087faa20(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1087e2d48(param_1,param_2[1] - *param_2 >> 7);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x80) {
    func_0x0001087fab38();
    func_0x000107c336d0();
    FUN_1087e2db0();
  }
  return;
}



/* Entry: 1087faa9c; end: 1087faaeb;  */

void FUN_1087faa9c(undefined1 *param_1,long *param_2)

{
  if ((*param_2 == param_2[1]) || (*(int *)(param_2[1] + -0x6c) == 0)) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x0001087fab38();
    func_0x000107c336d0();
    func_0x000105c3d708();
  }
  return;
}



/* Entry: 1087faaec; end: 1087fab67;  */

ulong FUN_1087faaec(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = param_1[1];
  if ((*param_1 == lVar1) || (*(int *)(lVar1 + -0x6c) == 0)) {
    uVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(lVar1 + -0x28);
    uVar2 = uVar5 & 0xffffff0000000000;
    uVar4 = uVar5 & 0xff00000000;
    uVar3 = uVar5 & 0xffffff00;
    uVar5 = uVar5 & 0xff;
  }
  return uVar2 | uVar3 | uVar4 | uVar5;
}



/* Entry: 1087fab68; end: 1087fab7b;  */

void FUN_1087fab68(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fab7c; end: 1087fab8b;  */

void FUN_1087fab7c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001087ffc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 1087fab8c; end: 1087fabbf;  */

long FUN_1087fab8c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001088001cc(param_2,param_1,&PTR_DAT_110a73130);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087fabc0; end: 1087fabc7;  */

void FUN_1087fabc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fabc8; end: 1087fabdb;  */

void FUN_1087fabc8(void)

{
  FUN_1087fb3b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fabdc; end: 1087fb3af;  */

void FUN_1087fabdc(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long lVar21;
  undefined8 uVar22;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  code *extraout_x8_07;
  uint extraout_w9;
  uint extraout_w9_00;
  long *plVar23;
  long lVar24;
  long extraout_x9;
  undefined8 uVar25;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar26;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar27;
  long extraout_x10_01;
  int extraout_w11;
  long lVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  ulong uVar32;
  ulong unaff_x26;
  undefined8 uVar33;
  ulong uStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  undefined8 uStack_5b8;
  undefined8 *puStack_5b0;
  undefined8 uStack_10;
  
  func_0x000107c33700();
  func_0x000107c33694();
  puVar12 = (undefined8 *)0x688;
  uStack_10 = extraout_x8_00;
  __Znwm();
  *puVar12 = FUN_1087fef68;
  puVar12[1] = FUN_1087ff400;
  puVar12[0xce] = param_4;
  puVar12[0xcd] = param_1;
  FUN_1087fa734(puVar12 + 4,param_2);
  puVar1 = puVar12 + 0xc3;
  puVar2 = puVar12 + 0xc6;
  uVar22 = *param_3;
  puVar12[0xc4] = param_3[1];
  *puVar1 = uVar22;
  puVar12[0xc5] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x0001087adea8(puVar12 + 2);
  FUN_1087ad990(extraout_x8,puVar12 + 2);
  puVar12[0xca] = 0;
  puVar12[199] = 0;
  *puVar2 = 0;
  puVar12[0xc9] = 0;
  puVar12[200] = 0;
  plVar31 = (long *)puVar12[0xc3];
  lVar28 = *(long *)(param_1 + 0x40);
  uVar25 = *(undefined8 *)(param_1 + 0x40);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  puVar13 = (undefined8 *)0x58;
  __Znwm();
  if (lVar28 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  uVar9 = *(undefined1 *)(param_1 + 0x80);
  *(undefined4 *)(puVar13 + 1) = 0;
  *puVar13 = &PTR_FUN_110a731a0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  *(undefined1 *)(puVar13 + 4) = 0;
  puVar13[6] = uVar25;
  puVar13[5] = uVar22;
  uStack_5d0 = 0;
  lStack_5c8 = 0;
  *(undefined4 *)(puVar13 + 7) = 0;
  lVar28 = *(long *)(param_1 + 0x78);
  uVar22 = *(undefined8 *)(param_1 + 0x70);
  puVar13[9] = *(undefined8 *)(param_1 + 0x78);
  puVar13[8] = uVar22;
  if (lVar28 != 0) {
    do {
      func_0x0001087ffad4();
      uVar9 = extraout_w8;
    } while (extraout_w11 != 0);
  }
  puVar3 = puVar12 + 0xbe;
  *(undefined1 *)(puVar13 + 10) = uVar9;
  puVar14 = &uStack_5d0;
  func_0x000107c28868();
  plVar18 = (long *)puVar12[0xc4];
  if (plVar18 < (long *)puVar12[0xc5]) {
    if (plVar31 == plVar18) {
      *plVar18 = (long)puVar13;
      puVar12[0xc4] = plVar18 + 1;
      uVar9 = 1;
    }
    else {
      plVar29 = plVar18 + -1;
      plVar23 = plVar18;
      for (plVar26 = plVar29; plVar26 < plVar18; plVar26 = plVar26 + 1) {
        lVar28 = *plVar26;
        *plVar26 = 0;
        *plVar23 = lVar28;
        plVar23 = plVar23 + 1;
      }
      puVar12[0xc4] = plVar23;
      plVar18 = plVar29;
      while (uVar9 = plVar29 == plVar31, !(bool)uVar9) {
        plVar29 = plVar29 + -1;
        lVar19 = *plVar29;
        *plVar29 = 0;
        lVar28 = *plVar18;
        *plVar18 = lVar19;
        if (lVar28 != 0) {
          func_0x0001087ff948();
        }
        plVar18 = plVar18 + -1;
      }
      puVar14 = (ulong *)*plVar31;
      *plVar31 = (long)puVar13;
      if (puVar14 != (ulong *)0x0) {
        func_0x0001087ff948();
      }
    }
  }
  else {
    puVar16 = puVar1;
    FUN_1087fb858(puVar1,((long)plVar18 - puVar12[0xc3] >> 3) + 1);
    puVar15 = puVar12 + 0xc5;
    plVar18 = (long *)puVar12[0xc3];
    puVar12[0xc2] = puVar15;
    if (puVar16 == (undefined8 *)0x0) {
      puVar20 = (undefined8 *)0x0;
      lVar28 = 0;
    }
    else {
      puVar20 = puVar15;
      FUN_1087fb8a4();
      lVar28 = (long)puVar16 << 3;
    }
    lVar19 = (long)plVar31 - (long)plVar18;
    puVar12[0xbe] = puVar20;
    puVar16 = (undefined8 *)((long)puVar20 + lVar19);
    puVar12[0xc0] = puVar16;
    puVar12[0xbf] = puVar16;
    puVar12[0xc1] = (long)puVar20 + lVar28;
    uVar9 = 0;
    if (lVar19 == lVar28) {
      if (plVar31 == plVar18) {
        lVar19 = 1;
        puStack_5b0 = puVar15;
        FUN_1087fb8a4();
        lStack_5c8 = puVar12[0xbf];
        lStack_5c0 = puVar12[0xc0];
        for (lVar28 = 0; uVar9 = lStack_5c0 - lStack_5c8 == lVar28, !(bool)uVar9;
            lVar28 = lVar28 + 8) {
          uVar22 = *(undefined8 *)(lStack_5c8 + lVar28);
          *(undefined8 *)(lStack_5c8 + lVar28) = 0;
          *(undefined8 *)((long)puVar15 + lVar28) = uVar22;
        }
        uStack_5d0 = puVar12[0xbe];
        puVar12[0xbe] = puVar15;
        puVar12[0xbf] = puVar15;
        puVar12[0xc0] = (long)puVar15 + (lStack_5c0 - lStack_5c8);
        uStack_5b8 = puVar12[0xc1];
        puVar12[0xc1] = puVar15 + lVar19;
        FUN_1087fb8e4(&uStack_5d0);
        puVar16 = (undefined8 *)puVar12[0xc0];
      }
      else {
        puVar16 = puVar16 + ((lVar19 >> 3) + 1) / -2;
        puVar12[0xbf] = puVar16;
        uVar9 = 0;
      }
    }
    *puVar16 = puVar13;
    puVar12[0xc0] = puVar16 + 1;
    _memcpy(puVar16 + 1,plVar31,puVar12[0xc4] - (long)plVar31);
    puVar12[0xc0] = puVar12[0xc0] + (puVar12[0xc4] - (long)plVar31);
    puVar12[0xc4] = plVar31;
    func_0x0001088000f8(puVar12[0xbf]);
    uVar22 = puVar12[0xc3];
    puVar12[0xc3] = puVar13;
    puVar12[0xbf] = uVar22;
    uVar25 = puVar12[0xc5];
    uVar33 = puVar12[0xc0];
    puVar12[0xc0] = uVar22;
    puVar12[0xc5] = puVar12[0xc1];
    puVar12[0xc4] = uVar33;
    puVar12[0xc1] = uVar25;
    puVar12[0xbe] = uVar22;
    puVar14 = puVar3;
    FUN_1087fb8e4();
  }
  puVar4 = puVar12 + 0xcc;
  puVar12[0xcf] = *(undefined8 *)puVar12[0xc3];
  func_0x0001087ff82c();
  while( true ) {
    puVar17 = (ulong *)puVar12[0xcd];
    FUN_1087fb434(puVar4,puVar17,puVar1,puVar12 + 4,puVar12[0xce]);
    *puVar3 = *puVar4;
    do {
      func_0x0001087ff83c();
    } while (extraout_w10_00 != 0);
    func_0x0001087ff9f4(*puVar3);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar12 + 0xd0) = 0;
      uVar32 = *puVar3;
      unaff_x26 = *puVar14;
      if (unaff_x26 == 0) {
        func_0x000107c3a5c0();
        unaff_x26 = *puVar17;
      }
      plVar31 = (long *)(uVar32 + 0x10);
      do {
        if (*plVar31 == 0) {
          bVar10 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar10) {
            *plVar31 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001088002e8();
          plVar31 = extraout_x8_02;
          uVar6 = extraout_w9_00;
          uVar27 = extraout_x10_00;
        }
        else {
          func_0x0001088002f4();
          plVar31 = extraout_x8_01;
          uVar6 = extraout_w9;
          uVar27 = extraout_x10;
        }
        if ((uVar27 & 1) != 0) {
          func_0x0001087ff990();
          if ((bool)uVar9) {
            func_0x0001087ff8a8();
            func_0x0001087ff84c();
            func_0x0001087ff810();
            *(ulong **)(uVar32 + 0x90) = puVar17;
          }
          func_0x0001087ff970();
          *(ulong *)(extraout_x8_06 + 0x20) = unaff_x26;
          func_0x0001087ff898(*(undefined8 *)(uVar32 + 0x90));
          *(undefined8 *)(uVar32 + 0x10) = 0;
          goto LAB_1087fb1cc;
        }
      } while ((uVar6 >> 1 & 1) == 0);
    }
    func_0x0001087ff9f4(*puVar3);
    if ((extraout_w8_01 >> 5 & 1) != 0) {
      __ZNSt13exception_ptrC1ERKS_(puVar12 + 0xcb,*puVar3 + 0x18);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar12 + 0xcb);
      goto LAB_1087fb29c;
    }
    uVar32 = puVar12[199];
    bVar8 = (ulong)puVar12[200] <= uVar32;
    bVar10 = uVar32 == puVar12[200];
    if (bVar8) {
      uVar27 = *puVar2;
      func_0x0001088002d4();
      if (bVar8 && !bVar10) {
        FUN_1087fc330();
        goto LAB_1087fb29c;
      }
      func_0x0001087ffc30((extraout_x8_03 - extraout_x10_01) / 0x18);
      func_0x0001088002c0();
      puVar12[0xbd] = puVar12 + 200;
      if (unaff_x26 == 0) {
        lVar28 = 0;
      }
      else {
        if (0xaaaaaaaaaaaaaaa < unaff_x26) goto LAB_1087fb298;
        lVar28 = unaff_x26 * 0x18;
        __Znwm();
      }
      puVar12[0xb9] = lVar28;
      lVar5 = lVar28 + (uVar32 - uVar27);
      puVar12[0xbb] = lVar5;
      puVar12[0xba] = lVar5;
      lVar28 = lVar28 + unaff_x26 * 0x18;
      puVar12[0xbc] = lVar28;
      func_0x000108800234();
      lVar30 = puVar12[199];
      lVar19 = puVar12[0xc6];
      lVar21 = lVar30 - lVar19;
      lVar24 = lVar19;
      while (lVar24 != lVar30) {
        func_0x0001087ffbc8();
        lVar24 = extraout_x9;
      }
      for (; lVar19 != lVar30; lVar19 = lVar19 + 0x18) {
        FUN_1087fc33c();
      }
      lVar19 = lVar5 + 0x18;
      uVar22 = puVar12[0xc6];
      puVar12[0xc6] = lVar5 + (lVar21 / -0x18) * 0x18;
      puVar12[0xba] = uVar22;
      puVar12[199] = lVar19;
      puVar12[0xbb] = uVar22;
      uVar25 = puVar12[200];
      puVar12[200] = lVar28;
      puVar12[0xbc] = uVar25;
      puVar12[0xb9] = uVar22;
      func_0x0001087fffb0();
    }
    else {
      func_0x000108800234();
      lVar19 = uVar32 + 0x18;
    }
    puVar12[199] = lVar19;
    func_0x0001087ffb80();
    func_0x000107c27f9c(puVar4);
    unaff_x26 = puVar12[199];
    if (*(long *)(unaff_x26 - 0x18) == *(long *)(unaff_x26 - 0x10)) {
      iVar11 = 7;
    }
    else {
      iVar11 = *(int *)(*(long *)(unaff_x26 - 0x10) + -0x6c);
    }
    *(int *)(puVar12 + 0xbe) = iVar11;
    (**(code **)(**(long **)(puVar12[0xcd] + 8) + 8))
              (puVar12 + 0xb9,*(long **)(puVar12[0xcd] + 8),iVar11);
    lVar28 = puVar12[0xcf];
    func_0x000108800200();
    func_0x000107c299a0(puVar12 + 0xb9);
    uVar9 = iVar11 == 1;
    *(undefined1 *)(lVar28 + 0x20) = uVar9;
    func_0x0001087b153c(lVar28 + 0x10,puVar12 + 0xc9);
    lVar28 = puVar12[0xc9];
    if (lVar28 == 0) break;
    func_0x0001087ff9e8(lVar28,*(undefined4 *)(puVar12 + 6));
    iVar11 = (int)lVar28;
    (*extraout_x8_04)();
    if (iVar11 == 0) break;
    func_0x0001087ff9e8(*(undefined8 *)(puVar12[0xcd] + 0x58));
    (*extraout_x8_05)();
    uVar9 = *(int *)((long)puVar12 + 0x564) == 3;
    if ((bool)uVar9) {
      func_0x0001087ffbf4();
    }
    else {
      *(undefined4 *)((long)puVar12 + 0x564) = 3;
    }
    func_0x0001087fff30();
  }
  FUN_1087faa9c(&uStack_5d0,unaff_x26 - 0x18);
  func_0x000107c279a4(&uStack_5d0);
  lStack_5c8 = puVar12[199];
  uStack_5d0 = *puVar2;
  lStack_5c0 = puVar12[200];
  puVar12[199] = 0;
  puVar12[200] = 0;
  *puVar2 = 0;
  FUN_1087fa734(&uStack_5b8,puVar12 + 4);
  func_0x0001087ff9e8(*(undefined8 *)(puVar12[0xcd] + 0x60));
  (*extraout_x8_07)();
  func_0x0001087ade80(puVar12 + 2,puVar3);
  func_0x0001087fd2c8(&uStack_5d0);
  func_0x0001087ffd90();
  func_0x0001087fd288(puVar2);
  func_0x0001087ff954();
  FUN_1087f995c(puVar1);
  func_0x0001087ffb2c();
  func_0x0001087ff9a0();
LAB_1087fb1cc:
  func_0x000107c3368c(uStack_10);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1087fb298:
  func_0x000104bd35f4();
LAB_1087fb29c:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1087fb2a0);
  (*pcVar7)();
}



/* Entry: 1087fb3b0; end: 1087fb433;  */

undefined8 * FUN_1087fb3b0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_110a73150;
  func_0x000107c289f8(param_1 + 0x19);
  func_0x000107c289f8(param_1 + 0x13);
  func_0x000107c29778(param_1 + 0x11);
  func_0x000107c299a4(param_1 + 0xe);
  func_0x000107c29aa4(param_1 + 0xc);
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    func_0x0001087ff948();
  }
  func_0x000107c288a4(param_1 + 9);
  func_0x000107c28868(param_1 + 7);
  func_0x000107c28808(param_1 + 5);
  func_0x000107c28800(param_1 + 3);
  func_0x000107c2995c(param_1 + 1);
  return param_1;
}



/* Entry: 1087fb434; end: 1087fb857;  */

void FUN_1087fb434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar18;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  uint extraout_w9;
  uint extraout_w9_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  ulong extraout_x10;
  ulong extraout_x10_00;
  long *plVar19;
  undefined8 unaff_x22;
  undefined8 *unaff_x23;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  func_0x0001087ffaec();
  puVar10 = (undefined8 *)0x118;
  __Znwm();
  *puVar10 = FUN_1087febec;
  puVar10[1] = FUN_1087fef34;
  puVar10[0x1e] = param_3;
  puVar10[0x1f] = param_4;
  puVar10[0x1d] = unaff_x22;
  puVar11 = (undefined8 *)0xb8;
  __Znwm();
  plVar1 = puVar10 + 0x1b;
  plVar2 = puVar10 + 0x1c;
  puVar13 = puVar11;
  func_0x00010880015c();
  *puVar13 = &PTR_FUN_110a731e0;
  *(undefined1 *)(puVar13 + 0x13) = 0;
  *(undefined1 *)(puVar13 + 0x16) = 0;
  lStack_80 = 0;
  uStack_68 = 0;
  func_0x000107c27f98(&uStack_68);
  func_0x000107c27f9c(&lStack_80);
  plVar19 = puVar10 + 3;
  *plVar19 = (long)puVar11;
  puVar10[2] = puVar11;
  lStack_80 = 0;
  uStack_78 = 0;
  func_0x000107c27fec(&lStack_80);
  lStack_80 = puVar10[2];
  if (lStack_80 != 0) {
    do {
      func_0x0001087ff83c();
    } while (extraout_w10 != 0);
  }
  *extraout_x8 = lStack_80;
  lStack_80 = 0;
  func_0x000107c27f9c(&lStack_80);
  puVar10[0x18] = 0;
  puVar10[0x19] = 0;
  puVar10[0x1a] = 0;
  uVar24 = *unaff_x23;
  puVar10[0x20] = unaff_x23[1];
  ppuVar12 = &PTR___tlv_bootstrap_11340e278;
  (*(code *)PTR___tlv_bootstrap_11340e278)(uVar24);
  plVar18 = extraout_x8_00;
  do {
    puVar10[0x21] = plVar18;
    uVar9 = plVar18 == (long *)puVar10[0x20];
    if ((bool)uVar9) break;
    puVar13 = (undefined8 *)puVar10[0x1d];
    lVar17 = *plVar18;
    FUN_1087fc3a8(plVar2,puVar13,lVar17,puVar10[0x1e],puVar10[0x1f]);
    *plVar1 = *plVar2;
    do {
      func_0x0001087ff83c();
    } while (extraout_w10_00 != 0);
    func_0x0001087ff9f4(*plVar1);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar10 + 0x22) = 0;
      lVar20 = *plVar1;
      puVar22 = *ppuVar12;
      if (puVar22 == (undefined *)0x0) {
        func_0x000107c3a5c0();
        puVar22 = (undefined *)*puVar13;
      }
      plVar18 = (long *)(lVar20 + 0x10);
      do {
        if (*plVar18 == 0) {
          bVar8 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar8) {
            *plVar18 = 1;
            ExclusiveMonitorsStatus();
          }
          func_0x0001088002e8();
          plVar18 = extraout_x8_02;
          uVar6 = extraout_w9_00;
          uVar14 = extraout_x10_00;
        }
        else {
          func_0x0001088002f4();
          plVar18 = extraout_x8_01;
          uVar6 = extraout_w9;
          uVar14 = extraout_x10;
        }
        if ((uVar14 & 1) != 0) {
          func_0x0001087ff990();
          if ((bool)uVar9) {
            func_0x0001087ff8a8();
            func_0x0001087ff84c();
            func_0x0001087ff810();
            *(undefined8 **)(lVar20 + 0x90) = puVar13;
          }
          func_0x0001087ff970();
          *(undefined **)(extraout_x8_04 + 0x20) = puVar22;
          func_0x0001087ff898(*(undefined8 *)(lVar20 + 0x90));
          *(undefined8 *)(lVar20 + 0x10) = 0;
          return;
        }
      } while ((uVar6 >> 1 & 1) == 0);
    }
    if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 5 & 1) != 0) {
      func_0x00010880011c(*plVar1);
      __ZSt17rethrow_exceptionSt13exception_ptr(puVar10 + 0x14);
LAB_1087fb7f4:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1087fb7f8);
      (*pcVar7)();
    }
    func_0x000108800168();
    func_0x0001087ffb80();
    func_0x0001087ffa40();
    uVar14 = puVar10[0x19];
    bVar8 = (ulong)puVar10[0x1a] <= uVar14;
    if (bVar8) {
      lVar20 = puVar10[0x18];
      if (((long)(uVar14 - lVar20) >> 7) + 1U >> 0x39 != 0) {
        FUN_1087fc1b0();
        goto LAB_1087fb7f4;
      }
      func_0x0001087ffdac();
      lVar21 = extraout_x9;
      if (bVar8) {
        lVar21 = extraout_x8_03;
      }
      if (lVar21 == 0) {
        lVar21 = 0;
        lVar17 = 0;
      }
      else {
        FUN_1087fc1bc();
      }
      lVar20 = lVar21 + (uVar14 - lVar20);
      FUN_1087fd268(lVar20,puVar10 + 4);
      lVar23 = puVar10[0x18];
      lVar4 = puVar10[0x19];
      lVar3 = lVar20 + (lVar23 - lVar4);
      puVar10[0x1b] = lVar3;
      puVar10[0x1c] = lVar3;
      puVar10[0x14] = puVar10 + 0x1a;
      puVar10[0x15] = plVar2;
      puVar10[0x16] = plVar1;
      lVar15 = lVar3;
      for (lVar16 = lVar23; lVar16 != lVar4; lVar16 = lVar16 + 0x80) {
        FUN_1087fd268(lVar15,lVar16);
        lVar15 = *plVar1 + 0x80;
        *plVar1 = lVar15;
      }
      *(undefined1 *)(puVar10 + 0x17) = 1;
      for (; lVar23 != lVar4; lVar23 = lVar23 + 0x80) {
        func_0x0001087fc078(lVar23 + 0x10);
      }
      lVar20 = lVar20 + 0x80;
      FUN_1087fc258(puVar10 + 0x14);
      lVar16 = puVar10[0x18];
      puVar10[0x18] = lVar3;
      puVar10[0x19] = lVar20;
      puVar10[0x1a] = lVar21 + lVar17 * 0x80;
      if (lVar16 != 0) {
        __ZdlPv();
      }
    }
    else {
      FUN_1087fd268(uVar14,puVar10 + 4);
      lVar20 = uVar14 + 0x80;
    }
    lVar17 = puVar10[0x21];
    puVar10[0x19] = lVar20;
    iVar5 = *(int *)(lVar20 + -0x6c);
    func_0x0001087ffe98();
    plVar18 = (long *)(lVar17 + 8);
  } while (iVar5 == 0);
  lVar17 = *plVar19;
  do {
    lStack_80 = 0;
    lVar20 = lVar17 + 0x10;
    func_0x0001087ff93c(lVar20,&lStack_80);
    if ((int)lVar20 != 0) {
      if (*(char *)(lVar17 + 0xb0) == '\x01') {
        FUN_1087fc33c(lVar17 + 0x98);
      }
      uVar24 = puVar10[0x18];
      *(undefined8 *)(lVar17 + 0xa0) = puVar10[0x19];
      *(undefined8 *)(lVar17 + 0x98) = uVar24;
      *(undefined8 *)(lVar17 + 0xa8) = puVar10[0x1a];
      puVar10[0x18] = 0;
      puVar10[0x19] = 0;
      puVar10[0x1a] = 0;
      *(undefined1 *)(lVar17 + 0xb0) = 1;
      *(undefined8 *)(lVar17 + 0x10) = 2;
      func_0x000107c31508(lVar17,plVar19);
      break;
    }
  } while (((uint)lStack_80 >> 1 & 1) == 0);
  func_0x0001087ffc50();
  func_0x0001087ffcc4();
  func_0x0001087ff954();
  func_0x0001087ff9a0();
  return;
}



/* Entry: 1087fb858; end: 1087fb8a3;  */

/* WARNING: Possible PIC construction at 0x0001087fb894: Changing call to branch */

undefined1  [16] FUN_1087fb858(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3d == 0) {
    uVar1 = param_1[2] - *param_1 >> 2;
    if (uVar1 <= param_2) {
      uVar1 = param_2;
    }
    if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
      uVar1 = 0x1fffffffffffffff;
    }
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = uVar1;
    return auVar2;
  }
  func_0x0001087ff8d8();
  FUN_1087fb8c8();
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1087fb8a4; end: 1087fb8c7;  */

void FUN_1087fb8a4(void)

{
  FUN_1087fb8c8();
  return;
}



/* Entry: 1087fb8c8; end: 1087fb8e3;  */

long * FUN_1087fb8c8(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = (long *)(param_2 << 3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1087fb910();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087fb8e4; end: 1087fb90f;  */

long * FUN_1087fb8e4(long *param_1)

{
  FUN_1087fb910();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1087fb910; end: 1087fb917;  */

void FUN_1087fb910(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001087f99f0();
  }
  return;
}



/* Entry: 1087fb918; end: 1087fb94b;  */

void FUN_1087fb918(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -8;
    func_0x0001087f99f0();
  }
  return;
}



/* Entry: 1087fb94c; end: 1087fb94f;  */

undefined8 * FUN_1087fb94c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a731a0;
  func_0x000107c299a4(param_1 + 8);
  func_0x000107c28868(param_1 + 5);
  func_0x000107c299a0(param_1 + 2);
  return param_1;
}



/* Entry: 1087fb950; end: 1087fb963;  */

void FUN_1087fb950(void)

{
  FUN_1087fbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fb964; end: 1087fbd1f;  */

void FUN_1087fb964(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long lVar6;
  long *plVar7;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar9;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar10;
  undefined1 auStack_b8 [112];
  undefined8 uStack_48;
  
  func_0x000107c33694();
  puVar2 = (undefined8 *)0xc8;
  uStack_48 = extraout_x8;
  __Znwm();
  *puVar2 = FUN_1087fe32c;
  puVar2[1] = FUN_1087fe444;
  puVar2[0x17] = param_2;
  func_0x0001087fbde0(puVar2 + 2);
  FUN_1087fbd64(param_1,puVar2 + 2);
  plVar3 = *(long **)(param_2 + 0x10);
  if ((plVar3 != (long *)0x0) &&
     (param_3 = (undefined8 *)(ulong)*(uint *)(param_2 + 0x38), *(uint *)(param_2 + 0x38) != 0)) {
    (**(code **)(*plVar3 + 0x20))();
    in_ZR = *(char *)(param_2 + 0x50) == '\x01';
    if (((bool)in_ZR) && (in_ZR = *(char *)(param_2 + 0x20) == '\x01', (bool)in_ZR)) {
      (**(code **)(**(long **)(param_2 + 0x40) + 0x10))(puVar2 + 0xf);
      func_0x000108800278();
      func_0x000107c314e0(auStack_b8);
      func_0x000107c2886c(puVar2 + 0x10,auStack_b8,puVar2 + 0xf);
      func_0x0001088000b4();
      puVar2[0x13] = puVar2[0x10];
      if (puVar2[0x10] != 0) {
        do {
          func_0x0001087ff83c();
        } while (extraout_w10 != 0);
      }
      lVar6 = *param_4;
      puVar2[0x14] = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x0001087ff83c();
        } while (extraout_w10_00 != 0);
      }
      func_0x0001087ffe34();
      plVar4 = puVar2 + 0x13;
      param_3 = puVar2 + 0x14;
      FUN_1087ae2d0(puVar2 + 0x12,plVar4,param_3,puVar2 + 0xc);
      puVar2[0x11] = puVar2[0x12];
      do {
        func_0x0001087ff83c();
      } while (extraout_w10_01 != 0);
      func_0x0001087ff9f4(puVar2[0x11]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x18) = 0;
        lVar6 = puVar2[0x11];
        func_0x0001087ff82c();
        lVar10 = *plVar4;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar4;
        }
        plVar7 = (long *)(lVar6 + 0x10);
        do {
          if (*plVar7 == 0) {
            func_0x0001087ff980();
            plVar7 = extraout_x8_01;
            uVar1 = extraout_w10_03;
            uVar9 = extraout_w11_00;
          }
          else {
            func_0x0001087fff48();
            plVar7 = extraout_x8_00;
            uVar1 = extraout_w10_02;
            uVar9 = extraout_w11;
          }
          if ((uVar9 & 1) != 0) {
LAB_1087fbc08:
            func_0x0001088002a0();
            uVar8 = extraout_x8_04;
            if ((bool)in_ZR) {
              func_0x0001087ff8a8();
              func_0x0001087ffee8();
              func_0x0001087ffdcc();
              uVar8 = extraout_x8_05;
            }
            uVar8 = uVar8 & 0xffffffff;
            plVar3[uVar8 * 3 + 2] = 0;
            plVar3[uVar8 * 3 + 3] = (long)puVar2;
            plVar3[uVar8 * 3 + 4] = lVar10;
            func_0x0001087ff898(*(undefined8 *)(lVar6 + 0x90));
            *(undefined8 *)(lVar6 + 0x10) = 0;
            goto LAB_1087fbbf4;
          }
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28870(puVar2 + 0x11);
      func_0x0001087ffd64();
      func_0x0001087ffce0();
      func_0x0001087ffa6c();
      func_0x0001087ffd40();
      func_0x0001087ffd5c();
      func_0x0001087ffe1c();
      puVar5 = puVar2 + 0xf;
    }
    else {
      func_0x000108800278();
      func_0x000107c314e0(puVar2 + 0x15);
      lVar6 = *param_4;
      puVar2[0x16] = lVar6;
      if (lVar6 != 0) {
        do {
          func_0x0001087ff83c();
        } while (extraout_w10_04 != 0);
      }
      func_0x0001087ffe34();
      plVar4 = puVar2 + 0x15;
      param_3 = puVar2 + 0x16;
      FUN_1087ae498(puVar2 + 0x10,plVar4,param_3,puVar2 + 0xc);
      puVar2[0xf] = puVar2[0x10];
      do {
        func_0x0001087ff83c();
      } while (extraout_w10_05 != 0);
      func_0x0001087ff9f4(puVar2[0xf]);
      if ((extraout_w8_00 >> 1 & 1) == 0) {
        *(undefined1 *)(puVar2 + 0x18) = 1;
        lVar6 = puVar2[0xf];
        func_0x0001087ff82c();
        lVar10 = *plVar4;
        if (lVar10 == 0) {
          func_0x000107c3a5c0();
          lVar10 = *plVar4;
        }
        plVar7 = (long *)(lVar6 + 0x10);
        do {
          if (*plVar7 == 0) {
            func_0x0001087ff980();
            plVar7 = extraout_x8_03;
            uVar1 = extraout_w10_07;
            uVar9 = extraout_w11_02;
          }
          else {
            func_0x0001087fff48();
            plVar7 = extraout_x8_02;
            uVar1 = extraout_w10_06;
            uVar9 = extraout_w11_01;
          }
          if ((uVar9 & 1) != 0) goto LAB_1087fbc08;
        } while ((uVar1 >> 1 & 1) == 0);
      }
      func_0x000107c28834(puVar2 + 0xf);
      func_0x000107c27f9c(puVar2 + 0xf);
      func_0x0001087ffe1c();
      func_0x0001087ffa6c();
      func_0x000107c27f9c(puVar2 + 0x16);
      puVar5 = puVar2 + 0x15;
    }
    func_0x000107c27f9c(puVar5);
  }
  func_0x0001087ffb60();
  func_0x00010880003c();
  func_0x0001087fc078(auStack_b8);
  plVar4 = puVar2 + 4;
  FUN_1087a33a8(plVar4);
  while( true ) {
    func_0x0001087ff954();
    func_0x0001087ff9a0();
LAB_1087fbbf4:
    func_0x000107c3368c(uStack_48);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    if ((int)param_3 != 0) goto LAB_1087fbc58;
    do {
      func_0x0001087ff9d8();
LAB_1087fbc58:
      func_0x000104bd46a0(plVar4);
    } while ((int)param_3 == 0);
    func_0x0001087ffd64();
    func_0x0001087ffce0();
    func_0x0001087ffa6c();
    func_0x0001087ffd40();
    func_0x0001087ffd5c();
    func_0x0001087ffe1c();
    plVar4 = puVar2 + 0xf;
    func_0x000107c27f9c();
    func_0x0001087ffc48();
    func_0x0001087ff9d0();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087fbd20; end: 1087fbd63;  */

undefined8 * FUN_1087fbd20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a731a0;
  func_0x000107c299a4(param_1 + 8);
  func_0x000107c28868(param_1 + 5);
  func_0x000107c299a0(param_1 + 2);
  return param_1;
}



/* Entry: 1087fbd64; end: 1087fbdab;  */

void FUN_1087fbd64(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  func_0x0001088000b4();
  return;
}



/* Entry: 1087fbdac; end: 1087fbe1b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087fbdac(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087fbef8(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087fbe1c; end: 1087fbe63;  */

void FUN_1087fbe1c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0x110;
  __Znwm();
  FUN_1087fbe64();
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x0001088000b4();
  return;
}



/* Entry: 1087fbe64; end: 1087fbe8f;  */

void FUN_1087fbe64(undefined8 *param_1)

{
  func_0x000107c31510();
  *param_1 = &PTR_FUN_110a73408;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



/* Entry: 1087fbe90; end: 1087fbe93;  */

undefined8 * FUN_1087fbe90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73408;
  FUN_1087fbed8(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087fbe94; end: 1087fbea7;  */

void FUN_1087fbe94(void)

{
  FUN_1087fbea8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fbea8; end: 1087fbed7;  */

undefined8 * FUN_1087fbea8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73408;
  FUN_1087fbed8(param_1 + 0x13);
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087fbed8; end: 1087fbef7;  */

void FUN_1087fbed8(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001087fc078();
  }
  return;
}



/* Entry: 1087fbef8; end: 1087fbf73;  */

long FUN_1087fbef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000107c336b4();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x20 + 0x10;
    func_0x0001087ff93c(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      FUN_1087fbf74(unaff_x20 + 0x98,param_3);
      *(undefined8 *)(unaff_x20 + 0x10) = 2;
      func_0x000108800000();
      func_0x000107c31508();
      return lVar1;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return lVar1;
}



/* Entry: 1087fbf74; end: 1087fbf9b;  */

void FUN_1087fbf74(void)

{
  func_0x000107c336b4();
  FUN_1087fbf9c();
  func_0x000108800000();
  func_0x0001087fbfc0();
  return;
}



/* Entry: 1087fbf9c; end: 1087fbfdb;  */

void FUN_1087fbf9c(long param_1)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    func_0x0001087fc078();
    *(undefined1 *)(param_1 + 0x70) = 0;
  }
  return;
}



/* Entry: 1087fbfdc; end: 1087fc0a3;  */

void FUN_1087fbfdc(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c336c0();
  func_0x000107c33728();
  FUN_1087a9638();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined1 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  *(undefined1 *)(unaff_x19 + 0x68) = 0;
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
    *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined1 *)(unaff_x19 + 0x68) = 1;
  }
  return;
}



/* Entry: 1087fc0a4; end: 1087fc1af;  */

ulong * FUN_1087fc0a4(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong *puStack_80;
  undefined1 uStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  undefined1 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar5 = *param_2;
  lVar1 = param_2[1];
  uStack_78 = 0;
  lVar2 = lVar1 - lVar5;
  puStack_80 = param_1;
  if (lVar2 != 0) {
    uVar4 = lVar2 >> 7;
    if (uVar4 >> 0x39 != 0) {
      FUN_1087fc1b0();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1087fc18c);
      (*pcVar3)();
    }
    FUN_1087fc1bc();
    *param_1 = uVar4;
    param_1[1] = uVar4;
    puStack_70 = param_1 + 2;
    *puStack_70 = uVar4 + (long)param_2 * 0x80;
    puStack_68 = &uStack_50;
    puStack_60 = &uStack_48;
    uStack_58 = 0;
    uStack_50 = uVar4;
    for (; uStack_48 = uVar4, lVar5 != lVar1; lVar5 = lVar5 + 0x80) {
      func_0x0001087fc1f0(uVar4,lVar5);
      uVar4 = uStack_48 + 0x80;
    }
    uStack_58 = 1;
    FUN_1087fc258(&puStack_70);
    param_1[1] = uVar4;
  }
  uStack_78 = 1;
  FUN_1087fc2a8(&puStack_80);
  return param_1;
}



/* Entry: 1087fc1b0; end: 1087fc1bb;  */

void FUN_1087fc1b0(ulong param_1)

{
  func_0x0001087ff8d8();
  if (param_1 >> 0x39 == 0) {
    __Znwm(param_1 << 7);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087ffe7c();
  FUN_1087fc210();
  return;
}



/* Entry: 1087fc1bc; end: 1087fc20f;  */

void FUN_1087fc1bc(ulong param_1)

{
  if (param_1 >> 0x39 == 0) {
    __Znwm(param_1 << 7);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001087ffe7c();
  FUN_1087fc210();
  return;
}



/* Entry: 1087fc210; end: 1087fc257;  */

void FUN_1087fc210(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336c0();
  func_0x000107c33728();
  FUN_1087a31d4();
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c279a0(unaff_x19 + 0x50,unaff_x20 + 0x50);
  return;
}



/* Entry: 1087fc258; end: 1087fc2a7;  */

long FUN_1087fc258(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = **(long **)(param_1 + 8);
    for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x80) {
      func_0x0001087fc078(lVar1 + -0x70);
    }
  }
  return param_1;
}



/* Entry: 1087fc2a8; end: 1087fc2d3;  */

long FUN_1087fc2a8(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_1087fc2d4(param_1);
  }
  return param_1;
}



/* Entry: 1087fc2d4; end: 1087fc32f;  */

void FUN_1087fc2d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)*param_1;
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    for (lVar1 = plVar2[1]; lVar1 != lVar3; lVar1 = lVar1 + -0x80) {
      func_0x0001087fc078(lVar1 + -0x70);
    }
    plVar2[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 1087fc330; end: 1087fc33b;  */

void FUN_1087fc330(void)

{
  func_0x0001087ff8d8();
  func_0x0001087fffd8();
  FUN_1087fc2d4();
  return;
}



/* Entry: 1087fc33c; end: 1087fc3a7;  */

void FUN_1087fc33c(void)

{
  func_0x0001087fffd8();
  FUN_1087fc2d4();
  return;
}



/* Entry: 1087fc3a8; end: 1087fcd9f;  */

void FUN_1087fc3a8(long *param_1,long param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  undefined4 extraout_w8_03;
  uint extraout_w8_04;
  undefined4 extraout_w8_05;
  undefined4 extraout_w8_06;
  undefined8 extraout_x8;
  long lVar17;
  code *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  uint extraout_w9;
  undefined4 uVar18;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar19;
  long *plVar20;
  long *plVar21;
  undefined4 uVar22;
  long *plVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_68;
  
  func_0x000107c33694();
  puVar6 = (undefined8 *)0x2a0;
  uStack_68 = extraout_x8;
  __Znwm();
  *puVar6 = FUN_1087fe4b8;
  puVar6[1] = FUN_1087feb7c;
  puVar6[0x52] = param_5;
  puVar6[0x51] = param_4;
  puVar6[0x50] = param_3;
  puVar6[0x4f] = param_2;
  puVar7 = (undefined8 *)0x120;
  __Znwm();
  puVar8 = puVar7;
  func_0x00010880015c();
  *puVar8 = &PTR_FUN_110a73220;
  *(undefined1 *)(puVar8 + 0x13) = 0;
  *(undefined1 *)(puVar8 + 0x23) = 0;
  uStack_f0 = (undefined **)0x0;
  ppuStack_120 = (undefined **)0x0;
  func_0x000107c27f98(&ppuStack_120);
  func_0x000107c27f9c(&uStack_f0);
  plVar21 = puVar6 + 3;
  *plVar21 = (long)puVar7;
  puVar6[2] = puVar7;
  uStack_f0 = (undefined **)0x0;
  uStack_e8 = 0;
  func_0x000107c27fec(&uStack_f0);
  uStack_f0 = (undefined **)puVar6[2];
  if (uStack_f0 != (undefined **)0x0) {
    do {
      func_0x0001087ff83c();
    } while (extraout_w10 != 0);
  }
  plVar20 = puVar6 + 0x4a;
  *param_1 = (long)uStack_f0;
  uStack_f0 = (undefined **)0x0;
  puVar8 = &uStack_f0;
  func_0x000107c27f9c();
  puVar6[0x35] = 0;
  func_0x000107c28258();
  puVar6[0x36] = puVar8;
  *(undefined1 *)(puVar6 + 0x37) = 1;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  lVar25 = param_4[0xb3];
  puVar6[0x4a] = lVar25;
  lVar17 = param_4[0xb4];
  puVar6[0x4b] = lVar17;
  if (lVar17 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10_00 != 0);
  }
  *(undefined1 *)(puVar6 + 0x4c) = 0;
  *(undefined1 *)(puVar6 + 0x4d) = 0;
  lVar17 = *param_5;
  puVar6[0x4e] = lVar17;
  if (lVar17 != 0) {
    do {
      func_0x0001087ff83c();
    } while (extraout_w10_01 != 0);
    lVar25 = *plVar20;
  }
  func_0x000108800214();
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x0001087ff9e8(uVar9);
  (*extraout_x8_00)();
  FUN_1087afe5c(lVar25,puVar8,uVar9,0,puVar6 + 0x4c);
  pcVar10 = (char *)(param_2 + 200);
  func_0x000107c289e8();
  uVar4 = *pcVar10 != '\0';
  uVar5 = *pcVar10 == '\x01';
  if ((bool)uVar5) {
    puVar6[0x1e] = puVar6[0x4b];
    puVar6[0x1d] = puVar6[0x4a];
    if (puVar6[0x4b] != 0) {
      do {
        func_0x000107c33690();
      } while (extraout_w10_02 != 0);
    }
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    puVar6[0x20] = *(undefined8 *)(param_2 + 0x20);
    puVar6[0x1f] = uVar9;
    if (*(long *)(param_2 + 0x20) != 0) {
      do {
        func_0x000107c33690();
      } while (extraout_w10_03 != 0);
    }
    func_0x000108800214();
    puVar6[0x21] = pcVar10;
    puVar6[0x2a] = 0;
    pcVar11 = pcVar10;
    func_0x0001088001ac();
    *(undefined ***)pcVar11 = &PTR_FUN_110a73260;
    uVar9 = puVar6[0x1d];
    *(undefined8 *)(pcVar11 + 0x10) = puVar6[0x1e];
    *(undefined8 *)(pcVar11 + 8) = uVar9;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    uVar9 = puVar6[0x1f];
    *(undefined8 *)(pcVar11 + 0x20) = puVar6[0x20];
    *(undefined8 *)(pcVar11 + 0x18) = uVar9;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    *(char **)(pcVar11 + 0x28) = pcVar10;
    puVar6[0x2a] = pcVar11;
    func_0x000107c283c8(param_4 + 0xab,puVar6 + 0x27);
    func_0x000107c27938(puVar6 + 0x27);
    puVar8 = puVar6 + 0x1d;
    FUN_1087fd104();
    puVar6[0x39] = puVar6[0x4b];
    puVar6[0x38] = puVar6[0x4a];
    if (puVar6[0x4b] != 0) {
      do {
        func_0x000107c33690();
      } while (extraout_w10_04 != 0);
    }
    func_0x000108800214();
    puVar6[0x3a] = puVar8;
    puVar6[0x2e] = 0;
    puVar7 = puVar8;
    func_0x000107c33724();
    *puVar7 = &PTR_FUN_110a732e0;
    uVar9 = puVar6[0x38];
    puVar7[2] = puVar6[0x39];
    puVar7[1] = uVar9;
    puVar6[0x38] = 0;
    puVar6[0x39] = 0;
    puVar7[3] = puVar8;
    puVar6[0x2e] = puVar7;
    func_0x000107c283c8(param_4 + 0xaf,puVar6 + 0x2b);
    func_0x000107c27938(puVar6 + 0x2b);
    func_0x000108794594(puVar6 + 0x38);
  }
  puVar6[0x12] = 0x1087fd244;
  puVar6[0x13] = &PTR_DAT_110a73350;
  puVar6[0x14] = plVar20;
  pppuVar12 = (undefined ***)(param_4 + 3);
  (**(code **)(*param_3 + 0x10))(puVar6 + 0x2f,param_3,pppuVar12,puVar6 + 0x4e);
  puVar6[0x18] = puVar6[0x2f];
  do {
    func_0x0001087ff83c();
  } while (extraout_w10_05 != 0);
  func_0x0001087ff9f4(puVar6[0x18]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar6 + 0x53) = 0;
    lVar17 = puVar6[0x18];
    func_0x0001087ff82c();
    param_4 = (undefined8 *)*param_3;
    if (param_4 == (undefined8 *)0x0) {
      func_0x000107c3a5c0();
      param_4 = (undefined8 *)*param_3;
    }
    plVar23 = (long *)(lVar17 + 0x10);
    do {
      if (*plVar23 == 0) {
        func_0x0001087ff980();
        plVar23 = extraout_x8_02;
        uVar1 = extraout_w10_07;
        uVar19 = extraout_w11_00;
      }
      else {
        func_0x0001087fff48();
        plVar23 = extraout_x8_01;
        uVar1 = extraout_w10_06;
        uVar19 = extraout_w11;
      }
      if ((uVar19 & 1) != 0) {
        plVar20 = *(long **)(lVar17 + 0x90);
        func_0x0001087ff990();
        if ((bool)uVar5) {
          func_0x0001087ff8a8();
          uVar1 = extraout_w8_02;
          if ((bool)uVar4) {
            uVar1 = extraout_w9;
          }
          plVar21 = (long *)(ulong)uVar1;
          func_0x0001087ff84c();
          func_0x0001087ff810();
          *(long **)(lVar17 + 0x90) = param_3;
        }
        func_0x0001087ff970();
        *(undefined8 **)(extraout_x8_04 + 0x20) = param_4;
        func_0x0001087ff898(*(undefined8 *)(lVar17 + 0x90));
        *(undefined8 *)(lVar17 + 0x10) = 0;
        goto LAB_1087fc898;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  puVar8 = puVar6 + 0x18;
  FUN_1087fcdf4();
  puVar6[4] = *puVar8;
  func_0x0001087b07bc(puVar6 + 5,puVar8 + 1);
  uVar22 = *(undefined4 *)(puVar8 + 9);
  *(undefined1 *)((long)puVar6 + 0x6c) = *(undefined1 *)((long)puVar8 + 0x4c);
  *(undefined4 *)(puVar6 + 0xd) = uVar22;
  func_0x000107c27c5c(puVar6 + 0xe,puVar8 + 10);
  func_0x0001087ffdec();
  func_0x0001087ffd6c();
LAB_1087fc724:
  do {
    func_0x0001087ff9bc();
    if (((extraout_w8_00 >> 1 & 1) != 0) ||
       ((func_0x0001087ff9bc(), (extraout_w8_01 >> 5 & 1) != 0 && (*(int *)(*plVar20 + 0x38) == 0)))
       ) {
      ppuStack_110 = (undefined **)0x0;
      uStack_108 = 0;
      ppuStack_120 = &PTR_FUN_110a6f328;
      uStack_118 = 0;
      uStack_100 = 0x13;
      func_0x0001087fff80();
      FUN_1087ffca0();
      pppuVar12 = &ppuStack_120;
      FUN_108791610(&ppuStack_120,puVar6 + 0x47);
      FUN_108791a34(&uStack_f0,pppuVar12);
      lVar17 = puVar6[0x4f];
      func_0x0001087fff78();
      FUN_108788618(&ppuStack_120);
      plVar23 = *(long **)(lVar17 + 0x48);
      FUN_108791a34(puVar6 + 0x22,&uStack_f0);
      func_0x0001088001dc(*(undefined8 *)(*plVar23 + 0x60));
      func_0x0001087fff64();
      func_0x0001087ffc98();
    }
    func_0x000107c28288(puVar6 + 0x35);
    lVar17 = *(long *)(puVar6[0x4f] + 0x88);
    if (lVar17 == 0) {
      uVar22 = 0;
    }
    else {
      func_0x0001087ff9e8();
      uVar22 = (undefined4)lVar17;
      (*extraout_x8_03)();
    }
    ppuVar15 = (undefined **)(puVar6 + 0x35);
    FUN_1087b023c();
    uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar22);
    uStack_f0 = ppuVar15;
    func_0x0001087fff54();
    lVar17 = *plVar21;
    do {
      ppuStack_120 = (undefined **)0x0;
      iVar24 = (int)lVar17 + 0x10;
      pppuVar12 = &ppuStack_120;
      func_0x0001087ff93c();
      if (iVar24 != 0) {
        uVar5 = *(char *)(lVar17 + 0x118) == '\x01';
        if ((bool)uVar5) {
          func_0x0001087fc078(lVar17 + 0xa8);
          *(undefined1 *)(lVar17 + 0x118) = 0;
        }
        func_0x00010880017c();
        func_0x0001087ffb40();
        break;
      }
    } while (((uint)ppuStack_120 >> 1 & 1) == 0);
    func_0x0001087ffc50();
    param_3 = param_4 + 2;
    func_0x0001087fc078();
    func_0x0001087ffce8();
    func_0x0001087ffc78();
    func_0x0001087ffc68();
    func_0x0001087ffe64();
    func_0x0001087ffc70();
    func_0x0001087ff954();
    func_0x0001087ff9a0();
LAB_1087fc898:
    func_0x000107c3368c(uStack_68);
    if ((bool)uVar5) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pppuVar12 != 0) goto LAB_1087fc948;
    do {
      func_0x0001087ffd88();
LAB_1087fc948:
      plVar23 = param_3;
      func_0x000104bd46a0();
      func_0x0001087ffaec();
      iVar24 = (int)param_4;
    } while (iVar24 == 0);
    func_0x0001087ffdec();
    func_0x0001087ffd6c();
    uVar5 = iVar24 == 6;
    if (!(bool)uVar5) {
      uVar5 = iVar24 == 5;
      if ((bool)uVar5) {
        param_4 = (undefined8 *)puVar6[0x52];
        func_0x0001087ffacc();
        func_0x0001087ff9f4(*param_4);
        if ((extraout_w8_04 >> 1 & 1) == 0) {
          func_0x00010880028c();
          if (!(bool)uVar5) {
            uVar22 = *(undefined4 *)(pppuVar12 + 1);
            goto LAB_1087fcbe8;
          }
          lVar17 = puVar6[0x4f];
          param_4 = *(undefined8 **)(lVar17 + 0x48);
          FUN_1087fce88();
          plVar23 = *(long **)(lVar17 + 0x48);
          func_0x0001087ffa74();
          uStack_d0 = 0x15;
          func_0x0001087ffed0();
          FUN_1087ffca0();
          func_0x000108800228();
          puVar8 = param_4;
          func_0x0001087ffec0();
          func_0x000108800130();
          puVar7 = param_4;
          FUN_108791610(param_4,puVar6 + 0x32,puVar8);
          FUN_108791a34(puVar6 + 0x18,puVar7);
          func_0x0001088001dc(*(undefined8 *)(*plVar23 + 0x60));
          lVar17 = puVar6[0x50];
          func_0x0001087ffdf4();
          func_0x0001087ffeb8();
          func_0x0001087fff90();
          func_0x0001087ffc98();
          uVar22 = *(undefined4 *)(lVar17 + 8);
          uVar18 = 2;
        }
        else {
          func_0x0001087fff6c();
          uVar22 = extraout_w8_05;
LAB_1087fcbe8:
          uVar18 = 6;
        }
        uStack_f0 = (undefined **)CONCAT44(uVar18,uVar22);
        func_0x0001087ff7ec();
        func_0x0001087ffae4();
        ___cxa_end_catch();
      }
      else {
        if (iVar24 == 4) {
          func_0x0001087ffacc();
          func_0x000108800240();
          FUN_1087b149c();
          func_0x0001087ffd14();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1087fcc34);
          (*pcVar3)();
        }
        uVar5 = iVar24 == 3;
        if ((bool)uVar5) {
          lVar25 = puVar6[0x51];
          lVar17 = puVar6[0x50];
          lVar26 = puVar6[0x4f];
          func_0x0001087ffacc();
          uVar13 = (ulong)*(uint *)(lVar25 + 0x548);
          func_0x000108841bf8(uVar13);
          uVar14 = (ulong)*(uint *)(lVar17 + 8);
          func_0x0001087fab40(uVar14);
          FUN_108841e44(lVar26 + 0x48,uVar13,uVar14,plVar23);
          lVar17 = puVar6[0x50];
          func_0x000107c31338();
          iVar24 = *(int *)(lVar25 + 0x548);
          iVar2 = *(int *)(lVar17 + 8);
          ppuVar15 = (undefined **)(long)iVar2;
          func_0x0001087fab40();
          ppuVar16 = ppuVar15;
          func_0x0001087ffa20();
          uStack_118 = 0;
          uStack_108 = 0;
          ppuStack_120 = ppuVar15;
          ppuStack_110 = ppuVar16;
          func_0x0001087ffa58();
          param_4 = puVar6 + 0x41;
          func_0x0001087ffa48();
          func_0x0001087ffc5c();
          func_0x0001087ff9a8();
          (*extraout_x8_05)();
          uStack_f0 = (undefined **)CONCAT44(uStack_f0._4_4_,7);
          func_0x0001087ff85c((undefined **)(long)iVar2 + (long)iVar24 * 0x7d);
          func_0x0001088001b4();
          lVar17 = puVar6[0x50];
          func_0x0001087ffb88();
          func_0x0001087ffc40();
          func_0x0001087ffd38();
          uStack_f0 = (undefined **)CONCAT44(7,*(undefined4 *)(lVar17 + 8));
          func_0x0001087ff7ec();
          func_0x0001087ffae4();
          uStack_e0 = (ulong)*(uint *)(plVar23 + 1);
          uStack_f0 = (undefined **)(uStack_e0 & 0xff);
          uStack_e8 = 0;
          uStack_d8 = 0;
          func_0x0001088000e0();
          func_0x0001087fff98();
          func_0x0001088001a0();
          func_0x0001087ffe2c();
          ___cxa_end_catch();
        }
        else {
          func_0x0001087ffacc();
          uVar5 = iVar24 == 2;
          if ((bool)uVar5) {
            lVar17 = puVar6[0x51];
            lVar25 = puVar6[0x50];
            func_0x000107c31338();
            iVar24 = *(int *)(lVar17 + 0x548);
            iVar2 = *(int *)(lVar25 + 8);
            ppuVar15 = (undefined **)(long)iVar2;
            func_0x0001087fab40();
            ppuVar16 = ppuVar15;
            func_0x0001087ffa20();
            uStack_118 = 0;
            uStack_108 = 0;
            ppuStack_120 = ppuVar15;
            ppuStack_110 = ppuVar16;
            func_0x0001087ffa58();
            param_4 = puVar6 + 0x3b;
            func_0x0001087ffa48();
            func_0x0001087ffc5c();
            func_0x0001087ff9a8();
            (*extraout_x8_06)();
            uStack_f0 = (undefined **)CONCAT44(uStack_f0._4_4_,7);
            func_0x0001087ff85c((undefined **)(long)iVar2 + (long)iVar24 * 0x7d);
            func_0x0001088001b4();
            lVar17 = puVar6[0x50];
            func_0x0001087ffb88();
            func_0x0001087ffc40();
            func_0x0001087ffd38();
            uStack_f0 = (undefined **)CONCAT44(7,*(undefined4 *)(lVar17 + 8));
            func_0x0001087ff7ec();
            func_0x0001087ffae4();
            func_0x0001087ffa20();
            uStack_f0 = ppuVar16;
            func_0x000108800194();
            ___cxa_end_catch();
          }
          else {
            func_0x0001087fff6c();
            uStack_f0 = (undefined **)CONCAT44(7,extraout_w8_06);
            func_0x0001087ff7ec();
            func_0x0001087ffae4();
            ___cxa_end_catch();
          }
        }
      }
      goto LAB_1087fc724;
    }
    param_4 = (undefined8 *)puVar6[0x50];
    lVar17 = puVar6[0x4f];
    func_0x0001087ffacc();
    FUN_1087fce88(*(undefined8 *)(lVar17 + 0x48),param_4);
    func_0x0001087fff6c();
    uStack_f0 = (undefined **)CONCAT44(2,extraout_w8_03);
    func_0x0001087ff7ec();
    func_0x0001087ffae4();
    ___cxa_end_catch();
  } while( true );
}



/* Entry: 1087fcda0; end: 1087fcda3;  */

undefined8 * FUN_1087fcda0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a731e0;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_1087fc33c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087fcda4; end: 1087fcdb7;  */

void FUN_1087fcda4(void)

{
  FUN_1087fcdb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fcdb8; end: 1087fcdf3;  */

undefined8 * FUN_1087fcdb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a731e0;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    FUN_1087fc33c(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087fcdf4; end: 1087fce47;  */

long FUN_1087fcdf4(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087fce3c);
  (*pcVar1)();
}



/* Entry: 1087fce48; end: 1087fce87;  */

void FUN_1087fce48(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c336b4();
  func_0x000107c33728();
  FUN_1087b12d0();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x4c);
  *(undefined4 *)(unaff_x20 + 0x48) = *(undefined4 *)(unaff_x19 + 0x48);
  *(undefined1 *)(unaff_x20 + 0x4c) = uVar1;
  func_0x000107c27c54(unaff_x20 + 0x50,unaff_x19 + 0x50);
  return;
}



/* Entry: 1087fce88; end: 1087fcf4b;  */

void FUN_1087fce88(void)

{
  ulong uVar1;
  undefined ***pppuVar2;
  long *unaff_x19;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  func_0x000107c336c0();
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_FUN_110a6f328;
  uStack_68 = 0;
  uStack_50 = 0x14;
  func_0x000107c336dc();
  uVar1 = (ulong)*(uint *)(unaff_x20 + 8);
  func_0x0001087fab40(uVar1);
  pppuVar2 = &ppuStack_70;
  FUN_108791610(pppuVar2,auStack_88,uVar1);
  FUN_108791a34(auStack_48,pppuVar2);
  (**(code **)(*unaff_x19 + 0x60))();
  FUN_108788618(auStack_48);
  func_0x000107c336b8();
  FUN_108788618(&ppuStack_70);
  return;
}



/* Entry: 1087fcf4c; end: 1087fcf4f;  */

undefined8 * FUN_1087fcf4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73220;
  if (*(char *)(param_1 + 0x23) == '\x01') {
    func_0x0001087fc078(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087fcf50; end: 1087fcf63;  */

void FUN_1087fcf50(void)

{
  FUN_1087fcf64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fcf64; end: 1087fcf9f;  */

undefined8 * FUN_1087fcf64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73220;
  if (*(char *)(param_1 + 0x23) == '\x01') {
    func_0x0001087fc078(param_1 + 0x15);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087fcfa0; end: 1087fcfa3;  */

undefined8 * FUN_1087fcfa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73260;
  FUN_1087fd104(param_1 + 1);
  return param_1;
}



/* Entry: 1087fcfa4; end: 1087fcfb7;  */

void FUN_1087fcfa4(void)

{
  FUN_1087fd078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fcfb8; end: 1087fcfdb;  */

void FUN_1087fcfb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x0001088001ac();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a73260;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  lVar3 = puVar2[3];
  uVar4 = puVar2[2];
  puVar1[4] = puVar2[3];
  puVar1[3] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10_00 != 0);
  }
  puVar1[5] = puVar2[4];
  return;
}



/* Entry: 1087fcfdc; end: 1087fcfff;  */

void FUN_1087fcfdc(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a73260;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  lVar2 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[4] = puVar1[3];
  param_2[3] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10_00 != 0);
  }
  param_2[5] = puVar1[4];
  return;
}



/* Entry: 1087fd000; end: 1087fd06b;  */

void FUN_1087fd000(long param_1)

{
  undefined8 uVar1;
  code *extraout_x8;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001087ff9e8();
  (*extraout_x8)();
  if (*(char *)(puVar2 + 6) == '\x01') {
    func_0x0001087b5c04(puVar2,uVar3);
    uVar4 = *puVar2;
    uVar3 = uVar4;
    _strlen(uVar4);
    _strlen();
    func_0x000107c27944(uVar4,uVar3);
    if ((int)uVar4 != 0) {
      *(undefined8 *)(unaff_x20 + 8) = uVar1;
    }
  }
  return;
}



/* Entry: 1087fd06c; end: 1087fd077;  */

undefined ** FUN_1087fd06c(void)

{
  return &PTR_DAT_110a732c0;
}



/* Entry: 1087fd078; end: 1087fd0a3;  */

undefined8 * FUN_1087fd078(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73260;
  FUN_1087fd104(param_1 + 1);
  return param_1;
}



/* Entry: 1087fd0a4; end: 1087fd103;  */

void FUN_1087fd0a4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a73260;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_2[3];
  uVar2 = param_2[2];
  param_1[4] = param_2[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10_00 != 0);
  }
  param_1[5] = param_2[4];
  return;
}



/* Entry: 1087fd104; end: 1087fd12b;  */

undefined8 FUN_1087fd104(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c28800(param_1 + 0x10);
  func_0x000107c334f0();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1087fd12c; end: 1087fd12f;  */

undefined8 * FUN_1087fd12c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a732e0;
  func_0x000108794594(param_1 + 1);
  return param_1;
}



/* Entry: 1087fd130; end: 1087fd143;  */

void FUN_1087fd130(void)

{
  FUN_1087fd1dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fd144; end: 1087fd167;  */

void FUN_1087fd144(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  puVar1 = param_1;
  func_0x000107c33724();
  puVar2 = param_1 + 1;
  *puVar1 = &PTR_FUN_110a732e0;
  lVar3 = param_1[2];
  uVar4 = *puVar2;
  puVar1[2] = param_1[2];
  puVar1[1] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  puVar1[3] = puVar2[2];
  return;
}



/* Entry: 1087fd168; end: 1087fd19b;  */

void FUN_1087fd168(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a732e0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  param_2[3] = puVar1[2];
  return;
}



/* Entry: 1087fd19c; end: 1087fd1cf;  */

long FUN_1087fd19c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001088001cc(param_2,param_1,&PTR_DAT_110a73340);
  param_1 = param_1 + 8;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1087fd1d0; end: 1087fd1db;  */

undefined ** FUN_1087fd1d0(void)

{
  return &PTR_DAT_110a73340;
}



/* Entry: 1087fd1dc; end: 1087fd207;  */

undefined8 * FUN_1087fd1dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a732e0;
  func_0x000108794594(param_1 + 1);
  return param_1;
}



/* Entry: 1087fd208; end: 1087fd267;  */

void FUN_1087fd208(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110a732e0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107c33690();
    } while (extraout_w10 != 0);
  }
  param_1[3] = param_2[2];
  return;
}



/* Entry: 1087fd268; end: 1087fd3c3;  */

void FUN_1087fd268(void)

{
  func_0x0001087ffe7c();
  FUN_1087fbfdc();
  return;
}



/* Entry: 1087fd3c4; end: 1087fd3db;  */

void FUN_1087fd3c4(long *param_1)

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



/* Entry: 1087fd3dc; end: 1087fd403;  */

void FUN_1087fd3dc(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x000107c336d4();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    func_0x0001087ff948();
  }
  return;
}



/* Entry: 1087fd404; end: 1087fd41f;  */

void FUN_1087fd404(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1087fd420(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fd420; end: 1087fd45f;  */

undefined8 FUN_1087fd420(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27f98(param_1 + 0x50);
  func_0x000107c27f9c(param_1 + 0x48);
  func_0x0001087fd2f0(param_1 + 0x18);
  FUN_1087fd3dc(param_1 + 0x10);
  func_0x000107c33588();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 1087fd460; end: 1087fd463;  */

void FUN_1087fd460(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a73378;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087fd464; end: 1087fd477;  */

void FUN_1087fd464(void)

{
  func_0x0001087fd484();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fd478; end: 1087fd493;  */

long FUN_1087fd478(long param_1)

{
  long lStack_28;
  
  func_0x000100564088(param_1 + 0x328);
  func_0x0001005588dc(param_1 + 0x318);
  func_0x000100554370(param_1 + 0x308);
  func_0x000100563770(param_1 + 0x2f8);
  func_0x000100568b80(param_1 + 0x2e8);
  func_0x0001004a6508(param_1 + 0x208);
  func_0x000100567be4(param_1 + 0x1f8);
  func_0x000100568bec(param_1 + 0x1e8);
  func_0x000100569528(param_1 + 0x1d8);
  func_0x0001005635d4(param_1 + 0x1c8);
  func_0x000100553168(param_1 + 0x1b8);
  func_0x000100567c34(param_1 + 0x1a8);
  func_0x00010054f94c(param_1 + 0x198);
  func_0x000100565774(param_1 + 0x188);
  func_0x000100567a2c(param_1 + 0x178);
  func_0x000100567e90(param_1 + 0x168);
  func_0x000100567ba4(param_1 + 0x158);
  func_0x0001005636ac(param_1 + 0x148);
  func_0x000100558b18(param_1 + 0x138);
  func_0x000100567ef4(param_1 + 0x128);
  func_0x000100558934(param_1 + 0x118);
  func_0x000100562cac(param_1 + 0x108);
  func_0x0001004b55ac(param_1 + 0xf8);
  func_0x000100565838(param_1 + 0xe8);
  func_0x000100564c18(param_1 + 0xd8);
  func_0x0001005640e4(param_1 + 200);
  func_0x000100558bb4(param_1 + 0xb8);
  func_0x00010055890c(param_1 + 0xa8);
  func_0x000100450be4(param_1 + 0x98);
  func_0x00010055c0b4(param_1 + 0x88);
  func_0x00010055c0b4(param_1 + 0x78);
  func_0x00010055c0b4(param_1 + 0x68);
  func_0x00010054fa34(param_1 + 0x58);
  func_0x00010054f9c4(param_1 + 0x48);
  func_0x00010056a018();
  lStack_28 = param_1 + 0x18;
  func_0x000100100fd4(&lStack_28);
  return param_1 + 0x18;
}



/* Entry: 1087fd494; end: 1087fd4b7;  */

undefined8 FUN_1087fd494(undefined8 param_1)

{
  FUN_1087fd4b8(param_1,0);
  return param_1;
}



/* Entry: 1087fd4b8; end: 1087fd4cf;  */

void FUN_1087fd4b8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c29ab4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087fd4d0; end: 1087fd4eb;  */

void FUN_1087fd4d0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c29ab4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087fd4ec; end: 1087fd567;  */

void FUN_1087fd4ec(void)

{
  return;
}



/* Entry: 1087fd568; end: 1087fd643;  */

long FUN_1087fd568(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = param_1[1];
  if ((uVar8 != 0) && (param_1[3] != 0)) {
    uVar3 = param_2;
    FUN_108848654();
    uVar9 = uVar8 - 1;
    if ((uVar8 & uVar9) == 0) {
      uVar10 = uVar3 & uVar9;
    }
    else {
      uVar10 = uVar3;
      if (uVar8 <= uVar3) {
        uVar1 = 0;
        uVar7 = (uint)uVar8;
        if (uVar7 != 0) {
          uVar1 = (uint)uVar3 / uVar7;
        }
        uVar10 = (ulong)((uint)uVar3 - uVar1 * uVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + uVar10 * 8);
    if (plVar6 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        uVar5 = plVar6[1];
        if (uVar5 != uVar3) break;
        lVar4 = (long)(plVar6 + 2);
        func_0x000107c28078(lVar4,param_2);
        if ((int)lVar4 != 0) {
          return (long)plVar6;
        }
      }
      if ((uVar8 & uVar9) == 0) {
        uVar5 = uVar5 & uVar9;
      }
      else if (uVar8 <= uVar5) {
        uVar2 = 0;
        if (uVar8 != 0) {
          uVar2 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar2 * uVar8;
      }
    } while (uVar5 == uVar10);
  }
  return 0;
}



/* Entry: 1087fd644; end: 1087fd6b7;  */

undefined8 * FUN_1087fd644(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [216];
  
  _bzero(auStack_110,0xe0);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    FUN_1087fd6b8(param_1 + 2);
  }
  FUN_1087fd720(auStack_108);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x000107c31408(uVar1);
  FUN_1087fd720(param_1 + 2);
  return param_1;
}



/* Entry: 1087fd6b8; end: 1087fd6f7;  */

void FUN_1087fd6b8(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x0001087fa684();
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  return;
}



/* Entry: 1087fd6f8; end: 1087fd71f;  */

void FUN_1087fd6f8(void)

{
  func_0x000107c336b4();
  func_0x0001087ff90c();
  func_0x0001087ffd74();
  func_0x0001087ffa8c();
  func_0x000108800018();
  return;
}



/* Entry: 1087fd720; end: 1087fd73f;  */

void FUN_1087fd720(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x0001087fa684();
  }
  return;
}



/* Entry: 1087fd740; end: 1087fd78b;  */

void FUN_1087fd740(undefined8 param_1)

{
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [216];
  
  FUN_1087fd78c(auStack_110);
  FUN_1087fd78c(param_1,auStack_110);
  FUN_1087fd720(auStack_108);
  return;
}



/* Entry: 1087fd78c; end: 1087fd7d3;  */

undefined8 * FUN_1087fd78c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  if (*(char *)(param_2 + 0x1b) == '\x01') {
    func_0x0001087fd6dc(param_1 + 1,param_2 + 1);
  }
  return param_1;
}



/* Entry: 1087fd7d4; end: 1087fd7df;  */

void FUN_1087fd7d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_100 [208];
  
  func_0x0001087ff8d8();
  func_0x000107c336d4();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_1087fd884(auStack_100,*unaff_x19);
    FUN_1087fd850(unaff_x19 + 1,auStack_100);
    func_0x0001087fa684(auStack_100);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x1b) == '\x01') {
    func_0x0001087fa684();
    *(undefined1 *)(puVar1 + 0x1a) = 0;
  }
  return;
}



/* Entry: 1087fd7e0; end: 1087fd84f;  */

void FUN_1087fd7e0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined1 auStack_f0 [208];
  
  func_0x000107c336d4();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    FUN_1087fd884(auStack_f0,*unaff_x19);
    FUN_1087fd850(unaff_x19 + 1,auStack_f0);
    func_0x0001087fa684(auStack_f0);
    return;
  }
  puVar1 = unaff_x19 + 1;
  if (*(char *)(unaff_x19 + 0x1b) == '\x01') {
    func_0x0001087fa684();
    *(undefined1 *)(puVar1 + 0x1a) = 0;
  }
  return;
}



/* Entry: 1087fd850; end: 1087fd883;  */

long FUN_1087fd850(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    func_0x0001087fa6b0();
  }
  else {
    func_0x0001087fd6dc();
  }
  return param_1;
}


