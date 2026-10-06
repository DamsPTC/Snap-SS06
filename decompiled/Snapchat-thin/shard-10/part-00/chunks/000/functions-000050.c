/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1073c0294; end: 1073c0417;  */

undefined1 * FUN_1073c0294(undefined1 *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined1 *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [56];
  undefined1 auStack_160 [56];
  undefined1 auStack_128 [288];
  undefined8 uStack_8;
  
  func_0x0001073c73b0();
  func_0x0001073c7268();
  puVar5 = param_1;
  func_0x0001073c69bc();
  *(int *)(puVar5 + 0x100) = *(int *)(puVar5 + 0x100) + 1;
  puVar1 = (undefined1 *)param_2[1];
  uStack_8 = extraout_x8;
  for (puVar6 = (undefined1 *)*param_2; bVar4 = puVar6 == puVar1, !bVar4; puVar6 = puVar6 + 0x18) {
    puVar5 = puVar6;
    FUN_1073c0418();
    uVar2 = *(uint *)(param_1 + 0x168);
    fVar7 = (float)uVar2 / (float)(param_3 & 0xffffffff);
    auVar14._8_8_ = puVar5;
    auVar14._0_8_ = puVar5;
    auVar12._8_4_ = 0xffffffe0;
    auVar12._0_8_ = 0xfffffffffffffff0;
    auVar12._12_4_ = 0xffffffff;
    auVar12 = NEON_ushl(auVar14,auVar12,8);
    auVar13._0_4_ = (int)(short)puVar5;
    auVar13._4_4_ = (int)puVar5 >> 0x10;
    auVar13._8_4_ = auVar12._0_4_ >> 0x10;
    auVar13._12_4_ = auVar12._8_4_ >> 0x10;
    auVar12 = NEON_scvtf(auVar13,4);
    iVar8 = (int)(auVar12._0_4_ * fVar7);
    iVar9 = (int)(auVar12._4_4_ * fVar7);
    iVar10 = (int)(auVar12._8_4_ * fVar7);
    iVar11 = (int)(auVar12._12_4_ * fVar7);
    if (((iVar8 < (int)uVar2 && iVar9 < (int)uVar2) && (-1 < iVar10)) && (-1 < iVar11)) {
      func_0x000104c2fe00(auStack_160);
      func_0x000104c2fe00(auStack_198);
      FUN_1073c2b44(auStack_128);
      auVar3._4_4_ = iVar9;
      auVar3._0_4_ = iVar8;
      auVar3._8_4_ = iVar10;
      auVar3._12_4_ = iVar11;
      auVar12 = NEON_scvtf(auVar3,4);
      auVar14 = NEON_ucvtf(auVar3,4);
      uStack_1b0 = auVar12._0_8_;
      uStack_1a8 = auVar14._8_8_;
      FUN_1073bf778(uStack_1b0,auVar14._0_8_,param_1,auStack_128,&uStack_1b0);
      func_0x0001072a6b0c(auStack_128);
      func_0x000104c2f714(auStack_198);
      puVar5 = auStack_160;
      func_0x000104c2f714(puVar5);
    }
  }
  func_0x0001073c69a8(uStack_8);
  if (bVar4) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x0001072a6b0c(auStack_128);
  func_0x000104c2f714(auStack_198);
  func_0x000104c2f714(auStack_160);
  func_0x0001073c6aec();
  FUN_1073c6068();
  return (undefined1 *)0x800080007fff7fff;
}



/* Entry: 1073c0418; end: 1073c0457;  */

undefined8 FUN_1073c0418(undefined8 param_1)

{
  undefined4 *puStack_28;
  undefined4 *puStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = 0x80008000;
  uStack_14 = 0x7fff7fff;
  puStack_28 = &uStack_14;
  puStack_20 = &uStack_18;
  FUN_1073c6068(param_1,&puStack_28);
  return CONCAT44(uStack_18,uStack_14);
}



/* Entry: 1073c0458; end: 1073c0627;  */

void FUN_1073c0458(double param_1,double param_2,float param_3,long *param_4,long *param_5,
                  long *param_6,long param_7,byte *param_8,long param_9,long *param_10,long param_11
                  )

{
  short sVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar12;
  undefined8 extraout_x8_01;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  int iVar13;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  byte bVar23;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  long *plStack_6f0;
  long lStack_6e8;
  long *plStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6c8;
  undefined4 uStack_6c0;
  undefined1 uStack_6bc;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long *plStack_6a0;
  long lStack_698;
  long alStack_670 [2];
  undefined1 auStack_660 [16];
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  long *plStack_620;
  long lStack_618;
  undefined1 auStack_610 [40];
  char cStack_5e8;
  undefined1 *puStack_540;
  undefined1 *puStack_538;
  byte *pbStack_528;
  long *plStack_470;
  long lStack_468;
  long *plStack_2e0;
  long lStack_2d8;
  undefined1 auStack_2a8 [184];
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  byte *pbStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long alStack_160 [3];
  long lStack_148;
  long lStack_140;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_10;
  
  func_0x0001073c73b0();
  lStack_178 = param_9;
  plStack_170 = param_10;
  lStack_168 = param_11;
  func_0x0001073c69bc();
  plVar7 = param_5;
  plVar9 = param_6;
  lVar10 = param_7;
  pbVar11 = param_8;
  uStack_10 = extraout_x8;
  if (param_4[0x25] != 0) {
    fVar22 = (float)(((double)*(uint *)(param_4 + 0x2d) / param_1) / param_2);
    sVar1 = (short)*(uint *)(param_4 + 0x2d);
    iVar13 = (int)(param_3 * fVar22);
    if (sVar1 <= iVar13) {
      iVar13 = (int)sVar1;
    }
    FUN_1073c0418();
    sVar1 = (short)iVar13;
    fVar19 = (float)(int)(short)((short)plVar9 - sVar1);
    param_1 = (double)(ulong)(uint)fVar19;
    uStack_130 = (undefined8 *)
                 CONCAT44((float)(int)(short)((short)((ulong)plVar9 >> 0x10) - sVar1),fVar19);
    _fStack_128 = CONCAT44((float)(int)(short)(sVar1 + (short)((ulong)plVar9 >> 0x30)),
                           (float)(int)(short)(sVar1 + (short)((ulong)plVar9 >> 0x20)));
    plVar9 = &uStack_130;
    plVar7 = param_4;
    FUN_1073bf988(&lStack_148);
    lVar8 = lStack_148;
    lVar18 = lStack_140;
    if (lStack_148 != lStack_140) {
      func_0x0001073c6ce8(lStack_140 - lStack_148);
      plVar9 = (long *)(extraout_x8_00 ^ 0x7e);
      func_0x0001073c7384();
      lVar10 = 1;
      FUN_1073c2bf8();
      lVar8 = lStack_148;
      lVar18 = lStack_140;
    }
    lVar12 = -1;
    for (; in_ZR = lVar8 == lVar18, !(bool)in_ZR; lVar8 = lVar8 + 0x120) {
      lVar16 = *(long *)(lVar8 + 0x78);
      if (lVar16 != lVar12) {
        func_0x0001072ab860(&uStack_130,lVar8);
        FUN_1073c35f0(alStack_160,&uStack_130,1);
        func_0x0001072a6b0c(&uStack_130);
        uStack_188 = in_stack_00000070;
        uStack_180 = in_stack_00000078;
        plVar9 = alStack_160;
        pbVar11 = (byte *)((long)plStack_170 + 4);
        plVar7 = param_5;
        lVar10 = lStack_178;
        param_9 = lStack_168;
        param_10 = param_6;
        param_11 = param_7;
        param_1 = (double)(ulong)(uint)fVar22;
        pbStack_190 = param_8;
        FUN_1073c0628(param_4);
        func_0x0001072a7b80(alStack_160);
        lVar12 = lVar16;
      }
    }
    param_4 = &lStack_148;
    func_0x0001072a7b80();
  }
  func_0x0001073c69a8(uStack_10);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001073c6aec();
    func_0x0001073c73b0(FUN_1073c0628);
    uStack_130 = &stack0x00000060;
    func_0x0001073c69bc();
    plStack_6e0 = (long *)0x0;
    lStack_6d8 = 0;
    plStack_6f0 = (long *)0x0;
    lStack_6e8 = 0;
    uVar3 = *plVar9 == plVar9[1];
    uStack_1a0 = extraout_x8_01;
    if (!(bool)uVar3) {
      plVar17 = param_4 + 0x21;
      lVar8 = *plVar9 + 0x40;
      FUN_1073c13b8();
      if (((ulong)plVar17 & 1) == 0) {
        func_0x000105680760(&plStack_620);
        param_4 = param_4 + 0x21;
        FUN_10732360c();
        plStack_2e0 = param_4;
        lStack_2d8 = lVar8;
        while (plStack_2e0 != (long *)0x0) {
          func_0x00010724ef84(&plStack_470,lStack_2d8);
          func_0x0001006282fc(auStack_610,&plStack_470);
          func_0x00010549023c();
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_470);
          FUN_10732381c(&plStack_2e0);
        }
        func_0x000105673d7c(&plStack_620);
      }
      else {
        plVar17 = param_4 + 0x21;
        lVar8 = *plVar9 + 0x40;
        func_0x0001073653e8();
        if (plVar17 == (long *)0x0) goto LAB_1073c0bf8;
        lVar18 = *(long *)(lVar8 + 0x40);
        for (lVar8 = *(long *)(lVar8 + 0x38); uVar3 = lVar8 == lVar18, !(bool)uVar3;
            lVar8 = lVar8 + 0x38) {
          lVar12 = param_9;
          lVar16 = lVar8;
          FUN_1073c13d4();
          if (lVar12 != 0) {
            plVar17 = *(long **)(lVar16 + 0x38);
            if (plStack_6f0 == (long *)0x0) {
              (**(code **)(*(long *)param_4[0x25] + 0x18))
                        (&plStack_470,(long *)param_4[0x25],*plVar9 + 8);
              lVar12 = lStack_468;
              plVar4 = plStack_470;
              plStack_470 = (long *)0x0;
              lStack_468 = 0;
              lStack_618 = lStack_6d8;
              plStack_620 = plStack_6e0;
              lStack_6d8 = lVar12;
              plStack_6e0 = plVar4;
              func_0x000107331000(&plStack_620);
              func_0x000107331000(&plStack_470);
              if ((plStack_6e0 != (long *)0x0) &&
                 (plVar14 = *(long **)*plVar9, plVar4 = plStack_6e0,
                 (**(code **)(*plStack_6e0 + 0x10))(), plVar14 < plVar4)) {
                (**(code **)(*plStack_6e0 + 0x18))(&plStack_620,plStack_6e0,*(undefined8 *)*plVar9);
                func_0x0001073c13fc(&plStack_6f0,&plStack_620);
                func_0x000107330fdc(&plStack_620);
                if (plStack_6f0 != (long *)0x0) goto LAB_1073c06e4;
              }
            }
            else {
LAB_1073c06e4:
              func_0x0001078696e8(auStack_708);
              if (lStack_118 != 0) {
                (**(code **)(*plStack_6f0 + 0x30))();
                func_0x00010726236c(&plStack_620);
                if (cStack_5e8 == '\x01') {
                  func_0x0001073c6fa4();
                  (*extraout_x9)(&plStack_2e0);
                  func_0x0001072627ac(&plStack_470,&plStack_2e0);
                  FUN_10750a094(lStack_118,auStack_708,&plStack_470,&plStack_620);
                  func_0x0001073c6ef0();
                  func_0x000104c2f714(&plStack_2e0);
                }
                func_0x0001073c7174();
              }
              plVar4 = (long *)plVar17[3];
              (**(code **)(*plVar4 + 0x30))();
              if (*(int *)((long)plVar4 + 0x14) == 0) {
LAB_1073c07e8:
                if (*(char *)(lVar10 + 0x80) == '\x01') {
                  uVar20 = NEON_ucvtf((uint)*pbVar11);
                  func_0x0001077512dc(uVar20,&plStack_620);
                  lStack_698 = lStack_6e8;
                  plStack_6a0 = plStack_6f0;
                  if (lStack_6e8 != 0) {
                    do {
                      func_0x0001073c715c();
                    } while (extraout_w10_00 != 0);
                  }
                  func_0x000104c2fe00(&plStack_2e0,param_4 + 0x26);
                  func_0x0001073c6fa4();
                  (*extraout_x9_00)(auStack_2a8);
                  func_0x0001073c4f74(&plStack_470,&plStack_2e0);
                  func_0x000107751444(&plStack_620,&plStack_6a0,&plStack_470);
                  uStack_1f0 = uStack_1f0 & 0xffffffffffffff00;
                  uStack_1b8 = 0;
                  uStack_1b0 = 0;
                  uVar5 = lVar10 + 0x20;
                  func_0x00010777faa8(uVar5,&plStack_620,&uStack_1f0);
                  func_0x00010724b3d8(&uStack_1f0);
                  func_0x000107267e8c(&plStack_470);
                  func_0x000107267eac(&plStack_2e0);
                  func_0x000107267e44(&plStack_6a0);
                  func_0x0001073c716c();
                  if ((uVar5 & 1) == 0) goto LAB_1073c0b50;
                }
                func_0x00010729807c(&plStack_620,plVar17[3] + 0x40);
                func_0x0001073c6fa4();
                (*extraout_x9_01)(&uStack_1f0);
                func_0x0001072627ac(&plStack_470,&uStack_1f0);
                func_0x0001073c6bf0(&plStack_2e0);
                func_0x0001078344c8();
                func_0x0001073c6ef0();
                func_0x000104c2f714(&uStack_1f0);
                func_0x0001073c7174();
                FUN_10745f750(auStack_720,uStack_110);
                func_0x000107751284(&plStack_620);
                func_0x0001077514d8(&plStack_620,&plStack_2e0);
                puStack_540 = auStack_708;
                puStack_538 = auStack_720;
                pbStack_528 = pbVar11;
                func_0x000107751334(&plStack_470,&plStack_620);
                func_0x0001073c716c();
                uVar15 = *(undefined8 *)pbVar11;
                uVar20 = *(undefined4 *)(pbVar11 + 8);
                uStack_638 = 0;
                uStack_630 = 0;
                uStack_628 = 0;
                uStack_650 = 0;
                uStack_648 = 0;
                uStack_640 = 0;
                lVar16 = plVar9[1];
                for (lVar12 = *plVar9; lVar12 != lVar16; lVar12 = lVar12 + 0x120) {
                  if (*(char *)(lVar12 + 0xe0) == '\x01') {
                    lVar6 = lVar12 + 0xc0;
                    func_0x000107280b44(lVar6);
                    FUN_1073c5004(&uStack_650,lVar6);
                  }
                  uVar5 = *(ulong *)(lVar12 + 0xb0);
                  if (-1 < (char)*(byte *)(lVar12 + 0xbf)) {
                    uVar5 = (ulong)*(byte *)(lVar12 + 0xbf);
                  }
                  if (uVar5 != 0) {
                    func_0x000100206870(&uStack_638,lVar12 + 0xa8);
                  }
                }
                func_0x0001074e3ab4(auStack_660,plVar17,&plStack_470);
                func_0x0001074e3ac0(alStack_670,plVar17);
                FUN_1073c246c(auStack_660,*(undefined8 *)(alStack_670[0] + 0x10),0);
                uStack_1e8 = 0;
                uStack_1f0 = 0;
                uStack_1d8 = 0;
                uStack_1e0 = 0;
                uStack_1d0 = 0x3f800000;
                FUN_1073c50b0(&uStack_6b8,&uStack_650);
                FUN_1073c4fbc(&plStack_6a0,uStack_6b8,uStack_6b0);
                uStack_6bc = 1;
                uStack_6c8 = uVar15;
                uStack_6c0 = uVar20;
                FUN_1073c52bc(&plStack_620,&plStack_2e0,lVar8,auStack_660,&uStack_638,&uStack_1f0,
                              &plStack_6a0,&uStack_6c8);
                func_0x0001072bc1f0(&uStack_6b8);
                func_0x000107293acc(&uStack_1f0);
                func_0x000107283194(alStack_670);
                func_0x000107283194(auStack_660);
                func_0x0001072bc1f0(&uStack_650);
                func_0x0001000e30f4(&uStack_638);
                FUN_1073c1490(plVar7,lVar8);
                FUN_1073c14b8();
                func_0x00010729abec(&plStack_620);
                func_0x000107267da8(&plStack_470);
                func_0x00010726b264(auStack_720);
                func_0x000107269e60(&plStack_2e0);
              }
              else {
                lStack_618 = lStack_6e8;
                plStack_620 = plStack_6f0;
                plVar4 = plStack_6f0;
                if (lStack_6e8 != 0) {
                  do {
                    func_0x0001073c715c();
                  } while (extraout_w10 != 0);
                }
                uVar21 = (undefined4)((ulong)plVar4 >> 0x20);
                bVar23 = *pbVar11;
                func_0x0001074e3ac0(&plStack_470,plVar17);
                lVar12 = lVar10;
                FUN_1073c1420(lVar10,&plStack_470);
                uVar20 = NEON_ucvtf((uint)bVar23);
                plVar4 = plVar17;
                (**(code **)(*plVar17 + 0x88))
                          (CONCAT44(uVar21,uVar20),param_1,plVar17,param_10,&plStack_620,param_11,
                           uStack_120,auStack_708,lVar12);
                func_0x000107283194(&plStack_470);
                func_0x000107267e44(&plStack_620);
                if (((ulong)plVar4 & 1) != 0) goto LAB_1073c07e8;
              }
LAB_1073c0b50:
              func_0x00010726b264(auStack_708);
            }
          }
        }
      }
    }
    func_0x000107330fdc(&plStack_6f0);
    func_0x000107331000(&plStack_6e0);
    func_0x0001073c69a8(uStack_1a0);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
LAB_1073c0bf8:
      func_0x00010ae87d60(&UNK_10f40ec73);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1073c0c08);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 1073c0628; end: 1073c0da7;  */

void FUN_1073c0628(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,long param_5,
                  byte *param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  code *pcVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte bVar15;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  long *plStack_560;
  long lStack_558;
  long *plStack_550;
  long lStack_548;
  undefined8 uStack_538;
  undefined4 uStack_530;
  undefined1 uStack_52c;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long *plStack_510;
  long lStack_508;
  long alStack_4e0 [2];
  undefined1 auStack_4d0 [16];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long lStack_488;
  undefined1 auStack_480 [40];
  char cStack_458;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  byte *pbStack_398;
  long *plStack_2e0;
  long lStack_2d8;
  long lStack_150;
  long lStack_148;
  undefined1 auStack_118 [184];
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined1 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_10;
  
  func_0x0001073c73b0();
  func_0x0001073c69bc();
  plStack_550 = (long *)0x0;
  lStack_548 = 0;
  plStack_560 = (long *)0x0;
  lStack_558 = 0;
  uVar3 = *param_4 == param_4[1];
  uStack_10 = extraout_x8;
  if (!(bool)uVar3) {
    uVar4 = param_2 + 0x108;
    lVar5 = *param_4 + 0x40;
    FUN_1073c13b8();
    if ((uVar4 & 1) == 0) {
      func_0x000105680760(&plStack_490);
      param_2 = param_2 + 0x108;
      FUN_10732360c();
      lStack_150 = param_2;
      lStack_148 = lVar5;
      while (lStack_150 != 0) {
        func_0x00010724ef84(&plStack_2e0,lStack_148);
        func_0x0001006282fc(auStack_480,&plStack_2e0);
        func_0x00010549023c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_2e0);
        FUN_10732381c(&lStack_150);
      }
      func_0x000105673d7c(&plStack_490);
    }
    else {
      lVar5 = param_2 + 0x108;
      lVar6 = *param_4 + 0x40;
      func_0x0001073653e8();
      if (lVar5 == 0) goto LAB_1073c0bf8;
      lVar1 = *(long *)(lVar6 + 0x40);
      for (lVar5 = *(long *)(lVar6 + 0x38); uVar3 = lVar5 == lVar1, !(bool)uVar3;
          lVar5 = lVar5 + 0x38) {
        lVar6 = param_7;
        lVar9 = lVar5;
        FUN_1073c13d4();
        if (lVar6 != 0) {
          plVar12 = *(long **)(lVar9 + 0x38);
          if (plStack_560 == (long *)0x0) {
            (**(code **)(**(long **)(param_2 + 0x128) + 0x18))
                      (&plStack_2e0,*(long **)(param_2 + 0x128),*param_4 + 8);
            lVar6 = lStack_2d8;
            plVar7 = plStack_2e0;
            plStack_2e0 = (long *)0x0;
            lStack_2d8 = 0;
            lStack_488 = lStack_548;
            plStack_490 = plStack_550;
            lStack_548 = lVar6;
            plStack_550 = plVar7;
            func_0x000107331000(&plStack_490);
            func_0x000107331000(&plStack_2e0);
            if ((plStack_550 != (long *)0x0) &&
               (plVar10 = *(long **)*param_4, plVar7 = plStack_550,
               (**(code **)(*plStack_550 + 0x10))(), plVar10 < plVar7)) {
              (**(code **)(*plStack_550 + 0x18))(&plStack_490,plStack_550,*(undefined8 *)*param_4);
              func_0x0001073c13fc(&plStack_560,&plStack_490);
              func_0x000107330fdc(&plStack_490);
              if (plStack_560 != (long *)0x0) goto LAB_1073c06e4;
            }
          }
          else {
LAB_1073c06e4:
            func_0x0001078696e8(auStack_578);
            if (in_stack_00000078 != 0) {
              (**(code **)(*plStack_560 + 0x30))();
              func_0x00010726236c(&plStack_490);
              if (cStack_458 == '\x01') {
                func_0x0001073c6fa4();
                (*extraout_x9)(&lStack_150);
                func_0x0001072627ac(&plStack_2e0,&lStack_150);
                FUN_10750a094(in_stack_00000078,auStack_578,&plStack_2e0,&plStack_490);
                func_0x0001073c6ef0();
                func_0x000104c2f714(&lStack_150);
              }
              func_0x0001073c7174();
            }
            plVar7 = (long *)plVar12[3];
            (**(code **)(*plVar7 + 0x30))();
            if (*(int *)((long)plVar7 + 0x14) == 0) {
LAB_1073c07e8:
              if (*(char *)(param_5 + 0x80) == '\x01') {
                uVar13 = NEON_ucvtf((uint)*param_6);
                func_0x0001077512dc(uVar13,&plStack_490);
                lStack_508 = lStack_558;
                plStack_510 = plStack_560;
                if (lStack_558 != 0) {
                  do {
                    func_0x0001073c715c();
                  } while (extraout_w10_00 != 0);
                }
                func_0x000104c2fe00(&lStack_150,param_2 + 0x130);
                func_0x0001073c6fa4();
                (*extraout_x9_00)(auStack_118);
                func_0x0001073c4f74(&plStack_2e0,&lStack_150);
                func_0x000107751444(&plStack_490,&plStack_510,&plStack_2e0);
                uStack_60 = uStack_60 & 0xffffffffffffff00;
                uStack_28 = 0;
                uStack_20 = 0;
                uVar4 = param_5 + 0x20;
                func_0x00010777faa8(uVar4,&plStack_490,&uStack_60);
                func_0x00010724b3d8(&uStack_60);
                func_0x000107267e8c(&plStack_2e0);
                func_0x000107267eac(&lStack_150);
                func_0x000107267e44(&plStack_510);
                func_0x0001073c716c();
                if ((uVar4 & 1) == 0) goto LAB_1073c0b50;
              }
              func_0x00010729807c(&plStack_490,plVar12[3] + 0x40);
              func_0x0001073c6fa4();
              (*extraout_x9_01)(&uStack_60);
              func_0x0001072627ac(&plStack_2e0,&uStack_60);
              func_0x0001073c6bf0(&lStack_150);
              func_0x0001078344c8();
              func_0x0001073c6ef0();
              func_0x000104c2f714(&uStack_60);
              func_0x0001073c7174();
              FUN_10745f750(auStack_590,in_stack_00000080);
              func_0x000107751284(&plStack_490);
              func_0x0001077514d8(&plStack_490,&lStack_150);
              puStack_3b0 = auStack_578;
              puStack_3a8 = auStack_590;
              pbStack_398 = param_6;
              func_0x000107751334(&plStack_2e0,&plStack_490);
              func_0x0001073c716c();
              uVar11 = *(undefined8 *)param_6;
              uVar13 = *(undefined4 *)(param_6 + 8);
              uStack_4a8 = 0;
              uStack_4a0 = 0;
              uStack_498 = 0;
              uStack_4c0 = 0;
              uStack_4b8 = 0;
              uStack_4b0 = 0;
              lVar9 = param_4[1];
              for (lVar6 = *param_4; lVar6 != lVar9; lVar6 = lVar6 + 0x120) {
                if (*(char *)(lVar6 + 0xe0) == '\x01') {
                  lVar8 = lVar6 + 0xc0;
                  func_0x000107280b44(lVar8);
                  FUN_1073c5004(&uStack_4c0,lVar8);
                }
                uVar4 = *(ulong *)(lVar6 + 0xb0);
                if (-1 < (char)*(byte *)(lVar6 + 0xbf)) {
                  uVar4 = (ulong)*(byte *)(lVar6 + 0xbf);
                }
                if (uVar4 != 0) {
                  func_0x000100206870(&uStack_4a8,lVar6 + 0xa8);
                }
              }
              func_0x0001074e3ab4(auStack_4d0,plVar12,&plStack_2e0);
              func_0x0001074e3ac0(alStack_4e0,plVar12);
              FUN_1073c246c(auStack_4d0,*(undefined8 *)(alStack_4e0[0] + 0x10),0);
              uStack_58 = 0;
              uStack_60 = 0;
              uStack_48 = 0;
              uStack_50 = 0;
              uStack_40 = 0x3f800000;
              FUN_1073c50b0(&uStack_528,&uStack_4c0);
              FUN_1073c4fbc(&plStack_510,uStack_528,uStack_520);
              uStack_52c = 1;
              uStack_538 = uVar11;
              uStack_530 = uVar13;
              FUN_1073c52bc(&plStack_490,&lStack_150,lVar5,auStack_4d0,&uStack_4a8,&uStack_60,
                            &plStack_510,&uStack_538);
              func_0x0001072bc1f0(&uStack_528);
              func_0x000107293acc(&uStack_60);
              func_0x000107283194(alStack_4e0);
              func_0x000107283194(auStack_4d0);
              func_0x0001072bc1f0(&uStack_4c0);
              func_0x0001000e30f4(&uStack_4a8);
              FUN_1073c1490(param_3,lVar5);
              FUN_1073c14b8();
              func_0x00010729abec(&plStack_490);
              func_0x000107267da8(&plStack_2e0);
              func_0x00010726b264(auStack_590);
              func_0x000107269e60(&lStack_150);
            }
            else {
              lStack_488 = lStack_558;
              plStack_490 = plStack_560;
              plVar7 = plStack_560;
              if (lStack_558 != 0) {
                do {
                  func_0x0001073c715c();
                } while (extraout_w10 != 0);
              }
              uVar14 = (undefined4)((ulong)plVar7 >> 0x20);
              bVar15 = *param_6;
              func_0x0001074e3ac0(&plStack_2e0,plVar12);
              lVar6 = param_5;
              FUN_1073c1420(param_5,&plStack_2e0);
              uVar13 = NEON_ucvtf((uint)bVar15);
              plVar7 = plVar12;
              (**(code **)(*plVar12 + 0x88))
                        (CONCAT44(uVar14,uVar13),param_1,plVar12,param_8,&plStack_490,param_9,
                         in_stack_00000070,auStack_578,lVar6);
              func_0x000107283194(&plStack_2e0);
              func_0x000107267e44(&plStack_490);
              if (((ulong)plVar7 & 1) != 0) goto LAB_1073c07e8;
            }
LAB_1073c0b50:
            func_0x00010726b264(auStack_578);
          }
        }
      }
    }
  }
  func_0x000107330fdc(&plStack_560);
  func_0x000107331000(&plStack_550);
  func_0x0001073c69a8(uStack_10);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
