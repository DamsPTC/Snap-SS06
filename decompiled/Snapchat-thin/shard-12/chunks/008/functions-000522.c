/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10980e738; end: 10980e76b;  */

void FUN_10980e738(long param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  param_1 = param_1 + (long)param_2 * 0x10;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  param_3[1] = *(undefined8 *)(param_1 + 0x58);
  *param_3 = uVar1;
  return;
}



/* Entry: 10980e76c; end: 10980e8f7;  */

bool FUN_10980e76c(float param_1,long *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float fVar9;
  float fVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  bVar2 = false;
  fVar11 = *(float *)(param_2 + 10);
  fVar9 = *(float *)((long)param_2 + 0x54);
  fVar10 = *(float *)(param_2 + 0xb);
  auVar17._0_4_ = *(float *)(param_2 + 0xc) - fVar11;
  auVar17._4_4_ = *(float *)((long)param_2 + 100) - fVar9;
  auVar17._8_4_ = *(float *)(param_2 + 0xd) - fVar10;
  auVar17._12_4_ = 0;
  auVar16._0_4_ = *(float *)(param_2 + 0xe) - fVar11;
  auVar16._4_4_ = *(float *)((long)param_2 + 0x74) - fVar9;
  auVar16._8_4_ = *(float *)(param_2 + 0xf) - fVar10;
  auVar16._12_4_ = 0;
  auVar20 = NEON_ext(auVar17,auVar17,0xc,1);
  auVar21 = NEON_ext(auVar20,auVar17,8,1);
  auVar20 = NEON_ext(auVar16,auVar16,0xc,1);
  auVar24 = NEON_ext(auVar20,auVar16,8,1);
  auVar20._0_4_ = auVar24._0_4_ * auVar17._0_4_ - auVar21._0_4_ * auVar16._0_4_;
  auVar20._4_4_ = auVar24._4_4_ * auVar17._4_4_ - auVar21._4_4_ * auVar16._4_4_;
  auVar20._8_4_ = auVar24._8_4_ * auVar17._8_4_ - auVar21._8_4_ * auVar16._8_4_;
  auVar20._12_4_ = auVar24._12_4_ * 0.0 - auVar21._12_4_ * 0.0;
  auVar17 = NEON_ext(auVar20,auVar20,0xc,1);
  auVar17 = NEON_ext(auVar17,auVar20,8,1);
  fVar19 = auVar17._0_4_;
  auVar18._0_4_ = fVar19 * fVar19;
  fVar22 = auVar17._4_4_;
  auVar18._4_4_ = fVar22 * fVar22;
  fVar23 = auVar17._8_4_;
  auVar18._8_4_ = fVar23 * fVar23;
  auVar18._12_4_ = 0;
  auVar17 = NEON_ext(auVar18,auVar18,8,1);
  fVar15 = 1.0 / SQRT(auVar18._0_4_ + auVar18._4_4_ + auVar17._0_4_);
  fVar19 = fVar19 * fVar15;
  fVar22 = fVar22 * fVar15;
  fVar23 = fVar23 * fVar15;
  fVar15 = fVar15 * 0.0;
  auVar21._0_4_ = *param_3 * fVar19;
  auVar21._4_4_ = param_3[1] * fVar22;
  auVar21._8_4_ = param_3[2] * fVar23;
  auVar21._12_4_ = param_3[3] * fVar15;
  auVar17 = NEON_ext(auVar21,auVar21,8,1);
  auVar24._0_4_ = fVar11 * fVar19;
  auVar24._4_4_ = fVar9 * fVar22;
  auVar24._8_4_ = fVar10 * fVar23;
  auVar24._12_4_ = *(float *)((long)param_2 + 0x5c) * fVar15;
  auVar20 = NEON_ext(auVar24,auVar24,8,1);
  fVar11 = (auVar21._0_4_ + auVar21._4_4_ + auVar17._0_4_) -
           (auVar24._0_4_ + auVar24._4_4_ + auVar20._0_4_);
  bVar3 = false;
  bVar4 = true;
  if (-param_1 <= fVar11) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar11) && !NAN(param_1)) {
      bVar3 = fVar11 == param_1;
      bVar4 = param_1 <= fVar11;
    }
  }
  if (!bVar4 || bVar3) {
    iVar5 = 0;
    auVar1._4_4_ = fVar22;
    auVar1._0_4_ = fVar19;
    auVar1._8_4_ = fVar23;
    auVar1._12_4_ = fVar15;
    auVar17 = NEON_ext(auVar1,auVar1,0xc,1);
    auVar17 = NEON_ext(auVar17,auVar1,8,1);
    do {
      (**(code **)(*param_2 + 0xd8))(param_2,iVar5,&fStack_50,&fStack_60);
      auVar6._0_4_ = fStack_60 - fStack_50;
      auVar6._4_4_ = fStack_5c - fStack_4c;
      auVar6._8_4_ = fStack_58 - fStack_48;
      auVar6._12_4_ = fStack_54 - fStack_44;
      auVar20 = NEON_ext(auVar6,auVar6,0xc,1);
      auVar20 = NEON_ext(auVar20,auVar6,8,1);
      fStack_80 = auVar17._0_4_;
      fStack_7c = auVar17._4_4_;
      fStack_78 = auVar17._8_4_;
      fStack_74 = auVar17._12_4_;
      auVar7._0_4_ = fStack_80 * auVar6._0_4_ - fVar19 * auVar20._0_4_;
      auVar7._4_4_ = fStack_7c * auVar6._4_4_ - fVar22 * auVar20._4_4_;
      auVar7._8_4_ = fStack_78 * auVar6._8_4_ - fVar23 * auVar20._8_4_;
      auVar7._12_4_ = fStack_74 * auVar6._12_4_ - fVar15 * auVar20._12_4_;
      auVar20 = NEON_ext(auVar7,auVar7,0xc,1);
      auVar20 = NEON_ext(auVar20,auVar7,8,1);
      fVar11 = auVar20._0_4_;
      auVar13._0_4_ = fVar11 * fVar11;
      fVar9 = auVar20._4_4_;
      auVar13._4_4_ = fVar9 * fVar9;
      fVar10 = auVar20._8_4_;
      auVar13._8_4_ = fVar10 * fVar10;
      auVar13._12_4_ = 0;
      auVar20 = NEON_ext(auVar13,auVar13,8,1);
      fVar12 = 1.0 / SQRT(auVar13._0_4_ + auVar13._4_4_ + auVar20._0_4_);
      auVar14._0_4_ = *param_3 * fVar11 * fVar12;
      auVar14._4_4_ = param_3[1] * fVar9 * fVar12;
      auVar14._8_4_ = param_3[2] * fVar10 * fVar12;
      auVar14._12_4_ = param_3[3] * fVar12 * 0.0;
      auVar21 = NEON_ext(auVar14,auVar14,8,1);
      auVar8._0_4_ = fStack_50 * fVar11 * fVar12;
      auVar8._4_4_ = fStack_4c * fVar9 * fVar12;
      auVar8._8_4_ = fStack_48 * fVar10 * fVar12;
      auVar8._12_4_ = fStack_44 * fVar12 * 0.0;
      auVar20 = NEON_ext(auVar8,auVar8,8,1);
      bVar2 = -param_1 <=
              (auVar14._0_4_ + auVar14._4_4_ + auVar21._0_4_) -
              (auVar8._0_4_ + auVar8._4_4_ + auVar20._0_4_);
      bVar3 = iVar5 != 2;
      iVar5 = iVar5 + 1;
    } while (bVar2 && bVar3);
  }
  return bVar2;
}



/* Entry: 10980e8f8; end: 10980e96b;  */

void FUN_10980e8f8(long param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar7._0_4_ = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x50);
  auVar7._4_4_ = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x54);
  auVar7._8_4_ = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x58);
  auVar7._12_4_ = 0;
  auVar6._0_4_ = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x50);
  auVar6._4_4_ = *(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x54);
  auVar6._8_4_ = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x58);
  auVar6._12_4_ = 0;
  auVar8 = NEON_ext(auVar7,auVar7,0xc,1);
  auVar9 = NEON_ext(auVar8,auVar7,8,1);
  auVar8 = NEON_ext(auVar6,auVar6,0xc,1);
  auVar10 = NEON_ext(auVar8,auVar6,8,1);
  auVar8._0_4_ = auVar10._0_4_ * auVar7._0_4_ - auVar9._0_4_ * auVar6._0_4_;
  auVar8._4_4_ = auVar10._4_4_ * auVar7._4_4_ - auVar9._4_4_ * auVar6._4_4_;
  auVar8._8_4_ = auVar10._8_4_ * auVar7._8_4_ - auVar9._8_4_ * auVar6._8_4_;
  auVar8._12_4_ = auVar10._12_4_ * 0.0 - auVar9._12_4_ * 0.0;
  auVar7 = NEON_ext(auVar8,auVar8,0xc,1);
  auVar7 = NEON_ext(auVar7,auVar8,8,1);
  fVar2 = auVar7._0_4_;
  auVar9._0_4_ = fVar2 * fVar2;
  fVar3 = auVar7._4_4_;
  auVar9._4_4_ = fVar3 * fVar3;
  fVar4 = auVar7._8_4_;
  auVar9._8_4_ = fVar4 * fVar4;
  auVar9._12_4_ = 0;
  auVar7 = NEON_ext(auVar9,auVar9,8,1);
  fVar5 = 1.0 / SQRT(auVar9._0_4_ + auVar9._4_4_ + auVar7._0_4_);
  param_3[2] = fVar4 * fVar5;
  param_3[3] = fVar5 * 0.0;
  *param_3 = fVar2 * fVar5;
  param_3[1] = fVar3 * fVar5;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  param_4[1] = *(undefined8 *)(param_1 + 0x58);
  *param_4 = uVar1;
  return;
}



/* Entry: 10980e96c; end: 10980eb0b;  */

