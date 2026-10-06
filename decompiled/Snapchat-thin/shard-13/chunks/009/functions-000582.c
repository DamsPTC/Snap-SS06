/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ae40118; end: 10ae4027b;  */

/* WARNING: Possible PIC construction at 0x00010ae40234: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae40238) */
/* WARNING: Removing unreachable block (ram,0x00010ae40278) */
/* WARNING: Removing unreachable block (ram,0x00010ae40268) */

void FUN_10ae40118(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  undefined1 auStack_e0 [120];
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *param_3 & 0xffffffffffffff;
  uStack_40 = *(ulong *)((long)param_3 + 7) & 0xffffffffffffff;
  uStack_38 = *(ulong *)((long)param_3 + 0xe) & 0xffffffffffffff;
  uStack_30 = *(ulong *)((long)param_3 + 0x14) >> 8;
  uStack_68 = *param_4 & 0xffffffffffffff;
  uStack_60 = *(ulong *)((long)param_4 + 7) & 0xffffffffffffff;
  uStack_58 = *(ulong *)((long)param_4 + 0xe) & 0xffffffffffffff;
  uStack_50 = *(ulong *)((long)param_4 + 0x14) >> 8;
  func_0x00010ae40444(auStack_e0,&uStack_48);
  func_0x00010ae40318(&uStack_48,auStack_e0);
  func_0x00010ae4053c(param_2,&uStack_48);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 10ae4027c; end: 10ae405ef;  */

void FUN_10ae4027c(long *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  uVar24 = *param_2;
  uVar2 = param_2[1];
  uVar25 = uVar2 * 2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  uVar26 = uVar1 * 2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar24;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar24;
  *param_1 = uVar24 * uVar24;
  param_1[1] = SUB168(auVar4 * auVar14,8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar25;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar24;
  param_1[2] = uVar25 * uVar24;
  param_1[3] = SUB168(auVar5 * auVar15,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar26;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar24;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  param_1[4] = uVar26 * uVar24 + uVar2 * uVar2;
  param_1[5] = SUB168(auVar6 * auVar16,8) + SUB168(auVar7 * auVar17,8) +
               (ulong)CARRY8(uVar26 * uVar24,uVar2 * uVar2);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar3;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar24 * 2;
  uVar24 = uVar3 * uVar24 * 2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar26;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar2;
  param_1[6] = uVar24 + uVar26 * uVar2;
  param_1[7] = SUB168(auVar8 * auVar18,8) + SUB168(auVar9 * auVar19,8) +
               (ulong)CARRY8(uVar24,uVar26 * uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar25;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  param_1[8] = uVar3 * uVar25 + uVar1 * uVar1;
  param_1[9] = SUB168(auVar10 * auVar20,8) + SUB168(auVar11 * auVar21,8) +
               (ulong)CARRY8(uVar3 * uVar25,uVar1 * uVar1);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar26;
  param_1[10] = uVar3 * uVar26;
  param_1[0xb] = SUB168(auVar12 * auVar22,8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar3;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar3;
  param_1[0xc] = uVar3 * uVar3;
  param_1[0xd] = SUB168(auVar13 * auVar23,8);
  return;
}



/* Entry: 10ae405f0; end: 10ae40c93;  */

ulong * FUN_10ae405f0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                     ulong *param_6,int param_7,long param_8,long param_9,ulong *param_10)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  code *pcVar18;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong *puStack_230;
  ulong *puStack_228;
  ulong *puStack_220;
  ulong *puStack_218;
  ulong uStack_210;
  long lStack_208;
  ulong uStack_200;
  long lStack_1f8;
  ulong uStack_1f0;
  long lStack_1e8;
  ulong uStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1c8;
  ulong uStack_1c0;
  long lStack_1b8;
  ulong uStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long lStack_188;
  ulong uStack_180;
  long lStack_178;
  ulong auStack_170 [13];
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_7 == 0) {
    FUN_10ae4027c(&uStack_1e0,param_10);
    func_0x00010ae40318(&uStack_b0,&uStack_1e0);
    func_0x00010ae40444(&uStack_1e0,&uStack_b0,param_10);
    func_0x00010ae40318(&uStack_f0,&uStack_1e0);
    func_0x00010ae40444(&uStack_250,&uStack_f0,param_5);
    func_0x00010ae40318(&uStack_f0,&uStack_250);
    func_0x00010ae40444(&uStack_250,&uStack_b0,param_4);
    func_0x00010ae40318(&uStack_b0,&uStack_250);
  }
  else {
    uStack_f0 = *param_5;
    uStack_e8 = param_5[1];
    uStack_e0 = param_5[2];
    uStack_d8 = param_5[3];
    uStack_b0 = *param_4;
    uStack_a8 = param_4[1];
    uStack_a0 = param_4[2];
    uStack_98 = param_4[3];
  }
  uVar13 = uStack_d8;
  uVar9 = uStack_e0;
  uVar16 = uStack_e8;
  uVar7 = uStack_f0;
  uVar8 = uStack_b0;
  uVar14 = uStack_a8;
  uVar15 = uStack_a0;
  uVar11 = uStack_98;
  FUN_10ae4027c(&uStack_1e0,param_6);
  func_0x00010ae40318(&uStack_90,&uStack_1e0);
  func_0x00010ae40444(&uStack_1e0,&uStack_90,param_6);
  func_0x00010ae40318(&uStack_d0,&uStack_1e0);
  func_0x00010ae40444(&uStack_1e0,&uStack_d0,param_9);
  bVar1 = uStack_1e0 < uVar7;
  uVar7 = uStack_1e0 - uVar7;
  uStack_1e0 = uVar7 + 0x100;
  lStack_1d8 = (lStack_1d8 - (ulong)bVar1) + 1 + (ulong)(0xfffffffffffffeff < uVar7);
  uVar7 = uStack_1d0 - uVar16;
  lStack_1c8 = lStack_1c8 - (ulong)(uStack_1d0 < uVar16);
  uStack_1d0 = uVar7 + 0xfffeffffffffff00;
  if (0x10000000000ff < uVar7) {
    lStack_1c8 = lStack_1c8 + 1;
  }
  uVar7 = uStack_1c0 - uVar9;
  lStack_1b8 = lStack_1b8 - (ulong)(uStack_1c0 < uVar9);
  uStack_1c0 = uVar7 - 0x100;
  if (0xff < uVar7) {
    lStack_1b8 = lStack_1b8 + 1;
  }
  uVar7 = uStack_1b0 - uVar13;
  lStack_1a8 = lStack_1a8 - (ulong)(uStack_1b0 < uVar13);
  uStack_1b0 = uVar7 - 0x100;
  if (0xff < uVar7) {
    lStack_1a8 = lStack_1a8 + 1;
  }
  func_0x00010ae40318(&uStack_d0,&uStack_1e0);
  func_0x00010ae40444(&uStack_1e0,&uStack_90,param_8);
  bVar1 = uStack_1e0 < uVar8;
  uVar8 = uStack_1e0 - uVar8;
  uStack_1e0 = uVar8 + 0x100;
  lStack_1d8 = (lStack_1d8 - (ulong)bVar1) + 1 + (ulong)(0xfffffffffffffeff < uVar8);
  uVar7 = uStack_1d0 - uVar14;
  lStack_1c8 = lStack_1c8 - (ulong)(uStack_1d0 < uVar14);
  uStack_1d0 = uVar7 + 0xfffeffffffffff00;
  if (0x10000000000ff < uVar7) {
    lStack_1c8 = lStack_1c8 + 1;
  }
  uVar7 = uStack_1c0 - uVar15;
  lStack_1b8 = lStack_1b8 - (ulong)(uStack_1c0 < uVar15);
  uStack_1c0 = uVar7 - 0x100;
  if (0xff < uVar7) {
    lStack_1b8 = lStack_1b8 + 1;
  }
  uVar7 = uStack_1b0 - uVar11;
  lStack_1a8 = lStack_1a8 - (ulong)(uStack_1b0 < uVar11);
  uStack_1b0 = uVar7 - 0x100;
  if (0xff < uVar7) {
    lStack_1a8 = lStack_1a8 + 1;
  }
  func_0x00010ae40318(&uStack_90,&uStack_1e0);
  uVar2 = (uint)&uStack_90;
  FUN_10ae40c94();
  uVar3 = (uint)&uStack_d0;
  FUN_10ae40c94();
  puVar4 = param_6;
  FUN_10ae40c94();
  puVar5 = param_10;
  FUN_10ae40c94();
  if (((ulong)(uVar3 & uVar2 & ((uint)puVar4 ^ 0xffffffff)) & ((ulong)puVar5 ^ 1)) == 0) {
    if (param_7 == 0) {
      func_0x00010ae40444(&uStack_1e0,param_6,param_10);
      func_0x00010ae40318(auStack_170 + 0xc,&uStack_1e0);
    }
    else {
      auStack_170[0xc] = *param_6;
      uStack_108 = param_6[1];
      uStack_100 = param_6[2];
      uStack_f8 = param_6[3];
    }
    func_0x00010ae40444(&uStack_1e0,&uStack_90,auStack_170 + 0xc);
    func_0x00010ae40318(auStack_170,&uStack_1e0);
    uStack_108 = uStack_88;
    auStack_170[0xc] = uStack_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    FUN_10ae4027c(&uStack_1e0,&uStack_90);
    func_0x00010ae40318(&uStack_90,&uStack_1e0);
    func_0x00010ae40444(&uStack_1e0,&uStack_90,auStack_170 + 0xc);
    func_0x00010ae40318(auStack_170 + 0xc,&uStack_1e0);
    func_0x00010ae40444(&uStack_1e0,&uStack_b0,&uStack_90);
    func_0x00010ae40318(&uStack_b0,&uStack_1e0);
    func_0x00010ae40444(&uStack_1e0,&uStack_f0,auStack_170 + 0xc);
    FUN_10ae4027c(&uStack_250,&uStack_d0);
    uVar7 = auStack_170[0xc] + uStack_b0 * 2;
    bVar1 = uStack_250 < uVar7;
    uVar7 = uStack_250 - uVar7;
    uStack_250 = uVar7 + 0x200;
    lStack_248 = (lStack_248 - ((ulong)CARRY8(auStack_170[0xc],uStack_b0 * 2) + (ulong)bVar1)) + 2 +
                 (ulong)(0xfffffffffffffdff < uVar7);
    uVar7 = uStack_108 + uStack_a8 * 2;
    bVar1 = uStack_240 < uVar7;
    uVar7 = uStack_240 - uVar7;
    uStack_240 = uVar7 + 0xfffdfffffffffe00;
    lStack_238 = (lStack_238 - ((ulong)CARRY8(uStack_108,uStack_a8 * 2) + (ulong)bVar1)) + 1 +
                 (ulong)(0x20000000001ff < uVar7);
    uVar7 = uStack_100 + uStack_a0 * 2;
    bVar1 = puStack_230 < uVar7;
    uVar7 = (long)puStack_230 - uVar7;
    puStack_230 = (ulong *)(uVar7 - 0x200);
    puStack_228 = (ulong *)(((long)puStack_228 -
                            ((ulong)CARRY8(uStack_100,uStack_a0 * 2) + (ulong)bVar1)) + 1 +
                           (ulong)(0x1ff < uVar7));
    uVar7 = uStack_f8 + uStack_98 * 2;
    bVar1 = puStack_220 < uVar7;
    uVar7 = (long)puStack_220 - uVar7;
    puStack_220 = (ulong *)(uVar7 - 0x200);
    puStack_218 = (ulong *)(((long)puStack_218 -
                            ((ulong)CARRY8(uStack_f8,uStack_98 * 2) + (ulong)bVar1)) + 1 +
                           (ulong)(0x1ff < uVar7));
    func_0x00010ae40318(auStack_170 + 8,&uStack_250);
    uStack_b0 = (uStack_b0 - auStack_170[8]) + 0x400000000000004;
    uStack_a8 = (uStack_a8 - auStack_170[9]) + 0x3fffbfffffffffc;
    uStack_a0 = (uStack_a0 - auStack_170[10]) + 0x3fffffffffffffc;
    uStack_98 = (uStack_98 - auStack_170[0xb]) + 0x3fffffffffffffc;
    func_0x00010ae40444(&uStack_250,&uStack_d0,&uStack_b0);
    bVar1 = uStack_250 < uStack_1e0;
    uStack_250 = uStack_250 - uStack_1e0;
    lStack_248 = (lStack_248 - (lStack_1d8 + (ulong)bVar1)) + 0x100000000000000;
    bVar1 = uStack_240 < uStack_1d0;
    uStack_240 = uStack_240 - uStack_1d0;
    lStack_238 = (lStack_238 - (lStack_1c8 + (ulong)bVar1)) + 0xffffffffffffff;
    bVar1 = puStack_230 < uStack_1c0;
    puStack_230 = (ulong *)((long)puStack_230 - uStack_1c0);
    puStack_228 = (ulong *)(((long)puStack_228 - (lStack_1b8 + (ulong)bVar1)) + 0xffffffffffffff);
    bVar1 = puStack_220 < uStack_1b0;
    puStack_220 = (ulong *)((long)puStack_220 - uStack_1b0);
    puStack_218 = (ulong *)(((long)puStack_218 - (lStack_1a8 + (ulong)bVar1)) + 0x100000000000000);
    bVar1 = uStack_210 < uStack_1a0;
    uStack_210 = uStack_210 - uStack_1a0;
    lStack_208 = (lStack_208 - (lStack_198 + (ulong)bVar1)) + 0xfffeffffffffff;
    bVar1 = uStack_200 < uStack_190;
    uStack_200 = uStack_200 - uStack_190;
    lStack_1f8 = (lStack_1f8 - (lStack_188 + (ulong)bVar1)) + 0xffffffffffffff;
    bVar1 = uStack_1f0 < uStack_180;
    uStack_1f0 = uStack_1f0 - uStack_180;
    lStack_1e8 = (lStack_1e8 - (lStack_178 + (ulong)bVar1)) + 0xffffffffffffff;
    puVar6 = auStack_170 + 4;
    func_0x00010ae40318(puVar6,&uStack_250);
    lVar10 = 0;
    uVar7 = -(long)puVar4;
    do {
      uVar8 = *(ulong *)(param_8 + lVar10);
      uVar16 = ((ulong *)(param_8 + lVar10))[1];
      *(ulong *)((long)auStack_170 + lVar10 + 0x48) =
           uVar16 ^ (uVar16 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x48)) & ~uVar7;
      *(ulong *)((long)auStack_170 + lVar10 + 0x40) =
           uVar8 ^ (uVar8 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x40)) & ~uVar7;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x20);
    lVar10 = 0;
    uVar8 = -(long)puVar5;
    do {
      uVar16 = *(ulong *)((long)param_4 + lVar10);
      uVar9 = ((ulong *)((long)param_4 + lVar10))[1];
      *(ulong *)((long)auStack_170 + lVar10 + 0x48) =
           uVar9 ^ (uVar9 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x48)) & ~uVar8;
      *(ulong *)((long)auStack_170 + lVar10 + 0x40) =
           uVar16 ^ (uVar16 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x40)) & ~uVar8;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x20);
    lVar10 = 0;
    do {
      uVar16 = *(ulong *)(param_9 + lVar10);
      uVar9 = ((ulong *)(param_9 + lVar10))[1];
      *(ulong *)((long)auStack_170 + lVar10 + 0x28) =
           uVar9 ^ (uVar9 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x28)) & ~uVar7;
      *(ulong *)((long)auStack_170 + lVar10 + 0x20) =
           uVar16 ^ (uVar16 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x20)) & ~uVar7;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x20);
    lVar10 = 0;
    do {
      uVar16 = *(ulong *)((long)param_5 + lVar10);
      uVar9 = ((ulong *)((long)param_5 + lVar10))[1];
      *(ulong *)((long)auStack_170 + lVar10 + 0x28) =
           uVar9 ^ (uVar9 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x28)) & ~uVar8;
      *(ulong *)((long)auStack_170 + lVar10 + 0x20) =
           uVar16 ^ (uVar16 ^ *(ulong *)((long)auStack_170 + lVar10 + 0x20)) & ~uVar8;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x20);
    lVar10 = 0;
    do {
      uVar16 = *(ulong *)((long)param_10 + lVar10);
      uVar9 = ((ulong *)((long)param_10 + lVar10))[1];
      *(ulong *)((long)auStack_170 + lVar10 + 8) =
           uVar9 ^ (uVar9 ^ *(ulong *)((long)auStack_170 + lVar10 + 8)) & ~uVar7;
      *(ulong *)((long)auStack_170 + lVar10) =
           uVar16 ^ (uVar16 ^ *(ulong *)((long)auStack_170 + lVar10)) & ~uVar7;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x20);
    lVar10 = 0;
    do {
      uVar7 = *(ulong *)((long)param_6 + lVar10);
      uVar16 = ((ulong *)((long)param_6 + lVar10))[1];
      *(ulong *)((long)auStack_170 + lVar10 + 8) =
           uVar16 ^ (uVar16 ^ *(ulong *)((long)auStack_170 + lVar10 + 8)) & ~uVar8;
      *(ulong *)((long)auStack_170 + lVar10) =
           uVar7 ^ (uVar7 ^ *(ulong *)((long)auStack_170 + lVar10)) & ~uVar8;
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != 0x20);
    param_1[1] = auStack_170[9];
    *param_1 = auStack_170[8];
    param_1[3] = auStack_170[0xb];
    param_1[2] = auStack_170[10];
    param_2[1] = auStack_170[5];
    *param_2 = auStack_170[4];
    param_2[3] = auStack_170[7];
    param_2[2] = auStack_170[6];
    param_3[1] = auStack_170[1];
    *param_3 = auStack_170[0];
    param_3[3] = auStack_170[3];
    param_3[2] = auStack_170[2];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return puVar6;
    }
  }
  else {
    puVar6 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      puVar17 = &stack0xfffffffffffffff0;
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar7 = *param_4;
      uVar16 = param_4[1];
      uVar8 = param_4[2];
      uVar9 = param_4[3];
      puStack_230 = param_1;
      puStack_228 = param_6;
      puStack_220 = param_3;
      puStack_218 = param_2;
      FUN_10ae4027c(&uStack_e0,param_6);
      func_0x00010ae40318(auStack_170,&uStack_e0);
      FUN_10ae4027c(&uStack_e0,param_5);
      func_0x00010ae40318(&uStack_190,&uStack_e0);
      func_0x00010ae40444(&uStack_e0,param_4,&uStack_190);
      func_0x00010ae40318(&uStack_1b0,&uStack_e0);
      uStack_1f0 = (uVar7 - auStack_170[0]) + 0x400000000000004;
      lStack_1e8 = (uVar16 - auStack_170[1]) + 0x3fffbfffffffffc;
      uStack_1e0 = (uVar8 - auStack_170[2]) + 0x3fffffffffffffc;
      lStack_1d8 = (uVar9 - auStack_170[3]) + 0x3fffffffffffffc;
      uStack_210 = (auStack_170[0] + uVar7) * 3;
      lStack_208 = (auStack_170[1] + uVar16) * 3;
      uStack_200 = (auStack_170[2] + uVar8) * 3;
      lStack_1f8 = (auStack_170[3] + uVar9) * 3;
      func_0x00010ae40444(&uStack_e0,&uStack_1f0,&uStack_210);
      func_0x00010ae40318(&uStack_1d0,&uStack_e0);
      FUN_10ae4027c(&uStack_e0,&uStack_1d0);
      puVar4 = puStack_230;
      lStack_248 = lStack_198;
      uStack_250 = uStack_1a0;
      lStack_238 = lStack_1a8;
      uStack_240 = uStack_1b0;
      bVar1 = uStack_e0 < uStack_1b0 * 8;
      uVar7 = uStack_e0 + uStack_1b0 * -8;
      uStack_e0 = uVar7 + 0x100;
      uStack_d8 = (uStack_d8 - bVar1) + 1 + (ulong)(0xfffffffffffffeff < uVar7);
      uVar7 = uStack_d0 + lStack_1a8 * -8;
      lStack_c8 = lStack_c8 - (ulong)(uStack_d0 < (ulong)(lStack_1a8 * 8));
      uStack_d0 = uVar7 + 0xfffeffffffffff00;
      if (0x10000000000ff < uVar7) {
        lStack_c8 = lStack_c8 + 1;
      }
      uVar7 = uStack_c0 + uStack_1a0 * -8;
      lStack_b8 = lStack_b8 - (ulong)(uStack_c0 < uStack_1a0 * 8);
      uStack_c0 = uVar7 - 0x100;
      if (0xff < uVar7) {
        lStack_b8 = lStack_b8 + 1;
      }
      uVar7 = uStack_b0 + lStack_198 * -8;
      uStack_a8 = uStack_a8 - (uStack_b0 < (ulong)(lStack_198 * 8));
      uStack_b0 = uVar7 - 0x100;
      if (0xff < uVar7) {
        uStack_a8 = uStack_a8 + 1;
      }
      func_0x00010ae40318(puStack_230,&uStack_e0);
      uStack_1f0 = *puStack_228 + *param_5;
      lStack_1e8 = puStack_228[1] + param_5[1];
      uStack_1e0 = puStack_228[2] + param_5[2];
      lStack_1d8 = puStack_228[3] + param_5[3];
      uVar7 = lStack_178 + auStack_170[3];
      FUN_10ae4027c(&uStack_e0,&uStack_1f0);
      bVar1 = uStack_e0 < uStack_190 + auStack_170[0];
      uVar8 = uStack_e0 - (uStack_190 + auStack_170[0]);
      uStack_e0 = uVar8 + 0x100;
      uStack_d8 = (uStack_d8 - bVar1) + 1 + (ulong)(0xfffffffffffffeff < uVar8);
      uVar8 = uStack_d0 - (lStack_188 + auStack_170[1]);
      lStack_c8 = lStack_c8 - (ulong)(uStack_d0 < lStack_188 + auStack_170[1]);
      uStack_d0 = uVar8 + 0xfffeffffffffff00;
      if (0x10000000000ff < uVar8) {
        lStack_c8 = lStack_c8 + 1;
      }
      uVar8 = uStack_c0 - (uStack_180 + auStack_170[2]);
      lStack_b8 = lStack_b8 - (ulong)(uStack_c0 < uStack_180 + auStack_170[2]);
      uStack_c0 = uVar8 - 0x100;
      if (0xff < uVar8) {
        lStack_b8 = lStack_b8 + 1;
      }
      uVar8 = uStack_b0 - uVar7;
      uStack_a8 = uStack_a8 - (uStack_b0 < uVar7);
      uStack_b0 = uVar8 - 0x100;
      if (0xff < uVar8) {
        uStack_a8 = uStack_a8 + 1;
      }
      func_0x00010ae40318(puStack_220,&uStack_e0);
      uStack_1b0 = (uStack_240 * 4 - *puVar4) + 0x400000000000004;
      lStack_1a8 = (lStack_238 * 4 - puVar4[1]) + 0x3fffbfffffffffc;
      uStack_1a0 = (uStack_250 * 4 - puVar4[2]) + 0x3fffffffffffffc;
      lStack_198 = (lStack_248 * 4 - puVar4[3]) + 0x3fffffffffffffc;
      func_0x00010ae40444(&uStack_e0,&uStack_1d0,&uStack_1b0);
      FUN_10ae4027c(auStack_170 + 4,&uStack_190);
      uVar15 = uStack_80;
      uVar14 = uStack_88;
      uVar13 = uStack_90;
      uVar9 = uStack_a0;
      uVar16 = uStack_a8;
      uVar8 = uStack_b0;
      bVar1 = uStack_e0 < auStack_170[4] * 8;
      uStack_e0 = uStack_e0 + auStack_170[4] * -8;
      uStack_d8 = (uStack_d8 - ((auStack_170[4] >> 0x3d | auStack_170[5] << 3) + (ulong)bVar1)) +
                  0x100000000000000;
      bVar1 = uStack_d0 < auStack_170[6] * 8;
      uStack_d0 = uStack_d0 + auStack_170[6] * -8;
      lStack_c8 = (lStack_c8 - ((auStack_170[6] >> 0x3d | auStack_170[7] << 3) + (ulong)bVar1)) +
                  0xffffffffffffff;
      bVar1 = uStack_c0 < auStack_170[8] * 8;
      uStack_c0 = uStack_c0 + auStack_170[8] * -8;
      lStack_b8 = (lStack_b8 - ((auStack_170[8] >> 0x3d | auStack_170[9] << 3) + (ulong)bVar1)) +
                  0xffffffffffffff;
      bVar1 = uStack_b0 < auStack_170[10] * 8;
      uStack_b0 = uStack_b0 + auStack_170[10] * -8;
      uStack_a8 = (uStack_a8 - ((auStack_170[10] >> 0x3d | auStack_170[0xb] << 3) + (ulong)bVar1)) +
                  0x100000000000000;
      bVar1 = uStack_a0 < auStack_170[0xc] * 8;
      uStack_a0 = uStack_a0 + auStack_170[0xc] * -8;
      uStack_98 = (uStack_98 - ((auStack_170[0xc] >> 0x3d | uStack_108 << 3) + (ulong)bVar1)) +
                  0xfffeffffffffff;
      bVar1 = uStack_90 < uStack_100 * 8;
      uStack_90 = uStack_90 + uStack_100 * -8;
      uStack_88 = (uStack_88 - ((uStack_100 >> 0x3d | uStack_f8 << 3) + (ulong)bVar1)) +
                  0xffffffffffffff;
      bVar1 = uStack_80 < uStack_f0 * 8;
      uStack_80 = uStack_80 + uStack_f0 * -8;
      uStack_78 = (uStack_78 - ((uStack_f0 >> 0x3d | uStack_e8 << 3) + (ulong)bVar1)) +
                  0xffffffffffffff;
      puVar5 = &uStack_e0;
      puVar4 = puStack_218;
      func_0x00010ae40318();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return puVar4;
      }
      ___stack_chk_fail();
      pcVar18 = FUN_10ae410cc;
      lVar10 = 0;
      puVar4[9] = 0;
      puVar4[8] = 0;
      puVar4[0xb] = 0;
      puVar4[10] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[0xc] = *puVar5 & 0xffffffffffffff;
      puVar4[0xd] = *(ulong *)((long)puVar5 + 7) & 0xffffffffffffff;
      puVar4[0xe] = *(ulong *)((long)puVar5 + 0xe) & 0xffffffffffffff;
      puVar4[0xf] = *(ulong *)((long)puVar5 + 0x14) >> 8;
      puVar4[0x10] = puVar5[9] & 0xffffffffffffff;
      puVar4[0x11] = *(ulong *)((long)puVar5 + 0x4f) & 0xffffffffffffff;
      puVar4[0x12] = *(ulong *)((long)puVar5 + 0x56) & 0xffffffffffffff;
      puVar4[0x13] = *(ulong *)((long)puVar5 + 0x5c) >> 8;
      puVar4[0x14] = puVar5[0x12] & 0xffffffffffffff;
      puVar4[0x15] = *(ulong *)((long)puVar5 + 0x97) & 0xffffffffffffff;
      puVar4[0x16] = *(ulong *)((long)puVar5 + 0x9e) & 0xffffffffffffff;
      puVar4[0x17] = *(ulong *)((long)puVar5 + 0xa4) >> 8;
      uVar11 = 2;
      bVar1 = false;
      uVar12 = auStack_170[1];
      do {
        if (bVar1) {
          puVar5 = (ulong *)((long)puVar4 + lVar10 + 0xc0);
          FUN_10ae405f0(puVar5,(long)puVar4 + lVar10 + 0xe0,(long)puVar4 + lVar10 + 0x100,
                        puVar4 + 0xc,puVar4 + 0x10,puVar4 + 0x14,0,(long)puVar4 + lVar10 + 0x60,
                        (long)puVar4 + lVar10 + 0x80,(long)puVar4 + lVar10 + 0xa0,uVar12,uVar7,
                        uVar13,uVar14,uVar9,uVar8,uVar16,uVar15,puVar17,pcVar18);
        }
        else {
          puVar6 = puVar4 + (uVar11 >> 1) * 0xc;
          puVar5 = (ulong *)((long)puVar4 + lVar10 + 0xc0);
          FUN_10ae40cf8(puVar5,(long)puVar4 + lVar10 + 0xe0,(long)puVar4 + lVar10 + 0x100,puVar6,
                        puVar6 + 4,puVar6 + 8);
        }
        uVar11 = uVar11 + 1;
        bVar1 = (bool)(bVar1 ^ 1);
        lVar10 = lVar10 + 0x60;
      } while (lVar10 != 0x5a0);
      return puVar5;
    }
  }
  ___stack_chk_fail();
  uVar7 = *puVar6;
  uVar8 = puVar6[1];
  uVar16 = puVar6[3];
  uVar9 = puVar6[2] ^ 0xffffffffffffff;
  return (ulong *)(((uVar8 ^ 0xffff0000000000 | uVar7 ^ 1 | uVar16 ^ 0xffffffffffffff | uVar9) - 1 |
                    (uVar8 | uVar7 | puVar6[2] | uVar16) - 1 |
                   (uVar8 ^ 0xfffe0000000000 | uVar7 ^ 2 | uVar16 ^ 0x1ffffffffffffff | uVar9) - 1)
                  >> 0x3f);
}



/* Entry: 10ae40c94; end: 10ae40cf7;  */

ulong FUN_10ae40c94(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  uVar4 = param_1[2] ^ 0xffffffffffffff;
  return ((uVar2 ^ 0xffff0000000000 | uVar1 ^ 1 | uVar3 ^ 0xffffffffffffff | uVar4) - 1 |
          (uVar2 | uVar1 | param_1[2] | uVar3) - 1 |
         (uVar2 ^ 0xfffe0000000000 | uVar1 ^ 2 | uVar3 ^ 0x1ffffffffffffff | uVar4) - 1) >> 0x3f;
}



/* Entry: 10ae40cf8; end: 10ae410cb;  */

void FUN_10ae40cf8(long *param_1,undefined8 *param_2,undefined8 param_3,long *param_4,long *param_5,
                  long *param_6)

{
  bool bVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  code *pcVar15;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  undefined1 auStack_1d0 [32];
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  long lStack_138;
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  long lStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  
  puVar14 = &stack0xfffffffffffffff0;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_4;
  lVar4 = param_4[1];
  lVar9 = param_4[2];
  lVar6 = param_4[3];
  FUN_10ae4027c(&uStack_e0,param_6);
  func_0x00010ae40318(&lStack_170,&uStack_e0);
  FUN_10ae4027c(&uStack_e0,param_5);
  func_0x00010ae40318(&lStack_190,&uStack_e0);
  func_0x00010ae40444(&uStack_e0,param_4,&lStack_190);
  func_0x00010ae40318(&lStack_1b0,&uStack_e0);
  lStack_1f0 = (lVar12 - lStack_170) + 0x400000000000004;
  lStack_1e8 = (lVar4 - lStack_168) + 0x3fffbfffffffffc;
  lStack_1e0 = (lVar9 - lStack_160) + 0x3fffffffffffffc;
  lStack_1d8 = (lVar6 - lStack_158) + 0x3fffffffffffffc;
  lStack_210 = (lStack_170 + lVar12) * 3;
  lStack_208 = (lStack_168 + lVar4) * 3;
  lStack_200 = (lStack_160 + lVar9) * 3;
  lStack_1f8 = (lStack_158 + lVar6) * 3;
  func_0x00010ae40444(&uStack_e0,&lStack_1f0,&lStack_210);
  func_0x00010ae40318(auStack_1d0,&uStack_e0);
  FUN_10ae4027c(&uStack_e0,auStack_1d0);
  bVar1 = uStack_e0 < (ulong)(lStack_1b0 * 8);
  uVar7 = uStack_e0 + lStack_1b0 * -8;
  uStack_e0 = uVar7 + 0x100;
  lStack_d8 = (lStack_d8 - (ulong)bVar1) + 1 + (ulong)(0xfffffffffffffeff < uVar7);
  uVar7 = uStack_d0 + lStack_1a8 * -8;
  lStack_c8 = lStack_c8 - (ulong)(uStack_d0 < (ulong)(lStack_1a8 * 8));
  uStack_d0 = uVar7 + 0xfffeffffffffff00;
  if (0x10000000000ff < uVar7) {
    lStack_c8 = lStack_c8 + 1;
  }
  uVar7 = uStack_c0 + lStack_1a0 * -8;
  lStack_b8 = lStack_b8 - (ulong)(uStack_c0 < (ulong)(lStack_1a0 * 8));
  uStack_c0 = uVar7 - 0x100;
  if (0xff < uVar7) {
    lStack_b8 = lStack_b8 + 1;
  }
  uVar7 = uStack_b0 + lStack_198 * -8;
  lStack_a8 = lStack_a8 - (ulong)(uStack_b0 < (ulong)(lStack_198 * 8));
  uStack_b0 = uVar7 - 0x100;
  if (0xff < uVar7) {
    lStack_a8 = lStack_a8 + 1;
  }
  func_0x00010ae40318(param_1,&uStack_e0);
  lStack_1f0 = *param_6 + *param_5;
  lStack_1e8 = param_6[1] + param_5[1];
  lStack_1e0 = param_6[2] + param_5[2];
  lStack_1d8 = param_6[3] + param_5[3];
  uVar7 = lStack_178 + lStack_158;
  FUN_10ae4027c(&uStack_e0,&lStack_1f0);
  bVar1 = uStack_e0 < (ulong)(lStack_190 + lStack_170);
  uVar11 = uStack_e0 - (lStack_190 + lStack_170);
  uStack_e0 = uVar11 + 0x100;
  lStack_d8 = (lStack_d8 - (ulong)bVar1) + 1 + (ulong)(0xfffffffffffffeff < uVar11);
  uVar11 = uStack_d0 - (lStack_188 + lStack_168);
  lStack_c8 = lStack_c8 - (ulong)(uStack_d0 < (ulong)(lStack_188 + lStack_168));
  uStack_d0 = uVar11 + 0xfffeffffffffff00;
  if (0x10000000000ff < uVar11) {
    lStack_c8 = lStack_c8 + 1;
  }
  uVar11 = uStack_c0 - (lStack_180 + lStack_160);
  lStack_b8 = lStack_b8 - (ulong)(uStack_c0 < (ulong)(lStack_180 + lStack_160));
  uStack_c0 = uVar11 - 0x100;
  if (0xff < uVar11) {
    lStack_b8 = lStack_b8 + 1;
  }
  uVar11 = uStack_b0 - uVar7;
  lStack_a8 = lStack_a8 - (ulong)(uStack_b0 < uVar7);
  uStack_b0 = uVar11 - 0x100;
  if (0xff < uVar11) {
    lStack_a8 = lStack_a8 + 1;
  }
  func_0x00010ae40318(param_3,&uStack_e0);
  lStack_1b0 = (lStack_1b0 * 4 - *param_1) + 0x400000000000004;
  lStack_1a8 = (lStack_1a8 * 4 - param_1[1]) + 0x3fffbfffffffffc;
  lStack_1a0 = (lStack_1a0 * 4 - param_1[2]) + 0x3fffffffffffffc;
  lStack_198 = (lStack_198 * 4 - param_1[3]) + 0x3fffffffffffffc;
  func_0x00010ae40444(&uStack_e0,auStack_1d0,&lStack_1b0);
  FUN_10ae4027c(&uStack_150,&lStack_190);
  uVar13 = uStack_80;
  lVar9 = lStack_88;
  uVar8 = uStack_90;
  uVar10 = uStack_a0;
  lVar12 = lStack_a8;
  uVar11 = uStack_b0;
  bVar1 = uStack_e0 < uStack_150 * 8;
  uStack_e0 = uStack_e0 + uStack_150 * -8;
  lStack_d8 = (lStack_d8 - ((uStack_150 >> 0x3d | lStack_148 << 3) + (ulong)bVar1)) +
              0x100000000000000;
  bVar1 = uStack_d0 < uStack_140 * 8;
  uStack_d0 = uStack_d0 + uStack_140 * -8;
  lStack_c8 = (lStack_c8 - ((uStack_140 >> 0x3d | lStack_138 << 3) + (ulong)bVar1)) +
              0xffffffffffffff;
  bVar1 = uStack_c0 < uStack_130 * 8;
  uStack_c0 = uStack_c0 + uStack_130 * -8;
  lStack_b8 = (lStack_b8 - ((uStack_130 >> 0x3d | lStack_128 << 3) + (ulong)bVar1)) +
              0xffffffffffffff;
  bVar1 = uStack_b0 < uStack_120 * 8;
  uStack_b0 = uStack_b0 + uStack_120 * -8;
  lStack_a8 = (lStack_a8 - ((uStack_120 >> 0x3d | lStack_118 << 3) + (ulong)bVar1)) +
              0x100000000000000;
  bVar1 = uStack_a0 < uStack_110 * 8;
  uStack_a0 = uStack_a0 + uStack_110 * -8;
  lStack_98 = (lStack_98 - ((uStack_110 >> 0x3d | lStack_108 << 3) + (ulong)bVar1)) +
              0xfffeffffffffff;
  bVar1 = uStack_90 < uStack_100 * 8;
  uStack_90 = uStack_90 + uStack_100 * -8;
  lStack_88 = (lStack_88 - ((uStack_100 >> 0x3d | lStack_f8 << 3) + (ulong)bVar1)) +
              0xffffffffffffff;
  bVar1 = uStack_80 < uStack_f0 * 8;
  uStack_80 = uStack_80 + uStack_f0 * -8;
  lStack_78 = (lStack_78 - ((uStack_f0 >> 0x3d | lStack_e8 << 3) + (ulong)bVar1)) + 0xffffffffffffff
  ;
  puVar2 = &uStack_e0;
  func_0x00010ae40318();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcVar15 = FUN_10ae410cc;
  lVar4 = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[0xc] = *puVar2 & 0xffffffffffffff;
  param_2[0xd] = *(ulong *)((long)puVar2 + 7) & 0xffffffffffffff;
  param_2[0xe] = *(ulong *)((long)puVar2 + 0xe) & 0xffffffffffffff;
  param_2[0xf] = *(ulong *)((long)puVar2 + 0x14) >> 8;
  param_2[0x10] = puVar2[9] & 0xffffffffffffff;
  param_2[0x11] = *(ulong *)((long)puVar2 + 0x4f) & 0xffffffffffffff;
  param_2[0x12] = *(ulong *)((long)puVar2 + 0x56) & 0xffffffffffffff;
  param_2[0x13] = *(ulong *)((long)puVar2 + 0x5c) >> 8;
  param_2[0x14] = puVar2[0x12] & 0xffffffffffffff;
  param_2[0x15] = *(ulong *)((long)puVar2 + 0x97) & 0xffffffffffffff;
  param_2[0x16] = *(ulong *)((long)puVar2 + 0x9e) & 0xffffffffffffff;
  param_2[0x17] = *(ulong *)((long)puVar2 + 0xa4) >> 8;
  uVar5 = 2;
  bVar1 = false;
  lVar6 = lStack_168;
  do {
    if (bVar1) {
      FUN_10ae405f0((long)param_2 + lVar4 + 0xc0,(long)param_2 + lVar4 + 0xe0,
                    (long)param_2 + lVar4 + 0x100,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,0,
                    (long)param_2 + lVar4 + 0x60,(long)param_2 + lVar4 + 0x80,
                    (long)param_2 + lVar4 + 0xa0,lVar6,uVar7,uVar8,lVar9,uVar10,uVar11,lVar12,uVar13
                    ,puVar14,pcVar15);
    }
    else {
      puVar3 = param_2 + (uVar5 >> 1) * 0xc;
      FUN_10ae40cf8((long)param_2 + lVar4 + 0xc0,(long)param_2 + lVar4 + 0xe0,
                    (long)param_2 + lVar4 + 0x100,puVar3,puVar3 + 4,puVar3 + 8);
    }
    uVar5 = uVar5 + 1;
    bVar1 = (bool)(bVar1 ^ 1);
    lVar4 = lVar4 + 0x60;
  } while (lVar4 != 0x5a0);
  return;
}



/* Entry: 10ae410cc; end: 10ae4122b;  */

void FUN_10ae410cc(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xc] = *param_2 & 0xffffffffffffff;
  param_1[0xd] = *(ulong *)((long)param_2 + 7) & 0xffffffffffffff;
  param_1[0xe] = *(ulong *)((long)param_2 + 0xe) & 0xffffffffffffff;
  param_1[0xf] = *(ulong *)((long)param_2 + 0x14) >> 8;
  param_1[0x10] = param_2[9] & 0xffffffffffffff;
  param_1[0x11] = *(ulong *)((long)param_2 + 0x4f) & 0xffffffffffffff;
  param_1[0x12] = *(ulong *)((long)param_2 + 0x56) & 0xffffffffffffff;
  param_1[0x13] = *(ulong *)((long)param_2 + 0x5c) >> 8;
  param_1[0x14] = param_2[0x12] & 0xffffffffffffff;
  param_1[0x15] = *(ulong *)((long)param_2 + 0x97) & 0xffffffffffffff;
  param_1[0x16] = *(ulong *)((long)param_2 + 0x9e) & 0xffffffffffffff;
  param_1[0x17] = *(ulong *)((long)param_2 + 0xa4) >> 8;
  uVar4 = 2;
  bVar1 = false;
  do {
    if (bVar1) {
      FUN_10ae405f0((long)param_1 + lVar3 + 0xc0,(long)param_1 + lVar3 + 0xe0,
                    (long)param_1 + lVar3 + 0x100,param_1 + 0xc,param_1 + 0x10,param_1 + 0x14,0,
                    (long)param_1 + lVar3 + 0x60,(long)param_1 + lVar3 + 0x80,
                    (long)param_1 + lVar3 + 0xa0);
    }
    else {
      puVar2 = param_1 + (uVar4 >> 1) * 0xc;
      FUN_10ae40cf8((long)param_1 + lVar3 + 0xc0,(long)param_1 + lVar3 + 0xe0,
                    (long)param_1 + lVar3 + 0x100,puVar2,puVar2 + 4,puVar2 + 8);
    }
    uVar4 = uVar4 + 1;
    bVar1 = (bool)(bVar1 ^ 1);
    lVar3 = lVar3 + 0x60;
  } while (lVar3 != 0x5a0);
  return;
}



/* Entry: 10ae4122c; end: 10ae4128f;  */

void FUN_10ae4122c(ulong param_1,ulong param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  param_4[0xb] = 0;
  param_4[10] = 0;
  param_4[5] = 0;
  param_4[4] = 0;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[1] = 0;
  *param_4 = 0;
  param_4[3] = 0;
  param_4[2] = 0;
  do {
    lVar3 = 0;
    uVar1 = (uint)((uVar2 ^ param_1) >> 4) | (uint)(uVar2 ^ param_1);
    do {
      uVar4 = *(ulong *)(param_3 + lVar3);
      if (((uVar1 | uVar1 >> 2) & 3) != 0) {
        uVar4 = 0;
      }
      *(ulong *)((long)param_4 + lVar3) = *(ulong *)((long)param_4 + lVar3) | uVar4;
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x60);
    uVar2 = uVar2 + 1;
    param_3 = param_3 + 0x60;
  } while (uVar2 != param_2);
  return;
}



/* Entry: 10ae41290; end: 10ae41333;  */

void FUN_10ae41290(undefined8 param_1,ulong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puVar15;
  bool bVar16;
  bool bVar17;
  ulong *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  long *plVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  long lStack_7d8;
  ulong *puStack_7d0;
  ulong *puStack_7c8;
  undefined1 *puStack_7c0;
  undefined1 *puStack_7b8;
  undefined1 ****ppppuStack_7b0;
  code *pcStack_7a8;
  ulong *puStack_7a0;
  ulong *puStack_798;
  undefined1 *puStack_788;
  ulong auStack_780 [4];
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  undefined8 uStack_708;
  char acStack_6f1 [257];
  undefined1 auStack_5f0 [32];
  ulong auStack_5d0 [4];
  ulong auStack_5b0 [4];
  ulong auStack_590 [4];
  ulong auStack_570 [4];
  ulong auStack_550 [4];
  undefined1 auStack_530 [32];
  undefined1 auStack_510 [32];
  undefined1 auStack_4f0 [608];
  long lStack_290;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  long lStack_1b8;
  undefined1 **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long lStack_90;
  ulong uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  plVar21 = &lStack_90;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_90 = 0x100 - *param_2;
  uStack_88 = (ulong)(*param_2 < 0x101);
  lStack_80 = -0x1000000000100 - param_2[1];
  lStack_78 = -(ulong)(0xfffeffffffffff00 < param_2[1]);
  lStack_70 = -0x100 - param_2[2];
  lStack_68 = -(ulong)(0xffffffffffffff00 < param_2[2]);
  lStack_60 = -0x100 - param_2[3];
  lStack_58 = -(ulong)(0xffffffffffffff00 < param_2[3]);
  func_0x00010ae40318();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10ae41334;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d8 = param_3[1];
  uStack_e0 = *param_3;
  uStack_c8 = param_3[3];
  uStack_d0 = param_3[2];
  uStack_f8 = param_3[10];
  uStack_100 = param_3[9];
  uStack_e8 = param_3[0xc];
  uStack_f0 = param_3[0xb];
  uStack_118 = param_3[0x13];
  uStack_120 = param_3[0x12];
  uStack_108 = param_3[0x15];
  uStack_110 = param_3[0x14];
  uStack_138 = param_4[1];
  uStack_140 = *param_4;
  uStack_128 = param_4[3];
  uStack_130 = param_4[2];
  uStack_158 = param_4[10];
  uStack_160 = param_4[9];
  uStack_148 = param_4[0xc];
  uStack_150 = param_4[0xb];
  uStack_178 = param_4[0x13];
  uStack_180 = param_4[0x12];
  uStack_168 = param_4[0x15];
  uStack_170 = param_4[0x14];
  puStack_188 = &uStack_180;
  puStack_190 = &uStack_160;
  puVar24 = &uStack_120;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c2b510(&uStack_e0,&uStack_100,puVar24,&uStack_e0,&uStack_100,&uStack_120,0,
                      &uStack_140);
  func_0x000107c2b50c(plVar21,&uStack_e0);
  func_0x000107c2b50c((undefined1 *)((long)plVar21 + 0x48),&uStack_100);
  puVar18 = &uStack_120;
  func_0x000107c2b50c((undefined1 *)((long)plVar21 + 0x90));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  puVar25 = &uStack_220;
  puVar22 = &uStack_220;
  uStack_198 = 0x10ae41410;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1d8 = puVar24[1];
  uStack_1e0 = *puVar24;
  uStack_1c8 = puVar24[3];
  uStack_1d0 = puVar24[2];
  uStack_1f8 = puVar24[10];
  uStack_200 = puVar24[9];
  uStack_1e8 = puVar24[0xc];
  uStack_1f0 = puVar24[0xb];
  uStack_218 = puVar24[0x13];
  uStack_220 = puVar24[0x12];
  uStack_208 = puVar24[0x15];
  uStack_210 = puVar24[0x14];
  puVar24 = &uStack_1e0;
  puVar26 = &uStack_200;
  ppuStack_1a0 = &puStack_a0;
  func_0x000107c2b514(&uStack_1e0,&uStack_200);
  func_0x000107c2b50c(puVar18,&uStack_1e0);
  func_0x000107c2b50c(puVar18 + 9,&uStack_200);
  puVar18 = puVar18 + 0x12;
  func_0x000107c2b50c(puVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_228 = FUN_10ae414bc;
  lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_590[1] = puVar24[1];
  auStack_590[0] = *puVar24;
  auStack_590[3] = puVar24[3];
  auStack_590[2] = puVar24[2];
  auStack_570[1] = puVar24[10];
  auStack_570[0] = puVar24[9];
  auStack_570[3] = puVar24[0xc];
  auStack_570[2] = puVar24[0xb];
  auStack_550[1] = puVar24[0x13];
  auStack_550[0] = puVar24[0x12];
  auStack_550[3] = puVar24[0x15];
  auStack_550[2] = puVar24[0x14];
  puStack_788 = (undefined1 *)puVar22;
  pppuStack_230 = &ppuStack_1a0;
  func_0x000107c2b514(auStack_5f0,auStack_5d0,auStack_5b0,auStack_590,auStack_570,auStack_550);
  lVar39 = 0;
  do {
    puStack_7a0 = auStack_5d0;
    puStack_798 = auStack_5b0;
    func_0x000107c2b510(auStack_530 + lVar39,auStack_510 + lVar39,auStack_4f0 + lVar39,
                        (long)auStack_590 + lVar39,(long)auStack_570 + lVar39,
                        (long)auStack_550 + lVar39,0,auStack_5f0);
    lVar39 = lVar39 + 0x60;
  } while (lVar39 != 0x2a0);
  uVar38 = 0x100;
  puVar24 = puVar26;
  FUN_10ae387b8(puVar18,acStack_6f1,puVar26,0x100);
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  bVar16 = true;
  do {
    if (!bVar16) {
      puVar24 = &uStack_720;
      func_0x000107c2b514(&uStack_760,&uStack_740,puVar24,&uStack_760,&uStack_740,&uStack_720);
    }
    if (uVar38 < 0x20) {
      puVar26 = (ulong *)((long)puVar25 + (uVar38 >> 3));
      uVar1 = (uint)uVar38 & 7;
      uVar27 = (*(byte *)((long)puVar26 + 0x1c) >> (ulong)uVar1 & 1) << 3 |
               (*(byte *)((long)puVar26 + 0x14) >> (ulong)uVar1 & 1) << 2 |
               (*(byte *)((long)puVar26 + 0xc) >> (ulong)uVar1 & 1) << 1 |
               *(byte *)((long)puVar26 + 4) >> (ulong)uVar1 & 1;
      if (uVar27 != 0) {
        lVar39 = (ulong)uVar27 * 0x40;
        puStack_7a0 = (ulong *)(&UNK_10e5277e8 + lVar39);
        puStack_798 = (ulong *)&UNK_10e527bc8;
        puVar24 = &uStack_720;
        func_0x000107c2b510(&uStack_760,&uStack_740,puVar24,&uStack_760,&uStack_740,&uStack_720,1,
                            &UNK_10e5277c8 + lVar39);
        bVar16 = false;
      }
      uVar1 = ((byte)((byte)puVar26[3] >> (ulong)uVar1) & 1) << 3 |
              ((byte)((byte)puVar26[2] >> (ulong)uVar1) & 1) << 2 |
              ((byte)((byte)puVar26[1] >> (ulong)uVar1) & 1) << 1 |
              (byte)((byte)*puVar26 >> (ulong)uVar1) & 1;
      if (uVar1 != 0) {
        lVar39 = (ulong)uVar1 * 0x40;
        puStack_7a0 = (ulong *)(&UNK_10e527428 + lVar39);
        puStack_798 = (ulong *)&UNK_10e527bc8;
        puVar24 = &uStack_720;
        func_0x000107c2b510(&uStack_760,&uStack_740,puVar24,&uStack_760,&uStack_740,&uStack_720,1,
                            &UNK_10e527408 + lVar39);
        bVar16 = false;
      }
    }
    cVar2 = acStack_6f1[uVar38];
    if (cVar2 != '\0') {
      uVar27 = (uint)cVar2;
      uVar1 = -uVar27;
      if (-1 < cVar2) {
        uVar1 = uVar27;
      }
      uVar29 = (ulong)(uVar1 >> 1);
      puVar26 = auStack_590 + uVar29 * 0xc;
      puVar18 = auStack_570 + uVar29 * 0xc;
      if ((int)uVar27 < 0) {
        func_0x000107c2b518(auStack_780);
        puVar18 = auStack_780;
        if (!bVar16) goto LAB_10ae41720;
LAB_10ae416f4:
        uStack_758 = auStack_590[uVar29 * 0xc + 1];
        uStack_760 = *puVar26;
        uStack_748 = auStack_590[uVar29 * 0xc + 3];
        uStack_750 = auStack_590[uVar29 * 0xc + 2];
        uStack_738 = puVar18[1];
        uStack_740 = *puVar18;
        uStack_728 = puVar18[3];
        uStack_730 = puVar18[2];
        uStack_718 = auStack_550[uVar29 * 0xc + 1];
        uStack_720 = auStack_550[uVar29 * 0xc];
        uStack_708 = *(undefined8 *)(auStack_530 + uVar29 * 0x60 + -8);
        uStack_710 = auStack_550[uVar29 * 0xc + 2];
      }
      else {
        if (bVar16) goto LAB_10ae416f4;
LAB_10ae41720:
        puStack_798 = auStack_550 + uVar29 * 0xc;
        puVar24 = &uStack_720;
        puStack_7a0 = puVar18;
        func_0x000107c2b510(&uStack_760,&uStack_740,puVar24,&uStack_760,&uStack_740,&uStack_720,0,
                            puVar26);
      }
      bVar16 = false;
    }
    puVar15 = puStack_788;
    uVar38 = uVar38 - 1;
  } while (uVar38 != 0xffffffffffffffff);
  func_0x000107c2b50c(puStack_788,&uStack_760);
  func_0x000107c2b50c(puVar15 + 0x48,&uStack_740);
  puVar19 = puVar15 + 0x90;
  puVar18 = &uStack_720;
  func_0x000107c2b50c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_290) {
    return;
  }
  ___stack_chk_fail();
  puStack_7b8 = puVar15;
  pcStack_7a8 = FUN_10ae417c0;
  lStack_7d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar38 = (ulong)*(uint *)(puVar19 + 0x40);
  puStack_7d0 = &uStack_760;
  puStack_7c8 = puVar26;
  puStack_7c0 = (undefined1 *)puVar25;
  ppppuStack_7b0 = &pppuStack_230;
  if (0 < (int)*(uint *)(puVar19 + 0x40)) {
    uVar28 = 0;
    lVar39 = 0x90;
    uVar29 = uVar38;
    do {
      uVar28 = *(ulong *)((long)puVar18 + lVar39) | uVar28;
      lVar39 = lVar39 + 8;
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
    if (uVar28 != 0) {
      uStack_7f8 = puVar18[0x13];
      uStack_800 = puVar18[0x12];
      uStack_7e8 = puVar18[0x15];
      uStack_7f0 = puVar18[0x14];
      func_0x000107c2b508(&uStack_800,&uStack_800,&uStack_800);
      uStack_818 = puVar24[1];
      uStack_820 = *puVar24;
      uStack_808 = puVar24[3];
      uStack_810 = puVar24[2];
      func_0x000107c2b508(&uStack_820,&uStack_820,&uStack_800);
      uVar29 = *puVar18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar29;
      uVar32 = SUB168(auVar3 * ZEXT816(0xffffffff00000001),8);
      uVar33 = uVar29 - (uVar29 << 0x20);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar29;
      lVar39 = SUB168(auVar4 * ZEXT816(0xffffffff),8);
      uVar36 = (uVar29 << 0x20) - uVar29;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar29;
      uVar28 = SUB168(auVar5 * ZEXT816(0xffffffffffffffff),8);
      uVar30 = uVar28 + uVar36 + (ulong)CARRY8(-uVar29,uVar29);
      if (CARRY8(uVar28,uVar36) || CARRY8(uVar28 + uVar36,(ulong)CARRY8(-uVar29,uVar29))) {
        lVar39 = lVar39 + 1;
      }
      uVar29 = uVar30 + puVar18[1];
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar29;
      uVar36 = SUB168(auVar6 * ZEXT816(0xffffffffffffffff),8);
      uVar23 = uVar29 - (uVar29 << 0x20);
      uVar37 = (uVar29 << 0x20) - uVar29;
      uVar28 = uVar36 + uVar37;
      uVar31 = lVar39 + (ulong)CARRY8(uVar30,puVar18[1]) + (ulong)CARRY8(-uVar29,uVar29);
      uVar34 = uVar33 + CARRY8(uVar31,uVar28);
      uVar35 = (ulong)CARRY8(uVar33,(ulong)CARRY8(uVar31,uVar28));
      uVar30 = uVar23 + uVar32;
      uVar32 = (ulong)CARRY8(uVar23,uVar32);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar29;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar29;
      uVar29 = SUB168(auVar8 * ZEXT816(0xffffffff),8);
      bVar16 = CARRY8(uVar34,uVar29) || CARRY8(uVar34 + uVar29,(ulong)CARRY8(uVar36,uVar37));
      uVar29 = uVar34 + uVar29 + (ulong)CARRY8(uVar36,uVar37);
      uVar33 = uVar30 + uVar35 + (ulong)bVar16;
      if (CARRY8(uVar30,uVar35) || CARRY8(uVar30 + uVar35,(ulong)bVar16)) {
        uVar32 = uVar32 + 1;
      }
      bVar16 = CARRY8(uVar31 + uVar28,puVar18[2]);
      uVar28 = uVar31 + uVar28 + puVar18[2];
      uVar30 = uVar33 + CARRY8(uVar29,(ulong)bVar16);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar28;
      uVar36 = SUB168(auVar9 * ZEXT816(0xffffffffffffffff),8);
      uVar32 = uVar32 + SUB168(auVar7 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar33,(ulong)CARRY8(uVar29,(ulong)bVar16));
      uVar23 = uVar28 - (uVar28 << 0x20);
      uVar33 = (uVar28 << 0x20) - uVar28;
      bVar17 = CARRY8(uVar29 + bVar16,uVar36 + uVar33) ||
               CARRY8(uVar29 + bVar16 + uVar36 + uVar33,(ulong)CARRY8(-uVar28,uVar28));
      uVar31 = uVar30 + bVar17;
      uVar34 = (ulong)CARRY8(uVar30,(ulong)bVar17);
      uVar30 = uVar23 + uVar32;
      uVar32 = (ulong)CARRY8(uVar23,uVar32);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar28;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar28;
      uVar23 = SUB168(auVar11 * ZEXT816(0xffffffff),8);
      uVar29 = uVar29 + bVar16 + (ulong)CARRY8(-uVar28,uVar28) + uVar36 + uVar33;
      bVar16 = CARRY8(uVar31,uVar23) || CARRY8(uVar31 + uVar23,(ulong)CARRY8(uVar36,uVar33));
      uVar28 = uVar31 + uVar23 + (ulong)CARRY8(uVar36,uVar33);
      uVar33 = uVar30 + uVar34 + (ulong)bVar16;
      if (CARRY8(uVar30,uVar34) || CARRY8(uVar30 + uVar34,(ulong)bVar16)) {
        uVar32 = uVar32 + 1;
      }
      bVar16 = CARRY8(uVar29,puVar18[3]);
      uVar29 = uVar29 + puVar18[3];
      uVar34 = uVar33 + CARRY8(uVar28,(ulong)bVar16);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29;
      uVar23 = SUB168(auVar12 * ZEXT816(0xffffffff00000001),8);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar29;
      uVar36 = SUB168(auVar13 * ZEXT816(0xffffffff),8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar29;
      uVar31 = SUB168(auVar14 * ZEXT816(0xffffffffffffffff),8);
      uVar35 = uVar32 + SUB168(auVar10 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar33,(ulong)CARRY8(uVar28,(ulong)bVar16));
      uVar33 = uVar29 - (uVar29 << 0x20);
      uVar32 = (uVar29 << 0x20) - uVar29;
      uVar30 = uVar31 + uVar32;
      if (CARRY8(uVar31,uVar32)) {
        uVar36 = uVar36 + 1;
      }
      uVar32 = uVar28 + bVar16 + (ulong)CARRY8(-uVar29,uVar29) + uVar30;
      bVar16 = CARRY8(uVar28 + bVar16,uVar30) ||
               CARRY8(uVar28 + bVar16 + uVar30,(ulong)CARRY8(-uVar29,uVar29));
      bVar17 = CARRY8(uVar34,uVar36) || CARRY8(uVar34 + uVar36,(ulong)bVar16);
      uVar29 = uVar34 + uVar36 + (ulong)bVar16;
      uVar28 = uVar33 + uVar35 + (ulong)bVar17;
      if (CARRY8(uVar33,uVar35) || CARRY8(uVar33 + uVar35,(ulong)bVar17)) {
        uVar23 = uVar23 + 1;
      }
      uVar30 = (ulong)(byte)-((0xfffffffffffffffe < uVar32) + -1);
      uVar36 = uVar29 - uVar30;
      uVar30 = (ulong)(byte)-((-1 - (uVar29 < uVar30)) + (0xfffffffe < uVar36));
      uVar33 = (ulong)(uVar28 < uVar30);
      uVar31 = uVar23 - uVar33;
      bVar16 = (char)((-1 - (uVar23 < uVar33)) + (0xffffffff00000000 < uVar31)) == '\0';
      uVar33 = -(ulong)bVar16;
      uVar34 = -(ulong)!bVar16;
      uStack_840 = uVar33 & uVar32 + 1 | uVar34 & uVar32;
      uStack_838 = uVar33 & uVar36 - 0xffffffff | uVar34 & uVar29;
      uStack_830 = uVar33 & uVar28 - uVar30 | uVar34 & uVar28;
      uStack_828 = uVar33 & uVar31 + 0xffffffff | uVar23 & uVar34;
      if (((uStack_820 == uStack_840 && uStack_818 == uStack_838) && uStack_810 == uStack_830) &&
          uStack_808 == uStack_828) {
LAB_10ae41adc:
        uVar20 = 1;
        goto LAB_10ae41ab0;
      }
      puVar18 = puVar24;
      func_0x000107c34f78(puVar24,uVar38,puVar19 + 0xe8,uVar38);
      if ((int)puVar18 < 0) {
        func_0x000107c2b300(&uStack_890,puVar24,*(undefined8 *)(puVar19 + 0x10),
                            (long)*(int *)(puVar19 + 0x18));
        uStack_818 = uStack_888;
        uStack_820 = uStack_890;
        uStack_808 = uStack_878;
        uStack_810 = uStack_880;
        func_0x000107c2b508(&uStack_820,&uStack_820,&uStack_800);
        if (((uStack_820 == uStack_840 && uStack_818 == uStack_838) && uStack_810 == uStack_830) &&
            uStack_808 == uStack_828) goto LAB_10ae41adc;
      }
    }
  }
  uVar20 = 0;
LAB_10ae41ab0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7d8) {
    return;
  }
  ___stack_chk_fail(uVar20);
  puRam00000001137ed660 = &UNK_10e527be8;
  uRam00000001137ed670 = 0x200000000;
  uRam00000001137ed668 = 0x1100000011;
  return;
}



/* Entry: 10ae41334; end: 10ae414bb;  */

void FUN_10ae41334(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puVar15;
  bool bVar16;
  bool bVar17;
  ulong *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  long lStack_748;
  ulong *puStack_740;
  ulong *puStack_738;
  undefined1 *puStack_730;
  undefined1 *puStack_728;
  undefined1 ***pppuStack_720;
  code *pcStack_718;
  ulong *puStack_710;
  ulong *puStack_708;
  undefined1 *puStack_6f8;
  ulong auStack_6f0 [4];
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  undefined8 uStack_678;
  char acStack_661 [257];
  undefined1 auStack_560 [32];
  ulong auStack_540 [4];
  ulong auStack_520 [4];
  ulong auStack_500 [4];
  ulong auStack_4e0 [4];
  ulong auStack_4c0 [4];
  undefined1 auStack_4a0 [32];
  undefined1 auStack_480 [32];
  undefined1 auStack_460 [608];
  long lStack_200;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_128;
  undefined1 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = param_3[1];
  uStack_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_68 = param_3[10];
  uStack_70 = param_3[9];
  uStack_58 = param_3[0xc];
  uStack_60 = param_3[0xb];
  uStack_88 = param_3[0x13];
  uStack_90 = param_3[0x12];
  uStack_78 = param_3[0x15];
  uStack_80 = param_3[0x14];
  uStack_a8 = param_4[1];
  uStack_b0 = *param_4;
  uStack_98 = param_4[3];
  uStack_a0 = param_4[2];
  uStack_c8 = param_4[10];
  uStack_d0 = param_4[9];
  uStack_b8 = param_4[0xc];
  uStack_c0 = param_4[0xb];
  uStack_e8 = param_4[0x13];
  uStack_f0 = param_4[0x12];
  uStack_d8 = param_4[0x15];
  uStack_e0 = param_4[0x14];
  puStack_f8 = &uStack_f0;
  puStack_100 = &uStack_d0;
  puVar23 = &uStack_90;
  func_0x000107c2b510(&uStack_50,&uStack_70,puVar23,&uStack_50,&uStack_70,&uStack_90,0,&uStack_b0);
  func_0x000107c2b50c(param_2,&uStack_50);
  func_0x000107c2b50c(param_2 + 0x48,&uStack_70);
  puVar18 = &uStack_90;
  func_0x000107c2b50c(param_2 + 0x90);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  puVar24 = &uStack_190;
  puVar21 = &uStack_190;
  uStack_108 = 0x10ae41410;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = puVar23[1];
  uStack_150 = *puVar23;
  uStack_138 = puVar23[3];
  uStack_140 = puVar23[2];
  uStack_168 = puVar23[10];
  uStack_170 = puVar23[9];
  uStack_158 = puVar23[0xc];
  uStack_160 = puVar23[0xb];
  uStack_188 = puVar23[0x13];
  uStack_190 = puVar23[0x12];
  uStack_178 = puVar23[0x15];
  uStack_180 = puVar23[0x14];
  puVar23 = &uStack_150;
  puVar25 = &uStack_170;
  puStack_110 = &stack0xfffffffffffffff0;
  func_0x000107c2b514(&uStack_150,&uStack_170);
  func_0x000107c2b50c(puVar18,&uStack_150);
  func_0x000107c2b50c(puVar18 + 9,&uStack_170);
  puVar18 = puVar18 + 0x12;
  func_0x000107c2b50c(puVar18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_10ae414bc;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_500[1] = puVar23[1];
  auStack_500[0] = *puVar23;
  auStack_500[3] = puVar23[3];
  auStack_500[2] = puVar23[2];
  auStack_4e0[1] = puVar23[10];
  auStack_4e0[0] = puVar23[9];
  auStack_4e0[3] = puVar23[0xc];
  auStack_4e0[2] = puVar23[0xb];
  auStack_4c0[1] = puVar23[0x13];
  auStack_4c0[0] = puVar23[0x12];
  auStack_4c0[3] = puVar23[0x15];
  auStack_4c0[2] = puVar23[0x14];
  puStack_6f8 = (undefined1 *)puVar21;
  ppuStack_1a0 = &puStack_110;
  func_0x000107c2b514(auStack_560,auStack_540,auStack_520,auStack_500,auStack_4e0,auStack_4c0);
  lVar38 = 0;
  do {
    puStack_710 = auStack_540;
    puStack_708 = auStack_520;
    func_0x000107c2b510(auStack_4a0 + lVar38,auStack_480 + lVar38,auStack_460 + lVar38,
                        (long)auStack_500 + lVar38,(long)auStack_4e0 + lVar38,
                        (long)auStack_4c0 + lVar38,0,auStack_560);
    lVar38 = lVar38 + 0x60;
  } while (lVar38 != 0x2a0);
  uVar37 = 0x100;
  puVar23 = puVar25;
  FUN_10ae387b8(puVar18,acStack_661,puVar25,0x100);
  uStack_688 = 0;
  uStack_690 = 0;
  uStack_678 = 0;
  uStack_680 = 0;
  uStack_6a8 = 0;
  uStack_6b0 = 0;
  uStack_698 = 0;
  uStack_6a0 = 0;
  uStack_6c8 = 0;
  uStack_6d0 = 0;
  uStack_6b8 = 0;
  uStack_6c0 = 0;
  bVar16 = true;
  do {
    if (!bVar16) {
      puVar23 = &uStack_690;
      func_0x000107c2b514(&uStack_6d0,&uStack_6b0,puVar23,&uStack_6d0,&uStack_6b0,&uStack_690);
    }
    if (uVar37 < 0x20) {
      puVar25 = (ulong *)((long)puVar24 + (uVar37 >> 3));
      uVar1 = (uint)uVar37 & 7;
      uVar26 = (*(byte *)((long)puVar25 + 0x1c) >> (ulong)uVar1 & 1) << 3 |
               (*(byte *)((long)puVar25 + 0x14) >> (ulong)uVar1 & 1) << 2 |
               (*(byte *)((long)puVar25 + 0xc) >> (ulong)uVar1 & 1) << 1 |
               *(byte *)((long)puVar25 + 4) >> (ulong)uVar1 & 1;
      if (uVar26 != 0) {
        lVar38 = (ulong)uVar26 * 0x40;
        puStack_710 = (ulong *)(&UNK_10e5277e8 + lVar38);
        puStack_708 = (ulong *)&UNK_10e527bc8;
        puVar23 = &uStack_690;
        func_0x000107c2b510(&uStack_6d0,&uStack_6b0,puVar23,&uStack_6d0,&uStack_6b0,&uStack_690,1,
                            &UNK_10e5277c8 + lVar38);
        bVar16 = false;
      }
      uVar1 = ((byte)((byte)puVar25[3] >> (ulong)uVar1) & 1) << 3 |
              ((byte)((byte)puVar25[2] >> (ulong)uVar1) & 1) << 2 |
              ((byte)((byte)puVar25[1] >> (ulong)uVar1) & 1) << 1 |
              (byte)((byte)*puVar25 >> (ulong)uVar1) & 1;
      if (uVar1 != 0) {
        lVar38 = (ulong)uVar1 * 0x40;
        puStack_710 = (ulong *)(&UNK_10e527428 + lVar38);
        puStack_708 = (ulong *)&UNK_10e527bc8;
        puVar23 = &uStack_690;
        func_0x000107c2b510(&uStack_6d0,&uStack_6b0,puVar23,&uStack_6d0,&uStack_6b0,&uStack_690,1,
                            &UNK_10e527408 + lVar38);
        bVar16 = false;
      }
    }
    cVar2 = acStack_661[uVar37];
    if (cVar2 != '\0') {
      uVar26 = (uint)cVar2;
      uVar1 = -uVar26;
      if (-1 < cVar2) {
        uVar1 = uVar26;
      }
      uVar28 = (ulong)(uVar1 >> 1);
      puVar25 = auStack_500 + uVar28 * 0xc;
      puVar18 = auStack_4e0 + uVar28 * 0xc;
      if ((int)uVar26 < 0) {
        func_0x000107c2b518(auStack_6f0);
        puVar18 = auStack_6f0;
        if (!bVar16) goto LAB_10ae41720;
LAB_10ae416f4:
        uStack_6c8 = auStack_500[uVar28 * 0xc + 1];
        uStack_6d0 = *puVar25;
        uStack_6b8 = auStack_500[uVar28 * 0xc + 3];
        uStack_6c0 = auStack_500[uVar28 * 0xc + 2];
        uStack_6a8 = puVar18[1];
        uStack_6b0 = *puVar18;
        uStack_698 = puVar18[3];
        uStack_6a0 = puVar18[2];
        uStack_688 = auStack_4c0[uVar28 * 0xc + 1];
        uStack_690 = auStack_4c0[uVar28 * 0xc];
        uStack_678 = *(undefined8 *)(auStack_4a0 + uVar28 * 0x60 + -8);
        uStack_680 = auStack_4c0[uVar28 * 0xc + 2];
      }
      else {
        if (bVar16) goto LAB_10ae416f4;
LAB_10ae41720:
        puStack_708 = auStack_4c0 + uVar28 * 0xc;
        puVar23 = &uStack_690;
        puStack_710 = puVar18;
        func_0x000107c2b510(&uStack_6d0,&uStack_6b0,puVar23,&uStack_6d0,&uStack_6b0,&uStack_690,0,
                            puVar25);
      }
      bVar16 = false;
    }
    puVar15 = puStack_6f8;
    uVar37 = uVar37 - 1;
  } while (uVar37 != 0xffffffffffffffff);
  func_0x000107c2b50c(puStack_6f8,&uStack_6d0);
  func_0x000107c2b50c(puVar15 + 0x48,&uStack_6b0);
  puVar19 = puVar15 + 0x90;
  puVar18 = &uStack_690;
  func_0x000107c2b50c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  puStack_728 = puVar15;
  pcStack_718 = FUN_10ae417c0;
  lStack_748 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar37 = (ulong)*(uint *)(puVar19 + 0x40);
  puStack_740 = &uStack_6d0;
  puStack_738 = puVar25;
  puStack_730 = (undefined1 *)puVar24;
  pppuStack_720 = &ppuStack_1a0;
  if (0 < (int)*(uint *)(puVar19 + 0x40)) {
    uVar27 = 0;
    lVar38 = 0x90;
    uVar28 = uVar37;
    do {
      uVar27 = *(ulong *)((long)puVar18 + lVar38) | uVar27;
      lVar38 = lVar38 + 8;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
    if (uVar27 != 0) {
      uStack_768 = puVar18[0x13];
      uStack_770 = puVar18[0x12];
      uStack_758 = puVar18[0x15];
      uStack_760 = puVar18[0x14];
      func_0x000107c2b508(&uStack_770,&uStack_770,&uStack_770);
      uStack_788 = puVar23[1];
      uStack_790 = *puVar23;
      uStack_778 = puVar23[3];
      uStack_780 = puVar23[2];
      func_0x000107c2b508(&uStack_790,&uStack_790,&uStack_770);
      uVar28 = *puVar18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar28;
      uVar31 = SUB168(auVar3 * ZEXT816(0xffffffff00000001),8);
      uVar32 = uVar28 - (uVar28 << 0x20);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar28;
      lVar38 = SUB168(auVar4 * ZEXT816(0xffffffff),8);
      uVar35 = (uVar28 << 0x20) - uVar28;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar28;
      uVar27 = SUB168(auVar5 * ZEXT816(0xffffffffffffffff),8);
      uVar29 = uVar27 + uVar35 + (ulong)CARRY8(-uVar28,uVar28);
      if (CARRY8(uVar27,uVar35) || CARRY8(uVar27 + uVar35,(ulong)CARRY8(-uVar28,uVar28))) {
        lVar38 = lVar38 + 1;
      }
      uVar28 = uVar29 + puVar18[1];
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar28;
      uVar35 = SUB168(auVar6 * ZEXT816(0xffffffffffffffff),8);
      uVar22 = uVar28 - (uVar28 << 0x20);
      uVar36 = (uVar28 << 0x20) - uVar28;
      uVar27 = uVar35 + uVar36;
      uVar30 = lVar38 + (ulong)CARRY8(uVar29,puVar18[1]) + (ulong)CARRY8(-uVar28,uVar28);
      uVar33 = uVar32 + CARRY8(uVar30,uVar27);
      uVar34 = (ulong)CARRY8(uVar32,(ulong)CARRY8(uVar30,uVar27));
      uVar29 = uVar22 + uVar31;
      uVar31 = (ulong)CARRY8(uVar22,uVar31);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar28;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar28;
      uVar28 = SUB168(auVar8 * ZEXT816(0xffffffff),8);
      bVar16 = CARRY8(uVar33,uVar28) || CARRY8(uVar33 + uVar28,(ulong)CARRY8(uVar35,uVar36));
      uVar28 = uVar33 + uVar28 + (ulong)CARRY8(uVar35,uVar36);
      uVar32 = uVar29 + uVar34 + (ulong)bVar16;
      if (CARRY8(uVar29,uVar34) || CARRY8(uVar29 + uVar34,(ulong)bVar16)) {
        uVar31 = uVar31 + 1;
      }
      bVar16 = CARRY8(uVar30 + uVar27,puVar18[2]);
      uVar27 = uVar30 + uVar27 + puVar18[2];
      uVar29 = uVar32 + CARRY8(uVar28,(ulong)bVar16);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar27;
      uVar35 = SUB168(auVar9 * ZEXT816(0xffffffffffffffff),8);
      uVar31 = uVar31 + SUB168(auVar7 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar32,(ulong)CARRY8(uVar28,(ulong)bVar16));
      uVar22 = uVar27 - (uVar27 << 0x20);
      uVar32 = (uVar27 << 0x20) - uVar27;
      bVar17 = CARRY8(uVar28 + bVar16,uVar35 + uVar32) ||
               CARRY8(uVar28 + bVar16 + uVar35 + uVar32,(ulong)CARRY8(-uVar27,uVar27));
      uVar30 = uVar29 + bVar17;
      uVar33 = (ulong)CARRY8(uVar29,(ulong)bVar17);
      uVar29 = uVar22 + uVar31;
      uVar31 = (ulong)CARRY8(uVar22,uVar31);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar27;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar27;
      uVar22 = SUB168(auVar11 * ZEXT816(0xffffffff),8);
      uVar28 = uVar28 + bVar16 + (ulong)CARRY8(-uVar27,uVar27) + uVar35 + uVar32;
      bVar16 = CARRY8(uVar30,uVar22) || CARRY8(uVar30 + uVar22,(ulong)CARRY8(uVar35,uVar32));
      uVar27 = uVar30 + uVar22 + (ulong)CARRY8(uVar35,uVar32);
      uVar32 = uVar29 + uVar33 + (ulong)bVar16;
      if (CARRY8(uVar29,uVar33) || CARRY8(uVar29 + uVar33,(ulong)bVar16)) {
        uVar31 = uVar31 + 1;
      }
      bVar16 = CARRY8(uVar28,puVar18[3]);
      uVar28 = uVar28 + puVar18[3];
      uVar33 = uVar32 + CARRY8(uVar27,(ulong)bVar16);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar28;
      uVar22 = SUB168(auVar12 * ZEXT816(0xffffffff00000001),8);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar28;
      uVar35 = SUB168(auVar13 * ZEXT816(0xffffffff),8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar28;
      uVar30 = SUB168(auVar14 * ZEXT816(0xffffffffffffffff),8);
      uVar34 = uVar31 + SUB168(auVar10 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar32,(ulong)CARRY8(uVar27,(ulong)bVar16));
      uVar32 = uVar28 - (uVar28 << 0x20);
      uVar31 = (uVar28 << 0x20) - uVar28;
      uVar29 = uVar30 + uVar31;
      if (CARRY8(uVar30,uVar31)) {
        uVar35 = uVar35 + 1;
      }
      uVar31 = uVar27 + bVar16 + (ulong)CARRY8(-uVar28,uVar28) + uVar29;
      bVar16 = CARRY8(uVar27 + bVar16,uVar29) ||
               CARRY8(uVar27 + bVar16 + uVar29,(ulong)CARRY8(-uVar28,uVar28));
      bVar17 = CARRY8(uVar33,uVar35) || CARRY8(uVar33 + uVar35,(ulong)bVar16);
      uVar28 = uVar33 + uVar35 + (ulong)bVar16;
      uVar27 = uVar32 + uVar34 + (ulong)bVar17;
      if (CARRY8(uVar32,uVar34) || CARRY8(uVar32 + uVar34,(ulong)bVar17)) {
        uVar22 = uVar22 + 1;
      }
      uVar29 = (ulong)(byte)-((0xfffffffffffffffe < uVar31) + -1);
      uVar35 = uVar28 - uVar29;
      uVar29 = (ulong)(byte)-((-1 - (uVar28 < uVar29)) + (0xfffffffe < uVar35));
      uVar32 = (ulong)(uVar27 < uVar29);
      uVar30 = uVar22 - uVar32;
      bVar16 = (char)((-1 - (uVar22 < uVar32)) + (0xffffffff00000000 < uVar30)) == '\0';
      uVar32 = -(ulong)bVar16;
      uVar33 = -(ulong)!bVar16;
      uStack_7b0 = uVar32 & uVar31 + 1 | uVar33 & uVar31;
      uStack_7a8 = uVar32 & uVar35 - 0xffffffff | uVar33 & uVar28;
      uStack_7a0 = uVar32 & uVar27 - uVar29 | uVar33 & uVar27;
      uStack_798 = uVar32 & uVar30 + 0xffffffff | uVar22 & uVar33;
      if (((uStack_790 == uStack_7b0 && uStack_788 == uStack_7a8) && uStack_780 == uStack_7a0) &&
          uStack_778 == uStack_798) {
LAB_10ae41adc:
        uVar20 = 1;
        goto LAB_10ae41ab0;
      }
      puVar18 = puVar23;
      func_0x000107c34f78(puVar23,uVar37,puVar19 + 0xe8,uVar37);
      if ((int)puVar18 < 0) {
        func_0x000107c2b300(&uStack_800,puVar23,*(undefined8 *)(puVar19 + 0x10),
                            (long)*(int *)(puVar19 + 0x18));
        uStack_788 = uStack_7f8;
        uStack_790 = uStack_800;
        uStack_778 = uStack_7e8;
        uStack_780 = uStack_7f0;
        func_0x000107c2b508(&uStack_790,&uStack_790,&uStack_770);
        if (((uStack_790 == uStack_7b0 && uStack_788 == uStack_7a8) && uStack_780 == uStack_7a0) &&
            uStack_778 == uStack_798) goto LAB_10ae41adc;
      }
    }
  }
  uVar20 = 0;
LAB_10ae41ab0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_748) {
    return;
  }
  ___stack_chk_fail(uVar20);
  puRam00000001137ed660 = &UNK_10e527be8;
  uRam00000001137ed670 = 0x200000000;
  uRam00000001137ed668 = 0x1100000011;
  return;
}



/* Entry: 10ae414bc; end: 10ae417bf;  */

void FUN_10ae414bc(undefined8 param_1,long param_2,long param_3,ulong *param_4,ulong *param_5)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  bool bVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong *puVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  long lStack_5b8;
  ulong *puStack_5b0;
  ulong *puStack_5a8;
  long lStack_5a0;
  long lStack_598;
  undefined1 *puStack_590;
  code *pcStack_588;
  ulong *puStack_580;
  ulong *puStack_578;
  long lStack_568;
  ulong auStack_560 [4];
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  undefined8 uStack_4e8;
  char acStack_4d1 [257];
  undefined1 auStack_3d0 [32];
  ulong auStack_3b0 [4];
  ulong auStack_390 [4];
  ulong auStack_370 [4];
  ulong auStack_350 [4];
  ulong auStack_330 [4];
  undefined1 auStack_310 [32];
  undefined1 auStack_2f0 [32];
  undefined1 auStack_2d0 [608];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_370[1] = param_4[1];
  auStack_370[0] = *param_4;
  auStack_370[3] = param_4[3];
  auStack_370[2] = param_4[2];
  auStack_350[1] = param_4[10];
  auStack_350[0] = param_4[9];
  auStack_350[3] = param_4[0xc];
  auStack_350[2] = param_4[0xb];
  auStack_330[1] = param_4[0x13];
  auStack_330[0] = param_4[0x12];
  auStack_330[3] = param_4[0x15];
  auStack_330[2] = param_4[0x14];
  lStack_568 = param_2;
  func_0x000107c2b514(auStack_3d0,auStack_3b0,auStack_390,auStack_370,auStack_350,auStack_330);
  lVar34 = 0;
  do {
    puStack_580 = auStack_3b0;
    puStack_578 = auStack_390;
    func_0x000107c2b510(auStack_310 + lVar34,auStack_2f0 + lVar34,auStack_2d0 + lVar34,
                        (long)auStack_370 + lVar34,(long)auStack_350 + lVar34,
                        (long)auStack_330 + lVar34,0,auStack_3d0);
    lVar34 = lVar34 + 0x60;
  } while (lVar34 != 0x2a0);
  uVar33 = 0x100;
  puVar21 = param_5;
  FUN_10ae387b8(param_1,acStack_4d1,param_5,0x100);
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  uStack_528 = 0;
  uStack_530 = 0;
  bVar15 = true;
  do {
    if (!bVar15) {
      puVar21 = &uStack_500;
      func_0x000107c2b514(&uStack_540,&uStack_520,puVar21,&uStack_540,&uStack_520,&uStack_500);
    }
    if (uVar33 < 0x20) {
      param_5 = (ulong *)(param_3 + (uVar33 >> 3));
      uVar1 = (uint)uVar33 & 7;
      uVar22 = (*(byte *)((long)param_5 + 0x1c) >> (ulong)uVar1 & 1) << 3 |
               (*(byte *)((long)param_5 + 0x14) >> (ulong)uVar1 & 1) << 2 |
               (*(byte *)((long)param_5 + 0xc) >> (ulong)uVar1 & 1) << 1 |
               *(byte *)((long)param_5 + 4) >> (ulong)uVar1 & 1;
      if (uVar22 != 0) {
        lVar34 = (ulong)uVar22 * 0x40;
        puStack_580 = (ulong *)(&UNK_10e5277e8 + lVar34);
        puStack_578 = (ulong *)&UNK_10e527bc8;
        puVar21 = &uStack_500;
        func_0x000107c2b510(&uStack_540,&uStack_520,puVar21,&uStack_540,&uStack_520,&uStack_500,1,
                            &UNK_10e5277c8 + lVar34);
        bVar15 = false;
      }
      uVar1 = ((byte)((byte)param_5[3] >> (ulong)uVar1) & 1) << 3 |
              ((byte)((byte)param_5[2] >> (ulong)uVar1) & 1) << 2 |
              ((byte)((byte)param_5[1] >> (ulong)uVar1) & 1) << 1 |
              (byte)((byte)*param_5 >> (ulong)uVar1) & 1;
      if (uVar1 != 0) {
        lVar34 = (ulong)uVar1 * 0x40;
        puStack_580 = (ulong *)(&UNK_10e527428 + lVar34);
        puStack_578 = (ulong *)&UNK_10e527bc8;
        puVar21 = &uStack_500;
        func_0x000107c2b510(&uStack_540,&uStack_520,puVar21,&uStack_540,&uStack_520,&uStack_500,1,
                            &UNK_10e527408 + lVar34);
        bVar15 = false;
      }
    }
    cVar2 = acStack_4d1[uVar33];
    if (cVar2 != '\0') {
      uVar22 = (uint)cVar2;
      uVar1 = -uVar22;
      if (-1 < cVar2) {
        uVar1 = uVar22;
      }
      uVar24 = (ulong)(uVar1 >> 1);
      param_5 = auStack_370 + uVar24 * 0xc;
      puVar18 = auStack_350 + uVar24 * 0xc;
      if ((int)uVar22 < 0) {
        func_0x000107c2b518(auStack_560);
        puVar18 = auStack_560;
        if (!bVar15) goto LAB_10ae41720;
LAB_10ae416f4:
        uStack_538 = auStack_370[uVar24 * 0xc + 1];
        uStack_540 = *param_5;
        uStack_528 = auStack_370[uVar24 * 0xc + 3];
        uStack_530 = auStack_370[uVar24 * 0xc + 2];
        uStack_518 = puVar18[1];
        uStack_520 = *puVar18;
        uStack_508 = puVar18[3];
        uStack_510 = puVar18[2];
        uStack_4f8 = auStack_330[uVar24 * 0xc + 1];
        uStack_500 = auStack_330[uVar24 * 0xc];
        uStack_4e8 = *(undefined8 *)(auStack_310 + uVar24 * 0x60 + -8);
        uStack_4f0 = auStack_330[uVar24 * 0xc + 2];
      }
      else {
        if (bVar15) goto LAB_10ae416f4;
LAB_10ae41720:
        puStack_578 = auStack_330 + uVar24 * 0xc;
        puVar21 = &uStack_500;
        puStack_580 = puVar18;
        func_0x000107c2b510(&uStack_540,&uStack_520,puVar21,&uStack_540,&uStack_520,&uStack_500,0,
                            param_5);
      }
      bVar15 = false;
    }
    lVar34 = lStack_568;
    uVar33 = uVar33 - 1;
  } while (uVar33 != 0xffffffffffffffff);
  func_0x000107c2b50c(lStack_568,&uStack_540);
  func_0x000107c2b50c(lVar34 + 0x48,&uStack_520);
  lVar17 = lVar34 + 0x90;
  puVar18 = &uStack_500;
  func_0x000107c2b50c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lStack_598 = lVar34;
  pcStack_588 = FUN_10ae417c0;
  lStack_5b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar33 = (ulong)*(uint *)(lVar17 + 0x40);
  puStack_5b0 = &uStack_540;
  puStack_5a8 = param_5;
  lStack_5a0 = param_3;
  puStack_590 = &stack0xfffffffffffffff0;
  if (0 < (int)*(uint *)(lVar17 + 0x40)) {
    uVar23 = 0;
    lVar34 = 0x90;
    uVar24 = uVar33;
    do {
      uVar23 = *(ulong *)((long)puVar18 + lVar34) | uVar23;
      lVar34 = lVar34 + 8;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    if (uVar23 != 0) {
      uStack_5d8 = puVar18[0x13];
      uStack_5e0 = puVar18[0x12];
      uStack_5c8 = puVar18[0x15];
      uStack_5d0 = puVar18[0x14];
      func_0x000107c2b508(&uStack_5e0,&uStack_5e0,&uStack_5e0);
      uStack_5f8 = puVar21[1];
      uStack_600 = *puVar21;
      uStack_5e8 = puVar21[3];
      uStack_5f0 = puVar21[2];
      func_0x000107c2b508(&uStack_600,&uStack_600,&uStack_5e0);
      uVar24 = *puVar18;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar24;
      uVar27 = SUB168(auVar3 * ZEXT816(0xffffffff00000001),8);
      uVar28 = uVar24 - (uVar24 << 0x20);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar24;
      lVar34 = SUB168(auVar4 * ZEXT816(0xffffffff),8);
      uVar31 = (uVar24 << 0x20) - uVar24;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar24;
      uVar23 = SUB168(auVar5 * ZEXT816(0xffffffffffffffff),8);
      uVar25 = uVar23 + uVar31 + (ulong)CARRY8(-uVar24,uVar24);
      if (CARRY8(uVar23,uVar31) || CARRY8(uVar23 + uVar31,(ulong)CARRY8(-uVar24,uVar24))) {
        lVar34 = lVar34 + 1;
      }
      uVar24 = uVar25 + puVar18[1];
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar24;
      uVar31 = SUB168(auVar6 * ZEXT816(0xffffffffffffffff),8);
      uVar20 = uVar24 - (uVar24 << 0x20);
      uVar32 = (uVar24 << 0x20) - uVar24;
      uVar23 = uVar31 + uVar32;
      uVar26 = lVar34 + (ulong)CARRY8(uVar25,puVar18[1]) + (ulong)CARRY8(-uVar24,uVar24);
      uVar29 = uVar28 + CARRY8(uVar26,uVar23);
      uVar30 = (ulong)CARRY8(uVar28,(ulong)CARRY8(uVar26,uVar23));
      uVar25 = uVar20 + uVar27;
      uVar27 = (ulong)CARRY8(uVar20,uVar27);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar24;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar24;
      uVar24 = SUB168(auVar8 * ZEXT816(0xffffffff),8);
      bVar15 = CARRY8(uVar29,uVar24) || CARRY8(uVar29 + uVar24,(ulong)CARRY8(uVar31,uVar32));
      uVar24 = uVar29 + uVar24 + (ulong)CARRY8(uVar31,uVar32);
      uVar28 = uVar25 + uVar30 + (ulong)bVar15;
      if (CARRY8(uVar25,uVar30) || CARRY8(uVar25 + uVar30,(ulong)bVar15)) {
        uVar27 = uVar27 + 1;
      }
      bVar15 = CARRY8(uVar26 + uVar23,puVar18[2]);
      uVar23 = uVar26 + uVar23 + puVar18[2];
      uVar25 = uVar28 + CARRY8(uVar24,(ulong)bVar15);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar23;
      uVar31 = SUB168(auVar9 * ZEXT816(0xffffffffffffffff),8);
      uVar27 = uVar27 + SUB168(auVar7 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar28,(ulong)CARRY8(uVar24,(ulong)bVar15));
      uVar20 = uVar23 - (uVar23 << 0x20);
      uVar28 = (uVar23 << 0x20) - uVar23;
      bVar16 = CARRY8(uVar24 + bVar15,uVar31 + uVar28) ||
               CARRY8(uVar24 + bVar15 + uVar31 + uVar28,(ulong)CARRY8(-uVar23,uVar23));
      uVar26 = uVar25 + bVar16;
      uVar29 = (ulong)CARRY8(uVar25,(ulong)bVar16);
      uVar25 = uVar20 + uVar27;
      uVar27 = (ulong)CARRY8(uVar20,uVar27);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar23;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar23;
      uVar20 = SUB168(auVar11 * ZEXT816(0xffffffff),8);
      uVar24 = uVar24 + bVar15 + (ulong)CARRY8(-uVar23,uVar23) + uVar31 + uVar28;
      bVar15 = CARRY8(uVar26,uVar20) || CARRY8(uVar26 + uVar20,(ulong)CARRY8(uVar31,uVar28));
      uVar23 = uVar26 + uVar20 + (ulong)CARRY8(uVar31,uVar28);
      uVar28 = uVar25 + uVar29 + (ulong)bVar15;
      if (CARRY8(uVar25,uVar29) || CARRY8(uVar25 + uVar29,(ulong)bVar15)) {
        uVar27 = uVar27 + 1;
      }
      bVar15 = CARRY8(uVar24,puVar18[3]);
      uVar24 = uVar24 + puVar18[3];
      uVar29 = uVar28 + CARRY8(uVar23,(ulong)bVar15);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar24;
      uVar20 = SUB168(auVar12 * ZEXT816(0xffffffff00000001),8);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar24;
      uVar31 = SUB168(auVar13 * ZEXT816(0xffffffff),8);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar24;
      uVar26 = SUB168(auVar14 * ZEXT816(0xffffffffffffffff),8);
      uVar30 = uVar27 + SUB168(auVar10 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar28,(ulong)CARRY8(uVar23,(ulong)bVar15));
      uVar28 = uVar24 - (uVar24 << 0x20);
      uVar27 = (uVar24 << 0x20) - uVar24;
      uVar25 = uVar26 + uVar27;
      if (CARRY8(uVar26,uVar27)) {
        uVar31 = uVar31 + 1;
      }
      uVar27 = uVar23 + bVar15 + (ulong)CARRY8(-uVar24,uVar24) + uVar25;
      bVar15 = CARRY8(uVar23 + bVar15,uVar25) ||
               CARRY8(uVar23 + bVar15 + uVar25,(ulong)CARRY8(-uVar24,uVar24));
      bVar16 = CARRY8(uVar29,uVar31) || CARRY8(uVar29 + uVar31,(ulong)bVar15);
      uVar24 = uVar29 + uVar31 + (ulong)bVar15;
      uVar23 = uVar28 + uVar30 + (ulong)bVar16;
      if (CARRY8(uVar28,uVar30) || CARRY8(uVar28 + uVar30,(ulong)bVar16)) {
        uVar20 = uVar20 + 1;
      }
      uVar25 = (ulong)(byte)-((0xfffffffffffffffe < uVar27) + -1);
      uVar31 = uVar24 - uVar25;
      uVar25 = (ulong)(byte)-((-1 - (uVar24 < uVar25)) + (0xfffffffe < uVar31));
      uVar28 = (ulong)(uVar23 < uVar25);
      uVar26 = uVar20 - uVar28;
      bVar15 = (char)((-1 - (uVar20 < uVar28)) + (0xffffffff00000000 < uVar26)) == '\0';
      uVar28 = -(ulong)bVar15;
      uVar29 = -(ulong)!bVar15;
      uStack_620 = uVar28 & uVar27 + 1 | uVar29 & uVar27;
      uStack_618 = uVar28 & uVar31 - 0xffffffff | uVar29 & uVar24;
      uStack_610 = uVar28 & uVar23 - uVar25 | uVar29 & uVar23;
      uStack_608 = uVar28 & uVar26 + 0xffffffff | uVar20 & uVar29;
      if (((uStack_600 == uStack_620 && uStack_5f8 == uStack_618) && uStack_5f0 == uStack_610) &&
          uStack_5e8 == uStack_608) {
LAB_10ae41adc:
        uVar19 = 1;
        goto LAB_10ae41ab0;
      }
      puVar18 = puVar21;
      func_0x000107c34f78(puVar21,uVar33,lVar17 + 0xe8,uVar33);
      if ((int)puVar18 < 0) {
        func_0x000107c2b300(&uStack_670,puVar21,*(undefined8 *)(lVar17 + 0x10),
                            (long)*(int *)(lVar17 + 0x18));
        uStack_5f8 = uStack_668;
        uStack_600 = uStack_670;
        uStack_5e8 = uStack_658;
        uStack_5f0 = uStack_660;
        func_0x000107c2b508(&uStack_600,&uStack_600,&uStack_5e0);
        if (((uStack_600 == uStack_620 && uStack_5f8 == uStack_618) && uStack_5f0 == uStack_610) &&
            uStack_5e8 == uStack_608) goto LAB_10ae41adc;
      }
    }
  }
  uVar19 = 0;
LAB_10ae41ab0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5b8) {
    return;
  }
  ___stack_chk_fail(uVar19);
  puRam00000001137ed660 = &UNK_10e527be8;
  uRam00000001137ed670 = 0x200000000;
  uRam00000001137ed668 = 0x1100000011;
  return;
}



/* Entry: 10ae417c0; end: 10ae41ae7;  */

void FUN_10ae417c0(long param_1,ulong *param_2,ulong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  bool bVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar29 = (ulong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    uVar18 = 0;
    lVar19 = 0x90;
    uVar20 = uVar29;
    do {
      uVar18 = *(ulong *)((long)param_2 + lVar19) | uVar18;
      lVar19 = lVar19 + 8;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    if (uVar18 != 0) {
      uStack_58 = param_2[0x13];
      uStack_60 = param_2[0x12];
      uStack_48 = param_2[0x15];
      uStack_50 = param_2[0x14];
      func_0x000107c2b508(&uStack_60,&uStack_60,&uStack_60);
      uStack_78 = param_3[1];
      uStack_80 = *param_3;
      uStack_68 = param_3[3];
      uStack_70 = param_3[2];
      func_0x000107c2b508(&uStack_80,&uStack_80,&uStack_60);
      uVar20 = *param_2;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar20;
      uVar23 = SUB168(auVar1 * ZEXT816(0xffffffff00000001),8);
      uVar24 = uVar20 - (uVar20 << 0x20);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar20;
      lVar19 = SUB168(auVar2 * ZEXT816(0xffffffff),8);
      uVar27 = (uVar20 << 0x20) - uVar20;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar20;
      uVar18 = SUB168(auVar3 * ZEXT816(0xffffffffffffffff),8);
      uVar21 = uVar18 + uVar27 + (ulong)CARRY8(-uVar20,uVar20);
      if (CARRY8(uVar18,uVar27) || CARRY8(uVar18 + uVar27,(ulong)CARRY8(-uVar20,uVar20))) {
        lVar19 = lVar19 + 1;
      }
      uVar20 = uVar21 + param_2[1];
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar20;
      uVar27 = SUB168(auVar4 * ZEXT816(0xffffffffffffffff),8);
      uVar17 = uVar20 - (uVar20 << 0x20);
      uVar28 = (uVar20 << 0x20) - uVar20;
      uVar18 = uVar27 + uVar28;
      uVar22 = lVar19 + (ulong)CARRY8(uVar21,param_2[1]) + (ulong)CARRY8(-uVar20,uVar20);
      uVar25 = uVar24 + CARRY8(uVar22,uVar18);
      uVar26 = (ulong)CARRY8(uVar24,(ulong)CARRY8(uVar22,uVar18));
      uVar21 = uVar17 + uVar23;
      uVar23 = (ulong)CARRY8(uVar17,uVar23);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar20;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar20;
      uVar20 = SUB168(auVar6 * ZEXT816(0xffffffff),8);
      bVar13 = CARRY8(uVar25,uVar20) || CARRY8(uVar25 + uVar20,(ulong)CARRY8(uVar27,uVar28));
      uVar20 = uVar25 + uVar20 + (ulong)CARRY8(uVar27,uVar28);
      uVar24 = uVar21 + uVar26 + (ulong)bVar13;
      if (CARRY8(uVar21,uVar26) || CARRY8(uVar21 + uVar26,(ulong)bVar13)) {
        uVar23 = uVar23 + 1;
      }
      bVar13 = CARRY8(uVar22 + uVar18,param_2[2]);
      uVar18 = uVar22 + uVar18 + param_2[2];
      uVar21 = uVar24 + CARRY8(uVar20,(ulong)bVar13);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      uVar27 = SUB168(auVar7 * ZEXT816(0xffffffffffffffff),8);
      uVar23 = uVar23 + SUB168(auVar5 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar24,(ulong)CARRY8(uVar20,(ulong)bVar13));
      uVar17 = uVar18 - (uVar18 << 0x20);
      uVar24 = (uVar18 << 0x20) - uVar18;
      bVar14 = CARRY8(uVar20 + bVar13,uVar27 + uVar24) ||
               CARRY8(uVar20 + bVar13 + uVar27 + uVar24,(ulong)CARRY8(-uVar18,uVar18));
      uVar22 = uVar21 + bVar14;
      uVar25 = (ulong)CARRY8(uVar21,(ulong)bVar14);
      uVar21 = uVar17 + uVar23;
      uVar23 = (ulong)CARRY8(uVar17,uVar23);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar18;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar18;
      uVar17 = SUB168(auVar9 * ZEXT816(0xffffffff),8);
      uVar20 = uVar20 + bVar13 + (ulong)CARRY8(-uVar18,uVar18) + uVar27 + uVar24;
      bVar13 = CARRY8(uVar22,uVar17) || CARRY8(uVar22 + uVar17,(ulong)CARRY8(uVar27,uVar24));
      uVar18 = uVar22 + uVar17 + (ulong)CARRY8(uVar27,uVar24);
      uVar24 = uVar21 + uVar25 + (ulong)bVar13;
      if (CARRY8(uVar21,uVar25) || CARRY8(uVar21 + uVar25,(ulong)bVar13)) {
        uVar23 = uVar23 + 1;
      }
      bVar13 = CARRY8(uVar20,param_2[3]);
      uVar20 = uVar20 + param_2[3];
      uVar25 = uVar24 + CARRY8(uVar18,(ulong)bVar13);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar20;
      uVar17 = SUB168(auVar10 * ZEXT816(0xffffffff00000001),8);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar20;
      uVar27 = SUB168(auVar11 * ZEXT816(0xffffffff),8);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar20;
      uVar22 = SUB168(auVar12 * ZEXT816(0xffffffffffffffff),8);
      uVar26 = uVar23 + SUB168(auVar8 * ZEXT816(0xffffffff00000001),8) +
               (ulong)CARRY8(uVar24,(ulong)CARRY8(uVar18,(ulong)bVar13));
      uVar24 = uVar20 - (uVar20 << 0x20);
      uVar23 = (uVar20 << 0x20) - uVar20;
      uVar21 = uVar22 + uVar23;
      if (CARRY8(uVar22,uVar23)) {
        uVar27 = uVar27 + 1;
      }
      uVar23 = uVar18 + bVar13 + (ulong)CARRY8(-uVar20,uVar20) + uVar21;
      bVar13 = CARRY8(uVar18 + bVar13,uVar21) ||
               CARRY8(uVar18 + bVar13 + uVar21,(ulong)CARRY8(-uVar20,uVar20));
      bVar14 = CARRY8(uVar25,uVar27) || CARRY8(uVar25 + uVar27,(ulong)bVar13);
      uVar20 = uVar25 + uVar27 + (ulong)bVar13;
      uVar18 = uVar24 + uVar26 + (ulong)bVar14;
      if (CARRY8(uVar24,uVar26) || CARRY8(uVar24 + uVar26,(ulong)bVar14)) {
        uVar17 = uVar17 + 1;
      }
      uVar21 = (ulong)(byte)-((0xfffffffffffffffe < uVar23) + -1);
      uVar27 = uVar20 - uVar21;
      uVar21 = (ulong)(byte)-((-1 - (uVar20 < uVar21)) + (0xfffffffe < uVar27));
      uVar24 = (ulong)(uVar18 < uVar21);
      uVar22 = uVar17 - uVar24;
      bVar13 = (char)((-1 - (uVar17 < uVar24)) + (0xffffffff00000000 < uVar22)) == '\0';
      uVar24 = -(ulong)bVar13;
      uVar25 = -(ulong)!bVar13;
      uStack_a0 = uVar24 & uVar23 + 1 | uVar25 & uVar23;
      uStack_98 = uVar24 & uVar27 - 0xffffffff | uVar25 & uVar20;
      uStack_90 = uVar24 & uVar18 - uVar21 | uVar25 & uVar18;
      uStack_88 = uVar24 & uVar22 + 0xffffffff | uVar17 & uVar25;
      if (((uStack_80 == uStack_a0 && uStack_78 == uStack_98) && uStack_70 == uStack_90) &&
          uStack_68 == uStack_88) {
LAB_10ae41adc:
        uVar16 = 1;
        goto LAB_10ae41ab0;
      }
      puVar15 = param_3;
      func_0x000107c34f78(param_3,uVar29,param_1 + 0xe8,uVar29);
      if ((int)puVar15 < 0) {
        func_0x000107c2b300(&uStack_f0,param_3,*(undefined8 *)(param_1 + 0x10),
                            (long)*(int *)(param_1 + 0x18));
        uStack_78 = uStack_e8;
        uStack_80 = uStack_f0;
        uStack_68 = uStack_d8;
        uStack_70 = uStack_e0;
        func_0x000107c2b508(&uStack_80,&uStack_80,&uStack_60);
        if (((uStack_80 == uStack_a0 && uStack_78 == uStack_98) && uStack_70 == uStack_90) &&
            uStack_68 == uStack_88) goto LAB_10ae41adc;
      }
    }
  }
  uVar16 = 0;
LAB_10ae41ab0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail(uVar16);
  puRam00000001137ed660 = &UNK_10e527be8;
  uRam00000001137ed670 = 0x200000000;
  uRam00000001137ed668 = 0x1100000011;
  return;
}



/* Entry: 10ae41ae8; end: 10ae41b0b;  */

void FUN_10ae41ae8(void)

{
  puRam00000001137ed660 = &UNK_10e527be8;
  uRam00000001137ed670 = 0x200000000;
  uRam00000001137ed668 = 0x1100000011;
  return;
}



/* Entry: 10ae41b0c; end: 10ae41c3b;  */

undefined8 FUN_10ae41b0c(long *param_1,long param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*param_1 != 0) {
    return 1;
  }
  FUN_10ae2e1dc();
  if ((param_2 == 0) ||
     (lVar1 = param_2, func_0x000107c2b334(param_2,(long)param_3), (int)lVar1 == 0)) {
    func_0x000107c2b31c(param_2);
    uVar2 = 0;
  }
  else {
    *param_1 = param_2;
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 10ae41c3c; end: 10ae41fbf;  */

undefined8 *
FUN_10ae41c3c(undefined8 *param_1,ulong param_2,ulong param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 *param_7,long param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  int *piVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  bool bVar14;
  ulong uVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uStack_120;
  undefined8 auStack_118 [8];
  long lStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  ulong uStack_98;
  uint uStack_90;
  uint uStack_8c;
  long lStack_88;
  uint uStack_80;
  int iStack_7c;
  undefined8 *puStack_78;
  int iStack_6c;
  int iStack_68;
  undefined2 uStack_62;
  
  uVar8 = (uint)param_2;
  if ((param_2 & 0x3f) == 0) {
    if (uVar8 < 0x3ffffff) {
      uVar15 = param_3;
      func_0x00010ae2e380(param_3,3);
      func_0x000107c2b34c(param_7);
      puVar3 = param_7;
      func_0x000107c2b350();
      puVar4 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        iVar16 = uVar8 * 5;
        if ((int)uVar15 != 0) {
          iVar16 = uVar8 << 3;
        }
        uStack_8c = 0;
        if (iVar16 != 0) {
          uStack_8c = iVar16 - 1;
        }
        lVar11 = 1;
        puVar4 = param_1;
        FUN_10ae3358c(param_1,param_2);
        if ((int)puVar4 != 0) {
          iVar16 = 0;
          uStack_90 = 0;
          uStack_98 = param_3;
          lStack_88 = param_8;
          uStack_80 = uVar8;
          puStack_78 = puVar3;
          do {
            while( true ) {
              if (param_8 != 0) {
                puVar4 = (undefined8 *)0x0;
                lVar11 = param_8;
                (**(code **)(param_8 + 8))(0,iVar16);
                if ((int)puVar4 == 0) goto LAB_10ae41f94;
              }
              if (param_4 == (long *)0x0) break;
              uVar1 = *(uint *)(param_1 + 1);
              uVar2 = *(uint *)(param_4 + 1);
              iStack_7c = uVar1 - uVar2;
              uVar8 = uVar1;
              if ((int)uVar2 <= (int)uVar1) {
                uVar8 = uVar2;
              }
              uVar15 = (ulong)uVar8;
              if (iStack_7c == 0 || (int)uVar1 < (int)uVar2) {
                uVar1 = uVar2;
              }
              func_0x000107c2b34c(param_7);
              puVar4 = param_7;
              func_0x000107c2b350();
              if (puVar4 == (undefined8 *)0x0) {
                bVar14 = true;
              }
              else {
                puVar3 = puStack_78;
                func_0x000107c2b2fc(puStack_78,(long)(int)uVar1);
                if (((int)puVar3 == 0) ||
                   (puVar5 = puVar4, func_0x000107c2b2fc(puVar4,(long)(int)uVar1),
                   puVar3 = puStack_78, (int)puVar5 == 0)) {
                  bVar14 = true;
                  param_8 = lStack_88;
                }
                else {
                  lVar11 = *param_4;
                  func_0x00010ae31cf0(*puStack_78,*param_1,lVar11,uVar15,iStack_7c,*puVar4);
                  bVar14 = false;
                  *(uint *)(puVar3 + 1) = uVar1;
                  param_8 = lStack_88;
                }
              }
              if (*(char *)(param_7 + 5) == '\0') {
                lVar12 = param_7[2];
                param_7[2] = lVar12 + -1;
                param_7[4] = *(undefined8 *)(param_7[1] + (lVar12 + -1) * 8);
              }
              if (bVar14) goto LAB_10ae41f90;
              puVar4 = puStack_78;
              func_0x000107c2b340(puStack_78,param_6);
              param_2 = (ulong)uStack_80;
              if (0 < (int)puVar4) break;
LAB_10ae41e70:
              lVar11 = 1;
              puVar4 = param_1;
              FUN_10ae3358c(param_1,param_2);
              iVar16 = iVar16 + 1;
              if ((int)puVar4 == 0) goto LAB_10ae41f94;
            }
            puVar4 = param_1;
            func_0x000107c2b340(param_1,param_5);
            if ((int)puVar4 < 1) goto LAB_10ae41e70;
            puVar6 = &uStack_62;
            func_0x00010ae3287c(puVar6,param_1);
            if (((int)puVar6 != 0) &&
               (puVar4 = param_1, func_0x00010ae2e380(param_1,uStack_62), (int)puVar4 == 0))
            goto LAB_10ae41f28;
            puVar4 = (undefined8 *)0x113310e10;
            puVar3 = (undefined8 *)&UNK_10041134c;
            _pthread_once();
            puVar5 = puStack_78;
            if ((int)puVar4 != 0) {
              _abort();
              puVar9 = &uStack_120;
              pcStack_a8 = FUN_10ae41fc0;
              lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              puVar5 = auStack_118;
              lVar12 = lVar11;
              uStack_d0 = param_5;
              uStack_c8 = uVar15;
              lStack_c0 = param_8;
              puStack_b8 = param_7;
              puStack_b0 = &stack0xfffffffffffffff0;
              func_0x000107c2b51c();
              if ((int)puVar5 != 0) {
                func_0x000107c2b520();
                puVar5 = puVar4;
                puVar9 = puVar3;
                lVar12 = lVar11;
              }
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
                return puVar5;
              }
              ___stack_chk_fail();
              if (lVar12 != 0x20) {
                func_0x000107c2b29c(6,0,0x66,&UNK_10f6c7771,0x8a);
              }
              else {
                uVar13 = puVar9[1];
                uVar10 = *puVar9;
                uVar17 = puVar9[2];
                puVar5[4] = puVar9[3];
                puVar5[3] = uVar17;
                puVar5[2] = uVar13;
                puVar5[1] = uVar10;
                func_0x000107c2b26c(puVar5 + 5);
              }
              return (undefined8 *)(ulong)(lVar12 == 0x20);
            }
            puVar4 = puStack_78;
            func_0x000107c2b30c(puStack_78,param_1,0x1137ed648);
            if ((int)puVar4 == 0) {
LAB_10ae41f90:
              puVar4 = (undefined8 *)0x0;
              break;
            }
            piVar7 = &iStack_68;
            FUN_10ae309d0(piVar7,puVar5,uStack_98,param_7);
            if ((int)piVar7 == 0) goto LAB_10ae41f90;
            if (iStack_68 != 0) {
              piVar7 = &iStack_6c;
              FUN_10ae32c04(piVar7,param_1,0,param_7,0,param_8);
              if ((int)piVar7 == 0) goto LAB_10ae41f90;
              if (iStack_6c != 0) {
                puVar4 = (undefined8 *)0x1;
                break;
              }
            }
LAB_10ae41f28:
            if (uStack_90 == uStack_8c) {
              func_0x000107c2b29c(4,0,0x8d,&UNK_10f6c7473,0x46f);
              goto LAB_10ae41f90;
            }
            uVar8 = uStack_90 + 1;
            uVar15 = (ulong)uVar8;
            if (param_8 != 0) {
              puVar4 = (undefined8 *)0x2;
              (**(code **)(param_8 + 8))(2,uVar15,param_8);
              if ((int)puVar4 == 0) break;
            }
            iVar16 = iVar16 + 1;
            lVar11 = 1;
            puVar4 = param_1;
            uStack_90 = uVar8;
            FUN_10ae3358c(param_1,param_2);
          } while ((int)puVar4 != 0);
        }
      }
LAB_10ae41f94:
      if (*(char *)(param_7 + 5) != '\0') {
        return puVar4;
      }
      lVar11 = param_7[2];
      param_7[2] = lVar11 + -1;
      param_7[4] = *(undefined8 *)(param_7[1] + (lVar11 + -1) * 8);
      return puVar4;
    }
    uVar10 = 0x80;
    uVar13 = 0x42a;
  }
  else {
    uVar10 = 0x44;
    uVar13 = 0x405;
  }
  func_0x000107c2b29c(4,0,uVar10,&UNK_10f6c7473,uVar13);
  return (undefined8 *)0x0;
}



/* Entry: 10ae41fc0; end: 10ae42053;  */

undefined1 * FUN_10ae41fc0(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined1 auStack_78 [64];
  long lStack_38;
  
  puVar2 = &uStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_78;
  lVar3 = param_3;
  func_0x000107c2b51c();
  if ((int)puVar1 != 0) {
    func_0x000107c2b520();
    puVar1 = param_1;
    puVar2 = param_2;
    lVar3 = param_3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (lVar3 != 0x20) {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c7771,0x8a);
  }
  else {
    uVar5 = puVar2[1];
    uVar4 = *puVar2;
    uVar6 = puVar2[2];
    *(undefined8 *)(puVar1 + 0x20) = puVar2[3];
    *(undefined8 *)(puVar1 + 0x18) = uVar6;
    *(undefined8 *)(puVar1 + 0x10) = uVar5;
    *(undefined8 *)(puVar1 + 8) = uVar4;
    func_0x000107c2b26c(puVar1 + 0x28);
  }
  return (undefined1 *)(ulong)(lVar3 == 0x20);
}



/* Entry: 10ae42054; end: 10ae420cb;  */

bool FUN_10ae42054(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0x20) {
    func_0x000107c2b29c(6,0,0x66,&UNK_10f6c7771,0x8a);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    uVar3 = param_2[2];
    *(undefined8 *)(param_1 + 0x20) = param_2[3];
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 8) = uVar1;
    func_0x000107c2b26c(param_1 + 0x28);
  }
  return param_3 == 0x20;
}



/* Entry: 10ae420cc; end: 10ae4222b;  */

undefined8 *
FUN_10ae420cc(ushort *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,ulong param_6,undefined8 *param_7,long param_8,undefined8 param_9,
             long param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [32];
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_78 [4];
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_6 < 0x20) {
    puVar4 = (undefined8 *)0x89;
    puVar6 = (undefined8 *)0x9e;
LAB_10ae421ec:
    puVar5 = (undefined8 *)&UNK_10f6c7771;
    puVar1 = (undefined8 *)0x0;
    func_0x000107c2b29c(6,0);
    puVar2 = (undefined8 *)0x0;
    param_5 = unaff_x19;
    param_3 = unaff_x20;
    param_2 = unaff_x21;
  }
  else {
    if (param_10 != 0x20) {
      puVar4 = (undefined8 *)0x66;
      puVar6 = (undefined8 *)0xa2;
      goto LAB_10ae421ec;
    }
    func_0x000107c2b26c(param_4,param_9);
    if (param_8 != 0x20) {
LAB_10ae421d4:
      puVar4 = (undefined8 *)0x86;
      puVar6 = (undefined8 *)0xaa;
      unaff_x19 = param_5;
      unaff_x20 = param_3;
      unaff_x21 = param_2;
      unaff_x22 = param_7;
      goto LAB_10ae421ec;
    }
    puVar1 = auStack_78;
    func_0x000107c2b270(puVar1,param_9,param_7);
    if ((int)puVar1 == 0) goto LAB_10ae421d4;
    uStack_b8 = param_4[1];
    uStack_c0 = *param_4;
    uStack_a8 = param_4[3];
    uStack_b0 = param_4[2];
    uStack_98 = param_7[1];
    uStack_a0 = *param_7;
    uStack_88 = param_7[3];
    uStack_90 = param_7[2];
    unaff_x22 = (undefined8 *)(ulong)*param_1;
    func_0x000107c2b428();
    puVar5 = auStack_78;
    puVar2 = unaff_x22;
    puVar4 = param_2;
    FUN_10ae42d88(unaff_x22,puVar1);
    if ((int)puVar2 != 0) {
      *param_5 = 0x20;
      *param_3 = 0x20;
      puVar2 = (undefined8 *)0x1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_10ae4222c;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = unaff_x22;
  puStack_e8 = param_2;
  puStack_e0 = param_3;
  puStack_d8 = param_5;
  puStack_d0 = &stack0xfffffffffffffff0;
  if (puVar6 == (undefined8 *)0x20) {
    puVar3 = auStack_118;
    func_0x000107c2b270(puVar3,puVar2 + 1,puVar5);
    if ((int)puVar3 != 0) {
      uStack_158 = puVar5[1];
      uStack_160 = *puVar5;
      uStack_148 = puVar5[3];
      uStack_150 = puVar5[2];
      uStack_138 = puVar2[6];
      uStack_140 = puVar2[5];
      uStack_128 = puVar2[8];
      uStack_130 = puVar2[7];
      puVar6 = (undefined8 *)(ulong)*(ushort *)*puVar2;
      func_0x000107c2b428();
      FUN_10ae42d88(puVar6,puVar3,puVar1,auStack_118,&uStack_160);
      if ((int)puVar6 != 0) {
        *puVar4 = 0x20;
        puVar6 = (undefined8 *)0x1;
      }
      goto LAB_10ae422e8;
    }
  }
  func_0x000107c2b29c(6,0,0x86,&UNK_10f6c7771,0xc3);
  puVar6 = (undefined8 *)0x0;
LAB_10ae422e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return puVar6;
  }
  ___stack_chk_fail();
  return (undefined8 *)&UNK_110c7cc88;
}



/* Entry: 10ae4222c; end: 10ae42317;  */

undefined *
FUN_10ae4222c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             long param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 == 0x20) {
    puVar1 = auStack_58;
    func_0x000107c2b270(puVar1,param_1 + 1,param_4);
    if ((int)puVar1 != 0) {
      uStack_98 = param_4[1];
      uStack_a0 = *param_4;
      uStack_88 = param_4[3];
      uStack_90 = param_4[2];
      uStack_78 = param_1[6];
      uStack_80 = param_1[5];
      uStack_68 = param_1[8];
      uStack_70 = param_1[7];
      puVar2 = (undefined *)(ulong)*(ushort *)*param_1;
      func_0x000107c2b428();
      FUN_10ae42d88(puVar2,puVar1,param_2,auStack_58,&uStack_a0);
      if ((int)puVar2 != 0) {
        *param_3 = 0x20;
        puVar2 = (undefined *)0x1;
      }
      goto LAB_10ae422e8;
    }
  }
  func_0x000107c2b29c(6,0,0x86,&UNK_10f6c7771,0xc3);
  puVar2 = (undefined *)0x0;
LAB_10ae422e8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  return &UNK_110c7cc88;
}



/* Entry: 10ae42318; end: 10ae4233b;  */

undefined * FUN_10ae42318(void)

{
  return &UNK_110c7cc88;
}



/* Entry: 10ae4233c; end: 10ae4254b;  */

/* WARNING: Possible PIC construction at 0x00010ae423e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae423e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae42420) */
/* WARNING: Removing unreachable block (ram,0x00010ae42400) */

void FUN_10ae4233c(undefined8 *param_1,byte *****param_2,byte *****param_3,byte **param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char *param_9,byte *****param_10,byte *****param_11)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte *****pppppbVar5;
  byte *****pppppbVar6;
  byte *****pppppbVar7;
  long lVar8;
  byte *****pppppbVar9;
  byte *****pppppbVar10;
  byte *pbVar11;
  byte *****pppppbVar12;
  undefined1 *puVar13;
  byte *****pppppbVar14;
  byte *****pppppbVar15;
  byte *****pppppbVar16;
  byte **ppbVar17;
  undefined8 uVar18;
  char *pcVar19;
  byte *****pppppbVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *****pppppbVar23;
  undefined1 auStack_4d0 [24];
  long lStack_4b8;
  undefined1 *puStack_4b0;
  char *pcStack_4a8;
  byte ****ppppbStack_4a0;
  byte ****ppppbStack_498;
  byte ****ppppbStack_490;
  byte ****ppppbStack_488;
  byte *pbStack_480;
  undefined8 uStack_478;
  char *pcStack_470;
  byte ****ppppbStack_468;
  undefined1 ****ppppuStack_460;
  code *pcStack_458;
  undefined1 auStack_450 [8];
  byte abStack_448 [32];
  long lStack_428;
  byte ****ppppbStack_420;
  byte ****ppppbStack_418;
  byte ****ppppbStack_410;
  byte ****ppppbStack_408;
  byte ****ppppbStack_400;
  byte ****ppppbStack_3f8;
  byte ****ppppbStack_3f0;
  long *plStack_3e8;
  undefined1 ***pppuStack_3e0;
  code *pcStack_3d8;
  byte ****ppppbStack_3d0;
  byte ****ppppbStack_3c8;
  byte ****ppppbStack_3c0;
  byte ***pppbStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  byte ****ppppbStack_398;
  byte ****ppppbStack_390;
  byte ****ppppbStack_388;
  byte ***apppbStack_380 [10];
  byte ***apppbStack_330 [8];
  byte ***pppbStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  byte ***apppbStack_262 [8];
  byte ***apppbStack_222 [8];
  byte *pbStack_1e2;
  long lStack_1d8;
  undefined1 *puStack_1d0;
  char *pcStack_1c8;
  byte *pbStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  byte ****ppppbStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 *puStack_180;
  byte ****ppppbStack_178;
  undefined8 uStack_168;
  byte ****ppppbStack_160;
  byte ***apppbStack_158 [4];
  long lStack_138;
  undefined1 *puStack_130;
  byte ****ppppbStack_128;
  undefined8 *puStack_120;
  byte ****ppppbStack_118;
  byte ****ppppbStack_110;
  byte *pbStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  char *pcStack_d0;
  byte ****ppppbStack_c8;
  byte ****ppppbStack_c0;
  undefined1 *puStack_b8;
  byte ****ppppbStack_b0;
  char *pcStack_a0;
  byte ****ppppbStack_98;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  ppppbStack_98 = (byte ****)param_10;
  pcStack_a0 = param_9;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c2b3c4(auStack_88,*(undefined8 *)(param_5 + 0x18),&UNK_10e525a20);
  pcVar1 = pcStack_a0;
  pppppbVar20 = *(byte ******)(param_5 + 0x18);
  ppppbStack_c0 = (byte ****)param_11;
  ppppbStack_c8 = ppppbStack_98;
  pcStack_d0 = pcStack_a0;
  ppppbStack_128 = (byte ****)param_11;
  uStack_d8 = 0x10ae423e8;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = param_8;
  puStack_130 = auStack_88;
  puStack_120 = param_1;
  ppppbStack_118 = (byte ****)param_2;
  ppppbStack_110 = (byte ****)param_3;
  pbStack_108 = (byte *)param_4;
  lStack_100 = param_5;
  uStack_f8 = param_6;
  uStack_f0 = param_7;
  uStack_e8 = param_8;
  puStack_e0 = &stack0xfffffffffffffff0;
  puStack_b8 = auStack_88;
  ppppbStack_b0 = (byte ****)pppppbVar20;
  _bzero(param_1,0x2d0);
  _bzero(param_1 + 2,600);
  *(undefined4 *)(param_1 + 0x59) = 1;
  *param_1 = param_7;
  param_1[1] = param_6;
  pppppbVar9 = (byte *****)apppbStack_158;
  pppppbVar7 = &ppppbStack_160;
  lVar8 = param_5;
  pppppbVar23 = param_2;
  pppppbVar15 = param_3;
  ppbVar17 = param_4;
  uVar18 = uStack_168;
  pcVar19 = pcVar1;
  puStack_180 = auStack_88;
  ppppbStack_178 = (byte ****)pppppbVar20;
  (**(code **)(param_5 + 0x30))();
  if ((int)lVar8 == 0) {
LAB_10ae424ec:
    if (param_1[2] == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      (**(code **)(param_1[2] + 0x18))(param_1 + 2);
      plVar3 = (long *)0x0;
      param_1[2] = 0;
    }
  }
  else {
    pppppbVar9 = (byte *****)apppbStack_158;
    puVar4 = param_1;
    pppppbVar23 = (byte *****)ppppbStack_c8;
    pppppbVar15 = (byte *****)ppppbStack_c0;
    FUN_10ae4254c();
    pppppbVar7 = (byte *****)ppppbStack_160;
    if ((int)puVar4 == 0) goto LAB_10ae424ec;
    plVar3 = (long *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1c8 = pcVar1;
  pcStack_188 = FUN_10ae4254c;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2e8 = 0;
  pppbStack_2f0 = (byte ***)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  puVar4 = (undefined8 *)0x28;
  pppppbVar10 = pppppbVar9;
  pppppbVar12 = pppppbVar7;
  pppppbVar14 = pppppbVar23;
  pppppbVar16 = pppppbVar15;
  puStack_1d0 = auStack_88;
  pbStack_1c0 = (byte *)param_4;
  lStack_1b8 = param_5;
  uStack_1b0 = param_6;
  uStack_1a8 = param_7;
  ppppbStack_1a0 = (byte ****)pppppbVar20;
  puStack_198 = param_1;
  ppuStack_190 = &puStack_e0;
  _malloc();
  if (puVar4 == (undefined8 *)0x0) {
LAB_10ae4282c:
    func_0x000107c2b204(&pppbStack_2f0);
LAB_10ae42834:
    pppppbVar5 = pppppbVar20;
    pppppbVar20 = (byte *****)0x0;
  }
  else {
    *puVar4 = 0x20;
    pppbStack_2f0 = (byte ***)(puVar4 + 1);
    *pppbStack_2f0 = &pbStack_1e2;
    puVar4[3] = 10;
    puVar4[2] = 0;
    uStack_2d8._0_3_ = (uint3)(ushort)uStack_2d8;
    *(undefined2 *)(puVar4 + 4) = 0;
    pppppbVar10 = (byte *****)&UNK_10f6c781a;
    iVar2 = (int)&pppbStack_2f0;
    pppppbVar12 = (byte *****)0x4;
    func_0x000107c2b21c();
    if (iVar2 == 0) goto LAB_10ae4282c;
    iVar2 = (int)&pppbStack_2f0;
    pppppbVar10 = (byte *****)0x20;
    func_0x000107c2b228();
    if (iVar2 == 0) goto LAB_10ae4282c;
    pppppbVar10 = (byte *****)(ulong)*(ushort *)plVar3[1];
    iVar2 = (int)&pppbStack_2f0;
    func_0x000107c2b228();
    if (iVar2 == 0) goto LAB_10ae4282c;
    pppppbVar10 = (byte *****)(ulong)*(ushort *)*plVar3;
    pppppbVar20 = (byte *****)&pppbStack_2f0;
    func_0x000107c2b228();
    pppppbVar5 = (byte *****)&pppbStack_2f0;
    func_0x000107c2b204();
    if ((int)pppppbVar20 == 0) goto LAB_10ae42834;
    (**(code **)(plVar3[1] + 8))();
    ppppbStack_3d0 = (byte ****)0x0;
    ppppbStack_3c8 = (byte ****)0x0;
    pcVar19 = "psk_id_hash";
    pppppbVar10 = (byte *****)apppbStack_222;
    pppppbVar12 = &ppppbStack_388;
    ppbVar17 = &pbStack_1e2;
    pppppbVar14 = (byte *****)0x0;
    pppppbVar16 = (byte *****)0x0;
    uVar18 = 10;
    pppppbVar20 = pppppbVar5;
    FUN_10ae42e68();
    if ((int)pppppbVar20 != 0) {
      pcVar19 = "info_hash";
      pppppbVar10 = (byte *****)apppbStack_262;
      pppppbVar12 = &ppppbStack_390;
      ppbVar17 = &pbStack_1e2;
      pppppbVar14 = (byte *****)0x0;
      pppppbVar16 = (byte *****)0x0;
      uVar18 = 10;
      pppppbVar20 = pppppbVar5;
      ppppbStack_3d0 = (byte ****)pppppbVar23;
      ppppbStack_3c8 = (byte ****)pppppbVar15;
      FUN_10ae42e68();
      if ((int)pppppbVar20 != 0) {
        uStack_3b0 = 0;
        uStack_3a8 = 0;
        uStack_3a0 = 0;
        puVar4 = (undefined8 *)0x28;
        _malloc();
        pppppbVar20 = (byte *****)0x0;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0x20;
          pppbStack_3b8 = (byte ***)(puVar4 + 1);
          *pppbStack_3b8 = (byte **)&pppbStack_2f0;
          puVar4[3] = 0x81;
          puVar4[2] = 0;
          uStack_3a0._0_3_ = (uint3)(ushort)uStack_3a0;
          *(undefined2 *)(puVar4 + 4) = 0;
          pppppbVar20 = (byte *****)&pppbStack_3b8;
          pppppbVar10 = (byte *****)0x0;
          func_0x000107c2b218();
          if ((int)pppppbVar20 != 0) {
            pppppbVar20 = (byte *****)&pppbStack_3b8;
            pppppbVar10 = (byte *****)apppbStack_222;
            func_0x000107c2b21c();
            pppppbVar12 = (byte *****)ppppbStack_388;
            if ((int)pppppbVar20 != 0) {
              pppppbVar20 = (byte *****)&pppbStack_3b8;
              pppppbVar10 = (byte *****)apppbStack_262;
              func_0x000107c2b21c();
              pppppbVar12 = (byte *****)ppppbStack_390;
              if ((int)pppppbVar20 != 0) {
                pppppbVar20 = (byte *****)&pppbStack_3b8;
                pppppbVar12 = &ppppbStack_398;
                pppppbVar10 = (byte *****)0x0;
                func_0x000107c2b208();
                if ((int)pppppbVar20 != 0) {
                  ppppbStack_3d0 = (byte ****)0x0;
                  ppppbStack_3c8 = (byte ****)0x0;
                  pcVar19 = "secret";
                  pppppbVar10 = (byte *****)apppbStack_330;
                  pppppbVar12 = &ppppbStack_3c0;
                  ppbVar17 = &pbStack_1e2;
                  uVar18 = 10;
                  pppppbVar6 = pppppbVar5;
                  pppppbVar14 = pppppbVar9;
                  pppppbVar16 = pppppbVar7;
                  FUN_10ae42e68();
                  pppppbVar20 = pppppbVar6;
                  if ((int)pppppbVar6 != 0) {
                    (**(code **)(*plVar3 + 8))();
                    pppppbVar23 = (byte *****)(ulong)*(byte *)pppppbVar6;
                    ppppbStack_3d0 = &pppbStack_2f0;
                    ppppbStack_3c8 = ppppbStack_398;
                    pcVar19 = "key";
                    pppppbVar10 = (byte *****)apppbStack_380;
                    pppppbVar14 = (byte *****)apppbStack_330;
                    ppbVar17 = &pbStack_1e2;
                    uVar18 = 10;
                    pppppbVar20 = pppppbVar5;
                    pppppbVar12 = pppppbVar23;
                    pppppbVar16 = (byte *****)ppppbStack_3c0;
                    FUN_10ae42c68();
                    pppppbVar7 = (byte *****)ppppbStack_3c0;
                    pppppbVar9 = pppppbVar6;
                    if ((int)pppppbVar20 != 0) {
                      pppppbVar20 = (byte *****)(plVar3 + 2);
                      pppppbVar12 = (byte *****)apppbStack_380;
                      pppppbVar16 = (byte *****)0x0;
                      ppbVar17 = (byte **)0x0;
                      pppppbVar10 = pppppbVar6;
                      pppppbVar14 = pppppbVar23;
                      func_0x000107c2b3cc();
                      if ((int)pppppbVar20 != 0) {
                        pppppbVar12 = (byte *****)(ulong)*(byte *)((long)pppppbVar6 + 1);
                        pppppbVar9 = (byte *****)&pppbStack_2f0;
                        ppppbStack_3c8 = ppppbStack_398;
                        pcVar19 = "base_nonce";
                        pppppbVar10 = (byte *****)(plVar3 + 0x4d);
                        pppppbVar14 = (byte *****)apppbStack_330;
                        ppbVar17 = &pbStack_1e2;
                        uVar18 = 10;
                        pppppbVar20 = pppppbVar5;
                        pppppbVar16 = (byte *****)ppppbStack_3c0;
                        ppppbStack_3d0 = (byte ****)pppppbVar9;
                        FUN_10ae42c68();
                        if ((int)pppppbVar20 != 0) {
                          pppppbVar12 = (byte *****)(ulong)*(uint *)((long)pppppbVar5 + 4);
                          ppppbStack_3c8 = ppppbStack_398;
                          pcVar19 = "exp";
                          pppppbVar10 = (byte *****)(plVar3 + 0x50);
                          pppppbVar14 = (byte *****)apppbStack_330;
                          ppbVar17 = &pbStack_1e2;
                          uVar18 = 10;
                          pppppbVar20 = pppppbVar5;
                          pppppbVar16 = (byte *****)ppppbStack_3c0;
                          ppppbStack_3d0 = (byte ****)pppppbVar9;
                          FUN_10ae42c68();
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
    return;
  }
  ___stack_chk_fail();
  puVar13 = auStack_450;
  pcStack_3d8 = FUN_10ae42870;
  lStack_428 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppbStack_420 = (byte ****)param_2;
  ppppbStack_418 = (byte ****)param_3;
  ppppbStack_410 = (byte ****)pppppbVar15;
  ppppbStack_408 = (byte ****)pppppbVar23;
  ppppbStack_400 = (byte ****)pppppbVar9;
  ppppbStack_3f8 = (byte ****)pppppbVar7;
  ppppbStack_3f0 = (byte ****)pppppbVar5;
  plStack_3e8 = plVar3;
  pppuStack_3e0 = &ppuStack_190;
  _bzero();
  _bzero(pppppbVar20 + 2,600);
  *(undefined4 *)(pppppbVar20 + 0x59) = 0;
  *pppppbVar20 = (byte ****)pppppbVar14;
  pppppbVar20[1] = (byte ****)pppppbVar12;
  pbVar11 = abStack_448;
  pppppbVar7 = pppppbVar10;
  (*(code *)(*pppppbVar10)[7])();
  if ((int)pppppbVar7 == 0) {
LAB_10ae42920:
    if (pppppbVar20[2] == (byte ****)0x0) {
      lVar8 = 0;
    }
    else {
      (*(code *)pppppbVar20[2][3])(pppppbVar20 + 2);
      lVar8 = 0;
      pppppbVar20[2] = (byte ****)0x0;
    }
  }
  else {
    pbVar11 = abStack_448;
    puVar13 = (undefined1 *)0x20;
    pppppbVar7 = pppppbVar20;
    FUN_10ae4254c();
    if ((int)pppppbVar7 == 0) goto LAB_10ae42920;
    lVar8 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_428) {
    return;
  }
  ___stack_chk_fail();
  pcStack_4a8 = pcVar1;
  pcStack_458 = FUN_10ae4297c;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_4b0 = auStack_88;
  ppppbStack_4a0 = (byte ****)pppppbVar10;
  ppppbStack_498 = (byte ****)pppppbVar12;
  ppppbStack_490 = (byte ****)pppppbVar14;
  ppppbStack_488 = (byte ****)pppppbVar16;
  pbStack_480 = (byte *)ppbVar17;
  uStack_478 = uVar18;
  pcStack_470 = pcVar19;
  ppppbStack_468 = (byte ****)pppppbVar20;
  ppppuStack_460 = &pppuStack_3e0;
  if (*(int *)(lVar8 + 0x2c8) == 0) {
    if (*(long *)(lVar8 + 0x2c0) != -1) {
      plVar3 = (long *)(lVar8 + 0x10);
      FUN_10ae42ab4(lVar8,auStack_4d0,*(undefined1 *)(*plVar3 + 1));
      func_0x000107c2b3d4();
      if ((int)plVar3 != 0) {
        *(long *)(lVar8 + 0x2c0) = *(long *)(lVar8 + 0x2c0) + 1;
        plVar3 = (long *)0x1;
      }
      goto LAB_10ae429d4;
    }
    puVar13 = (undefined1 *)0x45;
    uVar18 = 0x227;
  }
  else {
    puVar13 = (undefined1 *)0x42;
    uVar18 = 0x223;
  }
  pbVar11 = (byte *)0x0;
  func_0x000107c2b29c(6,0,puVar13,&UNK_10f6c7771,uVar18);
  plVar3 = (long *)0x0;
LAB_10ae429d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4b8) {
    return;
  }
  ___stack_chk_fail();
  if (puVar13 != (undefined1 *)0x0) {
    _bzero(pbVar11,puVar13);
  }
  uVar21 = plVar3[0x58];
  lVar8 = -1;
  do {
    (pbVar11 + (long)puVar13)[lVar8] = (byte)uVar21;
    uVar21 = uVar21 >> 8;
    lVar8 = lVar8 + -1;
  } while (lVar8 != -9);
  if (puVar13 != (undefined1 *)0x0) {
    pbVar22 = (byte *)(plVar3 + 0x4d);
    do {
      *pbVar11 = *pbVar11 ^ *pbVar22;
      puVar13 = puVar13 + -1;
      pbVar22 = pbVar22 + 1;
      pbVar11 = pbVar11 + 1;
    } while (puVar13 != (undefined1 *)0x0);
  }
  return;
}



/* Entry: 10ae4254c; end: 10ae4286f;  */

void FUN_10ae4254c(long *param_1,byte *****param_2,byte *****param_3,byte *****param_4)

{
  int iVar1;
  undefined8 *puVar2;
  byte *****pppppbVar3;
  byte *****pppppbVar4;
  byte *****pppppbVar5;
  long lVar6;
  long *plVar7;
  byte *****pppppbVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *****pppppbVar14;
  undefined1 auStack_350 [24];
  long lStack_338;
  undefined1 auStack_2d0 [8];
  byte abStack_2c8 [32];
  long lStack_2a8;
  byte ***pppbStack_240;
  byte ***pppbStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  byte ***pppbStack_218;
  byte ****ppppbStack_210;
  byte ****ppppbStack_208;
  byte ***apppbStack_200 [10];
  byte ***apppbStack_1b0 [8];
  byte ***pppbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte ***apppbStack_e2 [8];
  byte ***apppbStack_a2 [8];
  byte *pbStack_62;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_168 = 0;
  pppbStack_170 = (byte ***)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  puVar2 = (undefined8 *)0x28;
  pppppbVar8 = param_2;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
LAB_10ae4282c:
    func_0x000107c2b204(&pppbStack_170);
LAB_10ae42834:
    pppppbVar5 = (byte *****)0x0;
  }
  else {
    *puVar2 = 0x20;
    pppbStack_170 = (byte ***)(puVar2 + 1);
    *pppbStack_170 = &pbStack_62;
    puVar2[3] = 10;
    puVar2[2] = 0;
    uStack_158._0_3_ = (uint3)(ushort)uStack_158;
    *(undefined2 *)(puVar2 + 4) = 0;
    pppppbVar8 = (byte *****)&UNK_10f6c781a;
    iVar1 = (int)&pppbStack_170;
    param_3 = (byte *****)0x4;
    func_0x000107c2b21c();
    if (iVar1 == 0) goto LAB_10ae4282c;
    iVar1 = (int)&pppbStack_170;
    pppppbVar8 = (byte *****)0x20;
    func_0x000107c2b228();
    if (iVar1 == 0) goto LAB_10ae4282c;
    pppppbVar8 = (byte *****)(ulong)*(ushort *)param_1[1];
    iVar1 = (int)&pppbStack_170;
    func_0x000107c2b228();
    if (iVar1 == 0) goto LAB_10ae4282c;
    pppppbVar8 = (byte *****)(ulong)*(ushort *)*param_1;
    iVar1 = (int)&pppbStack_170;
    func_0x000107c2b228();
    pppppbVar3 = (byte *****)&pppbStack_170;
    func_0x000107c2b204();
    if (iVar1 == 0) goto LAB_10ae42834;
    (**(code **)(param_1[1] + 8))();
    pppppbVar8 = (byte *****)apppbStack_a2;
    param_3 = &ppppbStack_208;
    param_4 = (byte *****)0x0;
    pppppbVar5 = pppppbVar3;
    FUN_10ae42e68();
    if ((int)pppppbVar5 != 0) {
      pppppbVar8 = (byte *****)apppbStack_e2;
      param_3 = &ppppbStack_210;
      param_4 = (byte *****)0x0;
      pppppbVar5 = pppppbVar3;
      FUN_10ae42e68();
      if ((int)pppppbVar5 != 0) {
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        puVar2 = (undefined8 *)0x28;
        _malloc();
        pppppbVar5 = (byte *****)0x0;
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = 0x20;
          pppbStack_238 = (byte ***)(puVar2 + 1);
          *pppbStack_238 = (byte **)&pppbStack_170;
          puVar2[3] = 0x81;
          puVar2[2] = 0;
          uStack_220._0_3_ = (uint3)(ushort)uStack_220;
          *(undefined2 *)(puVar2 + 4) = 0;
          pppppbVar5 = (byte *****)&pppbStack_238;
          pppppbVar8 = (byte *****)0x0;
          func_0x000107c2b218();
          if ((int)pppppbVar5 != 0) {
            pppppbVar5 = (byte *****)&pppbStack_238;
            pppppbVar8 = (byte *****)apppbStack_a2;
            func_0x000107c2b21c();
            param_3 = (byte *****)ppppbStack_208;
            if ((int)pppppbVar5 != 0) {
              pppppbVar5 = (byte *****)&pppbStack_238;
              pppppbVar8 = (byte *****)apppbStack_e2;
              func_0x000107c2b21c();
              param_3 = (byte *****)ppppbStack_210;
              if ((int)pppppbVar5 != 0) {
                pppppbVar5 = (byte *****)&pppbStack_238;
                param_3 = (byte *****)&pppbStack_218;
                pppppbVar8 = (byte *****)0x0;
                func_0x000107c2b208();
                if ((int)pppppbVar5 != 0) {
                  pppppbVar8 = (byte *****)apppbStack_1b0;
                  param_3 = (byte *****)&pppbStack_240;
                  pppppbVar4 = pppppbVar3;
                  FUN_10ae42e68();
                  pppppbVar5 = pppppbVar4;
                  param_4 = param_2;
                  if ((int)pppppbVar4 != 0) {
                    (**(code **)(*param_1 + 8))();
                    pppppbVar14 = (byte *****)(ulong)*(byte *)pppppbVar4;
                    pppppbVar8 = (byte *****)apppbStack_200;
                    param_4 = (byte *****)apppbStack_1b0;
                    pppppbVar5 = pppppbVar3;
                    param_3 = pppppbVar14;
                    FUN_10ae42c68();
                    if ((int)pppppbVar5 != 0) {
                      pppppbVar5 = (byte *****)(param_1 + 2);
                      param_3 = (byte *****)apppbStack_200;
                      pppppbVar8 = pppppbVar4;
                      func_0x000107c2b3cc();
                      param_4 = pppppbVar14;
                      if ((int)pppppbVar5 != 0) {
                        param_3 = (byte *****)(ulong)*(byte *)((long)pppppbVar4 + 1);
                        pppppbVar8 = (byte *****)(param_1 + 0x4d);
                        param_4 = (byte *****)apppbStack_1b0;
                        pppppbVar5 = pppppbVar3;
                        FUN_10ae42c68();
                        if ((int)pppppbVar5 != 0) {
                          param_3 = (byte *****)(ulong)*(uint *)((long)pppppbVar3 + 4);
                          pppppbVar8 = (byte *****)(param_1 + 0x50);
                          param_4 = (byte *****)apppbStack_1b0;
                          FUN_10ae42c68();
                          pppppbVar5 = pppppbVar3;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = auStack_2d0;
  lStack_2a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _bzero();
  _bzero(pppppbVar5 + 2,600);
  *(undefined4 *)(pppppbVar5 + 0x59) = 0;
  *pppppbVar5 = (byte ****)param_4;
  pppppbVar5[1] = (byte ****)param_3;
  pbVar9 = abStack_2c8;
  (*(code *)(*pppppbVar8)[7])();
  if ((int)pppppbVar8 == 0) {
LAB_10ae42920:
    if (pppppbVar5[2] == (byte ****)0x0) {
      lVar6 = 0;
    }
    else {
      (*(code *)pppppbVar5[2][3])(pppppbVar5 + 2);
      lVar6 = 0;
      pppppbVar5[2] = (byte ****)0x0;
    }
  }
  else {
    pbVar9 = abStack_2c8;
    puVar10 = (undefined1 *)0x20;
    pppppbVar8 = pppppbVar5;
    FUN_10ae4254c();
    if ((int)pppppbVar8 == 0) goto LAB_10ae42920;
    lVar6 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2a8) {
    return;
  }
  ___stack_chk_fail();
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(lVar6 + 0x2c8) == 0) {
    if (*(long *)(lVar6 + 0x2c0) != -1) {
      plVar7 = (long *)(lVar6 + 0x10);
      FUN_10ae42ab4(lVar6,auStack_350,*(undefined1 *)(*plVar7 + 1));
      func_0x000107c2b3d4();
      if ((int)plVar7 != 0) {
        *(long *)(lVar6 + 0x2c0) = *(long *)(lVar6 + 0x2c0) + 1;
        plVar7 = (long *)0x1;
      }
      goto LAB_10ae429d4;
    }
    puVar10 = (undefined1 *)0x45;
    uVar11 = 0x227;
  }
  else {
    puVar10 = (undefined1 *)0x42;
    uVar11 = 0x223;
  }
  pbVar9 = (byte *)0x0;
  func_0x000107c2b29c(6,0,puVar10,&UNK_10f6c7771,uVar11);
  plVar7 = (long *)0x0;
LAB_10ae429d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_338) {
    return;
  }
  ___stack_chk_fail();
  if (puVar10 != (undefined1 *)0x0) {
    _bzero(pbVar9,puVar10);
  }
  uVar12 = plVar7[0x58];
  lVar6 = -1;
  do {
    (pbVar9 + (long)puVar10)[lVar6] = (byte)uVar12;
    uVar12 = uVar12 >> 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != -9);
  if (puVar10 != (undefined1 *)0x0) {
    pbVar13 = (byte *)(plVar7 + 0x4d);
    do {
      *pbVar9 = *pbVar9 ^ *pbVar13;
      puVar10 = puVar10 + -1;
      pbVar13 = pbVar13 + 1;
      pbVar9 = pbVar9 + 1;
    } while (puVar10 != (undefined1 *)0x0);
  }
  return;
}



/* Entry: 10ae42870; end: 10ae4297b;  */

void FUN_10ae42870(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined1 auStack_100 [24];
  long lStack_e8;
  undefined1 auStack_80 [8];
  byte abStack_78 [32];
  long lStack_58;
  
  puVar5 = auStack_80;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _bzero(param_1,0x2d0);
  _bzero(param_1 + 2,600);
  *(undefined4 *)(param_1 + 0x59) = 0;
  *param_1 = param_4;
  param_1[1] = param_3;
  pbVar4 = abStack_78;
  (**(code **)(*param_2 + 0x38))();
  if ((int)param_2 == 0) {
LAB_10ae42920:
    if (param_1[2] == 0) {
      lVar2 = 0;
    }
    else {
      (**(code **)(param_1[2] + 0x18))(param_1 + 2);
      lVar2 = 0;
      param_1[2] = 0;
    }
  }
  else {
    pbVar4 = abStack_78;
    puVar5 = (undefined1 *)0x20;
    puVar1 = param_1;
    FUN_10ae4254c();
    if ((int)puVar1 == 0) goto LAB_10ae42920;
    lVar2 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(lVar2 + 0x2c8) == 0) {
    if (*(long *)(lVar2 + 0x2c0) != -1) {
      plVar3 = (long *)(lVar2 + 0x10);
      FUN_10ae42ab4(lVar2,auStack_100,*(undefined1 *)(*plVar3 + 1));
      func_0x000107c2b3d4();
      if ((int)plVar3 != 0) {
        *(long *)(lVar2 + 0x2c0) = *(long *)(lVar2 + 0x2c0) + 1;
        plVar3 = (long *)0x1;
      }
      goto LAB_10ae429d4;
    }
    puVar5 = (undefined1 *)0x45;
    uVar6 = 0x227;
  }
  else {
    puVar5 = (undefined1 *)0x42;
    uVar6 = 0x223;
  }
  pbVar4 = (byte *)0x0;
  func_0x000107c2b29c(6,0,puVar5,&UNK_10f6c7771,uVar6);
  plVar3 = (long *)0x0;
LAB_10ae429d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  if (puVar5 != (undefined1 *)0x0) {
    _bzero(pbVar4,puVar5);
  }
  uVar7 = plVar3[0x58];
  lVar2 = -1;
  do {
    (pbVar4 + (long)puVar5)[lVar2] = (byte)uVar7;
    uVar7 = uVar7 >> 8;
    lVar2 = lVar2 + -1;
  } while (lVar2 != -9);
  if (puVar5 != (undefined1 *)0x0) {
    pbVar8 = (byte *)(plVar3 + 0x4d);
    do {
      *pbVar4 = *pbVar4 ^ *pbVar8;
      puVar5 = puVar5 + -1;
      pbVar8 = pbVar8 + 1;
      pbVar4 = pbVar4 + 1;
    } while (puVar5 != (undefined1 *)0x0);
  }
  return;
}



/* Entry: 10ae4297c; end: 10ae42ab3;  */

void FUN_10ae4297c(long param_1,byte *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x2c8) == 0) {
    if (*(long *)(param_1 + 0x2c0) != -1) {
      plVar1 = (long *)(param_1 + 0x10);
      FUN_10ae42ab4(param_1,auStack_80,*(undefined1 *)(*plVar1 + 1));
      func_0x000107c2b3d4();
      if ((int)plVar1 != 0) {
        *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + 1;
        plVar1 = (long *)0x1;
      }
      goto LAB_10ae429d4;
    }
    param_3 = 0x45;
    uVar2 = 0x227;
  }
  else {
    param_3 = 0x42;
    uVar2 = 0x223;
  }
  param_2 = (byte *)0x0;
  func_0x000107c2b29c(6,0,param_3,&UNK_10f6c7771,uVar2);
  plVar1 = (long *)0x0;
LAB_10ae429d4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (param_3 != 0) {
    _bzero(param_2,param_3);
  }
  uVar3 = plVar1[0x58];
  lVar5 = -1;
  do {
    param_2[lVar5 + param_3] = (byte)uVar3;
    uVar3 = uVar3 >> 8;
    lVar5 = lVar5 + -1;
  } while (lVar5 != -9);
  if (param_3 != 0) {
    pbVar4 = (byte *)(plVar1 + 0x4d);
    do {
      *param_2 = *param_2 ^ *pbVar4;
      param_3 = param_3 + -1;
      pbVar4 = pbVar4 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ae42ab4; end: 10ae42b2f;  */

void FUN_10ae42ab4(long param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  
  if (param_3 != 0) {
    _bzero(param_2,param_3);
  }
  uVar1 = *(ulong *)(param_1 + 0x2c0);
  lVar3 = -1;
  do {
    param_2[lVar3 + param_3] = (byte)uVar1;
    uVar1 = uVar1 >> 8;
    lVar3 = lVar3 + -1;
  } while (lVar3 != -9);
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_1 + 0x268);
    do {
      *param_2 = *param_2 ^ *pbVar2;
      param_3 = param_3 + -1;
      pbVar2 = pbVar2 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



/* Entry: 10ae42b30; end: 10ae42c67;  */

long * FUN_10ae42b30(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                    undefined8 param_5,ulong param_6,undefined8 param_7,ulong param_8)

{
  int iVar1;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  ulong unaff_x26;
  long *plVar13;
  ulong uVar14;
  long *aplStack_100 [2];
  long lStack_f0;
  byte bStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(int *)(param_1 + 0x2c8) == 0) {
    uVar8 = 0x42;
    puVar10 = (undefined1 *)0x23b;
LAB_10ae42c24:
    puVar9 = &UNK_10f6c7771;
    uVar7 = 0;
    func_0x000107c2b29c(6,0,uVar8,&UNK_10f6c7771,puVar10);
    plVar13 = (long *)0x0;
    uVar14 = param_6;
    uVar11 = param_7;
    uVar12 = param_8;
  }
  else {
    unaff_x19 = param_1;
    if (*(long *)(param_1 + 0x2c0) == -1) {
      uVar8 = 0x45;
      puVar10 = (undefined1 *)0x23f;
      goto LAB_10ae42c24;
    }
    plVar13 = (long *)(param_1 + 0x10);
    uVar14 = (ulong)*(byte *)(*plVar13 + 1);
    FUN_10ae42ab4(param_1,auStack_80,uVar14);
    puVar10 = auStack_80;
    uVar7 = param_2;
    uVar8 = param_3;
    puVar9 = param_4;
    uVar11 = param_5;
    uVar12 = param_6;
    uStack_90 = param_7;
    uStack_88 = param_8;
    func_0x000107c2b3d0(plVar13,param_2,param_3,param_4,puVar10,uVar14,param_5,param_6);
    unaff_x20 = param_6;
    unaff_x21 = param_5;
    unaff_x22 = param_4;
    unaff_x23 = param_3;
    unaff_x24 = param_2;
    unaff_x25 = param_7;
    unaff_x26 = param_8;
    if ((int)plVar13 != 0) {
      *(long *)(param_1 + 0x2c0) = *(long *)(param_1 + 0x2c0) + 1;
      plVar13 = (long *)0x1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return plVar13;
  }
  ___stack_chk_fail();
  iVar1 = (int)aplStack_100;
  iVar2 = (int)aplStack_100;
  iVar3 = (int)aplStack_100;
  iVar4 = (int)aplStack_100;
  iVar5 = (int)aplStack_100;
  iVar6 = (int)aplStack_100;
  pcStack_98 = FUN_10ae42c68;
  uStack_e0 = unaff_x26;
  uStack_d8 = unaff_x25;
  uStack_d0 = unaff_x24;
  uStack_c8 = unaff_x23;
  puStack_c0 = unaff_x22;
  uStack_b8 = unaff_x21;
  uStack_b0 = unaff_x20;
  lStack_a8 = unaff_x19;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107c2b200(aplStack_100,0);
  if ((((iVar1 != 0) && (func_0x000107c2b228(aplStack_100,(uint)uVar8 & 0xffff), iVar2 != 0)) &&
      (func_0x000107c2b21c(aplStack_100,&UNK_10e527c80,7), iVar3 != 0)) &&
     (func_0x000107c2b21c(aplStack_100,uVar14,uVar11), iVar4 != 0)) {
    uVar14 = uVar12;
    _strlen(uVar12);
    func_0x000107c2b21c(aplStack_100,uVar12,uVar14);
    if ((iVar5 != 0) && (func_0x000107c2b21c(aplStack_100,uStack_90,uStack_88), iVar6 != 0)) {
      func_0x000107c2b520(uVar7,uVar8,plVar13,puVar9,puVar10,
                          lStack_f0 + (ulong)bStack_e8 + *aplStack_100[0],
                          aplStack_100[0][1] - (lStack_f0 + (ulong)bStack_e8));
      plVar13 = (long *)(ulong)((int)uVar7 != 0);
      goto LAB_10ae42d60;
    }
  }
  plVar13 = (long *)0x0;
LAB_10ae42d60:
  func_0x000107c2b204(aplStack_100);
  return plVar13;
}



/* Entry: 10ae42c68; end: 10ae42d87;  */

bool FUN_10ae42c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  bool bVar7;
  undefined8 uVar8;
  long *aplStack_70 [2];
  long lStack_60;
  byte bStack_58;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (int)aplStack_70;
  iVar2 = (int)aplStack_70;
  iVar3 = (int)aplStack_70;
  iVar4 = (int)aplStack_70;
  iVar5 = (int)aplStack_70;
  iVar6 = (int)aplStack_70;
  func_0x000107c2b200(aplStack_70,0);
  if ((((iVar1 != 0) && (func_0x000107c2b228(aplStack_70,(uint)param_3 & 0xffff), iVar2 != 0)) &&
      (func_0x000107c2b21c(aplStack_70,&UNK_10e527c80,7), iVar3 != 0)) &&
     (func_0x000107c2b21c(aplStack_70,param_6,param_7), iVar4 != 0)) {
    uVar8 = param_8;
    _strlen(param_8);
    func_0x000107c2b21c(aplStack_70,param_8,uVar8);
    if ((iVar5 != 0) && (func_0x000107c2b21c(aplStack_70,param_9,param_10), iVar6 != 0)) {
      func_0x000107c2b520(param_2,param_3,param_1,param_4,param_5,
                          lStack_60 + (ulong)bStack_58 + *aplStack_70[0],
                          aplStack_70[0][1] - (lStack_60 + (ulong)bStack_58));
      bVar7 = (int)param_2 != 0;
      goto LAB_10ae42d60;
    }
  }
  bVar7 = false;
LAB_10ae42d60:
  func_0x000107c2b204(aplStack_70);
  return bVar7;
}



/* Entry: 10ae42d88; end: 10ae42e67;  */

undefined1 *
FUN_10ae42d88(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long *aplStack_110 [2];
  long lStack_100;
  byte bStack_f8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined2 uStack_7d;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 auStack_78 [64];
  long lStack_38;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_7d = 0x454b;
  uStack_7b = 0x4d;
  uStack_7a = (undefined1)((ulong)param_1 >> 8);
  uStack_79 = (undefined1)param_1;
  uStack_98 = 0x20;
  puVar13 = &UNK_10f6c77e3;
  puVar14 = auStack_78;
  puVar8 = &uStack_88;
  puVar11 = &uStack_7d;
  puVar9 = (undefined1 *)0x0;
  uVar10 = 0;
  uVar12 = 5;
  puVar6 = param_2;
  FUN_10ae42e68(param_2,puVar14,puVar8,0,0,puVar11,5,&UNK_10f6c77e3);
  uStack_a0 = param_4;
  if ((int)puVar6 != 0) {
    uStack_98 = 0x40;
    puVar13 = &UNK_10f6c77eb;
    puVar9 = auStack_78;
    puVar11 = &uStack_7d;
    puVar8 = (undefined8 *)0x20;
    uVar12 = 5;
    FUN_10ae42c68(param_2,param_3,0x20,puVar9,uStack_88,puVar11,5,&UNK_10f6c77eb);
    puVar6 = param_2;
    puVar14 = param_3;
    uVar10 = uStack_88;
    uStack_a0 = param_5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar6;
  }
  ___stack_chk_fail();
  iVar1 = (int)aplStack_110;
  iVar2 = (int)aplStack_110;
  iVar3 = (int)aplStack_110;
  iVar4 = (int)aplStack_110;
  iVar5 = (int)aplStack_110;
  func_0x000107c2b200(aplStack_110,0);
  if (((iVar1 != 0) && (func_0x000107c2b21c(aplStack_110,&UNK_10e527c80,7), iVar2 != 0)) &&
     (func_0x000107c2b21c(aplStack_110,puVar11,uVar12), iVar3 != 0)) {
    puVar7 = puVar13;
    _strlen(puVar13);
    func_0x000107c2b21c(aplStack_110,puVar13,puVar7);
    if ((iVar4 != 0) && (func_0x000107c2b21c(aplStack_110,uStack_a0,uStack_98), iVar5 != 0)) {
      func_0x000107c2b51c(puVar14,puVar8,puVar6,lStack_100 + (ulong)bStack_f8 + *aplStack_110[0],
                          aplStack_110[0][1] - (lStack_100 + (ulong)bStack_f8),puVar9,uVar10);
      goto LAB_10ae42f4c;
    }
  }
  puVar14 = (undefined1 *)0x0;
LAB_10ae42f4c:
  func_0x000107c2b204(aplStack_110);
  return puVar14;
}



/* Entry: 10ae42e68; end: 10ae42f73;  */

undefined8
FUN_10ae42e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar6;
  long *aplStack_70 [2];
  long lStack_60;
  byte bStack_58;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)aplStack_70;
  iVar2 = (int)aplStack_70;
  iVar3 = (int)aplStack_70;
  iVar4 = (int)aplStack_70;
  iVar5 = (int)aplStack_70;
  func_0x000107c2b200(aplStack_70,0);
  if (((iVar1 != 0) && (func_0x000107c2b21c(aplStack_70,&UNK_10e527c80,7), iVar2 != 0)) &&
     (func_0x000107c2b21c(aplStack_70,param_6,param_7), iVar3 != 0)) {
    uVar6 = param_8;
    _strlen(param_8);
    func_0x000107c2b21c(aplStack_70,param_8,uVar6);
    if ((iVar4 != 0) && (func_0x000107c2b21c(aplStack_70,param_9,param_10), iVar5 != 0)) {
      func_0x000107c2b51c(param_2,param_3,param_1,lStack_60 + (ulong)bStack_58 + *aplStack_70[0],
                          aplStack_70[0][1] - (lStack_60 + (ulong)bStack_58),param_4,param_5);
      goto LAB_10ae42f4c;
    }
  }
  param_2 = 0;
LAB_10ae42f4c:
  func_0x000107c2b204(aplStack_70);
  return param_2;
}



/* Entry: 10ae42f74; end: 10ae43253;  */

void FUN_10ae42f74(long *param_1,long *param_2,long *param_3,long *param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong *puStack_90;
  ulong *puStack_88;
  long lStack_80;
  long lStack_78;
  ulong *puStack_70;
  ulong *puStack_68;
  
  if (param_5 == 1) {
    uVar17 = 0;
    uVar21 = 0;
    uVar13 = 0;
    uVar18 = 0;
    uVar15 = 0;
    uVar19 = *(ulong *)*param_4;
    uVar20 = *(ulong *)param_4[1];
    uVar24 = 0x40;
    do {
      uVar6 = -(uVar20 & 1) & *(ulong *)param_3[1];
      uVar4 = uVar6 & (*(ulong *)*param_3 ^ -(uVar19 & 1));
      uVar19 = uVar19 >> 1;
      uVar20 = uVar20 >> 1;
      uVar8 = uVar4 << (uVar17 & 0x3f);
      uVar9 = uVar4 >> (uVar24 & 0x3f);
      uVar10 = uVar6 << (uVar17 & 0x3f);
      uVar11 = uVar6 >> (uVar24 & 0x3f);
      uVar22 = uVar10 ^ uVar21;
      uVar12 = uVar8 ^ uVar18;
      uVar10 = uVar10 ^ uVar18;
      uVar23 = uVar11 ^ uVar13;
      uVar21 = uVar4;
      uVar18 = uVar6;
      if (uVar17 != 0) {
        uVar21 = uVar12 & uVar22;
        uVar13 = (uVar9 ^ uVar15) & uVar23;
        uVar18 = uVar22 ^ uVar8 | uVar10;
        uVar15 = uVar23 ^ uVar9 | uVar15 ^ uVar11;
      }
      uVar17 = uVar17 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    puVar14 = (ulong *)*param_1;
    puVar16 = (ulong *)param_1[1];
    *puVar14 = uVar21;
    puVar14[1] = uVar13;
    *puVar16 = uVar18;
    puVar16[1] = uVar15;
  }
  else {
    uVar21 = param_5 >> 1;
    uVar24 = param_5 - (param_5 >> 1);
    puVar16 = (ulong *)*param_3;
    puVar14 = (ulong *)param_3[1];
    puStack_70 = puVar16 + uVar21;
    puStack_68 = puVar14 + uVar21;
    lVar25 = *param_4;
    lVar2 = param_4[1];
    lStack_80 = lVar25 + uVar21 * 8;
    lStack_78 = lVar2 + uVar21 * 8;
    puStack_88 = (ulong *)param_1[1];
    puStack_90 = (ulong *)*param_1;
    lVar1 = *param_1;
    lVar3 = param_1[1];
    lStack_a0 = lVar1 + uVar24 * 8;
    lStack_98 = lVar3 + uVar24 * 8;
    puVar5 = puStack_90;
    puVar7 = puStack_88;
    uVar17 = uVar21;
    if (param_5 != 0) {
      do {
        uVar18 = *puVar14;
        uVar15 = puVar16[uVar21];
        uVar19 = puVar14[uVar21];
        uVar13 = uVar19 ^ *puVar16;
        *puVar5 = uVar13 & (uVar15 ^ uVar18);
        *puVar7 = uVar13 ^ uVar15 | uVar19 ^ uVar18;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
        uVar17 = uVar17 - 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (uVar17 != 0);
      uVar17 = 0;
      do {
        uVar13 = *(ulong *)(lVar2 + uVar17 * 8);
        uVar18 = *(ulong *)(lStack_80 + uVar17 * 8);
        uVar15 = *(ulong *)(lStack_78 + uVar17 * 8);
        uVar19 = uVar15 ^ *(ulong *)(lVar25 + uVar17 * 8);
        *(ulong *)(lStack_a0 + uVar17 * 8) = uVar19 & (uVar18 ^ uVar13);
        *(ulong *)(lStack_98 + uVar17 * 8) = uVar19 ^ uVar18 | uVar15 ^ uVar13;
        uVar17 = uVar17 + 1;
      } while (uVar21 != uVar17);
    }
    if (uVar24 != uVar21) {
      puStack_90[uVar21] = puStack_70[uVar21];
      puStack_88[uVar21] = puStack_68[uVar21];
      *(undefined8 *)(lVar1 + param_5 * 8) = *(undefined8 *)(lStack_80 + uVar21 * 8);
      *(undefined8 *)(lVar3 + param_5 * 8) = *(undefined8 *)(lStack_78 + uVar21 * 8);
    }
    lVar25 = uVar24 * 2;
    lStack_b0 = *param_2 + uVar24 * 0x10;
    lStack_a8 = param_2[1] + uVar24 * 0x10;
    param_5 = param_5 & 0xfffffffffffffffe;
    lStack_c0 = lVar1 + param_5 * 8;
    lStack_b8 = lVar3 + param_5 * 8;
    FUN_10ae42f74(param_2,&lStack_b0,&puStack_90,&lStack_a0,uVar24);
    FUN_10ae42f74(&lStack_c0,&lStack_b0,&puStack_70,&lStack_80,uVar24);
    FUN_10ae42f74(param_1,&lStack_b0,param_3,param_4,uVar21);
    func_0x00010ae44c7c(param_2,param_1,param_5);
    func_0x00010ae44c7c(param_2,&lStack_c0,lVar25);
    if (lVar25 != 0) {
      puVar14 = (ulong *)(lVar1 + uVar21 * 8);
      puVar16 = (ulong *)*param_2;
      puVar5 = (ulong *)param_2[1];
      puVar7 = (ulong *)(lVar3 + uVar21 * 8);
      do {
        uVar21 = *puVar16;
        uVar24 = *puVar5;
        uVar13 = *puVar7;
        uVar17 = uVar24 ^ *puVar14;
        *puVar14 = uVar17 & (uVar21 ^ uVar13);
        *puVar7 = uVar17 ^ uVar21 | uVar24 ^ uVar13;
        lVar25 = lVar25 + -1;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar25 != 0);
    }
  }
  return;
}



/* Entry: 10ae43254; end: 10ae432c7;  */

void FUN_10ae43254(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = 0;
  do {
    uVar2 = (*(ulong *)(param_2 + lVar1) ^ *(ulong *)(param_1 + lVar1)) & param_3;
    *(ulong *)(param_1 + lVar1) = uVar2 ^ *(ulong *)(param_1 + lVar1);
    *(ulong *)(param_2 + lVar1) = *(ulong *)(param_2 + lVar1) ^ uVar2;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x58);
  lVar1 = 0;
  param_2 = param_2 + 0x58;
  do {
    uVar2 = *(ulong *)(param_1 + 0x58 + lVar1);
    uVar3 = (*(ulong *)(param_2 + lVar1) ^ uVar2) & param_3;
    *(ulong *)(param_1 + 0x58 + lVar1) = uVar3 ^ uVar2;
    *(ulong *)(param_2 + lVar1) = *(ulong *)(param_2 + lVar1) ^ uVar3;
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x58);
  return;
}



/* Entry: 10ae432c8; end: 10ae43d47;  */

undefined8 FUN_10ae432c8(long param_1,long param_2,long param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  short *psVar20;
  short *psVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  ulong auStack_cd8 [164];
  undefined4 uStack_7b6;
  undefined2 uStack_7b2;
  ulong auStack_7b0 [175];
  undefined4 uStack_236;
  undefined2 uStack_232;
  ulong auStack_228 [11];
  ulong auStack_1d0 [22];
  ulong auStack_120 [24];
  
  puVar9 = (undefined8 *)0x2be7;
  _malloc();
  if (puVar9 == (undefined8 *)0x0) {
    _bzero(param_1,0x590);
    func_0x000107c2b3c4(param_2,0x710,&UNK_10e525a20);
    uVar10 = 0;
  }
  else {
    psVar1 = (short *)(param_1 + ((ulong)(uint)-(int)param_1 & 0xf));
    param_2 = param_2 + ((ulong)(uint)-(int)param_2 & 0xf);
    puVar22 = puVar9 + 1;
    *puVar9 = 0x2bdf;
    uVar31 = *(undefined8 *)(param_3 + 0x578);
    uVar10 = *(undefined8 *)(param_3 + 0x588);
    uVar32 = *(undefined8 *)(param_3 + 0x590);
    uVar11 = (ulong)(uint)-(int)puVar22 & 0x1f;
    lVar13 = (long)puVar22 + uVar11;
    *(undefined8 *)(param_2 + 0x6e8) = *(undefined8 *)(param_3 + 0x580);
    *(undefined8 *)(param_2 + 0x6e0) = uVar31;
    *(undefined8 *)(param_2 + 0x6f8) = uVar32;
    *(undefined8 *)(param_2 + 0x6f0) = uVar10;
    FUN_10ae43d48(lVar13 + 0x15c0,param_3);
    FUN_10ae43db0(param_2,lVar13 + 0x15c0);
    auStack_7b0[1] = 0;
    auStack_7b0[0] = 0;
    auStack_7b0[3] = 0;
    auStack_7b0[2] = 0;
    auStack_7b0[5] = 0;
    auStack_7b0[4] = 0;
    auStack_7b0[7] = 0;
    auStack_7b0[6] = 0;
    auStack_7b0[9] = 0;
    auStack_7b0[8] = 0;
    auStack_7b0[0xb] = 0;
    auStack_7b0[10] = 0;
    auStack_7b0[0xd] = 0;
    auStack_7b0[0xc] = 0;
    auStack_7b0[0xf] = 0;
    auStack_7b0[0xe] = 0;
    auStack_7b0[0x11] = 0;
    auStack_7b0[0x10] = 0;
    auStack_7b0[0x13] = 0;
    auStack_7b0[0x12] = 0;
    auStack_7b0[0x15] = 0;
    auStack_7b0[0x14] = 0;
    uStack_d28 = 0;
    uStack_d30 = 0;
    uStack_d18 = 0;
    uStack_d20 = 0;
    uStack_d08 = 0;
    uStack_d10 = 0;
    uStack_cf8 = 0;
    uStack_d00 = 0;
    uStack_ce8 = 0;
    uStack_cf0 = 0;
    uStack_ce0 = 0;
    auStack_cd8[2] = 0;
    auStack_cd8[1] = 0;
    auStack_cd8[4] = 0;
    auStack_cd8[3] = 0;
    auStack_cd8[6] = 0;
    auStack_cd8[5] = 0;
    auStack_cd8[8] = 0;
    auStack_cd8[7] = 0;
    auStack_cd8[10] = 0;
    auStack_cd8[9] = 0;
    uVar14 = 1;
    auStack_cd8[0] = 1;
    auStack_120[9] = 0;
    auStack_120[8] = 0;
    auStack_120[7] = 0;
    auStack_120[6] = 0;
    auStack_120[5] = 0;
    auStack_120[4] = 0;
    auStack_120[3] = 0;
    auStack_120[2] = 0;
    auStack_120[1] = 0;
    auStack_120[0] = 0;
    auStack_120[0x14] = 0xffffffffffffffff;
    auStack_120[0x13] = 0xffffffffffffffff;
    auStack_120[0x12] = 0xffffffffffffffff;
    auStack_120[0x11] = 0xffffffffffffffff;
    auStack_120[0x10] = 0xffffffffffffffff;
    auStack_120[0xf] = 0xffffffffffffffff;
    auStack_120[0xe] = 0xffffffffffffffff;
    auStack_120[0xd] = 0xffffffffffffffff;
    auStack_120[10] = 0;
    auStack_120[0x15] = 0x1fffffffffffffff;
    auStack_120[0xc] = 0xffffffffffffffff;
    auStack_120[0xb] = 0xffffffffffffffff;
    FUN_10ae44cc4(auStack_1d0 + 0xb,param_2 + 0x58);
    FUN_10ae44cc4(auStack_1d0,param_2);
    lVar29 = 0;
    do {
      lVar12 = 0;
      uVar16 = 0;
      do {
        uVar17 = uVar16 | *(ulong *)((long)auStack_7b0 + lVar12) << 1;
        uVar16 = *(ulong *)((long)auStack_7b0 + lVar12) >> 0x3f;
        *(ulong *)((long)auStack_7b0 + lVar12) = uVar17;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x58);
      uVar16 = 0;
      lVar12 = 0x58;
      do {
        uVar17 = uVar16 | *(ulong *)((long)auStack_7b0 + lVar12) << 1;
        uVar16 = *(ulong *)((long)auStack_7b0 + lVar12) >> 0x3f;
        *(ulong *)((long)auStack_7b0 + lVar12) = uVar17;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0xb0);
      lVar12 = 0;
      if (-1 < (int)uVar14) {
        lVar12 = -(auStack_1d0[0xb] & 1);
      }
      lVar28 = 0;
      if (uVar14 != 0) {
        lVar28 = lVar12;
      }
      uVar16 = auStack_120[0xb] & auStack_1d0[0xb] & 1;
      uVar17 = -(((uint)auStack_1d0[0] ^ (uint)auStack_120[0]) & uVar16);
      uVar16 = -uVar16;
      FUN_10ae43254(auStack_120,auStack_1d0,lVar28);
      lVar12 = 0;
      do {
        uVar18 = *(ulong *)((long)auStack_120 + lVar12 + 0x58) & uVar16;
        uVar23 = uVar18 & (*(ulong *)((long)auStack_120 + lVar12) ^ uVar17);
        uVar26 = *(ulong *)((long)auStack_1d0 + lVar12);
        uVar27 = *(ulong *)((long)auStack_1d0 + lVar12 + 0x58) ^ uVar18;
        *(ulong *)((long)auStack_1d0 + lVar12) = (uVar27 ^ uVar23) & (uVar18 ^ uVar26);
        *(ulong *)((long)auStack_1d0 + lVar12 + 0x58) = uVar27 | uVar23 ^ uVar26;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x58);
      uVar23 = 10;
      uVar18 = 0;
      do {
        uVar26 = auStack_1d0[uVar23];
        auStack_1d0[uVar23] = uVar26 >> 1 | uVar18 << 0x3f;
        uVar23 = uVar23 - 1;
        uVar18 = uVar26;
      } while (uVar23 < 0xb);
      lVar12 = 0x15;
      uVar18 = 0;
      do {
        uVar23 = auStack_1d0[lVar12];
        auStack_1d0[lVar12] = uVar23 >> 1 | uVar18 << 0x3f;
        uVar26 = lVar12 - 0xc;
        lVar12 = lVar12 + -1;
        uVar18 = uVar23;
      } while (uVar26 < 0xb);
      FUN_10ae43254(auStack_7b0,&uStack_d30,lVar28);
      lVar12 = 0;
      do {
        uVar18 = *(ulong *)((long)auStack_7b0 + lVar12 + 0x58) & uVar16;
        uVar23 = uVar18 & (*(ulong *)((long)auStack_7b0 + lVar12) ^ uVar17);
        uVar26 = *(ulong *)((long)&uStack_d30 + lVar12);
        uVar27 = *(ulong *)((long)auStack_cd8 + lVar12) ^ uVar18;
        *(ulong *)((long)&uStack_d30 + lVar12) = (uVar27 ^ uVar23) & (uVar18 ^ uVar26);
        *(ulong *)((long)auStack_cd8 + lVar12) = uVar27 | uVar23 ^ uVar26;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0x58);
      uVar14 = (~(uint)lVar28 & uVar14 | (uint)lVar28 & -uVar14) + 1;
      lVar29 = lVar29 + 1;
    } while (lVar29 != 0x577);
    lVar29 = 0;
    do {
      uVar16 = -(auStack_120[0xb] & 1) & *(ulong *)((long)auStack_7b0 + lVar29 + 0x58);
      *(ulong *)((long)auStack_7b0 + lVar29 + 0x58) = uVar16;
      *(ulong *)((long)auStack_7b0 + lVar29) =
           uVar16 & (*(ulong *)((long)auStack_7b0 + lVar29) ^ -(auStack_120[0] & 1));
      lVar29 = lVar29 + 8;
    } while (lVar29 != 0x58);
    FUN_10ae44cc4(param_2 + 0x108,auStack_7b0 + 0xb);
    FUN_10ae44cc4(param_2 + 0xb0,auStack_7b0);
    lVar12 = lVar13 + 0x1b40;
    FUN_10ae43d48(lVar12,param_3 + 700);
    lVar29 = 0;
    do {
      *(short *)(lVar12 + lVar29) = *(short *)(lVar12 + lVar29) * 3;
      lVar29 = lVar29 + 2;
    } while (lVar29 != 0x57a);
    sVar6 = *(short *)(lVar13 + 0x20b8);
    lVar29 = -700;
    psVar20 = (short *)((long)puVar9 + uVar11 + 0x20c0);
    sVar7 = sVar6;
    do {
      sVar5 = psVar20[-1];
      *psVar20 = sVar5 - sVar7;
      bVar8 = lVar29 != -1;
      lVar29 = lVar29 + 1;
      psVar20 = psVar20 + -1;
      sVar7 = sVar5;
    } while (bVar8);
    *(short *)(lVar13 + 0x1b40) = sVar6 - *(short *)(lVar13 + 0x1b40);
    puVar2 = (undefined4 *)(lVar13 + 0x1b3a);
    *(undefined2 *)(lVar13 + 0x1b3e) = 0;
    *puVar2 = 0;
    puVar3 = (undefined4 *)(lVar13 + 0x20ba);
    *puVar3 = 0;
    *(undefined2 *)(lVar13 + 0x20be) = 0;
    lVar28 = 0x58;
    FUN_10ae44d64(lVar13,lVar13 + 0xb00,lVar13 + 0x15c0,lVar12,0x58);
    lVar29 = (long)puVar9 + uVar11;
    do {
      uVar32 = *(undefined8 *)(lVar29 + 0x10);
      uVar10 = *(undefined8 *)(lVar29 + 8);
      auVar30 = NEON_ext(*(undefined1 (*) [16])(lVar29 + 0x578),
                         *(undefined1 (*) [16])(lVar29 + 0x588),10,1);
      *(short *)(lVar29 + 0x20d0) = auVar30._8_2_ + (short)uVar32;
      *(short *)(lVar29 + 0x20d2) = auVar30._10_2_ + (short)((ulong)uVar32 >> 0x10);
      *(short *)(lVar29 + 0x20d4) = auVar30._12_2_ + (short)((ulong)uVar32 >> 0x20);
      *(short *)(lVar29 + 0x20d6) = auVar30._14_2_ + (short)((ulong)uVar32 >> 0x30);
      *(short *)(lVar29 + 0x20c8) = auVar30._0_2_ + (short)uVar10;
      *(short *)(lVar29 + 0x20ca) = auVar30._2_2_ + (short)((ulong)uVar10 >> 0x10);
      *(short *)(lVar29 + 0x20cc) = auVar30._4_2_ + (short)((ulong)uVar10 >> 0x20);
      *(short *)(lVar29 + 0x20ce) = auVar30._6_2_ + (short)((ulong)uVar10 >> 0x30);
      lVar29 = lVar29 + 0x10;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar29 = 0;
    *(undefined2 *)(lVar13 + 0x263e) = 0;
    *(undefined4 *)(lVar13 + 0x263a) = 0;
    do {
      *(short *)((long)auStack_7b0 + lVar29) = -*(short *)(lVar13 + 0x20c0 + lVar29);
      lVar29 = lVar29 + 2;
    } while (lVar29 != 0x57a);
    lVar29 = 0;
    uVar16 = 0;
    uVar14 = 0;
    uStack_d28 = 0;
    uStack_d30 = 0;
    uStack_d18 = 0;
    uStack_d20 = 0;
    uStack_d08 = 0;
    uStack_d10 = 0;
    uStack_cf8 = 0;
    uStack_d00 = 0;
    uStack_ce8 = 0;
    uStack_cf0 = 0;
    uStack_ce0 = 0;
    auStack_120[2] = 0;
    auStack_120[1] = 0;
    auStack_120[4] = 0;
    auStack_120[3] = 0;
    auStack_120[6] = 0;
    auStack_120[5] = 0;
    auStack_120[8] = 0;
    auStack_120[7] = 0;
    auStack_120[10] = 0;
    auStack_120[9] = 0;
    auStack_120[0] = 1;
    auStack_1d0[1] = 0xffffffffffffffff;
    auStack_1d0[0] = 0xffffffffffffffff;
    auStack_1d0[3] = 0xffffffffffffffff;
    auStack_1d0[2] = 0xffffffffffffffff;
    auStack_1d0[5] = 0xffffffffffffffff;
    auStack_1d0[4] = 0xffffffffffffffff;
    auStack_1d0[7] = 0xffffffffffffffff;
    auStack_1d0[6] = 0xffffffffffffffff;
    auStack_1d0[10] = 0x1fffffffffffffff;
    auStack_1d0[9] = 0xffffffffffffffff;
    auStack_1d0[8] = 0xffffffffffffffff;
    puVar24 = auStack_228;
    do {
      uVar16 = uVar16 >> 1 | (ulong)*(ushort *)(lVar13 + 0x20c0 + lVar29) << 0x3f;
      uVar14 = uVar14 + 1;
      puVar25 = puVar24;
      if (uVar14 == 0x40) {
        uVar14 = 0;
        puVar25 = puVar24 + 1;
        *puVar24 = uVar16;
        uVar16 = 0;
      }
      lVar29 = lVar29 + 2;
      puVar24 = puVar25;
    } while (lVar29 != 0x57a);
    lVar29 = 0;
    *puVar25 = uVar16 >> (-(ulong)uVar14 & 0x3f);
    uVar16 = auStack_228[10] >> 0x3c;
    do {
      *(ulong *)((long)auStack_228 + lVar29) =
           *(ulong *)((long)auStack_228 + lVar29) ^ -(uVar16 & 1);
      lVar29 = lVar29 + 8;
    } while (lVar29 != 0x58);
    auStack_228[10] = auStack_228[10] & 0xfffffffffffffff;
    FUN_10ae44cc4(auStack_228,auStack_228);
    lVar29 = 0;
    uVar14 = 1;
    do {
      uVar16 = auStack_1d0[0];
      lVar28 = 0;
      uVar17 = 0;
      do {
        uVar18 = uVar17 | *(ulong *)((long)&uStack_d30 + lVar28) << 1;
        uVar17 = *(ulong *)((long)&uStack_d30 + lVar28) >> 0x3f;
        *(ulong *)((long)&uStack_d30 + lVar28) = uVar18;
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x58);
      lVar28 = 0;
      uVar18 = auStack_228[0] & 1;
      uVar17 = 0;
      if (-1 < (int)uVar14) {
        uVar17 = -uVar18;
      }
      uVar23 = 0;
      if (uVar14 != 0) {
        uVar23 = uVar17;
      }
      do {
        uVar17 = (*(ulong *)((long)auStack_228 + lVar28) ^ *(ulong *)((long)auStack_1d0 + lVar28)) &
                 uVar23;
        *(ulong *)((long)auStack_1d0 + lVar28) = uVar17 ^ *(ulong *)((long)auStack_1d0 + lVar28);
        *(ulong *)((long)auStack_228 + lVar28) = uVar17 ^ *(ulong *)((long)auStack_228 + lVar28);
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x58);
      lVar28 = 0;
      uVar16 = -(uVar18 & uVar16);
      do {
        *(ulong *)((long)auStack_228 + lVar28) =
             *(ulong *)((long)auStack_228 + lVar28) ^
             *(ulong *)((long)auStack_1d0 + lVar28) & uVar16;
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x58);
      uVar18 = 10;
      uVar17 = 0;
      do {
        uVar26 = auStack_228[uVar18];
        auStack_228[uVar18] = uVar26 >> 1 | uVar17 << 0x3f;
        uVar18 = uVar18 - 1;
        uVar17 = uVar26;
      } while (uVar18 < 0xb);
      lVar28 = 0;
      do {
        uVar17 = (*(ulong *)((long)auStack_120 + lVar28) ^ *(ulong *)((long)&uStack_d30 + lVar28)) &
                 uVar23;
        *(ulong *)((long)&uStack_d30 + lVar28) = uVar17 ^ *(ulong *)((long)&uStack_d30 + lVar28);
        *(ulong *)((long)auStack_120 + lVar28) = uVar17 ^ *(ulong *)((long)auStack_120 + lVar28);
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x58);
      lVar28 = 0;
      do {
        *(ulong *)((long)auStack_120 + lVar28) =
             *(ulong *)((long)auStack_120 + lVar28) ^
             *(ulong *)((long)&uStack_d30 + lVar28) & uVar16;
        lVar28 = lVar28 + 8;
      } while (lVar28 != 0x58);
      uVar14 = (~(uint)uVar23 & uVar14 | (uint)uVar23 & -uVar14) + 1;
      lVar29 = lVar29 + 1;
    } while (lVar29 != 0x577);
    lVar28 = lVar13 + 0x2640;
    puVar24 = &uStack_d30;
    FUN_10ae44cc4(&uStack_d30,&uStack_d30);
    lVar29 = 0;
    iVar15 = 0;
    uVar16 = uStack_d30;
    do {
      *(ushort *)(lVar28 + lVar29) = (ushort)uVar16 & 1;
      iVar15 = iVar15 + 1;
      if (iVar15 == 0x40) {
        iVar15 = 0;
        puVar24 = puVar24 + 1;
        uVar16 = *puVar24;
      }
      else {
        uVar16 = uVar16 >> 1;
      }
      lVar29 = lVar29 + 2;
    } while (lVar29 != 0x57a);
    iVar15 = 0;
    puVar4 = (undefined4 *)(lVar13 + 0x2bba);
    do {
      uStack_232 = 0;
      uStack_236 = 0;
      *puVar4 = 0;
      *(undefined2 *)(lVar13 + 0x2bbe) = 0;
      FUN_10ae44d64(lVar13,lVar13 + 0xb00,auStack_7b0,lVar28,0x58);
      lVar29 = 0;
      do {
        lVar19 = (long)puVar9 + uVar11 + lVar29;
        uVar32 = *(undefined8 *)(lVar19 + 0x10);
        uVar10 = *(undefined8 *)(lVar19 + 8);
        auVar30 = NEON_ext(*(undefined1 (*) [16])(lVar19 + 0x578),
                           *(undefined1 (*) [16])(lVar19 + 0x588),10,1);
        *(short *)((long)&uStack_d28 + lVar29) = auVar30._8_2_ + (short)uVar32;
        *(short *)((long)&uStack_d28 + lVar29 + 2) = auVar30._10_2_ + (short)((ulong)uVar32 >> 0x10)
        ;
        *(short *)((long)&uStack_d28 + lVar29 + 4) = auVar30._12_2_ + (short)((ulong)uVar32 >> 0x20)
        ;
        *(short *)((long)&uStack_d28 + lVar29 + 6) = auVar30._14_2_ + (short)((ulong)uVar32 >> 0x30)
        ;
        *(short *)((long)&uStack_d30 + lVar29) = auVar30._0_2_ + (short)uVar10;
        *(short *)((long)&uStack_d30 + lVar29 + 2) = auVar30._2_2_ + (short)((ulong)uVar10 >> 0x10);
        *(short *)((long)&uStack_d30 + lVar29 + 4) = auVar30._4_2_ + (short)((ulong)uVar10 >> 0x20);
        *(short *)((long)&uStack_d30 + lVar29 + 6) = auVar30._6_2_ + (short)((ulong)uVar10 >> 0x30);
        lVar29 = lVar29 + 0x10;
      } while (lVar29 != 0x580);
      uStack_d30 = CONCAT62(uStack_d30._2_6_,(short)uStack_d30 + 2);
      *puVar4 = 0;
      *(undefined2 *)(lVar13 + 0x2bbe) = 0;
      uStack_7b6 = 0;
      uStack_7b2 = 0;
      FUN_10ae44d64(lVar13,lVar13 + 0xb00,lVar28,&uStack_d30,0x58);
      lVar19 = 0x58;
      lVar29 = (long)puVar9 + uVar11;
      do {
        uVar32 = *(undefined8 *)(lVar29 + 0x10);
        uVar10 = *(undefined8 *)(lVar29 + 8);
        auVar30 = NEON_ext(*(undefined1 (*) [16])(lVar29 + 0x578),
                           *(undefined1 (*) [16])(lVar29 + 0x588),10,1);
        *(short *)(lVar29 + 0x2650) = auVar30._8_2_ + (short)uVar32;
        *(short *)(lVar29 + 0x2652) = auVar30._10_2_ + (short)((ulong)uVar32 >> 0x10);
        *(short *)(lVar29 + 0x2654) = auVar30._12_2_ + (short)((ulong)uVar32 >> 0x20);
        *(short *)(lVar29 + 0x2656) = auVar30._14_2_ + (short)((ulong)uVar32 >> 0x30);
        *(short *)(lVar29 + 0x2648) = auVar30._0_2_ + (short)uVar10;
        *(short *)(lVar29 + 0x264a) = auVar30._2_2_ + (short)((ulong)uVar10 >> 0x10);
        *(short *)(lVar29 + 0x264c) = auVar30._4_2_ + (short)((ulong)uVar10 >> 0x20);
        *(short *)(lVar29 + 0x264e) = auVar30._6_2_ + (short)((ulong)uVar10 >> 0x30);
        lVar29 = lVar29 + 0x10;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      *(undefined2 *)(lVar13 + 0x2bbe) = 0;
      *puVar4 = 0;
      iVar15 = iVar15 + 1;
    } while (iVar15 != 4);
    *(undefined2 *)(lVar13 + 0x2bbe) = 0;
    *puVar4 = 0;
    *puVar3 = 0;
    *(undefined2 *)(lVar13 + 0x20be) = 0;
    lVar19 = 0x58;
    FUN_10ae44d64(lVar13,lVar13 + 0xb00,lVar28,lVar12,0x58);
    lVar29 = (long)puVar9 + uVar11;
    psVar20 = psVar1;
    do {
      uVar32 = *(undefined8 *)(lVar29 + 0x10);
      uVar10 = *(undefined8 *)(lVar29 + 8);
      auVar30 = NEON_ext(*(undefined1 (*) [16])(lVar29 + 0x578),
                         *(undefined1 (*) [16])(lVar29 + 0x588),10,1);
      psVar20[4] = auVar30._8_2_ + (short)uVar32;
      psVar20[5] = auVar30._10_2_ + (short)((ulong)uVar32 >> 0x10);
      psVar20[6] = auVar30._12_2_ + (short)((ulong)uVar32 >> 0x20);
      psVar20[7] = auVar30._14_2_ + (short)((ulong)uVar32 >> 0x30);
      *psVar20 = auVar30._0_2_ + (short)uVar10;
      psVar20[1] = auVar30._2_2_ + (short)((ulong)uVar10 >> 0x10);
      psVar20[2] = auVar30._4_2_ + (short)((ulong)uVar10 >> 0x20);
      psVar20[3] = auVar30._6_2_ + (short)((ulong)uVar10 >> 0x30);
      lVar29 = lVar29 + 0x10;
      lVar19 = lVar19 + -1;
      psVar20 = psVar20 + 8;
    } while (lVar19 != 0);
    psVar20 = psVar1 + 0x2bd;
    psVar1[0x2bf] = 0;
    psVar20[0] = 0;
    psVar20[1] = 0;
    *puVar3 = 0;
    *(undefined2 *)(lVar13 + 0x20be) = 0;
    lVar19 = 0x58;
    FUN_10ae44d64(lVar13,lVar13 + 0xb00,psVar1,lVar12,0x58);
    lVar29 = (long)puVar9 + uVar11;
    psVar21 = psVar1;
    do {
      uVar32 = *(undefined8 *)(lVar29 + 0x10);
      uVar10 = *(undefined8 *)(lVar29 + 8);
      auVar30 = NEON_ext(*(undefined1 (*) [16])(lVar29 + 0x578),
                         *(undefined1 (*) [16])(lVar29 + 0x588),10,1);
      psVar21[4] = auVar30._8_2_ + (short)uVar32;
      psVar21[5] = auVar30._10_2_ + (short)((ulong)uVar32 >> 0x10);
      psVar21[6] = auVar30._12_2_ + (short)((ulong)uVar32 >> 0x20);
      psVar21[7] = auVar30._14_2_ + (short)((ulong)uVar32 >> 0x30);
      *psVar21 = auVar30._0_2_ + (short)uVar10;
      psVar21[1] = auVar30._2_2_ + (short)((ulong)uVar10 >> 0x10);
      psVar21[2] = auVar30._4_2_ + (short)((ulong)uVar10 >> 0x20);
      psVar21[3] = auVar30._6_2_ + (short)((ulong)uVar10 >> 0x30);
      lVar29 = lVar29 + 0x10;
      lVar19 = lVar19 + -1;
      psVar21 = psVar21 + 8;
    } while (lVar19 != 0);
    lVar29 = 0;
    psVar1[0x2bf] = 0;
    psVar20[0] = 0;
    psVar20[1] = 0;
    do {
      *(ushort *)((long)psVar1 + lVar29) = *(ushort *)((long)psVar1 + lVar29) & 0x1fff;
      lVar29 = lVar29 + 2;
    } while (lVar29 != 0x57a);
    lVar29 = param_2 + 0x160;
    *(undefined2 *)(lVar13 + 0x2bbe) = 0;
    *puVar4 = 0;
    *puVar2 = 0;
    *(undefined2 *)(lVar13 + 0x1b3e) = 0;
    FUN_10ae44d64(lVar13,lVar13 + 0xb00,lVar28,lVar13 + 0x15c0,0x58);
    lVar12 = 0;
    do {
      lVar28 = lVar12 + uVar11;
      uVar32 = *(undefined8 *)((long)puVar9 + lVar28 + 0x10);
      uVar10 = *(undefined8 *)((long)puVar9 + lVar28 + 8);
      auVar30 = NEON_ext(*(undefined1 (*) [16])((long)puVar9 + lVar28 + 0x578),
                         *(undefined1 (*) [16])((long)puVar9 + lVar28 + 0x588),10,1);
      psVar1 = (short *)(lVar29 + lVar12);
      psVar1[4] = auVar30._8_2_ + (short)uVar32;
      psVar1[5] = auVar30._10_2_ + (short)((ulong)uVar32 >> 0x10);
      psVar1[6] = auVar30._12_2_ + (short)((ulong)uVar32 >> 0x20);
      psVar1[7] = auVar30._14_2_ + (short)((ulong)uVar32 >> 0x30);
      *psVar1 = auVar30._0_2_ + (short)uVar10;
      psVar1[1] = auVar30._2_2_ + (short)((ulong)uVar10 >> 0x10);
      psVar1[2] = auVar30._4_2_ + (short)((ulong)uVar10 >> 0x20);
      psVar1[3] = auVar30._6_2_ + (short)((ulong)uVar10 >> 0x30);
      lVar12 = lVar12 + 0x10;
    } while (lVar12 != 0x580);
    *(undefined2 *)(param_2 + 0x6de) = 0;
    *(undefined4 *)(param_2 + 0x6da) = 0;
    *puVar2 = 0;
    *(undefined2 *)(lVar13 + 0x1b3e) = 0;
    FUN_10ae44d64(lVar13,lVar13 + 0xb00,lVar29,lVar13 + 0x15c0,0x58);
    lVar13 = 0;
    do {
      lVar12 = lVar13 + uVar11;
      uVar32 = *(undefined8 *)((long)puVar9 + lVar12 + 0x10);
      uVar10 = *(undefined8 *)((long)puVar9 + lVar12 + 8);
      auVar30 = NEON_ext(*(undefined1 (*) [16])((long)puVar9 + lVar12 + 0x578),
                         *(undefined1 (*) [16])((long)puVar9 + lVar12 + 0x588),10,1);
      psVar1 = (short *)(lVar29 + lVar13);
      psVar1[4] = auVar30._8_2_ + (short)uVar32;
      psVar1[5] = auVar30._10_2_ + (short)((ulong)uVar32 >> 0x10);
      psVar1[6] = auVar30._12_2_ + (short)((ulong)uVar32 >> 0x20);
      psVar1[7] = auVar30._14_2_ + (short)((ulong)uVar32 >> 0x30);
      *psVar1 = auVar30._0_2_ + (short)uVar10;
      psVar1[1] = auVar30._2_2_ + (short)((ulong)uVar10 >> 0x10);
      psVar1[2] = auVar30._4_2_ + (short)((ulong)uVar10 >> 0x20);
      psVar1[3] = auVar30._6_2_ + (short)((ulong)uVar10 >> 0x30);
      lVar13 = lVar13 + 0x10;
    } while (lVar13 != 0x580);
    *(undefined2 *)(param_2 + 0x6de) = 0;
    *(undefined4 *)(param_2 + 0x6da) = 0;
    lVar29 = 0x160;
    do {
      *(ushort *)(param_2 + lVar29) = *(ushort *)(param_2 + lVar29) & 0x1fff;
      lVar29 = lVar29 + 2;
    } while (lVar29 != 0x6da);
    func_0x000107c2b534(puVar22);
    uVar10 = 1;
  }
  return uVar10;
}



/* Entry: 10ae43d48; end: 10ae43daf;  */

void FUN_10ae43d48(ushort *param_1)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  
  FUN_10ae44094();
  uVar2 = 0;
  lVar3 = 2;
  uVar5 = (uint)*param_1;
  do {
    puVar1 = (ushort *)((long)param_1 + lVar3);
    uVar2 = uVar2 + *puVar1 * uVar5;
    lVar3 = lVar3 + 2;
    uVar5 = (uint)*puVar1;
  } while (lVar3 != 0x578);
  uVar4 = 0xfffffffffffffffe;
  do {
    *param_1 = *param_1 * (-((ushort)(uVar2 >> 0xf) & 1) | 1);
    uVar4 = uVar4 + 2;
    param_1 = param_1 + 2;
  } while (uVar4 < 699);
  return;
}



/* Entry: 10ae43db0; end: 10ae43e53;  */

void FUN_10ae43db0(ulong *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  puVar4 = param_1 + 0xb;
  do {
    uVar1 = ((uint)(((int)((uint)*(ushort *)(param_2 + lVar6) << 0x13) >> 0x13) * 0x5555) >> 0x10) *
            -3 + ((int)((uint)*(ushort *)(param_2 + lVar6) << 0x13) >> 0x13);
    uVar1 = (uVar1 & (int)(short)uVar1 >> 1) - 1 & uVar1;
    uVar2 = uVar1 & 2;
    uVar9 = uVar9 >> 1 | (ulong)(uVar2 >> 1) << 0x3f;
    uVar8 = uVar8 >> 1 | (ulong)uVar1 << 0x3f | (ulong)uVar2 << 0x3e;
    uVar7 = uVar7 + 1;
    puVar3 = param_1;
    puVar5 = puVar4;
    if (uVar7 == 0x40) {
      uVar7 = 0;
      puVar3 = param_1 + 1;
      *param_1 = uVar9;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar8;
      uVar9 = 0;
      uVar8 = 0;
    }
    lVar6 = lVar6 + 2;
    param_1 = puVar3;
    puVar4 = puVar5;
  } while (lVar6 != 0x57a);
  *puVar3 = uVar9 >> (-(ulong)uVar7 & 0x3f);
  *puVar5 = uVar8 >> (-(ulong)uVar7 & 0x3f);
  return;
}



/* Entry: 10ae43e54; end: 10ae44093;  */

undefined8 FUN_10ae43e54(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  short *psVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  
  puVar2 = (undefined8 *)0x2d77;
  _malloc();
  if (puVar2 == (undefined8 *)0x0) {
    _bzero(param_1,0x472);
    func_0x000107c2b3c4(param_2,0x20,&UNK_10e525a20);
    uVar3 = 0;
  }
  else {
    puVar6 = puVar2 + 1;
    *puVar2 = 0x2d6f;
    uVar5 = (ulong)(uint)-(int)puVar6 & 0x1f;
    lVar1 = (long)puVar6 + uVar5;
    param_3 = param_3 + ((ulong)(uint)-(int)param_3 & 0xf);
    FUN_10ae44094(lVar1 + 0x15c0,param_4);
    FUN_10ae44094(lVar1 + 0x1b40,param_4 + 700);
    psVar7 = (short *)(lVar1 + 0x20c0);
    func_0x00010ae440e4(psVar7,lVar1 + 0x15c0);
    *(undefined2 *)(lVar1 + 0x20be) = 0;
    *(undefined4 *)(lVar1 + 0x20ba) = 0;
    *(undefined4 *)(param_3 + 0x57a) = 0;
    *(undefined2 *)(param_3 + 0x57e) = 0;
    lVar8 = 0x58;
    FUN_10ae44d64(lVar1,lVar1 + 0xb00,lVar1 + 0x1b40,param_3,0x58);
    lVar4 = (long)puVar2 + uVar5;
    do {
      uVar10 = *(undefined8 *)(lVar4 + 0x10);
      uVar3 = *(undefined8 *)(lVar4 + 8);
      auVar9 = NEON_ext(*(undefined1 (*) [16])(lVar4 + 0x578),*(undefined1 (*) [16])(lVar4 + 0x588),
                        10,1);
      *(short *)(lVar4 + 0x2650) = auVar9._8_2_ + (short)uVar10;
      *(short *)(lVar4 + 0x2652) = auVar9._10_2_ + (short)((ulong)uVar10 >> 0x10);
      *(short *)(lVar4 + 0x2654) = auVar9._12_2_ + (short)((ulong)uVar10 >> 0x20);
      *(short *)(lVar4 + 0x2656) = auVar9._14_2_ + (short)((ulong)uVar10 >> 0x30);
      *(short *)(lVar4 + 0x2648) = auVar9._0_2_ + (short)uVar3;
      *(short *)(lVar4 + 0x264a) = auVar9._2_2_ + (short)((ulong)uVar3 >> 0x10);
      *(short *)(lVar4 + 0x264c) = auVar9._4_2_ + (short)((ulong)uVar3 >> 0x20);
      *(short *)(lVar4 + 0x264e) = auVar9._6_2_ + (short)((ulong)uVar3 >> 0x30);
      lVar4 = lVar4 + 0x10;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(undefined2 *)(lVar1 + 0x2bbe) = 0;
    *(undefined4 *)(lVar1 + 0x2bba) = 0;
    lVar4 = 0x2bd;
    do {
      psVar7[0x2c0] = psVar7[0x2c0] + *psVar7;
      psVar7 = psVar7 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    func_0x00010ae44244(param_1,lVar1 + 0x2640);
    func_0x00010ae44394(lVar1 + 0x2c30,lVar1 + 0x15c0);
    func_0x00010ae44394(lVar1 + 0x2cbc,lVar1 + 0x1b40);
    *(undefined8 *)(lVar1 + 0x2c28) = 0;
    *(undefined8 *)(lVar1 + 0x2c20) = 0;
    *(undefined8 *)(lVar1 + 0x2c18) = 0;
    *(undefined8 *)(lVar1 + 0x2c10) = 0;
    *(undefined8 *)(lVar1 + 0x2c08) = 0;
    *(undefined8 *)(lVar1 + 0x2c00) = 0;
    *(undefined8 *)(lVar1 + 0x2bf8) = 0;
    *(undefined8 *)(lVar1 + 0x2bf0) = 0;
    *(undefined8 *)(lVar1 + 0x2be8) = 0;
    *(undefined8 *)(lVar1 + 0x2be0) = 0;
    *(undefined8 *)(lVar1 + 0x2bc8) = 0xa54ff53a3c6ef372;
    *(undefined8 *)(lVar1 + 0x2bc0) = 0xbb67ae856a09e667;
    *(undefined8 *)(lVar1 + 0x2bd8) = 0x5be0cd191f83d9ab;
    *(undefined8 *)(lVar1 + 0x2bd0) = 0x9b05688c510e527f;
    *(undefined4 *)(lVar1 + 0x2c2c) = 0x20;
    func_0x000107c2b4fc(lVar1 + 0x2bc0,&UNK_10e527c90,0xb);
    func_0x000107c2b4fc(lVar1 + 0x2bc0,lVar1 + 0x2c30,0x8c);
    func_0x000107c2b4fc(lVar1 + 0x2bc0,lVar1 + 0x2cbc,0x8c);
    func_0x000107c2b4fc(lVar1 + 0x2bc0,param_1,0x472);
    func_0x000107c34f88(param_2,lVar1 + 0x2bc0);
    func_0x000107c2b534(puVar6);
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10ae44094; end: 10ae443e7;  */

void FUN_10ae44094(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = ((uint)*(byte *)(param_2 + lVar2) * 0x5555 >> 0x10) * -3 +
            (uint)*(byte *)(param_2 + lVar2);
    uVar1 = (uVar1 & (int)uVar1 >> 1) - 1 & uVar1;
    *(ushort *)(param_1 + lVar2 * 2) = ((ushort)(uVar1 >> 1) & 0x7fff ^ 1) - 1 | (ushort)uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 700);
  *(undefined2 *)(param_1 + 0x578) = 0;
  return;
}



/* Entry: 10ae443e8; end: 10ae44a87;  */

ushort * FUN_10ae443e8(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  ushort *puVar19;
  undefined8 *puVar20;
  ushort *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  short sVar24;
  ulong uVar25;
  ulong *puVar26;
  ulong *puVar27;
  long lVar28;
  byte *pbVar29;
  long lVar30;
  byte bVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  long lVar35;
  uint uVar36;
  ulong uVar37;
  ushort *puVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  long lVar44;
  byte bVar45;
  undefined8 *puVar46;
  short *psVar47;
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined1 *puStack_390;
  undefined1 *puStack_388;
  ulong *puStack_380;
  ulong *puStack_378;
  undefined1 auStack_370 [32];
  undefined1 auStack_350 [192];
  undefined1 auStack_290 [192];
  ulong auStack_1d0 [11];
  ulong auStack_178 [11];
  ulong auStack_120 [11];
  ulong auStack_c8 [11];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar20 = (undefined8 *)0x3f57;
  _malloc();
  if (puVar20 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x20;
    func_0x000107c2b3c4(param_1,0x20,&UNK_10e525a20);
    puVar21 = (ushort *)0x0;
  }
  else {
    puVar46 = puVar20 + 1;
    *puVar20 = 0x3f4f;
    param_2 = param_2 + ((ulong)(uint)-(int)param_2 & 0xf);
    bVar45 = *(byte *)(param_2 + 0x6e0);
    bVar31 = *(byte *)(param_2 + 0x6e1);
    bVar6 = *(byte *)(param_2 + 0x6e2);
    bVar7 = *(byte *)(param_2 + 0x6e3);
    bVar8 = *(byte *)(param_2 + 0x6e4);
    bVar9 = *(byte *)(param_2 + 0x6e5);
    bVar10 = *(byte *)(param_2 + 0x6e6);
    bVar11 = *(byte *)(param_2 + 0x6e7);
    bVar12 = *(byte *)(param_2 + 0x6e9);
    bVar13 = *(byte *)(param_2 + 0x6ea);
    bVar14 = *(byte *)(param_2 + 0x6eb);
    bVar15 = *(byte *)(param_2 + 0x6ec);
    bVar16 = *(byte *)(param_2 + 0x6ed);
    bVar17 = *(byte *)(param_2 + 0x6ee);
    bVar18 = *(byte *)(param_2 + 0x6ef);
    uVar25 = (ulong)(uint)-(int)puVar46 & 0x1f;
    lVar35 = (long)puVar46 + uVar25;
    *(byte *)(lVar35 + 0x15c8) = *(byte *)(param_2 + 0x6e8) ^ 0x36;
    *(byte *)(lVar35 + 0x15c9) = bVar12 ^ 0x36;
    *(byte *)(lVar35 + 0x15ca) = bVar13 ^ 0x36;
    *(byte *)(lVar35 + 0x15cb) = bVar14 ^ 0x36;
    *(byte *)(lVar35 + 0x15cc) = bVar15 ^ 0x36;
    *(byte *)(lVar35 + 0x15cd) = bVar16 ^ 0x36;
    *(byte *)(lVar35 + 0x15ce) = bVar17 ^ 0x36;
    *(byte *)(lVar35 + 0x15cf) = bVar18 ^ 0x36;
    *(byte *)(lVar35 + 0x15c0) = bVar45 ^ 0x36;
    *(byte *)(lVar35 + 0x15c1) = bVar31 ^ 0x36;
    *(byte *)(lVar35 + 0x15c2) = bVar6 ^ 0x36;
    *(byte *)(lVar35 + 0x15c3) = bVar7 ^ 0x36;
    *(byte *)(lVar35 + 0x15c4) = bVar8 ^ 0x36;
    *(byte *)(lVar35 + 0x15c5) = bVar9 ^ 0x36;
    *(byte *)(lVar35 + 0x15c6) = bVar10 ^ 0x36;
    *(byte *)(lVar35 + 0x15c7) = bVar11 ^ 0x36;
    bVar45 = *(byte *)(param_2 + 0x6f0);
    bVar31 = *(byte *)(param_2 + 0x6f1);
    bVar6 = *(byte *)(param_2 + 0x6f2);
    bVar7 = *(byte *)(param_2 + 0x6f3);
    bVar8 = *(byte *)(param_2 + 0x6f4);
    bVar9 = *(byte *)(param_2 + 0x6f5);
    bVar10 = *(byte *)(param_2 + 0x6f6);
    bVar11 = *(byte *)(param_2 + 0x6f7);
    bVar12 = *(byte *)(param_2 + 0x6f9);
    bVar13 = *(byte *)(param_2 + 0x6fa);
    bVar14 = *(byte *)(param_2 + 0x6fb);
    bVar15 = *(byte *)(param_2 + 0x6fc);
    bVar16 = *(byte *)(param_2 + 0x6fd);
    bVar17 = *(byte *)(param_2 + 0x6fe);
    bVar18 = *(byte *)(param_2 + 0x6ff);
    *(byte *)(lVar35 + 0x15d8) = *(byte *)(param_2 + 0x6f8) ^ 0x36;
    *(byte *)(lVar35 + 0x15d9) = bVar12 ^ 0x36;
    *(byte *)(lVar35 + 0x15da) = bVar13 ^ 0x36;
    *(byte *)(lVar35 + 0x15db) = bVar14 ^ 0x36;
    *(byte *)(lVar35 + 0x15dc) = bVar15 ^ 0x36;
    *(byte *)(lVar35 + 0x15dd) = bVar16 ^ 0x36;
    *(byte *)(lVar35 + 0x15de) = bVar17 ^ 0x36;
    *(byte *)(lVar35 + 0x15df) = bVar18 ^ 0x36;
    *(byte *)(lVar35 + 0x15d0) = bVar45 ^ 0x36;
    *(byte *)(lVar35 + 0x15d1) = bVar31 ^ 0x36;
    *(byte *)(lVar35 + 0x15d2) = bVar6 ^ 0x36;
    *(byte *)(lVar35 + 0x15d3) = bVar7 ^ 0x36;
    *(byte *)(lVar35 + 0x15d4) = bVar8 ^ 0x36;
    *(byte *)(lVar35 + 0x15d5) = bVar9 ^ 0x36;
    *(byte *)(lVar35 + 0x15d6) = bVar10 ^ 0x36;
    *(byte *)(lVar35 + 0x15d7) = bVar11 ^ 0x36;
    *(undefined8 *)(lVar35 + 0x15e8) = 0x3636363636363636;
    *(undefined8 *)(lVar35 + 0x15e0) = 0x3636363636363636;
    *(undefined8 *)(lVar35 + 0x15f8) = 0x3636363636363636;
    *(undefined8 *)(lVar35 + 0x15f0) = 0x3636363636363636;
    puVar22 = (undefined8 *)(lVar35 + 0x1600);
    *(undefined8 *)(lVar35 + 0x1668) = 0;
    *(undefined8 *)(lVar35 + 0x1660) = 0;
    *(undefined8 *)(lVar35 + 0x1628) = 0;
    *(undefined8 *)(lVar35 + 0x1620) = 0;
    *(undefined8 *)(lVar35 + 0x1638) = 0;
    *(undefined8 *)(lVar35 + 0x1630) = 0;
    *(undefined8 *)(lVar35 + 0x1648) = 0;
    *(undefined8 *)(lVar35 + 0x1640) = 0;
    *(undefined8 *)(lVar35 + 0x1658) = 0;
    *(undefined8 *)(lVar35 + 0x1650) = 0;
    *(undefined8 *)(lVar35 + 0x1608) = 0xa54ff53a3c6ef372;
    *(undefined8 *)(lVar35 + 0x1600) = 0xbb67ae856a09e667;
    *(undefined8 *)(lVar35 + 0x1618) = 0x5be0cd191f83d9ab;
    *(undefined8 *)(lVar35 + 0x1610) = 0x9b05688c510e527f;
    *(undefined4 *)(lVar35 + 0x166c) = 0x20;
    func_0x000107c2b4fc(puVar22,lVar35 + 0x15c0,0x40);
    func_0x000107c2b4fc(puVar22,param_3,param_4);
    func_0x000107c34f88(auStack_370,puVar22);
    *(byte *)(lVar35 + 0x15c8) = *(byte *)(lVar35 + 0x15c8) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c9) = *(byte *)(lVar35 + 0x15c9) ^ 0x6a;
    *(byte *)(lVar35 + 0x15ca) = *(byte *)(lVar35 + 0x15ca) ^ 0x6a;
    *(byte *)(lVar35 + 0x15cb) = *(byte *)(lVar35 + 0x15cb) ^ 0x6a;
    *(byte *)(lVar35 + 0x15cc) = *(byte *)(lVar35 + 0x15cc) ^ 0x6a;
    *(byte *)(lVar35 + 0x15cd) = *(byte *)(lVar35 + 0x15cd) ^ 0x6a;
    *(byte *)(lVar35 + 0x15ce) = *(byte *)(lVar35 + 0x15ce) ^ 0x6a;
    *(byte *)(lVar35 + 0x15cf) = *(byte *)(lVar35 + 0x15cf) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c0) = *(byte *)(lVar35 + 0x15c0) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c1) = *(byte *)(lVar35 + 0x15c1) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c2) = *(byte *)(lVar35 + 0x15c2) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c3) = *(byte *)(lVar35 + 0x15c3) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c4) = *(byte *)(lVar35 + 0x15c4) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c5) = *(byte *)(lVar35 + 0x15c5) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c6) = *(byte *)(lVar35 + 0x15c6) ^ 0x6a;
    *(byte *)(lVar35 + 0x15c7) = *(byte *)(lVar35 + 0x15c7) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d8) = *(byte *)(lVar35 + 0x15d8) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d9) = *(byte *)(lVar35 + 0x15d9) ^ 0x6a;
    *(byte *)(lVar35 + 0x15da) = *(byte *)(lVar35 + 0x15da) ^ 0x6a;
    *(byte *)(lVar35 + 0x15db) = *(byte *)(lVar35 + 0x15db) ^ 0x6a;
    *(byte *)(lVar35 + 0x15dc) = *(byte *)(lVar35 + 0x15dc) ^ 0x6a;
    *(byte *)(lVar35 + 0x15dd) = *(byte *)(lVar35 + 0x15dd) ^ 0x6a;
    *(byte *)(lVar35 + 0x15de) = *(byte *)(lVar35 + 0x15de) ^ 0x6a;
    *(byte *)(lVar35 + 0x15df) = *(byte *)(lVar35 + 0x15df) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d0) = *(byte *)(lVar35 + 0x15d0) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d1) = *(byte *)(lVar35 + 0x15d1) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d2) = *(byte *)(lVar35 + 0x15d2) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d3) = *(byte *)(lVar35 + 0x15d3) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d4) = *(byte *)(lVar35 + 0x15d4) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d5) = *(byte *)(lVar35 + 0x15d5) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d6) = *(byte *)(lVar35 + 0x15d6) ^ 0x6a;
    *(byte *)(lVar35 + 0x15d7) = *(byte *)(lVar35 + 0x15d7) ^ 0x6a;
    *(undefined1 *)(lVar35 + 0x15e8) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15e9) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15ea) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15eb) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15ec) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15ed) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15ee) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15ef) = 0x5c;
    *(undefined8 *)(lVar35 + 0x15e0) = 0x5c5c5c5c5c5c5c5c;
    *(undefined1 *)(lVar35 + 0x15f8) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15f9) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15fa) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15fb) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15fc) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15fd) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15fe) = 0x5c;
    *(undefined1 *)(lVar35 + 0x15ff) = 0x5c;
    *(undefined8 *)(lVar35 + 0x15f0) = 0x5c5c5c5c5c5c5c5c;
    *(undefined8 *)(lVar35 + 0x1668) = 0;
    *(undefined8 *)(lVar35 + 0x1660) = 0;
    *(undefined8 *)(lVar35 + 0x1628) = 0;
    *(undefined8 *)(lVar35 + 0x1620) = 0;
    *(undefined8 *)(lVar35 + 0x1638) = 0;
    *(undefined8 *)(lVar35 + 0x1630) = 0;
    *(undefined8 *)(lVar35 + 0x1648) = 0;
    *(undefined8 *)(lVar35 + 0x1640) = 0;
    *(undefined8 *)(lVar35 + 0x1658) = 0;
    *(undefined8 *)(lVar35 + 0x1650) = 0;
    *(undefined8 *)(lVar35 + 0x1608) = 0xa54ff53a3c6ef372;
    *(undefined8 *)(lVar35 + 0x1600) = 0xbb67ae856a09e667;
    *(undefined8 *)(lVar35 + 0x1618) = 0x5be0cd191f83d9ab;
    *(undefined8 *)(lVar35 + 0x1610) = 0x9b05688c510e527f;
    *(undefined4 *)(lVar35 + 0x166c) = 0x20;
    func_0x000107c2b4fc(puVar22,lVar35 + 0x15c0,0x40);
    func_0x000107c2b4fc(puVar22,auStack_370,0x20);
    puVar23 = puVar22;
    func_0x000107c34f88(param_1);
    if (param_4 == 0x472) {
      lVar28 = lVar35 + 0x1670;
      lVar30 = lVar28;
      puVar23 = param_3;
      FUN_10ae44a88();
      if ((int)lVar30 != 0) {
        func_0x00010ae44c18(lVar35 + 0x1bf0,param_2);
        *(undefined4 *)(lVar35 + 0x1bea) = 0;
        *(undefined2 *)(lVar35 + 0x1bee) = 0;
        *(undefined4 *)(lVar35 + 0x216a) = 0;
        *(undefined2 *)(lVar35 + 0x216e) = 0;
        lVar43 = 0x58;
        FUN_10ae44d64(lVar35,lVar35 + 0xb00,lVar28,lVar35 + 0x1bf0,0x58);
        lVar30 = (long)puVar20 + uVar25;
        do {
          uVar50 = *(undefined8 *)(lVar30 + 0x590);
          uVar51 = *(undefined8 *)(lVar30 + 0x10);
          uVar49 = *(undefined8 *)(lVar30 + 8);
          auVar48[9] = (char)((ulong)uVar50 >> 8);
          auVar48._0_9_ = *(unkbyte9 *)(lVar30 + 0x588);
          auVar48[10] = (char)((ulong)uVar50 >> 0x10);
          auVar48[0xb] = (char)((ulong)uVar50 >> 0x18);
          auVar48[0xc] = (char)((ulong)uVar50 >> 0x20);
          auVar48[0xd] = (char)((ulong)uVar50 >> 0x28);
          auVar48[0xe] = (char)((ulong)uVar50 >> 0x30);
          auVar48[0xf] = (char)((ulong)uVar50 >> 0x38);
          auVar48 = NEON_ext(*(undefined1 (*) [16])(lVar30 + 0x578),auVar48,10,1);
          *(short *)(lVar30 + 0x2180) = auVar48._8_2_ + (short)uVar51;
          *(short *)(lVar30 + 0x2182) = auVar48._10_2_ + (short)((ulong)uVar51 >> 0x10);
          *(short *)(lVar30 + 0x2184) = auVar48._12_2_ + (short)((ulong)uVar51 >> 0x20);
          *(short *)(lVar30 + 0x2186) = auVar48._14_2_ + (short)((ulong)uVar51 >> 0x30);
          *(short *)(lVar30 + 0x2178) = auVar48._0_2_ + (short)uVar49;
          *(short *)(lVar30 + 0x217a) = auVar48._2_2_ + (short)((ulong)uVar49 >> 0x10);
          *(short *)(lVar30 + 0x217c) = auVar48._4_2_ + (short)((ulong)uVar49 >> 0x20);
          *(short *)(lVar30 + 0x217e) = auVar48._6_2_ + (short)((ulong)uVar49 >> 0x30);
          lVar30 = lVar30 + 0x10;
          lVar43 = lVar43 + -1;
        } while (lVar43 != 0);
        *(undefined2 *)(lVar35 + 0x26ee) = 0;
        *(undefined4 *)(lVar35 + 0x26ea) = 0;
        FUN_10ae43db0(lVar35 + 0x26f0,lVar35 + 0x2170);
        lStack_3b0 = param_2 + 0xb0;
        puStack_390 = auStack_290;
        puStack_388 = auStack_350;
        lStack_398 = lVar35 + 0x2748;
        lStack_3a8 = param_2 + 0x108;
        lStack_3a0 = lVar35 + 0x26f0;
        puStack_380 = auStack_120;
        puStack_378 = auStack_1d0;
        FUN_10ae42f74(&puStack_380,&puStack_390,&lStack_3a0,&lStack_3b0,0xb);
        lVar30 = 0;
        do {
          uVar40 = *(ulong *)((long)auStack_c8 + lVar30);
          uVar37 = auStack_120[10] >> 0x3d | uVar40 << 3;
          uVar42 = *(ulong *)((long)auStack_178 + lVar30);
          uVar32 = auStack_1d0[10] >> 0x3d | uVar42 << 3;
          puVar26 = (ulong *)(lVar35 + 0x27a0 + lVar30);
          uVar41 = *(ulong *)((long)auStack_1d0 + lVar30);
          uVar39 = uVar32 ^ *(ulong *)((long)auStack_120 + lVar30);
          *puVar26 = (uVar41 ^ uVar37) & uVar39;
          puVar26[0xb] = uVar39 ^ uVar37 | uVar41 ^ uVar32;
          lVar30 = lVar30 + 8;
          auStack_1d0[10] = uVar42;
          auStack_120[10] = uVar40;
        } while (lVar30 != 0x58);
        uVar32 = *(ulong *)(lVar35 + 0x27f0);
        uVar37 = -(*(ulong *)(lVar35 + 0x2848) >> 0x3c & 1);
        lVar30 = 0xb;
        puVar26 = (ulong *)(lVar35 + 0x27f8);
        do {
          uVar39 = puVar26[-0xb];
          puVar26[-0xb] = (uVar37 ^ (long)(uVar32 << 3) >> 0x3f ^ *puVar26) & (uVar39 ^ uVar37);
          *puVar26 = *puVar26 ^ uVar37 | uVar39 ^ -(uVar32 >> 0x3c & 1);
          lVar30 = lVar30 + -1;
          puVar26 = puVar26 + 1;
        } while (lVar30 != 0);
        *(ulong *)(lVar35 + 0x27f0) = *(ulong *)(lVar35 + 0x27f0) & 0x1fffffffffffffff;
        *(ulong *)(lVar35 + 0x2848) = *(ulong *)(lVar35 + 0x2848) & 0x1fffffffffffffff;
        func_0x00010ae44c18(lVar35 + 0x2850,lVar35 + 0x27a0);
        psVar47 = (short *)(lVar35 + 0x2dd0);
        func_0x00010ae440e4(psVar47,lVar35 + 0x2850);
        lVar30 = 0;
        lVar43 = lVar35 + 0x3350;
        do {
          psVar47[0x2c0] = *(short *)(lVar28 + lVar30 * 2) - *psVar47;
          lVar30 = lVar30 + 1;
          psVar47 = psVar47 + 1;
        } while (lVar30 != 0x2bd);
        *(undefined2 *)(lVar35 + 0x38ce) = 0;
        *(undefined4 *)(lVar35 + 0x38ca) = 0;
        *(undefined2 *)(param_2 + 0x6de) = 0;
        *(undefined4 *)(param_2 + 0x6da) = 0;
        lVar44 = 0x58;
        FUN_10ae44d64(lVar35,lVar35 + 0xb00,lVar43,param_2 + 0x160,0x58);
        lVar30 = (long)puVar20 + uVar25;
        do {
          uVar50 = *(undefined8 *)(lVar30 + 0x590);
          uVar51 = *(undefined8 *)(lVar30 + 0x10);
          uVar49 = *(undefined8 *)(lVar30 + 8);
          auVar5[9] = (char)((ulong)uVar50 >> 8);
          auVar5._0_9_ = *(unkbyte9 *)(lVar30 + 0x588);
          auVar5[10] = (char)((ulong)uVar50 >> 0x10);
          auVar5[0xb] = (char)((ulong)uVar50 >> 0x18);
          auVar5[0xc] = (char)((ulong)uVar50 >> 0x20);
          auVar5[0xd] = (char)((ulong)uVar50 >> 0x28);
          auVar5[0xe] = (char)((ulong)uVar50 >> 0x30);
          auVar5[0xf] = (char)((ulong)uVar50 >> 0x38);
          auVar48 = NEON_ext(*(undefined1 (*) [16])(lVar30 + 0x578),auVar5,10,1);
          *(short *)(lVar30 + 0x3360) = auVar48._8_2_ + (short)uVar51;
          *(short *)(lVar30 + 0x3362) = auVar48._10_2_ + (short)((ulong)uVar51 >> 0x10);
          *(short *)(lVar30 + 0x3364) = auVar48._12_2_ + (short)((ulong)uVar51 >> 0x20);
          *(short *)(lVar30 + 0x3366) = auVar48._14_2_ + (short)((ulong)uVar51 >> 0x30);
          *(short *)(lVar30 + 0x3358) = auVar48._0_2_ + (short)uVar49;
          *(short *)(lVar30 + 0x335a) = auVar48._2_2_ + (short)((ulong)uVar49 >> 0x10);
          *(short *)(lVar30 + 0x335c) = auVar48._4_2_ + (short)((ulong)uVar49 >> 0x20);
          *(short *)(lVar30 + 0x335e) = auVar48._6_2_ + (short)((ulong)uVar49 >> 0x30);
          lVar30 = lVar30 + 0x10;
          lVar44 = lVar44 + -1;
        } while (lVar44 != 0);
        lVar30 = 0;
        *(undefined2 *)(lVar35 + 0x38ce) = 0;
        *(undefined4 *)(lVar35 + 0x38ca) = 0;
        sVar24 = *(short *)(lVar35 + 0x38c8);
        do {
          *(short *)(lVar43 + lVar30) = *(short *)(lVar43 + lVar30) - sVar24;
          lVar30 = lVar30 + 2;
        } while (lVar30 != 0x57a);
        lVar30 = 0;
        do {
          *(ushort *)(lVar43 + lVar30) = *(ushort *)(lVar43 + lVar30) & 0x1fff;
          lVar30 = lVar30 + 2;
        } while (lVar30 != 0x57a);
        lVar30 = 0;
        uVar25 = 0;
        uVar32 = 0;
        uVar36 = 0;
        bVar45 = 0xff;
        puVar26 = (ulong *)(lVar35 + 0x38d0);
        puVar33 = (ulong *)(lVar35 + 0x3928);
        do {
          uVar4 = *(ushort *)(lVar43 + lVar30);
          uVar2 = uVar4 & 2;
          uVar3 = uVar4 & 3 ^ uVar2 >> 1;
          if ((uVar3 | -(uVar2 >> 1) & 0x1fff) != (uint)uVar4) {
            bVar45 = 0;
          }
          uVar25 = uVar25 >> 1 | (ulong)(uVar2 >> 1) << 0x3f;
          uVar32 = uVar32 >> 1 | (ulong)uVar3 << 0x3f | (ulong)uVar2 << 0x3e;
          uVar36 = uVar36 + 1;
          puVar27 = puVar26;
          puVar34 = puVar33;
          if (uVar36 == 0x40) {
            uVar36 = 0;
            puVar27 = puVar26 + 1;
            *puVar26 = uVar25;
            puVar34 = puVar33 + 1;
            *puVar33 = uVar32;
            uVar32 = 0;
            uVar25 = 0;
          }
          lVar30 = lVar30 + 2;
          puVar26 = puVar27;
          puVar33 = puVar34;
        } while (lVar30 != 0x57a);
        *puVar27 = uVar25 >> (-(ulong)uVar36 & 0x3f);
        *puVar34 = uVar32 >> (-(ulong)uVar36 & 0x3f);
        lVar30 = lVar35 + 0x3980;
        func_0x00010ae44244(lVar30,lVar28);
        func_0x00010ae44394(lVar35 + 0x3df2,lVar35 + 0x2850);
        func_0x00010ae44394(lVar35 + 0x3e7e,lVar43);
        lVar28 = 0;
        bVar31 = 0;
        do {
          bVar31 = *(byte *)(lVar30 + lVar28) ^ *(byte *)((long)param_3 + lVar28) | bVar31;
          lVar28 = lVar28 + 1;
        } while (lVar28 != 0x472);
        *(undefined8 *)(lVar35 + 0x1658) = 0;
        *(undefined8 *)(lVar35 + 0x1650) = 0;
        *(undefined8 *)(lVar35 + 0x1668) = 0;
        *(undefined8 *)(lVar35 + 0x1660) = 0;
        *(undefined8 *)(lVar35 + 0x1638) = 0;
        *(undefined8 *)(lVar35 + 0x1630) = 0;
        *(undefined8 *)(lVar35 + 0x1648) = 0;
        *(undefined8 *)(lVar35 + 0x1640) = 0;
        *(undefined8 *)(lVar35 + 0x1618) = 0;
        *(undefined8 *)(lVar35 + 0x1610) = 0;
        *(undefined8 *)(lVar35 + 0x1628) = 0;
        *(undefined8 *)(lVar35 + 0x1620) = 0;
        *(undefined8 *)(lVar35 + 0x1608) = 0;
        *puVar22 = 0;
        *(undefined8 *)(lVar35 + 0x1608) = 0xa54ff53a3c6ef372;
        *(undefined8 *)(lVar35 + 0x1600) = 0xbb67ae856a09e667;
        *(undefined8 *)(lVar35 + 0x1618) = 0x5be0cd191f83d9ab;
        *(undefined8 *)(lVar35 + 0x1610) = 0x9b05688c510e527f;
        *(undefined4 *)(lVar35 + 0x166c) = 0x20;
        func_0x000107c2b4fc(puVar22,&UNK_10e527c90,0xb);
        func_0x000107c2b4fc(puVar22,lVar35 + 0x3df2,0x8c);
        func_0x000107c2b4fc(puVar22,lVar35 + 0x3e7e,0x8c);
        func_0x000107c2b4fc(puVar22,lVar30,0x472);
        func_0x000107c34f88(lVar35 + 0x3f0a);
        lVar28 = 0;
        if (bVar31 != 0) {
          bVar45 = 0;
        }
        bVar31 = ~bVar45;
        do {
          puVar20 = (undefined8 *)(lVar35 + 0x3f0a + lVar28);
          uVar49 = puVar20[1];
          uVar50 = *puVar20;
          uVar52 = ((undefined8 *)(param_1 + lVar28))[1];
          uVar51 = *(undefined8 *)(param_1 + lVar28);
          ((undefined8 *)(param_1 + lVar28))[1] =
               CONCAT17(bVar31 & (byte)((ulong)uVar52 >> 0x38) |
                        bVar45 & (byte)((ulong)uVar49 >> 0x38),
                        CONCAT16(bVar31 & (byte)((ulong)uVar52 >> 0x30) |
                                 bVar45 & (byte)((ulong)uVar49 >> 0x30),
                                 CONCAT15(bVar31 & (byte)((ulong)uVar52 >> 0x28) |
                                          bVar45 & (byte)((ulong)uVar49 >> 0x28),
                                          CONCAT14(bVar31 & (byte)((ulong)uVar52 >> 0x20) |
                                                   bVar45 & (byte)((ulong)uVar49 >> 0x20),
                                                   CONCAT13(bVar31 & (byte)((ulong)uVar52 >> 0x18) |
                                                            bVar45 & (byte)((ulong)uVar49 >> 0x18),
                                                            CONCAT12(bVar31 & (byte)((ulong)uVar52
                                                                                    >> 0x10) |
                                                                     bVar45 & (byte)((ulong)uVar49
                                                                                    >> 0x10),
                                                                     CONCAT11(bVar31 & (byte)((ulong
                                                  )uVar52 >> 8) |
                                                  bVar45 & (byte)((ulong)uVar49 >> 8),
                                                  bVar31 & (byte)uVar52 | bVar45 & (byte)uVar49)))))
                                ));
          *(undefined8 *)(param_1 + lVar28) =
               CONCAT17(bVar31 & (byte)((ulong)uVar51 >> 0x38) |
                        bVar45 & (byte)((ulong)uVar50 >> 0x38),
                        CONCAT16(bVar31 & (byte)((ulong)uVar51 >> 0x30) |
                                 bVar45 & (byte)((ulong)uVar50 >> 0x30),
                                 CONCAT15(bVar31 & (byte)((ulong)uVar51 >> 0x28) |
                                          bVar45 & (byte)((ulong)uVar50 >> 0x28),
                                          CONCAT14(bVar31 & (byte)((ulong)uVar51 >> 0x20) |
                                                   bVar45 & (byte)((ulong)uVar50 >> 0x20),
                                                   CONCAT13(bVar31 & (byte)((ulong)uVar51 >> 0x18) |
                                                            bVar45 & (byte)((ulong)uVar50 >> 0x18),
                                                            CONCAT12(bVar31 & (byte)((ulong)uVar51
                                                                                    >> 0x10) |
                                                                     bVar45 & (byte)((ulong)uVar50
                                                                                    >> 0x10),
                                                                     CONCAT11(bVar31 & (byte)((ulong
                                                  )uVar51 >> 8) |
                                                  bVar45 & (byte)((ulong)uVar50 >> 8),
                                                  bVar31 & (byte)uVar51 | bVar45 & (byte)uVar50)))))
                                ));
          lVar28 = lVar28 + 0x10;
          puVar23 = puVar22;
        } while (lVar28 != 0x20);
      }
    }
    func_0x000107c2b534(puVar46);
    puVar21 = (ushort *)0x1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar21;
  }
  ___stack_chk_fail();
  lVar35 = 0x57;
  pbVar1 = (byte *)((long)puVar23 + 3);
  puVar19 = puVar21;
  do {
    puVar38 = puVar19;
    pbVar29 = pbVar1;
    *puVar38 = (ushort)pbVar29[-3] | (pbVar29[-2] & 0x1f) << 8;
    puVar38[1] = (ushort)(pbVar29[-2] >> 5) | (ushort)pbVar29[-1] << 3 | (*pbVar29 & 3) << 0xb;
    puVar38[2] = (ushort)(*pbVar29 >> 2) | (pbVar29[1] & 0x7f) << 6;
    puVar38[3] = (ushort)(pbVar29[1] >> 7) | (ushort)pbVar29[2] << 1 | (pbVar29[3] & 0xf) << 9;
    puVar38[4] = (ushort)(pbVar29[3] >> 4) | (ushort)pbVar29[4] << 4 | (pbVar29[5] & 1) << 0xc;
    puVar38[5] = (ushort)(pbVar29[5] >> 1) | (pbVar29[6] & 0x3f) << 7;
    puVar38[6] = (ushort)(pbVar29[6] >> 6) | (ushort)pbVar29[7] << 2 | (pbVar29[8] & 7) << 10;
    puVar38[7] = (ushort)(pbVar29[8] >> 3) | (ushort)pbVar29[9] << 5;
    pbVar1 = pbVar29 + 0xd;
    lVar35 = lVar35 + -1;
    puVar19 = puVar38 + 8;
  } while (lVar35 != 0);
  puVar38[8] = (ushort)pbVar29[10] | (pbVar29[0xb] & 0x1f) << 8;
  puVar38[9] = (ushort)(pbVar29[0xb] >> 5) | (ushort)pbVar29[0xc] << 3 | (*pbVar1 & 3) << 0xb;
  puVar38[10] = (ushort)(*pbVar1 >> 2) | (pbVar29[0xe] & 0x7f) << 6;
  puVar38[0xb] = (ushort)(pbVar29[0xe] >> 7) | (ushort)pbVar29[0xf] << 1 |
                 (pbVar29[0x10] & 0xf) << 9;
  lVar35 = 0;
  do {
    *(short *)((long)puVar21 + lVar35) =
         (short)((int)((uint)*(ushort *)((long)puVar21 + lVar35) << 0x13) >> 0x13);
    lVar35 = lVar35 + 2;
  } while (lVar35 != 0x578);
  if (pbVar29[0x10] < 0x10) {
    lVar35 = 0;
    sVar24 = 0;
    do {
      sVar24 = sVar24 + *(short *)((long)puVar21 + lVar35);
      lVar35 = lVar35 + 2;
    } while (lVar35 != 0x578);
    puVar21[700] = -sVar24;
    return (ushort *)0x1;
  }
  return (ushort *)0x0;
}



/* Entry: 10ae44a88; end: 10ae44cc3;  */

undefined8 FUN_10ae44a88(ushort *param_1,long param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  short sVar3;
  byte *pbVar4;
  long lVar5;
  ushort *puVar6;
  
  lVar5 = 0x57;
  pbVar1 = (byte *)(param_2 + 3);
  puVar2 = param_1;
  do {
    puVar6 = puVar2;
    pbVar4 = pbVar1;
    *puVar6 = (ushort)pbVar4[-3] | (pbVar4[-2] & 0x1f) << 8;
    puVar6[1] = (ushort)(pbVar4[-2] >> 5) | (ushort)pbVar4[-1] << 3 | (*pbVar4 & 3) << 0xb;
    puVar6[2] = (ushort)(*pbVar4 >> 2) | (pbVar4[1] & 0x7f) << 6;
    puVar6[3] = (ushort)(pbVar4[1] >> 7) | (ushort)pbVar4[2] << 1 | (pbVar4[3] & 0xf) << 9;
    puVar6[4] = (ushort)(pbVar4[3] >> 4) | (ushort)pbVar4[4] << 4 | (pbVar4[5] & 1) << 0xc;
    puVar6[5] = (ushort)(pbVar4[5] >> 1) | (pbVar4[6] & 0x3f) << 7;
    puVar6[6] = (ushort)(pbVar4[6] >> 6) | (ushort)pbVar4[7] << 2 | (pbVar4[8] & 7) << 10;
    puVar6[7] = (ushort)(pbVar4[8] >> 3) | (ushort)pbVar4[9] << 5;
    pbVar1 = pbVar4 + 0xd;
    lVar5 = lVar5 + -1;
    puVar2 = puVar6 + 8;
  } while (lVar5 != 0);
  puVar6[8] = (ushort)pbVar4[10] | (pbVar4[0xb] & 0x1f) << 8;
  puVar6[9] = (ushort)(pbVar4[0xb] >> 5) | (ushort)pbVar4[0xc] << 3 | (*pbVar1 & 3) << 0xb;
  puVar6[10] = (ushort)(*pbVar1 >> 2) | (pbVar4[0xe] & 0x7f) << 6;
  puVar6[0xb] = (ushort)(pbVar4[0xe] >> 7) | (ushort)pbVar4[0xf] << 1 | (pbVar4[0x10] & 0xf) << 9;
  lVar5 = 0;
  do {
    *(short *)((long)param_1 + lVar5) =
         (short)((int)((uint)*(ushort *)((long)param_1 + lVar5) << 0x13) >> 0x13);
    lVar5 = lVar5 + 2;
  } while (lVar5 != 0x578);
  if (pbVar4[0x10] < 0x10) {
    lVar5 = 0;
    sVar3 = 0;
    do {
      sVar3 = sVar3 + *(short *)((long)param_1 + lVar5);
      lVar5 = lVar5 + 2;
    } while (lVar5 != 0x578);
    param_1[700] = -sVar3;
    return 1;
  }
  return 0;
}



/* Entry: 10ae44cc4; end: 10ae44d63;  */

void FUN_10ae44cc4(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  ulong auStack_58 [11];
  
  lVar2 = 0;
  do {
    lVar4 = 0;
    uVar5 = *(ulong *)(param_2 + lVar2 * 8);
    do {
      uVar6 = (ulong)(uint)(1 << (ulong)((uint)lVar4 & 0x1f));
      uVar5 = uVar5 >> (uVar6 & 0x3f) & *(ulong *)(&UNK_10e527ca0 + lVar4 * 8) |
              (*(ulong *)(&UNK_10e527ca0 + lVar4 * 8) & uVar5) << (uVar6 & 0x3f);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 6);
    auStack_58[lVar2] = uVar5;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0xb);
  lVar2 = 0;
  puVar3 = param_1;
  do {
    lVar4 = (*(long *)((long)auStack_58 + lVar2 + 0x40) << 0x3c) +
            (*(ulong *)((long)auStack_58 + lVar2 + 0x48) >> 4);
    lVar8 = (*(long *)((long)auStack_58 + lVar2 + 0x48) << 0x3c) +
            (*(ulong *)((long)auStack_58 + lVar2 + 0x50) >> 4);
    auVar7._8_8_ = lVar8;
    auVar7._0_8_ = lVar4;
    auVar1._8_8_ = lVar8;
    auVar1._0_8_ = lVar4;
    auVar7 = NEON_ext(auVar7,auVar1,8,1);
    puVar3[1] = auVar7._8_8_;
    *puVar3 = auVar7._0_8_;
    lVar2 = lVar2 + -0x10;
    puVar3 = puVar3 + 2;
  } while (lVar2 != -0x50);
  param_1[10] = auStack_58[0] >> 4;
  return;
}



/* Entry: 10ae44d64; end: 10ae452af;  */

void FUN_10ae44d64(short *param_1,short *param_2,undefined1 (*param_3) [16],undefined8 *param_4,
                  ulong param_5)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  short *psVar4;
  short *psVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  short *psVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  short sVar34;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  undefined1 auVar35 [16];
  short sVar43;
  undefined1 auVar36 [16];
  short sVar44;
  short sVar46;
  short sVar47;
  undefined8 uVar45;
  short sVar48;
  short sVar49;
  short sVar51;
  short sVar52;
  undefined8 uVar50;
  short sVar53;
  short sVar54;
  short sVar56;
  short sVar57;
  undefined8 uVar55;
  short sVar58;
  short sVar59;
  short sVar61;
  short sVar62;
  undefined8 uVar60;
  short sVar63;
  short sVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  short sVar74;
  short sVar75;
  short sVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  undefined1 auVar73 [16];
  short sVar80;
  short sVar81;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  undefined1 auVar82 [16];
  short sVar89;
  short sVar90;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  undefined1 auVar91 [16];
  short sVar98;
  short sVar99;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  short sVar105;
  short sVar106;
  undefined1 auVar100 [16];
  short sVar107;
  short sVar108;
  short sVar110;
  short sVar111;
  short sVar112;
  short sVar113;
  short sVar114;
  short sVar115;
  undefined1 auVar109 [16];
  short sVar116;
  short sVar117;
  short sVar118;
  short sVar119;
  short sVar120;
  short sVar121;
  short sVar122;
  short sVar123;
  short sVar124;
  short sVar125;
  short sVar126;
  short sVar127;
  short sVar128;
  short sVar129;
  short sVar130;
  short sVar131;
  short sVar132;
  short sVar133;
  short sVar134;
  short sVar135;
  short sVar136;
  short sVar137;
  short sVar138;
  short sVar139;
  short sVar140;
  short sVar141;
  short sVar142;
  short sVar144;
  short sVar145;
  short sVar146;
  short sVar147;
  short sVar148;
  short sVar149;
  short sVar150;
  short sVar151;
  short sVar152;
  short sVar153;
  short sVar154;
  short sVar155;
  undefined1 auVar143 [16];
  short sVar156;
  short sVar157;
  short sVar158;
  short sVar160;
  short sVar161;
  short sVar162;
  short sVar163;
  short sVar164;
  short sVar165;
  undefined1 auVar159 [16];
  short sVar166;
  short sVar167;
  short sVar169;
  short sVar170;
  short sVar171;
  short sVar172;
  short sVar173;
  short sVar174;
  undefined1 auVar168 [16];
  short sVar175;
  short sVar176;
  short sVar178;
  short sVar179;
  short sVar180;
  short sVar181;
  short sVar182;
  short sVar183;
  undefined1 auVar177 [16];
  short sVar184;
  short sVar185;
  short sVar187;
  short sVar188;
  short sVar189;
  short sVar190;
  short sVar191;
  short sVar192;
  undefined1 auVar186 [16];
  short sVar193;
  short sVar194;
  short sVar196;
  short sVar197;
  short sVar198;
  short sVar199;
  short sVar200;
  short sVar201;
  undefined1 auVar195 [16];
  short sVar202;
  short sVar203;
  short sVar205;
  short sVar206;
  short sVar207;
  short sVar208;
  short sVar209;
  short sVar210;
  undefined1 auVar204 [16];
  short sVar211;
  undefined1 auVar212 [16];
  short sVar213;
  short sVar214;
  short sVar215;
  short sVar216;
  short sVar217;
  short sVar218;
  short sVar219;
  short sVar220;
  short sVar221;
  short sVar223;
  short sVar224;
  short sVar225;
  short sVar226;
  short sVar227;
  short sVar228;
  undefined1 auVar222 [16];
  short sVar229;
  short sVar230;
  short sVar232;
  short sVar233;
  short sVar234;
  short sVar235;
  short sVar236;
  short sVar237;
  undefined1 auVar231 [16];
  short sVar238;
  short sVar239;
  short sVar241;
  short sVar242;
  short sVar243;
  short sVar244;
  short sVar245;
  short sVar246;
  undefined1 auVar240 [16];
  short sVar247;
  short sVar248;
  short sVar250;
  short sVar251;
  short sVar252;
  short sVar253;
  short sVar254;
  short sVar255;
  undefined1 auVar249 [16];
  short sVar256;
  short sVar257;
  short sVar259;
  short sVar260;
  short sVar261;
  short sVar262;
  short sVar263;
  short sVar264;
  undefined1 auVar258 [16];
  short sVar265;
  short sVar266;
  short sVar268;
  short sVar269;
  short sVar270;
  short sVar271;
  short sVar272;
  short sVar273;
  undefined1 auVar267 [16];
  short sVar274;
  short sVar275;
  short sVar277;
  short sVar278;
  short sVar279;
  short sVar280;
  short sVar281;
  short sVar282;
  undefined1 auVar276 [16];
  short sVar283;
  short sStack_e0;
  short sStack_de;
  short sStack_dc;
  short sStack_da;
  short sStack_d8;
  short sStack_d6;
  short sStack_d4;
  short sStack_d2;
  short sStack_d0;
  short sStack_ce;
  short sStack_cc;
  short sStack_ca;
  short sStack_c8;
  short sStack_c6;
  short sStack_c4;
  short sStack_c2;
  short sStack_c0;
  short sStack_be;
  short sStack_bc;
  short sStack_ba;
  short sStack_b8;
  short sStack_b6;
  short sStack_b4;
  short sStack_b2;
  
  if (param_5 == 3) {
    auVar73 = *param_3;
    auVar35 = param_3[1];
    auVar82 = param_3[2];
    uVar32 = param_4[1];
    sVar68 = (short)uVar32;
    sVar69 = (short)((ulong)uVar32 >> 0x10);
    sVar70 = (short)((ulong)uVar32 >> 0x20);
    sVar71 = (short)((ulong)uVar32 >> 0x30);
    uVar32 = *param_4;
    sVar64 = (short)uVar32;
    sVar65 = (short)((ulong)uVar32 >> 0x10);
    sVar66 = (short)((ulong)uVar32 >> 0x20);
    sVar67 = (short)((ulong)uVar32 >> 0x30);
    uVar33 = param_4[3];
    uVar32 = param_4[2];
    sVar221 = auVar73._0_2_;
    sVar223 = auVar73._2_2_;
    sVar224 = auVar73._4_2_;
    sVar225 = auVar73._6_2_;
    sVar226 = auVar73._8_2_;
    sVar227 = auVar73._10_2_;
    sVar228 = auVar73._12_2_;
    sVar229 = auVar73._14_2_;
    sVar194 = auVar35._0_2_;
    sVar196 = auVar35._2_2_;
    sVar197 = auVar35._4_2_;
    sVar198 = auVar35._6_2_;
    sVar199 = auVar35._8_2_;
    sVar200 = auVar35._10_2_;
    sVar201 = auVar35._12_2_;
    sVar202 = auVar35._14_2_;
    sVar185 = auVar82._0_2_;
    sVar187 = auVar82._2_2_;
    sVar188 = auVar82._4_2_;
    sVar189 = auVar82._6_2_;
    sVar190 = auVar82._8_2_;
    sVar191 = auVar82._10_2_;
    sVar192 = auVar82._12_2_;
    sVar193 = auVar82._14_2_;
    uVar60 = param_4[5];
    uVar55 = param_4[4];
    auVar100 = NEON_ext(auVar82,ZEXT216(0),0xe,1);
    auVar91 = NEON_ext(auVar35,auVar82,0xe,1);
    auVar109 = NEON_ext(auVar73,auVar35,0xe,1);
    auVar143 = NEON_ext(ZEXT216(0),auVar73,0xe,1);
    sVar257 = auVar143._0_2_;
    sVar259 = auVar143._2_2_;
    sVar260 = auVar143._4_2_;
    sVar261 = auVar143._6_2_;
    sVar262 = auVar143._8_2_;
    sVar263 = auVar143._10_2_;
    sVar264 = auVar143._12_2_;
    sVar265 = auVar143._14_2_;
    sVar34 = auVar100._0_2_;
    sVar37 = auVar100._2_2_;
    sVar38 = auVar100._4_2_;
    sVar39 = auVar100._6_2_;
    sVar40 = auVar100._8_2_;
    sVar41 = auVar100._10_2_;
    sVar42 = auVar100._12_2_;
    sVar43 = auVar100._14_2_;
    sVar46 = (short)((ulong)uVar32 >> 0x10);
    sVar56 = (short)((ulong)uVar55 >> 0x10);
    auVar100 = NEON_ext(auVar82,ZEXT216(0),0xc,1);
    auVar36 = NEON_ext(auVar35,auVar82,0xc,1);
    auVar168 = NEON_ext(auVar73,auVar35,0xc,1);
    auVar159 = NEON_ext(ZEXT216(0),auVar143,0xe,1);
    sVar266 = auVar159._0_2_;
    sVar268 = auVar159._2_2_;
    sVar269 = auVar159._4_2_;
    sVar270 = auVar159._6_2_;
    sVar271 = auVar159._8_2_;
    sVar272 = auVar159._10_2_;
    sVar273 = auVar159._12_2_;
    sVar274 = auVar159._14_2_;
    auVar73 = NEON_ext(auVar82,ZEXT216(0),10,1);
    auVar143 = NEON_ext(auVar35,auVar82,10,1);
    auVar177 = NEON_ext(auVar159,auVar168,0xe,1);
    auVar35 = NEON_ext(ZEXT216(0),auVar159,0xe,1);
    sVar108 = auVar35._0_2_;
    sVar110 = auVar35._2_2_;
    sVar111 = auVar35._4_2_;
    sVar112 = auVar35._6_2_;
    sVar113 = auVar35._8_2_;
    sVar114 = auVar35._10_2_;
    sVar115 = auVar35._12_2_;
    sVar116 = auVar35._14_2_;
    auVar186 = NEON_ext(auVar82,ZEXT216(0),8,1);
    auVar195 = NEON_ext(auVar159,auVar168,0xc,1);
    auVar82 = NEON_ext(ZEXT216(0),auVar35,0xe,1);
    sVar117 = auVar82._0_2_;
    sVar118 = auVar82._2_2_;
    sVar119 = auVar82._4_2_;
    sVar120 = auVar82._6_2_;
    sVar121 = auVar82._8_2_;
    sVar122 = auVar82._10_2_;
    sVar123 = auVar82._12_2_;
    sVar124 = auVar82._14_2_;
    auVar35 = NEON_ext(auVar82,auVar195,0xe,1);
    auVar159 = NEON_ext(ZEXT216(0),auVar82,0xe,1);
    sVar125 = auVar159._0_2_;
    sVar126 = auVar159._2_2_;
    sVar127 = auVar159._4_2_;
    sVar128 = auVar159._6_2_;
    sVar129 = auVar159._8_2_;
    sVar130 = auVar159._10_2_;
    sVar131 = auVar159._12_2_;
    sVar132 = auVar159._14_2_;
    auVar204 = NEON_ext(auVar82,auVar195,0xc,1);
    auVar82 = NEON_ext(ZEXT216(0),auVar159,0xe,1);
    sVar133 = auVar82._0_2_;
    sVar134 = auVar82._2_2_;
    sVar135 = auVar82._4_2_;
    sVar136 = auVar82._6_2_;
    sVar137 = auVar82._8_2_;
    sVar138 = auVar82._10_2_;
    sVar139 = auVar82._12_2_;
    sVar140 = auVar82._14_2_;
    auVar159 = NEON_ext(auVar82,auVar204,0xe,1);
    auVar82 = NEON_ext(ZEXT216(0),auVar82,0xe,1);
    sVar248 = auVar82._0_2_;
    sVar250 = auVar82._2_2_;
    sVar251 = auVar82._4_2_;
    sVar252 = auVar82._6_2_;
    sVar253 = auVar82._8_2_;
    sVar254 = auVar82._10_2_;
    sVar255 = auVar82._12_2_;
    sVar256 = auVar82._14_2_;
    sVar72 = auVar109._0_2_;
    sVar74 = auVar109._2_2_;
    sVar75 = auVar109._4_2_;
    sVar76 = auVar109._6_2_;
    sVar77 = auVar109._8_2_;
    sVar78 = auVar109._10_2_;
    sVar79 = auVar109._12_2_;
    sVar80 = auVar109._14_2_;
    sVar213 = auVar168._0_2_;
    sVar214 = auVar168._2_2_;
    sVar215 = auVar168._4_2_;
    sVar216 = auVar168._6_2_;
    sVar217 = auVar168._8_2_;
    sVar218 = auVar168._10_2_;
    sVar219 = auVar168._12_2_;
    sVar220 = auVar168._14_2_;
    sVar230 = auVar177._0_2_;
    sVar232 = auVar177._2_2_;
    sVar233 = auVar177._4_2_;
    sVar234 = auVar177._6_2_;
    sVar235 = auVar177._8_2_;
    sVar236 = auVar177._10_2_;
    sVar237 = auVar177._12_2_;
    sVar238 = auVar177._14_2_;
    sVar44 = (short)uVar32;
    sVar47 = (short)((ulong)uVar32 >> 0x20);
    sVar48 = (short)((ulong)uVar32 >> 0x30);
    sVar239 = auVar195._0_2_;
    sVar241 = auVar195._2_2_;
    sVar242 = auVar195._4_2_;
    sVar243 = auVar195._6_2_;
    sVar244 = auVar195._8_2_;
    sVar245 = auVar195._10_2_;
    sVar246 = auVar195._12_2_;
    sVar247 = auVar195._14_2_;
    sVar49 = (short)uVar33;
    sVar51 = (short)((ulong)uVar33 >> 0x10);
    sVar24 = auVar35._0_2_;
    sVar25 = auVar35._2_2_;
    sVar26 = auVar35._4_2_;
    sVar27 = auVar35._6_2_;
    sVar28 = auVar35._8_2_;
    sVar29 = auVar35._10_2_;
    sVar30 = auVar35._12_2_;
    sVar31 = auVar35._14_2_;
    sVar52 = (short)((ulong)uVar33 >> 0x20);
    sVar275 = auVar204._0_2_;
    sVar277 = auVar204._2_2_;
    sVar278 = auVar204._4_2_;
    sVar279 = auVar204._6_2_;
    sVar280 = auVar204._8_2_;
    sVar281 = auVar204._10_2_;
    sVar282 = auVar204._12_2_;
    sVar283 = auVar204._14_2_;
    sVar53 = (short)((ulong)uVar33 >> 0x30);
    sVar141 = auVar159._0_2_;
    sVar144 = auVar159._2_2_;
    sVar146 = auVar159._4_2_;
    sVar148 = auVar159._6_2_;
    sVar150 = auVar159._8_2_;
    sVar152 = auVar159._10_2_;
    sVar154 = auVar159._12_2_;
    sVar156 = auVar159._14_2_;
    param_1[4] = sVar226 * sVar64 + sVar262 * sVar65 + sVar271 * sVar66 + sVar113 * sVar67 +
                 sVar121 * sVar68 + sVar129 * sVar69 + sVar137 * sVar70 + sVar253 * sVar71;
    param_1[5] = sVar227 * sVar64 + sVar263 * sVar65 + sVar272 * sVar66 + sVar114 * sVar67 +
                 sVar122 * sVar68 + sVar130 * sVar69 + sVar138 * sVar70 + sVar254 * sVar71;
    param_1[6] = sVar228 * sVar64 + sVar264 * sVar65 + sVar273 * sVar66 + sVar115 * sVar67 +
                 sVar123 * sVar68 + sVar131 * sVar69 + sVar139 * sVar70 + sVar255 * sVar71;
    param_1[7] = sVar229 * sVar64 + sVar265 * sVar65 + sVar274 * sVar66 + sVar116 * sVar67 +
                 sVar124 * sVar68 + sVar132 * sVar69 + sVar140 * sVar70 + sVar256 * sVar71;
    *param_1 = sVar221 * sVar64 + sVar257 * sVar65 + sVar266 * sVar66 + sVar108 * sVar67 +
               sVar117 * sVar68 + sVar125 * sVar69 + sVar133 * sVar70 + sVar248 * sVar71;
    param_1[1] = sVar223 * sVar64 + sVar259 * sVar65 + sVar268 * sVar66 + sVar110 * sVar67 +
                 sVar118 * sVar68 + sVar126 * sVar69 + sVar134 * sVar70 + sVar250 * sVar71;
    param_1[2] = sVar224 * sVar64 + sVar260 * sVar65 + sVar269 * sVar66 + sVar111 * sVar67 +
                 sVar119 * sVar68 + sVar127 * sVar69 + sVar135 * sVar70 + sVar251 * sVar71;
    param_1[3] = sVar225 * sVar64 + sVar261 * sVar65 + sVar270 * sVar66 + sVar112 * sVar67 +
                 sVar120 * sVar68 + sVar128 * sVar69 + sVar136 * sVar70 + sVar252 * sVar71;
    param_1[0xc] = sVar199 * sVar64 + sVar77 * sVar65 + sVar217 * sVar66 + sVar235 * sVar67 +
                   sVar226 * sVar44 + sVar262 * sVar46 + sVar271 * sVar47 + sVar113 * sVar48 +
                   sVar244 * sVar68 + sVar121 * sVar49 + sVar129 * sVar51 + sVar28 * sVar69 +
                   sVar137 * sVar52 + sVar280 * sVar70 + sVar253 * sVar53 + sVar150 * sVar71;
    param_1[0xd] = sVar200 * sVar64 + sVar78 * sVar65 + sVar218 * sVar66 + sVar236 * sVar67 +
                   sVar227 * sVar44 + sVar263 * sVar46 + sVar272 * sVar47 + sVar114 * sVar48 +
                   sVar245 * sVar68 + sVar122 * sVar49 + sVar130 * sVar51 + sVar29 * sVar69 +
                   sVar138 * sVar52 + sVar281 * sVar70 + sVar254 * sVar53 + sVar152 * sVar71;
    param_1[0xe] = sVar201 * sVar64 + sVar79 * sVar65 + sVar219 * sVar66 + sVar237 * sVar67 +
                   sVar228 * sVar44 + sVar264 * sVar46 + sVar273 * sVar47 + sVar115 * sVar48 +
                   sVar246 * sVar68 + sVar123 * sVar49 + sVar131 * sVar51 + sVar30 * sVar69 +
                   sVar139 * sVar52 + sVar282 * sVar70 + sVar255 * sVar53 + sVar154 * sVar71;
    param_1[0xf] = sVar202 * sVar64 + sVar80 * sVar65 + sVar220 * sVar66 + sVar238 * sVar67 +
                   sVar229 * sVar44 + sVar265 * sVar46 + sVar274 * sVar47 + sVar116 * sVar48 +
                   sVar247 * sVar68 + sVar124 * sVar49 + sVar132 * sVar51 + sVar31 * sVar69 +
                   sVar140 * sVar52 + sVar283 * sVar70 + sVar256 * sVar53 + sVar156 * sVar71;
    param_1[8] = sVar194 * sVar64 + sVar72 * sVar65 + sVar213 * sVar66 + sVar230 * sVar67 +
                 sVar221 * sVar44 + sVar257 * sVar46 + sVar266 * sVar47 + sVar108 * sVar48 +
                 sVar239 * sVar68 + sVar117 * sVar49 + sVar125 * sVar51 + sVar24 * sVar69 +
                 sVar133 * sVar52 + sVar275 * sVar70 + sVar248 * sVar53 + sVar141 * sVar71;
    param_1[9] = sVar196 * sVar64 + sVar74 * sVar65 + sVar214 * sVar66 + sVar232 * sVar67 +
                 sVar223 * sVar44 + sVar259 * sVar46 + sVar268 * sVar47 + sVar110 * sVar48 +
                 sVar241 * sVar68 + sVar118 * sVar49 + sVar126 * sVar51 + sVar25 * sVar69 +
                 sVar134 * sVar52 + sVar277 * sVar70 + sVar250 * sVar53 + sVar144 * sVar71;
    param_1[10] = sVar197 * sVar64 + sVar75 * sVar65 + sVar215 * sVar66 + sVar233 * sVar67 +
                  sVar224 * sVar44 + sVar260 * sVar46 + sVar269 * sVar47 + sVar111 * sVar48 +
                  sVar242 * sVar68 + sVar119 * sVar49 + sVar127 * sVar51 + sVar26 * sVar69 +
                  sVar135 * sVar52 + sVar278 * sVar70 + sVar251 * sVar53 + sVar146 * sVar71;
    param_1[0xb] = sVar198 * sVar64 + sVar76 * sVar65 + sVar216 * sVar66 + sVar234 * sVar67 +
                   sVar225 * sVar44 + sVar261 * sVar46 + sVar270 * sVar47 + sVar112 * sVar48 +
                   sVar243 * sVar68 + sVar120 * sVar49 + sVar128 * sVar51 + sVar27 * sVar69 +
                   sVar136 * sVar52 + sVar279 * sVar70 + sVar252 * sVar53 + sVar148 * sVar71;
    auVar82 = NEON_ext(auVar177,auVar143,0xe,1);
    auVar168 = NEON_ext(auVar82,auVar186,0xe,1);
    auVar177 = NEON_ext(auVar195,auVar82,0xe,1);
    auVar109 = NEON_ext(auVar82,auVar186,0xc,1);
    auVar159 = NEON_ext(auVar195,auVar82,0xc,1);
    auVar35 = NEON_ext(auVar195,auVar82,10,1);
    sStack_d0 = auVar91._0_2_;
    sStack_ce = auVar91._2_2_;
    sStack_cc = auVar91._4_2_;
    sStack_ca = auVar91._6_2_;
    sStack_c8 = auVar91._8_2_;
    sStack_c6 = auVar91._10_2_;
    sStack_c4 = auVar91._12_2_;
    sStack_c2 = auVar91._14_2_;
    sVar6 = auVar36._0_2_;
    sVar7 = auVar36._2_2_;
    sVar8 = auVar36._4_2_;
    sVar9 = auVar36._6_2_;
    sVar10 = auVar36._8_2_;
    sVar11 = auVar36._10_2_;
    sVar12 = auVar36._12_2_;
    sVar13 = auVar36._14_2_;
    sVar81 = auVar143._0_2_;
    sVar83 = auVar143._2_2_;
    sVar84 = auVar143._4_2_;
    sVar85 = auVar143._6_2_;
    sVar86 = auVar143._8_2_;
    sVar87 = auVar143._10_2_;
    sVar88 = auVar143._12_2_;
    sVar89 = auVar143._14_2_;
    sVar54 = (short)uVar55;
    sStack_c0 = auVar100._0_2_;
    sStack_be = auVar100._2_2_;
    sStack_bc = auVar100._4_2_;
    sStack_ba = auVar100._6_2_;
    sStack_b8 = auVar100._8_2_;
    sStack_b6 = auVar100._10_2_;
    sStack_b4 = auVar100._12_2_;
    sStack_b2 = auVar100._14_2_;
    sVar57 = (short)((ulong)uVar55 >> 0x20);
    sStack_e0 = auVar73._0_2_;
    sStack_de = auVar73._2_2_;
    sStack_dc = auVar73._4_2_;
    sStack_da = auVar73._6_2_;
    sStack_d8 = auVar73._8_2_;
    sStack_d6 = auVar73._10_2_;
    sStack_d4 = auVar73._12_2_;
    sStack_d2 = auVar73._14_2_;
    sVar58 = (short)((ulong)uVar55 >> 0x30);
    sVar59 = (short)uVar60;
    sVar203 = auVar186._0_2_;
    sVar205 = auVar186._2_2_;
    sVar206 = auVar186._4_2_;
    sVar207 = auVar186._6_2_;
    sVar208 = auVar186._8_2_;
    sVar209 = auVar186._10_2_;
    sVar210 = auVar186._12_2_;
    sVar211 = auVar186._14_2_;
    sVar61 = (short)((ulong)uVar60 >> 0x10);
    sVar167 = auVar168._0_2_;
    sVar169 = auVar168._2_2_;
    sVar170 = auVar168._4_2_;
    sVar171 = auVar168._6_2_;
    sVar172 = auVar168._8_2_;
    sVar173 = auVar168._10_2_;
    sVar174 = auVar168._12_2_;
    sVar175 = auVar168._14_2_;
    sVar62 = (short)((ulong)uVar60 >> 0x20);
    sVar142 = auVar109._0_2_;
    sVar145 = auVar109._2_2_;
    sVar147 = auVar109._4_2_;
    sVar149 = auVar109._6_2_;
    sVar151 = auVar109._8_2_;
    sVar153 = auVar109._10_2_;
    sVar155 = auVar109._12_2_;
    sVar157 = auVar109._14_2_;
    sVar99 = auVar82._0_2_;
    sVar101 = auVar82._2_2_;
    sVar102 = auVar82._4_2_;
    sVar103 = auVar82._6_2_;
    sVar104 = auVar82._8_2_;
    sVar105 = auVar82._10_2_;
    sVar106 = auVar82._12_2_;
    sVar107 = auVar82._14_2_;
    sVar176 = auVar177._0_2_;
    sVar178 = auVar177._2_2_;
    sVar179 = auVar177._4_2_;
    sVar180 = auVar177._6_2_;
    sVar181 = auVar177._8_2_;
    sVar182 = auVar177._10_2_;
    sVar183 = auVar177._12_2_;
    sVar184 = auVar177._14_2_;
    sVar63 = (short)((ulong)uVar60 >> 0x30);
    sVar158 = auVar159._0_2_;
    sVar160 = auVar159._2_2_;
    sVar161 = auVar159._4_2_;
    sVar162 = auVar159._6_2_;
    sVar163 = auVar159._8_2_;
    sVar164 = auVar159._10_2_;
    sVar165 = auVar159._12_2_;
    sVar166 = auVar159._14_2_;
    sVar90 = auVar35._0_2_;
    sVar92 = auVar35._2_2_;
    sVar93 = auVar35._4_2_;
    sVar94 = auVar35._6_2_;
    sVar95 = auVar35._8_2_;
    sVar96 = auVar35._10_2_;
    sVar97 = auVar35._12_2_;
    sVar98 = auVar35._14_2_;
    param_1[0x14] =
         sVar190 * sVar64 + sStack_c8 * sVar65 + sVar10 * sVar66 + sVar199 * sVar44 +
         sVar77 * sVar46 + sVar217 * sVar47 + sVar86 * sVar67 + sVar235 * sVar48 + sVar244 * sVar49
         + sVar226 * sVar54 + sVar262 * sVar56 + sVar271 * sVar57 + sVar113 * sVar58 +
         sVar104 * sVar68 + sVar121 * sVar59 + sVar28 * sVar51 + sVar129 * sVar61 + sVar137 * sVar62
         + sVar181 * sVar69 + sVar280 * sVar52 + sVar253 * sVar63 + sVar163 * sVar70 +
         sVar150 * sVar53 + sVar95 * sVar71;
    param_1[0x15] =
         sVar191 * sVar64 + sStack_c6 * sVar65 + sVar11 * sVar66 + sVar200 * sVar44 +
         sVar78 * sVar46 + sVar218 * sVar47 + sVar87 * sVar67 + sVar236 * sVar48 + sVar245 * sVar49
         + sVar227 * sVar54 + sVar263 * sVar56 + sVar272 * sVar57 + sVar114 * sVar58 +
         sVar105 * sVar68 + sVar122 * sVar59 + sVar29 * sVar51 + sVar130 * sVar61 + sVar138 * sVar62
         + sVar182 * sVar69 + sVar281 * sVar52 + sVar254 * sVar63 + sVar164 * sVar70 +
         sVar152 * sVar53 + sVar96 * sVar71;
    param_1[0x16] =
         sVar192 * sVar64 + sStack_c4 * sVar65 + sVar12 * sVar66 + sVar201 * sVar44 +
         sVar79 * sVar46 + sVar219 * sVar47 + sVar88 * sVar67 + sVar237 * sVar48 + sVar246 * sVar49
         + sVar228 * sVar54 + sVar264 * sVar56 + sVar273 * sVar57 + sVar115 * sVar58 +
         sVar106 * sVar68 + sVar123 * sVar59 + sVar30 * sVar51 + sVar131 * sVar61 + sVar139 * sVar62
         + sVar183 * sVar69 + sVar282 * sVar52 + sVar255 * sVar63 + sVar165 * sVar70 +
         sVar154 * sVar53 + sVar97 * sVar71;
    param_1[0x17] =
         sVar193 * sVar64 + sStack_c2 * sVar65 + sVar13 * sVar66 + sVar202 * sVar44 +
         sVar80 * sVar46 + sVar220 * sVar47 + sVar89 * sVar67 + sVar238 * sVar48 + sVar247 * sVar49
         + sVar229 * sVar54 + sVar265 * sVar56 + sVar274 * sVar57 + sVar116 * sVar58 +
         sVar107 * sVar68 + sVar124 * sVar59 + sVar31 * sVar51 + sVar132 * sVar61 + sVar140 * sVar62
         + sVar184 * sVar69 + sVar283 * sVar52 + sVar256 * sVar63 + sVar166 * sVar70 +
         sVar156 * sVar53 + sVar98 * sVar71;
    param_1[0x10] =
         sVar185 * sVar64 + sStack_d0 * sVar65 + sVar6 * sVar66 + sVar194 * sVar44 + sVar72 * sVar46
         + sVar213 * sVar47 + sVar81 * sVar67 + sVar230 * sVar48 + sVar239 * sVar49 +
         sVar221 * sVar54 + sVar257 * sVar56 + sVar266 * sVar57 + sVar108 * sVar58 + sVar99 * sVar68
         + sVar117 * sVar59 + sVar24 * sVar51 + sVar125 * sVar61 + sVar133 * sVar62 +
         sVar176 * sVar69 + sVar275 * sVar52 + sVar248 * sVar63 + sVar158 * sVar70 +
         sVar141 * sVar53 + sVar90 * sVar71;
    param_1[0x11] =
         sVar187 * sVar64 + sStack_ce * sVar65 + sVar7 * sVar66 + sVar196 * sVar44 + sVar74 * sVar46
         + sVar214 * sVar47 + sVar83 * sVar67 + sVar232 * sVar48 + sVar241 * sVar49 +
         sVar223 * sVar54 + sVar259 * sVar56 + sVar268 * sVar57 + sVar110 * sVar58 +
         sVar101 * sVar68 + sVar118 * sVar59 + sVar25 * sVar51 + sVar126 * sVar61 + sVar134 * sVar62
         + sVar178 * sVar69 + sVar277 * sVar52 + sVar250 * sVar63 + sVar160 * sVar70 +
         sVar144 * sVar53 + sVar92 * sVar71;
    param_1[0x12] =
         sVar188 * sVar64 + sStack_cc * sVar65 + sVar8 * sVar66 + sVar197 * sVar44 + sVar75 * sVar46
         + sVar215 * sVar47 + sVar84 * sVar67 + sVar233 * sVar48 + sVar242 * sVar49 +
         sVar224 * sVar54 + sVar260 * sVar56 + sVar269 * sVar57 + sVar111 * sVar58 +
         sVar102 * sVar68 + sVar119 * sVar59 + sVar26 * sVar51 + sVar127 * sVar61 + sVar135 * sVar62
         + sVar179 * sVar69 + sVar278 * sVar52 + sVar251 * sVar63 + sVar161 * sVar70 +
         sVar146 * sVar53 + sVar93 * sVar71;
    param_1[0x13] =
         sVar189 * sVar64 + sStack_ca * sVar65 + sVar9 * sVar66 + sVar198 * sVar44 + sVar76 * sVar46
         + sVar216 * sVar47 + sVar85 * sVar67 + sVar234 * sVar48 + sVar243 * sVar49 +
         sVar225 * sVar54 + sVar261 * sVar56 + sVar270 * sVar57 + sVar112 * sVar58 +
         sVar103 * sVar68 + sVar120 * sVar59 + sVar27 * sVar51 + sVar128 * sVar61 + sVar136 * sVar62
         + sVar180 * sVar69 + sVar279 * sVar52 + sVar252 * sVar63 + sVar162 * sVar70 +
         sVar148 * sVar53 + sVar94 * sVar71;
    auVar35 = NEON_ext(auVar82,auVar186,10,1);
    sVar64 = auVar35._0_2_;
    sVar108 = auVar35._2_2_;
    sVar110 = auVar35._4_2_;
    sVar111 = auVar35._6_2_;
    sVar112 = auVar35._8_2_;
    sVar113 = auVar35._10_2_;
    sVar114 = auVar35._12_2_;
    sVar115 = auVar35._14_2_;
    sVar24 = sVar34 * sVar65 + sStack_c0 * sVar66 + sVar185 * sVar44 + sStack_d0 * sVar46 +
             sVar6 * sVar47 + sStack_e0 * sVar67 + sVar81 * sVar48 + sVar194 * sVar54 +
             sVar72 * sVar56 + sVar213 * sVar57 + sVar230 * sVar58 + sVar203 * sVar68 +
             sVar99 * sVar49 + sVar239 * sVar59 + sVar24 * sVar61 + sVar167 * sVar69 +
             sVar176 * sVar51 + sVar275 * sVar62 + sVar142 * sVar70 + sVar158 * sVar52 +
             sVar141 * sVar63 + sVar64 * sVar71 + sVar90 * sVar53;
    sVar25 = sVar37 * sVar65 + sStack_be * sVar66 + sVar187 * sVar44 + sStack_ce * sVar46 +
             sVar7 * sVar47 + sStack_de * sVar67 + sVar83 * sVar48 + sVar196 * sVar54 +
             sVar74 * sVar56 + sVar214 * sVar57 + sVar232 * sVar58 + sVar205 * sVar68 +
             sVar101 * sVar49 + sVar241 * sVar59 + sVar25 * sVar61 + sVar169 * sVar69 +
             sVar178 * sVar51 + sVar277 * sVar62 + sVar145 * sVar70 + sVar160 * sVar52 +
             sVar144 * sVar63 + sVar108 * sVar71 + sVar92 * sVar53;
    sVar26 = sVar38 * sVar65 + sStack_bc * sVar66 + sVar188 * sVar44 + sStack_cc * sVar46 +
             sVar8 * sVar47 + sStack_dc * sVar67 + sVar84 * sVar48 + sVar197 * sVar54 +
             sVar75 * sVar56 + sVar215 * sVar57 + sVar233 * sVar58 + sVar206 * sVar68 +
             sVar102 * sVar49 + sVar242 * sVar59 + sVar26 * sVar61 + sVar170 * sVar69 +
             sVar179 * sVar51 + sVar278 * sVar62 + sVar147 * sVar70 + sVar161 * sVar52 +
             sVar146 * sVar63 + sVar110 * sVar71 + sVar93 * sVar53;
    sVar27 = sVar39 * sVar65 + sStack_ba * sVar66 + sVar189 * sVar44 + sStack_ca * sVar46 +
             sVar9 * sVar47 + sStack_da * sVar67 + sVar85 * sVar48 + sVar198 * sVar54 +
             sVar76 * sVar56 + sVar216 * sVar57 + sVar234 * sVar58 + sVar207 * sVar68 +
             sVar103 * sVar49 + sVar243 * sVar59 + sVar27 * sVar61 + sVar171 * sVar69 +
             sVar180 * sVar51 + sVar279 * sVar62 + sVar149 * sVar70 + sVar162 * sVar52 +
             sVar148 * sVar63 + sVar111 * sVar71 + sVar94 * sVar53;
    sVar28 = sVar40 * sVar65 + sStack_b8 * sVar66 + sVar190 * sVar44 + sStack_c8 * sVar46 +
             sVar10 * sVar47 + sStack_d8 * sVar67 + sVar86 * sVar48 + sVar199 * sVar54 +
             sVar77 * sVar56 + sVar217 * sVar57 + sVar235 * sVar58 + sVar208 * sVar68 +
             sVar104 * sVar49 + sVar244 * sVar59 + sVar28 * sVar61 + sVar172 * sVar69 +
             sVar181 * sVar51 + sVar280 * sVar62 + sVar151 * sVar70 + sVar163 * sVar52 +
             sVar150 * sVar63 + sVar112 * sVar71 + sVar95 * sVar53;
    sVar29 = sVar41 * sVar65 + sStack_b6 * sVar66 + sVar191 * sVar44 + sStack_c6 * sVar46 +
             sVar11 * sVar47 + sStack_d6 * sVar67 + sVar87 * sVar48 + sVar200 * sVar54 +
             sVar78 * sVar56 + sVar218 * sVar57 + sVar236 * sVar58 + sVar209 * sVar68 +
             sVar105 * sVar49 + sVar245 * sVar59 + sVar29 * sVar61 + sVar173 * sVar69 +
             sVar182 * sVar51 + sVar281 * sVar62 + sVar153 * sVar70 + sVar164 * sVar52 +
             sVar152 * sVar63 + sVar113 * sVar71 + sVar96 * sVar53;
    sVar30 = sVar42 * sVar65 + sStack_b4 * sVar66 + sVar192 * sVar44 + sStack_c4 * sVar46 +
             sVar12 * sVar47 + sStack_d4 * sVar67 + sVar88 * sVar48 + sVar201 * sVar54 +
             sVar79 * sVar56 + sVar219 * sVar57 + sVar237 * sVar58 + sVar210 * sVar68 +
             sVar106 * sVar49 + sVar246 * sVar59 + sVar30 * sVar61 + sVar174 * sVar69 +
             sVar183 * sVar51 + sVar282 * sVar62 + sVar155 * sVar70 + sVar165 * sVar52 +
             sVar154 * sVar63 + sVar114 * sVar71 + sVar97 * sVar53;
    sVar31 = sVar43 * sVar65 + sStack_b2 * sVar66 + sVar193 * sVar44 + sStack_c2 * sVar46 +
             sVar13 * sVar47 + sStack_d2 * sVar67 + sVar89 * sVar48 + sVar202 * sVar54 +
             sVar80 * sVar56 + sVar220 * sVar57 + sVar238 * sVar58 + sVar211 * sVar68 +
             sVar107 * sVar49 + sVar247 * sVar59 + sVar31 * sVar61 + sVar175 * sVar69 +
             sVar184 * sVar51 + sVar283 * sVar62 + sVar157 * sVar70 + sVar166 * sVar52 +
             sVar156 * sVar63 + sVar115 * sVar71 + sVar98 * sVar53;
    uVar32 = CONCAT26(sVar39 * sVar46 + sStack_ba * sVar47 + sStack_da * sVar48 + sVar189 * sVar54 +
                      sStack_ca * sVar56 + sVar9 * sVar57 + sVar85 * sVar58 + sVar207 * sVar49 +
                      sVar103 * sVar59 + sVar171 * sVar51 + sVar180 * sVar61 + sVar149 * sVar52 +
                      sVar162 * sVar62 + sVar111 * sVar53 + sVar94 * sVar63,
                      CONCAT24(sVar38 * sVar46 + sStack_bc * sVar47 + sStack_dc * sVar48 +
                               sVar188 * sVar54 + sStack_cc * sVar56 + sVar8 * sVar57 +
                               sVar84 * sVar58 + sVar206 * sVar49 + sVar102 * sVar59 +
                               sVar170 * sVar51 + sVar179 * sVar61 + sVar147 * sVar52 +
                               sVar161 * sVar62 + sVar110 * sVar53 + sVar93 * sVar63,
                               CONCAT22(sVar37 * sVar46 + sStack_be * sVar47 + sStack_de * sVar48 +
                                        sVar187 * sVar54 + sStack_ce * sVar56 + sVar7 * sVar57 +
                                        sVar83 * sVar58 + sVar205 * sVar49 + sVar101 * sVar59 +
                                        sVar169 * sVar51 + sVar178 * sVar61 + sVar145 * sVar52 +
                                        sVar160 * sVar62 + sVar108 * sVar53 + sVar92 * sVar63,
                                        sVar34 * sVar46 + sStack_c0 * sVar47 + sStack_e0 * sVar48 +
                                        sVar185 * sVar54 + sStack_d0 * sVar56 + sVar6 * sVar57 +
                                        sVar81 * sVar58 + sVar203 * sVar49 + sVar99 * sVar59 +
                                        sVar167 * sVar51 + sVar176 * sVar61 + sVar142 * sVar52 +
                                        sVar158 * sVar62 + sVar64 * sVar53 + sVar90 * sVar63)));
    uVar33 = CONCAT26(sVar43 * sVar46 + sStack_b2 * sVar47 + sStack_d2 * sVar48 + sVar193 * sVar54 +
                      sStack_c2 * sVar56 + sVar13 * sVar57 + sVar89 * sVar58 + sVar211 * sVar49 +
                      sVar107 * sVar59 + sVar175 * sVar51 + sVar184 * sVar61 + sVar157 * sVar52 +
                      sVar166 * sVar62 + sVar115 * sVar53 + sVar98 * sVar63,
                      CONCAT24(sVar42 * sVar46 + sStack_b4 * sVar47 + sStack_d4 * sVar48 +
                               sVar192 * sVar54 + sStack_c4 * sVar56 + sVar12 * sVar57 +
                               sVar88 * sVar58 + sVar210 * sVar49 + sVar106 * sVar59 +
                               sVar174 * sVar51 + sVar183 * sVar61 + sVar155 * sVar52 +
                               sVar165 * sVar62 + sVar114 * sVar53 + sVar97 * sVar63,
                               CONCAT22(sVar41 * sVar46 + sStack_b6 * sVar47 + sStack_d6 * sVar48 +
                                        sVar191 * sVar54 + sStack_c6 * sVar56 + sVar11 * sVar57 +
                                        sVar87 * sVar58 + sVar209 * sVar49 + sVar105 * sVar59 +
                                        sVar173 * sVar51 + sVar182 * sVar61 + sVar153 * sVar52 +
                                        sVar164 * sVar62 + sVar113 * sVar53 + sVar96 * sVar63,
                                        sVar40 * sVar46 + sStack_b8 * sVar47 + sStack_d8 * sVar48 +
                                        sVar190 * sVar54 + sStack_c8 * sVar56 + sVar10 * sVar57 +
                                        sVar86 * sVar58 + sVar208 * sVar49 + sVar104 * sVar59 +
                                        sVar172 * sVar51 + sVar181 * sVar61 + sVar151 * sVar52 +
                                        sVar163 * sVar62 + sVar112 * sVar53 + sVar95 * sVar63)));
    uVar55 = CONCAT26(sVar39 * sVar56 + sStack_ba * sVar57 + sStack_da * sVar58 + sVar207 * sVar59 +
                      sVar171 * sVar61 + sVar149 * sVar62 + sVar111 * sVar63,
                      CONCAT24(sVar38 * sVar56 + sStack_bc * sVar57 + sStack_dc * sVar58 +
                               sVar206 * sVar59 + sVar170 * sVar61 + sVar147 * sVar62 +
                               sVar110 * sVar63,
                               CONCAT22(sVar37 * sVar56 + sStack_be * sVar57 + sStack_de * sVar58 +
                                        sVar205 * sVar59 + sVar169 * sVar61 + sVar145 * sVar62 +
                                        sVar108 * sVar63,
                                        sVar34 * sVar56 + sStack_c0 * sVar57 + sStack_e0 * sVar58 +
                                        sVar203 * sVar59 + sVar167 * sVar61 + sVar142 * sVar62 +
                                        sVar64 * sVar63)));
    uVar60 = CONCAT26(sVar43 * sVar56 + sStack_b2 * sVar57 + sStack_d2 * sVar58 + sVar211 * sVar59 +
                      sVar175 * sVar61 + sVar157 * sVar62 + sVar115 * sVar63,
                      CONCAT24(sVar42 * sVar56 + sStack_b4 * sVar57 + sStack_d4 * sVar58 +
                               sVar210 * sVar59 + sVar174 * sVar61 + sVar155 * sVar62 +
                               sVar114 * sVar63,
                               CONCAT22(sVar41 * sVar56 + sStack_b6 * sVar57 + sStack_d6 * sVar58 +
                                        sVar209 * sVar59 + sVar173 * sVar61 + sVar153 * sVar62 +
                                        sVar113 * sVar63,
                                        sVar40 * sVar56 + sStack_b8 * sVar57 + sStack_d8 * sVar58 +
                                        sVar208 * sVar59 + sVar172 * sVar61 + sVar151 * sVar62 +
                                        sVar112 * sVar63)));
    lVar14 = 0x50;
    lVar15 = 0x40;
    lVar19 = 0x30;
  }
  else {
    if (param_5 != 2) {
      uVar21 = param_5 >> 1;
      uVar22 = param_5 - (param_5 >> 1);
      pauVar2 = param_3 + uVar21;
      puVar1 = param_4 + uVar21 * 2;
      pauVar16 = param_3;
      puVar20 = param_4;
      psVar18 = param_1;
      uVar17 = uVar21;
      if (1 < param_5) {
        do {
          pauVar3 = pauVar16 + uVar21;
          sVar6 = *(short *)*pauVar3;
          sVar7 = *(short *)(*pauVar3 + 2);
          sVar8 = *(short *)(*pauVar3 + 4);
          sVar9 = *(short *)(*pauVar3 + 6);
          sVar10 = *(short *)(*pauVar3 + 10);
          sVar11 = *(short *)(*pauVar3 + 0xc);
          sVar12 = *(short *)(*pauVar3 + 0xe);
          uVar33 = *(undefined8 *)(*pauVar16 + 8);
          uVar32 = *(undefined8 *)*pauVar16;
          psVar18[4] = (short)uVar33 + *(short *)(*pauVar3 + 8);
          psVar18[5] = (short)((ulong)uVar33 >> 0x10) + sVar10;
          psVar18[6] = (short)((ulong)uVar33 >> 0x20) + sVar11;
          psVar18[7] = (short)((ulong)uVar33 >> 0x30) + sVar12;
          *psVar18 = (short)uVar32 + sVar6;
          psVar18[1] = (short)((ulong)uVar32 >> 0x10) + sVar7;
          psVar18[2] = (short)((ulong)uVar32 >> 0x20) + sVar8;
          psVar18[3] = (short)((ulong)uVar32 >> 0x30) + sVar9;
          psVar5 = (short *)(puVar20 + uVar21 * 2);
          sVar6 = *psVar5;
          sVar7 = psVar5[1];
          sVar8 = psVar5[2];
          sVar9 = psVar5[3];
          sVar10 = psVar5[5];
          sVar11 = psVar5[6];
          sVar12 = psVar5[7];
          uVar33 = puVar20[1];
          uVar32 = *puVar20;
          psVar4 = psVar18 + uVar21 * -8 + param_5 * 8;
          psVar4[4] = (short)uVar33 + psVar5[4];
          psVar4[5] = (short)((ulong)uVar33 >> 0x10) + sVar10;
          psVar4[6] = (short)((ulong)uVar33 >> 0x20) + sVar11;
          psVar4[7] = (short)((ulong)uVar33 >> 0x30) + sVar12;
          *psVar4 = (short)uVar32 + sVar6;
          psVar4[1] = (short)((ulong)uVar32 >> 0x10) + sVar7;
          psVar4[2] = (short)((ulong)uVar32 >> 0x20) + sVar8;
          psVar4[3] = (short)((ulong)uVar32 >> 0x30) + sVar9;
          uVar17 = uVar17 - 1;
          pauVar16 = pauVar16 + 1;
          puVar20 = puVar20 + 2;
          psVar18 = psVar18 + 8;
        } while (uVar17 != 0);
      }
      if (uVar22 != uVar21) {
        uVar32 = *(undefined8 *)pauVar2[uVar21];
        *(undefined8 *)(param_1 + uVar21 * 8 + 4) = *(undefined8 *)(pauVar2[uVar21] + 8);
        *(undefined8 *)(param_1 + uVar21 * 8) = uVar32;
        uVar32 = puVar1[uVar21 * 2];
        *(undefined8 *)(param_1 + param_5 * 8 + 4) = (puVar1 + uVar21 * 2)[1];
        *(undefined8 *)(param_1 + param_5 * 8) = uVar32;
      }
      psVar18 = param_2 + uVar22 * 0x10;
      FUN_10ae44d64(param_2,psVar18,param_1,param_1 + uVar22 * 8,uVar22);
      uVar23 = param_5 & 0xfffffffffffffffe;
      FUN_10ae44d64(param_1 + uVar23 * 8,psVar18,pauVar2,puVar1,uVar22);
      FUN_10ae44d64(param_1,psVar18,param_3,param_4,uVar21);
      psVar18 = param_1;
      psVar5 = param_2;
      for (uVar17 = uVar23; uVar17 != 0; uVar17 = uVar17 - 1) {
        uVar33 = *(undefined8 *)(psVar18 + 4);
        uVar32 = *(undefined8 *)psVar18;
        psVar4 = psVar18 + uVar21 * 0x10;
        sVar6 = *psVar4;
        sVar7 = psVar4[1];
        sVar8 = psVar4[2];
        sVar9 = psVar4[3];
        sVar10 = psVar4[5];
        sVar11 = psVar4[6];
        sVar12 = psVar4[7];
        psVar5[4] = psVar5[4] - ((short)uVar33 + psVar4[4]);
        psVar5[5] = psVar5[5] - ((short)((ulong)uVar33 >> 0x10) + sVar10);
        psVar5[6] = psVar5[6] - ((short)((ulong)uVar33 >> 0x20) + sVar11);
        psVar5[7] = psVar5[7] - ((short)((ulong)uVar33 >> 0x30) + sVar12);
        *psVar5 = *psVar5 - ((short)uVar32 + sVar6);
        psVar5[1] = psVar5[1] - ((short)((ulong)uVar32 >> 0x10) + sVar7);
        psVar5[2] = psVar5[2] - ((short)((ulong)uVar32 >> 0x20) + sVar8);
        psVar5[3] = psVar5[3] - ((short)((ulong)uVar32 >> 0x30) + sVar9);
        psVar18 = psVar18 + 8;
        psVar5 = psVar5 + 8;
      }
      lVar14 = uVar22 * 2;
      if (uVar22 != uVar21) {
        psVar5 = param_2 + uVar23 * 8;
        sVar6 = *psVar5;
        sVar7 = psVar5[1];
        sVar8 = psVar5[2];
        sVar9 = psVar5[3];
        sVar10 = psVar5[5];
        sVar11 = psVar5[6];
        sVar12 = psVar5[7];
        psVar18 = param_1 + uVar21 * 0x20;
        uVar33 = *(undefined8 *)(psVar18 + 4);
        uVar32 = *(undefined8 *)psVar18;
        sVar13 = psVar18[8];
        sVar24 = psVar18[9];
        sVar25 = psVar18[10];
        sVar26 = psVar18[0xb];
        sVar27 = psVar18[0xc];
        sVar28 = psVar18[0xd];
        sVar29 = psVar18[0xe];
        sVar30 = psVar18[0xf];
        psVar18 = param_2 + uVar23 * 8;
        psVar18[4] = psVar5[4] - (short)uVar33;
        psVar18[5] = sVar10 - (short)((ulong)uVar33 >> 0x10);
        psVar18[6] = sVar11 - (short)((ulong)uVar33 >> 0x20);
        psVar18[7] = sVar12 - (short)((ulong)uVar33 >> 0x30);
        *psVar18 = sVar6 - (short)uVar32;
        psVar18[1] = sVar7 - (short)((ulong)uVar32 >> 0x10);
        psVar18[2] = sVar8 - (short)((ulong)uVar32 >> 0x20);
        psVar18[3] = sVar9 - (short)((ulong)uVar32 >> 0x30);
        uVar17 = param_5 << 4 | 0x10;
        psVar18 = (short *)((long)param_2 + uVar17);
        sVar6 = *psVar18;
        sVar7 = psVar18[1];
        sVar8 = psVar18[2];
        sVar9 = psVar18[3];
        psVar5 = (short *)((long)param_2 + uVar17);
        psVar5[4] = psVar18[4] - sVar27;
        psVar5[5] = psVar18[5] - sVar28;
        psVar5[6] = psVar18[6] - sVar29;
        psVar5[7] = psVar18[7] - sVar30;
        *psVar5 = sVar6 - sVar13;
        psVar5[1] = sVar7 - sVar24;
        psVar5[2] = sVar8 - sVar25;
        psVar5[3] = sVar9 - sVar26;
      }
      if (lVar14 == 0) {
        return;
      }
      psVar18 = param_1 + uVar21 * 8;
      do {
        uVar33 = *(undefined8 *)(param_2 + 4);
        uVar32 = *(undefined8 *)param_2;
        psVar18[4] = (short)uVar33 + psVar18[4];
        psVar18[5] = (short)((ulong)uVar33 >> 0x10) + psVar18[5];
        psVar18[6] = (short)((ulong)uVar33 >> 0x20) + psVar18[6];
        psVar18[7] = (short)((ulong)uVar33 >> 0x30) + psVar18[7];
        *psVar18 = (short)uVar32 + *psVar18;
        psVar18[1] = (short)((ulong)uVar32 >> 0x10) + psVar18[1];
        psVar18[2] = (short)((ulong)uVar32 >> 0x20) + psVar18[2];
        psVar18[3] = (short)((ulong)uVar32 >> 0x30) + psVar18[3];
        lVar14 = lVar14 + -1;
        psVar18 = psVar18 + 8;
        param_2 = param_2 + 8;
      } while (lVar14 != 0);
      return;
    }
    auVar36 = *param_3;
    pauVar2 = param_3 + 1;
    uVar60 = *(undefined8 *)(param_3[1] + 8);
    sVar48 = (short)((ulong)uVar60 >> 0x10);
    sVar49 = (short)((ulong)uVar60 >> 0x20);
    sVar51 = (short)((ulong)uVar60 >> 0x30);
    uVar55 = *(undefined8 *)*pauVar2;
    sVar44 = (short)((ulong)uVar55 >> 0x10);
    sVar46 = (short)((ulong)uVar55 >> 0x20);
    sVar47 = (short)((ulong)uVar55 >> 0x30);
    uVar33 = param_4[1];
    uVar32 = *param_4;
    uVar50 = param_4[3];
    uVar45 = param_4[2];
    sVar6 = (short)uVar32;
    auVar222 = ZEXT216(0);
    auVar35._10_2_ = sVar48;
    auVar35._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar35._12_2_ = sVar49;
    auVar35._14_2_ = sVar51;
    auVar35 = NEON_ext(auVar35,auVar222,0xe,1);
    auVar73._10_2_ = sVar48;
    auVar73._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar73._12_2_ = sVar49;
    auVar73._14_2_ = sVar51;
    auVar73 = NEON_ext(auVar36,auVar73,0xe,1);
    auVar231 = NEON_ext(auVar222,auVar36,0xe,1);
    sVar7 = (short)((ulong)uVar32 >> 0x10);
    sVar37 = (short)((ulong)uVar45 >> 0x10);
    auVar82._10_2_ = sVar48;
    auVar82._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar82._12_2_ = sVar49;
    auVar82._14_2_ = sVar51;
    auVar177 = NEON_ext(auVar82,auVar222,0xc,1);
    auVar91._10_2_ = sVar48;
    auVar91._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar91._12_2_ = sVar49;
    auVar91._14_2_ = sVar51;
    auVar143 = NEON_ext(auVar36,auVar91,0xc,1);
    auVar240 = NEON_ext(auVar222,auVar231,0xe,1);
    sVar8 = (short)((ulong)uVar32 >> 0x20);
    sVar38 = (short)((ulong)uVar45 >> 0x20);
    auVar100._10_2_ = sVar48;
    auVar100._0_10_ = *(unkbyte10 *)*pauVar2;
    auVar100._12_2_ = sVar49;
    auVar100._14_2_ = sVar51;
    auVar168 = NEON_ext(auVar100,auVar222,10,1);
    auVar159 = NEON_ext(auVar240,auVar143,0xe,1);
    auVar249 = NEON_ext(auVar222,auVar240,0xe,1);
    sVar9 = (short)((ulong)uVar32 >> 0x30);
    sVar39 = (short)((ulong)uVar45 >> 0x30);
    auVar195 = NEON_ext(auVar159,auVar168,0xe,1);
    auVar186 = NEON_ext(auVar240,auVar143,0xc,1);
    auVar258 = NEON_ext(auVar222,auVar249,0xe,1);
    sVar10 = (short)uVar33;
    sVar40 = (short)uVar50;
    auVar212 = NEON_ext(auVar186,auVar195,0xe,1);
    auVar204 = NEON_ext(auVar258,auVar186,0xe,1);
    auVar267 = NEON_ext(auVar222,auVar258,0xe,1);
    sVar11 = (short)((ulong)uVar33 >> 0x10);
    sVar41 = (short)((ulong)uVar50 >> 0x10);
    auVar276 = NEON_ext(auVar186,auVar195,0xc,1);
    auVar82 = NEON_ext(auVar258,auVar186,0xc,1);
    auVar91 = NEON_ext(auVar222,auVar267,0xe,1);
    sVar12 = (short)((ulong)uVar33 >> 0x20);
    sVar42 = (short)((ulong)uVar50 >> 0x20);
    auVar100 = NEON_ext(auVar186,auVar195,10,1);
    auVar109 = NEON_ext(auVar91,auVar82,0xe,1);
    auVar222 = NEON_ext(auVar222,auVar91,0xe,1);
    sVar13 = (short)((ulong)uVar33 >> 0x30);
    sVar34 = (short)uVar45;
    sVar43 = (short)((ulong)uVar50 >> 0x30);
    sVar24 = (short)uVar55 * sVar6 + auVar73._0_2_ * sVar7 + auVar143._0_2_ * sVar8 +
             auVar36._0_2_ * sVar34 + auVar231._0_2_ * sVar37 + auVar240._0_2_ * sVar38 +
             auVar159._0_2_ * sVar9 + auVar249._0_2_ * sVar39 + auVar258._0_2_ * sVar40 +
             auVar186._0_2_ * sVar10 + auVar267._0_2_ * sVar41 + auVar204._0_2_ * sVar11 +
             auVar91._0_2_ * sVar42 + auVar82._0_2_ * sVar12 + auVar222._0_2_ * sVar43 +
             auVar109._0_2_ * sVar13;
    sVar25 = sVar44 * sVar6 + auVar73._2_2_ * sVar7 + auVar143._2_2_ * sVar8 +
             auVar36._2_2_ * sVar34 + auVar231._2_2_ * sVar37 + auVar240._2_2_ * sVar38 +
             auVar159._2_2_ * sVar9 + auVar249._2_2_ * sVar39 + auVar258._2_2_ * sVar40 +
             auVar186._2_2_ * sVar10 + auVar267._2_2_ * sVar41 + auVar204._2_2_ * sVar11 +
             auVar91._2_2_ * sVar42 + auVar82._2_2_ * sVar12 + auVar222._2_2_ * sVar43 +
             auVar109._2_2_ * sVar13;
    sVar26 = sVar46 * sVar6 + auVar73._4_2_ * sVar7 + auVar143._4_2_ * sVar8 +
             auVar36._4_2_ * sVar34 + auVar231._4_2_ * sVar37 + auVar240._4_2_ * sVar38 +
             auVar159._4_2_ * sVar9 + auVar249._4_2_ * sVar39 + auVar258._4_2_ * sVar40 +
             auVar186._4_2_ * sVar10 + auVar267._4_2_ * sVar41 + auVar204._4_2_ * sVar11 +
             auVar91._4_2_ * sVar42 + auVar82._4_2_ * sVar12 + auVar222._4_2_ * sVar43 +
             auVar109._4_2_ * sVar13;
    sVar27 = sVar47 * sVar6 + auVar73._6_2_ * sVar7 + auVar143._6_2_ * sVar8 +
             auVar36._6_2_ * sVar34 + auVar231._6_2_ * sVar37 + auVar240._6_2_ * sVar38 +
             auVar159._6_2_ * sVar9 + auVar249._6_2_ * sVar39 + auVar258._6_2_ * sVar40 +
             auVar186._6_2_ * sVar10 + auVar267._6_2_ * sVar41 + auVar204._6_2_ * sVar11 +
             auVar91._6_2_ * sVar42 + auVar82._6_2_ * sVar12 + auVar222._6_2_ * sVar43 +
             auVar109._6_2_ * sVar13;
    sVar28 = (short)uVar60 * sVar6 + auVar73._8_2_ * sVar7 + auVar143._8_2_ * sVar8 +
             auVar36._8_2_ * sVar34 + auVar231._8_2_ * sVar37 + auVar240._8_2_ * sVar38 +
             auVar159._8_2_ * sVar9 + auVar249._8_2_ * sVar39 + auVar258._8_2_ * sVar40 +
             auVar186._8_2_ * sVar10 + auVar267._8_2_ * sVar41 + auVar204._8_2_ * sVar11 +
             auVar91._8_2_ * sVar42 + auVar82._8_2_ * sVar12 + auVar222._8_2_ * sVar43 +
             auVar109._8_2_ * sVar13;
    sVar29 = sVar48 * sVar6 + auVar73._10_2_ * sVar7 + auVar143._10_2_ * sVar8 +
             auVar36._10_2_ * sVar34 + auVar231._10_2_ * sVar37 + auVar240._10_2_ * sVar38 +
             auVar159._10_2_ * sVar9 + auVar249._10_2_ * sVar39 + auVar258._10_2_ * sVar40 +
             auVar186._10_2_ * sVar10 + auVar267._10_2_ * sVar41 + auVar204._10_2_ * sVar11 +
             auVar91._10_2_ * sVar42 + auVar82._10_2_ * sVar12 + auVar222._10_2_ * sVar43 +
             auVar109._10_2_ * sVar13;
    sVar30 = sVar49 * sVar6 + auVar73._12_2_ * sVar7 + auVar143._12_2_ * sVar8 +
             auVar36._12_2_ * sVar34 + auVar231._12_2_ * sVar37 + auVar240._12_2_ * sVar38 +
             auVar159._12_2_ * sVar9 + auVar249._12_2_ * sVar39 + auVar258._12_2_ * sVar40 +
             auVar186._12_2_ * sVar10 + auVar267._12_2_ * sVar41 + auVar204._12_2_ * sVar11 +
             auVar91._12_2_ * sVar42 + auVar82._12_2_ * sVar12 + auVar222._12_2_ * sVar43 +
             auVar109._12_2_ * sVar13;
    sVar31 = sVar51 * sVar6 + auVar73._14_2_ * sVar7 + auVar143._14_2_ * sVar8 +
             auVar36._14_2_ * sVar34 + auVar231._14_2_ * sVar37 + auVar240._14_2_ * sVar38 +
             auVar159._14_2_ * sVar9 + auVar249._14_2_ * sVar39 + auVar258._14_2_ * sVar40 +
             auVar186._14_2_ * sVar10 + auVar267._14_2_ * sVar41 + auVar204._14_2_ * sVar11 +
             auVar91._14_2_ * sVar42 + auVar82._14_2_ * sVar12 + auVar222._14_2_ * sVar43 +
             auVar109._14_2_ * sVar13;
    uVar32 = CONCAT26(auVar35._6_2_ * sVar7 + auVar177._6_2_ * sVar8 + sVar47 * sVar34 +
                      auVar73._6_2_ * sVar37 + auVar143._6_2_ * sVar38 + auVar168._6_2_ * sVar9 +
                      auVar159._6_2_ * sVar39 + auVar195._6_2_ * sVar10 + auVar186._6_2_ * sVar40 +
                      auVar212._6_2_ * sVar11 + auVar204._6_2_ * sVar41 + auVar276._6_2_ * sVar12 +
                      auVar82._6_2_ * sVar42 + auVar100._6_2_ * sVar13 + auVar109._6_2_ * sVar43,
                      CONCAT24(auVar35._4_2_ * sVar7 + auVar177._4_2_ * sVar8 + sVar46 * sVar34 +
                               auVar73._4_2_ * sVar37 + auVar143._4_2_ * sVar38 +
                               auVar168._4_2_ * sVar9 + auVar159._4_2_ * sVar39 +
                               auVar195._4_2_ * sVar10 + auVar186._4_2_ * sVar40 +
                               auVar212._4_2_ * sVar11 + auVar204._4_2_ * sVar41 +
                               auVar276._4_2_ * sVar12 + auVar82._4_2_ * sVar42 +
                               auVar100._4_2_ * sVar13 + auVar109._4_2_ * sVar43,
                               CONCAT22(auVar35._2_2_ * sVar7 + auVar177._2_2_ * sVar8 +
                                        sVar44 * sVar34 + auVar73._2_2_ * sVar37 +
                                        auVar143._2_2_ * sVar38 + auVar168._2_2_ * sVar9 +
                                        auVar159._2_2_ * sVar39 + auVar195._2_2_ * sVar10 +
                                        auVar186._2_2_ * sVar40 + auVar212._2_2_ * sVar11 +
                                        auVar204._2_2_ * sVar41 + auVar276._2_2_ * sVar12 +
                                        auVar82._2_2_ * sVar42 + auVar100._2_2_ * sVar13 +
                                        auVar109._2_2_ * sVar43,
                                        auVar35._0_2_ * sVar7 + auVar177._0_2_ * sVar8 +
                                        (short)uVar55 * sVar34 + auVar73._0_2_ * sVar37 +
                                        auVar143._0_2_ * sVar38 + auVar168._0_2_ * sVar9 +
                                        auVar159._0_2_ * sVar39 + auVar195._0_2_ * sVar10 +
                                        auVar186._0_2_ * sVar40 + auVar212._0_2_ * sVar11 +
                                        auVar204._0_2_ * sVar41 + auVar276._0_2_ * sVar12 +
                                        auVar82._0_2_ * sVar42 + auVar100._0_2_ * sVar13 +
                                        auVar109._0_2_ * sVar43)));
    uVar33 = CONCAT26(auVar35._14_2_ * sVar7 + auVar177._14_2_ * sVar8 + sVar51 * sVar34 +
                      auVar73._14_2_ * sVar37 + auVar143._14_2_ * sVar38 + auVar168._14_2_ * sVar9 +
                      auVar159._14_2_ * sVar39 + auVar195._14_2_ * sVar10 + auVar186._14_2_ * sVar40
                      + auVar212._14_2_ * sVar11 + auVar204._14_2_ * sVar41 +
                      auVar276._14_2_ * sVar12 + auVar82._14_2_ * sVar42 + auVar100._14_2_ * sVar13
                      + auVar109._14_2_ * sVar43,
                      CONCAT24(auVar35._12_2_ * sVar7 + auVar177._12_2_ * sVar8 + sVar49 * sVar34 +
                               auVar73._12_2_ * sVar37 + auVar143._12_2_ * sVar38 +
                               auVar168._12_2_ * sVar9 + auVar159._12_2_ * sVar39 +
                               auVar195._12_2_ * sVar10 + auVar186._12_2_ * sVar40 +
                               auVar212._12_2_ * sVar11 + auVar204._12_2_ * sVar41 +
                               auVar276._12_2_ * sVar12 + auVar82._12_2_ * sVar42 +
                               auVar100._12_2_ * sVar13 + auVar109._12_2_ * sVar43,
                               CONCAT22(auVar35._10_2_ * sVar7 + auVar177._10_2_ * sVar8 +
                                        sVar48 * sVar34 + auVar73._10_2_ * sVar37 +
                                        auVar143._10_2_ * sVar38 + auVar168._10_2_ * sVar9 +
                                        auVar159._10_2_ * sVar39 + auVar195._10_2_ * sVar10 +
                                        auVar186._10_2_ * sVar40 + auVar212._10_2_ * sVar11 +
                                        auVar204._10_2_ * sVar41 + auVar276._10_2_ * sVar12 +
                                        auVar82._10_2_ * sVar42 + auVar100._10_2_ * sVar13 +
                                        auVar109._10_2_ * sVar43,
                                        auVar35._8_2_ * sVar7 + auVar177._8_2_ * sVar8 +
                                        (short)uVar60 * sVar34 + auVar73._8_2_ * sVar37 +
                                        auVar143._8_2_ * sVar38 + auVar168._8_2_ * sVar9 +
                                        auVar159._8_2_ * sVar39 + auVar195._8_2_ * sVar10 +
                                        auVar186._8_2_ * sVar40 + auVar212._8_2_ * sVar11 +
                                        auVar204._8_2_ * sVar41 + auVar276._8_2_ * sVar12 +
                                        auVar82._8_2_ * sVar42 + auVar100._8_2_ * sVar13 +
                                        auVar109._8_2_ * sVar43)));
    uVar55 = CONCAT26(auVar35._6_2_ * sVar37 + auVar177._6_2_ * sVar38 + auVar168._6_2_ * sVar39 +
                      auVar195._6_2_ * sVar40 + auVar212._6_2_ * sVar41 + auVar276._6_2_ * sVar42 +
                      auVar100._6_2_ * sVar43,
                      CONCAT24(auVar35._4_2_ * sVar37 + auVar177._4_2_ * sVar38 +
                               auVar168._4_2_ * sVar39 + auVar195._4_2_ * sVar40 +
                               auVar212._4_2_ * sVar41 + auVar276._4_2_ * sVar42 +
                               auVar100._4_2_ * sVar43,
                               CONCAT22(auVar35._2_2_ * sVar37 + auVar177._2_2_ * sVar38 +
                                        auVar168._2_2_ * sVar39 + auVar195._2_2_ * sVar40 +
                                        auVar212._2_2_ * sVar41 + auVar276._2_2_ * sVar42 +
                                        auVar100._2_2_ * sVar43,
                                        auVar35._0_2_ * sVar37 + auVar177._0_2_ * sVar38 +
                                        auVar168._0_2_ * sVar39 + auVar195._0_2_ * sVar40 +
                                        auVar212._0_2_ * sVar41 + auVar276._0_2_ * sVar42 +
                                        auVar100._0_2_ * sVar43)));
    uVar60 = CONCAT26(auVar35._14_2_ * sVar37 + auVar177._14_2_ * sVar38 + auVar168._14_2_ * sVar39
                      + auVar195._14_2_ * sVar40 + auVar212._14_2_ * sVar41 +
                      auVar276._14_2_ * sVar42 + auVar100._14_2_ * sVar43,
                      CONCAT24(auVar35._12_2_ * sVar37 + auVar177._12_2_ * sVar38 +
                               auVar168._12_2_ * sVar39 + auVar195._12_2_ * sVar40 +
                               auVar212._12_2_ * sVar41 + auVar276._12_2_ * sVar42 +
                               auVar100._12_2_ * sVar43,
                               CONCAT22(auVar35._10_2_ * sVar37 + auVar177._10_2_ * sVar38 +
                                        auVar168._10_2_ * sVar39 + auVar195._10_2_ * sVar40 +
                                        auVar212._10_2_ * sVar41 + auVar276._10_2_ * sVar42 +
                                        auVar100._10_2_ * sVar43,
                                        auVar35._8_2_ * sVar37 + auVar177._8_2_ * sVar38 +
                                        auVar168._8_2_ * sVar39 + auVar195._8_2_ * sVar40 +
                                        auVar212._8_2_ * sVar41 + auVar276._8_2_ * sVar42 +
                                        auVar100._8_2_ * sVar43)));
    *(ulong *)(param_1 + 4) =
         CONCAT26(auVar36._14_2_ * sVar6 + auVar231._14_2_ * sVar7 + auVar240._14_2_ * sVar8 +
                  auVar249._14_2_ * sVar9 + auVar258._14_2_ * sVar10 + auVar267._14_2_ * sVar11 +
                  auVar91._14_2_ * sVar12 + auVar222._14_2_ * sVar13,
                  CONCAT24(auVar36._12_2_ * sVar6 + auVar231._12_2_ * sVar7 +
                           auVar240._12_2_ * sVar8 + auVar249._12_2_ * sVar9 +
                           auVar258._12_2_ * sVar10 + auVar267._12_2_ * sVar11 +
                           auVar91._12_2_ * sVar12 + auVar222._12_2_ * sVar13,
                           CONCAT22(auVar36._10_2_ * sVar6 + auVar231._10_2_ * sVar7 +
                                    auVar240._10_2_ * sVar8 + auVar249._10_2_ * sVar9 +
                                    auVar258._10_2_ * sVar10 + auVar267._10_2_ * sVar11 +
                                    auVar91._10_2_ * sVar12 + auVar222._10_2_ * sVar13,
                                    auVar36._8_2_ * sVar6 + auVar231._8_2_ * sVar7 +
                                    auVar240._8_2_ * sVar8 + auVar249._8_2_ * sVar9 +
                                    auVar258._8_2_ * sVar10 + auVar267._8_2_ * sVar11 +
                                    auVar91._8_2_ * sVar12 + auVar222._8_2_ * sVar13)));
    *(ulong *)param_1 =
         CONCAT26(auVar36._6_2_ * sVar6 + auVar231._6_2_ * sVar7 + auVar240._6_2_ * sVar8 +
                  auVar249._6_2_ * sVar9 + auVar258._6_2_ * sVar10 + auVar267._6_2_ * sVar11 +
                  auVar91._6_2_ * sVar12 + auVar222._6_2_ * sVar13,
                  CONCAT24(auVar36._4_2_ * sVar6 + auVar231._4_2_ * sVar7 + auVar240._4_2_ * sVar8 +
                           auVar249._4_2_ * sVar9 + auVar258._4_2_ * sVar10 +
                           auVar267._4_2_ * sVar11 + auVar91._4_2_ * sVar12 +
                           auVar222._4_2_ * sVar13,
                           CONCAT22(auVar36._2_2_ * sVar6 + auVar231._2_2_ * sVar7 +
                                    auVar240._2_2_ * sVar8 + auVar249._2_2_ * sVar9 +
                                    auVar258._2_2_ * sVar10 + auVar267._2_2_ * sVar11 +
                                    auVar91._2_2_ * sVar12 + auVar222._2_2_ * sVar13,
                                    auVar36._0_2_ * sVar6 + auVar231._0_2_ * sVar7 +
                                    auVar240._0_2_ * sVar8 + auVar249._0_2_ * sVar9 +
                                    auVar258._0_2_ * sVar10 + auVar267._0_2_ * sVar11 +
                                    auVar91._0_2_ * sVar12 + auVar222._0_2_ * sVar13)));
    lVar14 = 0x30;
    lVar15 = 0x20;
    lVar19 = 0x10;
  }
  psVar18 = (short *)((long)param_1 + lVar19);
  psVar18[4] = sVar28;
  psVar18[5] = sVar29;
  psVar18[6] = sVar30;
  psVar18[7] = sVar31;
  *psVar18 = sVar24;
  psVar18[1] = sVar25;
  psVar18[2] = sVar26;
  psVar18[3] = sVar27;
  ((undefined8 *)((long)param_1 + lVar15))[1] = uVar33;
  *(undefined8 *)((long)param_1 + lVar15) = uVar32;
  ((undefined8 *)((long)param_1 + lVar14))[1] = uVar60;
  *(undefined8 *)((long)param_1 + lVar14) = uVar55;
  return;
}



/* Entry: 10ae452b0; end: 10ae4531f;  */

/* WARNING: Possible PIC construction at 0x00010ae452e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae452e8) */
/* WARNING: Removing unreachable block (ram,0x00010ae452f0) */

void FUN_10ae452b0(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar4;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = &stack0xfffffffffffffff0;
  if (*(ulong *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 8) + uVar4 * 8);
      if (lVar2 != 0) {
        unaff_x30 = 0x10ae452e8;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        unaff_x19 = param_1;
        unaff_x20 = uVar4;
        unaff_x29 = puVar1;
        goto code_r0x0001001e33e0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulong *)(param_1 + 0x10));
  }
  func_0x000107c2b534(*(undefined8 *)(param_1 + 8));
  lVar2 = param_1;
code_r0x0001001e33e0:
  if (lVar2 != 0) {
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    plVar3 = (long *)(lVar2 + -8);
    if (*plVar3 + 8 != 0) {
      func_0x000107c60ee4(plVar3,*plVar3 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar3);
    return;
  }
  return;
}



/* Entry: 10ae45320; end: 10ae4538b;  */

undefined8 FUN_10ae45320(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  plVar1 = param_1;
  func_0x000107c34f8c(param_1,0,param_2,param_3,param_4);
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    *plVar1 = puVar2[1];
    uVar3 = *puVar2;
    func_0x000107c2b534();
    *param_1 = *param_1 + -1;
    func_0x000107c34f90(param_1);
  }
  return uVar3;
}



/* Entry: 10ae4538c; end: 10ae45443;  */

void FUN_10ae4538c(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((param_2 >> 0x3d == 0) && (lVar9 = param_2 * 8, lVar9 != -8)) {
    plVar4 = (long *)(lVar9 + 8);
    _malloc();
    if (plVar4 != (long *)0x0) {
      plVar8 = plVar4 + 1;
      *plVar4 = lVar9;
      if (lVar9 != 0) {
        _bzero(plVar8,lVar9);
      }
      lVar9 = *(long *)(param_1 + 8);
      lVar1 = *(long *)(param_1 + 0x10);
      if (lVar1 != 0) {
        lVar5 = 0;
        do {
          lVar3 = *(long *)(lVar9 + lVar5 * 8);
          while (lVar3 != 0) {
            uVar2 = 0;
            if (param_2 != 0) {
              uVar2 = *(uint *)(lVar3 + 0x10) / param_2;
            }
            lVar6 = (ulong)*(uint *)(lVar3 + 0x10) - uVar2 * param_2;
            lVar7 = *(long *)(lVar3 + 8);
            *(long *)(lVar3 + 8) = plVar8[lVar6];
            plVar8[lVar6] = lVar3;
            lVar3 = lVar7;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != lVar1);
      }
      func_0x000107c2b534();
      *(long **)(param_1 + 8) = plVar8;
      *(ulong *)(param_1 + 0x10) = param_2;
    }
  }
  return;
}



/* Entry: 10ae45444; end: 10ae4546b;  */

void FUN_10ae45444(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _bzero(param_1);
  }
  return;
}



/* Entry: 10ae4546c; end: 10ae4558b;  */

byte FUN_10ae4546c(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  
  if (param_3 != 0) {
    bVar1 = 0;
    do {
      bVar1 = *param_2 ^ *param_1 | bVar1;
      param_3 = param_3 + -1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    return bVar1;
  }
  return 0;
}



/* Entry: 10ae4558c; end: 10ae45667;  */

long * FUN_10ae4558c(long param_1,ulong param_2)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_2 == 0) {
    lVar6 = 1;
LAB_10ae45604:
    plVar1 = (long *)(lVar6 + 8);
    _malloc();
    if (plVar1 != (long *)0x0) {
      plVar5 = plVar1 + 1;
      *plVar1 = lVar6;
      if (uVar3 != 0) {
        _memcpy(plVar5,param_1,uVar3);
      }
      *(undefined1 *)((long)plVar5 + uVar3) = 0;
      return plVar5;
    }
  }
  else {
    do {
      uVar3 = uVar4;
      if (*(char *)(param_1 + uVar4) == '\0') break;
      uVar4 = uVar4 + 1;
      uVar3 = param_2;
    } while (param_2 != uVar4);
    if (uVar3 == 0xffffffffffffffff) {
      uVar2 = 0x15e;
      goto LAB_10ae4564c;
    }
    if (uVar3 < 0xfffffffffffffff7) {
      lVar6 = uVar3 + 1;
      goto LAB_10ae45604;
    }
  }
  uVar2 = 0x163;
LAB_10ae4564c:
  func_0x000107c2b29c(0xe,0,0x41,&UNK_10f6c781f,uVar2);
  return (long *)0x0;
}



/* Entry: 10ae45668; end: 10ae457af;  */

long FUN_10ae45668(undefined1 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if (param_3 < 2) {
    lVar1 = 0;
    if (param_3 == 0) goto LAB_10ae456c4;
  }
  else {
    lVar1 = 0;
    do {
      if (*(char *)(param_2 + lVar1) == '\0') {
        param_2 = param_2 + lVar1;
        param_1 = param_1 + lVar1;
        goto LAB_10ae456c0;
      }
      param_1[lVar1] = *(char *)(param_2 + lVar1);
      lVar1 = lVar1 + 1;
    } while (param_3 - 1 != lVar1);
    param_2 = param_2 + lVar1;
    param_1 = param_1 + lVar1;
    lVar1 = param_3 - 1;
  }
LAB_10ae456c0:
  *param_1 = 0;
LAB_10ae456c4:
  _strlen(param_2);
  return param_2 + lVar1;
}



/* Entry: 10ae457b0; end: 10ae457cb;  */

void FUN_10ae457b0(undefined8 param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(param_1,(&PTR_DAT_110c7ccb8)[(ulong)*param_2 * 5]);
  return;
}



/* Entry: 10ae457cc; end: 10ae45847;  */

void FUN_10ae457cc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0x13310e80;
  _pthread_rwlock_rdlock();
  if (iVar1 == 0) {
    iVar1 = 0x13310e80;
    _pthread_rwlock_unlock();
    if (iVar1 == 0) {
      _bsearch(param_1,&UNK_10e528b36,0x3b9,2,FUN_10ae45848);
      return;
    }
  }
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)();
  return;
}



/* Entry: 10ae45848; end: 10ae45863;  */

void FUN_10ae45848(undefined8 param_1,ushort *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbfe24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strcmp_11034cba8)(param_1,(&PTR_DAT_110c7ccc0)[(ulong)*param_2 * 5]);
  return;
}



/* Entry: 10ae45864; end: 10ae458b7;  */

/* WARNING: Removing unreachable block (ram,0x00010ae45920) */

undefined ** FUN_10ae45864(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  if ((int)param_2 != 0) {
LAB_10ae45878:
    puVar5 = auStack_88;
    func_0x000107c2b200(puVar5,0x20);
    if ((int)puVar5 != 0) {
      uVar4 = param_1;
      _strlen(param_1);
      puVar5 = auStack_88;
      FUN_10ae1fcc0(puVar5,param_1,uVar4);
      if ((int)puVar5 != 0) {
        puVar5 = auStack_88;
        func_0x000107c2b208(puVar5,&uStack_60,auStack_68);
        if ((int)puVar5 != 0) {
          puStack_58 = (undefined *)0x0;
          uStack_50 = 0;
          uStack_48 = 0;
          ppuVar6 = &puStack_58;
          func_0x000107c2b548(ppuVar6);
          func_0x000107c2b534(uStack_60);
          return ppuVar6;
        }
      }
    }
    func_0x000107c2b29c(8,0,0x65,&UNK_10f6c788b,399);
    func_0x000107c2b204(auStack_88);
    return (undefined **)0x0;
  }
  uVar4 = param_1;
  func_0x00010ae45734();
  uVar1 = (uint)uVar4;
  if (uVar1 == 0) {
    uVar4 = param_1;
    FUN_10ae457cc();
    uVar1 = (uint)uVar4;
    if (uVar1 == 0) goto LAB_10ae45878;
  }
  if (uVar1 < 0x3c3) {
    if (uVar1 == 0) {
      uVar8 = 0;
    }
    else {
      if (*(int *)(&UNK_110c7ccc8 + (ulong)uVar1 * 0x28) == 0) {
code_r0x00010073c840:
        func_0x0001004d2c58(8,0,100,&UNK_10f6c788b,0x16f);
        return (undefined **)0x0;
      }
      uVar8 = (ulong)uVar1;
    }
    return &PTR_DAT_110c7ccb8 + uVar8 * 5;
  }
  lVar2 = 0x113310e80;
  func_0x000107c61288();
  if ((int)lVar2 == 0) {
    lVar2 = 0x113310e80;
    func_0x000107c6128c();
    if ((int)lVar2 == 0) goto code_r0x00010073c840;
  }
  func_0x000107c60ebc();
  if ((*(uint *)(lVar2 + 0x10) >> 9 & 1) == 0) {
    puVar9 = *(undefined8 **)(lVar2 + 0x20);
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffffdf0;
    *(undefined4 *)(lVar2 + 0x14) = 0;
    uVar1 = (uint)*puVar9;
    iVar7 = (int)param_3;
    if (iVar7 <= (int)(uVar1 ^ 0x7fffffff)) {
      puVar3 = puVar9;
      func_0x0001004cc558(puVar9,(long)(int)(iVar7 + uVar1));
      if (puVar3 == (undefined8 *)((long)(int)uVar1 + (long)iVar7)) {
        if (iVar7 == 0) {
          return param_3;
        }
        func_0x000107c610b4(puVar9[1] + (long)(int)uVar1,param_2,(long)iVar7);
        return param_3;
      }
    }
  }
  else {
    func_0x0001004d2c58(0x11,0,0x74,&UNK_10f6c51b9,0xa7);
  }
  return (undefined **)0xffffffff;
}



/* Entry: 10ae458b8; end: 10ae45a8b;  */

undefined8 * FUN_10ae458b8(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  int iStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  puVar1 = auStack_88;
  func_0x000107c2b200(puVar1,0x20);
  if ((int)puVar1 != 0) {
    uVar2 = param_2;
    _strlen(param_2);
    puVar1 = auStack_88;
    FUN_10ae1fcc0(puVar1,param_2,uVar2);
    if ((int)puVar1 != 0) {
      puVar1 = auStack_88;
      func_0x000107c2b208(puVar1,&uStack_60,auStack_68);
      iStack_48 = (int)puVar1;
      if (iStack_48 != 0) {
        if (param_1 == (code *)0x0) {
          iStack_48 = 0;
        }
        else {
          (*param_1)();
        }
        uStack_40 = uStack_60;
        uStack_38 = 0xd;
        puVar3 = &uStack_58;
        uStack_58 = param_3;
        uStack_50 = param_4;
        func_0x000107c2b548(puVar3);
        func_0x000107c2b534(uStack_60);
        return puVar3;
      }
    }
  }
  func_0x000107c2b29c(8,0,0x65,&UNK_10f6c788b,399);
  func_0x000107c2b204(auStack_88);
  return (undefined8 *)0x0;
}



/* Entry: 10ae45a8c; end: 10ae45acb;  */

void FUN_10ae45a8c(ulong param_1,undefined8 param_2,uint param_3)

{
  FUN_10ae45668(param_1,param_2,param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  if (param_1 >> 0x1f != 0) {
    func_0x000107c2b29c(8,0,0x45,&UNK_10f6c788b,0x1ac);
  }
  return;
}



/* Entry: 10ae45acc; end: 10ae45afb;  */

long FUN_10ae45acc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  puVar1 = &uStack_30;
  func_0x0001004cbfb8(puVar1,&uStack_38,0,&UNK_10f6cc9f2,param_1,param_3,param_4);
  if ((int)puVar1 == 0) {
    param_2 = 0;
  }
  else {
    uStack_28 = uStack_30;
    (*(code *)0x10ae45af0)(param_2,&uStack_28,uStack_38);
    if (param_2 == 0) {
      func_0x0001004d2c58(9,0,0xc,&UNK_10f6ccc8e,0x54);
    }
    func_0x0001001e33e0(uStack_30);
  }
  return param_2;
}



/* Entry: 10ae45afc; end: 10ae45b57;  */

long FUN_10ae45afc(long param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_10ae2a69c();
    func_0x000107c2b2c0(param_1);
    if ((lVar1 != 0) && (param_2 != (long *)0x0)) {
      func_0x000107c2b4d0(*param_2);
      *param_2 = lVar1;
    }
  }
  return lVar1;
}



/* Entry: 10ae45b58; end: 10ae45ba7;  */

long FUN_10ae45b58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  puVar1 = &uStack_30;
  func_0x0001004cbfb8(puVar1,&uStack_38,0,&UNK_10f6cca0b,param_1,param_3,param_4);
  if ((int)puVar1 == 0) {
    param_2 = 0;
  }
  else {
    uStack_28 = uStack_30;
    (*(code *)0x10ae45b7c)(param_2,&uStack_28,uStack_38);
    if (param_2 == 0) {
      func_0x0001004d2c58(9,0,0xc,&UNK_10f6ccc8e,0x54);
    }
    func_0x0001001e33e0(uStack_30);
  }
  return param_2;
}



/* Entry: 10ae45ba8; end: 10ae45f83;  */

ulong * FUN_10ae45ba8(ulong *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  ulong auStack_80 [3];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = (ulong *)0x0;
  uStack_88 = 0;
  puStack_98 = (ulong *)0x0;
  puVar2 = param_1;
  puVar6 = param_2;
  puVar7 = param_2;
  if (param_2 == (ulong *)0x0) {
    puVar2 = (ulong *)0x0;
    func_0x000107c2b59c();
    puVar7 = puVar2;
    if (puVar2 == (ulong *)0x0) {
      puVar5 = (ulong *)0x9;
      puVar6 = (ulong *)0x0;
      func_0x000107c2b29c(9,0,0x41,&UNK_10f6cca16,0x95);
      goto LAB_10ae45f44;
    }
  }
  uVar9 = *puVar7;
  FUN_10ae4e7e4();
  if (puVar2 == (ulong *)0x0) {
LAB_10ae45ef0:
    while( true ) {
      FUN_10ae4e844();
      if (*puVar7 <= uVar9) break;
      puVar6 = (ulong *)(*puVar7 - 1);
      func_0x000107c2b5b0(puVar7);
    }
    if (puVar7 != param_2) {
      func_0x000107c2b534(puVar7[1]);
      func_0x000107c2b534(puVar7);
    }
    puVar7 = (ulong *)0x0;
  }
  else {
    puVar6 = &uStack_88;
    puVar5 = param_1;
    func_0x000107c2b568(param_1,puVar6,&puStack_90,&puStack_98,&uStack_a0);
    iVar1 = (int)puVar5;
    uVar4 = uStack_88;
    while (uStack_88 = uVar4, iVar1 != 0) {
      uVar3 = uVar4;
      _strcmp(uVar4,&UNK_10f6cca8b);
      if (((int)uVar3 == 0) || (uVar3 = uVar4, _strcmp(uVar4,&UNK_10f6cca97), (int)uVar3 == 0)) {
        uVar10 = 0;
        pcVar8 = FUN_10ae45f84;
LAB_10ae45cdc:
        puVar6 = auStack_80;
        puVar5 = puStack_90;
        func_0x000107c2b56c();
        if ((int)puVar5 == 0) goto LAB_10ae45ef0;
        puVar5 = auStack_80;
        puVar6 = puStack_98;
        func_0x000107c2b570(puVar5,puStack_98,&uStack_a0,param_3,param_4);
        if ((int)puVar5 == 0) goto LAB_10ae45ef0;
        puVar6 = puVar2;
        (*pcVar8)(puVar2,puStack_98,uStack_a0,uVar10);
        iVar1 = (int)puVar6;
        if (iVar1 == 2) {
          puVar5 = puVar7;
          func_0x000107c2b5ac(puVar7,puVar2,*puVar7);
          puVar6 = puVar2;
          if ((puVar5 == (ulong *)0x0) || (FUN_10ae4e7e4(), puVar6 = puVar2, puVar5 == (ulong *)0x0)
             ) goto LAB_10ae45ef0;
          puVar6 = puVar5;
          (*pcVar8)(puVar5,puStack_98,uStack_a0,uVar10);
          iVar1 = (int)puVar6;
          puVar2 = puVar5;
        }
        if (iVar1 != 0) {
          puVar6 = (ulong *)0x0;
          func_0x000107c2b29c(9,0,0xc,&UNK_10f6cca16,0xe9);
          goto LAB_10ae45ef0;
        }
      }
      else {
        uVar3 = uVar4;
        _strcmp(uVar4,&UNK_10f6ccaa8);
        if ((int)uVar3 == 0) {
          uVar10 = 0;
          pcVar8 = (code *)0x10ae45fdc;
          goto LAB_10ae45cdc;
        }
        uVar3 = uVar4;
        _strcmp(uVar4,&UNK_10f6ccabc);
        if ((int)uVar3 == 0) {
          uVar10 = 0;
          pcVar8 = (code *)0x10ae4602c;
          goto LAB_10ae45cdc;
        }
        puVar6 = (ulong *)&UNK_10f6cc9fb;
        uVar3 = uVar4;
        _strcmp();
        if ((int)uVar3 == 0) {
          uVar10 = 6;
LAB_10ae45dc0:
          puVar5 = puStack_90;
          _strlen();
          pcVar8 = FUN_10ae46084;
          if (puVar5 < (ulong *)0xb) goto LAB_10ae45cdc;
          if ((puVar2[2] != 0) &&
             ((puVar5 = puVar7, func_0x000107c2b5ac(puVar7,puVar2,*puVar7), puVar6 = puVar2,
              puVar5 == (ulong *)0x0 ||
              (FUN_10ae4e7e4(), puVar6 = puVar2, puVar2 = puVar5, puVar5 == (ulong *)0x0))))
          goto LAB_10ae45ef0;
          FUN_10ae4eb60();
          puVar2[2] = (ulong)puVar5;
          if (puVar5 == (ulong *)0x0) goto LAB_10ae45ef0;
          puVar6 = puVar2 + 3;
          puVar5 = puStack_90;
          func_0x000107c2b56c();
          if ((int)puVar5 == 0) goto LAB_10ae45ef0;
          puVar2[7] = (ulong)puStack_98;
          *(int *)(puVar2 + 6) = (int)uStack_a0;
          puStack_98 = (ulong *)0x0;
        }
        else {
          puVar6 = (ulong *)&UNK_10f6ccac5;
          uVar3 = uVar4;
          _strcmp();
          if ((int)uVar3 == 0) {
            uVar10 = 0x74;
            goto LAB_10ae45dc0;
          }
          puVar6 = (ulong *)&UNK_10f6ccad5;
          _strcmp();
          if ((int)uVar4 == 0) {
            uVar10 = 0x198;
            goto LAB_10ae45dc0;
          }
        }
      }
      func_0x000107c2b534(uStack_88);
      func_0x000107c2b534(puStack_90);
      func_0x000107c2b534(puStack_98);
      puStack_90 = (ulong *)0x0;
      uStack_88 = 0;
      puStack_98 = (ulong *)0x0;
      puVar6 = &uStack_88;
      puVar5 = param_1;
      func_0x000107c2b568(param_1,puVar6,&puStack_90,&puStack_98,&uStack_a0);
      uVar4 = uStack_88;
      iVar1 = (int)puVar5;
    }
    func_0x000107c34f64();
    if (((puVar5 == (ulong *)0x0) || (*(uint *)((long)puVar5 + 0x184) == (uint)puVar5[0x30])) ||
       ((puVar5[(ulong)(uint)puVar5[0x30] * 3 + 2] & 0xff000fff) != 0x900006e)) goto LAB_10ae45ef0;
    func_0x000107c2b290();
    if (((*puVar2 != 0) || (puVar2[1] != 0)) || ((puVar2[2] != 0 || (puVar2[7] != 0)))) {
      puVar5 = puVar7;
      func_0x000107c2b5ac(puVar7,puVar2,*puVar7);
      puVar6 = puVar2;
      if (puVar5 == (ulong *)0x0) goto LAB_10ae45ef0;
      puVar2 = (ulong *)0x0;
    }
    FUN_10ae4e844(puVar2);
  }
  func_0x000107c2b534(uStack_88);
  func_0x000107c2b534(puStack_90);
  puVar5 = puStack_98;
  func_0x000107c2b534();
  puVar2 = puVar7;
LAB_10ae45f44:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10ae45f84;
  if (*puVar5 == 0) {
    uVar9 = 0;
    puStack_c8 = puVar6;
    puStack_c0 = param_2;
    puStack_b8 = puVar2;
    puStack_b0 = &stack0xfffffffffffffff0;
    func_0x000107c2b1b4(0,&puStack_c8);
    *puVar5 = uVar9;
    puVar6 = (ulong *)(ulong)(uVar9 == 0);
  }
  else {
    puVar6 = (ulong *)0x2;
  }
  return puVar6;
}



/* Entry: 10ae45f84; end: 10ae46083;  */

undefined1 FUN_10ae45f84(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uStack_28;
  
  if (*param_1 == 0) {
    lVar2 = 0;
    uStack_28 = param_2;
    func_0x000107c2b1b4(0,&uStack_28,param_3,&UNK_110c87868);
    *param_1 = lVar2;
    uVar1 = lVar2 == 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10ae46084; end: 10ae461df;  */

undefined1 FUN_10ae46084(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uStack_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar2 = param_1;
    uStack_38 = param_2;
    FUN_10ae4eb60();
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar2 == 0) {
      uVar1 = 1;
    }
    else {
      FUN_10ae2a970(param_4,0,&uStack_38,param_3);
      *(long *)(*(long *)(param_1 + 0x10) + 0x18) = param_4;
      uVar1 = param_4 == 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 10ae461e0; end: 10ae46317;  */

void FUN_10ae461e0(char *param_1,undefined8 param_2,int param_3,byte *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  
  pcVar4 = param_1 + 0x400;
  lVar5 = 0x400;
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 1;
    lVar5 = lVar5 + -1;
    pcVar3 = pcVar4;
  } while (lVar5 != 0);
  FUN_10ae45668(pcVar3,&UNK_10f6ccb29);
  lVar5 = 0x400;
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 1;
    lVar5 = lVar5 + -1;
    pcVar3 = pcVar4;
  } while (lVar5 != 0);
  FUN_10ae45668(pcVar3,param_2);
  lVar5 = 0x400;
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 1;
    lVar5 = lVar5 + -1;
    pcVar3 = pcVar4;
  } while (lVar5 != 0);
  FUN_10ae45668(pcVar3,&DAT_10f68e8ee);
  pcVar4 = param_1;
  _strlen();
  iVar1 = (int)pcVar4;
  if (iVar1 + param_3 * 2 < 0x400) {
    if (param_3 < 1) {
      lVar5 = 0;
    }
    else {
      pcVar4 = param_1 + (long)iVar1 + 1;
      lVar5 = (long)param_3;
      do {
        pcVar4[-1] = (&UNK_10f6ccb18)[*param_4 >> 4];
        *pcVar4 = (&UNK_10f6ccb18)[(ulong)*param_4 & 0xf];
        lVar5 = lVar5 + -1;
        pcVar4 = pcVar4 + 2;
        param_4 = param_4 + 1;
      } while (lVar5 != 0);
      lVar5 = (long)param_3 << 1;
    }
    (param_1 + lVar5 + iVar1)[0] = '\n';
    (param_1 + lVar5 + iVar1)[1] = '\0';
  }
  return;
}



/* Entry: 10ae46318; end: 10ae463d3;  */

undefined * FUN_10ae46318(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 **unaff_x29;
  undefined8 unaff_x30;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  uVar3 = param_1;
  _strcmp(param_1,&UNK_10f6ccc55);
  if ((int)uVar3 == 0) {
    return &UNK_110c7bf80;
  }
  uVar3 = param_1;
  _strcmp(param_1,&UNK_10f6ccc5d);
  if ((int)uVar3 == 0) {
    return &UNK_110c7c000;
  }
  uVar3 = param_1;
  _strcmp(param_1,&UNK_10f6ccc6a);
  if ((int)uVar3 == 0) {
    iVar1 = 0x13310998;
    _pthread_once(0x113310998,FUN_10ae3d554);
    if (iVar1 == 0) {
      return (undefined *)0x113836a80;
    }
    _abort();
    iVar1 = 0x133109a8;
    _pthread_once(0x1133109a8,FUN_10ae3d948);
    if (iVar1 == 0) {
      return (undefined *)0x113836ac0;
    }
    _abort();
    uStack_28 = 0x10ae34990;
    iVar1 = 0x133109b8;
    puStack_30 = &stack0xffffffffffffffe0;
    _pthread_once(0x1133109b8,FUN_10ae3dc6c);
    if (iVar1 == 0) {
      return (undefined *)0x1137ed3d0;
    }
    _abort();
    unaff_x29 = &puStack_40;
    uStack_38 = 0x10ae349c4;
    iVar1 = 0x133109c8;
    puStack_40 = (undefined1 *)&puStack_30;
    _pthread_once(0x1133109c8,FUN_10ae3ddec);
    if (iVar1 == 0) {
      return (undefined *)0x113836b00;
    }
    unaff_x30 = 0x10ae349f8;
    _abort();
    register0x00000008 = (BADSPACEBASE *)&puStack_40;
  }
  else {
    uVar3 = param_1;
    _strcmp(param_1,&UNK_10f6ccc76);
    if ((int)uVar3 != 0) {
      _strcmp(param_1,&UNK_10f6ccc82);
      if ((int)param_1 != 0) {
        return (undefined *)0x0;
      }
      goto SUB_10ae34ac8;
    }
  }
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  iVar1 = 0x133109d8;
  _pthread_once(0x1133109d8,FUN_10ae3e42c);
  if (iVar1 == 0) {
    return (undefined *)0x113836b40;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x10ae34a2c;
  iVar1 = 0x133109e8;
  _pthread_once(0x1133109e8,0x10ae3e474);
  if (iVar1 == 0) {
    return (undefined *)0x113836b80;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0x10ae34a60;
  iVar1 = 0x133109f8;
  _pthread_once(0x1133109f8,0x10ae3e4bc);
  if (iVar1 == 0) {
    return (undefined *)0x1137ed410;
  }
  _abort();
  unaff_x29 = (undefined1 **)((long)register0x00000008 + -0x40);
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0x10ae34a94;
  iVar1 = 0x13310a08;
  _pthread_once(0x113310a08,0x10ae3e504);
  if (iVar1 == 0) {
    return (undefined *)0x1137ed450;
  }
  unaff_x30 = 0x10ae34ac8;
  _abort();
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x40);
SUB_10ae34ac8:
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  iVar1 = 0x13310a18;
  _pthread_once(0x113310a18,0x10ae3e554);
  if (iVar1 == 0) {
    return (undefined *)0x113836bc0;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x20) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(undefined8 *)((long)register0x00000008 + -0x18) = 0x10ae34afc;
  iVar1 = 0x13310a28;
  _pthread_once(0x113310a28,0x10ae3e59c);
  if (iVar1 == 0) {
    return (undefined *)0x113836c00;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x30) =
       (undefined1 *)((long)register0x00000008 + -0x20);
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0x10ae34b30;
  iVar1 = 0x13310a38;
  _pthread_once(0x113310a38,0x10ae3e5e4);
  if (iVar1 == 0) {
    return (undefined *)0x1137ed490;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x40) =
       (undefined1 *)((long)register0x00000008 + -0x30);
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0x10ae34b64;
  iVar1 = 0x13310a48;
  _pthread_once(0x113310a48,0x10ae3e62c);
  if (iVar1 == 0) {
    return (undefined *)0x113836c40;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x50) =
       (undefined1 *)((long)register0x00000008 + -0x40);
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0x10ae34b98;
  iVar1 = 0x13310a58;
  _pthread_once(0x113310a58,0x10ae3e67c);
  if (iVar1 == 0) {
    return (undefined *)0x1137ed4d0;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x60) =
       (undefined1 *)((long)register0x00000008 + -0x50);
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10ae34bcc;
  iVar1 = 0x13310a68;
  _pthread_once(0x113310a68,FUN_10ae3e73c);
  if (iVar1 == 0) {
    return (undefined *)0x1137ed510;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x70) =
       (undefined1 *)((long)register0x00000008 + -0x60);
  *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10ae34c00;
  iVar1 = 0x13310a78;
  _pthread_once(0x113310a78,0x10ae3e790);
  if (iVar1 == 0) {
    return (undefined *)0x1137ed550;
  }
  _abort();
  *(undefined1 **)((long)register0x00000008 + -0x80) =
       (undefined1 *)((long)register0x00000008 + -0x70);
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0x10ae34c34;
  puVar2 = (undefined *)0x113310a98;
  _pthread_once(0x113310a98,FUN_10ae34c68);
  if ((int)puVar2 == 0) {
    return (undefined *)0x113836cc8;
  }
  _abort();
  uRam0000000113836cd8 = 0;
  uRam0000000113836ce8 = 0;
  uRam0000000113836d00 = 0;
  uRam0000000113836d08 = 0;
  uRam0000000113836cc8 = 0x10100c20;
  uRam0000000113836ccc = 1;
  puRam0000000113836cd0 = &UNK_1009e044c;
  puRam0000000113836ce0 = &UNK_1002298c0;
  puRam0000000113836cf0 = &UNK_1009f6c5c;
  puRam0000000113836cf8 = &UNK_1001ff5ac;
  return puVar2;
}



/* Entry: 10ae463d4; end: 10ae4652f;  */

ulong FUN_10ae463d4(long param_1,uint param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (((-1 < (int)param_2) && (param_1 != 0)) && (param_4 != 0)) {
    uVar1 = param_4;
    _strlen();
    if (uVar1 < param_2) {
      FUN_10ae45668(param_1,param_4,param_2);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Entry: 10ae46530; end: 10ae46813;  */

undefined8 ***
FUN_10ae46530(undefined8 param_1,undefined8 ***param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 **ppuStack_490;
  undefined8 **ppuStack_488;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  undefined8 **ppuStack_470;
  undefined8 **ppuStack_468;
  undefined8 **ppuStack_460;
  undefined8 *puStack_458;
  undefined8 **ppuStack_450;
  undefined8 **appuStack_448 [128];
  long lStack_48;
  
  pppuVar8 = &ppuStack_470;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_458 = (undefined8 **)0x0;
  ppuStack_468 = (undefined8 ***)0x0;
  pppuVar10 = (undefined8 ***)&UNK_10f6ccbdd;
  pppuVar7 = &ppuStack_468;
  pppuVar9 = (undefined8 ***)&puStack_458;
  func_0x000107c2b564(pppuVar7,&ppuStack_470,pppuVar9,&UNK_10f6ccbdd,param_1,param_3,param_4);
  ppuVar4 = (undefined8 **)puStack_458;
  if ((int)pppuVar7 == 0) {
    pppuVar5 = (undefined8 ***)0x0;
    goto LAB_10ae467a4;
  }
  ppuStack_460 = ppuStack_468;
  ppuVar3 = (undefined8 **)puStack_458;
  _strcmp(puStack_458,&UNK_10f6ccc03);
  if ((int)ppuVar3 == 0) {
    pppuVar10 = (undefined8 ***)&UNK_110c86508;
    pppuVar7 = (undefined8 ***)0x0;
    func_0x000107c2b1b4(0,&ppuStack_460,ppuStack_470,&UNK_110c86508);
    if (pppuVar7 != (undefined8 ***)0x0) {
      pppuVar5 = pppuVar7;
      FUN_10ae48084();
      if (param_2 != (undefined8 ***)0x0) {
        if (*param_2 != (undefined8 **)0x0) {
          func_0x000107c2b2c0();
        }
        *param_2 = pppuVar5;
      }
      pppuVar6 = appuStack_448;
      appuStack_448[0] = pppuVar7;
LAB_10ae46668:
      pppuVar8 = (undefined8 ***)&UNK_110c86508;
      pppuVar9 = (undefined8 ***)0x0;
      func_0x000107c2b1bc(pppuVar6,&UNK_110c86508,0);
      goto LAB_10ae46770;
    }
LAB_10ae46774:
    pppuVar10 = (undefined8 ***)&UNK_10f6ccd02;
    pppuVar8 = (undefined8 ***)0x0;
    pppuVar9 = (undefined8 ***)0xc;
    func_0x000107c2b29c(9,0,0xc,&UNK_10f6ccd02,0x8a);
LAB_10ae46790:
    pppuVar5 = (undefined8 ***)0x0;
  }
  else {
    ppuVar3 = ppuVar4;
    _strcmp(ppuVar4,&UNK_10f6ccbed);
    if ((int)ppuVar3 == 0) {
      pppuVar10 = (undefined8 ***)&UNK_110c87548;
      pppuVar8 = &ppuStack_460;
      pppuVar7 = (undefined8 ***)0x0;
      func_0x000107c2b1b4(0,pppuVar8,ppuStack_470,&UNK_110c87548);
      pppuVar9 = (undefined8 ***)ppuStack_470;
      if (pppuVar7 == (undefined8 ***)0x0) {
LAB_10ae46750:
        pppuVar5 = (undefined8 ***)0x0;
        goto LAB_10ae46770;
      }
      pcVar1 = FUN_10ae463d4;
      if (param_3 != (code *)0x0) {
        pcVar1 = param_3;
      }
      pppuVar9 = appuStack_448;
      (*pcVar1)(pppuVar9,0x400,0,param_4);
      ppuStack_450 = pppuVar7;
      if (0 < (int)pppuVar9) {
        FUN_10ae48220(pppuVar7,appuStack_448,pppuVar9);
        func_0x000107c2b1bc(&ppuStack_450,&UNK_110c87548,0);
        pppuVar9 = (undefined8 ***)((ulong)pppuVar9 & 0xffffffff);
        pppuVar8 = (undefined8 ***)0x0;
        pppuVar10 = (undefined8 ***)0x400;
        ___memset_chk(appuStack_448,0,pppuVar9,0x400);
        if (pppuVar7 != (undefined8 ***)0x0) {
          pppuVar5 = pppuVar7;
          FUN_10ae48084();
          if (param_2 != (undefined8 ***)0x0) {
            if (*param_2 != (undefined8 **)0x0) {
              func_0x000107c2b2c0();
            }
            *param_2 = pppuVar5;
          }
          pppuVar6 = &ppuStack_450;
          ppuStack_450 = pppuVar7;
          goto LAB_10ae46668;
        }
        goto LAB_10ae46750;
      }
      pppuVar10 = (undefined8 ***)&UNK_10f6ccd02;
      func_0x000107c2b29c(9,0,0x68,&UNK_10f6ccd02,0x6e);
      pppuVar8 = (undefined8 ***)&UNK_110c87548;
      pppuVar9 = (undefined8 ***)0x0;
      func_0x000107c2b1bc(&ppuStack_450,&UNK_110c87548,0);
      goto LAB_10ae46790;
    }
    ppuVar3 = ppuVar4;
    _strcmp(ppuVar4,&UNK_10f6cc9fb);
    if ((int)ppuVar3 == 0) {
      pppuVar5 = (undefined8 ***)0x6;
      pppuVar10 = (undefined8 ***)ppuStack_470;
    }
    else {
      ppuVar3 = ppuVar4;
      _strcmp(ppuVar4,&UNK_10f6ccad5);
      if ((int)ppuVar3 == 0) {
        pppuVar5 = (undefined8 ***)0x198;
        pppuVar10 = (undefined8 ***)ppuStack_470;
      }
      else {
        _strcmp(ppuVar4,&UNK_10f6ccac5);
        if ((int)ppuVar4 != 0) goto LAB_10ae46774;
        pppuVar5 = (undefined8 ***)0x74;
        pppuVar10 = (undefined8 ***)ppuStack_470;
      }
    }
    pppuVar9 = &ppuStack_460;
    pppuVar8 = param_2;
    FUN_10ae2a970(pppuVar5,param_2,pppuVar9,pppuVar10);
LAB_10ae46770:
    if (pppuVar5 == (undefined8 ***)0x0) goto LAB_10ae46774;
  }
  func_0x000107c2b534(puStack_458);
  pppuVar7 = (undefined8 ***)ppuStack_468;
  func_0x000107c2b534(ppuStack_468);
LAB_10ae467a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar5;
  }
  ___stack_chk_fail();
  uStack_478 = 0x10ae46814;
  uStack_4a0 = 0;
  puVar2 = &uStack_4a0;
  ppuStack_490 = pppuVar5;
  ppuStack_488 = param_2;
  puStack_480 = &stack0xfffffffffffffff0;
  func_0x0001004cbfb8(puVar2,&uStack_4a8,0,&UNK_10f6ccd77,pppuVar7,pppuVar9,pppuVar10);
  if ((int)puVar2 == 0) {
    pppuVar8 = (undefined8 ***)0x0;
  }
  else {
    uStack_498 = uStack_4a0;
    (*(code *)0x10ae46838)(pppuVar8,&uStack_498,uStack_4a8);
    if (pppuVar8 == (undefined8 ***)0x0) {
      func_0x0001004d2c58(9,0,0xc,&UNK_10f6ccc8e,0x54);
    }
    func_0x0001001e33e0(uStack_4a0);
  }
  return pppuVar8;
}



/* Entry: 10ae46814; end: 10ae46843;  */

long FUN_10ae46814(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  puVar1 = &uStack_30;
  func_0x0001004cbfb8(puVar1,&uStack_38,0,&UNK_10f6ccd77,param_1,param_3,param_4);
  if ((int)puVar1 == 0) {
    param_2 = 0;
  }
  else {
    uStack_28 = uStack_30;
    (*(code *)0x10ae46838)(param_2,&uStack_28,uStack_38);
    if (param_2 == 0) {
      func_0x0001004d2c58(9,0,0xc,&UNK_10f6ccc8e,0x54);
    }
    func_0x0001001e33e0(uStack_30);
  }
  return param_2;
}



/* Entry: 10ae46844; end: 10ae46b07;  */

undefined8 FUN_10ae46844(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  *param_1 = 0;
  FUN_10ae1f5e4(param_3,auStack_40,param_1);
  if ((int)param_3 == 0) goto LAB_10ae46910;
  puVar1 = auStack_40;
  func_0x000107c34f50(puVar1,auStack_50,0x20000010,1);
  if ((int)puVar1 == 0) goto LAB_10ae46910;
  puVar1 = auStack_50;
  func_0x000107c34f50(puVar1,&lStack_60,6,1);
  if ((int)puVar1 == 0) goto LAB_10ae46910;
  if (lStack_58 == 9) {
    lVar6 = 0;
    bVar5 = 0;
    do {
      bVar5 = (&UNK_10e52abb4)[lVar6] ^ *(byte *)(lStack_60 + lVar6) | bVar5;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 9);
    if (bVar5 != 0) goto LAB_10ae468f4;
    puVar1 = auStack_50;
    func_0x000107c34f50(puVar1,auStack_70,0xa0000000,1);
    if ((int)puVar1 == 0) goto LAB_10ae46910;
    puVar1 = auStack_70;
    func_0x000107c34f50(puVar1,&uStack_80,0x20000010,1);
    if ((int)puVar1 == 0) goto LAB_10ae46910;
    puVar2 = &uStack_80;
    FUN_10ae200fc(puVar2,&lStack_88);
    if ((int)puVar2 == 0) goto LAB_10ae46910;
    puVar2 = &uStack_80;
    func_0x000107c34f50(puVar2,0,0x20000011,1);
    if ((int)puVar2 == 0) goto LAB_10ae46910;
    puVar2 = &uStack_80;
    func_0x000107c34f50(puVar2,0,0x20000010,1);
    if ((int)puVar2 == 0) goto LAB_10ae46910;
    if (lStack_88 != 0) {
      *param_2 = uStack_80;
      param_2[1] = uStack_78;
      return 1;
    }
    uVar3 = 100;
    uVar4 = 0x49;
  }
  else {
LAB_10ae468f4:
    uVar3 = 0x65;
    uVar4 = 0x3a;
  }
  func_0x000107c2b29c(0x12,0,uVar3,&UNK_10f6ccd97,uVar4);
LAB_10ae46910:
  func_0x000107c2b534(*param_1);
  *param_1 = 0;
  return 0;
}



/* Entry: 10ae46b08; end: 10ae46c93;  */

undefined8 FUN_10ae46b08(long *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plStack_48;
  
  if (param_1 == (long *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *param_1;
  }
  puVar1 = (ulong *)0x0;
  func_0x000107c2b59c();
  if (puVar1 != (ulong *)0x0) {
    puVar2 = puVar1;
    func_0x00010ae469e0();
    if ((int)puVar2 != 0) {
      uVar8 = 0;
      do {
        uVar5 = *puVar1;
        if (uVar5 <= uVar8) {
          if (uVar5 != 0) {
            uVar8 = 0;
            do {
              if (*(long *)(puVar1[1] + uVar8 * 8) != 0) {
                func_0x000107c2b588();
                uVar5 = *puVar1;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar5);
          }
          func_0x000107c2b534(puVar1[1]);
          func_0x000107c2b534(puVar1);
          return 1;
        }
        plVar3 = *(long **)(puVar1[1] + uVar8 * 8);
        func_0x000107c2b64c();
        if (plVar3 == (long *)0x0) break;
        plVar4 = param_1;
        func_0x000107c2b5ac(param_1,plVar3,*param_1);
        uVar8 = uVar8 + 1;
      } while (plVar4 != (long *)0x0);
      plStack_48 = plVar3;
      func_0x000107c2b1bc(&plStack_48,&UNK_110c87868,0);
    }
    uVar8 = *puVar1;
    if (uVar8 != 0) {
      uVar5 = 0;
      do {
        if (*(long *)(puVar1[1] + uVar5 * 8) != 0) {
          func_0x000107c2b588();
          uVar8 = *puVar1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
    func_0x000107c2b534(puVar1[1]);
    func_0x000107c2b534(puVar1);
  }
  do {
    if (param_1 == (long *)0x0) {
      if (lVar7 == 0) {
        return 0;
      }
LAB_10ae46c18:
      plVar3 = (long *)0x0;
    }
    else {
      lVar6 = *param_1;
      if (lVar6 == lVar7) {
        return 0;
      }
      if (lVar6 == 0) goto LAB_10ae46c18;
      plVar3 = param_1;
      func_0x000107c2b5b0(param_1,lVar6 + -1);
    }
    plStack_48 = plVar3;
    func_0x000107c2b1bc(&plStack_48,&UNK_110c87868,0);
  } while( true );
}



/* Entry: 10ae46c94; end: 10ae46f17;  */

undefined8 * FUN_10ae46c94(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lStack_c0;
  long lStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  long lStack_a0;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  puVar2 = (undefined8 *)0x28;
  _malloc();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0x20;
    puVar12 = puVar2 + 1;
    puVar2[2] = 0;
    *puVar12 = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[3] = &PTR_DAT_110c7d028;
    puVar3 = (undefined8 *)0x18;
    _malloc();
    if (puVar3 == (undefined8 *)0x0) {
      puVar2[4] = 0;
    }
    else {
      *puVar3 = 0x10;
      plVar11 = puVar3 + 1;
      puVar2[4] = plVar11;
      uVar4 = 0;
      func_0x000107c2b59c();
      puVar3[1] = uVar4;
      lVar5 = 0;
      func_0x000107c2b59c();
      puVar3[2] = lVar5;
      lStack_b8 = param_1[1];
      lStack_c0 = *param_1;
      lVar6 = puVar3[1];
      if ((lVar6 != 0) && (lVar5 != 0)) {
        lVar5 = *param_1;
        lVar1 = param_1[1];
        FUN_10ae46b08(lVar6,&lStack_c0);
        if ((int)lVar6 != 0) {
          plVar13 = (long *)puVar3[2];
          uStack_90 = 0;
          if (plVar13 == (long *)0x0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar13;
          }
          puVar7 = &uStack_90;
          FUN_10ae46844(puVar7,auStack_78,param_1);
          if ((int)puVar7 == 0) {
LAB_10ae46e64:
            func_0x000107c2b534(uStack_90);
            do {
              if (plVar13 == (long *)0x0) {
                if (lVar6 == 0) goto LAB_10ae46d64;
LAB_10ae46e9c:
                plVar11 = (long *)0x0;
              }
              else {
                lVar5 = *plVar13;
                if (lVar5 == lVar6) goto LAB_10ae46d64;
                if (lVar5 == 0) goto LAB_10ae46e9c;
                plVar11 = plVar13;
                func_0x000107c2b5b0(plVar13,lVar5 + -1);
              }
              plStack_a8 = plVar11;
              func_0x000107c2b1bc(&plStack_a8,&UNK_110c871b0,0);
            } while( true );
          }
          puVar8 = auStack_78;
          func_0x000107c2b238(puVar8,0,0,0xa0000000);
          if ((int)puVar8 == 0) goto LAB_10ae46e64;
          puVar8 = auStack_78;
          func_0x000107c2b238(puVar8,&uStack_88,&iStack_94,0xa0000001);
          if ((int)puVar8 == 0) goto LAB_10ae46e64;
          if (iStack_94 != 0) {
            do {
              if (lStack_80 == 0) goto LAB_10ae46ec0;
              puVar7 = &uStack_88;
              func_0x000107c34f50(puVar7,&plStack_a8,0x20000010,0);
              if (((int)puVar7 == 0) || (lStack_a0 < 0)) goto LAB_10ae46e64;
              plStack_b0 = plStack_a8;
              lVar9 = 0;
              func_0x000107c2b1b4(0,&plStack_b0,lStack_a0,&UNK_110c871b0);
              if (lVar9 == 0) goto LAB_10ae46e64;
              plVar10 = plVar13;
              func_0x000107c2b5ac(plVar13,lVar9,*plVar13);
            } while (plVar10 != (long *)0x0);
            lStack_68 = lVar9;
            func_0x000107c2b1bc(&lStack_68,&UNK_110c871b0,0);
            goto LAB_10ae46e64;
          }
          uStack_88 = 0;
          lStack_80 = 0;
LAB_10ae46ec0:
          func_0x000107c2b534(uStack_90);
          if (((long *)*plVar11 == (long *)0x0) || (*(long *)*plVar11 == 0)) {
            func_0x000107c2b5a4();
            *plVar11 = 0;
          }
          if (((long *)puVar3[2] == (long *)0x0) || (*(long *)puVar3[2] == 0)) {
            func_0x000107c2b5a4();
            puVar3[2] = 0;
          }
          puVar2[2] = lVar1 - param_1[1];
          func_0x000107c2b544();
          puVar2[1] = lVar5;
          if (lVar5 != 0) {
            return puVar12;
          }
        }
      }
    }
LAB_10ae46d64:
    FUN_10ae46f18(puVar12);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10ae46f18; end: 10ae4702b;  */

/* WARNING: Possible PIC construction at 0x00010ae46f38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae46f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae46ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4700c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae46fa0) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f3c) */
/* WARNING: Removing unreachable block (ram,0x00010ae47010) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f4c) */
/* WARNING: Removing unreachable block (ram,0x00010ae46fac) */
/* WARNING: Removing unreachable block (ram,0x00010ae46fb4) */
/* WARNING: Removing unreachable block (ram,0x00010ae46fbc) */
/* WARNING: Removing unreachable block (ram,0x00010ae46fc8) */
/* WARNING: Removing unreachable block (ram,0x00010ae46fd4) */
/* WARNING: Removing unreachable block (ram,0x00010ae46fec) */
/* WARNING: Removing unreachable block (ram,0x00010ae46ff8) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f54) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f5c) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f68) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f74) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f8c) */
/* WARNING: Removing unreachable block (ram,0x00010ae46f98) */
/* WARNING: Removing unreachable block (ram,0x00010ae47000) */
/* WARNING: Removing unreachable block (ram,0x00010ae4700c) */

void FUN_10ae46f18(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + -8);
    if (*plVar1 + 8 != 0) {
      func_0x000107c60ee4(plVar1,*plVar1 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar1);
    return;
  }
  return;
}



/* Entry: 10ae4702c; end: 10ae47193;  */

undefined1 * FUN_10ae4702c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  FUN_10ae1e2cc(param_1,&uStack_28,&uStack_30,0x400000);
  if ((int)param_1 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_40 = uStack_28;
    uStack_38 = uStack_30;
    FUN_10ae46c94();
    func_0x000107c2b534(uStack_28);
    if ((param_2 != (undefined8 *)0x0) && (puVar1 != (undefined8 *)0x0)) {
      FUN_10ae46f18(*param_2);
      *param_2 = puVar1;
    }
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10ae47194; end: 10ae475c3;  */

void FUN_10ae47194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  ulong *puStack_f0;
  undefined1 auStack_e8 [8];
  long lStack_e0;
  ulong *puStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar7 = param_5;
  func_0x000107c34f50(param_5,auStack_50,0x20000010,1);
  if (((int)lVar7 != 0) && (*(long *)(param_5 + 8) == 0)) {
    puVar2 = auStack_50;
    func_0x000107c34f50(puVar2,auStack_60,0x20000010,1);
    if ((int)puVar2 != 0) {
      puVar2 = auStack_50;
      func_0x000107c34f50(puVar2,auStack_80,0x20000010,1);
      if (((int)puVar2 != 0) && (lStack_48 == 0)) {
        puVar2 = auStack_60;
        func_0x000107c34f50(puVar2,&lStack_70,6,1);
        if ((int)puVar2 != 0) {
          puVar2 = auStack_80;
          func_0x000107c34f50(puVar2,&lStack_90,6,1);
          if ((int)puVar2 != 0) {
            if (lStack_68 == 9) {
              lVar7 = 0;
              bVar6 = 0;
              do {
                bVar6 = (&UNK_10e52abd0)[lVar7] ^ *(byte *)(lStack_70 + lVar7) | bVar6;
                lVar7 = lVar7 + 1;
              } while (lVar7 != 9);
              if (bVar6 == 0) {
                lVar7 = lStack_90;
                FUN_10ae475c4(lStack_90,uStack_88);
                if (lVar7 == 0) {
                  uVar4 = 0x7f;
                  uVar5 = 0xec;
                  goto LAB_10ae471f8;
                }
                puVar2 = auStack_60;
                func_0x000107c34f50(puVar2,&uStack_a0,0x20000010,1);
                if (((int)puVar2 != 0) && (lStack_58 == 0)) {
                  puVar3 = &uStack_a0;
                  func_0x000107c34f50(puVar3,&uStack_b0,4,1);
                  if ((int)puVar3 != 0) {
                    puVar3 = &uStack_a0;
                    FUN_10ae200fc(puVar3,&lStack_b8);
                    if ((int)puVar3 != 0) {
                      if (lStack_b8 - 0x5f5e101U < 0xfffffffffa0a1f00) {
                        uVar4 = 0x81;
                        uVar5 = 0xfc;
                        goto LAB_10ae471f8;
                      }
                      puStack_f0 = &uStack_a0;
                      func_0x000107c2b234(puStack_f0,2);
                      if ((int)puStack_f0 != 0) {
                        puStack_f0 = &uStack_a0;
                        FUN_10ae200fc(puStack_f0,&uStack_c8);
                        if ((int)puStack_f0 == 0) {
                          uVar4 = 0x68;
                          uVar5 = 0x105;
                          goto LAB_10ae471f8;
                        }
                        if (uStack_c8 != *(uint *)(lVar7 + 8)) {
                          uVar4 = 0x7d;
                          uVar5 = 0x10a;
                          goto LAB_10ae471f8;
                        }
                      }
                      func_0x000107c2b424();
                      if (lStack_98 == 0) {
LAB_10ae474e8:
                        puVar2 = auStack_80;
                        func_0x000107c34f50(puVar2,&uStack_c8,4,1);
                        if (((int)puVar2 != 0) && (lStack_78 == 0)) {
                          func_0x00010ae470a0(param_2,lVar7,puStack_f0,lStack_b8,param_3,param_4,
                                              uStack_b0,uStack_a8,uStack_c8,lStack_c0,0);
                          return;
                        }
                        uVar4 = 0x82;
                        uVar5 = 0x135;
                      }
                      else {
                        puVar3 = &uStack_a0;
                        func_0x000107c34f50(puVar3,&uStack_c8,0x20000010,1);
                        if ((int)puVar3 != 0) {
                          puStack_f0 = &uStack_c8;
                          func_0x000107c34f50(puStack_f0,&puStack_d8,6,1);
                          if (((int)puStack_f0 != 0) && (lStack_98 == 0)) {
                            if (lStack_d0 != 8) {
LAB_10ae47490:
                              uVar4 = 0x82;
                              uVar5 = 0x120;
                              goto LAB_10ae471f8;
                            }
                            uVar8 = *puStack_d8 ^ 0x7020df78648862a |
                                    (*puStack_d8 ^ 0x7020df78648862a) >> 0x20;
                            uVar1 = (uint)uVar8 | (uint)(uVar8 >> 0x10);
                            if (((uVar1 | uVar1 >> 8) & 0xff) == 0) {
                              func_0x000107c2b424();
                            }
                            else {
                              uVar8 = *puStack_d8 ^ 0x9020df78648862a |
                                      (*puStack_d8 ^ 0x9020df78648862a) >> 0x20;
                              uVar1 = (uint)uVar8 | (uint)(uVar8 >> 0x10);
                              if (((uVar1 | uVar1 >> 8) & 0xff) != 0) goto LAB_10ae47490;
                              func_0x000107c2b428();
                            }
                            puVar3 = &uStack_c8;
                            func_0x000107c34f50(puVar3,auStack_e8,5,1);
                            if ((((int)puVar3 == 0) || (lStack_e0 != 0)) || (lStack_c0 != 0)) {
                              uVar4 = 0x68;
                              uVar5 = 0x129;
                              goto LAB_10ae471f8;
                            }
                            goto LAB_10ae474e8;
                          }
                        }
                        uVar4 = 0x68;
                        uVar5 = 0x115;
                      }
                      goto LAB_10ae471f8;
                    }
                  }
                }
                uVar4 = 0x68;
                uVar5 = 0xf7;
                goto LAB_10ae471f8;
              }
            }
            uVar4 = 0x80;
            uVar5 = 0xe5;
            goto LAB_10ae471f8;
          }
        }
      }
    }
  }
  uVar4 = 0x68;
  uVar5 = 0xdf;
LAB_10ae471f8:
  func_0x000107c2b29c(0x13,0,uVar4,&UNK_10f6cce0b,uVar5);
  return;
}



/* Entry: 10ae475c4; end: 10ae47637;  */

code * FUN_10ae475c4(byte *param_1,ulong param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  lVar1 = 0;
  pbVar2 = &UNK_110c86330;
  do {
    if (param_2 == (byte)(&UNK_110c86339)[lVar1 * 0x18]) {
      if ((&UNK_110c86339)[lVar1 * 0x18] == 0) {
LAB_10ae47630:
        UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110c86340)[lVar1 * 3];
                    /* WARNING: Could not recover jumptable at 0x00010ae47634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      bVar3 = 0;
      pbVar4 = param_1;
      pbVar5 = pbVar2;
      uVar6 = param_2;
      do {
        bVar3 = *pbVar5 ^ *pbVar4 | bVar3;
        uVar6 = uVar6 - 1;
        pbVar4 = pbVar4 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar6 != 0);
      if (bVar3 == 0) goto LAB_10ae47630;
    }
    lVar1 = lVar1 + 1;
    pbVar2 = pbVar2 + 0x18;
    if (lVar1 == 5) {
      return (code *)0x0;
    }
  } while( true );
}



/* Entry: 10ae47638; end: 10ae47c27;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_10ae47638(undefined8 *******param_1,undefined8 *******param_2,undefined8 *******param_3,
             undefined8 *******param_4,undefined8 *******param_5,undefined8 param_6,
             undefined8 *******param_7,undefined8 *******param_8,undefined8 *******param_9)

{
  undefined8 *******pppppppuVar1;
  long lVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  undefined8 *******pppppppuVar11;
  long *plVar12;
  undefined8 ******ppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 *******pppppppuVar21;
  ulong uVar22;
  undefined8 *******pppppppuVar23;
  uint uVar24;
  long lVar25;
  undefined8 *******pppppppuVar26;
  byte *pbVar27;
  byte bVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulong uVar31;
  undefined8 *******unaff_x20;
  undefined8 unaff_x21;
  undefined8 *******unaff_x22;
  undefined8 *******pppppppuVar32;
  undefined8 *******unaff_x23;
  undefined8 ******ppppppuVar33;
  undefined8 *******unaff_x24;
  undefined8 *******unaff_x25;
  undefined8 *******pppppppuVar34;
  undefined8 *******unaff_x26;
  undefined8 *******unaff_x27;
  undefined8 *******unaff_x28;
  undefined8 ******ppppppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 ******ppppppuStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 auStack_440 [16];
  undefined1 auStack_430 [8];
  long lStack_428;
  undefined8 *******pppppppuStack_420;
  undefined8 *******pppppppuStack_418;
  undefined1 ***pppuStack_410;
  code *pcStack_408;
  int iStack_3f8;
  int iStack_3f4;
  byte *pbStack_3f0;
  ulong uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_348;
  undefined8 *******pppppppuStack_340;
  undefined8 *******pppppppuStack_338;
  undefined8 uStack_330;
  undefined8 *******pppppppuStack_328;
  undefined8 *******pppppppuStack_320;
  long *plStack_318;
  undefined8 *******pppppppuStack_310;
  undefined8 *******pppppppuStack_308;
  undefined1 **ppuStack_300;
  code *pcStack_2f8;
  long *plStack_2f0;
  undefined8 ******ppppppuStack_2e0;
  undefined8 uStack_2d8;
  undefined8 ******ppppppuStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_288;
  undefined8 *******pppppppuStack_280;
  undefined8 *******pppppppuStack_278;
  undefined8 *******pppppppuStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  undefined8 *******pppppppuStack_258;
  undefined8 *******pppppppuStack_250;
  undefined8 uStack_248;
  undefined8 *******pppppppuStack_240;
  undefined8 *******pppppppuStack_238;
  undefined1 *puStack_230;
  undefined8 uStack_228;
  undefined8 *******pppppppuStack_218;
  undefined8 *******pppppppuStack_210;
  undefined8 *******pppppppuStack_208;
  undefined8 *******pppppppuStack_200;
  undefined8 *******pppppppuStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 ******ppppppuStack_1e8;
  long lStack_1e0;
  long *plStack_1d8;
  long *plStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1b4 [132];
  undefined8 *******pppppppuStack_130;
  undefined8 *******pppppppuStack_128;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar20 = (uint)param_6;
  if (uVar20 == 0) {
    pppppppuVar17 = (undefined8 *******)&UNK_10f6cce82;
    plVar12 = (long *)0x13;
    pppppppuVar11 = (undefined8 *******)0x0;
    pppppppuVar14 = (undefined8 *******)0x81;
    pppppppuVar18 = (undefined8 *******)0x74;
    func_0x000107c2b29c();
    pppppppuVar32 = (undefined8 *******)0x0;
    uVar19 = param_6;
  }
  else {
    plStack_1d8 = (long *)0x0;
    lStack_1e0 = 0;
    puStack_1c8 = (undefined8 *)0x0;
    plStack_1d0 = (long *)0x0;
    pppppppuStack_1f0 = (undefined8 *******)0x0;
    ppppppuStack_1e8 = (undefined8 ******)0x0;
    pppppppuVar11 = param_2;
    pppppppuVar14 = param_3;
    pppppppuVar17 = param_4;
    pppppppuVar18 = param_5;
    uVar19 = param_6;
    pppppppuVar21 = param_7;
    pppppppuVar23 = param_8;
    unaff_x28 = param_8;
    if (param_1 == (undefined8 *******)0x0) {
LAB_10ae47700:
      pppppppuVar32 = param_9;
      param_1 = (undefined8 *******)(ulong)*(uint *)(param_9 + 5);
      pppppppuStack_1f8 = param_7;
      if (*(uint *)(param_9 + 5) != 0) {
        pppppppuVar17 = (undefined8 *******)0x80;
        pppppppuVar14 = param_1;
        ___memset_chk(auStack_f0);
        pppppppuVar11 = param_5;
      }
      pppppppuVar34 = pppppppuStack_1f0;
      unaff_x20 = (undefined8 *******)((undefined *)((long)param_4 + (long)param_1) + -1);
      if (unaff_x20 < param_4) {
LAB_10ae47744:
        pppppppuVar14 = (undefined8 *******)0x45;
        pppppppuVar18 = (undefined8 *******)0x98;
LAB_10ae4779c:
        pppppppuVar17 = (undefined8 *******)&UNK_10f6cce82;
        pppppppuVar11 = (undefined8 *******)0x0;
        func_0x000107c2b29c(0x13);
        unaff_x22 = param_9;
        goto LAB_10ae477c8;
      }
      pppppppuVar26 = (undefined8 *******)((long)param_1 + -1);
      puVar8 = (undefined *)((long)pppppppuStack_1f0 + (long)pppppppuVar26);
      unaff_x25 = pppppppuStack_1f0;
      if (CARRY8((ulong)pppppppuStack_1f0,(ulong)pppppppuVar26)) goto LAB_10ae47744;
      pppppppuStack_200 = param_9;
      uVar22 = 0;
      if (param_1 != (undefined8 *******)0x0) {
        uVar22 = (ulong)unaff_x20 / (ulong)param_1;
      }
      param_9 = (undefined8 *******)(uVar22 * (long)param_1);
      uVar22 = 0;
      if (param_1 != (undefined8 *******)0x0) {
        uVar22 = (ulong)puVar8 / (ulong)param_1;
      }
      unaff_x28 = (undefined8 *******)(uVar22 * (long)param_1);
      pppppppuVar1 = (undefined8 *******)((long)unaff_x28 + (long)param_9);
      pppppppuStack_208 = param_8;
      if (CARRY8((ulong)unaff_x28,(ulong)param_9)) {
        pppppppuVar14 = (undefined8 *******)0x45;
        pppppppuVar18 = (undefined8 *******)0x9f;
        unaff_x25 = pppppppuVar34;
        pppppppuStack_200 = pppppppuVar32;
        goto LAB_10ae4779c;
      }
      if ((undefined8 *******)0xfffffffffffffff7 < pppppppuVar1) {
LAB_10ae47880:
        pppppppuVar14 = (undefined8 *******)0x41;
        pppppppuVar18 = (undefined8 *******)0xa5;
        unaff_x25 = pppppppuVar34;
        goto LAB_10ae4779c;
      }
      pppppppuVar32 = pppppppuVar1 + 1;
      pppppppuStack_218 = pppppppuVar26;
      pppppppuStack_210 = pppppppuVar1;
      _malloc();
      unaff_x22 = pppppppuStack_1f8;
      unaff_x25 = pppppppuStack_210;
      if (pppppppuVar32 == (undefined8 *******)0x0) {
        if (pppppppuStack_210 != (undefined8 *******)0x0) goto LAB_10ae47880;
        unaff_x24 = (undefined8 *******)0x0;
      }
      else {
        unaff_x24 = pppppppuVar32 + 1;
        *pppppppuVar32 = pppppppuStack_210;
      }
      if (param_9 != (undefined8 *******)0x0) {
        pppppppuVar32 = (undefined8 *******)0x0;
        lVar25 = 0;
        do {
          *(undefined *)((long)unaff_x24 + (long)pppppppuVar32) =
               *(undefined *)((long)param_3 + lVar25);
          lVar2 = 0;
          if ((undefined8 *******)(lVar25 + 1) != param_4) {
            lVar2 = lVar25 + 1;
          }
          pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + 1);
          lVar25 = lVar2;
        } while (pppppppuVar32 < param_9);
      }
      if (puVar8 != puVar8 + -(long)unaff_x28) {
        pppppppuVar32 = (undefined8 *******)0x0;
        lVar25 = 0;
        do {
          *(undefined1 *)((long)((long)unaff_x24 + (long)param_9) + (long)pppppppuVar32) =
               *(undefined1 *)((long)ppppppuStack_1e8 + lVar25);
          lVar2 = 0;
          if ((undefined8 *******)(lVar25 + 1) != pppppppuVar34) {
            lVar2 = lVar25 + 1;
          }
          pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + 1);
          lVar25 = lVar2;
        } while (pppppppuVar32 < unaff_x28);
      }
      if (pppppppuStack_1f8 != (undefined8 *******)0x0) {
        uVar24 = uVar20;
        if (uVar20 < 3) {
          uVar24 = 2;
        }
        iVar3 = (int)&lStack_1e0;
        pppppppuVar14 = (undefined8 *******)0x0;
        pppppppuVar11 = pppppppuStack_200;
        func_0x000107c2b418();
        unaff_x20 = pppppppuStack_208;
        if (iVar3 != 0) {
          unaff_x28 = (undefined8 *******)(ulong)(uVar24 - 1);
          param_3 = (undefined8 *******)(auStack_1b4 + 4);
          do {
            (**(code **)(lStack_1e0 + 0x18))(&lStack_1e0,auStack_f0,param_1);
            (**(code **)(lStack_1e0 + 0x18))(&lStack_1e0,unaff_x24,unaff_x25);
            iVar3 = (int)&lStack_1e0;
            pppppppuVar11 = &pppppppuStack_130;
            pppppppuVar14 = (undefined8 *******)auStack_1b4;
            func_0x000107c2b41c();
            if (iVar3 == 0) break;
            pppppppuVar32 = unaff_x28;
            if (uVar20 != 1) {
              do {
                iVar3 = (int)&lStack_1e0;
                pppppppuVar14 = (undefined8 *******)0x0;
                pppppppuVar11 = pppppppuStack_200;
                func_0x000107c2b418();
                if (iVar3 == 0) goto LAB_10ae477cc;
                (**(code **)(lStack_1e0 + 0x18))(&lStack_1e0,&pppppppuStack_130,auStack_1b4._0_4_);
                iVar3 = (int)&lStack_1e0;
                pppppppuVar11 = &pppppppuStack_130;
                pppppppuVar14 = (undefined8 *******)auStack_1b4;
                func_0x000107c2b41c();
                if (iVar3 == 0) goto LAB_10ae477cc;
                uVar24 = (int)pppppppuVar32 - 1;
                pppppppuVar32 = (undefined8 *******)(ulong)uVar24;
              } while (uVar24 != 0);
            }
            pppppppuVar32 = (undefined8 *******)(ulong)(uint)auStack_1b4._0_4_;
            param_4 = unaff_x22;
            if (pppppppuVar32 <= unaff_x22) {
              param_4 = pppppppuVar32;
            }
            if (auStack_1b4._0_4_ != 0) {
              pppppppuVar11 = &pppppppuStack_130;
              pppppppuVar14 = param_4;
              _memcpy(unaff_x20);
            }
            unaff_x22 = (undefined8 *******)((long)unaff_x22 - (long)param_4);
            pppppppuVar34 = unaff_x25;
            if (unaff_x22 == (undefined8 *******)0x0) goto LAB_10ae47ac8;
            pppppppuVar11 = (undefined8 *******)0x0;
            unaff_x20 = (undefined8 *******)((long)unaff_x20 + (long)param_4);
            lVar25 = 0;
            do {
              *(undefined1 *)((long)param_3 + (long)pppppppuVar11) =
                   *(undefined1 *)((long)&pppppppuStack_130 + lVar25);
              lVar2 = 0;
              if ((undefined8 *******)(lVar25 + 1) != pppppppuVar32) {
                lVar2 = lVar25 + 1;
              }
              pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 + 1);
              lVar25 = lVar2;
            } while (param_1 != pppppppuVar11);
            if (unaff_x25 != (undefined8 *******)0x0) {
              pppppppuVar11 = (undefined8 *******)0x0;
              pppppppuVar14 = unaff_x24;
              do {
                uVar24 = 1;
                pppppppuVar32 = pppppppuStack_218;
                do {
                  uVar24 = uVar24 + *(byte *)((long)pppppppuVar14 + (long)pppppppuVar32) +
                           (uint)*(byte *)((long)param_3 + (long)pppppppuVar32);
                  *(char *)((long)pppppppuVar14 + (long)pppppppuVar32) = (char)uVar24;
                  uVar24 = uVar24 >> 8;
                  pppppppuVar32 = (undefined8 *******)((long)pppppppuVar32 + -1);
                } while (pppppppuVar32 < param_1);
                pppppppuVar11 = (undefined8 *******)((long)pppppppuVar11 + (long)param_1);
                pppppppuVar14 = (undefined8 *******)((long)pppppppuVar14 + (long)param_1);
              } while (pppppppuVar11 < unaff_x25);
            }
            iVar3 = (int)&lStack_1e0;
            pppppppuVar14 = (undefined8 *******)0x0;
            pppppppuVar11 = pppppppuStack_200;
            func_0x000107c2b418();
          } while (iVar3 != 0);
        }
        goto LAB_10ae477cc;
      }
LAB_10ae47ac8:
      pppppppuVar32 = (undefined8 *******)0x1;
    }
    else {
      puVar4 = auStack_1b4 + 4;
      func_0x000107c2b200(puVar4,(long)param_2 << 1);
      pppppppuVar11 = param_1;
      pppppppuVar32 = param_2;
      if ((int)puVar4 == 0) {
        pppppppuVar14 = (undefined8 *******)0x41;
        pppppppuVar18 = (undefined8 *******)0x4f;
        param_9 = param_2;
        goto LAB_10ae4779c;
      }
      do {
        pppppppuStack_128 = pppppppuVar32;
        pppppppuStack_130 = pppppppuVar11;
        if (pppppppuStack_128 == (undefined8 *******)0x0) {
          iVar3 = (int)auStack_1b4 + 4;
          pppppppuVar11 = (undefined8 *******)0x0;
          func_0x000107c2b228();
          if (iVar3 == 0) goto LAB_10ae477c0;
          iVar3 = (int)auStack_1b4 + 4;
          pppppppuVar11 = &ppppppuStack_1e8;
          pppppppuVar14 = &pppppppuStack_1f0;
          func_0x000107c2b208();
          if (iVar3 == 0) goto LAB_10ae477c0;
          goto LAB_10ae47700;
        }
        pppppppuVar11 = &pppppppuStack_130;
        func_0x000107c2b23c(pppppppuVar11,auStack_1b4);
        if ((int)pppppppuVar11 == 0) break;
        puVar4 = auStack_1b4 + 4;
        func_0x00010ae206c8(puVar4,auStack_1b4._0_4_);
        pppppppuVar11 = pppppppuStack_130;
        pppppppuVar32 = pppppppuStack_128;
      } while ((int)puVar4 != 0);
      pppppppuVar17 = (undefined8 *******)&UNK_10f6cce82;
      pppppppuVar11 = (undefined8 *******)0x0;
      pppppppuVar14 = (undefined8 *******)0x83;
      pppppppuVar18 = (undefined8 *******)0x5b;
      func_0x000107c2b29c(0x13);
LAB_10ae477c0:
      func_0x000107c2b204(auStack_1b4 + 4);
      unaff_x22 = param_2;
LAB_10ae477c8:
      unaff_x24 = (undefined8 *******)0x0;
LAB_10ae477cc:
      pppppppuVar32 = (undefined8 *******)0x0;
      pppppppuVar34 = unaff_x25;
    }
    func_0x000107c2b534(unaff_x24);
    func_0x000107c2b534(ppppppuStack_1e8);
    plVar12 = plStack_1d8;
    func_0x000107c2b534();
    param_7 = pppppppuVar21;
    param_8 = pppppppuVar23;
    unaff_x21 = param_6;
    unaff_x23 = param_1;
    unaff_x25 = pppppppuVar34;
    unaff_x26 = param_4;
    unaff_x27 = param_3;
    if (puStack_1c8 != (undefined8 *)0x0) {
      plVar12 = plStack_1d0;
      (*(code *)*puStack_1c8)();
      param_7 = pppppppuVar21;
      param_8 = pppppppuVar23;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return pppppppuVar32;
  }
  ___stack_chk_fail();
  uStack_228 = 0x10ae47ad4;
  lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = plVar12;
  pppppppuStack_280 = unaff_x28;
  pppppppuStack_278 = unaff_x27;
  pppppppuStack_270 = unaff_x26;
  pppppppuStack_268 = unaff_x25;
  pppppppuStack_260 = unaff_x24;
  pppppppuStack_258 = unaff_x23;
  pppppppuStack_250 = unaff_x22;
  uStack_248 = unaff_x21;
  pppppppuStack_240 = unaff_x20;
  pppppppuStack_238 = pppppppuVar32;
  puStack_230 = &stack0xfffffffffffffff0;
  (*(code *)plVar12[2])();
  plVar6 = plVar5;
  (*(code *)plVar12[3])();
  uVar22 = (ulong)*(uint *)(plVar5 + 1);
  pppppppuVar32 = pppppppuVar17;
  pppppppuVar21 = pppppppuVar14;
  plStack_2f0 = plVar6;
  FUN_10ae47638(pppppppuVar17,pppppppuVar18,uVar19,param_7,1,pppppppuVar14,uVar22,&ppppppuStack_2d0)
  ;
  if ((int)pppppppuVar32 != 0) {
    uVar22 = (ulong)*(uint *)((long)plVar5 + 0xc);
    pppppppuVar32 = pppppppuVar17;
    pppppppuVar21 = pppppppuVar14;
    plStack_2f0 = plVar6;
    FUN_10ae47638(pppppppuVar17,pppppppuVar18,uVar19,param_7,2,pppppppuVar14,uVar22,
                  &ppppppuStack_2e0);
    if ((int)pppppppuVar32 != 0) {
      param_7 = &ppppppuStack_2d0;
      pppppppuVar14 = &ppppppuStack_2e0;
      ppppppuVar33 = &ppppppuStack_2d0;
      ppppppuVar13 = &ppppppuStack_2e0;
      uVar15 = 0;
      pppppppuVar32 = pppppppuVar11;
      plVar12 = plVar5;
      pppppppuVar21 = param_8;
      FUN_10ae340b8();
      uStack_2c8 = 0;
      ppppppuStack_2d0 = (undefined8 ******)0x0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_298 = 0;
      uStack_2a0 = 0;
      ppppppuStack_2e0 = (undefined8 ******)0x0;
      uStack_2d8 = 0;
      goto LAB_10ae47bec;
    }
  }
  ppppppuVar33 = (undefined8 ******)&UNK_10f6cce82;
  plVar12 = (long *)0x0;
  uVar15 = 0x6e;
  ppppppuVar13 = (undefined8 ******)0xf7;
  func_0x000107c2b29c(0x13,0,0x6e,&UNK_10f6cce82,0xf7);
  pppppppuVar32 = (undefined8 *******)0x0;
LAB_10ae47bec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
    return pppppppuVar32;
  }
  ___stack_chk_fail();
  pcStack_2f8 = FUN_10ae47c28;
  lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3d8 = 0;
  uStack_3e0 = 0;
  uVar7 = uVar15;
  pppppppuStack_340 = pppppppuVar17;
  pppppppuStack_338 = pppppppuVar18;
  uStack_330 = uVar19;
  pppppppuStack_328 = pppppppuVar14;
  pppppppuStack_320 = param_7;
  plStack_318 = plVar5;
  pppppppuStack_310 = pppppppuVar11;
  pppppppuStack_308 = param_8;
  ppuStack_300 = &puStack_230;
  func_0x000107c34f50(uVar15,&pbStack_3f0,6,1);
  if ((int)uVar7 == 0) {
    piVar16 = (int *)0x68;
    uVar19 = 0x172;
  }
  else {
    lVar25 = 0;
    pbVar27 = &UNK_110c863ac;
    do {
      puVar8 = &UNK_110c863a8 + lVar25 * 0x28;
      if (uStack_3e8 == (byte)(&UNK_110c863b6)[lVar25 * 0x28]) {
        if ((&UNK_110c863b6)[lVar25 * 0x28] != 0) {
          bVar28 = 0;
          pbVar29 = pbStack_3f0;
          pbVar30 = pbVar27;
          uVar31 = uStack_3e8;
          do {
            bVar28 = *pbVar30 ^ *pbVar29 | bVar28;
            uVar31 = uVar31 - 1;
            pbVar29 = pbVar29 + 1;
            pbVar30 = pbVar30 + 1;
          } while (uVar31 != 0);
          if (bVar28 != 0) goto LAB_10ae47d00;
        }
        (*(code *)(&PTR_FUN_110c863c8)[lVar25 * 5])
                  (puVar8,&uStack_3e0,ppppppuVar33,ppppppuVar13,uVar15);
        if ((int)puVar8 == 0) {
          piVar16 = (int *)0x6d;
          uVar19 = 0x183;
          goto LAB_10ae47de8;
        }
        if (uVar22 < 0xfffffffffffffff8) {
          puVar9 = (ulong *)(uVar22 + 8);
          _malloc();
          if (puVar9 != (ulong *)0x0) {
            ppppppuVar33 = (undefined8 ******)(puVar9 + 1);
            *puVar9 = uVar22;
            if (uVar22 >> 0x1f == 0) {
              puVar10 = &uStack_3e0;
              piVar16 = &iStack_3f4;
              ppppppuVar13 = ppppppuVar33;
              FUN_10ae34628(puVar10,ppppppuVar33,piVar16,pppppppuVar21,uVar22);
              if ((int)puVar10 != 0) {
                puVar10 = &uStack_3e0;
                ppppppuVar13 = (undefined8 ******)((long)ppppppuVar33 + (long)iStack_3f4);
                piVar16 = &iStack_3f8;
                FUN_10ae347b8(puVar10,ppppppuVar13,piVar16);
                if ((int)puVar10 != 0) {
                  *pppppppuVar32 = ppppppuVar33;
                  *plVar12 = (long)iStack_3f8 + (long)iStack_3f4;
                  pppppppuVar17 = (undefined8 *******)0x1;
                  goto LAB_10ae47df0;
                }
              }
            }
            else {
              ppppppuVar13 = (undefined8 ******)0x0;
              piVar16 = (int *)0x45;
              func_0x000107c2b29c(0x13,0,0x45,&UNK_10f6cce82,0x18e);
            }
            pppppppuVar17 = (undefined8 *******)0x0;
            goto LAB_10ae47df4;
          }
        }
        piVar16 = (int *)0x41;
        uVar19 = 0x189;
        goto LAB_10ae47de8;
      }
LAB_10ae47d00:
      lVar25 = lVar25 + 1;
      pbVar27 = pbVar27 + 0x28;
    } while (lVar25 != 4);
    piVar16 = (int *)0x77;
    uVar19 = 0x17e;
  }
LAB_10ae47de8:
  ppppppuVar13 = (undefined8 ******)0x0;
  func_0x000107c2b29c(0x13,0,piVar16,&UNK_10f6cce82,uVar19);
  pppppppuVar17 = (undefined8 *******)0x0;
LAB_10ae47df0:
  ppppppuVar33 = (undefined8 ******)0x0;
LAB_10ae47df4:
  func_0x000107c2b534(ppppppuVar33);
  iVar3 = (int)&uStack_3e0;
  FUN_10ae33ff8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
    return pppppppuVar17;
  }
  ___stack_chk_fail();
  pppppppuVar11 = &ppppppuStack_470;
  pcStack_408 = FUN_10ae47e94;
  pppppppuStack_420 = pppppppuVar32;
  pppppppuStack_418 = pppppppuVar17;
  pppuStack_410 = &ppuStack_300;
  func_0x000107c34f50();
  if (iVar3 != 0) {
    puVar4 = auStack_430;
    func_0x000107c34f50(puVar4,auStack_440,0x20000010,1);
    if ((int)puVar4 != 0) {
      puVar4 = auStack_430;
      func_0x000107c34f50(puVar4,&uStack_450,4,1);
      if (((int)puVar4 != 0) && (lStack_428 == 0)) {
        ppppppuVar33 = &ppppppuStack_458;
        FUN_10ae47c28(ppppppuVar33,&uStack_460,auStack_440,ppppppuVar13,piVar16,uStack_450,
                      uStack_448);
        if ((int)ppppppuVar33 == 0) {
          return (undefined8 *******)0x0;
        }
        ppppppuStack_470 = ppppppuStack_458;
        uStack_468 = uStack_460;
        FUN_10ae2a7f0(&ppppppuStack_470);
        func_0x000107c2b534(ppppppuStack_458);
        return pppppppuVar11;
      }
    }
  }
  func_0x000107c2b29c(0x13,0,0x68,&UNK_10f6cce82,0x1ab);
  return (undefined8 *******)0x0;
}



/* Entry: 10ae47c28; end: 10ae47e93;  */

undefined1 *
FUN_10ae47c28(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  byte *pbVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong *puVar15;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [8];
  long lStack_138;
  undefined8 *puStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  int iStack_108;
  int iStack_104;
  byte *pbStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uVar7 = param_3;
  func_0x000107c34f50(param_3,&pbStack_100,6,1);
  if ((int)uVar7 == 0) {
    piVar6 = (int *)0x68;
    uVar7 = 0x172;
  }
  else {
    lVar8 = 0;
    pbVar9 = &UNK_110c863ac;
    do {
      puVar2 = &UNK_110c863a8 + lVar8 * 0x28;
      if (uStack_f8 == (byte)(&UNK_110c863b6)[lVar8 * 0x28]) {
        if ((&UNK_110c863b6)[lVar8 * 0x28] != 0) {
          bVar10 = 0;
          pbVar11 = pbStack_100;
          pbVar12 = pbVar9;
          uVar13 = uStack_f8;
          do {
            bVar10 = *pbVar12 ^ *pbVar11 | bVar10;
            uVar13 = uVar13 - 1;
            pbVar11 = pbVar11 + 1;
            pbVar12 = pbVar12 + 1;
          } while (uVar13 != 0);
          if (bVar10 != 0) goto LAB_10ae47d00;
        }
        (*(code *)(&PTR_FUN_110c863c8)[lVar8 * 5])(puVar2,&uStack_f0,param_4,param_5,param_3);
        if ((int)puVar2 == 0) {
          piVar6 = (int *)0x6d;
          uVar7 = 0x183;
          goto LAB_10ae47de8;
        }
        if (param_7 < 0xfffffffffffffff8) {
          puVar5 = (ulong *)(param_7 + 8);
          _malloc();
          if (puVar5 != (ulong *)0x0) {
            puVar15 = puVar5 + 1;
            *puVar5 = param_7;
            if (param_7 >> 0x1f == 0) {
              puVar3 = &uStack_f0;
              piVar6 = &iStack_104;
              puVar5 = puVar15;
              FUN_10ae34628(puVar3,puVar15,piVar6,param_6,param_7);
              if ((int)puVar3 != 0) {
                puVar3 = &uStack_f0;
                puVar5 = (ulong *)((long)puVar15 + (long)iStack_104);
                piVar6 = &iStack_108;
                FUN_10ae347b8(puVar3,puVar5,piVar6);
                if ((int)puVar3 != 0) {
                  *param_1 = puVar15;
                  *param_2 = (long)iStack_108 + (long)iStack_104;
                  puVar14 = (undefined1 *)0x1;
                  goto LAB_10ae47df0;
                }
              }
            }
            else {
              puVar5 = (ulong *)0x0;
              piVar6 = (int *)0x45;
              func_0x000107c2b29c(0x13,0,0x45,&UNK_10f6cce82,0x18e);
            }
            puVar14 = (undefined1 *)0x0;
            goto LAB_10ae47df4;
          }
        }
        piVar6 = (int *)0x41;
        uVar7 = 0x189;
        goto LAB_10ae47de8;
      }
LAB_10ae47d00:
      lVar8 = lVar8 + 1;
      pbVar9 = pbVar9 + 0x28;
    } while (lVar8 != 4);
    piVar6 = (int *)0x77;
    uVar7 = 0x17e;
  }
LAB_10ae47de8:
  puVar5 = (ulong *)0x0;
  func_0x000107c2b29c(0x13,0,piVar6,&UNK_10f6cce82,uVar7);
  puVar14 = (undefined1 *)0x0;
LAB_10ae47df0:
  puVar15 = (ulong *)0x0;
LAB_10ae47df4:
  func_0x000107c2b534(puVar15);
  iVar1 = (int)&uStack_f0;
  FUN_10ae33ff8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar14;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_180;
  pcStack_118 = FUN_10ae47e94;
  puStack_130 = param_1;
  puStack_128 = puVar14;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x000107c34f50();
  if (iVar1 != 0) {
    puVar14 = auStack_140;
    func_0x000107c34f50(puVar14,auStack_150,0x20000010,1);
    if ((int)puVar14 != 0) {
      puVar14 = auStack_140;
      func_0x000107c34f50(puVar14,&uStack_160,4,1);
      if (((int)puVar14 != 0) && (lStack_138 == 0)) {
        puVar4 = &uStack_168;
        FUN_10ae47c28(puVar4,&uStack_170,auStack_150,puVar5,piVar6,uStack_160,uStack_158);
        if ((int)puVar4 == 0) {
          return (undefined1 *)0x0;
        }
        uStack_180 = uStack_168;
        uStack_178 = uStack_170;
        FUN_10ae2a7f0(&uStack_180);
        func_0x000107c2b534(uStack_168);
        return (undefined1 *)puVar3;
      }
    }
  }
  func_0x000107c2b29c(0x13,0,0x68,&UNK_10f6cce82,0x1ab);
  return (undefined1 *)0x0;
}



/* Entry: 10ae47e94; end: 10ae47f73;  */

undefined1 * FUN_10ae47e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  puVar3 = &uStack_70;
  func_0x000107c34f50(param_1,auStack_30,0x20000010,1);
  if ((int)param_1 != 0) {
    puVar1 = auStack_30;
    func_0x000107c34f50(puVar1,auStack_40,0x20000010,1);
    if ((int)puVar1 != 0) {
      puVar1 = auStack_30;
      func_0x000107c34f50(puVar1,&uStack_50,4,1);
      if (((int)puVar1 != 0) && (lStack_28 == 0)) {
        puVar2 = &uStack_58;
        FUN_10ae47c28(puVar2,&uStack_60,auStack_40,param_2,param_3,uStack_50,uStack_48);
        if ((int)puVar2 == 0) {
          return (undefined1 *)0x0;
        }
        uStack_70 = uStack_58;
        uStack_68 = uStack_60;
        FUN_10ae2a7f0(&uStack_70);
        func_0x000107c2b534(uStack_58);
        return (undefined1 *)puVar3;
      }
    }
  }
  func_0x000107c2b29c(0x13,0,0x68,&UNK_10f6cce82,0x1ab);
  return (undefined1 *)0x0;
}



/* Entry: 10ae47f74; end: 10ae48083;  */

void FUN_10ae47f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c34f50(param_5,auStack_50,0x20000010,1);
  if ((int)lVar1 != 0) {
    puVar2 = auStack_50;
    func_0x000107c34f50(puVar2,&uStack_60,4,1);
    if ((int)puVar2 != 0) {
      puVar2 = auStack_50;
      FUN_10ae200fc(puVar2,&lStack_68);
      if ((((int)puVar2 != 0) && (lStack_48 == 0)) && (*(long *)(param_5 + 8) == 0)) {
        if (0xfffffffffa0a1eff < lStack_68 - 0x5f5e101U) {
          func_0x00010ae47ad4(param_1,param_2,lStack_68,param_3,param_4,uStack_60,uStack_58,0);
          return;
        }
        uVar3 = 0x81;
        uVar4 = 0x110;
        goto LAB_10ae4800c;
      }
    }
  }
  uVar3 = 0x68;
  uVar4 = 0x10b;
LAB_10ae4800c:
  func_0x000107c2b29c(0x13,0,uVar3,&UNK_10f6cce82,uVar4);
  return;
}



/* Entry: 10ae48084; end: 10ae4821f;  */

undefined8 * FUN_10ae48084(ulong param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  ulong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x000107c2b1b8(param_1,&uStack_28,&UNK_110c86508);
  if ((int)param_1 < 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_30 = param_1 & 0xffffffff;
    uStack_38 = uStack_28;
    puVar1 = &uStack_38;
    FUN_10ae2a7f0();
    if ((puVar1 == (undefined8 *)0x0) || (uStack_30 != 0)) {
      func_0x000107c2b29c(0x13,0,0x68,&UNK_10f6ccf0a,0x9f);
      func_0x000107c2b2c0(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    func_0x000107c2b534(uStack_28);
  }
  return puVar1;
}



/* Entry: 10ae48220; end: 10ae482eb;  */

undefined8 * FUN_10ae48220(ulong param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  if ((param_2 == 0) || (param_3 != -1)) {
    lVar2 = (long)param_3;
  }
  else {
    lVar2 = param_2;
    _strlen(param_2);
  }
  uStack_38 = 0;
  func_0x000107c2b1b8(param_1,&uStack_38,&UNK_110c87548);
  if ((int)param_1 < 0) {
    puVar3 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uStack_40 = param_1 & 0xffffffff;
    uStack_48 = uStack_38;
    puVar1 = &uStack_48;
    FUN_10ae47e94(puVar1,param_2,lVar2);
    if ((puVar1 == (undefined8 *)0x0) || (uStack_40 != 0)) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar3 = puVar1;
      func_0x00010ae4811c(puVar1);
    }
  }
  func_0x000107c2b534(uStack_38);
  func_0x000107c2b2c0(puVar1);
  return puVar3;
}



/* Entry: 10ae482ec; end: 10ae4832f;  */

undefined8 FUN_10ae482ec(int param_1,long *param_2)

{
  int *piVar1;
  
  if (((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) &&
     (*piVar1 != 0)) {
    _bzero(*(undefined8 *)(piVar1 + 2));
  }
  return 1;
}



/* Entry: 10ae48330; end: 10ae483af;  */

void FUN_10ae48330(long param_1,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar1 = (uint *)(param_1 + ((ulong)(uint)-(int)param_1 & 0x3f));
  uVar7 = *(ulong *)((long)param_2 + 4);
  uVar5 = *(uint *)((long)param_2 + 0xc);
  uVar6 = param_2[1];
  uVar2 = (uint)(*param_2 >> 0x1a) & 0x3ffff03;
  *puVar1 = (uint)*param_2 & 0x3ffffff;
  puVar1[1] = uVar2;
  uVar3 = (uint)(uVar7 >> 0x14) & 0x3ffc0ff;
  uVar4 = (uint)(uVar6 >> 0xe) & 0x3f03fff;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  uVar5 = uVar5 >> 8 & 0xfffff;
  puVar1[4] = uVar5;
  puVar1[5] = uVar2 * 5;
  puVar1[6] = uVar3 * 5;
  puVar1[7] = uVar4 * 5;
  puVar1[8] = uVar5 * 5;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  uVar7 = param_2[2];
  *(ulong *)(puVar1 + 0x16) = param_2[3];
  *(ulong *)(puVar1 + 0x14) = uVar7;
  return;
}



/* Entry: 10ae483b0; end: 10ae486bb;  */

void FUN_10ae483b0(long param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  param_1 = param_1 + ((ulong)(uint)-(int)param_1 & 0x3f);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    uVar1 = 0x10U - lVar2;
    if (param_3 <= 0x10U - lVar2) {
      uVar1 = param_3;
    }
    if (uVar1 != 0) {
      lVar2 = param_1 + 0x38;
      puVar3 = param_2;
      uVar4 = uVar1;
      do {
        *(undefined1 *)(lVar2 + *(long *)(param_1 + 0x48)) = *puVar3;
        lVar2 = lVar2 + 1;
        uVar4 = uVar4 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 != 0);
      lVar2 = *(long *)(param_1 + 0x48);
    }
    *(ulong *)(param_1 + 0x48) = lVar2 + uVar1;
    param_3 = param_3 - uVar1;
    param_2 = param_2 + uVar1;
    if (lVar2 + uVar1 == 0x10) {
      func_0x00010ae4849c(param_1,param_1 + 0x38,0x10);
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  if (0xf < param_3) {
    func_0x00010ae4849c(param_1,param_2,param_3 & 0xfffffffffffffff0);
    param_2 = param_2 + (param_3 & 0xfffffffffffffff0);
    param_3 = param_3 & 0xf;
  }
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      *(undefined1 *)(param_1 + 0x38 + uVar1) = param_2[uVar1];
      uVar1 = uVar1 + 1;
    } while (param_3 != uVar1);
    *(ulong *)(param_1 + 0x48) = param_3;
  }
  return;
}



/* Entry: 10ae486bc; end: 10ae487eb;  */

void FUN_10ae486bc(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  
  param_1 = param_1 + ((ulong)(uint)-(int)param_1 & 0x3f);
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x00010ae4849c(param_1,param_1 + 0x38);
  }
  uVar2 = *(int *)(param_1 + 0x28) + (*(uint *)(param_1 + 0x24) >> 0x1a);
  uVar10 = uVar2 & 0x3ffffff;
  uVar2 = *(int *)(param_1 + 0x2c) + (uVar2 >> 0x1a);
  uVar11 = uVar2 & 0x3ffffff;
  uVar2 = *(int *)(param_1 + 0x30) + (uVar2 >> 0x1a);
  uVar12 = uVar2 & 0x3ffffff;
  uVar3 = *(int *)(param_1 + 0x34) + (uVar2 >> 0x1a);
  uVar4 = (uVar3 >> 0x1a) * 4 + (uVar3 >> 0x1a) + (*(uint *)(param_1 + 0x24) & 0x3ffffff);
  uVar1 = uVar4 + 5;
  uVar5 = uVar10 + (uVar1 >> 0x1a);
  uVar6 = uVar11 + (uVar5 >> 0x1a);
  uVar7 = uVar12 + (uVar6 >> 0x1a);
  uVar8 = (uVar3 | 0xfc000000) + (uVar7 >> 0x1a);
  uVar2 = (int)uVar8 >> 0x1f;
  uVar13 = 0xffffffff - uVar2 & 0x3ffffff;
  uVar15 = uVar13 & uVar1 | uVar4 & uVar2;
  uVar1 = uVar13 & uVar5 | uVar10 & uVar2;
  *(uint *)(param_1 + 0x24) = uVar15;
  *(uint *)(param_1 + 0x28) = uVar1;
  uVar4 = uVar13 & uVar6 | uVar11 & uVar2;
  uVar5 = uVar13 & uVar7 | uVar12 & uVar2;
  *(uint *)(param_1 + 0x2c) = uVar4;
  *(uint *)(param_1 + 0x30) = uVar5;
  uVar3 = 0xffffffff - uVar2 & uVar8 | uVar3 & uVar2 & 0x3ffffff;
  *(uint *)(param_1 + 0x34) = uVar3;
  uVar15 = uVar15 | uVar1 << 0x1a;
  uVar2 = *(uint *)(param_1 + 0x58);
  iVar14 = *(int *)(param_1 + 0x5c);
  uVar16 = (ulong)(uVar1 >> 6 | uVar4 << 0x14) + (ulong)*(uint *)(param_1 + 0x54) +
           (ulong)CARRY4(uVar15,*(uint *)(param_1 + 0x50));
  *param_2 = uVar15 + *(uint *)(param_1 + 0x50);
  param_2[1] = (int)uVar16;
  lVar9 = (ulong)(uVar4 >> 0xc | uVar5 << 0xe) + (ulong)uVar2 + (uVar16 >> 0x20);
  param_2[2] = (int)lVar9;
  param_2[3] = (uVar5 >> 0x12 | uVar3 << 8) + iVar14 + (int)((ulong)lVar9 >> 0x20);
  return;
}



/* Entry: 10ae487ec; end: 10ae488b7;  */

void FUN_10ae487ec(uint *param_1,long param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = uVar1 + 1 & 0xff;
    uVar3 = param_1[(ulong)uVar1 + 2];
    uVar2 = uVar3 + uVar2 & 0xff;
    uVar4 = param_1[(ulong)uVar2 + 2];
    param_1[(ulong)uVar1 + 2] = uVar4;
    param_1[(ulong)uVar2 + 2] = uVar3;
    *param_4 = *param_3 ^ (byte)param_1[(ulong)(uVar4 + uVar3 & 0xff) + 2];
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10ae488b8; end: 10ae489ef;  */

bool FUN_10ae488b8(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c2b318();
  *param_2 = lVar2;
  if (lVar2 == 0) {
    return false;
  }
  func_0x000100201b74(param_1,&pcStack_30,2,1);
  if (((int)param_1 == 0) || (lStack_28 == 0)) {
code_r0x000100202628:
    uVar3 = 0x75;
    uVar4 = 0x1a;
  }
  else {
    cVar1 = *pcStack_30;
    if (lStack_28 != 1) {
      if ((-1 < pcStack_30[1] && cVar1 == '\0') || (pcStack_30[1] < '\0' && cVar1 == -1))
      goto code_r0x000100202628;
    }
    if (-1 < cVar1) {
      func_0x000100202674(pcStack_30,lStack_28,lVar2);
      return pcStack_30 != (char *)0x0;
    }
    uVar3 = 0x6d;
    uVar4 = 0x1f;
  }
  func_0x0001004d2c58(3,0,uVar3,&UNK_10f6c53c2,uVar4);
  return false;
}



/* Entry: 10ae489f0; end: 10ae48a23;  */

undefined8 FUN_10ae489f0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [32];
  int iVar2;
  
  if (param_2 == 0) {
    func_0x000107c2b29c(4,0,0x90,&UNK_10f6ccfa3,0x54);
    return 0;
  }
  iVar1 = (int)auStack_40;
  iVar2 = (int)auStack_40;
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar4 = param_1;
    func_0x000107c2b214(param_1,auStack_40,2);
    if (((int)uVar4 != 0) &&
       ((uVar3 = param_2, func_0x000107c2b32c(), (uVar3 & 7) != 0 ||
        (func_0x000107c2b218(auStack_40,0), iVar1 != 0)))) {
      uVar3 = param_2;
      func_0x000107c2b32c(param_2);
      func_0x00010ae1ee20(auStack_40,(int)uVar3 + 7U >> 3,param_2);
      if ((iVar2 != 0) && (func_0x000107c2b20c(), (int)param_1 != 0)) {
        return 1;
      }
    }
    uVar4 = 0x76;
    uVar5 = 0x34;
  }
  else {
    uVar4 = 0x6d;
    uVar5 = 0x29;
  }
  func_0x000107c2b29c(3,0,uVar4,&UNK_10f6c53c2,uVar5);
  return 0;
}



/* Entry: 10ae48a24; end: 10ae48ccf;  */

long FUN_10ae48a24(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_38;
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lVar1 = 0;
  func_0x000107c2b4cc();
  if (lVar1 == 0) {
    return 0;
  }
  func_0x000107c34f50(param_1,auStack_30,0x20000010,1);
  if ((int)param_1 == 0) {
LAB_10ae48a98:
    uVar5 = 100;
    uVar6 = 0xa6;
  }
  else {
    puVar2 = auStack_30;
    FUN_10ae200fc(puVar2,&lStack_38);
    if ((int)puVar2 == 0) goto LAB_10ae48a98;
    if (lStack_38 == 0) {
      func_0x000107c2b318();
      *(undefined1 **)(lVar1 + 8) = puVar2;
      if (puVar2 == (undefined1 *)0x0) goto LAB_10ae48ab4;
      puVar3 = auStack_30;
      func_0x000107c2b1e8(puVar3,puVar2);
      if ((int)puVar3 == 0) goto LAB_10ae48ab4;
      func_0x000107c2b318();
      *(undefined1 **)(lVar1 + 0x10) = puVar3;
      if (puVar3 == (undefined1 *)0x0) goto LAB_10ae48ab4;
      puVar2 = auStack_30;
      func_0x000107c2b1e8(puVar2,puVar3);
      if ((int)puVar2 == 0) goto LAB_10ae48ab4;
      func_0x000107c2b318();
      *(undefined1 **)(lVar1 + 0x18) = puVar2;
      if (puVar2 == (undefined1 *)0x0) goto LAB_10ae48ab4;
      puVar3 = auStack_30;
      func_0x000107c2b1e8(puVar3,puVar2);
      if ((int)puVar3 == 0) goto LAB_10ae48ab4;
      func_0x000107c2b318();
      *(undefined1 **)(lVar1 + 0x20) = puVar3;
      if (puVar3 == (undefined1 *)0x0) goto LAB_10ae48ab4;
      puVar2 = auStack_30;
      func_0x000107c2b1e8(puVar2,puVar3);
      if ((int)puVar2 == 0) goto LAB_10ae48ab4;
      puVar2 = auStack_30;
      FUN_10ae488b8(puVar2,lVar1 + 0x28);
      if ((int)puVar2 == 0) goto LAB_10ae48ab4;
      puVar2 = auStack_30;
      FUN_10ae488b8(puVar2,lVar1 + 0x30);
      if ((int)puVar2 == 0) goto LAB_10ae48ab4;
      puVar2 = auStack_30;
      FUN_10ae488b8(puVar2,lVar1 + 0x38);
      if ((int)puVar2 == 0) goto LAB_10ae48ab4;
      puVar2 = auStack_30;
      FUN_10ae488b8(puVar2,lVar1 + 0x40);
      if ((int)puVar2 == 0) goto LAB_10ae48ab4;
      if (lStack_28 == 0) {
        lVar4 = lVar1;
        func_0x000107c2b4e4();
        if ((int)lVar4 != 0) {
          return lVar1;
        }
        uVar5 = 0x68;
        uVar6 = 0xc0;
      }
      else {
        uVar5 = 100;
        uVar6 = 0xbb;
      }
    }
    else {
      uVar5 = 0x6a;
      uVar6 = 0xab;
    }
  }
  func_0x000107c2b29c(4,0,uVar5,&UNK_10f6ccfa3,uVar6);
LAB_10ae48ab4:
  func_0x000107c2b4d0(lVar1);
  return 0;
}



/* Entry: 10ae48cd0; end: 10ae48cd7;  */

undefined8 * FUN_10ae48cd0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)0x30;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x28;
    puVar3 = puVar1 + 1;
    puVar1[2] = 0;
    *puVar3 = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[5] = 0;
    puVar2 = (undefined8 *)0x28;
    func_0x000107c610a0();
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0x20;
      puVar1[2] = puVar2 + 1;
      puVar2[4] = 0;
      puVar2[3] = 0;
      puVar1[4] = 4;
      puVar1[5] = 0;
      return puVar3;
    }
    puVar1[2] = 0;
    func_0x0001001e33e0(puVar3);
  }
  return (undefined8 *)0x0;
}



/* Entry: 10ae48cd8; end: 10ae48e2f;  */

undefined8 FUN_10ae48cd8(ulong *param_1,ulong *param_2,long param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_60;
  long lStack_58;
  
  if (param_1 != (ulong *)0x0) {
    if (param_1[4] == 0) {
      if (*param_1 != 0) {
        uVar2 = 0;
        do {
          if (*(long *)(param_1[1] + uVar2 * 8) == param_3) {
            if (param_2 == (ulong *)0x0) {
              return 1;
            }
            *param_2 = uVar2;
            return 1;
          }
          uVar2 = uVar2 + 1;
        } while (*param_1 != uVar2);
      }
    }
    else if (param_3 != 0) {
      uVar2 = *param_1;
      lStack_58 = param_3;
      if ((int)param_1[2] == 0) {
        if (uVar2 != 0) {
          uVar2 = 0;
          do {
            uStack_60 = *(undefined8 *)(param_1[1] + uVar2 * 8);
            uVar4 = param_1[4];
            (*param_4)(uVar4,&lStack_58,&uStack_60);
            if ((int)uVar4 == 0) {
              if (param_2 == (ulong *)0x0) {
                return 1;
              }
              *param_2 = uVar2;
              return 1;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < *param_1);
        }
      }
      else if (uVar2 != 0) {
        uVar4 = 0;
        do {
          uVar3 = uVar4 + ((uVar2 - uVar4) - 1 >> 1);
          uStack_60 = *(undefined8 *)(param_1[1] + uVar3 * 8);
          uVar1 = param_1[4];
          (*param_4)(uVar1,&lStack_58,&uStack_60);
          if ((int)uVar1 < 1) {
            if (-1 < (int)uVar1) {
              if (uVar2 - uVar4 == 1) {
                if (param_2 != (ulong *)0x0) {
                  *param_2 = uVar3;
                }
                return 1;
              }
              uVar3 = uVar3 + 1;
            }
          }
          else {
            uVar4 = uVar3 + 1;
            uVar3 = uVar2;
          }
          uVar2 = uVar3;
        } while (uVar4 < uVar3);
      }
    }
  }
  return 0;
}



/* Entry: 10ae48e30; end: 10ae48e37;  */

void FUN_10ae48e30(ulong *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  if (param_1 == (ulong *)0x0) {
    return;
  }
  uVar4 = param_1[3];
  uVar3 = *param_1;
  if (uVar3 + 1 < uVar4) goto code_r0x0001001e2d14;
  if ((long)uVar4 < 0) {
code_r0x0001001e2cdc:
    uVar3 = uVar4 + 1;
    lVar1 = uVar3 * 8;
    uVar6 = uVar3 & 0x1fffffffffffffff;
  }
  else {
    uVar3 = uVar4 * 2;
    lVar1 = uVar4 << 4;
    uVar6 = uVar3;
    if (uVar3 + (uVar4 & 0xfffffffffffffff) * -2 != 0) goto code_r0x0001001e2cdc;
  }
  if (uVar3 < uVar4 || uVar6 != uVar3) {
    return;
  }
  uVar3 = param_1[1];
  func_0x0001001e43fc(uVar3,lVar1);
  if (uVar3 == 0) {
    return;
  }
  param_1[1] = uVar3;
  param_1[3] = uVar6;
  uVar3 = *param_1;
code_r0x0001001e2d14:
  if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
    puVar5 = (undefined8 *)(param_1[1] + uVar3 * 8);
  }
  else {
    uVar4 = param_1[1];
    if ((uVar3 - uVar2 & 0x1fffffffffffffff) != 0) {
      func_0x000107c610b8(uVar4 + uVar2 * 8 + 8);
      uVar3 = *param_1;
      uVar4 = param_1[1];
    }
    puVar5 = (undefined8 *)(uVar4 + uVar2 * 8);
  }
  *puVar5 = param_2;
  *param_1 = uVar3 + 1;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 10ae48e38; end: 10ae48eeb;  */

/* WARNING: Removing unreachable block (ram,0x00010ae48f18) */

long FUN_10ae48e38(long param_1)

{
  long lVar1;
  undefined8 auStack_60 [5];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if (param_1 != 0) {
    lVar1 = 0x113311020;
    _pthread_mutex_lock();
    if ((int)lVar1 == 0) {
      auStack_60[1] = uRam0000000113837098;
      auStack_60[0] = uRam0000000113837090;
      auStack_60[3] = uRam00000001138370a8;
      auStack_60[2] = uRam00000001138370a0;
      _pthread_mutex_unlock(0x113311020);
      lVar1 = 0;
      do {
        if (*(code **)((long)auStack_60 + lVar1) != (code *)0x0) {
          (**(code **)((long)auStack_60 + lVar1))(*(undefined8 *)(param_1 + lVar1));
        }
        lVar1 = lVar1 + 8;
      } while (lVar1 != 0x20);
      func_0x000107c2b534(param_1);
      lVar1 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    FUN_10ae48f44();
    return lVar1;
  }
  return lVar1;
}



/* Entry: 10ae48eec; end: 10ae48f43;  */

undefined8 FUN_10ae48eec(undefined8 param_1,undefined8 param_2)

{
  int iStack_24;
  
  iStack_24 = 0;
  FUN_10ae48f44(param_1,param_2,0,&iStack_24);
  if (iStack_24 != 0) {
    func_0x000107c2b29c(0xc,0,iStack_24,&UNK_10f6cd10b,0x91);
  }
  return param_1;
}



/* Entry: 10ae48f44; end: 10ae4980b;  */

uint * FUN_10ae48f44(undefined8 param_1,ulong *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint **ppuVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  ulong uVar17;
  int iVar18;
  char **ppcVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  undefined1 auStack_2a0 [4];
  undefined1 auStack_29c [4];
  ulong uStack_298;
  uint *puStack_290;
  uint *puStack_288;
  undefined8 uStack_280;
  uint uStack_278;
  int iStack_274;
  char *apcStack_270 [3];
  undefined4 auStack_258 [116];
  uint uStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  char *pcStack_70;
  uint *puStack_68;
  
  puStack_288 = (uint *)0x0;
  uStack_298 = 0;
  uStack_280 = 0xffffffffffffffff;
  iStack_274 = 1;
  uStack_88 = 0;
  FUN_10ae22df4(param_1,0x2c,1,FUN_10ae4980c,&uStack_280);
  iVar3 = iStack_274;
  if ((int)param_1 != 0) {
    uVar13 = 0xb9;
    goto LAB_10ae48fb0;
  }
  uVar17 = (ulong)uStack_278;
  if ((uStack_278 & 0xfffffffe) == 0x10) {
    if (param_2 == (ulong *)0x0) {
      uVar13 = 0xaa;
LAB_10ae48fb0:
      *param_4 = uVar13;
      return (uint *)0x0;
    }
    if (0x31 < param_3) {
      uVar13 = 0x83;
      goto LAB_10ae48fb0;
    }
    puStack_68 = (uint *)0x0;
    puVar6 = (ulong *)0x0;
    func_0x000107c2b59c();
    if (puVar6 == (ulong *)0x0) {
      puVar15 = (uint *)0x0;
      puVar20 = (ulong *)0x0;
      goto LAB_10ae491ac;
    }
    puVar20 = (ulong *)0x0;
    if (apcStack_270[0] == (char *)0x0) {
LAB_10ae4912c:
      puVar2 = &UNK_110c7bc00;
      if (uStack_278 != 0x11) {
        puVar2 = &UNK_110c7bba0;
      }
      puVar8 = puVar6;
      func_0x000107c2b1b8(puVar6,&puStack_68,puVar2);
      if ((int)puVar8 < 0) goto LAB_10ae491a8;
      puStack_80 = (uint *)0x0;
      ppuVar5 = &puStack_80;
      func_0x000107c34f34(ppuVar5,&DAT_110c7b9f0,0);
      puVar15 = puStack_80;
      if ((int)ppuVar5 == 0) goto LAB_10ae491a8;
      if (puStack_80 == (uint *)0x0) goto LAB_10ae491ac;
      func_0x000107c2b1ac();
      *(ulong *)(puVar15 + 2) = uVar17;
      if (uVar17 == 0) goto LAB_10ae491ac;
      *puVar15 = uStack_278;
      *(uint **)(uVar17 + 8) = puStack_68;
      **(int **)(puVar15 + 2) = (int)puVar8;
      puStack_68 = (uint *)0x0;
LAB_10ae491bc:
      uVar17 = *puVar6;
      if (uVar17 != 0) {
        uVar24 = 0;
        do {
          puVar14 = *(uint **)(puVar6[1] + uVar24 * 8);
          if (puVar14 != (uint *)0x0) {
            puStack_80 = puVar14;
            func_0x000107c2b1bc(&puStack_80,&DAT_110c7b9f0,0);
            uVar17 = *puVar6;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 < uVar17);
      }
      func_0x000107c2b534(puVar6[1]);
      func_0x000107c2b534(puVar6);
    }
    else {
      puVar20 = param_2;
      FUN_10ae521f0(param_2,apcStack_270[0]);
      if (puVar20 != (ulong *)0x0) {
        uVar24 = 0;
        do {
          if (*puVar20 <= uVar24) goto LAB_10ae4912c;
          lVar7 = *(long *)(*(long *)(puVar20[1] + uVar24 * 8) + 0x10);
          FUN_10ae48f44(lVar7,param_2,param_3 + 1,param_4);
          if (lVar7 == 0) break;
          puVar8 = puVar6;
          func_0x000107c2b5ac(puVar6,lVar7,*puVar6);
          uVar24 = uVar24 + 1;
        } while (puVar8 != (ulong *)0x0);
      }
LAB_10ae491a8:
      puVar15 = (uint *)0x0;
LAB_10ae491ac:
      if (puStack_68 != (uint *)0x0) {
        func_0x000107c2b534();
      }
      if (puVar6 != (ulong *)0x0) goto LAB_10ae491bc;
    }
    if ((puVar20 != (ulong *)0x0) && (*(code **)(param_2[5] + 0x18) != (code *)0x0)) {
      (**(code **)(param_2[5] + 0x18))(param_2[6],puVar20);
    }
  }
  else {
    puStack_80 = (uint *)0x0;
    ppuVar5 = &puStack_80;
    func_0x000107c34f34(ppuVar5,&DAT_110c7b9f0,0);
    puVar15 = puStack_80;
    if (((int)ppuVar5 == 0) || (puStack_80 == (uint *)0x0)) {
      func_0x000107c2b29c(0xc,0,0x41,&UNK_10f6cd10b,0x284);
    }
    else {
      pcVar9 = "";
      if (apcStack_270[0] != (char *)0x0) {
        pcVar9 = apcStack_270[0];
      }
      switch(uStack_278) {
      case 1:
        if (iVar3 == 1) {
          puStack_80 = (uint *)0x0;
          uStack_78 = 0;
          ppuVar5 = &puStack_80;
          pcStack_70 = pcVar9;
          func_0x00010ae56dfc(ppuVar5,puVar15 + 2);
          if ((int)ppuVar5 != 0) goto code_r0x00010ae49260;
          uVar11 = 0x7d;
          uVar12 = 0x29d;
          break;
        }
        uVar11 = 0xa1;
        uVar12 = 0x296;
code_r0x00010ae49598:
        func_0x000107c2b29c(0xc,0,uVar11,&UNK_10f6cd10b,uVar12);
        goto code_r0x00010ae495d0;
      case 2:
      case 10:
        if (iVar3 != 1) {
          uVar11 = 0x8b;
          uVar12 = 0x2a5;
          goto code_r0x00010ae49598;
        }
        lVar7 = 0;
        func_0x00010ae56c34(0,pcVar9);
        *(long *)(puVar15 + 2) = lVar7;
        if (lVar7 != 0) goto code_r0x00010ae49260;
        uVar11 = 0x82;
        uVar12 = 0x2a9;
        break;
      case 3:
      case 4:
        lVar7 = 4;
        func_0x000107c2b1ac();
        *(long *)(puVar15 + 2) = lVar7;
        if (lVar7 == 0) {
          uVar11 = 0x41;
          uVar12 = 0x2ef;
          goto code_r0x00010ae49598;
        }
        if (iVar3 == 1) {
          func_0x000107c2b1a4(lVar7,pcVar9,0xffffffff);
code_r0x00010ae494d4:
          if (uStack_278 == 3) {
            *(ulong *)(*(long *)(puVar15 + 2) + 0x10) =
                 *(ulong *)(*(long *)(puVar15 + 2) + 0x10) & 0xfffffffffffffff0;
            *(ulong *)(*(long *)(puVar15 + 2) + 0x10) =
                 *(ulong *)(*(long *)(puVar15 + 2) + 0x10) | 8;
          }
          goto code_r0x00010ae49260;
        }
        if (iVar3 == 3) {
          func_0x00010ae57454(pcVar9,&puStack_80);
          if (pcVar9 != (char *)0x0) {
            *(char **)(*(long *)(puVar15 + 2) + 8) = pcVar9;
            **(undefined4 **)(puVar15 + 2) = (int)puStack_80;
            *(uint *)(*(long *)(puVar15 + 2) + 4) = uStack_278;
            goto code_r0x00010ae494d4;
          }
          uVar11 = 0x80;
          uVar12 = 0x2f6;
        }
        else {
          if ((uStack_278 != 3) || (iVar3 != 4)) {
            uVar11 = 0x7c;
            uVar12 = 0x30a;
            goto code_r0x00010ae49598;
          }
          FUN_10ae22df4(pcVar9,0x2c,1,FUN_10ae49d78);
          if ((int)pcVar9 != 0) goto code_r0x00010ae49260;
          uVar11 = 0x97;
          uVar12 = 0x304;
        }
        break;
      case 5:
        if (*pcVar9 != '\0') {
          uVar11 = 0x85;
          uVar12 = 0x28f;
          goto code_r0x00010ae49598;
        }
code_r0x00010ae49260:
        *puVar15 = uStack_278;
        goto LAB_10ae495ec;
      case 6:
        if (iVar3 != 1) {
          uVar11 = 0xa5;
          uVar12 = 0x2b0;
          goto code_r0x00010ae49598;
        }
        FUN_10ae45864(pcVar9,0);
        *(char **)(puVar15 + 2) = pcVar9;
        if (pcVar9 != (char *)0x0) goto code_r0x00010ae49260;
        uVar11 = 0x86;
        uVar12 = 0x2b4;
        break;
      default:
        uVar11 = 0xbc;
        uVar12 = 0x317;
        break;
      case 0xc:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x16:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1e:
        if (iVar3 == 1) {
          uVar11 = 0x1001;
        }
        else {
          if (iVar3 != 2) {
            uVar11 = 0x7f;
            uVar12 = 0x2de;
            goto code_r0x00010ae49598;
          }
          uVar11 = 0x1000;
        }
        puVar14 = puStack_80 + 2;
        func_0x000107c2b178(puVar14,pcVar9,0xffffffff,uVar11,
                            *(undefined8 *)(&UNK_10e517ff0 + uVar17 * 8),0,0);
        if (0 < (int)puVar14) goto code_r0x00010ae49260;
        uVar11 = 0x41;
        uVar12 = 0x2e4;
        break;
      case 0x17:
      case 0x18:
        if (iVar3 != 1) {
          uVar11 = 0xb0;
          uVar12 = 700;
          goto code_r0x00010ae49598;
        }
        lVar7 = 4;
        func_0x000107c2b1ac();
        *(long *)(puVar15 + 2) = lVar7;
        if (lVar7 == 0) {
          uVar11 = 0x41;
          uVar12 = 0x2c0;
        }
        else {
          func_0x000107c2b1a4();
          if ((int)lVar7 == 0) {
            uVar11 = 0x41;
            uVar12 = 0x2c4;
          }
          else {
            *(uint *)(*(long *)(puVar15 + 2) + 4) = uStack_278;
            iVar3 = (int)*(long *)(puVar15 + 2);
            func_0x00010ae1dbb4();
            if (iVar3 != 0) goto code_r0x00010ae49260;
            uVar11 = 0x8a;
            uVar12 = 0x2c9;
          }
        }
      }
      func_0x000107c2b29c(0xc,0,uVar11,&UNK_10f6cd10b,uVar12);
      func_0x000107c2b2a0(2);
code_r0x00010ae495d0:
      puStack_68 = puVar15;
      func_0x000107c2b1bc(&puStack_68,&DAT_110c7b9f0,0);
    }
    puVar15 = (uint *)0x0;
  }
LAB_10ae495ec:
  if (puVar15 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (((int)uStack_280 == -1) && (uStack_88 == 0)) {
    return puVar15;
  }
  puVar14 = puVar15;
  func_0x000107c2b1b8(puVar15,&puStack_288,&DAT_110c7b9f0);
  iVar3 = (int)puVar14;
  puStack_80 = puVar15;
  func_0x000107c2b1bc(&puStack_80,&DAT_110c7b9f0,0);
  puStack_80 = puStack_288;
  if ((int)uStack_280 == -1) {
    uVar23 = 0;
    uVar17 = 0xffffffff;
    puVar16 = puStack_288;
    puVar15 = puStack_288;
  }
  else {
    ppuVar5 = &puStack_80;
    func_0x000107c2b198(ppuVar5,&uStack_298,auStack_29c,auStack_2a0,(long)iVar3);
    puVar16 = puStack_80;
    puVar15 = puStack_288;
    if (0x7f < (uint)ppuVar5) {
      puVar16 = (uint *)0x0;
      puVar14 = (uint *)0x0;
      goto LAB_10ae497f0;
    }
    iVar3 = iVar3 + ((int)puStack_288 - (int)puStack_80);
    uVar23 = (uint)ppuVar5 & 0x20;
    uVar17 = uStack_280 & 0xffffffff;
    puVar14 = (uint *)0x0;
    func_0x000107c2b1a0(0,uStack_298 & 0xffffffff,uVar17);
  }
  uVar1 = uStack_88;
  uVar4 = (uint)puVar14;
  if (0 < (int)uStack_88) {
    ppcVar19 = apcStack_270 + (ulong)uStack_88 * 3;
    uVar22 = uStack_88;
    do {
      pcVar9 = (char *)((long)*(int *)((long)ppcVar19 + -4) + (long)(int)puVar14);
      *ppcVar19 = pcVar9;
      puVar14 = (uint *)0x0;
      func_0x000107c2b1a0(0,pcVar9,*(undefined4 *)(ppcVar19 + -2));
      uVar4 = (uint)puVar14;
      ppcVar19 = ppcVar19 + -3;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  if (uVar4 < 0xfffffff8) {
    lVar7 = (long)(int)uVar4;
    plVar10 = (long *)(lVar7 + 8);
    _malloc();
    if (plVar10 == (long *)0x0) {
      puVar16 = (uint *)0x0;
      puVar14 = (uint *)0x0;
    }
    else {
      puVar14 = (uint *)(plVar10 + 1);
      *plVar10 = lVar7;
      puStack_68 = puVar14;
      if (0 < (int)uVar1) {
        iVar18 = 0;
        puVar21 = auStack_258;
        do {
          func_0x000107c2b19c(&puStack_68,puVar21[-2],*puVar21,puVar21[-4],puVar21[-3]);
          if (puVar21[-1] != 0) {
            *(undefined1 *)puStack_68 = 0;
            puStack_68 = (uint *)((long)puStack_68 + 1);
          }
          puVar21 = puVar21 + 6;
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)uStack_88);
        uVar17 = uStack_280 & 0xffffffff;
      }
      if ((uint)uVar17 != 0xffffffff) {
        uVar1 = 0x20;
        if (uStack_280._4_4_ != 0 || ((uint)uVar17 & 0xfffffffe) != 0x10) {
          uVar1 = uVar23;
        }
        func_0x000107c2b19c(&puStack_68,uVar1,uStack_298 & 0xffffffff,uVar17);
      }
      if (iVar3 != 0) {
        _memcpy(puStack_68,puVar16,(long)iVar3);
      }
      puVar16 = (uint *)0x0;
      puStack_290 = puVar14;
      func_0x000107c2b1b4(0,&puStack_290,lVar7,&DAT_110c7b9f0);
      puVar15 = puStack_288;
    }
  }
  else {
    puVar16 = (uint *)0x0;
    puVar14 = (uint *)0x0;
  }
LAB_10ae497f0:
  if (puVar15 != (uint *)0x0) {
    func_0x000107c2b534(puVar15);
  }
  if (puVar14 != (uint *)0x0) {
    func_0x000107c2b534(puVar14);
  }
  return puVar16;
}



/* Entry: 10ae4980c; end: 10ae49ba3;  */

undefined8 FUN_10ae4980c(char *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  uint uVar9;
  undefined **ppuVar10;
  int iVar11;
  undefined4 uStack_58;
  undefined4 uStack_54;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)param_2) {
    uVar9 = 0;
    pcVar3 = param_1;
    do {
      pcVar8 = pcVar3 + 1;
      if (*pcVar3 == ':') {
        iVar2 = ~uVar9 + param_2;
        goto LAB_10ae49884;
      }
      uVar9 = uVar9 + 1;
      pcVar3 = pcVar8;
    } while (param_2 != uVar9);
  }
  iVar2 = 0;
  pcVar8 = (char *)0x0;
  uVar9 = param_2;
LAB_10ae49884:
  uVar1 = uVar9;
  if (uVar9 == 0xffffffff) {
    pcVar3 = param_1;
    _strlen();
    uVar1 = (uint)pcVar3;
  }
  ppuVar10 = &PTR_DAT_110c86540;
  iVar11 = 0x31;
  do {
    if (uVar1 == *(uint *)(ppuVar10 + 1)) {
      puVar4 = *ppuVar10;
      _strncmp(puVar4,param_1,(long)(int)uVar1);
      if ((int)puVar4 == 0) {
        uVar1 = *(uint *)((long)ppuVar10 + 0xc);
        ppuRam00000001137ed8a0 = ppuVar10;
        if (uVar1 != 0xffffffff) {
          if ((uVar1 >> 0x10 & 1) == 0) {
            param_3[2] = uVar1;
            *(char **)(param_3 + 4) = pcVar8;
            if ((pcVar8 != (char *)0x0) || (param_1[(int)uVar9] == '\0')) {
              return 0;
            }
            uVar5 = 0x9b;
            uVar6 = 0x144;
LAB_10ae49b88:
            func_0x000107c2b29c(0xc,0,uVar5,&UNK_10f6cd10b,uVar6);
            return 0xffffffff;
          }
          if ((int)uVar1 < 0x10005) {
            if (uVar1 == 0x10001) {
              if (*param_3 != -1) {
                uVar5 = 0x83;
                uVar6 = 0x14f;
                goto LAB_10ae49b88;
              }
              FUN_10ae49ba4(pcVar8,iVar2,param_3,param_3 + 1);
              iVar2 = (int)pcVar8;
              goto joined_r0x00010ae49b2c;
            }
            if (uVar1 != 0x10002) {
              if (uVar1 != 0x10004) {
                return 1;
              }
              uStack_54 = 3;
              uVar5 = 0;
              uVar6 = 1;
              goto LAB_10ae49ad4;
            }
            FUN_10ae49ba4(pcVar8,iVar2,&uStack_54,&uStack_58);
            if ((int)pcVar8 == 0) {
              return 0xffffffff;
            }
            uVar5 = 1;
            uVar6 = 0;
            uVar7 = 0;
          }
          else {
            if ((int)uVar1 < 0x10007) {
              if (uVar1 != 0x10005) {
                if (uVar1 != 0x10006) {
                  return 1;
                }
                uStack_54 = 0x10;
                goto LAB_10ae49ac8;
              }
              uStack_54 = 4;
              uVar5 = 0;
            }
            else {
              if (uVar1 != 0x10007) {
                if (uVar1 != 0x10008) {
                  return 1;
                }
                if (pcVar8 != (char *)0x0) {
                  pcVar3 = pcVar8;
                  _strncmp(pcVar8,&DAT_10f566408,5);
                  if ((int)pcVar3 == 0) {
                    iVar2 = 1;
                  }
                  else {
                    pcVar3 = pcVar8;
                    _strncmp(pcVar8,&DAT_10f51a5f0,4);
                    if ((int)pcVar3 == 0) {
                      iVar2 = 2;
                    }
                    else if (((*pcVar8 == 'H') && (pcVar8[1] == 'E')) && (pcVar8[2] == 'X')) {
                      iVar2 = 3;
                    }
                    else {
                      _strncmp(pcVar8,&UNK_10f6cd186,7);
                      if ((int)pcVar8 != 0) {
                        uVar5 = 0xb6;
                        uVar6 = 0x180;
                        goto LAB_10ae49b88;
                      }
                      iVar2 = 4;
                    }
                  }
                  param_3[3] = iVar2;
                  return 1;
                }
                uVar5 = 0xb6;
                uVar6 = 0x174;
                goto LAB_10ae49b88;
              }
              uStack_54 = 0x11;
LAB_10ae49ac8:
              uVar5 = 1;
            }
            uVar6 = 0;
LAB_10ae49ad4:
            uStack_58 = 0;
            uVar7 = 1;
          }
          FUN_10ae49cd8(param_3,uStack_54,uStack_58,uVar5,uVar6,uVar7);
          iVar2 = (int)param_3;
joined_r0x00010ae49b2c:
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          return 1;
        }
        break;
      }
    }
    ppuVar10 = ppuVar10 + 2;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  func_0x000107c2b29c(0xc,0,0xb9,&UNK_10f6cd10b,0x139);
  func_0x000107c2b2a0(2);
  return 0xffffffff;
}



/* Entry: 10ae49ba4; end: 10ae49cd7;  */

undefined8 FUN_10ae49ba4(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  byte *pbStack_40;
  byte bStack_32;
  undefined1 uStack_31;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = param_1;
  _strtoul(param_1,&pbStack_40,10);
  if ((pbStack_40 != (byte *)0x0) && (*pbStack_40 != 0 && (byte *)(param_1 + param_2) < pbStack_40))
  {
    return 0;
  }
  if (lVar1 < 0) {
    func_0x000107c2b29c(0xc,0,0x91,&UNK_10f6cd10b,0x197);
    return 0;
  }
  *param_3 = (int)lVar1;
  if ((pbStack_40 != (byte *)0x0) && ((int)param_1 - (int)pbStack_40 != -param_2)) {
    bStack_32 = *pbStack_40;
    if (0x4f < bStack_32) {
      if (bStack_32 != 0x50) {
        if (bStack_32 == 0x55) {
          *param_4 = 0;
          return 1;
        }
LAB_10ae49c88:
        uStack_31 = 0;
        func_0x000107c2b29c(0xc,0,0x90,&UNK_10f6cd10b,0x1b6);
        func_0x000107c2b2a0(2);
        return 0;
      }
      uVar2 = 0xc0;
      goto LAB_10ae49c30;
    }
    if (bStack_32 == 0x41) {
      uVar2 = 0x40;
      goto LAB_10ae49c30;
    }
    if (bStack_32 != 0x43) goto LAB_10ae49c88;
  }
  uVar2 = 0x80;
LAB_10ae49c30:
  *param_4 = uVar2;
  return 1;
}



/* Entry: 10ae49cd8; end: 10ae49d77;  */

undefined8 FUN_10ae49cd8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *param_1;
  if ((param_6 == 0) && (iVar1 != -1)) {
    uVar3 = 0x81;
    uVar4 = 0x20e;
  }
  else {
    iVar2 = param_1[0x7e];
    if (iVar2 != 0x14) {
      param_1[0x7e] = iVar2 + 1;
      if (iVar1 != -1) {
        param_3 = param_1[1];
        param_1[0] = -1;
        param_1[1] = -1;
        param_2 = iVar1;
      }
      param_1[(long)iVar2 * 6 + 6] = param_2;
      param_1[(long)iVar2 * 6 + 7] = param_3;
      param_1[(long)iVar2 * 6 + 8] = param_4;
      param_1[(long)iVar2 * 6 + 9] = param_5;
      return 1;
    }
    uVar3 = 0x6e;
    uVar4 = 0x213;
  }
  func_0x000107c2b29c(0xc,0,uVar3,&UNK_10f6cd10b,uVar4);
  return 0;
}



/* Entry: 10ae49d78; end: 10ae49e33;  */

undefined8 FUN_10ae49d78(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcStack_38;
  
  if ((param_1 != 0) &&
     ((lVar1 = param_1, _strtoul(param_1,&pcStack_38,10), pcStack_38 == (char *)0x0 ||
      (*pcStack_38 == '\0' || pcStack_38 == (char *)(param_1 + param_2))))) {
    if (lVar1 < 0) {
      uVar2 = 0x91;
      uVar3 = 0x332;
    }
    else {
      FUN_10ae1cb0c(param_3,lVar1,1);
      if ((int)param_3 != 0) {
        return 1;
      }
      uVar2 = 0x41;
      uVar3 = 0x336;
    }
    func_0x000107c2b29c(0xc,0,uVar2,&UNK_10f6cd10b,uVar3);
  }
  return 0;
}



/* Entry: 10ae49e34; end: 10ae49e93;  */

void FUN_10ae49e34(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x18;
  _malloc();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x10;
    puVar2 = puVar1;
    func_0x000107c2b1ec();
    puVar1[1] = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      func_0x000107c2b534();
    }
    else {
      puVar1[2] = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar1 + 1;
    }
  }
  return;
}



/* Entry: 10ae49e94; end: 10ae49f17;  */

/* WARNING: Possible PIC construction at 0x00010ae49ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae49ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae49ee4) */
/* WARNING: Removing unreachable block (ram,0x00010ae49efc) */

void FUN_10ae49e94(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *unaff_x19;
  undefined8 *puVar5;
  ulong *unaff_x20;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  puVar6 = (ulong *)puVar5[1];
  if (puVar6 == (ulong *)0x0) {
    puVar6 = (ulong *)*puVar5;
    puVar2 = puVar5;
    if (puVar6 != (ulong *)0x0) {
      unaff_x30 = 0x10ae49efc;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      puVar2 = (undefined8 *)puVar6[1];
      unaff_x19 = puVar5;
      unaff_x20 = puVar6;
      unaff_x29 = puVar1;
    }
  }
  else {
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        if (*(long *)(puVar6[1] + uVar7 * 8) != 0) {
          FUN_10ae4a758();
          uVar3 = *puVar6;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    unaff_x30 = 0x10ae49ee4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    puVar2 = (undefined8 *)puVar6[1];
    unaff_x19 = puVar5;
    unaff_x20 = puVar6;
    unaff_x29 = puVar1;
  }
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar4 = puVar2 + -1;
  if (*plVar4 + 8 != 0) {
    func_0x000107c60ee4(plVar4,*plVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar4);
  return;
}



/* Entry: 10ae49f18; end: 10ae49faf;  */

undefined8 FUN_10ae49f18(long param_1,int param_2,char *param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  char cVar16;
  long lVar17;
  long lVar18;
  char *pcVar19;
  
  if (param_2 == 2) {
    lVar13 = *(long *)(param_1 + 0x10);
    if (param_4 != 3) {
      if ((param_3 != (char *)0x0) && (cVar16 = *param_3, pcVar19 = param_3, cVar16 != '\0')) {
        do {
          if ((cVar16 == ':') || (cVar16 == '\0')) {
            lVar3 = (long)pcVar19 - (long)param_3;
            if (lVar3 != 0) {
              plVar12 = *(long **)(lVar13 + 8);
              if (plVar12 == (long *)0x0) {
                lVar17 = 0;
                func_0x000107c2b59c();
                *(long *)(lVar13 + 8) = lVar17;
                if (lVar17 == 0) {
                  uVar10 = 0x41;
                  uVar11 = 0xe2;
                  goto LAB_10ae4a920;
                }
              }
              else {
                lVar17 = *plVar12;
                if (lVar17 != 0) {
                  lVar18 = 0;
                  lVar14 = plVar12[1];
                  do {
                    lVar15 = **(long **)(lVar14 + lVar18 * 8);
                    lVar5 = lVar15;
                    _strlen();
                    if ((lVar5 == lVar3) && (_strncmp(lVar15,param_3,lVar3), (int)lVar15 == 0))
                    goto LAB_10ae4a8f8;
                    lVar18 = lVar18 + 1;
                  } while (lVar17 != lVar18);
                }
              }
              puVar6 = (undefined8 *)0x20;
              _malloc();
              if (puVar6 == (undefined8 *)0x0) {
                return 0;
              }
              *puVar6 = 0x18;
              *(int *)(puVar6 + 2) = (int)param_4;
              pcVar7 = FUN_10ae4a980;
              func_0x000107c2b59c();
              puVar6[3] = pcVar7;
              uVar1 = lVar3 + 1;
              if (uVar1 < 0xfffffffffffffff8) {
                puVar8 = (ulong *)(lVar3 + 9);
                _malloc();
                if (puVar8 != (ulong *)0x0) {
                  *puVar8 = uVar1;
                  puVar6[1] = puVar8 + 1;
                  if (pcVar7 == (code *)0x0) goto LAB_10ae4a93c;
                  FUN_10ae45668(puVar8 + 1,param_3,uVar1);
                  puVar9 = *(undefined8 **)(lVar13 + 8);
                  func_0x000107c2b5ac(puVar9,puVar6 + 1,*puVar9);
                  if (puVar9 == (undefined8 *)0x0) goto LAB_10ae4a93c;
                  cVar16 = *pcVar19;
                  goto LAB_10ae4a8f8;
                }
              }
              puVar6[1] = 0;
LAB_10ae4a93c:
              FUN_10ae4a758(puVar6 + 1);
              return 0;
            }
LAB_10ae4a8f8:
            if (cVar16 == '\0') {
              return 1;
            }
            param_3 = pcVar19 + 1;
          }
          cVar16 = pcVar19[1];
          pcVar19 = pcVar19 + 1;
        } while( true );
      }
      uVar10 = 0x6e;
      uVar11 = 0xc9;
LAB_10ae4a920:
      func_0x000107c2b29c(0xb,0,uVar10,&UNK_10f6cd320,uVar11);
      return 0;
    }
    puVar4 = &UNK_10f6cd586;
    _getenv();
    puVar2 = &UNK_10f6cd565;
    if (puVar4 != (undefined *)0x0) {
      puVar2 = puVar4;
    }
    FUN_10ae4a7d0(lVar13,puVar2,1);
    if ((int)lVar13 != 0) {
      return 1;
    }
    func_0x000107c2b29c(0xb,0,0x75,&UNK_10f6cd320,0x88);
  }
  return 0;
}



/* Entry: 10ae49fb0; end: 10ae4a757;  */

/* WARNING: Possible PIC construction at 0x00010ae4a6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4a774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4a7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4a748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4a7b4) */
/* WARNING: Removing unreachable block (ram,0x00010ae4a6dc) */
/* WARNING: Removing unreachable block (ram,0x00010ae4a74c) */

long * FUN_10ae49fb0(long *param_1,undefined8 param_2,long param_3,undefined4 *param_4)

{
  long **pplVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long **pplVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  long *unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  char *pcVar22;
  undefined8 *****pppppuVar23;
  code *pcVar24;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  ulong *puStack_3a0;
  long *plStack_398;
  undefined8 ****ppppuStack_390;
  code *pcStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  long lStack_370;
  char *pcStack_368;
  ulong uStack_360;
  undefined4 *puStack_350;
  long lStack_348;
  uint uStack_33c;
  char *pcStack_338;
  long *plStack_330;
  undefined4 *puStack_328;
  long lStack_320;
  long lStack_318;
  ulong uStack_310;
  long *aplStack_308 [18];
  long alStack_278 [2];
  long lStack_268;
  undefined1 **ppuStack_260;
  undefined8 uStack_258;
  undefined1 *apuStack_250 [15];
  undefined1 auStack_1d8 [16];
  long alStack_1c8 [30];
  undefined1 auStack_d8 [40];
  long alStack_b0 [8];
  long lStack_70;
  
  pplVar1 = (long **)&uStack_380;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar8 = param_1;
  pppppuVar23 = (undefined8 *****)&stack0xfffffffffffffff0;
  if (param_3 != 0) {
    iVar10 = (int)param_2;
    lStack_268._0_4_ = iVar10;
    if (iVar10 == 1) {
      apuStack_250[0] = auStack_d8;
      plVar8 = alStack_b0;
      pcVar22 = "";
LAB_10ae4a030:
      *plVar8 = param_3;
      ppuStack_260 = apuStack_250;
      plVar3 = param_1;
      func_0x000107c2b1ec();
      if (plVar3 != (long *)0x0) {
        lStack_320 = param_1[2];
        lVar4 = param_3;
        puStack_350 = param_4;
        FUN_10ae4b4f0();
        func_0x00010ae4b598();
        uVar14 = 1;
        lStack_348 = param_3;
        pcStack_338 = pcVar22;
        plStack_330 = param_1;
        do {
          uVar18 = 0;
          uStack_33c = uVar14;
LAB_10ae4a08c:
          puVar15 = *(ulong **)(lStack_320 + 8);
          if (puVar15 == (ulong *)0x0) {
            uVar16 = 0;
          }
          else {
            uVar16 = *puVar15;
          }
          if (uVar18 < uVar16) {
            puVar15 = *(ulong **)(puVar15[1] + uVar18 * 8);
            uVar16 = *puVar15;
            _strlen(uVar16);
            plVar8 = plVar3;
            func_0x000107c2b1f8(plVar3,(long)((int)uVar16 + 0x11));
            if (plVar8 != (long *)0x0) {
              uStack_310 = uVar18;
              if ((iVar10 != 2) || (puVar15[2] == 0)) {
                uVar18 = 0;
                lStack_318 = 0;
                goto LAB_10ae4a24c;
              }
              plVar8 = (long *)0x1133110b0;
              alStack_278[0] = lVar4;
              _pthread_rwlock_rdlock();
              if ((int)plVar8 == 0) {
                puVar19 = (ulong *)puVar15[2];
                if (puVar19 == (ulong *)0x0) {
LAB_10ae4a1c4:
                  uVar18 = 0;
                  lStack_318 = 0;
                }
                else {
                  if (puVar19[4] == 0) {
                    if (*puVar19 != 0) {
                      uVar18 = 0;
                      do {
                        if (*(long **)(puVar19[1] + uVar18 * 8) == alStack_278) goto LAB_10ae4a218;
                        uVar18 = uVar18 + 1;
                      } while (*puVar19 != uVar18);
                    }
                    goto LAB_10ae4a1c4;
                  }
                  uVar16 = *puVar19;
                  if ((int)puVar19[2] == 0) {
                    if (uVar16 != 0) {
                      uVar18 = 0;
                      do {
                        uStack_258 = *(undefined8 *)(puVar19[1] + uVar18 * 8);
                        aplStack_308[0] = alStack_278;
                        pplVar5 = aplStack_308;
                        (*(code *)puVar19[4])(pplVar5,&uStack_258);
                        if ((int)pplVar5 == 0) goto LAB_10ae4a218;
                        uVar18 = uVar18 + 1;
                      } while (uVar18 < *puVar19);
                    }
LAB_10ae4a20c:
                    uVar18 = 0;
                    lStack_318 = 0;
                  }
                  else {
                    if (uVar16 == 0) goto LAB_10ae4a20c;
                    uVar21 = 0;
                    do {
                      uVar18 = uVar21 + ((uVar16 - uVar21) - 1 >> 1);
                      uStack_258 = *(undefined8 *)(puVar19[1] + uVar18 * 8);
                      aplStack_308[0] = alStack_278;
                      pplVar5 = aplStack_308;
                      (*(code *)puVar19[4])(pplVar5,&uStack_258);
                      if ((int)pplVar5 < 1) {
                        if (-1 < (int)pplVar5) {
                          if (uVar16 - uVar21 == 1) goto LAB_10ae4a218;
                          uVar18 = uVar18 + 1;
                        }
                      }
                      else {
                        uVar21 = uVar18 + 1;
                        uVar18 = uVar16;
                      }
                      uVar16 = uVar18;
                    } while (uVar21 < uVar18);
                    uVar18 = 0;
                    lStack_318 = 0;
                    param_1 = plStack_330;
                    pcVar22 = pcStack_338;
                  }
                }
                goto LAB_10ae4a23c;
              }
              goto LAB_10ae4a750;
            }
            func_0x000107c2b29c(0xb,0,0x41,&UNK_10f6cd320,0x13e);
            break;
          }
          uVar14 = 0;
          lVar4 = lStack_348;
        } while ((uStack_33c & 1) != 0);
LAB_10ae4a6b0:
        puVar15 = (ulong *)0x0;
LAB_10ae4a6d4:
        pplVar1 = (long **)&uStack_380;
        plVar9 = (long *)plVar3[1];
        pcVar24 = (code *)0x10ae4a6dc;
        goto code_r0x0001001e33e0;
      }
      uVar12 = 7;
      uVar13 = 0x12d;
    }
    else {
      if (iVar10 == 2) {
        plVar8 = alStack_1c8;
        apuStack_250[0] = auStack_1d8;
        pcVar22 = "r";
        goto LAB_10ae4a030;
      }
      uVar12 = 0x85;
      uVar13 = 0x128;
    }
    plVar8 = (long *)0xb;
    func_0x000107c2b29c(0xb,0,uVar12,&UNK_10f6cd320,uVar13);
    unaff_x21 = param_2;
    unaff_x22 = param_1;
  }
  param_1 = unaff_x22;
  puVar15 = (ulong *)0x0;
  param_2 = unaff_x21;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return (long *)0x0;
  }
LAB_10ae4a754:
  ___stack_chk_fail();
  pplVar1 = &plStack_3b0;
  pcStack_388 = FUN_10ae4a758;
  plVar3 = plVar8;
  plStack_3b0 = param_1;
  uStack_3a8 = param_2;
  puStack_3a0 = puVar15;
  plStack_398 = unaff_x19;
  ppppuStack_390 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((long *)*plVar8 == (long *)0x0) {
    puVar19 = (ulong *)plVar8[2];
    if (puVar19 == (ulong *)0x0) {
      pplVar1 = (long **)&uStack_380;
      plVar9 = plVar8;
      plVar3 = unaff_x19;
      pcVar24 = pcStack_388;
    }
    else {
      uVar18 = *puVar19;
      if (uVar18 != 0) {
        uVar16 = 0;
        do {
          if (*(long *)(puVar19[1] + uVar16 * 8) != 0) {
            func_0x000107c2b534();
            uVar18 = *puVar19;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar18);
      }
      plVar9 = (long *)puVar19[1];
      puVar15 = puVar19;
      pppppuVar23 = &ppppuStack_390;
      pcVar24 = (code *)0x10ae4a7b4;
    }
  }
  else {
    pplVar1 = &plStack_3b0;
    plVar9 = (long *)*plVar8;
    pppppuVar23 = &ppppuStack_390;
    pcVar24 = (code *)0x10ae4a778;
  }
code_r0x0001001e33e0:
  if (plVar9 != (long *)0x0) {
    *(ulong **)((long)pplVar1 + -0x20) = puVar15;
    *(long **)((long)pplVar1 + -0x18) = plVar3;
    *(undefined8 ******)((long)pplVar1 + -0x10) = pppppuVar23;
    *(code **)((long)pplVar1 + -8) = pcVar24;
    plVar9 = plVar9 + -1;
    if (*plVar9 + 8 != 0) {
      func_0x000107c60ee4(plVar9,*plVar9 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(plVar9);
    return plVar9;
  }
  return (long *)0x0;
LAB_10ae4a218:
  lStack_318 = *(long *)(*(long *)(puVar15[2] + 8) + uVar18 * 8);
  uVar18 = (ulong)*(uint *)(lStack_318 + 8);
  param_1 = plStack_330;
  pcVar22 = pcStack_338;
LAB_10ae4a23c:
  plVar8 = (long *)0x1133110b0;
  _pthread_rwlock_unlock();
  if ((int)plVar8 != 0) goto LAB_10ae4a750;
LAB_10ae4a24c:
  lVar6 = plVar3[1];
  lVar11 = plVar3[2];
  uStack_380 = *puVar15;
  while( true ) {
    uStack_378 = 0x2f;
    lStack_370 = lVar4;
    pcStack_368 = pcVar22;
    uStack_360 = uVar18;
    func_0x000107c2b540(lVar6,lVar11,&UNK_10f6cd394);
    lVar6 = plVar3[1];
    _stat(lVar6,aplStack_308);
    iVar17 = (int)uVar18;
    if ((int)lVar6 < 0) break;
    if (iVar10 == 1) {
      plVar8 = param_1;
      FUN_10ae4a9a0(param_1,plVar3[1],(int)puVar15[1]);
      iVar2 = (int)plVar8;
joined_r0x00010ae4a2b0:
      if (iVar2 == 0) break;
    }
    else if (iVar10 == 2) {
      plVar8 = param_1;
      func_0x00010ae4abd0(param_1,plVar3[1],(int)puVar15[1]);
      iVar2 = (int)plVar8;
      goto joined_r0x00010ae4a2b0;
    }
    uVar18 = (ulong)(iVar17 + 1);
    lVar6 = plVar3[1];
    lVar11 = plVar3[2];
    uStack_380 = *puVar15;
  }
  plVar8 = (long *)(param_1[3] + 0x10);
  _pthread_rwlock_wrlock();
  if ((int)plVar8 != 0) goto LAB_10ae4a750;
  func_0x000107c2b5bc(*(undefined8 *)(param_1[3] + 8));
  puVar19 = *(ulong **)(param_1[3] + 8);
  puVar20 = (undefined4 *)0x0;
  if (puVar19 != (ulong *)0x0) {
    if (puVar19[4] == 0) {
      if (*puVar19 == 0) {
        puVar20 = (undefined4 *)0x0;
      }
      else {
        uVar18 = 0;
        do {
          if (*(long **)(puVar19[1] + uVar18 * 8) == &lStack_268) goto LAB_10ae4a3fc;
          uVar18 = uVar18 + 1;
        } while (*puVar19 != uVar18);
LAB_10ae4a430:
        puVar20 = (undefined4 *)0x0;
      }
    }
    else {
      uVar16 = *puVar19;
      if ((int)puVar19[2] == 0) {
        if (uVar16 != 0) {
          uVar18 = 0;
          do {
            uStack_258 = *(undefined8 *)(puVar19[1] + uVar18 * 8);
            aplStack_308[0] = &lStack_268;
            pplVar5 = aplStack_308;
            (*(code *)puVar19[4])(pplVar5,&uStack_258);
            if ((int)pplVar5 == 0) goto LAB_10ae4a3fc;
            uVar18 = uVar18 + 1;
          } while (uVar18 < *puVar19);
          goto LAB_10ae4a430;
        }
      }
      else if (uVar16 != 0) {
        uVar21 = 0;
        do {
          uVar18 = uVar21 + ((uVar16 - uVar21) - 1 >> 1);
          uStack_258 = *(undefined8 *)(puVar19[1] + uVar18 * 8);
          aplStack_308[0] = &lStack_268;
          pplVar5 = aplStack_308;
          (*(code *)puVar19[4])(pplVar5,&uStack_258);
          if ((int)pplVar5 < 1) {
            if (-1 < (int)pplVar5) {
              if (uVar16 - uVar21 == 1) goto LAB_10ae4a3fc;
              uVar18 = uVar18 + 1;
            }
          }
          else {
            uVar21 = uVar18 + 1;
            uVar18 = uVar16;
          }
          param_1 = plStack_330;
          uVar16 = uVar18;
          pcVar22 = pcStack_338;
        } while (uVar21 < uVar18);
      }
LAB_10ae4a458:
      puVar20 = (undefined4 *)0x0;
    }
  }
LAB_10ae4a460:
  plVar8 = (long *)(param_1[3] + 0x10);
  _pthread_rwlock_unlock();
  if ((int)plVar8 != 0) goto LAB_10ae4a750;
  if (iVar10 == 2) {
    plVar8 = (long *)0x1133110b0;
    puStack_328 = puVar20;
    _pthread_rwlock_wrlock();
    if ((int)plVar8 != 0) goto LAB_10ae4a750;
    lVar6 = lStack_318;
    if (lStack_318 == 0) {
      alStack_278[0] = lVar4;
      func_0x000107c2b5bc(puVar15[2]);
      puVar19 = (ulong *)puVar15[2];
      if (puVar19 != (ulong *)0x0) {
        if (puVar19[4] == 0) {
          if (*puVar19 != 0) {
            uVar18 = 0;
            do {
              if (*(long **)(puVar19[1] + uVar18 * 8) == alStack_278) goto LAB_10ae4a5b0;
              uVar18 = uVar18 + 1;
            } while (*puVar19 != uVar18);
          }
        }
        else {
          uVar16 = *puVar19;
          if ((int)puVar19[2] == 0) {
            if (uVar16 != 0) {
              uVar18 = 0;
              do {
                uStack_258 = *(undefined8 *)(puVar19[1] + uVar18 * 8);
                aplStack_308[0] = alStack_278;
                pplVar5 = aplStack_308;
                (*(code *)puVar19[4])(pplVar5,&uStack_258);
                if ((int)pplVar5 == 0) goto LAB_10ae4a5b0;
                uVar18 = uVar18 + 1;
              } while (uVar18 < *puVar19);
            }
          }
          else if (uVar16 != 0) {
            uVar21 = 0;
            do {
              param_1 = (long *)(uVar16 - uVar21);
              uVar18 = uVar21 + ((long)param_1 - 1U >> 1);
              uStack_258 = *(undefined8 *)(puVar19[1] + uVar18 * 8);
              aplStack_308[0] = alStack_278;
              pplVar5 = aplStack_308;
              (*(code *)puVar19[4])(pplVar5,&uStack_258);
              if ((int)pplVar5 < 1) {
                if (-1 < (int)pplVar5) {
                  if (param_1 == (long *)0x1) goto LAB_10ae4a5b0;
                  uVar18 = uVar18 + 1;
                }
              }
              else {
                uVar21 = uVar18 + 1;
                uVar18 = uVar16;
              }
              uVar16 = uVar18;
            } while (uVar21 < uVar18);
          }
        }
      }
LAB_10ae4a5d0:
      puVar7 = (undefined8 *)0x18;
      _malloc();
      if (puVar7 == (undefined8 *)0x0) {
        plVar8 = (long *)0x1133110b0;
        _pthread_rwlock_unlock();
        if ((int)plVar8 == 0) goto LAB_10ae4a6b0;
        goto LAB_10ae4a750;
      }
      *puVar7 = 0x10;
      plVar9 = puVar7 + 1;
      *plVar9 = lVar4;
      *(int *)(puVar7 + 2) = iVar17;
      puVar7 = (undefined8 *)puVar15[2];
      func_0x000107c2b5ac(puVar7,plVar9,*puVar7);
      if (puVar7 == (undefined8 *)0x0) {
        plVar8 = (long *)0x1133110b0;
        _pthread_rwlock_unlock();
        if ((int)plVar8 == 0) {
          pcVar24 = (code *)0x10ae4a74c;
          goto code_r0x0001001e33e0;
        }
        goto LAB_10ae4a750;
      }
      func_0x000107c2b5bc(puVar15[2]);
    }
    else {
LAB_10ae4a494:
      if (*(int *)(lVar6 + 8) < iVar17) {
        *(int *)(lVar6 + 8) = iVar17;
      }
    }
    plVar8 = (long *)0x1133110b0;
    _pthread_rwlock_unlock();
    param_1 = plStack_330;
    puVar20 = puStack_328;
    pcVar22 = pcStack_338;
    if ((int)plVar8 != 0) {
LAB_10ae4a750:
      _abort();
      unaff_x19 = plVar3;
      goto LAB_10ae4a754;
    }
  }
  if (puVar20 != (undefined4 *)0x0) {
    *puStack_350 = *puVar20;
    *(undefined8 *)(puStack_350 + 2) = *(undefined8 *)(puVar20 + 2);
    func_0x000107c2b290();
    puVar15 = (ulong *)0x1;
    goto LAB_10ae4a6d4;
  }
  uVar18 = uStack_310 + 1;
  goto LAB_10ae4a08c;
LAB_10ae4a3fc:
  puVar19 = *(ulong **)(plStack_330[3] + 8);
  param_1 = plStack_330;
  pcVar22 = pcStack_338;
  if (puVar19 == (ulong *)0x0) goto LAB_10ae4a458;
  if (*puVar19 <= uVar18) goto LAB_10ae4a430;
  puVar20 = *(undefined4 **)(puVar19[1] + uVar18 * 8);
  goto LAB_10ae4a460;
LAB_10ae4a5b0:
  puVar19 = (ulong *)puVar15[2];
  if (((puVar19 == (ulong *)0x0) || (*puVar19 <= uVar18)) ||
     (lVar6 = *(long *)(puVar19[1] + uVar18 * 8), lVar6 == 0)) goto LAB_10ae4a5d0;
  goto LAB_10ae4a494;
}



/* Entry: 10ae4a758; end: 10ae4a7cf;  */

/* WARNING: Possible PIC construction at 0x00010ae4a774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ae4a7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ae4a7b4) */

void FUN_10ae4a758(long *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  ulong uVar3;
  long *unaff_x19;
  ulong *unaff_x20;
  ulong *puVar4;
  ulong uVar5;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((long *)*param_1 == (long *)0x0) {
    puVar4 = (ulong *)param_1[2];
    plVar2 = param_1;
    if (puVar4 != (ulong *)0x0) {
      uVar3 = *puVar4;
      if (uVar3 != 0) {
        uVar5 = 0;
        do {
          if (*(long *)(puVar4[1] + uVar5 * 8) != 0) {
            func_0x000107c2b534();
            uVar3 = *puVar4;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
      }
      unaff_x30 = 0x10ae4a7b4;
      register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
      plVar2 = (long *)puVar4[1];
      unaff_x19 = param_1;
      unaff_x20 = puVar4;
      unaff_x29 = puVar1;
    }
  }
  else {
    unaff_x30 = 0x10ae4a778;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    plVar2 = (long *)*param_1;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  if (plVar2 == (long *)0x0) {
    return;
  }
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  plVar2 = plVar2 + -1;
  if (*plVar2 + 8 != 0) {
    func_0x000107c60ee4(plVar2,*plVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(plVar2);
  return;
}



/* Entry: 10ae4a7d0; end: 10ae4a97f;  */

void FUN_10ae4a7d0(long param_1,char *param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  
  if ((param_2 != (char *)0x0) && (cVar13 = *param_2, pcVar16 = param_2, cVar13 != '\0')) {
    do {
      if ((cVar13 == ':') || (cVar13 == '\0')) {
        lVar2 = (long)pcVar16 - (long)param_2;
        if (lVar2 != 0) {
          plVar10 = *(long **)(param_1 + 8);
          if (plVar10 == (long *)0x0) {
            lVar14 = 0;
            func_0x000107c2b59c();
            *(long *)(param_1 + 8) = lVar14;
            if (lVar14 == 0) {
              uVar8 = 0x41;
              uVar9 = 0xe2;
              goto LAB_10ae4a920;
            }
          }
          else {
            lVar14 = *plVar10;
            if (lVar14 != 0) {
              lVar15 = 0;
              lVar11 = plVar10[1];
              do {
                lVar12 = **(long **)(lVar11 + lVar15 * 8);
                lVar3 = lVar12;
                _strlen();
                if ((lVar3 == lVar2) && (_strncmp(lVar12,param_2,lVar2), (int)lVar12 == 0))
                goto LAB_10ae4a8f8;
                lVar15 = lVar15 + 1;
              } while (lVar14 != lVar15);
            }
          }
          puVar4 = (undefined8 *)0x20;
          _malloc();
          if (puVar4 == (undefined8 *)0x0) {
            return;
          }
          *puVar4 = 0x18;
          *(undefined4 *)(puVar4 + 2) = param_3;
          pcVar5 = FUN_10ae4a980;
          func_0x000107c2b59c();
          puVar4[3] = pcVar5;
          uVar1 = lVar2 + 1;
          if (uVar1 < 0xfffffffffffffff8) {
            puVar6 = (ulong *)(lVar2 + 9);
            _malloc();
            if (puVar6 != (ulong *)0x0) {
              *puVar6 = uVar1;
              puVar4[1] = puVar6 + 1;
              if (pcVar5 == (code *)0x0) goto LAB_10ae4a93c;
              FUN_10ae45668(puVar6 + 1,param_2,uVar1);
              puVar7 = *(undefined8 **)(param_1 + 8);
              func_0x000107c2b5ac(puVar7,puVar4 + 1,*puVar7);
              if (puVar7 == (undefined8 *)0x0) goto LAB_10ae4a93c;
              cVar13 = *pcVar16;
              goto LAB_10ae4a8f8;
            }
          }
          puVar4[1] = 0;
LAB_10ae4a93c:
          FUN_10ae4a758(puVar4 + 1);
          return;
        }
LAB_10ae4a8f8:
        if (cVar13 == '\0') {
          return;
        }
        param_2 = pcVar16 + 1;
      }
      cVar13 = pcVar16[1];
      pcVar16 = pcVar16 + 1;
    } while( true );
  }
  uVar8 = 0x6e;
  uVar9 = 0xc9;
LAB_10ae4a920:
  func_0x000107c2b29c(0xb,0,uVar8,&UNK_10f6cd320,uVar9);
  return;
}