LAB_1073c0bf8:
  func_0x00010ae87d60(&UNK_10f40ec73);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1073c0c08);
  (*pcVar2)();
}



/* Entry: 1073c0da8; end: 1073c11f3;  */

void FUN_1073c0da8(long ****param_1,long ****param_2,long ****param_3,undefined8 param_4,
                  long param_5,undefined8 *param_6,long ****param_7)

{
  long ***ppplVar1;
  long lVar2;
  undefined1 in_ZR;
  long ****pppplVar3;
  long ***ppplVar4;
  long ****pppplVar5;
  long ****extraout_x8;
  undefined8 extraout_x8_00;
  long ****extraout_x8_01;
  ulong extraout_x8_02;
  int extraout_w10;
  long ***ppplVar6;
  long ***ppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ***ppplVar10;
  undefined8 uStack_f48;
  undefined8 uStack_f40;
  undefined8 uStack_f38;
  long ***ppplStack_f30;
  long ***ppplStack_f28;
  long ***ppplStack_f20;
  long ***ppplStack_ea8;
  long ***ppplStack_ea0;
  long ***ppplStack_e98;
  long **pplStack_e90;
  undefined8 uStack_e88;
  long ***ppplStack_e80;
  long ***ppplStack_e78;
  long **pplStack_e70;
  long ***ppplStack_e68;
  long ***ppplStack_e60;
  long ***ppplStack_e58;
  long ***ppplStack_e50;
  undefined8 uStack_18;
  
  func_0x0001073c73cc();
  func_0x0001073c69bc();
  *extraout_x8 = (long ***)&UNK_10e52b660;
  extraout_x8[1] = (long ***)0x0;
  extraout_x8[2] = (long ***)0x0;
  extraout_x8[3] = (long ***)0x0;
  pppplVar5 = param_3;
  uStack_18 = extraout_x8_00;
  if (param_1[0x25] != (long ***)0x0) {
    ppplVar4 = *param_2;
    ppplVar10 = param_2[1];
    ppplStack_e78 = (long ***)0x0;
    pplStack_e70 = (long **)0x0;
    ppplStack_e80 = (long ***)0x0;
    ppplStack_e68 = (long ***)&ppplStack_e80;
    ppplStack_e60 = (long ***)((ulong)ppplStack_e60 & 0xffffffffffffff00);
    lVar2 = (long)ppplVar10 - (long)ppplVar4;
    if (lVar2 != 0) {
      FUN_1073c3678(&ppplStack_e80,lVar2 / 0x120);
      pppplVar5 = (long ****)&pplStack_e70;
      FUN_1073c36c4(pppplVar5,ppplVar4,ppplVar10,ppplStack_e78);
      ppplStack_e78 = (long ***)pppplVar5;
    }
    ppplStack_e60 = (long ***)CONCAT71(ppplStack_e60._1_7_,1);
    FUN_1073c373c(&ppplStack_e68);
    ppplVar4 = ppplStack_e78;
    for (pppplVar5 = (long ****)ppplStack_e80; pppplVar3 = (long ****)ppplVar4,
        pppplVar5 != (long ****)ppplVar4; pppplVar5 = pppplVar5 + 0x24) {
      pppplVar8 = param_1;
      FUN_1073c3768(param_1,pppplVar5);
      pppplVar3 = pppplVar5;
      if ((int)pppplVar8 != 0) goto LAB_1073c0e8c;
    }
    goto LAB_1073c0ebc;
  }
  goto LAB_1073c1144;
LAB_1073c1254:
  while (ppplVar4 = ppplVar4 + 0x24, ppplVar4 != ppplVar10) {
    pppplVar3 = pppplVar5;
    func_0x0001073c47c0(pppplVar5,ppplVar4);
    if (((ulong)pppplVar3 & 1) == 0) {
      FUN_1073c33c8(ppplVar6,ppplVar4);
      ppplVar6 = ppplVar6 + 0x24;
    }
  }
  goto LAB_1073c1288;
LAB_1073c0e8c:
  while (pppplVar5 = pppplVar5 + 0x24, pppplVar5 != (long ****)ppplVar4) {
    pppplVar8 = param_1;
    FUN_1073c3768(param_1,pppplVar5);
    if (((ulong)pppplVar8 & 1) == 0) {
      func_0x0001073c7384();
      FUN_1073c33c8();
      pppplVar3 = pppplVar3 + 0x24;
    }
  }
LAB_1073c0ebc:
  pppplVar5 = (long ****)ppplStack_e78;
  FUN_1073c1364(&ppplStack_e80,pppplVar3);
  uStack_e88 = param_6[1];
  pplStack_e90 = (long **)*param_6;
  pppplVar3 = (long ****)ppplStack_e80;
  param_2 = (long ****)ppplStack_e78;
  if (param_6[1] != 0) {
    do {
      func_0x0001073c715c();
    } while (extraout_w10 != 0);
  }
  if (pppplVar3 != param_2) {
    func_0x0001073c6c80();
    pppplVar5 = (long ****)&pplStack_e90;
    FUN_1073c3788();
  }
  FUN_1073c4394(&pplStack_e90);
  ppplVar4 = ppplStack_e78;
  ppplStack_ea8 = (long ***)0x0;
  ppplStack_ea0 = (long ***)0x0;
  ppplStack_e98 = (long ***)0x0;
  pppplVar3 = (long ****)ppplStack_e80;
  if (*(char *)(param_3 + 0x15) == '\x01') {
    ppplStack_f30 = (long ***)0x0;
    ppplStack_f28 = (long ***)0x0;
    ppplStack_f20 = (long ***)0x0;
    ppplStack_e68 = (long ***)0x0;
    ppplStack_e60 = (long ***)0x0;
    ppplStack_e58 = (long ***)0x0;
    ppplVar10 = (long ***)0xffffffffffffffff;
    for (; pppplVar3 != (long ****)ppplVar4; pppplVar3 = pppplVar3 + 0x24) {
      if (*pppplVar3 == ppplVar10) {
        func_0x0001073c71a4();
      }
      else {
        if (ppplStack_e68 != ppplStack_e60) {
          func_0x0001073c7114();
        }
        func_0x0001072a7bd0(&ppplStack_e68);
        ppplVar10 = *pppplVar3;
        func_0x0001073c71a4();
      }
    }
    if (ppplStack_e68 != ppplStack_e60) {
      func_0x0001073c7114();
    }
    func_0x0001072a7b80(&ppplStack_e68);
    pppplVar9 = (long ****)ppplStack_f28;
    pppplVar8 = (long ****)ppplStack_f30;
    ppplStack_ea8 = ppplStack_f30;
    ppplStack_e98 = ppplStack_f20;
    ppplStack_ea0 = ppplStack_f28;
    ppplStack_f30 = (long ***)0x0;
    ppplStack_f28 = (long ***)0x0;
    ppplStack_f20 = (long ***)0x0;
    func_0x0001073c46f4(&ppplStack_f30);
  }
  else {
    for (; pppplVar8 = (long ****)ppplStack_ea8, pppplVar9 = (long ****)ppplStack_ea0,
        pppplVar3 != (long ****)ppplVar4; pppplVar3 = pppplVar3 + 0x24) {
      func_0x0001072ab860(&ppplStack_e68,pppplVar3);
      param_2 = &ppplStack_e68;
      pppplVar5 = (long ****)0x1;
      FUN_1073c35f0(&ppplStack_f30,param_2);
      func_0x0001072a6b0c(&ppplStack_e68);
      if (ppplStack_ea0 < ppplStack_e98) {
        *ppplStack_ea0 = (long **)0x0;
        ppplStack_ea0[1] = (long **)0x0;
        ppplStack_ea0[2] = (long **)0x0;
        func_0x0001073c6dfc();
      }
      else {
        pppplVar5 = &ppplStack_ea8;
        FUN_1073c4560(pppplVar5,((long)ppplStack_ea0 - (long)ppplStack_ea8) / 0x18 + 1);
        FUN_1073c460c(&ppplStack_e68,pppplVar5,((long)ppplStack_ea0 - (long)ppplStack_ea8) / 0x18,
                      &ppplStack_e98);
        ppplStack_e58[1] = (long **)0x0;
        ppplStack_e58[2] = (long **)0x0;
        *ppplStack_e58 = (long **)0x0;
        func_0x0001073c6dfc();
        pppplVar5 = (long ****)((long)ppplStack_ea0 - (long)ppplStack_ea8);
        pppplVar8 = (long ****)(ppplStack_e60 + ((long)pppplVar5 / -0x18) * 3);
        param_2 = (long ****)ppplStack_ea8;
        _memcpy(pppplVar8);
        ppplVar10 = ppplStack_e98;
        ppplStack_e98 = ppplStack_e50;
        ppplStack_e58 = ppplStack_ea8;
        ppplStack_e50 = ppplVar10;
        ppplStack_e68 = ppplStack_ea8;
        ppplStack_e60 = ppplStack_ea8;
        ppplStack_ea8 = (long ***)pppplVar8;
        ppplStack_ea0 = (long ***)param_7;
        func_0x0001073c4678(&ppplStack_e68);
      }
      ppplStack_ea0 = (long ***)param_7;
      func_0x0001072a7b80(&ppplStack_f30);
    }
  }
  for (; in_ZR = pppplVar8 == pppplVar9, !(bool)in_ZR; pppplVar8 = pppplVar8 + 3) {
    uStack_f48 = 0;
    uStack_f40 = 0;
    uStack_f38 = 0;
    FUN_107415a58(&ppplStack_e68,1,0);
    param_2 = extraout_x8;
    pppplVar5 = pppplVar8;
    FUN_1073c0628(0,param_1,extraout_x8,pppplVar8,param_3,param_5 + 4,param_4,&uStack_f48,
                  &ppplStack_e68,&ppplStack_f30,0,param_7);
    func_0x000104c336c8(&uStack_f48);
  }
  func_0x0001073c46f4(&ppplStack_ea8);
  param_1 = &ppplStack_e80;
  func_0x0001072a7b80();
LAB_1073c1144:
  func_0x0001073c69a8(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072a7b80(&ppplStack_e68);
  func_0x0001073c46f4(&ppplStack_f30);
  func_0x0001073c46f4(&ppplStack_ea8);
  func_0x0001072a7b80(&ppplStack_e80);
  pppplVar3 = extraout_x8;
  FUN_1073c4728(extraout_x8);
  func_0x0001073c6b48();
  FUN_1073bf988(extraout_x8_01,pppplVar3,param_2);
  if (*(char *)(pppplVar5 + 7) == '\x01') {
    ppplVar10 = extraout_x8_01[1];
    for (ppplVar4 = *extraout_x8_01; ppplVar6 = ppplVar10, ppplVar4 != ppplVar10;
        ppplVar4 = ppplVar4 + 0x24) {
      pppplVar3 = pppplVar5;
      func_0x0001073c47c0(pppplVar5,ppplVar4);
      ppplVar6 = ppplVar4;
      if ((int)pppplVar3 != 0) goto LAB_1073c1254;
    }
LAB_1073c1288:
    FUN_1073c1364(extraout_x8_01,ppplVar6,extraout_x8_01[1]);
  }
  ppplVar4 = *extraout_x8_01;
  ppplVar10 = extraout_x8_01[1];
  if (ppplVar4 != ppplVar10) {
    func_0x0001073c6ce8((long)ppplVar10 - (long)ppplVar4);
    FUN_1073c47e8(ppplVar4,ppplVar10,extraout_x8_02 ^ 0x7e,1);
    ppplVar4 = *extraout_x8_01;
    ppplVar10 = extraout_x8_01[1];
  }
  if (ppplVar4 != ppplVar10) {
    do {
      ppplVar7 = ppplVar4;
      ppplVar6 = ppplVar7 + 0x24;
      ppplVar4 = ppplVar10;
      if (ppplVar6 == ppplVar10) goto LAB_1073c1334;
      ppplVar4 = ppplVar6;
    } while (ppplVar7[0xf] != ppplVar7[0x33]);
    while (ppplVar4 = ppplVar6 + 0x24, ppplVar4 != ppplVar10) {
      ppplVar1 = ppplVar6 + 0x33;
      ppplVar6 = ppplVar4;
      if (ppplVar7[0xf] != *ppplVar1) {
        ppplVar7 = ppplVar7 + 0x24;
        func_0x0001073c6d84(ppplVar7);
      }
    }
    ppplVar10 = extraout_x8_01[1];
    ppplVar4 = ppplVar7 + 0x24;
  }
LAB_1073c1334:
  if (ppplVar4 != ppplVar10) {
    pppplVar3 = extraout_x8_01;
    func_0x0001073c6c14();
    pppplVar8 = (long ****)pppplVar3[1];
    for (pppplVar5 = param_1; pppplVar5 != pppplVar8; pppplVar5 = pppplVar5 + 0x24) {
      func_0x0001073c6e3c();
      FUN_1073c33c8();
    }
    func_0x0001073c6df0();
    func_0x0001072af9fc();
    while (pppplVar3 != extraout_x8) {
      pppplVar3 = pppplVar3 + -0x24;
      func_0x0001072a6b0c();
    }
    param_1[1] = (long ***)extraout_x8;
    return;
  }
  return;
}



/* Entry: 1073c11f4; end: 1073c1363;  */

void FUN_1073c11f4(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong extraout_x8;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  FUN_1073bf988(param_1,param_2,param_3);
  if (*(char *)(param_4 + 0x38) != '\x01') goto LAB_1073c1298;
  lVar4 = param_1[1];
  for (lVar3 = *param_1; lVar5 = lVar4, lVar3 != lVar4; lVar3 = lVar3 + 0x120) {
    uVar2 = param_4;
    func_0x0001073c47c0(param_4,lVar3);
    lVar5 = lVar3;
    if ((int)uVar2 != 0) goto LAB_1073c1254;
  }
  goto LAB_1073c1288;
LAB_1073c1254:
  while (lVar3 = lVar3 + 0x120, lVar3 != lVar4) {
    uVar2 = param_4;
    func_0x0001073c47c0(param_4,lVar3);
    if ((uVar2 & 1) == 0) {
      FUN_1073c33c8(lVar5,lVar3);
      lVar5 = lVar5 + 0x120;
    }
  }
LAB_1073c1288:
  FUN_1073c1364(param_1,lVar5,param_1[1]);
LAB_1073c1298:
  lVar3 = *param_1;
  lVar4 = param_1[1];
  if (lVar3 != lVar4) {
    func_0x0001073c6ce8(lVar4 - lVar3);
    FUN_1073c47e8(lVar3,lVar4,extraout_x8 ^ 0x7e,1);
    lVar3 = *param_1;
    lVar4 = param_1[1];
  }
  if (lVar3 != lVar4) {
    do {
      lVar6 = lVar3;
      lVar5 = lVar6 + 0x120;
      lVar3 = lVar4;
      if (lVar5 == lVar4) goto LAB_1073c1334;
      lVar3 = lVar5;
    } while (*(long *)(lVar6 + 0x78) != *(long *)(lVar6 + 0x198));
    while (lVar3 = lVar5 + 0x120, lVar3 != lVar4) {
      plVar1 = (long *)(lVar5 + 0x198);
      lVar5 = lVar3;
      if (*(long *)(lVar6 + 0x78) != *plVar1) {
        lVar6 = lVar6 + 0x120;
        func_0x0001073c6d84(lVar6);
      }
    }
    lVar4 = param_1[1];
    lVar3 = lVar6 + 0x120;
  }
LAB_1073c1334:
  if (lVar3 == lVar4) {
    return;
  }
  func_0x0001073c6c14();
  lVar4 = param_1[1];
  for (lVar3 = unaff_x20; lVar3 != lVar4; lVar3 = lVar3 + 0x120) {
    func_0x0001073c6e3c();
    FUN_1073c33c8();
  }
  func_0x0001073c6df0();
  func_0x0001072af9fc();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x24;
    func_0x0001072a6b0c();
  }
  *(long **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c1364; end: 1073c13b7;  */

void FUN_1073c1364(long param_1,long param_2,long param_3)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    func_0x0001073c6c14();
    lVar2 = *(long *)(param_1 + 8);
    for (lVar1 = unaff_x20; lVar1 != lVar2; lVar1 = lVar1 + 0x120) {
      func_0x0001073c6e3c();
      FUN_1073c33c8();
    }
    func_0x0001073c6df0();
    func_0x0001072af9fc();
    while (param_1 != unaff_x19) {
      param_1 = param_1 + -0x120;
      func_0x0001072a6b0c();
    }
    *(long *)(unaff_x20 + 8) = unaff_x19;
    return;
  }
  return;
}



/* Entry: 1073c13b8; end: 1073c13d3;  */

bool FUN_1073c13b8(long param_1)

{
  func_0x0001073653e8();
  return param_1 != 0;
}



/* Entry: 1073c13d4; end: 1073c141f;  */

long FUN_1073c13d4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  long *unaff_x19;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte bVar11;
  uint6 uVar12;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined8 uVar13;
  byte bVar19;
  undefined1 auStack_90 [112];
  
  func_0x0001073c6af4();
  func_0x0001073c6f10();
  puVar5 = param_1;
  func_0x0001073c6bf0();
  func_0x0001073c70c0();
  func_0x0001073c6be4();
  lVar7 = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar8 = *param_1;
  uVar6 = uVar8 >> 0xc ^ (ulong)puVar5 >> 7;
  bVar3 = (byte)puVar5;
  uVar12 = CONCAT15(bVar3,CONCAT14(bVar3,CONCAT13(bVar3,CONCAT12(bVar3,CONCAT11(bVar3,bVar3))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar6 = uVar6 & uVar2;
    uVar13 = *(undefined8 *)(uVar8 + uVar6);
    cVar14 = (char)((ulong)uVar13 >> 8);
    cVar15 = (char)((ulong)uVar13 >> 0x10);
    cVar16 = (char)((ulong)uVar13 >> 0x18);
    cVar17 = (char)((ulong)uVar13 >> 0x20);
    cVar18 = (char)((ulong)uVar13 >> 0x28);
    bVar11 = (byte)((ulong)uVar13 >> 0x30);
    bVar19 = (byte)((ulong)uVar13 >> 0x38);
    for (uVar9 = CONCAT17(-(bVar19 == (bVar3 & 0x7f)),
                          CONCAT16(-(bVar11 == (bVar3 & 0x7f)),
                                   CONCAT15(-(cVar18 == (char)(uVar12 >> 0x28)),
                                            CONCAT14(-(cVar17 == (char)(uVar12 >> 0x20)),
                                                     CONCAT13(-(cVar16 == (char)(uVar12 >> 0x18)),
                                                              CONCAT12(-(cVar15 ==
                                                                        (char)(uVar12 >> 0x10)),
                                                                       CONCAT11(-(cVar14 ==
                                                                                 (char)(uVar12 >> 8)
                                                                                 ),-((char)uVar13 ==
                                                                                    (char)uVar12))))
                                                    )))) & 0x8080808080808080; uVar9 != 0;
        uVar9 = uVar9 - 1 & uVar9) {
      uVar10 = (uVar9 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar9 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar6 + ((ulong)LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) >> 3) & uVar2;
      iVar4 = (int)auStack_90;
      FUN_1073c61b8(auStack_90,uVar1 + uVar10 * 0x40);
      if (iVar4 != 0) {
        return *unaff_x19 + uVar10;
      }
    }
    bVar11 = NEON_umaxv(CONCAT17(-(bVar19 == 0x80),
                                 CONCAT16(-(bVar11 == 0x80),
                                          CONCAT15(-(cVar18 == -0x80),
                                                   CONCAT14(-(cVar17 == -0x80),
                                                            CONCAT13(-(cVar16 == -0x80),
                                                                     CONCAT12(-(cVar15 == -0x80),
                                                                              CONCAT11(-(cVar14 ==
                                                                                        -0x80),-((
                                                  char)uVar13 == -0x80)))))))),1);
    if ((bVar11 & 1) != 0) break;
    lVar7 = lVar7 + 8;
    uVar6 = lVar7 + uVar6;
  }
  return 0;
}



/* Entry: 1073c1420; end: 1073c148f;  */

bool FUN_1073c1420(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0xa0) == 0) {
    bVar1 = true;
  }
  else if (*(int *)(param_1 + 0xa0) == 1) {
    bVar1 = false;
  }
  else {
    plVar3 = (long *)(param_1 + 0x90);
    FUN_1073c4f58();
    plVar3 = (long *)(*plVar3 + 0x10);
    do {
      plVar3 = (long *)*plVar3;
      bVar1 = plVar3 != (long *)0x0;
      if (plVar3 == (long *)0x0) {
        return false;
      }
      uVar2 = param_2;
      func_0x000107262364(param_2,plVar3 + 2);
    } while ((uVar2 & 1) == 0);
  }
  return bVar1;
}



/* Entry: 1073c1490; end: 1073c14b7;  */

long FUN_1073c1490(void)

{
  undefined1 auStack_28 [8];
  long lStack_20;
  
  FUN_1073c61c4(auStack_28);
  return lStack_20 + 0x38;
}



/* Entry: 1073c14b8; end: 1073c14eb;  */