undefined *** FUN_10980e96c(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_3c0;
  undefined1 *puStack_3b8;
  undefined ***pppuStack_3b0;
  undefined ***pppuStack_3a8;
  undefined **ppuStack_3a0;
  undefined4 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_2e0 [320];
  undefined4 uStack_1a0;
  undefined1 uStack_180;
  undefined **ppuStack_150;
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  long lStack_124;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined **appuStack_100 [22];
  float fStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  long lStack_28;
  
  iVar1 = (int)&ppuStack_3c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3b0 = &ppuStack_150;
  uStack_318 = 0;
  uStack_320 = 0x3f800000;
  uStack_308 = 0;
  uStack_310 = 0x3f80000000000000;
  uStack_2f8 = 0x3f800000;
  uStack_300 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  appuStack_100[0] = &PTR_DAT_110b12390;
  uStack_48 = 0;
  uStack_40 = 0x2000000000;
  uStack_38 = 0x38d1b717;
  uStack_110 = *(uint *)(param_1 + 0xd0);
  fStack_50 = *(float *)(param_1 + 0xd4);
  uStack_140 = 0;
  ppuStack_150 = &PTR_FUN_110b13f68;
  uStack_148 = 8;
  uStack_130 = NEON_fmov(0x3f800000,4);
  uStack_138 = 0xffffffffffffffff;
  uStack_128 = 0x3f800000;
  uStack_11c = 0;
  uStack_114 = 0;
  lStack_124 = (ulong)uStack_110 << 0x20;
  uStack_10c = 0;
  uStack_390 = 0;
  uStack_388 = 0xffffffffffffffff;
  uStack_378 = 0x3f800000;
  uStack_380 = 0x3f8000003f800000;
  uStack_360 = 0x3d23d70a;
  uStack_358 = 0;
  uStack_398 = 1;
  uStack_348 = param_2[1];
  uStack_350 = *param_2;
  uStack_338 = param_2[3];
  uStack_340 = param_2[2];
  uStack_328 = param_2[5];
  uStack_330 = param_2[4];
  uStack_1a0 = 0x38d1b717;
  uStack_180 = 0;
  puStack_3b8 = auStack_2e0;
  ppuStack_3c0 = &PTR_FUN_110b14298;
  pppuStack_3a8 = &ppuStack_3a0;
  ppuStack_3a0 = &PTR_DAT_110b12890;
  FUN_1098245e8(&ppuStack_3c0,param_1 + 0x10,param_1 + 0x50,&uStack_320,&uStack_320,appuStack_100);
  if ((iVar1 != 0) && (fStack_50 < *(float *)(param_1 + 0xd4))) {
    *(float *)(param_1 + 0xd4) = fStack_50;
  }
  pppuVar2 = &ppuStack_3a0;
  FUN_10981b858();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar2;
  }
  ___stack_chk_fail();
  FUN_10981b858(&ppuStack_3a0);
  __Unwind_Resume();
  if ((pppuVar2[2] != (undefined **)0x0) && (*(char *)(pppuVar2 + 3) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(pppuVar2 + 3) = 1;
  pppuVar2[2] = (undefined **)0x0;
  *(undefined4 *)((long)pppuVar2 + 4) = 0;
  *(undefined4 *)(pppuVar2 + 1) = 0;
  return pppuVar2;
}



/* Entry: 10980eb0c; end: 10980eb57;  */

long FUN_10980eb0c(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 10980eb58; end: 10980eb5f;  */

void FUN_10980eb58(void)

{
  return;
}



/* Entry: 10980eb60; end: 10980ebc3;  */

undefined8 * FUN_10980eb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12a28;
  if ((*(char *)(param_1 + 0xb) == '\x01') && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  FUN_10980eb0c(param_1 + 7);
  FUN_10980eb0c(param_1 + 3);
  return param_1;
}



/* Entry: 10980ebc4; end: 10980ebc7;  */

undefined8 * FUN_10980ebc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12a28;
  if ((*(char *)(param_1 + 0xb) == '\x01') && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  FUN_10980eb0c(param_1 + 7);
  FUN_10980eb0c(param_1 + 3);
  return param_1;
}



/* Entry: 10980ebc8; end: 10980ebdb;  */

void FUN_10980ebc8(void)

{
  FUN_10980eb60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10980ebdc; end: 109810eeb;  */

/* WARNING: Removing unreachable block (ram,0x0001098103f0) */
/* WARNING: Removing unreachable block (ram,0x00010980f38c) */
/* WARNING: Removing unreachable block (ram,0x000109810210) */
/* WARNING: Removing unreachable block (ram,0x00010981080c) */
/* WARNING: Removing unreachable block (ram,0x000109810848) */
/* WARNING: Removing unreachable block (ram,0x000109810238) */
/* WARNING: Removing unreachable block (ram,0x00010980ff70) */
/* WARNING: Removing unreachable block (ram,0x000109810424) */
/* WARNING: Removing unreachable block (ram,0x000109810840) */

void FUN_10980ebdc(long param_1,long param_2,long param_3,long param_4,long *param_5)

{
  long lVar1;
  uint uVar2;
  undefined ***pppuVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined ***pppuVar18;
  ulong uVar19;
  int *piVar20;
  int *piVar21;
  long *plVar22;
  int *piVar23;
  ulong uVar24;
  uint uVar25;
  undefined1 (*pauVar26) [12];
  undefined1 (*pauVar27) [16];
  undefined8 *puVar28;
  float *pfVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined ***pppuVar35;
  int iVar36;
  long *plVar37;
  int iVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar59;
  float fVar60;
  float fVar72;
  undefined1 auVar61 [12];
  float fVar71;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar91;
  undefined1 auVar87 [12];
  undefined1 auVar88 [16];
  undefined1 auVar90 [16];
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  byte bVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  float fVar111;
  float fVar113;
  float fVar114;
  undefined1 auVar112 [16];
  float fVar115;
  float fVar116;
  undefined1 auVar117 [16];
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined8 uVar136;
  undefined8 uVar137;
  float fStack_608;
  float fStack_604;
  float fStack_600;
  float fStack_5fc;
  float fStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  undefined4 uStack_594;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  undefined **ppuStack_4f0;
  undefined4 uStack_4e8;
  uint uStack_4e4;
  uint uStack_4e0;
  ulong uStack_4d8;
  byte bStack_4d0;
  undefined8 uStack_4c4;
  long *plStack_4b8;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  undefined8 uStack_4a4;
  float fStack_49c;
  undefined8 uStack_498;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  undefined8 uStack_480;
  undefined8 uStack_478;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [4];
  uint uStack_3dc;
  uint uStack_3d8;
  int *piStack_3d0;
  byte bStack_3c8;
  long lStack_3c0;
  float fStack_3b8;
  float fStack_3b4;
  undefined1 auStack_3b0 [16];
  undefined8 uStack_3a0;
  uint uStack_398;
  ulong uStack_390;
  byte bStack_388;
  undefined **ppuStack_380;
  long *plStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  float fStack_358;
  char cStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined **appuStack_330 [2];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  long *plStack_300;
  undefined ***pppuStack_2f8;
  int iStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 uStack_2e0;
  undefined4 uStack_2d8;
  undefined8 uStack_2cc;
  undefined1 auStack_2c0 [320];
  undefined4 uStack_180;
  undefined1 uStack_160;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  long lStack_a0;
  undefined1 auVar52 [16];
  undefined1 auVar58 [16];
  undefined1 auVar66 [16];
  undefined1 auVar89 [16];
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar18 = *(undefined ****)(param_1 + 0x60);
  if (pppuVar18 == (undefined ***)0x0) {
    pppuVar18 = *(undefined ****)(param_1 + 8);
    (*(code *)(*pppuVar18)[3])
              (pppuVar18,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + 0x10));
    *(undefined ****)(param_1 + 0x60) = pppuVar18;
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  param_5[1] = (long)pppuVar18;
  plVar37 = *(long **)(param_2 + 8);
  pppuVar35 = *(undefined ****)(param_3 + 8);
  if ((int)plVar37[1] == 8) {
    if (*(int *)(pppuVar35 + 1) == 10) {
      iVar38 = *(int *)(pppuVar35 + 9);
      fVar111 = *(float *)((long)pppuVar35 + (long)iVar38 * 4 + 0x30);
      lVar33 = *(long *)(param_2 + 0x18);
      lVar34 = *(long *)(param_3 + 0x18);
      fVar81 = *(float *)(lVar33 + 4);
      fVar59 = *(float *)(lVar33 + 0x14);
      fVar85 = *(float *)(lVar33 + 0x24);
      pfVar29 = (float *)(lVar34 + (long)iVar38 * 4);
      fVar41 = *pfVar29;
      fVar130 = pfVar29[4];
      fVar39 = pfVar29[8];
      fVar113 = *(float *)(lVar34 + 0x30) - *(float *)(lVar33 + 0x30);
      fVar114 = *(float *)(lVar34 + 0x34) - *(float *)(lVar33 + 0x34);
      fVar115 = *(float *)(lVar34 + 0x38) - *(float *)(lVar33 + 0x38);
      auVar125._0_4_ = fVar81 * fVar41;
      auVar125._4_4_ = fVar59 * fVar130;
      auVar125._8_4_ = fVar85 * fVar39;
      auVar125._12_4_ = 0;
      auVar88 = NEON_ext(auVar125,auVar125,8,1);
      fVar122 = auVar125._0_4_ + auVar125._4_4_ + auVar88._0_4_;
      auVar88._0_4_ = fVar81 * fVar113;
      auVar88._4_4_ = fVar59 * fVar114;
      auVar88._8_4_ = fVar85 * fVar115;
      auVar88._12_4_ = 0;
      auVar125 = NEON_ext(auVar88,auVar88,8,1);
      fVar123 = auVar88._0_4_ + auVar88._4_4_ + auVar125._0_4_;
      auVar93._0_4_ = fVar41 * fVar113;
      auVar93._4_4_ = fVar130 * fVar114;
      auVar93._8_4_ = fVar39 * fVar115;
      auVar93._12_4_ = 0;
      auVar125 = NEON_ext(auVar93,auVar93,8,1);
      fVar128 = 1.0 - fVar122 * fVar122;
      fVar118 = -(auVar93._0_4_ + auVar93._4_4_ + auVar125._0_4_);
      fVar121 = 0.0;
      if (fVar128 != 0.0) {
        fVar121 = (fVar123 + fVar122 * fVar118) / fVar128;
        if (0.0 <= fVar121) {
          if (0.0 < fVar121) {
            fVar121 = 0.0;
          }
        }
        else {
          fVar121 = -0.0;
        }
      }
      fVar133 = *(float *)((long)pppuVar18 + 0x364) + *(float *)(param_5 + 6);
      fVar135 = *(float *)((long)pppuVar35 + (long)((iVar38 + 2) % 3) * 4 + 0x30);
      fVar118 = fVar118 + fVar122 * fVar121;
      fVar128 = -fVar111;
      if (fVar128 <= fVar118) {
        fVar128 = fVar118;
        if (fVar111 < fVar118) {
          fVar121 = fVar123 + fVar122 * fVar111;
          fVar128 = fVar111;
          if (0.0 <= fVar121) {
            if (0.0 < fVar121) {
              fVar121 = 0.0;
            }
          }
          else {
            fVar121 = -0.0;
          }
        }
      }
      else {
        fVar121 = fVar123 + fVar122 * fVar128;
        if (0.0 <= fVar121) {
          if (0.0 < fVar121) {
            fVar121 = 0.0;
          }
        }
        else {
          fVar121 = -0.0;
        }
      }
      fVar118 = fVar41 * fVar128 + (fVar113 - fVar81 * fVar121);
      fVar114 = fVar130 * fVar128 + (fVar114 - fVar59 * fVar121);
      fVar115 = fVar39 * fVar128 + (fVar115 - fVar85 * fVar121);
      auVar48._0_4_ = fVar118 * fVar118;
      auVar48._4_4_ = fVar114 * fVar114;
      auVar48._8_4_ = fVar115 * fVar115;
      auVar48._12_4_ = 0;
      auVar125 = NEON_ext(auVar48,auVar48,8,1);
      fVar121 = auVar48._0_4_ + auVar48._4_4_ + auVar125._0_4_;
      fVar113 = SQRT(fVar121);
      fVar111 = (fVar113 - *(float *)(plVar37 + 6) * *(float *)(plVar37 + 4)) - fVar135;
      if (fVar111 <= fVar133) {
        if (fVar121 <= 1.4210855e-14) {
          if (ABS(fVar85) <= 0.70710677) {
            fVar85 = 1.0 / SQRT(fVar59 * fVar59 + fVar81 * fVar81);
            uStack_340 = CONCAT44(fVar81 * fVar85,-(fVar59 * fVar85));
            uStack_338 = (ulong)uStack_338._4_4_ << 0x20;
          }
          else {
            fVar81 = 1.0 / SQRT(fVar85 * fVar85 + fVar59 * fVar59);
            uStack_340 = (ulong)(uint)-(fVar85 * fVar81) << 0x20;
            uStack_338 = CONCAT44(uStack_338._4_4_,fVar59 * fVar81);
          }
        }
        else {
          fVar113 = -1.0 / fVar113;
          uStack_340 = CONCAT44(fVar114 * fVar113,fVar118 * fVar113);
          uStack_338 = (ulong)(uint)(fVar115 * fVar113);
        }
        fStack_350 = *(float *)(lVar34 + 0x30) + fVar41 * fVar128 + (float)uStack_340 * fVar135;
        fStack_34c = *(float *)(lVar34 + 0x34) + fVar130 * fVar128 + uStack_340._4_4_ * fVar135;
        fStack_348 = *(float *)(lVar34 + 0x38) + fVar39 * fVar128 + (float)uStack_338 * fVar135;
        fStack_344 = *(float *)(lVar34 + 0x3c) + 0.0 + 0.0;
      }
      if (fVar111 < fVar133) {
        (**(code **)(*param_5 + 0x20))(param_5,&uStack_340,&fStack_350);
        pppuVar18 = (undefined ***)param_5[1];
      }
      if (*(int *)(pppuVar18 + 0x6c) != 0) {
        if (pppuVar18[0x6a] == *(undefined ***)(param_5[2] + 0x10)) {
          FUN_10982280c();
        }
        else {
          FUN_10982280c();
        }
      }
      goto LAB_109810e2c;
    }
  }
  else if ((int)plVar37[1] == 10) {
    if (*(int *)(pppuVar35 + 1) == 8) {
      iVar38 = (int)plVar37[9];
      fVar39 = *(float *)((long)plVar37 + (long)iVar38 * 4 + 0x30);
      lVar33 = *(long *)(param_2 + 0x18);
      lVar34 = *(long *)(param_3 + 0x18);
      pfVar29 = (float *)(lVar33 + (long)iVar38 * 4);
      fVar81 = *pfVar29;
      fVar59 = pfVar29[4];
      fVar85 = pfVar29[8];
      fVar111 = *(float *)(lVar34 + 4);
      fVar113 = *(float *)(lVar34 + 0x14);
      fVar114 = *(float *)(lVar34 + 0x24);
      fVar115 = *(float *)(lVar34 + 0x30) - *(float *)(lVar33 + 0x30);
      fVar118 = *(float *)(lVar34 + 0x34) - *(float *)(lVar33 + 0x34);
      fVar121 = *(float *)(lVar34 + 0x38) - *(float *)(lVar33 + 0x38);
      auVar46._0_4_ = fVar81 * fVar111;
      auVar46._4_4_ = fVar59 * fVar113;
      auVar46._8_4_ = fVar85 * fVar114;
      auVar46._12_4_ = 0;
      auVar125 = NEON_ext(auVar46,auVar46,8,1);
      fVar128 = auVar46._0_4_ + auVar46._4_4_ + auVar125._0_4_;
      auVar97._0_4_ = fVar81 * fVar115;
      auVar97._4_4_ = fVar59 * fVar118;
      auVar97._8_4_ = fVar85 * fVar121;
      auVar97._12_4_ = 0;
      auVar125 = NEON_ext(auVar97,auVar97,8,1);
      fVar130 = auVar97._0_4_ + auVar97._4_4_ + auVar125._0_4_;
      auVar112._0_4_ = fVar111 * fVar115;
      auVar112._4_4_ = fVar113 * fVar118;
      auVar112._8_4_ = fVar114 * fVar121;
      auVar112._12_4_ = 0;
      auVar125 = NEON_ext(auVar112,auVar112,8,1);
      fVar123 = 1.0 - fVar128 * fVar128;
      fVar122 = -(auVar112._0_4_ + auVar112._4_4_ + auVar125._0_4_);
      fVar41 = 0.0;
      if (fVar123 != 0.0) {
        fVar123 = (fVar130 + fVar128 * fVar122) / fVar123;
        fVar41 = -fVar39;
        if ((-fVar39 <= fVar123) && (fVar41 = fVar123, fVar39 < fVar123)) {
          fVar41 = fVar39;
        }
      }
      fVar123 = *(float *)((long)pppuVar18 + 0x364) + *(float *)(param_5 + 6);
      fVar133 = *(float *)(pppuVar35 + 6) * *(float *)(pppuVar35 + 4);
      fVar122 = fVar122 + fVar128 * fVar41;
      if (0.0 <= fVar122) {
        if (0.0 < fVar122) {
          fVar122 = 0.0;
          fVar130 = fVar130 + fVar128 * 0.0;
          fVar41 = -fVar39;
          fVar128 = 0.0;
          if (fVar41 <= fVar130) goto LAB_10980f248;
        }
      }
      else {
        fVar122 = -0.0;
        fVar130 = fVar130 + fVar128 * -0.0;
        fVar41 = -fVar39;
        if (-fVar39 <= fVar130) {
          fVar128 = -0.0;
LAB_10980f248:
          fVar41 = fVar130;
          fVar122 = fVar128;
          if (fVar39 < fVar41) {
            fVar41 = fVar39;
          }
        }
      }
      fVar39 = fVar111 * fVar122 + (fVar115 - fVar81 * fVar41);
      fVar115 = fVar113 * fVar122 + (fVar118 - fVar59 * fVar41);
      fVar118 = fVar114 * fVar122 + (fVar121 - fVar85 * fVar41);
      auVar117._0_4_ = fVar39 * fVar39;
      auVar117._4_4_ = fVar115 * fVar115;
      auVar117._8_4_ = fVar118 * fVar118;
      auVar117._12_4_ = 0;
      auVar125 = NEON_ext(auVar117,auVar117,8,1);
      fVar121 = auVar117._0_4_ + auVar117._4_4_ + auVar125._0_4_;
      fVar130 = SQRT(fVar121);
      fVar41 = (fVar130 - *(float *)((long)plVar37 + (long)((iVar38 + 2) % 3) * 4 + 0x30)) - fVar133
      ;
      if (fVar41 <= fVar123) {
        if (fVar121 <= 1.4210855e-14) {
          if (ABS(fVar85) <= 0.70710677) {
            fVar130 = 1.0 / SQRT(fVar59 * fVar59 + fVar81 * fVar81);
            uStack_340 = CONCAT44(fVar81 * fVar130,-(fVar59 * fVar130));
            uStack_338 = (ulong)uStack_338._4_4_ << 0x20;
          }
          else {
            fVar130 = 1.0 / SQRT(fVar85 * fVar85 + fVar59 * fVar59);
            uStack_340 = (ulong)(uint)-(fVar85 * fVar130) << 0x20;
            uStack_338 = CONCAT44(uStack_338._4_4_,fVar59 * fVar130);
          }
        }
        else {
          fVar130 = -1.0 / fVar130;
          uStack_340 = CONCAT44(fVar115 * fVar130,fVar39 * fVar130);
          uStack_338 = (ulong)(uint)(fVar118 * fVar130);
        }
        fStack_350 = *(float *)(lVar34 + 0x30) + fVar111 * fVar122 + (float)uStack_340 * fVar133;
        fStack_34c = *(float *)(lVar34 + 0x34) + fVar113 * fVar122 + uStack_340._4_4_ * fVar133;
        fStack_348 = *(float *)(lVar34 + 0x38) + fVar114 * fVar122 + (float)uStack_338 * fVar133;
        fStack_344 = *(float *)(lVar34 + 0x3c) + 0.0 + 0.0;
      }
      if (fVar41 < fVar123) {
        (**(code **)(*param_5 + 0x20))(param_5,&uStack_340,&fStack_350);
        pppuVar18 = (undefined ***)param_5[1];
      }
      if (*(int *)(pppuVar18 + 0x6c) != 0) {
        if (pppuVar18[0x6a] == *(undefined ***)(param_5[2] + 0x10)) {
          FUN_10982280c();
        }
        else {
          FUN_10982280c();
        }
      }
      goto LAB_109810e2c;
    }
    if (*(int *)(pppuVar35 + 1) == 10) {
      iVar38 = (int)plVar37[9];
      fVar39 = *(float *)((long)plVar37 + (long)iVar38 * 4 + 0x30);
      iVar36 = *(int *)(pppuVar35 + 9);
      fVar115 = *(float *)((long)pppuVar35 + (long)iVar36 * 4 + 0x30);
      lVar33 = *(long *)(param_2 + 0x18);
      lVar34 = *(long *)(param_3 + 0x18);
      pfVar29 = (float *)(lVar33 + (long)iVar38 * 4);
      fVar81 = *pfVar29;
      fVar59 = pfVar29[4];
      fVar85 = pfVar29[8];
      pfVar29 = (float *)(lVar34 + (long)iVar36 * 4);
      fVar111 = *pfVar29;
      fVar113 = pfVar29[4];
      fVar114 = pfVar29[8];
      fVar118 = *(float *)(lVar34 + 0x30) - (float)*(undefined8 *)(lVar33 + 0x30);
      fVar121 = *(float *)(lVar34 + 0x34) - (float)((ulong)*(undefined8 *)(lVar33 + 0x30) >> 0x20);
      fVar122 = *(float *)(lVar34 + 0x38) - (float)*(undefined8 *)(lVar33 + 0x38);
      auVar124._0_4_ = fVar81 * fVar111;
      auVar124._4_4_ = fVar59 * fVar113;
      auVar124._8_4_ = fVar85 * fVar114;
      auVar124._12_4_ = 0;
      auVar125 = NEON_ext(auVar124,auVar124,8,1);
      fVar128 = auVar124._0_4_ + auVar124._4_4_ + auVar125._0_4_;
      auVar126._0_4_ = fVar81 * fVar118;
      auVar126._4_4_ = fVar59 * fVar121;
      auVar126._8_4_ = fVar85 * fVar122;
      auVar126._12_4_ = 0;
      auVar125 = NEON_ext(auVar126,auVar126,8,1);
      fVar130 = auVar126._0_4_ + auVar126._4_4_ + auVar125._0_4_;
      auVar127._0_4_ = fVar111 * fVar118;
      auVar127._4_4_ = fVar113 * fVar121;
      auVar127._8_4_ = fVar114 * fVar122;
      auVar127._12_4_ = 0;
      auVar125 = NEON_ext(auVar127,auVar127,8,1);
      fVar123 = 1.0 - fVar128 * fVar128;
      fVar133 = -(auVar127._0_4_ + auVar127._4_4_ + auVar125._0_4_);
      fVar41 = 0.0;
      if (fVar123 != 0.0) {
        fVar123 = (fVar130 + fVar128 * fVar133) / fVar123;
        fVar41 = -fVar39;
        if ((-fVar39 <= fVar123) && (fVar41 = fVar123, fVar39 < fVar123)) {
          fVar41 = fVar39;
        }
      }
      fVar92 = *(float *)((long)pppuVar18 + 0x364) + *(float *)(param_5 + 6);
      fVar123 = *(float *)((long)pppuVar35 + (long)((iVar36 + 2) % 3) * 4 + 0x30);
      fVar133 = fVar133 + fVar128 * fVar41;
      fVar135 = -fVar115;
      if (fVar135 <= fVar133) {
        fVar135 = fVar133;
        if (fVar115 < fVar133) {
          fVar130 = fVar130 + fVar128 * fVar115;
          fVar41 = -fVar39;
          fVar135 = fVar115;
          if (fVar41 <= fVar130) goto joined_r0x00010980f224;
        }
      }
      else {
        fVar130 = fVar130 + fVar128 * fVar135;
        fVar41 = -fVar39;
        if (-fVar39 <= fVar130) {
joined_r0x00010980f224:
          fVar41 = fVar130;
          if (fVar39 < fVar41) {
            fVar41 = fVar39;
          }
        }
      }
      fVar39 = fVar111 * fVar135 + (fVar118 - fVar81 * fVar41);
      fVar115 = fVar113 * fVar135 + (fVar121 - fVar59 * fVar41);
      fVar118 = fVar114 * fVar135 + (fVar122 - fVar85 * fVar41);
      auVar53._0_4_ = fVar39 * fVar39;
      auVar53._4_4_ = fVar115 * fVar115;
      auVar53._8_4_ = fVar118 * fVar118;
      auVar53._12_4_ = 0;
      auVar125 = NEON_ext(auVar53,auVar53,8,1);
      fVar121 = auVar53._0_4_ + auVar53._4_4_ + auVar125._0_4_;
      fVar130 = SQRT(fVar121);
      fVar41 = (fVar130 - *(float *)((long)plVar37 + (long)((iVar38 + 2) % 3) * 4 + 0x30)) - fVar123
      ;
      if (fVar41 <= fVar92) {
        if (fVar121 <= 1.4210855e-14) {
          if (ABS(fVar85) <= 0.70710677) {
            fVar130 = 1.0 / SQRT(fVar59 * fVar59 + fVar81 * fVar81);
            uStack_340 = CONCAT44(fVar81 * fVar130,-(fVar59 * fVar130));
            uStack_338 = (ulong)uStack_338._4_4_ << 0x20;
          }
          else {
            fVar130 = 1.0 / SQRT(fVar85 * fVar85 + fVar59 * fVar59);
            uStack_340 = (ulong)(uint)-(fVar85 * fVar130) << 0x20;
            uStack_338 = CONCAT44(uStack_338._4_4_,fVar59 * fVar130);
          }
        }
        else {
          fVar130 = -1.0 / fVar130;
          uStack_340 = CONCAT44(fVar115 * fVar130,fVar39 * fVar130);
          uStack_338 = (ulong)(uint)(fVar118 * fVar130);
        }
        fStack_350 = *(float *)(lVar34 + 0x30) + fVar111 * fVar135 + (float)uStack_340 * fVar123;
        fStack_34c = *(float *)(lVar34 + 0x34) + fVar113 * fVar135 + uStack_340._4_4_ * fVar123;
        fStack_348 = *(float *)(lVar34 + 0x38) + fVar114 * fVar135 + (float)uStack_338 * fVar123;
        fStack_344 = *(float *)(lVar34 + 0x3c) + 0.0 + 0.0;
      }
      if (fVar41 < fVar92) {
        (**(code **)(*param_5 + 0x20))(param_5,&uStack_340,&fStack_350);
        pppuVar18 = (undefined ***)param_5[1];
      }
      if (*(int *)(pppuVar18 + 0x6c) != 0) {
        if (pppuVar18[0x6a] == *(undefined ***)(param_5[2] + 0x10)) {
          FUN_10982280c();
        }
        else {
          FUN_10982280c();
        }
      }
      goto LAB_109810e2c;
    }
  }
  uStack_180 = 0x38d1b717;
  uStack_160 = 0;
  uStack_310 = *(undefined8 *)(param_1 + 0x10);
  uStack_318 = 0;
  uStack_320 = 0x3f80000000000000;
  puStack_308 = auStack_2c0;
  iStack_2f0 = (int)plVar37[1];
  appuStack_330[0] = &PTR_FUN_110b14198;
  uStack_2ec = *(undefined4 *)(pppuVar35 + 1);
  plStack_300 = plVar37;
  pppuStack_2f8 = pppuVar35;
  uStack_2e8 = (**(code **)(*plVar37 + 0x60))(plVar37);
  uStack_2e4 = (*(code *)(*pppuVar35)[0xc])(pppuVar35);
  uStack_2e0 = 0;
  uStack_2d8 = 0xffffffff;
  uStack_2cc = 0x100000001;
  plStack_300 = plVar37;
  pppuStack_2f8 = pppuVar35;
  fVar41 = (float)(**(code **)(*plVar37 + 0x60))(plVar37);
  fVar130 = (float)(*(code *)(*pppuVar35)[0xc])(pppuVar35);
  fStack_b0 = fVar41 + fVar130 + *(float *)(*(long *)(param_1 + 0x60) + 0x364) +
              *(float *)(param_5 + 6);
  fStack_b0 = fStack_b0 * fStack_b0;
  pauVar26 = *(undefined1 (**) [12])(param_2 + 0x18);
  uStack_130 = *(undefined8 *)*pauVar26;
  uStack_128 = *(undefined8 *)(*pauVar26 + 8);
  auVar61 = *pauVar26;
  uStack_120 = *(undefined8 *)*(undefined1 (*) [16])(pauVar26[1] + 4);
  uStack_118 = *(undefined8 *)pauVar26[2];
  auVar93 = *(undefined1 (*) [16])(pauVar26[1] + 4);
  fStack_514 = (float)((ulong)uStack_128 >> 0x20);
  uStack_110 = *(undefined8 *)*(undefined1 (*) [16])(pauVar26[2] + 8);
  uStack_108 = *(undefined8 *)(pauVar26[3] + 4);
  auVar125 = *(undefined1 (*) [16])(pauVar26[2] + 8);
  uStack_100 = *(undefined8 *)pauVar26[4];
  uStack_f8 = *(undefined8 *)(pauVar26[4] + 8);
  auVar87 = pauVar26[4];
  pauVar27 = *(undefined1 (**) [16])(param_3 + 0x18);
  uStack_f0 = *(undefined8 *)*pauVar27;
  uStack_e8 = *(undefined8 *)(*pauVar27 + 8);
  auVar48 = *pauVar27;
  uStack_e0 = *(undefined8 *)pauVar27[1];
  uStack_d8 = *(undefined8 *)(pauVar27[1] + 8);
  auVar42 = *(undefined1 (*) [12])pauVar27[1];
  uStack_594 = (undefined4)((ulong)uStack_d8 >> 0x20);
  uStack_d0 = *(undefined8 *)pauVar27[2];
  uStack_c8 = *(undefined8 *)(pauVar27[2] + 8);
  auVar88 = pauVar27[2];
  uStack_c0 = *(undefined8 *)pauVar27[3];
  uStack_b8 = *(undefined8 *)(pauVar27[3] + 8);
  auVar43 = *(undefined1 (*) [12])pauVar27[3];
  iVar38 = (int)plVar37[1];
  fStack_508 = (float)uStack_b8;
  fStack_504 = (float)((ulong)uStack_b8 >> 0x20);
  fStack_510 = (float)uStack_c0;
  fStack_50c = (float)((ulong)uStack_c0 >> 0x20);
  fStack_4f8 = (float)uStack_f8;
  fStack_4f4 = (float)((ulong)uStack_f8 >> 0x20);
  fStack_500 = (float)uStack_100;
  fStack_4fc = (float)((ulong)uStack_100 >> 0x20);
  if ((iVar38 < 7) && (iVar36 = *(int *)(pppuVar35 + 1), iVar36 < 7)) {
    uVar40 = 0;
    if (iVar38 == 0) {
      uStack_360 = 0;
    }
    else {
      uStack_360 = (**(code **)(*plVar37 + 0x60))(plVar37);
      iVar36 = *(int *)(pppuVar35 + 1);
    }
    if (iVar36 != 0) {
      uVar40 = (*(code *)(*pppuVar35)[0xc])(pppuVar35);
    }
    ppuStack_380 = &PTR_FUN_110b12aa0;
    cStack_354 = '\0';
    pppuVar18 = (undefined ***)plVar37[9];
    plStack_378 = param_5;
    uStack_35c = uVar40;
    if (pppuVar18 != (undefined ***)0x0) {
      if (pppuVar35[9] != (undefined **)0x0) {
        if (*(char *)(param_4 + 0x20) == '\x01') {
          FUN_109822e74(pppuVar18,pppuVar35[9],*(undefined8 *)(param_2 + 0x18),
                        *(undefined8 *)(param_3 + 0x18),&ppuStack_4f0,param_5);
          if ((int)pppuVar18 != 0) {
LAB_10980fab0:
            if ((*(int *)(param_1 + 0x1c) < 0) && (*(int *)(param_1 + 0x20) < 0)) {
              if (*(long *)(param_1 + 0x28) != 0) {
                if (*(char *)(param_1 + 0x30) == '\x01') {
                  FUN_109825740();
                }
                *(undefined8 *)(param_1 + 0x28) = 0;
              }
              *(undefined1 *)(param_1 + 0x30) = 1;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined4 *)(param_1 + 0x20) = 0;
            }
            *(undefined4 *)(param_1 + 0x1c) = 0;
            pppuVar18 = &ppuStack_4f0;
            func_0x000109823e98(pppuVar18,plVar37[9],pppuVar35[9],*(undefined8 *)(param_2 + 0x18),
                                *(undefined8 *)(param_3 + 0x18),param_1 + 0x18,param_1 + 0x38,
                                param_5);
          }
        }
        else {
          pppuVar18 = appuStack_330;
          FUN_109820310(pppuVar18,&uStack_130,&ppuStack_380,*(undefined8 *)(param_4 + 0x18));
          uStack_4e8 = (undefined4)uStack_368;
          uStack_4e4 = (uint)((ulong)uStack_368 >> 0x20);
          ppuStack_4f0 = ppuStack_370;
          if ((cStack_354 == '\x01') && (fStack_358 < 0.0)) goto LAB_10980fab0;
        }
        if ((*(char *)(param_1 + 0x58) == '\x01') &&
           (pppuVar18 = (undefined ***)param_5[1], *(int *)(pppuVar18 + 0x6c) != 0)) {
          ppuVar31 = *(undefined ***)(param_5[2] + 0x10);
          ppuVar30 = ppuVar31;
          ppuVar14 = *(undefined ***)(param_5[3] + 0x10);
          if (pppuVar18[0x6a] != ppuVar31) {
            ppuVar30 = *(undefined ***)(param_5[3] + 0x10);
            ppuVar14 = ppuVar31;
          }
          FUN_10982280c(pppuVar18,ppuVar30 + 2,ppuVar14 + 2);
        }
        goto LAB_109810e2c;
      }
      if ((*(char *)(param_4 + 0x20) == '\x01') && (*(int *)(pppuVar35 + 1) == 1)) {
        bStack_388 = 1;
        uStack_390 = 0;
        uStack_398 = 0;
        uStack_3a0._4_4_ = 0;
        puVar28 = *(undefined8 **)(param_3 + 0x18);
        pppuVar18 = pppuVar35 + 10;
        uVar136 = puVar28[2];
        uVar137 = puVar28[3];
        fStack_518 = (float)puVar28[1];
        fStack_514 = (float)((ulong)puVar28[1] >> 0x20);
        fStack_520 = (float)*puVar28;
        fStack_51c = (float)((ulong)*puVar28 >> 0x20);
        fStack_508 = SUB84(pppuVar35[0xb],0);
        fStack_504 = (float)((ulong)pppuVar35[0xb] >> 0x20);
        fStack_510 = SUB84(*pppuVar18,0);
        fStack_50c = (float)((ulong)*pppuVar18 >> 0x20);
        uVar11 = puVar28[4];
        uVar12 = puVar28[5];
        fStack_4f8 = (float)puVar28[7];
        fStack_4f4 = (float)((ulong)puVar28[7] >> 0x20);
        fStack_500 = (float)puVar28[6];
        fStack_4fc = (float)((ulong)puVar28[6] >> 0x20);
        uVar19 = 0x10;
        FUN_1098256f4(0x10,0x10);
        if (0 < (int)uStack_3a0._4_4_) {
          lVar33 = 0;
          do {
            uVar13 = *(undefined8 *)(uStack_390 + lVar33);
            ((undefined8 *)(uVar19 + lVar33))[1] = ((undefined8 *)(uStack_390 + lVar33))[1];
            *(undefined8 *)(uVar19 + lVar33) = uVar13;
            lVar33 = lVar33 + 0x10;
          } while ((ulong)uStack_3a0._4_4_ * 0x10 - lVar33 != 0);
        }
        if ((uStack_390 != 0) && ((bStack_388 & 1) != 0)) {
          FUN_109825740();
        }
        fStack_540 = (float)uVar11;
        fStack_53c = (float)((ulong)uVar11 >> 0x20);
        fStack_538 = (float)uVar12;
        fStack_530 = (float)uVar136;
        fStack_52c = (float)((ulong)uVar136 >> 0x20);
        fStack_528 = (float)uVar137;
        fStack_524 = (float)((ulong)uVar137 >> 0x20);
        auVar44._0_4_ = fStack_510 * fStack_540;
        auVar44._4_4_ = fStack_50c * fStack_53c;
        auVar44._8_4_ = fStack_508 * fStack_538;
        auVar62._0_4_ = fStack_520 * fStack_510;
        auVar62._4_4_ = fStack_51c * fStack_50c;
        auVar62._8_4_ = fStack_518 * fStack_508;
        auVar62._12_4_ = fStack_514 * fStack_504;
        auVar74._0_4_ = fStack_510 * fStack_530;
        auVar74._4_4_ = fStack_50c * fStack_52c;
        auVar74._8_4_ = fStack_508 * fStack_528;
        auVar74._12_4_ = fStack_504 * fStack_524;
        auVar44._12_4_ = 0;
        auVar125 = NEON_ext(auVar62,auVar62,8,1);
        auVar88 = NEON_ext(auVar74,auVar74,8,1);
        auVar93 = NEON_ext(auVar44,auVar44,8,1);
        bStack_388 = 1;
        uStack_398 = 1;
        pfVar29 = (float *)(uVar19 + (long)(int)uStack_3a0._4_4_ * 0x10);
        pfVar29[2] = auVar44._0_4_ + auVar44._4_4_ + auVar93._0_4_ + auVar93._4_4_ + fStack_4f8;
        pfVar29[3] = fStack_4f4 + 0.0;
        *pfVar29 = auVar62._0_4_ + auVar62._4_4_ + auVar125._0_4_ + fStack_500;
        pfVar29[1] = auVar74._0_4_ + auVar74._4_4_ + auVar88._0_4_ + fStack_4fc;
        uStack_3a0._4_4_ = uStack_3a0._4_4_ + 1;
        puVar28 = *(undefined8 **)(param_3 + 0x18);
        fStack_518 = (float)puVar28[3];
        fStack_514 = (float)((ulong)puVar28[3] >> 0x20);
        fStack_520 = (float)puVar28[2];
        fStack_51c = (float)((ulong)puVar28[2] >> 0x20);
        fStack_508 = (float)puVar28[1];
        fStack_504 = (float)((ulong)puVar28[1] >> 0x20);
        fStack_510 = (float)*puVar28;
        fStack_50c = (float)((ulong)*puVar28 >> 0x20);
        uVar136 = puVar28[4];
        uVar137 = puVar28[5];
        fStack_4f8 = (float)puVar28[7];
        fStack_4f4 = (float)((ulong)puVar28[7] >> 0x20);
        fStack_500 = (float)puVar28[6];
        fStack_4fc = (float)((ulong)puVar28[6] >> 0x20);
        ppuVar30 = pppuVar35[0xc];
        ppuVar14 = pppuVar35[0xd];
        uVar25 = uStack_398;
        if (uStack_3a0._4_4_ == 1) {
          uVar25 = 2;
          uVar24 = 0x20;
          uStack_390 = uVar19;
          FUN_1098256f4(0x20,0x10);
          if (0 < (int)uStack_3a0._4_4_) {
            lVar33 = 0;
            do {
              uVar11 = *(undefined8 *)(uStack_390 + lVar33);
              ((undefined8 *)(uVar24 + lVar33))[1] = ((undefined8 *)(uStack_390 + lVar33))[1];
              *(undefined8 *)(uVar24 + lVar33) = uVar11;
              lVar33 = lVar33 + 0x10;
            } while ((ulong)uStack_3a0._4_4_ << 4 != lVar33);
          }
          uVar19 = uVar24;
          if ((uStack_390 != 0) && ((bStack_388 & 1) != 0)) {
            FUN_109825740();
          }
        }
        uStack_390 = uVar19;
        uStack_398 = uVar25;
        bStack_388 = 1;
        fStack_540 = SUB84(ppuVar30,0);
        fStack_53c = (float)((ulong)ppuVar30 >> 0x20);
        fStack_538 = SUB84(ppuVar14,0);
        fStack_534 = (float)((ulong)ppuVar14 >> 0x20);
        fStack_530 = (float)uVar136;
        fStack_52c = (float)((ulong)uVar136 >> 0x20);
        fStack_528 = (float)uVar137;
        auVar54._0_4_ = fStack_510 * fStack_540;
        auVar54._4_4_ = fStack_50c * fStack_53c;
        auVar54._8_4_ = fStack_508 * fStack_538;
        auVar54._12_4_ = fStack_504 * fStack_534;
        auVar67._0_4_ = fStack_540 * fStack_520;
        auVar67._4_4_ = fStack_53c * fStack_51c;
        auVar67._8_4_ = fStack_538 * fStack_518;
        auVar67._12_4_ = fStack_534 * fStack_514;
        auVar75._0_4_ = fStack_540 * fStack_530;
        auVar75._4_4_ = fStack_53c * fStack_52c;
        auVar75._8_4_ = fStack_538 * fStack_528;
        auVar88 = NEON_ext(auVar54,auVar54,8,1);
        auVar93 = NEON_ext(auVar67,auVar67,8,1);
        auVar75._12_4_ = 0;
        auVar125 = NEON_ext(auVar75,auVar75,8,1);
        pfVar29 = (float *)(uStack_390 + (long)(int)uStack_3a0._4_4_ * 0x10);
        pfVar29[2] = auVar75._0_4_ + auVar75._4_4_ + auVar125._0_4_ + auVar125._4_4_ + fStack_4f8;
        pfVar29[3] = fStack_4f4 + 0.0;
        *pfVar29 = auVar54._0_4_ + auVar54._4_4_ + auVar88._0_4_ + fStack_500;
        pfVar29[1] = auVar67._0_4_ + auVar67._4_4_ + auVar93._0_4_ + fStack_4fc;
        uStack_3a0._4_4_ = uStack_3a0._4_4_ + 1;
        puVar28 = *(undefined8 **)(param_3 + 0x18);
        fStack_518 = (float)puVar28[3];
        fStack_514 = (float)((ulong)puVar28[3] >> 0x20);
        fStack_520 = (float)puVar28[2];
        fStack_51c = (float)((ulong)puVar28[2] >> 0x20);
        fStack_508 = (float)puVar28[1];
        fStack_504 = (float)((ulong)puVar28[1] >> 0x20);
        fStack_510 = (float)*puVar28;
        fStack_50c = (float)((ulong)*puVar28 >> 0x20);
        uVar136 = puVar28[4];
        uVar137 = puVar28[5];
        fStack_4f8 = (float)puVar28[7];
        fStack_4f4 = (float)((ulong)puVar28[7] >> 0x20);
        fStack_500 = (float)puVar28[6];
        fStack_4fc = (float)((ulong)puVar28[6] >> 0x20);
        ppuVar30 = pppuVar35[0xe];
        ppuVar14 = pppuVar35[0xf];
        uVar25 = uStack_398;
        uVar19 = uStack_390;
        if (uStack_3a0._4_4_ == uStack_398) {
          uVar2 = uStack_3a0._4_4_ * 2;
          if (uStack_3a0._4_4_ == 0) {
            uVar2 = 1;
          }
          if ((int)uStack_3a0._4_4_ < (int)uVar2) {
            if (uVar2 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
              FUN_1098256f4(uVar19,0x10);
            }
            if (0 < (int)uStack_3a0._4_4_) {
              lVar33 = 0;
              do {
                uVar11 = *(undefined8 *)(uStack_390 + lVar33);
                ((undefined8 *)(uVar19 + lVar33))[1] = ((undefined8 *)(uStack_390 + lVar33))[1];
                *(undefined8 *)(uVar19 + lVar33) = uVar11;
                lVar33 = lVar33 + 0x10;
              } while ((ulong)uStack_3a0._4_4_ << 4 != lVar33);
            }
            uVar25 = uVar2;
            if ((uStack_390 != 0) && ((bStack_388 & 1) != 0)) {
              FUN_109825740();
            }
          }
        }
        uStack_390 = uVar19;
        uStack_398 = uVar25;
        bStack_388 = 1;
        fStack_540 = SUB84(ppuVar30,0);
        fStack_53c = (float)((ulong)ppuVar30 >> 0x20);
        fStack_538 = SUB84(ppuVar14,0);
        fStack_534 = (float)((ulong)ppuVar14 >> 0x20);
        fStack_530 = (float)uVar136;
        fStack_52c = (float)((ulong)uVar136 >> 0x20);
        fStack_528 = (float)uVar137;
        auVar55._0_4_ = fStack_510 * fStack_540;
        auVar55._4_4_ = fStack_50c * fStack_53c;
        auVar55._8_4_ = fStack_508 * fStack_538;
        auVar55._12_4_ = fStack_504 * fStack_534;
        auVar68._0_4_ = fStack_540 * fStack_520;
        auVar68._4_4_ = fStack_53c * fStack_51c;
        auVar68._8_4_ = fStack_538 * fStack_518;
        auVar68._12_4_ = fStack_534 * fStack_514;
        auVar76._0_4_ = fStack_540 * fStack_530;
        auVar76._4_4_ = fStack_53c * fStack_52c;
        auVar76._8_4_ = fStack_538 * fStack_528;
        auVar88 = NEON_ext(auVar55,auVar55,8,1);
        auVar93 = NEON_ext(auVar68,auVar68,8,1);
        auVar76._12_4_ = 0;
        auVar125 = NEON_ext(auVar76,auVar76,8,1);
        pfVar29 = (float *)(uStack_390 + (long)(int)uStack_3a0._4_4_ * 0x10);
        pfVar29[2] = auVar76._0_4_ + auVar76._4_4_ + auVar125._0_4_ + auVar125._4_4_ + fStack_4f8;
        pfVar29[3] = fStack_4f4 + 0.0;
        *pfVar29 = auVar55._0_4_ + auVar55._4_4_ + auVar88._0_4_ + fStack_500;
        pfVar29[1] = auVar68._0_4_ + auVar68._4_4_ + auVar93._0_4_ + fStack_4fc;
        uStack_3a0._4_4_ = uStack_3a0._4_4_ + 1;
        fStack_4f8 = SUB84(pppuVar35[0xb],0);
        fStack_500 = SUB84(pppuVar35[10],0);
        fStack_4fc = (float)((ulong)pppuVar35[10] >> 0x20);
        fStack_518 = SUB84(pppuVar35[0xd],0);
        fStack_520 = SUB84(pppuVar35[0xc],0);
        fStack_51c = (float)((ulong)pppuVar35[0xc] >> 0x20);
        fStack_508 = SUB84(pppuVar35[0xf],0);
        fStack_510 = SUB84(pppuVar35[0xe],0);
        fStack_50c = (float)((ulong)pppuVar35[0xe] >> 0x20);
        ppuStack_4f0 = &PTR_FUN_110b13988;
        bStack_4d0 = 1;
        uStack_4d8 = 0;
        uStack_4e4 = 0;
        uStack_4e0 = 0;
        fStack_4b0 = (float)CONCAT31(fStack_4b0._1_3_,1);
        plStack_4b8 = (long *)0x0;
        uStack_4c4 = 0;
        fStack_490 = (float)CONCAT31(fStack_490._1_3_,1);
        uStack_498 = 0;
        uStack_4a4 = 0;
        uVar19 = 0x10;
        FUN_1098256f4(0x10,0x10);
        if (0 < (int)uStack_4e4) {
          lVar33 = 0;
          do {
            uVar136 = *(undefined8 *)(uStack_4d8 + lVar33);
            ((undefined8 *)(uVar19 + lVar33))[1] = ((undefined8 *)(uStack_4d8 + lVar33))[1];
            *(undefined8 *)(uVar19 + lVar33) = uVar136;
            lVar33 = lVar33 + 0x10;
          } while ((ulong)uStack_4e4 * 0x10 - lVar33 != 0);
        }
        if ((uStack_4d8 != 0) && ((bStack_4d0 & 1) != 0)) {
          FUN_109825740();
        }
        bStack_4d0 = 1;
        uStack_4e0 = 1;
        ppuVar30 = pppuVar35[0xe];
        puVar28 = (undefined8 *)(uVar19 + (long)(int)uStack_4e4 * 0x10);
        puVar28[1] = pppuVar35[0xf];
        *puVar28 = ppuVar30;
        uStack_4e4 = uStack_4e4 + 1;
        uVar25 = uStack_4e0;
        if (uStack_4e4 == 1) {
          uVar25 = 2;
          uVar24 = 0x20;
          uStack_4d8 = uVar19;
          FUN_1098256f4(0x20,0x10);
          if (0 < (int)uStack_4e4) {
            lVar33 = 0;
            do {
              uVar136 = *(undefined8 *)(uStack_4d8 + lVar33);
              ((undefined8 *)(uVar24 + lVar33))[1] = ((undefined8 *)(uStack_4d8 + lVar33))[1];
              *(undefined8 *)(uVar24 + lVar33) = uVar136;
              lVar33 = lVar33 + 0x10;
            } while ((ulong)uStack_4e4 << 4 != lVar33);
          }
          uVar19 = uVar24;
          if ((uStack_4d8 != 0) && ((bStack_4d0 & 1) != 0)) {
            FUN_109825740();
          }
        }
        uStack_4d8 = uVar19;
        uStack_4e0 = uVar25;
        bStack_4d0 = 1;
        ppuVar30 = *pppuVar18;
        puVar28 = (undefined8 *)(uStack_4d8 + (long)(int)uStack_4e4 * 0x10);
        puVar28[1] = pppuVar35[0xb];
        *puVar28 = ppuVar30;
        uStack_4e4 = uStack_4e4 + 1;
        uVar25 = uStack_4e0;
        uVar19 = uStack_4d8;
        if (uStack_4e4 == uStack_4e0) {
          uVar2 = uStack_4e4 * 2;
          if (uStack_4e4 == 0) {
            uVar2 = 1;
          }
          if ((int)uStack_4e4 < (int)uVar2) {
            if (uVar2 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
              FUN_1098256f4(uVar19,0x10);
            }
            if (0 < (int)uStack_4e4) {
              lVar33 = 0;
              do {
                uVar136 = *(undefined8 *)(uStack_4d8 + lVar33);
                ((undefined8 *)(uVar19 + lVar33))[1] = ((undefined8 *)(uStack_4d8 + lVar33))[1];
                *(undefined8 *)(uVar19 + lVar33) = uVar136;
                lVar33 = lVar33 + 0x10;
              } while ((ulong)uStack_4e4 << 4 != lVar33);
            }
            uVar25 = uVar2;
            if ((uStack_4d8 != 0) && ((bStack_4d0 & 1) != 0)) {
              FUN_109825740();
            }
          }
        }
        uStack_4d8 = uVar19;
        uStack_4e0 = uVar25;
        bStack_4d0 = 1;
        ppuVar30 = pppuVar35[0xc];
        puVar28 = (undefined8 *)(uStack_4d8 + (long)(int)uStack_4e4 * 0x10);
        puVar28[1] = pppuVar35[0xd];
        *puVar28 = ppuVar30;
        uStack_4e4 = uStack_4e4 + 1;
        bStack_3c8 = 1;
        piStack_3d0 = (int *)0x0;
        uStack_3d8 = 0;
        uStack_3dc = 0;
        piVar20 = (int *)0x4;
        FUN_1098256f4(4,0x10);
        uVar19 = (ulong)uStack_3dc;
        piVar23 = piVar20;
        piVar21 = piStack_3d0;
        if ((int)uStack_3dc < 1) {
          if ((piStack_3d0 != (int *)0x0) && ((bStack_3c8 & 1) != 0)) goto LAB_1098103b4;
        }
        else {
          do {
            *piVar23 = *piVar21;
            uVar19 = uVar19 - 1;
            piVar23 = piVar23 + 1;
            piVar21 = piVar21 + 1;
          } while (uVar19 != 0);
          if (bStack_3c8 == 1) {
LAB_1098103b4:
            FUN_109825740();
          }
        }
        bStack_3c8 = 1;
        uStack_3d8 = 1;
        piVar20[(int)uStack_3dc] = 0;
        uStack_3dc = uStack_3dc + 1;
        piVar23 = piVar20;
        uVar25 = uStack_3d8;
        if (uStack_3dc == 1) {
          uVar25 = 2;
          piVar23 = (int *)0x8;
          piStack_3d0 = piVar20;
          FUN_1098256f4(8,0x10);
          if ((int)uStack_3dc < 1) {
            if ((piStack_3d0 != (int *)0x0) && ((bStack_3c8 & 1) != 0)) goto LAB_109810468;
          }
          else {
            uVar19 = (ulong)uStack_3dc;
            piVar21 = piVar23;
            piVar20 = piStack_3d0;
            do {
              *piVar21 = *piVar20;
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 1;
              piVar20 = piVar20 + 1;
            } while (uVar19 != 0);
            if (bStack_3c8 == 1) {
LAB_109810468:
              FUN_109825740(piStack_3d0);
            }
          }
        }
        uStack_3d8 = uVar25;
        bStack_3c8 = 1;
        piVar23[(int)uStack_3dc] = 1;
        uStack_3dc = uStack_3dc + 1;
        uVar25 = uStack_3d8;
        if (uStack_3dc == uStack_3d8) {
          uVar2 = uStack_3dc * 2;
          if (uStack_3dc == 0) {
            uVar2 = 1;
          }
          if ((int)uStack_3dc < (int)uVar2) {
            piStack_3d0 = piVar23;
            if (uVar2 == 0) {
              piVar21 = (int *)0x0;
            }
            else {
              piVar21 = (int *)(-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
              FUN_1098256f4(piVar21,0x10);
            }
            piVar23 = piVar21;
            uVar25 = uVar2;
            if ((int)uStack_3dc < 1) {
              if ((piStack_3d0 != (int *)0x0) && ((bStack_3c8 & 1) != 0)) goto LAB_109810524;
            }
            else {
              uVar19 = (ulong)uStack_3dc;
              piVar20 = piStack_3d0;
              do {
                *piVar21 = *piVar20;
                uVar19 = uVar19 - 1;
                piVar21 = piVar21 + 1;
                piVar20 = piVar20 + 1;
              } while (uVar19 != 0);
              if (bStack_3c8 == 1) {
LAB_109810524:
                FUN_109825740(piStack_3d0);
              }
            }
          }
        }
        piStack_3d0 = piVar23;
        uStack_3d8 = uVar25;
        bStack_3c8 = 1;
        fVar41 = fStack_520 - fStack_500;
        fVar130 = fStack_51c - fStack_4fc;
        fVar39 = fStack_518 - fStack_4f8;
        fStack_520 = fStack_510 - fStack_520;
        fStack_51c = fStack_50c - fStack_51c;
        fStack_518 = fStack_508 - fStack_518;
        auVar77._0_4_ = fVar41 * fVar41;
        auVar77._4_4_ = fVar130 * fVar130;
        auVar77._8_4_ = fVar39 * fVar39;
        auVar77._12_4_ = 0;
        auVar84._0_4_ = fStack_520 * fStack_520;
        auVar84._4_4_ = fStack_51c * fStack_51c;
        auVar84._8_4_ = fStack_518 * fStack_518;
        auVar84._12_4_ = 0;
        auVar125 = NEON_ext(auVar77,auVar77,8,1);
        auVar88 = NEON_ext(auVar84,auVar84,8,1);
        fVar59 = 1.0 / SQRT(auVar77._0_4_ + auVar77._4_4_ + auVar125._0_4_);
        fVar81 = 1.0 / SQRT(auVar84._0_4_ + auVar84._4_4_ + auVar88._0_4_);
        auVar90._0_8_ = CONCAT44(fVar130 * fVar59,fVar41 * fVar59);
        auVar90._8_4_ = fVar39 * fVar59;
        auVar90._12_4_ = fVar59 * 0.0;
        piStack_3d0[(int)uStack_3dc] = 2;
        auVar78._0_8_ = CONCAT44(fStack_51c * fVar81,fStack_520 * fVar81);
        auVar78._8_4_ = fStack_518 * fVar81;
        auVar78._12_4_ = fVar81 * 0.0;
        uVar25 = uStack_3dc + 1;
        uVar19 = (ulong)uVar25;
        auVar125 = NEON_ext(auVar90,auVar90,0xc,1);
        auVar125 = NEON_ext(auVar125,auVar90,8,1);
        auVar88 = NEON_ext(auVar78,auVar78,0xc,1);
        auVar88 = NEON_ext(auVar88,auVar78,8,1);
        auVar56._0_4_ = fVar41 * fVar59 * auVar88._0_4_ - fStack_520 * fVar81 * auVar125._0_4_;
        auVar56._4_4_ = fVar130 * fVar59 * auVar88._4_4_ - fStack_51c * fVar81 * auVar125._4_4_;
        auVar56._8_4_ = auVar90._8_4_ * auVar88._8_4_ - auVar78._8_4_ * auVar125._8_4_;
        auVar56._12_4_ = auVar90._12_4_ * auVar88._12_4_ - auVar78._12_4_ * auVar125._12_4_;
        auVar125 = NEON_ext(auVar56,auVar56,0xc,1);
        auVar88 = NEON_ext(auVar125,auVar56,8,1);
        fVar39 = auVar88._0_4_;
        auVar57._0_4_ = fVar39 * fVar39;
        fVar59 = auVar88._4_4_;
        auVar57._4_4_ = fVar59 * fVar59;
        fStack_3b8 = auVar88._8_4_;
        auVar57._8_4_ = fStack_3b8 * fStack_3b8;
        auVar57._12_4_ = 0;
        auVar125 = NEON_ext(auVar57,auVar57,8,1);
        fVar130 = 1.0 / SQRT(auVar125._0_4_ + auVar57._0_4_ + auVar57._4_4_);
        lStack_3c0 = CONCAT44(fVar59 * fVar130,fVar39 * fVar130);
        fStack_3b8 = fStack_3b8 * fVar130;
        fStack_3b4 = 1e+30;
        piVar23 = piStack_3d0;
        fVar41 = fStack_3b4;
        if (-1 < (int)uStack_3dc) {
          do {
            pppuVar3 = pppuVar18 + (long)*piVar23 * 2;
            auVar79._0_4_ = fVar39 * fVar130 * *(float *)pppuVar3;
            auVar79._4_4_ = fVar59 * fVar130 * *(float *)((long)pppuVar3 + 4);
            auVar79._8_4_ = fStack_3b8 * *(float *)(pppuVar3 + 1);
            auVar79._12_4_ = fVar130 * 0.0 * *(float *)((long)pppuVar3 + 0xc);
            auVar125 = NEON_ext(auVar79,auVar79,8,1);
            fStack_3b4 = auVar79._0_4_ + auVar79._4_4_ + auVar125._0_4_;
            if (fVar41 <= fStack_3b4) {
              fStack_3b4 = fVar41;
            }
            uVar19 = uVar19 - 1;
            piVar23 = piVar23 + 1;
            fVar41 = fStack_3b4;
          } while (uVar19 != 0);
        }
        fStack_3b4 = -fStack_3b4;
        uStack_3dc = uVar25;
        uVar25 = (uint)uStack_4c4;
        if ((uint)uStack_4c4 == uStack_4c4._4_4_) {
          iVar38 = (uint)uStack_4c4 << 1;
          if ((uint)uStack_4c4 == 0) {
            iVar38 = 1;
          }
          if ((int)(uint)uStack_4c4 < iVar38) {
            if (iVar38 == 0) {
              plVar22 = (long *)0x0;
            }
            else {
              plVar22 = (long *)((long)iVar38 * 0x30);
              FUN_1098256f4(plVar22,0x10);
            }
            if (0 < (int)(uint)uStack_4c4) {
              lVar33 = 0;
              uVar19 = (ulong)(uint)uStack_4c4;
              do {
                lVar34 = (long)plVar22 + lVar33;
                lVar1 = (long)plStack_4b8 + lVar33;
                FUN_10981163c(lVar34,lVar1);
                uVar136 = *(undefined8 *)(lVar1 + 0x20);
                *(undefined8 *)(lVar34 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
                *(undefined8 *)(lVar34 + 0x20) = uVar136;
                lVar33 = lVar33 + 0x30;
              } while (uVar19 * 0x30 - lVar33 != 0);
              uVar19 = uStack_4c4 & 0xffffffff;
              if (0 < (int)(uint)uStack_4c4) {
                lVar33 = 0;
                do {
                  FUN_10980501c((long)plStack_4b8 + lVar33);
                  lVar33 = lVar33 + 0x30;
                } while (uVar19 * 0x30 - lVar33 != 0);
              }
            }
            if ((plStack_4b8 != (long *)0x0) && (((uint)fStack_4b0 & 1) != 0)) {
              FUN_109825740();
            }
            fStack_4b0 = (float)CONCAT31(fStack_4b0._1_3_,1);
            uStack_4c4 = CONCAT44(iVar38,(uint)uStack_4c4);
            plStack_4b8 = plVar22;
            uVar25 = (uint)uStack_4c4;
          }
        }
        plVar22 = plStack_4b8 + (long)(int)uVar25 * 6;
        FUN_10981163c(plVar22,auStack_3e0);
        plVar22[5] = CONCAT44(fStack_3b4,fStack_3b8);
        plVar22[4] = lStack_3c0;
        uStack_4c4 = CONCAT44(uStack_4c4._4_4_,(uint)uStack_4c4 + 1);
        FUN_10980501c(auStack_3e0);
        bStack_3c8 = 1;
        piStack_3d0 = (int *)0x0;
        uStack_3d8 = 0;
        uStack_3dc = 0;
        piVar20 = (int *)0x4;
        FUN_1098256f4(4,0x10);
        uVar19 = (ulong)uStack_3dc;
        piVar23 = piVar20;
        piVar21 = piStack_3d0;
        if ((int)uStack_3dc < 1) {
          if ((piStack_3d0 != (int *)0x0) && ((bStack_3c8 & 1) != 0)) goto LAB_1098107d0;
        }
        else {
          do {
            *piVar23 = *piVar21;
            uVar19 = uVar19 - 1;
            piVar23 = piVar23 + 1;
            piVar21 = piVar21 + 1;
          } while (uVar19 != 0);
          if (bStack_3c8 == 1) {
LAB_1098107d0:
            FUN_109825740();
          }
        }
        bStack_3c8 = 1;
        uStack_3d8 = 1;
        piVar20[(int)uStack_3dc] = 0;
        uStack_3dc = uStack_3dc + 1;
        piStack_3d0 = piVar20;
        if (uStack_3dc == 1) {
          piVar23 = (int *)0x8;
          FUN_1098256f4(8,0x10);
          if ((int)uStack_3dc < 1) {
            if ((piStack_3d0 != (int *)0x0) && ((bStack_3c8 & 1) != 0)) goto LAB_10981088c;
          }
          else {
            uVar19 = (ulong)uStack_3dc;
            piVar21 = piVar23;
            piVar20 = piStack_3d0;
            do {
              *piVar21 = *piVar20;
              uVar19 = uVar19 - 1;
              piVar21 = piVar21 + 1;
              piVar20 = piVar20 + 1;
            } while (uVar19 != 0);
            if (bStack_3c8 == 1) {
LAB_10981088c:
              FUN_109825740(piStack_3d0);
            }
          }
          uStack_3d8 = 2;
          piStack_3d0 = piVar23;
        }
        bStack_3c8 = 1;
        piStack_3d0[(int)uStack_3dc] = 2;
        uStack_3dc = uStack_3dc + 1;
        uVar25 = uStack_3d8;
        piVar23 = piStack_3d0;
        if (uStack_3dc == uStack_3d8) {
          uVar2 = uStack_3dc * 2;
          if (uStack_3dc == 0) {
            uVar2 = 1;
          }
          if ((int)uStack_3dc < (int)uVar2) {
            if (uVar2 == 0) {
              piVar23 = (int *)0x0;
            }
            else {
              piVar23 = (int *)(-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2);
              FUN_1098256f4(piVar23,0x10);
            }
            uVar25 = uVar2;
            if ((int)uStack_3dc < 1) {
              if ((piStack_3d0 != (int *)0x0) && ((bStack_3c8 & 1) != 0)) goto LAB_109810954;
            }
            else {
              uVar19 = (ulong)uStack_3dc;
              piVar21 = piVar23;
              piVar20 = piStack_3d0;
              do {
                *piVar21 = *piVar20;
                uVar19 = uVar19 - 1;
                piVar21 = piVar21 + 1;
                piVar20 = piVar20 + 1;
              } while (uVar19 != 0);
              if (bStack_3c8 == 1) {
LAB_109810954:
                FUN_109825740(piStack_3d0);
              }
            }
          }
        }
        piStack_3d0 = piVar23;
        uStack_3d8 = uVar25;
        bStack_3c8 = 1;
        piStack_3d0[(int)uStack_3dc] = 1;
        uVar25 = uStack_3dc + 1;
        uVar19 = (ulong)uVar25;
        auVar43._0_8_ = auVar88._0_8_ ^ 0x8000000080000000;
        auVar43[8] = auVar88[8];
        auVar43[9] = auVar88[9];
        auVar43[10] = auVar88[10];
        auVar43[0xb] = auVar88[0xb] ^ 0x80;
        auVar58._12_3_ = 0;
        auVar58._0_12_ = auVar43;
        auVar58[0xf] = 0x80;
        fVar130 = (float)auVar43._0_8_;
        auVar69._0_4_ = fVar130 * fVar130;
        fVar39 = (float)(auVar43._0_8_ >> 0x20);
        auVar69._4_4_ = fVar39 * fVar39;
        fStack_3b8 = auVar43._8_4_;
        auVar69._8_4_ = fStack_3b8 * fStack_3b8;
        fVar59 = auVar58._12_4_;
        auVar69._12_4_ = fVar59 * fVar59;
        auVar125 = NEON_ext(auVar69,auVar69,8,1);
        fVar81 = 1.0 / SQRT(auVar125._0_4_ + auVar69._0_4_ + auVar69._4_4_);
        lStack_3c0 = CONCAT44(fVar39 * fVar81,fVar130 * fVar81);
        fStack_3b8 = fStack_3b8 * fVar81;
        fStack_3b4 = 1e+30;
        piVar23 = piStack_3d0;
        fVar41 = fStack_3b4;
        if (-1 < (int)uStack_3dc) {
          do {
            pppuVar3 = pppuVar18 + (long)*piVar23 * 2;
            auVar80._0_4_ = fVar130 * fVar81 * *(float *)pppuVar3;
            auVar80._4_4_ = fVar39 * fVar81 * *(float *)((long)pppuVar3 + 4);
            auVar80._8_4_ = fStack_3b8 * *(float *)(pppuVar3 + 1);
            auVar80._12_4_ = fVar59 * fVar81 * *(float *)((long)pppuVar3 + 0xc);
            auVar125 = NEON_ext(auVar80,auVar80,8,1);
            fStack_3b4 = auVar80._0_4_ + auVar80._4_4_ + auVar125._0_4_;
            if (fVar41 <= fStack_3b4) {
              fStack_3b4 = fVar41;
            }
            uVar19 = uVar19 - 1;
            piVar23 = piVar23 + 1;
            fVar41 = fStack_3b4;
          } while (uVar19 != 0);
        }
        fStack_3b4 = -fStack_3b4;
        uStack_3dc = uVar25;
        uVar25 = (uint)uStack_4c4;
        if ((uint)uStack_4c4 == uStack_4c4._4_4_) {
          iVar38 = (uint)uStack_4c4 << 1;
          if ((uint)uStack_4c4 == 0) {
            iVar38 = 1;
          }
          if ((int)(uint)uStack_4c4 < iVar38) {
            if (iVar38 == 0) {
              plVar22 = (long *)0x0;
            }
            else {
              plVar22 = (long *)((long)iVar38 * 0x30);
              FUN_1098256f4(plVar22,0x10);
            }
            if (0 < (int)(uint)uStack_4c4) {
              lVar33 = 0;
              uVar19 = (ulong)(uint)uStack_4c4;
              do {
                lVar34 = (long)plVar22 + lVar33;
                lVar1 = (long)plStack_4b8 + lVar33;
                FUN_10981163c(lVar34,lVar1);
                uVar136 = *(undefined8 *)(lVar1 + 0x20);
                *(undefined8 *)(lVar34 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
                *(undefined8 *)(lVar34 + 0x20) = uVar136;
                lVar33 = lVar33 + 0x30;
              } while (uVar19 * 0x30 - lVar33 != 0);
              uVar19 = uStack_4c4 & 0xffffffff;
              if (0 < (int)(uint)uStack_4c4) {
                lVar33 = 0;
                do {
                  FUN_10980501c((long)plStack_4b8 + lVar33);
                  lVar33 = lVar33 + 0x30;
                } while (uVar19 * 0x30 - lVar33 != 0);
              }
            }
            if ((plStack_4b8 != (long *)0x0) && (((uint)fStack_4b0 & 1) != 0)) {
              FUN_109825740();
            }
            fStack_4b0 = (float)CONCAT31(fStack_4b0._1_3_,1);
            uStack_4c4 = CONCAT44(iVar38,(uint)uStack_4c4);
            plStack_4b8 = plVar22;
            uVar25 = (uint)uStack_4c4;
          }
        }
        plVar22 = plStack_4b8 + (long)(int)uVar25 * 6;
        FUN_10981163c(plVar22,auStack_3e0);
        plVar22[5] = CONCAT44(fStack_3b4,fStack_3b8);
        plVar22[4] = lStack_3c0;
        uStack_4c4 = CONCAT44(uStack_4c4._4_4_,(uint)uStack_4c4 + 1);
        FUN_10980501c(auStack_3e0);
        iVar38 = (uint)uStack_4a4;
        if ((uint)uStack_4a4 == uStack_4a4._4_4_) {
          uVar25 = (uint)uStack_4a4 << 1;
          if ((uint)uStack_4a4 == 0) {
            uVar25 = 1;
          }
          if ((int)(uint)uStack_4a4 < (int)uVar25) {
            if (uVar25 == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = -(ulong)(uVar25 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar25 << 4;
              FUN_1098256f4(uVar19,0x10);
            }
            if (0 < (int)uStack_4a4) {
              lVar33 = 0;
              do {
                uVar136 = *(undefined8 *)(uStack_498 + lVar33);
                ((undefined8 *)(uVar19 + lVar33))[1] = ((undefined8 *)(uStack_498 + lVar33))[1];
                *(undefined8 *)(uVar19 + lVar33) = uVar136;
                lVar33 = lVar33 + 0x10;
              } while ((uStack_4a4 & 0xffffffff) << 4 != lVar33);
            }
            if ((uStack_498 != 0) && (((uint)fStack_490 & 1) != 0)) {
              FUN_109825740();
            }
            fStack_490 = (float)CONCAT31(fStack_490._1_3_,1);
            uStack_4a4 = CONCAT44(uVar25,(uint)uStack_4a4);
            iVar38 = (uint)uStack_4a4;
            uStack_498 = uVar19;
          }
        }
        puVar28 = (undefined8 *)(uStack_498 + (long)iVar38 * 0x10);
        puVar28[1] = auVar90._8_8_;
        *puVar28 = auVar90._0_8_;
        uVar25 = (uint)uStack_4a4 + 1;
        uVar19 = (ulong)uVar25;
        uStack_4a4 = CONCAT44(uStack_4a4._4_4_,uVar25);
        if (uVar25 == uStack_4a4._4_4_) {
          uVar2 = uVar25 * 2;
          if (uVar25 == 0) {
            uVar2 = 1;
          }
          if ((int)uVar25 < (int)uVar2) {
            if (uVar2 == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
              FUN_1098256f4(uVar24,0x10);
              uVar19 = uStack_4a4 & 0xffffffff;
            }
            if (0 < (int)uVar19) {
              lVar33 = 0;
              do {
                uVar136 = *(undefined8 *)(uStack_498 + lVar33);
                ((undefined8 *)(uVar24 + lVar33))[1] = ((undefined8 *)(uStack_498 + lVar33))[1];
                *(undefined8 *)(uVar24 + lVar33) = uVar136;
                lVar33 = lVar33 + 0x10;
              } while (uVar19 << 4 != lVar33);
            }
            if ((uStack_498 != 0) && (((uint)fStack_490 & 1) != 0)) {
              FUN_109825740();
            }
            fStack_490 = (float)CONCAT31(fStack_490._1_3_,1);
            uStack_4a4 = CONCAT44(uVar2,(uint)uStack_4a4);
            uVar25 = (uint)uStack_4a4;
            uStack_498 = uVar24;
          }
        }
        puVar28 = (undefined8 *)(uStack_498 + (long)(int)uVar25 * 0x10);
        puVar28[1] = auVar78._8_8_;
        *puVar28 = auVar78._0_8_;
        uVar25 = (uint)uStack_4a4 + 1;
        uVar19 = (ulong)uVar25;
        uStack_4a4 = CONCAT44(uStack_4a4._4_4_,uVar25);
        if (uVar25 == uStack_4a4._4_4_) {
          uVar2 = uVar25 * 2;
          if (uVar25 == 0) {
            uVar2 = 1;
          }
          if ((int)uVar25 < (int)uVar2) {
            if (uVar2 == 0) {
              uVar24 = 0;
            }
            else {
              uVar24 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4;
              FUN_1098256f4(uVar24,0x10);
              uVar19 = uStack_4a4 & 0xffffffff;
            }
            if (0 < (int)uVar19) {
              lVar33 = 0;
              do {
                uVar136 = *(undefined8 *)(uStack_498 + lVar33);
                ((undefined8 *)(uVar24 + lVar33))[1] = ((undefined8 *)(uStack_498 + lVar33))[1];
                *(undefined8 *)(uVar24 + lVar33) = uVar136;
                lVar33 = lVar33 + 0x10;
              } while (uVar19 << 4 != lVar33);
            }
            if ((uStack_498 != 0) && (((uint)fStack_490 & 1) != 0)) {
              FUN_109825740();
            }
            fStack_490 = (float)CONCAT31(fStack_490._1_3_,1);
            uStack_4a4 = CONCAT44(uVar2,(uint)uStack_4a4);
            uVar25 = (uint)uStack_4a4;
            uStack_498 = uVar24;
          }
        }
        fStack_500 = fStack_500 - fStack_510;
        fStack_4fc = fStack_4fc - fStack_50c;
        fStack_4f8 = fStack_4f8 - fStack_508;
        auVar70._0_4_ = fStack_500 * fStack_500;
        auVar70._4_4_ = fStack_4fc * fStack_4fc;
        auVar70._8_4_ = fStack_4f8 * fStack_4f8;
        auVar70._12_4_ = 0;
        auVar125 = NEON_ext(auVar70,auVar70,8,1);
        fVar41 = 1.0 / SQRT(auVar70._0_4_ + auVar70._4_4_ + auVar125._0_4_);
        pfVar29 = (float *)(uStack_498 + (long)(int)uVar25 * 0x10);
        pfVar29[2] = fStack_4f8 * fVar41;
        pfVar29[3] = fVar41 * 0.0;
        *pfVar29 = fStack_500 * fVar41;
        pfVar29[1] = fStack_4fc * fVar41;
        uStack_4a4 = CONCAT44(uStack_4a4._4_4_,(uint)uStack_4a4 + 1);
        FUN_109818eac(&ppuStack_4f0);
        (*(code *)(*pppuVar35)[0x18])(pppuVar35,&ppuStack_4f0);
        FUN_109818628(&ppuStack_4f0);
        lVar33 = plVar37[9];
        FUN_109822e74(lVar33,pppuVar35[9],*(undefined8 *)(param_2 + 0x18),
                      *(undefined8 *)(param_3 + 0x18),auStack_3b0,param_5);
        if ((int)lVar33 != 0) {
          if ((*(int *)(param_1 + 0x3c) < 0) && (*(int *)(param_1 + 0x40) < 0)) {
            if (*(long *)(param_1 + 0x48) != 0) {
              if (*(char *)(param_1 + 0x50) == '\x01') {
                FUN_109825740();
              }
              *(undefined8 *)(param_1 + 0x48) = 0;
            }
            *(undefined1 *)(param_1 + 0x50) = 1;
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined4 *)(param_1 + 0x40) = 0;
          }
          *(undefined4 *)(param_1 + 0x3c) = 0;
          func_0x0001098236f8(auStack_3b0,plVar37[9],*(undefined8 *)(param_2 + 0x18),&uStack_3a0,
                              param_1 + 0x38,param_5);
        }
        if ((*(char *)(param_1 + 0x58) == '\x01') &&
           (lVar33 = param_5[1], *(int *)(lVar33 + 0x360) != 0)) {
          lVar32 = *(long *)(param_5[2] + 0x10);
          lVar34 = lVar32;
          lVar1 = *(long *)(param_5[3] + 0x10);
          if (*(long *)(lVar33 + 0x350) != lVar32) {
            lVar34 = *(long *)(param_5[3] + 0x10);
            lVar1 = lVar32;
          }
          FUN_10982280c(lVar33,lVar34 + 0x10,lVar1 + 0x10);
        }
        pppuVar18 = (undefined ***)&uStack_3a0;
        FUN_10980eb0c(pppuVar18);
        goto LAB_109810e2c;
      }
    }
  }
  pppuVar18 = appuStack_330;
  FUN_109820310(pppuVar18,&uStack_130,param_5,*(undefined8 *)(param_4 + 0x18));
  if ((*(int *)(param_1 + 0x6c) != 0) && (*(int *)(param_5[1] + 0x360) < *(int *)(param_1 + 0x70)))
  {
    fVar41 = (float)uStack_320;
    auVar45._0_4_ = fVar41 * fVar41;
    fVar130 = (float)((ulong)uStack_320 >> 0x20);
    auVar45._4_4_ = fVar130 * fVar130;
    fVar39 = (float)uStack_318;
    auVar45._8_4_ = fVar39 * fVar39;
    fVar59 = (float)((ulong)uStack_318 >> 0x20);
    auVar45._12_4_ = fVar59 * fVar59;
    auVar46 = NEON_ext(auVar45,auVar45,8,1);
    fVar59 = auVar45._0_4_ + auVar45._4_4_ + auVar46._0_4_;
    if (1.1920929e-07 < fVar59) {
      fVar59 = 1.0 / fVar59;
      fVar41 = fVar41 * fVar59;
      fVar130 = fVar130 * fVar59;
      fVar39 = fVar39 * fVar59;
      if (ABS(fVar39) <= 0.70710677) {
        fStack_5bc = 1.0 / SQRT(fVar130 * fVar130 + fVar41 * fVar41);
        fStack_5c0 = -fVar130 * fStack_5bc;
        fStack_5bc = fVar41 * fStack_5bc;
        fStack_5b8 = 0.0;
      }
      else {
        fStack_5b8 = 1.0 / SQRT(fVar39 * fVar39 + fVar130 * fVar130);
        fStack_5bc = -(fVar39 * fStack_5b8);
        fStack_5b8 = fStack_5b8 * fVar130;
        fStack_5c0 = 0.0;
      }
      fVar59 = (float)(**(code **)(*plVar37 + 0x20))(plVar37);
      fVar81 = (float)(*(code *)(*pppuVar35)[4])(pppuVar35);
      iVar38 = *(int *)(param_1 + 0x6c);
      pppuVar18 = pppuVar35;
      if (0 < iVar38) {
        auVar47._0_4_ = -(uint)(fVar59 < fVar81);
        auVar47._4_4_ = auVar47._0_4_;
        auVar47._8_4_ = auVar47._0_4_;
        auVar47._12_4_ = auVar47._0_4_;
        auVar17._12_4_ = fStack_504;
        auVar17._0_12_ = auVar43;
        auVar63._12_4_ = fStack_4f4;
        auVar63._0_12_ = auVar87;
        auVar63 = auVar63 ^ (auVar63 ^ auVar17) & ~auVar47;
        auVar15._12_4_ = uStack_594;
        auVar15._0_12_ = auVar42;
        auVar125 = auVar125 ^ (auVar125 ^ auVar88) & ~auVar47;
        auVar93 = auVar93 ^ (auVar93 ^ auVar15) & ~auVar47;
        auVar16._12_4_ = fStack_514;
        auVar16._0_12_ = auVar61;
        auVar48 = auVar48 ^ (auVar48 ^ auVar16) & auVar47;
        auVar64._0_4_ = fStack_5c0 * fStack_5c0;
        auVar64._4_4_ = fStack_5bc * fStack_5bc;
        auVar64._8_4_ = fStack_5b8 * fStack_5b8;
        auVar64._12_4_ = 0;
        auVar88 = NEON_ext(auVar64,auVar64,8,1);
        fVar113 = auVar88._0_4_ + auVar64._0_4_ + auVar64._4_4_;
        uVar136 = ___sincosf_stret();
        fVar114 = (float)((ulong)uVar136 >> 0x20);
        iVar36 = 0;
        fVar85 = (float)uVar136 / SQRT(fVar113);
        fVar115 = fVar85 * fStack_5b8;
        fVar111 = fStack_5c0 * fVar85;
        fStack_5bc = fStack_5bc * fVar85;
        auVar49._0_8_ = CONCAT44(fStack_5bc,fVar111);
        auVar49._8_4_ = fStack_5b8 * fVar85;
        auVar49._12_4_ = fVar85 * 0.0;
        auVar82._8_4_ = fVar115;
        auVar82._0_8_ = auVar49._0_8_;
        auVar82._12_4_ = fVar114;
        auVar65._0_4_ = fVar41 * fVar41;
        auVar65._4_4_ = fVar130 * fVar130;
        auVar65._8_4_ = fVar39 * fVar39;
        auVar65._12_4_ = 0;
        auVar97 = NEON_ext(auVar65,auVar65,8,1);
        auVar88 = NEON_ext(auVar82,auVar82,8,1);
        fVar85 = auVar88._0_4_;
        auVar46 = NEON_ext(auVar82,auVar49,0xc,1);
        uVar136 = NEON_ext(auVar49._0_8_,auVar88._0_8_,4,1);
        fStack_5c0 = auVar97._0_4_;
        pppuVar18 = pppuVar35;
        do {
          if (1.1920929e-07 < fVar113) {
            uVar137 = ___sincosf_stret();
            fVar123 = (float)((ulong)uVar137 >> 0x20);
            fVar118 = (float)uVar137 / SQRT(fStack_5c0 + auVar65._0_4_ + auVar65._4_4_);
            fVar128 = fVar39 * fVar118;
            fVar133 = fVar41 * fVar118;
            fVar135 = fVar130 * fVar118;
            auVar94._0_8_ = CONCAT44(fVar135,fVar133);
            auVar94._8_4_ = fVar39 * fVar118;
            auVar94._12_4_ = fVar118 * 0.0;
            auVar83._8_4_ = fVar128;
            auVar83._0_8_ = auVar94._0_8_;
            auVar83._12_4_ = fVar123;
            auVar97 = NEON_ext(auVar83,auVar83,8,1);
            auVar88 = NEON_ext(auVar83,auVar94,8,1);
            uVar98 = SUB41(fVar135,0);
            uVar99 = (undefined1)((uint)fVar135 >> 8);
            uVar100 = (undefined1)((uint)fVar135 >> 0x10);
            uVar101 = (undefined1)((uint)fVar135 >> 0x18);
            uVar102 = SUB41(fVar128,0);
            uVar103 = (undefined1)((uint)fVar128 >> 8);
            uVar104 = (undefined1)((uint)fVar128 >> 0x10);
            bVar105 = (byte)((uint)fVar128 >> 0x18);
            uVar106 = (undefined1)((ulong)uVar137 >> 0x20);
            uVar107 = (undefined1)((ulong)uVar137 >> 0x28);
            uVar108 = (undefined1)((ulong)uVar137 >> 0x30);
            uVar109 = (undefined1)((ulong)uVar137 >> 0x38);
            fVar121 = auVar88._4_4_;
            fVar122 = auVar88._12_4_;
            fVar118 = auVar97._0_4_;
            fStack_600 = (float)uVar136;
            fStack_5fc = (float)((ulong)uVar136 >> 0x20);
            fStack_608 = auVar46._0_4_;
            fStack_604 = auVar46._4_4_;
            if (fVar81 <= fVar59) {
              pfVar29 = *(float **)(param_2 + 0x18);
              fStack_4b0 = *pfVar29;
              fStack_4ac = pfVar29[1];
              uStack_130 = *(undefined8 *)pfVar29;
              fStack_4a8 = pfVar29[2];
              fVar119 = pfVar29[3];
              uStack_128 = *(undefined8 *)(pfVar29 + 2);
              fVar60 = pfVar29[4];
              fStack_49c = pfVar29[5];
              uStack_120 = *(undefined8 *)(pfVar29 + 4);
              fVar71 = pfVar29[6];
              fVar72 = pfVar29[7];
              uStack_118 = *(undefined8 *)(pfVar29 + 6);
              fStack_490 = pfVar29[8];
              fStack_48c = pfVar29[9];
              uStack_110 = *(undefined8 *)(pfVar29 + 8);
              fStack_488 = pfVar29[10];
              fStack_484 = pfVar29[0xb];
              uStack_108 = *(undefined8 *)(pfVar29 + 10);
              uStack_478 = *(undefined8 *)(pfVar29 + 0xe);
              uStack_480 = *(undefined8 *)(pfVar29 + 0xc);
              bVar105 = bVar105 ^ 0x80;
              auVar4[8] = uVar102;
              auVar4._0_8_ = CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,
                                                  fVar133)))) ^ 0x8000000080000000;
              auVar4[9] = uVar103;
              auVar4[10] = uVar104;
              auVar4[0xb] = bVar105;
              auVar4[0xc] = uVar106;
              auVar4[0xd] = uVar107;
              auVar4[0xe] = uVar108;
              auVar4[0xf] = uVar109;
              auVar5[8] = uVar102;
              auVar5._0_8_ = CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,
                                                  fVar133)))) ^ 0x8000000080000000;
              auVar5[9] = uVar103;
              auVar5[10] = uVar104;
              auVar5[0xb] = bVar105;
              auVar5[0xc] = uVar106;
              auVar5[0xd] = uVar107;
              auVar5[0xe] = uVar108;
              auVar5[0xf] = uVar109;
              auVar88 = NEON_ext(auVar4,auVar5,8,1);
              uVar137 = NEON_ext(CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,
                                                  fVar133)))) ^ 0x8000000080000000,auVar88._0_8_,4,1
                                );
              fVar86 = (float)((ulong)uVar137 >> 0x20);
              fVar92 = (fVar111 * fVar123 - fStack_600 * auVar88._0_4_) +
                       fVar114 * -fVar133 + fVar85 * (float)uVar137;
              fVar73 = (fStack_5bc * fVar123 - fStack_5fc * -fVar133) +
                       fVar114 * -fVar135 + fVar111 * fVar86;
              uVar98 = SUB41(fVar73,0);
              uVar99 = (undefined1)((uint)fVar73 >> 8);
              uVar100 = (undefined1)((uint)fVar73 >> 0x10);
              uVar101 = (undefined1)((uint)fVar73 >> 0x18);
              fVar73 = (fVar115 * fVar123 - fVar111 * (float)uVar137) +
                       fStack_5bc * -fVar133 + fStack_608 * auVar88._0_4_;
              uVar102 = SUB41(fVar73,0);
              uVar103 = (undefined1)((uint)fVar73 >> 8);
              uVar104 = (undefined1)((uint)fVar73 >> 0x10);
              uVar106 = (undefined1)((uint)fVar73 >> 0x18);
              fVar73 = (fVar114 * fVar123 - fVar85 * fVar86) +
                       -(fStack_5bc * -fVar135 + fStack_604 * -fVar133);
              uVar107 = SUB41(fVar73,0);
              uVar108 = (undefined1)((uint)fVar73 >> 8);
              uVar109 = (undefined1)((uint)fVar73 >> 0x10);
              uVar110 = (undefined1)((uint)fVar73 >> 0x18);
              auVar6[4] = uVar98;
              auVar6._0_4_ = fVar92;
              auVar6[5] = uVar99;
              auVar6[6] = uVar100;
              auVar6[7] = uVar101;
              auVar6[8] = uVar102;
              auVar6[9] = uVar103;
              auVar6[10] = uVar104;
              auVar6[0xb] = uVar106;
              auVar6[0xc] = uVar107;
              auVar6[0xd] = uVar108;
              auVar6[0xe] = uVar109;
              auVar6[0xf] = uVar110;
              auVar7[4] = uVar98;
              auVar7._0_4_ = fVar92;
              auVar7[5] = uVar99;
              auVar7[6] = uVar100;
              auVar7[7] = uVar101;
              auVar7[8] = uVar102;
              auVar7[9] = uVar103;
              auVar7[10] = uVar104;
              auVar7[0xb] = uVar106;
              auVar7[0xc] = uVar107;
              auVar7[0xd] = uVar108;
              auVar7[0xe] = uVar109;
              auVar7[0xf] = uVar110;
              auVar112 = NEON_ext(auVar6,auVar7,8,1);
              auVar8[4] = uVar98;
              auVar8._0_4_ = fVar92;
              auVar8[5] = uVar99;
              auVar8[6] = uVar100;
              auVar8[7] = uVar101;
              auVar8[8] = uVar102;
              auVar8[9] = uVar103;
              auVar8[10] = uVar104;
              auVar8[0xb] = uVar106;
              auVar8[0xc] = uVar107;
              auVar8[0xd] = uVar108;
              auVar8[0xe] = uVar109;
              auVar8[0xf] = uVar110;
              auVar9[4] = uVar98;
              auVar9._0_4_ = fVar92;
              auVar9[5] = uVar99;
              auVar9[6] = uVar100;
              auVar9[7] = uVar101;
              auVar9[8] = uVar102;
              auVar9[9] = uVar103;
              auVar9[10] = uVar104;
              auVar9[0xb] = uVar106;
              auVar9[0xc] = uVar107;
              auVar9[0xd] = uVar108;
              auVar9[0xe] = uVar109;
              auVar9[0xf] = uVar110;
              auVar117 = NEON_ext(auVar8,auVar9,4,1);
              uVar137 = NEON_ext(auVar94._0_8_,auVar97._0_8_,4,1);
              auVar88 = NEON_ext(auVar83,auVar94,0xc,1);
              uVar10 = (undefined2)(CONCAT15(uVar99,CONCAT14(uVar98,fVar92)) >> 0x20);
              fVar86 = fVar121 * fVar92 + fVar118 * auVar117._0_4_;
              fVar121 = fVar121 * (float)CONCAT13(uVar101,CONCAT12(uVar100,uVar10)) +
                        fVar133 * auVar117._4_4_;
              fVar91 = fVar122 * fVar92 + auVar88._0_4_ * auVar112._0_4_;
              fVar122 = fVar122 * (float)CONCAT13(uVar101,CONCAT12(uVar100,uVar10)) +
                        auVar88._4_4_ * fVar92;
              auVar87._0_8_ =
                   CONCAT17((char)((uint)fVar121 >> 0x18),
                            CONCAT16((char)((uint)fVar121 >> 0x10),
                                     CONCAT15((char)((uint)fVar121 >> 8),
                                              CONCAT14(SUB41(fVar121,0),fVar86))));
              auVar87[8] = SUB41(fVar91,0);
              auVar87[9] = (undefined1)((uint)fVar91 >> 8);
              auVar87[10] = (undefined1)((uint)fVar91 >> 0x10);
              auVar87[0xb] = (undefined1)((uint)fVar91 >> 0x18);
              auVar89[0xc] = SUB41(fVar122,0);
              auVar89._0_12_ = auVar87;
              auVar89[0xd] = (undefined1)((uint)fVar122 >> 8);
              auVar89[0xe] = (undefined1)((uint)fVar122 >> 0x10);
              auVar89[0xf] = (byte)((uint)fVar122 >> 0x18) ^ 0x80;
              fVar86 = (fVar133 * fVar73 - (float)uVar137 * auVar112._0_4_) + fVar86;
              fVar92 = (fVar135 * fVar73 - (float)((ulong)uVar137 >> 0x20) * fVar92) +
                       (float)((ulong)auVar87._0_8_ >> 0x20);
              fVar121 = (fVar128 * fVar73 - fVar133 * auVar117._0_4_) + auVar87._8_4_;
              fVar122 = (fVar123 * fVar73 - fVar118 * auVar117._4_4_) + auVar89._12_4_;
              fVar123 = 2.0 / (fVar86 * fVar86 + fVar92 * fVar92 +
                              fVar121 * fVar121 + fVar122 * fVar122);
              fVar96 = fVar123 * fVar92;
              fVar128 = fVar123 * fVar121;
              fVar118 = fVar123 * fVar86 * fVar122;
              fVar91 = fVar123 * fVar86 * fVar86;
              fVar73 = 1.0 - (fVar96 * fVar92 + fVar128 * fVar121);
              fVar131 = fVar96 * fVar86 - fVar128 * fVar122;
              fVar132 = fVar128 * fVar86 + fVar96 * fVar122;
              fVar116 = fVar96 * fVar86 + fVar128 * fVar122;
              fVar120 = 1.0 - (fVar91 + fVar128 * fVar121);
              fVar134 = fVar128 * fVar92 - fVar118;
              fVar86 = fVar128 * fVar86 - fVar96 * fVar122;
              fVar118 = fVar128 * fVar92 + fVar118;
              pfVar29 = *(float **)(param_3 + 0x18);
              fVar121 = *pfVar29;
              fVar122 = pfVar29[1];
              fVar123 = pfVar29[2];
              fVar128 = pfVar29[4];
              fVar133 = pfVar29[5];
              fVar135 = pfVar29[6];
              fVar92 = 1.0 - (fVar91 + fVar96 * fVar92);
              auVar88 = *(undefined1 (*) [16])(pfVar29 + 8);
              fVar91 = auVar88._0_4_;
              fVar96 = auVar88._4_4_;
              fVar129 = auVar88._8_4_;
              fStack_470 = fVar121 * fVar73 + fVar128 * fVar131 + fVar91 * fVar132;
              fStack_46c = fVar122 * fVar73 + fVar133 * fVar131 + fVar96 * fVar132;
              fStack_468 = fVar123 * fVar73 + fVar135 * fVar131 + fVar129 * fVar132;
              fStack_464 = fVar73 * 0.0 + fVar131 * 0.0 + fVar132 * 0.0;
              fStack_460 = fVar121 * fVar116 + fVar128 * fVar120 + fVar91 * fVar134;
              fStack_45c = fVar122 * fVar116 + fVar133 * fVar120 + fVar96 * fVar134;
              fStack_458 = fVar123 * fVar116 + fVar135 * fVar120 + fVar129 * fVar134;
              fStack_454 = fVar116 * 0.0 + fVar120 * 0.0 + fVar134 * 0.0;
              auVar95._0_8_ =
                   CONCAT44(fVar122 * fVar86 + fVar133 * fVar118 + fVar96 * fVar92,
                            fVar121 * fVar86 + fVar128 * fVar118 + fVar91 * fVar92);
              auVar95._8_4_ = fVar123 * fVar86 + fVar135 * fVar118 + fVar129 * fVar92;
              auVar95._12_4_ = fVar86 * 0.0 + fVar118 * 0.0 + fVar92 * 0.0;
              uStack_e8 = CONCAT44(fStack_464,fStack_468);
              uStack_f0 = CONCAT44(fStack_46c,fStack_470);
              uStack_d8 = CONCAT44(fStack_454,fStack_458);
              uStack_e0 = CONCAT44(fStack_45c,fStack_460);
              uStack_c8 = auVar95._8_8_;
              uStack_440 = CONCAT44(fStack_50c,fStack_510);
              uStack_438 = CONCAT44(fStack_504,fStack_508);
              uStack_100 = uStack_480;
              uStack_f8 = uStack_478;
              uStack_d0 = auVar95._0_8_;
            }
            else {
              fVar73 = -fVar133;
              auVar50._0_8_ =
                   CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(uVar98,fVar133)))) ^
                   0x8000000080000000;
              auVar50[8] = uVar102;
              auVar50[9] = uVar103;
              auVar50[10] = uVar104;
              auVar50[0xb] = bVar105 ^ 0x80;
              auVar50[0xc] = uVar106;
              auVar50[0xd] = uVar107;
              auVar50[0xe] = uVar108;
              auVar50[0xf] = uVar109;
              auVar88 = NEON_ext(auVar50,auVar50,8,1);
              uVar137 = NEON_ext(auVar50._0_8_,auVar88._0_8_,4,1);
              fVar92 = (float)((ulong)uVar137 >> 0x20);
              fVar119 = auVar50._12_4_;
              fVar86 = (float)(auVar50._0_8_ >> 0x20);
              fVar60 = fVar114 * fVar73 + fVar85 * (float)uVar137;
              fVar71 = fVar114 * fVar86 + fVar111 * fVar92;
              fVar72 = fStack_5bc * fVar73 + fStack_608 * auVar88._0_4_;
              fVar73 = fStack_5bc * fVar86 + fStack_604 * fVar73;
              auVar61._0_8_ =
                   CONCAT17((char)((uint)fVar71 >> 0x18),
                            CONCAT16((char)((uint)fVar71 >> 0x10),
                                     CONCAT15((char)((uint)fVar71 >> 8),
                                              CONCAT14(SUB41(fVar71,0),fVar60))));
              auVar61[8] = SUB41(fVar72,0);
              auVar61[9] = (undefined1)((uint)fVar72 >> 8);
              auVar61[10] = (undefined1)((uint)fVar72 >> 0x10);
              auVar61[0xb] = (undefined1)((uint)fVar72 >> 0x18);
              auVar66[0xc] = SUB41(fVar73,0);
              auVar66._0_12_ = auVar61;
              auVar66[0xd] = (undefined1)((uint)fVar73 >> 8);
              auVar66[0xe] = (undefined1)((uint)fVar73 >> 0x10);
              auVar66[0xf] = (byte)((uint)fVar73 >> 0x18) ^ 0x80;
              auVar51._0_4_ = (fVar111 * fVar119 - fStack_600 * auVar88._0_4_) + fVar60;
              auVar51._4_4_ =
                   (fStack_5bc * fVar119 - fStack_5fc * -fVar133) +
                   (float)((ulong)auVar61._0_8_ >> 0x20);
              auVar51._8_4_ = (fVar115 * fVar119 - fVar111 * (float)uVar137) + auVar61._8_4_;
              auVar51._12_4_ = (fVar114 * fVar119 - fVar85 * fVar92) + auVar66._12_4_;
              auVar88 = NEON_ext(auVar51,auVar51,8,1);
              auVar112 = NEON_ext(auVar83,auVar94,0xc,1);
              auVar117 = NEON_ext(auVar51,auVar51,4,1);
              uVar137 = NEON_ext(auVar94._0_8_,auVar97._0_8_,4,1);
              fVar92 = fVar121 * auVar51._0_4_ + fVar118 * auVar117._0_4_;
              fVar121 = fVar121 * auVar51._4_4_ + fVar133 * auVar117._4_4_;
              fVar73 = fVar122 * auVar51._0_4_ + auVar112._0_4_ * auVar88._0_4_;
              fVar122 = fVar122 * auVar51._4_4_ + auVar112._4_4_ * auVar51._0_4_;
              auVar42._0_8_ =
                   CONCAT17((char)((uint)fVar121 >> 0x18),
                            CONCAT16((char)((uint)fVar121 >> 0x10),
                                     CONCAT15((char)((uint)fVar121 >> 8),
                                              CONCAT14(SUB41(fVar121,0),fVar92))));
              auVar42[8] = SUB41(fVar73,0);
              auVar42[9] = (undefined1)((uint)fVar73 >> 8);
              auVar42[10] = (undefined1)((uint)fVar73 >> 0x10);
              auVar42[0xb] = (undefined1)((uint)fVar73 >> 0x18);
              auVar52[0xc] = SUB41(fVar122,0);
              auVar52._0_12_ = auVar42;
              auVar52[0xd] = (undefined1)((uint)fVar122 >> 8);
              auVar52[0xe] = (undefined1)((uint)fVar122 >> 0x10);
              auVar52[0xf] = (byte)((uint)fVar122 >> 0x18) ^ 0x80;
              fVar92 = (fVar133 * auVar51._12_4_ - (float)uVar137 * auVar88._0_4_) + fVar92;
              fVar121 = (fVar135 * auVar51._12_4_ - (float)((ulong)uVar137 >> 0x20) * auVar51._0_4_)
                        + (float)((ulong)auVar42._0_8_ >> 0x20);
              fVar122 = (fVar128 * auVar51._12_4_ - fVar133 * auVar117._0_4_) + auVar42._8_4_;
              fVar123 = (fVar123 * auVar51._12_4_ - fVar118 * auVar117._4_4_) + auVar52._12_4_;
              fVar118 = 2.0 / (fVar92 * fVar92 + fVar121 * fVar121 +
                              fVar122 * fVar122 + fVar123 * fVar123);
              fVar73 = fVar118 * fVar121;
              fVar128 = fVar118 * fVar122;
              fVar86 = fVar118 * fVar92 * fVar123;
              fVar135 = fVar118 * fVar92 * fVar92;
              fVar133 = 1.0 - (fVar73 * fVar121 + fVar128 * fVar122);
              fVar119 = fVar73 * fVar92 - fVar128 * fVar123;
              fVar60 = fVar128 * fVar92 + fVar73 * fVar123;
              fVar72 = fVar73 * fVar92 + fVar128 * fVar123;
              fVar118 = 1.0 - (fVar135 + fVar128 * fVar122);
              fVar129 = fVar128 * fVar121 - fVar86;
              fVar92 = fVar128 * fVar92 - fVar73 * fVar123;
              fVar86 = fVar128 * fVar121 + fVar86;
              fVar128 = 1.0 - (fVar135 + fVar73 * fVar121);
              pfVar29 = *(float **)(param_2 + 0x18);
              fVar121 = *pfVar29;
              fVar122 = pfVar29[1];
              fVar123 = pfVar29[2];
              auVar88 = *(undefined1 (*) [16])(pfVar29 + 4);
              auVar97 = *(undefined1 (*) [16])(pfVar29 + 8);
              fVar135 = auVar88._0_4_;
              fVar73 = auVar88._4_4_;
              fVar91 = auVar88._8_4_;
              fVar96 = auVar97._0_4_;
              fVar116 = auVar97._4_4_;
              fVar120 = auVar97._8_4_;
              fStack_4b0 = fVar121 * fVar133 + fVar135 * fVar119 + fVar96 * fVar60;
              fStack_4ac = fVar122 * fVar133 + fVar73 * fVar119 + fVar116 * fVar60;
              fStack_4a8 = fVar123 * fVar133 + fVar91 * fVar119 + fVar120 * fVar60;
              fVar119 = fVar133 * 0.0 + fVar119 * 0.0 + fVar60 * 0.0;
              fVar60 = fVar121 * fVar72 + fVar135 * fVar118 + fVar96 * fVar129;
              fStack_49c = fVar122 * fVar72 + fVar73 * fVar118 + fVar116 * fVar129;
              fVar71 = fVar123 * fVar72 + fVar91 * fVar118 + fVar120 * fVar129;
              fVar72 = fVar72 * 0.0 + fVar118 * 0.0 + fVar129 * 0.0;
              fStack_490 = fVar121 * fVar92 + fVar135 * fVar86 + fVar96 * fVar128;
              fStack_48c = fVar122 * fVar92 + fVar73 * fVar86 + fVar116 * fVar128;
              fStack_488 = fVar123 * fVar92 + fVar91 * fVar86 + fVar120 * fVar128;
              fStack_484 = fVar92 * 0.0 + fVar86 * 0.0 + fVar128 * 0.0;
              uStack_128 = CONCAT44(fVar119,fStack_4a8);
              uStack_130 = CONCAT44(fStack_4ac,fStack_4b0);
              uStack_118 = CONCAT44(fVar72,fVar71);
              uStack_120 = CONCAT44(fStack_49c,fVar60);
              pfVar29 = *(float **)(param_3 + 0x18);
              fStack_470 = *pfVar29;
              fStack_46c = pfVar29[1];
              uStack_f0 = *(undefined8 *)pfVar29;
              fStack_468 = pfVar29[2];
              fStack_464 = pfVar29[3];
              uStack_e8 = *(undefined8 *)(pfVar29 + 2);
              fStack_460 = pfVar29[4];
              fStack_45c = pfVar29[5];
              uStack_e0 = *(undefined8 *)(pfVar29 + 4);
              fStack_458 = pfVar29[6];
              fStack_454 = pfVar29[7];
              uStack_d8 = *(undefined8 *)(pfVar29 + 6);
              uStack_108 = CONCAT44(fStack_484,fStack_488);
              uStack_110 = CONCAT44(fStack_48c,fStack_490);
              auVar95 = *(undefined1 (*) [16])(pfVar29 + 8);
              uStack_440 = *(undefined8 *)(pfVar29 + 0xc);
              uStack_438 = *(undefined8 *)(pfVar29 + 0xe);
              uStack_c8 = auVar95._8_8_;
              uStack_d0 = auVar95._0_8_;
              uStack_478 = CONCAT44(fStack_4f4,fStack_4f8);
              uStack_480 = CONCAT44(fStack_4fc,fStack_500);
              uStack_c0 = uStack_440;
              uStack_b8 = uStack_438;
            }
            uStack_3e8 = *(undefined8 *)(param_4 + 0x18);
            uStack_4c4 = uStack_4c4 & 0xffffffff;
            ppuStack_4f0 = &PTR_DAT_110b12af0;
            uStack_498 = CONCAT44(fVar72,fVar71);
            uStack_4a4 = CONCAT44(fVar60,fVar119);
            fStack_508 = (float)uStack_438;
            fStack_504 = (float)((ulong)uStack_438 >> 0x20);
            fStack_510 = (float)uStack_440;
            fStack_50c = (float)((ulong)uStack_440 >> 0x20);
            fStack_4f8 = (float)uStack_478;
            fStack_4f4 = (float)((ulong)uStack_478 >> 0x20);
            fStack_500 = (float)uStack_480;
            fStack_4fc = (float)((ulong)uStack_480 >> 0x20);
            uStack_448 = auVar95._8_8_;
            uStack_450 = auVar95._0_8_;
            pppuVar18 = appuStack_330;
            plStack_4b8 = param_5;
            uStack_430 = auVar48._0_8_;
            uStack_428 = auVar48._8_8_;
            uStack_420 = auVar93._0_8_;
            uStack_418 = auVar93._8_8_;
            uStack_410 = auVar125._0_8_;
            uStack_408 = auVar125._8_8_;
            uStack_400 = auVar63._0_8_;
            uStack_3f8 = auVar63._8_8_;
            uStack_3f0 = fVar59 < fVar81;
            FUN_109820310(pppuVar18,&uStack_130,&ppuStack_4f0);
            iVar38 = *(int *)(param_1 + 0x6c);
          }
          iVar36 = iVar36 + 1;
        } while (iVar36 < iVar38);
      }
    }
  }
  if ((*(char *)(param_1 + 0x58) == '\x01') &&
     (pppuVar18 = (undefined ***)param_5[1], *(int *)(pppuVar18 + 0x6c) != 0)) {
    ppuVar30 = *(undefined ***)(param_5[2] + 0x10);
    if (pppuVar18[0x6a] == ppuVar30) {
      FUN_10982280c(pppuVar18,ppuVar30 + 2,*(long *)(param_5[3] + 0x10) + 0x10);
    }
    else {
      FUN_10982280c(pppuVar18,*(long *)(param_5[3] + 0x10) + 0x10,ppuVar30 + 2);
    }
  }
LAB_109810e2c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    FUN_10980eb0c(&uStack_3a0);
    __Unwind_Resume(pppuVar18);
    return;
  }
  return;
}



/* Entry: 109810eec; end: 109810ef3;  */

void FUN_109810eec(void)

{
  return;
}



/* Entry: 109810ef4; end: 109811193;  */

ulong FUN_109810ef4(undefined1 *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined ***pppuVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  ulong uVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar14;
  undefined **ppuStack_340;
  undefined1 *puStack_338;
  undefined ***pppuStack_330;
  undefined ***pppuStack_328;
  undefined1 auStack_320 [320];
  undefined4 uStack_1e0;
  undefined1 uStack_1c0;
  undefined **appuStack_190 [22];
  float fStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined **ppuStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  long lStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  long lStack_68;
  
  iVar3 = (int)&ppuStack_340;
  pppuVar4 = &ppuStack_340;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar8 = *(float *)(param_2 + 0x10) - (float)param_2[8];
  fVar12 = *(float *)((long)param_2 + 0x84) - (float)((ulong)param_2[8] >> 0x20);
  fVar13 = *(float *)(param_2 + 0x11) - (float)param_2[9];
  auVar11._0_4_ = fVar8 * fVar8;
  auVar11._4_4_ = fVar12 * fVar12;
  auVar11._8_4_ = fVar13 * fVar13;
  auVar11._12_4_ = 0;
  auVar10 = NEON_ext(auVar11,auVar11,8,1);
  if (auVar11._0_4_ + auVar11._4_4_ + auVar10._0_4_ <
      *(float *)((long)param_2 + 0x13c) * *(float *)((long)param_2 + 0x13c)) {
    fVar8 = *(float *)(param_3 + 0x80) - (float)*(undefined8 *)(param_3 + 0x40);
    fVar12 = *(float *)(param_3 + 0x84) - (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    fVar13 = *(float *)(param_3 + 0x88) - (float)*(undefined8 *)(param_3 + 0x48);
    auVar10._0_4_ = fVar8 * fVar8;
    auVar10._4_4_ = fVar12 * fVar12;
    auVar10._8_4_ = fVar13 * fVar13;
    auVar10._12_4_ = 0;
    auVar11 = NEON_ext(auVar10,auVar10,8,1);
    plVar6 = param_2;
    uVar9 = 0x3f800000;
    if (auVar10._0_4_ + auVar10._4_4_ + auVar11._0_4_ <
        *(float *)(param_3 + 0x13c) * *(float *)(param_3 + 0x13c)) goto LAB_109811150;
  }
  pppuStack_328 = &ppuStack_c0;
  pppuStack_330 = (undefined ***)param_2[0x1a];
  uStack_80 = *(uint *)(param_3 + 0x138);
  uStack_b0 = 0;
  ppuStack_c0 = &PTR_FUN_110b13f68;
  uStack_b8 = 8;
  uVar14 = NEON_fmov(0x3f800000,4);
  uStack_a8 = 0xffffffffffffffff;
  uStack_98 = 0x3f800000;
  uStack_8c = 0;
  uStack_84 = 0;
  lStack_94 = (ulong)uStack_80 << 0x20;
  uStack_7c = 0;
  appuStack_190[0] = &PTR_DAT_110b12390;
  fStack_e0 = 1e+18;
  uStack_d8 = 0;
  uStack_d0 = 0x2000000000;
  uStack_c8 = 0x38d1b717;
  uStack_1e0 = 0x38d1b717;
  uStack_1c0 = 0;
  puStack_338 = auStack_320;
  ppuStack_340 = &PTR_FUN_110b14108;
  uStack_a0 = uVar14;
  FUN_10981dbc0(&ppuStack_340,param_2 + 2,param_2 + 10,param_3 + 0x10,param_3 + 0x50,appuStack_190);
  uVar9 = 0x3f800000;
  if (iVar3 != 0) {
    if (fStack_e0 < *(float *)((long)param_2 + 0x134)) {
      *(float *)((long)param_2 + 0x134) = fStack_e0;
    }
    if (fStack_e0 < *(float *)(param_3 + 0x134)) {
      *(float *)(param_3 + 0x134) = fStack_e0;
    }
    if (fStack_e0 < 1.0) {
      uVar9 = (ulong)(uint)fStack_e0;
    }
  }
  pppuStack_328 = *(undefined ****)(param_3 + 0xd0);
  uStack_80 = *(uint *)(param_2 + 0x27);
  uStack_b0 = 0;
  ppuStack_c0 = &PTR_FUN_110b13f68;
  uStack_b8 = 8;
  uStack_a8 = 0xffffffffffffffff;
  uStack_98 = 0x3f800000;
  uStack_8c = 0;
  uStack_84 = 0;
  lStack_94 = (ulong)uStack_80 << 0x20;
  uStack_7c = 0;
  appuStack_190[0] = &PTR_DAT_110b12390;
  fStack_e0 = 1e+18;
  uStack_d8 = 0;
  uStack_d0 = 0x2000000000;
  uStack_c8 = 0x38d1b717;
  uStack_1e0 = 0x38d1b717;
  uStack_1c0 = 0;
  puStack_338 = auStack_320;
  ppuStack_340 = &PTR_FUN_110b14108;
  pppuStack_330 = &ppuStack_c0;
  plVar6 = param_2 + 2;
  uStack_a0 = uVar14;
  FUN_10981dbc0(&ppuStack_340,plVar6,param_2 + 10,param_3 + 0x10,param_3 + 0x50,appuStack_190);
  param_1 = (undefined1 *)pppuVar4;
  if ((int)pppuVar4 != 0) {
    if (fStack_e0 < *(float *)((long)param_2 + 0x134)) {
      *(float *)((long)param_2 + 0x134) = fStack_e0;
    }
    if (fStack_e0 < *(float *)(param_3 + 0x134)) {
      *(float *)(param_3 + 0x134) = fStack_e0;
    }
    if (fStack_e0 < (float)uVar9) {
      uVar9 = (ulong)(uint)fStack_e0;
    }
  }
LAB_109811150:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar9;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar5 = (long *)*plVar6;
  (**(code **)(*plVar5 + 0x70))(plVar5,0x78);
  lVar7 = *(long *)(param_1 + 0x10);
  lVar1 = *plVar6;
  lVar2 = plVar6[1];
  *plVar5 = (long)&PTR_FUN_110b12a28;
  plVar5[1] = lVar1;
  plVar5[2] = lVar7;
  *(undefined1 *)(plVar5 + 6) = 1;
  plVar5[5] = 0;
  *(undefined1 *)(plVar5 + 10) = 1;
  plVar5[9] = 0;
  *(undefined1 *)(plVar5 + 0xb) = 0;
  plVar5[0xc] = lVar2;
  *(undefined1 *)(plVar5 + 0xd) = 0;
  uVar9 = *(ulong *)(param_1 + 0x18);
  *(undefined8 *)((long)plVar5 + 0x1c) = 0;
  *(undefined8 *)((long)plVar5 + 0x3c) = 0;
  *(ulong *)((long)plVar5 + 0x6c) = uVar9;
  return uVar9;
}



/* Entry: 109811194; end: 109811213;  */

void FUN_109811194(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x70))(plVar3,0x78);
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *plVar3 = (long)&PTR_FUN_110b12a28;
  plVar3[1] = lVar1;
  plVar3[2] = lVar4;
  *(undefined1 *)(plVar3 + 6) = 1;
  plVar3[5] = 0;
  *(undefined1 *)(plVar3 + 10) = 1;
  plVar3[9] = 0;
  *(undefined1 *)(plVar3 + 0xb) = 0;
  plVar3[0xc] = lVar2;
  *(undefined1 *)(plVar3 + 0xd) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)((long)plVar3 + 0x1c) = 0;
  *(undefined8 *)((long)plVar3 + 0x3c) = 0;
  *(undefined8 *)((long)plVar3 + 0x6c) = uVar5;
  return;
}