long FUN_1073c14b8(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6fe4();
  if ((bool)in_CY) {
    FUN_1073c51a8();
  }
  else {
    FUN_1073c5174();
    param_1 = unaff_x20 + 0x1b0;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x1b0;
}



/* Entry: 1073c14ec; end: 1073c15db;  */

void FUN_1073c14ec(undefined8 *param_1,float param_2,float param_3,undefined8 *param_4,
                  float *param_5,int param_6)

{
  ushort *puVar1;
  uint uVar2;
  ushort *puVar3;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint uStack_34;
  
  if ((*param_5 == 0.0) && (param_5[1] == 0.0)) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    uStack_34 = CONCAT22((short)(int)(param_3 * param_5[1]),(short)(int)(param_3 * *param_5));
    if (param_6 != 0) {
      uVar2 = (uint)&uStack_34;
      FUN_1073c15dc(-param_2);
      uStack_34 = uVar2;
    }
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    puVar1 = (ushort *)param_4[1];
    for (puVar3 = (ushort *)*param_4; puVar3 != puVar1; puVar3 = puVar3 + 2) {
      uStack_54 = (uint)*puVar3 - (uStack_34 & 0xffff) & 0xffff |
                  ((uint)puVar3[1] - (uStack_34 >> 0x10)) * 0x10000;
      func_0x0001072c7768(&uStack_50,&uStack_54);
    }
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[2] = uStack_40;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000104c336c8(&uStack_50);
  }
  return;
}



/* Entry: 1073c15dc; end: 1073c164f;  */

uint FUN_1073c15dc(float param_1,float param_2,short *param_3)

{
  ___sincosf_stret();
  return (int)(-((float)(int)param_3[1] * param_1) + (float)(int)*param_3 * param_2) & 0xffffU |
         (int)(param_2 * (float)(int)param_3[1] + (float)(int)*param_3 * param_1) << 0x10;
}



/* Entry: 1073c1650; end: 1073c166f;  */

void FUN_1073c1650(void)

{
  undefined1 uStack_11;
  
  FUN_1073c6550(&uStack_11);
  return;
}



/* Entry: 1073c1670; end: 1073c16ab;  */

undefined8 * FUN_1073c1670(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1073c1650(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1073c5ea4(&uStack_30);
  return param_1;
}



/* Entry: 1073c16ac; end: 1073c2237;  */

double FUN_1073c16ac(long *param_1,uint param_2,long *param_3,long *param_4,long param_5)

{
  double *pdVar1;
  long *plVar2;
  int iVar3;
  undefined1 auVar4 [16];
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 extraout_x8;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long unaff_x20;
  double *pdVar22;
  double *pdVar23;
  long *plVar24;
  long *plVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  float fVar32;
  ulong uVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  double dStack_720;
  double dStack_718;
  double dStack_710;
  double dStack_708;
  long lStack_700;
  double dStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_6e0;
  double dStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  double dStack_6c0;
  double dStack_6b8;
  double dStack_6a8;
  double dStack_6a0;
  double dStack_698;
  double dStack_688;
  long lStack_680;
  long *plStack_678;
  undefined1 *puStack_670;
  code *pcStack_668;
  uint uStack_654;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  undefined8 uStack_630;
  undefined1 auStack_620 [16];
  undefined8 uStack_610;
  undefined8 uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  long alStack_5d8 [21];
  undefined4 uStack_530;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [16];
  undefined4 uStack_500;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined4 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [16];
  undefined8 uStack_470;
  long lStack_468;
  undefined4 uStack_460;
  long lStack_458;
  long lStack_450;
  undefined8 uStack_448;
  int aiStack_440 [60];
  undefined1 aauStack_350 [3] [16];
  byte bStack_318;
  undefined1 auStack_260 [16];
  long lStack_250;
  long lStack_248;
  long lStack_b0;
  undefined8 uStack_a8;
  
  func_0x0001073c70c0();
  func_0x0001073c69bc();
  uVar8 = *param_1 == param_1[1];
  uStack_a8 = extraout_x8;
  if (!(bool)uVar8) {
    alStack_5d8[0xe] = 0x7fffffffffffffff;
    alStack_5d8[0xd] = 0x7fffffffffffffff;
    alStack_5d8[0x10] = -0x8000000000000000;
    alStack_5d8[0xf] = -0x8000000000000000;
    uStack_5f8 = 0x8000000000000000;
    uStack_600 = 0x8000000000000000;
    uStack_5e8 = 0x7fffffffffffffff;
    uStack_5f0 = 0x7fffffffffffffff;
    alStack_5d8[10] = 0x7fffffffffffffff;
    alStack_5d8[9] = 0x7fffffffffffffff;
    alStack_5d8[0xc] = -0x8000000000000000;
    alStack_5d8[0xb] = -0x8000000000000000;
    pdVar1 = (double *)param_3[1];
    pdVar22 = (double *)*param_3;
    lVar15 = alStack_5d8[0x10];
    while (alStack_5d8[0x10] = lVar15, pdVar22 != pdVar1) {
      pdVar23 = pdVar22 + 2;
      auStack_260._0_8_ = *pdVar22;
      lVar13 = (long)pdVar22[1];
      auStack_260._8_8_ = NEON_ucvtf((ulong)*(uint *)(param_4 + 10));
      auStack_260._8_8_ = (double)auStack_260._8_8_ - pdVar22[1];
      lVar15 = (long)(double)auStack_260._0_8_;
      if (lVar15 <= alStack_5d8[9]) {
        alStack_5d8[9] = lVar15;
      }
      if (lVar13 <= alStack_5d8[10]) {
        alStack_5d8[10] = lVar13;
      }
      if (lVar15 <= alStack_5d8[0xb]) {
        lVar15 = alStack_5d8[0xb];
      }
      if (lVar13 <= alStack_5d8[0xc]) {
        lVar13 = alStack_5d8[0xc];
      }
      param_3 = (long *)0x1;
      alStack_5d8[0xb] = lVar15;
      alStack_5d8[0xc] = lVar13;
      auVar37 = FUN_107417f00(param_4,auStack_260);
      auStack_480 = auVar37;
      auStack_260 = func_0x000107259180(auStack_480);
      auVar37 = func_0x00010741657c(param_4,1);
      aauStack_350[0] = auVar37;
      func_0x000107259504(auStack_260,aauStack_350);
      auVar37 = func_0x000107246504(param_4[0xf],auStack_260);
      lVar13 = (long)auVar37._0_8_;
      lVar15 = (long)auVar37._8_8_;
      if (lVar13 <= alStack_5d8[0xd]) {
        alStack_5d8[0xd] = lVar13;
      }
      if (lVar15 <= alStack_5d8[0xe]) {
        alStack_5d8[0xe] = lVar15;
      }
      if (lVar13 <= alStack_5d8[0xf]) {
        lVar13 = alStack_5d8[0xf];
      }
      pdVar22 = pdVar23;
      alStack_5d8[0xf] = lVar13;
      if (lVar15 <= alStack_5d8[0x10]) {
        lVar15 = alStack_5d8[0x10];
      }
    }
    plVar9 = param_4;
    uVar27 = func_0x00010741657c(param_4,0);
    uVar28 = _log2(param_4[0xf]);
    dVar29 = (double)func_0x000107246334(uVar27,uVar28,0,0x4039800000000000);
    uStack_654 = (uint)param_5;
    alStack_5d8[6] = 0;
    alStack_5d8[7] = 0;
    alStack_5d8[8] = 0;
    plVar25 = (long *)*param_1;
    plVar2 = (long *)param_1[1];
    uStack_648 = 0x8000000000000000;
    uStack_650 = 0x8000000000000000;
    uStack_638 = 0x7ff8000000000000;
    uStack_640 = 0x7ff8000000000000;
    for (; lVar15 = alStack_5d8[7], plVar25 != plVar2; plVar25 = plVar25 + 0x19) {
      fVar26 = *(float *)((long)plVar25 + 0xa4);
      fVar32 = *(float *)(plVar25 + 0x15);
      fVar35 = 0.0;
      fVar36 = 0.0;
      if (fVar32 != 0.0 || fVar26 != 0.0) {
        fVar35 = fVar26 / (float)dVar29;
        fVar36 = fVar32 / (float)dVar29;
      }
      iVar3 = (int)plVar25[0x12];
      alStack_5d8[0x12] = uStack_5e8;
      alStack_5d8[0x11] = uStack_5f0;
      alStack_5d8[0x14] = uStack_5f8;
      alStack_5d8[0x13] = uStack_600;
      if (iVar3 == 1) {
        puVar14 = *(undefined8 **)plVar25[0x10];
        if (puVar14 != (undefined8 *)((long *)plVar25[0x10])[1]) {
          uVar18 = 0x7fffffffffffffff;
          uVar20 = 0x7fffffffffffffff;
          plVar9 = (long *)*puVar14;
          uVar21 = 0x8000000000000000;
          uVar19 = 0x8000000000000000;
          while (uVar33 = uVar21, plVar9 != (long *)puVar14[1]) {
            plVar24 = plVar9 + 2;
            alStack_5d8[0x13] = (long)(fVar35 + (float)*plVar9);
            uVar21 = (ulong)(fVar36 + (float)plVar9[1]);
            if (alStack_5d8[0x13] <= (long)uVar20) {
              uVar20 = alStack_5d8[0x13];
            }
            if ((long)uVar21 <= (long)uVar18) {
              uVar18 = uVar21;
            }
            if (alStack_5d8[0x13] <= (long)uVar19) {
              alStack_5d8[0x13] = uVar19;
            }
            plVar9 = plVar24;
            uVar19 = alStack_5d8[0x13];
            alStack_5d8[0x11] = uVar20;
            alStack_5d8[0x12] = uVar18;
            alStack_5d8[0x14] = uVar21;
            if ((long)uVar21 <= (long)uVar33) {
              uVar21 = uVar33;
              alStack_5d8[0x14] = uVar33;
            }
          }
          plVar24 = alStack_5d8 + 9;
LAB_1073c19b0:
          plVar9 = alStack_5d8 + 0x11;
          func_0x0001078715f8(plVar9,plVar24);
          if ((int)plVar9 != 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_260,plVar25 + 9);
            func_0x0001000e3098(&lStack_458,auStack_260,1);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_260);
            if (iVar3 == 1) {
              auVar4._8_8_ = alStack_5d8[0x12];
              auVar4._0_8_ = alStack_5d8[0x11];
              auVar37._8_8_ = alStack_5d8[0x14];
              auVar37._0_8_ = alStack_5d8[0x13];
              auVar37 = NEON_scvtf(auVar37,8);
              auVar31 = NEON_scvtf(auVar4,8);
            }
            else {
              auVar37 = FUN_1073c2248((double)alStack_5d8[0x11],(double)alStack_5d8[0x12],
                                      param_4[0xf]);
              auStack_260 = auVar37;
              auVar37 = FUN_1073c2248((double)alStack_5d8[0x13],(double)alStack_5d8[0x14],
                                      param_4[0xf]);
              aauStack_350[0] = auVar37;
              auVar37 = FUN_107417acc(param_4,auStack_260);
              uStack_630 = auVar37._8_8_;
              uStack_610 = auVar37._0_8_;
              auVar37 = FUN_107417acc(param_4,aauStack_350);
              auVar31._8_8_ = uStack_630;
              auVar31._0_8_ = uStack_610;
            }
            uStack_608 = auVar31._8_8_;
            uStack_610 = auVar31._0_8_;
            auStack_480._8_8_ = 0;
            auStack_480._0_8_ = 0;
            lStack_468 = 0;
            uStack_470 = 0;
            uStack_460 = 0x3f800000;
            param_5 = ((long *)plVar25[0x17])[1];
            for (lVar15 = *(long *)plVar25[0x17]; auStack_620 = auVar37, lVar15 != param_5;
                lVar15 = lVar15 + 0x38) {
              lVar13 = (long)*(double *)(lVar15 + 0x18);
              lVar17 = (long)*(double *)(lVar15 + 0x20);
              lStack_250 = (long)*(double *)(lVar15 + 0x28);
              lStack_248 = (long)*(double *)(lVar15 + 0x30);
              auStack_260._0_8_ = lVar13;
              if (lStack_250 <= lVar13) {
                auStack_260._0_8_ = lStack_250;
              }
              auStack_260._8_8_ = lVar17;
              if (lStack_248 <= lVar17) {
                auStack_260._8_8_ = lStack_248;
              }
              if (lStack_250 <= lVar13) {
                lStack_250 = lVar13;
              }
              if (lStack_248 <= lVar17) {
                lStack_248 = lVar17;
              }
              puVar12 = auStack_260;
              func_0x0001078715f8(puVar12,plVar24);
              auVar37 = auStack_620;
              if ((int)puVar12 != 0) {
                func_0x0001004c3c6c(auStack_480,lVar15);
                auVar37 = auStack_620;
              }
            }
            uStack_4b8 = 0;
            uStack_4c0 = 0;
            uStack_4a8 = 0;
            uStack_4b0 = 0;
            uStack_4a0 = 0x3f800000;
            if (lStack_468 != 0) {
              FUN_1073c2274(&uStack_4c0,plVar25 + 9);
              func_0x00010729c30c();
            }
            func_0x000107299490(&uStack_498,plVar25 + 0xc);
            FUN_1073c246c(&uStack_498,*(undefined8 *)(plVar25[0xe] + 0x10),0);
            func_0x00010728451c(aiStack_440,plVar25[7]);
            fVar26 = *(float *)((long)plVar25 + 0xac);
            bVar7 = false;
            if ((*(float *)(plVar25 + 0x16) == 0.0) && (bVar7 = false, !NAN(fVar26))) {
              bVar7 = fVar26 == 0.0;
            }
            if (!bVar7 && aiStack_440[0] == 6) {
              func_0x00010728451c(auStack_260,aiStack_440);
              FUN_1073c24a8(&uStack_520,dVar29,auStack_260,(float *)((long)plVar25 + 0xac),param_4);
              func_0x000107269e60(auStack_260);
              uVar27 = uStack_518;
              if (auStack_510[0] == '\x01') {
                piVar10 = aiStack_440;
                FUN_10736cc38();
                *(undefined8 *)piVar10 = uVar27;
                uVar27 = uStack_520;
                piVar10 = aiStack_440;
                FUN_10736cc38();
                *(undefined8 *)(piVar10 + 2) = uVar27;
              }
            }
            func_0x0001072f9a20(aauStack_350,aiStack_440);
            func_0x000107269e60(aiStack_440);
            uStack_518 = uStack_608;
            uStack_520 = uStack_610;
            uStack_500 = CONCAT31(uStack_500._1_3_,1);
            lStack_4d8 = plVar25[0x13];
            uStack_4d0 = (undefined4)plVar25[0x14];
            uStack_4cc = CONCAT31(uStack_4cc._1_3_,1);
            param_3 = plVar25;
            auStack_510 = auStack_620;
            FUN_1073c52bc(auStack_260,aauStack_350,plVar25,&uStack_498,&lStack_458,&uStack_4c0,
                          &uStack_520,&lStack_4d8);
            FUN_1073c14b8(alStack_5d8 + 6,auStack_260);
            func_0x0001073c6c48();
            func_0x000107269e60(aauStack_350);
            func_0x000107283194(&uStack_498);
            func_0x000107293acc(&uStack_4c0);
            plVar9 = (long *)auStack_480;
            func_0x0001005d0538();
            func_0x0001073c6f80();
          }
        }
      }
      else {
        if (iVar3 != 0) {
          func_0x00010563ab98();
          goto LAB_1073c20b4;
        }
        puVar14 = *(undefined8 **)plVar25[0x10];
        if (puVar14 != (undefined8 *)((long *)plVar25[0x10])[1]) {
          if (fVar32 == 0.0 && fVar26 == 0.0) {
            auVar37 = ZEXT216(0);
            uVar20 = uStack_640;
            uVar18 = uStack_638;
            uVar21 = uStack_650;
            uVar19 = uStack_648;
          }
          else {
            dVar30 = (double)_log2(param_4[0xf]);
            auStack_260._0_8_ = (undefined8)fVar35;
            auStack_260._8_8_ = (undefined8)fVar36;
            param_3 = (long *)auStack_260;
            auVar37 = FUN_1073c2238(param_4,(int)dVar30);
            puVar14 = *(undefined8 **)plVar25[0x10];
            uVar20 = alStack_5d8[0x11];
            uVar18 = alStack_5d8[0x12];
            uVar21 = alStack_5d8[0x13];
            uVar19 = alStack_5d8[0x14];
          }
          pauVar16 = (undefined1 (*) [16])*puVar14;
          while (pauVar16 != (undefined1 (*) [16])puVar14[1]) {
            auVar31 = NEON_scvtf(*pauVar16,8);
            uVar33 = (ulong)(auVar37._0_8_ + auVar31._0_8_);
            uVar34 = (ulong)(auVar37._8_8_ + auVar31._8_8_);
            uVar20 = uVar20 ^ (uVar20 ^ uVar33) & ~-(ulong)((long)uVar20 < (long)uVar33);
            uVar18 = uVar18 ^ (uVar18 ^ uVar34) & ~-(ulong)((long)uVar18 < (long)uVar34);
            uVar21 = uVar21 ^ (uVar21 ^ uVar33) & -(ulong)((long)uVar21 < (long)uVar33);
            uVar19 = uVar19 ^ (uVar19 ^ uVar34) & -(ulong)((long)uVar19 < (long)uVar34);
            pauVar16 = pauVar16 + 1;
            alStack_5d8[0x11] = uVar20;
            alStack_5d8[0x12] = uVar18;
            alStack_5d8[0x13] = uVar21;
            alStack_5d8[0x14] = uVar19;
          }
          plVar24 = alStack_5d8 + 0xd;
          goto LAB_1073c19b0;
        }
      }
    }
    alStack_5d8[3] = 0;
    alStack_5d8[4] = 0;
    alStack_5d8[5] = 0;
    if ((uStack_654 & 1) == 0) {
      plVar25 = alStack_5d8 + 6;
      func_0x00010729bb7c(alStack_5d8 + 3,plVar25);
      lVar13 = alStack_5d8[3];
      lVar15 = alStack_5d8[4];
    }
    else {
      uStack_518 = 0;
      uStack_520 = 0;
      auStack_510._8_8_ = 0;
      auStack_510._0_8_ = 0;
      uStack_500 = 0x3f800000;
      for (lVar13 = alStack_5d8[6]; lVar17 = alStack_5d8[7], lVar13 != lVar15;
          lVar13 = lVar13 + 0x1b0) {
        func_0x0001073c7138();
        if (bStack_318 == 1) {
          func_0x0001073c717c();
          if (plVar9 == (long *)0x0) {
            plVar9 = (long *)auStack_260;
            func_0x00010729b464(plVar9,lVar13);
            if ((bStack_318 & 1) == 0) {
              func_0x000104bdc2c8();
              goto LAB_1073c20b4;
            }
            func_0x0001073c7188();
            param_3 = (long *)*plVar9;
            if ((ulong)(plVar9[2] - (long)param_3) < 0x1b0) {
              func_0x00010729bd60(plVar9);
              uVar18 = (plVar9[2] - *plVar9) / 0x1b0;
              uVar20 = uVar18 * 2;
              if (uVar20 < 2) {
                uVar20 = 1;
              }
              if (0x4bda12f684bda0 < uVar18) {
                uVar20 = 0x97b425ed097b42;
              }
              func_0x00010729bd94(plVar9,uVar20);
              puVar12 = auStack_260;
LAB_1073c1d78:
              param_3 = &lStack_b0;
              FUN_1073c5828(plVar9,puVar12);
            }
            else {
              if ((ulong)(plVar9[1] - (long)param_3) < 0x1b0) {
                puVar12 = auStack_260 + (plVar9[1] - (long)param_3);
                FUN_1073c58c8(auStack_260,puVar12);
                goto LAB_1073c1d78;
              }
              puVar12 = auStack_260;
              FUN_1073c58c8(puVar12,&lStack_b0);
              func_0x00010729cb64(plVar9,puVar12);
            }
            func_0x0001073c6c48();
          }
          else {
            if ((bStack_318 & 1) == 0) {
              func_0x000104bdc2c8();
              goto LAB_1073c20b4;
            }
            func_0x0001073c7188();
            func_0x0001073c6f48();
          }
        }
        func_0x0001073c6ef8();
      }
      alStack_5d8[0] = 0;
      alStack_5d8[1] = 0;
      alStack_5d8[2] = 0;
      alStack_5d8[0x12] = 0;
      alStack_5d8[0x11] = 0;
      alStack_5d8[0x14] = 0;
      alStack_5d8[0x13] = 0;
      uStack_530 = 0x3f800000;
      param_5 = alStack_5d8[6];
LAB_1073c1de0:
      if (param_5 != lVar17) {
        func_0x0001073c7138();
        if (bStack_318 == 1) {
          plVar25 = alStack_5d8 + 0x11;
          func_0x0001072ee150(plVar25,aauStack_350);
          if (((ulong)plVar25 & 1) != 0) goto LAB_1073c1ff8;
          if ((bStack_318 & 1) == 0) {
            func_0x000104bdc2c8();
LAB_1073c20b4:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1073c20b8);
            (*pcVar6)();
          }
          func_0x0001073c717c();
          if (plVar25 == (long *)0x0) {
            func_0x0001073c6f48(alStack_5d8);
            goto LAB_1073c1ff8;
          }
          func_0x0001072e89a4(alStack_5d8 + 0x11,plVar25 + 2);
          func_0x0001072f40f4(&lStack_4f0,plVar25 + 9);
          lVar13 = lStack_4e8;
          lStack_450 = 0;
          lStack_458 = 0;
          uStack_448 = 0;
          auStack_480._8_8_ = 0;
          auStack_480._0_8_ = 0;
          lStack_468 = 0;
          uStack_470 = 0;
          uStack_460 = 0x3f800000;
          uStack_498 = 0;
          uStack_490 = 0;
          uStack_488 = 0;
          for (lVar15 = lStack_4f0; lVar5 = lStack_450, lVar11 = lStack_458, lVar15 != lVar13;
              lVar15 = lVar15 + 0x1b0) {
            FUN_1073b4984(&lStack_458,lStack_450,*(undefined8 *)(lVar15 + 0x138),
                          *(undefined8 *)(lVar15 + 0x140));
            if (*(char *)(lVar15 + 0x198) == '\x01') {
              lVar11 = lVar15 + 0x178;
              func_0x000107280b44(lVar11);
              FUN_1073c5004(&uStack_498,lVar11);
            }
            plVar25 = (long *)(lVar15 + 0x160);
            while (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0) {
              puVar12 = auStack_480;
              FUN_1073c5918(puVar12,plVar25 + 2);
              if (puVar12 == (undefined1 *)0x0) {
                func_0x0001073c7108();
                func_0x00010729c30c();
              }
              else {
                func_0x0001073c7108();
                func_0x000100601038();
              }
            }
          }
          for (; lVar15 = lStack_450, lVar11 != lStack_450; lVar11 = lVar11 + 0x18) {
            uVar20 = *(ulong *)(lVar11 + 8);
            if (-1 < (char)*(byte *)(lVar11 + 0x17)) {
              uVar20 = (ulong)*(byte *)(lVar11 + 0x17);
            }
            lVar15 = lVar11;
            if (uVar20 == 0) goto LAB_1073c1f30;
          }
          goto LAB_1073c1f70;
        }
        func_0x0001073c6f48(alStack_5d8);
        goto LAB_1073c1ff8;
      }
      func_0x00010726ea70(alStack_5d8 + 0x11);
      FUN_1073c59e0(&uStack_520);
      plVar25 = alStack_5d8;
      FUN_1073c5a34(alStack_5d8 + 3,plVar25);
      func_0x00010729d51c(alStack_5d8);
      lVar13 = alStack_5d8[3];
      lVar15 = alStack_5d8[4];
    }
    while( true ) {
      lVar17 = lVar13;
      param_2 = (uint)plVar25;
      uVar8 = lVar17 == lVar15;
      if ((bool)uVar8) break;
      func_0x0001073c6e3c();
      FUN_1073c1490();
      func_0x0001073c6f48();
      lVar13 = lVar17 + 0x1b0;
      param_5 = lVar17;
    }
    func_0x00010729d51c(alStack_5d8 + 3);
    param_1 = alStack_5d8 + 6;
    func_0x00010729d51c();
    unaff_x20 = param_5;
  }
  dVar29 = (double)func_0x0001073c69a8(uStack_a8);
  if ((bool)uVar8) {
    return dVar29;
  }
  ___stack_chk_fail();
  func_0x00010729d51c(alStack_5d8 + 3);
  plVar25 = alStack_5d8 + 6;
  func_0x00010729d51c();
  func_0x0001073c6aec();
  if (*(int *)((long)plVar25 + 0x4c) == 0) {
    return 0.0;
  }
  pcStack_668 = FUN_1073c2238;
  dVar29 = 0.0;
  if (*(uint *)(plVar25 + 10) != 0) {
    lStack_700 = *param_3;
    dStack_6f8 = (double)*(uint *)(plVar25 + 10) - (double)param_3[1];
    uStack_6c8 = 0x3ff0000000000000;
    uStack_6d0 = 0;
    auVar37 = NEON_fmov(0x3ff0000000000000,8);
    uStack_6e8 = auVar37._8_8_;
    uStack_6f0 = auVar37._0_8_;
    lStack_6e0 = lStack_700;
    dStack_6d8 = dStack_6f8;
    lStack_680 = unaff_x20;
    plStack_678 = param_1;
    puStack_670 = &stack0xfffffffffffffff0;
    func_0x0001074188a8();
    func_0x000107877358(&dStack_6a0,&lStack_6e0,plVar25 + 0x60);
    func_0x0001074188a8();
    func_0x000107877358(&dStack_6c0,&lStack_700,plVar25 + 0x60);
    dStack_710 = dStack_6a0 / dStack_688;
    dStack_708 = dStack_698 / dStack_688;
    dStack_720 = dStack_6c0 / dStack_6a8;
    dStack_718 = dStack_6b8 / dStack_6a8;
    dVar29 = (double)func_0x000107282108(&dStack_710,&dStack_720);
    dVar29 = (dVar29 / (double)plVar25[0xf]) * (double)(1 << (ulong)(param_2 & 0x1f));
  }
  return dVar29;