/* Entry: 109811214; end: 1098112f3;  */

void FUN_109811214(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x60);
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x58) == '\x01')) {
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar3 == *(uint *)(param_2 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          FUN_1098256f4(uVar2,0x10);
          uVar3 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 << 3 != lVar4);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
          FUN_109825740();
          uVar3 = *(uint *)(param_2 + 4);
        }
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(uint *)(param_2 + 8) = uVar1;
        lVar4 = *(long *)(param_1 + 0x60);
      }
    }
    *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8) = lVar4;
    *(uint *)(param_2 + 4) = uVar3 + 1;
  }
  return;
}



/* Entry: 1098112f4; end: 1098112ff;  */

void FUN_1098112f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109811300; end: 10981136b;  */

void FUN_109811300(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uStack_20;
  ulong uStack_18;
  
  *(float *)(param_2 + 0x28) = param_1;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  fVar3 = *(float *)(param_2 + 0x24);
  uStack_20 = CONCAT44((float)((ulong)*param_4 >> 0x20) - (float)((ulong)uVar1 >> 0x20) * fVar3,
                       (float)*param_4 - (float)uVar1 * fVar3);
  uStack_18 = (ulong)(uint)((float)param_4[1] - (float)uVar2 * fVar3);
  param_1 = param_1 + fVar3 + *(float *)(param_2 + 0x20);
  *(float *)(param_2 + 0x28) = param_1;
  if (param_1 < 0.0) {
    *(undefined1 *)(param_2 + 0x2c) = 1;
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x20))(*(long **)(param_2 + 8),param_3,&uStack_20);
  return;
}



/* Entry: 10981136c; end: 10981136f;  */

void FUN_10981136c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109811370; end: 10981163b;  */

void FUN_109811370(float param_1,long param_2,undefined8 *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  undefined1 auVar36 [16];
  undefined1 in_q5 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar53;
  float fVar61;
  undefined1 auVar54 [12];
  float fVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar55 [12];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 auVar77 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uVar20;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar39 [16];
  undefined1 auVar44 [16];
  undefined1 auVar56 [16];
  undefined1 auVar59 [16];
  
  fVar24 = (float)*param_3;
  fVar25 = (float)((ulong)*param_3 >> 0x20);
  fVar26 = (float)param_3[1];
  fVar19 = *param_4;
  fVar8 = param_4[1];
  fVar9 = param_4[2];
  fVar28 = param_4[3];
  fVar27 = (float)((ulong)param_3[1] >> 0x20);
  auVar63._4_12_ = in_q5._4_12_;
  auVar36._12_4_ = in_q5._12_4_;
  if (*(char *)(param_2 + 0x100) == '\x01') {
    fVar10 = *(float *)(param_2 + 0x40);
    fVar11 = *(float *)(param_2 + 0x44);
    fVar12 = *(float *)(param_2 + 0x50);
    fVar13 = *(float *)(param_2 + 0x54);
    auVar77 = *(undefined1 (*) [16])(param_2 + 0x60);
    auVar58 = *(undefined1 (*) [16])(param_2 + 0x70);
    auVar63._0_4_ = fVar10;
    auVar36._0_8_ = auVar63._0_8_;
    auVar36._8_4_ = *(undefined4 *)(param_2 + 0x48);
    auVar38._8_8_ = auVar36._8_8_;
    auVar38._4_4_ = fVar12;
    auVar38._0_4_ = fVar10;
    auVar39._0_12_ = auVar38._0_12_;
    auVar39._12_4_ = *(undefined4 *)(param_2 + 0x58);
    fVar18 = auVar77._4_4_;
    auVar66 = NEON_ext(auVar77,auVar77,8,1);
    auVar36 = NEON_ext(auVar39,auVar39,8,1);
    fVar32 = auVar77._0_4_;
    auVar54._0_8_ = auVar58._0_8_ ^ 0x8000000080000000;
    auVar54[8] = auVar58[8];
    auVar54[9] = auVar58[9];
    auVar54[10] = auVar58[10];
    auVar54[0xb] = auVar58[0xb] ^ 0x80;
    auVar56[0xc] = auVar58[0xc];
    auVar56._0_12_ = auVar54;
    auVar56[0xd] = auVar58[0xd];
    auVar56[0xe] = auVar58[0xe];
    auVar56[0xf] = auVar58[0xf] ^ 0x80;
    fVar53 = (float)auVar54._0_8_;
    fVar30 = fVar10 * fVar53;
    fVar61 = (float)(auVar54._0_8_ >> 0x20);
    fVar33 = fVar12 * fVar61;
    uVar68 = (undefined1)((uint)fVar33 >> 8);
    uVar69 = (undefined1)((uint)fVar33 >> 0x10);
    uVar70 = (undefined1)((uint)fVar33 >> 0x18);
    fVar62 = auVar54._8_4_;
    fVar47 = fVar32 * fVar62;
    uVar71 = (undefined1)((uint)fVar47 >> 8);
    uVar72 = (undefined1)((uint)fVar47 >> 0x10);
    uVar73 = (undefined1)((uint)fVar47 >> 0x18);
    fVar34 = auVar56._12_4_ * 0.0;
    uVar74 = (undefined1)((uint)fVar34 >> 8);
    uVar75 = (undefined1)((uint)fVar34 >> 0x10);
    uVar76 = (undefined1)((uint)fVar34 >> 0x18);
    auVar48._0_4_ = fVar11 * fVar53;
    auVar48._4_4_ = fVar13 * fVar61;
    auVar48._8_4_ = fVar18 * fVar62;
    auVar48._12_4_ = auVar56._12_4_ * 0.0;
    auVar3[4] = SUB41(fVar33,0);
    auVar3._0_4_ = fVar30;
    auVar3[5] = uVar68;
    auVar3[6] = uVar69;
    auVar3[7] = uVar70;
    auVar3[8] = SUB41(fVar47,0);
    auVar3[9] = uVar71;
    auVar3[10] = uVar72;
    auVar3[0xb] = uVar73;
    auVar3[0xc] = SUB41(fVar34,0);
    auVar3[0xd] = uVar74;
    auVar3[0xe] = uVar75;
    auVar3[0xf] = uVar76;
    auVar4[4] = SUB41(fVar33,0);
    auVar4._0_4_ = fVar30;
    auVar4[5] = uVar68;
    auVar4[6] = uVar69;
    auVar4[7] = uVar70;
    auVar4[8] = SUB41(fVar47,0);
    auVar4[9] = uVar71;
    auVar4[10] = uVar72;
    auVar4[0xb] = uVar73;
    auVar4[0xc] = SUB41(fVar34,0);
    auVar4[0xd] = uVar74;
    auVar4[0xe] = uVar75;
    auVar4[0xf] = uVar76;
    auVar63 = NEON_ext(auVar3,auVar4,8,1);
    auVar77 = NEON_ext(auVar48,auVar48,8,1);
    fVar79 = auVar66._0_4_;
    fVar35 = auVar36._0_4_;
    auVar57._0_4_ = fVar35 * fVar53;
    fVar37 = auVar36._4_4_;
    auVar57._4_4_ = fVar37 * fVar61;
    auVar57._8_4_ = fVar79 * fVar62;
    auVar57._12_4_ = 0;
    auVar36 = NEON_ext(auVar57,auVar57,8,1);
    fVar16 = auVar57._0_4_ + auVar57._4_4_ + auVar36._0_4_ + auVar36._4_4_;
    fVar47 = auVar63._0_4_ + fVar30 + fVar33;
    fVar52 = auVar77._0_4_ + auVar48._0_4_ + auVar48._4_4_;
    fVar34 = *(float *)(param_2 + 0xc0);
    fVar53 = *(float *)(param_2 + 0xc4);
    fVar61 = *(float *)(param_2 + 200);
    fVar62 = *(float *)(param_2 + 0xd0);
    fVar14 = *(float *)(param_2 + 0xd4);
    fVar15 = *(float *)(param_2 + 0xd8);
    fVar30 = (float)*(undefined8 *)(param_2 + 0xe0);
    fVar33 = (float)((ulong)*(undefined8 *)(param_2 + 0xe0) >> 0x20);
    fVar78 = fVar34 * fVar47;
    fVar80 = fVar53 * fVar52;
    fVar81 = *(float *)(param_2 + 0xcc) * 0.0;
    auVar64._0_4_ = fVar62 * fVar47;
    auVar64._4_4_ = fVar14 * fVar52;
    auVar64._8_4_ = fVar15 * fVar16;
    auVar64._12_4_ = *(float *)(param_2 + 0xdc) * 0.0;
    auVar49._0_4_ = fVar30 * fVar47;
    auVar49._4_4_ = fVar33 * fVar52;
    fVar47 = (float)*(undefined8 *)(param_2 + 0xe8);
    auVar49._8_4_ = fVar47 * fVar16;
    auVar49._12_4_ = 0;
    auVar66 = NEON_ext(auVar49,auVar49,8,1);
    auVar82 = NEON_ext(auVar64,auVar64,8,1);
    fVar52 = fVar19 + fVar24 * param_1;
    fVar29 = fVar8 + fVar25 * param_1;
    fVar31 = fVar9 + fVar26 * param_1;
    auVar5._4_4_ = fVar80;
    auVar5._0_4_ = fVar78;
    auVar5._8_4_ = fVar61 * fVar16;
    auVar5._12_4_ = fVar81;
    auVar6._4_4_ = fVar80;
    auVar6._0_4_ = fVar78;
    auVar6._8_4_ = fVar61 * fVar16;
    auVar6._12_4_ = fVar81;
    auVar36 = NEON_ext(auVar5,auVar6,8,1);
    auVar40._0_4_ = fVar52 * (fVar10 * fVar34 + fVar11 * fVar53 + fVar35 * fVar61);
    auVar40._4_4_ = fVar29 * (fVar12 * fVar34 + fVar13 * fVar53 + fVar37 * fVar61);
    auVar40._8_4_ = fVar31 * (fVar32 * fVar34 + fVar18 * fVar53 + fVar79 * fVar61);
    auVar40._12_4_ = (fVar28 + 0.0) * (fVar34 * 0.0 + fVar53 * 0.0 + fVar61 * 0.0);
    auVar46._0_4_ = fVar52 * (fVar10 * fVar62 + fVar11 * fVar14 + fVar35 * fVar15);
    auVar46._4_4_ = fVar29 * (fVar12 * fVar62 + fVar13 * fVar14 + fVar37 * fVar15);
    auVar46._8_4_ = fVar31 * (fVar32 * fVar62 + fVar18 * fVar14 + fVar79 * fVar15);
    auVar46._12_4_ = (fVar28 + 0.0) * (fVar62 * 0.0 + fVar14 * 0.0 + fVar15 * 0.0);
    fVar52 = fVar52 * (fVar10 * fVar30 + fVar11 * fVar33 + fVar35 * fVar47);
    fVar29 = fVar29 * (fVar12 * fVar30 + fVar13 * fVar33 + fVar37 * fVar47);
    fVar31 = fVar31 * (fVar32 * fVar30 + fVar18 * fVar33 + fVar79 * fVar47);
    auVar77 = NEON_ext(auVar40,auVar40,8,1);
    auVar58 = NEON_ext(auVar46,auVar46,8,1);
    auVar1._4_4_ = fVar29;
    auVar1._0_4_ = fVar52;
    auVar1._8_4_ = fVar31;
    auVar1._12_4_ = 0;
    auVar2._4_4_ = fVar29;
    auVar2._0_4_ = fVar52;
    auVar2._8_4_ = fVar31;
    auVar2._12_4_ = 0;
    auVar63 = NEON_ext(auVar1,auVar2,8,1);
    fVar28 = *(float *)(param_2 + 0xf0) + fVar78 + fVar80 + auVar36._0_4_ +
             auVar77._0_4_ + auVar40._0_4_ + auVar40._4_4_;
    fVar30 = *(float *)(param_2 + 0xf4) + auVar64._0_4_ + auVar64._4_4_ + auVar82._0_4_ +
             auVar58._0_4_ + auVar46._0_4_ + auVar46._4_4_;
    fVar32 = *(float *)(param_2 + 0xf8) +
             auVar49._0_4_ + auVar49._4_4_ + auVar66._0_4_ + auVar66._4_4_ +
             fVar52 + fVar29 + auVar63._0_4_ + auVar63._4_4_;
    auVar21._0_4_ = fVar24 * (fVar28 - fVar19);
    auVar21._4_4_ = fVar25 * (fVar30 - fVar8);
    auVar21._8_4_ = fVar26 * (fVar32 - fVar9);
    auVar21._12_4_ = fVar27 * 0.0;
    auVar36 = NEON_ext(auVar21,auVar21,8,1);
    fVar19 = auVar21._0_4_ + auVar21._4_4_ + auVar36._0_4_;
    uVar20 = CONCAT44(auVar21._0_4_ + auVar21._4_4_ + auVar36._4_4_,fVar19);
    uVar17 = CONCAT44(fVar25 * fVar19,fVar24 * fVar19);
    fVar28 = fVar28 - fVar24 * fVar19;
    fVar30 = fVar30 - fVar25 * fVar19;
    fVar32 = fVar32 - fVar26 * fVar19;
    fVar33 = 0.0;
  }
  else {
    fVar10 = *(float *)(param_2 + 0x80);
    fVar11 = *(float *)(param_2 + 0x84);
    fVar12 = *(float *)(param_2 + 0x90);
    fVar13 = *(float *)(param_2 + 0x94);
    auVar77 = *(undefined1 (*) [16])(param_2 + 0xa0);
    auVar58 = *(undefined1 (*) [16])(param_2 + 0xb0);
    auVar41._4_12_ = auVar63._4_12_;
    auVar41._0_4_ = fVar10;
    auVar43._0_8_ = auVar41._0_8_;
    auVar43._8_4_ = *(undefined4 *)(param_2 + 0x88);
    auVar43._12_4_ = auVar36._12_4_;
    auVar42._8_8_ = auVar43._8_8_;
    auVar42._4_4_ = fVar12;
    auVar42._0_4_ = fVar10;
    auVar44._0_12_ = auVar42._0_12_;
    auVar44._12_4_ = *(undefined4 *)(param_2 + 0x98);
    fVar18 = auVar77._4_4_;
    auVar67 = NEON_ext(auVar77,auVar77,8,1);
    auVar36 = NEON_ext(auVar44,auVar44,8,1);
    fVar32 = auVar77._0_4_;
    auVar55._0_8_ = auVar58._0_8_ ^ 0x8000000080000000;
    auVar55[8] = auVar58[8];
    auVar55[9] = auVar58[9];
    auVar55[10] = auVar58[10];
    auVar55[0xb] = auVar58[0xb] ^ 0x80;
    auVar59[0xc] = auVar58[0xc];
    auVar59._0_12_ = auVar55;
    auVar59[0xd] = auVar58[0xd];
    auVar59[0xe] = auVar58[0xe];
    auVar59[0xf] = auVar58[0xf] ^ 0x80;
    fVar53 = (float)auVar55._0_8_;
    fVar30 = fVar10 * fVar53;
    fVar61 = (float)(auVar55._0_8_ >> 0x20);
    fVar33 = fVar12 * fVar61;
    uVar68 = (undefined1)((uint)fVar33 >> 8);
    uVar69 = (undefined1)((uint)fVar33 >> 0x10);
    uVar70 = (undefined1)((uint)fVar33 >> 0x18);
    fVar62 = auVar55._8_4_;
    fVar47 = fVar32 * fVar62;
    uVar71 = (undefined1)((uint)fVar47 >> 8);
    uVar72 = (undefined1)((uint)fVar47 >> 0x10);
    uVar73 = (undefined1)((uint)fVar47 >> 0x18);
    fVar34 = auVar59._12_4_ * 0.0;
    uVar74 = (undefined1)((uint)fVar34 >> 8);
    uVar75 = (undefined1)((uint)fVar34 >> 0x10);
    uVar76 = (undefined1)((uint)fVar34 >> 0x18);
    auVar50._0_4_ = fVar11 * fVar53;
    auVar50._4_4_ = fVar13 * fVar61;
    auVar50._8_4_ = fVar18 * fVar62;
    auVar50._12_4_ = auVar59._12_4_ * 0.0;
    auVar66[4] = SUB41(fVar33,0);
    auVar66._0_4_ = fVar30;
    auVar66[5] = uVar68;
    auVar66[6] = uVar69;
    auVar66[7] = uVar70;
    auVar66[8] = SUB41(fVar47,0);
    auVar66[9] = uVar71;
    auVar66[10] = uVar72;
    auVar66[0xb] = uVar73;
    auVar66[0xc] = SUB41(fVar34,0);
    auVar66[0xd] = uVar74;
    auVar66[0xe] = uVar75;
    auVar66[0xf] = uVar76;
    auVar82[4] = SUB41(fVar33,0);
    auVar82._0_4_ = fVar30;
    auVar82[5] = uVar68;
    auVar82[6] = uVar69;
    auVar82[7] = uVar70;
    auVar82[8] = SUB41(fVar47,0);
    auVar82[9] = uVar71;
    auVar82[10] = uVar72;
    auVar82[0xb] = uVar73;
    auVar82[0xc] = SUB41(fVar34,0);
    auVar82[0xd] = uVar74;
    auVar82[0xe] = uVar75;
    auVar82[0xf] = uVar76;
    auVar63 = NEON_ext(auVar66,auVar82,8,1);
    auVar77 = NEON_ext(auVar50,auVar50,8,1);
    fVar37 = auVar67._0_4_;
    fVar31 = auVar36._0_4_;
    auVar60._0_4_ = fVar31 * fVar53;
    fVar35 = auVar36._4_4_;
    auVar60._4_4_ = fVar35 * fVar61;
    auVar60._8_4_ = fVar37 * fVar62;
    auVar60._12_4_ = 0;
    auVar36 = NEON_ext(auVar60,auVar60,8,1);
    fVar16 = auVar60._0_4_ + auVar60._4_4_ + auVar36._0_4_ + auVar36._4_4_;
    fVar47 = auVar63._0_4_ + fVar30 + fVar33;
    fVar52 = auVar77._0_4_ + auVar50._0_4_ + auVar50._4_4_;
    fVar34 = *(float *)(param_2 + 0xc0);
    fVar53 = *(float *)(param_2 + 0xc4);
    fVar61 = *(float *)(param_2 + 200);
    fVar62 = *(float *)(param_2 + 0xd0);
    fVar14 = *(float *)(param_2 + 0xd4);
    fVar15 = *(float *)(param_2 + 0xd8);
    fVar30 = (float)*(undefined8 *)(param_2 + 0xe0);
    fVar33 = (float)((ulong)*(undefined8 *)(param_2 + 0xe0) >> 0x20);
    fVar79 = fVar34 * fVar47;
    fVar78 = fVar53 * fVar52;
    fVar29 = *(float *)(param_2 + 0xcc) * 0.0;
    auVar65._0_4_ = fVar62 * fVar47;
    auVar65._4_4_ = fVar14 * fVar52;
    auVar65._8_4_ = fVar15 * fVar16;
    auVar65._12_4_ = *(float *)(param_2 + 0xdc) * 0.0;
    auVar51._0_4_ = fVar30 * fVar47;
    auVar51._4_4_ = fVar33 * fVar52;
    fVar47 = (float)*(undefined8 *)(param_2 + 0xe8);
    auVar51._8_4_ = fVar47 * fVar16;
    auVar51._12_4_ = 0;
    auVar66 = NEON_ext(auVar51,auVar51,8,1);
    auVar82 = NEON_ext(auVar65,auVar65,8,1);
    auVar67._4_4_ = fVar78;
    auVar67._0_4_ = fVar79;
    auVar67._8_4_ = fVar61 * fVar16;
    auVar67._12_4_ = fVar29;
    auVar7._4_4_ = fVar78;
    auVar7._0_4_ = fVar79;
    auVar7._8_4_ = fVar61 * fVar16;
    auVar7._12_4_ = fVar29;
    auVar36 = NEON_ext(auVar67,auVar7,8,1);
    fVar16 = fVar19 * (fVar10 * fVar34 + fVar11 * fVar53 + fVar31 * fVar61);
    fVar52 = fVar8 * (fVar12 * fVar34 + fVar13 * fVar53 + fVar35 * fVar61);
    fVar29 = fVar9 * (fVar32 * fVar34 + fVar18 * fVar53 + fVar37 * fVar61);
    fVar34 = fVar28 * (fVar34 * 0.0 + fVar53 * 0.0 + fVar61 * 0.0);
    auVar45._0_4_ = fVar19 * (fVar10 * fVar62 + fVar11 * fVar14 + fVar31 * fVar15);
    auVar45._4_4_ = fVar8 * (fVar12 * fVar62 + fVar13 * fVar14 + fVar35 * fVar15);
    auVar45._8_4_ = fVar9 * (fVar32 * fVar62 + fVar18 * fVar14 + fVar37 * fVar15);
    auVar45._12_4_ = fVar28 * (fVar62 * 0.0 + fVar14 * 0.0 + fVar15 * 0.0);
    auVar22._0_4_ = fVar19 * (fVar10 * fVar30 + fVar11 * fVar33 + fVar31 * fVar47);
    auVar22._4_4_ = fVar8 * (fVar12 * fVar30 + fVar13 * fVar33 + fVar35 * fVar47);
    auVar22._8_4_ = fVar9 * (fVar32 * fVar30 + fVar18 * fVar33 + fVar37 * fVar47);
    auVar77._4_4_ = fVar52;
    auVar77._0_4_ = fVar16;
    auVar77._8_4_ = fVar29;
    auVar77._12_4_ = fVar34;
    auVar58._4_4_ = fVar52;
    auVar58._0_4_ = fVar16;
    auVar58._8_4_ = fVar29;
    auVar58._12_4_ = fVar34;
    auVar77 = NEON_ext(auVar77,auVar58,8,1);
    auVar58 = NEON_ext(auVar45,auVar45,8,1);
    auVar22._12_4_ = 0;
    auVar63 = NEON_ext(auVar22,auVar22,8,1);
    fVar28 = *(float *)(param_2 + 0xf0) + fVar79 + fVar78 + auVar36._0_4_ +
             auVar77._0_4_ + fVar16 + fVar52;
    fVar30 = *(float *)(param_2 + 0xf4) + auVar65._0_4_ + auVar65._4_4_ + auVar82._0_4_ +
             auVar58._0_4_ + auVar45._0_4_ + auVar45._4_4_;
    fVar32 = *(float *)(param_2 + 0xf8) +
             auVar51._0_4_ + auVar51._4_4_ + auVar66._0_4_ + auVar66._4_4_ +
             auVar22._0_4_ + auVar22._4_4_ + auVar63._0_4_ + auVar63._4_4_;
    fVar33 = *(float *)(param_2 + 0xfc) + 0.0 + 0.0;
    auVar23._0_4_ = fVar24 * ((fVar19 + fVar24 * param_1) - fVar28);
    auVar23._4_4_ = fVar25 * ((fVar8 + fVar25 * param_1) - fVar30);
    auVar23._8_4_ = fVar26 * ((fVar9 + fVar26 * param_1) - fVar32);
    auVar23._12_4_ = fVar27 * 0.0;
    uVar17 = CONCAT44(auVar23._0_4_ + auVar23._4_4_,auVar23._0_4_ + auVar23._4_4_);
    auVar36 = NEON_ext(auVar23,auVar23,8,1);
    uVar20 = CONCAT44(auVar23._0_4_ + auVar23._4_4_ + auVar36._4_4_,
                      auVar23._0_4_ + auVar23._4_4_ + auVar36._0_4_);
  }
  uStack_18 = CONCAT44(fVar33,fVar32);
  uStack_20 = CONCAT44(fVar30,fVar28);
  (**(code **)(**(long **)(param_2 + 0x38) + 0x20))
            (uVar20,uVar17,*(long **)(param_2 + 0x38),param_3,&uStack_20);
  return;
}