LAB_1073c1f30:
  while (lVar13 = lVar11 + 0x18, lVar13 != lVar5) {
    uVar20 = *(ulong *)(lVar11 + 0x20);
    if (-1 < (char)*(byte *)(lVar11 + 0x2f)) {
      uVar20 = (ulong)*(byte *)(lVar11 + 0x2f);
    }
    lVar11 = lVar13;
    if (uVar20 != 0) {
      func_0x000100066230(lVar15,lVar13);
      lVar15 = lVar15 + 0x18;
    }
  }
LAB_1073c1f70:
  func_0x0001001bc934(&lStack_458,lVar15,lStack_450);
  lVar15 = lStack_4f0;
  FUN_1073c50b0(&lStack_4d8,&uStack_498);
  FUN_1073c4fbc(&uStack_4c0,lStack_4d8,CONCAT44(uStack_4cc,uStack_4d0));
  param_3 = (long *)(lVar15 + 0xf0);
  FUN_1073c52bc(auStack_260,lVar15,param_3,lVar15 + 0x128,&lStack_458,auStack_480,&uStack_4c0,
                lStack_4f0 + 0x1a0);
  func_0x0001072bc1f0(&lStack_4d8);
  func_0x0001072bc1f0(&uStack_498);
  func_0x000107293acc(auStack_480);
  func_0x0001073c6f80();
  FUN_1073c14b8(alStack_5d8,auStack_260);
  func_0x0001073c6c48();
  func_0x00010729d51c(&lStack_4f0);
LAB_1073c1ff8:
  func_0x0001073c6ef8();
  param_5 = param_5 + 0x1b0;
  goto LAB_1073c1de0;
}



/* Entry: 1073c2238; end: 1073c2247;  */

double FUN_1073c2238(long param_1,uint param_2,undefined8 *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    dVar1 = 0.0;
    if (*(uint *)(param_1 + 0x50) != 0) {
      uStack_a0 = *param_3;
      dStack_98 = (double)*(uint *)(param_1 + 0x50) - (double)param_3[1];
      uStack_68 = 0x3ff0000000000000;
      uStack_70 = 0;
      auVar2 = NEON_fmov(0x3ff0000000000000,8);
      uStack_88 = auVar2._8_8_;
      uStack_90 = auVar2._0_8_;
      uStack_80 = uStack_a0;
      dStack_78 = dStack_98;
      func_0x0001074188a8();
      func_0x000107877358(&dStack_40,&uStack_80,param_1 + 0x300);
      func_0x0001074188a8();
      func_0x000107877358(&dStack_60,&uStack_a0,param_1 + 0x300);
      dStack_b0 = dStack_40 / dStack_28;
      dStack_a8 = dStack_38 / dStack_28;
      dStack_c0 = dStack_60 / dStack_48;
      dStack_b8 = dStack_58 / dStack_48;
      dStack_30 = dStack_30 / dStack_28;
      dVar1 = 0.0;
      if (dStack_30 != dStack_50 / dStack_48) {
        dVar1 = 0.0 - dStack_30;
        dStack_30 = dStack_50 / dStack_48 - dStack_30;
        dVar1 = dVar1 / dStack_30;
      }
      dVar1 = (double)func_0x000107282108(dVar1,dStack_30,&dStack_b0,&dStack_c0);
      dVar1 = (dVar1 / *(double *)(param_1 + 0x78)) * (double)(1 << (ulong)(param_2 & 0x1f));
    }
    return dVar1;
  }
  return 0.0;
}



/* Entry: 1073c2248; end: 1073c2273;  */

void FUN_1073c2248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107282130(param_3,&uStack_20,1);
  return;
}



/* Entry: 1073c2274; end: 1073c246b;  */

long * FUN_1073c2274(undefined8 param_1,float param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x24;
  ulong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  plVar7 = param_3 + 3;
  func_0x000100102e7c();
  plVar9 = (long *)param_3[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x24 = (long *)(uVar10 & (ulong)plVar7);
    }
    else {
      unaff_x24 = plVar7;
      if (plVar9 <= plVar7) {
        uVar2 = 0;
        if (plVar9 != (long *)0x0) {
          uVar2 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar7 - uVar2 * (long)plVar9);
      }
    }
    plVar8 = *(long **)(*param_3 + (long)unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_1073c2334;
          plVar5 = (long *)plVar8[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar8 + 2;
          func_0x0001000e107c(plVar5,param_4);
          if (((ulong)plVar5 & 1) != 0) goto LAB_1073c2450;
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar10);
        }
        else if (plVar9 <= plVar5) {
          uVar2 = 0;
          if (plVar9 != (long *)0x0) {
            uVar2 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar2 * (long)plVar9);
        }
      } while (plVar5 == unaff_x24);
    }
  }
LAB_1073c2334:
  plVar5 = param_3 + 2;
  plVar8 = (long *)0x50;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = (long)plVar7;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar8 + 2,param_4);
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  plVar8[8] = 0;
  plVar8[7] = 0;
  plVar8[6] = 0;
  plVar8[5] = 0;
  *(undefined4 *)(plVar8 + 9) = 0x3f800000;
  func_0x0001073c7390();
  func_0x0001073c7350();
  if ((plVar9 == (long *)0x0) ||
     (param_2 * (float)plVar9 < (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))))) {
    bVar3 = (long *)0x2 < plVar9;
    bVar4 = plVar9 == (long *)0x3;
    func_0x0001073c733c((long)plVar9 << 1);
    uVar1 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar1 = extraout_x9;
    }
    func_0x00010729364c(param_3,uVar1);
    plVar9 = (long *)param_3[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x24 = (long *)((long)plVar9 - 1U & (ulong)plVar7);
    }
    else {
      unaff_x24 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x24 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  lVar6 = *param_3;
  plVar7 = *(long **)(lVar6 + (long)unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar8 = *plVar5;
    *plVar5 = (long)plVar8;
    *(long **)(lVar6 + (long)unaff_x24 * 8) = plVar5;
    if (*plVar8 != 0) {
      plVar7 = *(long **)(*plVar8 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = plVar8;
    }
  }
  else {
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
  }
  func_0x0001073c703c();
  func_0x000107293a30();
LAB_1073c2450:
  return plVar8 + 5;
}



/* Entry: 1073c246c; end: 1073c24a7;  */

void FUN_1073c246c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  
  func_0x0001073730cc();
  func_0x000100601028(*param_1,param_2,param_3);
  for (; unaff_x20 != (long *)unaff_x19; unaff_x20 = (long *)*unaff_x20) {
    func_0x000107298a08(unaff_x21,unaff_x20 + 2);
  }
  return;
}



/* Entry: 1073c24a8; end: 1073c2583;  */

void FUN_1073c24a8(double *param_1,double param_2,double *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  double dStack_50;
  double dStack_48;
  
  if (*(int *)param_3 == 6) {
    FUN_10736cc38();
    dVar2 = *param_3;
    dVar1 = param_3[1];
    fVar3 = (float)*param_4;
    fVar4 = (float)((ulong)*param_4 >> 0x20);
    if ((fVar3 == 0.0) && (fVar4 == 0.0)) {
      func_0x000107246514(param_1,0);
    }
    else {
      func_0x000107246514(&dStack_50,0);
      FUN_107417acc(param_5,&dStack_50);
      dVar1 = dVar1 + (double)(fVar3 / (float)param_2);
      dStack_48 = dVar2 + (double)(fVar4 / (float)param_2);
      dStack_50 = dVar1;
      FUN_107417f00(param_5,&dStack_50,0);
      *param_1 = dVar1;
      param_1[1] = dVar2;
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 1073c2584; end: 1073c26bf;  */

long * FUN_1073c2584(void)

{
  undefined1 in_ZR;
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 *unaff_x20;
  ulong uVar5;
  undefined8 *unaff_x25;
  undefined8 *in_stack_00000000;
  undefined8 *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  long alStack_130 [7];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  
  plVar4 = alStack_130;
  plVar1 = alStack_130;
  func_0x0001073c6e1c();
  func_0x0001073c69bc();
  uStack_68 = extraout_x8;
  func_0x000104c2fe00(alStack_130);
  uStack_f0 = unaff_x25[1];
  uStack_f8 = *unaff_x25;
  *unaff_x25 = 0;
  unaff_x25[1] = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8);
  func_0x000107299490(auStack_d0);
  func_0x000107299490(auStack_c0);
  FUN_1073c6750(auStack_b0);
  uStack_98 = *unaff_x20;
  uStack_90 = *(undefined4 *)(unaff_x20 + 1);
  uStack_8c = *in_stack_00000000;
  uStack_84 = *in_stack_00000008;
  FUN_1073c67e4(auStack_78,in_stack_00000010);
  func_0x0001073c5a68();
  func_0x0001073c5ec8();
  func_0x0001073c69a8(uStack_68);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  func_0x0001073c5ec8(alStack_130);
  func_0x0001073c6aec();
  plVar1 = plVar4;
  (**(code **)(*plVar4 + 0x10))(plVar4);
  plVar2 = plVar4;
  (**(code **)(*plVar4 + 0x30))(plVar4);
  func_0x00010786e5e4(&uStack_161,plVar2);
  func_0x0001073c6c2c();
  func_0x00010726364c(&uStack_162,plVar4[6] + 0x60);
  func_0x0001073c6c2c();
  uVar5 = extraout_x8_01 ^ extraout_x8_00 ^ ((ulong)plVar1 & 0xffffffff) + 0x9e3779b97f4a7c15;
  puVar3 = &uStack_163;
  func_0x00010726364c(puVar3,plVar4[6] + 0x98);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  func_0x00010786e760(&uStack_164,plVar4);
  func_0x0001073c6c2c();
  return (long *)(extraout_x8_02 ^
                 (ulong)(puVar3 + (uVar5 >> 4) + uVar5 * 0x1000 + -0x61c8864680b583eb) ^ uVar5);
}



/* Entry: 1073c26c0; end: 1073c2783;  */

ulong FUN_1073c26c0(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar4;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x10))(param_2);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2);
  func_0x00010786e5e4(&uStack_31,plVar2);
  func_0x0001073c6c2c();
  func_0x00010726364c(&uStack_32,param_2[6] + 0x60);
  func_0x0001073c6c2c();
  uVar4 = extraout_x8_00 ^ extraout_x8 ^ ((ulong)plVar1 & 0xffffffff) + 0x9e3779b97f4a7c15;
  puVar3 = &uStack_33;
  func_0x00010726364c(puVar3,param_2[6] + 0x98);
  (**(code **)(*param_2 + 0x20))(param_2);
  func_0x00010786e760(&uStack_34,param_2);
  func_0x0001073c6c2c();
  return extraout_x8_01 ^
         (ulong)(puVar3 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb) ^ uVar4;
}



/* Entry: 1073c2784; end: 1073c278f;  */

void FUN_1073c2784(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6b0c();
  func_0x0001073c6af4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001057f951c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c2790; end: 1073c27c3;  */

void FUN_1073c2790(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001057f951c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c27c4; end: 1073c27cf;  */

void FUN_1073c27c4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001073c6b0c();
  func_0x0001073c6af4();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x140) * 0x140;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x140) {
    func_0x0001072a6870(lVar2,lVar3);
    lVar2 = lVar2 + 0x140;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x140) {
    func_0x0001072a6ae4(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001073c6a00();
  return;
}



/* Entry: 1073c27d0; end: 1073c2853;  */

void FUN_1073c27d0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x0001073c6af4();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0x140) * 0x140;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0x140) {
    func_0x0001072a6870(lVar2,lVar3);
    lVar2 = lVar2 + 0x140;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0x140) {
    func_0x0001072a6ae4(lVar4);
  }
  *(long *)(unaff_x19 + 8) = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
  unaff_x20[1] = lVar3;
  func_0x0001073c6a00();
  return;
}



/* Entry: 1073c2854; end: 1073c28b3;  */

void FUN_1073c2854(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x0001073c2890(param_4);
  }
  func_0x0001073c70a8(0x140);
  return;
}



/* Entry: 1073c28b4; end: 1073c28df;  */

long * FUN_1073c28b4(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xcccccccccccccd) {
    plVar1 = (long *)(param_2 * 0x140);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  func_0x000104bd35f4();
  FUN_1073c290c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073c28e0; end: 1073c290b;  */

long * FUN_1073c28e0(long *param_1)

{
  FUN_1073c290c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073c290c; end: 1073c2913;  */

void FUN_1073c290c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x140;
    func_0x0001072a6ae4();
  }
  return;
}



/* Entry: 1073c2914; end: 1073c2997;  */

void FUN_1073c2914(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x140;
    func_0x0001072a6ae4();
  }
  return;
}



/* Entry: 1073c2998; end: 1073c299f;  */

void FUN_1073c2998(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    func_0x0001057f951c();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c29a0; end: 1073c29ef;  */

void FUN_1073c29a0(void)

{
  func_0x0001073c6b98();
  func_0x0001073c29c4();
  return;
}



/* Entry: 1073c29f0; end: 1073c29f7;  */

void FUN_1073c29f0(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x140;
    func_0x0001072a6ae4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c29f8; end: 1073c2a2b;  */

void FUN_1073c29f8(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x140;
    func_0x0001072a6ae4();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c2a2c; end: 1073c2a5f;  */

void FUN_1073c2a2c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001072a75c4(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x140;
  return;
}



/* Entry: 1073c2a60; end: 1073c2ae7;  */

undefined8 FUN_1073c2a60(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001073c6f94();
  FUN_1073c2ae8();
  func_0x0001073c6b88();
  FUN_1073c2854(auStack_58);
  func_0x0001072a75c4(lStack_48);
  lStack_48 = lStack_48 + 0x140;
  func_0x0001073c6d6c();
  FUN_1073c27d0();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073c6f50();
  return uVar1;
}



/* Entry: 1073c2ae8; end: 1073c2b43;  */

ulong * FUN_1073c2ae8(long *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong unaff_x20;
  
  if ((ulong *)0xcccccccccccccc < param_2) {
    FUN_1073c27c4();
    puVar2 = (ulong *)&UNK_10f40ec6b;
    func_0x000104c03f28();
    func_0x0001073c7268();
    *puVar2 = (ulong)param_2;
    func_0x000104c318bc(puVar2 + 1,param_3);
    func_0x000104c318bc(puVar2 + 8);
    puVar2[0xf] = unaff_x20;
    func_0x000107299490(puVar2 + 0x10);
    func_0x000107299490(puVar2 + 0x12);
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined2 *)((long)puVar2 + 0xa4) = 0;
    func_0x00010002b838(puVar2 + 0x15,&UNK_10f40ec72);
    *(undefined1 *)(puVar2 + 0x18) = 0;
    *(undefined1 *)(puVar2 + 0x1c) = 0;
    *(undefined1 *)(puVar2 + 0x1d) = 0;
    *(undefined1 *)(puVar2 + 0x20) = 0;
    *(undefined1 *)(puVar2 + 0x21) = 0;
    *(undefined1 *)(puVar2 + 0x23) = 0;
    return puVar2;
  }
  uVar1 = (param_1[2] - *param_1) / 0x140;
  puVar2 = (ulong *)(uVar1 * 2);
  if (puVar2 < param_2 || (long)puVar2 - (long)param_2 == 0) {
    puVar2 = param_2;
  }
  if (0x66666666666665 < uVar1) {
    puVar2 = (ulong *)0xcccccccccccccc;
  }
  return puVar2;
}



/* Entry: 1073c2b44; end: 1073c2bf7;  */

undefined8 * FUN_1073c2b44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x0001073c7268();
  *param_1 = param_2;
  func_0x000104c318bc(param_1 + 1,param_3);
  func_0x000104c318bc(param_1 + 8);
  param_1[0xf] = unaff_x20;
  func_0x000107299490(param_1 + 0x10);
  func_0x000107299490(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)((long)param_1 + 0xa4) = 0;
  func_0x00010002b838(param_1 + 0x15,&UNK_10f40ec72);
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  return param_1;
}



/* Entry: 1073c2bf8; end: 1073c30e7;  */

undefined8 *
FUN_1073c2bf8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  undefined8 *puVar11;
  undefined8 *extraout_x8_03;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  ulong extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x8_08;
  undefined8 extraout_x8_09;
  ulong extraout_x9;
  undefined8 *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  undefined8 *extraout_x10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar12;
  undefined8 *unaff_x24;
  undefined8 *puVar13;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000050;
  undefined8 auStack_3b8 [36];
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 auStack_250 [36];
  undefined8 auStack_130 [15];
  ulong uStack_b8;
  undefined8 uStack_10;
  
  func_0x0001073c73cc();
  func_0x0001073c6af4();
  func_0x0001073c69bc();
  uStack_10 = extraout_x8;
  do {
    func_0x0001073c7054();
    puVar10 = unaff_x27;
    puVar11 = unaff_x28;
LAB_1073c2c2c:
    while( true ) {
      func_0x0001073c7328();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001073c2e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)(unaff_x26 + 0x21bcc8ca) * 4 + 0x1073c2e64))();
        return param_1;
      }
      unaff_x28 = puVar11;
      unaff_x27 = unaff_x19;
      if ((long)extraout_x8_00 < 0x1b00) {
        in_CY = unaff_x19 <= unaff_x20;
        in_ZR = unaff_x20 == unaff_x19;
        if (((ulong)param_4 & 1) == 0) {
          if (!(bool)in_ZR) {
            while( true ) {
              unaff_x21 = unaff_x20;
              unaff_x20 = unaff_x21 + 0x24;
              in_CY = unaff_x19 <= unaff_x20;
              uVar8 = unaff_x20 == unaff_x19;
              in_ZR = 1;
              if ((bool)uVar8) break;
              func_0x0001073c6bfc(unaff_x21[0x33]);
              if ((bool)in_CY && !(bool)uVar8) {
                func_0x0001073c6a88();
                do {
                  func_0x0001073c6f70(unaff_x21 + 0x24);
                  func_0x0001073c7078();
                } while ((bool)in_CY && !(bool)uVar8);
                param_1 = (undefined8 *)(extraout_x8_07 + 0x120);
                func_0x0001073c6ee8(param_1);
                func_0x0001073c6b40();
              }
            }
          }
          goto LAB_1073c30cc;
        }
        if ((bool)in_ZR) goto LAB_1073c30cc;
        lVar12 = 0;
        puVar11 = unaff_x20;
        goto LAB_1073c2eb8;
      }
      if (param_3 == (undefined8 *)0x0) {
        in_CY = unaff_x19 <= unaff_x20;
        in_ZR = 1;
        if (unaff_x20 == unaff_x19) goto LAB_1073c30cc;
        func_0x0001073c7240();
        goto LAB_1073c2f28;
      }
      unaff_x26 = unaff_x20 + ((ulong)unaff_x26 >> 1) * 0x24;
      uVar4 = 0x8fff < extraout_x8_00;
      uVar8 = extraout_x8_00 == 0x9000;
      if (extraout_x8_00 < 0x9001) {
        param_1 = unaff_x26;
        param_2 = unaff_x20;
        func_0x0001073c7194();
      }
      else {
        func_0x0001073c7194();
        func_0x0001073c7314();
        FUN_1073c30e8();
        FUN_1073c30e8(unaff_x20 + 0x48,unaff_x26 + 0x24,uStack_260);
        param_1 = puVar10;
        param_2 = unaff_x26;
        FUN_1073c30e8(puVar10,unaff_x26,unaff_x26 + 0x24);
        func_0x0001073c71b0();
      }
      param_3 = (undefined8 *)((long)param_3 - 1);
      unaff_x28 = param_1;
      if ((((ulong)param_4 & 1) != 0) ||
         (func_0x0001073c6d60(unaff_x20[-0x15]), unaff_x28 = param_1, (bool)uVar4 && !(bool)uVar8))
      break;
      func_0x0001073c6a88();
      uVar4 = (ulong)unaff_x19[-0x15] <= uStack_b8;
      uVar8 = uStack_b8 == unaff_x19[-0x15];
      puVar13 = unaff_x20;
      if (!(bool)uVar4 || (bool)uVar8) {
        do {
          unaff_x26 = puVar13 + 0x24;
          if (unaff_x19 <= unaff_x26) break;
          puVar1 = puVar13 + 0x33;
          puVar13 = unaff_x26;
        } while (uStack_b8 <= *puVar1);
      }
      else {
        do {
          func_0x0001073c72a4();
        } while (!(bool)uVar4 || (bool)uVar8);
      }
      uVar4 = unaff_x19 <= unaff_x26;
      uVar8 = unaff_x26 == unaff_x19;
      puVar13 = unaff_x19;
      if (!(bool)uVar4) {
        do {
          func_0x0001073c727c();
        } while ((bool)uVar4 && !(bool)uVar8);
      }
      while (unaff_x26 < puVar13) {
        func_0x0001073c7120();
        do {
          func_0x0001073c72b8();
        } while (extraout_x8_02 <= extraout_x9_02);
        do {
          puVar1 = puVar13 + -0x15;
          puVar13 = puVar13 + -0x24;
        } while (*puVar1 < extraout_x8_02);
      }
      in_CY = unaff_x26 + -0x24 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 + -0x24;
      if (!(bool)in_ZR) {
        param_1 = unaff_x20;
        func_0x0001073c6dc8();
      }
      func_0x0001073c7150();
      func_0x0001073c6b40();
      param_4 = (undefined8 *)0x0;
    }
    func_0x0001073c6a88();
    do {
      func_0x0001073c72ec();
    } while ((bool)uVar4 && !(bool)uVar8);
    unaff_x26 = (undefined8 *)((long)unaff_x20 + extraout_x9);
    uVar4 = 0x11f < extraout_x9;
    uVar8 = 0;
    puVar10 = unaff_x19;
    if (extraout_x9 == 0x120) {
      do {
        bVar5 = puVar10 <= unaff_x26;
        bVar9 = unaff_x26 == puVar10;
        puVar11 = puVar10;
        puVar13 = puVar10;
        if (bVar5) break;
        func_0x0001073c72c4();
        puVar10 = extraout_x9_00;
        puVar11 = unaff_x24;
        puVar13 = unaff_x24;
      } while (!bVar5 || bVar9);
    }
    else {
      do {
        func_0x0001073c72d8();
        puVar11 = unaff_x24;
        puVar13 = unaff_x24;
      } while (!(bool)uVar4 || (bool)uVar8);
    }
    while (unaff_x24 = puVar13, unaff_x26 < puVar11) {
      func_0x0001073c712c();
      do {
        func_0x0001073c72b8();
      } while (extraout_x8_01 < extraout_x9_01);
      do {
        puVar1 = puVar11 + -0x15;
        puVar11 = puVar11 + -0x24;
        puVar13 = unaff_x24;
      } while (*puVar1 <= extraout_x8_01);
    }
    unaff_x27 = unaff_x26 + -0x24;
    if (unaff_x20 != unaff_x27) {
      func_0x0001073c6f3c();
      FUN_1073c33c8();
    }
    func_0x0001073c7144();
    func_0x0001073c6b40();
    in_CY = unaff_x24 <= unaff_x26;
    in_ZR = unaff_x26 == unaff_x24;
    param_1 = unaff_x28;
    puVar11 = unaff_x26;
    puVar10 = unaff_x27;
    if (!(bool)in_CY) goto LAB_1073c2d78;
    func_0x0001073c6f3c();
    FUN_1073c3224();
    param_1 = unaff_x26;
    param_2 = unaff_x19;
    FUN_1073c3224();
    if ((int)param_1 == 0) goto code_r0x0001073c2d74;
    unaff_x19 = unaff_x27;
  } while (((ulong)unaff_x28 & 1) == 0);
  goto LAB_1073c30cc;