/* Entry: 10981163c; end: 10981171b;  */

long FUN_10981163c(long param_1,long param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar1 = *(uint *)(param_2 + 4);
  uVar7 = (ulong)uVar1;
  if ((int)uVar1 < 1) {
    *(uint *)(param_1 + 4) = uVar1;
    return param_1;
  }
  puVar6 = (undefined4 *)(uVar7 << 2);
  puVar2 = puVar6;
  FUN_1098256f4(puVar6,0x10);
  uVar4 = (ulong)*(uint *)(param_1 + 4);
  puVar3 = *(undefined4 **)(param_1 + 0x10);
  puVar5 = puVar2;
  if ((int)*(uint *)(param_1 + 4) < 1) {
    if (puVar3 == (undefined4 *)0x0) goto LAB_1098116d0;
  }
  else {
    do {
      *puVar5 = *puVar3;
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar4 != 0);
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_109825740();
  }
LAB_1098116d0:
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 **)(param_1 + 0x10) = puVar2;
  *(uint *)(param_1 + 8) = uVar1;
  _bzero(puVar2,puVar6);
  *(uint *)(param_1 + 4) = uVar1;
  puVar5 = *(undefined4 **)(param_2 + 0x10);
  do {
    *puVar2 = *puVar5;
    uVar7 = uVar7 - 1;
    puVar5 = puVar5 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar7 != 0);
  return param_1;
}



/* Entry: 10981171c; end: 1098117af;  */

undefined8 *
FUN_10981171c(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4,long param_5,
             int param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_3;
  *param_1 = &PTR_FUN_110b12b50;
  param_1[1] = plVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  *(char *)(param_1 + 4) = (char)param_6;
  *(undefined4 *)((long)param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 5) = param_8;
  if (param_2 == 0) {
    lVar1 = param_5;
    if (param_6 == 0) {
      lVar1 = param_4;
      param_4 = param_5;
    }
    (**(code **)(*plVar2 + 0x30))
              (plVar2,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(param_4 + 0x10));
    if ((int)plVar2 != 0) {
      plVar2 = (long *)param_1[1];
      (**(code **)(*plVar2 + 0x18))
                (plVar2,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(param_4 + 0x10));
      param_1[3] = plVar2;
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return param_1;
}



/* Entry: 1098117b0; end: 109811803;  */

undefined8 * FUN_1098117b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12b50;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 109811804; end: 109811807;  */

undefined8 * FUN_109811804(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12b50;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 109811808; end: 10981181b;  */

void FUN_109811808(void)

{
  FUN_1098117b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10981181c; end: 1098121c7;  */

void FUN_10981181c(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  long lVar9;
  float *pfVar10;
  undefined1 (*pauVar11) [16];
  float *pfVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar25 [16];
  undefined1 auVar24 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar39;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  float fVar70;
  float fVar72;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  undefined1 auVar90 [12];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar94;
  float fVar95;
  undefined1 auVar93 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined4 uVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar115 [16];
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  float fStack_190;
  float fStack_18c;
  float fStack_178;
  float fStack_174;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar36 [16];
  undefined1 auVar45 [16];
  undefined1 auVar51 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar9 = param_2;
    lVar15 = param_3;
    if (*(char *)(param_1 + 0x20) == '\0') {
      lVar9 = param_3;
      lVar15 = param_2;
    }
    plVar14 = *(long **)(lVar15 + 8);
    pfVar10 = *(float **)(lVar15 + 0x18);
    fVar40 = *pfVar10;
    fVar21 = pfVar10[1];
    fVar22 = pfVar10[2];
    fVar19 = pfVar10[4];
    fVar32 = pfVar10[5];
    fVar20 = pfVar10[6];
    pfVar12 = *(float **)(lVar9 + 0x18);
    fVar18 = *pfVar12;
    fVar59 = pfVar12[1];
    fVar70 = pfVar12[2];
    fVar72 = pfVar12[4];
    fVar88 = pfVar12[5];
    fVar39 = pfVar12[6];
    pauVar1 = (undefined1 (*) [12])(pfVar12 + 8);
    fVar96 = (float)*(undefined8 *)(pfVar12 + 10);
    uVar100 = (undefined4)((ulong)*(undefined8 *)(pfVar12 + 10) >> 0x20);
    fVar102 = (float)*(undefined8 *)*pauVar1;
    fVar107 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar63 = *(undefined1 (*) [16])(pfVar12 + 0xc);
    auVar83._12_4_ = uVar100;
    auVar83._0_12_ = *pauVar1;
    auVar108._12_4_ = uVar100;
    auVar108._0_12_ = *pauVar1;
    auVar108 = NEON_ext(auVar83,auVar108,8,1);
    fVar60 = pfVar10[8];
    fVar71 = pfVar10[9];
    fVar41 = pfVar10[10];
    lVar15 = *(long *)(lVar9 + 8);
    auVar103._4_4_ = fVar72;
    auVar103._0_4_ = fVar18;
    auVar103._8_4_ = fVar70;
    auVar103._12_4_ = fVar39;
    auVar83 = NEON_ext(auVar103,auVar103,8,1);
    auVar90._0_8_ = auVar63._0_8_ ^ 0x8000000080000000;
    auVar90[8] = auVar63[8];
    auVar90[9] = auVar63[9];
    auVar90[10] = auVar63[10];
    auVar90[0xb] = auVar63[0xb] ^ 0x80;
    auVar104[0xc] = auVar63[0xc];
    auVar104._0_12_ = auVar90;
    auVar104[0xd] = auVar63[0xd];
    auVar104[0xe] = auVar63[0xe];
    auVar104[0xf] = auVar63[0xf] ^ 0x80;
    fVar89 = (float)auVar90._0_8_;
    fVar111 = fVar18 * fVar89;
    fVar17 = (float)(auVar90._0_8_ >> 0x20);
    fVar112 = fVar72 * fVar17;
    fVar101 = auVar90._8_4_;
    fVar113 = auVar104._12_4_ * 0.0;
    auVar61._0_4_ = fVar59 * fVar89;
    auVar61._4_4_ = fVar88 * fVar17;
    auVar61._8_4_ = fVar107 * fVar101;
    auVar61._12_4_ = auVar104._12_4_ * 0.0;
    auVar63._4_4_ = fVar112;
    auVar63._0_4_ = fVar111;
    auVar63._8_4_ = fVar102 * fVar101;
    auVar63._12_4_ = fVar113;
    auVar64._4_4_ = fVar112;
    auVar64._0_4_ = fVar111;
    auVar64._8_4_ = fVar102 * fVar101;
    auVar64._12_4_ = fVar113;
    auVar103 = NEON_ext(auVar63,auVar64,8,1);
    auVar115 = NEON_ext(auVar61,auVar61,8,1);
    auVar91._0_4_ = auVar83._0_4_ * fVar89;
    auVar91._4_4_ = auVar83._4_4_ * fVar17;
    auVar91._8_4_ = auVar108._0_4_ * fVar101;
    auVar91._12_4_ = 0;
    auVar109 = NEON_ext(auVar91,auVar91,8,1);
    fVar89 = (float)*(undefined8 *)(pfVar10 + 0xc);
    auVar62._0_4_ = fVar18 * fVar89;
    fVar17 = (float)((ulong)*(undefined8 *)(pfVar10 + 0xc) >> 0x20);
    auVar62._4_4_ = fVar72 * fVar17;
    fVar101 = (float)*(undefined8 *)(pfVar10 + 0xe);
    auVar62._8_4_ = fVar102 * fVar101;
    fVar113 = (float)((ulong)*(undefined8 *)(pfVar10 + 0xe) >> 0x20);
    auVar62._12_4_ = fVar113 * 0.0;
    auVar93._0_4_ = fVar59 * fVar89;
    auVar93._4_4_ = fVar88 * fVar17;
    auVar93._8_4_ = fVar107 * fVar101;
    auVar93._12_4_ = fVar113 * 0.0;
    auVar73._0_4_ = fVar89 * auVar83._0_4_;
    auVar73._4_4_ = fVar17 * auVar83._4_4_;
    auVar73._8_4_ = fVar101 * auVar108._0_4_;
    auVar84 = NEON_ext(auVar62,auVar62,8,1);
    auVar104 = NEON_ext(auVar93,auVar93,8,1);
    auVar73._12_4_ = 0;
    auVar108 = NEON_ext(auVar73,auVar73,8,1);
    auVar83 = *(undefined1 (*) [16])(lVar15 + 0x50);
    auVar50._0_8_ = auVar83._0_8_ ^ 0x8000000080000000;
    auVar50[8] = auVar83[8];
    auVar50[9] = auVar83[9];
    auVar50[10] = auVar83[10];
    auVar50[0xb] = auVar83[0xb] ^ 0x80;
    auVar51[0xc] = auVar83[0xc];
    auVar51._0_12_ = auVar50;
    auVar51[0xd] = auVar83[0xd];
    auVar51[0xe] = auVar83[0xe];
    auVar51[0xf] = auVar83[0xf] ^ 0x80;
    fVar89 = (float)auVar50._0_8_;
    auVar106._0_4_ = (fVar18 * fVar40 + fVar72 * fVar19 + fVar102 * fVar60) * fVar89;
    fVar17 = (float)(auVar50._0_8_ >> 0x20);
    auVar106._4_4_ = (fVar59 * fVar40 + fVar88 * fVar19 + fVar107 * fVar60) * fVar17;
    fVar101 = auVar50._8_4_;
    auVar106._8_4_ = (fVar70 * fVar40 + fVar39 * fVar19 + fVar96 * fVar60) * fVar101;
    auVar106._12_4_ = (fVar40 * 0.0 + fVar19 * 0.0 + fVar60 * 0.0) * auVar51._12_4_;
    auVar87._0_4_ = (fVar18 * fVar21 + fVar72 * fVar32 + fVar102 * fVar71) * fVar89;
    auVar87._4_4_ = (fVar59 * fVar21 + fVar88 * fVar32 + fVar107 * fVar71) * fVar17;
    auVar87._8_4_ = (fVar70 * fVar21 + fVar39 * fVar32 + fVar96 * fVar71) * fVar101;
    auVar87._12_4_ = (fVar21 * 0.0 + fVar32 * 0.0 + fVar71 * 0.0) * auVar51._12_4_;
    auVar75._0_4_ = (fVar18 * fVar22 + fVar72 * fVar20 + fVar102 * fVar41) * fVar89;
    auVar75._4_4_ = (fVar59 * fVar22 + fVar88 * fVar20 + fVar107 * fVar41) * fVar17;
    auVar75._8_4_ = (fVar70 * fVar22 + fVar39 * fVar20 + fVar96 * fVar41) * fVar101;
    auVar83 = NEON_ext(auVar106,auVar106,8,1);
    auVar63 = NEON_ext(auVar87,auVar87,8,1);
    auVar75._12_4_ = 0;
    uStack_a0 = CONCAT44(auVar87._0_4_ + auVar87._4_4_ + auVar63._0_4_,
                         auVar106._0_4_ + auVar106._4_4_ + auVar83._0_4_);
    auVar83 = NEON_ext(auVar75,auVar75,8,1);
    uStack_98 = (ulong)(uint)(auVar75._0_4_ + auVar75._4_4_ + auVar83._0_4_ + auVar83._4_4_);
    (**(code **)(*plVar14 + 0x80))(&fStack_d0,plVar14,&uStack_a0);
    auVar110._0_4_ = (fVar40 * fVar18 + fVar19 * fVar72 + fVar60 * fVar102) * fStack_d0;
    auVar110._4_4_ = (fVar21 * fVar18 + fVar32 * fVar72 + fVar71 * fVar102) * fStack_cc;
    auVar110._8_4_ = (fVar22 * fVar18 + fVar20 * fVar72 + fVar41 * fVar102) * fStack_c8;
    auVar110._12_4_ = (fVar18 * 0.0 + fVar72 * 0.0 + fVar102 * 0.0) * fStack_c4;
    auVar68._0_4_ = (fVar40 * fVar59 + fVar19 * fVar88 + fVar60 * fVar107) * fStack_d0;
    auVar68._4_4_ = (fVar21 * fVar59 + fVar32 * fVar88 + fVar71 * fVar107) * fStack_cc;
    auVar68._8_4_ = (fVar22 * fVar59 + fVar20 * fVar88 + fVar41 * fVar107) * fStack_c8;
    auVar68._12_4_ = (fVar59 * 0.0 + fVar88 * 0.0 + fVar107 * 0.0) * fStack_c4;
    auVar85._0_4_ = (fVar40 * fVar70 + fVar19 * fVar39 + fVar60 * fVar96) * fStack_d0;
    auVar85._4_4_ = (fVar21 * fVar70 + fVar32 * fVar39 + fVar71 * fVar96) * fStack_cc;
    auVar85._8_4_ = (fVar22 * fVar70 + fVar20 * fVar39 + fVar41 * fVar96) * fStack_c8;
    auVar63 = NEON_ext(auVar110,auVar110,8,1);
    auVar64 = NEON_ext(auVar68,auVar68,8,1);
    auVar85._12_4_ = 0;
    auVar83 = NEON_ext(auVar85,auVar85,8,1);
    fVar59 = fVar111 + fVar112 + auVar103._0_4_ + auVar62._0_4_ + auVar62._4_4_ + auVar84._0_4_ +
             auVar110._0_4_ + auVar110._4_4_ + auVar63._0_4_;
    fVar70 = auVar61._0_4_ + auVar61._4_4_ + auVar115._0_4_ +
             auVar93._0_4_ + auVar93._4_4_ + auVar104._0_4_ +
             auVar68._0_4_ + auVar68._4_4_ + auVar64._0_4_;
    fVar72 = auVar91._0_4_ + auVar91._4_4_ + auVar109._0_4_ + auVar109._4_4_ +
             auVar73._0_4_ + auVar73._4_4_ + auVar108._0_4_ + auVar108._4_4_ +
             auVar85._0_4_ + auVar85._4_4_ + auVar83._0_4_ + auVar83._4_4_;
    fVar19 = *(float *)(lVar15 + 0x50);
    fVar32 = *(float *)(lVar15 + 0x54);
    fVar20 = *(float *)(lVar15 + 0x58);
    auVar84._0_4_ = fVar19 * fVar59;
    auVar84._4_4_ = fVar32 * fVar70;
    auVar84._8_4_ = fVar20 * fVar72;
    auVar84._12_4_ = *(float *)(lVar15 + 0x5c) * 0.0;
    auVar83 = NEON_ext(auVar84,auVar84,8,1);
    fVar18 = (auVar84._0_4_ + auVar84._4_4_ + auVar83._0_4_) - *(float *)(lVar15 + 0x60);
    pauVar11 = *(undefined1 (**) [16])(lVar9 + 0x18);
    auVar83 = *pauVar11;
    auVar108 = pauVar11[1];
    fVar40 = *(float *)pauVar11[2];
    fVar21 = *(float *)(pauVar11[2] + 4);
    fVar22 = *(float *)(pauVar11[2] + 8);
    auVar63 = pauVar11[3];
    fVar88 = *(float *)(*(long *)(param_1 + 0x18) + 0x364);
    param_5[1] = *(long *)(param_1 + 0x18);
    if (fVar18 < fVar88 + *(float *)(param_5 + 6)) {
      fVar59 = fVar59 - fVar19 * fVar18;
      fVar70 = fVar70 - fVar32 * fVar18;
      fVar72 = fVar72 - fVar20 * fVar18;
      auVar74._0_4_ = fVar40 * fVar59;
      auVar74._4_4_ = fVar21 * fVar70;
      auVar74._8_4_ = fVar22 * fVar72;
      auVar109._0_4_ = auVar83._0_4_ * fVar59;
      auVar109._4_4_ = auVar83._4_4_ * fVar70;
      auVar109._8_4_ = auVar83._8_4_ * fVar72;
      auVar109._12_4_ = auVar83._12_4_ * 0.0;
      auVar52._0_4_ = auVar108._0_4_ * fVar59;
      auVar52._4_4_ = auVar108._4_4_ * fVar70;
      auVar52._8_4_ = auVar108._8_4_ * fVar72;
      auVar52._12_4_ = auVar108._12_4_ * 0.0;
      auVar83 = NEON_ext(auVar109,auVar109,8,1);
      auVar108 = NEON_ext(auVar52,auVar52,8,1);
      auVar74._12_4_ = 0;
      auVar64 = NEON_ext(auVar74,auVar74,8,1);
      fVar19 = *(float *)(lVar15 + 0x50);
      fVar32 = *(float *)(lVar15 + 0x54);
      fVar20 = *(float *)(lVar15 + 0x58);
      auVar53._0_4_ = *(float *)*pauVar11 * fVar19;
      auVar53._4_4_ = *(float *)(*pauVar11 + 4) * fVar32;
      auVar53._8_4_ = *(float *)(*pauVar11 + 8) * fVar20;
      auVar53._12_4_ = *(float *)(*pauVar11 + 0xc) * *(float *)(lVar15 + 0x5c);
      auVar65._0_4_ = fVar19 * *(float *)pauVar11[1];
      auVar65._4_4_ = fVar32 * *(float *)(pauVar11[1] + 4);
      auVar65._8_4_ = fVar20 * *(float *)(pauVar11[1] + 8);
      auVar65._12_4_ = *(float *)(lVar15 + 0x5c) * *(float *)(pauVar11[1] + 0xc);
      auVar115._0_4_ = fVar19 * *(float *)pauVar11[2];
      auVar115._4_4_ = fVar32 * *(float *)(pauVar11[2] + 4);
      auVar115._8_4_ = fVar20 * *(float *)(pauVar11[2] + 8);
      auVar75 = NEON_ext(auVar53,auVar53,8,1);
      auVar85 = NEON_ext(auVar65,auVar65,8,1);
      auVar115._12_4_ = 0;
      uStack_a0 = CONCAT44(auVar65._0_4_ + auVar65._4_4_ + auVar85._0_4_,
                           auVar53._0_4_ + auVar53._4_4_ + auVar75._0_4_);
      auVar75 = NEON_ext(auVar115,auVar115,8,1);
      uStack_98 = (ulong)(uint)(auVar115._0_4_ + auVar115._4_4_ + auVar75._0_4_ + auVar75._4_4_);
      uStack_a8 = CONCAT44(auVar63._12_4_ + 0.0,
                           auVar63._8_4_ +
                           auVar74._0_4_ + auVar74._4_4_ + auVar64._0_4_ + auVar64._4_4_);
      uStack_b0 = CONCAT44(auVar63._4_4_ + auVar108._0_4_ + auVar52._0_4_ + auVar52._4_4_,
                           auVar63._0_4_ + auVar83._0_4_ + auVar109._0_4_ + auVar109._4_4_);
      (**(code **)(*param_5 + 0x20))(param_5,&uStack_a0,&uStack_b0);
    }
    if (((int)plVar14[1] < 7) && (*(int *)(param_5[1] + 0x360) < *(int *)(param_1 + 0x28))) {
      fVar19 = *(float *)(lVar15 + 0x58);
      if (ABS(fVar19) <= 0.70710677) {
        fVar20 = *(float *)(lVar15 + 0x50);
        fVar19 = *(float *)(lVar15 + 0x54);
        fVar32 = 1.0 / SQRT(fVar19 * fVar19 + fVar20 * fVar20);
        fVar19 = -(fVar19 * fVar32);
        fVar20 = fVar20 * fVar32;
        fVar32 = 0.0;
      }
      else {
        fVar32 = *(float *)(lVar15 + 0x54);
        fVar40 = 1.0 / SQRT(fVar19 * fVar19 + fVar32 * fVar32);
        fVar20 = -(fVar19 * fVar40);
        fVar32 = fVar32 * fVar40;
        fVar19 = 0.0;
      }
      (**(code **)(*plVar14 + 0x20))(plVar14);
      uVar122 = ___sincosf_stret();
      fVar40 = (float)((ulong)uVar122 >> 0x20);
      if (0 < *(int *)(param_1 + 0x24)) {
        iVar13 = 0;
        auVar44._0_4_ = fVar19 * fVar19;
        auVar44._4_4_ = fVar20 * fVar20;
        auVar44._8_4_ = fVar32 * fVar32;
        auVar44._12_4_ = 0;
        auVar83 = NEON_ext(auVar44,auVar44,8,1);
        fVar21 = (float)uVar122 / SQRT(auVar83._0_4_ + auVar44._0_4_ + auVar44._4_4_);
        fVar19 = fVar19 * fVar21;
        auVar25._0_8_ = CONCAT44(fVar20 * fVar21,fVar19);
        auVar25._8_4_ = fVar32 * fVar21;
        auVar25._12_4_ = fVar21 * 0.0;
        auVar54._8_4_ = fVar21 * fVar32;
        auVar54._0_8_ = auVar25._0_8_;
        auVar54._12_4_ = fVar40;
        auVar108 = NEON_ext(auVar54,auVar54,8,1);
        auVar63 = NEON_ext(auVar54,auVar25,0xc,1);
        uVar122 = NEON_ext(auVar25._0_8_,auVar108._0_8_,4,1);
        auVar83 = NEON_ext(auVar54,auVar25,8,1);
        do {
          fVar22 = *(float *)(lVar15 + 0x50);
          fVar18 = *(float *)(lVar15 + 0x54);
          fVar59 = *(float *)(lVar15 + 0x58);
          fVar70 = *(float *)(lVar15 + 0x5c);
          auVar34._0_4_ = fVar22 * fVar22;
          auVar34._4_4_ = fVar18 * fVar18;
          auVar34._8_4_ = fVar59 * fVar59;
          auVar34._12_4_ = fVar70 * fVar70;
          auVar64 = NEON_ext(auVar34,auVar34,8,1);
          uVar123 = ___sincosf_stret();
          fVar60 = (float)((ulong)uVar123 >> 0x20);
          fVar72 = (float)uVar123 / SQRT(auVar34._0_4_ + auVar34._4_4_ + auVar64._0_4_);
          fVar41 = fVar72 * fVar59;
          fVar22 = fVar22 * fVar72;
          fVar18 = fVar18 * fVar72;
          auVar26._0_8_ = CONCAT44(fVar18,fVar22);
          auVar26._8_4_ = fVar59 * fVar72;
          auVar26._12_4_ = fVar70 * fVar72;
          auVar55._8_4_ = fVar41;
          auVar55._0_8_ = auVar26._0_8_;
          auVar55._12_4_ = fVar60;
          fVar59 = -fVar22;
          auVar35._0_8_ =
               CONCAT17((char)((uint)fVar18 >> 0x18),
                        CONCAT16((char)((uint)fVar18 >> 0x10),
                                 CONCAT15((char)((uint)fVar18 >> 8),CONCAT14(SUB41(fVar18,0),fVar22)
                                         ))) ^ 0x8000000080000000;
          auVar35[8] = SUB41(fVar41,0);
          auVar35[9] = (char)((uint)fVar41 >> 8);
          auVar35[10] = (char)((uint)fVar41 >> 0x10);
          auVar35[0xb] = (byte)((uint)fVar41 >> 0x18) ^ 0x80;
          auVar35[0xc] = (char)((ulong)uVar123 >> 0x20);
          auVar35[0xd] = (char)((ulong)uVar123 >> 0x28);
          auVar35[0xe] = (char)((ulong)uVar123 >> 0x30);
          auVar35[0xf] = (char)((ulong)uVar123 >> 0x38);
          auVar64 = NEON_ext(auVar35,auVar35,8,1);
          uVar42 = NEON_ext(auVar35._0_8_,auVar64._0_8_,4,1);
          fStack_190 = (float)uVar122;
          fStack_18c = (float)((ulong)uVar122 >> 0x20);
          fVar89 = (float)((ulong)uVar42 >> 0x20);
          fVar71 = auVar35._12_4_;
          fVar72 = (float)(auVar35._0_8_ >> 0x20);
          fStack_178 = auVar63._0_4_;
          fStack_174 = auVar63._4_4_;
          fVar70 = auVar83._4_4_ * fVar59 + auVar108._0_4_ * (float)uVar42;
          fVar88 = auVar83._4_4_ * fVar72 + fVar19 * fVar89;
          fVar39 = auVar83._12_4_ * fVar59 + fStack_178 * auVar64._0_4_;
          fVar72 = auVar83._12_4_ * fVar72 + fStack_174 * fVar59;
          uVar123 = CONCAT17((char)((uint)fVar88 >> 0x18),
                             CONCAT16((char)((uint)fVar88 >> 0x10),
                                      CONCAT15((char)((uint)fVar88 >> 8),
                                               CONCAT14(SUB41(fVar88,0),fVar70))));
          auVar33[8] = SUB41(fVar39,0);
          auVar33._0_8_ = uVar123;
          auVar33[9] = (undefined1)((uint)fVar39 >> 8);
          auVar33[10] = (undefined1)((uint)fVar39 >> 0x10);
          auVar33[0xb] = (undefined1)((uint)fVar39 >> 0x18);
          auVar36[0xc] = SUB41(fVar72,0);
          auVar36._0_12_ = auVar33;
          auVar36[0xd] = (undefined1)((uint)fVar72 >> 8);
          auVar36[0xe] = (undefined1)((uint)fVar72 >> 0x10);
          auVar36[0xf] = (byte)((uint)fVar72 >> 0x18) ^ 0x80;
          auVar37._0_4_ = (fVar19 * fVar71 - fStack_190 * auVar64._0_4_) + fVar70;
          auVar37._4_4_ =
               (fVar20 * fVar21 * fVar71 - fStack_18c * fVar59) + (float)((ulong)uVar123 >> 0x20);
          auVar37._8_4_ = (fVar21 * fVar32 * fVar71 - fVar19 * (float)uVar42) + auVar33._8_4_;
          auVar37._12_4_ = (fVar40 * fVar71 - auVar108._0_4_ * fVar89) + auVar36._12_4_;
          auVar75 = NEON_ext(auVar37,auVar37,8,1);
          auVar64 = NEON_ext(auVar55,auVar55,8,1);
          fVar59 = auVar64._0_4_;
          auVar76._4_4_ = fVar22;
          auVar76._0_4_ = fVar59;
          auVar85 = NEON_ext(auVar55,auVar26,0xc,1);
          auVar84 = NEON_ext(auVar37,auVar37,4,1);
          uVar42 = NEON_ext(auVar26._0_8_,auVar64._0_8_,4,1);
          auVar64 = NEON_ext(auVar55,auVar26,8,1);
          auVar76._8_8_ = auVar85._0_8_;
          auVar79._12_4_ = auVar85._4_4_;
          fVar70 = auVar64._4_4_ * auVar37._0_4_ + fVar59 * auVar84._0_4_;
          fVar72 = auVar64._4_4_ * auVar37._4_4_ + fVar22 * auVar84._4_4_;
          fVar88 = auVar64._12_4_ * auVar37._0_4_ + auVar85._0_4_ * auVar75._0_4_;
          fVar39 = auVar64._12_4_ * auVar37._4_4_ + auVar79._12_4_ * auVar37._0_4_;
          uVar123 = CONCAT17((char)((uint)fVar72 >> 0x18),
                             CONCAT16((char)((uint)fVar72 >> 0x10),
                                      CONCAT15((char)((uint)fVar72 >> 8),
                                               CONCAT14(SUB41(fVar72,0),fVar70))));
          auVar23[8] = SUB41(fVar88,0);
          auVar23._0_8_ = uVar123;
          auVar23[9] = (undefined1)((uint)fVar88 >> 8);
          auVar23[10] = (undefined1)((uint)fVar88 >> 0x10);
          auVar23[0xb] = (undefined1)((uint)fVar88 >> 0x18);
          auVar27[0xc] = SUB41(fVar39,0);
          auVar27._0_12_ = auVar23;
          auVar27[0xd] = (undefined1)((uint)fVar39 >> 8);
          auVar27[0xe] = (undefined1)((uint)fVar39 >> 0x10);
          auVar27[0xf] = (byte)((uint)fVar39 >> 0x18) ^ 0x80;
          fVar70 = (fVar22 * auVar37._12_4_ - (float)uVar42 * auVar75._0_4_) + fVar70;
          fVar18 = (fVar18 * auVar37._12_4_ - (float)((ulong)uVar42 >> 0x20) * auVar37._0_4_) +
                   (float)((ulong)uVar123 >> 0x20);
          fVar22 = (fVar41 * auVar37._12_4_ - fVar22 * auVar84._0_4_) + auVar23._8_4_;
          fVar59 = (fVar60 * auVar37._12_4_ - fVar59 * auVar84._4_4_) + auVar27._12_4_;
          bVar8 = *(char *)(param_1 + 0x20) == '\0';
          lVar9 = param_2;
          if (bVar8) {
            lVar9 = param_3;
          }
          pfVar10 = *(float **)(lVar9 + 0x18);
          fVar71 = *pfVar10;
          fVar41 = pfVar10[1];
          fVar89 = pfVar10[2];
          fVar88 = pfVar10[4];
          fVar39 = pfVar10[5];
          fVar60 = pfVar10[6];
          auVar77._4_12_ = auVar76._4_12_;
          auVar77._0_4_ = fVar71;
          auVar79._0_8_ = auVar77._0_8_;
          auVar79._8_4_ = fVar89;
          auVar78._8_8_ = auVar79._8_8_;
          auVar78._4_4_ = fVar88;
          auVar78._0_4_ = fVar71;
          auVar80._0_12_ = auVar78._0_12_;
          auVar80._12_4_ = fVar60;
          auVar64 = *(undefined1 (*) [16])(pfVar10 + 8);
          auVar75 = *(undefined1 (*) [16])(pfVar10 + 0xc);
          fVar72 = auVar64._0_4_;
          auVar85 = NEON_ext(auVar80,auVar80,8,1);
          auVar43._0_8_ = auVar75._0_8_ ^ 0x8000000080000000;
          auVar43[8] = auVar75[8];
          auVar43[9] = auVar75[9];
          auVar43[10] = auVar75[10];
          auVar43[0xb] = auVar75[0xb] ^ 0x80;
          auVar45[0xc] = auVar75[0xc];
          auVar45._0_12_ = auVar43;
          auVar45[0xd] = auVar75[0xd];
          auVar45[0xe] = auVar75[0xe];
          auVar45[0xf] = auVar75[0xf] ^ 0x80;
          fVar101 = (float)auVar43._0_8_;
          fVar96 = fVar71 * fVar101;
          fVar102 = (float)(auVar43._0_8_ >> 0x20);
          fVar113 = fVar88 * fVar102;
          fVar107 = auVar43._8_4_;
          fVar111 = auVar45._12_4_ * 0.0;
          fVar17 = auVar64._4_4_;
          auVar105._0_4_ = fVar41 * fVar101;
          auVar105._4_4_ = fVar39 * fVar102;
          auVar105._8_4_ = fVar17 * fVar107;
          auVar105._12_4_ = auVar45._12_4_ * 0.0;
          auVar3._4_4_ = fVar113;
          auVar3._0_4_ = fVar96;
          auVar3._8_4_ = fVar72 * fVar107;
          auVar3._12_4_ = fVar111;
          auVar4._4_4_ = fVar113;
          auVar4._0_4_ = fVar96;
          auVar4._8_4_ = fVar72 * fVar107;
          auVar4._12_4_ = fVar111;
          auVar75 = NEON_ext(auVar3,auVar4,8,1);
          auVar84 = NEON_ext(auVar105,auVar105,8,1);
          auVar110 = NEON_ext(auVar64,auVar64,8,1);
          auVar46._0_4_ = auVar85._0_4_ * fVar101;
          auVar46._4_4_ = auVar85._4_4_ * fVar102;
          auVar46._8_4_ = auVar110._0_4_ * fVar107;
          auVar46._12_4_ = 0;
          auVar106 = NEON_ext(auVar46,auVar46,8,1);
          fVar101 = 2.0 / (fVar70 * fVar70 + fVar18 * fVar18 + fVar22 * fVar22 + fVar59 * fVar59);
          fVar107 = fVar101 * fVar18;
          fVar102 = fVar101 * fVar22;
          fVar111 = fVar101 * fVar70 * fVar59;
          fVar116 = fVar101 * fVar70 * fVar70;
          fVar121 = fVar107 * fVar70 - fVar102 * fVar59;
          fVar101 = fVar107 * fVar70 + fVar102 * fVar59;
          fVar114 = fVar102 * fVar70 + fVar107 * fVar59;
          fVar59 = fVar102 * fVar70 - fVar107 * fVar59;
          fVar112 = fVar102 * fVar18 - fVar111;
          fVar111 = fVar102 * fVar18 + fVar111;
          fVar70 = 1.0 - (fVar107 * fVar18 + fVar102 * fVar22);
          lVar2 = param_3;
          if (bVar8) {
            lVar2 = param_2;
          }
          pfVar10 = *(float **)(lVar2 + 0x18);
          fVar5 = *pfVar10;
          fVar6 = pfVar10[1];
          fVar7 = pfVar10[2];
          fVar120 = 1.0 - (fVar116 + fVar102 * fVar22);
          fVar107 = 1.0 - (fVar116 + fVar107 * fVar18);
          fVar92 = fVar70 * fVar5 + fVar101 * fVar6 + fVar59 * fVar7;
          fVar94 = fVar121 * fVar5 + fVar120 * fVar6 + fVar111 * fVar7;
          fVar95 = fVar114 * fVar5 + fVar112 * fVar6 + fVar107 * fVar7;
          fVar117 = (float)*(undefined8 *)(pfVar10 + 4);
          fVar118 = (float)((ulong)*(undefined8 *)(pfVar10 + 4) >> 0x20);
          fVar119 = (float)*(undefined8 *)(pfVar10 + 6);
          fVar97 = fVar70 * fVar117 + fVar101 * fVar118 + fVar59 * fVar119;
          fVar98 = fVar121 * fVar117 + fVar120 * fVar118 + fVar111 * fVar119;
          fVar99 = fVar114 * fVar117 + fVar112 * fVar118 + fVar107 * fVar119;
          fVar22 = (float)*(undefined8 *)(pfVar10 + 0xc);
          auVar81._0_4_ = fVar22 * fVar71;
          fVar18 = (float)((ulong)*(undefined8 *)(pfVar10 + 0xc) >> 0x20);
          auVar81._4_4_ = fVar18 * fVar88;
          fVar102 = (float)*(undefined8 *)(pfVar10 + 0xe);
          auVar81._8_4_ = fVar102 * fVar72;
          fVar116 = (float)((ulong)*(undefined8 *)(pfVar10 + 0xe) >> 0x20);
          auVar81._12_4_ = fVar116 * 0.0;
          auVar86._0_4_ = fVar22 * fVar41;
          auVar86._4_4_ = fVar18 * fVar39;
          auVar86._8_4_ = fVar102 * fVar17;
          auVar86._12_4_ = fVar116 * 0.0;
          auVar66._0_4_ = fVar22 * auVar85._0_4_;
          auVar66._4_4_ = fVar18 * auVar85._4_4_;
          auVar66._8_4_ = fVar102 * auVar110._0_4_;
          auVar85 = NEON_ext(auVar81,auVar81,8,1);
          auVar93 = NEON_ext(auVar86,auVar86,8,1);
          auVar66._12_4_ = 0;
          auVar110 = NEON_ext(auVar66,auVar66,8,1);
          fVar22 = pfVar10[8];
          fVar18 = pfVar10[9];
          fVar102 = pfVar10[10];
          fVar116 = fVar70 * fVar22 + fVar101 * fVar18 + fVar59 * fVar102;
          fVar111 = fVar121 * fVar22 + fVar120 * fVar18 + fVar111 * fVar102;
          fVar112 = fVar114 * fVar22 + fVar112 * fVar18 + fVar107 * fVar102;
          fVar101 = auVar64._8_4_;
          lVar16 = *(long *)(lVar9 + 8);
          auVar64 = *(undefined1 (*) [16])(lVar16 + 0x50);
          auVar24._0_8_ = auVar64._0_8_ ^ 0x8000000080000000;
          auVar24[8] = auVar64[8];
          auVar24[9] = auVar64[9];
          auVar24[10] = auVar64[10];
          auVar24[0xb] = auVar64[0xb] ^ 0x80;
          auVar28[0xc] = auVar64[0xc];
          auVar28._0_12_ = auVar24;
          auVar28[0xd] = auVar64[0xd];
          auVar28[0xe] = auVar64[0xe];
          auVar28[0xf] = auVar64[0xf] ^ 0x80;
          fVar59 = (float)auVar24._0_8_;
          auVar56._0_4_ = (fVar71 * fVar92 + fVar88 * fVar97 + fVar72 * fVar116) * fVar59;
          fVar70 = (float)(auVar24._0_8_ >> 0x20);
          auVar56._4_4_ = (fVar41 * fVar92 + fVar39 * fVar97 + fVar17 * fVar116) * fVar70;
          fVar107 = auVar24._8_4_;
          auVar56._8_4_ = (fVar89 * fVar92 + fVar60 * fVar97 + fVar101 * fVar116) * fVar107;
          auVar56._12_4_ = (fVar92 * 0.0 + fVar97 * 0.0 + fVar116 * 0.0) * auVar28._12_4_;
          auVar67._0_4_ = (fVar71 * fVar94 + fVar88 * fVar98 + fVar72 * fVar111) * fVar59;
          auVar67._4_4_ = (fVar41 * fVar94 + fVar39 * fVar98 + fVar17 * fVar111) * fVar70;
          auVar67._8_4_ = (fVar89 * fVar94 + fVar60 * fVar98 + fVar101 * fVar111) * fVar107;
          auVar67._12_4_ = (fVar94 * 0.0 + fVar98 * 0.0 + fVar111 * 0.0) * auVar28._12_4_;
          auVar29._0_4_ = (fVar71 * fVar95 + fVar88 * fVar99 + fVar72 * fVar112) * fVar59;
          auVar29._4_4_ = (fVar41 * fVar95 + fVar39 * fVar99 + fVar17 * fVar112) * fVar70;
          auVar29._8_4_ = (fVar89 * fVar95 + fVar60 * fVar99 + fVar101 * fVar112) * fVar107;
          auVar64 = NEON_ext(auVar56,auVar56,8,1);
          auVar87 = NEON_ext(auVar67,auVar67,8,1);
          auVar29._12_4_ = 0;
          uStack_b0 = CONCAT44(auVar67._0_4_ + auVar67._4_4_ + auVar87._0_4_,
                               auVar56._0_4_ + auVar56._4_4_ + auVar64._0_4_);
          auVar64 = NEON_ext(auVar29,auVar29,8,1);
          uStack_a8 = (ulong)(uint)(auVar29._0_4_ + auVar29._4_4_ + auVar64._0_4_ + auVar64._4_4_);
          (**(code **)(**(long **)(lVar2 + 8) + 0x80))(&uStack_a0,*(long **)(lVar2 + 8),&uStack_b0);
          auVar38._0_4_ = (fVar5 * fVar71 + fVar117 * fVar88 + fVar22 * fVar72) * (float)uStack_a0;
          auVar38._4_4_ = (fVar6 * fVar71 + fVar118 * fVar88 + fVar18 * fVar72) * uStack_a0._4_4_;
          auVar38._8_4_ = (fVar7 * fVar71 + fVar119 * fVar88 + fVar102 * fVar72) * (float)uStack_98;
          auVar38._12_4_ = (fVar71 * 0.0 + fVar88 * 0.0 + fVar72 * 0.0) * uStack_98._4_4_;
          auVar47._0_4_ = (fVar5 * fVar41 + fVar117 * fVar39 + fVar22 * fVar17) * (float)uStack_a0;
          auVar47._4_4_ = (fVar6 * fVar41 + fVar118 * fVar39 + fVar18 * fVar17) * uStack_a0._4_4_;
          auVar47._8_4_ = (fVar7 * fVar41 + fVar119 * fVar39 + fVar102 * fVar17) * (float)uStack_98;
          auVar47._12_4_ = (fVar41 * 0.0 + fVar39 * 0.0 + fVar17 * 0.0) * uStack_98._4_4_;
          auVar30._0_4_ = (fVar5 * fVar89 + fVar117 * fVar60 + fVar22 * fVar101) * (float)uStack_a0;
          auVar30._4_4_ = (fVar6 * fVar89 + fVar118 * fVar60 + fVar18 * fVar101) * uStack_a0._4_4_;
          auVar30._8_4_ = (fVar7 * fVar89 + fVar119 * fVar60 + fVar102 * fVar101) * (float)uStack_98
          ;
          auVar87 = NEON_ext(auVar38,auVar38,8,1);
          auVar68 = NEON_ext(auVar47,auVar47,8,1);
          auVar30._12_4_ = 0;
          auVar64 = NEON_ext(auVar30,auVar30,8,1);
          fVar60 = fVar96 + fVar113 + auVar75._0_4_ + auVar81._0_4_ + auVar81._4_4_ + auVar85._0_4_
                   + auVar38._0_4_ + auVar38._4_4_ + auVar87._0_4_;
          fVar71 = auVar105._0_4_ + auVar105._4_4_ + auVar84._0_4_ +
                   auVar86._0_4_ + auVar86._4_4_ + auVar93._0_4_ +
                   auVar47._0_4_ + auVar47._4_4_ + auVar68._0_4_;
          fVar41 = auVar66._0_4_ + auVar66._4_4_ + auVar110._0_4_ + auVar110._4_4_ +
                   auVar46._0_4_ + auVar46._4_4_ + auVar106._0_4_ + auVar106._4_4_ +
                   auVar30._0_4_ + auVar30._4_4_ + auVar64._0_4_ + auVar64._4_4_;
          fVar22 = *(float *)(lVar16 + 0x50);
          fVar18 = *(float *)(lVar16 + 0x54);
          fVar59 = *(float *)(lVar16 + 0x58);
          auVar31._0_4_ = fVar22 * fVar60;
          auVar31._4_4_ = fVar18 * fVar71;
          auVar31._8_4_ = fVar59 * fVar41;
          auVar31._12_4_ = *(float *)(lVar16 + 0x5c) * 0.0;
          auVar64 = NEON_ext(auVar31,auVar31,8,1);
          fVar39 = (auVar31._0_4_ + auVar31._4_4_ + auVar64._0_4_) - *(float *)(lVar16 + 0x60);
          pauVar11 = *(undefined1 (**) [16])(lVar9 + 0x18);
          auVar64 = *pauVar11;
          auVar75 = pauVar11[1];
          fVar70 = *(float *)pauVar11[2];
          fVar72 = *(float *)(pauVar11[2] + 4);
          fVar88 = *(float *)(pauVar11[2] + 8);
          auVar85 = pauVar11[3];
          fVar89 = *(float *)(*(long *)(param_1 + 0x18) + 0x364);
          param_5[1] = *(long *)(param_1 + 0x18);
          if (fVar39 < fVar89) {
            fVar60 = fVar60 - fVar22 * fVar39;
            fVar71 = fVar71 - fVar18 * fVar39;
            fVar41 = fVar41 - fVar59 * fVar39;
            auVar82._0_4_ = fVar70 * fVar60;
            auVar82._4_4_ = fVar72 * fVar71;
            auVar82._8_4_ = fVar88 * fVar41;
            auVar48._0_4_ = auVar64._0_4_ * fVar60;
            auVar48._4_4_ = auVar64._4_4_ * fVar71;
            auVar48._8_4_ = auVar64._8_4_ * fVar41;
            auVar48._12_4_ = auVar64._12_4_ * 0.0;
            auVar57._0_4_ = auVar75._0_4_ * fVar60;
            auVar57._4_4_ = auVar75._4_4_ * fVar71;
            auVar57._8_4_ = auVar75._8_4_ * fVar41;
            auVar57._12_4_ = auVar75._12_4_ * 0.0;
            auVar64 = NEON_ext(auVar48,auVar48,8,1);
            auVar75 = NEON_ext(auVar57,auVar57,8,1);
            auVar82._12_4_ = 0;
            auVar84 = NEON_ext(auVar82,auVar82,8,1);
            fStack_c0 = auVar85._0_4_ + auVar64._0_4_ + auVar48._0_4_ + auVar48._4_4_;
            fStack_bc = auVar85._4_4_ + auVar75._0_4_ + auVar57._0_4_ + auVar57._4_4_;
            fStack_b8 = auVar85._8_4_ +
                        auVar82._0_4_ + auVar82._4_4_ + auVar84._0_4_ + auVar84._4_4_;
            fStack_b4 = auVar85._12_4_ + 0.0;
            fVar22 = *(float *)(lVar16 + 0x50);
            fVar18 = *(float *)(lVar16 + 0x54);
            fVar59 = *(float *)(lVar16 + 0x58);
            auVar58._0_4_ = *(float *)*pauVar11 * fVar22;
            auVar58._4_4_ = *(float *)(*pauVar11 + 4) * fVar18;
            auVar58._8_4_ = *(float *)(*pauVar11 + 8) * fVar59;
            auVar58._12_4_ = *(float *)(*pauVar11 + 0xc) * *(float *)(lVar16 + 0x5c);
            auVar69._0_4_ = fVar22 * *(float *)pauVar11[1];
            auVar69._4_4_ = fVar18 * *(float *)(pauVar11[1] + 4);
            auVar69._8_4_ = fVar59 * *(float *)(pauVar11[1] + 8);
            auVar69._12_4_ = *(float *)(lVar16 + 0x5c) * *(float *)(pauVar11[1] + 0xc);
            auVar49._0_4_ = fVar22 * *(float *)pauVar11[2];
            auVar49._4_4_ = fVar18 * *(float *)(pauVar11[2] + 4);
            auVar49._8_4_ = fVar59 * *(float *)(pauVar11[2] + 8);
            auVar64 = NEON_ext(auVar58,auVar58,8,1);
            auVar75 = NEON_ext(auVar69,auVar69,8,1);
            auVar49._12_4_ = 0;
            uStack_b0 = CONCAT44(auVar69._0_4_ + auVar69._4_4_ + auVar75._0_4_,
                                 auVar58._0_4_ + auVar58._4_4_ + auVar64._0_4_);
            auVar64 = NEON_ext(auVar49,auVar49,8,1);
            uStack_a8 = (ulong)(uint)(auVar49._0_4_ + auVar49._4_4_ + auVar64._0_4_ + auVar64._4_4_)
            ;
            (**(code **)(*param_5 + 0x20))(param_5,&uStack_b0,&fStack_c0);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < *(int *)(param_1 + 0x24));
      }
    }
    if (((*(char *)(param_1 + 0x10) == '\x01') && (*(int *)(*(long *)(param_1 + 0x18) + 0x360) != 0)
        ) && (lVar9 = param_5[1], *(int *)(lVar9 + 0x360) != 0)) {
      lVar16 = *(long *)(param_5[2] + 0x10);
      lVar15 = lVar16;
      lVar2 = *(long *)(param_5[3] + 0x10);
      if (*(long *)(lVar9 + 0x350) != lVar16) {
        lVar15 = *(long *)(param_5[3] + 0x10);
        lVar2 = lVar16;
      }
      FUN_10982280c(lVar9,lVar15 + 0x10,lVar2 + 0x10);
    }
  }
  return;
}



/* Entry: 1098121c8; end: 1098121cf;  */

undefined8 FUN_1098121c8(void)

{
  return 0x3f800000;
}



/* Entry: 1098121d0; end: 1098122af;  */

void FUN_1098121d0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar3 == *(uint *)(param_2 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          FUN_1098256f4(uVar2,0x10);
          uVar3 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 << 3 != lVar4);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
          FUN_109825740();
          uVar3 = *(uint *)(param_2 + 4);
        }
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(uint *)(param_2 + 8) = uVar1;
        lVar4 = *(long *)(param_1 + 0x18);
      }
    }
    *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8) = lVar4;
    *(uint *)(param_2 + 4) = uVar3 + 1;
  }
  return;
}