LAB_1073c2eb8:
  unaff_x21 = puVar11 + 0x24;
  in_CY = unaff_x19 <= unaff_x21;
  in_ZR = 1;
  if (unaff_x21 == unaff_x19) goto LAB_1073c30cc;
  uVar4 = (ulong)puVar11[0xf] <= (ulong)puVar11[0x33];
  uVar8 = puVar11[0x33] == puVar11[0xf];
  if ((bool)uVar4 && !(bool)uVar8) {
    func_0x0001073c6b34();
    do {
      param_3 = (undefined8 *)((long)unaff_x20 + lVar12);
      func_0x0001073c6d84(param_3 + 0x24);
      param_1 = unaff_x20;
      if (lVar12 == 0) goto LAB_1073c2f04;
      func_0x0001073c7300();
    } while ((bool)uVar4 && !(bool)uVar8);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar12 + 0x120);
LAB_1073c2f04:
    func_0x0001073c6ee8();
    func_0x0001073c6b40();
  }
  lVar12 = lVar12 + 0x120;
  puVar11 = unaff_x21;
  goto LAB_1073c2eb8;
code_r0x0001073c2d74:
  puVar11 = unaff_x28;
  if (((ulong)unaff_x28 & 1) == 0) {
LAB_1073c2d78:
    func_0x0001073c6f3c();
    FUN_1073c2bf8();
    param_4 = (undefined8 *)0x0;
  }
  goto LAB_1073c2c2c;
LAB_1073c2f28:
  do {
    uVar4 = param_4 < (undefined8 *)0x121;
    cVar6 = SBORROW8(0x120,(long)param_4);
    cVar7 = 0x120 - (long)param_4 < 0;
    uVar8 = param_4 == (undefined8 *)0x120;
    unaff_x28 = puVar11;
    if ((long)param_4 < 0x121) {
      func_0x0001073c6ec4();
      if (cVar7 != cVar6) {
        uVar4 = (ulong)puVar10[0x33] <= (ulong)puVar10[0xf];
        uVar8 = puVar10[0xf] == puVar10[0x33];
        puVar13 = unaff_x24;
        if (!(bool)uVar4 || (bool)uVar8) {
          puVar13 = (undefined8 *)0x0;
        }
        puVar10 = (undefined8 *)((long)puVar10 + (long)puVar13);
        unaff_x28 = extraout_x8_03;
        if (!(bool)uVar4 || (bool)uVar8) {
          unaff_x28 = puVar11;
        }
      }
      param_3 = (undefined8 *)((long)unaff_x20 + (long)param_4 * (long)unaff_x24);
      func_0x0001073c6eb0(puVar10[0xf]);
      if (!(bool)uVar4 || (bool)uVar8) {
        param_1 = auStack_130;
        func_0x0001073c6c24(param_1);
        do {
          func_0x0001073c6ea0();
          uVar4 = unaff_x28 < (undefined8 *)0x121;
          cVar6 = SBORROW8(0x120,(long)unaff_x28);
          cVar7 = 0x120 - (long)unaff_x28 < 0;
          uVar8 = unaff_x28 == (undefined8 *)0x120;
          if (0x120 < (long)unaff_x28) break;
          func_0x0001073c6e74();
          if (cVar7 != cVar6) {
            uVar4 = (ulong)puVar10[0x33] <= (ulong)puVar10[0xf];
            uVar8 = puVar10[0xf] == puVar10[0x33];
            puVar11 = unaff_x24;
            if (!(bool)uVar4 || (bool)uVar8) {
              puVar11 = (undefined8 *)0x0;
            }
            puVar10 = (undefined8 *)((long)puVar10 + (long)puVar11);
          }
          func_0x0001073c700c();
        } while (!(bool)uVar4 || (bool)uVar8);
        param_2 = auStack_130;
        func_0x0001073c6ebc();
        func_0x0001073c6b40();
      }
    }
    param_4 = (undefined8 *)((long)param_4 - 1);
    puVar11 = unaff_x28;
  } while (-1 < (long)param_4);
  while( true ) {
    in_CY = (undefined8 *)0x1 < unaff_x26;
    cVar6 = SBORROW8((long)unaff_x26,2);
    unaff_x21 = (undefined8 *)((long)unaff_x26 - 2);
    cVar7 = (long)unaff_x21 < 0;
    in_ZR = unaff_x21 == (undefined8 *)0x0;
    unaff_x27 = unaff_x19;
    if ((long)unaff_x26 < 2) break;
    func_0x0001073c6ba8(auStack_250);
    param_3 = (undefined8 *)((ulong)unaff_x21 >> 1);
    do {
      func_0x0001073c6dd0();
      puVar11 = extraout_x8_04;
      if ((cVar7 != cVar6) &&
         (func_0x0001073c6ff4(), puVar11 = extraout_x10, !(bool)in_CY || (bool)in_ZR)) {
        puVar11 = extraout_x8_05;
      }
      func_0x0001073c6f70();
      in_CY = param_3 <= puVar11;
      cVar6 = SBORROW8((long)puVar11,(long)param_3);
      cVar7 = (long)puVar11 - (long)param_3 < 0;
      in_ZR = puVar11 == param_3;
    } while ((long)puVar11 <= (long)param_3);
    unaff_x19 = unaff_x19 + -0x24;
    if (unaff_x21 == unaff_x19) {
      param_2 = auStack_250;
      func_0x0001073c6ebc(unaff_x21);
    }
    else {
      func_0x0001073c6df0();
      FUN_1073c33c8();
      func_0x0001073c70e0();
      uVar2 = (long)unaff_x21 + (0x120 - (long)unaff_x20);
      uVar4 = 0x120 < uVar2;
      uVar8 = uVar2 == 0x121;
      if (0x120 < (long)uVar2) {
        func_0x0001073c6d50(uVar2 / 0x120 - 2);
        func_0x0001073c6bfc();
        if ((bool)uVar4 && !(bool)uVar8) {
          func_0x0001073c6b34();
          do {
            func_0x0001073c6dc8(unaff_x21);
            if (puVar11 == (undefined8 *)0x0) break;
            func_0x0001073c6d50((long)puVar11 + -1);
            unaff_x21 = param_4;
          } while (uStack_b8 < extraout_x8_06);
          param_2 = auStack_130;
          func_0x0001073c7100();
          func_0x0001073c6b40();
          param_3 = param_4;
        }
      }
    }
    param_1 = auStack_250;
    func_0x0001072a6b0c(param_1);
    unaff_x26 = (undefined8 *)((long)unaff_x26 + -1);
  }
LAB_1073c30cc:
  func_0x0001073c69a8(uStack_10);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_1073c30e8;
  puStack_290 = param_3;
  puStack_288 = unaff_x21;
  puStack_280 = unaff_x20;
  puStack_278 = unaff_x27;
  puStack_270 = &stack0x00000050;
  func_0x0001073c6c14();
  func_0x0001073c720c();
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar4 = extraout_x8_08 <= extraout_x9_03;
    uVar8 = extraout_x9_03 == extraout_x8_08;
    if ((bool)uVar4 && !(bool)uVar8) {
      func_0x0001073c6ca8();
      func_0x0001073c6bfc(unaff_x27[0xf]);
      if ((bool)uVar4 && !(bool)uVar8) {
        func_0x0001073c6df0();
        unaff_x20 = param_2;
        goto LAB_1073c314c;
      }
    }
    return param_1;
  }
  uVar4 = extraout_x8_08 <= extraout_x9_03;
  uVar8 = extraout_x9_03 == extraout_x8_08;
  if (!(bool)uVar4 || (bool)uVar8) {
    FUN_1073c3368(unaff_x21,unaff_x27);
    func_0x0001073c6d78(unaff_x20[0xf]);
    if (!(bool)uVar4 || (bool)uVar8) {
      return unaff_x21;
    }
  }
LAB_1073c314c:
  puVar13 = puStack_278;
  puVar11 = puStack_280;
  puStack_290 = unaff_x28;
  puStack_288 = puVar10;
  func_0x0001073c6af4();
  func_0x0001073c69bc();
  puVar10 = auStack_3b8;
  uStack_298 = extraout_x8_09;
  func_0x0001073c6ba8();
  func_0x0001073c6bf0();
  FUN_1073c33c8();
  func_0x0001073c6d6c();
  FUN_1073c33c8();
  func_0x0001073c6f58();
  func_0x0001073c69a8(uStack_298);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    func_0x0001073c6af4();
    *puVar10 = *unaff_x20;
    func_0x000104c2f1f0(puVar10 + 1,unaff_x20 + 1);
    func_0x000104c2f1f0(puVar11 + 8,puVar13 + 8);
    puVar11[0xf] = puVar13[0xf];
    FUN_10737ef78(puVar11 + 0x10,puVar13 + 0x10);
    FUN_10737ef78(puVar11 + 0x12,puVar13 + 0x12);
    uVar3 = *(undefined4 *)(puVar13 + 0x14);
    *(undefined2 *)((long)puVar11 + 0xa4) = *(undefined2 *)((long)puVar13 + 0xa4);
    *(undefined4 *)(puVar11 + 0x14) = uVar3;
    func_0x000100066230(puVar11 + 0x15,puVar13 + 0x15);
    uVar15 = puVar13[0x19];
    uVar14 = puVar13[0x18];
    uVar17 = puVar13[0x1b];
    uVar16 = puVar13[0x1a];
    *(undefined1 *)(puVar11 + 0x1c) = *(undefined1 *)(puVar13 + 0x1c);
    puVar11[0x19] = uVar15;
    puVar11[0x18] = uVar14;
    puVar11[0x1b] = uVar17;
    puVar11[0x1a] = uVar16;
    FUN_1073c3460(puVar11 + 0x1d,puVar13 + 0x1d);
    FUN_1073c354c(puVar11 + 0x21,puVar13 + 0x21);
    return puVar11;
  }
  return puVar10;
}



/* Entry: 1073c30e8; end: 1073c31b3;  */

undefined8 * FUN_1073c30e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  ulong extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_158 [36];
  undefined8 uStack_38;
  
  func_0x0001073c6c14();
  func_0x0001073c720c();
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar2 = extraout_x8 <= extraout_x9;
    uVar3 = extraout_x9 == extraout_x8;
    param_2 = unaff_x20;
    if (!(bool)uVar2 || (bool)uVar3) {
      FUN_1073c3368();
      func_0x0001073c6d78(unaff_x20[0xf]);
      if (!(bool)uVar2 || (bool)uVar3) {
        return unaff_x21;
      }
    }
LAB_1073c314c:
    func_0x0001073c6af4();
    func_0x0001073c69bc();
    puVar4 = auStack_158;
    uStack_38 = extraout_x8_00;
    func_0x0001073c6ba8();
    func_0x0001073c6bf0();
    FUN_1073c33c8();
    func_0x0001073c6d6c();
    FUN_1073c33c8();
    func_0x0001073c6f58();
    func_0x0001073c69a8(uStack_38);
    if ((bool)uVar3) {
      return puVar4;
    }
    ___stack_chk_fail();
    func_0x0001073c6af4();
    *puVar4 = *param_2;
    func_0x000104c2f1f0(puVar4 + 1,param_2 + 1);
    func_0x000104c2f1f0(unaff_x20 + 8,unaff_x19 + 0x40);
    unaff_x20[0xf] = *(undefined8 *)(unaff_x19 + 0x78);
    FUN_10737ef78(unaff_x20 + 0x10,unaff_x19 + 0x80);
    FUN_10737ef78(unaff_x20 + 0x12,unaff_x19 + 0x90);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
    *(undefined2 *)((long)unaff_x20 + 0xa4) = *(undefined2 *)(unaff_x19 + 0xa4);
    *(undefined4 *)(unaff_x20 + 0x14) = uVar1;
    func_0x000100066230(unaff_x20 + 0x15,unaff_x19 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x19 + 200);
    uVar5 = *(undefined8 *)(unaff_x19 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0xd8);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xd0);
    *(undefined1 *)(unaff_x20 + 0x1c) = *(undefined1 *)(unaff_x19 + 0xe0);
    unaff_x20[0x19] = uVar6;
    unaff_x20[0x18] = uVar5;
    unaff_x20[0x1b] = uVar8;
    unaff_x20[0x1a] = uVar7;
    FUN_1073c3460(unaff_x20 + 0x1d,unaff_x19 + 0xe8);
    FUN_1073c354c(unaff_x20 + 0x21,unaff_x19 + 0x108);
    return unaff_x20;
  }
  uVar2 = extraout_x8 <= extraout_x9;
  uVar3 = extraout_x9 == extraout_x8;
  if ((bool)uVar2 && !(bool)uVar3) {
    func_0x0001073c6ca8();
    func_0x0001073c6bfc(*(undefined8 *)(unaff_x19 + 0x78));
    if ((bool)uVar2 && !(bool)uVar3) {
      func_0x0001073c6df0();
      goto LAB_1073c314c;
    }
  }
  return param_1;
}



/* Entry: 1073c31b4; end: 1073c3223;  */

undefined8 *
FUN_1073c31b4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_158 [35];
  
  func_0x0001073c6af4();
  func_0x0001073c315c();
  func_0x0001073c6eb0(*(undefined8 *)(param_5 + 0x78));
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001073c6b00();
    func_0x0001073c6bfc(*(undefined8 *)(param_4 + 0x78));
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x0001073c6aa4();
      func_0x0001073c6d14();
      if ((bool)in_CY && !(bool)in_ZR) {
        func_0x0001073c6b50();
        func_0x0001073c6d30();
        if ((bool)in_CY && !(bool)in_ZR) {
          func_0x0001073c6bf0();
          func_0x0001073c6af4();
          func_0x0001073c69bc();
          puVar2 = auStack_158;
          func_0x0001073c6ba8();
          func_0x0001073c6bf0();
          FUN_1073c33c8();
          func_0x0001073c6d6c();
          FUN_1073c33c8();
          func_0x0001073c6f58();
          func_0x0001073c69a8(extraout_x8);
          if ((bool)in_ZR) {
            return puVar2;
          }
          ___stack_chk_fail();
          func_0x0001073c6af4();
          *puVar2 = *param_2;
          func_0x000104c2f1f0(puVar2 + 1,param_2 + 1);
          func_0x000104c2f1f0(unaff_x20 + 8,unaff_x19 + 0x40);
          unaff_x20[0xf] = *(undefined8 *)(unaff_x19 + 0x78);
          FUN_10737ef78(unaff_x20 + 0x10,unaff_x19 + 0x80);
          FUN_10737ef78(unaff_x20 + 0x12,unaff_x19 + 0x90);
          uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
          *(undefined2 *)((long)unaff_x20 + 0xa4) = *(undefined2 *)(unaff_x19 + 0xa4);
          *(undefined4 *)(unaff_x20 + 0x14) = uVar1;
          func_0x000100066230(unaff_x20 + 0x15,unaff_x19 + 0xa8);
          uVar4 = *(undefined8 *)(unaff_x19 + 200);
          uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
          uVar6 = *(undefined8 *)(unaff_x19 + 0xd8);
          uVar5 = *(undefined8 *)(unaff_x19 + 0xd0);
          *(undefined1 *)(unaff_x20 + 0x1c) = *(undefined1 *)(unaff_x19 + 0xe0);
          unaff_x20[0x19] = uVar4;
          unaff_x20[0x18] = uVar3;
          unaff_x20[0x1b] = uVar6;
          unaff_x20[0x1a] = uVar5;
          FUN_1073c3460(unaff_x20 + 0x1d,unaff_x19 + 0xe8);
          FUN_1073c354c(unaff_x20 + 0x21,unaff_x19 + 0x108);
          return unaff_x20;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 1073c3224; end: 1073c3367;  */

void FUN_1073c3224(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong uVar6;
  undefined8 extraout_x8_01;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 auStack_2d8 [36];
  undefined8 uStack_1b8;
  undefined1 auStack_178 [288];
  undefined8 uStack_58;
  
  func_0x0001073c6be4();
  func_0x0001073c69bc();
  uStack_58 = extraout_x8;
  func_0x0001073c6c80();
  bVar2 = 4 < extraout_x8_00;
  uVar4 = extraout_x8_00 == 5;
  switch(extraout_x8_00) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x0001073c6d78(*(undefined8 *)(unaff_x20 - 0xa8));
    if (bVar2 && !(bool)uVar4) {
      func_0x0001073c71e0();
    }
    break;
  case 3:
    func_0x0001073c6f88();
    FUN_1073c30e8();
    break;
  case 4:
    func_0x0001073c6fb4();
    func_0x0001073c315c();
    break;
  case 5:
    func_0x0001073c6cd4(1);
    FUN_1073c31b4();
    break;
  default:
    func_0x0001073c6f88();
    FUN_1073c30e8();
    uVar7 = 0;
    iVar8 = 0;
    uVar6 = unaff_x19 + 0x360;
    while( true ) {
      bVar3 = unaff_x20 <= uVar6;
      bVar2 = uVar6 == unaff_x20;
      uVar4 = 1;
      if (bVar2) break;
      func_0x0001073c6eb0(*(undefined8 *)(uVar6 + 0x78));
      if (bVar3 && !bVar2) {
        func_0x0001073c6bb0(auStack_178);
        do {
          func_0x0001073c6f60();
          bVar3 = 0xfffffffffffffdbf < uVar7;
          bVar2 = uVar7 == 0xfffffffffffffdc0;
          if (bVar2) break;
          func_0x0001073c7364();
        } while (bVar3 && !bVar2);
        func_0x0001073c71cc();
        iVar8 = iVar8 + 1;
        func_0x0001073c6f58();
        if (iVar8 == 8) {
          uVar4 = uVar6 + 0x120 == unaff_x20;
          break;
        }
      }
      uVar6 = uVar6 + 0x120;
      uVar7 = uVar7 + 0x120;
    }
  }
  func_0x0001073c69a8(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073c6af4();
  func_0x0001073c69bc();
  puVar5 = auStack_2d8;
  uStack_1b8 = extraout_x8_01;
  func_0x0001073c6ba8();
  func_0x0001073c6bf0();
  FUN_1073c33c8();
  func_0x0001073c6d6c();
  FUN_1073c33c8();
  func_0x0001073c6f58();
  func_0x0001073c69a8(uStack_1b8);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x0001073c6af4();
    *puVar5 = *param_2;
    func_0x000104c2f1f0(puVar5 + 1,param_2 + 1);
    func_0x000104c2f1f0(unaff_x20 + 0x40,unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
    FUN_10737ef78(unaff_x20 + 0x80,unaff_x19 + 0x80);
    FUN_10737ef78(unaff_x20 + 0x90,unaff_x19 + 0x90);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
    *(undefined2 *)(unaff_x20 + 0xa4) = *(undefined2 *)(unaff_x19 + 0xa4);
    *(undefined4 *)(unaff_x20 + 0xa0) = uVar1;
    func_0x000100066230(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x19 + 200);
    uVar9 = *(undefined8 *)(unaff_x19 + 0xc0);
    uVar12 = *(undefined8 *)(unaff_x19 + 0xd8);
    uVar11 = *(undefined8 *)(unaff_x19 + 0xd0);
    *(undefined1 *)(unaff_x20 + 0xe0) = *(undefined1 *)(unaff_x19 + 0xe0);
    *(undefined8 *)(unaff_x20 + 200) = uVar10;
    *(undefined8 *)(unaff_x20 + 0xc0) = uVar9;
    *(undefined8 *)(unaff_x20 + 0xd8) = uVar12;
    *(undefined8 *)(unaff_x20 + 0xd0) = uVar11;
    FUN_1073c3460(unaff_x20 + 0xe8,unaff_x19 + 0xe8);
    FUN_1073c354c(unaff_x20 + 0x108,unaff_x19 + 0x108);
    return;
  }
  return;
}



/* Entry: 1073c3368; end: 1073c33c7;  */

void FUN_1073c3368(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_158 [36];
  undefined8 uStack_38;
  
  func_0x0001073c6af4();
  func_0x0001073c69bc();
  puVar2 = auStack_158;
  uStack_38 = extraout_x8;
  func_0x0001073c6ba8();
  func_0x0001073c6bf0();
  FUN_1073c33c8();
  func_0x0001073c6d6c();
  FUN_1073c33c8();
  func_0x0001073c6f58();
  func_0x0001073c69a8(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001073c6af4();
  *puVar2 = *param_2;
  func_0x000104c2f1f0(puVar2 + 1,param_2 + 1);
  func_0x000104c2f1f0(unaff_x20 + 0x40,unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  FUN_10737ef78(unaff_x20 + 0x80,unaff_x19 + 0x80);
  FUN_10737ef78(unaff_x20 + 0x90,unaff_x19 + 0x90);
  uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
  *(undefined2 *)(unaff_x20 + 0xa4) = *(undefined2 *)(unaff_x19 + 0xa4);
  *(undefined4 *)(unaff_x20 + 0xa0) = uVar1;
  func_0x000100066230(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x19 + 200);
  uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x19 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x19 + 0xd0);
  *(undefined1 *)(unaff_x20 + 0xe0) = *(undefined1 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x20 + 200) = uVar4;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar6;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar5;
  FUN_1073c3460(unaff_x20 + 0xe8,unaff_x19 + 0xe8);
  FUN_1073c354c(unaff_x20 + 0x108,unaff_x19 + 0x108);
  return;
}



/* Entry: 1073c33c8; end: 1073c345f;  */

void FUN_1073c33c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001073c6af4();
  *param_1 = *param_2;
  func_0x000104c2f1f0(param_1 + 1,param_2 + 1);
  func_0x000104c2f1f0(unaff_x20 + 0x40,unaff_x19 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x78) = *(undefined8 *)(unaff_x19 + 0x78);
  FUN_10737ef78(unaff_x20 + 0x80,unaff_x19 + 0x80);
  FUN_10737ef78(unaff_x20 + 0x90,unaff_x19 + 0x90);
  uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
  *(undefined2 *)(unaff_x20 + 0xa4) = *(undefined2 *)(unaff_x19 + 0xa4);
  *(undefined4 *)(unaff_x20 + 0xa0) = uVar1;
  func_0x000100066230(unaff_x20 + 0xa8,unaff_x19 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x19 + 200);
  uVar2 = *(undefined8 *)(unaff_x19 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x19 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x19 + 0xd0);
  *(undefined1 *)(unaff_x20 + 0xe0) = *(undefined1 *)(unaff_x19 + 0xe0);
  *(undefined8 *)(unaff_x20 + 200) = uVar3;
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar5;
  *(undefined8 *)(unaff_x20 + 0xd0) = uVar4;
  FUN_1073c3460(unaff_x20 + 0xe8,unaff_x19 + 0xe8);
  FUN_1073c354c(unaff_x20 + 0x108,unaff_x19 + 0x108);
  return;
}



/* Entry: 1073c3460; end: 1073c3483;  */

undefined8 FUN_1073c3460(undefined8 param_1)

{
  FUN_1073c3484();
  return param_1;
}



/* Entry: 1073c3484; end: 1073c34c3;  */

void FUN_1073c3484(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  if (cVar1 == *(char *)(param_2 + 3)) {
    if (cVar1 != '\0') {
      func_0x0001073c6af4();
      func_0x0001073c3510();
      *(undefined1 *)(unaff_x20 + 0x10) = *(undefined1 *)(unaff_x19 + 0x10);
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 3) == '\x01') {
        func_0x00010726b09c();
        *(undefined1 *)(param_1 + 3) = 0;
      }
      return;
    }
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 1073c34c4; end: 1073c34eb;  */

void FUN_1073c34c4(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4();
  func_0x0001073c3510();
  *(undefined1 *)(unaff_x20 + 0x10) = *(undefined1 *)(unaff_x19 + 0x10);
  return;
}



/* Entry: 1073c34ec; end: 1073c354b;  */

void FUN_1073c34ec(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010726b09c();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 1073c354c; end: 1073c356f;  */

undefined8 FUN_1073c354c(undefined8 param_1)

{
  FUN_1073c3570();
  return param_1;
}



/* Entry: 1073c3570; end: 1073c35a7;  */

void FUN_1073c3570(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 == *(char *)(param_2 + 2)) {
    if (cVar1 != '\0') {
      func_0x0001073c6e54();
      func_0x0001072792b8();
      return;
    }
  }
  else {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 2) == '\x01') {
        func_0x0001072792b8();
        *(undefined1 *)(param_1 + 2) = 0;
      }
      return;
    }
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 1073c35a8; end: 1073c35cb;  */

void FUN_1073c35a8(void)

{
  func_0x0001073c6e54();
  func_0x0001072792b8();
  return;
}



/* Entry: 1073c35cc; end: 1073c35ef;  */

void FUN_1073c35cc(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001072792b8();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 1073c35f0; end: 1073c3677;  */

void FUN_1073c35f0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001073c6fd4();
  if (param_3 != 0) {
    FUN_1073c3678();
    lVar1 = unaff_x19 + 0x10;
    FUN_1073c36c4(lVar1,param_2,param_2 + param_3 * 0x120,*(undefined8 *)(unaff_x19 + 8));
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  func_0x0001073c6f78();
  return;
}



/* Entry: 1073c3678; end: 1073c36c3;  */

long * FUN_1073c3678(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  undefined1 auStack_80 [24];
  undefined1 uStack_68;
  long *plStack_58;
  
  if (param_2 < 0xe38e38e38e38e4) {
    plVar1 = param_1 + 2;
    func_0x0001072a79d0();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x24);
    return plVar1;
  }
  func_0x0001072a795c();
  func_0x0001073c7290();
  uStack_68 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x120) {
    func_0x0001073c6f30();
    func_0x0001072ab860();
    param_4 = plStack_58 + 0x24;
    plStack_58 = param_4;
  }
  func_0x0001073c7390();
  func_0x0001072a7ab4(auStack_80);
  return param_4;
}