/* Entry: 1098122b0; end: 10981254f;  */

undefined8 * FUN_1098122b0(undefined8 *param_1,long *param_2)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = &PTR_FUN_110b12ba0;
  iVar2 = *(int *)((long)param_2 + 0x1c);
  puVar3 = (undefined8 *)0x8;
  FUN_1098256f4(8,0x10);
  ppuVar1 = &PTR_DAT_110b141d8;
  if (iVar2 != 0) {
    ppuVar1 = &PTR_FUN_110b14148;
  }
  *puVar3 = ppuVar1;
  param_1[6] = puVar3;
  puVar3 = (undefined8 *)0x20;
  FUN_1098256f4(0x20,0x10);
  uVar5 = param_1[6];
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12a00;
  puVar3[3] = 0x300000000;
  puVar3[2] = uVar5;
  param_1[7] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_DAT_110b12c08;
  param_1[8] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12c48;
  param_1[9] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12c88;
  param_1[10] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12cc8;
  param_1[0xb] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12d08;
  param_1[0xc] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12d48;
  param_1[0xd] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12d88;
  param_1[0xe] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12dc8;
  param_1[0x12] = puVar3;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *puVar3 = &PTR_FUN_110b12dc8;
  param_1[0x13] = puVar3;
  *(undefined1 *)(puVar3 + 1) = 1;
  puVar3 = (undefined8 *)0x10;
  FUN_1098256f4(0x10,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12e08;
  param_1[0x11] = puVar3;
  puVar3 = (undefined8 *)0x18;
  FUN_1098256f4(0x18,0x10);
  *(undefined1 *)(puVar3 + 1) = 0;
  *puVar3 = &PTR_FUN_110b12e48;
  *(undefined8 *)((long)puVar3 + 0xc) = 1;
  param_1[0x15] = puVar3;
  puVar3 = (undefined8 *)0x18;
  FUN_1098256f4(0x18,0x10);
  *puVar3 = &PTR_FUN_110b12e48;
  *(undefined8 *)((long)puVar3 + 0xc) = 1;
  param_1[0x14] = puVar3;
  *(undefined1 *)(puVar3 + 1) = 1;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    *(undefined1 *)(param_1 + 3) = 1;
    lVar4 = 0x28;
    FUN_1098256f4(0x28,0x10);
    FUN_109812e00();
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  param_1[2] = lVar4;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    *(undefined1 *)(param_1 + 5) = 1;
    lVar4 = 0x28;
    FUN_1098256f4(0x28,0x10);
    FUN_109812e00();
  }
  else {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  param_1[4] = lVar4;
  return param_1;
}



/* Entry: 109812550; end: 109812767;  */

undefined8 * FUN_109812550(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12ba0;
  if (*(char *)(param_1 + 5) == '\x01') {
    if (*(long *)(param_1[4] + 0x18) != 0) {
      FUN_109825740(*(long *)(param_1[4] + 0x18));
      if (param_1[4] == 0) goto LAB_109812598;
    }
    FUN_109825740();
  }
LAB_109812598:
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(long *)(param_1[2] + 0x18) != 0) {
      FUN_109825740(*(long *)(param_1[2] + 0x18));
      if (param_1[2] == 0) goto LAB_1098125c4;
    }
    FUN_109825740();
  }
LAB_1098125c4:
  (*(code *)**(undefined8 **)param_1[7])();
  if (param_1[7] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[8])();
  if (param_1[8] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[9])();
  if (param_1[9] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[10])();
  if (param_1[10] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xb])();
  if (param_1[0xb] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xc])();
  if (param_1[0xc] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xd])();
  if (param_1[0xd] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xe])();
  if (param_1[0xe] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x12])();
  if (param_1[0x12] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x13])();
  if (param_1[0x13] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x11])();
  if (param_1[0x11] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x15])();
  if (param_1[0x15] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x14])();
  if (param_1[0x14] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[6])();
  if (param_1[6] != 0) {
    FUN_109825740();
  }
  return param_1;
}



/* Entry: 109812768; end: 10981276b;  */

undefined8 * FUN_109812768(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12ba0;
  if (*(char *)(param_1 + 5) == '\x01') {
    if (*(long *)(param_1[4] + 0x18) != 0) {
      FUN_109825740(*(long *)(param_1[4] + 0x18));
      if (param_1[4] == 0) goto LAB_109812598;
    }
    FUN_109825740();
  }
LAB_109812598:
  if (*(char *)(param_1 + 3) == '\x01') {
    if (*(long *)(param_1[2] + 0x18) != 0) {
      FUN_109825740(*(long *)(param_1[2] + 0x18));
      if (param_1[2] == 0) goto LAB_1098125c4;
    }
    FUN_109825740();
  }
LAB_1098125c4:
  (*(code *)**(undefined8 **)param_1[7])();
  if (param_1[7] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[8])();
  if (param_1[8] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[9])();
  if (param_1[9] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[10])();
  if (param_1[10] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xb])();
  if (param_1[0xb] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xc])();
  if (param_1[0xc] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xd])();
  if (param_1[0xd] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0xe])();
  if (param_1[0xe] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x12])();
  if (param_1[0x12] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x13])();
  if (param_1[0x13] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x11])();
  if (param_1[0x11] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x15])();
  if (param_1[0x15] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[0x14])();
  if (param_1[0x14] != 0) {
    FUN_109825740();
  }
  (*(code *)**(undefined8 **)param_1[6])();
  if (param_1[6] != 0) {
    FUN_109825740();
  }
  return param_1;
}



/* Entry: 10981276c; end: 10981277f;  */

void FUN_10981276c(void)

{
  FUN_109812550();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109812780; end: 109812987;  */

undefined8 FUN_109812780(long param_1,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 == 8) && (param_3 == 8)) {
    lVar2 = 0x70;
    goto LAB_109812868;
  }
  if ((param_2 == 8) && (param_3 == 1)) {
    lVar2 = 0x90;
    goto LAB_109812868;
  }
  if ((param_2 == 1) && (param_3 == 8)) {
    lVar2 = 0x98;
    goto LAB_109812868;
  }
  if ((param_2 < 0x14) && (param_3 == 0x1c)) {
    lVar2 = 0xa8;
    goto LAB_109812868;
  }
  if ((param_2 == 0x1c) && (param_3 < 0x14)) {
    lVar2 = 0xa0;
    goto LAB_109812868;
  }
  if (param_2 < 0x14) {
    if (param_3 < 0x14) {
      lVar2 = 0x38;
      goto LAB_109812868;
    }
    if (param_3 - 0x15U < 9) {
      lVar2 = 0x40;
      goto LAB_109812868;
    }
LAB_109812858:
    lVar1 = 0x68;
    lVar2 = 0x60;
  }
  else {
    if ((param_3 < 0x14) && (param_2 - 0x15U < 9)) {
      lVar2 = 0x48;
      goto LAB_109812868;
    }
    if (param_2 != 0x1f) goto LAB_109812858;
    lVar1 = 0x50;
    lVar2 = 0x58;
  }
  if (param_3 != 0x1f) {
    lVar2 = lVar1;
  }
LAB_109812868:
  return *(undefined8 *)(param_1 + lVar2);
}



/* Entry: 109812988; end: 109812a23;  */

long * FUN_109812988(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x70))(plVar1,0x90);
  param_2 = (long *)*param_2;
  *plVar1 = (long)&PTR_FUN_110b12800;
  plVar1[1] = (long)param_2;
  plVar1[2] = (long)&PTR_FUN_110b12838;
  plVar1[0xb] = (long)param_2;
  plVar1[0xc] = 0;
  plVar1[8] = param_3;
  plVar1[9] = param_4;
  (**(code **)(*param_2 + 0x18))
            (param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
  plVar1[0xe] = (long)param_2;
  (**(code **)(*(long *)plVar1[0xb] + 0x28))((long *)plVar1[0xb],param_2);
  *(undefined1 *)(plVar1 + 0x10) = 0;
  return plVar1;
}



/* Entry: 109812a24; end: 109812a2b;  */

void FUN_109812a24(void)

{
  return;
}



/* Entry: 109812a2c; end: 109812acb;  */

long * FUN_109812a2c(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x70))(plVar1,0x90);
  param_2 = (long *)*param_2;
  *plVar1 = (long)&PTR_FUN_110b12800;
  plVar1[1] = (long)param_2;
  plVar1[2] = (long)&PTR_FUN_110b12838;
  plVar1[0xb] = (long)param_2;
  plVar1[0xc] = 0;
  plVar1[8] = param_4;
  plVar1[9] = param_3;
  (**(code **)(*param_2 + 0x18))
            (param_2,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_3 + 0x10));
  plVar1[0xe] = (long)param_2;
  (**(code **)(*(long *)plVar1[0xb] + 0x28))((long *)plVar1[0xb],param_2);
  *(undefined1 *)(plVar1 + 0x10) = 1;
  return plVar1;
}



/* Entry: 109812acc; end: 109812ad3;  */

void FUN_109812acc(void)

{
  return;
}



/* Entry: 109812ad4; end: 109812b23;  */

long * FUN_109812ad4(undefined8 param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x70))(plVar3,0x88);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *plVar3 = (long)&PTR_FUN_110b12690;
  plVar3[1] = lVar1;
  *(undefined1 *)(plVar3 + 5) = 1;
  plVar3[4] = 0;
  *(undefined8 *)((long)plVar3 + 0x14) = 0;
  *(undefined1 *)(plVar3 + 9) = 1;
  plVar3[8] = 0;
  *(undefined8 *)((long)plVar3 + 0x34) = 0;
  *(undefined1 *)(plVar3 + 0xd) = 1;
  plVar3[0xc] = 0;
  *(undefined8 *)((long)plVar3 + 0x54) = 0;
  *(undefined1 *)(plVar3 + 0xe) = 0;
  plVar3[0xf] = lVar2;
  *(undefined1 *)(plVar3 + 0x10) = 0;
  *(undefined4 *)((long)plVar3 + 0x84) = *(undefined4 *)(*(long *)(param_3 + 8) + 0x68);
  FUN_10980b43c();
  return plVar3;
}



/* Entry: 109812b24; end: 109812b2b;  */

void FUN_109812b24(void)

{
  return;
}



/* Entry: 109812b2c; end: 109812b7b;  */

long * FUN_109812b2c(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_2;
  (**(code **)(*plVar4 + 0x70))(plVar4,0xb8);
  plVar2 = plVar4;
  FUN_10980b390();
  *plVar2 = (long)&PTR_FUN_110b12748;
  *(undefined1 *)(plVar2 + 0x15) = 1;
  plVar2[0x14] = 0;
  *(undefined4 *)((long)plVar2 + 0x94) = 0;
  *(undefined4 *)(plVar2 + 0x13) = 0;
  lVar3 = 0x68;
  FUN_1098256f4(0x68,0x10);
  FUN_109812e84();
  plVar4[0x11] = lVar3;
  uVar1 = *(undefined4 *)(*(long *)(param_4 + 8) + 0x68);
  *(undefined4 *)(plVar4 + 0x16) = *(undefined4 *)(*(long *)(param_3 + 8) + 0x68);
  *(undefined4 *)((long)plVar4 + 0xb4) = uVar1;
  return plVar4;
}



/* Entry: 109812b7c; end: 109812b83;  */

void FUN_109812b7c(void)

{
  return;
}



/* Entry: 109812b84; end: 109812bd3;  */

/* WARNING: Removing unreachable block (ram,0x00010980b3ec) */

long * FUN_109812b84(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x70))(plVar3,0x88);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *plVar3 = (long)&PTR_FUN_110b12690;
  plVar3[1] = lVar1;
  *(undefined1 *)(plVar3 + 5) = 1;
  plVar3[4] = 0;
  *(undefined8 *)((long)plVar3 + 0x14) = 0;
  *(undefined1 *)(plVar3 + 9) = 1;
  plVar3[8] = 0;
  *(undefined8 *)((long)plVar3 + 0x34) = 0;
  *(undefined1 *)(plVar3 + 0xd) = 1;
  plVar3[0xc] = 0;
  *(undefined8 *)((long)plVar3 + 0x54) = 0;
  *(undefined1 *)(plVar3 + 0xe) = 1;
  plVar3[0xf] = lVar2;
  *(undefined1 *)(plVar3 + 0x10) = 0;
  *(undefined4 *)((long)plVar3 + 0x84) = *(undefined4 *)(*(long *)(param_4 + 8) + 0x68);
  FUN_10980b43c();
  return plVar3;
}



/* Entry: 109812bd4; end: 109812bdb;  */

void FUN_109812bd4(void)

{
  return;
}



/* Entry: 109812bdc; end: 109812c1b;  */

void FUN_109812bdc(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x70))(plVar1,0x10);
  lVar2 = *param_2;
  *plVar1 = (long)&PTR_DAT_110b12e88;
  plVar1[1] = lVar2;
  return;
}



/* Entry: 109812c1c; end: 109812c23;  */

void FUN_109812c1c(void)

{
  return;
}



/* Entry: 109812c24; end: 109812ca3;  */

long * FUN_109812c24(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  (**(code **)(*plVar1 + 0x70))(plVar1,0x20);
  param_2 = (long *)*param_2;
  *plVar1 = (long)&PTR_FUN_110b12fb0;
  plVar1[1] = (long)param_2;
  *(undefined1 *)(plVar1 + 2) = 0;
  plVar1[3] = 0;
  (**(code **)(*param_2 + 0x18))
            (param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
  plVar1[3] = (long)param_2;
  *(undefined1 *)(plVar1 + 2) = 1;
  return plVar1;
}



/* Entry: 109812ca4; end: 109812cab;  */

void FUN_109812ca4(void)

{
  return;
}



/* Entry: 109812cac; end: 109812d43;  */

long * FUN_109812cac(long param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_2;
  (**(code **)(*plVar3 + 0x70))(plVar3,0x28);
  uVar2 = *(undefined1 *)(param_1 + 8);
  plVar4 = (long *)*param_2;
  lVar1 = param_2[1];
  *plVar3 = (long)&PTR_FUN_110b13000;
  plVar3[1] = (long)plVar4;
  *(undefined1 *)(plVar3 + 2) = 0;
  plVar3[3] = lVar1;
  *(undefined1 *)(plVar3 + 4) = uVar2;
  if (lVar1 == 0) {
    (**(code **)(*plVar4 + 0x18))
              (plVar4,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
    plVar3[3] = (long)plVar4;
    *(undefined1 *)(plVar3 + 2) = 1;
  }
  return plVar3;
}



/* Entry: 109812d44; end: 109812d4b;  */

void FUN_109812d44(void)

{
  return;
}



/* Entry: 109812d4c; end: 109812d9b;  */

long * FUN_109812d4c(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_2;
  (**(code **)(*plVar2 + 0x70))(plVar2,0x20);
  plVar1 = (long *)*param_2;
  *plVar2 = (long)&PTR_FUN_110b12130;
  plVar2[1] = (long)plVar1;
  *(undefined1 *)(plVar2 + 2) = 0;
  plVar2[3] = 0;
  (**(code **)(*plVar1 + 0x30))
            (plVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
  if ((int)plVar1 != 0) {
    plVar1 = (long *)plVar2[1];
    (**(code **)(*plVar1 + 0x18))
              (plVar1,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + 0x10));
    plVar2[3] = (long)plVar1;
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  return plVar2;
}



/* Entry: 109812d9c; end: 109812da3;  */

void FUN_109812d9c(void)

{
  return;
}



/* Entry: 109812da4; end: 109812dff;  */

long * FUN_109812da4(long param_1,undefined8 *param_2,long param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_2;
  (**(code **)(*plVar6 + 0x70))(plVar6,0x30);
  cVar4 = *(char *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  plVar5 = (long *)*param_2;
  *plVar6 = (long)&PTR_FUN_110b12b50;
  plVar6[1] = (long)plVar5;
  *(undefined1 *)(plVar6 + 2) = 0;
  plVar6[3] = 0;
  *(char *)(plVar6 + 4) = cVar4;
  *(undefined4 *)((long)plVar6 + 0x24) = uVar2;
  *(undefined4 *)(plVar6 + 5) = uVar3;
  lVar1 = param_4;
  if (cVar4 == '\0') {
    lVar1 = param_3;
    param_3 = param_4;
  }
  (**(code **)(*plVar5 + 0x30))
            (plVar5,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(param_3 + 0x10));
  if ((int)plVar5 != 0) {
    plVar5 = (long *)plVar6[1];
    (**(code **)(*plVar5 + 0x18))
              (plVar5,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(param_3 + 0x10));
    plVar6[3] = (long)plVar5;
    *(undefined1 *)(plVar6 + 2) = 1;
  }
  return plVar6;
}



/* Entry: 109812e00; end: 109812e6b;  */

int * FUN_109812e00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[8] = 0;
  puVar2 = (undefined8 *)(ulong)(uint)(param_3 * param_2);
  FUN_1098256f4(puVar2,0x10);
  *(undefined8 **)(param_1 + 4) = puVar2;
  *(undefined8 **)(param_1 + 6) = puVar2;
  param_1[2] = param_1[1];
  iVar4 = param_1[1] + -1;
  if (iVar4 != 0) {
    iVar1 = *param_1;
    puVar3 = puVar2;
    do {
      puVar2 = (undefined8 *)((long)puVar3 + (long)iVar1);
      *puVar3 = puVar2;
      iVar4 = iVar4 + -1;
      puVar3 = puVar2;
    } while (iVar4 != 0);
  }
  *puVar2 = 0;
  return param_1;
}



/* Entry: 109812e6c; end: 109812e83;  */

void FUN_109812e6c(void)

{
  return;
}



/* Entry: 109812e84; end: 109812f73;  */

undefined8 * FUN_109812e84(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = &PTR_FUN_110b12ed8;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[7] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  lVar2 = 0x20;
  FUN_1098256f4(0x20,0x10);
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    lVar3 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1[3] + lVar3);
      ((undefined8 *)(lVar2 + lVar3))[1] = ((undefined8 *)(param_1[3] + lVar3))[1];
      *(undefined8 *)(lVar2 + lVar3) = uVar4;
      lVar3 = lVar3 + 0x10;
    } while ((ulong)uVar1 * 0x10 - lVar3 != 0);
  }
  if (param_1[3] != 0) {
    if (*(char *)(param_1 + 4) == '\x01') {
      FUN_109825740();
    }
    param_1[3] = 0;
  }
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 2) = 2;
  FUN_109812f74(param_1);
  return param_1;
}



/* Entry: 109812f74; end: 1098131b3;  */

void FUN_109812f74(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  int *piVar11;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x2c);
  if ((int)uVar1 <= (int)uVar2) {
    return;
  }
  if (*(int *)(param_1 + 0x30) < (int)uVar1) {
    if (uVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
      uVar4 = uVar2;
    }
    else {
      puVar3 = (undefined4 *)((long)(int)uVar1 << 2);
      FUN_1098256f4(puVar3,0x10);
      uVar4 = *(uint *)(param_1 + 0x2c);
    }
    if ((int)uVar4 < 1) {
      if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) goto LAB_109813010;
    }
    else {
      uVar6 = (ulong)uVar4;
      puVar7 = puVar3;
      puVar9 = *(undefined4 **)(param_1 + 0x38);
      do {
        *puVar7 = *puVar9;
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
LAB_109813010:
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined4 **)(param_1 + 0x38) = puVar3;
    *(uint *)(param_1 + 0x30) = uVar1;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x38);
  }
  _bzero(puVar3 + (int)uVar2,(ulong)(uVar1 + ~uVar2) * 4 + 4);
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar4 = *(uint *)(param_1 + 0x4c);
  if ((int)uVar1 <= (int)uVar4) goto LAB_1098130fc;
  if (*(int *)(param_1 + 0x50) < (int)uVar1) {
    if (uVar1 == 0) {
      puVar3 = (undefined4 *)0x0;
      uVar5 = uVar4;
    }
    else {
      puVar3 = (undefined4 *)((long)(int)uVar1 << 2);
      FUN_1098256f4(puVar3,0x10);
      uVar5 = *(uint *)(param_1 + 0x4c);
    }
    if ((int)uVar5 < 1) {
      if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) goto LAB_1098130c4;
    }
    else {
      uVar6 = (ulong)uVar5;
      puVar7 = puVar3;
      puVar9 = *(undefined4 **)(param_1 + 0x58);
      do {
        *puVar7 = *puVar9;
        uVar6 = uVar6 - 1;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
LAB_1098130c4:
      if (*(char *)(param_1 + 0x60) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(undefined4 **)(param_1 + 0x58) = puVar3;
    *(uint *)(param_1 + 0x50) = uVar1;
  }
  else {
    puVar3 = *(undefined4 **)(param_1 + 0x58);
  }
  _bzero(puVar3 + (int)uVar4,(ulong)(uVar1 + ~uVar4) * 4 + 4);
LAB_1098130fc:
  *(uint *)(param_1 + 0x4c) = uVar1;
  if (0 < (int)uVar1) {
    _memset(*(undefined8 *)(param_1 + 0x38),0xff,(ulong)uVar1 << 2);
    _memset(*(undefined8 *)(param_1 + 0x58),0xff,(ulong)uVar1 << 2);
  }
  if (0 < (int)uVar2) {
    uVar6 = 0;
    lVar8 = *(long *)(param_1 + 0x38);
    lVar10 = *(long *)(param_1 + 0x58);
    piVar11 = (int *)(*(long *)(param_1 + 0x18) + 4);
    do {
      uVar1 = piVar11[-1] | *piVar11 << 0x10;
      uVar1 = uVar1 + (uVar1 << 0xf ^ 0xffffffff);
      uVar1 = (uVar1 ^ uVar1 >> 10) * 9;
      uVar1 = uVar1 ^ uVar1 >> 6;
      uVar1 = uVar1 + (uVar1 << 0xb ^ 0xffffffff);
      uVar1 = (uVar1 ^ uVar1 >> 0x10) & *(int *)(param_1 + 0x10) - 1U;
      *(undefined4 *)(lVar10 + uVar6 * 4) = *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4);
      *(int *)(lVar8 + (long)(int)uVar1 * 4) = (int)uVar6;
      uVar6 = uVar6 + 1;
      piVar11 = piVar11 + 4;
    } while (uVar2 != uVar6);
  }
  return;
}



/* Entry: 1098131b4; end: 1098131fb;  */

undefined8 * FUN_1098131b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12ed8;
  FUN_10980501c(param_1 + 9);
  FUN_10980501c(param_1 + 5);
  FUN_10980d644(param_1 + 1);
  return param_1;
}



/* Entry: 1098131fc; end: 1098131ff;  */

undefined8 * FUN_1098131fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12ed8;
  FUN_10980501c(param_1 + 9);
  FUN_10980501c(param_1 + 5);
  FUN_10980d644(param_1 + 1);
  return param_1;
}



/* Entry: 109813200; end: 109813213;  */

void FUN_109813200(void)

{
  FUN_1098131b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109813214; end: 10981331b;  */

void FUN_109813214(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined8 uVar13;
  
  if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(long *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(param_1 + 0x60) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x10) < 2) {
    lVar5 = 0x20;
    FUN_1098256f4(0x20,0x10);
    uVar2 = *(uint *)(param_1 + 0xc);
    if (0 < (int)uVar2) {
      lVar9 = 0;
      do {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar9);
        uVar13 = *puVar3;
        ((undefined8 *)(lVar5 + lVar9))[1] = puVar3[1];
        *(undefined8 *)(lVar5 + lVar9) = uVar13;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar2 * 0x10 - lVar9 != 0);
    }
    if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
      FUN_109825740();
    }
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(long *)(param_1 + 0x18) = lVar5;
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x2c);
  if ((int)uVar2 <= (int)uVar1) {
    return;
  }
  if (*(int *)(param_1 + 0x30) < (int)uVar2) {
    if (uVar2 == 0) {
      puVar4 = (undefined4 *)0x0;
      uVar6 = uVar1;
    }
    else {
      puVar4 = (undefined4 *)((long)(int)uVar2 << 2);
      FUN_1098256f4(puVar4,0x10);
      uVar6 = *(uint *)(param_1 + 0x2c);
    }
    if ((int)uVar6 < 1) {
      if (*(undefined4 **)(param_1 + 0x38) != (undefined4 *)0x0) goto LAB_109813010;
    }
    else {
      uVar8 = (ulong)uVar6;
      puVar10 = puVar4;
      puVar11 = *(undefined4 **)(param_1 + 0x38);
      do {
        *puVar10 = *puVar11;
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar8 != 0);
LAB_109813010:
      if (*(char *)(param_1 + 0x40) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined4 **)(param_1 + 0x38) = puVar4;
    *(uint *)(param_1 + 0x30) = uVar2;
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x38);
  }
  _bzero(puVar4 + (int)uVar1,(ulong)(uVar2 + ~uVar1) * 4 + 4);
  *(uint *)(param_1 + 0x2c) = uVar2;
  uVar6 = *(uint *)(param_1 + 0x4c);
  if ((int)uVar2 <= (int)uVar6) goto LAB_1098130fc;
  if (*(int *)(param_1 + 0x50) < (int)uVar2) {
    if (uVar2 == 0) {
      puVar4 = (undefined4 *)0x0;
      uVar7 = uVar6;
    }
    else {
      puVar4 = (undefined4 *)((long)(int)uVar2 << 2);
      FUN_1098256f4(puVar4,0x10);
      uVar7 = *(uint *)(param_1 + 0x4c);
    }
    if ((int)uVar7 < 1) {
      if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) goto LAB_1098130c4;
    }
    else {
      uVar8 = (ulong)uVar7;
      puVar10 = puVar4;
      puVar11 = *(undefined4 **)(param_1 + 0x58);
      do {
        *puVar10 = *puVar11;
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar8 != 0);
LAB_1098130c4:
      if (*(char *)(param_1 + 0x60) == '\x01') {
        FUN_109825740();
      }
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(undefined4 **)(param_1 + 0x58) = puVar4;
    *(uint *)(param_1 + 0x50) = uVar2;
  }
  else {
    puVar4 = *(undefined4 **)(param_1 + 0x58);
  }
  _bzero(puVar4 + (int)uVar6,(ulong)(uVar2 + ~uVar6) * 4 + 4);
LAB_1098130fc:
  *(uint *)(param_1 + 0x4c) = uVar2;
  if (0 < (int)uVar2) {
    _memset(*(undefined8 *)(param_1 + 0x38),0xff,(ulong)uVar2 << 2);
    _memset(*(undefined8 *)(param_1 + 0x58),0xff,(ulong)uVar2 << 2);
  }
  if (0 < (int)uVar1) {
    uVar8 = 0;
    lVar5 = *(long *)(param_1 + 0x38);
    lVar9 = *(long *)(param_1 + 0x58);
    piVar12 = (int *)(*(long *)(param_1 + 0x18) + 4);
    do {
      uVar2 = piVar12[-1] | *piVar12 << 0x10;
      uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
      uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
      uVar2 = uVar2 ^ uVar2 >> 6;
      uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
      uVar2 = (uVar2 ^ uVar2 >> 0x10) & *(int *)(param_1 + 0x10) - 1U;
      *(undefined4 *)(lVar9 + uVar8 * 4) = *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4);
      *(int *)(lVar5 + (long)(int)uVar2 * 4) = (int)uVar8;
      uVar8 = uVar8 + 1;
      piVar12 = piVar12 + 4;
    } while (uVar1 != uVar8);
  }
  return;
}



/* Entry: 10981331c; end: 109813517;  */

uint * FUN_10981331c(long param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_2 | param_3 << 0x10;
  uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
  uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
  uVar2 = uVar2 ^ uVar2 >> 6;
  uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
  uVar2 = *(int *)(param_1 + 0x10) - 1U & (uVar2 ^ uVar2 >> 0x10);
  if (((int)uVar2 < *(int *)(param_1 + 0x2c)) &&
     (iVar3 = *(int *)(*(long *)(param_1 + 0x38) + (long)(int)uVar2 * 4), iVar3 != -1)) {
    do {
      puVar1 = (uint *)(*(long *)(param_1 + 0x18) + (long)iVar3 * 0x10);
      if (*puVar1 == param_2 && puVar1[1] == param_3) {
        return puVar1;
      }
      iVar3 = *(int *)(*(long *)(param_1 + 0x58) + (long)iVar3 * 4);
    } while (iVar3 != -1);
  }
  return (uint *)0x0;
}



/* Entry: 109813518; end: 1098136bf;  */

uint * FUN_109813518(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  
  uVar5 = param_2 | param_3 << 0x10;
  uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
  uVar5 = (uVar5 ^ uVar5 >> 10) * 9;
  uVar5 = uVar5 ^ uVar5 >> 6;
  uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
  uVar5 = uVar5 ^ uVar5 >> 0x10;
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = uVar2 - 1 & uVar5;
  iVar8 = *(int *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1 * 4);
  if (iVar8 != -1) {
    do {
      puVar12 = (uint *)(*(long *)(param_1 + 0x18) + (long)iVar8 * 0x10);
      if (*puVar12 == param_2 && puVar12[1] == param_3) {
        return puVar12;
      }
      iVar8 = *(int *)(*(long *)(param_1 + 0x58) + (long)iVar8 * 4);
    } while (iVar8 != -1);
  }
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar9 = uVar3;
  if (uVar3 == uVar2) {
    uVar4 = uVar2 << 1;
    if (uVar2 == 0) {
      uVar4 = 1;
    }
    uVar9 = uVar2;
    if ((int)uVar2 < (int)uVar4) {
      if (uVar4 == 0) {
        uVar7 = 0;
        uVar1 = uVar2;
      }
      else {
        uVar7 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4;
        FUN_1098256f4(uVar7,0x10);
        uVar1 = *(uint *)(param_1 + 0xc);
      }
      if (0 < (int)uVar1) {
        lVar10 = 0;
        do {
          puVar6 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar10);
          uVar13 = *puVar6;
          ((undefined8 *)(uVar7 + lVar10))[1] = puVar6[1];
          *(undefined8 *)(uVar7 + lVar10) = uVar13;
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      lVar10 = (long)(int)uVar2;
      if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0x20) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(ulong *)(param_1 + 0x18) = uVar7;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(uint *)(param_1 + 0x10) = uVar4;
      puVar12 = (uint *)(uVar7 + lVar10 * 0x10);
      FUN_109812f74(param_1);
      uVar7 = (long)*(int *)(param_1 + 0x10) - 1U & (long)(int)uVar5;
      goto LAB_109813688;
    }
  }
  uVar7 = (ulong)(int)uVar1;
  lVar10 = (long)(int)uVar3;
  *(uint *)(param_1 + 0xc) = uVar9 + 1;
  puVar12 = (uint *)(*(long *)(param_1 + 0x18) + lVar10 * 0x10);
LAB_109813688:
  *puVar12 = param_2;
  puVar12[1] = param_3;
  puVar12[2] = 0;
  puVar12[3] = 0;
  lVar11 = *(long *)(param_1 + 0x38);
  *(undefined4 *)(*(long *)(param_1 + 0x58) + lVar10 * 4) = *(undefined4 *)(lVar11 + uVar7 * 4);
  *(uint *)(lVar11 + uVar7 * 4) = uVar3;
  return puVar12;
}



/* Entry: 1098136c0; end: 1098136ff;  */

undefined8 FUN_1098136c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109813700; end: 109813bc3;  */

void FUN_109813700(float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  bool bVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar29;
  undefined1 auVar27 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar49;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  ulong uStack_c8;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined1 auVar28 [16];
  undefined8 uVar48;
  
  lVar14 = *(long *)(param_2 + 8);
  fVar23 = *(float *)(lVar14 + 0x364);
  if (param_1 <= fVar23) {
    lVar20 = *(long *)(lVar14 + 0x350);
    lVar19 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    uVar1 = *(uint *)(lVar14 + 0x360);
    uVar42 = param_3[1];
    uVar39 = *param_3;
    fVar26 = (float)uVar39;
    fVar40 = (float)((ulong)uVar39 >> 0x20);
    fVar41 = (float)uVar42;
    uVar44 = param_4[1];
    uVar43 = *param_4;
    fVar45 = (float)uVar43 + fVar26 * param_1;
    fVar33 = (float)((ulong)uVar43 >> 0x20);
    fVar46 = fVar33 + fVar40 * param_1;
    fVar47 = (float)uVar44 + fVar41 * param_1;
    uVar48 = CONCAT44((float)((ulong)uVar44 >> 0x20) + 0.0,fVar47);
    if (lVar20 == lVar19) {
      fVar25 = fVar45 - *(float *)(lVar19 + 0x40);
      fVar29 = fVar46 - *(float *)(lVar19 + 0x44);
      fVar47 = fVar47 - *(float *)(lVar19 + 0x48);
      auVar27 = *(undefined1 (*) [12])(lVar19 + 0x10);
      fVar35 = auVar27._8_4_ * fVar25;
      fVar37 = *(float *)(lVar19 + 0x28) * fVar29;
      fVar38 = *(float *)(lVar19 + 0x38) * fVar47;
      auVar27._0_4_ = auVar27._0_4_ * fVar25;
      auVar27._4_4_ = *(float *)(lVar19 + 0x20) * fVar29;
      auVar27._8_4_ = *(float *)(lVar19 + 0x30) * fVar47;
      fVar25 = (float)((ulong)*(undefined8 *)*(undefined1 (*) [12])(lVar19 + 0x10) >> 0x20) * fVar25
      ;
      fVar29 = *(float *)(lVar19 + 0x24) * fVar29;
      fVar47 = *(float *)(lVar19 + 0x34) * fVar47;
      auVar30._4_4_ = fVar29;
      auVar30._0_4_ = fVar25;
      auVar30._8_4_ = fVar47;
      auVar30._12_4_ = 0;
      auVar34._4_4_ = fVar29;
      auVar34._0_4_ = fVar25;
      auVar34._8_4_ = fVar47;
      auVar34._12_4_ = 0;
      auVar30 = NEON_ext(auVar30,auVar34,8,1);
      fVar49 = auVar30._0_4_;
      fVar47 = auVar27._0_4_ + auVar27._4_4_;
      fVar25 = fVar25 + fVar29;
      auVar8._4_4_ = fVar37;
      auVar8._0_4_ = fVar35;
      auVar8._8_4_ = fVar38;
      auVar8._12_4_ = 0;
      auVar9._4_4_ = fVar37;
      auVar9._0_4_ = fVar35;
      auVar9._8_4_ = fVar38;
      auVar9._12_4_ = 0;
      auVar30 = NEON_ext(auVar8,auVar9,8,1);
      fVar29 = fVar35 + fVar37 + auVar30._0_4_ + auVar30._4_4_;
      lVar12 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
    }
    else {
      lVar12 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
      fVar25 = fVar45 - *(float *)(lVar12 + 0x40);
      fVar29 = fVar46 - *(float *)(lVar12 + 0x44);
      fVar47 = fVar47 - *(float *)(lVar12 + 0x48);
      auVar27 = *(undefined1 (*) [12])(lVar12 + 0x10);
      fVar35 = auVar27._8_4_ * fVar25;
      fVar37 = *(float *)(lVar12 + 0x28) * fVar29;
      fVar38 = *(float *)(lVar12 + 0x38) * fVar47;
      auVar27._0_4_ = auVar27._0_4_ * fVar25;
      auVar27._4_4_ = *(float *)(lVar12 + 0x20) * fVar29;
      auVar27._8_4_ = *(float *)(lVar12 + 0x30) * fVar47;
      fVar25 = (float)((ulong)*(undefined8 *)*(undefined1 (*) [12])(lVar12 + 0x10) >> 0x20) * fVar25
      ;
      fVar29 = *(float *)(lVar12 + 0x24) * fVar29;
      fVar47 = *(float *)(lVar12 + 0x34) * fVar47;
      auVar2._4_4_ = fVar29;
      auVar2._0_4_ = fVar25;
      auVar2._8_4_ = fVar47;
      auVar2._12_4_ = 0;
      auVar3._4_4_ = fVar29;
      auVar3._0_4_ = fVar25;
      auVar3._8_4_ = fVar47;
      auVar3._12_4_ = 0;
      auVar30 = NEON_ext(auVar2,auVar3,8,1);
      fVar49 = auVar30._0_4_;
      fVar47 = auVar27._0_4_ + auVar27._4_4_;
      fVar25 = fVar25 + fVar29;
      auVar6._4_4_ = fVar37;
      auVar6._0_4_ = fVar35;
      auVar6._8_4_ = fVar38;
      auVar6._12_4_ = 0;
      auVar7._4_4_ = fVar37;
      auVar7._0_4_ = fVar35;
      auVar7._8_4_ = fVar38;
      auVar7._12_4_ = 0;
      auVar30 = NEON_ext(auVar6,auVar7,8,1);
      fVar29 = fVar35 + fVar37 + auVar30._0_4_ + auVar30._4_4_;
      lVar12 = lVar19;
    }
    auVar28._12_4_ = 0;
    auVar28._0_12_ = auVar27;
    fVar35 = (float)uVar43 - *(float *)(lVar12 + 0x40);
    fVar33 = fVar33 - *(float *)(lVar12 + 0x44);
    fVar37 = (float)uVar44 - *(float *)(lVar12 + 0x48);
    auVar27 = *(undefined1 (*) [12])(lVar12 + 0x20);
    auVar30 = NEON_ext(auVar28,auVar28,8,1);
    fVar47 = auVar30._0_4_ + fVar47;
    fVar49 = fVar49 + fVar25;
    auVar32._0_4_ = (float)*(undefined8 *)(lVar12 + 0x18) * fVar35;
    auVar32._4_4_ = auVar27._8_4_ * fVar33;
    auVar32._8_4_ = *(float *)(lVar12 + 0x38) * fVar37;
    auVar31._0_4_ = (float)*(undefined8 *)(lVar12 + 0x10) * fVar35;
    auVar31._4_4_ = auVar27._0_4_ * fVar33;
    auVar31._8_4_ = *(float *)(lVar12 + 0x30) * fVar37;
    auVar31._12_4_ = 0;
    fVar35 = (float)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20) * fVar35;
    fVar33 = (float)((ulong)*(undefined8 *)*(undefined1 (*) [12])(lVar12 + 0x20) >> 0x20) * fVar33;
    fVar37 = *(float *)(lVar12 + 0x34) * fVar37;
    auVar30 = NEON_ext(auVar31,auVar31,8,1);
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar35;
    auVar4._8_4_ = fVar37;
    auVar4._12_4_ = 0;
    auVar5._4_4_ = fVar33;
    auVar5._0_4_ = fVar35;
    auVar5._8_4_ = fVar37;
    auVar5._12_4_ = 0;
    auVar34 = NEON_ext(auVar4,auVar5,8,1);
    auVar32._12_4_ = 0;
    fVar25 = auVar31._0_4_ + auVar31._4_4_ + auVar30._0_4_;
    fVar35 = fVar35 + fVar33 + auVar34._0_4_;
    auVar30 = NEON_ext(auVar32,auVar32,8,1);
    uVar22 = (ulong)(uint)(auVar32._0_4_ + auVar32._4_4_ + auVar30._0_4_ + auVar30._4_4_);
    uStack_120 = CONCAT44(fVar49,fVar47);
    uStack_110 = CONCAT44(fVar35,fVar25);
    fVar33 = 0.0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    fStack_80 = 0.0;
    uStack_7c = 0;
    uStack_88 = 0;
    fStack_84 = 0.0;
    uStack_78 = 0;
    if ((int)uVar1 < 1) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar16 = 0;
      fVar33 = fVar23 * fVar23;
      uVar21 = 0xffffffff;
      pfVar15 = (float *)(lVar14 + 0x10);
      do {
        auVar24._0_4_ = (*pfVar15 - fVar47) * (*pfVar15 - fVar47);
        auVar24._4_4_ = (pfVar15[1] - fVar49) * (pfVar15[1] - fVar49);
        auVar24._8_4_ = (pfVar15[2] - fVar29) * (pfVar15[2] - fVar29);
        auVar24._12_4_ = 0;
        auVar30 = NEON_ext(auVar24,auVar24,8,1);
        fVar23 = auVar24._0_4_ + auVar24._4_4_ + auVar30._0_4_;
        uVar10 = (uint)uVar16;
        if (fVar33 <= fVar23) {
          fVar23 = fVar33;
          uVar10 = uVar21;
        }
        uVar21 = uVar10;
        fVar33 = fVar23;
        uVar16 = uVar16 + 1;
        pfVar15 = pfVar15 + 0x34;
      } while (uVar1 != uVar16);
    }
    uStack_118 = (ulong)(uint)fVar29;
    uStack_108 = uVar22;
    uStack_100 = uVar43;
    uStack_f8 = uVar44;
    uStack_f0 = CONCAT44(fVar46,fVar45);
    uStack_e8 = uVar48;
    uStack_e0 = uVar39;
    uStack_d8 = uVar42;
    fStack_d0 = param_1;
    (*(code *)PTR_DAT_1132e0490)(lVar19);
    fStack_cc = fVar33;
    (*(code *)PTR_DAT_1132e0488)
              (*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x10),
               *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x10));
    lVar12 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    lVar14 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
    fVar23 = (float)*(undefined8 *)(lVar14 + 0x108) * *(float *)(lVar12 + 0x100) +
             (float)*(undefined8 *)(lVar12 + 0x108) * *(float *)(lVar14 + 0x100);
    fVar37 = (float)((ulong)*(undefined8 *)(lVar14 + 0x108) >> 0x20) * *(float *)(lVar12 + 0x100) +
             (float)((ulong)*(undefined8 *)(lVar12 + 0x108) >> 0x20) * *(float *)(lVar14 + 0x100);
    uStack_c8 = CONCAT44(fVar37,fVar23);
    uVar16 = NEON_fmov(0xc1200000,4);
    uStack_c8 = uStack_c8 ^
                (uStack_c8 ^ uVar16) &
                CONCAT44(-(uint)(fVar37 < (float)(uVar16 >> 0x20)),-(uint)(fVar23 < (float)uVar16));
    uVar16 = NEON_fmov(0x41200000,4);
    uStack_c8 = uStack_c8 ^
                (uStack_c8 ^ uVar16) &
                CONCAT44(-(uint)((float)(uVar16 >> 0x20) < (float)(uStack_c8 >> 0x20)),
                         -(uint)((float)uVar16 < (float)uStack_c8));
    if (((*(uint *)(lVar12 + 0xe8) >> 7 & 1) == 0) && (-1 < *(char *)(lVar14 + 0xe8))) {
      uVar17 = 0x10;
    }
    else {
      fStack_80 = *(float *)(lVar12 + 0x110) + *(float *)(lVar14 + 0x110);
      fStack_84 = 1.0 / (1.0 / *(float *)(lVar12 + 0x114) + 1.0 / *(float *)(lVar14 + 0x114));
      uStack_a0 = CONCAT44(uStack_a0._4_4_,8);
      uVar17 = 0x18;
    }
    if (((*(uint *)(lVar12 + 0xe8) >> 9 & 1) == 0) && ((*(byte *)(lVar14 + 0xe9) >> 1 & 1) == 0)) {
      bVar13 = true;
    }
    else {
      bVar13 = false;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar17);
    }
    fVar23 = fVar40 * fVar40 + fVar26 * fVar26;
    fVar37 = 1.0 / SQRT(fVar23);
    fStack_70 = -(fVar40 * fVar37);
    fStack_5c = fVar41 * fStack_70;
    fVar36 = fVar41 * fVar41 + fVar40 * fVar40;
    fVar38 = 1.0 / SQRT(fVar36);
    fStack_6c = fVar26 * fVar37;
    if (0.70710677 < ABS(fVar41)) {
      fStack_70 = 0.0;
      fStack_6c = -(fVar41 * fVar38);
    }
    fStack_58 = fVar23 * fVar37;
    fStack_60 = -(fVar41 * fVar26 * fVar37);
    fStack_68 = 0.0;
    if (0.70710677 < ABS(fVar41)) {
      fStack_58 = fVar26 * -(fVar41 * fVar38);
      fStack_5c = -(fVar26 * fVar40 * fVar38);
      fStack_60 = fVar36 * fVar38;
      fStack_68 = fVar40 * fVar38;
    }
    bVar11 = lVar20 != lVar19;
    lVar14 = 0x28;
    if (bVar11) {
      lVar14 = 0x2c;
    }
    lVar19 = 0x2c;
    if (bVar11) {
      lVar19 = 0x28;
    }
    lVar20 = 0x20;
    if (bVar11) {
      lVar20 = 0x24;
    }
    uStack_b0 = *(undefined4 *)(param_2 + lVar19);
    uStack_b4 = *(undefined4 *)(param_2 + lVar14);
    lVar14 = 0x24;
    if (bVar11) {
      lVar14 = 0x20;
    }
    uStack_b8 = *(undefined4 *)(param_2 + lVar14);
    uStack_bc = *(undefined4 *)(param_2 + lVar20);
    fStack_c0 = fVar33;
    if ((int)uVar21 < 0) {
      FUN_109822764(*(long *)(param_2 + 8),&uStack_120,0);
    }
    else {
      lVar14 = *(long *)(param_2 + 8) + (ulong)uVar21 * 0xd0;
      if ((bVar13) ||
         (fVar23 = (float)((ulong)*(undefined8 *)(lVar14 + 0x9c) >> 0x20),
         fVar26 = (float)*(undefined8 *)(lVar14 + 0x94) * *(float *)(lVar14 + 100) + 0.0,
         fVar26 * fVar26 < fVar23 * fVar23 + *(float *)(lVar14 + 0x9c) * *(float *)(lVar14 + 0x9c)))
      {
        uVar18 = *(undefined8 *)(lVar14 + 0x88);
        *(ulong *)(lVar14 + 0x18) = (ulong)(uint)fVar29;
        *(ulong *)(lVar14 + 0x10) = CONCAT44(fVar49,fVar47);
        *(ulong *)(lVar14 + 0x28) = uVar22;
        *(ulong *)(lVar14 + 0x20) = CONCAT44(fVar35,fVar25);
        *(undefined8 *)(lVar14 + 0x38) = uVar44;
        *(undefined8 *)(lVar14 + 0x30) = uVar43;
        *(undefined8 *)(lVar14 + 0x48) = uVar48;
        *(ulong *)(lVar14 + 0x40) = CONCAT44(fVar46,fVar45);
        *(undefined8 *)(lVar14 + 0x98) = uStack_98;
        *(undefined8 *)(lVar14 + 0x90) = uStack_a0;
        *(ulong *)(lVar14 + 0xa8) = CONCAT44(fStack_84,uStack_88);
        *(undefined8 *)(lVar14 + 0xa0) = uStack_90;
        *(ulong *)(lVar14 + 0xb4) = CONCAT44(uStack_78,uStack_7c);
        *(ulong *)(lVar14 + 0xac) = CONCAT44(fStack_80,fStack_84);
        *(undefined8 *)(lVar14 + 0x58) = uVar42;
        *(undefined8 *)(lVar14 + 0x50) = uVar39;
        *(ulong *)(lVar14 + 0x68) = uStack_c8;
        *(ulong *)(lVar14 + 0x60) = CONCAT44(fStack_cc,fStack_d0);
        *(ulong *)(lVar14 + 0x78) = CONCAT44(uStack_b4,uStack_b8);
        *(ulong *)(lVar14 + 0x70) = CONCAT44(uStack_bc,fVar33);
        *(undefined8 *)(lVar14 + 0x88) = uStack_a8;
        *(ulong *)(lVar14 + 0x80) = CONCAT44(uStack_ac,uStack_b0);
        *(ulong *)(lVar14 + 200) = CONCAT44(uStack_64,fStack_68);
        *(ulong *)(lVar14 + 0xc0) = CONCAT44(fStack_6c,fStack_70);
        *(ulong *)(lVar14 + 0xd8) = CONCAT44(uStack_54,fStack_58);
        *(ulong *)(lVar14 + 0xd0) = CONCAT44(fStack_5c,fStack_60);
        *(undefined8 *)(lVar14 + 0x88) = uVar18;
        *(undefined8 *)(lVar14 + 0x9c) = *(undefined8 *)(lVar14 + 0x9c);
        *(undefined8 *)(lVar14 + 0x94) = *(undefined8 *)(lVar14 + 0x94);
      }
      *(undefined4 *)(lVar14 + 0xb8) = *(undefined4 *)(lVar14 + 0xb8);
    }
    if ((pcRam000000011382b1d8 != (code *)0x0) && (uVar1 == 0)) {
      (*pcRam000000011382b1d8)((long *)(param_2 + 8));
    }
  }
  return;
}



/* Entry: 109813bc4; end: 109813bcb;  */

void FUN_109813bc4(void)

{
  return;
}



/* Entry: 109813bcc; end: 109813c13;  */

undefined8 * FUN_109813bcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12f70;
  FUN_10980b2c4(param_1 + 9);
  FUN_1098079e0(param_1 + 5);
  FUN_109814de4(param_1 + 1);
  return param_1;
}



/* Entry: 109813c14; end: 109813c17;  */

undefined8 * FUN_109813c14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12f70;
  FUN_10980b2c4(param_1 + 9);
  FUN_1098079e0(param_1 + 5);
  FUN_109814de4(param_1 + 1);
  return param_1;
}



/* Entry: 109813c18; end: 109813c2b;  */

void FUN_109813c18(void)

{
  FUN_109813bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109813c2c; end: 109813caf;  */

void FUN_109813c2c(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint *puVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  puVar3 = (uint *)(lVar2 + (long)(int)param_2 * 8);
  uVar1 = *puVar3;
  if (uVar1 != param_2) {
    do {
      param_2 = *(uint *)(lVar2 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)
                         );
      *puVar3 = param_2;
      puVar3 = (uint *)(lVar2 + (long)(int)param_2 * 8);
      uVar1 = *puVar3;
    } while (param_2 != uVar1);
  }
  puVar3 = (uint *)(lVar2 + (long)(int)param_3 * 8);
  uVar1 = *puVar3;
  if (uVar1 != param_3) {
    do {
      param_3 = *(uint *)(lVar2 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3)
                         );
      *puVar3 = param_3;
      puVar3 = (uint *)(lVar2 + (long)(int)param_3 * 8);
      uVar1 = *puVar3;
    } while (param_3 != uVar1);
  }
  if (param_2 != param_3) {
    puVar3 = (uint *)(lVar2 + (long)(int)param_2 * 8);
    *puVar3 = param_3;
    lVar2 = lVar2 + (long)(int)param_3 * 8;
    *(uint *)(lVar2 + 4) = *(int *)(lVar2 + 4) + puVar3[1];
  }
  return;
}



/* Entry: 109813cb0; end: 109813e07;  */