/* Entry: 1073c36c4; end: 1073c373b;  */

long FUN_1073c36c4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x0001073c7290();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x120) {
    func_0x0001073c6f30();
    func_0x0001072ab860();
    param_4 = lStack_38 + 0x120;
    lStack_38 = param_4;
  }
  func_0x0001073c7390();
  func_0x0001072a7ab4(auStack_60);
  return param_4;
}



/* Entry: 1073c373c; end: 1073c3767;  */

long FUN_1073c373c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001072a7ba4(param_1);
  }
  return param_1;
}



/* Entry: 1073c3768; end: 1073c3787;  */

uint FUN_1073c3768(long param_1,long param_2)

{
  param_1 = param_1 + 0x108;
  FUN_1073c13b8(param_1,param_2 + 0x40);
  return (uint)param_1 ^ 1;
}



/* Entry: 1073c3788; end: 1073c3f73;  */

ulong * FUN_1073c3788(ulong *param_1,ulong *param_2,ulong *param_3,long param_4,ulong *param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uStack_260;
  ulong auStack_250 [36];
  ulong auStack_130 [15];
  ulong *puStack_b8;
  undefined8 uStack_10;
  
  func_0x0001073c73cc();
  uStack_260 = (ulong)param_5 & 0xffffffff;
  puVar15 = param_1;
  puVar9 = param_2;
  puVar10 = param_3;
  func_0x0001073c69bc();
  uStack_10 = extraout_x8;
  do {
    puVar7 = param_2 + -0x24;
    puVar12 = param_1;
LAB_1073c37d8:
    param_1 = puVar12;
    uVar11 = (long)param_2 - (long)param_1;
    uVar5 = (long)uVar11 / 0x120;
    uVar3 = uVar5 == 5;
    switch(uVar5) {
    case 0:
    case 1:
      goto LAB_1073c3f58;
    case 2:
      puVar15 = (ulong *)*param_3;
      puVar9 = (ulong *)*puVar7;
      puVar10 = (ulong *)param_2[-0x15];
      func_0x0001073c6ab0(puVar15,puVar9,puVar10);
      if ((int)puVar15 != 0) {
        func_0x0001073c6aa4();
      }
      goto LAB_1073c3f58;
    case 3:
      puVar9 = param_1 + 0x24;
      func_0x0001073c6ccc(param_1,puVar9,puVar7);
      puVar15 = param_1;
      puVar10 = puVar7;
      goto LAB_1073c3f58;
    case 4:
      puVar9 = param_1 + 0x24;
      puVar10 = param_1 + 0x48;
      func_0x0001073c40a4(param_1,puVar9,puVar10,puVar7,param_3);
      puVar15 = param_1;
      param_5 = param_3;
      goto LAB_1073c3f58;
    case 5:
      puVar9 = param_1 + 0x24;
      puVar10 = param_1 + 0x48;
      func_0x0001073c4120(param_1,puVar9,puVar10,param_1 + 0x6c,puVar7,param_3);
      puVar15 = param_1;
      param_5 = puVar7;
      goto LAB_1073c3f58;
    }
    if ((long)uVar11 < 0x1b00) {
      if ((uStack_260 & 1) == 0) {
        uVar3 = param_1 == param_2;
        if (!(bool)uVar3) {
          puVar12 = param_1 + -0x24;
          while( true ) {
            uVar3 = 1;
            if (param_1 + 0x24 == param_2) break;
            puVar15 = (ulong *)*param_3;
            puVar9 = (ulong *)param_1[0x24];
            puVar10 = (ulong *)param_1[0x33];
            func_0x0001073c6ab0(puVar15,puVar9,puVar10);
            if ((int)puVar15 != 0) {
              func_0x0001073c6c24(auStack_130);
              puVar9 = puVar12;
              do {
                puVar15 = puVar9;
                FUN_1073c33c8(puVar15 + 0x48,puVar15 + 0x24);
                uVar5 = *param_3;
                puVar10 = puStack_b8;
                func_0x0001073c6ab0(uVar5,auStack_130[0],puStack_b8);
                puVar9 = puVar15 + -0x24;
              } while ((uVar5 & 1) != 0);
              puVar15 = puVar15 + 0x24;
              puVar9 = auStack_130;
              FUN_1073c33c8(puVar15,puVar9);
              func_0x0001073c6c40();
            }
            puVar12 = puVar12 + 0x24;
            param_1 = param_1 + 0x24;
          }
        }
        break;
      }
      uVar3 = 1;
      if (param_1 == param_2) break;
      lVar13 = 0;
      puVar12 = param_1;
      goto LAB_1073c3bb0;
    }
    if (param_4 == 0) {
      uVar3 = 1;
      if (param_1 == param_2) break;
      uVar21 = uVar5 - 2 >> 1;
      uVar11 = uVar21;
      goto LAB_1073c3c5c;
    }
    puVar9 = param_1 + (uVar5 >> 1) * 0x24;
    if (uVar11 < 0x9001) {
      func_0x0001073c6f30();
      func_0x0001073c6ccc();
    }
    else {
      func_0x0001073c7234();
      func_0x0001073c6ccc();
      func_0x0001073c6ccc(param_1 + 0x24,puVar9 + -0x24,param_2 + -0x48);
      func_0x0001073c6ccc(param_1 + 0x48,puVar9 + 0x24,param_2 + -0x6c);
      func_0x0001073c6ccc(puVar9 + -0x24,puVar9,puVar9 + 0x24);
      func_0x0001073c7234();
      FUN_1073c3368();
    }
    param_4 = param_4 + -1;
    if ((uStack_260 & 1) == 0) {
      uVar5 = *param_3;
      puVar9 = (ulong *)param_1[-0x24];
      puVar10 = (ulong *)param_1[-0x15];
      func_0x0001073c6ab0(uVar5,puVar9,puVar10);
      if ((uVar5 & 1) == 0) {
        puVar15 = auStack_130;
        func_0x0001073c6bb0();
        param_5 = (ulong *)param_2[-0x15];
        func_0x0001073c6a78();
        puVar22 = param_1;
        if (((ulong)puVar15 & 1) == 0) {
          do {
            puVar12 = puVar22 + 0x24;
            if (param_2 <= puVar12) break;
            param_5 = (ulong *)puVar22[0x33];
            func_0x0001073c6a78();
            puVar22 = puVar12;
          } while ((int)puVar15 == 0);
        }
        else {
          do {
            puVar12 = puVar22 + 0x24;
            param_5 = (ulong *)puVar22[0x33];
            func_0x0001073c6a78();
            puVar22 = puVar12;
          } while (((ulong)puVar15 & 1) == 0);
        }
        puVar6 = puVar7;
        puVar22 = param_2;
        if (param_2 <= puVar12) goto LAB_1073c3a90;
        do {
          param_5 = (ulong *)puVar6[0xf];
          func_0x0001073c6a78();
          puVar6 = puVar6 + -0x24;
        } while (((ulong)puVar15 & 1) != 0);
        while( true ) {
          puVar22 = puVar6 + 0x24;
LAB_1073c3a90:
          if (puVar22 <= puVar12) break;
          puVar15 = puVar12;
          puVar9 = puVar22;
          FUN_1073c3368(puVar12,puVar22);
          do {
            puVar12 = puVar12 + 0x24;
            func_0x0001073c6e90();
          } while ((int)puVar15 == 0);
          puVar6 = puVar22 + -0x24;
          do {
            param_5 = (ulong *)puVar6[0xf];
            func_0x0001073c6e90();
            puVar6 = puVar6 + -0x24;
          } while (((ulong)puVar15 & 1) != 0);
        }
        if (param_1 != puVar12 + -0x24) {
          func_0x0001073c7234();
          FUN_1073c33c8();
        }
        func_0x0001073c70ec();
        func_0x0001073c6c40();
        uStack_260 = 0;
        goto LAB_1073c37d8;
      }
    }
    puVar9 = auStack_130;
    func_0x0001073c6bb0();
    lVar13 = 0;
    do {
      func_0x0001073c6b18();
      lVar13 = lVar13 + 0x120;
    } while (((ulong)puVar9 & 1) != 0);
    puVar10 = (ulong *)((long)param_1 + lVar13);
    puVar15 = puVar7;
    puVar12 = puVar10;
    if (lVar13 == 0x120) {
      do {
        puVar14 = puVar15;
        puVar22 = puVar14 + 0x24;
        puVar6 = puVar22;
        if (puVar22 <= puVar10) break;
        func_0x0001073c6b18();
        puVar15 = puVar14 + -0x24;
        puVar22 = puVar14;
        puVar6 = puVar14;
      } while (((ulong)puVar9 & 1) == 0);
    }
    else {
      do {
        puVar22 = puVar15;
        func_0x0001073c6b18();
        puVar15 = puVar22 + -0x24;
        puVar6 = puVar22;
      } while (((ulong)puVar9 & 1) == 0);
    }
    while (puVar12 < puVar22) {
      func_0x0001073c7384();
      FUN_1073c3368();
      do {
        puVar12 = puVar12 + 0x24;
        func_0x0001073c6f20();
      } while (((ulong)puVar9 & 1) != 0);
      do {
        puVar22 = puVar22 + -0x24;
        func_0x0001073c6f20();
      } while ((int)puVar9 == 0);
    }
    puVar22 = puVar12 + -0x24;
    if (param_1 != puVar22) {
      FUN_1073c33c8(param_1,puVar22);
    }
    FUN_1073c33c8(puVar22,auStack_130);
    func_0x0001073c6c40();
    uVar3 = puVar10 == puVar6;
    if (puVar10 < puVar6) goto LAB_1073c39d0;
    puVar6 = param_1;
    puVar9 = puVar22;
    FUN_1073c41c0(param_1,puVar22,param_3);
    puVar15 = puVar6;
    func_0x0001073c7384();
    puVar10 = param_3;
    FUN_1073c41c0();
    if ((int)puVar15 == 0) goto code_r0x0001073c39cc;
    param_2 = puVar22;
  } while (((ulong)puVar6 & 1) == 0);
  goto LAB_1073c3f58;
LAB_1073c3bb0:
  uVar3 = 1;
  if (puVar12 + 0x24 == param_2) goto LAB_1073c3f58;
  puVar15 = (ulong *)*param_3;
  puVar9 = (ulong *)puVar12[0x24];
  puVar10 = (ulong *)puVar12[0x33];
  param_5 = (ulong *)puVar12[0xf];
  FUN_1073c3f74(puVar15,puVar9,puVar10,*puVar12,param_5);
  if ((int)puVar15 != 0) {
    func_0x0001073c6c24(auStack_130);
    lVar1 = lVar13;
    do {
      lVar18 = lVar1;
      lVar1 = (long)param_1 + lVar18;
      FUN_1073c33c8(lVar1 + 0x120,lVar1);
      puVar15 = param_1;
      if (lVar18 == 0) goto LAB_1073c3c2c;
      uVar5 = *param_3;
      param_5 = *(ulong **)(lVar1 + -0xa8);
      puVar10 = puStack_b8;
      FUN_1073c3f74(uVar5,auStack_130[0],puStack_b8,*(undefined8 *)(lVar1 + -0x120),param_5);
      lVar1 = lVar18 + -0x120;
    } while ((uVar5 & 1) != 0);
    puVar15 = (ulong *)((long)param_1 + lVar18);
LAB_1073c3c2c:
    puVar9 = auStack_130;
    FUN_1073c33c8(puVar15,puVar9);
    func_0x0001073c6c40();
  }
  lVar13 = lVar13 + 0x120;
  puVar12 = puVar12 + 0x24;
  goto LAB_1073c3bb0;
code_r0x0001073c39cc:
  if (((ulong)puVar6 & 1) == 0) {
LAB_1073c39d0:
    param_5 = (ulong *)(ulong)((uint)uStack_260 & 1);
    puVar10 = param_3;
    FUN_1073c3788(param_1,puVar22,param_3,param_4,param_5);
    uStack_260 = 0;
    puVar15 = param_1;
    puVar9 = puVar22;
  }
  goto LAB_1073c37d8;
LAB_1073c3c5c:
  do {
    if ((long)uVar11 <= (long)uVar21) {
      uVar2 = (uVar11 & 0x3fffffffffffffff) << 1 | 1;
      puVar10 = param_1 + uVar2 * 0x24;
      uVar20 = uVar11 * 2 + 2;
      puVar15 = (ulong *)*param_3;
      if ((long)uVar20 < (long)uVar5) {
        puVar22 = (ulong *)*puVar10;
        puVar9 = (ulong *)puVar10[0x24];
        puVar7 = puVar15;
        FUN_1073c3f74(puVar15,puVar22,puVar10[0xf],puVar9,puVar10[0x33]);
        puVar12 = puVar10 + 0x24;
        if ((int)puVar7 == 0) {
          puVar9 = puVar22;
          puVar12 = puVar10;
          uVar20 = uVar2;
        }
      }
      else {
        puVar9 = (ulong *)*puVar10;
        puVar12 = puVar10;
        uVar20 = uVar2;
      }
      puVar7 = param_1 + uVar11 * 0x24;
      puVar10 = (ulong *)puVar12[0xf];
      param_5 = (ulong *)puVar7[0xf];
      FUN_1073c3f74(puVar15,puVar9,puVar10,*puVar7,param_5);
      if (((ulong)puVar15 & 1) == 0) {
        func_0x0001072a689c(auStack_130,puVar7);
        do {
          puVar15 = puVar12;
          func_0x0001073c6d84(puVar7);
          if ((long)uVar21 < (long)uVar20) break;
          uVar2 = uVar20 << 1 | 1;
          puVar9 = param_1 + uVar2 * 0x24;
          uVar20 = uVar20 * 2 + 2;
          uVar16 = *param_3;
          if ((long)uVar20 < (long)uVar5) {
            uVar17 = *puVar9;
            uVar19 = puVar9[0x24];
            uVar8 = uVar16;
            FUN_1073c3f74(uVar16,uVar17,puVar9[0xf],uVar19,puVar9[0x33]);
            puVar12 = puVar9 + 0x24;
            if ((int)uVar8 == 0) {
              uVar19 = uVar17;
              puVar12 = puVar9;
              uVar20 = uVar2;
            }
          }
          else {
            uVar19 = *puVar9;
            puVar12 = puVar9;
            uVar20 = uVar2;
          }
          puVar10 = (ulong *)puVar12[0xf];
          param_5 = puStack_b8;
          FUN_1073c3f74(uVar16,uVar19,puVar10,auStack_130[0],puStack_b8);
          puVar7 = puVar15;
        } while ((int)uVar16 == 0);
        puVar9 = auStack_130;
        FUN_1073c33c8(puVar15,puVar9);
        func_0x0001073c6c40();
      }
    }
    uVar11 = uVar11 - 1;
  } while (-1 < (long)uVar11);
  while( true ) {
    uVar3 = uVar5 - 2 == 0;
    if ((long)uVar5 < 2) break;
    func_0x0001073c6bb0(auStack_250);
    uVar11 = uVar5 - 2 >> 1;
    puVar9 = param_1;
    puVar15 = (ulong *)0x0;
    do {
      puVar7 = (ulong *)((long)puVar15 << 1 | 1);
      puVar12 = (ulong *)((long)puVar15 * 2 + 2);
      puVar22 = puVar9 + (long)puVar15 * 0x24 + 0x24;
      puVar6 = puVar7;
      if ((long)puVar12 < (long)uVar5) {
        uVar21 = *param_3;
        puVar10 = (ulong *)puVar9[(long)puVar15 * 0x24 + 0x33];
        param_5 = (ulong *)puVar9[(long)puVar15 * 0x24 + 0x57];
        FUN_1073c3f74(uVar21,puVar9[(long)puVar15 * 0x24 + 0x24],puVar10,
                      puVar9[(long)puVar15 * 0x24 + 0x48],param_5);
        puVar22 = puVar9 + (long)puVar15 * 0x24 + 0x48;
        puVar6 = puVar12;
        if ((int)uVar21 == 0) {
          puVar22 = puVar9 + (long)puVar15 * 0x24 + 0x24;
          puVar6 = puVar7;
        }
      }
      func_0x0001073c6d84(puVar9);
      puVar9 = puVar22;
      puVar15 = puVar6;
    } while ((long)puVar6 <= (long)uVar11);
    param_2 = param_2 + -0x24;
    if (puVar22 == param_2) {
      puVar9 = auStack_250;
      func_0x0001073c7100();
    }
    else {
      FUN_1073c33c8(puVar22,param_2);
      puVar9 = auStack_250;
      puVar15 = param_2;
      FUN_1073c33c8(param_2,puVar9);
      iVar4 = (int)puVar15;
      uVar21 = (long)puVar22 + (0x120 - (long)param_1);
      if (0x120 < (long)uVar21) {
        func_0x0001073c7090(uVar21 / 0x120 - 2);
        func_0x0001073c6c08();
        if (iVar4 != 0) {
          func_0x0001073c6c24(auStack_130);
          do {
            func_0x0001073c6dc8();
            if (uVar11 == 0) break;
            func_0x0001073c7090(uVar11 - 1);
            param_5 = puStack_b8;
            FUN_1073c3f74();
            uVar21 = (ulong)puVar22 & 1;
            puVar22 = puVar6;
          } while (uVar21 != 0);
          func_0x0001073c70ec();
          func_0x0001073c6c40();
        }
      }
    }
    puVar15 = auStack_250;
    func_0x0001072a6b0c();
    uVar5 = uVar5 - 1;
  }
LAB_1073c3f58:
  func_0x0001073c69a8(uStack_10);
  if ((bool)uVar3) {
    return puVar15;
  }
  ___stack_chk_fail();
  if (puVar15 == (ulong *)0x0) {
    return (ulong *)(ulong)(param_5 < puVar10);
  }
  func_0x0001073c6f30(puVar9);
  FUN_1073c436c();
  puVar9 = puVar15;
  func_0x0001073c6f30();
  FUN_1073c436c();
  return (ulong *)(ulong)(puVar9 < puVar15);
}



/* Entry: 1073c3f74; end: 1073c3fcb;  */

bool FUN_1073c3f74(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  
  if (param_1 != 0) {
    func_0x0001073c6f30(param_2);
    FUN_1073c436c();
    uVar1 = param_1;
    func_0x0001073c6f30();
    FUN_1073c436c();
    return uVar1 < param_1;
  }
  return param_5 < param_3;
}



/* Entry: 1073c3fcc; end: 1073c40a3;  */

undefined8 *
FUN_1073c3fcc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 extraout_x8;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 auStack_158 [33];
  
  puVar2 = param_4;
  func_0x0001073c6c14();
  puVar3 = (undefined8 *)*puVar2;
  uVar4 = *param_2;
  uVar5 = param_2[0xf];
  puVar1 = puVar3;
  FUN_1073c3f74(puVar3,uVar4,uVar5,*param_1,param_1[0xf]);
  FUN_1073c3f74(puVar3,*unaff_x20,unaff_x20[0xf],uVar4,uVar5);
  if (((ulong)puVar1 & 1) != 0) {
    puVar1 = unaff_x20;
    if ((int)puVar3 == 0) {
      func_0x0001073c6df0();
      FUN_1073c3368();
      puVar3 = (undefined8 *)*param_4;
      func_0x0001073c6b28(puVar3,*unaff_x20,unaff_x20[0xf]);
      if ((int)puVar3 == 0) {
        return puVar3;
      }
    }
LAB_1073c4084:
    func_0x0001073c6af4();
    func_0x0001073c69bc();
    puVar3 = auStack_158;
    func_0x0001073c6ba8();
    func_0x0001073c6bf0();
    FUN_1073c33c8();
    func_0x0001073c6d6c();
    FUN_1073c33c8();
    func_0x0001073c6f58();
    func_0x0001073c69a8(extraout_x8);
    if ((bool)in_ZR) {
      return puVar3;
    }
    ___stack_chk_fail();
    func_0x0001073c6af4();
    *puVar3 = *puVar1;
    func_0x000104c2f1f0(puVar3 + 1,puVar1 + 1);
    func_0x000104c2f1f0(unaff_x20 + 8,unaff_x19 + 8);
    unaff_x20[0xf] = unaff_x19[0xf];
    FUN_10737ef78(unaff_x20 + 0x10,unaff_x19 + 0x10);
    FUN_10737ef78(unaff_x20 + 0x12,unaff_x19 + 0x12);
    lVar6 = unaff_x19[0x14];
    *(undefined2 *)((long)unaff_x20 + 0xa4) = *(undefined2 *)((long)unaff_x19 + 0xa4);
    *(int *)(unaff_x20 + 0x14) = (int)lVar6;
    func_0x000100066230(unaff_x20 + 0x15,unaff_x19 + 0x15);
    lVar7 = unaff_x19[0x19];
    lVar6 = unaff_x19[0x18];
    lVar9 = unaff_x19[0x1b];
    lVar8 = unaff_x19[0x1a];
    *(char *)(unaff_x20 + 0x1c) = (char)unaff_x19[0x1c];
    unaff_x20[0x19] = lVar7;
    unaff_x20[0x18] = lVar6;
    unaff_x20[0x1b] = lVar9;
    unaff_x20[0x1a] = lVar8;
    FUN_1073c3460(unaff_x20 + 0x1d,unaff_x19 + 0x1d);
    FUN_1073c354c(unaff_x20 + 0x21,unaff_x19 + 0x21);
    return unaff_x20;
  }
  if ((int)puVar3 != 0) {
    func_0x0001073c6ca8();
    puVar3 = (undefined8 *)*param_4;
    puVar1 = (undefined8 *)*unaff_x19;
    func_0x0001073c6ab0(puVar3,puVar1,unaff_x19[0xf]);
    if ((int)puVar3 != 0) {
      func_0x0001073c6df0();
      goto LAB_1073c4084;
    }
  }
  return puVar3;
}



/* Entry: 1073c40a4; end: 1073c41bf;  */