void FUN_109813cb0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar3 = (ulong)*(uint *)(param_2 + 0xc);
  if ((int)*(uint *)(param_2 + 0xc) < 1) {
    FUN_109814e30(param_1 + 8,0);
  }
  else {
    uVar7 = 0;
    plVar1 = *(long **)(param_2 + 0x18);
    do {
      lVar6 = *plVar1;
      if ((*(byte *)(lVar6 + 0xe8) & 3) == 0) {
        *(int *)(lVar6 + 0xec) = (int)uVar7;
        uVar7 = (ulong)((int)uVar7 + 1);
      }
      *(undefined4 *)(lVar6 + 0xf0) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x134) = 0x3f800000;
      uVar3 = uVar3 - 1;
      plVar1 = plVar1 + 1;
    } while (uVar3 != 0);
    FUN_109814e30(param_1 + 8,uVar7);
    if (0 < (int)uVar7) {
      uVar3 = 0;
      puVar5 = (undefined4 *)(*(long *)(param_1 + 0x18) + 4);
      do {
        puVar5[-1] = (int)uVar3;
        *puVar5 = 1;
        uVar3 = uVar3 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar7 != uVar3);
    }
  }
  plVar1 = *(long **)(param_2 + 0x68);
  (**(code **)(*plVar1 + 0x48))();
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x48))();
  if (((int)plVar2 != 0) && ((**(code **)(*plVar1 + 0x28))(), 0 < (int)plVar2)) {
    uVar3 = (ulong)plVar2 & 0xffffffff;
    plVar1 = plVar1 + 1;
    do {
      lVar6 = *(long *)plVar1[-1];
      if (((lVar6 != 0) &&
          (lVar4 = *(long *)*plVar1, (*(byte *)(lVar6 + 0xe8) & 7) == 0 && lVar4 != 0)) &&
         ((*(byte *)(lVar4 + 0xe8) & 7) == 0)) {
        FUN_109813c2c(param_1 + 8,*(undefined4 *)(lVar6 + 0xec),*(undefined4 *)(lVar4 + 0xec));
      }
      plVar1 = plVar1 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



/* Entry: 109813e08; end: 109813e97;  */

void FUN_109813e08(long param_1,long param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  if (0 < (int)uVar2) {
    uVar5 = 0;
    uVar6 = 0;
    lVar7 = *(long *)(param_2 + 0x18);
    do {
      lVar8 = *(long *)(lVar7 + uVar5 * 8);
      if ((*(byte *)(lVar8 + 0xe8) & 3) == 0) {
        lVar9 = *(long *)(param_1 + 0x18);
        puVar1 = (uint *)(lVar9 + (long)(int)uVar6 * 8);
        uVar3 = *puVar1;
        puVar4 = puVar1;
        uVar10 = uVar6;
        if (uVar3 != uVar6) {
          do {
            uVar10 = *(uint *)(lVar9 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 |
                                       (ulong)uVar3 << 3));
            *puVar4 = uVar10;
            puVar4 = (uint *)(lVar9 + (long)(int)uVar10 * 8);
            uVar3 = *puVar4;
          } while (uVar10 != uVar3);
        }
        puVar1[1] = (uint)uVar5;
        uVar6 = uVar6 + 1;
        *(uint *)(lVar8 + 0xec) = uVar10;
        *(undefined4 *)(lVar8 + 0xf0) = 0xffffffff;
      }
      else {
        *(undefined8 *)(lVar8 + 0xec) = 0xfffffffeffffffff;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  return;
}



/* Entry: 109813e98; end: 109814567;  */

void FUN_109813e98(long param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  
  lVar14 = (long)*(int *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x2c) < 0) {
    if (*(int *)(param_1 + 0x30) < 0) {
      if ((*(long *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar14 * 8) = 0;
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 != 0);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_109814f00(param_1 + 8);
  uVar11 = *(uint *)(param_1 + 0xc);
  if ((int)uVar11 < 1) {
LAB_109814038:
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x48))();
    if (0 < (int)plVar4) {
      iVar15 = 0;
      do {
        plVar5 = param_2;
        (**(code **)(*param_2 + 0x50))(param_2,iVar15);
        if ((*(char *)(param_3 + 0x60) != '\x01') || ((int)plVar5[0x6c] != 0)) {
          lVar14 = plVar5[0x6a];
          lVar10 = plVar5[0x6b];
          if (((lVar14 != 0) && (*(int *)(lVar14 + 0xf8) != 2)) ||
             ((lVar10 != 0 && (*(int *)(lVar10 + 0xf8) != 2)))) {
            uVar11 = *(uint *)(lVar14 + 0xe8);
            if (((uVar11 >> 1 & 1) != 0) &&
               ((((uVar11 >> 2 & 1) == 0 && (*(int *)(lVar14 + 0xf8) != 2)) &&
                ((*(byte *)(lVar10 + 0xe8) & 3) == 0)))) {
              if ((*(uint *)(lVar10 + 0xf8) & 0xfffffffe) != 4) {
                *(undefined4 *)(lVar10 + 0xf8) = 1;
              }
              *(undefined4 *)(lVar10 + 0xfc) = 0;
            }
            if (((*(uint *)(lVar10 + 0xe8) >> 1 & 1) != 0) &&
               (((*(uint *)(lVar10 + 0xe8) & 4) == 0 && (uVar11 & 3) == 0) &&
                *(int *)(lVar10 + 0xf8) != 2)) {
              if ((*(uint *)(lVar14 + 0xf8) & 0xfffffffe) != 4) {
                *(undefined4 *)(lVar14 + 0xf8) = 1;
              }
              *(undefined4 *)(lVar14 + 0xfc) = 0;
            }
            if ((*(char *)(param_1 + 0x68) == '\x01') &&
               (plVar6 = param_2, (**(code **)(*param_2 + 0x38))(), (int)plVar6 != 0)) {
              uVar11 = *(uint *)(param_1 + 0x2c);
              if (uVar11 == *(uint *)(param_1 + 0x30)) {
                uVar1 = uVar11 << 1;
                if (uVar11 == 0) {
                  uVar1 = 1;
                }
                if ((int)uVar11 < (int)uVar1) {
                  if (uVar1 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
                    FUN_1098256f4(uVar13,0x10);
                    uVar11 = *(uint *)(param_1 + 0x2c);
                  }
                  if (0 < (int)uVar11) {
                    lVar14 = 0;
                    do {
                      *(undefined8 *)(uVar13 + lVar14) =
                           *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar14);
                      lVar14 = lVar14 + 8;
                    } while ((ulong)uVar11 << 3 != lVar14);
                  }
                  if ((*(long *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x40) == '\x01')) {
                    FUN_109825740();
                    uVar11 = *(uint *)(param_1 + 0x2c);
                  }
                  *(undefined1 *)(param_1 + 0x40) = 1;
                  *(ulong *)(param_1 + 0x38) = uVar13;
                  *(uint *)(param_1 + 0x30) = uVar1;
                }
              }
              *(long **)(*(long *)(param_1 + 0x38) + (long)(int)uVar11 * 8) = plVar5;
              *(uint *)(param_1 + 0x2c) = uVar11 + 1;
            }
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != (int)plVar4);
    }
    return;
  }
  uVar13 = 0;
  lVar14 = *(long *)(param_1 + 0x18);
LAB_109813f38:
  lVar10 = uVar13 * 8;
  iVar15 = *(int *)(lVar14 + lVar10);
  iVar12 = (int)uVar13;
  uVar1 = uVar11;
  if ((int)uVar11 <= iVar12 + 1) {
    uVar1 = iVar12 + 1;
  }
  iVar7 = uVar1 - 1;
  lVar9 = 1;
  piVar3 = (int *)(lVar14 + 8 + uVar13 * 8);
  do {
    if ((ulong)uVar11 <= uVar13 + lVar9) goto LAB_109813f84;
    iVar2 = *piVar3;
    lVar9 = lVar9 + 1;
    piVar3 = piVar3 + 2;
  } while (iVar2 == iVar15);
  iVar2 = iVar12 + (int)lVar9;
  iVar7 = iVar2 + -2;
  uVar1 = iVar2 - 1;
LAB_109813f84:
  uVar13 = (ulong)uVar1;
  if (iVar12 <= iVar7) {
    lVar9 = *(long *)(param_3 + 0x18);
    iVar12 = (iVar7 - iVar12) + 1;
    piVar3 = (int *)(lVar14 + 4 + lVar10);
    piVar8 = piVar3;
    iVar7 = iVar12;
    do {
      lVar10 = *(long *)(lVar9 + (long)*piVar8 * 8);
      if ((*(int *)(lVar10 + 0xec) == iVar15) &&
         (iVar2 = *(int *)(lVar10 + 0xf8), iVar2 == 4 || iVar2 == 1)) goto LAB_109814004;
      iVar7 = iVar7 + -1;
      piVar8 = piVar8 + 2;
    } while (iVar7 != 0);
    do {
      lVar10 = *(long *)(lVar9 + (long)*piVar3 * 8);
      if ((*(int *)(lVar10 + 0xec) == iVar15) && ((*(uint *)(lVar10 + 0xf8) & 0xfffffffe) != 4)) {
        *(undefined4 *)(lVar10 + 0xf8) = 2;
      }
      iVar12 = iVar12 + -1;
      piVar3 = piVar3 + 2;
    } while (iVar12 != 0);
  }
  goto LAB_109814030;
LAB_109814004:
  do {
    lVar10 = *(long *)(lVar9 + (long)*piVar3 * 8);
    if ((*(int *)(lVar10 + 0xec) == iVar15) && (*(int *)(lVar10 + 0xf8) == 2)) {
      *(undefined8 *)(lVar10 + 0xf8) = 3;
    }
    iVar12 = iVar12 + -1;
    piVar3 = piVar3 + 2;
  } while (iVar12 != 0);
LAB_109814030:
  if ((int)uVar11 <= (int)uVar1) goto LAB_109814038;
  goto LAB_109813f38;
}



/* Entry: 109814568; end: 1098148cf;  */

void FUN_109814568(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
LAB_109814584:
  iVar12 = (int)param_2;
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + (long)((iVar12 + (int)param_3) / 2) * 8);
  uVar2 = param_3;
LAB_1098145a0:
  lVar4 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar3 + 0x350);
  iVar1 = *(int *)(lVar5 + 0xec);
  param_2 = (ulong)(int)param_2;
  do {
    lVar6 = *(long *)(lVar4 + param_2 * 8);
    lVar7 = *(long *)(lVar6 + 0x350);
    iVar11 = *(int *)(lVar7 + 0xec);
    iVar9 = iVar11;
    if (iVar11 < 0) {
      iVar9 = *(int *)(*(long *)(lVar6 + 0x358) + 0xec);
    }
    iVar10 = iVar1;
    if (iVar1 < 0) {
      iVar10 = *(int *)(*(long *)(lVar3 + 0x358) + 0xec);
    }
    if (iVar10 <= iVar9) {
      iVar9 = iVar11;
      if (iVar11 < 0) {
        iVar9 = *(int *)(*(long *)(lVar6 + 0x358) + 0xec);
      }
      iVar10 = iVar1;
      if (iVar1 < 0) {
        iVar10 = *(int *)(*(long *)(lVar3 + 0x358) + 0xec);
      }
      if ((iVar9 != iVar10) ||
         (*(int *)(*(long *)(lVar5 + 200) + 0x10) <= *(int *)(*(long *)(lVar7 + 200) + 0x10))) {
        if (iVar11 < 0) {
          iVar11 = *(int *)(*(long *)(lVar6 + 0x358) + 0xec);
        }
        iVar9 = iVar1;
        if (iVar1 < 0) {
          iVar9 = *(int *)(*(long *)(lVar3 + 0x358) + 0xec);
        }
        if (((iVar11 != iVar9) ||
            (*(int *)(*(long *)(lVar7 + 200) + 0x10) != *(int *)(*(long *)(lVar5 + 200) + 0x10))) ||
           (*(int *)(*(long *)(*(long *)(lVar3 + 0x358) + 200) + 0x10) <=
            *(int *)(*(long *)(*(long *)(lVar6 + 0x358) + 200) + 0x10))) break;
      }
    }
    param_2 = param_2 + 1;
  } while( true );
  uVar2 = (ulong)(int)uVar2;
  do {
    lVar7 = *(long *)(lVar4 + uVar2 * 8);
    iVar11 = iVar1;
    if (iVar1 < 0) {
      iVar11 = *(int *)(*(long *)(lVar3 + 0x358) + 0xec);
    }
    lVar8 = *(long *)(lVar7 + 0x350);
    iVar9 = *(int *)(lVar8 + 0xec);
    iVar10 = iVar9;
    if (iVar9 < 0) {
      iVar10 = *(int *)(*(long *)(lVar7 + 0x358) + 0xec);
    }
    if (iVar10 <= iVar11) {
      iVar11 = iVar1;
      if (iVar1 < 0) {
        iVar11 = *(int *)(*(long *)(lVar3 + 0x358) + 0xec);
      }
      iVar10 = iVar9;
      if (iVar9 < 0) {
        iVar10 = *(int *)(*(long *)(lVar7 + 0x358) + 0xec);
      }
      if ((iVar11 != iVar10) ||
         (*(int *)(*(long *)(lVar8 + 200) + 0x10) <= *(int *)(*(long *)(lVar5 + 200) + 0x10))) {
        iVar11 = iVar1;
        if (iVar1 < 0) {
          iVar11 = *(int *)(*(long *)(lVar3 + 0x358) + 0xec);
        }
        if (iVar9 < 0) {
          iVar9 = *(int *)(*(long *)(lVar7 + 0x358) + 0xec);
        }
        if (((iVar11 != iVar9) ||
            (*(int *)(*(long *)(lVar5 + 200) + 0x10) != *(int *)(*(long *)(lVar8 + 200) + 0x10))) ||
           (*(int *)(*(long *)(*(long *)(lVar7 + 0x358) + 200) + 0x10) <=
            *(int *)(*(long *)(*(long *)(lVar3 + 0x358) + 200) + 0x10))) break;
      }
    }
    uVar2 = uVar2 - 1;
  } while( true );
  if ((long)param_2 <= (long)uVar2) {
    *(long *)(lVar4 + param_2 * 8) = lVar7;
    *(long *)(*(long *)(param_1 + 0x10) + uVar2 * 8) = lVar6;
    param_2 = (ulong)((int)param_2 + 1);
    uVar2 = (ulong)((int)uVar2 - 1);
  }
  if ((int)uVar2 < (int)param_2) goto code_r0x000109814790;
  goto LAB_1098145a0;
code_r0x000109814790:
  if (iVar12 < (int)uVar2) {
    FUN_109814568(param_1);
  }
  if ((int)param_3 <= (int)param_2) {
    return;
  }
  goto LAB_109814584;
}



/* Entry: 1098148d0; end: 109814923;  */

undefined8 * FUN_1098148d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12fb0;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 109814924; end: 109814927;  */

undefined8 * FUN_109814924(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b12fb0;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 109814928; end: 10981493b;  */

void FUN_109814928(void)

{
  FUN_1098148d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10981493c; end: 109814a73;  */

void FUN_10981493c(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    param_5[1] = lVar2;
    lVar1 = *(long *)(param_2 + 0x18);
    uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x30);
    fVar8 = *(float *)(lVar1 + 0x30) - (float)uVar7;
    fVar9 = *(float *)(lVar1 + 0x34) - (float)((ulong)uVar7 >> 0x20);
    fVar10 = *(float *)(lVar1 + 0x38) - (float)*(undefined8 *)(*(long *)(param_3 + 0x18) + 0x38);
    auVar4._0_4_ = fVar8 * fVar8;
    auVar4._4_4_ = fVar9 * fVar9;
    auVar4._8_4_ = fVar10 * fVar10;
    auVar4._12_4_ = 0;
    auVar5 = NEON_ext(auVar4,auVar4,8,1);
    fVar13 = SQRT(auVar4._0_4_ + auVar4._4_4_ + auVar5._0_4_);
    fVar3 = *(float *)(*(long *)(param_2 + 8) + 0x30);
    fVar6 = *(float *)(*(long *)(param_2 + 8) + 0x20);
    fVar12 = *(float *)(*(long *)(param_3 + 8) + 0x30) * *(float *)(*(long *)(param_3 + 8) + 0x20);
    if ((*(int *)(lVar2 + 0x360) != 0) && (pcRam000000011382b1e0 != (code *)0x0)) {
      uStack_50 = lVar2;
      (*pcRam000000011382b1e0)(&uStack_50);
    }
    *(undefined4 *)(lVar2 + 0x360) = 0;
    if (fVar13 <= fVar3 * fVar6 + fVar12 + *(float *)(param_5 + 6)) {
      uStack_48 = 0;
      uStack_50._0_4_ = 1.0;
      uStack_50._4_4_ = 0.0;
      if (fVar13 <= 1.1920929e-07) {
        fVar10 = 0.0;
      }
      else {
        fVar13 = 1.0 / fVar13;
        uStack_50._0_4_ = fVar8 * fVar13;
        uStack_50._4_4_ = fVar9 * fVar13;
        fVar10 = fVar10 * fVar13;
        uStack_48 = (ulong)(uint)fVar10;
      }
      uVar11 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x38);
      uVar7 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x30);
      uStack_60 = CONCAT44((float)((ulong)uVar7 >> 0x20) + uStack_50._4_4_ * fVar12,
                           (float)uVar7 + (float)uStack_50 * fVar12);
      uStack_58 = CONCAT44((float)((ulong)uVar11 >> 0x20) + 0.0,(float)uVar11 + fVar10 * fVar12);
      (**(code **)(*param_5 + 0x20))(param_5,&uStack_50,&uStack_60);
    }
  }
  return;
}



/* Entry: 109814a74; end: 109814a7b;  */

undefined8 FUN_109814a74(void)

{
  return 0x3f800000;
}



/* Entry: 109814a7c; end: 109814b5b;  */

void FUN_109814a7c(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar3 == *(uint *)(param_2 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          FUN_1098256f4(uVar2,0x10);
          uVar3 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 << 3 != lVar4);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
          FUN_109825740();
          uVar3 = *(uint *)(param_2 + 4);
        }
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(uint *)(param_2 + 8) = uVar1;
        lVar4 = *(long *)(param_1 + 0x18);
      }
    }
    *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8) = lVar4;
    *(uint *)(param_2 + 4) = uVar3 + 1;
  }
  return;
}



/* Entry: 109814b5c; end: 109814baf;  */

undefined8 * FUN_109814b5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13000;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 109814bb0; end: 109814bb3;  */

undefined8 * FUN_109814bb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110b13000;
  if ((*(char *)(param_1 + 2) == '\x01') && (param_1[3] != 0)) {
    (**(code **)(*(long *)param_1[1] + 0x20))();
  }
  return param_1;
}



/* Entry: 109814bb4; end: 109814bc7;  */

void FUN_109814bb4(void)

{
  FUN_109814b5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109814bc8; end: 109814cfb;  */

undefined8
FUN_109814bc8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_2 + 0x18);
  if (lVar2 != 0) {
    lVar1 = param_3;
    if (*(char *)(param_2 + 0x20) == '\0') {
      lVar1 = param_4;
      param_4 = param_3;
    }
    uStack_d8 = *(undefined8 *)(param_4 + 8);
    uStack_d0 = *(undefined8 *)(lVar1 + 8);
    *(long *)(param_6 + 8) = lVar2;
    fStack_c8 = *(float *)(lVar2 + 0x364) + *(float *)(param_6 + 0x30);
    ppuStack_e0 = &PTR_FUN_110b120c8;
    uStack_40 = 0x5d5e0b6b;
    puVar3 = *(undefined8 **)(param_4 + 0x18);
    uStack_b8 = puVar3[1];
    uStack_c0 = *puVar3;
    uStack_a8 = puVar3[3];
    uStack_b0 = puVar3[2];
    uStack_98 = puVar3[5];
    uStack_a0 = puVar3[4];
    uStack_88 = puVar3[7];
    uStack_90 = puVar3[6];
    puVar3 = *(undefined8 **)(lVar1 + 0x18);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    uStack_68 = puVar3[3];
    uStack_70 = puVar3[2];
    uStack_58 = puVar3[5];
    uStack_60 = puVar3[4];
    uStack_48 = puVar3[7];
    param_1 = puVar3[6];
    uStack_50 = param_1;
    FUN_1098051d0(&ppuStack_e0,&uStack_c0,param_6,*(undefined8 *)(param_5 + 0x18));
    if ((*(char *)(param_2 + 0x10) == '\x01') &&
       (lVar2 = *(long *)(param_6 + 8), *(int *)(lVar2 + 0x360) != 0)) {
      lVar4 = *(long *)(*(long *)(param_6 + 0x10) + 0x10);
      lVar5 = *(long *)(*(long *)(param_6 + 0x18) + 0x10);
      lVar1 = lVar4;
      if (*(long *)(lVar2 + 0x350) != lVar4) {
        lVar1 = lVar5;
        lVar5 = lVar4;
      }
      FUN_10982280c(lVar2,lVar1 + 0x10,lVar5 + 0x10);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    __Unwind_Resume();
    return 0x3f800000;
  }
  return param_1;
}



/* Entry: 109814cfc; end: 109814d03;  */

undefined8 FUN_109814cfc(void)

{
  return 0x3f800000;
}



/* Entry: 109814d04; end: 109814de3;  */

void FUN_109814d04(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if ((lVar4 != 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
    uVar3 = *(uint *)(param_2 + 4);
    if (uVar3 == *(uint *)(param_2 + 8)) {
      uVar1 = uVar3 << 1;
      if (uVar3 == 0) {
        uVar1 = 1;
      }
      if ((int)uVar3 < (int)uVar1) {
        if (uVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          FUN_1098256f4(uVar2,0x10);
          uVar3 = *(uint *)(param_2 + 4);
        }
        if (0 < (int)uVar3) {
          lVar4 = 0;
          do {
            *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar4);
            lVar4 = lVar4 + 8;
          } while ((ulong)uVar3 << 3 != lVar4);
        }
        if ((*(long *)(param_2 + 0x10) != 0) && ((*(byte *)(param_2 + 0x18) & 1) != 0)) {
          FUN_109825740();
          uVar3 = *(uint *)(param_2 + 4);
        }
        *(undefined1 *)(param_2 + 0x18) = 1;
        *(ulong *)(param_2 + 0x10) = uVar2;
        *(uint *)(param_2 + 8) = uVar1;
        lVar4 = *(long *)(param_1 + 0x18);
      }
    }
    *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar3 * 8) = lVar4;
    *(uint *)(param_2 + 4) = uVar3 + 1;
  }
  return;
}



/* Entry: 109814de4; end: 109814e2f;  */

long FUN_109814de4(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109814e30; end: 109814eff;  */

void FUN_109814e30(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar3 = (int)param_2;
  if ((int)uVar1 < iVar3) {
    lVar5 = (long)(int)uVar1;
    if (*(int *)(param_1 + 8) < iVar3) {
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = -(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3;
        FUN_1098256f4(uVar2,0x10);
        uVar1 = *(uint *)(param_1 + 4);
      }
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          *(undefined8 *)(uVar2 + lVar4) = *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar1 << 3 != lVar4);
      }
      if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
        FUN_109825740();
      }
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(ulong *)(param_1 + 0x10) = uVar2;
      *(int *)(param_1 + 8) = iVar3;
    }
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar5 * 8) = 0;
      lVar5 = lVar5 + 1;
    } while (iVar3 != lVar5);
  }
  *(int *)(param_1 + 4) = iVar3;
  return;
}



/* Entry: 109814f00; end: 109814f87;  */

void FUN_109814f00(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  undefined1 uStack_11;
  
  uVar2 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    lVar5 = *(long *)(param_1 + 0x10);
    do {
      puVar1 = (uint *)(lVar5 + uVar4 * 8);
      uVar8 = (ulong)*puVar1;
      uVar6 = (uint)uVar4;
      puVar7 = puVar1;
      if (uVar4 != uVar8) {
        do {
          uVar6 = *(uint *)(lVar5 + (-(uVar8 >> 0x1f) & 0xfffffff800000000 | uVar8 << 3));
          *puVar7 = uVar6;
          puVar7 = (uint *)(lVar5 + (long)(int)uVar6 * 8);
          uVar3 = *puVar7;
          uVar8 = (ulong)uVar3;
        } while (uVar6 != uVar3);
      }
      *puVar1 = uVar6;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
    if (uVar2 != 1) {
      FUN_109814fd4(param_1,&uStack_11,0,uVar2 - 1);
    }
  }
  return;
}



/* Entry: 109814f88; end: 109814fd3;  */

long FUN_109814f88(long param_1)

{
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_109825740();
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



/* Entry: 109814fd4; end: 1098150b7;  */

void FUN_109814fd4(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int *piVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  
  do {
    iVar11 = (int)param_3;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)((iVar11 + (int)param_4) / 2) * 8);
    uVar3 = param_4;
    do {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar7 = (long)(int)param_3 + -1;
      uVar8 = -(param_3 >> 0x1f & 1) & 0xfffffff800000000 | (param_3 & 0xffffffff) << 3;
      do {
        uVar12 = param_3;
        piVar1 = (int *)(lVar6 + uVar8);
        lVar7 = lVar7 + 1;
        param_3 = (ulong)((int)uVar12 + 1);
        uVar8 = uVar8 + 8;
        iVar4 = (int)uVar5;
      } while (*piVar1 < iVar4);
      lVar9 = (long)(int)uVar3 + 1;
      uVar8 = -(uVar3 >> 0x1f & 1) & 0xfffffff800000000 | (uVar3 & 0xffffffff) << 3;
      do {
        uVar2 = uVar3;
        piVar1 = (int *)(lVar6 + uVar8);
        lVar9 = lVar9 + -1;
        uVar3 = (ulong)((int)uVar2 - 1);
        uVar8 = uVar8 - 8;
      } while (iVar4 < *piVar1);
      if (lVar9 < lVar7) {
        param_3 = uVar12 & 0xffffffff;
        uVar3 = uVar2 & 0xffffffff;
      }
      else {
        uVar10 = *(undefined8 *)(lVar6 + lVar7 * 8);
        *(undefined8 *)(lVar6 + lVar7 * 8) = *(undefined8 *)(lVar6 + lVar9 * 8);
        *(undefined8 *)(*(long *)(param_1 + 0x10) + lVar9 * 8) = uVar10;
      }
    } while ((int)param_3 <= (int)uVar3);
    if (iVar11 < (int)uVar3) {
      FUN_109814fd4(param_1,param_2);
    }
  } while ((int)param_3 < (int)param_4);
  return;
}



/* Entry: 1098150b8; end: 10981514f;  */

undefined8 * FUN_1098150b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0xffffffffffffffff;
  param_1[5] = 0x3f800000;
  param_1[4] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 8) = 0x3d23d70a;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_110b13050;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *param_2;
  param_1[7] = (ulong)(uint)((float)param_2[1] * 1.0 + -0.04);
  param_1[6] = CONCAT44((float)((ulong)uVar1 >> 0x20) * 1.0 + -0.04,(float)uVar1 * 1.0 + -0.04);
  FUN_109815150(0x3dcccccd);
  return param_1;
}



/* Entry: 109815150; end: 1098151cf;  */

void FUN_109815150(float param_1,long *param_2,float *param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  uVar1 = (ulong)(fVar3 <= fVar2);
  if (fVar3 > fVar2) {
    fVar3 = fVar2;
  }
  if (param_3[2] <= fVar3) {
    uVar1 = 2;
  }
  fVar3 = param_1 * param_3[uVar1];
  (**(code **)(*param_2 + 0x60))();
  if (fVar3 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001098151bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x58))(fVar3,param_2);
    return;
  }
  return;
}



/* Entry: 1098151d0; end: 109815283;  */

void FUN_1098151d0(float param_1,long *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  float fVar23;
  undefined8 uVar24;
  
  (**(code **)(*param_2 + 0x60))();
  uVar24 = *(undefined8 *)(param_3 + 0xe);
  auVar21._0_8_ = *(ulong *)(param_3 + 8) & 0x7fffffff7fffffff;
  auVar21[8] = *(undefined1 *)(param_3 + 10);
  auVar21[9] = *(undefined1 *)((long)param_3 + 0x29);
  auVar21[10] = *(undefined1 *)((long)param_3 + 0x2a);
  auVar21[0xb] = *(byte *)((long)param_3 + 0x2b) & 0x7f;
  auVar19._0_8_ = *(ulong *)(param_3 + 4) & 0x7fffffff7fffffff;
  auVar19[8] = *(undefined1 *)(param_3 + 6);
  auVar19[9] = *(undefined1 *)((long)param_3 + 0x19);
  auVar19[10] = *(undefined1 *)((long)param_3 + 0x1a);
  auVar19[0xb] = *(byte *)((long)param_3 + 0x1b) & 0x7f;
  fVar6 = *(float *)(param_2 + 6) + param_1;
  fVar7 = *(float *)((long)param_2 + 0x34) + param_1;
  param_1 = *(float *)(param_2 + 7) + param_1;
  fVar8 = *(float *)((long)param_2 + 0x3c) + 0.0;
  fVar3 = fVar6 * ABS(*param_3);
  fVar4 = fVar7 * ABS(param_3[1]);
  uVar9 = (undefined1)((uint)fVar4 >> 8);
  uVar10 = (undefined1)((uint)fVar4 >> 0x10);
  uVar11 = (undefined1)((uint)fVar4 >> 0x18);
  fVar5 = param_1 * ABS(param_3[2]);
  uVar12 = (undefined1)((uint)fVar5 >> 8);
  uVar13 = (undefined1)((uint)fVar5 >> 0x10);
  uVar14 = (undefined1)((uint)fVar5 >> 0x18);
  fVar23 = fVar8 * 0.0;
  uVar15 = (undefined1)((uint)fVar23 >> 8);
  uVar16 = (undefined1)((uint)fVar23 >> 0x10);
  uVar17 = (undefined1)((uint)fVar23 >> 0x18);
  auVar18._0_4_ = fVar6 * ABS(param_3[4]);
  auVar18._4_4_ = fVar7 * (float)(auVar19._0_8_ >> 0x20);
  auVar18._8_4_ = param_1 * auVar19._8_4_;
  auVar18._12_4_ = fVar8 * 0.0;
  fVar6 = fVar6 * ABS(param_3[8]);
  fVar7 = fVar7 * (float)(auVar21._0_8_ >> 0x20);
  param_1 = param_1 * auVar21._8_4_;
  auVar1[4] = SUB41(fVar4,0);
  auVar1._0_4_ = fVar3;
  auVar1[5] = uVar9;
  auVar1[6] = uVar10;
  auVar1[7] = uVar11;
  auVar1[8] = SUB41(fVar5,0);
  auVar1[9] = uVar12;
  auVar1[10] = uVar13;
  auVar1[0xb] = uVar14;
  auVar1[0xc] = SUB41(fVar23,0);
  auVar1[0xd] = uVar15;
  auVar1[0xe] = uVar16;
  auVar1[0xf] = uVar17;
  auVar2[4] = SUB41(fVar4,0);
  auVar2._0_4_ = fVar3;
  auVar2[5] = uVar9;
  auVar2[6] = uVar10;
  auVar2[7] = uVar11;
  auVar2[8] = SUB41(fVar5,0);
  auVar2[9] = uVar12;
  auVar2[10] = uVar13;
  auVar2[0xb] = uVar14;
  auVar2[0xc] = SUB41(fVar23,0);
  auVar2[0xd] = uVar15;
  auVar2[0xe] = uVar16;
  auVar2[0xf] = uVar17;
  auVar20 = NEON_ext(auVar1,auVar2,8,1);
  auVar22 = NEON_ext(auVar18,auVar18,8,1);
  fVar3 = fVar3 + fVar4 + auVar20._0_4_;
  fVar4 = auVar18._0_4_ + auVar18._4_4_ + auVar22._0_4_;
  auVar20._4_4_ = fVar7;
  auVar20._0_4_ = fVar6;
  auVar20._8_4_ = param_1;
  auVar20._12_4_ = 0;
  auVar22._4_4_ = fVar7;
  auVar22._0_4_ = fVar6;
  auVar22._8_4_ = param_1;
  auVar22._12_4_ = 0;
  auVar20 = NEON_ext(auVar20,auVar22,8,1);
  fVar5 = fVar6 + fVar7 + auVar20._0_4_ + auVar20._4_4_;
  fVar23 = (float)*(undefined8 *)(param_3 + 0xc);
  fVar6 = (float)((ulong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  fVar7 = (float)uVar24;
  param_4[1] = (ulong)(uint)(fVar7 - fVar5);
  *param_4 = CONCAT44(fVar6 - fVar4,fVar23 - fVar3);
  param_5[1] = CONCAT44((float)((ulong)uVar24 >> 0x20) + 0.0,fVar7 + fVar5);
  *param_5 = CONCAT44(fVar6 + fVar4,fVar23 + fVar3);
  return;
}



/* Entry: 109815284; end: 10981534b;  */

void FUN_109815284(float param_1,long *param_2,undefined8 *param_3)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  
  lVar6 = param_2[7];
  lVar2 = param_2[6];
  lVar3 = lVar2;
  (**(code **)(*param_2 + 0x60))();
  fVar4 = fVar7;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar5 = fVar4;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar7 = (float)lVar3;
  fVar1 = (float)lVar2 + fVar7;
  fVar4 = (float)((ulong)lVar2 >> 0x20) + fVar4;
  fVar5 = (float)lVar6 + fVar5;
  fVar5 = fVar5 + fVar5;
  param_1 = param_1 / 12.0;
  fVar5 = fVar5 * fVar5;
  fVar1 = fVar1 + fVar1;
  fVar4 = fVar4 + fVar4;
  uVar8 = NEON_rev64(CONCAT44(fVar5 + fVar4 * fVar4,fVar5 + fVar1 * fVar1),4);
  *param_3 = CONCAT44((float)((ulong)uVar8 >> 0x20) * param_1,(float)uVar8 * param_1);
  *(float *)(param_3 + 1) = param_1 * (fVar4 * fVar4 + fVar1 * fVar1);
  *(undefined4 *)((long)param_3 + 0xc) = 0;
  return;
}



/* Entry: 10981534c; end: 10981534f;  */

undefined8 * FUN_10981534c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b13e28;
  if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[9])();
    if (param_1[9] != 0) {
      FUN_109825740();
    }
  }
  return param_1;
}



/* Entry: 109815350; end: 10981536f;  */

void FUN_109815350(long param_1)

{
  FUN_10981b858();
  if (param_1 != 0) {
    FUN_109825740();
  }
  return;
}



/* Entry: 109815370; end: 109815417;  */

void FUN_109815370(float param_1,long *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  (**(code **)(*param_2 + 0x60))();
  fVar5 = param_1;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar6 = fVar5;
  (**(code **)(*param_2 + 0x60))(param_2);
  auVar7 = *(undefined1 (*) [16])(param_2 + 4);
  auVar8 = NEON_frecpe(auVar7,4);
  auVar10 = NEON_frecps(auVar7,auVar8,4);
  auVar9._0_4_ = auVar8._0_4_ * auVar10._0_4_;
  auVar9._4_4_ = auVar8._4_4_ * auVar10._4_4_;
  auVar9._8_4_ = auVar8._8_4_ * auVar10._8_4_;
  auVar9._12_4_ = auVar8._12_4_ * auVar10._12_4_;
  auVar7 = NEON_frecps(auVar7,auVar9,4);
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  *(float *)(param_2 + 5) = ABS(fVar3);
  *(float *)((long)param_2 + 0x2c) = ABS(fVar4);
  *(float *)(param_2 + 4) = ABS(fVar1);
  *(float *)((long)param_2 + 0x24) = ABS(fVar2);
  param_2[7] = (ulong)(uint)(auVar7._8_4_ * ((float)param_2[7] + fVar6) * auVar9._8_4_ * ABS(fVar3)
                            - fVar6);
  param_2[6] = CONCAT44(auVar7._4_4_ * ((float)((ulong)param_2[6] >> 0x20) + fVar5) * auVar9._4_4_ *
                        ABS(fVar2) - fVar5,
                        auVar7._0_4_ * ((float)param_2[6] + param_1) * auVar9._0_4_ * ABS(fVar1) -
                        param_1);
  return;
}



/* Entry: 109815418; end: 109815423;  */

undefined * FUN_109815418(void)

{
  return &UNK_10f580a81;
}



/* Entry: 109815424; end: 109815507;  */

void FUN_109815424(float param_1,long *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long lVar7;
  long lVar8;
  
  fVar3 = param_1;
  (**(code **)(*param_2 + 0x60))();
  fVar1 = fVar3;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar2 = fVar1;
  (**(code **)(*param_2 + 0x60))(param_2);
  lVar8 = param_2[7];
  lVar7 = param_2[6];
  fVar3 = (float)lVar7 + fVar3;
  *(float *)(param_2 + 8) = param_1;
  fVar4 = fVar3;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar5 = fVar4;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar6 = fVar5;
  (**(code **)(*param_2 + 0x60))(param_2);
  param_2[7] = (ulong)(uint)(((float)lVar8 + fVar2) - fVar6);
  param_2[6] = CONCAT44(((float)((ulong)lVar7 >> 0x20) + fVar1) - fVar5,fVar3 - fVar4);
  return;
}



/* Entry: 109815508; end: 1098155bb;  */

void FUN_109815508(ulong *param_1,long *param_2,undefined8 *param_3)

{
  float fVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar6 = param_2[7];
  lVar2 = param_2[6];
  lVar3 = lVar2;
  (**(code **)(*param_2 + 0x60))();
  fVar4 = fVar7;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar5 = fVar4;
  (**(code **)(*param_2 + 0x60))(param_2);
  fVar7 = (float)lVar3;
  fVar1 = (float)lVar2 + fVar7;
  fVar4 = (float)((ulong)lVar2 >> 0x20) + fVar4;
  fVar5 = (float)lVar6 + fVar5;
  fVar8 = *(float *)(param_3 + 1);
  fVar9 = -fVar1;
  fVar10 = -fVar4;
  *param_1 = CONCAT44(fVar10,fVar9) ^
             (CONCAT44(fVar10,fVar9) ^ CONCAT44(fVar4,fVar1)) &
             CONCAT44(-(uint)(0.0 <= (float)((ulong)*param_3 >> 0x20)),
                      -(uint)(0.0 <= (float)*param_3));
  if (fVar8 < 0.0) {
    fVar5 = -fVar5;
  }
  *(float *)(param_1 + 1) = fVar5;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}



/* Entry: 1098155bc; end: 10981569b;  */

void FUN_1098155bc(ulong *param_1,long param_2,undefined8 *param_3)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x38);
  if (*(float *)(param_3 + 1) < 0.0) {
    fVar1 = -*(float *)(param_2 + 0x38);
  }
  uVar2 = *(ulong *)(param_2 + 0x30);
  fVar3 = -(float)(uVar2 >> 0x20);
  *param_1 = CONCAT44(fVar3,-(float)uVar2) ^
             (CONCAT44(fVar3,-(float)uVar2) ^ uVar2) &
             CONCAT44(-(uint)(0.0 <= (float)((ulong)*param_3 >> 0x20)),
                      -(uint)(0.0 <= (float)*param_3));
  *(float *)(param_1 + 1) = fVar1;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}



/* Entry: 10981569c; end: 1098157ef;  */

void FUN_10981569c(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_2 < 0xc) {
    uVar1 = *(undefined4 *)(&UNK_10e001a90 + (ulong)param_2 * 4);
    uVar2 = *(undefined4 *)(&UNK_10e001ac0 + (ulong)param_2 * 4);
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,uVar1);
                    /* WARNING: Could not recover jumptable at 0x000109815714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe0))(param_1,uVar2,param_4);
  return;
}