undefined8 *
FUN_1073c40a4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 auStack_158 [35];
  
  func_0x0001073c6af4();
  FUN_1073c3fcc();
  puVar2 = (undefined8 *)*param_5;
  func_0x0001073c6c08(puVar2,*param_4,param_4[0xf]);
  if ((int)puVar2 != 0) {
    func_0x0001073c6b00();
    puVar2 = (undefined8 *)*param_5;
    puVar3 = (undefined8 *)*param_3;
    func_0x0001073c6b28(puVar2,puVar3,param_3[0xf]);
    if ((int)puVar2 != 0) {
      puVar2 = unaff_x19;
      func_0x0001073c6bdc();
      func_0x0001073c6c5c();
      if ((int)puVar2 != 0) {
        func_0x0001073c6bf0();
        func_0x0001073c6af4();
        func_0x0001073c69bc();
        puVar2 = auStack_158;
        func_0x0001073c6ba8();
        func_0x0001073c6bf0();
        FUN_1073c33c8();
        func_0x0001073c6d6c();
        FUN_1073c33c8();
        func_0x0001073c6f58();
        func_0x0001073c69a8(extraout_x8);
        if ((bool)in_ZR) {
          return puVar2;
        }
        ___stack_chk_fail();
        func_0x0001073c6af4();
        *puVar2 = *puVar3;
        func_0x000104c2f1f0(puVar2 + 1,puVar3 + 1);
        func_0x000104c2f1f0(unaff_x20 + 8,unaff_x19 + 8);
        unaff_x20[0xf] = unaff_x19[0xf];
        FUN_10737ef78(unaff_x20 + 0x10,unaff_x19 + 0x10);
        FUN_10737ef78(unaff_x20 + 0x12,unaff_x19 + 0x12);
        uVar1 = *(undefined4 *)(unaff_x19 + 0x14);
        *(undefined2 *)((long)unaff_x20 + 0xa4) = *(undefined2 *)((long)unaff_x19 + 0xa4);
        *(undefined4 *)(unaff_x20 + 0x14) = uVar1;
        func_0x000100066230(unaff_x20 + 0x15,unaff_x19 + 0x15);
        uVar5 = unaff_x19[0x19];
        uVar4 = unaff_x19[0x18];
        uVar7 = unaff_x19[0x1b];
        uVar6 = unaff_x19[0x1a];
        *(undefined1 *)(unaff_x20 + 0x1c) = *(undefined1 *)(unaff_x19 + 0x1c);
        unaff_x20[0x19] = uVar5;
        unaff_x20[0x18] = uVar4;
        unaff_x20[0x1b] = uVar7;
        unaff_x20[0x1a] = uVar6;
        FUN_1073c3460(unaff_x20 + 0x1d,unaff_x19 + 0x1d);
        FUN_1073c354c(unaff_x20 + 0x21,unaff_x19 + 0x21);
        return unaff_x20;
      }
    }
  }
  return puVar2;
}



/* Entry: 1073c41c0; end: 1073c436b;  */

undefined8 * FUN_1073c41c0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *plVar6;
  long unaff_x19;
  ulong *unaff_x20;
  long *unaff_x21;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 *apuStack_188 [15];
  long *plStack_110;
  undefined8 uStack_68;
  
  func_0x0001073c6f94();
  func_0x0001073c69bc();
  uStack_68 = extraout_x8;
  func_0x0001073c6c80();
  uVar1 = extraout_x8_00 == 5;
  puVar3 = (undefined8 *)0x1;
  switch(extraout_x8_00) {
  case 0:
  case 1:
    goto LAB_1073c432c;
  case 2:
    iVar9 = (int)*unaff_x20;
    param_2 = (undefined8 *)unaff_x21[-0x24];
    param_3 = (long *)unaff_x21[-0x15];
    func_0x0001073c6b28();
    if (iVar9 != 0) {
      func_0x0001073c6bdc();
    }
    break;
  case 3:
    param_3 = unaff_x21 + -0x24;
    func_0x0001073c6f88();
    FUN_1073c3fcc();
    break;
  case 4:
    func_0x0001073c6fb4();
    func_0x0001073c40a4();
    break;
  case 5:
    func_0x0001073c6cd4();
    func_0x0001073c4120();
    break;
  default:
    param_3 = (long *)(unaff_x19 + 0x240);
    func_0x0001073c6f88();
    FUN_1073c3fcc();
    lVar8 = 0;
    iVar9 = 0;
    for (plVar6 = (long *)(unaff_x19 + 0x360); uVar1 = plVar6 == unaff_x21, !(bool)uVar1;
        plVar6 = plVar6 + 0x24) {
      iVar2 = (int)*unaff_x20;
      param_2 = (undefined8 *)*plVar6;
      param_3 = (long *)plVar6[0xf];
      func_0x0001073c71d4();
      if (iVar2 != 0) {
        func_0x0001073c6c24(apuStack_188);
        lVar7 = lVar8;
        do {
          param_2 = (undefined8 *)(unaff_x19 + lVar7 + 0x240);
          FUN_1073c33c8(unaff_x19 + lVar7 + 0x360);
          if (lVar7 == -0x240) break;
          uVar4 = *unaff_x20;
          param_2 = apuStack_188[0];
          param_3 = plStack_110;
          FUN_1073c3f74();
          lVar7 = lVar7 + -0x120;
        } while ((uVar4 & 1) != 0);
        func_0x0001073c71cc();
        iVar9 = iVar9 + 1;
        func_0x0001073c6f58();
        if (iVar9 == 8) {
          uVar1 = plVar6 + 0x24 == unaff_x21;
          puVar3 = (undefined8 *)(ulong)(byte)uVar1;
          goto LAB_1073c432c;
        }
      }
      lVar8 = lVar8 + 0x120;
    }
  }
  puVar3 = (undefined8 *)0x1;
LAB_1073c432c:
  func_0x0001073c69a8(uStack_68);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    for (; (puVar5 = param_2, puVar3 != param_2 && (puVar5 = puVar3, (long *)*puVar3 != param_3));
        puVar3 = puVar3 + 1) {
    }
    return puVar5;
  }
  return puVar3;
}



/* Entry: 1073c436c; end: 1073c4393;  */

long * FUN_1073c436c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  
  for (; (plVar1 = param_2, param_1 != param_2 && (plVar1 = param_1, *param_1 != param_3));
      param_1 = param_1 + 1) {
  }
  return plVar1;
}



/* Entry: 1073c4394; end: 1073c43b7;  */

void FUN_1073c4394(long param_1)

{
  func_0x0001073c706c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1073c43b8; end: 1073c447b;  */

void FUN_1073c43b8(long param_1)

{
  long unaff_x19;
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001073c6be4();
  uVar2 = *(ulong *)(param_1 + 8);
  if (uVar2 < *(ulong *)(param_1 + 0x10)) {
    FUN_1073c447c(uVar2);
    lVar1 = uVar2 + 0x18;
    *(long *)(unaff_x19 + 8) = lVar1;
  }
  else {
    FUN_1073c4560();
    func_0x0001073c6b88();
    FUN_1073c460c(auStack_58);
    FUN_1073c447c();
    lStack_48 = lStack_48 + 0x18;
    func_0x0001073c6d6c();
    FUN_1073c45a8();
    lVar1 = *(long *)(unaff_x19 + 8);
    FUN_1073c4678(auStack_58);
  }
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 1073c447c; end: 1073c455f;  */

void FUN_1073c447c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  long lVar3;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001073c6fd4();
  lVar2 = *param_2;
  lVar1 = param_2[1];
  if (lVar1 != lVar2) {
    FUN_1073c3678();
    lVar3 = *(long *)(unaff_x19 + 8);
    lStack_70 = unaff_x19 + 0x10;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar3;
    for (; lStack_48 = lVar3, lVar2 != lVar1; lVar2 = lVar2 + 0x120) {
      func_0x0001073c7234();
      func_0x0001072ab860();
      lVar3 = lStack_48 + 0x120;
    }
    uStack_58 = 1;
    func_0x0001072a7ab4(&lStack_70);
    *(long *)(unaff_x19 + 8) = lVar3;
  }
  func_0x0001073c6f78();
  return;
}



/* Entry: 1073c4560; end: 1073c45a7;  */

ulong FUN_1073c4560(long *param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar2;
  
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    uVar2 = (param_1[2] - *param_1) / 0x18;
    uVar1 = uVar2 * 2;
    if (uVar1 < param_2 || uVar1 - param_2 == 0) {
      uVar1 = param_2;
    }
    if (0x555555555555554 < uVar2) {
      uVar1 = 0xaaaaaaaaaaaaaaa;
    }
    return uVar1;
  }
  FUN_1073c4600();
  func_0x0001073c6af4();
  uVar2 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  uVar1 = uVar2;
  _memcpy(uVar2);
  *(ulong *)(unaff_x19 + 8) = uVar2;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073c6a00();
  return uVar1;
}



/* Entry: 1073c45a8; end: 1073c45ff;  */

void FUN_1073c45a8(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x0001073c6af4();
  lVar1 = *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18;
  _memcpy(lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x0001073c6a00();
  return;
}



/* Entry: 1073c4600; end: 1073c460b;  */

long * FUN_1073c4600(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001073c6b0c();
  func_0x0001073c6be4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        func_0x0001072a7b80();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x18;
  return unaff_x19;
}



/* Entry: 1073c460c; end: 1073c4677;  */

long * FUN_1073c460c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001073c6be4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar1 = param_1[1];
      while (lVar1 != param_1[2]) {
        param_1[2] = param_1[2] + -0x18;
        func_0x0001072a7b80();
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = unaff_x20 * 0x18;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x18;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0x18;
  return unaff_x19;
}



/* Entry: 1073c4678; end: 1073c4727;  */

long * FUN_1073c4678(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x18;
    func_0x0001072a7b80();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1073c4728; end: 1073c4763;  */

long * FUN_1073c4728(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_1073c4764(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 1073c4764; end: 1073c47e7;  */

void FUN_1073c4764(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x0001073c47a0(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x50;
  }
  return;
}



/* Entry: 1073c47e8; end: 1073c4cd7;  */

undefined8 *
FUN_1073c47e8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  undefined8 *puVar11;
  undefined8 *extraout_x8_04;
  undefined8 *extraout_x8_05;
  undefined8 *extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  ulong extraout_x8_09;
  ulong extraout_x9;
  undefined8 *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  undefined8 *extraout_x10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar12;
  undefined8 *unaff_x24;
  undefined8 *puVar13;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 in_stack_00000050;
  undefined8 auStack_3b8 [36];
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  undefined8 auStack_250 [36];
  undefined8 auStack_130 [15];
  ulong uStack_b8;
  undefined8 uStack_10;
  
  func_0x0001073c73cc();
  func_0x0001073c6af4();
  func_0x0001073c69bc();
  uStack_10 = extraout_x8_00;
  do {
    func_0x0001073c7054();
    puVar10 = unaff_x27;
    puVar11 = unaff_x28;
LAB_1073c481c:
    while( true ) {
      func_0x0001073c7328();
      if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x0001073c4a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)unaff_x26 + 0x10de6466e) * 4 + 0x1073c4a54))();
        return param_1;
      }
      unaff_x28 = puVar11;
      unaff_x27 = unaff_x19;
      if ((long)extraout_x8_01 < 0x1b00) {
        in_CY = unaff_x19 <= unaff_x20;
        in_ZR = unaff_x20 == unaff_x19;
        if (((ulong)param_4 & 1) == 0) {
          if (!(bool)in_ZR) {
            while( true ) {
              unaff_x21 = unaff_x20;
              unaff_x20 = unaff_x21 + 0x24;
              in_CY = unaff_x19 <= unaff_x20;
              uVar8 = unaff_x20 == unaff_x19;
              in_ZR = 1;
              if ((bool)uVar8) break;
              func_0x0001073c6bfc(unaff_x21[0x33]);
              if ((bool)in_CY && !(bool)uVar8) {
                func_0x0001073c6a88();
                do {
                  func_0x0001073c6f70(unaff_x21 + 0x24);
                  func_0x0001073c7078();
                } while ((bool)in_CY && !(bool)uVar8);
                param_1 = (undefined8 *)(extraout_x8_08 + 0x120);
                func_0x0001073c6ee8(param_1);
                func_0x0001073c6b40();
              }
            }
          }
          goto LAB_1073c4cbc;
        }
        if ((bool)in_ZR) goto LAB_1073c4cbc;
        lVar12 = 0;
        puVar11 = unaff_x20;
        goto LAB_1073c4aa8;
      }
      if (param_3 == (undefined8 *)0x0) {
        in_CY = unaff_x19 <= unaff_x20;
        in_ZR = 1;
        if (unaff_x20 == unaff_x19) goto LAB_1073c4cbc;
        func_0x0001073c7240();
        goto LAB_1073c4b18;
      }
      unaff_x26 = unaff_x20 + ((ulong)unaff_x26 >> 1) * 0x24;
      uVar4 = 0x8fff < extraout_x8_01;
      uVar8 = extraout_x8_01 == 0x9000;
      if (extraout_x8_01 < 0x9001) {
        param_1 = unaff_x26;
        param_2 = unaff_x20;
        func_0x0001073c719c();
      }
      else {
        func_0x0001073c719c();
        func_0x0001073c7314();
        FUN_1073c4cd8();
        FUN_1073c4cd8(unaff_x20 + 0x48,unaff_x26 + 0x24,uStack_260);
        param_1 = puVar10;
        param_2 = unaff_x26;
        FUN_1073c4cd8(puVar10,unaff_x26,unaff_x26 + 0x24);
        func_0x0001073c71b0();
      }
      param_3 = (undefined8 *)((long)param_3 - 1);
      unaff_x28 = param_1;
      if ((((ulong)param_4 & 1) != 0) ||
         (func_0x0001073c6d60(unaff_x20[-0x15]), unaff_x28 = param_1, (bool)uVar4 && !(bool)uVar8))
      break;
      func_0x0001073c6a88();
      uVar4 = (ulong)unaff_x19[-0x15] <= uStack_b8;
      uVar8 = uStack_b8 == unaff_x19[-0x15];
      puVar13 = unaff_x20;
      if (!(bool)uVar4 || (bool)uVar8) {
        do {
          unaff_x26 = puVar13 + 0x24;
          if (unaff_x19 <= unaff_x26) break;
          puVar1 = puVar13 + 0x33;
          puVar13 = unaff_x26;
        } while (uStack_b8 <= *puVar1);
      }
      else {
        do {
          func_0x0001073c72a4();
        } while (!(bool)uVar4 || (bool)uVar8);
      }
      uVar4 = unaff_x19 <= unaff_x26;
      uVar8 = unaff_x26 == unaff_x19;
      puVar13 = unaff_x19;
      if (!(bool)uVar4) {
        do {
          func_0x0001073c727c();
        } while ((bool)uVar4 && !(bool)uVar8);
      }
      while (unaff_x26 < puVar13) {
        func_0x0001073c7120();
        do {
          func_0x0001073c72b8();
        } while (extraout_x8_03 <= extraout_x9_02);
        do {
          puVar1 = puVar13 + -0x15;
          puVar13 = puVar13 + -0x24;
        } while (*puVar1 < extraout_x8_03);
      }
      in_CY = unaff_x26 + -0x24 <= unaff_x20;
      in_ZR = unaff_x20 == unaff_x26 + -0x24;
      if (!(bool)in_ZR) {
        param_1 = unaff_x20;
        func_0x0001073c6dc8();
      }
      func_0x0001073c7150();
      func_0x0001073c6b40();
      param_4 = (undefined8 *)0x0;
    }
    func_0x0001073c6a88();
    do {
      func_0x0001073c72ec();
    } while ((bool)uVar4 && !(bool)uVar8);
    unaff_x26 = (undefined8 *)((long)unaff_x20 + extraout_x9);
    uVar4 = 0x11f < extraout_x9;
    uVar8 = 0;
    puVar10 = unaff_x19;
    if (extraout_x9 == 0x120) {
      do {
        bVar5 = puVar10 <= unaff_x26;
        bVar9 = unaff_x26 == puVar10;
        puVar11 = puVar10;
        puVar13 = puVar10;
        if (bVar5) break;
        func_0x0001073c72c4();
        puVar10 = extraout_x9_00;
        puVar11 = unaff_x24;
        puVar13 = unaff_x24;
      } while (!bVar5 || bVar9);
    }
    else {
      do {
        func_0x0001073c72d8();
        puVar11 = unaff_x24;
        puVar13 = unaff_x24;
      } while (!(bool)uVar4 || (bool)uVar8);
    }
    while (unaff_x24 = puVar13, unaff_x26 < puVar11) {
      func_0x0001073c712c();
      do {
        func_0x0001073c72b8();
      } while (extraout_x8_02 < extraout_x9_01);
      do {
        puVar1 = puVar11 + -0x15;
        puVar11 = puVar11 + -0x24;
        puVar13 = unaff_x24;
      } while (*puVar1 <= extraout_x8_02);
    }
    unaff_x27 = unaff_x26 + -0x24;
    if (unaff_x20 != unaff_x27) {
      func_0x0001073c6f3c();
      FUN_1073c33c8();
    }
    func_0x0001073c7144();
    func_0x0001073c6b40();
    in_CY = unaff_x24 <= unaff_x26;
    in_ZR = unaff_x26 == unaff_x24;
    param_1 = unaff_x28;
    puVar11 = unaff_x26;
    puVar10 = unaff_x27;
    if (!(bool)in_CY) goto LAB_1073c4968;
    func_0x0001073c6f3c();
    FUN_1073c4e14();
    param_1 = unaff_x26;
    param_2 = unaff_x19;
    FUN_1073c4e14();
    if ((int)param_1 == 0) goto code_r0x0001073c4964;
    unaff_x19 = unaff_x27;
  } while (((ulong)unaff_x28 & 1) == 0);
  goto LAB_1073c4cbc;
LAB_1073c4aa8:
  unaff_x21 = puVar11 + 0x24;
  in_CY = unaff_x19 <= unaff_x21;
  in_ZR = 1;
  if (unaff_x21 == unaff_x19) goto LAB_1073c4cbc;
  uVar4 = (ulong)puVar11[0xf] <= (ulong)puVar11[0x33];
  uVar8 = puVar11[0x33] == puVar11[0xf];
  if ((bool)uVar4 && !(bool)uVar8) {
    func_0x0001073c6b34();
    do {
      param_3 = (undefined8 *)((long)unaff_x20 + lVar12);
      func_0x0001073c6d84(param_3 + 0x24);
      param_1 = unaff_x20;
      if (lVar12 == 0) goto LAB_1073c4af4;
      func_0x0001073c7300();
    } while ((bool)uVar4 && !(bool)uVar8);
    param_1 = (undefined8 *)((long)unaff_x20 + lVar12 + 0x120);
LAB_1073c4af4:
    func_0x0001073c6ee8();
    func_0x0001073c6b40();
  }
  lVar12 = lVar12 + 0x120;
  puVar11 = unaff_x21;
  goto LAB_1073c4aa8;
code_r0x0001073c4964:
  puVar11 = unaff_x28;
  if (((ulong)unaff_x28 & 1) == 0) {
LAB_1073c4968:
    func_0x0001073c6f3c();
    FUN_1073c47e8();
    param_4 = (undefined8 *)0x0;
  }
  goto LAB_1073c481c;
LAB_1073c4b18:
  do {
    uVar4 = param_4 < (undefined8 *)0x121;
    cVar6 = SBORROW8(0x120,(long)param_4);
    cVar7 = 0x120 - (long)param_4 < 0;
    uVar8 = param_4 == (undefined8 *)0x120;
    unaff_x28 = puVar11;
    if ((long)param_4 < 0x121) {
      func_0x0001073c6ec4();
      if (cVar7 != cVar6) {
        uVar4 = (ulong)puVar10[0x33] <= (ulong)puVar10[0xf];
        uVar8 = puVar10[0xf] == puVar10[0x33];
        puVar13 = unaff_x24;
        if (!(bool)uVar4 || (bool)uVar8) {
          puVar13 = (undefined8 *)0x0;
        }
        puVar10 = (undefined8 *)((long)puVar10 + (long)puVar13);
        unaff_x28 = extraout_x8_04;
        if (!(bool)uVar4 || (bool)uVar8) {
          unaff_x28 = puVar11;
        }
      }
      param_3 = (undefined8 *)((long)unaff_x20 + (long)param_4 * (long)unaff_x24);
      func_0x0001073c6eb0(puVar10[0xf]);
      if (!(bool)uVar4 || (bool)uVar8) {
        param_1 = auStack_130;
        func_0x0001073c6c24(param_1);
        do {
          func_0x0001073c6ea0();
          uVar4 = unaff_x28 < (undefined8 *)0x121;
          cVar6 = SBORROW8(0x120,(long)unaff_x28);
          cVar7 = 0x120 - (long)unaff_x28 < 0;
          uVar8 = unaff_x28 == (undefined8 *)0x120;
          if (0x120 < (long)unaff_x28) break;
          func_0x0001073c6e74();
          if (cVar7 != cVar6) {
            uVar4 = (ulong)puVar10[0x33] <= (ulong)puVar10[0xf];
            uVar8 = puVar10[0xf] == puVar10[0x33];
            puVar11 = unaff_x24;
            if (!(bool)uVar4 || (bool)uVar8) {
              puVar11 = (undefined8 *)0x0;
            }
            puVar10 = (undefined8 *)((long)puVar10 + (long)puVar11);
          }
          func_0x0001073c700c();
        } while (!(bool)uVar4 || (bool)uVar8);
        param_2 = auStack_130;
        func_0x0001073c6ebc();
        func_0x0001073c6b40();
      }
    }
    param_4 = (undefined8 *)((long)param_4 - 1);
    puVar11 = unaff_x28;
  } while (-1 < (long)param_4);
  while( true ) {
    in_CY = (undefined8 *)0x1 < unaff_x26;
    cVar6 = SBORROW8((long)unaff_x26,2);
    unaff_x21 = (undefined8 *)((long)unaff_x26 - 2);
    cVar7 = (long)unaff_x21 < 0;
    in_ZR = unaff_x21 == (undefined8 *)0x0;
    unaff_x27 = unaff_x19;
    if ((long)unaff_x26 < 2) break;
    func_0x0001073c6ba8(auStack_250);
    param_3 = (undefined8 *)((ulong)unaff_x21 >> 1);
    do {
      func_0x0001073c6dd0();
      puVar11 = extraout_x8_05;
      if ((cVar7 != cVar6) &&
         (func_0x0001073c6ff4(), puVar11 = extraout_x10, !(bool)in_CY || (bool)in_ZR)) {
        puVar11 = extraout_x8_06;
      }
      func_0x0001073c6f70();
      in_CY = param_3 <= puVar11;
      cVar6 = SBORROW8((long)puVar11,(long)param_3);
      cVar7 = (long)puVar11 - (long)param_3 < 0;
      in_ZR = puVar11 == param_3;
    } while ((long)puVar11 <= (long)param_3);
    unaff_x19 = unaff_x19 + -0x24;
    if (unaff_x21 == unaff_x19) {
      param_2 = auStack_250;
      func_0x0001073c6ebc(unaff_x21);
    }
    else {
      func_0x0001073c6df0();
      FUN_1073c33c8();
      func_0x0001073c70e0();
      uVar2 = (long)unaff_x21 + (0x120 - (long)unaff_x20);
      uVar4 = 0x120 < uVar2;
      uVar8 = uVar2 == 0x121;
      if (0x120 < (long)uVar2) {
        func_0x0001073c6d50(uVar2 / 0x120 - 2);
        func_0x0001073c6bfc();
        if ((bool)uVar4 && !(bool)uVar8) {
          func_0x0001073c6b34();
          do {
            func_0x0001073c6dc8(unaff_x21);
            if (puVar11 == (undefined8 *)0x0) break;
            func_0x0001073c6d50((long)puVar11 + -1);
            unaff_x21 = param_4;
          } while (uStack_b8 < extraout_x8_07);
          param_2 = auStack_130;
          func_0x0001073c7100();
          func_0x0001073c6b40();
          param_3 = param_4;
        }
      }
    }
    param_1 = auStack_250;
    func_0x0001072a6b0c(param_1);
    unaff_x26 = (undefined8 *)((long)unaff_x26 + -1);
  }
LAB_1073c4cbc:
  func_0x0001073c69a8(uStack_10);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_1073c4cd8;
  puStack_290 = param_3;
  puStack_288 = unaff_x21;
  puStack_280 = unaff_x20;
  puStack_278 = unaff_x27;
  puStack_270 = &stack0x00000050;
  func_0x0001073c6c14();
  func_0x0001073c720c();
  if (!(bool)in_CY || (bool)in_ZR) {
    uVar4 = extraout_x8_09 <= extraout_x9_03;
    uVar8 = extraout_x9_03 == extraout_x8_09;
    if ((bool)uVar4 && !(bool)uVar8) {
      func_0x0001073c6ca8();
      func_0x0001073c6bfc(unaff_x27[0xf]);
      if ((bool)uVar4 && !(bool)uVar8) {
        func_0x0001073c6df0();
        unaff_x20 = param_2;
        goto code_r0x0001073c3368;
      }
    }
    return param_1;
  }
  uVar4 = extraout_x8_09 <= extraout_x9_03;
  uVar8 = extraout_x9_03 == extraout_x8_09;
  if (!(bool)uVar4 || (bool)uVar8) {
    FUN_1073c3368(unaff_x21,unaff_x27);
    func_0x0001073c6d78(unaff_x20[0xf]);
    if (!(bool)uVar4 || (bool)uVar8) {
      return unaff_x21;
    }
  }
code_r0x0001073c3368:
  puVar13 = puStack_278;
  puVar11 = puStack_280;
  puStack_290 = unaff_x28;
  puStack_288 = puVar10;
  func_0x0001073c6af4();
  func_0x0001073c69bc();
  puVar10 = auStack_3b8;
  uStack_298 = extraout_x8;
  func_0x0001073c6ba8();
  func_0x0001073c6bf0();
  FUN_1073c33c8();
  func_0x0001073c6d6c();
  FUN_1073c33c8();
  func_0x0001073c6f58();
  func_0x0001073c69a8(uStack_298);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    func_0x0001073c6af4();
    *puVar10 = *unaff_x20;
    func_0x000104c2f1f0(puVar10 + 1,unaff_x20 + 1);
    func_0x000104c2f1f0(puVar11 + 8,puVar13 + 8);
    puVar11[0xf] = puVar13[0xf];
    FUN_10737ef78(puVar11 + 0x10,puVar13 + 0x10);
    FUN_10737ef78(puVar11 + 0x12,puVar13 + 0x12);
    uVar3 = *(undefined4 *)(puVar13 + 0x14);
    *(undefined2 *)((long)puVar11 + 0xa4) = *(undefined2 *)((long)puVar13 + 0xa4);
    *(undefined4 *)(puVar11 + 0x14) = uVar3;
    func_0x000100066230(puVar11 + 0x15,puVar13 + 0x15);
    uVar15 = puVar13[0x19];
    uVar14 = puVar13[0x18];
    uVar17 = puVar13[0x1b];
    uVar16 = puVar13[0x1a];
    *(undefined1 *)(puVar11 + 0x1c) = *(undefined1 *)(puVar13 + 0x1c);
    puVar11[0x19] = uVar15;
    puVar11[0x18] = uVar14;
    puVar11[0x1b] = uVar17;
    puVar11[0x1a] = uVar16;
    FUN_1073c3460(puVar11 + 0x1d,puVar13 + 0x1d);
    FUN_1073c354c(puVar11 + 0x21,puVar13 + 0x21);
    return puVar11;
  }
  return puVar10;
}



/* Entry: 1073c4cd8; end: 1073c4da3;  */

undefined8 * FUN_1073c4cd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_158 [36];
  undefined8 uStack_38;
  
  func_0x0001073c6c14();
  func_0x0001073c720c();
  if ((bool)in_CY && !(bool)in_ZR) {
    uVar2 = extraout_x8_00 <= extraout_x9;
    uVar3 = extraout_x9 == extraout_x8_00;
    param_2 = unaff_x20;
    if (!(bool)uVar2 || (bool)uVar3) {
      FUN_1073c3368();
      func_0x0001073c6d78(unaff_x20[0xf]);
      if (!(bool)uVar2 || (bool)uVar3) {
        return unaff_x21;
      }
    }
LAB_1073c4d3c:
    func_0x0001073c6af4();
    func_0x0001073c69bc();
    puVar4 = auStack_158;
    uStack_38 = extraout_x8;
    func_0x0001073c6ba8();
    func_0x0001073c6bf0();
    FUN_1073c33c8();
    func_0x0001073c6d6c();
    FUN_1073c33c8();
    func_0x0001073c6f58();
    func_0x0001073c69a8(uStack_38);
    if ((bool)uVar3) {
      return puVar4;
    }
    ___stack_chk_fail();
    func_0x0001073c6af4();
    *puVar4 = *param_2;
    func_0x000104c2f1f0(puVar4 + 1,param_2 + 1);
    func_0x000104c2f1f0(unaff_x20 + 8,unaff_x19 + 0x40);
    unaff_x20[0xf] = *(undefined8 *)(unaff_x19 + 0x78);
    FUN_10737ef78(unaff_x20 + 0x10,unaff_x19 + 0x80);
    FUN_10737ef78(unaff_x20 + 0x12,unaff_x19 + 0x90);
    uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
    *(undefined2 *)((long)unaff_x20 + 0xa4) = *(undefined2 *)(unaff_x19 + 0xa4);
    *(undefined4 *)(unaff_x20 + 0x14) = uVar1;
    func_0x000100066230(unaff_x20 + 0x15,unaff_x19 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x19 + 200);
    uVar5 = *(undefined8 *)(unaff_x19 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x19 + 0xd8);
    uVar7 = *(undefined8 *)(unaff_x19 + 0xd0);
    *(undefined1 *)(unaff_x20 + 0x1c) = *(undefined1 *)(unaff_x19 + 0xe0);
    unaff_x20[0x19] = uVar6;
    unaff_x20[0x18] = uVar5;
    unaff_x20[0x1b] = uVar8;
    unaff_x20[0x1a] = uVar7;
    FUN_1073c3460(unaff_x20 + 0x1d,unaff_x19 + 0xe8);
    FUN_1073c354c(unaff_x20 + 0x21,unaff_x19 + 0x108);
    return unaff_x20;
  }
  uVar2 = extraout_x8_00 <= extraout_x9;
  uVar3 = extraout_x9 == extraout_x8_00;
  if ((bool)uVar2 && !(bool)uVar3) {
    func_0x0001073c6ca8();
    func_0x0001073c6bfc(*(undefined8 *)(unaff_x19 + 0x78));
    if ((bool)uVar2 && !(bool)uVar3) {
      func_0x0001073c6df0();
      goto LAB_1073c4d3c;
    }
  }
  return param_1;
}



/* Entry: 1073c4da4; end: 1073c4e13;  */

undefined8 *
FUN_1073c4da4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 auStack_158 [35];
  
  func_0x0001073c6af4();
  func_0x0001073c4d4c();
  func_0x0001073c6eb0(*(undefined8 *)(param_5 + 0x78));
  if ((bool)in_CY && !(bool)in_ZR) {
    func_0x0001073c6b00();
    func_0x0001073c6bfc(*(undefined8 *)(param_4 + 0x78));
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x0001073c6aa4();
      func_0x0001073c6d14();
      if ((bool)in_CY && !(bool)in_ZR) {
        func_0x0001073c6b50();
        func_0x0001073c6d30();
        if ((bool)in_CY && !(bool)in_ZR) {
          func_0x0001073c6bf0();
          func_0x0001073c6af4();
          func_0x0001073c69bc();
          puVar2 = auStack_158;
          func_0x0001073c6ba8();
          func_0x0001073c6bf0();
          FUN_1073c33c8();
          func_0x0001073c6d6c();
          FUN_1073c33c8();
          func_0x0001073c6f58();
          func_0x0001073c69a8(extraout_x8);
          if ((bool)in_ZR) {
            return puVar2;
          }
          ___stack_chk_fail();
          func_0x0001073c6af4();
          *puVar2 = *param_2;
          func_0x000104c2f1f0(puVar2 + 1,param_2 + 1);
          func_0x000104c2f1f0(unaff_x20 + 8,unaff_x19 + 0x40);
          unaff_x20[0xf] = *(undefined8 *)(unaff_x19 + 0x78);
          FUN_10737ef78(unaff_x20 + 0x10,unaff_x19 + 0x80);
          FUN_10737ef78(unaff_x20 + 0x12,unaff_x19 + 0x90);
          uVar1 = *(undefined4 *)(unaff_x19 + 0xa0);
          *(undefined2 *)((long)unaff_x20 + 0xa4) = *(undefined2 *)(unaff_x19 + 0xa4);
          *(undefined4 *)(unaff_x20 + 0x14) = uVar1;
          func_0x000100066230(unaff_x20 + 0x15,unaff_x19 + 0xa8);
          uVar4 = *(undefined8 *)(unaff_x19 + 200);
          uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
          uVar6 = *(undefined8 *)(unaff_x19 + 0xd8);
          uVar5 = *(undefined8 *)(unaff_x19 + 0xd0);
          *(undefined1 *)(unaff_x20 + 0x1c) = *(undefined1 *)(unaff_x19 + 0xe0);
          unaff_x20[0x19] = uVar4;
          unaff_x20[0x18] = uVar3;
          unaff_x20[0x1b] = uVar6;
          unaff_x20[0x1a] = uVar5;
          FUN_1073c3460(unaff_x20 + 0x1d,unaff_x19 + 0xe8);
          FUN_1073c354c(unaff_x20 + 0x21,unaff_x19 + 0x108);
          return unaff_x20;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 1073c4e14; end: 1073c4f57;  */

void FUN_1073c4e14(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_178 [288];
  undefined8 uStack_58;
  
  func_0x0001073c6be4();
  func_0x0001073c69bc();
  uStack_58 = extraout_x8;
  func_0x0001073c6c80();
  bVar1 = 4 < extraout_x8_00;
  uVar3 = extraout_x8_00 == 5;
  uVar4 = 1;
  switch(extraout_x8_00) {
  case 0:
  case 1:
    goto LAB_1073c4f30;
  case 2:
    func_0x0001073c6d78(*(undefined8 *)(unaff_x20 - 0xa8));
    if (!bVar1 || (bool)uVar3) goto LAB_1073c4f30;
    func_0x0001073c71e0();
    break;
  case 3:
    func_0x0001073c6f88(1,param_2,unaff_x20 - 0x120);
    FUN_1073c4cd8();
    break;
  case 4:
    func_0x0001073c6fb4();
    func_0x0001073c4d4c();
    break;
  case 5:
    func_0x0001073c6cd4();
    FUN_1073c4da4();
    break;
  default:
    func_0x0001073c6f88();
    FUN_1073c4cd8();
    uVar5 = 0;
    iVar6 = 0;
    uVar4 = unaff_x19 + 0x360;
    while( true ) {
      bVar2 = unaff_x20 <= uVar4;
      bVar1 = uVar4 == unaff_x20;
      uVar3 = 1;
      if (bVar1) break;
      func_0x0001073c6eb0(*(undefined8 *)(uVar4 + 0x78));
      if (bVar2 && !bVar1) {
        func_0x0001073c6bb0(auStack_178);
        do {
          func_0x0001073c6f60();
          bVar2 = 0xfffffffffffffdbf < uVar5;
          bVar1 = uVar5 == 0xfffffffffffffdc0;
          if (bVar1) break;
          func_0x0001073c7364();
        } while (bVar2 && !bVar1);
        func_0x0001073c71cc();
        iVar6 = iVar6 + 1;
        func_0x0001073c6f58();
        if (iVar6 == 8) {
          uVar3 = uVar4 + 0x120 == unaff_x20;
          uVar4 = (ulong)(byte)uVar3;
          goto LAB_1073c4f30;
        }
      }
      uVar4 = uVar4 + 0x120;
      uVar5 = uVar5 + 0x120;
    }
  }
  uVar4 = 1;
LAB_1073c4f30:
  func_0x0001073c69a8(uStack_58);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(int *)(uVar4 + 0x10) != 2) {
    func_0x00010563ab98();
    FUN_1073c4f90();
    *(undefined1 *)(uVar4 + 0x70) = 1;
    return;
  }
  return;
}



/* Entry: 1073c4f58; end: 1073c4f8f;  */

void FUN_1073c4f58(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 2) {
    return;
  }
  func_0x00010563ab98();
  FUN_1073c4f90();
  *(undefined1 *)(param_1 + 0x70) = 1;
  return;
}



/* Entry: 1073c4f90; end: 1073c4fbb;  */

void FUN_1073c4f90(long param_1)

{
  long unaff_x19;
  
  func_0x0001073c6af4();
  func_0x000104c318bc();
  func_0x000104c318bc(param_1 + 0x38,unaff_x19 + 0x38);
  return;
}



/* Entry: 1073c4fbc; end: 1073c5003;  */

void FUN_1073c4fbc(double *param_1,double *param_2,double *param_3)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_2 == param_3) {
    uVar1 = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    dVar5 = param_2[3];
    for (; param_2 != param_3; param_2 = param_2 + 4) {
      dVar2 = (double)((ulong)dVar2 ^ ((ulong)dVar2 ^ (ulong)*param_2) & -(ulong)(*param_2 < dVar2))
      ;
      dVar3 = (double)((ulong)dVar3 ^
                      ((ulong)dVar3 ^ (ulong)param_2[1]) & -(ulong)(param_2[1] < dVar3));
      dVar4 = (double)((ulong)dVar4 ^
                      ((ulong)dVar4 ^ (ulong)param_2[2]) & -(ulong)(dVar4 < param_2[2]));
      dVar5 = (double)((ulong)dVar5 ^
                      ((ulong)dVar5 ^ (ulong)param_2[3]) & -(ulong)(dVar5 < param_2[3]));
    }
    param_1[1] = dVar3;
    *param_1 = dVar2;
    param_1[3] = dVar5;
    param_1[2] = dVar4;
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Entry: 1073c5004; end: 1073c50af;  */

void FUN_1073c5004(long param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x0001073c6be4();
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 < *(undefined8 **)(param_1 + 0x10)) {
    uVar2 = *unaff_x20;
    uVar4 = unaff_x20[3];
    uVar3 = unaff_x20[2];
    puVar1[1] = unaff_x20[1];
    *puVar1 = uVar2;
    puVar1[3] = uVar4;
    puVar1[2] = uVar3;
    puVar1 = puVar1 + 4;
  }
  else {
    func_0x0001072bc0e8();
    func_0x0001073c6b88();
    func_0x0001072bc030(auStack_58);
    uVar2 = *unaff_x20;
    uVar4 = unaff_x20[3];
    uVar3 = unaff_x20[2];
    puStack_48[1] = unaff_x20[1];
    *puStack_48 = uVar2;
    puStack_48[3] = uVar4;
    puStack_48[2] = uVar3;
    puStack_48 = puStack_48 + 4;
    func_0x0001073c6d6c();
    func_0x0001072bc008();
    puVar1 = *(undefined8 **)(unaff_x19 + 8);
    func_0x0001072bc098(auStack_58);
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  return;
}



/* Entry: 1073c50b0; end: 1073c5147;  */

void FUN_1073c50b0(undefined8 param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  long *unaff_x19;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x0001073c6fd4();
  uStack_38 = 0;
  lVar1 = param_2[1] - *param_2;
  uStack_40 = param_1;
  if (lVar1 != 0) {
    uVar4 = lVar1 >> 5;
    if (uVar4 >> 0x3b != 0) {
      func_0x0001072bbffc();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1073c5138);
      (*pcVar2)();
    }
    plVar3 = unaff_x19 + 2;
    func_0x0001072bc060();
    *unaff_x19 = (long)plVar3;
    unaff_x19[1] = (long)plVar3;
    unaff_x19[2] = (long)(plVar3 + uVar4 * 4);
    _memmove();
    unaff_x19[1] = (long)plVar3 + lVar1;
  }
  uStack_38 = 1;
  FUN_1073c5148(&uStack_40);
  return;
}



/* Entry: 1073c5148; end: 1073c5173;  */

long FUN_1073c5148(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001072bc214(param_1);
  }
  return param_1;
}



/* Entry: 1073c5174; end: 1073c51a7;  */

void FUN_1073c5174(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010729b464(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x1b0;
  return;
}



/* Entry: 1073c51a8; end: 1073c522f;  */

undefined8 FUN_1073c51a8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001073c6be4();
  func_0x00010729bde0();
  func_0x0001073c6b88();
  func_0x00010729cd10(auStack_58);
  func_0x00010729b464(lStack_48);
  lStack_48 = lStack_48 + 0x1b0;
  func_0x0001073c6d6c();
  func_0x00010729ccd4();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010729cdf4(auStack_58);
  return uVar1;
}



/* Entry: 1073c5230; end: 1073c527f;  */

void FUN_1073c5230(void)

{
  func_0x0001073c6b98();
  func_0x0001073c5254();
  return;
}



/* Entry: 1073c5280; end: 1073c5287;  */

void FUN_1073c5280(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x0001073c5ec8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c5288; end: 1073c52bb;  */

void FUN_1073c5288(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001073c6af4();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -200;
    func_0x0001073c5ec8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1073c52bc; end: 1073c5373;  */

void FUN_1073c52bc(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x0001073c6e1c();
  func_0x00010728451c();
  func_0x000104c2fe00(param_1 + 0xf0);
  func_0x000107299490(unaff_x19 + 0x128);
  func_0x00010015bc98(unaff_x19 + 0x138);
  func_0x0001072935a0(unaff_x19 + 0x150);
  uVar2 = unaff_x21[1];
  uVar1 = *unaff_x21;
  uVar4 = unaff_x21[3];
  uVar3 = unaff_x21[2];
  *(undefined8 *)(unaff_x19 + 0x198) = unaff_x21[4];
  *(undefined8 *)(unaff_x19 + 0x180) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x178) = uVar1;
  *(undefined8 *)(unaff_x19 + 400) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x188) = uVar3;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x1a8) = unaff_x20[1];
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar1;
  return;
}



/* Entry: 1073c5374; end: 1073c56e3;  */

long * FUN_1073c5374(float param_1,float param_2,long *param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x9;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long *unaff_x25;
  
  plVar7 = param_3 + 3;
  func_0x00010726364c();
  plVar15 = (long *)param_3[1];
  if (plVar15 != (long *)0x0) {
    uVar14 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar15 <= plVar7) {
        uVar6 = 0;
        if (plVar15 != (long *)0x0) {
          uVar6 = (ulong)plVar7 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar6 * (long)plVar15);
      }
    }
    plVar12 = *(long **)(*param_3 + (long)unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1073c5434;
          plVar5 = (long *)plVar12[1];
          if (plVar5 != plVar7) break;
          plVar5 = plVar12 + 2;
          func_0x000104c32db4(plVar5,param_4);
          if (((ulong)plVar5 & 1) != 0) goto LAB_1073c56c4;
        }
        if (((ulong)plVar15 & uVar14) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar14);
        }
        else if (plVar15 <= plVar5) {
          uVar6 = 0;
          if (plVar15 != (long *)0x0) {
            uVar6 = (ulong)plVar5 / (ulong)plVar15;
          }
          plVar5 = (long *)((long)plVar5 - uVar6 * (long)plVar15);
        }
      } while (plVar5 == unaff_x25);
    }
  }
LAB_1073c5434:
  plVar5 = param_3 + 2;
  plVar12 = (long *)0x60;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = (long)plVar7;
  func_0x000104c2fe00(plVar12 + 2,param_4);
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  func_0x0001073c7350();
  if ((plVar15 != (long *)0x0) && (param_1 <= param_2 * (float)plVar15)) goto LAB_1073c565c;
  bVar2 = (long *)0x2 < plVar15;
  bVar3 = plVar15 == (long *)0x3;
  func_0x0001073c733c((long)plVar15 << 1);
  plVar13 = extraout_x8;
  if (!bVar2 || bVar3) {
    plVar13 = extraout_x9;
  }
  if ((long)plVar13 - 1U == 0) {
    plVar13 = (long *)0x2;
  }
  else if (((ulong)plVar13 & (long)plVar13 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar15 = (long *)param_3[1];
  if (plVar15 < plVar13) {
LAB_1073c54d0:
    if ((ulong)plVar13 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1073c56d8);
      (*pcVar1)();
    }
    lVar4 = (long)plVar13 << 3;
    __Znwm(lVar4);
    FUN_1073c57ac(param_3,lVar4);
    param_3[1] = (long)plVar13;
    lVar4 = *param_3;
    for (plVar15 = (long *)0x0; plVar13 != plVar15; plVar15 = (long *)((long)plVar15 + 1)) {
      *(undefined8 *)(lVar4 + (long)plVar15 * 8) = 0;
    }
    plVar8 = (long *)*plVar5;
    plVar15 = plVar13;
    if (plVar8 != (long *)0x0) {
      plVar9 = (long *)plVar8[1];
      uVar6 = (long)plVar13 - 1;
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar9 / (ulong)plVar13;
      }
      plVar10 = plVar9;
      if (plVar13 <= plVar9) {
        plVar10 = (long *)((long)plVar9 - uVar14 * (long)plVar13);
      }
      if (((ulong)plVar13 & uVar6) == 0) {
        plVar10 = (long *)((ulong)plVar9 & uVar6);
      }
      *(long **)(lVar4 + (long)plVar10 * 8) = plVar5;
      while (plVar9 = plVar8, plVar8 = (long *)*plVar9, plVar8 != (long *)0x0) {
        plVar11 = (long *)plVar8[1];
        if (((ulong)plVar13 & uVar6) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar6);
        }
        else if (plVar13 <= plVar11) {
          uVar14 = 0;
          if (plVar13 != (long *)0x0) {
            uVar14 = (ulong)plVar11 / (ulong)plVar13;
          }
          plVar11 = (long *)((long)plVar11 - uVar14 * (long)plVar13);
        }
        if (plVar11 != plVar10) {
          if (*(long *)(lVar4 + (long)plVar11 * 8) == 0) {
            *(long **)(lVar4 + (long)plVar11 * 8) = plVar9;
            plVar10 = plVar11;
          }
          else {
            *plVar9 = *plVar8;
            *plVar8 = **(undefined8 **)(lVar4 + (long)plVar11 * 8);
            **(long **)(lVar4 + (long)plVar11 * 8) = (long)plVar8;
            plVar8 = plVar9;
          }
        }
      }
    }
  }
  else if (plVar13 < plVar15) {
    plVar8 = (long *)(long)((float)(ulong)param_3[3] / *(float *)(param_3 + 4));
    if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar8) {
      plVar8 = (long *)(1L << (-LZCOUNT((long)plVar8 - 1) & 0x3fU));
    }
    if (plVar13 <= plVar8) {
      plVar13 = plVar8;
    }
    if (plVar13 < plVar15) {
      if (plVar13 != (long *)0x0) goto LAB_1073c54d0;
      FUN_1073c57ac(param_3,0);
      param_3[1] = 0;
      plVar15 = (long *)0x0;
    }
    else {
      plVar15 = (long *)param_3[1];
    }
  }
  if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar7);
  }
  else {
    unaff_x25 = plVar7;
    if (plVar15 <= plVar7) {
      uVar14 = 0;
      if (plVar15 != (long *)0x0) {
        uVar14 = (ulong)plVar7 / (ulong)plVar15;
      }
      unaff_x25 = (long *)((long)plVar7 - uVar14 * (long)plVar15);
    }
  }
LAB_1073c565c:
  lVar4 = *param_3;
  plVar7 = *(long **)(lVar4 + (long)unaff_x25 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar12 = *plVar5;
    *plVar5 = (long)plVar12;
    *(long **)(lVar4 + (long)unaff_x25 * 8) = plVar5;
    if (*plVar12 != 0) {
      plVar7 = *(long **)(*plVar12 + 8);
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar7) {
        uVar14 = 0;
        if (plVar15 != (long *)0x0) {
          uVar14 = (ulong)plVar7 / (ulong)plVar15;
        }
        plVar7 = (long *)((long)plVar7 - uVar14 * (long)plVar15);
      }
      *(long **)(lVar4 + (long)plVar7 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
  }
  func_0x0001073c703c();
  FUN_1073c57c4();
LAB_1073c56c4:
  return plVar12 + 9;
}



/* Entry: 1073c56e4; end: 1073c57ab;  */

long FUN_1073c56e4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x00010726364c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x000104c32db4(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1073c57ac; end: 1073c57c3;  */

void FUN_1073c57ac(long *param_1,long param_2)

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



/* Entry: 1073c57c4; end: 1073c5827;  */

long * FUN_1073c57c4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001073c5808(lVar1 + 0x10);
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1073c5828; end: 1073c58c7;  */

void FUN_1073c5828(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001073c6f94();
  lVar1 = *(long *)(param_1 + 8);
  lStack_70 = param_1 + 0x10;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_58 = 0;
  lStack_50 = lVar1;
  for (; lStack_48 = lVar1, unaff_x21 != unaff_x20; unaff_x21 = unaff_x21 + 0x1b0) {
    func_0x00010729b464(lVar1,unaff_x21);
    lVar1 = lStack_48 + 0x1b0;
  }
  func_0x0001073c7390();
  func_0x00010729bec4(&lStack_70);
  *(long *)(unaff_x19 + 8) = lVar1;
  return;
}



/* Entry: 1073c58c8; end: 1073c5917;  */

long FUN_1073c58c8(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 0x1b0) {
    func_0x00010729bf90(lVar1,param_1);
    lVar1 = lVar1 + 0x1b0;
    param_3 = param_3 + 0x1b0;
  }
  return param_3;
}



/* Entry: 1073c5918; end: 1073c59df;  */

long FUN_1073c5918(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    func_0x000100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        func_0x0001000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1073c59e0; end: 1073c5a33;  */

long * FUN_1073c59e0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x0001073c5808(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}


