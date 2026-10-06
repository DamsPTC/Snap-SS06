/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10954bed8; end: 10954bf3f;  */

void FUN_10954bed8(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(param_1 + 0x1d4);
  iVar2 = *(int *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x28) = iVar1;
  *(int *)(param_1 + 0x2c) = iVar2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x1d0);
  lVar3 = (long)(*(int *)(param_1 + 0x1d0) * iVar2 * iVar1 * 2);
  *(long *)(param_1 + 0x38) = lVar3;
  *(int *)(param_1 + 0x40) = iVar1;
  *(int *)(param_1 + 0x44) = iVar2;
  *(undefined4 *)(param_1 + 0x48) = 1;
  uStack_14 = 0;
  FUN_10954da28(param_1 + 0x1f8,lVar3 + iVar2 * iVar1 * 2,&uStack_14);
  return;
}



/* Entry: 10954bf40; end: 10954c0d3;  */

undefined8 ** FUN_10954bf40(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  ulong uStack_120;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 uStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *apuStack_b8 [4];
  long alStack_98 [4];
  long alStack_78 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = param_1;
  FUN_10954c798();
  FUN_10954d19c(param_2,10);
  FUN_10954d8e4(alStack_78,param_2,2,0);
  FUN_10954d8e4(alStack_98,param_2,0xe,0);
  lVar9 = param_2[0x3f];
  uStack_d8 = 0;
  uStack_e0 = (ulong)(uint)(1.0 - (float)uStack_d0);
  lVar7 = (long)*(int *)((long)param_2 + 0x44) * (long)(int)param_2[8];
  if (0 < lVar7) {
    fVar17 = *(float *)(*param_2 + 0x30);
    puVar10 = (undefined4 *)(alStack_98[0] + 4);
    pfVar11 = (float *)(alStack_78[0] + 4);
    puVar6 = (undefined8 *)(lVar9 + param_2[7] * 4);
    do {
      fVar14 = *pfVar11;
      uVar15 = *puVar6;
      fVar16 = (float)uStack_e0;
      fVar12 = (float)func_0x000104bd3084(pfVar11[-1],fVar14,fVar17 + (float)puVar10[-1],*puVar10);
      *puVar6 = CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar16 + fVar14 * (float)uStack_d0,
                         (float)uVar15 * fVar16 + fVar12 * (float)uStack_d0);
      puVar10 = puVar10 + 2;
      pfVar11 = pfVar11 + 2;
      lVar7 = lVar7 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
    lVar9 = param_2[0x3f];
  }
  lVar7 = param_2[5];
  iVar1 = *(int *)((long)param_2 + 0x2c);
  lVar2 = param_2[6];
  lVar8 = param_2[4];
  ppuVar3 = apuStack_b8;
  lVar5 = 10;
  plVar4 = param_2;
  FUN_10954d8e4(ppuVar3,param_2,10,0);
  iVar1 = iVar1 * (int)lVar7 * (int)lVar2;
  if (0 < iVar1) {
    lVar7 = (long)iVar1;
    puVar6 = (undefined8 *)(lVar9 + lVar8 * 4);
    do {
      *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) * (float)uStack_e0 +
                         (float)((ulong)*apuStack_b8[0] >> 0x20) * (float)uStack_d0,
                         (float)*puVar6 * (float)uStack_e0 +
                         (float)*apuStack_b8[0] * (float)uStack_d0);
      lVar7 = lVar7 + -1;
      apuStack_b8[0] = apuStack_b8[0] + 1;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar3;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_e8 = FUN_10954c0d4;
  uStack_120 = 0;
  auVar13._0_8_ = NEON_scvtf(plVar4[1],4);
  auVar13._8_8_ = auVar13._0_8_;
  uStack_108 = 0;
  auVar13 = NEON_rev64(auVar13,4);
  iStack_118 = (int)((float)*(undefined8 *)(lVar5 + 0x10) * auVar13._0_4_);
  iStack_114 = (int)((float)((ulong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) * auVar13._4_4_);
  iStack_110 = (int)((float)*(undefined8 *)(lVar5 + 0x18) * auVar13._8_4_);
  iStack_10c = (int)((float)((ulong)*(undefined8 *)(lVar5 + 0x18) >> 0x20) * auVar13._12_4_);
  lStack_100 = lVar8;
  plStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_10954bdb0();
  if ((uStack_120 & 1) != 0) {
    func_0x0001053936ac(&uStack_120);
  }
  return ppuVar3;
}



/* Entry: 10954c0d4; end: 10954c163;  */

undefined8 FUN_10954c0d4(undefined8 param_1,long param_2,long param_3)

{
  undefined1 auVar1 [16];
  undefined **ppuStack_48;
  ulong uStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  ppuStack_48 = &PTR_FUN_110af0bb8;
  uStack_40 = 0;
  auVar1._0_8_ = NEON_scvtf(*(undefined8 *)(param_2 + 8),4);
  auVar1._8_8_ = auVar1._0_8_;
  uStack_28 = 0;
  auVar1 = NEON_rev64(auVar1,4);
  iStack_38 = (int)((float)*(undefined8 *)(param_3 + 0x10) * auVar1._0_4_);
  iStack_34 = (int)((float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) * auVar1._4_4_);
  iStack_30 = (int)((float)*(undefined8 *)(param_3 + 0x18) * auVar1._8_4_);
  iStack_2c = (int)((float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) * auVar1._12_4_);
  FUN_10954bdb0(param_1,param_2,&ppuStack_48);
  if ((uStack_40 & 1) != 0) {
    func_0x0001053936ac(&uStack_40);
  }
  return param_1;
}



/* Entry: 10954c164; end: 10954c797;  */

/* WARNING: Possible PIC construction at 0x00010954ccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954cfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954d1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954d31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954d608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954c238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010954d60c) */
/* WARNING: Removing unreachable block (ram,0x00010954d644) */
/* WARNING: Removing unreachable block (ram,0x00010954d64c) */
/* WARNING: Removing unreachable block (ram,0x00010954d658) */
/* WARNING: Removing unreachable block (ram,0x00010954d674) */
/* WARNING: Removing unreachable block (ram,0x00010954d684) */
/* WARNING: Removing unreachable block (ram,0x00010954d694) */
/* WARNING: Removing unreachable block (ram,0x00010954d698) */
/* WARNING: Removing unreachable block (ram,0x00010954d69c) */
/* WARNING: Removing unreachable block (ram,0x00010954d6b8) */
/* WARNING: Removing unreachable block (ram,0x00010954d6c4) */
/* WARNING: Removing unreachable block (ram,0x00010954d770) */
/* WARNING: Removing unreachable block (ram,0x00010954d820) */
/* WARNING: Removing unreachable block (ram,0x00010954d828) */
/* WARNING: Removing unreachable block (ram,0x00010954d848) */
/* WARNING: Removing unreachable block (ram,0x00010954d858) */
/* WARNING: Removing unreachable block (ram,0x00010954d85c) */
/* WARNING: Removing unreachable block (ram,0x00010954d860) */
/* WARNING: Removing unreachable block (ram,0x00010954d87c) */
/* WARNING: Removing unreachable block (ram,0x00010954d8dc) */
/* WARNING: Removing unreachable block (ram,0x00010954d8b0) */
/* WARNING: Removing unreachable block (ram,0x00010954d320) */
/* WARNING: Removing unreachable block (ram,0x00010954d34c) */
/* WARNING: Removing unreachable block (ram,0x00010954d360) */
/* WARNING: Removing unreachable block (ram,0x00010954d368) */
/* WARNING: Removing unreachable block (ram,0x00010954d384) */
/* WARNING: Removing unreachable block (ram,0x00010954d38c) */
/* WARNING: Removing unreachable block (ram,0x00010954d39c) */
/* WARNING: Removing unreachable block (ram,0x00010954d3ac) */
/* WARNING: Removing unreachable block (ram,0x00010954d3c8) */
/* WARNING: Removing unreachable block (ram,0x00010954d3d8) */
/* WARNING: Removing unreachable block (ram,0x00010954d3e8) */
/* WARNING: Removing unreachable block (ram,0x00010954d3fc) */
/* WARNING: Removing unreachable block (ram,0x00010954d404) */
/* WARNING: Removing unreachable block (ram,0x00010954d420) */
/* WARNING: Removing unreachable block (ram,0x00010954d428) */
/* WARNING: Removing unreachable block (ram,0x00010954d438) */
/* WARNING: Removing unreachable block (ram,0x00010954d448) */
/* WARNING: Removing unreachable block (ram,0x00010954d464) */
/* WARNING: Removing unreachable block (ram,0x00010954d474) */
/* WARNING: Removing unreachable block (ram,0x00010954d47c) */
/* WARNING: Removing unreachable block (ram,0x00010954d48c) */
/* WARNING: Removing unreachable block (ram,0x00010954d4c4) */
/* WARNING: Removing unreachable block (ram,0x00010954d4d4) */
/* WARNING: Removing unreachable block (ram,0x00010954d4e4) */
/* WARNING: Removing unreachable block (ram,0x00010954d524) */
/* WARNING: Removing unreachable block (ram,0x00010954d530) */
/* WARNING: Removing unreachable block (ram,0x00010954d544) */
/* WARNING: Removing unreachable block (ram,0x00010954d57c) */
/* WARNING: Removing unreachable block (ram,0x00010954d59c) */
/* WARNING: Removing unreachable block (ram,0x00010954d1f4) */
/* WARNING: Removing unreachable block (ram,0x00010954d208) */
/* WARNING: Removing unreachable block (ram,0x00010954d210) */
/* WARNING: Removing unreachable block (ram,0x00010954d234) */
/* WARNING: Removing unreachable block (ram,0x00010954d240) */
/* WARNING: Removing unreachable block (ram,0x00010954d258) */
/* WARNING: Removing unreachable block (ram,0x00010954d260) */
/* WARNING: Removing unreachable block (ram,0x00010954d280) */
/* WARNING: Removing unreachable block (ram,0x00010954d290) */
/* WARNING: Removing unreachable block (ram,0x00010954d2a8) */
/* WARNING: Removing unreachable block (ram,0x00010954d5a0) */
/* WARNING: Removing unreachable block (ram,0x00010954d5a8) */
/* WARNING: Removing unreachable block (ram,0x00010954d2c8) */
/* WARNING: Removing unreachable block (ram,0x00010954d30c) */
/* WARNING: Removing unreachable block (ram,0x00010954cfc0) */
/* WARNING: Removing unreachable block (ram,0x00010954cfe8) */
/* WARNING: Removing unreachable block (ram,0x00010954cff4) */
/* WARNING: Removing unreachable block (ram,0x00010954cff8) */
/* WARNING: Removing unreachable block (ram,0x00010954d000) */
/* WARNING: Removing unreachable block (ram,0x00010954d008) */
/* WARNING: Removing unreachable block (ram,0x00010954d00c) */
/* WARNING: Removing unreachable block (ram,0x00010954d014) */
/* WARNING: Removing unreachable block (ram,0x00010954d02c) */
/* WARNING: Removing unreachable block (ram,0x00010954d034) */
/* WARNING: Removing unreachable block (ram,0x00010954d048) */
/* WARNING: Removing unreachable block (ram,0x00010954d054) */
/* WARNING: Removing unreachable block (ram,0x00010954d058) */
/* WARNING: Removing unreachable block (ram,0x00010954d05c) */
/* WARNING: Removing unreachable block (ram,0x00010954ccf4) */
/* WARNING: Removing unreachable block (ram,0x00010954c23c) */
/* WARNING: Removing unreachable block (ram,0x00010954c270) */
/* WARNING: Removing unreachable block (ram,0x00010954c278) */
/* WARNING: Removing unreachable block (ram,0x00010954c284) */
/* WARNING: Removing unreachable block (ram,0x00010954c294) */
/* WARNING: Removing unreachable block (ram,0x00010954c2b8) */
/* WARNING: Removing unreachable block (ram,0x00010954c2d4) */
/* WARNING: Removing unreachable block (ram,0x00010954c2ec) */
/* WARNING: Removing unreachable block (ram,0x00010954c320) */
/* WARNING: Removing unreachable block (ram,0x00010954c32c) */
/* WARNING: Removing unreachable block (ram,0x00010954c350) */
/* WARNING: Removing unreachable block (ram,0x00010954c374) */
/* WARNING: Removing unreachable block (ram,0x00010954c404) */
/* WARNING: Removing unreachable block (ram,0x00010954c3bc) */
/* WARNING: Removing unreachable block (ram,0x00010954c414) */
/* WARNING: Removing unreachable block (ram,0x00010954c3c8) */
/* WARNING: Removing unreachable block (ram,0x00010954c3dc) */
/* WARNING: Removing unreachable block (ram,0x00010954c3e0) */
/* WARNING: Removing unreachable block (ram,0x00010954c3e4) */
/* WARNING: Removing unreachable block (ram,0x00010954c3e8) */
/* WARNING: Removing unreachable block (ram,0x00010954c3ec) */
/* WARNING: Removing unreachable block (ram,0x00010954c3f0) */
/* WARNING: Removing unreachable block (ram,0x00010954c400) */
/* WARNING: Removing unreachable block (ram,0x00010954c41c) */
/* WARNING: Removing unreachable block (ram,0x00010954c428) */
/* WARNING: Removing unreachable block (ram,0x00010954c438) */
/* WARNING: Removing unreachable block (ram,0x00010954c440) */
/* WARNING: Removing unreachable block (ram,0x00010954c448) */
/* WARNING: Removing unreachable block (ram,0x00010954c44c) */
/* WARNING: Removing unreachable block (ram,0x00010954c450) */
/* WARNING: Removing unreachable block (ram,0x00010954c454) */
/* WARNING: Removing unreachable block (ram,0x00010954c464) */
/* WARNING: Removing unreachable block (ram,0x00010954c474) */
/* WARNING: Removing unreachable block (ram,0x00010954c484) */
/* WARNING: Removing unreachable block (ram,0x00010954c488) */
/* WARNING: Removing unreachable block (ram,0x00010954c4a0) */
/* WARNING: Removing unreachable block (ram,0x00010954c4a4) */
/* WARNING: Removing unreachable block (ram,0x00010954c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010954c4ac) */
/* WARNING: Removing unreachable block (ram,0x00010954c4bc) */
/* WARNING: Removing unreachable block (ram,0x00010954ce30) */

undefined *** FUN_10954c164(float param_1,undefined ***param_2,undefined ***param_3,float *param_4)

{
  int *piVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 **ppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  undefined *puVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  ulong uVar22;
  undefined **ppuVar23;
  ulong uVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  undefined **unaff_x22;
  undefined ***pppuVar29;
  undefined ***unaff_x23;
  undefined **ppuVar30;
  ulong unaff_x24;
  undefined8 ******ppppppuVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 unaff_d9;
  undefined1 auStack_540 [80];
  int iStack_4f0;
  undefined **appuStack_460 [4];
  undefined8 uStack_440;
  undefined8 *****pppppuStack_3b0;
  code *pcStack_3a8;
  undefined8 *puStack_3a0;
  long *plStack_398;
  undefined1 auStack_390 [8];
  uint uStack_388;
  uint uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  long lStack_358;
  uint *puStack_350;
  long *plStack_348;
  long alStack_340 [2];
  undefined4 auStack_330 [2];
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined4 auStack_318 [2];
  float *pfStack_310;
  undefined8 uStack_308;
  uint uStack_300;
  undefined4 uStack_2fc;
  float *pfStack_2f8;
  long lStack_2f0;
  float fStack_2e0;
  float fStack_2dc;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined8 uStack_2bc;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_278;
  undefined1 *puStack_270;
  undefined8 uStack_268;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  uint uStack_238;
  int iStack_234;
  undefined1 *puStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_200;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined *apuStack_1e8 [2];
  long lStack_1d8;
  undefined8 uStack_1c0;
  undefined8 *****pppppuStack_160;
  code *pcStack_158;
  undefined1 auStack_150 [8];
  float *pfStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined ***pppuStack_128;
  undefined ***pppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  long lStack_a0;
  
  ppuVar10 = (undefined8 **)auStack_150;
  ppppppuVar31 = (undefined8 ******)&stack0xfffffffffffffff0;
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar12 = param_2;
  pppuVar11 = param_3;
  if (((ulong)param_2[0x42] & 1) == 0) {
    *(int *)((long)param_2 + 0x1dc) = *(int *)((long)param_2 + 0x1dc) + 1;
    ppuVar30 = param_2[0x37];
    ppuStack_118 = param_2[0x38];
    if (ppuVar30 != ppuStack_118) {
      uStack_138 = 0x8000000000000000;
      uStack_140 = 0x8000000000000000;
      pfStack_148 = param_4;
      pppuStack_128 = param_3;
      pppuStack_120 = param_2;
      ppuStack_110 = ppuVar30;
      FUN_10954c798(*(float *)ppuVar30 * *(float *)(param_2 + 0x3c),param_2,param_3);
      FUN_10954d19c(param_2,0);
      pppuVar11 = &ppuStack_108;
      lVar17 = 0x10;
      uVar14 = 0;
      uVar32 = 0x10954c23c;
      goto FUN_10954d8e4;
    }
    unaff_d9 = 0;
    uVar32 = NEON_scvtf(*(undefined8 *)((long)param_2 + 0x1d4),4);
    uVar37 = NEON_rev64(CONCAT44((float)((ulong)uVar32 >> 0x20) * 0.5,(float)uVar32 * 0.5),4);
    fVar34 = (float)*(undefined8 *)((long)param_2 + 0x1e4) + (0.5 - (float)uVar37);
    fVar28 = (float)((ulong)*(undefined8 *)((long)param_2 + 0x1e4) >> 0x20) +
             (0.5 - (float)((ulong)uVar37 >> 0x20));
    *(ulong *)((long)param_2 + 0x1e4) = CONCAT44(fVar28,fVar34);
    ppuVar30 = *param_2;
    fVar33 = 1.0 - *(float *)(ppuVar30 + 9);
    fVar36 = *(float *)(ppuVar30 + 9) + 1.0;
    if (0.0 <= fVar36) {
      fVar36 = 0.0;
    }
    if (fVar33 <= 0.0) {
      fVar33 = fVar36;
    }
    *(float *)(param_2 + 0x3c) = fVar33;
    unaff_x23 = &ppuStack_108;
    ppuStack_108 = &PTR_FUN_110af0bb8;
    ppuStack_100 = (undefined **)0x0;
    uStack_e8 = 0;
    fVar36 = (float)*(undefined8 *)((long)param_2 + 0x1ec);
    fVar34 = fVar34 / fVar36;
    fVar38 = (float)((ulong)*(undefined8 *)((long)param_2 + 0x1ec) >> 0x20);
    fVar28 = fVar28 / fVar38;
    uVar32 = NEON_rev64(uVar32,4);
    fVar36 = ((((float)uVar32 * fVar33) / fVar36) / (*(float *)(ppuVar30 + 5) + 1.0)) * 0.5;
    fVar33 = ((((float)((ulong)uVar32 >> 0x20) * fVar33) / fVar38) /
             (*(float *)(ppuVar30 + 5) + 1.0)) * 0.5;
    uVar22 = NEON_smax(CONCAT44((int)(fVar28 - fVar33),(int)(fVar34 - fVar36)),0,4);
    uVar32 = NEON_rev64(CONCAT44((int)((ulong)param_3[1] >> 0x20) + -1,(int)param_3[1] + -1),4);
    uVar32 = NEON_smin(uVar32,CONCAT44((int)(fVar28 + fVar33),(int)(fVar34 + fVar36)),4);
    uStack_f8._0_4_ = (int)uVar22;
    uStack_f0 = NEON_smax(CONCAT44((int)((ulong)uVar32 >> 0x20) - (int)(uVar22 >> 0x20),
                                   (int)uVar32 - (int)uStack_f8),0,4);
    iVar21 = *(int *)(ppuVar30 + 0xc);
    iVar35 = (int)((ulong)uStack_f0 >> 0x20);
    bVar8 = (int)uStack_f0 < iVar21;
    pppuVar29 = (undefined ***)(ulong)(!bVar8 && iVar21 <= iVar35);
    uStack_f8 = uVar22;
    if (bVar8 || iVar35 < iVar21) {
      *(undefined1 *)(param_2 + 0x42) = 1;
    }
    else {
      param_4[4] = (float)((uint)param_4[4] | 1);
      uVar13 = *(ulong *)(param_4 + 8);
      if (uVar13 == 0) {
        uVar13 = *(ulong *)(param_4 + 2);
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        FUN_1093492b0();
        *(ulong *)(param_4 + 8) = uVar13;
        uVar22 = uStack_f8;
      }
      uStack_f8 = uVar22;
      fVar33 = (float)(int)uStack_f8;
      *(float *)(uVar13 + 0x10) = fVar33 / (float)*(int *)((long)param_3 + 0xc);
      param_4[4] = (float)((uint)param_4[4] | 1);
      uVar22 = *(ulong *)(param_4 + 8);
      if (uVar22 == 0) {
        uVar22 = *(ulong *)(param_4 + 2);
        if ((uVar22 & 1) != 0) {
          uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
        }
        FUN_1093492b0();
        *(ulong *)(param_4 + 8) = uVar22;
      }
      *(float *)(uVar22 + 0x14) = (float)uStack_f8._4_4_ / (float)*(int *)(param_3 + 1);
      param_4[4] = (float)((uint)param_4[4] | 1);
      uVar22 = *(ulong *)(param_4 + 8);
      if (uVar22 == 0) {
        uVar22 = *(ulong *)(param_4 + 2);
        if ((uVar22 & 1) != 0) {
          uVar22 = *(ulong *)(uVar22 & 0xfffffffffffffffe);
        }
        FUN_1093492b0();
        *(ulong *)(param_4 + 8) = uVar22;
      }
      *(float *)(uVar22 + 0x18) = (float)(int)uStack_f0 / (float)*(int *)((long)param_3 + 0xc);
      param_4[4] = (float)((uint)param_4[4] | 1);
      uVar13 = *(ulong *)(param_4 + 8);
      if (uVar13 == 0) {
        uVar13 = *(ulong *)(param_4 + 2);
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulong *)(uVar13 & 0xfffffffffffffffe);
        }
        FUN_1093492b0();
        *(ulong *)(param_4 + 8) = uVar13;
      }
      uVar22 = (ulong)(uint)((float)uStack_f0._4_4_ / (float)*(int *)(param_3 + 1));
      *(float *)(uVar13 + 0x1c) = (float)uStack_f0._4_4_ / (float)*(int *)(param_3 + 1);
      param_4[10] = 0.0;
      pppuVar11 = &ppuStack_108;
      func_0x00010954be80();
      iVar21 = *(int *)((long)*param_2 + 0x54);
      iVar35 = 0;
      if (iVar21 != 0) {
        iVar35 = *(int *)((long)param_2 + 0x1dc) / iVar21;
      }
      if (*(int *)((long)param_2 + 0x1dc) == iVar35 * iVar21) {
        uVar22 = (ulong)*(uint *)(*param_2 + 7);
        FUN_10954bf40();
        pppuVar12 = param_2;
        pppuVar11 = param_3;
      }
    }
    param_1 = (float)uVar22;
    if (((ulong)ppuStack_100 & 1) != 0) {
      pppuVar12 = &ppuStack_100;
      func_0x0001053936ac();
    }
  }
  else {
    pppuVar29 = (undefined ***)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return pppuVar29;
  }
  ___stack_chk_fail();
  if (((ulong)ppuStack_100 & 1) != 0) {
    func_0x0001053936ac(unaff_x23 + 1);
  }
  __Unwind_Resume();
  uStack_1c0 = unaff_d9;
  pppppuStack_160 = ppppppuVar31;
  pcStack_158 = FUN_10954c798;
  ppuVar10 = &puStack_3a0;
  lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar34 = (param_1 * (float)*(int *)(pppuVar12 + 0x3b)) / *(float *)((long)pppuVar12 + 0x1ec);
  iVar26 = (int)(*(float *)((long)pppuVar12 + 0x1e4) / *(float *)((long)pppuVar12 + 0x1ec) -
                fVar34 * 0.5);
  fVar33 = (param_1 * (float)*(int *)((long)pppuVar12 + 0x1d4)) / *(float *)(pppuVar12 + 0x3e);
  fVar28 = (float)(int)(*(float *)(pppuVar12 + 0x3d) / *(float *)(pppuVar12 + 0x3e) - fVar33 * 0.5);
  iVar21 = iVar26 + (int)fVar34;
  fVar33 = (float)((int)fVar28 + (int)fVar33);
  unaff_x22 = (undefined **)(ulong)(uint)fVar33;
  fVar34 = *(float *)(pppuVar11 + 1);
  unaff_x24 = (ulong)(uint)fVar34;
  iVar16 = *(int *)((long)pppuVar11 + 0xc);
  iVar35 = iVar16;
  if (iVar26 <= iVar16) {
    iVar35 = iVar26;
  }
  uStack_278._0_4_ = 0;
  if (-1 < iVar26) {
    uStack_278._0_4_ = iVar35;
  }
  iVar35 = iVar16;
  if (iVar21 <= iVar16) {
    iVar35 = iVar21;
  }
  uStack_278._4_4_ = 0;
  if (-1 < iVar21) {
    uStack_278._4_4_ = iVar35;
  }
  fVar36 = fVar34;
  if ((int)fVar28 <= (int)fVar34) {
    fVar36 = fVar28;
  }
  fStack_2e0 = 0.0;
  if (-1 < (int)fVar28) {
    fStack_2e0 = fVar36;
  }
  auStack_390._0_4_ = 0x42ff0000;
  fVar36 = fVar34;
  if ((int)fVar33 <= (int)fVar34) {
    fVar36 = fVar33;
  }
  uStack_384 = 0;
  uStack_380 = 0;
  stack0xfffffffffffffc74 = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_37c = 0;
  uStack_378 = 0;
  uStack_364 = 0;
  uStack_36c = 0;
  uStack_368 = 0;
  lStack_358 = 0;
  uStack_360 = 0;
  uStack_35c = 0;
  fStack_2dc = 0.0;
  if (-1 < (int)fVar33) {
    fStack_2dc = fVar36;
  }
  puStack_350 = &uStack_388;
  alStack_340[0] = 0;
  alStack_340[1] = 0;
  plStack_348 = alStack_340;
  FUN_109a84930(&uStack_238);
  uStack_248 = 0;
  lStack_258 = CONCAT44(lStack_258._4_4_,0x1010000);
  uStack_278 = (undefined **)CONCAT44(uStack_278._4_4_,0x2010000);
  uStack_268 = 0;
  uStack_2d8._0_4_ = 0;
  uStack_2d8._4_4_ = 0;
  fStack_2e0 = 0.0;
  fStack_2dc = 0.0;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2d0 = 0;
  uStack_2cc = 0;
  puStack_270 = auStack_390;
  puStack_250 = (undefined8 *)&uStack_238;
  FUN_109a4a0a4(&lStack_258,&uStack_278,-(int)fVar28 & (-(int)fVar28 >> 0x1f ^ 0xffffffffU),
                (int)fVar33 - (int)fVar34 & ((int)fVar33 - (int)fVar34 >> 0x1f ^ 0xffffffffU),
                -iVar26 & (-iVar26 >> 0x1f ^ 0xffffffffU),
                iVar21 - iVar16 & (iVar21 - iVar16 >> 0x1f ^ 0xffffffffU),1,&fStack_2e0);
  if (lStack_200 != 0) {
    piVar1 = (int *)(lStack_200 + 0x14);
    do {
      iVar21 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar21 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar21 + -1 == 0) {
      func_0x000109a848d4(&uStack_238);
    }
  }
  param_4 = &fStack_2e0;
  lStack_200 = 0;
  uStack_220 = 0;
  lStack_228 = 0;
  uStack_210 = 0;
  uStack_218 = 0;
  if (0 < iStack_234) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_1f8 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < iStack_234);
  }
  param_3 = (undefined ***)((long)pppuVar12 + 0x1d4);
  if (ppuStack_1f0 != apuStack_1e8 && ppuStack_1f0 != (undefined **)0x0) {
    _free(ppuStack_1f0[-1]);
  }
  uStack_238 = 0x1010000;
  puStack_230 = auStack_390;
  lStack_228 = 0;
  fStack_2e0 = 9.477423e-38;
  uStack_2d8._0_4_ = SUB84(auStack_390,0);
  uStack_2d8._4_4_ = (int)((ulong)auStack_390 >> 0x20);
  uStack_2d0 = 0;
  uStack_2cc = 0;
  lStack_258 = NEON_rev64(*param_3,4);
  uStack_2d8 = auStack_390;
  FUN_109b0f718(0,0,&uStack_238,&fStack_2e0,&lStack_258,3);
  func_0x00010954d990(&lStack_258,pppuVar12,4,0);
  ppuVar30 = &PTR_PTR_1132dac38;
  if ((undefined **)(*pppuVar12)[3] != (undefined **)0x0) {
    ppuVar30 = (undefined **)(*pppuVar12)[3];
  }
  puVar18 = ppuVar30[3];
  uVar14 = (uint)auStack_390._0_4_ >> 3 & 0x1ff;
  if (uVar14 == 3) {
    if (0 < (int)uStack_388) {
      iVar21 = 0;
      uVar22 = 0;
      do {
        if (0 < (int)uStack_384) {
          uVar13 = 0;
          lVar17 = *plStack_348;
          iVar35 = iVar21;
          do {
            lVar15 = 0;
            pbVar2 = (byte *)(CONCAT44(uStack_37c,uStack_380) + lVar17 * uVar22 + uVar13 * 4);
            bVar4 = *pbVar2;
            bVar5 = pbVar2[1];
            bVar6 = pbVar2[2];
            iVar16 = iVar35;
            do {
              *(undefined4 *)(lStack_258 + (long)iVar16 * 4) =
                   *(undefined4 *)
                    (puVar18 +
                    lVar15 + (long)((float)(int)((float)bVar4 / 8.0) +
                                    (float)(int)((float)bVar5 / 8.0) * 32.0 +
                                   (float)(int)((float)bVar6 / 8.0) * 1024.0) * 0x28);
              lVar15 = lVar15 + 4;
              iVar16 = iVar16 + uStack_388 * uStack_384;
            } while (lVar15 != 0x28);
            uVar13 = uVar13 + 1;
            iVar35 = iVar35 + 1;
          } while (uVar13 != uStack_384);
        }
        uVar22 = uVar22 + 1;
        iVar21 = iVar21 + uStack_384;
      } while (uVar22 != uStack_388);
    }
  }
  else if ((uVar14 == 2) && (0 < (int)uStack_388)) {
    iVar21 = 0;
    uVar22 = 0;
    do {
      if (0 < (int)uStack_384) {
        uVar13 = 0;
        lVar17 = *plStack_348;
        iVar35 = iVar21;
        do {
          lVar15 = 0;
          pbVar2 = (byte *)(CONCAT44(uStack_37c,uStack_380) + lVar17 * uVar22 + uVar13 * 3);
          bVar4 = *pbVar2;
          bVar5 = pbVar2[1];
          bVar6 = pbVar2[2];
          iVar16 = iVar35;
          do {
            *(undefined4 *)(lStack_258 + (long)iVar16 * 4) =
                 *(undefined4 *)
                  (puVar18 +
                  lVar15 + (long)((float)(int)((float)bVar4 / 8.0) +
                                  (float)(int)((float)bVar5 / 8.0) * 32.0 +
                                 (float)(int)((float)bVar6 / 8.0) * 1024.0) * 0x28);
            lVar15 = lVar15 + 4;
            iVar16 = iVar16 + uStack_388 * uStack_384;
          } while (lVar15 != 0x28);
          uVar13 = uVar13 + 1;
          iVar35 = iVar35 + 1;
        } while (uVar13 != uStack_384);
      }
      uVar22 = uVar22 + 1;
      iVar21 = iVar21 + uStack_384;
    } while (uVar22 != uStack_388);
  }
  FUN_10954db34(pppuVar12);
  uVar14 = *(uint *)(pppuVar12 + 0x15);
  unaff_x23 = (undefined ***)(ulong)uVar14;
  param_2 = (undefined ***)&uStack_278;
  pppuVar11 = pppuVar12;
  func_0x00010954d990(param_2,pppuVar12,3,0);
  ppuVar30 = uStack_278;
  iVar21 = (int)pppuVar11;
  ppppppuVar31 = &pppppuStack_160;
  if ((int)uVar14 < 1) {
    if (*(char *)(*pppuVar12 + 8) == '\x01') {
      fStack_2e0 = 127.5;
      uStack_2d8._4_4_ = 0;
      uStack_2d0 = 0;
      fStack_2dc = 0.0;
      uStack_2d8._0_4_ = 0;
      puStack_2a0 = &uStack_2d8;
      uStack_2c4 = 0;
      uStack_2c0 = 0;
      uStack_2cc = 0;
      uStack_2c8 = 0;
      uStack_2b4 = 0;
      uStack_2bc = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      uStack_2ac = 0;
      puStack_3a0 = &uStack_290;
      uStack_290 = 0;
      uStack_288 = 0;
      uStack_238 = 0x1010000;
      puStack_230 = auStack_390;
      lStack_228 = 0;
      uStack_300 = 0x2010000;
      lStack_2f0 = 0;
      plStack_398 = alStack_340;
      pfStack_2f8 = &fStack_2e0;
      puStack_298 = puStack_3a0;
      FUN_109ac9fc8(&uStack_238,&uStack_300,0xb,0);
      param_3 = (undefined ***)0x0;
      unaff_x22 = apuStack_1e8;
      unaff_x24 = 1;
      func_0x00010954d990(&uStack_300,pppuVar12,6,0);
      FUN_10936ff7c(&uStack_238,(undefined4)uStack_2d8,(long)uStack_2d8._4_4_,5,
                    CONCAT44(uStack_2fc,uStack_300),(long)uStack_2d8._4_4_ << 2);
      uStack_308 = 0;
      auStack_318[0] = 0x1010000;
      auStack_330[0] = 0x2010000;
      uStack_320 = 0;
      puStack_328 = (undefined8 *)&uStack_238;
      pfStack_310 = &fStack_2e0;
      FUN_109aec0d0(0x3f40101020000000,0,auStack_318,auStack_330,5,1,0,3,4);
      if (lStack_200 != 0) {
        piVar1 = (int *)(lStack_200 + 0x14);
        do {
          iVar21 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar21 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar21 + -1 == 0) {
          func_0x000109a848d4(&uStack_238);
        }
      }
      lStack_200 = 0;
      uStack_220 = 0;
      lStack_228 = 0;
      uStack_210 = 0;
      uStack_218 = 0;
      if (0 < iStack_234) {
        lVar17 = 0;
        do {
          *(undefined4 *)(lStack_1f8 + lVar17 * 4) = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < iStack_234);
      }
      if (ppuStack_1f0 != unaff_x22 && ppuStack_1f0 != (undefined **)0x0) {
        _free(ppuStack_1f0[-1]);
      }
      param_4 = (float *)CONCAT44(uStack_2fc,uStack_300);
      uVar13 = lStack_2f0 * (long)pfStack_2f8;
      uVar22 = (ulong)-(uStack_300 >> 2) & 3;
      if ((long)uVar13 <= (long)uVar22) {
        uVar22 = uVar13;
      }
      uVar3 = uVar13;
      if ((uStack_300 & 3) == 0) {
        uVar3 = uVar22;
      }
      uVar9 = uVar13 - uVar3;
      uVar22 = uVar9 + 3;
      if ((long)uVar3 <= (long)uVar13) {
        uVar22 = uVar9;
      }
      pfVar19 = param_4;
      ppuVar30 = uStack_278;
      uVar24 = uVar3;
      if (0 < (long)uVar3) {
        do {
          *pfVar19 = *pfVar19 * *(float *)ppuVar30;
          uVar24 = uVar24 - 1;
          pfVar19 = pfVar19 + 1;
          ppuVar30 = (undefined **)((long)ppuVar30 + 4);
        } while (uVar24 != 0);
      }
      lVar17 = (uVar22 & 0xfffffffffffffffc) + uVar3;
      if (3 < (long)uVar9) {
        puVar25 = (undefined8 *)((long)uStack_278 + uVar3 * 4);
        uVar24 = uVar3;
        pfVar19 = param_4 + uVar3;
        do {
          uVar32 = *puVar25;
          *(ulong *)(pfVar19 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) *
                        (float)((ulong)puVar25[1] >> 0x20),
                        (float)*(undefined8 *)(pfVar19 + 2) * (float)puVar25[1]);
          *(ulong *)pfVar19 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar19 >> 0x20) *
                        (float)((ulong)uVar32 >> 0x20),(float)*(undefined8 *)pfVar19 * (float)uVar32
                       );
          uVar24 = uVar24 + 4;
          puVar25 = puVar25 + 2;
          pfVar19 = pfVar19 + 4;
        } while ((long)uVar24 < lVar17);
      }
      if (lVar17 < (long)uVar13) {
        lVar17 = uVar9 - (uVar22 & 0xfffffffffffffffc);
        pfVar19 = (float *)((long)uStack_278 + (uVar3 + ((long)uVar22 >> 2) * 4) * 4);
        pfVar20 = param_4 + uVar3 + ((long)uVar22 >> 2) * 4;
        do {
          *pfVar20 = *pfVar20 * *pfVar19;
          lVar17 = lVar17 + -1;
          pfVar19 = pfVar19 + 1;
          pfVar20 = pfVar20 + 1;
        } while (lVar17 != 0);
      }
      pppuVar11 = (undefined ***)&uStack_238;
      lVar17 = 10;
      uVar32 = 0x10954cfc0;
      param_2 = pppuVar12;
    }
    else {
      if (lStack_358 != 0) {
        piVar1 = (int *)(lStack_358 + 0x14);
        do {
          iVar35 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar35 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar35 + -1 == 0) {
          param_2 = (undefined ***)auStack_390;
          func_0x000109a848d4();
        }
      }
      lStack_358 = 0;
      uStack_378 = 0;
      uStack_374 = 0;
      uStack_380 = 0;
      uStack_37c = 0;
      uStack_368 = 0;
      uStack_364 = 0;
      uStack_370 = 0;
      uStack_36c = 0;
      if (0 < (int)auStack_390._4_4_) {
        lVar17 = 0;
        do {
          puStack_350[lVar17] = 0;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)auStack_390._4_4_);
      }
      if (plStack_348 != alStack_340 && plStack_348 != (long *)0x0) {
        param_2 = (undefined ***)plStack_348[-1];
        _free();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1d8) {
        return param_2;
      }
      ___stack_chk_fail();
      if (iVar21 != 0) {
        func_0x000104bd46a0();
        func_0x00010567aa40(&uStack_238);
        func_0x00010567aa40(&fStack_2e0);
        func_0x00010567aa40(auStack_390);
      }
      __Unwind_Resume();
      ppuVar10 = (undefined8 **)auStack_540;
      pcStack_3a8 = FUN_10954d19c;
      ppppppuVar31 = &pppppuStack_3b0;
      uStack_440 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      pppuVar11 = appuStack_460;
      lVar17 = 0xc;
      uVar14 = 0;
      uVar32 = 0x10954d1f4;
      iStack_4f0 = iVar21;
      pppppuStack_3b0 = &pppppuStack_160;
    }
  }
  else {
    uVar27 = 0;
    do {
      func_0x00010954d990(&uStack_238,pppuVar12,5,uVar27);
      pfVar19 = (float *)CONCAT44(iStack_234,uStack_238);
      uVar13 = lStack_228 * (long)puStack_230;
      uVar22 = (ulong)-(uStack_238 >> 2) & 3;
      if ((long)uVar13 <= (long)uVar22) {
        uVar22 = uVar13;
      }
      uVar3 = uVar13;
      if ((uStack_238 & 3) == 0) {
        uVar3 = uVar22;
      }
      uVar9 = uVar13 - uVar3;
      uVar22 = uVar9 + 3;
      if ((long)uVar3 <= (long)uVar13) {
        uVar22 = uVar9;
      }
      pfVar20 = pfVar19;
      ppuVar23 = ppuVar30;
      uVar24 = uVar3;
      if (0 < (long)uVar3) {
        do {
          *pfVar20 = *pfVar20 * *(float *)ppuVar23;
          uVar24 = uVar24 - 1;
          pfVar20 = pfVar20 + 1;
          ppuVar23 = (undefined **)((long)ppuVar23 + 4);
        } while (uVar24 != 0);
      }
      lVar17 = (uVar22 & 0xfffffffffffffffc) + uVar3;
      if (3 < (long)uVar9) {
        puVar25 = (undefined8 *)((long)ppuVar30 + uVar3 * 4);
        uVar24 = uVar3;
        pfVar20 = pfVar19 + uVar3;
        do {
          uVar32 = *puVar25;
          *(ulong *)(pfVar20 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20) *
                        (float)((ulong)puVar25[1] >> 0x20),
                        (float)*(undefined8 *)(pfVar20 + 2) * (float)puVar25[1]);
          *(ulong *)pfVar20 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar20 >> 0x20) *
                        (float)((ulong)uVar32 >> 0x20),(float)*(undefined8 *)pfVar20 * (float)uVar32
                       );
          uVar24 = uVar24 + 4;
          puVar25 = puVar25 + 2;
          pfVar20 = pfVar20 + 4;
        } while ((long)uVar24 < lVar17);
      }
      if (lVar17 < (long)uVar13) {
        lVar17 = uVar9 - (uVar22 & 0xfffffffffffffffc);
        pfVar19 = pfVar19 + uVar3 + ((long)uVar22 >> 2) * 4;
        pfVar20 = (float *)((long)ppuVar30 + (uVar3 + ((long)uVar22 >> 2) * 4) * 4);
        do {
          *pfVar19 = *pfVar19 * *pfVar20;
          lVar17 = lVar17 + -1;
          pfVar19 = pfVar19 + 1;
          pfVar20 = pfVar20 + 1;
        } while (lVar17 != 0);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar14);
    param_3 = (undefined ***)0x0;
    pppuVar11 = (undefined ***)&uStack_238;
    lVar17 = 10;
    uVar14 = 0;
    uVar32 = 0x10954ccf4;
    ppuVar10 = &puStack_3a0;
    param_2 = pppuVar12;
    unaff_x22 = ppuVar30;
  }
FUN_10954d8e4:
  *(ulong *)((long)ppuVar10 + -0x40) = unaff_x24;
  *(undefined ****)((long)ppuVar10 + -0x38) = unaff_x23;
  *(undefined ***)((long)ppuVar10 + -0x30) = unaff_x22;
  *(float **)((long)ppuVar10 + -0x28) = param_4;
  *(undefined ****)((long)ppuVar10 + -0x20) = param_3;
  *(undefined ****)((long)ppuVar10 + -0x18) = param_2;
  *(undefined8 *******)((long)ppuVar10 + -0x10) = ppppppuVar31;
  *(undefined8 *)((long)ppuVar10 + -8) = uVar32;
  if ((uint)lVar17 < 2) {
    pppuVar29 = param_2 + 0x3f;
    pppuVar12 = pppuVar11;
  }
  else {
    ppuVar30 = *param_2;
    *(uint *)(ppuVar30 + 2) = *(uint *)(ppuVar30 + 2) | 2;
    pppuVar12 = (undefined ***)ppuVar30[4];
    if (pppuVar12 == (undefined ***)0x0) {
      pppuVar12 = (undefined ***)ppuVar30[1];
      if (((ulong)pppuVar12 & 1) != 0) {
        pppuVar12 = *(undefined ****)((ulong)pppuVar12 & 0xfffffffffffffffe);
      }
      FUN_10934f79c();
      ppuVar30[4] = (undefined *)pppuVar12;
    }
    pppuVar29 = pppuVar12 + 3;
  }
  iVar21 = *(int *)(param_2 + lVar17 * 3 + 5);
  iVar35 = *(int *)((long)param_2 + lVar17 * 0x18 + 0x2c);
  *pppuVar11 = (undefined **)
               ((long)*pppuVar29 +
               (long)(int)(iVar21 * uVar14 * iVar35) * 8 + (long)param_2[lVar17 * 3 + 4] * 4);
  pppuVar11[1] = (undefined **)(long)iVar21;
  pppuVar11[2] = (undefined **)(long)iVar35;
  return pppuVar12;
}



/* Entry: 10954c798; end: 10954d19b;  */

/* WARNING: Possible PIC construction at 0x00010954ccf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954cfbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954d1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954d31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010954d608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010954d320) */
/* WARNING: Removing unreachable block (ram,0x00010954d34c) */
/* WARNING: Removing unreachable block (ram,0x00010954d360) */
/* WARNING: Removing unreachable block (ram,0x00010954d368) */
/* WARNING: Removing unreachable block (ram,0x00010954d384) */
/* WARNING: Removing unreachable block (ram,0x00010954d38c) */
/* WARNING: Removing unreachable block (ram,0x00010954d39c) */
/* WARNING: Removing unreachable block (ram,0x00010954d3ac) */
/* WARNING: Removing unreachable block (ram,0x00010954d3c8) */
/* WARNING: Removing unreachable block (ram,0x00010954d3d8) */
/* WARNING: Removing unreachable block (ram,0x00010954d3e8) */
/* WARNING: Removing unreachable block (ram,0x00010954d3fc) */
/* WARNING: Removing unreachable block (ram,0x00010954d404) */
/* WARNING: Removing unreachable block (ram,0x00010954d420) */
/* WARNING: Removing unreachable block (ram,0x00010954d428) */
/* WARNING: Removing unreachable block (ram,0x00010954d438) */
/* WARNING: Removing unreachable block (ram,0x00010954d448) */
/* WARNING: Removing unreachable block (ram,0x00010954d464) */
/* WARNING: Removing unreachable block (ram,0x00010954d474) */
/* WARNING: Removing unreachable block (ram,0x00010954d47c) */
/* WARNING: Removing unreachable block (ram,0x00010954d48c) */
/* WARNING: Removing unreachable block (ram,0x00010954d4c4) */
/* WARNING: Removing unreachable block (ram,0x00010954d4d4) */
/* WARNING: Removing unreachable block (ram,0x00010954d4e4) */
/* WARNING: Removing unreachable block (ram,0x00010954d524) */
/* WARNING: Removing unreachable block (ram,0x00010954d530) */
/* WARNING: Removing unreachable block (ram,0x00010954d544) */
/* WARNING: Removing unreachable block (ram,0x00010954d57c) */
/* WARNING: Removing unreachable block (ram,0x00010954d59c) */
/* WARNING: Removing unreachable block (ram,0x00010954d1f4) */
/* WARNING: Removing unreachable block (ram,0x00010954d208) */
/* WARNING: Removing unreachable block (ram,0x00010954d210) */
/* WARNING: Removing unreachable block (ram,0x00010954d234) */
/* WARNING: Removing unreachable block (ram,0x00010954d240) */
/* WARNING: Removing unreachable block (ram,0x00010954d258) */
/* WARNING: Removing unreachable block (ram,0x00010954d260) */
/* WARNING: Removing unreachable block (ram,0x00010954d280) */
/* WARNING: Removing unreachable block (ram,0x00010954d290) */
/* WARNING: Removing unreachable block (ram,0x00010954d2a8) */
/* WARNING: Removing unreachable block (ram,0x00010954d5a0) */
/* WARNING: Removing unreachable block (ram,0x00010954d5a8) */
/* WARNING: Removing unreachable block (ram,0x00010954d2c8) */
/* WARNING: Removing unreachable block (ram,0x00010954d30c) */
/* WARNING: Removing unreachable block (ram,0x00010954cfc0) */
/* WARNING: Removing unreachable block (ram,0x00010954cfe8) */
/* WARNING: Removing unreachable block (ram,0x00010954cff4) */
/* WARNING: Removing unreachable block (ram,0x00010954cff8) */
/* WARNING: Removing unreachable block (ram,0x00010954d000) */
/* WARNING: Removing unreachable block (ram,0x00010954d008) */
/* WARNING: Removing unreachable block (ram,0x00010954d00c) */
/* WARNING: Removing unreachable block (ram,0x00010954d014) */
/* WARNING: Removing unreachable block (ram,0x00010954d02c) */
/* WARNING: Removing unreachable block (ram,0x00010954d034) */
/* WARNING: Removing unreachable block (ram,0x00010954d048) */
/* WARNING: Removing unreachable block (ram,0x00010954d054) */
/* WARNING: Removing unreachable block (ram,0x00010954d058) */
/* WARNING: Removing unreachable block (ram,0x00010954d05c) */
/* WARNING: Removing unreachable block (ram,0x00010954ccf4) */
/* WARNING: Removing unreachable block (ram,0x00010954d60c) */
/* WARNING: Removing unreachable block (ram,0x00010954d644) */
/* WARNING: Removing unreachable block (ram,0x00010954d64c) */
/* WARNING: Removing unreachable block (ram,0x00010954d658) */
/* WARNING: Removing unreachable block (ram,0x00010954d674) */
/* WARNING: Removing unreachable block (ram,0x00010954d684) */
/* WARNING: Removing unreachable block (ram,0x00010954d694) */
/* WARNING: Removing unreachable block (ram,0x00010954d698) */
/* WARNING: Removing unreachable block (ram,0x00010954d69c) */
/* WARNING: Removing unreachable block (ram,0x00010954d6b8) */
/* WARNING: Removing unreachable block (ram,0x00010954d6c4) */
/* WARNING: Removing unreachable block (ram,0x00010954d770) */
/* WARNING: Removing unreachable block (ram,0x00010954d820) */
/* WARNING: Removing unreachable block (ram,0x00010954d828) */
/* WARNING: Removing unreachable block (ram,0x00010954d848) */
/* WARNING: Removing unreachable block (ram,0x00010954d858) */
/* WARNING: Removing unreachable block (ram,0x00010954d85c) */
/* WARNING: Removing unreachable block (ram,0x00010954d860) */
/* WARNING: Removing unreachable block (ram,0x00010954d87c) */
/* WARNING: Removing unreachable block (ram,0x00010954d8dc) */
/* WARNING: Removing unreachable block (ram,0x00010954d8b0) */
/* WARNING: Removing unreachable block (ram,0x00010954ce30) */

void FUN_10954c798(float param_1,uint *param_2,long param_3)

{
  int *piVar1;
  byte *pbVar2;
  float fVar3;
  undefined **ppuVar4;
  ulong uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  ulong uVar12;
  undefined8 **ppuVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  undefined *puVar22;
  float *pfVar23;
  float *pfVar24;
  ulong uVar25;
  int iVar26;
  ulong uVar27;
  float *pfVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint *puVar32;
  float fVar33;
  float *pfVar34;
  float *pfVar35;
  ulong uVar36;
  undefined8 ****ppppuVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_3f0 [80];
  int iStack_3a0;
  uint auStack_310 [8];
  undefined8 uStack_2f0;
  undefined8 ***pppuStack_260;
  code *pcStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  uint uStack_240;
  undefined8 uStack_23c;
  uint uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  long lStack_208;
  long lStack_200;
  long *plStack_1f8;
  long alStack_1f0 [2];
  undefined4 auStack_1e0 [2];
  uint *puStack_1d8;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  float *pfStack_1c0;
  undefined8 uStack_1b8;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  float *pfStack_1a8;
  long lStack_1a0;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  uint *puStack_120;
  undefined8 uStack_118;
  long lStack_108;
  uint *puStack_100;
  undefined8 uStack_f8;
  uint uStack_e8;
  int iStack_e4;
  uint *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  long lStack_a8;
  float *pfStack_a0;
  float afStack_98 [4];
  long lStack_88;
  
  ppuVar13 = &puStack_250;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar40 = (param_1 * (float)(int)param_2[0x76]) / (float)param_2[0x7b];
  uVar30 = (uint)((float)param_2[0x79] / (float)param_2[0x7b] - fVar40 * 0.5);
  fVar39 = (param_1 * (float)(int)param_2[0x75]) / (float)param_2[0x7c];
  fVar33 = (float)(int)((float)param_2[0x7a] / (float)param_2[0x7c] - fVar39 * 0.5);
  uVar18 = uVar30 + (int)fVar40;
  fVar39 = (float)((int)fVar33 + (int)fVar39);
  pfVar35 = (float *)(ulong)(uint)fVar39;
  fVar40 = *(float *)(param_3 + 8);
  uVar36 = (ulong)(uint)fVar40;
  uVar6 = *(uint *)(param_3 + 0xc);
  uVar31 = uVar6;
  if ((int)uVar30 <= (int)uVar6) {
    uVar31 = uVar30;
  }
  uStack_128._0_4_ = 0;
  if (-1 < (int)uVar30) {
    uStack_128._0_4_ = uVar31;
  }
  uVar31 = uVar6;
  if ((int)uVar18 <= (int)uVar6) {
    uVar31 = uVar18;
  }
  uStack_128._4_4_ = 0;
  if (-1 < (int)uVar18) {
    uStack_128._4_4_ = uVar31;
  }
  fVar3 = fVar40;
  if ((int)fVar33 <= (int)fVar40) {
    fVar3 = fVar33;
  }
  fStack_190 = 0.0;
  if (-1 < (int)fVar33) {
    fStack_190 = fVar3;
  }
  uStack_240 = 0x42ff0000;
  fVar3 = fVar40;
  if ((int)fVar39 <= (int)fVar40) {
    fVar3 = fVar39;
  }
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_23c = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_22c = 0;
  uStack_228 = 0;
  uStack_214 = 0;
  uStack_21c = 0;
  uStack_218 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  fStack_18c = 0.0;
  if (-1 < (int)fVar39) {
    fStack_18c = fVar3;
  }
  lStack_200 = (long)&uStack_23c + 4;
  alStack_1f0[0] = 0;
  alStack_1f0[1] = 0;
  plStack_1f8 = alStack_1f0;
  FUN_109a84930(&uStack_e8,param_3,&fStack_190,&uStack_128);
  uStack_f8 = 0;
  lStack_108 = CONCAT44(lStack_108._4_4_,0x1010000);
  uStack_128 = (float *)CONCAT44(uStack_128._4_4_,0x2010000);
  uStack_118 = 0;
  uStack_188._0_4_ = 0;
  uStack_188._4_4_ = 0;
  fStack_190 = 0.0;
  fStack_18c = 0.0;
  uStack_178 = 0;
  uStack_174 = 0;
  uStack_180 = 0;
  uStack_17c = 0;
  puStack_120 = &uStack_240;
  puStack_100 = &uStack_e8;
  FUN_109a4a0a4(&lStack_108,&uStack_128,-(int)fVar33 & (-(int)fVar33 >> 0x1f ^ 0xffffffffU),
                (int)fVar39 - (int)fVar40 & ((int)fVar39 - (int)fVar40 >> 0x1f ^ 0xffffffffU),
                -uVar30 & ((int)-uVar30 >> 0x1f ^ 0xffffffffU),
                uVar18 - uVar6 & ((int)(uVar18 - uVar6) >> 0x1f ^ 0xffffffffU),1,&fStack_190);
  if (lStack_b0 != 0) {
    piVar1 = (int *)(lStack_b0 + 0x14);
    do {
      iVar26 = *piVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar11) {
        *piVar1 = iVar26 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar26 + -1 == 0) {
      func_0x000109a848d4(&uStack_e8);
    }
  }
  pfVar34 = &fStack_190;
  lStack_b0 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  if (0 < iStack_e4) {
    lVar21 = 0;
    do {
      *(undefined4 *)(lStack_a8 + lVar21 * 4) = 0;
      lVar21 = lVar21 + 1;
    } while (lVar21 < iStack_e4);
  }
  puVar32 = param_2 + 0x75;
  if (pfStack_a0 != afStack_98 && pfStack_a0 != (float *)0x0) {
    _free(*(undefined8 *)(pfStack_a0 + -2));
  }
  uStack_e8 = 0x1010000;
  puStack_e0 = &uStack_240;
  lStack_d8 = 0;
  fStack_190 = 9.477423e-38;
  uStack_180 = 0;
  uStack_17c = 0;
  lStack_108 = NEON_rev64(*(undefined8 *)puVar32,4);
  uStack_188 = puStack_e0;
  FUN_109b0f718(0,0,&uStack_e8,&fStack_190,&lStack_108,3);
  func_0x00010954d990(&lStack_108,param_2,4,0);
  ppuVar4 = &PTR_PTR_1132dac38;
  if (*(undefined ***)(*(long *)param_2 + 0x18) != (undefined **)0x0) {
    ppuVar4 = *(undefined ***)(*(long *)param_2 + 0x18);
  }
  puVar22 = ppuVar4[3];
  uVar18 = uStack_240 >> 3 & 0x1ff;
  if (uVar18 == 3) {
    if (0 < (int)uStack_23c._4_4_) {
      iVar26 = 0;
      uVar27 = 0;
      do {
        if (0 < (int)uStack_234) {
          uVar16 = 0;
          lVar21 = *plStack_1f8;
          iVar17 = iVar26;
          do {
            lVar19 = 0;
            pbVar2 = (byte *)(CONCAT44(uStack_22c,uStack_230) + lVar21 * uVar27 + uVar16 * 4);
            bVar7 = *pbVar2;
            bVar8 = pbVar2[1];
            bVar9 = pbVar2[2];
            iVar20 = iVar17;
            do {
              *(undefined4 *)(lStack_108 + (long)iVar20 * 4) =
                   *(undefined4 *)
                    (puVar22 +
                    lVar19 + (long)((float)(int)((float)bVar7 / 8.0) +
                                    (float)(int)((float)bVar8 / 8.0) * 32.0 +
                                   (float)(int)((float)bVar9 / 8.0) * 1024.0) * 0x28);
              lVar19 = lVar19 + 4;
              iVar20 = iVar20 + uStack_23c._4_4_ * uStack_234;
            } while (lVar19 != 0x28);
            uVar16 = uVar16 + 1;
            iVar17 = iVar17 + 1;
          } while (uVar16 != uStack_234);
        }
        uVar27 = uVar27 + 1;
        iVar26 = iVar26 + uStack_234;
      } while (uVar27 != uStack_23c._4_4_);
    }
  }
  else if ((uVar18 == 2) && (0 < (int)uStack_23c._4_4_)) {
    iVar26 = 0;
    uVar27 = 0;
    do {
      if (0 < (int)uStack_234) {
        uVar16 = 0;
        lVar21 = *plStack_1f8;
        iVar17 = iVar26;
        do {
          lVar19 = 0;
          pbVar2 = (byte *)(CONCAT44(uStack_22c,uStack_230) + lVar21 * uVar27 + uVar16 * 3);
          bVar7 = *pbVar2;
          bVar8 = pbVar2[1];
          bVar9 = pbVar2[2];
          iVar20 = iVar17;
          do {
            *(undefined4 *)(lStack_108 + (long)iVar20 * 4) =
                 *(undefined4 *)
                  (puVar22 +
                  lVar19 + (long)((float)(int)((float)bVar7 / 8.0) +
                                  (float)(int)((float)bVar8 / 8.0) * 32.0 +
                                 (float)(int)((float)bVar9 / 8.0) * 1024.0) * 0x28);
            lVar19 = lVar19 + 4;
            iVar20 = iVar20 + uStack_23c._4_4_ * uStack_234;
          } while (lVar19 != 0x28);
          uVar16 = uVar16 + 1;
          iVar17 = iVar17 + 1;
        } while (uVar16 != uStack_234);
      }
      uVar27 = uVar27 + 1;
      iVar26 = iVar26 + uStack_234;
    } while (uVar27 != uStack_23c._4_4_);
  }
  FUN_10954db34(param_2);
  uVar18 = param_2[0x2a];
  uVar27 = (ulong)uVar18;
  puVar14 = (uint *)&uStack_128;
  puVar15 = param_2;
  func_0x00010954d990(puVar14,param_2,3,0);
  pfVar23 = uStack_128;
  iVar26 = (int)puVar15;
  ppppuVar37 = (undefined8 ****)&stack0xfffffffffffffff0;
  if ((int)uVar18 < 1) {
    if (*(char *)(*(long *)param_2 + 0x40) == '\x01') {
      fStack_190 = 127.5;
      uStack_188._4_4_ = 0;
      uStack_180 = 0;
      fStack_18c = 0.0;
      uStack_188._0_4_ = 0;
      puStack_150 = &uStack_188;
      uStack_174 = 0;
      uStack_170 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_164 = 0;
      uStack_16c = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_15c = 0;
      puStack_250 = &uStack_140;
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_e8 = 0x1010000;
      puStack_e0 = &uStack_240;
      lStack_d8 = 0;
      uStack_1b0 = 0x2010000;
      lStack_1a0 = 0;
      plStack_248 = alStack_1f0;
      pfStack_1a8 = &fStack_190;
      puStack_148 = puStack_250;
      FUN_109ac9fc8(&uStack_e8,&uStack_1b0,0xb,0);
      puVar32 = (uint *)0x0;
      pfVar35 = afStack_98;
      uVar36 = 1;
      func_0x00010954d990(&uStack_1b0,param_2,6,0);
      FUN_10936ff7c(&uStack_e8,(undefined4)uStack_188,(long)uStack_188._4_4_,5,
                    CONCAT44(uStack_1ac,uStack_1b0),(long)uStack_188._4_4_ << 2);
      uStack_1b8 = 0;
      auStack_1c8[0] = 0x1010000;
      auStack_1e0[0] = 0x2010000;
      uStack_1d0 = 0;
      puStack_1d8 = &uStack_e8;
      pfStack_1c0 = &fStack_190;
      FUN_109aec0d0(0x3f40101020000000,0,auStack_1c8,auStack_1e0,5,1,0,3,4);
      if (lStack_b0 != 0) {
        piVar1 = (int *)(lStack_b0 + 0x14);
        do {
          iVar26 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar26 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar26 + -1 == 0) {
          func_0x000109a848d4(&uStack_e8);
        }
      }
      lStack_b0 = 0;
      uStack_d0 = 0;
      lStack_d8 = 0;
      uStack_c0 = 0;
      uStack_c8 = 0;
      if (0 < iStack_e4) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lStack_a8 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < iStack_e4);
      }
      if (pfStack_a0 != pfVar35 && pfStack_a0 != (float *)0x0) {
        _free(*(undefined8 *)(pfStack_a0 + -2));
      }
      pfVar34 = (float *)CONCAT44(uStack_1ac,uStack_1b0);
      uVar25 = lStack_1a0 * (long)pfStack_1a8;
      uVar16 = (ulong)-(uStack_1b0 >> 2) & 3;
      if ((long)uVar25 <= (long)uVar16) {
        uVar16 = uVar25;
      }
      uVar5 = uVar25;
      if ((uStack_1b0 & 3) == 0) {
        uVar5 = uVar16;
      }
      uVar12 = uVar25 - uVar5;
      uVar16 = uVar12 + 3;
      if ((long)uVar5 <= (long)uVar25) {
        uVar16 = uVar12;
      }
      pfVar23 = pfVar34;
      pfVar24 = uStack_128;
      uVar29 = uVar5;
      if (0 < (long)uVar5) {
        do {
          *pfVar23 = *pfVar23 * *pfVar24;
          uVar29 = uVar29 - 1;
          pfVar23 = pfVar23 + 1;
          pfVar24 = pfVar24 + 1;
        } while (uVar29 != 0);
      }
      lVar21 = (uVar16 & 0xfffffffffffffffc) + uVar5;
      if (3 < (long)uVar12) {
        pfVar23 = uStack_128 + uVar5;
        uVar29 = uVar5;
        pfVar24 = pfVar34 + uVar5;
        do {
          uVar38 = *(undefined8 *)pfVar23;
          *(ulong *)(pfVar24 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20) *
                        (float)((ulong)*(undefined8 *)(pfVar23 + 2) >> 0x20),
                        (float)*(undefined8 *)(pfVar24 + 2) * (float)*(undefined8 *)(pfVar23 + 2));
          *(ulong *)pfVar24 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar24 >> 0x20) *
                        (float)((ulong)uVar38 >> 0x20),(float)*(undefined8 *)pfVar24 * (float)uVar38
                       );
          uVar29 = uVar29 + 4;
          pfVar23 = pfVar23 + 4;
          pfVar24 = pfVar24 + 4;
        } while ((long)uVar29 < lVar21);
      }
      if (lVar21 < (long)uVar25) {
        lVar21 = uVar12 - (uVar16 & 0xfffffffffffffffc);
        pfVar23 = uStack_128 + uVar5 + ((long)uVar16 >> 2) * 4;
        pfVar24 = pfVar34 + uVar5 + ((long)uVar16 >> 2) * 4;
        do {
          *pfVar24 = *pfVar24 * *pfVar23;
          lVar21 = lVar21 + -1;
          pfVar23 = pfVar23 + 1;
          pfVar24 = pfVar24 + 1;
        } while (lVar21 != 0);
      }
      puVar15 = &uStack_e8;
      lVar21 = 10;
      uVar38 = 0x10954cfc0;
      puVar14 = param_2;
    }
    else {
      if (lStack_208 != 0) {
        piVar1 = (int *)(lStack_208 + 0x14);
        do {
          iVar17 = *piVar1;
          cVar10 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar17 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (iVar17 + -1 == 0) {
          puVar14 = &uStack_240;
          func_0x000109a848d4();
        }
      }
      lStack_208 = 0;
      uStack_228 = 0;
      uStack_224 = 0;
      uStack_230 = 0;
      uStack_22c = 0;
      uStack_218 = 0;
      uStack_214 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      if (0 < (int)uStack_23c) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lStack_200 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)uStack_23c);
      }
      if (plStack_1f8 != alStack_1f0 && plStack_1f8 != (long *)0x0) {
        puVar14 = (uint *)plStack_1f8[-1];
        _free();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
        return;
      }
      ___stack_chk_fail();
      if (iVar26 != 0) {
        func_0x000104bd46a0();
        func_0x00010567aa40(&uStack_e8);
        func_0x00010567aa40(&fStack_190);
        func_0x00010567aa40(&uStack_240);
      }
      __Unwind_Resume();
      ppuVar13 = (undefined8 **)auStack_3f0;
      pcStack_258 = FUN_10954d19c;
      ppppuVar37 = &pppuStack_260;
      uStack_2f0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puVar15 = auStack_310;
      lVar21 = 0xc;
      uVar18 = 0;
      uVar38 = 0x10954d1f4;
      iStack_3a0 = iVar26;
      pppuStack_260 = (undefined8 ***)&stack0xfffffffffffffff0;
    }
  }
  else {
    uVar31 = 0;
    do {
      func_0x00010954d990(&uStack_e8,param_2,5,uVar31);
      pfVar35 = (float *)CONCAT44(iStack_e4,uStack_e8);
      uVar25 = lStack_d8 * (long)puStack_e0;
      uVar16 = (ulong)-(uStack_e8 >> 2) & 3;
      if ((long)uVar25 <= (long)uVar16) {
        uVar16 = uVar25;
      }
      uVar5 = uVar25;
      if ((uStack_e8 & 3) == 0) {
        uVar5 = uVar16;
      }
      uVar12 = uVar25 - uVar5;
      uVar16 = uVar12 + 3;
      if ((long)uVar5 <= (long)uVar25) {
        uVar16 = uVar12;
      }
      pfVar24 = pfVar35;
      pfVar28 = pfVar23;
      uVar29 = uVar5;
      if (0 < (long)uVar5) {
        do {
          *pfVar24 = *pfVar24 * *pfVar28;
          uVar29 = uVar29 - 1;
          pfVar24 = pfVar24 + 1;
          pfVar28 = pfVar28 + 1;
        } while (uVar29 != 0);
      }
      lVar21 = (uVar16 & 0xfffffffffffffffc) + uVar5;
      if (3 < (long)uVar12) {
        pfVar24 = pfVar23 + uVar5;
        uVar29 = uVar5;
        pfVar28 = pfVar35 + uVar5;
        do {
          uVar38 = *(undefined8 *)pfVar24;
          *(ulong *)(pfVar28 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar28 + 2) >> 0x20) *
                        (float)((ulong)*(undefined8 *)(pfVar24 + 2) >> 0x20),
                        (float)*(undefined8 *)(pfVar28 + 2) * (float)*(undefined8 *)(pfVar24 + 2));
          *(ulong *)pfVar28 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar28 >> 0x20) *
                        (float)((ulong)uVar38 >> 0x20),(float)*(undefined8 *)pfVar28 * (float)uVar38
                       );
          uVar29 = uVar29 + 4;
          pfVar24 = pfVar24 + 4;
          pfVar28 = pfVar28 + 4;
        } while ((long)uVar29 < lVar21);
      }
      if (lVar21 < (long)uVar25) {
        lVar21 = uVar12 - (uVar16 & 0xfffffffffffffffc);
        pfVar35 = pfVar35 + uVar5 + ((long)uVar16 >> 2) * 4;
        pfVar24 = pfVar23 + uVar5 + ((long)uVar16 >> 2) * 4;
        do {
          *pfVar35 = *pfVar35 * *pfVar24;
          lVar21 = lVar21 + -1;
          pfVar35 = pfVar35 + 1;
          pfVar24 = pfVar24 + 1;
        } while (lVar21 != 0);
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar18);
    puVar32 = (uint *)0x0;
    puVar15 = &uStack_e8;
    lVar21 = 10;
    uVar18 = 0;
    uVar38 = 0x10954ccf4;
    ppuVar13 = &puStack_250;
    puVar14 = param_2;
    pfVar35 = pfVar23;
  }
  *(ulong *)((long)ppuVar13 + -0x40) = uVar36;
  *(ulong *)((long)ppuVar13 + -0x38) = uVar27;
  *(float **)((long)ppuVar13 + -0x30) = pfVar35;
  *(float **)((long)ppuVar13 + -0x28) = pfVar34;
  *(uint **)((long)ppuVar13 + -0x20) = puVar32;
  *(uint **)((long)ppuVar13 + -0x18) = puVar14;
  *(undefined8 *****)((long)ppuVar13 + -0x10) = ppppuVar37;
  *(undefined8 *)((long)ppuVar13 + -8) = uVar38;
  if ((uint)lVar21 < 2) {
    puVar32 = puVar14 + 0x7e;
  }
  else {
    lVar19 = *(long *)puVar14;
    *(uint *)(lVar19 + 0x10) = *(uint *)(lVar19 + 0x10) | 2;
    uVar36 = *(ulong *)(lVar19 + 0x20);
    if (uVar36 == 0) {
      uVar36 = *(ulong *)(lVar19 + 8);
      if ((uVar36 & 1) != 0) {
        uVar36 = *(ulong *)(uVar36 & 0xfffffffffffffffe);
      }
      FUN_10934f79c();
      *(ulong *)(lVar19 + 0x20) = uVar36;
    }
    puVar32 = (uint *)(uVar36 + 0x18);
  }
  uVar31 = puVar14[(lVar21 * 3 + 5) * 2];
  uVar6 = puVar14[lVar21 * 6 + 0xb];
  *(long *)puVar15 =
       *(long *)puVar32 + *(long *)(puVar14 + (lVar21 * 3 + 4) * 2) * 4 +
       (long)(int)(uVar31 * uVar18 * uVar6) * 8;
  *(long *)(puVar15 + 2) = (long)(int)uVar31;
  *(long *)(puVar15 + 4) = (long)(int)uVar6;
  return;
}



/* Entry: 10954d19c; end: 10954d8e3;  */

void FUN_10954d19c(long *param_1,undefined4 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long *plVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar40;
  undefined1 auVar39 [16];
  int iVar41;
  float fVar42;
  int iVar43;
  float fVar44;
  int iVar45;
  float fVar46;
  int iVar47;
  float fStack_120;
  float fStack_11c;
  float *pfStack_100;
  long lStack_f8;
  long lStack_f0;
  float *pfStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10954d8e4(&puStack_c0,param_1,0xc,0);
  uVar12 = lStack_b0 * lStack_b8;
  uVar8 = (ulong)puStack_c0 >> 3 & 1;
  if ((long)uVar12 <= (long)uVar8) {
    uVar8 = uVar12;
  }
  if (((ulong)puStack_c0 & 7) != 0) {
    uVar8 = uVar12;
  }
  lVar9 = uVar12 - uVar8;
  if (0 < (long)uVar8) {
    _bzero(puStack_c0,uVar8 * 8);
  }
  lVar1 = (lVar9 - (lVar9 >> 0x3f) & 0xfffffffffffffffeU) + uVar8;
  if (1 < lVar9) {
    lVar21 = lVar1;
    if (lVar1 <= (long)(uVar8 + 2)) {
      lVar21 = uVar8 + 2;
    }
    _bzero(puStack_c0 + uVar8,(lVar21 + ~uVar8 & 0x1ffffffffffffffe) * 8 + 0x10);
  }
  lVar21 = lVar9 / 2;
  if (lVar1 < (long)uVar12) {
    _bzero(puStack_c0 + lVar21 * 2 + uVar8,(lVar9 % 2) * 8);
  }
  iVar41 = (int)param_1[0x3b] * *(int *)((long)param_1 + 0x1d4);
  if ((int)param_1[0x3a] < 1) {
    fVar30 = 0.0;
    fVar29 = 0.0;
  }
  else {
    iVar43 = 0;
    fVar31 = (float)iVar41;
    fVar29 = 0.0;
    fVar30 = 0.0;
    do {
      FUN_10954d8e4(&pfStack_e0,param_1,10,iVar43);
      FUN_10954d8e4(&pfStack_100,param_1,param_2,iVar43);
      pfVar16 = pfStack_e0;
      pfVar11 = pfStack_100;
      fVar32 = 0.0;
      fVar33 = 0.0;
      if (lStack_d0 * lStack_d8 != 0) {
        fVar33 = pfStack_e0[1] * pfStack_e0[1] + *pfStack_e0 * *pfStack_e0;
        if (1 < lStack_d0) {
          lVar14 = lStack_d0 + -1;
          pfVar10 = pfStack_e0 + 3;
          do {
            fVar33 = fVar33 + *pfVar10 * *pfVar10 + pfVar10[-1] * pfVar10[-1];
            pfVar10 = pfVar10 + 2;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (1 < lStack_d8) {
          pfVar10 = pfStack_e0 + lStack_d0 * 2 + 1;
          lVar14 = 1;
          do {
            pfVar13 = pfVar10;
            lVar19 = lStack_d0;
            if (0 < lStack_d0) {
              do {
                fVar33 = fVar33 + *pfVar13 * *pfVar13 + pfVar13[-1] * pfVar13[-1];
                pfVar13 = pfVar13 + 2;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            lVar14 = lVar14 + 1;
            pfVar10 = pfVar10 + lStack_d0 * 2;
          } while (lVar14 != lStack_d8);
        }
      }
      if (lStack_f0 * lStack_f8 != 0) {
        fVar32 = pfStack_100[1] * pfStack_100[1] + *pfStack_100 * *pfStack_100;
        if (1 < lStack_f0) {
          lVar14 = lStack_f0 + -1;
          pfVar10 = pfStack_100 + 3;
          do {
            fVar32 = fVar32 + *pfVar10 * *pfVar10 + pfVar10[-1] * pfVar10[-1];
            pfVar10 = pfVar10 + 2;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (1 < lStack_f8) {
          pfVar10 = pfStack_100 + lStack_f0 * 2 + 1;
          lVar14 = 1;
          do {
            pfVar13 = pfVar10;
            lVar19 = lStack_f0;
            if (0 < lStack_f0) {
              do {
                fVar32 = fVar32 + *pfVar13 * *pfVar13 + pfVar13[-1] * pfVar13[-1];
                pfVar13 = pfVar13 + 2;
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            lVar14 = lVar14 + 1;
            pfVar10 = pfVar10 + lStack_f0 * 2;
          } while (lVar14 != lStack_f8);
        }
      }
      if (0 < (long)uVar8) {
        pfVar10 = pfStack_100 + 1;
        pfVar13 = pfStack_e0;
        puVar20 = puStack_c0;
        uVar17 = uVar8;
        do {
          fStack_120 = pfVar10[-1];
          fStack_11c = -*pfVar10;
          fVar34 = fStack_11c;
          fVar22 = (float)FUN_1095512ac(pfVar13,&fStack_120);
          *puVar20 = CONCAT44(fVar34 + (float)((ulong)*puVar20 >> 0x20),fVar22 + (float)*puVar20);
          pfVar10 = pfVar10 + 2;
          pfVar13 = pfVar13 + 2;
          uVar17 = uVar17 - 1;
          puVar20 = puVar20 + 1;
        } while (uVar17 != 0);
      }
      if (1 < lVar9) {
        pfVar10 = pfVar11 + uVar8 * 2;
        pfVar13 = pfVar16 + uVar8 * 2;
        pfVar15 = (float *)(puStack_c0 + uVar8);
        uVar17 = uVar8;
        do {
          fVar34 = *pfVar13;
          fVar22 = pfVar13[2];
          fVar38 = (float)*(undefined8 *)pfVar10;
          fVar42 = -(float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
          fVar40 = (float)*(undefined8 *)(pfVar10 + 2);
          fVar44 = -(float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20);
          fVar24 = pfVar13[1] * fVar42;
          fVar25 = pfVar13[3] * fVar40;
          fVar26 = pfVar13[3] * fVar44;
          auVar23._0_8_ =
               CONCAT17((char)((uint)fVar24 >> 0x18),
                        CONCAT16((char)((uint)fVar24 >> 0x10),
                                 CONCAT15((char)((uint)fVar24 >> 8),
                                          CONCAT14(SUB41(fVar24,0),pfVar13[1] * fVar38)))) ^
               0x8000000000000000;
          auVar23[8] = SUB41(fVar25,0);
          auVar23[9] = (undefined1)((uint)fVar25 >> 8);
          auVar23[10] = (undefined1)((uint)fVar25 >> 0x10);
          auVar23[0xb] = (undefined1)((uint)fVar25 >> 0x18);
          auVar23[0xc] = SUB41(fVar26,0);
          auVar23[0xd] = (undefined1)((uint)fVar26 >> 8);
          auVar23[0xe] = (undefined1)((uint)fVar26 >> 0x10);
          auVar23[0xf] = (byte)((uint)fVar26 >> 0x18) ^ 0x80;
          auVar23 = NEON_rev64(auVar23,4);
          uVar28 = *(undefined8 *)(pfVar15 + 2);
          uVar27 = *(undefined8 *)pfVar15;
          pfVar15[2] = (float)uVar28 + fVar22 * fVar40 + auVar23._8_4_;
          pfVar15[3] = (float)((ulong)uVar28 >> 0x20) + fVar22 * fVar44 + auVar23._12_4_;
          *pfVar15 = (float)uVar27 + fVar34 * fVar38 + auVar23._0_4_;
          pfVar15[1] = (float)((ulong)uVar27 >> 0x20) + fVar34 * fVar42 + auVar23._4_4_;
          uVar17 = uVar17 + 2;
          pfVar10 = pfVar10 + 4;
          pfVar13 = pfVar13 + 4;
          pfVar15 = pfVar15 + 4;
        } while ((long)uVar17 < lVar1);
      }
      if (lVar1 < (long)uVar12) {
        pfVar11 = (float *)((long)pfVar11 + (lVar21 * 0x10 + uVar8 * 8 | 4));
        pfVar16 = pfVar16 + uVar8 * 2 + lVar21 * 4;
        puVar20 = puStack_c0 + uVar8 + lVar21 * 2;
        lVar14 = lVar9 % 2;
        do {
          fStack_120 = pfVar11[-1];
          fStack_11c = -*pfVar11;
          fVar34 = fStack_11c;
          fVar22 = (float)FUN_1095512ac(pfVar16,&fStack_120);
          *puVar20 = CONCAT44(fVar34 + (float)((ulong)*puVar20 >> 0x20),fVar22 + (float)*puVar20);
          pfVar11 = pfVar11 + 2;
          pfVar16 = pfVar16 + 2;
          lVar14 = lVar14 + -1;
          puVar20 = puVar20 + 1;
        } while (lVar14 != 0);
      }
      fVar30 = fVar30 + fVar33 / fVar31;
      fVar29 = fVar29 + fVar32 / fVar31;
      iVar43 = iVar43 + 1;
    } while (iVar43 < (int)param_1[0x3a]);
  }
  func_0x00010954d990(&pfStack_e0,param_1,0xb,0);
  FUN_109554494(*(undefined8 *)param_1[2],puStack_c0,pfStack_e0,
                *(undefined4 *)((long)param_1 + 0x1d4),(int)param_1[0x3b]);
  fVar31 = *(float *)(*param_1 + 0x34);
  func_0x00010954d990(&pfStack_100,param_1,0xd,0);
  FUN_10954d8e4(&fStack_120,param_1,0xe,0);
  fVar31 = -1.0 / (fVar31 * fVar31);
  fVar30 = fVar30 + fVar29;
  fVar29 = (float)((int)param_1[0x3a] * iVar41);
  uVar12 = lStack_f0 * lStack_f8;
  uVar8 = (ulong)-((uint)pfStack_100 >> 2) & 3;
  if ((long)uVar12 <= (long)uVar8) {
    uVar8 = uVar12;
  }
  uVar17 = uVar12;
  if (((ulong)pfStack_100 & 3) == 0) {
    uVar17 = uVar8;
  }
  uVar2 = uVar12 - uVar17;
  uVar8 = uVar2 + 3;
  if ((long)uVar17 <= (long)uVar12) {
    uVar8 = uVar2;
  }
  uVar18 = uVar17;
  pfVar11 = pfStack_100;
  if (0 < (long)uVar17) {
    do {
      fVar32 = (float)_expf();
      *pfVar11 = fVar32;
      uVar18 = uVar18 - 1;
      pfVar11 = pfVar11 + 1;
    } while (uVar18 != 0);
  }
  lVar9 = (uVar8 & 0xfffffffffffffffc) + uVar17;
  if (3 < (long)uVar2) {
    auVar23 = NEON_fmov(0x3f800000,4);
    pfVar11 = pfStack_e0 + uVar17;
    pfVar16 = pfStack_100 + uVar17;
    uVar18 = uVar17;
    do {
      auVar35._0_4_ = (fVar30 - (*pfVar11 + *pfVar11)) / fVar29;
      auVar35._4_4_ = (fVar30 - (pfVar11[1] + pfVar11[1])) / fVar29;
      auVar35._8_4_ = (fVar30 - (pfVar11[2] + pfVar11[2])) / fVar29;
      auVar35._12_4_ = (fVar30 - (pfVar11[3] + pfVar11[3])) / fVar29;
      auVar36 = NEON_fmax(auVar35,ZEXT216(0),4);
      auVar37._0_4_ = auVar36._0_4_ * fVar31;
      auVar37._4_4_ = auVar36._4_4_ * fVar31;
      auVar37._8_4_ = auVar36._8_4_ * fVar31;
      auVar37._12_4_ = auVar36._12_4_ * fVar31;
      auVar36._8_4_ = 0x42b1722d;
      auVar36._0_8_ = 0x42b1722d42b1722d;
      auVar36._12_4_ = 0x42b1722d;
      auVar36 = NEON_fmin(auVar37,auVar36,4);
      auVar3[8] = 0x2d;
      auVar3._0_8_ = 0xc2b1722dc2b1722d;
      auVar3[9] = 0x72;
      auVar3[10] = 0xb1;
      auVar3[0xb] = 0xc2;
      auVar3[0xc] = 0x2d;
      auVar3[0xd] = 0x72;
      auVar3[0xe] = 0xb1;
      auVar3[0xf] = 0xc2;
      auVar36 = NEON_fmax(auVar36,auVar3,4);
      fVar26 = (float)(int)(auVar36._0_4_ * 1.442695 + 0.5);
      fVar42 = (float)(int)(auVar36._4_4_ * 1.442695 + 0.5);
      fVar44 = (float)(int)(auVar36._8_4_ * 1.442695 + 0.5);
      fVar46 = (float)(int)(auVar36._12_4_ * 1.442695 + 0.5);
      fVar38 = auVar36._0_4_ + fVar26 * -0.6933594 + fVar26 * 0.00021219444;
      fVar40 = auVar36._4_4_ + fVar42 * -0.6933594 + fVar42 * 0.00021219444;
      fVar24 = auVar36._8_4_ + fVar44 * -0.6933594 + fVar44 * 0.00021219444;
      fVar25 = auVar36._12_4_ + fVar46 * -0.6933594 + fVar46 * 0.00021219444;
      fVar32 = auVar23._0_4_;
      fVar33 = auVar23._4_4_;
      fVar34 = auVar23._8_4_;
      fVar22 = auVar23._12_4_;
      auVar4._8_4_ = 0xc38b0000;
      auVar4._0_8_ = 0xc38b0000c38b0000;
      auVar4._12_4_ = 0xc38b0000;
      auVar6._4_4_ = fVar42;
      auVar6._0_4_ = fVar26;
      auVar6._8_4_ = fVar44;
      auVar6._12_4_ = fVar46;
      auVar36 = NEON_fmax(auVar6,auVar4,4);
      auVar5._8_4_ = 0x438b0000;
      auVar5._0_8_ = 0x438b0000438b0000;
      auVar5._12_4_ = 0x438b0000;
      auVar36 = NEON_fmin(auVar36,auVar5,4);
      iVar41 = (int)auVar36._0_4_ >> 2;
      iVar43 = (int)auVar36._4_4_ >> 2;
      iVar45 = (int)auVar36._8_4_ >> 2;
      iVar47 = (int)auVar36._12_4_ >> 2;
      fVar26 = (float)(iVar41 * 0x800000 + (int)fVar32);
      fVar42 = (float)(iVar43 * 0x800000 + (int)fVar33);
      fVar44 = (float)(iVar45 * 0x800000 + (int)fVar34);
      fVar46 = (float)(iVar47 * 0x800000 + (int)fVar22);
      auVar39._0_4_ =
           (fVar38 + fVar32 +
           fVar38 * fVar38 *
           (fVar38 * (fVar38 * 0.041665796 + 0.16666666) + 0.5 +
           fVar38 * fVar38 * fVar38 *
           (fVar38 * (fVar38 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar26 * fVar26 *
           fVar26 * (float)(((int)auVar36._0_4_ + iVar41 * 0x1fd) * 0x800000 + (int)fVar32);
      auVar39._4_4_ =
           (fVar40 + fVar33 +
           fVar40 * fVar40 *
           (fVar40 * (fVar40 * 0.041665796 + 0.16666666) + 0.5 +
           fVar40 * fVar40 * fVar40 *
           (fVar40 * (fVar40 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar42 * fVar42 *
           fVar42 * (float)(((int)auVar36._4_4_ + iVar43 * 0x1fd) * 0x800000 + (int)fVar33);
      auVar39._8_4_ =
           (fVar24 + fVar34 +
           fVar24 * fVar24 *
           (fVar24 * (fVar24 * 0.041665796 + 0.16666666) + 0.5 +
           fVar24 * fVar24 * fVar24 *
           (fVar24 * (fVar24 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar44 * fVar44 *
           fVar44 * (float)(((int)auVar36._8_4_ + iVar45 * 0x1fd) * 0x800000 + (int)fVar34);
      auVar39._12_4_ =
           (fVar25 + fVar22 +
           fVar25 * fVar25 *
           (fVar25 * (fVar25 * 0.041665796 + 0.16666666) + 0.5 +
           fVar25 * fVar25 * fVar25 *
           (fVar25 * (fVar25 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar46 * fVar46 *
           fVar46 * (float)(((int)auVar36._12_4_ + iVar47 * 0x1fd) * 0x800000 + (int)fVar22);
      auVar36 = NEON_fmax(auVar39,auVar37,4);
      *(long *)(pfVar16 + 2) = auVar36._8_8_;
      *(long *)pfVar16 = auVar36._0_8_;
      uVar18 = uVar18 + 4;
      pfVar11 = pfVar11 + 4;
      pfVar16 = pfVar16 + 4;
    } while ((long)uVar18 < lVar9);
  }
  if (lVar9 < (long)uVar12) {
    lVar9 = uVar2 - (uVar8 & 0xfffffffffffffffc);
    pfVar11 = pfStack_100 + uVar17 + ((long)uVar8 >> 2) * 4;
    do {
      fVar29 = (float)_expf();
      *pfVar11 = fVar29;
      lVar9 = lVar9 + -1;
      pfVar11 = pfVar11 + 1;
    } while (lVar9 != 0);
  }
  uVar8 = CONCAT44(fStack_11c,fStack_120);
  iVar41 = *(int *)((long)param_1 + 0x1d4);
  plVar7 = *(long **)param_1[2];
  FUN_109553ed0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if ((uint)uVar8 < 2) {
    pfVar11 = pfStack_100 + 0x7e;
  }
  else {
    lVar9 = *(long *)pfStack_100;
    *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 2;
    uVar12 = *(ulong *)(lVar9 + 0x20);
    if (uVar12 == 0) {
      uVar12 = *(ulong *)(lVar9 + 8);
      if ((uVar12 & 1) != 0) {
        uVar12 = *(ulong *)(uVar12 & 0xfffffffffffffffe);
      }
      FUN_10934f79c();
      *(ulong *)(lVar9 + 0x20) = uVar12;
    }
    pfVar11 = (float *)(uVar12 + 0x18);
  }
  uVar8 = uVar8 & 0xffffffff;
  fVar29 = pfStack_100[uVar8 * 6 + 10];
  fVar30 = pfStack_100[uVar8 * 6 + 0xb];
  *plVar7 = *(long *)pfVar11 + *(long *)(pfStack_100 + uVar8 * 6 + 8) * 4 +
            (long)((int)fVar29 * iVar41 * (int)fVar30) * 8;
  plVar7[1] = (long)(int)fVar29;
  plVar7[2] = (long)(int)fVar30;
  return;
}



/* Entry: 10954d8e4; end: 10954da27;  */

void FUN_10954d8e4(long *param_1,long *param_2,uint param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (param_3 < 2) {
    plVar3 = param_2 + 0x3f;
  }
  else {
    lVar4 = *param_2;
    *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 2;
    uVar2 = *(ulong *)(lVar4 + 0x20);
    if (uVar2 == 0) {
      uVar2 = *(ulong *)(lVar4 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      FUN_10934f79c();
      *(ulong *)(lVar4 + 0x20) = uVar2;
    }
    plVar3 = (long *)(uVar2 + 0x18);
  }
  lVar4 = param_2[(ulong)param_3 * 3 + 5];
  iVar1 = *(int *)((long)param_2 + (ulong)param_3 * 0x18 + 0x2c);
  *param_1 = *plVar3 + param_2[(ulong)param_3 * 3 + 4] * 4 +
             (long)((int)lVar4 * param_4 * iVar1) * 8;
  param_1[1] = (long)(int)lVar4;
  param_1[2] = (long)iVar1;
  return;
}



/* Entry: 10954da28; end: 10954db33;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10954da28(long *param_1,ulong param_2,undefined4 *param_3)

{
  float *pfVar1;
  float *******pppppppfVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined3 uVar8;
  undefined3 uVar9;
  int5 iVar10;
  int5 iVar11;
  code *pcVar12;
  bool bVar13;
  long *plVar14;
  float *pfVar15;
  float ******ppppppfVar16;
  float *pfVar17;
  long lVar18;
  float *pfVar19;
  ulong uVar20;
  undefined1 (*pauVar21) [16];
  float ******ppppppfVar22;
  float *******pppppppfVar23;
  undefined8 *puVar24;
  long lVar25;
  float *******pppppppfVar26;
  float *******pppppppfVar27;
  float *pfVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  ulong uVar34;
  ulong uVar35;
  float *******pppppppfVar36;
  long lVar37;
  float *pfVar38;
  float ******ppppppfVar39;
  long *plVar40;
  float *******pppppppfVar41;
  ulong uVar42;
  int iVar43;
  float *******pppppppfVar44;
  float *******pppppppfVar45;
  float *******pppppppfVar46;
  ulong uVar47;
  float *pfVar48;
  long lVar49;
  uint uVar50;
  float *******pppppppfVar51;
  float *******pppppppfVar52;
  undefined1 (*pauVar53) [16];
  float *pfVar54;
  float *******pppppppfVar55;
  float *******pppppppfVar56;
  float *pfVar57;
  long lVar58;
  float *******pppppppfVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float *******pppppppfStack_400;
  float fStack_3e4;
  float *pfStack_3e0;
  float *******pppppppfStack_3d8;
  float *******pppppppfStack_3d0;
  undefined8 uStack_3c8;
  float *******pppppppfStack_3c0;
  float *******pppppppfStack_3b8;
  float *******pppppppfStack_3b0;
  float *******pppppppfStack_3a8;
  float *******pppppppfStack_3a0;
  float *******pppppppfStack_398;
  float ******ppppppfStack_390;
  undefined8 uStack_388;
  float *******pppppppfStack_380;
  float *******pppppppfStack_378;
  float *******pppppppfStack_370;
  float *******pppppppfStack_368;
  float *******pppppppfStack_360;
  undefined3 uStack_358;
  int5 iStack_355;
  undefined4 uStack_350;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  undefined1 uStack_34a;
  byte bStack_349;
  byte bStack_348;
  byte bStack_347;
  byte bStack_346;
  undefined1 uStack_345;
  undefined4 uStack_344;
  float *******pppppppfStack_340;
  float *******pppppppfStack_338;
  float *******pppppppfStack_330;
  float *******pppppppfStack_328;
  float *pfStack_318;
  float *******pppppppfStack_310;
  float *******pppppppfStack_308;
  float *******pppppppfStack_300;
  float *******pppppppfStack_2f8;
  float *******pppppppfStack_2f0;
  float ******ppppppfStack_2e8;
  undefined8 uStack_2e0;
  float *pfStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined2 uStack_288;
  float *pfStack_268;
  float *******pppppppfStack_260;
  float *******pppppppfStack_258;
  long lStack_250;
  float *******pppppppfStack_248;
  float ******ppppppfStack_240;
  float *******pppppppfStack_238;
  float *******pppppppfStack_230;
  float ******ppppppfStack_228;
  undefined8 uStack_220;
  float *pfStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined2 uStack_1c8;
  long lStack_1a8;
  float *******pppppppfStack_1a0;
  float *pfStack_198;
  float *******pppppppfStack_190;
  float *******pppppppfStack_188;
  float *pfStack_178;
  float *******pppppppfStack_170;
  float *******pppppppfStack_168;
  float *******pppppppfStack_158;
  float *******pppppppfStack_150;
  float *******pppppppfStack_148;
  float *******pppppppfStack_138;
  float ******ppppppfStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  float *******pppppppfStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float *******pppppppfStack_100;
  float *******pppppppfStack_f8;
  float *******pppppppfStack_f0;
  float *******pppppppfStack_e8;
  float *******pppppppfStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_b8;
  
  uVar31 = param_1[2];
  plVar14 = (long *)*param_1;
  if (param_2 <= (ulong)((long)(uVar31 - (long)plVar14) >> 2)) {
    puVar33 = (undefined4 *)param_1[1];
    uVar35 = (long)puVar33 - (long)plVar14 >> 2;
    uVar31 = uVar35;
    if (param_2 <= uVar35) {
      uVar31 = param_2;
    }
    if (uVar31 != 0) {
      uVar60 = *param_3;
      plVar40 = plVar14;
      do {
        *(undefined4 *)plVar40 = uVar60;
        uVar31 = uVar31 - 1;
        plVar40 = (long *)((long)plVar40 + 4);
      } while (uVar31 != 0);
    }
    if (param_2 < uVar35 || param_2 - uVar35 == 0) {
      param_1[1] = (long)plVar14 + param_2 * 4;
    }
    else {
      uVar60 = *param_3;
      lVar37 = param_2 * 4 + uVar35 * -4;
      puVar32 = puVar33;
      do {
        *puVar32 = uVar60;
        lVar37 = lVar37 + -4;
        puVar32 = puVar32 + 1;
      } while (lVar37 != 0);
      param_1[1] = (long)(puVar33 + (param_2 - uVar35));
    }
    return;
  }
  if (plVar14 != (long *)0x0) {
    param_1[1] = (long)plVar14;
    __ZdlPv();
    uVar31 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (param_2 >> 0x3e == 0) {
    uVar35 = (long)uVar31 >> 1;
    if ((ulong)((long)uVar31 >> 1) <= param_2) {
      uVar35 = param_2;
    }
    if (0x7ffffffffffffffb < uVar31) {
      uVar35 = 0x3fffffffffffffff;
    }
    FUN_1092cc154(param_1,uVar35);
    puVar32 = (undefined4 *)param_1[1];
    lVar37 = param_2 << 2;
    uVar60 = *param_3;
    puVar33 = puVar32;
    do {
      *puVar33 = uVar60;
      lVar37 = lVar37 + -4;
      puVar33 = puVar33 + 1;
    } while (lVar37 != 0);
    param_1[1] = (long)(puVar32 + param_2);
    return;
  }
  FUN_1092cc18c();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)(plVar14 + 0x12);
  pppppppfVar56 = (float *******)(long)(int)uVar3;
  if ((int)uVar3 < 1) {
    FUN_109550fa8(&pppppppfStack_158,plVar14,7);
    pppppppfVar55 = pppppppfStack_158;
    pppppppfVar52 = pppppppfStack_150;
  }
  else {
    uVar50 = 0;
    do {
      func_0x00010954d990(&ppppppfStack_390,plVar14,4,uVar50);
      uVar35 = (long)pppppppfStack_380 * (long)uStack_388;
      uVar31 = (ulong)-((uint)ppppppfStack_390 >> 2) & 3;
      if ((long)uVar35 <= (long)uVar31) {
        uVar31 = uVar35;
      }
      uVar20 = uVar35;
      if (((ulong)ppppppfStack_390 & 3) == 0) {
        uVar20 = uVar31;
      }
      uVar34 = uVar35 - uVar20;
      uVar31 = uVar34 + 3;
      uVar42 = uVar34 + 7;
      if ((long)uVar20 <= (long)uVar35) {
        uVar31 = uVar34;
        uVar42 = uVar34;
      }
      if (uVar34 + 3 < 7) {
        fVar61 = *(float *)ppppppfStack_390;
        if (1 < (long)uVar35) {
          lVar37 = uVar35 - 1;
          ppppppfVar16 = ppppppfStack_390;
          do {
            ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
            fVar61 = fVar61 + *(float *)ppppppfVar16;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
        }
      }
      else {
        pauVar21 = (undefined1 (*) [16])((long)ppppppfStack_390 + uVar20 * 4);
        auVar71 = *pauVar21;
        if (7 < (long)uVar34) {
          lVar37 = (uVar42 & 0xfffffffffffffff8) + uVar20;
          fVar61 = *(float *)pauVar21[1];
          fVar62 = *(float *)((long)pauVar21[1] + 4);
          fVar63 = *(float *)((long)pauVar21[1] + 8);
          fVar74 = *(float *)((long)pauVar21[1] + 0xc);
          auVar70 = auVar71;
          if (0xf < uVar34) {
            lVar25 = uVar20 + 8;
            pauVar21 = pauVar21 + 3;
            do {
              auVar70._0_4_ = auVar71._0_4_ + (float)*(undefined8 *)pauVar21[-1];
              auVar70._4_4_ = auVar71._4_4_ + (float)((ulong)*(undefined8 *)pauVar21[-1] >> 0x20);
              auVar70._8_4_ = auVar71._8_4_ + (float)*(undefined8 *)((long)pauVar21[-1] + 8);
              auVar70._12_4_ =
                   auVar71._12_4_ + (float)((ulong)*(undefined8 *)((long)pauVar21[-1] + 8) >> 0x20);
              fVar61 = fVar61 + (float)*(undefined8 *)*pauVar21;
              fVar62 = fVar62 + (float)((ulong)*(undefined8 *)*pauVar21 >> 0x20);
              fVar63 = fVar63 + (float)*(undefined8 *)((long)*pauVar21 + 8);
              fVar74 = fVar74 + (float)((ulong)*(undefined8 *)((long)*pauVar21 + 8) >> 0x20);
              lVar25 = lVar25 + 8;
              pauVar21 = pauVar21 + 2;
              auVar71 = auVar70;
            } while (lVar25 < lVar37);
          }
          auVar71._0_4_ = fVar61 + auVar70._0_4_;
          auVar71._4_4_ = fVar62 + auVar70._4_4_;
          auVar71._8_4_ = fVar63 + auVar70._8_4_;
          auVar71._12_4_ = fVar74 + auVar70._12_4_;
          if ((long)(uVar42 & 0xfffffffffffffff8) < (long)(uVar31 & 0xfffffffffffffffc)) {
            pfVar17 = (float *)((long)ppppppfStack_390 + lVar37 * 4);
            auVar71._0_4_ = auVar71._0_4_ + *pfVar17;
            auVar71._4_4_ = auVar71._4_4_ + pfVar17[1];
            auVar71._8_4_ = auVar71._8_4_ + pfVar17[2];
            auVar71._12_4_ = auVar71._12_4_ + pfVar17[3];
          }
        }
        auVar70 = NEON_ext(auVar71,auVar71,8,1);
        fVar61 = auVar71._0_4_ + auVar70._0_4_ + auVar71._4_4_ + auVar70._4_4_;
        ppppppfVar16 = ppppppfStack_390;
        uVar34 = uVar20;
        if (0 < (long)uVar20) {
          do {
            fVar61 = fVar61 + *(float *)ppppppfVar16;
            uVar34 = uVar34 - 1;
            ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
          } while (uVar34 != 0);
        }
        for (lVar37 = (uVar31 & 0xfffffffffffffffc) + uVar20; lVar37 < (long)uVar35;
            lVar37 = lVar37 + 1) {
          fVar61 = fVar61 + *(float *)((long)ppppppfStack_390 + lVar37 * 4);
        }
      }
      fVar61 = fVar61 / (float)(long)uVar35;
      uVar31 = (ulong)-((uint)ppppppfStack_390 >> 2) & 3;
      if ((long)uVar35 <= (long)uVar31) {
        uVar31 = uVar35;
      }
      uVar20 = uVar35;
      if (((ulong)ppppppfStack_390 & 3) == 0) {
        uVar20 = uVar31;
      }
      uVar34 = uVar35 - uVar20;
      uVar31 = uVar34 + 3;
      if ((long)uVar20 <= (long)uVar35) {
        uVar31 = uVar34;
      }
      ppppppfVar16 = ppppppfStack_390;
      uVar42 = uVar20;
      if (0 < (long)uVar20) {
        do {
          *(float *)ppppppfVar16 = *(float *)ppppppfVar16 - fVar61;
          uVar42 = uVar42 - 1;
          ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
        } while (uVar42 != 0);
      }
      lVar37 = (uVar31 & 0xfffffffffffffffc) + uVar20;
      if (3 < (long)uVar34) {
        pfVar17 = (float *)((long)ppppppfStack_390 + uVar20 * 4);
        uVar42 = uVar20;
        do {
          *(ulong *)(pfVar17 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20) - fVar61,
                        (float)*(undefined8 *)(pfVar17 + 2) - fVar61);
          *(ulong *)pfVar17 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar17 >> 0x20) - fVar61,
                        (float)*(undefined8 *)pfVar17 - fVar61);
          uVar42 = uVar42 + 4;
          pfVar17 = pfVar17 + 4;
        } while ((long)uVar42 < lVar37);
      }
      if (lVar37 < (long)uVar35) {
        lVar37 = uVar34 - (uVar31 & 0xfffffffffffffffc);
        pfVar17 = (float *)((long)ppppppfStack_390 + (uVar20 + ((long)uVar31 >> 2) * 4) * 4);
        do {
          *pfVar17 = *pfVar17 - fVar61;
          lVar37 = lVar37 + -1;
          pfVar17 = pfVar17 + 1;
        } while (lVar37 != 0);
      }
      uVar50 = uVar50 + 1;
    } while (uVar50 != uVar3);
    FUN_109550fa8(&pppppppfStack_158,plVar14,7);
    pppppppfVar52 = pppppppfStack_150;
    pppppppfVar55 = pppppppfStack_158;
    uVar31 = 0;
    pppppppfVar51 = pppppppfStack_158;
    pppppppfVar45 = pppppppfStack_158;
    do {
      func_0x00010954d990(&ppppppfStack_390,plVar14,4,uVar31);
      iVar43 = *(int *)((long)plVar14 + 0x1d4);
      if (0 < iVar43) {
        lVar37 = 0;
        ppppppfVar16 = ppppppfStack_390;
        do {
          iVar30 = (int)plVar14[0x3b];
          uVar35 = (ulong)iVar30;
          iVar29 = (int)lVar37;
          pfVar17 = (float *)((long)pppppppfVar55 +
                             ((long)pppppppfVar52 * uVar31 + (long)(iVar30 * iVar29)) * 4);
          if (((ulong)pfVar17 & 3) == 0) {
            uVar20 = (ulong)-((uint)pfVar17 >> 2) & 3;
            if ((long)uVar35 <= (long)uVar20) {
              uVar20 = uVar35;
            }
            if (0 < (long)uVar20) {
              uVar34 = 0;
              uVar47 = (ulong)-((uint)((int)pppppppfVar51 + iVar30 * iVar29 * 4) >> 2) & 3;
              uVar42 = uVar35;
              if ((long)uVar47 <= (long)uVar35) {
                uVar42 = uVar47;
              }
              do {
                *(float *)((long)pppppppfVar45 + ((long)(iVar30 * iVar29) + uVar34) * 4) =
                     *(float *)((long)ppppppfVar16 + uVar34 * 4);
                uVar34 = uVar34 + 1;
              } while (uVar42 != uVar34);
            }
            lVar25 = (uVar35 - uVar20 & 0xfffffffffffffffc) + uVar20;
            if (3 < (long)(uVar35 - uVar20)) {
              uVar42 = (ulong)-((uint)((int)pppppppfVar51 + iVar30 * iVar29 * 4) >> 2) & 3;
              uVar34 = uVar35;
              if ((long)uVar42 <= (long)uVar35) {
                uVar34 = uVar42;
              }
              lVar18 = uVar34 << 2;
              do {
                auVar71 = *(undefined1 (*) [16])((long)ppppppfVar16 + lVar18);
                puVar24 = (undefined8 *)((long)pppppppfVar45 + lVar18 + (long)(iVar30 * iVar29) * 4)
                ;
                puVar24[1] = auVar71._8_8_;
                *puVar24 = auVar71._0_8_;
                uVar20 = uVar20 + 4;
                lVar18 = lVar18 + 0x10;
              } while ((long)uVar20 < lVar25);
            }
            if (lVar25 < (long)uVar35) {
              do {
                *(float *)((long)pppppppfVar45 + (iVar30 * iVar29 + lVar25) * 4) =
                     *(float *)((long)ppppppfVar16 + lVar25 * 4);
                lVar25 = lVar25 + 1;
              } while (lVar25 < (long)uVar35);
            }
            iVar43 = *(int *)((long)plVar14 + 0x1d4);
          }
          else if (0 < iVar30) {
            pfVar17 = (float *)((long)pppppppfVar45 + (long)(iVar30 * iVar29) * 4);
            ppppppfVar22 = ppppppfVar16;
            do {
              *pfVar17 = *(float *)ppppppfVar22;
              uVar35 = uVar35 - 1;
              pfVar17 = pfVar17 + 1;
              ppppppfVar22 = (float ******)((long)ppppppfVar22 + 4);
            } while (uVar35 != 0);
          }
          lVar37 = lVar37 + 1;
          ppppppfVar16 = (float ******)((long)ppppppfVar16 + (long)pppppppfStack_380 * 4);
        } while (lVar37 < iVar43);
      }
      uVar31 = uVar31 + 1;
      pppppppfVar45 = (float *******)((long)pppppppfVar45 + (long)pppppppfVar52 * 4);
      pppppppfVar51 = (float *******)((long)pppppppfVar51 + (long)pppppppfVar52 * 4);
    } while (uVar31 != uVar3);
  }
  FUN_109550fa8(&pfStack_178,plVar14,8);
  pppppppfStack_400 = pppppppfStack_148;
  iVar43 = *(int *)((long)plVar14 + 0x1d4);
  lVar37 = plVar14[0x3b];
  uStack_3c8 = (float ******)0x0;
  pppppppfStack_3c0 = (float *******)0x0;
  pppppppfStack_3b8 = (float *******)0x0;
  if (pppppppfStack_148 == (float *******)0x0) {
LAB_10954df70:
    pppppppfVar51 = pppppppfStack_3b8;
    pppppppfVar45 = pppppppfStack_3c0;
    fVar61 = 1.0 / (float)((int)lVar37 * iVar43 + -1);
    lVar37 = (long)pppppppfVar52 + -1;
    if (((long)pppppppfVar52 < 1) ||
       (0x13 < (long)pppppppfStack_3c0 + (long)pppppppfVar52 + (long)pppppppfStack_3b8)) {
      if (0 < (long)pppppppfStack_3b8 * (long)pppppppfStack_3c0) {
        _bzero(uStack_3c8,(long)pppppppfStack_3b8 * (long)pppppppfStack_3c0 * 4);
      }
      ppppppfVar16 = uStack_3c8;
      pppppppfStack_138 = (float *******)CONCAT44(pppppppfStack_138._4_4_,0x3f800000);
      if ((pppppppfVar52 != (float *******)0x0) && (pppppppfStack_400 != (float *******)0x0)) {
        if (pppppppfVar51 == (float *******)0x1) {
          if (pppppppfStack_400 == (float *******)0x1) {
            pppppppfVar45 = (float *******)((long)pppppppfVar52 + 3);
            pppppppfVar51 = (float *******)((long)pppppppfVar52 + 7);
            if (-1 < (long)pppppppfVar52) {
              pppppppfVar45 = pppppppfVar52;
              pppppppfVar51 = pppppppfVar52;
            }
            if ((long)pppppppfVar52 + 3U < 7) {
              fVar62 = *(float *)pppppppfVar55 * fVar61 * *(float *)pppppppfVar55;
              if (1 < (long)pppppppfVar52) {
                do {
                  pppppppfVar55 = (float *******)((long)pppppppfVar55 + 4);
                  fVar62 = fVar62 + *(float *)pppppppfVar55 * fVar61 * *(float *)pppppppfVar55;
                  lVar37 = lVar37 + -1;
                } while (lVar37 != 0);
              }
            }
            else {
              auVar67._0_4_ = *(float *)pppppppfVar55 * *(float *)pppppppfVar55 * fVar61;
              auVar67._4_4_ =
                   *(float *)((long)pppppppfVar55 + 4) *
                   *(float *)((long)pppppppfVar55 + 4) * fVar61;
              auVar67._8_4_ = *(float *)(pppppppfVar55 + 1) * *(float *)(pppppppfVar55 + 1) * fVar61
              ;
              auVar67._12_4_ =
                   *(float *)((long)pppppppfVar55 + 0xc) *
                   *(float *)((long)pppppppfVar55 + 0xc) * fVar61;
              if (7 < (long)pppppppfVar52) {
                uVar31 = (ulong)pppppppfVar51 & 0xfffffffffffffff8;
                fVar62 = *(float *)(pppppppfVar55 + 2) * *(float *)(pppppppfVar55 + 2) * fVar61;
                fVar63 = *(float *)((long)pppppppfVar55 + 0x14) *
                         *(float *)((long)pppppppfVar55 + 0x14) * fVar61;
                fVar74 = *(float *)(pppppppfVar55 + 3) * *(float *)(pppppppfVar55 + 3) * fVar61;
                fVar77 = *(float *)((long)pppppppfVar55 + 0x1c) *
                         *(float *)((long)pppppppfVar55 + 0x1c) * fVar61;
                auVar68 = auVar67;
                if ((float *******)0xf < pppppppfVar52) {
                  pppppppfVar51 = pppppppfVar55 + 6;
                  lVar37 = 8;
                  do {
                    fVar79 = SUB84(pppppppfVar51[-1],0);
                    fVar76 = (float)((ulong)pppppppfVar51[-1] >> 0x20);
                    fVar78 = SUB84(pppppppfVar51[-2],0);
                    fVar75 = (float)((ulong)pppppppfVar51[-2] >> 0x20);
                    auVar68._0_4_ = auVar67._0_4_ + fVar78 * fVar78 * fVar61;
                    auVar68._4_4_ = auVar67._4_4_ + fVar75 * fVar75 * fVar61;
                    auVar68._8_4_ = auVar67._8_4_ + fVar79 * fVar79 * fVar61;
                    auVar68._12_4_ = auVar67._12_4_ + fVar76 * fVar76 * fVar61;
                    fVar78 = SUB84(*pppppppfVar51,0);
                    fVar75 = (float)((ulong)*pppppppfVar51 >> 0x20);
                    fVar79 = SUB84(pppppppfVar51[1],0);
                    fVar76 = (float)((ulong)pppppppfVar51[1] >> 0x20);
                    fVar62 = fVar62 + fVar78 * fVar78 * fVar61;
                    fVar63 = fVar63 + fVar75 * fVar75 * fVar61;
                    fVar74 = fVar74 + fVar79 * fVar79 * fVar61;
                    fVar77 = fVar77 + fVar76 * fVar76 * fVar61;
                    lVar37 = lVar37 + 8;
                    pppppppfVar51 = pppppppfVar51 + 4;
                    auVar67 = auVar68;
                  } while (lVar37 < (long)uVar31);
                }
                auVar67._0_4_ = fVar62 + auVar68._0_4_;
                auVar67._4_4_ = fVar63 + auVar68._4_4_;
                auVar67._8_4_ = fVar74 + auVar68._8_4_;
                auVar67._12_4_ = fVar77 + auVar68._12_4_;
                if ((long)uVar31 < (long)((ulong)pppppppfVar45 & 0xfffffffffffffffc)) {
                  pfVar17 = (float *)((long)pppppppfVar55 + uVar31 * 4);
                  auVar67._0_4_ = auVar67._0_4_ + *pfVar17 * *pfVar17 * fVar61;
                  auVar67._4_4_ = auVar67._4_4_ + pfVar17[1] * pfVar17[1] * fVar61;
                  auVar67._8_4_ = auVar67._8_4_ + pfVar17[2] * pfVar17[2] * fVar61;
                  auVar67._12_4_ = auVar67._12_4_ + pfVar17[3] * pfVar17[3] * fVar61;
                }
              }
              auVar71 = NEON_ext(auVar67,auVar67,8,1);
              fVar62 = auVar67._0_4_ + auVar71._0_4_ + auVar67._4_4_ + auVar71._4_4_;
              lVar37 = (long)pppppppfVar52 % 4;
              if (lVar37 != 0 &&
                  lVar37 < 0 ==
                  SBORROW8((long)pppppppfVar52,(ulong)pppppppfVar45 & 0xfffffffffffffffc)) {
                pppppppfVar55 = pppppppfVar55 + ((long)pppppppfVar45 >> 2) * 2;
                do {
                  fVar62 = fVar62 + *(float *)pppppppfVar55 * fVar61 * *(float *)pppppppfVar55;
                  lVar37 = lVar37 + -1;
                  pppppppfVar55 = (float *******)((long)pppppppfVar55 + 4);
                } while (lVar37 != 0);
              }
            }
            *(float *)uStack_3c8 = fVar62 + *(float *)uStack_3c8;
          }
          else {
            uStack_388 = pppppppfStack_400;
            pppppppfStack_378 = (float *******)CONCAT44(pppppppfStack_378._4_4_,fVar61);
            pppppppfStack_360 = pppppppfStack_400;
            pppppppfStack_380 = pppppppfVar52;
            pppppppfStack_370 = pppppppfVar55;
            pppppppfStack_368 = pppppppfVar52;
            FUN_109551690(&ppppppfStack_390,pppppppfVar55,pppppppfVar52);
          }
        }
        else if (pppppppfVar45 == (float *******)0x1) {
          if (pppppppfStack_400 == (float *******)0x1) {
            uStack_388 = (float *******)CONCAT44(fVar61,(undefined4)uStack_388);
            pppppppfStack_340 = (float *******)0x0;
            pppppppfStack_338 = (float *******)0x0;
            uStack_358 = 0;
            iStack_355 = 0;
            uStack_350 = 0;
            uStack_34c = 0;
            uStack_34b = 0;
            uStack_34a = 0;
            bStack_349 = 0;
            pppppppfStack_360 = (float *******)0x0;
            pppppppfStack_378 = pppppppfVar55;
            pppppppfStack_368 = pppppppfVar52;
            pppppppfStack_330 = pppppppfVar55;
            fVar61 = (float)FUN_1095517e8(&ppppppfStack_390,pppppppfVar52);
            *(float *)ppppppfVar16 = fVar61 + *(float *)ppppppfVar16;
          }
          else {
            pppppppfStack_100 = pppppppfStack_400;
            uStack_388 = pppppppfStack_400;
            pppppppfStack_378 = (float *******)CONCAT44(pppppppfStack_378._4_4_,fVar61);
            pppppppfStack_360 = pppppppfStack_400;
            bStack_348 = 0;
            bStack_347 = 0;
            bStack_346 = 0;
            uStack_345 = 0;
            uStack_344 = 0;
            pppppppfStack_340 = (float *******)0x0;
            pppppppfStack_380 = pppppppfVar52;
            pppppppfStack_370 = pppppppfVar55;
            pppppppfStack_368 = pppppppfVar52;
            pppppppfStack_330 = pppppppfVar52;
            uStack_110 = pppppppfVar55;
            uStack_108 = pppppppfVar52;
            FUN_10955196c(&uStack_110,&ppppppfStack_390,uStack_3c8,&uStack_3c8,&pppppppfStack_138);
          }
        }
        else {
          ppppppfStack_390 = (float ******)0x0;
          uStack_388 = (float *******)0x0;
          pppppppfStack_380 = pppppppfVar45;
          pppppppfStack_378 = pppppppfVar51;
          pppppppfStack_370 = pppppppfVar52;
          FUN_1093ecdf0(&pppppppfStack_370,&pppppppfStack_380,&pppppppfStack_378,1);
          pppppppfStack_368 = (float *******)((long)pppppppfStack_370 * (long)pppppppfStack_380);
          pppppppfStack_360 = (float *******)((long)pppppppfStack_378 * (long)pppppppfStack_370);
          FUN_1093ed160(fVar61,pppppppfStack_400,pppppppfStack_400,pppppppfVar52,pppppppfVar55,
                        pppppppfVar52,pppppppfVar55,pppppppfVar52,uStack_3c8,1,pppppppfStack_3c0,
                        &ppppppfStack_390,0);
          _free(ppppppfStack_390);
          _free(uStack_388);
        }
      }
    }
    else {
      if ((pppppppfStack_3c0 == pppppppfStack_400) && (pppppppfStack_3b8 == pppppppfStack_400)) {
        pppppppfVar45 = pppppppfStack_400;
      }
      else {
        if (pppppppfStack_400 != (float *******)0x0) {
          lVar25 = 0;
          if (pppppppfStack_400 != (float *******)0x0) {
            lVar25 = 0x7fffffffffffffff / (long)pppppppfStack_400;
          }
          if (lVar25 < (long)pppppppfStack_400) goto LAB_109550e78;
        }
        FUN_1093c3d54(&uStack_3c8,(long)pppppppfStack_400 * (long)pppppppfStack_400,
                      pppppppfStack_400,pppppppfStack_400);
        pppppppfStack_400 = pppppppfStack_3c0;
        pppppppfVar45 = pppppppfStack_3b8;
      }
      if (0 < (long)pppppppfVar45) {
        pppppppfVar36 = (float *******)0x0;
        pppppppfVar41 = (float *******)((ulong)pppppppfVar52 & 0x7ffffffffffffff8);
        pppppppfVar51 = pppppppfVar55 + 6;
        pfVar28 = (float *)((long)pppppppfVar55 + ((long)pppppppfVar52 * 4 & 0xfffffffffffffff0U));
        pfVar17 = (float *)((long)pppppppfVar55 + 4);
        pfVar15 = pfVar17;
        pfVar19 = pfVar28;
        pppppppfVar27 = pppppppfStack_400;
        pppppppfVar46 = pppppppfVar51;
        do {
          if (0 < (long)pppppppfVar27) {
            pppppppfVar26 = (float *******)0x0;
            pfVar1 = (float *)((long)pppppppfVar55 + (long)pppppppfVar36 * (long)pppppppfVar52 * 4);
            pppppppfVar44 = pppppppfVar51;
            pfVar54 = pfVar17;
            pfVar57 = pfVar28;
            pppppppfVar2 = pppppppfStack_3c0;
            if ((long)pppppppfStack_3c0 < 2) {
              pppppppfVar2 = (float *******)0x1;
            }
            do {
              pfVar38 = (float *)((long)pppppppfVar55 +
                                 (long)pppppppfVar26 * (long)pppppppfVar52 * 4);
              if (pppppppfVar52 < (float *******)0x4) {
                fVar62 = *pfVar38 * *pfVar1;
                lVar25 = lVar37;
                pfVar38 = pfVar54;
                pfVar48 = pfVar15;
                if ((float *******)0x1 < pppppppfVar52) {
                  do {
                    fVar62 = fVar62 + *pfVar38 * *pfVar48;
                    lVar25 = lVar25 + -1;
                    pfVar38 = pfVar38 + 1;
                    pfVar48 = pfVar48 + 1;
                  } while (lVar25 != 0);
                }
              }
              else {
                auVar64._0_4_ = *pfVar38 * *pfVar1;
                auVar64._4_4_ = pfVar38[1] * pfVar1[1];
                auVar64._8_4_ = pfVar38[2] * pfVar1[2];
                auVar64._12_4_ = pfVar38[3] * pfVar1[3];
                if ((float *******)0x7 < pppppppfVar52) {
                  fVar62 = pfVar38[4] * (float)*(undefined8 *)(pfVar1 + 4);
                  fVar63 = pfVar38[5] * (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
                  fVar74 = pfVar38[6] * (float)*(undefined8 *)(pfVar1 + 6);
                  fVar77 = pfVar38[7] * (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
                  auVar65 = auVar64;
                  if ((float *******)0xf < pppppppfVar52) {
                    pppppppfVar27 = (float *******)0x8;
                    pppppppfVar23 = pppppppfVar46;
                    pppppppfVar59 = pppppppfVar44;
                    do {
                      auVar65._0_4_ =
                           auVar64._0_4_ + SUB84(pppppppfVar59[-2],0) * SUB84(pppppppfVar23[-2],0);
                      auVar65._4_4_ =
                           auVar64._4_4_ +
                           (float)((ulong)pppppppfVar59[-2] >> 0x20) *
                           (float)((ulong)pppppppfVar23[-2] >> 0x20);
                      auVar65._8_4_ =
                           auVar64._8_4_ + SUB84(pppppppfVar59[-1],0) * SUB84(pppppppfVar23[-1],0);
                      auVar65._12_4_ =
                           auVar64._12_4_ +
                           (float)((ulong)pppppppfVar59[-1] >> 0x20) *
                           (float)((ulong)pppppppfVar23[-1] >> 0x20);
                      fVar62 = fVar62 + SUB84(*pppppppfVar59,0) * SUB84(*pppppppfVar23,0);
                      fVar63 = fVar63 + (float)((ulong)*pppppppfVar59 >> 0x20) *
                                        (float)((ulong)*pppppppfVar23 >> 0x20);
                      fVar74 = fVar74 + SUB84(pppppppfVar59[1],0) * SUB84(pppppppfVar23[1],0);
                      fVar77 = fVar77 + (float)((ulong)pppppppfVar59[1] >> 0x20) *
                                        (float)((ulong)pppppppfVar23[1] >> 0x20);
                      pppppppfVar27 = pppppppfVar27 + 1;
                      pppppppfVar23 = pppppppfVar23 + 4;
                      pppppppfVar59 = pppppppfVar59 + 4;
                      auVar64 = auVar65;
                    } while (pppppppfVar27 < pppppppfVar41);
                  }
                  auVar64._0_4_ = fVar62 + auVar65._0_4_;
                  auVar64._4_4_ = fVar63 + auVar65._4_4_;
                  auVar64._8_4_ = fVar74 + auVar65._8_4_;
                  auVar64._12_4_ = fVar77 + auVar65._12_4_;
                  if (pppppppfVar41 < (float *******)((ulong)pppppppfVar52 & 0x7ffffffffffffffc)) {
                    pfVar38 = pfVar38 + (long)pppppppfVar41;
                    uVar7 = *(undefined8 *)(pfVar1 + (long)pppppppfVar41 + 2);
                    uVar6 = *(undefined8 *)(pfVar1 + (long)pppppppfVar41);
                    auVar64._0_4_ = auVar64._0_4_ + *pfVar38 * (float)uVar6;
                    auVar64._4_4_ = auVar64._4_4_ + pfVar38[1] * (float)((ulong)uVar6 >> 0x20);
                    auVar64._8_4_ = auVar64._8_4_ + pfVar38[2] * (float)uVar7;
                    auVar64._12_4_ = auVar64._12_4_ + pfVar38[3] * (float)((ulong)uVar7 >> 0x20);
                  }
                }
                auVar71 = NEON_ext(auVar64,auVar64,8,1);
                fVar62 = auVar64._0_4_ + auVar71._0_4_ + auVar64._4_4_ + auVar71._4_4_;
                uVar31 = (ulong)pppppppfVar52 & 0x8000000000000003;
                pfVar38 = pfVar57;
                pfVar48 = pfVar19;
                if (pppppppfVar52 != (float *******)((ulong)pppppppfVar52 & 0x7ffffffffffffffc)) {
                  do {
                    fVar62 = fVar62 + *pfVar38 * *pfVar48;
                    uVar31 = uVar31 - 1;
                    pfVar38 = pfVar38 + 1;
                    pfVar48 = pfVar48 + 1;
                  } while (uVar31 != 0);
                }
              }
              *(float *)((long)uStack_3c8 +
                        (long)((long)pppppppfVar36 * (long)pppppppfStack_400 + (long)pppppppfVar26)
                        * 4) = fVar61 * fVar62;
              pppppppfVar26 = (float *******)((long)pppppppfVar26 + 1);
              pppppppfVar27 = pppppppfStack_3c0;
              pppppppfVar44 = (float *******)((long)pppppppfVar44 + (long)pppppppfVar52 * 4);
              pfVar54 = pfVar54 + (long)pppppppfVar52;
              pfVar57 = pfVar57 + (long)pppppppfVar52;
            } while (pppppppfVar26 != pppppppfVar2);
          }
          pppppppfVar36 = (float *******)((long)pppppppfVar36 + 1);
          pppppppfVar46 = (float *******)((long)pppppppfVar46 + (long)pppppppfVar52 * 4);
          pfVar19 = pfVar19 + (long)pppppppfVar52;
          pfVar15 = pfVar15 + (long)pppppppfVar52;
        } while (pppppppfVar36 != pppppppfVar45);
      }
    }
    uVar35 = (long)pppppppfStack_168 * (long)pppppppfStack_170;
    uVar31 = (ulong)-((uint)pfStack_178 >> 2) & 3;
    if ((long)uVar35 <= (long)uVar31) {
      uVar31 = uVar35;
    }
    uVar20 = uVar35;
    if (((ulong)pfStack_178 & 3) == 0) {
      uVar20 = uVar31;
    }
    uVar34 = uVar35 - uVar20;
    uVar31 = uVar34 + 3;
    if ((long)uVar20 <= (long)uVar35) {
      uVar31 = uVar34;
    }
    pfVar17 = pfStack_178;
    ppppppfVar16 = uStack_3c8;
    uVar42 = uVar20;
    if (0 < (long)uVar20) {
      do {
        *pfVar17 = *(float *)ppppppfVar16;
        uVar42 = uVar42 - 1;
        pfVar17 = pfVar17 + 1;
        ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
      } while (uVar42 != 0);
    }
    lVar37 = (uVar31 & 0xfffffffffffffffc) + uVar20;
    if (3 < (long)uVar34) {
      pfVar17 = (float *)((long)uStack_3c8 + uVar20 * 4);
      uVar42 = uVar20;
      pfVar28 = pfStack_178 + uVar20;
      do {
        uVar6 = *(undefined8 *)pfVar17;
        *(undefined8 *)(pfVar28 + 2) = *(undefined8 *)(pfVar17 + 2);
        *(undefined8 *)pfVar28 = uVar6;
        uVar42 = uVar42 + 4;
        pfVar17 = pfVar17 + 4;
        pfVar28 = pfVar28 + 4;
      } while ((long)uVar42 < lVar37);
    }
    if (lVar37 < (long)uVar35) {
      lVar37 = uVar34 - (uVar31 & 0xfffffffffffffffc);
      pfVar17 = (float *)((long)uStack_3c8 + (uVar20 + ((long)uVar31 >> 2) * 4) * 4);
      pfVar28 = pfStack_178 + uVar20 + ((long)uVar31 >> 2) * 4;
      do {
        *pfVar28 = *pfVar17;
        lVar37 = lVar37 + -1;
        pfVar17 = pfVar17 + 1;
        pfVar28 = pfVar28 + 1;
      } while (lVar37 != 0);
    }
    _free(uStack_3c8);
    iVar43 = *(int *)(*plVar14 + 0x3c);
    pppppppfVar55 = (float *******)(long)iVar43;
    pfStack_3e0 = (float *)0x0;
    pppppppfStack_3d8 = (float *******)0x0;
    pppppppfStack_3d0 = (float *******)0x0;
    if (pppppppfStack_170 != (float *******)0x0 && pppppppfStack_168 != (float *******)0x0) {
      lVar37 = 0;
      if (pppppppfStack_168 != (float *******)0x0) {
        lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_168;
      }
      if ((long)pppppppfStack_170 <= lVar37) goto LAB_10954e330;
LAB_109550e9c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109550ee0;
    }
LAB_10954e330:
    FUN_1093c3d54(&pfStack_3e0,uVar35,pppppppfStack_170,pppppppfStack_168);
    if ((pppppppfStack_3d8 != pppppppfStack_170) || (pppppppfStack_3d0 != pppppppfStack_168)) {
      if (pppppppfStack_170 != (float *******)0x0 && pppppppfStack_168 != (float *******)0x0) {
        lVar37 = 0;
        if (pppppppfStack_168 != (float *******)0x0) {
          lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_168;
        }
        if (lVar37 < (long)pppppppfStack_170) goto LAB_109550e9c;
      }
      FUN_1093c3d54(&pfStack_3e0,uVar35,pppppppfStack_170,pppppppfStack_168);
      uVar35 = (long)pppppppfStack_3d8 * (long)pppppppfStack_3d0;
    }
    pppppppfVar45 = pppppppfStack_3d0;
    pppppppfVar52 = pppppppfStack_3d8;
    uVar31 = uVar35 + 3;
    if (-1 < (long)uVar35) {
      uVar31 = uVar35;
    }
    if (3 < (long)uVar35) {
      lVar37 = 0;
      pfVar17 = pfStack_3e0;
      pfVar28 = pfStack_178;
      do {
        uVar6 = *(undefined8 *)pfVar28;
        *(undefined8 *)(pfVar17 + 2) = *(undefined8 *)(pfVar28 + 2);
        *(undefined8 *)pfVar17 = uVar6;
        lVar37 = lVar37 + 4;
        pfVar17 = pfVar17 + 4;
        pfVar28 = pfVar28 + 4;
      } while (lVar37 < (long)(uVar31 & 0xfffffffffffffffc));
    }
    lVar37 = (long)uVar35 % 4;
    if (lVar37 != 0 && lVar37 < 0 == SBORROW8(uVar35,uVar31 & 0xfffffffffffffffc)) {
      pfVar17 = pfStack_3e0 + ((long)uVar31 >> 2) * 4;
      pfVar28 = pfStack_178 + ((long)uVar31 >> 2) * 4;
      do {
        *pfVar17 = *pfVar28;
        lVar37 = lVar37 + -1;
        pfVar17 = pfVar17 + 1;
        pfVar28 = pfVar28 + 1;
      } while (lVar37 != 0);
    }
    uStack_34c = 0;
    uStack_34a = 0;
    bStack_349 = 0;
    bStack_347 = 0;
    uStack_350 = 0;
    uStack_358 = 0;
    uVar8 = uStack_358;
    iStack_355 = 0;
    iVar10 = iStack_355;
    pppppppfStack_360 = (float *******)0x0;
    pppppppfStack_378 = (float *******)0x0;
    pppppppfStack_380 = (float *******)0x0;
    pppppppfStack_368 = (float *******)0x0;
    pppppppfStack_370 = (float *******)0x0;
    uStack_388 = (float *******)0x0;
    ppppppfStack_390 = (float ******)0x0;
    pppppppfStack_310 = (float *******)0x0;
    pfStack_318 = (float *)0x0;
    pppppppfStack_300 = (float *******)0x0;
    pppppppfStack_308 = (float *******)0x0;
    pppppppfStack_2f0 = (float *******)0x0;
    pppppppfStack_2f8 = (float *******)0x0;
    uStack_2e0 = 0;
    ppppppfStack_2e8 = (float ******)0x0;
    uStack_2d0 = 0;
    pfStack_2d8 = (float *)0x0;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_288 = 0;
    pppppppfStack_260 = (float *******)0x0;
    pfStack_268 = (float *)0x0;
    lStack_250 = 0;
    pppppppfStack_258 = (float *******)0x0;
    ppppppfStack_240 = (float ******)0x0;
    pppppppfStack_248 = (float *******)0x0;
    pppppppfStack_230 = (float *******)0x0;
    pppppppfStack_238 = (float *******)0x0;
    uStack_220 = 0;
    ppppppfStack_228 = (float ******)0x0;
    uStack_210 = 0;
    pfStack_218 = (float *)0x0;
    uStack_200 = 0;
    uStack_208 = 0;
    uStack_1f0 = 0;
    uStack_1f8 = 0;
    uStack_1e0 = 0;
    uStack_1e8 = 0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c8 = 0;
    pppppppfStack_1a0 = (float *******)0x0;
    lStack_1a8 = 0;
    pppppppfStack_190 = (float *******)0x0;
    pfStack_198 = (float *)0x0;
    pppppppfStack_188 = (float *******)0x0;
    pppppppfStack_338 = pppppppfStack_3d8;
    pppppppfStack_330 = pppppppfStack_3d0;
    uStack_34b = 1;
    uStack_344 = 0x28;
    bStack_348 = 1;
    bStack_346 = 1;
    pppppppfVar51 = pppppppfStack_3d0;
    if ((long)pppppppfStack_3d8 <= (long)pppppppfStack_3d0) {
      pppppppfVar51 = pppppppfStack_3d8;
    }
    uStack_358 = SUB83(pppppppfVar51,0);
    uVar9 = uStack_358;
    iStack_355 = (int5)((ulong)pppppppfVar51 >> 0x18);
    iVar11 = iStack_355;
    pppppppfStack_328 = pppppppfVar51;
    if (pppppppfVar51 != (float *******)0x0) {
      if ((long)pppppppfVar51 < 1) {
        pppppppfVar36 = (float *******)0x0;
LAB_10954e4b8:
        pppppppfStack_360 = pppppppfVar36;
        if (pppppppfVar52 != (float *******)0x0) {
          lVar37 = 0;
          if (pppppppfVar51 != (float *******)0x0) {
            lVar37 = 0x7fffffffffffffff / (long)pppppppfVar51;
          }
          uStack_358 = uVar9;
          iStack_355 = iVar11;
          if (lVar37 < (long)pppppppfVar52) goto LAB_109550e50;
        }
        goto LAB_10954e4d0;
      }
      uStack_358 = uVar8;
      iStack_355 = iVar10;
      if ((ulong)pppppppfVar51 >> 0x3e == 0) {
        pppppppfVar36 = (float *******)((long)pppppppfVar51 << 2);
        _malloc();
        if (pppppppfVar36 != (float *******)0x0) goto LAB_10954e4b8;
      }
      goto LAB_109550e50;
    }
LAB_10954e4d0:
    uStack_358 = uVar9;
    iStack_355 = iVar11;
    FUN_1093c3d54(&ppppppfStack_390,(long)pppppppfVar51 * (long)pppppppfVar52,pppppppfVar52,
                  pppppppfVar51);
    pppppppfVar51 = pppppppfStack_330;
    if (((bStack_347 & 1) == 0) && (pppppppfVar51 = pppppppfStack_328, bStack_346 != 1)) {
      pppppppfVar51 = (float *******)0x0;
    }
    else if ((pppppppfStack_330 != (float *******)0x0) && (pppppppfVar51 != (float *******)0x0)) {
      lVar37 = 0;
      if (pppppppfVar51 != (float *******)0x0) {
        lVar37 = 0x7fffffffffffffff / (long)pppppppfVar51;
      }
      if (lVar37 < (long)pppppppfStack_330) goto LAB_109550e50;
    }
    FUN_1093c3d54(&pppppppfStack_378,(long)pppppppfVar51 * (long)pppppppfStack_330);
    if (pppppppfStack_328 != (float *******)0x0) {
      lVar37 = 0;
      if (pppppppfStack_328 != (float *******)0x0) {
        lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_328;
      }
      if (lVar37 < (long)pppppppfStack_328) goto LAB_109550e50;
    }
    FUN_1093c3d54(&pfStack_318,(long)pppppppfStack_328 * (long)pppppppfStack_328,pppppppfStack_328,
                  pppppppfStack_328);
    if ((long)pppppppfStack_338 < (long)pppppppfStack_330) {
      if ((pppppppfStack_330 != pppppppfStack_2f8) || (pppppppfStack_338 != pppppppfStack_2f0)) {
        _free(uStack_298);
        _free(uStack_2a8);
        _free(uStack_2b8);
        _free(uStack_2c8);
        _free(pfStack_2d8);
        _free(ppppppfStack_2e8);
        _free(pppppppfStack_300);
        FUN_109551be4(&pppppppfStack_300,pppppppfStack_330,pppppppfStack_338);
      }
      pppppppfVar51 = (float *******)&pppppppfStack_330;
      lVar37 = lStack_250;
      if ((((bStack_347 & 1) == 0) &&
          (pppppppfVar51 = (float *******)&pppppppfStack_338, pppppppfVar36 = pppppppfStack_248,
          bStack_346 != 1)) ||
         (pppppppfVar36 = (float *******)*pppppppfVar51, pppppppfStack_248 == pppppppfVar36)) {
LAB_10954e684:
        pppppppfStack_248 = pppppppfVar36;
        lStack_250 = lVar37;
        if ((pppppppfStack_330 != (float *******)0x0) && (pppppppfStack_338 != (float *******)0x0))
        {
          lVar37 = 0;
          if (pppppppfStack_338 != (float *******)0x0) {
            lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_338;
          }
          if (lVar37 < (long)pppppppfStack_330) goto LAB_109550e50;
        }
        FUN_1093c3d54(&pfStack_268,(long)pppppppfStack_338 * (long)pppppppfStack_330);
        goto LAB_10954e6b0;
      }
      _free(lStack_250);
      if ((long)pppppppfVar36 < 1) {
        lVar37 = 0;
        goto LAB_10954e684;
      }
      if ((ulong)pppppppfVar36 >> 0x3e == 0) {
        lVar37 = (long)pppppppfVar36 << 2;
        _malloc();
        if (lVar37 != 0) goto LAB_10954e684;
      }
      goto LAB_109550e50;
    }
LAB_10954e6b0:
    if ((long)pppppppfStack_330 < (long)pppppppfStack_338) {
      if ((pppppppfStack_338 != pppppppfStack_238) || (pppppppfStack_330 != pppppppfStack_230)) {
        _free(uStack_1d8);
        _free(uStack_1e8);
        _free(uStack_1f8);
        _free(uStack_208);
        _free(pfStack_218);
        _free(ppppppfStack_228);
        _free(ppppppfStack_240);
        FUN_109551be4(&ppppppfStack_240,pppppppfStack_338,pppppppfStack_330);
      }
      pppppppfVar51 = (float *******)&pppppppfStack_338;
      if (((bStack_349 & 1) == 0) &&
         (pppppppfVar51 = (float *******)&pppppppfStack_330, bStack_348 != 1)) goto LAB_10954e778;
      pppppppfVar51 = (float *******)*pppppppfVar51;
      if (pppppppfStack_1a0 == pppppppfVar51) {
LAB_10954e770:
        pppppppfStack_1a0 = pppppppfVar51;
        goto LAB_10954e778;
      }
      _free(lStack_1a8);
      if ((long)pppppppfVar51 < 1) {
        lVar37 = 0;
LAB_10954e76c:
        lStack_1a8 = lVar37;
        goto LAB_10954e770;
      }
      if ((ulong)pppppppfVar51 >> 0x3e == 0) {
        lVar37 = (long)pppppppfVar51 << 2;
        _malloc();
        if (lVar37 != 0) goto LAB_10954e76c;
      }
      goto LAB_109550e50;
    }
LAB_10954e778:
    if (pppppppfStack_338 != pppppppfStack_330) {
      if ((pppppppfVar52 != (float *******)0x0) && (pppppppfVar45 != (float *******)0x0)) {
        lVar37 = 0;
        if (pppppppfVar45 != (float *******)0x0) {
          lVar37 = 0x7fffffffffffffff / (long)pppppppfVar45;
        }
        if (lVar37 < (long)pppppppfVar52) goto LAB_109550e50;
      }
      FUN_1093c3d54(&pfStack_198,(long)pppppppfVar45 * (long)pppppppfVar52,pppppppfVar52,
                    pppppppfVar45);
    }
    pppppppfVar52 = pppppppfStack_3d8;
    pfVar17 = pfStack_3e0;
    uVar20 = (long)pppppppfStack_3d0 * (long)pppppppfStack_3d8;
    uVar31 = uVar20 + 3;
    uVar35 = uVar20 + 7;
    if (-1 < (long)uVar20) {
      uVar31 = uVar20;
      uVar35 = uVar20;
    }
    uVar34 = uVar31 & 0xfffffffffffffffc;
    if (uVar20 + 3 < 7) {
      fVar61 = ABS(*pfStack_3e0);
      if (1 < (long)uVar20) {
        lVar37 = uVar20 - 1;
        pfVar28 = pfStack_3e0;
        do {
          pfVar28 = pfVar28 + 1;
          fVar62 = ABS(*pfVar28);
          bVar13 = true;
          if ((fVar62 <= fVar61) && (bVar13 = true, !NAN(*pfVar28))) {
            bVar13 = false;
          }
          if (!bVar13) {
            fVar62 = fVar61;
          }
          if (!NAN(fVar61)) {
            fVar61 = fVar62;
          }
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
      }
    }
    else {
      auVar66._0_4_ = ABS(*pfStack_3e0);
      auVar66._4_4_ = ABS(pfStack_3e0[1]);
      auVar66._8_4_ = ABS(pfStack_3e0[2]);
      auVar66._12_4_ = ABS(pfStack_3e0[3]);
      if (7 < (long)uVar20) {
        uVar35 = uVar35 & 0xfffffffffffffff8;
        auVar72._0_4_ = ABS(pfStack_3e0[4]);
        auVar72._4_4_ = ABS(pfStack_3e0[5]);
        auVar72._8_4_ = ABS(pfStack_3e0[6]);
        auVar72._12_4_ = ABS(pfStack_3e0[7]);
        if (0xf < uVar20) {
          pfVar28 = pfStack_3e0 + 0xc;
          lVar37 = 8;
          do {
            auVar4._4_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar28 + -4) >> 0x20));
            auVar4._0_4_ = ABS((float)*(undefined8 *)(pfVar28 + -4));
            auVar4._8_4_ = ABS((float)*(undefined8 *)(pfVar28 + -2));
            auVar4._12_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar28 + -2) >> 0x20));
            auVar66 = NEON_fmax(auVar66,auVar4,4);
            auVar5._4_4_ = ABS((float)((ulong)*(undefined8 *)pfVar28 >> 0x20));
            auVar5._0_4_ = ABS((float)*(undefined8 *)pfVar28);
            auVar5._8_4_ = ABS((float)*(undefined8 *)(pfVar28 + 2));
            auVar5._12_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar28 + 2) >> 0x20));
            auVar72 = NEON_fmax(auVar72,auVar5,4);
            lVar37 = lVar37 + 8;
            pfVar28 = pfVar28 + 8;
          } while (lVar37 < (long)uVar35);
        }
        auVar66 = NEON_fmax(auVar66,auVar72,4);
        if ((long)uVar35 < (long)uVar34) {
          pfVar28 = pfStack_3e0 + uVar35;
          auVar73._0_4_ = ABS(*pfVar28);
          auVar73._4_4_ = ABS(pfVar28[1]);
          auVar73._8_4_ = ABS(pfVar28[2]);
          auVar73._12_4_ = ABS(pfVar28[3]);
          auVar66 = NEON_fmax(auVar66,auVar73,4);
        }
      }
      uStack_108 = auVar66._8_8_;
      uStack_110 = auVar66._0_8_;
      uVar35 = 2;
      do {
        uVar42 = 0;
        do {
          fVar62 = *(float *)((long)&uStack_110 + uVar42 * 4);
          fVar61 = *(float *)((long)&uStack_110 + uVar42 * 4 + uVar35 * 4);
          bVar13 = true;
          if ((fVar61 <= fVar62) && (bVar13 = true, !NAN(fVar61))) {
            bVar13 = false;
          }
          if (!bVar13) {
            fVar61 = fVar62;
          }
          if (!NAN(fVar62)) {
            fVar62 = fVar61;
          }
          *(float *)((long)&uStack_110 + uVar42 * 4) = fVar62;
          uVar42 = uVar42 + 1;
        } while (uVar35 != uVar42);
        bVar13 = 1 < uVar35;
        uVar35 = uVar35 >> 1;
      } while (bVar13);
      lVar37 = (long)uVar20 % 4;
      fVar61 = (float)uStack_110;
      if (lVar37 != 0 && lVar37 < 0 == SBORROW8(uVar20,uVar34)) {
        pfVar28 = pfStack_3e0 + ((long)uVar31 >> 2) * 4;
        do {
          fVar62 = ABS(*pfVar28);
          bVar13 = true;
          if ((fVar62 <= fVar61) && (bVar13 = true, !NAN(*pfVar28))) {
            bVar13 = false;
          }
          if (!bVar13) {
            fVar62 = fVar61;
          }
          if (!NAN(fVar61)) {
            fVar61 = fVar62;
          }
          lVar37 = lVar37 + -1;
          pfVar28 = pfVar28 + 1;
        } while (lVar37 != 0);
      }
    }
    if ((uint)ABS(fVar61) < 0x7f800000) {
      fVar62 = 1.0;
      if (fVar61 != 0.0) {
        fVar62 = fVar61;
      }
      if (pppppppfStack_338 == pppppppfStack_330) {
        pppppppfVar45 = pppppppfStack_328;
        pppppppfVar51 = pppppppfStack_328;
        if (pppppppfStack_310 != pppppppfStack_328 || pppppppfStack_308 != pppppppfStack_328) {
          if (pppppppfStack_328 != (float *******)0x0) {
            lVar37 = 0;
            if (pppppppfStack_328 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_328;
            }
            if (lVar37 < (long)pppppppfStack_328) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pfStack_318,(long)pppppppfStack_328 * (long)pppppppfStack_328,
                        pppppppfStack_328,pppppppfStack_328);
          pppppppfVar45 = pppppppfStack_310;
          pppppppfVar51 = pppppppfStack_308;
        }
        if (0 < (long)pppppppfVar51) {
          pppppppfVar46 = (float *******)0x0;
          pppppppfVar36 = (float *******)0x0;
          pfVar28 = pfStack_318;
          do {
            pfVar19 = pfVar28;
            pfVar15 = pfVar17;
            pppppppfVar27 = pppppppfVar46;
            if (0 < (long)pppppppfVar46) {
              do {
                *pfVar19 = *pfVar15 / fVar62;
                pppppppfVar27 = (float *******)((long)pppppppfVar27 + -1);
                pfVar19 = pfVar19 + 1;
                pfVar15 = pfVar15 + 1;
              } while (pppppppfVar27 != (float *******)0x0);
            }
            lVar37 = ((long)pppppppfVar45 - (long)pppppppfVar46 & 0xfffffffffffffffcU) +
                     (long)pppppppfVar46;
            if (3 < (long)pppppppfVar45 - (long)pppppppfVar46) {
              lVar25 = (long)pppppppfVar46 << 2;
              pppppppfVar27 = pppppppfVar46;
              do {
                pfVar19 = (float *)((long)pfVar17 + lVar25);
                fVar61 = *pfVar19;
                fVar63 = pfVar19[1];
                fVar74 = pfVar19[3];
                pfVar15 = (float *)((long)pfVar28 + lVar25);
                pfVar15[2] = pfVar19[2] / fVar62;
                pfVar15[3] = fVar74 / fVar62;
                *pfVar15 = fVar61 / fVar62;
                pfVar15[1] = fVar63 / fVar62;
                pppppppfVar27 = (float *******)((long)pppppppfVar27 + 4);
                lVar25 = lVar25 + 0x10;
              } while ((long)pppppppfVar27 < lVar37);
            }
            for (; lVar37 < (long)pppppppfVar45; lVar37 = lVar37 + 1) {
              pfVar28[lVar37] = pfVar17[lVar37] / fVar62;
            }
            uVar31 = (long)pppppppfVar46 + ((ulong)(uint)-(int)pppppppfVar45 & 3);
            pppppppfVar27 = (float *******)(uVar31 & 3);
            uVar31 = -uVar31;
            if (-1 < (long)uVar31) {
              pppppppfVar27 = (float *******)-(uVar31 & 3);
            }
            pppppppfVar46 = pppppppfVar45;
            if ((long)pppppppfVar27 <= (long)pppppppfVar45) {
              pppppppfVar46 = pppppppfVar27;
            }
            pppppppfVar36 = (float *******)((long)pppppppfVar36 + 1);
            pfVar17 = pfVar17 + (long)pppppppfVar52;
            pfVar28 = pfVar28 + (long)pppppppfVar45;
          } while (pppppppfVar36 != pppppppfVar51);
        }
        if (bStack_349 == 1) {
          if (pppppppfStack_338 != (float *******)0x0) {
            lVar37 = 0;
            if (pppppppfStack_338 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_338;
            }
            if (lVar37 < (long)pppppppfStack_338) goto LAB_109550e50;
          }
          FUN_1093c3d54(&ppppppfStack_390,(long)pppppppfStack_338 * (long)pppppppfStack_338,
                        pppppppfStack_338,pppppppfStack_338);
          if (0 < (long)pppppppfStack_380) {
            pppppppfVar52 = (float *******)0x0;
            ppppppfVar16 = ppppppfStack_390;
            do {
              if (0 < (long)uStack_388) {
                pppppppfVar45 = (float *******)0x0;
                do {
                  fVar61 = 1.0;
                  if (pppppppfVar52 != pppppppfVar45) {
                    fVar61 = 0.0;
                  }
                  *(float *)((long)ppppppfVar16 + (long)pppppppfVar45 * 4) = fVar61;
                  pppppppfVar45 = (float *******)((long)pppppppfVar45 + 1);
                } while (uStack_388 != pppppppfVar45);
              }
              pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
              ppppppfVar16 = (float ******)((long)ppppppfVar16 + (long)uStack_388 * 4);
            } while (pppppppfVar52 != pppppppfStack_380);
          }
        }
        if (bStack_348 == 1) {
          if ((pppppppfStack_338 != (float *******)0x0) && (pppppppfStack_328 != (float *******)0x0)
             ) {
            lVar37 = 0;
            if (pppppppfStack_328 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_328;
            }
            if (lVar37 < (long)pppppppfStack_338) goto LAB_109550e50;
          }
          FUN_1093c3d54(&ppppppfStack_390,(long)pppppppfStack_328 * (long)pppppppfStack_338);
          if (0 < (long)pppppppfStack_380) {
            pppppppfVar52 = (float *******)0x0;
            ppppppfVar16 = ppppppfStack_390;
            do {
              if (0 < (long)uStack_388) {
                pppppppfVar45 = (float *******)0x0;
                do {
                  fVar61 = 1.0;
                  if (pppppppfVar52 != pppppppfVar45) {
                    fVar61 = 0.0;
                  }
                  *(float *)((long)ppppppfVar16 + (long)pppppppfVar45 * 4) = fVar61;
                  pppppppfVar45 = (float *******)((long)pppppppfVar45 + 1);
                } while (uStack_388 != pppppppfVar45);
              }
              pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
              ppppppfVar16 = (float ******)((long)ppppppfVar16 + (long)uStack_388 * 4);
            } while (pppppppfVar52 != pppppppfStack_380);
          }
        }
        if (bStack_347 == 1) {
          if (pppppppfStack_330 != (float *******)0x0) {
            lVar37 = 0;
            if (pppppppfStack_330 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_330;
            }
            if (lVar37 < (long)pppppppfStack_330) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pppppppfStack_378,(long)pppppppfStack_330 * (long)pppppppfStack_330,
                        pppppppfStack_330,pppppppfStack_330);
          if (0 < (long)pppppppfStack_368) {
            pppppppfVar52 = (float *******)0x0;
            pppppppfVar45 = pppppppfStack_378;
            do {
              if (0 < (long)pppppppfStack_370) {
                pppppppfVar51 = (float *******)0x0;
                do {
                  fVar61 = 1.0;
                  if (pppppppfVar52 != pppppppfVar51) {
                    fVar61 = 0.0;
                  }
                  *(float *)((long)pppppppfVar45 + (long)pppppppfVar51 * 4) = fVar61;
                  pppppppfVar51 = (float *******)((long)pppppppfVar51 + 1);
                } while (pppppppfStack_370 != pppppppfVar51);
              }
              pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
              pppppppfVar45 = (float *******)((long)pppppppfVar45 + (long)pppppppfStack_370 * 4);
            } while (pppppppfVar52 != pppppppfStack_368);
          }
        }
        if (bStack_346 == 1) {
          if ((pppppppfStack_330 != (float *******)0x0) && (pppppppfStack_328 != (float *******)0x0)
             ) {
            lVar37 = 0;
            if (pppppppfStack_328 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_328;
            }
            if (lVar37 < (long)pppppppfStack_330) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pppppppfStack_378,(long)pppppppfStack_328 * (long)pppppppfStack_330);
          if (0 < (long)pppppppfStack_368) {
            pppppppfVar52 = (float *******)0x0;
            pppppppfVar45 = pppppppfStack_378;
            do {
              if (0 < (long)pppppppfStack_370) {
                pppppppfVar51 = (float *******)0x0;
                do {
                  fVar61 = 1.0;
                  if (pppppppfVar52 != pppppppfVar51) {
                    fVar61 = 0.0;
                  }
                  *(float *)((long)pppppppfVar45 + (long)pppppppfVar51 * 4) = fVar61;
                  pppppppfVar51 = (float *******)((long)pppppppfVar51 + 1);
                } while (pppppppfStack_370 != pppppppfVar51);
              }
              pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
              pppppppfVar45 = (float *******)((long)pppppppfVar45 + (long)pppppppfStack_370 * 4);
            } while (pppppppfVar52 != pppppppfStack_368);
          }
        }
      }
      else {
        if (pppppppfStack_190 != pppppppfStack_3d8 || pppppppfStack_188 != pppppppfStack_3d0) {
          if ((pppppppfStack_3d8 != (float *******)0x0) && (pppppppfStack_3d0 != (float *******)0x0)
             ) {
            lVar37 = 0;
            if (pppppppfStack_3d0 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_3d0;
            }
            if (lVar37 < (long)pppppppfStack_3d8) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pfStack_198,uVar20,pppppppfStack_3d8);
          uVar20 = (long)pppppppfStack_188 * (long)pppppppfStack_190;
          uVar34 = uVar20 + 3;
          if (-1 < (long)uVar20) {
            uVar34 = uVar20;
          }
          uVar34 = uVar34 & 0xfffffffffffffffc;
        }
        pppppppfVar52 = pppppppfStack_190;
        pfVar28 = pfStack_198;
        if (3 < (long)uVar20) {
          lVar37 = 0;
          pfVar19 = pfStack_198;
          pfVar15 = pfVar17;
          do {
            fVar61 = *pfVar15;
            fVar63 = pfVar15[1];
            fVar74 = pfVar15[3];
            pfVar19[2] = pfVar15[2] / fVar62;
            pfVar19[3] = fVar74 / fVar62;
            *pfVar19 = fVar61 / fVar62;
            pfVar19[1] = fVar63 / fVar62;
            lVar37 = lVar37 + 4;
            pfVar19 = pfVar19 + 4;
            pfVar15 = pfVar15 + 4;
          } while (lVar37 < (long)uVar34);
        }
        lVar37 = uVar20 - uVar34;
        if (lVar37 != 0 && (long)uVar34 <= (long)uVar20) {
          pfVar19 = pfStack_198 + uVar34;
          pfVar17 = pfVar17 + uVar34;
          do {
            *pfVar19 = *pfVar17 / fVar62;
            lVar37 = lVar37 + -1;
            pfVar19 = pfVar19 + 1;
            pfVar17 = pfVar17 + 1;
          } while (lVar37 != 0);
        }
        if ((long)pppppppfStack_190 < (long)pppppppfStack_188) {
          if ((pppppppfStack_260 != pppppppfStack_188) ||
             (pppppppfVar45 = pppppppfStack_188, pppppppfVar51 = pppppppfStack_190,
             pppppppfStack_258 != pppppppfStack_190)) {
            if ((pppppppfStack_188 != (float *******)0x0) &&
               (pppppppfStack_190 != (float *******)0x0)) {
              lVar37 = 0;
              if (pppppppfStack_190 != (float *******)0x0) {
                lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_190;
              }
              if (lVar37 < (long)pppppppfStack_188) goto LAB_109550e50;
            }
            FUN_1093c3d54(&pfStack_268,(long)pppppppfStack_190 * (long)pppppppfStack_188,
                          pppppppfStack_188,pppppppfStack_190);
            pppppppfVar45 = pppppppfStack_260;
            pppppppfVar51 = pppppppfStack_258;
          }
          if (0 < (long)pppppppfVar51) {
            pppppppfVar36 = (float *******)0x0;
            pfVar17 = pfStack_268;
            do {
              pfVar15 = pfVar17;
              pfVar19 = pfVar28;
              pppppppfVar46 = pppppppfVar45;
              if (0 < (long)pppppppfVar45) {
                do {
                  *pfVar15 = *pfVar19;
                  pfVar19 = pfVar19 + (long)pppppppfVar52;
                  pppppppfVar46 = (float *******)((long)pppppppfVar46 + -1);
                  pfVar15 = pfVar15 + 1;
                } while (pppppppfVar46 != (float *******)0x0);
              }
              pppppppfVar36 = (float *******)((long)pppppppfVar36 + 1);
              pfVar28 = pfVar28 + 1;
              pfVar17 = pfVar17 + (long)pppppppfVar45;
            } while (pppppppfVar36 != pppppppfVar51);
          }
          func_0x0001093c3e60(&pppppppfStack_300,&pfStack_268);
          pppppppfVar45 = pppppppfStack_190;
          pppppppfVar52 = pppppppfStack_300;
          if (pppppppfStack_190 != (float *******)0x0) {
            lVar37 = 0;
            if (pppppppfStack_190 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_190;
            }
            if (lVar37 < (long)pppppppfStack_190) goto LAB_109550e50;
          }
          lVar37 = (long)pppppppfStack_190 * (long)pppppppfStack_190;
          FUN_1093c3d54(&pfStack_318,lVar37,pppppppfStack_190,pppppppfStack_190);
          pppppppfVar51 = pppppppfStack_2f8;
          if ((pppppppfStack_310 != pppppppfVar45) ||
             (pppppppfVar36 = pppppppfVar45, pppppppfStack_308 != pppppppfVar45)) {
            if (pppppppfVar45 != (float *******)0x0) {
              lVar25 = 0;
              if (pppppppfVar45 != (float *******)0x0) {
                lVar25 = 0x7fffffffffffffff / (long)pppppppfVar45;
              }
              if (lVar25 < (long)pppppppfVar45) goto LAB_109550e50;
            }
            FUN_1093c3d54(&pfStack_318,lVar37,pppppppfVar45,pppppppfVar45);
            pppppppfVar45 = pppppppfStack_308;
            pppppppfVar36 = pppppppfStack_310;
          }
          pfVar17 = pfStack_318;
          if (0 < (long)pppppppfVar45) {
            pppppppfVar46 = (float *******)0x0;
            pppppppfVar27 = pppppppfVar52;
            pfVar28 = pfStack_318;
            do {
              pppppppfVar41 = pppppppfVar36;
              if ((long)pppppppfVar46 <= (long)pppppppfVar36) {
                pppppppfVar41 = pppppppfVar46;
              }
              if ((long)pppppppfVar41 < 1) {
                pppppppfVar41 = (float *******)0x0;
              }
              else {
                _bzero(pfVar17 + (long)pppppppfVar46 * (long)pppppppfVar36,(long)pppppppfVar41 << 2)
                ;
              }
              if ((long)pppppppfVar41 < (long)pppppppfVar36) {
                pfVar17[(long)((long)pppppppfVar41 * (long)pppppppfVar36 + (long)pppppppfVar41)] =
                     *(float *)((long)pppppppfVar52 +
                               (long)((long)pppppppfVar41 * (long)pppppppfVar51 +
                                     (long)pppppppfVar41) * 4);
                pppppppfVar41 = (float *******)((long)pppppppfVar41 + 1);
              }
              lVar37 = (long)pppppppfVar36 - (long)pppppppfVar41;
              if (lVar37 != 0 && (long)pppppppfVar41 <= (long)pppppppfVar36) {
                pppppppfVar26 =
                     (float *******)
                     ((long)pppppppfVar27 + (long)pppppppfVar51 * 4 * (long)pppppppfVar41);
                pfVar19 = pfVar28 + (long)pppppppfVar41;
                do {
                  *pfVar19 = *(float *)pppppppfVar26;
                  pppppppfVar26 = (float *******)((long)pppppppfVar26 + (long)pppppppfVar51 * 4);
                  lVar37 = lVar37 + -1;
                  pfVar19 = pfVar19 + 1;
                } while (lVar37 != 0);
              }
              pppppppfVar46 = (float *******)((long)pppppppfVar46 + 1);
              pppppppfVar27 = (float *******)((long)pppppppfVar27 + 4);
              pfVar28 = pfVar28 + (long)pppppppfVar36;
            } while (pppppppfVar46 != pppppppfVar45);
          }
          pppppppfVar52 = pppppppfStack_2f8;
          if (bStack_347 != 1) {
            if (bStack_346 == 1) {
              if ((pppppppfStack_188 != (float *******)0x0) &&
                 (pppppppfStack_190 != (float *******)0x0)) {
                lVar37 = 0;
                if (pppppppfStack_190 != (float *******)0x0) {
                  lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_190;
                }
                if (lVar37 < (long)pppppppfStack_188) goto LAB_109550e50;
              }
              FUN_1093c3d54(&pppppppfStack_378,(long)pppppppfStack_190 * (long)pppppppfStack_188);
              if (0 < (long)pppppppfStack_368) {
                pppppppfVar52 = (float *******)0x0;
                pppppppfVar45 = pppppppfStack_378;
                do {
                  if (0 < (long)pppppppfStack_370) {
                    pppppppfVar51 = (float *******)0x0;
                    do {
                      fVar61 = 1.0;
                      if (pppppppfVar52 != pppppppfVar51) {
                        fVar61 = 0.0;
                      }
                      *(float *)((long)pppppppfVar45 + (long)pppppppfVar51 * 4) = fVar61;
                      pppppppfVar51 = (float *******)((long)pppppppfVar51 + 1);
                    } while (pppppppfStack_370 != pppppppfVar51);
                  }
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
                  pppppppfVar45 = (float *******)((long)pppppppfVar45 + (long)pppppppfStack_370 * 4)
                  ;
                } while (pppppppfVar52 != pppppppfStack_368);
              }
              uStack_108 = &ppppppfStack_2e8;
              pppppppfStack_100 = (float *******)((ulong)pppppppfStack_100 & 0xffffffffffffff00);
              pppppppfStack_f8 = pppppppfStack_2f0;
              if ((long)pppppppfStack_2f8 <= (long)pppppppfStack_2f0) {
                pppppppfStack_f8 = pppppppfStack_2f8;
              }
              pppppppfStack_f0 = (float *******)0x0;
              uStack_110 = (float *******)&pppppppfStack_300;
              FUN_109551d70(&uStack_110,&pppppppfStack_378,&lStack_250,0);
            }
LAB_10954f77c:
            if (((bStack_349 & 1) != 0) || ((bStack_348 & 1) != 0)) {
              FUN_1095537f8(&ppppppfStack_390,&pfStack_2d8);
            }
            goto LAB_10954f79c;
          }
          ppppppfStack_130 = (float ******)&ppppppfStack_2e8;
          uStack_128 = 0;
          pppppppfVar45 = pppppppfStack_2f0;
          if ((long)pppppppfStack_2f8 <= (long)pppppppfStack_2f0) {
            pppppppfVar45 = pppppppfStack_2f8;
          }
          uStack_118 = 0;
          lVar37 = lStack_250;
          pppppppfStack_138 = (float *******)&pppppppfStack_300;
          pppppppfStack_120 = pppppppfVar45;
          if (pppppppfStack_248 == pppppppfStack_2f8) {
LAB_10954f270:
            lStack_250 = lVar37;
            pppppppfVar36 = pppppppfStack_2f8;
            pppppppfVar51 = pppppppfStack_368;
            pppppppfStack_248 = pppppppfVar52;
            if ((pppppppfStack_378 == pppppppfStack_300) && (pppppppfStack_370 == pppppppfStack_2f8)
               ) {
              pppppppfVar52 = pppppppfStack_368;
              if ((long)pppppppfStack_2f8 <= (long)pppppppfStack_368) {
                pppppppfVar52 = pppppppfStack_2f8;
              }
              pppppppfVar46 = pppppppfStack_378;
              if (0 < (long)pppppppfVar52) {
                do {
                  *(float *)pppppppfVar46 = 1.0;
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                  pppppppfVar46 =
                       (float *******)((long)pppppppfVar46 + ((long)pppppppfStack_2f8 + 1) * 4);
                } while (pppppppfVar52 != (float *******)0x0);
              }
              if (0 < (long)pppppppfStack_368) {
                pppppppfVar52 = (float *******)0x0;
                pppppppfVar46 = pppppppfStack_378;
                do {
                  pppppppfVar27 = pppppppfVar36;
                  if ((long)pppppppfVar52 <= (long)pppppppfVar36) {
                    pppppppfVar27 = pppppppfVar52;
                  }
                  if (0 < (long)pppppppfVar27) {
                    _bzero(pppppppfVar46,(long)pppppppfVar27 << 2);
                  }
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
                  pppppppfVar46 = (float *******)((long)pppppppfVar46 + (long)pppppppfVar36 * 4);
                } while (pppppppfVar51 != pppppppfVar52);
              }
              if (0 < (long)pppppppfVar45) {
                lVar37 = -(long)pppppppfVar45;
                lVar18 = (long)pppppppfVar45 * 4;
                lVar25 = lVar18;
                pppppppfVar52 = pppppppfVar45;
                do {
                  pppppppfVar46 = (float *******)((long)pppppppfVar52 + -1);
                  lVar25 = lVar25 + -4;
                  pppppppfStack_3c0 = (float *******)(lVar37 + (long)pppppppfStack_2f8);
                  pppppppfStack_f0 =
                       (float *******)
                       ((long)pppppppfVar46 + ((long)pppppppfStack_370 - (long)pppppppfStack_2f8));
                  pppppppfStack_e8 =
                       (float *******)
                       ((long)pppppppfVar46 + ((long)pppppppfStack_368 - (long)pppppppfStack_2f8));
                  uStack_110 = (float *******)
                               ((long)pppppppfStack_378 +
                               (long)((long)pppppppfStack_f0 +
                                     (long)pppppppfStack_e8 * (long)pppppppfStack_370) * 4);
                  uStack_108 = (float *******)((long)pppppppfStack_3c0 + 1);
                  pppppppfStack_e0 = pppppppfStack_370;
                  uStack_3c8 = (float ******)
                               ((long)pppppppfStack_300 + lVar18 + (long)pppppppfStack_2f8 * lVar25)
                  ;
                  pppppppfStack_398 = pppppppfStack_2f8;
                  pppppppfStack_3b0 = (float *******)&pppppppfStack_300;
                  pppppppfStack_3a8 = pppppppfVar52;
                  pppppppfStack_3a0 = pppppppfVar46;
                  pppppppfStack_100 = uStack_108;
                  pppppppfStack_f8 = (float *******)&pppppppfStack_378;
                  FUN_109551f88(&uStack_110,&uStack_3c8,(long)ppppppfStack_2e8 + lVar18 + -4,
                                lStack_250);
                  pppppppfVar51 = pppppppfStack_2f8;
                  uVar31 = lVar37 + (long)pppppppfStack_2f8;
                  pfVar17 = (float *)((long)pppppppfStack_378 +
                                     ((long)pppppppfVar46 +
                                     (long)pppppppfStack_370 +
                                     (long)pppppppfStack_370 * (long)pppppppfVar46 +
                                     (1 - (long)pppppppfStack_2f8)) * 4);
                  uVar35 = uVar31;
                  if ((((ulong)pfVar17 & 3) == 0) &&
                     (uVar35 = (ulong)-((uint)pfVar17 >> 2) & 3, (long)uVar31 <= (long)uVar35)) {
                    uVar35 = uVar31;
                  }
                  uVar20 = (long)pppppppfStack_2f8 + (lVar37 - uVar35);
                  uVar34 = uVar20 + 3;
                  if (-1 < (long)uVar20) {
                    uVar34 = uVar20;
                  }
                  if (0 < (long)uVar35) {
                    _bzero(pfVar17,uVar35 << 2);
                  }
                  lVar58 = (uVar34 & 0xfffffffffffffffc) + uVar35;
                  if (3 < (long)uVar20) {
                    lVar49 = lVar58;
                    if (lVar58 <= (long)(uVar35 + 4)) {
                      lVar49 = uVar35 + 4;
                    }
                    _bzero(pfVar17 + uVar35,(lVar49 + ~uVar35 & 0x3ffffffffffffffc) * 4 + 0x10);
                  }
                  if (lVar58 < (long)uVar31) {
                    _bzero(pfVar17 + ((long)uVar34 >> 2) * 4 + uVar35,
                           ((long)pppppppfVar51 + lVar37 + (-(uVar34 & 0xfffffffffffffffc) - uVar35)
                           ) * 4);
                  }
                  lVar37 = lVar37 + 1;
                  lVar18 = lVar18 + -4;
                  bVar13 = (float *******)0x1 < pppppppfVar52;
                  pppppppfVar36 = pppppppfStack_2f8;
                  pppppppfVar52 = pppppppfVar46;
                } while (bVar13);
              }
              if ((long)pppppppfVar45 < (long)pppppppfVar36) {
                lVar37 = 0;
                lVar25 = -1;
                do {
                  uVar31 = (long)pppppppfVar36 + lVar25;
                  pfVar17 = (float *)((long)pppppppfStack_378 +
                                     ((long)pppppppfStack_370 +
                                     (long)pppppppfStack_370 * lVar37 +
                                     (lVar37 - (long)pppppppfVar36) + 1) * 4);
                  uVar35 = uVar31;
                  if ((((ulong)pfVar17 & 3) == 0) &&
                     (uVar35 = (ulong)-((uint)pfVar17 >> 2) & 3, (long)uVar31 <= (long)uVar35)) {
                    uVar35 = uVar31;
                  }
                  uVar34 = uVar31 - uVar35;
                  uVar20 = uVar34 + 3;
                  if (-1 < (long)uVar34) {
                    uVar20 = uVar34;
                  }
                  if (0 < (long)uVar35) {
                    _bzero(pfVar17,uVar35 << 2);
                  }
                  lVar18 = (uVar20 & 0xfffffffffffffffc) + uVar35;
                  if (3 < (long)uVar34) {
                    lVar58 = lVar18;
                    if (lVar18 <= (long)(uVar35 + 4)) {
                      lVar58 = uVar35 + 4;
                    }
                    _bzero(pfVar17 + uVar35,(lVar58 + ~uVar35 & 0x3ffffffffffffffc) * 4 + 0x10);
                  }
                  if (lVar18 < (long)uVar31) {
                    _bzero(pfVar17 + ((long)uVar20 >> 2) * 4 + uVar35,
                           ((long)pppppppfVar36 + ((long)uVar20 >> 2) * -4 + (lVar25 - uVar35)) * 4)
                    ;
                  }
                  lVar37 = lVar37 + 1;
                  lVar25 = lVar25 + -1;
                  pppppppfVar36 = pppppppfStack_2f8;
                } while (lVar37 < (long)pppppppfStack_2f8 - (long)pppppppfVar45);
              }
            }
            else if ((long)pppppppfVar45 < 0x31) {
              if (pppppppfStack_2f8 != (float *******)0x0) {
                lVar37 = 0;
                if (pppppppfStack_2f8 != (float *******)0x0) {
                  lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_2f8;
                }
                if (lVar37 < (long)pppppppfStack_2f8) goto LAB_109550e50;
              }
              FUN_1093c3d54(&pppppppfStack_378,(long)pppppppfStack_2f8 * (long)pppppppfStack_2f8,
                            pppppppfStack_2f8,pppppppfStack_2f8);
              if (0 < (long)pppppppfStack_368) {
                pppppppfVar52 = (float *******)0x0;
                pppppppfVar51 = pppppppfStack_378;
                do {
                  if (0 < (long)pppppppfStack_370) {
                    pppppppfVar36 = (float *******)0x0;
                    do {
                      fVar61 = 1.0;
                      if (pppppppfVar52 != pppppppfVar36) {
                        fVar61 = 0.0;
                      }
                      *(float *)((long)pppppppfVar51 + (long)pppppppfVar36 * 4) = fVar61;
                      pppppppfVar36 = (float *******)((long)pppppppfVar36 + 1);
                    } while (pppppppfStack_370 != pppppppfVar36);
                  }
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
                  pppppppfVar51 = (float *******)((long)pppppppfVar51 + (long)pppppppfStack_370 * 4)
                  ;
                } while (pppppppfVar52 != pppppppfStack_368);
              }
              if (0 < (long)pppppppfVar45) {
                lVar18 = (long)pppppppfVar45 * 4;
                lVar37 = -(long)pppppppfVar45;
                lVar25 = lVar18;
                do {
                  pppppppfVar52 = (float *******)((long)pppppppfVar45 + -1);
                  lVar25 = lVar25 + -4;
                  pppppppfStack_3c0 = (float *******)(lVar37 + (long)pppppppfStack_2f8);
                  pppppppfStack_f0 =
                       (float *******)
                       ((long)pppppppfVar52 + ((long)pppppppfStack_370 - (long)pppppppfStack_2f8));
                  pppppppfStack_e8 =
                       (float *******)
                       ((long)pppppppfVar52 + ((long)pppppppfStack_368 - (long)pppppppfStack_2f8));
                  uStack_110 = (float *******)
                               ((long)pppppppfStack_378 +
                               (long)((long)pppppppfStack_f0 +
                                     (long)pppppppfStack_e8 * (long)pppppppfStack_370) * 4);
                  uStack_108 = (float *******)((long)pppppppfStack_3c0 + 1);
                  pppppppfStack_e0 = pppppppfStack_370;
                  uStack_3c8 = (float ******)
                               ((long)pppppppfStack_300 + lVar18 + (long)pppppppfStack_2f8 * lVar25)
                  ;
                  pppppppfStack_398 = pppppppfStack_2f8;
                  pppppppfStack_3b0 = (float *******)&pppppppfStack_300;
                  pppppppfStack_3a8 = pppppppfVar45;
                  pppppppfStack_3a0 = pppppppfVar52;
                  pppppppfStack_100 = uStack_108;
                  pppppppfStack_f8 = (float *******)&pppppppfStack_378;
                  FUN_109551f88(&uStack_110,&uStack_3c8,(long)ppppppfStack_2e8 + lVar18 + -4,
                                lStack_250);
                  lVar18 = lVar18 + -4;
                  lVar37 = lVar37 + 1;
                  bVar13 = (float *******)0x1 < pppppppfVar45;
                  pppppppfVar45 = pppppppfVar52;
                } while (bVar13);
              }
            }
            else {
              if (pppppppfStack_2f8 != (float *******)0x0) {
                lVar37 = 0;
                if (pppppppfStack_2f8 != (float *******)0x0) {
                  lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_2f8;
                }
                if (lVar37 < (long)pppppppfStack_2f8) goto LAB_109550e50;
              }
              FUN_1093c3d54(&pppppppfStack_378,(long)pppppppfStack_2f8 * (long)pppppppfStack_2f8,
                            pppppppfStack_2f8,pppppppfStack_2f8);
              if (0 < (long)pppppppfStack_368) {
                pppppppfVar52 = (float *******)0x0;
                pppppppfVar45 = pppppppfStack_378;
                do {
                  if (0 < (long)pppppppfStack_370) {
                    pppppppfVar51 = (float *******)0x0;
                    do {
                      fVar61 = 1.0;
                      if (pppppppfVar52 != pppppppfVar51) {
                        fVar61 = 0.0;
                      }
                      *(float *)((long)pppppppfVar45 + (long)pppppppfVar51 * 4) = fVar61;
                      pppppppfVar51 = (float *******)((long)pppppppfVar51 + 1);
                    } while (pppppppfStack_370 != pppppppfVar51);
                  }
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
                  pppppppfVar45 = (float *******)((long)pppppppfVar45 + (long)pppppppfStack_370 * 4)
                  ;
                } while (pppppppfVar52 != pppppppfStack_368);
              }
              FUN_109551d70(&pppppppfStack_138,&pppppppfStack_378,&lStack_250,1);
            }
            goto LAB_10954f77c;
          }
          _free(lStack_250);
          if ((long)pppppppfVar52 < 1) {
            lVar37 = 0;
            goto LAB_10954f270;
          }
          if ((ulong)pppppppfVar52 >> 0x3e == 0) {
            lVar37 = (long)pppppppfVar52 << 2;
            _malloc();
            if (lVar37 != 0) goto LAB_10954f270;
          }
          goto LAB_109550e50;
        }
LAB_10954f79c:
        if ((long)pppppppfStack_190 <= (long)pppppppfStack_188) goto LAB_10954ff84;
        func_0x0001093c3e60(&ppppppfStack_240,&pfStack_198);
        pppppppfVar52 = pppppppfStack_188;
        ppppppfVar16 = ppppppfStack_240;
        if (pppppppfStack_188 != (float *******)0x0) {
          lVar37 = 0;
          if (pppppppfStack_188 != (float *******)0x0) {
            lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_188;
          }
          if (lVar37 < (long)pppppppfStack_188) goto LAB_109550e50;
        }
        lVar37 = (long)pppppppfStack_188 * (long)pppppppfStack_188;
        FUN_1093c3d54(&pfStack_318,lVar37,pppppppfStack_188,pppppppfStack_188);
        pppppppfVar45 = pppppppfStack_238;
        if ((pppppppfStack_310 != pppppppfVar52) ||
           (pppppppfVar51 = pppppppfVar52, pppppppfStack_308 != pppppppfVar52)) {
          if (pppppppfVar52 != (float *******)0x0) {
            lVar25 = 0;
            if (pppppppfVar52 != (float *******)0x0) {
              lVar25 = 0x7fffffffffffffff / (long)pppppppfVar52;
            }
            if (lVar25 < (long)pppppppfVar52) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pfStack_318,lVar37,pppppppfVar52,pppppppfVar52);
          pppppppfVar52 = pppppppfStack_308;
          pppppppfVar51 = pppppppfStack_310;
        }
        pfVar17 = pfStack_318;
        if (0 < (long)pppppppfVar52) {
          pppppppfVar36 = (float *******)0x0;
          ppppppfVar22 = ppppppfVar16;
          pfVar28 = pfStack_318;
          do {
            pppppppfVar46 = pppppppfVar51;
            if ((long)pppppppfVar36 <= (long)pppppppfVar51) {
              pppppppfVar46 = pppppppfVar36;
            }
            pfVar19 = pfVar28;
            ppppppfVar39 = ppppppfVar22;
            pppppppfVar27 = pppppppfVar46;
            if ((long)pppppppfVar46 < 1) {
              pppppppfVar46 = (float *******)0x0;
            }
            else {
              do {
                *pfVar19 = *(float *)ppppppfVar39;
                pppppppfVar27 = (float *******)((long)pppppppfVar27 + -1);
                pfVar19 = pfVar19 + 1;
                ppppppfVar39 = (float ******)((long)ppppppfVar39 + 4);
              } while (pppppppfVar27 != (float *******)0x0);
            }
            if ((long)pppppppfVar46 < (long)pppppppfVar51) {
              pfVar17[(long)((long)pppppppfVar46 * (long)pppppppfVar51 + (long)pppppppfVar46)] =
                   *(float *)((long)ppppppfVar16 +
                             (long)((long)pppppppfVar46 * (long)pppppppfVar45 + (long)pppppppfVar46)
                             * 4);
              pppppppfVar46 = (float *******)((long)pppppppfVar46 + 1);
            }
            if ((long)pppppppfVar51 - (long)pppppppfVar46 != 0 &&
                (long)pppppppfVar46 <= (long)pppppppfVar51) {
              _bzero((long)pfVar17 +
                     (long)pppppppfVar46 * 4 + (long)pppppppfVar51 * 4 * (long)pppppppfVar36,
                     ((long)pppppppfVar51 - (long)pppppppfVar46) * 4);
            }
            pppppppfVar36 = (float *******)((long)pppppppfVar36 + 1);
            ppppppfVar22 = (float ******)((long)ppppppfVar22 + (long)pppppppfVar45 * 4);
            pfVar28 = pfVar28 + (long)pppppppfVar51;
          } while (pppppppfVar36 != pppppppfVar52);
        }
        pppppppfVar52 = pppppppfStack_238;
        if (bStack_349 == 1) {
          ppppppfStack_130 = (float ******)&ppppppfStack_228;
          uStack_128 = 0;
          pppppppfVar45 = pppppppfStack_230;
          if ((long)pppppppfStack_238 <= (long)pppppppfStack_230) {
            pppppppfVar45 = pppppppfStack_238;
          }
          uStack_118 = 0;
          lVar37 = lStack_1a8;
          pppppppfStack_138 = &ppppppfStack_240;
          pppppppfStack_120 = pppppppfVar45;
          if (pppppppfStack_1a0 != pppppppfStack_238) {
            _free(lStack_1a8);
            if ((long)pppppppfVar52 < 1) {
              lVar37 = 0;
              goto LAB_10954fa5c;
            }
            if ((ulong)pppppppfVar52 >> 0x3e == 0) {
              lVar37 = (long)pppppppfVar52 << 2;
              _malloc();
              if (lVar37 != 0) goto LAB_10954fa5c;
            }
LAB_109550e50:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109550ee0;
          }
LAB_10954fa5c:
          lStack_1a8 = lVar37;
          pppppppfVar36 = pppppppfStack_238;
          pppppppfVar51 = pppppppfStack_380;
          pppppppfStack_1a0 = pppppppfVar52;
          if ((ppppppfStack_390 == ppppppfStack_240) && (uStack_388 == pppppppfStack_238)) {
            pppppppfVar52 = pppppppfStack_380;
            if ((long)pppppppfStack_238 <= (long)pppppppfStack_380) {
              pppppppfVar52 = pppppppfStack_238;
            }
            ppppppfVar16 = ppppppfStack_390;
            if (0 < (long)pppppppfVar52) {
              do {
                *(float *)ppppppfVar16 = 1.0;
                pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                ppppppfVar16 = (float ******)
                               ((long)ppppppfVar16 + ((long)pppppppfStack_238 + 1) * 4);
              } while (pppppppfVar52 != (float *******)0x0);
            }
            if (0 < (long)pppppppfStack_380) {
              pppppppfVar52 = (float *******)0x0;
              ppppppfVar16 = ppppppfStack_390;
              do {
                pppppppfVar46 = pppppppfVar36;
                if ((long)pppppppfVar52 <= (long)pppppppfVar36) {
                  pppppppfVar46 = pppppppfVar52;
                }
                if (0 < (long)pppppppfVar46) {
                  _bzero(ppppppfVar16,(long)pppppppfVar46 << 2);
                }
                pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
                ppppppfVar16 = (float ******)((long)ppppppfVar16 + (long)pppppppfVar36 * 4);
              } while (pppppppfVar51 != pppppppfVar52);
            }
            if (0 < (long)pppppppfVar45) {
              lVar37 = -(long)pppppppfVar45;
              lVar18 = (long)pppppppfVar45 * 4;
              lVar25 = lVar18;
              pppppppfVar52 = pppppppfVar45;
              do {
                pppppppfVar46 = (float *******)((long)pppppppfVar52 + -1);
                lVar25 = lVar25 + -4;
                pppppppfStack_3c0 = (float *******)(lVar37 + (long)pppppppfStack_238);
                pppppppfStack_f0 =
                     (float *******)
                     ((long)pppppppfVar46 + ((long)uStack_388 - (long)pppppppfStack_238));
                pppppppfStack_e8 =
                     (float *******)
                     ((long)pppppppfVar46 + ((long)pppppppfStack_380 - (long)pppppppfStack_238));
                uStack_110 = (float *******)
                             ((long)ppppppfStack_390 +
                             (long)((long)pppppppfStack_f0 +
                                   (long)pppppppfStack_e8 * (long)uStack_388) * 4);
                uStack_108 = (float *******)((long)pppppppfStack_3c0 + 1);
                pppppppfStack_f8 = &ppppppfStack_390;
                pppppppfStack_e0 = uStack_388;
                uStack_3c8 = (float ******)
                             ((long)ppppppfStack_240 + lVar18 + (long)pppppppfStack_238 * lVar25);
                pppppppfStack_398 = pppppppfStack_238;
                pppppppfStack_3b0 = &ppppppfStack_240;
                pppppppfStack_3a8 = pppppppfVar52;
                pppppppfStack_3a0 = pppppppfVar46;
                pppppppfStack_100 = uStack_108;
                FUN_109551f88(&uStack_110,&uStack_3c8,(long)ppppppfStack_228 + lVar18 + -4,
                              lStack_1a8);
                pppppppfVar51 = pppppppfStack_238;
                uVar31 = lVar37 + (long)pppppppfStack_238;
                pfVar17 = (float *)((long)ppppppfStack_390 +
                                   ((long)pppppppfVar46 +
                                   (long)uStack_388 +
                                   (long)uStack_388 * (long)pppppppfVar46 +
                                   (1 - (long)pppppppfStack_238)) * 4);
                uVar35 = uVar31;
                if ((((ulong)pfVar17 & 3) == 0) &&
                   (uVar35 = (ulong)-((uint)pfVar17 >> 2) & 3, (long)uVar31 <= (long)uVar35)) {
                  uVar35 = uVar31;
                }
                uVar20 = (long)pppppppfStack_238 + (lVar37 - uVar35);
                uVar34 = uVar20 + 3;
                if (-1 < (long)uVar20) {
                  uVar34 = uVar20;
                }
                if (0 < (long)uVar35) {
                  _bzero(pfVar17,uVar35 << 2);
                }
                lVar58 = (uVar34 & 0xfffffffffffffffc) + uVar35;
                if (3 < (long)uVar20) {
                  lVar49 = lVar58;
                  if (lVar58 <= (long)(uVar35 + 4)) {
                    lVar49 = uVar35 + 4;
                  }
                  _bzero(pfVar17 + uVar35,(lVar49 + ~uVar35 & 0x3ffffffffffffffc) * 4 + 0x10);
                }
                if (lVar58 < (long)uVar31) {
                  _bzero(pfVar17 + ((long)uVar34 >> 2) * 4 + uVar35,
                         ((long)pppppppfVar51 + lVar37 + (-(uVar34 & 0xfffffffffffffffc) - uVar35))
                         * 4);
                }
                lVar37 = lVar37 + 1;
                lVar18 = lVar18 + -4;
                bVar13 = (float *******)0x1 < pppppppfVar52;
                pppppppfVar36 = pppppppfStack_238;
                pppppppfVar52 = pppppppfVar46;
              } while (bVar13);
            }
            if ((long)pppppppfVar45 < (long)pppppppfVar36) {
              lVar37 = 0;
              lVar25 = -1;
              do {
                uVar31 = (long)pppppppfVar36 + lVar25;
                pfVar17 = (float *)((long)ppppppfStack_390 +
                                   ((long)uStack_388 +
                                   (long)uStack_388 * lVar37 + (lVar37 - (long)pppppppfVar36) + 1) *
                                   4);
                uVar35 = uVar31;
                if ((((ulong)pfVar17 & 3) == 0) &&
                   (uVar35 = (ulong)-((uint)pfVar17 >> 2) & 3, (long)uVar31 <= (long)uVar35)) {
                  uVar35 = uVar31;
                }
                uVar34 = uVar31 - uVar35;
                uVar20 = uVar34 + 3;
                if (-1 < (long)uVar34) {
                  uVar20 = uVar34;
                }
                if (0 < (long)uVar35) {
                  _bzero(pfVar17,uVar35 << 2);
                }
                lVar18 = (uVar20 & 0xfffffffffffffffc) + uVar35;
                if (3 < (long)uVar34) {
                  lVar58 = lVar18;
                  if (lVar18 <= (long)(uVar35 + 4)) {
                    lVar58 = uVar35 + 4;
                  }
                  _bzero(pfVar17 + uVar35,(lVar58 + ~uVar35 & 0x3ffffffffffffffc) * 4 + 0x10);
                }
                if (lVar18 < (long)uVar31) {
                  _bzero(pfVar17 + ((long)uVar20 >> 2) * 4 + uVar35,
                         ((long)pppppppfVar36 + ((long)uVar20 >> 2) * -4 + (lVar25 - uVar35)) * 4);
                }
                lVar37 = lVar37 + 1;
                lVar25 = lVar25 + -1;
                pppppppfVar36 = pppppppfStack_238;
              } while (lVar37 < (long)pppppppfStack_238 - (long)pppppppfVar45);
            }
          }
          else if ((long)pppppppfVar45 < 0x31) {
            if (pppppppfStack_238 != (float *******)0x0) {
              lVar37 = 0;
              if (pppppppfStack_238 != (float *******)0x0) {
                lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_238;
              }
              if (lVar37 < (long)pppppppfStack_238) goto LAB_109550e50;
            }
            FUN_1093c3d54(&ppppppfStack_390,(long)pppppppfStack_238 * (long)pppppppfStack_238,
                          pppppppfStack_238,pppppppfStack_238);
            if (0 < (long)pppppppfStack_380) {
              pppppppfVar52 = (float *******)0x0;
              ppppppfVar16 = ppppppfStack_390;
              do {
                if (0 < (long)uStack_388) {
                  pppppppfVar51 = (float *******)0x0;
                  do {
                    fVar61 = 1.0;
                    if (pppppppfVar52 != pppppppfVar51) {
                      fVar61 = 0.0;
                    }
                    *(float *)((long)ppppppfVar16 + (long)pppppppfVar51 * 4) = fVar61;
                    pppppppfVar51 = (float *******)((long)pppppppfVar51 + 1);
                  } while (uStack_388 != pppppppfVar51);
                }
                pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
                ppppppfVar16 = (float ******)((long)ppppppfVar16 + (long)uStack_388 * 4);
              } while (pppppppfVar52 != pppppppfStack_380);
            }
            if (0 < (long)pppppppfVar45) {
              lVar18 = (long)pppppppfVar45 * 4;
              lVar37 = -(long)pppppppfVar45;
              lVar25 = lVar18;
              do {
                pppppppfVar52 = (float *******)((long)pppppppfVar45 + -1);
                lVar25 = lVar25 + -4;
                pppppppfStack_3c0 = (float *******)(lVar37 + (long)pppppppfStack_238);
                pppppppfStack_f0 =
                     (float *******)
                     ((long)pppppppfVar52 + ((long)uStack_388 - (long)pppppppfStack_238));
                pppppppfStack_e8 =
                     (float *******)
                     ((long)pppppppfVar52 + ((long)pppppppfStack_380 - (long)pppppppfStack_238));
                uStack_110 = (float *******)
                             ((long)ppppppfStack_390 +
                             (long)((long)pppppppfStack_f0 +
                                   (long)pppppppfStack_e8 * (long)uStack_388) * 4);
                uStack_108 = (float *******)((long)pppppppfStack_3c0 + 1);
                pppppppfStack_e0 = uStack_388;
                uStack_3c8 = (float ******)
                             ((long)ppppppfStack_240 + lVar18 + (long)pppppppfStack_238 * lVar25);
                pppppppfStack_398 = pppppppfStack_238;
                pppppppfStack_3b0 = &ppppppfStack_240;
                pppppppfStack_3a8 = pppppppfVar45;
                pppppppfStack_3a0 = pppppppfVar52;
                pppppppfStack_100 = uStack_108;
                pppppppfStack_f8 = &ppppppfStack_390;
                FUN_109551f88(&uStack_110,&uStack_3c8,(long)ppppppfStack_228 + lVar18 + -4,
                              lStack_1a8);
                lVar18 = lVar18 + -4;
                lVar37 = lVar37 + 1;
                bVar13 = (float *******)0x1 < pppppppfVar45;
                pppppppfVar45 = pppppppfVar52;
              } while (bVar13);
            }
          }
          else {
            if (pppppppfStack_238 != (float *******)0x0) {
              lVar37 = 0;
              if (pppppppfStack_238 != (float *******)0x0) {
                lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_238;
              }
              if (lVar37 < (long)pppppppfStack_238) goto LAB_109550e50;
            }
            FUN_1093c3d54(&ppppppfStack_390,(long)pppppppfStack_238 * (long)pppppppfStack_238,
                          pppppppfStack_238,pppppppfStack_238);
            if (0 < (long)pppppppfStack_380) {
              pppppppfVar52 = (float *******)0x0;
              ppppppfVar16 = ppppppfStack_390;
              do {
                if (0 < (long)uStack_388) {
                  pppppppfVar45 = (float *******)0x0;
                  do {
                    fVar61 = 1.0;
                    if (pppppppfVar52 != pppppppfVar45) {
                      fVar61 = 0.0;
                    }
                    *(float *)((long)ppppppfVar16 + (long)pppppppfVar45 * 4) = fVar61;
                    pppppppfVar45 = (float *******)((long)pppppppfVar45 + 1);
                  } while (uStack_388 != pppppppfVar45);
                }
                pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
                ppppppfVar16 = (float ******)((long)ppppppfVar16 + (long)uStack_388 * 4);
              } while (pppppppfVar52 != pppppppfStack_380);
            }
            FUN_1095538f8(&pppppppfStack_138,&ppppppfStack_390,&lStack_1a8,1);
          }
        }
        else if (bStack_348 == 1) {
          if ((pppppppfStack_190 != (float *******)0x0) && (pppppppfStack_188 != (float *******)0x0)
             ) {
            lVar37 = 0;
            if (pppppppfStack_188 != (float *******)0x0) {
              lVar37 = 0x7fffffffffffffff / (long)pppppppfStack_188;
            }
            if (lVar37 < (long)pppppppfStack_190) goto LAB_109550e50;
          }
          FUN_1093c3d54(&ppppppfStack_390,(long)pppppppfStack_188 * (long)pppppppfStack_190);
          if (0 < (long)pppppppfStack_380) {
            pppppppfVar52 = (float *******)0x0;
            ppppppfVar16 = ppppppfStack_390;
            do {
              if (0 < (long)uStack_388) {
                pppppppfVar45 = (float *******)0x0;
                do {
                  fVar61 = 1.0;
                  if (pppppppfVar52 != pppppppfVar45) {
                    fVar61 = 0.0;
                  }
                  *(float *)((long)ppppppfVar16 + (long)pppppppfVar45 * 4) = fVar61;
                  pppppppfVar45 = (float *******)((long)pppppppfVar45 + 1);
                } while (uStack_388 != pppppppfVar45);
              }
              pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
              ppppppfVar16 = (float ******)((long)ppppppfVar16 + (long)uStack_388 * 4);
            } while (pppppppfVar52 != pppppppfStack_380);
          }
          uStack_108 = &ppppppfStack_228;
          pppppppfStack_100 = (float *******)((ulong)pppppppfStack_100 & 0xffffffffffffff00);
          pppppppfStack_f8 = pppppppfStack_230;
          if ((long)pppppppfStack_238 <= (long)pppppppfStack_230) {
            pppppppfStack_f8 = pppppppfStack_238;
          }
          pppppppfStack_f0 = (float *******)0x0;
          uStack_110 = &ppppppfStack_240;
          FUN_1095538f8(&uStack_110,&ppppppfStack_390,&lStack_1a8,0);
        }
        if (((bStack_347 & 1) != 0) || ((bStack_346 & 1) != 0)) {
          FUN_1095537f8(&pppppppfStack_378,&pfStack_218);
        }
      }
LAB_10954ff84:
      fVar61 = ABS(*pfStack_318);
      pppppppfVar52 = pppppppfStack_308;
      if ((long)pppppppfStack_310 <= (long)pppppppfStack_308) {
        pppppppfVar52 = pppppppfStack_310;
      }
      lVar37 = (long)pppppppfVar52 + -1;
      pfVar17 = pfStack_318;
      if (lVar37 != 0 && 0 < (long)pppppppfVar52) {
        do {
          fVar63 = ABS(pfVar17[(long)pppppppfStack_310 + 1]);
          if (fVar63 <= fVar61) {
            fVar63 = fVar61;
          }
          fVar61 = fVar63;
          lVar37 = lVar37 + -1;
          pfVar17 = pfVar17 + (long)pppppppfStack_310 + 1;
        } while (lVar37 != 0);
      }
      pfVar17 = pfStack_318;
      pppppppfVar52 = pppppppfStack_310;
      do {
        if ((long)pppppppfStack_328 < 2) break;
        bVar13 = true;
        lVar25 = 4;
        lVar37 = 1;
        do {
          lVar58 = 0;
          lVar18 = 0;
          do {
            fVar63 = fVar61 * 2.3841858e-07;
            if (fVar63 <= 1.1754944e-38) {
              fVar63 = 1.1754944e-38;
            }
            if ((fVar63 < ABS(pfVar17[lVar18 * (long)pppppppfVar52 + lVar37])) ||
               (fVar74 = fVar61, fVar63 < ABS(pfVar17[(long)pppppppfVar52 * lVar37 + lVar18]))) {
              fVar63 = pfVar17[(long)pppppppfVar52 * lVar37 + lVar37];
              fVar74 = pfVar17[lVar18 * (long)pppppppfVar52 + lVar37];
              fVar77 = pfVar17[(long)pppppppfVar52 * lVar37 + lVar18];
              uStack_110 = (float *******)CONCAT44(fVar77,fVar63);
              fStack_3e4 = pfVar17[lVar18 * (long)pppppppfVar52 + lVar18];
              uStack_108 = (float *******)CONCAT44(fStack_3e4,fVar74);
              if (1.1754944e-38 <= ABS(fVar77 - fVar74)) {
                fVar78 = (fVar63 + fStack_3e4) / (fVar77 - fVar74);
                fVar75 = SQRT(fVar78 * fVar78 + 1.0);
                fVar79 = 1.0 / fVar75;
                fVar78 = fVar78 / fVar75;
              }
              else {
                fVar78 = 1.0;
                fVar79 = 0.0;
              }
              if ((fVar78 != 1.0) || (fVar75 = fVar63, fVar79 != 0.0)) {
                fVar76 = fStack_3e4 * fVar79;
                fVar75 = fVar77 * fVar79 + fVar63 * fVar78;
                fStack_3e4 = fStack_3e4 * fVar78 - fVar74 * fVar79;
                uStack_110 = (float *******)CONCAT44(fVar77 * fVar78 - fVar63 * fVar79,fVar75);
                uStack_108 = (float *******)CONCAT44(fStack_3e4,fVar76 + fVar74 * fVar78);
              }
              pppppppfStack_138 = (float *******)CONCAT44(pppppppfStack_138._4_4_,fVar75);
              func_0x0001093eeff0(&uStack_3c8,&pppppppfStack_138,(ulong)&uStack_110 | 8,&fStack_3e4)
              ;
              fVar63 = fVar79 * uStack_3c8._4_4_ + (float)uStack_3c8 * fVar78;
              fVar74 = fVar79 * (float)uStack_3c8 - uStack_3c8._4_4_ * fVar78;
              pppppppfVar52 = pppppppfStack_308;
              pfVar17 = pfStack_318;
              if ((fVar74 != 0.0 || fVar63 != 1.0) && 0 < (long)pppppppfStack_308) {
                do {
                  fVar77 = *(float *)((long)pfVar17 + lVar25);
                  fVar78 = *(float *)((long)pfVar17 + lVar58);
                  *(float *)((long)pfVar17 + lVar25) = fVar74 * fVar78 + fVar77 * fVar63;
                  *(float *)((long)pfVar17 + lVar58) = fVar63 * fVar78 + fVar77 * -fVar74;
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                  pfVar17 = pfVar17 + (long)pppppppfStack_310;
                } while (pppppppfVar52 != (float *******)0x0);
              }
              if ((((bStack_349 & 1) != 0) || ((bStack_348 & 1) != 0)) &&
                 (0 < (long)uStack_388 && (fVar74 != 0.0 || fVar63 != 1.0))) {
                pfVar17 = (float *)((long)ppppppfStack_390 + (long)uStack_388 * lVar18 * 4);
                pppppppfVar52 = uStack_388;
                pfVar28 = (float *)((long)ppppppfStack_390 + (long)uStack_388 * lVar37 * 4);
                do {
                  fVar77 = *pfVar28;
                  fVar78 = *pfVar17;
                  *pfVar28 = fVar74 * fVar78 + fVar77 * fVar63;
                  *pfVar17 = fVar63 * fVar78 + fVar77 * -fVar74;
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                  pfVar17 = pfVar17 + 1;
                  pfVar28 = pfVar28 + 1;
                } while (pppppppfVar52 != (float *******)0x0);
              }
              bVar13 = false;
              if ((uStack_3c8._4_4_ == 0.0) && (bVar13 = false, !NAN((float)uStack_3c8))) {
                bVar13 = (float)uStack_3c8 == 1.0;
              }
              if (!bVar13 && 0 < (long)pppppppfStack_310) {
                pfVar17 = pfStack_318 + (long)pppppppfStack_310 * lVar18;
                pfVar28 = pfStack_318 + (long)pppppppfStack_310 * lVar37;
                pppppppfVar52 = pppppppfStack_310;
                do {
                  fVar63 = *pfVar28;
                  fVar74 = *pfVar17;
                  *pfVar28 = fVar74 * -uStack_3c8._4_4_ + fVar63 * (float)uStack_3c8;
                  *pfVar17 = (float)uStack_3c8 * fVar74 + fVar63 * uStack_3c8._4_4_;
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                  pfVar17 = pfVar17 + 1;
                  pfVar28 = pfVar28 + 1;
                } while (pppppppfVar52 != (float *******)0x0);
              }
              if (((bStack_347 & 1) != 0) || ((bStack_346 & 1) != 0)) {
                bVar13 = false;
                if ((uStack_3c8._4_4_ == 0.0) && (bVar13 = false, !NAN((float)uStack_3c8))) {
                  bVar13 = (float)uStack_3c8 == 1.0;
                }
                if (!bVar13 && 0 < (long)pppppppfStack_370) {
                  pppppppfVar52 = pppppppfStack_370;
                  pfVar17 = (float *)((long)pppppppfStack_378 + (long)pppppppfStack_370 * lVar18 * 4
                                     );
                  pfVar28 = (float *)((long)pppppppfStack_378 + (long)pppppppfStack_370 * lVar37 * 4
                                     );
                  do {
                    fVar63 = *pfVar28;
                    fVar74 = *pfVar17;
                    *pfVar28 = fVar74 * -uStack_3c8._4_4_ + fVar63 * (float)uStack_3c8;
                    *pfVar17 = (float)uStack_3c8 * fVar74 + fVar63 * uStack_3c8._4_4_;
                    pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                    pfVar17 = pfVar17 + 1;
                    pfVar28 = pfVar28 + 1;
                  } while (pppppppfVar52 != (float *******)0x0);
                }
              }
              bVar13 = false;
              fVar74 = ABS(pfStack_318[(long)pppppppfStack_310 * lVar18 + lVar18]);
              if (ABS(pfStack_318[(long)pppppppfStack_310 * lVar18 + lVar18]) <=
                  ABS(pfStack_318[(long)pppppppfStack_310 * lVar37 + lVar37])) {
                fVar74 = ABS(pfStack_318[(long)pppppppfStack_310 * lVar37 + lVar37]);
              }
              pfVar17 = pfStack_318;
              pppppppfVar52 = pppppppfStack_310;
              if (fVar74 <= fVar61) {
                fVar74 = fVar61;
              }
            }
            fVar61 = fVar74;
            lVar18 = lVar18 + 1;
            lVar58 = lVar58 + 4;
          } while (lVar18 != lVar37);
          lVar37 = lVar37 + 1;
          lVar25 = lVar25 + 4;
        } while (lVar37 < (long)pppppppfStack_328);
      } while (!bVar13);
      if (0 < (long)pppppppfStack_328) {
        lVar25 = 0;
        lVar37 = 0;
        do {
          fVar61 = pfStack_318[(long)pppppppfStack_310 * lVar37 + lVar37];
          *(float *)((long)pppppppfStack_360 + lVar37 * 4) = ABS(fVar61);
          if ((fVar61 < 0.0) && (((bStack_349 | bStack_348) & 1) != 0)) {
            pfVar17 = (float *)((long)ppppppfStack_390 + (long)uStack_388 * lVar37 * 4);
            pppppppfVar52 = (float *******)((ulong)-((uint)pfVar17 >> 2) & 3);
            if ((long)uStack_388 <= (long)pppppppfVar52) {
              pppppppfVar52 = uStack_388;
            }
            pppppppfVar45 = uStack_388;
            if (((ulong)pfVar17 & 3) == 0) {
              pppppppfVar45 = pppppppfVar52;
            }
            uVar35 = (long)uStack_388 - (long)pppppppfVar45;
            uVar31 = uVar35 + 3;
            if ((long)pppppppfVar45 <= (long)uStack_388) {
              uVar31 = uVar35;
            }
            if (0 < (long)pppppppfVar45) {
              ppppppfVar16 = (float ******)((long)ppppppfStack_390 + (long)uStack_388 * lVar25);
              pppppppfVar52 = pppppppfVar45;
              do {
                *(float *)ppppppfVar16 = -*(float *)ppppppfVar16;
                pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
              } while (pppppppfVar52 != (float *******)0x0);
            }
            lVar18 = (uVar31 & 0xfffffffffffffffc) + (long)pppppppfVar45;
            if (3 < (long)uVar35) {
              pppppppfVar52 = pppppppfVar45;
              pfVar17 = (float *)((long)ppppppfStack_390 +
                                 (long)uStack_388 * lVar25 + (long)pppppppfVar45 * 4);
              do {
                pfVar17[2] = -pfVar17[2];
                pfVar17[3] = -pfVar17[3];
                *pfVar17 = -*pfVar17;
                pfVar17[1] = -pfVar17[1];
                pppppppfVar52 = (float *******)((long)pppppppfVar52 + 4);
                pfVar17 = pfVar17 + 4;
              } while ((long)pppppppfVar52 < lVar18);
            }
            if (lVar18 < (long)uStack_388) {
              lVar18 = uVar35 - (uVar31 & 0xfffffffffffffffc);
              pfVar17 = (float *)((long)ppppppfStack_390 +
                                 (long)uStack_388 * lVar25 + ((long)uVar31 >> 2) * 0x10 +
                                 (long)pppppppfVar45 * 4);
              do {
                *pfVar17 = -*pfVar17;
                lVar18 = lVar18 + -1;
                pfVar17 = pfVar17 + 1;
              } while (lVar18 != 0);
            }
          }
          lVar37 = lVar37 + 1;
          lVar25 = lVar25 + 4;
        } while (lVar37 < (long)pppppppfStack_328);
      }
      uVar35 = CONCAT53(iStack_355,uStack_358);
      uVar31 = uVar35 + 3;
      if (-1 < iStack_355) {
        uVar31 = uVar35;
      }
      if (3 < (long)uVar35) {
        lVar37 = 0;
        pppppppfVar52 = pppppppfStack_360;
        do {
          *(float *)(pppppppfVar52 + 1) = *(float *)(pppppppfVar52 + 1) * fVar62;
          *(float *)((long)pppppppfVar52 + 0xc) = *(float *)((long)pppppppfVar52 + 0xc) * fVar62;
          *(float *)pppppppfVar52 = *(float *)pppppppfVar52 * fVar62;
          *(float *)((long)pppppppfVar52 + 4) = *(float *)((long)pppppppfVar52 + 4) * fVar62;
          lVar37 = lVar37 + 4;
          pppppppfVar52 = pppppppfVar52 + 2;
        } while (lVar37 < (long)(uVar31 & 0xfffffffffffffffc));
      }
      lVar37 = (long)uVar35 % 4;
      if (lVar37 != 0 && (long)(uVar31 & 0xfffffffffffffffc) <= (long)uVar35) {
        pppppppfVar52 = pppppppfStack_360 + ((long)uVar31 >> 2) * 2;
        do {
          *(float *)pppppppfVar52 = fVar62 * *(float *)pppppppfVar52;
          lVar37 = lVar37 + -1;
          pppppppfVar52 = (float *******)((long)pppppppfVar52 + 4);
        } while (lVar37 != 0);
      }
      pppppppfStack_340 = pppppppfStack_328;
      pppppppfVar52 = pppppppfStack_340;
      if (0 < (long)pppppppfStack_328) {
        lVar37 = 0;
        lVar25 = 0;
        pppppppfVar45 = (float *******)0x0;
        do {
          fVar61 = *(float *)((long)pppppppfStack_360 +
                             (CONCAT53(iStack_355,uStack_358) -
                             ((long)pppppppfStack_328 - (long)pppppppfVar45)) * 4);
          pppppppfVar52 = pppppppfVar45;
          if ((long)pppppppfStack_328 - (long)pppppppfVar45 < 2) {
            if (fVar61 == 0.0) break;
          }
          else {
            lVar58 = 0;
            lVar18 = 1;
            fVar62 = fVar61;
            do {
              fVar63 = *(float *)((long)pppppppfStack_360 +
                                 ((long)pppppppfVar45 +
                                 lVar18 + (CONCAT53(iStack_355,uStack_358) - (long)pppppppfStack_328
                                          )) * 4);
              fVar74 = fVar63;
              lVar49 = lVar18;
              if (fVar63 <= fVar62) {
                fVar63 = fVar62;
                fVar74 = fVar61;
                lVar49 = lVar58;
              }
              lVar58 = lVar49;
              fVar61 = fVar74;
              lVar18 = lVar18 + 1;
              fVar62 = fVar63;
            } while ((long)pppppppfStack_328 + lVar25 != lVar18);
            if (fVar61 == 0.0) break;
            if (lVar58 != 0) {
              lVar18 = lVar58 + (long)pppppppfVar45;
              fVar61 = *(float *)((long)pppppppfStack_360 + (long)pppppppfVar45 * 4);
              *(float *)((long)pppppppfStack_360 + (long)pppppppfVar45 * 4) =
                   *(float *)((long)pppppppfStack_360 + lVar18 * 4);
              *(float *)((long)pppppppfStack_360 + lVar18 * 4) = fVar61;
              if (((bStack_349 & 1) != 0) || ((bStack_348 & 1) != 0)) {
                pfVar17 = (float *)((long)ppppppfStack_390 + (long)uStack_388 * lVar18 * 4);
                pppppppfVar52 = (float *******)((ulong)-((uint)pfVar17 >> 2) & 3);
                if ((long)uStack_388 <= (long)pppppppfVar52) {
                  pppppppfVar52 = uStack_388;
                }
                pppppppfVar51 = uStack_388;
                if (((ulong)pfVar17 & 3) == 0) {
                  pppppppfVar51 = pppppppfVar52;
                }
                uVar35 = (long)uStack_388 - (long)pppppppfVar51;
                uVar31 = uVar35 + 3;
                if ((long)pppppppfVar51 <= (long)uStack_388) {
                  uVar31 = uVar35;
                }
                if (0 < (long)pppppppfVar51) {
                  ppppppfVar16 = (float ******)((long)ppppppfStack_390 + (long)uStack_388 * lVar37);
                  pfVar17 = (float *)((long)ppppppfStack_390 +
                                     (long)uStack_388 * ((long)pppppppfVar45 + lVar58) * 4);
                  pppppppfVar52 = pppppppfVar51;
                  do {
                    fVar61 = *pfVar17;
                    *pfVar17 = *(float *)ppppppfVar16;
                    *(float *)ppppppfVar16 = fVar61;
                    pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                    ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
                    pfVar17 = pfVar17 + 1;
                  } while (pppppppfVar52 != (float *******)0x0);
                }
                lVar49 = (uVar31 & 0xfffffffffffffffc) + (long)pppppppfVar51;
                if (3 < (long)uVar35) {
                  pauVar21 = (undefined1 (*) [16])
                             ((long)ppppppfStack_390 +
                             (long)((long)pppppppfVar51 +
                                   (long)uStack_388 * ((long)pppppppfVar45 + lVar58)) * 4);
                  puVar24 = (undefined8 *)
                            ((long)ppppppfStack_390 +
                            (long)uStack_388 * lVar37 + (long)pppppppfVar51 * 4);
                  pppppppfVar52 = pppppppfVar51;
                  do {
                    uVar6 = *puVar24;
                    uVar7 = puVar24[1];
                    auVar71 = *pauVar21;
                    puVar24[1] = auVar71._8_8_;
                    *puVar24 = auVar71._0_8_;
                    *(undefined8 *)((long)*pauVar21 + 8) = uVar7;
                    *(undefined8 *)*pauVar21 = uVar6;
                    pppppppfVar52 = (float *******)((long)pppppppfVar52 + 4);
                    pauVar21 = pauVar21 + 1;
                    puVar24 = puVar24 + 2;
                  } while ((long)pppppppfVar52 < lVar49);
                }
                if (lVar49 < (long)uStack_388) {
                  lVar49 = uVar35 - (uVar31 & 0xfffffffffffffffc);
                  pfVar17 = (float *)((long)ppppppfStack_390 +
                                     ((long)pppppppfVar51 +
                                     ((long)uVar31 >> 2) * 4 +
                                     (long)uStack_388 * ((long)pppppppfVar45 + lVar58)) * 4);
                  pfVar28 = (float *)((long)ppppppfStack_390 +
                                     ((long)uVar31 >> 2) * 0x10 + (long)pppppppfVar51 * 4 +
                                     (long)uStack_388 * lVar37);
                  do {
                    fVar61 = *pfVar17;
                    *pfVar17 = *pfVar28;
                    *pfVar28 = fVar61;
                    lVar49 = lVar49 + -1;
                    pfVar17 = pfVar17 + 1;
                    pfVar28 = pfVar28 + 1;
                  } while (lVar49 != 0);
                }
              }
              if (((bStack_347 & 1) != 0) || ((bStack_346 & 1) != 0)) {
                pfVar17 = (float *)((long)pppppppfStack_378 + (long)pppppppfStack_370 * lVar18 * 4);
                pppppppfVar52 = (float *******)((ulong)-((uint)pfVar17 >> 2) & 3);
                if ((long)pppppppfStack_370 <= (long)pppppppfVar52) {
                  pppppppfVar52 = pppppppfStack_370;
                }
                pppppppfVar51 = pppppppfStack_370;
                if (((ulong)pfVar17 & 3) == 0) {
                  pppppppfVar51 = pppppppfVar52;
                }
                uVar35 = (long)pppppppfStack_370 - (long)pppppppfVar51;
                uVar31 = uVar35 + 3;
                if ((long)pppppppfVar51 <= (long)pppppppfStack_370) {
                  uVar31 = uVar35;
                }
                if (0 < (long)pppppppfVar51) {
                  pfVar17 = (float *)((long)pppppppfStack_378 +
                                     (long)pppppppfStack_370 * ((long)pppppppfVar45 + lVar58) * 4);
                  pppppppfVar52 = pppppppfVar51;
                  pppppppfVar36 =
                       (float *******)((long)pppppppfStack_378 + (long)pppppppfStack_370 * lVar37);
                  do {
                    fVar61 = *pfVar17;
                    *pfVar17 = *(float *)pppppppfVar36;
                    *(float *)pppppppfVar36 = fVar61;
                    pppppppfVar52 = (float *******)((long)pppppppfVar52 + -1);
                    pfVar17 = pfVar17 + 1;
                    pppppppfVar36 = (float *******)((long)pppppppfVar36 + 4);
                  } while (pppppppfVar52 != (float *******)0x0);
                }
                lVar18 = (uVar31 & 0xfffffffffffffffc) + (long)pppppppfVar51;
                if (3 < (long)uVar35) {
                  pauVar21 = (undefined1 (*) [16])
                             ((long)pppppppfStack_378 +
                             (long)((long)pppppppfVar51 +
                                   (long)pppppppfStack_370 * ((long)pppppppfVar45 + lVar58)) * 4);
                  puVar24 = (undefined8 *)
                            ((long)pppppppfStack_378 +
                            (long)pppppppfStack_370 * lVar37 + (long)pppppppfVar51 * 4);
                  pppppppfVar52 = pppppppfVar51;
                  do {
                    uVar6 = *puVar24;
                    uVar7 = puVar24[1];
                    auVar71 = *pauVar21;
                    puVar24[1] = auVar71._8_8_;
                    *puVar24 = auVar71._0_8_;
                    *(undefined8 *)((long)*pauVar21 + 8) = uVar7;
                    *(undefined8 *)*pauVar21 = uVar6;
                    pppppppfVar52 = (float *******)((long)pppppppfVar52 + 4);
                    pauVar21 = pauVar21 + 1;
                    puVar24 = puVar24 + 2;
                  } while ((long)pppppppfVar52 < lVar18);
                }
                if (lVar18 < (long)pppppppfStack_370) {
                  lVar18 = uVar35 - (uVar31 & 0xfffffffffffffffc);
                  pfVar17 = (float *)((long)pppppppfStack_378 +
                                     ((long)pppppppfVar51 +
                                     ((long)uVar31 >> 2) * 4 +
                                     (long)pppppppfStack_370 * ((long)pppppppfVar45 + lVar58)) * 4);
                  pfVar28 = (float *)((long)pppppppfStack_378 +
                                     ((long)uVar31 >> 2) * 0x10 + (long)pppppppfVar51 * 4 +
                                     (long)pppppppfStack_370 * lVar37);
                  do {
                    fVar61 = *pfVar17;
                    *pfVar17 = *pfVar28;
                    *pfVar28 = fVar61;
                    lVar18 = lVar18 + -1;
                    pfVar17 = pfVar17 + 1;
                    pfVar28 = pfVar28 + 1;
                  } while (lVar18 != 0);
                }
              }
            }
          }
          pppppppfVar45 = (float *******)((long)pppppppfVar45 + 1);
          lVar25 = lVar25 + -1;
          lVar37 = lVar37 + 4;
          pppppppfVar52 = pppppppfStack_340;
        } while ((long)pppppppfVar45 < (long)pppppppfStack_328);
      }
    }
    else {
      uStack_350 = 3;
      pppppppfVar52 = pppppppfStack_340;
    }
    pppppppfStack_340 = pppppppfVar52;
    uStack_34c = 1;
    _free(pfStack_3e0);
    pppppppfVar52 = uStack_388;
    ppppppfVar16 = ppppppfStack_390;
    FUN_109550fa8(&pppppppfStack_138,plVar14,9);
    pfStack_3e0 = (float *)0x0;
    pppppppfStack_3d8 = (float *******)0x0;
    pppppppfStack_3d0 = (float *******)0x0;
    if ((pppppppfStack_150 != (float *******)0x0) || (iVar43 != 0)) {
      if ((iVar43 == 0) || (pppppppfStack_150 == (float *******)0x0)) {
LAB_109550798:
        FUN_1093c3d54(&pfStack_3e0,(long)pppppppfStack_150 * (long)pppppppfVar55,pppppppfStack_150);
        goto LAB_1095507ac;
      }
      lVar37 = 0;
      if (pppppppfVar55 != (float *******)0x0) {
        lVar37 = 0x7fffffffffffffff / (long)pppppppfVar55;
      }
      if ((long)pppppppfStack_150 <= lVar37) goto LAB_109550798;
LAB_109550ec0:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109550ee0;
    }
LAB_1095507ac:
    pppppppfVar36 = uStack_388;
    pppppppfVar51 = pppppppfStack_3d0;
    pppppppfVar45 = pppppppfStack_3d8;
    if (((int)uVar3 < 1) ||
       (0x13 < (long)pppppppfStack_3d0 + (long)pppppppfVar56 + (long)pppppppfStack_3d8)) {
      if (0 < (long)pppppppfStack_3d8 * (long)pppppppfStack_3d0) {
        _bzero(pfStack_3e0,(long)pppppppfStack_3d8 * (long)pppppppfStack_3d0 * 4);
      }
      if (((pppppppfStack_150 != (float *******)0x0) && (pppppppfStack_148 != (float *******)0x0))
         && (iVar43 != 0)) {
        if (pppppppfVar51 == (float *******)0x1) {
          if (pppppppfStack_150 == (float *******)0x1) {
            if (uVar3 == 0) {
              fVar61 = 0.0;
            }
            else {
              fVar61 = *(float *)pppppppfStack_158 * *(float *)ppppppfVar16;
              if (1 < (int)uVar3) {
                lVar37 = (long)pppppppfVar56 + -1;
                do {
                  pppppppfStack_158 = (float *******)((long)pppppppfStack_158 + 4);
                  ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
                  fVar61 = fVar61 + *(float *)pppppppfStack_158 * *(float *)ppppppfVar16;
                  lVar37 = lVar37 + -1;
                } while (lVar37 != 0);
              }
            }
            *pfStack_3e0 = fVar61 + *pfStack_3e0;
          }
          else {
            uStack_110 = pppppppfStack_158;
            uStack_108 = pppppppfStack_150;
            uStack_3c8 = ppppppfVar16;
            pppppppfStack_3c0 = (float *******)0x1;
            FUN_10946ddac(pppppppfStack_150,pppppppfStack_148,&uStack_110,&uStack_3c8,pfStack_3e0,1)
            ;
          }
        }
        else if (pppppppfVar45 == (float *******)0x1) {
          if (iVar43 == 1) {
            if (uVar3 == 0) {
              fVar61 = 0.0;
            }
            else {
              fVar61 = *(float *)pppppppfStack_158 * *(float *)ppppppfVar16;
              if (1 < (int)uVar3) {
                lVar37 = (long)pppppppfVar56 + -1;
                pfVar17 = (float *)((long)pppppppfStack_158 + (long)pppppppfStack_150 * 4);
                do {
                  ppppppfVar16 = (float ******)((long)ppppppfVar16 + 4);
                  fVar61 = fVar61 + *pfVar17 * *(float *)ppppppfVar16;
                  pfVar17 = pfVar17 + (long)pppppppfStack_150;
                  lVar37 = lVar37 + -1;
                } while (lVar37 != 0);
              }
            }
            *pfStack_3e0 = fVar61 + *pfStack_3e0;
          }
          else {
            uStack_3c8 = ppppppfVar16;
            pppppppfStack_3b0 = &ppppppfStack_390;
            pppppppfStack_3a8 = (float *******)0x0;
            pppppppfStack_3a0 = (float *******)0x0;
            pppppppfStack_398 = pppppppfVar52;
            uStack_110 = pppppppfStack_158;
            pppppppfStack_100 = pppppppfStack_148;
            pppppppfStack_f8 = pppppppfStack_158;
            pppppppfStack_f0 = pppppppfStack_150;
            pppppppfStack_e8 = pppppppfStack_148;
            uStack_d0 = 0;
            uStack_d8 = 0;
            uStack_c8 = 1;
            pppppppfStack_3c0 = pppppppfVar56;
            pppppppfStack_3b8 = pppppppfVar55;
            FUN_109553b10(&uStack_3c8,&uStack_110,pfStack_3e0,&pfStack_3e0);
          }
        }
        else {
          uStack_108 = (float *******)0x0;
          uStack_110 = (float *******)0x0;
          pppppppfStack_f0 = pppppppfStack_148;
          pppppppfStack_100 = pppppppfVar45;
          pppppppfStack_f8 = pppppppfVar51;
          FUN_1093ecdf0(&pppppppfStack_f0,&pppppppfStack_100,&pppppppfStack_f8,1);
          pppppppfStack_e8 = (float *******)((long)pppppppfStack_f0 * (long)pppppppfStack_100);
          pppppppfStack_e0 = (float *******)((long)pppppppfStack_f8 * (long)pppppppfStack_f0);
          FUN_109540568(pppppppfStack_150,pppppppfVar55,pppppppfStack_148,pppppppfStack_158,
                        pppppppfStack_150,ppppppfVar16,uStack_388,pfStack_3e0,1,pppppppfStack_3d8,
                        &uStack_110,0);
          _free(uStack_110);
          _free(uStack_108);
        }
      }
    }
    else {
      if ((pppppppfStack_3d8 != pppppppfStack_150) ||
         (pppppppfVar52 = pppppppfStack_150, pppppppfVar45 = pppppppfVar55,
         pppppppfStack_3d0 != pppppppfVar55)) {
        if ((iVar43 != 0) && (pppppppfStack_150 != (float *******)0x0)) {
          lVar37 = 0;
          if (pppppppfVar55 != (float *******)0x0) {
            lVar37 = 0x7fffffffffffffff / (long)pppppppfVar55;
          }
          if (lVar37 < (long)pppppppfStack_150) goto LAB_109550ec0;
        }
        FUN_1093c3d54(&pfStack_3e0,(long)pppppppfStack_150 * (long)pppppppfVar55,pppppppfStack_150);
        pppppppfVar52 = pppppppfStack_3d8;
        pppppppfVar45 = pppppppfStack_3d0;
      }
      if (0 < (long)pppppppfVar45) {
        lVar37 = 0;
        pppppppfVar46 = (float *******)0x0;
        pppppppfVar51 = (float *******)0x0;
        pfVar17 = (float *)((long)pppppppfStack_158 + (long)pppppppfStack_150 * 4);
        ppppppfVar22 = ppppppfVar16;
        do {
          lVar25 = (long)pppppppfVar51 * (long)pppppppfVar52;
          if (0 < (long)pppppppfVar46) {
            pppppppfVar27 = (float *******)0x0;
            pfVar28 = pfVar17;
            do {
              fVar61 = *(float *)((long)pppppppfStack_158 + (long)pppppppfVar27 * 4) *
                       *(float *)((long)ppppppfVar16 + (long)uStack_388 * (long)pppppppfVar51 * 4);
              pfVar19 = pfVar28;
              pfVar15 = (float *)((long)ppppppfVar16 + (long)uStack_388 * lVar37 + 4);
              lVar18 = (long)pppppppfVar56 + -1;
              if (1 < uVar3) {
                do {
                  fVar61 = fVar61 + *pfVar19 * *pfVar15;
                  lVar18 = lVar18 + -1;
                  pfVar19 = pfVar19 + (long)pppppppfStack_150;
                  pfVar15 = pfVar15 + 1;
                } while (lVar18 != 0);
              }
              pfStack_3e0[(long)(lVar25 + (long)pppppppfVar27)] = fVar61;
              pppppppfVar27 = (float *******)((long)pppppppfVar27 + 1);
              pfVar28 = pfVar28 + 1;
            } while (pppppppfVar27 != pppppppfVar46);
          }
          uVar31 = (long)pppppppfVar52 - (long)pppppppfVar46;
          lVar18 = (uVar31 & 0xfffffffffffffffc) + (long)pppppppfVar46;
          if (3 < (long)uVar31) {
            pauVar21 = (undefined1 (*) [16])((long)pppppppfStack_158 + (long)pppppppfVar46 * 4);
            pppppppfVar27 = pppppppfVar46;
            do {
              auVar69 = ZEXT216(0);
              pauVar53 = pauVar21;
              ppppppfVar39 = ppppppfVar22;
              pppppppfVar41 = pppppppfStack_148;
              auVar71 = auVar69;
              if (0 < (long)pppppppfStack_148) {
                do {
                  auVar70 = *pauVar53;
                  fVar61 = *(float *)ppppppfVar39;
                  auVar69._0_4_ = auVar71._0_4_ + auVar70._0_4_ * fVar61;
                  auVar69._4_4_ = auVar71._4_4_ + auVar70._4_4_ * fVar61;
                  auVar69._8_4_ = auVar71._8_4_ + auVar70._8_4_ * fVar61;
                  auVar69._12_4_ = auVar71._12_4_ + auVar70._12_4_ * fVar61;
                  pppppppfVar41 = (float *******)((long)pppppppfVar41 + -1);
                  pauVar53 = (undefined1 (*) [16])((long)*pauVar53 + pppppppfStack_150 * 4);
                  ppppppfVar39 = (float ******)((long)ppppppfVar39 + 4);
                  auVar71 = auVar69;
                } while (pppppppfVar41 != (float *******)0x0);
              }
              *(long *)(pfStack_3e0 + (long)(lVar25 + (long)pppppppfVar27) + 2) = auVar69._8_8_;
              *(long *)(pfStack_3e0 + (long)(lVar25 + (long)pppppppfVar27)) = auVar69._0_8_;
              pppppppfVar27 = (float *******)((long)pppppppfVar27 + 4);
              pauVar21 = pauVar21 + 1;
            } while ((long)pppppppfVar27 < lVar18);
          }
          if (lVar18 < (long)pppppppfVar52) {
            pfVar28 = (float *)((long)pfVar17 +
                               (uVar31 * 4 & 0xfffffffffffffff0) + (long)pppppppfVar46 * 4);
            do {
              fVar61 = *(float *)((long)pppppppfStack_158 + lVar18 * 4) *
                       *(float *)((long)ppppppfVar16 + (long)uStack_388 * (long)pppppppfVar51 * 4);
              pfVar19 = pfVar28;
              pfVar15 = (float *)((long)ppppppfVar16 + (long)uStack_388 * lVar37 + 4);
              lVar58 = (long)pppppppfVar56 + -1;
              if (1 < uVar3) {
                do {
                  fVar61 = fVar61 + *pfVar19 * *pfVar15;
                  lVar58 = lVar58 + -1;
                  pfVar19 = pfVar19 + (long)pppppppfStack_150;
                  pfVar15 = pfVar15 + 1;
                } while (lVar58 != 0);
              }
              pfStack_3e0[lVar25 + lVar18] = fVar61;
              lVar18 = lVar18 + 1;
              pfVar28 = pfVar28 + 1;
            } while (lVar18 < (long)pppppppfVar52);
          }
          uVar31 = (long)pppppppfVar46 + ((ulong)(uint)-(int)pppppppfVar52 & 3);
          pppppppfVar27 = (float *******)(uVar31 & 3);
          uVar31 = -uVar31;
          if (-1 < (long)uVar31) {
            pppppppfVar27 = (float *******)-(uVar31 & 3);
          }
          pppppppfVar46 = pppppppfVar52;
          if ((long)pppppppfVar27 <= (long)pppppppfVar52) {
            pppppppfVar46 = pppppppfVar27;
          }
          pppppppfVar51 = (float *******)((long)pppppppfVar51 + 1);
          lVar37 = lVar37 + 4;
          ppppppfVar22 = (float ******)((long)ppppppfVar22 + (long)pppppppfVar36 * 4);
        } while (pppppppfVar51 != pppppppfVar45);
      }
    }
    ppppppfVar16 = ppppppfStack_130;
    pppppppfVar56 = pppppppfStack_138;
    uVar35 = CONCAT71(uStack_127,uStack_128) * (long)ppppppfStack_130;
    uVar31 = (ulong)-((uint)pppppppfStack_138 >> 2) & 3;
    if ((long)uVar35 <= (long)uVar31) {
      uVar31 = uVar35;
    }
    uVar20 = uVar35;
    if (((ulong)pppppppfStack_138 & 3) == 0) {
      uVar20 = uVar31;
    }
    uVar34 = uVar35 - uVar20;
    uVar31 = uVar34 + 3;
    if ((long)uVar20 <= (long)uVar35) {
      uVar31 = uVar34;
    }
    pppppppfVar52 = pppppppfStack_138;
    pfVar17 = pfStack_3e0;
    uVar42 = uVar20;
    if (0 < (long)uVar20) {
      do {
        *(float *)pppppppfVar52 = *pfVar17;
        uVar42 = uVar42 - 1;
        pppppppfVar52 = (float *******)((long)pppppppfVar52 + 4);
        pfVar17 = pfVar17 + 1;
      } while (uVar42 != 0);
    }
    lVar37 = (uVar31 & 0xfffffffffffffffc) + uVar20;
    if (3 < (long)uVar34) {
      pfVar17 = pfStack_3e0 + uVar20;
      uVar42 = uVar20;
      pfVar28 = (float *)((long)pppppppfStack_138 + uVar20 * 4);
      do {
        uVar6 = *(undefined8 *)pfVar17;
        *(undefined8 *)(pfVar28 + 2) = *(undefined8 *)(pfVar17 + 2);
        *(undefined8 *)pfVar28 = uVar6;
        uVar42 = uVar42 + 4;
        pfVar17 = pfVar17 + 4;
        pfVar28 = pfVar28 + 4;
      } while ((long)uVar42 < lVar37);
    }
    if (lVar37 < (long)uVar35) {
      lVar37 = uVar34 - (uVar31 & 0xfffffffffffffffc);
      pfVar17 = pfStack_3e0 + uVar20 + ((long)uVar31 >> 2) * 4;
      pfVar28 = (float *)((long)pppppppfStack_138 + (uVar20 + ((long)uVar31 >> 2) * 4) * 4);
      do {
        *pfVar28 = *pfVar17;
        lVar37 = lVar37 + -1;
        pfVar17 = pfVar17 + 1;
        pfVar28 = pfVar28 + 1;
      } while (lVar37 != 0);
    }
    _free(pfStack_3e0);
    if (0 < iVar43) {
      pppppppfVar52 = (float *******)0x0;
      do {
        func_0x00010954d990(&uStack_110,plVar14,5,pppppppfVar52);
        if (0 < *(int *)((long)plVar14 + 0x1d4)) {
          lVar37 = 0;
          pppppppfVar51 = uStack_110;
          pppppppfVar45 = uStack_110;
          do {
            pppppppfVar46 = (float *******)((ulong)-((uint)pppppppfVar51 >> 2) & 3);
            pppppppfVar36 = pppppppfStack_100;
            if ((long)pppppppfVar46 <= (long)pppppppfStack_100) {
              pppppppfVar36 = pppppppfVar46;
            }
            iVar43 = (int)plVar14[0x3b];
            iVar30 = (int)lVar37;
            if (((ulong)uStack_110 & 3) == 0) {
              pppppppfVar46 =
                   (float *******)
                   ((ulong)-((uint)((int)uStack_110 + (int)pppppppfStack_100 * iVar30 * 4) >> 2) & 3
                   );
              if ((long)pppppppfStack_100 <= (long)pppppppfVar46) {
                pppppppfVar46 = pppppppfStack_100;
              }
              if (0 < (long)pppppppfVar46) {
                pppppppfVar27 = (float *******)0x0;
                do {
                  *(float *)((long)pppppppfVar45 + (long)pppppppfVar27 * 4) =
                       *(float *)((long)pppppppfVar56 +
                                 ((long)(iVar43 * iVar30) + (long)pppppppfVar27) * 4);
                  pppppppfVar27 = (float *******)((long)pppppppfVar27 + 1);
                } while (pppppppfVar36 != pppppppfVar27);
              }
              lVar25 = ((long)pppppppfStack_100 - (long)pppppppfVar46 & 0xfffffffffffffffcU) +
                       (long)pppppppfVar46;
              if (3 < (long)pppppppfStack_100 - (long)pppppppfVar46) {
                lVar18 = (long)pppppppfVar36 << 2;
                do {
                  auVar71 = *(undefined1 (*) [16])
                             ((long)pppppppfVar56 + lVar18 + (long)(iVar43 * iVar30) * 4);
                  ((undefined8 *)((long)pppppppfVar45 + lVar18))[1] = auVar71._8_8_;
                  *(undefined8 *)((long)pppppppfVar45 + lVar18) = auVar71._0_8_;
                  pppppppfVar46 = (float *******)((long)pppppppfVar46 + 4);
                  lVar18 = lVar18 + 0x10;
                } while ((long)pppppppfVar46 < lVar25);
              }
              if (lVar25 < (long)pppppppfStack_100) {
                do {
                  *(float *)((long)pppppppfVar45 + lVar25 * 4) =
                       *(float *)((long)pppppppfVar56 + (iVar43 * iVar30 + lVar25) * 4);
                  lVar25 = lVar25 + 1;
                } while (lVar25 < (long)pppppppfStack_100);
              }
            }
            else if (0 < (long)pppppppfStack_100) {
              pfVar17 = (float *)((long)pppppppfVar56 + (long)(iVar43 * iVar30) * 4);
              pppppppfVar46 = pppppppfVar45;
              pppppppfVar36 = pppppppfStack_100;
              do {
                *(float *)pppppppfVar46 = *pfVar17;
                pppppppfVar36 = (float *******)((long)pppppppfVar36 + -1);
                pfVar17 = pfVar17 + 1;
                pppppppfVar46 = (float *******)((long)pppppppfVar46 + 4);
              } while (pppppppfVar36 != (float *******)0x0);
            }
            lVar37 = lVar37 + 1;
            pppppppfVar45 = (float *******)((long)pppppppfVar45 + (long)pppppppfStack_100 * 4);
            pppppppfVar51 = (float *******)((long)pppppppfVar51 + (long)pppppppfStack_100 * 4);
          } while (lVar37 < *(int *)((long)plVar14 + 0x1d4));
        }
        pppppppfVar52 = (float *******)((long)pppppppfVar52 + 1);
        pppppppfVar56 = (float *******)((long)pppppppfVar56 + (long)ppppppfVar16 * 4);
      } while (pppppppfVar52 != pppppppfVar55);
    }
    FUN_10955102c(&ppppppfStack_390);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar25 = 0;
    if (pppppppfStack_148 != (float *******)0x0) {
      lVar25 = 0x7fffffffffffffff / (long)pppppppfStack_148;
    }
    if ((long)pppppppfStack_148 <= lVar25) {
      FUN_1093c3d54(&uStack_3c8,(long)pppppppfStack_148 * (long)pppppppfStack_148,pppppppfStack_148,
                    pppppppfStack_148);
      goto LAB_10954df70;
    }
  }
LAB_109550e78:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109550ee0:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x109550ee4);
  (*pcVar12)();
}



/* Entry: 10954db34; end: 109550fa7;  */

void FUN_10954db34(long *param_1)

{
  float *pfVar1;
  float *******pppppppfVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined3 uVar8;
  undefined3 uVar9;
  int5 iVar10;
  int5 iVar11;
  float *****pppppfVar12;
  code *pcVar13;
  bool bVar14;
  float *pfVar15;
  float *******pppppppfVar16;
  float ******ppppppfVar17;
  float *pfVar18;
  long lVar19;
  float *pfVar20;
  ulong uVar21;
  undefined1 (*pauVar22) [16];
  float ******ppppppfVar23;
  float *******pppppppfVar24;
  undefined8 *puVar25;
  long lVar26;
  float *******pppppppfVar27;
  float *******pppppppfVar28;
  float *pfVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  float *******pppppppfVar34;
  float *******pppppppfVar35;
  ulong uVar36;
  float *pfVar37;
  float ******ppppppfVar38;
  long lVar39;
  float *******pppppppfVar40;
  ulong uVar41;
  int iVar42;
  float *******pppppppfVar43;
  float *******pppppppfVar44;
  ulong uVar45;
  float *pfVar46;
  long lVar47;
  uint uVar48;
  float *******pppppppfVar49;
  undefined1 (*pauVar50) [16];
  float *pfVar51;
  float *******pppppppfVar52;
  float *******pppppppfVar53;
  float *pfVar54;
  long lVar55;
  float *******pppppppfVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float ******ppppppfStack_3d0;
  float fStack_3b4;
  float *pfStack_3b0;
  float ******ppppppfStack_3a8;
  float ******ppppppfStack_3a0;
  undefined8 uStack_398;
  float ******ppppppfStack_390;
  float ******ppppppfStack_388;
  float ******ppppppfStack_380;
  float ******ppppppfStack_378;
  float ******ppppppfStack_370;
  float ******ppppppfStack_368;
  float *****pppppfStack_360;
  undefined8 uStack_358;
  float ******ppppppfStack_350;
  float ******ppppppfStack_348;
  float ******ppppppfStack_340;
  float ******ppppppfStack_338;
  float ******ppppppfStack_330;
  undefined3 uStack_328;
  int5 iStack_325;
  undefined4 uStack_320;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  undefined1 uStack_31a;
  byte bStack_319;
  byte bStack_318;
  byte bStack_317;
  byte bStack_316;
  undefined1 uStack_315;
  undefined4 uStack_314;
  float ******ppppppfStack_310;
  float ******ppppppfStack_308;
  float ******ppppppfStack_300;
  float ******ppppppfStack_2f8;
  float *pfStack_2e8;
  float ******ppppppfStack_2e0;
  float ******ppppppfStack_2d8;
  float ******ppppppfStack_2d0;
  float ******ppppppfStack_2c8;
  float ******ppppppfStack_2c0;
  float *****pppppfStack_2b8;
  undefined8 uStack_2b0;
  float *pfStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined2 uStack_258;
  float *pfStack_238;
  float ******ppppppfStack_230;
  float ******ppppppfStack_228;
  long lStack_220;
  float ******ppppppfStack_218;
  float *****pppppfStack_210;
  float ******ppppppfStack_208;
  float ******ppppppfStack_200;
  float *****pppppfStack_1f8;
  undefined8 uStack_1f0;
  float *pfStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  long lStack_178;
  float ******ppppppfStack_170;
  float *pfStack_168;
  float ******ppppppfStack_160;
  float ******ppppppfStack_158;
  float *pfStack_148;
  float ******ppppppfStack_140;
  float ******ppppppfStack_138;
  float ******ppppppfStack_128;
  float ******ppppppfStack_120;
  float ******ppppppfStack_118;
  float ******ppppppfStack_108;
  float *****pppppfStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  float ******ppppppfStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  float ******ppppppfStack_d0;
  float ******ppppppfStack_c8;
  float ******ppppppfStack_c0;
  float ******ppppppfStack_b8;
  float ******ppppppfStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar3 = *(uint *)(param_1 + 0x12);
  pppppppfVar53 = (float *******)(long)(int)uVar3;
  if ((int)uVar3 < 1) {
    FUN_109550fa8(&ppppppfStack_128,param_1,7);
    pppppppfVar52 = (float *******)ppppppfStack_128;
    pppppppfVar49 = (float *******)ppppppfStack_120;
  }
  else {
    uVar48 = 0;
    do {
      func_0x00010954d990(&pppppfStack_360,param_1,4,uVar48);
      uVar33 = (long)ppppppfStack_350 * (long)uStack_358;
      uVar36 = (ulong)-((uint)pppppfStack_360 >> 2) & 3;
      if ((long)uVar33 <= (long)uVar36) {
        uVar36 = uVar33;
      }
      uVar21 = uVar33;
      if (((ulong)pppppfStack_360 & 3) == 0) {
        uVar21 = uVar36;
      }
      uVar32 = uVar33 - uVar21;
      uVar36 = uVar32 + 3;
      uVar41 = uVar32 + 7;
      if ((long)uVar21 <= (long)uVar33) {
        uVar36 = uVar32;
        uVar41 = uVar32;
      }
      if (uVar32 + 3 < 7) {
        fVar57 = *(float *)pppppfStack_360;
        if (1 < (long)uVar33) {
          lVar39 = uVar33 - 1;
          ppppppfVar17 = (float ******)pppppfStack_360;
          do {
            ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
            fVar57 = fVar57 + *(float *)ppppppfVar17;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
      }
      else {
        pauVar22 = (undefined1 (*) [16])((long)pppppfStack_360 + uVar21 * 4);
        auVar67 = *pauVar22;
        if (7 < (long)uVar32) {
          lVar39 = (uVar41 & 0xfffffffffffffff8) + uVar21;
          fVar57 = *(float *)pauVar22[1];
          fVar58 = *(float *)((long)pauVar22[1] + 4);
          fVar59 = *(float *)((long)pauVar22[1] + 8);
          fVar70 = *(float *)((long)pauVar22[1] + 0xc);
          auVar66 = auVar67;
          if (0xf < uVar32) {
            lVar26 = uVar21 + 8;
            pauVar22 = pauVar22 + 3;
            do {
              auVar66._0_4_ = auVar67._0_4_ + (float)*(undefined8 *)pauVar22[-1];
              auVar66._4_4_ = auVar67._4_4_ + (float)((ulong)*(undefined8 *)pauVar22[-1] >> 0x20);
              auVar66._8_4_ = auVar67._8_4_ + (float)*(undefined8 *)((long)pauVar22[-1] + 8);
              auVar66._12_4_ =
                   auVar67._12_4_ + (float)((ulong)*(undefined8 *)((long)pauVar22[-1] + 8) >> 0x20);
              fVar57 = fVar57 + (float)*(undefined8 *)*pauVar22;
              fVar58 = fVar58 + (float)((ulong)*(undefined8 *)*pauVar22 >> 0x20);
              fVar59 = fVar59 + (float)*(undefined8 *)((long)*pauVar22 + 8);
              fVar70 = fVar70 + (float)((ulong)*(undefined8 *)((long)*pauVar22 + 8) >> 0x20);
              lVar26 = lVar26 + 8;
              pauVar22 = pauVar22 + 2;
              auVar67 = auVar66;
            } while (lVar26 < lVar39);
          }
          auVar67._0_4_ = fVar57 + auVar66._0_4_;
          auVar67._4_4_ = fVar58 + auVar66._4_4_;
          auVar67._8_4_ = fVar59 + auVar66._8_4_;
          auVar67._12_4_ = fVar70 + auVar66._12_4_;
          if ((long)(uVar41 & 0xfffffffffffffff8) < (long)(uVar36 & 0xfffffffffffffffc)) {
            pfVar18 = (float *)((long)pppppfStack_360 + lVar39 * 4);
            auVar67._0_4_ = auVar67._0_4_ + *pfVar18;
            auVar67._4_4_ = auVar67._4_4_ + pfVar18[1];
            auVar67._8_4_ = auVar67._8_4_ + pfVar18[2];
            auVar67._12_4_ = auVar67._12_4_ + pfVar18[3];
          }
        }
        auVar66 = NEON_ext(auVar67,auVar67,8,1);
        fVar57 = auVar67._0_4_ + auVar66._0_4_ + auVar67._4_4_ + auVar66._4_4_;
        ppppppfVar17 = (float ******)pppppfStack_360;
        uVar32 = uVar21;
        if (0 < (long)uVar21) {
          do {
            fVar57 = fVar57 + *(float *)ppppppfVar17;
            uVar32 = uVar32 - 1;
            ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
          } while (uVar32 != 0);
        }
        for (lVar39 = (uVar36 & 0xfffffffffffffffc) + uVar21; lVar39 < (long)uVar33;
            lVar39 = lVar39 + 1) {
          fVar57 = fVar57 + *(float *)((long)pppppfStack_360 + lVar39 * 4);
        }
      }
      fVar57 = fVar57 / (float)(long)uVar33;
      uVar36 = (ulong)-((uint)pppppfStack_360 >> 2) & 3;
      if ((long)uVar33 <= (long)uVar36) {
        uVar36 = uVar33;
      }
      uVar21 = uVar33;
      if (((ulong)pppppfStack_360 & 3) == 0) {
        uVar21 = uVar36;
      }
      uVar32 = uVar33 - uVar21;
      uVar36 = uVar32 + 3;
      if ((long)uVar21 <= (long)uVar33) {
        uVar36 = uVar32;
      }
      ppppppfVar17 = (float ******)pppppfStack_360;
      uVar41 = uVar21;
      if (0 < (long)uVar21) {
        do {
          *(float *)ppppppfVar17 = *(float *)ppppppfVar17 - fVar57;
          uVar41 = uVar41 - 1;
          ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
        } while (uVar41 != 0);
      }
      lVar39 = (uVar36 & 0xfffffffffffffffc) + uVar21;
      if (3 < (long)uVar32) {
        pfVar18 = (float *)((long)pppppfStack_360 + uVar21 * 4);
        uVar41 = uVar21;
        do {
          *(ulong *)(pfVar18 + 2) =
               CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20) - fVar57,
                        (float)*(undefined8 *)(pfVar18 + 2) - fVar57);
          *(ulong *)pfVar18 =
               CONCAT44((float)((ulong)*(undefined8 *)pfVar18 >> 0x20) - fVar57,
                        (float)*(undefined8 *)pfVar18 - fVar57);
          uVar41 = uVar41 + 4;
          pfVar18 = pfVar18 + 4;
        } while ((long)uVar41 < lVar39);
      }
      if (lVar39 < (long)uVar33) {
        lVar39 = uVar32 - (uVar36 & 0xfffffffffffffffc);
        pfVar18 = (float *)((long)pppppfStack_360 + (uVar21 + ((long)uVar36 >> 2) * 4) * 4);
        do {
          *pfVar18 = *pfVar18 - fVar57;
          lVar39 = lVar39 + -1;
          pfVar18 = pfVar18 + 1;
        } while (lVar39 != 0);
      }
      uVar48 = uVar48 + 1;
    } while (uVar48 != uVar3);
    FUN_109550fa8(&ppppppfStack_128,param_1,7);
    pppppppfVar49 = (float *******)ppppppfStack_120;
    pppppppfVar52 = (float *******)ppppppfStack_128;
    uVar36 = 0;
    pppppppfVar35 = (float *******)ppppppfStack_128;
    pppppppfVar16 = (float *******)ppppppfStack_128;
    do {
      func_0x00010954d990(&pppppfStack_360,param_1,4,uVar36);
      iVar42 = *(int *)((long)param_1 + 0x1d4);
      if (0 < iVar42) {
        lVar39 = 0;
        ppppppfVar17 = (float ******)pppppfStack_360;
        do {
          iVar31 = (int)param_1[0x3b];
          uVar33 = (ulong)iVar31;
          iVar30 = (int)lVar39;
          pfVar18 = (float *)((long)pppppppfVar52 +
                             ((long)pppppppfVar49 * uVar36 + (long)(iVar31 * iVar30)) * 4);
          if (((ulong)pfVar18 & 3) == 0) {
            uVar21 = (ulong)-((uint)pfVar18 >> 2) & 3;
            if ((long)uVar33 <= (long)uVar21) {
              uVar21 = uVar33;
            }
            if (0 < (long)uVar21) {
              uVar32 = 0;
              uVar45 = (ulong)-((uint)((int)pppppppfVar35 + iVar31 * iVar30 * 4) >> 2) & 3;
              uVar41 = uVar33;
              if ((long)uVar45 <= (long)uVar33) {
                uVar41 = uVar45;
              }
              do {
                *(float *)((long)pppppppfVar16 + ((long)(iVar31 * iVar30) + uVar32) * 4) =
                     *(float *)((long)ppppppfVar17 + uVar32 * 4);
                uVar32 = uVar32 + 1;
              } while (uVar41 != uVar32);
            }
            lVar26 = (uVar33 - uVar21 & 0xfffffffffffffffc) + uVar21;
            if (3 < (long)(uVar33 - uVar21)) {
              uVar41 = (ulong)-((uint)((int)pppppppfVar35 + iVar31 * iVar30 * 4) >> 2) & 3;
              uVar32 = uVar33;
              if ((long)uVar41 <= (long)uVar33) {
                uVar32 = uVar41;
              }
              lVar19 = uVar32 << 2;
              do {
                auVar67 = *(undefined1 (*) [16])((long)ppppppfVar17 + lVar19);
                puVar25 = (undefined8 *)((long)pppppppfVar16 + lVar19 + (long)(iVar31 * iVar30) * 4)
                ;
                puVar25[1] = auVar67._8_8_;
                *puVar25 = auVar67._0_8_;
                uVar21 = uVar21 + 4;
                lVar19 = lVar19 + 0x10;
              } while ((long)uVar21 < lVar26);
            }
            if (lVar26 < (long)uVar33) {
              do {
                *(float *)((long)pppppppfVar16 + (iVar31 * iVar30 + lVar26) * 4) =
                     *(float *)((long)ppppppfVar17 + lVar26 * 4);
                lVar26 = lVar26 + 1;
              } while (lVar26 < (long)uVar33);
            }
            iVar42 = *(int *)((long)param_1 + 0x1d4);
          }
          else if (0 < iVar31) {
            pfVar18 = (float *)((long)pppppppfVar16 + (long)(iVar31 * iVar30) * 4);
            ppppppfVar23 = ppppppfVar17;
            do {
              *pfVar18 = *(float *)ppppppfVar23;
              uVar33 = uVar33 - 1;
              pfVar18 = pfVar18 + 1;
              ppppppfVar23 = (float ******)((long)ppppppfVar23 + 4);
            } while (uVar33 != 0);
          }
          lVar39 = lVar39 + 1;
          ppppppfVar17 = (float ******)((long)ppppppfVar17 + (long)ppppppfStack_350 * 4);
        } while (lVar39 < iVar42);
      }
      uVar36 = uVar36 + 1;
      pppppppfVar16 = (float *******)((long)pppppppfVar16 + (long)pppppppfVar49 * 4);
      pppppppfVar35 = (float *******)((long)pppppppfVar35 + (long)pppppppfVar49 * 4);
    } while (uVar36 != uVar3);
  }
  FUN_109550fa8(&pfStack_148,param_1,8);
  ppppppfStack_3d0 = ppppppfStack_118;
  iVar42 = *(int *)((long)param_1 + 0x1d4);
  lVar39 = param_1[0x3b];
  uStack_398 = (float ******)0x0;
  ppppppfStack_390 = (float ******)0x0;
  ppppppfStack_388 = (float ******)0x0;
  if ((float *******)ppppppfStack_118 == (float *******)0x0) {
LAB_10954df70:
    ppppppfVar23 = ppppppfStack_388;
    ppppppfVar17 = ppppppfStack_390;
    fVar57 = 1.0 / (float)((int)lVar39 * iVar42 + -1);
    lVar39 = (long)pppppppfVar49 + -1;
    if (((long)pppppppfVar49 < 1) ||
       (0x13 < (long)ppppppfStack_390 + (long)pppppppfVar49 + (long)ppppppfStack_388)) {
      if (0 < (long)ppppppfStack_388 * (long)ppppppfStack_390) {
        _bzero(uStack_398,(long)ppppppfStack_388 * (long)ppppppfStack_390 * 4);
      }
      ppppppfVar38 = uStack_398;
      ppppppfStack_108 = (float ******)CONCAT44(ppppppfStack_108._4_4_,0x3f800000);
      if ((pppppppfVar49 != (float *******)0x0) &&
         ((float *******)ppppppfStack_3d0 != (float *******)0x0)) {
        if ((float *******)ppppppfVar23 == (float *******)0x1) {
          if ((float *******)ppppppfStack_3d0 == (float *******)0x1) {
            pppppppfVar16 = (float *******)((long)pppppppfVar49 + 3);
            pppppppfVar35 = (float *******)((long)pppppppfVar49 + 7);
            if (-1 < (long)pppppppfVar49) {
              pppppppfVar16 = pppppppfVar49;
              pppppppfVar35 = pppppppfVar49;
            }
            if ((long)pppppppfVar49 + 3U < 7) {
              fVar58 = *(float *)pppppppfVar52 * fVar57 * *(float *)pppppppfVar52;
              if (1 < (long)pppppppfVar49) {
                do {
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + 4);
                  fVar58 = fVar58 + *(float *)pppppppfVar52 * fVar57 * *(float *)pppppppfVar52;
                  lVar39 = lVar39 + -1;
                } while (lVar39 != 0);
              }
            }
            else {
              auVar63._0_4_ = *(float *)pppppppfVar52 * *(float *)pppppppfVar52 * fVar57;
              auVar63._4_4_ =
                   *(float *)((long)pppppppfVar52 + 4) *
                   *(float *)((long)pppppppfVar52 + 4) * fVar57;
              auVar63._8_4_ = *(float *)(pppppppfVar52 + 1) * *(float *)(pppppppfVar52 + 1) * fVar57
              ;
              auVar63._12_4_ =
                   *(float *)((long)pppppppfVar52 + 0xc) *
                   *(float *)((long)pppppppfVar52 + 0xc) * fVar57;
              if (7 < (long)pppppppfVar49) {
                uVar36 = (ulong)pppppppfVar35 & 0xfffffffffffffff8;
                fVar58 = *(float *)(pppppppfVar52 + 2) * *(float *)(pppppppfVar52 + 2) * fVar57;
                fVar59 = *(float *)((long)pppppppfVar52 + 0x14) *
                         *(float *)((long)pppppppfVar52 + 0x14) * fVar57;
                fVar70 = *(float *)(pppppppfVar52 + 3) * *(float *)(pppppppfVar52 + 3) * fVar57;
                fVar73 = *(float *)((long)pppppppfVar52 + 0x1c) *
                         *(float *)((long)pppppppfVar52 + 0x1c) * fVar57;
                auVar64 = auVar63;
                if ((float *******)0xf < pppppppfVar49) {
                  pppppppfVar35 = pppppppfVar52 + 6;
                  lVar39 = 8;
                  do {
                    fVar75 = SUB84(pppppppfVar35[-1],0);
                    fVar72 = (float)((ulong)pppppppfVar35[-1] >> 0x20);
                    fVar74 = SUB84(pppppppfVar35[-2],0);
                    fVar71 = (float)((ulong)pppppppfVar35[-2] >> 0x20);
                    auVar64._0_4_ = auVar63._0_4_ + fVar74 * fVar74 * fVar57;
                    auVar64._4_4_ = auVar63._4_4_ + fVar71 * fVar71 * fVar57;
                    auVar64._8_4_ = auVar63._8_4_ + fVar75 * fVar75 * fVar57;
                    auVar64._12_4_ = auVar63._12_4_ + fVar72 * fVar72 * fVar57;
                    fVar74 = SUB84(*pppppppfVar35,0);
                    fVar71 = (float)((ulong)*pppppppfVar35 >> 0x20);
                    fVar75 = SUB84(pppppppfVar35[1],0);
                    fVar72 = (float)((ulong)pppppppfVar35[1] >> 0x20);
                    fVar58 = fVar58 + fVar74 * fVar74 * fVar57;
                    fVar59 = fVar59 + fVar71 * fVar71 * fVar57;
                    fVar70 = fVar70 + fVar75 * fVar75 * fVar57;
                    fVar73 = fVar73 + fVar72 * fVar72 * fVar57;
                    lVar39 = lVar39 + 8;
                    pppppppfVar35 = pppppppfVar35 + 4;
                    auVar63 = auVar64;
                  } while (lVar39 < (long)uVar36);
                }
                auVar63._0_4_ = fVar58 + auVar64._0_4_;
                auVar63._4_4_ = fVar59 + auVar64._4_4_;
                auVar63._8_4_ = fVar70 + auVar64._8_4_;
                auVar63._12_4_ = fVar73 + auVar64._12_4_;
                if ((long)uVar36 < (long)((ulong)pppppppfVar16 & 0xfffffffffffffffc)) {
                  pfVar18 = (float *)((long)pppppppfVar52 + uVar36 * 4);
                  auVar63._0_4_ = auVar63._0_4_ + *pfVar18 * *pfVar18 * fVar57;
                  auVar63._4_4_ = auVar63._4_4_ + pfVar18[1] * pfVar18[1] * fVar57;
                  auVar63._8_4_ = auVar63._8_4_ + pfVar18[2] * pfVar18[2] * fVar57;
                  auVar63._12_4_ = auVar63._12_4_ + pfVar18[3] * pfVar18[3] * fVar57;
                }
              }
              auVar67 = NEON_ext(auVar63,auVar63,8,1);
              fVar58 = auVar63._0_4_ + auVar67._0_4_ + auVar63._4_4_ + auVar67._4_4_;
              lVar39 = (long)pppppppfVar49 % 4;
              if (lVar39 != 0 &&
                  lVar39 < 0 ==
                  SBORROW8((long)pppppppfVar49,(ulong)pppppppfVar16 & 0xfffffffffffffffc)) {
                pppppppfVar52 = pppppppfVar52 + ((long)pppppppfVar16 >> 2) * 2;
                do {
                  fVar58 = fVar58 + *(float *)pppppppfVar52 * fVar57 * *(float *)pppppppfVar52;
                  lVar39 = lVar39 + -1;
                  pppppppfVar52 = (float *******)((long)pppppppfVar52 + 4);
                } while (lVar39 != 0);
              }
            }
            *(float *)uStack_398 = fVar58 + *(float *)uStack_398;
          }
          else {
            uStack_358 = (float *******)ppppppfStack_3d0;
            ppppppfStack_348 = (float ******)CONCAT44(ppppppfStack_348._4_4_,fVar57);
            ppppppfStack_330 = ppppppfStack_3d0;
            ppppppfStack_350 = (float ******)pppppppfVar49;
            ppppppfStack_340 = (float ******)pppppppfVar52;
            ppppppfStack_338 = (float ******)pppppppfVar49;
            FUN_109551690(&pppppfStack_360,pppppppfVar52,pppppppfVar49);
          }
        }
        else if ((float *******)ppppppfVar17 == (float *******)0x1) {
          if ((float *******)ppppppfStack_3d0 == (float *******)0x1) {
            uStack_358 = (float *******)CONCAT44(fVar57,(undefined4)uStack_358);
            ppppppfStack_310 = (float ******)0x0;
            ppppppfStack_308 = (float ******)0x0;
            uStack_328 = 0;
            iStack_325 = 0;
            uStack_320 = 0;
            uStack_31c = 0;
            uStack_31b = 0;
            uStack_31a = 0;
            bStack_319 = 0;
            ppppppfStack_330 = (float ******)0x0;
            ppppppfStack_348 = (float ******)pppppppfVar52;
            ppppppfStack_338 = (float ******)pppppppfVar49;
            ppppppfStack_300 = (float ******)pppppppfVar52;
            fVar57 = (float)FUN_1095517e8(&pppppfStack_360,pppppppfVar49);
            *(float *)ppppppfVar38 = fVar57 + *(float *)ppppppfVar38;
          }
          else {
            ppppppfStack_d0 = ppppppfStack_3d0;
            uStack_358 = (float *******)ppppppfStack_3d0;
            ppppppfStack_348 = (float ******)CONCAT44(ppppppfStack_348._4_4_,fVar57);
            ppppppfStack_330 = ppppppfStack_3d0;
            bStack_318 = 0;
            bStack_317 = 0;
            bStack_316 = 0;
            uStack_315 = 0;
            uStack_314 = 0;
            ppppppfStack_310 = (float ******)0x0;
            ppppppfStack_350 = (float ******)pppppppfVar49;
            ppppppfStack_340 = (float ******)pppppppfVar52;
            ppppppfStack_338 = (float ******)pppppppfVar49;
            ppppppfStack_300 = (float ******)pppppppfVar49;
            uStack_e0 = pppppppfVar52;
            uStack_d8 = pppppppfVar49;
            FUN_10955196c(&uStack_e0,&pppppfStack_360,uStack_398,&uStack_398,&ppppppfStack_108);
          }
        }
        else {
          pppppfStack_360 = (float *****)0x0;
          uStack_358 = (float *******)0x0;
          ppppppfStack_350 = ppppppfVar17;
          ppppppfStack_348 = ppppppfVar23;
          ppppppfStack_340 = (float ******)pppppppfVar49;
          FUN_1093ecdf0(&ppppppfStack_340,&ppppppfStack_350,&ppppppfStack_348,1);
          ppppppfStack_338 = (float ******)((long)ppppppfStack_340 * (long)ppppppfStack_350);
          ppppppfStack_330 = (float ******)((long)ppppppfStack_348 * (long)ppppppfStack_340);
          FUN_1093ed160(fVar57,ppppppfStack_3d0,ppppppfStack_3d0,pppppppfVar49,pppppppfVar52,
                        pppppppfVar49,pppppppfVar52,pppppppfVar49,uStack_398,1,ppppppfStack_390,
                        &pppppfStack_360,0);
          _free(pppppfStack_360);
          _free(uStack_358);
        }
      }
    }
    else {
      if ((ppppppfStack_390 == ppppppfStack_3d0) && (ppppppfStack_388 == ppppppfStack_3d0)) {
        pppppppfVar16 = (float *******)ppppppfStack_3d0;
      }
      else {
        if ((float *******)ppppppfStack_3d0 != (float *******)0x0) {
          lVar26 = 0;
          if ((float *******)ppppppfStack_3d0 != (float *******)0x0) {
            lVar26 = 0x7fffffffffffffff / (long)ppppppfStack_3d0;
          }
          if (lVar26 < (long)ppppppfStack_3d0) goto LAB_109550e78;
        }
        FUN_1093c3d54(&uStack_398,(long)ppppppfStack_3d0 * (long)ppppppfStack_3d0,ppppppfStack_3d0,
                      ppppppfStack_3d0);
        ppppppfStack_3d0 = ppppppfStack_390;
        pppppppfVar16 = (float *******)ppppppfStack_388;
      }
      if (0 < (long)pppppppfVar16) {
        pppppppfVar34 = (float *******)0x0;
        pppppppfVar40 = (float *******)((ulong)pppppppfVar49 & 0x7ffffffffffffff8);
        pppppppfVar35 = pppppppfVar52 + 6;
        pfVar29 = (float *)((long)pppppppfVar52 + ((long)pppppppfVar49 * 4 & 0xfffffffffffffff0U));
        pfVar18 = (float *)((long)pppppppfVar52 + 4);
        pfVar15 = pfVar18;
        pfVar20 = pfVar29;
        pppppppfVar28 = (float *******)ppppppfStack_3d0;
        pppppppfVar44 = pppppppfVar35;
        do {
          if (0 < (long)pppppppfVar28) {
            pppppppfVar27 = (float *******)0x0;
            pfVar1 = (float *)((long)pppppppfVar52 + (long)pppppppfVar34 * (long)pppppppfVar49 * 4);
            pppppppfVar43 = pppppppfVar35;
            pfVar51 = pfVar18;
            pfVar54 = pfVar29;
            pppppppfVar2 = (float *******)ppppppfStack_390;
            if ((long)ppppppfStack_390 < 2) {
              pppppppfVar2 = (float *******)0x1;
            }
            do {
              pfVar37 = (float *)((long)pppppppfVar52 +
                                 (long)pppppppfVar27 * (long)pppppppfVar49 * 4);
              if (pppppppfVar49 < (float *******)0x4) {
                fVar58 = *pfVar37 * *pfVar1;
                lVar26 = lVar39;
                pfVar37 = pfVar51;
                pfVar46 = pfVar15;
                if ((float *******)0x1 < pppppppfVar49) {
                  do {
                    fVar58 = fVar58 + *pfVar37 * *pfVar46;
                    lVar26 = lVar26 + -1;
                    pfVar37 = pfVar37 + 1;
                    pfVar46 = pfVar46 + 1;
                  } while (lVar26 != 0);
                }
              }
              else {
                auVar60._0_4_ = *pfVar37 * *pfVar1;
                auVar60._4_4_ = pfVar37[1] * pfVar1[1];
                auVar60._8_4_ = pfVar37[2] * pfVar1[2];
                auVar60._12_4_ = pfVar37[3] * pfVar1[3];
                if ((float *******)0x7 < pppppppfVar49) {
                  fVar58 = pfVar37[4] * (float)*(undefined8 *)(pfVar1 + 4);
                  fVar59 = pfVar37[5] * (float)((ulong)*(undefined8 *)(pfVar1 + 4) >> 0x20);
                  fVar70 = pfVar37[6] * (float)*(undefined8 *)(pfVar1 + 6);
                  fVar73 = pfVar37[7] * (float)((ulong)*(undefined8 *)(pfVar1 + 6) >> 0x20);
                  auVar61 = auVar60;
                  if ((float *******)0xf < pppppppfVar49) {
                    pppppppfVar28 = (float *******)0x8;
                    pppppppfVar24 = pppppppfVar44;
                    pppppppfVar56 = pppppppfVar43;
                    do {
                      auVar61._0_4_ =
                           auVar60._0_4_ + SUB84(pppppppfVar56[-2],0) * SUB84(pppppppfVar24[-2],0);
                      auVar61._4_4_ =
                           auVar60._4_4_ +
                           (float)((ulong)pppppppfVar56[-2] >> 0x20) *
                           (float)((ulong)pppppppfVar24[-2] >> 0x20);
                      auVar61._8_4_ =
                           auVar60._8_4_ + SUB84(pppppppfVar56[-1],0) * SUB84(pppppppfVar24[-1],0);
                      auVar61._12_4_ =
                           auVar60._12_4_ +
                           (float)((ulong)pppppppfVar56[-1] >> 0x20) *
                           (float)((ulong)pppppppfVar24[-1] >> 0x20);
                      fVar58 = fVar58 + SUB84(*pppppppfVar56,0) * SUB84(*pppppppfVar24,0);
                      fVar59 = fVar59 + (float)((ulong)*pppppppfVar56 >> 0x20) *
                                        (float)((ulong)*pppppppfVar24 >> 0x20);
                      fVar70 = fVar70 + SUB84(pppppppfVar56[1],0) * SUB84(pppppppfVar24[1],0);
                      fVar73 = fVar73 + (float)((ulong)pppppppfVar56[1] >> 0x20) *
                                        (float)((ulong)pppppppfVar24[1] >> 0x20);
                      pppppppfVar28 = pppppppfVar28 + 1;
                      pppppppfVar24 = pppppppfVar24 + 4;
                      pppppppfVar56 = pppppppfVar56 + 4;
                      auVar60 = auVar61;
                    } while (pppppppfVar28 < pppppppfVar40);
                  }
                  auVar60._0_4_ = fVar58 + auVar61._0_4_;
                  auVar60._4_4_ = fVar59 + auVar61._4_4_;
                  auVar60._8_4_ = fVar70 + auVar61._8_4_;
                  auVar60._12_4_ = fVar73 + auVar61._12_4_;
                  if (pppppppfVar40 < (float *******)((ulong)pppppppfVar49 & 0x7ffffffffffffffc)) {
                    pfVar37 = pfVar37 + (long)pppppppfVar40;
                    uVar7 = *(undefined8 *)(pfVar1 + (long)pppppppfVar40 + 2);
                    uVar6 = *(undefined8 *)(pfVar1 + (long)pppppppfVar40);
                    auVar60._0_4_ = auVar60._0_4_ + *pfVar37 * (float)uVar6;
                    auVar60._4_4_ = auVar60._4_4_ + pfVar37[1] * (float)((ulong)uVar6 >> 0x20);
                    auVar60._8_4_ = auVar60._8_4_ + pfVar37[2] * (float)uVar7;
                    auVar60._12_4_ = auVar60._12_4_ + pfVar37[3] * (float)((ulong)uVar7 >> 0x20);
                  }
                }
                auVar67 = NEON_ext(auVar60,auVar60,8,1);
                fVar58 = auVar60._0_4_ + auVar67._0_4_ + auVar60._4_4_ + auVar67._4_4_;
                uVar36 = (ulong)pppppppfVar49 & 0x8000000000000003;
                pfVar37 = pfVar54;
                pfVar46 = pfVar20;
                if (pppppppfVar49 != (float *******)((ulong)pppppppfVar49 & 0x7ffffffffffffffc)) {
                  do {
                    fVar58 = fVar58 + *pfVar37 * *pfVar46;
                    uVar36 = uVar36 - 1;
                    pfVar37 = pfVar37 + 1;
                    pfVar46 = pfVar46 + 1;
                  } while (uVar36 != 0);
                }
              }
              *(float *)((long)uStack_398 +
                        (long)((long)pppppppfVar34 * (long)ppppppfStack_3d0 + (long)pppppppfVar27) *
                        4) = fVar57 * fVar58;
              pppppppfVar27 = (float *******)((long)pppppppfVar27 + 1);
              pppppppfVar28 = (float *******)ppppppfStack_390;
              pppppppfVar43 = (float *******)((long)pppppppfVar43 + (long)pppppppfVar49 * 4);
              pfVar51 = pfVar51 + (long)pppppppfVar49;
              pfVar54 = pfVar54 + (long)pppppppfVar49;
            } while (pppppppfVar27 != pppppppfVar2);
          }
          pppppppfVar34 = (float *******)((long)pppppppfVar34 + 1);
          pppppppfVar44 = (float *******)((long)pppppppfVar44 + (long)pppppppfVar49 * 4);
          pfVar20 = pfVar20 + (long)pppppppfVar49;
          pfVar15 = pfVar15 + (long)pppppppfVar49;
        } while (pppppppfVar34 != pppppppfVar16);
      }
    }
    uVar33 = (long)ppppppfStack_138 * (long)ppppppfStack_140;
    uVar36 = (ulong)-((uint)pfStack_148 >> 2) & 3;
    if ((long)uVar33 <= (long)uVar36) {
      uVar36 = uVar33;
    }
    uVar21 = uVar33;
    if (((ulong)pfStack_148 & 3) == 0) {
      uVar21 = uVar36;
    }
    uVar32 = uVar33 - uVar21;
    uVar36 = uVar32 + 3;
    if ((long)uVar21 <= (long)uVar33) {
      uVar36 = uVar32;
    }
    pfVar18 = pfStack_148;
    ppppppfVar17 = uStack_398;
    uVar41 = uVar21;
    if (0 < (long)uVar21) {
      do {
        *pfVar18 = *(float *)ppppppfVar17;
        uVar41 = uVar41 - 1;
        pfVar18 = pfVar18 + 1;
        ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
      } while (uVar41 != 0);
    }
    lVar39 = (uVar36 & 0xfffffffffffffffc) + uVar21;
    if (3 < (long)uVar32) {
      pfVar18 = (float *)((long)uStack_398 + uVar21 * 4);
      uVar41 = uVar21;
      pfVar29 = pfStack_148 + uVar21;
      do {
        uVar6 = *(undefined8 *)pfVar18;
        *(undefined8 *)(pfVar29 + 2) = *(undefined8 *)(pfVar18 + 2);
        *(undefined8 *)pfVar29 = uVar6;
        uVar41 = uVar41 + 4;
        pfVar18 = pfVar18 + 4;
        pfVar29 = pfVar29 + 4;
      } while ((long)uVar41 < lVar39);
    }
    if (lVar39 < (long)uVar33) {
      lVar39 = uVar32 - (uVar36 & 0xfffffffffffffffc);
      pfVar18 = (float *)((long)uStack_398 + (uVar21 + ((long)uVar36 >> 2) * 4) * 4);
      pfVar29 = pfStack_148 + uVar21 + ((long)uVar36 >> 2) * 4;
      do {
        *pfVar29 = *pfVar18;
        lVar39 = lVar39 + -1;
        pfVar18 = pfVar18 + 1;
        pfVar29 = pfVar29 + 1;
      } while (lVar39 != 0);
    }
    _free(uStack_398);
    iVar42 = *(int *)(*param_1 + 0x3c);
    pppppppfVar52 = (float *******)(long)iVar42;
    pfStack_3b0 = (float *)0x0;
    ppppppfStack_3a8 = (float ******)0x0;
    ppppppfStack_3a0 = (float ******)0x0;
    if ((float *******)ppppppfStack_140 != (float *******)0x0 &&
        (float *******)ppppppfStack_138 != (float *******)0x0) {
      lVar39 = 0;
      if ((float *******)ppppppfStack_138 != (float *******)0x0) {
        lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_138;
      }
      if ((long)ppppppfStack_140 <= lVar39) goto LAB_10954e330;
LAB_109550e9c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109550ee0;
    }
LAB_10954e330:
    FUN_1093c3d54(&pfStack_3b0,uVar33,ppppppfStack_140,ppppppfStack_138);
    if ((ppppppfStack_3a8 != ppppppfStack_140) || (ppppppfStack_3a0 != ppppppfStack_138)) {
      if ((float *******)ppppppfStack_140 != (float *******)0x0 &&
          (float *******)ppppppfStack_138 != (float *******)0x0) {
        lVar39 = 0;
        if ((float *******)ppppppfStack_138 != (float *******)0x0) {
          lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_138;
        }
        if (lVar39 < (long)ppppppfStack_140) goto LAB_109550e9c;
      }
      FUN_1093c3d54(&pfStack_3b0,uVar33,ppppppfStack_140,ppppppfStack_138);
      uVar33 = (long)ppppppfStack_3a8 * (long)ppppppfStack_3a0;
    }
    ppppppfVar23 = ppppppfStack_3a0;
    ppppppfVar17 = ppppppfStack_3a8;
    uVar36 = uVar33 + 3;
    if (-1 < (long)uVar33) {
      uVar36 = uVar33;
    }
    if (3 < (long)uVar33) {
      lVar39 = 0;
      pfVar18 = pfStack_3b0;
      pfVar29 = pfStack_148;
      do {
        uVar6 = *(undefined8 *)pfVar29;
        *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar29 + 2);
        *(undefined8 *)pfVar18 = uVar6;
        lVar39 = lVar39 + 4;
        pfVar18 = pfVar18 + 4;
        pfVar29 = pfVar29 + 4;
      } while (lVar39 < (long)(uVar36 & 0xfffffffffffffffc));
    }
    lVar39 = (long)uVar33 % 4;
    if (lVar39 != 0 && lVar39 < 0 == SBORROW8(uVar33,uVar36 & 0xfffffffffffffffc)) {
      pfVar18 = pfStack_3b0 + ((long)uVar36 >> 2) * 4;
      pfVar29 = pfStack_148 + ((long)uVar36 >> 2) * 4;
      do {
        *pfVar18 = *pfVar29;
        lVar39 = lVar39 + -1;
        pfVar18 = pfVar18 + 1;
        pfVar29 = pfVar29 + 1;
      } while (lVar39 != 0);
    }
    uStack_31c = 0;
    uStack_31a = 0;
    bStack_319 = 0;
    bStack_317 = 0;
    uStack_320 = 0;
    uStack_328 = 0;
    uVar8 = uStack_328;
    iStack_325 = 0;
    iVar10 = iStack_325;
    ppppppfStack_330 = (float ******)0x0;
    ppppppfStack_348 = (float ******)0x0;
    ppppppfStack_350 = (float ******)0x0;
    ppppppfStack_338 = (float ******)0x0;
    ppppppfStack_340 = (float ******)0x0;
    uStack_358 = (float *******)0x0;
    pppppfStack_360 = (float *****)0x0;
    ppppppfStack_2e0 = (float ******)0x0;
    pfStack_2e8 = (float *)0x0;
    ppppppfStack_2d0 = (float ******)0x0;
    ppppppfStack_2d8 = (float ******)0x0;
    ppppppfStack_2c0 = (float ******)0x0;
    ppppppfStack_2c8 = (float ******)0x0;
    uStack_2b0 = 0;
    pppppfStack_2b8 = (float *****)0x0;
    uStack_2a0 = 0;
    pfStack_2a8 = (float *)0x0;
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_280 = 0;
    uStack_288 = 0;
    uStack_270 = 0;
    uStack_278 = 0;
    uStack_260 = 0;
    uStack_268 = 0;
    uStack_258 = 0;
    ppppppfStack_230 = (float ******)0x0;
    pfStack_238 = (float *)0x0;
    lStack_220 = 0;
    ppppppfStack_228 = (float ******)0x0;
    pppppfStack_210 = (float *****)0x0;
    ppppppfStack_218 = (float ******)0x0;
    ppppppfStack_200 = (float ******)0x0;
    ppppppfStack_208 = (float ******)0x0;
    uStack_1f0 = 0;
    pppppfStack_1f8 = (float *****)0x0;
    uStack_1e0 = 0;
    pfStack_1e8 = (float *)0x0;
    uStack_1d0 = 0;
    uStack_1d8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_198 = 0;
    ppppppfStack_170 = (float ******)0x0;
    lStack_178 = 0;
    ppppppfStack_160 = (float ******)0x0;
    pfStack_168 = (float *)0x0;
    ppppppfStack_158 = (float ******)0x0;
    ppppppfStack_308 = ppppppfStack_3a8;
    ppppppfStack_300 = ppppppfStack_3a0;
    uStack_31b = 1;
    uStack_314 = 0x28;
    bStack_318 = 1;
    bStack_316 = 1;
    pppppppfVar49 = (float *******)ppppppfStack_3a0;
    if ((long)ppppppfStack_3a8 <= (long)ppppppfStack_3a0) {
      pppppppfVar49 = (float *******)ppppppfStack_3a8;
    }
    uStack_328 = SUB83(pppppppfVar49,0);
    uVar9 = uStack_328;
    iStack_325 = (int5)((ulong)pppppppfVar49 >> 0x18);
    iVar11 = iStack_325;
    ppppppfStack_2f8 = (float ******)pppppppfVar49;
    if (pppppppfVar49 != (float *******)0x0) {
      if ((long)pppppppfVar49 < 1) {
        pppppppfVar16 = (float *******)0x0;
LAB_10954e4b8:
        ppppppfStack_330 = (float ******)pppppppfVar16;
        if ((float *******)ppppppfVar17 != (float *******)0x0) {
          lVar39 = 0;
          if (pppppppfVar49 != (float *******)0x0) {
            lVar39 = 0x7fffffffffffffff / (long)pppppppfVar49;
          }
          uStack_328 = uVar9;
          iStack_325 = iVar11;
          if (lVar39 < (long)ppppppfVar17) goto LAB_109550e50;
        }
        goto LAB_10954e4d0;
      }
      uStack_328 = uVar8;
      iStack_325 = iVar10;
      if ((ulong)pppppppfVar49 >> 0x3e == 0) {
        pppppppfVar16 = (float *******)((long)pppppppfVar49 << 2);
        _malloc();
        if (pppppppfVar16 != (float *******)0x0) goto LAB_10954e4b8;
      }
      goto LAB_109550e50;
    }
LAB_10954e4d0:
    uStack_328 = uVar9;
    iStack_325 = iVar11;
    FUN_1093c3d54(&pppppfStack_360,(long)pppppppfVar49 * (long)ppppppfVar17,ppppppfVar17,
                  pppppppfVar49);
    pppppppfVar49 = (float *******)ppppppfStack_300;
    if (((bStack_317 & 1) == 0) &&
       (pppppppfVar49 = (float *******)ppppppfStack_2f8, bStack_316 != 1)) {
      pppppppfVar49 = (float *******)0x0;
    }
    else if (((float *******)ppppppfStack_300 != (float *******)0x0) &&
            (pppppppfVar49 != (float *******)0x0)) {
      lVar39 = 0;
      if (pppppppfVar49 != (float *******)0x0) {
        lVar39 = 0x7fffffffffffffff / (long)pppppppfVar49;
      }
      if (lVar39 < (long)ppppppfStack_300) goto LAB_109550e50;
    }
    FUN_1093c3d54(&ppppppfStack_348,(long)pppppppfVar49 * (long)ppppppfStack_300);
    if ((float *******)ppppppfStack_2f8 != (float *******)0x0) {
      lVar39 = 0;
      if ((float *******)ppppppfStack_2f8 != (float *******)0x0) {
        lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_2f8;
      }
      if (lVar39 < (long)ppppppfStack_2f8) goto LAB_109550e50;
    }
    FUN_1093c3d54(&pfStack_2e8,(long)ppppppfStack_2f8 * (long)ppppppfStack_2f8,ppppppfStack_2f8,
                  ppppppfStack_2f8);
    if ((long)ppppppfStack_308 < (long)ppppppfStack_300) {
      if ((ppppppfStack_300 != ppppppfStack_2c8) || (ppppppfStack_308 != ppppppfStack_2c0)) {
        _free(uStack_268);
        _free(uStack_278);
        _free(uStack_288);
        _free(uStack_298);
        _free(pfStack_2a8);
        _free(pppppfStack_2b8);
        _free(ppppppfStack_2d0);
        FUN_109551be4(&ppppppfStack_2d0,ppppppfStack_300,ppppppfStack_308);
      }
      pppppppfVar49 = &ppppppfStack_300;
      lVar39 = lStack_220;
      if ((((bStack_317 & 1) == 0) &&
          (pppppppfVar49 = &ppppppfStack_308, pppppppfVar16 = (float *******)ppppppfStack_218,
          bStack_316 != 1)) ||
         (pppppppfVar16 = (float *******)*pppppppfVar49,
         (float *******)ppppppfStack_218 == pppppppfVar16)) {
LAB_10954e684:
        ppppppfStack_218 = (float ******)pppppppfVar16;
        lStack_220 = lVar39;
        if (((float *******)ppppppfStack_300 != (float *******)0x0) &&
           ((float *******)ppppppfStack_308 != (float *******)0x0)) {
          lVar39 = 0;
          if ((float *******)ppppppfStack_308 != (float *******)0x0) {
            lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_308;
          }
          if (lVar39 < (long)ppppppfStack_300) goto LAB_109550e50;
        }
        FUN_1093c3d54(&pfStack_238,(long)ppppppfStack_308 * (long)ppppppfStack_300);
        goto LAB_10954e6b0;
      }
      _free(lStack_220);
      if ((long)pppppppfVar16 < 1) {
        lVar39 = 0;
        goto LAB_10954e684;
      }
      if ((ulong)pppppppfVar16 >> 0x3e == 0) {
        lVar39 = (long)pppppppfVar16 << 2;
        _malloc();
        if (lVar39 != 0) goto LAB_10954e684;
      }
      goto LAB_109550e50;
    }
LAB_10954e6b0:
    if ((long)ppppppfStack_300 < (long)ppppppfStack_308) {
      if ((ppppppfStack_308 != ppppppfStack_208) || (ppppppfStack_300 != ppppppfStack_200)) {
        _free(uStack_1a8);
        _free(uStack_1b8);
        _free(uStack_1c8);
        _free(uStack_1d8);
        _free(pfStack_1e8);
        _free(pppppfStack_1f8);
        _free(pppppfStack_210);
        FUN_109551be4(&pppppfStack_210,ppppppfStack_308,ppppppfStack_300);
      }
      pppppppfVar49 = &ppppppfStack_308;
      if (((bStack_319 & 1) == 0) && (pppppppfVar49 = &ppppppfStack_300, bStack_318 != 1))
      goto LAB_10954e778;
      pppppppfVar49 = (float *******)*pppppppfVar49;
      if ((float *******)ppppppfStack_170 == pppppppfVar49) {
LAB_10954e770:
        ppppppfStack_170 = (float ******)pppppppfVar49;
        goto LAB_10954e778;
      }
      _free(lStack_178);
      if ((long)pppppppfVar49 < 1) {
        lVar39 = 0;
LAB_10954e76c:
        lStack_178 = lVar39;
        goto LAB_10954e770;
      }
      if ((ulong)pppppppfVar49 >> 0x3e == 0) {
        lVar39 = (long)pppppppfVar49 << 2;
        _malloc();
        if (lVar39 != 0) goto LAB_10954e76c;
      }
      goto LAB_109550e50;
    }
LAB_10954e778:
    if (ppppppfStack_308 != ppppppfStack_300) {
      if (((float *******)ppppppfVar17 != (float *******)0x0) &&
         ((float *******)ppppppfVar23 != (float *******)0x0)) {
        lVar39 = 0;
        if ((float *******)ppppppfVar23 != (float *******)0x0) {
          lVar39 = 0x7fffffffffffffff / (long)ppppppfVar23;
        }
        if (lVar39 < (long)ppppppfVar17) goto LAB_109550e50;
      }
      FUN_1093c3d54(&pfStack_168,(long)ppppppfVar23 * (long)ppppppfVar17,ppppppfVar17,ppppppfVar23);
    }
    ppppppfVar17 = ppppppfStack_3a8;
    pfVar18 = pfStack_3b0;
    uVar21 = (long)ppppppfStack_3a0 * (long)ppppppfStack_3a8;
    uVar36 = uVar21 + 3;
    uVar33 = uVar21 + 7;
    if (-1 < (long)uVar21) {
      uVar36 = uVar21;
      uVar33 = uVar21;
    }
    uVar32 = uVar36 & 0xfffffffffffffffc;
    if (uVar21 + 3 < 7) {
      fVar57 = ABS(*pfStack_3b0);
      if (1 < (long)uVar21) {
        lVar39 = uVar21 - 1;
        pfVar29 = pfStack_3b0;
        do {
          pfVar29 = pfVar29 + 1;
          fVar58 = ABS(*pfVar29);
          bVar14 = true;
          if ((fVar58 <= fVar57) && (bVar14 = true, !NAN(*pfVar29))) {
            bVar14 = false;
          }
          if (!bVar14) {
            fVar58 = fVar57;
          }
          if (!NAN(fVar57)) {
            fVar57 = fVar58;
          }
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
    }
    else {
      auVar62._0_4_ = ABS(*pfStack_3b0);
      auVar62._4_4_ = ABS(pfStack_3b0[1]);
      auVar62._8_4_ = ABS(pfStack_3b0[2]);
      auVar62._12_4_ = ABS(pfStack_3b0[3]);
      if (7 < (long)uVar21) {
        uVar33 = uVar33 & 0xfffffffffffffff8;
        auVar68._0_4_ = ABS(pfStack_3b0[4]);
        auVar68._4_4_ = ABS(pfStack_3b0[5]);
        auVar68._8_4_ = ABS(pfStack_3b0[6]);
        auVar68._12_4_ = ABS(pfStack_3b0[7]);
        if (0xf < uVar21) {
          pfVar29 = pfStack_3b0 + 0xc;
          lVar39 = 8;
          do {
            auVar4._4_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar29 + -4) >> 0x20));
            auVar4._0_4_ = ABS((float)*(undefined8 *)(pfVar29 + -4));
            auVar4._8_4_ = ABS((float)*(undefined8 *)(pfVar29 + -2));
            auVar4._12_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar29 + -2) >> 0x20));
            auVar62 = NEON_fmax(auVar62,auVar4,4);
            auVar5._4_4_ = ABS((float)((ulong)*(undefined8 *)pfVar29 >> 0x20));
            auVar5._0_4_ = ABS((float)*(undefined8 *)pfVar29);
            auVar5._8_4_ = ABS((float)*(undefined8 *)(pfVar29 + 2));
            auVar5._12_4_ = ABS((float)((ulong)*(undefined8 *)(pfVar29 + 2) >> 0x20));
            auVar68 = NEON_fmax(auVar68,auVar5,4);
            lVar39 = lVar39 + 8;
            pfVar29 = pfVar29 + 8;
          } while (lVar39 < (long)uVar33);
        }
        auVar62 = NEON_fmax(auVar62,auVar68,4);
        if ((long)uVar33 < (long)uVar32) {
          pfVar29 = pfStack_3b0 + uVar33;
          auVar69._0_4_ = ABS(*pfVar29);
          auVar69._4_4_ = ABS(pfVar29[1]);
          auVar69._8_4_ = ABS(pfVar29[2]);
          auVar69._12_4_ = ABS(pfVar29[3]);
          auVar62 = NEON_fmax(auVar62,auVar69,4);
        }
      }
      uStack_d8 = auVar62._8_8_;
      uStack_e0 = auVar62._0_8_;
      uVar33 = 2;
      do {
        uVar41 = 0;
        do {
          fVar58 = *(float *)((long)&uStack_e0 + uVar41 * 4);
          fVar57 = *(float *)((long)&uStack_e0 + uVar41 * 4 + uVar33 * 4);
          bVar14 = true;
          if ((fVar57 <= fVar58) && (bVar14 = true, !NAN(fVar57))) {
            bVar14 = false;
          }
          if (!bVar14) {
            fVar57 = fVar58;
          }
          if (!NAN(fVar58)) {
            fVar58 = fVar57;
          }
          *(float *)((long)&uStack_e0 + uVar41 * 4) = fVar58;
          uVar41 = uVar41 + 1;
        } while (uVar33 != uVar41);
        bVar14 = 1 < uVar33;
        uVar33 = uVar33 >> 1;
      } while (bVar14);
      lVar39 = (long)uVar21 % 4;
      fVar57 = (float)uStack_e0;
      if (lVar39 != 0 && lVar39 < 0 == SBORROW8(uVar21,uVar32)) {
        pfVar29 = pfStack_3b0 + ((long)uVar36 >> 2) * 4;
        do {
          fVar58 = ABS(*pfVar29);
          bVar14 = true;
          if ((fVar58 <= fVar57) && (bVar14 = true, !NAN(*pfVar29))) {
            bVar14 = false;
          }
          if (!bVar14) {
            fVar58 = fVar57;
          }
          if (!NAN(fVar57)) {
            fVar57 = fVar58;
          }
          lVar39 = lVar39 + -1;
          pfVar29 = pfVar29 + 1;
        } while (lVar39 != 0);
      }
    }
    if ((uint)ABS(fVar57) < 0x7f800000) {
      fVar58 = 1.0;
      if (fVar57 != 0.0) {
        fVar58 = fVar57;
      }
      if (ppppppfStack_308 == ppppppfStack_300) {
        pppppppfVar49 = (float *******)ppppppfStack_2f8;
        pppppppfVar16 = (float *******)ppppppfStack_2f8;
        if (ppppppfStack_2e0 != ppppppfStack_2f8 || ppppppfStack_2d8 != ppppppfStack_2f8) {
          if ((float *******)ppppppfStack_2f8 != (float *******)0x0) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_2f8 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_2f8;
            }
            if (lVar39 < (long)ppppppfStack_2f8) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pfStack_2e8,(long)ppppppfStack_2f8 * (long)ppppppfStack_2f8,
                        ppppppfStack_2f8,ppppppfStack_2f8);
          pppppppfVar49 = (float *******)ppppppfStack_2e0;
          pppppppfVar16 = (float *******)ppppppfStack_2d8;
        }
        if (0 < (long)pppppppfVar16) {
          pppppppfVar34 = (float *******)0x0;
          pppppppfVar35 = (float *******)0x0;
          pfVar29 = pfStack_2e8;
          do {
            pfVar20 = pfVar29;
            pfVar15 = pfVar18;
            pppppppfVar44 = pppppppfVar34;
            if (0 < (long)pppppppfVar34) {
              do {
                *pfVar20 = *pfVar15 / fVar58;
                pppppppfVar44 = (float *******)((long)pppppppfVar44 + -1);
                pfVar20 = pfVar20 + 1;
                pfVar15 = pfVar15 + 1;
              } while (pppppppfVar44 != (float *******)0x0);
            }
            lVar39 = ((long)pppppppfVar49 - (long)pppppppfVar34 & 0xfffffffffffffffcU) +
                     (long)pppppppfVar34;
            if (3 < (long)pppppppfVar49 - (long)pppppppfVar34) {
              lVar26 = (long)pppppppfVar34 << 2;
              pppppppfVar44 = pppppppfVar34;
              do {
                pfVar20 = (float *)((long)pfVar18 + lVar26);
                fVar57 = *pfVar20;
                fVar59 = pfVar20[1];
                fVar70 = pfVar20[3];
                pfVar15 = (float *)((long)pfVar29 + lVar26);
                pfVar15[2] = pfVar20[2] / fVar58;
                pfVar15[3] = fVar70 / fVar58;
                *pfVar15 = fVar57 / fVar58;
                pfVar15[1] = fVar59 / fVar58;
                pppppppfVar44 = (float *******)((long)pppppppfVar44 + 4);
                lVar26 = lVar26 + 0x10;
              } while ((long)pppppppfVar44 < lVar39);
            }
            for (; lVar39 < (long)pppppppfVar49; lVar39 = lVar39 + 1) {
              pfVar29[lVar39] = pfVar18[lVar39] / fVar58;
            }
            uVar36 = (long)pppppppfVar34 + ((ulong)(uint)-(int)pppppppfVar49 & 3);
            pppppppfVar44 = (float *******)(uVar36 & 3);
            uVar36 = -uVar36;
            if (-1 < (long)uVar36) {
              pppppppfVar44 = (float *******)-(uVar36 & 3);
            }
            pppppppfVar34 = pppppppfVar49;
            if ((long)pppppppfVar44 <= (long)pppppppfVar49) {
              pppppppfVar34 = pppppppfVar44;
            }
            pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
            pfVar18 = pfVar18 + (long)ppppppfVar17;
            pfVar29 = pfVar29 + (long)pppppppfVar49;
          } while (pppppppfVar35 != pppppppfVar16);
        }
        if (bStack_319 == 1) {
          if ((float *******)ppppppfStack_308 != (float *******)0x0) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_308 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_308;
            }
            if (lVar39 < (long)ppppppfStack_308) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pppppfStack_360,(long)ppppppfStack_308 * (long)ppppppfStack_308,
                        ppppppfStack_308,ppppppfStack_308);
          if (0 < (long)ppppppfStack_350) {
            pppppppfVar49 = (float *******)0x0;
            ppppppfVar17 = (float ******)pppppfStack_360;
            do {
              if (0 < (long)uStack_358) {
                pppppppfVar16 = (float *******)0x0;
                do {
                  fVar57 = 1.0;
                  if (pppppppfVar49 != pppppppfVar16) {
                    fVar57 = 0.0;
                  }
                  *(float *)((long)ppppppfVar17 + (long)pppppppfVar16 * 4) = fVar57;
                  pppppppfVar16 = (float *******)((long)pppppppfVar16 + 1);
                } while (uStack_358 != pppppppfVar16);
              }
              pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
              ppppppfVar17 = (float ******)((long)ppppppfVar17 + (long)uStack_358 * 4);
            } while (pppppppfVar49 != (float *******)ppppppfStack_350);
          }
        }
        if (bStack_318 == 1) {
          if (((float *******)ppppppfStack_308 != (float *******)0x0) &&
             ((float *******)ppppppfStack_2f8 != (float *******)0x0)) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_2f8 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_2f8;
            }
            if (lVar39 < (long)ppppppfStack_308) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pppppfStack_360,(long)ppppppfStack_2f8 * (long)ppppppfStack_308);
          if (0 < (long)ppppppfStack_350) {
            pppppppfVar49 = (float *******)0x0;
            ppppppfVar17 = (float ******)pppppfStack_360;
            do {
              if (0 < (long)uStack_358) {
                pppppppfVar16 = (float *******)0x0;
                do {
                  fVar57 = 1.0;
                  if (pppppppfVar49 != pppppppfVar16) {
                    fVar57 = 0.0;
                  }
                  *(float *)((long)ppppppfVar17 + (long)pppppppfVar16 * 4) = fVar57;
                  pppppppfVar16 = (float *******)((long)pppppppfVar16 + 1);
                } while (uStack_358 != pppppppfVar16);
              }
              pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
              ppppppfVar17 = (float ******)((long)ppppppfVar17 + (long)uStack_358 * 4);
            } while (pppppppfVar49 != (float *******)ppppppfStack_350);
          }
        }
        if (bStack_317 == 1) {
          if ((float *******)ppppppfStack_300 != (float *******)0x0) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_300 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_300;
            }
            if (lVar39 < (long)ppppppfStack_300) goto LAB_109550e50;
          }
          FUN_1093c3d54(&ppppppfStack_348,(long)ppppppfStack_300 * (long)ppppppfStack_300,
                        ppppppfStack_300,ppppppfStack_300);
          if (0 < (long)ppppppfStack_338) {
            pppppppfVar49 = (float *******)0x0;
            pppppppfVar16 = (float *******)ppppppfStack_348;
            do {
              if (0 < (long)ppppppfStack_340) {
                pppppppfVar35 = (float *******)0x0;
                do {
                  fVar57 = 1.0;
                  if (pppppppfVar49 != pppppppfVar35) {
                    fVar57 = 0.0;
                  }
                  *(float *)((long)pppppppfVar16 + (long)pppppppfVar35 * 4) = fVar57;
                  pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
                } while ((float *******)ppppppfStack_340 != pppppppfVar35);
              }
              pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
              pppppppfVar16 = (float *******)((long)pppppppfVar16 + (long)ppppppfStack_340 * 4);
            } while (pppppppfVar49 != (float *******)ppppppfStack_338);
          }
        }
        if (bStack_316 == 1) {
          if (((float *******)ppppppfStack_300 != (float *******)0x0) &&
             ((float *******)ppppppfStack_2f8 != (float *******)0x0)) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_2f8 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_2f8;
            }
            if (lVar39 < (long)ppppppfStack_300) goto LAB_109550e50;
          }
          FUN_1093c3d54(&ppppppfStack_348,(long)ppppppfStack_2f8 * (long)ppppppfStack_300);
          if (0 < (long)ppppppfStack_338) {
            pppppppfVar49 = (float *******)0x0;
            pppppppfVar16 = (float *******)ppppppfStack_348;
            do {
              if (0 < (long)ppppppfStack_340) {
                pppppppfVar35 = (float *******)0x0;
                do {
                  fVar57 = 1.0;
                  if (pppppppfVar49 != pppppppfVar35) {
                    fVar57 = 0.0;
                  }
                  *(float *)((long)pppppppfVar16 + (long)pppppppfVar35 * 4) = fVar57;
                  pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
                } while ((float *******)ppppppfStack_340 != pppppppfVar35);
              }
              pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
              pppppppfVar16 = (float *******)((long)pppppppfVar16 + (long)ppppppfStack_340 * 4);
            } while (pppppppfVar49 != (float *******)ppppppfStack_338);
          }
        }
      }
      else {
        if (ppppppfStack_160 != ppppppfStack_3a8 || ppppppfStack_158 != ppppppfStack_3a0) {
          if (((float *******)ppppppfStack_3a8 != (float *******)0x0) &&
             ((float *******)ppppppfStack_3a0 != (float *******)0x0)) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_3a0 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_3a0;
            }
            if (lVar39 < (long)ppppppfStack_3a8) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pfStack_168,uVar21,ppppppfStack_3a8);
          uVar21 = (long)ppppppfStack_158 * (long)ppppppfStack_160;
          uVar32 = uVar21 + 3;
          if (-1 < (long)uVar21) {
            uVar32 = uVar21;
          }
          uVar32 = uVar32 & 0xfffffffffffffffc;
        }
        ppppppfVar17 = ppppppfStack_160;
        pfVar29 = pfStack_168;
        if (3 < (long)uVar21) {
          lVar39 = 0;
          pfVar20 = pfStack_168;
          pfVar15 = pfVar18;
          do {
            fVar57 = *pfVar15;
            fVar59 = pfVar15[1];
            fVar70 = pfVar15[3];
            pfVar20[2] = pfVar15[2] / fVar58;
            pfVar20[3] = fVar70 / fVar58;
            *pfVar20 = fVar57 / fVar58;
            pfVar20[1] = fVar59 / fVar58;
            lVar39 = lVar39 + 4;
            pfVar20 = pfVar20 + 4;
            pfVar15 = pfVar15 + 4;
          } while (lVar39 < (long)uVar32);
        }
        lVar39 = uVar21 - uVar32;
        if (lVar39 != 0 && (long)uVar32 <= (long)uVar21) {
          pfVar20 = pfStack_168 + uVar32;
          pfVar18 = pfVar18 + uVar32;
          do {
            *pfVar20 = *pfVar18 / fVar58;
            lVar39 = lVar39 + -1;
            pfVar20 = pfVar20 + 1;
            pfVar18 = pfVar18 + 1;
          } while (lVar39 != 0);
        }
        if ((long)ppppppfStack_160 < (long)ppppppfStack_158) {
          if ((ppppppfStack_230 != ppppppfStack_158) ||
             (pppppppfVar49 = (float *******)ppppppfStack_158,
             pppppppfVar16 = (float *******)ppppppfStack_160, ppppppfStack_228 != ppppppfStack_160))
          {
            if (((float *******)ppppppfStack_158 != (float *******)0x0) &&
               ((float *******)ppppppfStack_160 != (float *******)0x0)) {
              lVar39 = 0;
              if ((float *******)ppppppfStack_160 != (float *******)0x0) {
                lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_160;
              }
              if (lVar39 < (long)ppppppfStack_158) goto LAB_109550e50;
            }
            FUN_1093c3d54(&pfStack_238,(long)ppppppfStack_160 * (long)ppppppfStack_158,
                          ppppppfStack_158,ppppppfStack_160);
            pppppppfVar49 = (float *******)ppppppfStack_230;
            pppppppfVar16 = (float *******)ppppppfStack_228;
          }
          if (0 < (long)pppppppfVar16) {
            pppppppfVar35 = (float *******)0x0;
            pfVar18 = pfStack_238;
            do {
              pfVar15 = pfVar18;
              pfVar20 = pfVar29;
              pppppppfVar34 = pppppppfVar49;
              if (0 < (long)pppppppfVar49) {
                do {
                  *pfVar15 = *pfVar20;
                  pfVar20 = pfVar20 + (long)ppppppfVar17;
                  pppppppfVar34 = (float *******)((long)pppppppfVar34 + -1);
                  pfVar15 = pfVar15 + 1;
                } while (pppppppfVar34 != (float *******)0x0);
              }
              pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
              pfVar29 = pfVar29 + 1;
              pfVar18 = pfVar18 + (long)pppppppfVar49;
            } while (pppppppfVar35 != pppppppfVar16);
          }
          func_0x0001093c3e60(&ppppppfStack_2d0,&pfStack_238);
          pppppppfVar49 = (float *******)ppppppfStack_160;
          ppppppfVar17 = ppppppfStack_2d0;
          if ((float *******)ppppppfStack_160 != (float *******)0x0) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_160 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_160;
            }
            if (lVar39 < (long)ppppppfStack_160) goto LAB_109550e50;
          }
          lVar39 = (long)ppppppfStack_160 * (long)ppppppfStack_160;
          FUN_1093c3d54(&pfStack_2e8,lVar39,ppppppfStack_160,ppppppfStack_160);
          ppppppfVar23 = ppppppfStack_2c8;
          if (((float *******)ppppppfStack_2e0 != pppppppfVar49) ||
             (pppppppfVar16 = pppppppfVar49, (float *******)ppppppfStack_2d8 != pppppppfVar49)) {
            if (pppppppfVar49 != (float *******)0x0) {
              lVar26 = 0;
              if (pppppppfVar49 != (float *******)0x0) {
                lVar26 = 0x7fffffffffffffff / (long)pppppppfVar49;
              }
              if (lVar26 < (long)pppppppfVar49) goto LAB_109550e50;
            }
            FUN_1093c3d54(&pfStack_2e8,lVar39,pppppppfVar49,pppppppfVar49);
            pppppppfVar49 = (float *******)ppppppfStack_2d8;
            pppppppfVar16 = (float *******)ppppppfStack_2e0;
          }
          pfVar18 = pfStack_2e8;
          if (0 < (long)pppppppfVar49) {
            pppppppfVar35 = (float *******)0x0;
            pppppppfVar34 = (float *******)ppppppfVar17;
            pfVar29 = pfStack_2e8;
            do {
              pppppppfVar44 = pppppppfVar16;
              if ((long)pppppppfVar35 <= (long)pppppppfVar16) {
                pppppppfVar44 = pppppppfVar35;
              }
              if ((long)pppppppfVar44 < 1) {
                pppppppfVar44 = (float *******)0x0;
              }
              else {
                _bzero(pfVar18 + (long)pppppppfVar35 * (long)pppppppfVar16,(long)pppppppfVar44 << 2)
                ;
              }
              if ((long)pppppppfVar44 < (long)pppppppfVar16) {
                pfVar18[(long)((long)pppppppfVar44 * (long)pppppppfVar16 + (long)pppppppfVar44)] =
                     *(float *)((long)ppppppfVar17 +
                               (long)((long)pppppppfVar44 * (long)ppppppfVar23 + (long)pppppppfVar44
                                     ) * 4);
                pppppppfVar44 = (float *******)((long)pppppppfVar44 + 1);
              }
              lVar39 = (long)pppppppfVar16 - (long)pppppppfVar44;
              if (lVar39 != 0 && (long)pppppppfVar44 <= (long)pppppppfVar16) {
                pppppppfVar28 =
                     (float *******)
                     ((long)pppppppfVar34 + (long)ppppppfVar23 * 4 * (long)pppppppfVar44);
                pfVar20 = pfVar29 + (long)pppppppfVar44;
                do {
                  *pfVar20 = *(float *)pppppppfVar28;
                  pppppppfVar28 = (float *******)((long)pppppppfVar28 + (long)ppppppfVar23 * 4);
                  lVar39 = lVar39 + -1;
                  pfVar20 = pfVar20 + 1;
                } while (lVar39 != 0);
              }
              pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
              pppppppfVar34 = (float *******)((long)pppppppfVar34 + 4);
              pfVar29 = pfVar29 + (long)pppppppfVar16;
            } while (pppppppfVar35 != pppppppfVar49);
          }
          ppppppfVar17 = ppppppfStack_2c8;
          if (bStack_317 != 1) {
            if (bStack_316 == 1) {
              if (((float *******)ppppppfStack_158 != (float *******)0x0) &&
                 ((float *******)ppppppfStack_160 != (float *******)0x0)) {
                lVar39 = 0;
                if ((float *******)ppppppfStack_160 != (float *******)0x0) {
                  lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_160;
                }
                if (lVar39 < (long)ppppppfStack_158) goto LAB_109550e50;
              }
              FUN_1093c3d54(&ppppppfStack_348,(long)ppppppfStack_160 * (long)ppppppfStack_158);
              if (0 < (long)ppppppfStack_338) {
                pppppppfVar49 = (float *******)0x0;
                pppppppfVar16 = (float *******)ppppppfStack_348;
                do {
                  if (0 < (long)ppppppfStack_340) {
                    pppppppfVar35 = (float *******)0x0;
                    do {
                      fVar57 = 1.0;
                      if (pppppppfVar49 != pppppppfVar35) {
                        fVar57 = 0.0;
                      }
                      *(float *)((long)pppppppfVar16 + (long)pppppppfVar35 * 4) = fVar57;
                      pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
                    } while ((float *******)ppppppfStack_340 != pppppppfVar35);
                  }
                  pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
                  pppppppfVar16 = (float *******)((long)pppppppfVar16 + (long)ppppppfStack_340 * 4);
                } while (pppppppfVar49 != (float *******)ppppppfStack_338);
              }
              uStack_d8 = (float *******)&pppppfStack_2b8;
              ppppppfStack_d0 = (float ******)((ulong)ppppppfStack_d0 & 0xffffffffffffff00);
              ppppppfStack_c8 = ppppppfStack_2c0;
              if ((long)ppppppfStack_2c8 <= (long)ppppppfStack_2c0) {
                ppppppfStack_c8 = ppppppfStack_2c8;
              }
              ppppppfStack_c0 = (float ******)0x0;
              uStack_e0 = &ppppppfStack_2d0;
              FUN_109551d70(&uStack_e0,&ppppppfStack_348,&lStack_220,0);
            }
LAB_10954f77c:
            if (((bStack_319 & 1) != 0) || ((bStack_318 & 1) != 0)) {
              FUN_1095537f8(&pppppfStack_360,&pfStack_2a8);
            }
            goto LAB_10954f79c;
          }
          pppppfStack_100 = (float *****)&pppppfStack_2b8;
          uStack_f8 = 0;
          pppppppfVar49 = (float *******)ppppppfStack_2c0;
          if ((long)ppppppfStack_2c8 <= (long)ppppppfStack_2c0) {
            pppppppfVar49 = (float *******)ppppppfStack_2c8;
          }
          uStack_e8 = 0;
          lVar39 = lStack_220;
          ppppppfStack_108 = (float ******)&ppppppfStack_2d0;
          ppppppfStack_f0 = (float ******)pppppppfVar49;
          if (ppppppfStack_218 == ppppppfStack_2c8) {
LAB_10954f270:
            lStack_220 = lVar39;
            pppppppfVar16 = (float *******)ppppppfStack_2c8;
            ppppppfVar23 = ppppppfStack_338;
            ppppppfStack_218 = ppppppfVar17;
            if ((ppppppfStack_348 == ppppppfStack_2d0) && (ppppppfStack_340 == ppppppfStack_2c8)) {
              pppppppfVar35 = (float *******)ppppppfStack_338;
              if ((long)ppppppfStack_2c8 <= (long)ppppppfStack_338) {
                pppppppfVar35 = (float *******)ppppppfStack_2c8;
              }
              pppppppfVar34 = (float *******)ppppppfStack_348;
              if (0 < (long)pppppppfVar35) {
                do {
                  *(float *)pppppppfVar34 = 1.0;
                  pppppppfVar35 = (float *******)((long)pppppppfVar35 + -1);
                  pppppppfVar34 =
                       (float *******)((long)pppppppfVar34 + ((long)ppppppfStack_2c8 + 1) * 4);
                } while (pppppppfVar35 != (float *******)0x0);
              }
              if (0 < (long)ppppppfStack_338) {
                pppppppfVar35 = (float *******)0x0;
                pppppppfVar34 = (float *******)ppppppfStack_348;
                do {
                  pppppppfVar44 = pppppppfVar16;
                  if ((long)pppppppfVar35 <= (long)pppppppfVar16) {
                    pppppppfVar44 = pppppppfVar35;
                  }
                  if (0 < (long)pppppppfVar44) {
                    _bzero(pppppppfVar34,(long)pppppppfVar44 << 2);
                  }
                  pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
                  pppppppfVar34 = (float *******)((long)pppppppfVar34 + (long)pppppppfVar16 * 4);
                } while ((float *******)ppppppfVar23 != pppppppfVar35);
              }
              if (0 < (long)pppppppfVar49) {
                lVar39 = -(long)pppppppfVar49;
                lVar19 = (long)pppppppfVar49 * 4;
                lVar26 = lVar19;
                pppppppfVar35 = pppppppfVar49;
                do {
                  pppppppfVar34 = (float *******)((long)pppppppfVar35 + -1);
                  lVar26 = lVar26 + -4;
                  ppppppfStack_390 = (float ******)(lVar39 + (long)ppppppfStack_2c8);
                  ppppppfStack_c0 =
                       (float ******)
                       ((long)pppppppfVar34 + ((long)ppppppfStack_340 - (long)ppppppfStack_2c8));
                  ppppppfStack_b8 =
                       (float ******)
                       ((long)pppppppfVar34 + ((long)ppppppfStack_338 - (long)ppppppfStack_2c8));
                  uStack_e0 = (float *******)
                              ((long)ppppppfStack_348 +
                              (long)((long)ppppppfStack_c0 +
                                    (long)ppppppfStack_b8 * (long)ppppppfStack_340) * 4);
                  uStack_d8 = (float *******)((long)ppppppfStack_390 + 1);
                  ppppppfStack_b0 = ppppppfStack_340;
                  uStack_398 = (float ******)
                               ((long)ppppppfStack_2d0 + lVar19 + (long)ppppppfStack_2c8 * lVar26);
                  ppppppfStack_368 = ppppppfStack_2c8;
                  ppppppfStack_380 = (float ******)&ppppppfStack_2d0;
                  ppppppfStack_378 = (float ******)pppppppfVar35;
                  ppppppfStack_370 = (float ******)pppppppfVar34;
                  ppppppfStack_d0 = (float ******)uStack_d8;
                  ppppppfStack_c8 = (float ******)&ppppppfStack_348;
                  FUN_109551f88(&uStack_e0,&uStack_398,(long)pppppfStack_2b8 + lVar19 + -4,
                                lStack_220);
                  ppppppfVar17 = ppppppfStack_2c8;
                  uVar36 = lVar39 + (long)ppppppfStack_2c8;
                  pfVar18 = (float *)((long)ppppppfStack_348 +
                                     ((long)pppppppfVar34 +
                                     (long)ppppppfStack_340 +
                                     (long)ppppppfStack_340 * (long)pppppppfVar34 +
                                     (1 - (long)ppppppfStack_2c8)) * 4);
                  uVar33 = uVar36;
                  if ((((ulong)pfVar18 & 3) == 0) &&
                     (uVar33 = (ulong)-((uint)pfVar18 >> 2) & 3, (long)uVar36 <= (long)uVar33)) {
                    uVar33 = uVar36;
                  }
                  uVar21 = (long)ppppppfStack_2c8 + (lVar39 - uVar33);
                  uVar32 = uVar21 + 3;
                  if (-1 < (long)uVar21) {
                    uVar32 = uVar21;
                  }
                  if (0 < (long)uVar33) {
                    _bzero(pfVar18,uVar33 << 2);
                  }
                  lVar55 = (uVar32 & 0xfffffffffffffffc) + uVar33;
                  if (3 < (long)uVar21) {
                    lVar47 = lVar55;
                    if (lVar55 <= (long)(uVar33 + 4)) {
                      lVar47 = uVar33 + 4;
                    }
                    _bzero(pfVar18 + uVar33,(lVar47 + ~uVar33 & 0x3ffffffffffffffc) * 4 + 0x10);
                  }
                  if (lVar55 < (long)uVar36) {
                    _bzero(pfVar18 + ((long)uVar32 >> 2) * 4 + uVar33,
                           ((long)ppppppfVar17 + lVar39 + (-(uVar32 & 0xfffffffffffffffc) - uVar33))
                           * 4);
                  }
                  lVar39 = lVar39 + 1;
                  lVar19 = lVar19 + -4;
                  bVar14 = (float *******)0x1 < pppppppfVar35;
                  pppppppfVar16 = (float *******)ppppppfStack_2c8;
                  pppppppfVar35 = pppppppfVar34;
                } while (bVar14);
              }
              if ((long)pppppppfVar49 < (long)pppppppfVar16) {
                lVar39 = 0;
                lVar26 = -1;
                do {
                  uVar36 = (long)pppppppfVar16 + lVar26;
                  pfVar18 = (float *)((long)ppppppfStack_348 +
                                     ((long)ppppppfStack_340 +
                                     (long)ppppppfStack_340 * lVar39 +
                                     (lVar39 - (long)pppppppfVar16) + 1) * 4);
                  uVar33 = uVar36;
                  if ((((ulong)pfVar18 & 3) == 0) &&
                     (uVar33 = (ulong)-((uint)pfVar18 >> 2) & 3, (long)uVar36 <= (long)uVar33)) {
                    uVar33 = uVar36;
                  }
                  uVar32 = uVar36 - uVar33;
                  uVar21 = uVar32 + 3;
                  if (-1 < (long)uVar32) {
                    uVar21 = uVar32;
                  }
                  if (0 < (long)uVar33) {
                    _bzero(pfVar18,uVar33 << 2);
                  }
                  lVar19 = (uVar21 & 0xfffffffffffffffc) + uVar33;
                  if (3 < (long)uVar32) {
                    lVar55 = lVar19;
                    if (lVar19 <= (long)(uVar33 + 4)) {
                      lVar55 = uVar33 + 4;
                    }
                    _bzero(pfVar18 + uVar33,(lVar55 + ~uVar33 & 0x3ffffffffffffffc) * 4 + 0x10);
                  }
                  if (lVar19 < (long)uVar36) {
                    _bzero(pfVar18 + ((long)uVar21 >> 2) * 4 + uVar33,
                           ((long)pppppppfVar16 + ((long)uVar21 >> 2) * -4 + (lVar26 - uVar33)) * 4)
                    ;
                  }
                  lVar39 = lVar39 + 1;
                  lVar26 = lVar26 + -1;
                  pppppppfVar16 = (float *******)ppppppfStack_2c8;
                } while (lVar39 < (long)ppppppfStack_2c8 - (long)pppppppfVar49);
              }
            }
            else if ((long)pppppppfVar49 < 0x31) {
              if ((float *******)ppppppfStack_2c8 != (float *******)0x0) {
                lVar39 = 0;
                if ((float *******)ppppppfStack_2c8 != (float *******)0x0) {
                  lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_2c8;
                }
                if (lVar39 < (long)ppppppfStack_2c8) goto LAB_109550e50;
              }
              FUN_1093c3d54(&ppppppfStack_348,(long)ppppppfStack_2c8 * (long)ppppppfStack_2c8,
                            ppppppfStack_2c8,ppppppfStack_2c8);
              if (0 < (long)ppppppfStack_338) {
                pppppppfVar16 = (float *******)0x0;
                pppppppfVar35 = (float *******)ppppppfStack_348;
                do {
                  if (0 < (long)ppppppfStack_340) {
                    pppppppfVar34 = (float *******)0x0;
                    do {
                      fVar57 = 1.0;
                      if (pppppppfVar16 != pppppppfVar34) {
                        fVar57 = 0.0;
                      }
                      *(float *)((long)pppppppfVar35 + (long)pppppppfVar34 * 4) = fVar57;
                      pppppppfVar34 = (float *******)((long)pppppppfVar34 + 1);
                    } while ((float *******)ppppppfStack_340 != pppppppfVar34);
                  }
                  pppppppfVar16 = (float *******)((long)pppppppfVar16 + 1);
                  pppppppfVar35 = (float *******)((long)pppppppfVar35 + (long)ppppppfStack_340 * 4);
                } while (pppppppfVar16 != (float *******)ppppppfStack_338);
              }
              if (0 < (long)pppppppfVar49) {
                lVar19 = (long)pppppppfVar49 * 4;
                lVar39 = -(long)pppppppfVar49;
                lVar26 = lVar19;
                do {
                  pppppppfVar16 = (float *******)((long)pppppppfVar49 + -1);
                  lVar26 = lVar26 + -4;
                  ppppppfStack_390 = (float ******)(lVar39 + (long)ppppppfStack_2c8);
                  ppppppfStack_c0 =
                       (float ******)
                       ((long)pppppppfVar16 + ((long)ppppppfStack_340 - (long)ppppppfStack_2c8));
                  ppppppfStack_b8 =
                       (float ******)
                       ((long)pppppppfVar16 + ((long)ppppppfStack_338 - (long)ppppppfStack_2c8));
                  uStack_e0 = (float *******)
                              ((long)ppppppfStack_348 +
                              (long)((long)ppppppfStack_c0 +
                                    (long)ppppppfStack_b8 * (long)ppppppfStack_340) * 4);
                  uStack_d8 = (float *******)((long)ppppppfStack_390 + 1);
                  ppppppfStack_b0 = ppppppfStack_340;
                  uStack_398 = (float ******)
                               ((long)ppppppfStack_2d0 + lVar19 + (long)ppppppfStack_2c8 * lVar26);
                  ppppppfStack_368 = ppppppfStack_2c8;
                  ppppppfStack_380 = (float ******)&ppppppfStack_2d0;
                  ppppppfStack_378 = (float ******)pppppppfVar49;
                  ppppppfStack_370 = (float ******)pppppppfVar16;
                  ppppppfStack_d0 = (float ******)uStack_d8;
                  ppppppfStack_c8 = (float ******)&ppppppfStack_348;
                  FUN_109551f88(&uStack_e0,&uStack_398,(long)pppppfStack_2b8 + lVar19 + -4,
                                lStack_220);
                  lVar19 = lVar19 + -4;
                  lVar39 = lVar39 + 1;
                  bVar14 = (float *******)0x1 < pppppppfVar49;
                  pppppppfVar49 = pppppppfVar16;
                } while (bVar14);
              }
            }
            else {
              if ((float *******)ppppppfStack_2c8 != (float *******)0x0) {
                lVar39 = 0;
                if ((float *******)ppppppfStack_2c8 != (float *******)0x0) {
                  lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_2c8;
                }
                if (lVar39 < (long)ppppppfStack_2c8) goto LAB_109550e50;
              }
              FUN_1093c3d54(&ppppppfStack_348,(long)ppppppfStack_2c8 * (long)ppppppfStack_2c8,
                            ppppppfStack_2c8,ppppppfStack_2c8);
              if (0 < (long)ppppppfStack_338) {
                pppppppfVar49 = (float *******)0x0;
                pppppppfVar16 = (float *******)ppppppfStack_348;
                do {
                  if (0 < (long)ppppppfStack_340) {
                    pppppppfVar35 = (float *******)0x0;
                    do {
                      fVar57 = 1.0;
                      if (pppppppfVar49 != pppppppfVar35) {
                        fVar57 = 0.0;
                      }
                      *(float *)((long)pppppppfVar16 + (long)pppppppfVar35 * 4) = fVar57;
                      pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
                    } while ((float *******)ppppppfStack_340 != pppppppfVar35);
                  }
                  pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
                  pppppppfVar16 = (float *******)((long)pppppppfVar16 + (long)ppppppfStack_340 * 4);
                } while (pppppppfVar49 != (float *******)ppppppfStack_338);
              }
              FUN_109551d70(&ppppppfStack_108,&ppppppfStack_348,&lStack_220,1);
            }
            goto LAB_10954f77c;
          }
          _free(lStack_220);
          if ((long)ppppppfVar17 < 1) {
            lVar39 = 0;
            goto LAB_10954f270;
          }
          if ((ulong)ppppppfVar17 >> 0x3e == 0) {
            lVar39 = (long)ppppppfVar17 << 2;
            _malloc();
            if (lVar39 != 0) goto LAB_10954f270;
          }
          goto LAB_109550e50;
        }
LAB_10954f79c:
        if ((long)ppppppfStack_160 <= (long)ppppppfStack_158) goto LAB_10954ff84;
        func_0x0001093c3e60(&pppppfStack_210,&pfStack_168);
        pppppppfVar49 = (float *******)ppppppfStack_158;
        pppppfVar12 = pppppfStack_210;
        if ((float *******)ppppppfStack_158 != (float *******)0x0) {
          lVar39 = 0;
          if ((float *******)ppppppfStack_158 != (float *******)0x0) {
            lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_158;
          }
          if (lVar39 < (long)ppppppfStack_158) goto LAB_109550e50;
        }
        lVar39 = (long)ppppppfStack_158 * (long)ppppppfStack_158;
        FUN_1093c3d54(&pfStack_2e8,lVar39,ppppppfStack_158,ppppppfStack_158);
        ppppppfVar17 = ppppppfStack_208;
        if (((float *******)ppppppfStack_2e0 != pppppppfVar49) ||
           (pppppppfVar16 = pppppppfVar49, (float *******)ppppppfStack_2d8 != pppppppfVar49)) {
          if (pppppppfVar49 != (float *******)0x0) {
            lVar26 = 0;
            if (pppppppfVar49 != (float *******)0x0) {
              lVar26 = 0x7fffffffffffffff / (long)pppppppfVar49;
            }
            if (lVar26 < (long)pppppppfVar49) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pfStack_2e8,lVar39,pppppppfVar49,pppppppfVar49);
          pppppppfVar49 = (float *******)ppppppfStack_2d8;
          pppppppfVar16 = (float *******)ppppppfStack_2e0;
        }
        pfVar18 = pfStack_2e8;
        if (0 < (long)pppppppfVar49) {
          pppppppfVar35 = (float *******)0x0;
          ppppppfVar23 = (float ******)pppppfVar12;
          pfVar29 = pfStack_2e8;
          do {
            pppppppfVar34 = pppppppfVar16;
            if ((long)pppppppfVar35 <= (long)pppppppfVar16) {
              pppppppfVar34 = pppppppfVar35;
            }
            pfVar20 = pfVar29;
            ppppppfVar38 = ppppppfVar23;
            pppppppfVar44 = pppppppfVar34;
            if ((long)pppppppfVar34 < 1) {
              pppppppfVar34 = (float *******)0x0;
            }
            else {
              do {
                *pfVar20 = *(float *)ppppppfVar38;
                pppppppfVar44 = (float *******)((long)pppppppfVar44 + -1);
                pfVar20 = pfVar20 + 1;
                ppppppfVar38 = (float ******)((long)ppppppfVar38 + 4);
              } while (pppppppfVar44 != (float *******)0x0);
            }
            if ((long)pppppppfVar34 < (long)pppppppfVar16) {
              pfVar18[(long)((long)pppppppfVar34 * (long)pppppppfVar16 + (long)pppppppfVar34)] =
                   *(float *)((long)pppppfVar12 +
                             (long)((long)pppppppfVar34 * (long)ppppppfVar17 + (long)pppppppfVar34)
                             * 4);
              pppppppfVar34 = (float *******)((long)pppppppfVar34 + 1);
            }
            if ((long)pppppppfVar16 - (long)pppppppfVar34 != 0 &&
                (long)pppppppfVar34 <= (long)pppppppfVar16) {
              _bzero((long)pfVar18 +
                     (long)pppppppfVar34 * 4 + (long)pppppppfVar16 * 4 * (long)pppppppfVar35,
                     ((long)pppppppfVar16 - (long)pppppppfVar34) * 4);
            }
            pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
            ppppppfVar23 = (float ******)((long)ppppppfVar23 + (long)ppppppfVar17 * 4);
            pfVar29 = pfVar29 + (long)pppppppfVar16;
          } while (pppppppfVar35 != pppppppfVar49);
        }
        ppppppfVar17 = ppppppfStack_208;
        if (bStack_319 == 1) {
          pppppfStack_100 = (float *****)&pppppfStack_1f8;
          uStack_f8 = 0;
          pppppppfVar49 = (float *******)ppppppfStack_200;
          if ((long)ppppppfStack_208 <= (long)ppppppfStack_200) {
            pppppppfVar49 = (float *******)ppppppfStack_208;
          }
          uStack_e8 = 0;
          lVar39 = lStack_178;
          ppppppfStack_108 = &pppppfStack_210;
          ppppppfStack_f0 = (float ******)pppppppfVar49;
          if (ppppppfStack_170 != ppppppfStack_208) {
            _free(lStack_178);
            if ((long)ppppppfVar17 < 1) {
              lVar39 = 0;
              goto LAB_10954fa5c;
            }
            if ((ulong)ppppppfVar17 >> 0x3e == 0) {
              lVar39 = (long)ppppppfVar17 << 2;
              _malloc();
              if (lVar39 != 0) goto LAB_10954fa5c;
            }
LAB_109550e50:
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109550ee0;
          }
LAB_10954fa5c:
          lStack_178 = lVar39;
          pppppppfVar16 = (float *******)ppppppfStack_208;
          ppppppfVar23 = ppppppfStack_350;
          ppppppfStack_170 = ppppppfVar17;
          if ((pppppfStack_360 == pppppfStack_210) &&
             (uStack_358 == (float *******)ppppppfStack_208)) {
            pppppppfVar35 = (float *******)ppppppfStack_350;
            if ((long)ppppppfStack_208 <= (long)ppppppfStack_350) {
              pppppppfVar35 = (float *******)ppppppfStack_208;
            }
            ppppppfVar17 = (float ******)pppppfStack_360;
            if (0 < (long)pppppppfVar35) {
              do {
                *(float *)ppppppfVar17 = 1.0;
                pppppppfVar35 = (float *******)((long)pppppppfVar35 + -1);
                ppppppfVar17 = (float ******)((long)ppppppfVar17 + ((long)ppppppfStack_208 + 1) * 4)
                ;
              } while (pppppppfVar35 != (float *******)0x0);
            }
            if (0 < (long)ppppppfStack_350) {
              pppppppfVar35 = (float *******)0x0;
              ppppppfVar17 = (float ******)pppppfStack_360;
              do {
                pppppppfVar34 = pppppppfVar16;
                if ((long)pppppppfVar35 <= (long)pppppppfVar16) {
                  pppppppfVar34 = pppppppfVar35;
                }
                if (0 < (long)pppppppfVar34) {
                  _bzero(ppppppfVar17,(long)pppppppfVar34 << 2);
                }
                pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
                ppppppfVar17 = (float ******)((long)ppppppfVar17 + (long)pppppppfVar16 * 4);
              } while ((float *******)ppppppfVar23 != pppppppfVar35);
            }
            if (0 < (long)pppppppfVar49) {
              lVar39 = -(long)pppppppfVar49;
              lVar19 = (long)pppppppfVar49 * 4;
              lVar26 = lVar19;
              pppppppfVar35 = pppppppfVar49;
              do {
                pppppppfVar34 = (float *******)((long)pppppppfVar35 + -1);
                lVar26 = lVar26 + -4;
                ppppppfStack_390 = (float ******)(lVar39 + (long)ppppppfStack_208);
                ppppppfStack_c0 =
                     (float ******)
                     ((long)pppppppfVar34 + ((long)uStack_358 - (long)ppppppfStack_208));
                ppppppfStack_b8 =
                     (float ******)
                     ((long)pppppppfVar34 + ((long)ppppppfStack_350 - (long)ppppppfStack_208));
                uStack_e0 = (float *******)
                            ((long)pppppfStack_360 +
                            (long)((long)ppppppfStack_c0 + (long)ppppppfStack_b8 * (long)uStack_358)
                            * 4);
                uStack_d8 = (float *******)((long)ppppppfStack_390 + 1);
                ppppppfStack_c8 = &pppppfStack_360;
                ppppppfStack_b0 = (float ******)uStack_358;
                uStack_398 = (float ******)
                             ((long)pppppfStack_210 + lVar19 + (long)ppppppfStack_208 * lVar26);
                ppppppfStack_368 = ppppppfStack_208;
                ppppppfStack_380 = &pppppfStack_210;
                ppppppfStack_378 = (float ******)pppppppfVar35;
                ppppppfStack_370 = (float ******)pppppppfVar34;
                ppppppfStack_d0 = (float ******)uStack_d8;
                FUN_109551f88(&uStack_e0,&uStack_398,(long)pppppfStack_1f8 + lVar19 + -4,lStack_178)
                ;
                ppppppfVar17 = ppppppfStack_208;
                uVar36 = lVar39 + (long)ppppppfStack_208;
                pfVar18 = (float *)((long)pppppfStack_360 +
                                   ((long)pppppppfVar34 +
                                   (long)uStack_358 +
                                   (long)uStack_358 * (long)pppppppfVar34 +
                                   (1 - (long)ppppppfStack_208)) * 4);
                uVar33 = uVar36;
                if ((((ulong)pfVar18 & 3) == 0) &&
                   (uVar33 = (ulong)-((uint)pfVar18 >> 2) & 3, (long)uVar36 <= (long)uVar33)) {
                  uVar33 = uVar36;
                }
                uVar21 = (long)ppppppfStack_208 + (lVar39 - uVar33);
                uVar32 = uVar21 + 3;
                if (-1 < (long)uVar21) {
                  uVar32 = uVar21;
                }
                if (0 < (long)uVar33) {
                  _bzero(pfVar18,uVar33 << 2);
                }
                lVar55 = (uVar32 & 0xfffffffffffffffc) + uVar33;
                if (3 < (long)uVar21) {
                  lVar47 = lVar55;
                  if (lVar55 <= (long)(uVar33 + 4)) {
                    lVar47 = uVar33 + 4;
                  }
                  _bzero(pfVar18 + uVar33,(lVar47 + ~uVar33 & 0x3ffffffffffffffc) * 4 + 0x10);
                }
                if (lVar55 < (long)uVar36) {
                  _bzero(pfVar18 + ((long)uVar32 >> 2) * 4 + uVar33,
                         ((long)ppppppfVar17 + lVar39 + (-(uVar32 & 0xfffffffffffffffc) - uVar33)) *
                         4);
                }
                lVar39 = lVar39 + 1;
                lVar19 = lVar19 + -4;
                bVar14 = (float *******)0x1 < pppppppfVar35;
                pppppppfVar16 = (float *******)ppppppfStack_208;
                pppppppfVar35 = pppppppfVar34;
              } while (bVar14);
            }
            if ((long)pppppppfVar49 < (long)pppppppfVar16) {
              lVar39 = 0;
              lVar26 = -1;
              do {
                uVar36 = (long)pppppppfVar16 + lVar26;
                pfVar18 = (float *)((long)pppppfStack_360 +
                                   ((long)uStack_358 +
                                   (long)uStack_358 * lVar39 + (lVar39 - (long)pppppppfVar16) + 1) *
                                   4);
                uVar33 = uVar36;
                if ((((ulong)pfVar18 & 3) == 0) &&
                   (uVar33 = (ulong)-((uint)pfVar18 >> 2) & 3, (long)uVar36 <= (long)uVar33)) {
                  uVar33 = uVar36;
                }
                uVar32 = uVar36 - uVar33;
                uVar21 = uVar32 + 3;
                if (-1 < (long)uVar32) {
                  uVar21 = uVar32;
                }
                if (0 < (long)uVar33) {
                  _bzero(pfVar18,uVar33 << 2);
                }
                lVar19 = (uVar21 & 0xfffffffffffffffc) + uVar33;
                if (3 < (long)uVar32) {
                  lVar55 = lVar19;
                  if (lVar19 <= (long)(uVar33 + 4)) {
                    lVar55 = uVar33 + 4;
                  }
                  _bzero(pfVar18 + uVar33,(lVar55 + ~uVar33 & 0x3ffffffffffffffc) * 4 + 0x10);
                }
                if (lVar19 < (long)uVar36) {
                  _bzero(pfVar18 + ((long)uVar21 >> 2) * 4 + uVar33,
                         ((long)pppppppfVar16 + ((long)uVar21 >> 2) * -4 + (lVar26 - uVar33)) * 4);
                }
                lVar39 = lVar39 + 1;
                lVar26 = lVar26 + -1;
                pppppppfVar16 = (float *******)ppppppfStack_208;
              } while (lVar39 < (long)ppppppfStack_208 - (long)pppppppfVar49);
            }
          }
          else if ((long)pppppppfVar49 < 0x31) {
            if ((float *******)ppppppfStack_208 != (float *******)0x0) {
              lVar39 = 0;
              if ((float *******)ppppppfStack_208 != (float *******)0x0) {
                lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_208;
              }
              if (lVar39 < (long)ppppppfStack_208) goto LAB_109550e50;
            }
            FUN_1093c3d54(&pppppfStack_360,(long)ppppppfStack_208 * (long)ppppppfStack_208,
                          ppppppfStack_208,ppppppfStack_208);
            if (0 < (long)ppppppfStack_350) {
              pppppppfVar16 = (float *******)0x0;
              ppppppfVar17 = (float ******)pppppfStack_360;
              do {
                if (0 < (long)uStack_358) {
                  pppppppfVar35 = (float *******)0x0;
                  do {
                    fVar57 = 1.0;
                    if (pppppppfVar16 != pppppppfVar35) {
                      fVar57 = 0.0;
                    }
                    *(float *)((long)ppppppfVar17 + (long)pppppppfVar35 * 4) = fVar57;
                    pppppppfVar35 = (float *******)((long)pppppppfVar35 + 1);
                  } while (uStack_358 != pppppppfVar35);
                }
                pppppppfVar16 = (float *******)((long)pppppppfVar16 + 1);
                ppppppfVar17 = (float ******)((long)ppppppfVar17 + (long)uStack_358 * 4);
              } while (pppppppfVar16 != (float *******)ppppppfStack_350);
            }
            if (0 < (long)pppppppfVar49) {
              lVar19 = (long)pppppppfVar49 * 4;
              lVar39 = -(long)pppppppfVar49;
              lVar26 = lVar19;
              do {
                pppppppfVar16 = (float *******)((long)pppppppfVar49 + -1);
                lVar26 = lVar26 + -4;
                ppppppfStack_390 = (float ******)(lVar39 + (long)ppppppfStack_208);
                ppppppfStack_c0 =
                     (float ******)
                     ((long)pppppppfVar16 + ((long)uStack_358 - (long)ppppppfStack_208));
                ppppppfStack_b8 =
                     (float ******)
                     ((long)pppppppfVar16 + ((long)ppppppfStack_350 - (long)ppppppfStack_208));
                uStack_e0 = (float *******)
                            ((long)pppppfStack_360 +
                            (long)((long)ppppppfStack_c0 + (long)ppppppfStack_b8 * (long)uStack_358)
                            * 4);
                uStack_d8 = (float *******)((long)ppppppfStack_390 + 1);
                ppppppfStack_b0 = (float ******)uStack_358;
                uStack_398 = (float ******)
                             ((long)pppppfStack_210 + lVar19 + (long)ppppppfStack_208 * lVar26);
                ppppppfStack_368 = ppppppfStack_208;
                ppppppfStack_380 = &pppppfStack_210;
                ppppppfStack_378 = (float ******)pppppppfVar49;
                ppppppfStack_370 = (float ******)pppppppfVar16;
                ppppppfStack_d0 = (float ******)uStack_d8;
                ppppppfStack_c8 = &pppppfStack_360;
                FUN_109551f88(&uStack_e0,&uStack_398,(long)pppppfStack_1f8 + lVar19 + -4,lStack_178)
                ;
                lVar19 = lVar19 + -4;
                lVar39 = lVar39 + 1;
                bVar14 = (float *******)0x1 < pppppppfVar49;
                pppppppfVar49 = pppppppfVar16;
              } while (bVar14);
            }
          }
          else {
            if ((float *******)ppppppfStack_208 != (float *******)0x0) {
              lVar39 = 0;
              if ((float *******)ppppppfStack_208 != (float *******)0x0) {
                lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_208;
              }
              if (lVar39 < (long)ppppppfStack_208) goto LAB_109550e50;
            }
            FUN_1093c3d54(&pppppfStack_360,(long)ppppppfStack_208 * (long)ppppppfStack_208,
                          ppppppfStack_208,ppppppfStack_208);
            if (0 < (long)ppppppfStack_350) {
              pppppppfVar49 = (float *******)0x0;
              ppppppfVar17 = (float ******)pppppfStack_360;
              do {
                if (0 < (long)uStack_358) {
                  pppppppfVar16 = (float *******)0x0;
                  do {
                    fVar57 = 1.0;
                    if (pppppppfVar49 != pppppppfVar16) {
                      fVar57 = 0.0;
                    }
                    *(float *)((long)ppppppfVar17 + (long)pppppppfVar16 * 4) = fVar57;
                    pppppppfVar16 = (float *******)((long)pppppppfVar16 + 1);
                  } while (uStack_358 != pppppppfVar16);
                }
                pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
                ppppppfVar17 = (float ******)((long)ppppppfVar17 + (long)uStack_358 * 4);
              } while (pppppppfVar49 != (float *******)ppppppfStack_350);
            }
            FUN_1095538f8(&ppppppfStack_108,&pppppfStack_360,&lStack_178,1);
          }
        }
        else if (bStack_318 == 1) {
          if (((float *******)ppppppfStack_160 != (float *******)0x0) &&
             ((float *******)ppppppfStack_158 != (float *******)0x0)) {
            lVar39 = 0;
            if ((float *******)ppppppfStack_158 != (float *******)0x0) {
              lVar39 = 0x7fffffffffffffff / (long)ppppppfStack_158;
            }
            if (lVar39 < (long)ppppppfStack_160) goto LAB_109550e50;
          }
          FUN_1093c3d54(&pppppfStack_360,(long)ppppppfStack_158 * (long)ppppppfStack_160);
          if (0 < (long)ppppppfStack_350) {
            pppppppfVar49 = (float *******)0x0;
            ppppppfVar17 = (float ******)pppppfStack_360;
            do {
              if (0 < (long)uStack_358) {
                pppppppfVar16 = (float *******)0x0;
                do {
                  fVar57 = 1.0;
                  if (pppppppfVar49 != pppppppfVar16) {
                    fVar57 = 0.0;
                  }
                  *(float *)((long)ppppppfVar17 + (long)pppppppfVar16 * 4) = fVar57;
                  pppppppfVar16 = (float *******)((long)pppppppfVar16 + 1);
                } while (uStack_358 != pppppppfVar16);
              }
              pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
              ppppppfVar17 = (float ******)((long)ppppppfVar17 + (long)uStack_358 * 4);
            } while (pppppppfVar49 != (float *******)ppppppfStack_350);
          }
          uStack_d8 = (float *******)&pppppfStack_1f8;
          ppppppfStack_d0 = (float ******)((ulong)ppppppfStack_d0 & 0xffffffffffffff00);
          ppppppfStack_c8 = ppppppfStack_200;
          if ((long)ppppppfStack_208 <= (long)ppppppfStack_200) {
            ppppppfStack_c8 = ppppppfStack_208;
          }
          ppppppfStack_c0 = (float ******)0x0;
          uStack_e0 = (float *******)&pppppfStack_210;
          FUN_1095538f8(&uStack_e0,&pppppfStack_360,&lStack_178,0);
        }
        if (((bStack_317 & 1) != 0) || ((bStack_316 & 1) != 0)) {
          FUN_1095537f8(&ppppppfStack_348,&pfStack_1e8);
        }
      }
LAB_10954ff84:
      fVar57 = ABS(*pfStack_2e8);
      pppppppfVar49 = (float *******)ppppppfStack_2d8;
      if ((long)ppppppfStack_2e0 <= (long)ppppppfStack_2d8) {
        pppppppfVar49 = (float *******)ppppppfStack_2e0;
      }
      lVar39 = (long)pppppppfVar49 + -1;
      pfVar18 = pfStack_2e8;
      if (lVar39 != 0 && 0 < (long)pppppppfVar49) {
        do {
          fVar59 = ABS(pfVar18[(long)ppppppfStack_2e0 + 1]);
          if (fVar59 <= fVar57) {
            fVar59 = fVar57;
          }
          fVar57 = fVar59;
          lVar39 = lVar39 + -1;
          pfVar18 = pfVar18 + (long)ppppppfStack_2e0 + 1;
        } while (lVar39 != 0);
      }
      pfVar18 = pfStack_2e8;
      pppppppfVar49 = (float *******)ppppppfStack_2e0;
      do {
        if ((long)ppppppfStack_2f8 < 2) break;
        bVar14 = true;
        lVar26 = 4;
        lVar39 = 1;
        do {
          lVar55 = 0;
          lVar19 = 0;
          do {
            fVar59 = fVar57 * 2.3841858e-07;
            if (fVar59 <= 1.1754944e-38) {
              fVar59 = 1.1754944e-38;
            }
            if ((fVar59 < ABS(pfVar18[lVar19 * (long)pppppppfVar49 + lVar39])) ||
               (fVar70 = fVar57, fVar59 < ABS(pfVar18[(long)pppppppfVar49 * lVar39 + lVar19]))) {
              fVar59 = pfVar18[(long)pppppppfVar49 * lVar39 + lVar39];
              fVar70 = pfVar18[lVar19 * (long)pppppppfVar49 + lVar39];
              fVar73 = pfVar18[(long)pppppppfVar49 * lVar39 + lVar19];
              uStack_e0 = (float *******)CONCAT44(fVar73,fVar59);
              fStack_3b4 = pfVar18[lVar19 * (long)pppppppfVar49 + lVar19];
              uStack_d8 = (float *******)CONCAT44(fStack_3b4,fVar70);
              if (1.1754944e-38 <= ABS(fVar73 - fVar70)) {
                fVar74 = (fVar59 + fStack_3b4) / (fVar73 - fVar70);
                fVar71 = SQRT(fVar74 * fVar74 + 1.0);
                fVar75 = 1.0 / fVar71;
                fVar74 = fVar74 / fVar71;
              }
              else {
                fVar74 = 1.0;
                fVar75 = 0.0;
              }
              if ((fVar74 != 1.0) || (fVar71 = fVar59, fVar75 != 0.0)) {
                fVar72 = fStack_3b4 * fVar75;
                fVar71 = fVar73 * fVar75 + fVar59 * fVar74;
                fStack_3b4 = fStack_3b4 * fVar74 - fVar70 * fVar75;
                uStack_e0 = (float *******)CONCAT44(fVar73 * fVar74 - fVar59 * fVar75,fVar71);
                uStack_d8 = (float *******)CONCAT44(fStack_3b4,fVar72 + fVar70 * fVar74);
              }
              ppppppfStack_108 = (float ******)CONCAT44(ppppppfStack_108._4_4_,fVar71);
              func_0x0001093eeff0(&uStack_398,&ppppppfStack_108,(ulong)&uStack_e0 | 8,&fStack_3b4);
              fVar59 = fVar75 * uStack_398._4_4_ + (float)uStack_398 * fVar74;
              fVar70 = fVar75 * (float)uStack_398 - uStack_398._4_4_ * fVar74;
              pppppppfVar49 = (float *******)ppppppfStack_2d8;
              pfVar18 = pfStack_2e8;
              if ((fVar70 != 0.0 || fVar59 != 1.0) && 0 < (long)ppppppfStack_2d8) {
                do {
                  fVar73 = *(float *)((long)pfVar18 + lVar26);
                  fVar74 = *(float *)((long)pfVar18 + lVar55);
                  *(float *)((long)pfVar18 + lVar26) = fVar70 * fVar74 + fVar73 * fVar59;
                  *(float *)((long)pfVar18 + lVar55) = fVar59 * fVar74 + fVar73 * -fVar70;
                  pppppppfVar49 = (float *******)((long)pppppppfVar49 + -1);
                  pfVar18 = pfVar18 + (long)ppppppfStack_2e0;
                } while (pppppppfVar49 != (float *******)0x0);
              }
              if ((((bStack_319 & 1) != 0) || ((bStack_318 & 1) != 0)) &&
                 (0 < (long)uStack_358 && (fVar70 != 0.0 || fVar59 != 1.0))) {
                pfVar18 = (float *)((long)pppppfStack_360 + (long)uStack_358 * lVar19 * 4);
                pppppppfVar49 = uStack_358;
                pfVar29 = (float *)((long)pppppfStack_360 + (long)uStack_358 * lVar39 * 4);
                do {
                  fVar73 = *pfVar29;
                  fVar74 = *pfVar18;
                  *pfVar29 = fVar70 * fVar74 + fVar73 * fVar59;
                  *pfVar18 = fVar59 * fVar74 + fVar73 * -fVar70;
                  pppppppfVar49 = (float *******)((long)pppppppfVar49 + -1);
                  pfVar18 = pfVar18 + 1;
                  pfVar29 = pfVar29 + 1;
                } while (pppppppfVar49 != (float *******)0x0);
              }
              bVar14 = false;
              if ((uStack_398._4_4_ == 0.0) && (bVar14 = false, !NAN((float)uStack_398))) {
                bVar14 = (float)uStack_398 == 1.0;
              }
              if (!bVar14 && 0 < (long)ppppppfStack_2e0) {
                pfVar18 = pfStack_2e8 + (long)ppppppfStack_2e0 * lVar19;
                pfVar29 = pfStack_2e8 + (long)ppppppfStack_2e0 * lVar39;
                pppppppfVar49 = (float *******)ppppppfStack_2e0;
                do {
                  fVar59 = *pfVar29;
                  fVar70 = *pfVar18;
                  *pfVar29 = fVar70 * -uStack_398._4_4_ + fVar59 * (float)uStack_398;
                  *pfVar18 = (float)uStack_398 * fVar70 + fVar59 * uStack_398._4_4_;
                  pppppppfVar49 = (float *******)((long)pppppppfVar49 + -1);
                  pfVar18 = pfVar18 + 1;
                  pfVar29 = pfVar29 + 1;
                } while (pppppppfVar49 != (float *******)0x0);
              }
              if (((bStack_317 & 1) != 0) || ((bStack_316 & 1) != 0)) {
                bVar14 = false;
                if ((uStack_398._4_4_ == 0.0) && (bVar14 = false, !NAN((float)uStack_398))) {
                  bVar14 = (float)uStack_398 == 1.0;
                }
                if (!bVar14 && 0 < (long)ppppppfStack_340) {
                  pppppppfVar49 = (float *******)ppppppfStack_340;
                  pfVar18 = (float *)((long)ppppppfStack_348 + (long)ppppppfStack_340 * lVar19 * 4);
                  pfVar29 = (float *)((long)ppppppfStack_348 + (long)ppppppfStack_340 * lVar39 * 4);
                  do {
                    fVar59 = *pfVar29;
                    fVar70 = *pfVar18;
                    *pfVar29 = fVar70 * -uStack_398._4_4_ + fVar59 * (float)uStack_398;
                    *pfVar18 = (float)uStack_398 * fVar70 + fVar59 * uStack_398._4_4_;
                    pppppppfVar49 = (float *******)((long)pppppppfVar49 + -1);
                    pfVar18 = pfVar18 + 1;
                    pfVar29 = pfVar29 + 1;
                  } while (pppppppfVar49 != (float *******)0x0);
                }
              }
              bVar14 = false;
              fVar70 = ABS(pfStack_2e8[(long)ppppppfStack_2e0 * lVar19 + lVar19]);
              if (ABS(pfStack_2e8[(long)ppppppfStack_2e0 * lVar19 + lVar19]) <=
                  ABS(pfStack_2e8[(long)ppppppfStack_2e0 * lVar39 + lVar39])) {
                fVar70 = ABS(pfStack_2e8[(long)ppppppfStack_2e0 * lVar39 + lVar39]);
              }
              pfVar18 = pfStack_2e8;
              pppppppfVar49 = (float *******)ppppppfStack_2e0;
              if (fVar70 <= fVar57) {
                fVar70 = fVar57;
              }
            }
            fVar57 = fVar70;
            lVar19 = lVar19 + 1;
            lVar55 = lVar55 + 4;
          } while (lVar19 != lVar39);
          lVar39 = lVar39 + 1;
          lVar26 = lVar26 + 4;
        } while (lVar39 < (long)ppppppfStack_2f8);
      } while (!bVar14);
      if (0 < (long)ppppppfStack_2f8) {
        lVar26 = 0;
        lVar39 = 0;
        do {
          fVar57 = pfStack_2e8[(long)ppppppfStack_2e0 * lVar39 + lVar39];
          *(float *)((long)ppppppfStack_330 + lVar39 * 4) = ABS(fVar57);
          if ((fVar57 < 0.0) && (((bStack_319 | bStack_318) & 1) != 0)) {
            pfVar18 = (float *)((long)pppppfStack_360 + (long)uStack_358 * lVar39 * 4);
            pppppppfVar49 = (float *******)((ulong)-((uint)pfVar18 >> 2) & 3);
            if ((long)uStack_358 <= (long)pppppppfVar49) {
              pppppppfVar49 = uStack_358;
            }
            pppppppfVar16 = uStack_358;
            if (((ulong)pfVar18 & 3) == 0) {
              pppppppfVar16 = pppppppfVar49;
            }
            uVar33 = (long)uStack_358 - (long)pppppppfVar16;
            uVar36 = uVar33 + 3;
            if ((long)pppppppfVar16 <= (long)uStack_358) {
              uVar36 = uVar33;
            }
            if (0 < (long)pppppppfVar16) {
              ppppppfVar17 = (float ******)((long)pppppfStack_360 + (long)uStack_358 * lVar26);
              pppppppfVar49 = pppppppfVar16;
              do {
                *(float *)ppppppfVar17 = -*(float *)ppppppfVar17;
                pppppppfVar49 = (float *******)((long)pppppppfVar49 + -1);
                ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
              } while (pppppppfVar49 != (float *******)0x0);
            }
            lVar19 = (uVar36 & 0xfffffffffffffffc) + (long)pppppppfVar16;
            if (3 < (long)uVar33) {
              pppppppfVar49 = pppppppfVar16;
              pfVar18 = (float *)((long)pppppfStack_360 +
                                 (long)uStack_358 * lVar26 + (long)pppppppfVar16 * 4);
              do {
                pfVar18[2] = -pfVar18[2];
                pfVar18[3] = -pfVar18[3];
                *pfVar18 = -*pfVar18;
                pfVar18[1] = -pfVar18[1];
                pppppppfVar49 = (float *******)((long)pppppppfVar49 + 4);
                pfVar18 = pfVar18 + 4;
              } while ((long)pppppppfVar49 < lVar19);
            }
            if (lVar19 < (long)uStack_358) {
              lVar19 = uVar33 - (uVar36 & 0xfffffffffffffffc);
              pfVar18 = (float *)((long)pppppfStack_360 +
                                 (long)uStack_358 * lVar26 + ((long)uVar36 >> 2) * 0x10 +
                                 (long)pppppppfVar16 * 4);
              do {
                *pfVar18 = -*pfVar18;
                lVar19 = lVar19 + -1;
                pfVar18 = pfVar18 + 1;
              } while (lVar19 != 0);
            }
          }
          lVar39 = lVar39 + 1;
          lVar26 = lVar26 + 4;
        } while (lVar39 < (long)ppppppfStack_2f8);
      }
      uVar33 = CONCAT53(iStack_325,uStack_328);
      uVar36 = uVar33 + 3;
      if (-1 < iStack_325) {
        uVar36 = uVar33;
      }
      if (3 < (long)uVar33) {
        lVar39 = 0;
        pppppppfVar49 = (float *******)ppppppfStack_330;
        do {
          *(float *)(pppppppfVar49 + 1) = *(float *)(pppppppfVar49 + 1) * fVar58;
          *(float *)((long)pppppppfVar49 + 0xc) = *(float *)((long)pppppppfVar49 + 0xc) * fVar58;
          *(float *)pppppppfVar49 = *(float *)pppppppfVar49 * fVar58;
          *(float *)((long)pppppppfVar49 + 4) = *(float *)((long)pppppppfVar49 + 4) * fVar58;
          lVar39 = lVar39 + 4;
          pppppppfVar49 = pppppppfVar49 + 2;
        } while (lVar39 < (long)(uVar36 & 0xfffffffffffffffc));
      }
      lVar39 = (long)uVar33 % 4;
      if (lVar39 != 0 && (long)(uVar36 & 0xfffffffffffffffc) <= (long)uVar33) {
        pppppppfVar49 = (float *******)(ppppppfStack_330 + ((long)uVar36 >> 2) * 2);
        do {
          *(float *)pppppppfVar49 = fVar58 * *(float *)pppppppfVar49;
          lVar39 = lVar39 + -1;
          pppppppfVar49 = (float *******)((long)pppppppfVar49 + 4);
        } while (lVar39 != 0);
      }
      ppppppfStack_310 = ppppppfStack_2f8;
      pppppppfVar49 = (float *******)ppppppfStack_310;
      if (0 < (long)ppppppfStack_2f8) {
        lVar39 = 0;
        lVar26 = 0;
        pppppppfVar16 = (float *******)0x0;
        do {
          fVar57 = *(float *)((long)ppppppfStack_330 +
                             (CONCAT53(iStack_325,uStack_328) -
                             ((long)ppppppfStack_2f8 - (long)pppppppfVar16)) * 4);
          pppppppfVar49 = pppppppfVar16;
          if ((long)ppppppfStack_2f8 - (long)pppppppfVar16 < 2) {
            if (fVar57 == 0.0) break;
          }
          else {
            lVar55 = 0;
            lVar19 = 1;
            fVar58 = fVar57;
            do {
              fVar59 = *(float *)((long)ppppppfStack_330 +
                                 ((long)pppppppfVar16 +
                                 lVar19 + (CONCAT53(iStack_325,uStack_328) - (long)ppppppfStack_2f8)
                                 ) * 4);
              fVar70 = fVar59;
              lVar47 = lVar19;
              if (fVar59 <= fVar58) {
                fVar59 = fVar58;
                fVar70 = fVar57;
                lVar47 = lVar55;
              }
              lVar55 = lVar47;
              fVar57 = fVar70;
              lVar19 = lVar19 + 1;
              fVar58 = fVar59;
            } while ((long)ppppppfStack_2f8 + lVar26 != lVar19);
            if (fVar57 == 0.0) break;
            if (lVar55 != 0) {
              lVar19 = lVar55 + (long)pppppppfVar16;
              fVar57 = *(float *)((long)ppppppfStack_330 + (long)pppppppfVar16 * 4);
              *(float *)((long)ppppppfStack_330 + (long)pppppppfVar16 * 4) =
                   *(float *)((long)ppppppfStack_330 + lVar19 * 4);
              *(float *)((long)ppppppfStack_330 + lVar19 * 4) = fVar57;
              if (((bStack_319 & 1) != 0) || ((bStack_318 & 1) != 0)) {
                pfVar18 = (float *)((long)pppppfStack_360 + (long)uStack_358 * lVar19 * 4);
                pppppppfVar49 = (float *******)((ulong)-((uint)pfVar18 >> 2) & 3);
                if ((long)uStack_358 <= (long)pppppppfVar49) {
                  pppppppfVar49 = uStack_358;
                }
                pppppppfVar35 = uStack_358;
                if (((ulong)pfVar18 & 3) == 0) {
                  pppppppfVar35 = pppppppfVar49;
                }
                uVar33 = (long)uStack_358 - (long)pppppppfVar35;
                uVar36 = uVar33 + 3;
                if ((long)pppppppfVar35 <= (long)uStack_358) {
                  uVar36 = uVar33;
                }
                if (0 < (long)pppppppfVar35) {
                  ppppppfVar17 = (float ******)((long)pppppfStack_360 + (long)uStack_358 * lVar39);
                  pfVar18 = (float *)((long)pppppfStack_360 +
                                     (long)uStack_358 * ((long)pppppppfVar16 + lVar55) * 4);
                  pppppppfVar49 = pppppppfVar35;
                  do {
                    fVar57 = *pfVar18;
                    *pfVar18 = *(float *)ppppppfVar17;
                    *(float *)ppppppfVar17 = fVar57;
                    pppppppfVar49 = (float *******)((long)pppppppfVar49 + -1);
                    ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
                    pfVar18 = pfVar18 + 1;
                  } while (pppppppfVar49 != (float *******)0x0);
                }
                lVar47 = (uVar36 & 0xfffffffffffffffc) + (long)pppppppfVar35;
                if (3 < (long)uVar33) {
                  pauVar22 = (undefined1 (*) [16])
                             ((long)pppppfStack_360 +
                             (long)((long)pppppppfVar35 +
                                   (long)uStack_358 * ((long)pppppppfVar16 + lVar55)) * 4);
                  puVar25 = (undefined8 *)
                            ((long)pppppfStack_360 +
                            (long)uStack_358 * lVar39 + (long)pppppppfVar35 * 4);
                  pppppppfVar49 = pppppppfVar35;
                  do {
                    uVar6 = *puVar25;
                    uVar7 = puVar25[1];
                    auVar67 = *pauVar22;
                    puVar25[1] = auVar67._8_8_;
                    *puVar25 = auVar67._0_8_;
                    *(undefined8 *)((long)*pauVar22 + 8) = uVar7;
                    *(undefined8 *)*pauVar22 = uVar6;
                    pppppppfVar49 = (float *******)((long)pppppppfVar49 + 4);
                    pauVar22 = pauVar22 + 1;
                    puVar25 = puVar25 + 2;
                  } while ((long)pppppppfVar49 < lVar47);
                }
                if (lVar47 < (long)uStack_358) {
                  lVar47 = uVar33 - (uVar36 & 0xfffffffffffffffc);
                  pfVar18 = (float *)((long)pppppfStack_360 +
                                     ((long)pppppppfVar35 +
                                     ((long)uVar36 >> 2) * 4 +
                                     (long)uStack_358 * ((long)pppppppfVar16 + lVar55)) * 4);
                  pfVar29 = (float *)((long)pppppfStack_360 +
                                     ((long)uVar36 >> 2) * 0x10 + (long)pppppppfVar35 * 4 +
                                     (long)uStack_358 * lVar39);
                  do {
                    fVar57 = *pfVar18;
                    *pfVar18 = *pfVar29;
                    *pfVar29 = fVar57;
                    lVar47 = lVar47 + -1;
                    pfVar18 = pfVar18 + 1;
                    pfVar29 = pfVar29 + 1;
                  } while (lVar47 != 0);
                }
              }
              if (((bStack_317 & 1) != 0) || ((bStack_316 & 1) != 0)) {
                pfVar18 = (float *)((long)ppppppfStack_348 + (long)ppppppfStack_340 * lVar19 * 4);
                pppppppfVar49 = (float *******)((ulong)-((uint)pfVar18 >> 2) & 3);
                if ((long)ppppppfStack_340 <= (long)pppppppfVar49) {
                  pppppppfVar49 = (float *******)ppppppfStack_340;
                }
                pppppppfVar35 = (float *******)ppppppfStack_340;
                if (((ulong)pfVar18 & 3) == 0) {
                  pppppppfVar35 = pppppppfVar49;
                }
                uVar33 = (long)ppppppfStack_340 - (long)pppppppfVar35;
                uVar36 = uVar33 + 3;
                if ((long)pppppppfVar35 <= (long)ppppppfStack_340) {
                  uVar36 = uVar33;
                }
                if (0 < (long)pppppppfVar35) {
                  pfVar18 = (float *)((long)ppppppfStack_348 +
                                     (long)ppppppfStack_340 * ((long)pppppppfVar16 + lVar55) * 4);
                  pppppppfVar49 = pppppppfVar35;
                  pppppppfVar34 =
                       (float *******)((long)ppppppfStack_348 + (long)ppppppfStack_340 * lVar39);
                  do {
                    fVar57 = *pfVar18;
                    *pfVar18 = *(float *)pppppppfVar34;
                    *(float *)pppppppfVar34 = fVar57;
                    pppppppfVar49 = (float *******)((long)pppppppfVar49 + -1);
                    pfVar18 = pfVar18 + 1;
                    pppppppfVar34 = (float *******)((long)pppppppfVar34 + 4);
                  } while (pppppppfVar49 != (float *******)0x0);
                }
                lVar19 = (uVar36 & 0xfffffffffffffffc) + (long)pppppppfVar35;
                if (3 < (long)uVar33) {
                  pauVar22 = (undefined1 (*) [16])
                             ((long)ppppppfStack_348 +
                             (long)((long)pppppppfVar35 +
                                   (long)ppppppfStack_340 * ((long)pppppppfVar16 + lVar55)) * 4);
                  puVar25 = (undefined8 *)
                            ((long)ppppppfStack_348 +
                            (long)ppppppfStack_340 * lVar39 + (long)pppppppfVar35 * 4);
                  pppppppfVar49 = pppppppfVar35;
                  do {
                    uVar6 = *puVar25;
                    uVar7 = puVar25[1];
                    auVar67 = *pauVar22;
                    puVar25[1] = auVar67._8_8_;
                    *puVar25 = auVar67._0_8_;
                    *(undefined8 *)((long)*pauVar22 + 8) = uVar7;
                    *(undefined8 *)*pauVar22 = uVar6;
                    pppppppfVar49 = (float *******)((long)pppppppfVar49 + 4);
                    pauVar22 = pauVar22 + 1;
                    puVar25 = puVar25 + 2;
                  } while ((long)pppppppfVar49 < lVar19);
                }
                if (lVar19 < (long)ppppppfStack_340) {
                  lVar19 = uVar33 - (uVar36 & 0xfffffffffffffffc);
                  pfVar18 = (float *)((long)ppppppfStack_348 +
                                     ((long)pppppppfVar35 +
                                     ((long)uVar36 >> 2) * 4 +
                                     (long)ppppppfStack_340 * ((long)pppppppfVar16 + lVar55)) * 4);
                  pfVar29 = (float *)((long)ppppppfStack_348 +
                                     ((long)uVar36 >> 2) * 0x10 + (long)pppppppfVar35 * 4 +
                                     (long)ppppppfStack_340 * lVar39);
                  do {
                    fVar57 = *pfVar18;
                    *pfVar18 = *pfVar29;
                    *pfVar29 = fVar57;
                    lVar19 = lVar19 + -1;
                    pfVar18 = pfVar18 + 1;
                    pfVar29 = pfVar29 + 1;
                  } while (lVar19 != 0);
                }
              }
            }
          }
          pppppppfVar16 = (float *******)((long)pppppppfVar16 + 1);
          lVar26 = lVar26 + -1;
          lVar39 = lVar39 + 4;
          pppppppfVar49 = (float *******)ppppppfStack_310;
        } while ((long)pppppppfVar16 < (long)ppppppfStack_2f8);
      }
    }
    else {
      uStack_320 = 3;
      pppppppfVar49 = (float *******)ppppppfStack_310;
    }
    ppppppfStack_310 = (float ******)pppppppfVar49;
    uStack_31c = 1;
    _free(pfStack_3b0);
    pppppppfVar49 = uStack_358;
    ppppppfVar17 = (float ******)pppppfStack_360;
    FUN_109550fa8(&ppppppfStack_108,param_1,9);
    pfStack_3b0 = (float *)0x0;
    ppppppfStack_3a8 = (float ******)0x0;
    ppppppfStack_3a0 = (float ******)0x0;
    if (((float *******)ppppppfStack_120 != (float *******)0x0) || (iVar42 != 0)) {
      if ((iVar42 == 0) || ((float *******)ppppppfStack_120 == (float *******)0x0)) {
LAB_109550798:
        FUN_1093c3d54(&pfStack_3b0,(long)ppppppfStack_120 * (long)pppppppfVar52,ppppppfStack_120);
        goto LAB_1095507ac;
      }
      lVar39 = 0;
      if (pppppppfVar52 != (float *******)0x0) {
        lVar39 = 0x7fffffffffffffff / (long)pppppppfVar52;
      }
      if ((long)ppppppfStack_120 <= lVar39) goto LAB_109550798;
LAB_109550ec0:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109550ee0;
    }
LAB_1095507ac:
    pppppppfVar16 = uStack_358;
    ppppppfVar38 = ppppppfStack_3a0;
    ppppppfVar23 = ppppppfStack_3a8;
    if (((int)uVar3 < 1) ||
       (0x13 < (long)ppppppfStack_3a0 + (long)pppppppfVar53 + (long)ppppppfStack_3a8)) {
      if (0 < (long)ppppppfStack_3a8 * (long)ppppppfStack_3a0) {
        _bzero(pfStack_3b0,(long)ppppppfStack_3a8 * (long)ppppppfStack_3a0 * 4);
      }
      if ((((float *******)ppppppfStack_120 != (float *******)0x0) &&
          ((float *******)ppppppfStack_118 != (float *******)0x0)) && (iVar42 != 0)) {
        if ((float *******)ppppppfVar38 == (float *******)0x1) {
          if ((float *******)ppppppfStack_120 == (float *******)0x1) {
            if (uVar3 == 0) {
              fVar57 = 0.0;
            }
            else {
              fVar57 = *(float *)ppppppfStack_128 * *(float *)ppppppfVar17;
              if (1 < (int)uVar3) {
                lVar39 = (long)pppppppfVar53 + -1;
                do {
                  ppppppfStack_128 = (float ******)((long)ppppppfStack_128 + 4);
                  ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
                  fVar57 = fVar57 + *(float *)ppppppfStack_128 * *(float *)ppppppfVar17;
                  lVar39 = lVar39 + -1;
                } while (lVar39 != 0);
              }
            }
            *pfStack_3b0 = fVar57 + *pfStack_3b0;
          }
          else {
            uStack_e0 = (float *******)ppppppfStack_128;
            uStack_d8 = (float *******)ppppppfStack_120;
            uStack_398 = ppppppfVar17;
            ppppppfStack_390 = (float ******)0x1;
            FUN_10946ddac(ppppppfStack_120,ppppppfStack_118,&uStack_e0,&uStack_398,pfStack_3b0,1);
          }
        }
        else if ((float *******)ppppppfVar23 == (float *******)0x1) {
          if (iVar42 == 1) {
            if (uVar3 == 0) {
              fVar57 = 0.0;
            }
            else {
              fVar57 = *(float *)ppppppfStack_128 * *(float *)ppppppfVar17;
              if (1 < (int)uVar3) {
                lVar39 = (long)pppppppfVar53 + -1;
                pfVar18 = (float *)((long)ppppppfStack_128 + (long)ppppppfStack_120 * 4);
                do {
                  ppppppfVar17 = (float ******)((long)ppppppfVar17 + 4);
                  fVar57 = fVar57 + *pfVar18 * *(float *)ppppppfVar17;
                  pfVar18 = pfVar18 + (long)ppppppfStack_120;
                  lVar39 = lVar39 + -1;
                } while (lVar39 != 0);
              }
            }
            *pfStack_3b0 = fVar57 + *pfStack_3b0;
          }
          else {
            uStack_398 = ppppppfVar17;
            ppppppfStack_380 = &pppppfStack_360;
            ppppppfStack_378 = (float ******)0x0;
            ppppppfStack_370 = (float ******)0x0;
            ppppppfStack_368 = (float ******)pppppppfVar49;
            uStack_e0 = (float *******)ppppppfStack_128;
            ppppppfStack_d0 = ppppppfStack_118;
            ppppppfStack_c8 = ppppppfStack_128;
            ppppppfStack_c0 = ppppppfStack_120;
            ppppppfStack_b8 = ppppppfStack_118;
            uStack_a0 = 0;
            uStack_a8 = 0;
            uStack_98 = 1;
            ppppppfStack_390 = (float ******)pppppppfVar53;
            ppppppfStack_388 = (float ******)pppppppfVar52;
            FUN_109553b10(&uStack_398,&uStack_e0,pfStack_3b0,&pfStack_3b0);
          }
        }
        else {
          uStack_d8 = (float *******)0x0;
          uStack_e0 = (float *******)0x0;
          ppppppfStack_c0 = ppppppfStack_118;
          ppppppfStack_d0 = ppppppfVar23;
          ppppppfStack_c8 = ppppppfVar38;
          FUN_1093ecdf0(&ppppppfStack_c0,&ppppppfStack_d0,&ppppppfStack_c8,1);
          ppppppfStack_b8 = (float ******)((long)ppppppfStack_c0 * (long)ppppppfStack_d0);
          ppppppfStack_b0 = (float ******)((long)ppppppfStack_c8 * (long)ppppppfStack_c0);
          FUN_109540568(ppppppfStack_120,pppppppfVar52,ppppppfStack_118,ppppppfStack_128,
                        ppppppfStack_120,ppppppfVar17,uStack_358,pfStack_3b0,1,ppppppfStack_3a8,
                        &uStack_e0,0);
          _free(uStack_e0);
          _free(uStack_d8);
        }
      }
    }
    else {
      if ((ppppppfStack_3a8 != ppppppfStack_120) ||
         (pppppppfVar49 = (float *******)ppppppfStack_120, pppppppfVar35 = pppppppfVar52,
         (float *******)ppppppfStack_3a0 != pppppppfVar52)) {
        if ((iVar42 != 0) && ((float *******)ppppppfStack_120 != (float *******)0x0)) {
          lVar39 = 0;
          if (pppppppfVar52 != (float *******)0x0) {
            lVar39 = 0x7fffffffffffffff / (long)pppppppfVar52;
          }
          if (lVar39 < (long)ppppppfStack_120) goto LAB_109550ec0;
        }
        FUN_1093c3d54(&pfStack_3b0,(long)ppppppfStack_120 * (long)pppppppfVar52,ppppppfStack_120);
        pppppppfVar49 = (float *******)ppppppfStack_3a8;
        pppppppfVar35 = (float *******)ppppppfStack_3a0;
      }
      if (0 < (long)pppppppfVar35) {
        lVar39 = 0;
        pppppppfVar44 = (float *******)0x0;
        pppppppfVar34 = (float *******)0x0;
        pfVar18 = (float *)((long)ppppppfStack_128 + (long)ppppppfStack_120 * 4);
        ppppppfVar23 = ppppppfVar17;
        do {
          lVar26 = (long)pppppppfVar34 * (long)pppppppfVar49;
          if (0 < (long)pppppppfVar44) {
            pppppppfVar28 = (float *******)0x0;
            pfVar29 = pfVar18;
            do {
              fVar57 = *(float *)((long)ppppppfStack_128 + (long)pppppppfVar28 * 4) *
                       *(float *)((long)ppppppfVar17 + (long)uStack_358 * (long)pppppppfVar34 * 4);
              pfVar20 = pfVar29;
              pfVar15 = (float *)((long)ppppppfVar17 + (long)uStack_358 * lVar39 + 4);
              lVar19 = (long)pppppppfVar53 + -1;
              if (1 < uVar3) {
                do {
                  fVar57 = fVar57 + *pfVar20 * *pfVar15;
                  lVar19 = lVar19 + -1;
                  pfVar20 = pfVar20 + (long)ppppppfStack_120;
                  pfVar15 = pfVar15 + 1;
                } while (lVar19 != 0);
              }
              pfStack_3b0[(long)(lVar26 + (long)pppppppfVar28)] = fVar57;
              pppppppfVar28 = (float *******)((long)pppppppfVar28 + 1);
              pfVar29 = pfVar29 + 1;
            } while (pppppppfVar28 != pppppppfVar44);
          }
          uVar36 = (long)pppppppfVar49 - (long)pppppppfVar44;
          lVar19 = (uVar36 & 0xfffffffffffffffc) + (long)pppppppfVar44;
          if (3 < (long)uVar36) {
            pauVar22 = (undefined1 (*) [16])((long)ppppppfStack_128 + (long)pppppppfVar44 * 4);
            pppppppfVar28 = pppppppfVar44;
            do {
              auVar65 = ZEXT216(0);
              pauVar50 = pauVar22;
              ppppppfVar38 = ppppppfVar23;
              pppppppfVar40 = (float *******)ppppppfStack_118;
              auVar67 = auVar65;
              if (0 < (long)ppppppfStack_118) {
                do {
                  auVar66 = *pauVar50;
                  fVar57 = *(float *)ppppppfVar38;
                  auVar65._0_4_ = auVar67._0_4_ + auVar66._0_4_ * fVar57;
                  auVar65._4_4_ = auVar67._4_4_ + auVar66._4_4_ * fVar57;
                  auVar65._8_4_ = auVar67._8_4_ + auVar66._8_4_ * fVar57;
                  auVar65._12_4_ = auVar67._12_4_ + auVar66._12_4_ * fVar57;
                  pppppppfVar40 = (float *******)((long)pppppppfVar40 + -1);
                  pauVar50 = (undefined1 (*) [16])((long)*pauVar50 + ppppppfStack_120 * 4);
                  ppppppfVar38 = (float ******)((long)ppppppfVar38 + 4);
                  auVar67 = auVar65;
                } while (pppppppfVar40 != (float *******)0x0);
              }
              *(long *)(pfStack_3b0 + (long)(lVar26 + (long)pppppppfVar28) + 2) = auVar65._8_8_;
              *(long *)(pfStack_3b0 + (long)(lVar26 + (long)pppppppfVar28)) = auVar65._0_8_;
              pppppppfVar28 = (float *******)((long)pppppppfVar28 + 4);
              pauVar22 = pauVar22 + 1;
            } while ((long)pppppppfVar28 < lVar19);
          }
          if (lVar19 < (long)pppppppfVar49) {
            pfVar29 = (float *)((long)pfVar18 +
                               (uVar36 * 4 & 0xfffffffffffffff0) + (long)pppppppfVar44 * 4);
            do {
              fVar57 = *(float *)((long)ppppppfStack_128 + lVar19 * 4) *
                       *(float *)((long)ppppppfVar17 + (long)uStack_358 * (long)pppppppfVar34 * 4);
              pfVar20 = pfVar29;
              pfVar15 = (float *)((long)ppppppfVar17 + (long)uStack_358 * lVar39 + 4);
              lVar55 = (long)pppppppfVar53 + -1;
              if (1 < uVar3) {
                do {
                  fVar57 = fVar57 + *pfVar20 * *pfVar15;
                  lVar55 = lVar55 + -1;
                  pfVar20 = pfVar20 + (long)ppppppfStack_120;
                  pfVar15 = pfVar15 + 1;
                } while (lVar55 != 0);
              }
              pfStack_3b0[lVar26 + lVar19] = fVar57;
              lVar19 = lVar19 + 1;
              pfVar29 = pfVar29 + 1;
            } while (lVar19 < (long)pppppppfVar49);
          }
          uVar36 = (long)pppppppfVar44 + ((ulong)(uint)-(int)pppppppfVar49 & 3);
          pppppppfVar28 = (float *******)(uVar36 & 3);
          uVar36 = -uVar36;
          if (-1 < (long)uVar36) {
            pppppppfVar28 = (float *******)-(uVar36 & 3);
          }
          pppppppfVar44 = pppppppfVar49;
          if ((long)pppppppfVar28 <= (long)pppppppfVar49) {
            pppppppfVar44 = pppppppfVar28;
          }
          pppppppfVar34 = (float *******)((long)pppppppfVar34 + 1);
          lVar39 = lVar39 + 4;
          ppppppfVar23 = (float ******)((long)ppppppfVar23 + (long)pppppppfVar16 * 4);
        } while (pppppppfVar34 != pppppppfVar35);
      }
    }
    pppppfVar12 = pppppfStack_100;
    pppppppfVar53 = (float *******)ppppppfStack_108;
    uVar33 = CONCAT71(uStack_f7,uStack_f8) * (long)pppppfStack_100;
    uVar36 = (ulong)-((uint)ppppppfStack_108 >> 2) & 3;
    if ((long)uVar33 <= (long)uVar36) {
      uVar36 = uVar33;
    }
    uVar21 = uVar33;
    if (((ulong)ppppppfStack_108 & 3) == 0) {
      uVar21 = uVar36;
    }
    uVar32 = uVar33 - uVar21;
    uVar36 = uVar32 + 3;
    if ((long)uVar21 <= (long)uVar33) {
      uVar36 = uVar32;
    }
    pppppppfVar49 = (float *******)ppppppfStack_108;
    pfVar18 = pfStack_3b0;
    uVar41 = uVar21;
    if (0 < (long)uVar21) {
      do {
        *(float *)pppppppfVar49 = *pfVar18;
        uVar41 = uVar41 - 1;
        pppppppfVar49 = (float *******)((long)pppppppfVar49 + 4);
        pfVar18 = pfVar18 + 1;
      } while (uVar41 != 0);
    }
    lVar39 = (uVar36 & 0xfffffffffffffffc) + uVar21;
    if (3 < (long)uVar32) {
      pfVar18 = pfStack_3b0 + uVar21;
      uVar41 = uVar21;
      pfVar29 = (float *)((long)ppppppfStack_108 + uVar21 * 4);
      do {
        uVar6 = *(undefined8 *)pfVar18;
        *(undefined8 *)(pfVar29 + 2) = *(undefined8 *)(pfVar18 + 2);
        *(undefined8 *)pfVar29 = uVar6;
        uVar41 = uVar41 + 4;
        pfVar18 = pfVar18 + 4;
        pfVar29 = pfVar29 + 4;
      } while ((long)uVar41 < lVar39);
    }
    if (lVar39 < (long)uVar33) {
      lVar39 = uVar32 - (uVar36 & 0xfffffffffffffffc);
      pfVar18 = pfStack_3b0 + uVar21 + ((long)uVar36 >> 2) * 4;
      pfVar29 = (float *)((long)ppppppfStack_108 + (uVar21 + ((long)uVar36 >> 2) * 4) * 4);
      do {
        *pfVar29 = *pfVar18;
        lVar39 = lVar39 + -1;
        pfVar18 = pfVar18 + 1;
        pfVar29 = pfVar29 + 1;
      } while (lVar39 != 0);
    }
    _free(pfStack_3b0);
    if (0 < iVar42) {
      pppppppfVar49 = (float *******)0x0;
      do {
        func_0x00010954d990(&uStack_e0,param_1,5,pppppppfVar49);
        if (0 < *(int *)((long)param_1 + 0x1d4)) {
          lVar39 = 0;
          pppppppfVar35 = uStack_e0;
          pppppppfVar16 = uStack_e0;
          do {
            pppppppfVar44 = (float *******)((ulong)-((uint)pppppppfVar35 >> 2) & 3);
            pppppppfVar34 = (float *******)ppppppfStack_d0;
            if ((long)pppppppfVar44 <= (long)ppppppfStack_d0) {
              pppppppfVar34 = pppppppfVar44;
            }
            iVar42 = (int)param_1[0x3b];
            iVar31 = (int)lVar39;
            if (((ulong)uStack_e0 & 3) == 0) {
              pppppppfVar44 =
                   (float *******)
                   ((ulong)-((uint)((int)uStack_e0 + (int)ppppppfStack_d0 * iVar31 * 4) >> 2) & 3);
              if ((long)ppppppfStack_d0 <= (long)pppppppfVar44) {
                pppppppfVar44 = (float *******)ppppppfStack_d0;
              }
              if (0 < (long)pppppppfVar44) {
                pppppppfVar28 = (float *******)0x0;
                do {
                  *(float *)((long)pppppppfVar16 + (long)pppppppfVar28 * 4) =
                       *(float *)((long)pppppppfVar53 +
                                 ((long)(iVar42 * iVar31) + (long)pppppppfVar28) * 4);
                  pppppppfVar28 = (float *******)((long)pppppppfVar28 + 1);
                } while (pppppppfVar34 != pppppppfVar28);
              }
              lVar26 = ((long)ppppppfStack_d0 - (long)pppppppfVar44 & 0xfffffffffffffffcU) +
                       (long)pppppppfVar44;
              if (3 < (long)ppppppfStack_d0 - (long)pppppppfVar44) {
                lVar19 = (long)pppppppfVar34 << 2;
                do {
                  auVar67 = *(undefined1 (*) [16])
                             ((long)pppppppfVar53 + lVar19 + (long)(iVar42 * iVar31) * 4);
                  ((undefined8 *)((long)pppppppfVar16 + lVar19))[1] = auVar67._8_8_;
                  *(undefined8 *)((long)pppppppfVar16 + lVar19) = auVar67._0_8_;
                  pppppppfVar44 = (float *******)((long)pppppppfVar44 + 4);
                  lVar19 = lVar19 + 0x10;
                } while ((long)pppppppfVar44 < lVar26);
              }
              if (lVar26 < (long)ppppppfStack_d0) {
                do {
                  *(float *)((long)pppppppfVar16 + lVar26 * 4) =
                       *(float *)((long)pppppppfVar53 + (iVar42 * iVar31 + lVar26) * 4);
                  lVar26 = lVar26 + 1;
                } while (lVar26 < (long)ppppppfStack_d0);
              }
            }
            else if (0 < (long)ppppppfStack_d0) {
              pfVar18 = (float *)((long)pppppppfVar53 + (long)(iVar42 * iVar31) * 4);
              pppppppfVar44 = pppppppfVar16;
              pppppppfVar34 = (float *******)ppppppfStack_d0;
              do {
                *(float *)pppppppfVar44 = *pfVar18;
                pppppppfVar34 = (float *******)((long)pppppppfVar34 + -1);
                pfVar18 = pfVar18 + 1;
                pppppppfVar44 = (float *******)((long)pppppppfVar44 + 4);
              } while (pppppppfVar34 != (float *******)0x0);
            }
            lVar39 = lVar39 + 1;
            pppppppfVar16 = (float *******)((long)pppppppfVar16 + (long)ppppppfStack_d0 * 4);
            pppppppfVar35 = (float *******)((long)pppppppfVar35 + (long)ppppppfStack_d0 * 4);
          } while (lVar39 < *(int *)((long)param_1 + 0x1d4));
        }
        pppppppfVar49 = (float *******)((long)pppppppfVar49 + 1);
        pppppppfVar53 = (float *******)((long)pppppppfVar53 + (long)pppppfVar12 * 4);
      } while (pppppppfVar49 != pppppppfVar52);
    }
    FUN_10955102c(&pppppfStack_360);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar26 = 0;
    if ((float *******)ppppppfStack_118 != (float *******)0x0) {
      lVar26 = 0x7fffffffffffffff / (long)ppppppfStack_118;
    }
    if ((long)ppppppfStack_118 <= lVar26) {
      FUN_1093c3d54(&uStack_398,(long)ppppppfStack_118 * (long)ppppppfStack_118,ppppppfStack_118,
                    ppppppfStack_118);
      goto LAB_10954df70;
    }
  }
LAB_109550e78:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109550ee0:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x109550ee4);
  (*pcVar13)();
}



/* Entry: 109550fa8; end: 10955102b;  */

void FUN_109550fa8(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) | 2;
  uVar1 = *(ulong *)(lVar2 + 0x20);
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(lVar2 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    FUN_10934f79c();
    *(ulong *)(lVar2 + 0x20) = uVar1;
  }
  *param_1 = *(long *)(uVar1 + 0x18) + param_2[(param_3 & 0xffffffff) * 3 + 4] * 4;
  lVar2 = param_2[(param_3 & 0xffffffff) * 3 + 5];
  param_1[2] = (long)(int)((ulong)lVar2 >> 0x20);
  param_1[1] = (long)(int)lVar2;
  return;
}



/* Entry: 10955102c; end: 1095512ab;  */

undefined8 * FUN_10955102c(undefined8 *param_1)

{
  _free(param_1[0x3f]);
  _free(param_1[0x3d]);
  _free(param_1[0x37]);
  _free(param_1[0x35]);
  _free(param_1[0x33]);
  _free(param_1[0x31]);
  _free(param_1[0x2f]);
  _free(param_1[0x2d]);
  _free(param_1[0x2a]);
  _free(param_1[0x28]);
  _free(param_1[0x25]);
  _free(param_1[0x1f]);
  _free(param_1[0x1d]);
  _free(param_1[0x1b]);
  _free(param_1[0x19]);
  _free(param_1[0x17]);
  _free(param_1[0x15]);
  _free(param_1[0x12]);
  _free(param_1[0xf]);
  _free(param_1[6]);
  _free(param_1[3]);
  _free(*param_1);
  return param_1;
}



/* Entry: 1095512ac; end: 1095512ff;  */

undefined1  [16] FUN_1095512ac(float *param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar4;
  float fVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uVar3;
  ulong uVar5;
  
  fVar2 = *param_1;
  uVar3 = (ulong)(uint)fVar2;
  fVar4 = param_1[1];
  uVar5 = (ulong)(uint)fVar4;
  fVar6 = fVar2 * *param_2 - fVar4 * param_2[1];
  fVar2 = fVar4 * *param_2 + fVar2 * param_2[1];
  bVar1 = false;
  if ((NAN(fVar6)) && (bVar1 = true, !NAN(fVar2))) {
    bVar1 = false;
  }
  uVar7 = (ulong)(uint)fVar6;
  uVar8 = (ulong)(uint)fVar2;
  if (bVar1) {
    ___mulsc3();
    uVar7 = uVar3;
    uVar8 = uVar5;
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 109551300; end: 10955168f;  */

void FUN_109551300(long *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  code *pcVar8;
  float *pfVar9;
  undefined1 (*pauVar10) [16];
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  undefined1 (*pauVar15) [16];
  ulong uVar16;
  undefined8 *puVar17;
  float *pfVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  int iVar40;
  float fVar41;
  int iVar42;
  float afStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_3[1];
  pfVar18 = (float *)(uVar19 * 4);
  if (pfVar18 < (float *)0x20001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar9 = (float *)((long)afStack_70 - ((long)pfVar18 + 0x1eU & 0xfffffffffffffff0));
    if (pfVar9 == (float *)0x0) goto LAB_109551384;
    bVar7 = false;
  }
  else {
LAB_109551384:
    pfVar9 = pfVar18;
    _malloc();
    if (pfVar18 != (float *)0x0 && pfVar9 == (float *)0x0) goto LAB_109551668;
    bVar7 = true;
  }
  pauVar10 = (undefined1 (*) [16])*param_3;
  uVar11 = uVar19 + 3;
  if (-1 < (long)uVar19) {
    uVar11 = uVar19;
  }
  if (3 < (long)uVar19) {
    lVar14 = 0;
    auVar25 = NEON_fmov(0x3f800000,4);
    pfVar18 = pfVar9;
    pauVar15 = pauVar10;
    do {
      auVar30._8_4_ = 0x42b1722d;
      auVar30._0_8_ = 0x42b1722d42b1722d;
      auVar30._12_4_ = 0x42b1722d;
      auVar30 = NEON_fmin(*pauVar15,auVar30,4);
      auVar2._8_4_ = 0xc2b1722d;
      auVar2._0_8_ = 0xc2b1722dc2b1722d;
      auVar2._12_4_ = 0xc2b1722d;
      auVar30 = NEON_fmax(auVar30,auVar2,4);
      fVar35 = (float)(int)(auVar30._0_4_ * 1.442695 + 0.5);
      fVar37 = (float)(int)(auVar30._4_4_ * 1.442695 + 0.5);
      fVar39 = (float)(int)(auVar30._8_4_ * 1.442695 + 0.5);
      fVar41 = (float)(int)(auVar30._12_4_ * 1.442695 + 0.5);
      fVar29 = auVar30._0_4_ + fVar35 * -0.6933594 + fVar35 * 0.00021219444;
      fVar32 = auVar30._4_4_ + fVar37 * -0.6933594 + fVar37 * 0.00021219444;
      fVar33 = auVar30._8_4_ + fVar39 * -0.6933594 + fVar39 * 0.00021219444;
      fVar34 = auVar30._12_4_ + fVar41 * -0.6933594 + fVar41 * 0.00021219444;
      fVar24 = auVar25._0_4_;
      fVar26 = auVar25._4_4_;
      fVar27 = auVar25._8_4_;
      fVar28 = auVar25._12_4_;
      auVar4._8_4_ = 0xc38b0000;
      auVar4._0_8_ = 0xc38b0000c38b0000;
      auVar4._12_4_ = 0xc38b0000;
      auVar6._4_4_ = fVar37;
      auVar6._0_4_ = fVar35;
      auVar6._8_4_ = fVar39;
      auVar6._12_4_ = fVar41;
      auVar30 = NEON_fmax(auVar6,auVar4,4);
      auVar5._8_4_ = 0x438b0000;
      auVar5._0_8_ = 0x438b0000438b0000;
      auVar5._12_4_ = 0x438b0000;
      auVar30 = NEON_fmin(auVar30,auVar5,4);
      iVar36 = (int)auVar30._0_4_ >> 2;
      iVar38 = (int)auVar30._4_4_ >> 2;
      iVar40 = (int)auVar30._8_4_ >> 2;
      iVar42 = (int)auVar30._12_4_ >> 2;
      fVar35 = (float)(iVar36 * 0x800000 + (int)fVar24);
      fVar37 = (float)(iVar38 * 0x800000 + (int)fVar26);
      fVar39 = (float)(iVar40 * 0x800000 + (int)fVar27);
      fVar41 = (float)(iVar42 * 0x800000 + (int)fVar28);
      auVar31._0_4_ =
           (fVar29 + fVar24 +
           fVar29 * fVar29 *
           (fVar29 * (fVar29 * 0.041665796 + 0.16666666) + 0.5 +
           fVar29 * fVar29 * fVar29 *
           (fVar29 * (fVar29 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar35 * fVar35 *
           fVar35 * (float)(((int)auVar30._0_4_ + iVar36 * 0x1fd) * 0x800000 + (int)fVar24);
      auVar31._4_4_ =
           (fVar32 + fVar26 +
           fVar32 * fVar32 *
           (fVar32 * (fVar32 * 0.041665796 + 0.16666666) + 0.5 +
           fVar32 * fVar32 * fVar32 *
           (fVar32 * (fVar32 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar37 * fVar37 *
           fVar37 * (float)(((int)auVar30._4_4_ + iVar38 * 0x1fd) * 0x800000 + (int)fVar26);
      auVar31._8_4_ =
           (fVar33 + fVar27 +
           fVar33 * fVar33 *
           (fVar33 * (fVar33 * 0.041665796 + 0.16666666) + 0.5 +
           fVar33 * fVar33 * fVar33 *
           (fVar33 * (fVar33 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar39 * fVar39 *
           fVar39 * (float)(((int)auVar30._8_4_ + iVar40 * 0x1fd) * 0x800000 + (int)fVar27);
      auVar31._12_4_ =
           (fVar34 + fVar28 +
           fVar34 * fVar34 *
           (fVar34 * (fVar34 * 0.041665796 + 0.16666666) + 0.5 +
           fVar34 * fVar34 * fVar34 *
           (fVar34 * (fVar34 * 0.00019875691 + 0.0013981999) + 0.008333452))) * fVar41 * fVar41 *
           fVar41 * (float)(((int)auVar30._12_4_ + iVar42 * 0x1fd) * 0x800000 + (int)fVar28);
      auVar30 = NEON_fmax(auVar31,*pauVar15,4);
      *(long *)(pfVar18 + 2) = auVar30._8_8_;
      *(long *)pfVar18 = auVar30._0_8_;
      lVar14 = lVar14 + 4;
      pfVar18 = pfVar18 + 4;
      pauVar15 = pauVar15 + 1;
    } while (lVar14 < (long)(uVar11 & 0xfffffffffffffffc));
  }
  lVar14 = (long)uVar19 % 4;
  if (lVar14 != 0 && lVar14 < 0 == SBORROW8(uVar19,uVar11 & 0xfffffffffffffffc)) {
    pauVar10 = pauVar10 + ((long)uVar11 >> 2);
    pfVar18 = pfVar9 + ((long)uVar11 >> 2) * 4;
    do {
      fVar24 = *(float *)*pauVar10;
      _expf();
      *pfVar18 = fVar24;
      lVar14 = lVar14 + -1;
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + 4);
      pfVar18 = pfVar18 + 1;
    } while (lVar14 != 0);
  }
  lVar14 = param_1[1];
  if (0 < lVar14) {
    lVar20 = 0;
    lVar21 = 0;
    do {
      lVar22 = *param_1;
      uVar23 = param_1[2];
      uVar19 = lVar22 + uVar23 * lVar21 * 4;
      fVar24 = *(float *)(param_2 + lVar21 * 4);
      _expf();
      uVar11 = uVar23;
      if (((uVar19 & 3) == 0) &&
         (uVar11 = (ulong)-((uint)uVar19 >> 2) & 3, (long)uVar23 <= (long)uVar11)) {
        uVar11 = uVar23;
      }
      uVar1 = uVar23 - uVar11;
      uVar19 = uVar1 + 3;
      if ((long)uVar11 <= (long)uVar23) {
        uVar19 = uVar1;
      }
      if (0 < (long)uVar11) {
        pfVar18 = (float *)(lVar22 + uVar23 * lVar20);
        pfVar13 = pfVar9;
        uVar16 = uVar11;
        do {
          *pfVar18 = fVar24 * *pfVar13;
          uVar16 = uVar16 - 1;
          pfVar18 = pfVar18 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar16 != 0);
      }
      lVar12 = (uVar19 & 0xfffffffffffffffc) + uVar11;
      if (3 < (long)uVar1) {
        pfVar18 = pfVar9 + uVar11;
        puVar17 = (undefined8 *)(lVar22 + uVar23 * lVar20 + uVar11 * 4);
        uVar16 = uVar11;
        do {
          uVar3 = *(undefined8 *)pfVar18;
          puVar17[1] = CONCAT44((float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20) * fVar24,
                                (float)*(undefined8 *)(pfVar18 + 2) * fVar24);
          *puVar17 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar24,(float)uVar3 * fVar24);
          uVar16 = uVar16 + 4;
          pfVar18 = pfVar18 + 4;
          puVar17 = puVar17 + 2;
        } while ((long)uVar16 < lVar12);
      }
      if (lVar12 < (long)uVar23) {
        lVar12 = uVar1 - (uVar19 & 0xfffffffffffffffc);
        pfVar18 = pfVar9 + uVar11 + ((long)uVar19 >> 2) * 4;
        pfVar13 = (float *)(lVar22 + ((long)uVar19 >> 2) * 0x10 + uVar11 * 4 + uVar23 * lVar20);
        do {
          *pfVar13 = fVar24 * *pfVar18;
          lVar12 = lVar12 + -1;
          pfVar18 = pfVar18 + 1;
          pfVar13 = pfVar13 + 1;
        } while (lVar12 != 0);
      }
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 4;
    } while (lVar21 != lVar14);
  }
  if (bVar7) {
    _free(pfVar9);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
LAB_109551668:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10955168c);
  (*pcVar8)();
}



/* Entry: 109551690; end: 1095517e7;  */

undefined8
FUN_109551690(float param_1,long param_2,undefined1 *param_3,ulong param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  long lVar9;
  undefined *puVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong unaff_x19;
  undefined1 *puVar15;
  undefined1 *unaff_x23;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3e == 0) {
    puVar3 = *(undefined1 **)(param_2 + 0x20);
    puVar10 = *(undefined **)(param_2 + 0x28);
    puVar15 = *(undefined1 **)(param_2 + 0x30);
    fVar28 = *(float *)(param_2 + 0x18);
    unaff_x19 = param_4;
    if (param_3 == (undefined1 *)0x0) {
      param_3 = (undefined1 *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        param_3 = auStack_80 + -((ulong)(param_3 + 0x1e) & 0xfffffffffffffff0);
        unaff_x23 = param_3;
      }
      else {
        _malloc();
        unaff_x23 = param_3;
        if (param_3 == (undefined1 *)0x0) goto LAB_1095517a8;
      }
    }
    else {
      unaff_x23 = (undefined1 *)0x0;
    }
    param_1 = param_1 * fVar28;
    uVar17 = 0;
    uStack_70 = 1;
    puStack_78 = param_3;
    puStack_68 = puVar3;
    puStack_60 = puVar10;
    FUN_1093c55d4(param_1,puVar15,puVar10,&puStack_68,&puStack_78,param_5,1);
    if (0x8000 < param_4) {
      puVar15 = unaff_x23;
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return CONCAT44(uVar17,param_1);
    }
  }
  else {
LAB_1095517a8:
    puVar15 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar10 = PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x23);
  }
  __Unwind_Resume();
  puVar2 = puVar10 + 3;
  puVar5 = puVar10 + 7;
  if (-1 < (long)puVar10) {
    puVar2 = puVar10;
    puVar5 = puVar10;
  }
  lVar9 = *(long *)(puVar15 + 0x58);
  lVar7 = *(long *)(puVar15 + 0x40);
  fVar28 = *(float *)(puVar15 + 0xc);
  if (puVar10 + 3 < (undefined *)0x7) {
    pfVar11 = *(float **)(puVar15 + 0x60);
    fVar16 = fVar28 * *(float *)(*(long *)(puVar15 + 0x18) + lVar7 * 4 + lVar9 * 4) * *pfVar11;
    fVar18 = 0.0;
    if (1 < (long)puVar10) {
      puVar10 = puVar10 + -1;
      pfVar8 = (float *)(lVar9 * 4 + lVar7 * 4 + *(long *)(puVar15 + 0x18));
      do {
        pfVar8 = pfVar8 + 1;
        pfVar11 = pfVar11 + 1;
        fVar16 = fVar16 + fVar28 * *pfVar8 * *pfVar11;
        fVar18 = 0.0;
        puVar10 = puVar10 + -1;
      } while (puVar10 != (undefined *)0x0);
    }
  }
  else {
    lVar12 = *(long *)(puVar15 + 0x18);
    puVar1 = (undefined8 *)(lVar12 + lVar7 * 4 + lVar9 * 4);
    pfVar11 = *(float **)(puVar15 + 0x60);
    fVar18 = (float)*puVar1 * fVar28 * *pfVar11;
    fVar19 = (float)((ulong)*puVar1 >> 0x20) * fVar28 * pfVar11[1];
    fVar16 = (float)puVar1[1] * fVar28 * pfVar11[2];
    fVar20 = (float)((ulong)puVar1[1] >> 0x20) * fVar28 * pfVar11[3];
    if (7 < (long)puVar10) {
      uVar13 = (ulong)puVar5 & 0xfffffffffffffff8;
      fVar21 = *(float *)(puVar1 + 2) * fVar28 * (float)*(undefined8 *)(pfVar11 + 4);
      fVar23 = *(float *)((long)puVar1 + 0x14) * fVar28 *
               (float)((ulong)*(undefined8 *)(pfVar11 + 4) >> 0x20);
      fVar24 = *(float *)(puVar1 + 3) * fVar28 * (float)*(undefined8 *)(pfVar11 + 6);
      fVar25 = *(float *)((long)puVar1 + 0x1c) * fVar28 *
               (float)((ulong)*(undefined8 *)(pfVar11 + 6) >> 0x20);
      if ((undefined *)0xf < puVar10) {
        pfVar8 = pfVar11 + 0xc;
        puVar14 = (undefined8 *)(lVar9 * 4 + lVar7 * 4 + lVar12 + 0x30);
        lVar6 = 8;
        do {
          fVar18 = fVar18 + (float)puVar14[-2] * fVar28 * (float)*(undefined8 *)(pfVar8 + -4);
          fVar19 = fVar19 + (float)((ulong)puVar14[-2] >> 0x20) * fVar28 *
                            (float)((ulong)*(undefined8 *)(pfVar8 + -4) >> 0x20);
          fVar16 = fVar16 + (float)puVar14[-1] * fVar28 * (float)*(undefined8 *)(pfVar8 + -2);
          fVar20 = fVar20 + (float)((ulong)puVar14[-1] >> 0x20) * fVar28 *
                            (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
          fVar21 = fVar21 + (float)*puVar14 * fVar28 * (float)*(undefined8 *)pfVar8;
          fVar23 = fVar23 + (float)((ulong)*puVar14 >> 0x20) * fVar28 *
                            (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
          fVar24 = fVar24 + (float)puVar14[1] * fVar28 * (float)*(undefined8 *)(pfVar8 + 2);
          fVar25 = fVar25 + (float)((ulong)puVar14[1] >> 0x20) * fVar28 *
                            (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
          lVar6 = lVar6 + 8;
          pfVar8 = pfVar8 + 8;
          puVar14 = puVar14 + 4;
        } while (lVar6 < (long)uVar13);
      }
      fVar18 = fVar21 + fVar18;
      fVar19 = fVar23 + fVar19;
      fVar16 = fVar24 + fVar16;
      fVar20 = fVar25 + fVar20;
      if ((long)uVar13 < (long)((ulong)puVar2 & 0xfffffffffffffffc)) {
        pfVar8 = (float *)((long)puVar1 + uVar13 * 4);
        uVar27 = *(undefined8 *)(pfVar11 + uVar13 + 2);
        uVar26 = *(undefined8 *)(pfVar11 + uVar13);
        fVar18 = fVar18 + *pfVar8 * fVar28 * (float)uVar26;
        fVar19 = fVar19 + pfVar8[1] * fVar28 * (float)((ulong)uVar26 >> 0x20);
        fVar16 = fVar16 + pfVar8[2] * fVar28 * (float)uVar27;
        fVar20 = fVar20 + pfVar8[3] * fVar28 * (float)((ulong)uVar27 >> 0x20);
      }
    }
    auVar22._4_4_ = fVar19;
    auVar22._0_4_ = fVar18;
    auVar22._8_4_ = fVar16;
    auVar22._12_4_ = fVar20;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar18;
    auVar4._8_4_ = fVar16;
    auVar4._12_4_ = fVar20;
    auVar22 = NEON_ext(auVar22,auVar4,8,1);
    fVar18 = fVar18 + auVar22._0_4_;
    fVar19 = fVar19 + auVar22._4_4_;
    fVar16 = fVar18 + fVar19;
    fVar18 = fVar18 + fVar19;
    lVar6 = (long)puVar10 % 4;
    if (lVar6 != 0 && lVar6 < 0 == SBORROW8((long)puVar10,(ulong)puVar2 & 0xfffffffffffffffc)) {
      pfVar8 = (float *)(lVar12 + ((long)puVar2 >> 2) * 0x10 + lVar9 * 4 + lVar7 * 4);
      pfVar11 = pfVar11 + ((long)puVar2 >> 2) * 4;
      do {
        fVar16 = fVar16 + fVar28 * *pfVar8 * *pfVar11;
        fVar18 = 0.0;
        lVar6 = lVar6 + -1;
        pfVar8 = pfVar8 + 1;
        pfVar11 = pfVar11 + 1;
      } while (lVar6 != 0);
    }
  }
  return CONCAT44(fVar18,fVar16);
}



/* Entry: 1095517e8; end: 10955196b;  */

undefined8 FUN_1095517e8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar2 = param_2 + 3;
  uVar10 = param_2 + 7;
  if (-1 < (long)param_2) {
    uVar2 = param_2;
    uVar10 = param_2;
  }
  lVar7 = *(long *)(param_1 + 0x58);
  lVar5 = *(long *)(param_1 + 0x40);
  fVar16 = *(float *)(param_1 + 0xc);
  if (param_2 + 3 < 7) {
    pfVar9 = *(float **)(param_1 + 0x60);
    fVar12 = fVar16 * *(float *)(*(long *)(param_1 + 0x18) + lVar5 * 4 + lVar7 * 4) * *pfVar9;
    fVar13 = 0.0;
    if (1 < (long)param_2) {
      lVar8 = param_2 - 1;
      pfVar6 = (float *)(lVar7 * 4 + lVar5 * 4 + *(long *)(param_1 + 0x18));
      do {
        pfVar6 = pfVar6 + 1;
        pfVar9 = pfVar9 + 1;
        fVar12 = fVar12 + fVar16 * *pfVar6 * *pfVar9;
        fVar13 = 0.0;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    lVar8 = *(long *)(param_1 + 0x18);
    puVar1 = (undefined8 *)(lVar8 + lVar5 * 4 + lVar7 * 4);
    pfVar9 = *(float **)(param_1 + 0x60);
    fVar13 = (float)*puVar1 * fVar16 * *pfVar9;
    fVar14 = (float)((ulong)*puVar1 >> 0x20) * fVar16 * pfVar9[1];
    fVar12 = (float)puVar1[1] * fVar16 * pfVar9[2];
    fVar15 = (float)((ulong)puVar1[1] >> 0x20) * fVar16 * pfVar9[3];
    if (7 < (long)param_2) {
      uVar10 = uVar10 & 0xfffffffffffffff8;
      fVar17 = *(float *)(puVar1 + 2) * fVar16 * (float)*(undefined8 *)(pfVar9 + 4);
      fVar19 = *(float *)((long)puVar1 + 0x14) * fVar16 *
               (float)((ulong)*(undefined8 *)(pfVar9 + 4) >> 0x20);
      fVar20 = *(float *)(puVar1 + 3) * fVar16 * (float)*(undefined8 *)(pfVar9 + 6);
      fVar21 = *(float *)((long)puVar1 + 0x1c) * fVar16 *
               (float)((ulong)*(undefined8 *)(pfVar9 + 6) >> 0x20);
      if (0xf < param_2) {
        pfVar6 = pfVar9 + 0xc;
        puVar11 = (undefined8 *)(lVar7 * 4 + lVar5 * 4 + lVar8 + 0x30);
        lVar4 = 8;
        do {
          fVar13 = fVar13 + (float)puVar11[-2] * fVar16 * (float)*(undefined8 *)(pfVar6 + -4);
          fVar14 = fVar14 + (float)((ulong)puVar11[-2] >> 0x20) * fVar16 *
                            (float)((ulong)*(undefined8 *)(pfVar6 + -4) >> 0x20);
          fVar12 = fVar12 + (float)puVar11[-1] * fVar16 * (float)*(undefined8 *)(pfVar6 + -2);
          fVar15 = fVar15 + (float)((ulong)puVar11[-1] >> 0x20) * fVar16 *
                            (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20);
          fVar17 = fVar17 + (float)*puVar11 * fVar16 * (float)*(undefined8 *)pfVar6;
          fVar19 = fVar19 + (float)((ulong)*puVar11 >> 0x20) * fVar16 *
                            (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
          fVar20 = fVar20 + (float)puVar11[1] * fVar16 * (float)*(undefined8 *)(pfVar6 + 2);
          fVar21 = fVar21 + (float)((ulong)puVar11[1] >> 0x20) * fVar16 *
                            (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
          lVar4 = lVar4 + 8;
          pfVar6 = pfVar6 + 8;
          puVar11 = puVar11 + 4;
        } while (lVar4 < (long)uVar10);
      }
      fVar13 = fVar17 + fVar13;
      fVar14 = fVar19 + fVar14;
      fVar12 = fVar20 + fVar12;
      fVar15 = fVar21 + fVar15;
      if ((long)uVar10 < (long)(uVar2 & 0xfffffffffffffffc)) {
        pfVar6 = (float *)((long)puVar1 + uVar10 * 4);
        uVar23 = *(undefined8 *)(pfVar9 + uVar10 + 2);
        uVar22 = *(undefined8 *)(pfVar9 + uVar10);
        fVar13 = fVar13 + *pfVar6 * fVar16 * (float)uVar22;
        fVar14 = fVar14 + pfVar6[1] * fVar16 * (float)((ulong)uVar22 >> 0x20);
        fVar12 = fVar12 + pfVar6[2] * fVar16 * (float)uVar23;
        fVar15 = fVar15 + pfVar6[3] * fVar16 * (float)((ulong)uVar23 >> 0x20);
      }
    }
    auVar18._4_4_ = fVar14;
    auVar18._0_4_ = fVar13;
    auVar18._8_4_ = fVar12;
    auVar18._12_4_ = fVar15;
    auVar3._4_4_ = fVar14;
    auVar3._0_4_ = fVar13;
    auVar3._8_4_ = fVar12;
    auVar3._12_4_ = fVar15;
    auVar18 = NEON_ext(auVar18,auVar3,8,1);
    fVar13 = fVar13 + auVar18._0_4_;
    fVar14 = fVar14 + auVar18._4_4_;
    fVar12 = fVar13 + fVar14;
    fVar13 = fVar13 + fVar14;
    lVar4 = (long)param_2 % 4;
    if (lVar4 != 0 && lVar4 < 0 == SBORROW8(param_2,uVar2 & 0xfffffffffffffffc)) {
      pfVar6 = (float *)(lVar8 + ((long)uVar2 >> 2) * 0x10 + lVar7 * 4 + lVar5 * 4);
      pfVar9 = pfVar9 + ((long)uVar2 >> 2) * 4;
      do {
        fVar12 = fVar12 + fVar16 * *pfVar6 * *pfVar9;
        fVar13 = 0.0;
        lVar4 = lVar4 + -1;
        pfVar6 = pfVar6 + 1;
        pfVar9 = pfVar9 + 1;
      } while (lVar4 != 0);
    }
  }
  return CONCAT44(fVar13,fVar12);
}



/* Entry: 10955196c; end: 109551be3;  */

void FUN_10955196c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                  undefined4 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined4 uVar18;
  ulong auStack_d0 [5];
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar14 = param_1[2];
  auStack_d0[2] = (ulong)*(uint *)(param_2 + 0x18);
  auStack_d0[3] = 0;
  lVar3 = *(long *)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x28);
  lVar12 = *(long *)(param_2 + 0x48);
  lVar10 = *(long *)(param_2 + 0x50);
  uVar15 = *(ulong *)(param_2 + 0x60);
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  auStack_d0[1] = param_3;
  FUN_1093c61bc(&puStack_88,uVar15,1);
  if (uStack_80 != uVar15) {
    FUN_1093c61bc(&puStack_88,uVar15,1);
    uVar15 = uStack_80;
  }
  uVar6 = uStack_80;
  lVar10 = lVar10 + lVar12 * lVar5;
  uVar1 = uVar15 + 3;
  if (-1 < (long)uVar15) {
    uVar1 = uVar15;
  }
  fVar17 = (float)auStack_d0[2];
  if (3 < (long)uVar15) {
    lVar12 = 0;
    puVar8 = (undefined8 *)(lVar3 + lVar10 * 4);
    puVar13 = puStack_88;
    do {
      uVar16 = *puVar8;
      puVar13[1] = CONCAT44((float)((ulong)puVar8[1] >> 0x20) * fVar17,(float)puVar8[1] * fVar17);
      *puVar13 = CONCAT44((float)((ulong)uVar16 >> 0x20) * fVar17,(float)uVar16 * fVar17);
      lVar12 = lVar12 + 4;
      puVar8 = puVar8 + 2;
      puVar13 = puVar13 + 2;
    } while (lVar12 < (long)(uVar1 & 0xfffffffffffffffc));
  }
  lVar12 = (long)uVar15 % 4;
  if (lVar12 != 0 && lVar12 < 0 == SBORROW8(uVar15,uVar1 & 0xfffffffffffffffc)) {
    pfVar9 = (float *)(puStack_88 + ((long)uVar1 >> 2) * 2);
    pfVar11 = (float *)(lVar3 + ((long)uVar1 >> 2) * 0x10 + lVar10 * 4);
    do {
      *pfVar9 = fVar17 * *pfVar11;
      lVar12 = lVar12 + -1;
      pfVar9 = pfVar9 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar12 != 0);
  }
  if (uStack_80 >> 0x3e != 0) {
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
    goto LAB_109551bac;
  }
  uVar18 = *param_5;
  if (puStack_88 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)(uStack_80 << 2);
    if (uStack_80 < 0x8001) {
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      puVar8 = (undefined8 *)((long)auStack_d0 - ((long)puVar8 + 0x1eU & 0xfffffffffffffff0));
      puVar13 = puVar8;
      goto LAB_109551ae4;
    }
    _malloc();
    puVar13 = puVar8;
    if (puVar8 != (undefined8 *)0x0) goto LAB_109551ae4;
  }
  else {
    puVar8 = puStack_88;
    puVar13 = (undefined8 *)0x0;
LAB_109551ae4:
    uStack_a0 = 1;
    puStack_a8 = puVar8;
    uStack_98 = uVar2;
    uStack_90 = uVar4;
    FUN_1093c55d4(uVar18,uVar14,uVar4,&uStack_98,&puStack_a8,auStack_d0[1],
                  *(undefined8 *)(param_4 + 8));
    if (0x8000 < uVar6) {
      _free(puVar13);
    }
    _free(puStack_88);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return;
    }
    ___stack_chk_fail();
  }
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109551bac:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x109551bb0);
  (*pcVar7)();
}



/* Entry: 109551be4; end: 109551d6f;  */

undefined8 * FUN_109551be4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = 0;
    if (param_3 != 0) {
      lVar1 = 0x7fffffffffffffff / param_3;
    }
    if (lVar1 < param_2) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109551cfc);
      (*pcVar2)();
    }
  }
  FUN_1093c3d54(param_1,param_3 * param_2,param_2,param_3);
  param_1[3] = 0;
  param_1[4] = 0;
  lVar1 = param_3;
  if (param_2 <= param_3) {
    lVar1 = param_2;
  }
  FUN_1093c3de4(param_1 + 3,lVar1);
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x0001093c3f50(param_1 + 5,(long)(int)param_3);
  param_1[7] = 0;
  param_1[8] = 0;
  func_0x0001093c3fcc(param_1 + 7,param_3);
  param_1[9] = 0;
  param_1[10] = 0;
  func_0x0001093c4048(param_1 + 9,param_3);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  func_0x0001093c4048(param_1 + 0xb,param_3);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  func_0x0001093c4048(param_1 + 0xd,param_3);
  *(undefined2 *)(param_1 + 0xf) = 0;
  return param_1;
}



/* Entry: 109551d70; end: 109551f87;  */

void FUN_109551d70(long *param_1,long *param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  
  if (param_4 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(param_1 + 2) ^ 1;
  }
  uVar4 = param_1[3];
  if (((long)uVar4 >= 0x30 && param_2[2] != 1) && ((long)uVar4 < 0x30 || 0 < param_2[2])) {
    lVar2 = 0;
    uVar8 = 0;
    uVar3 = uVar4 + 1 >> 1;
    if (0x5f < uVar4) {
      uVar3 = 0x30;
    }
    do {
      if (*(byte *)(param_1 + 2) == 1) {
        uStack_60 = uVar8;
        uVar5 = uVar3 + uVar8;
        if ((long)uVar4 <= (long)(uVar3 + uVar8)) {
          uVar5 = uVar4;
        }
      }
      else {
        uVar5 = (uVar4 + lVar2) - uVar3;
        uStack_60 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
        uVar5 = uVar4 + lVar2;
      }
      lStack_78 = uVar5 - uStack_60;
      lStack_68 = param_1[4] + uStack_60;
      plStack_70 = (long *)*param_1;
      lStack_58 = plStack_70[1];
      lStack_88 = *plStack_70 + lStack_68 * 4 + lStack_58 * uStack_60 * 4;
      lStack_b8 = lStack_58 - lStack_68;
      lStack_90 = param_2[1];
      lStack_a0 = lStack_90 + (lStack_68 - lStack_58);
      bVar1 = (bVar6 & 1) == 0;
      lStack_98 = lStack_a0;
      if (bVar1) {
        lStack_98 = 0;
      }
      lStack_c0 = *param_2 + lStack_a0 * 4 + lStack_98 * lStack_90 * 4;
      lStack_b0 = lStack_b8;
      if (bVar1) {
        lStack_b0 = param_2[2];
      }
      plStack_a8 = param_2;
      lStack_80 = lStack_b8;
      FUN_1095527b8(&lStack_c0,&lStack_88,*(long *)param_1[1] + uStack_60 * 4,
                    *(byte *)(param_1 + 2) ^ 1);
      uVar4 = param_1[3];
      uVar8 = uVar8 + uVar3;
      lVar2 = lVar2 - uVar3;
    } while ((long)uVar8 < (long)uVar4);
  }
  else {
    func_0x0001093c4048(param_3);
    lVar2 = param_1[3];
    if (0 < lVar2) {
      lVar7 = 0;
      lVar9 = -1;
      do {
        lStack_98 = lVar7;
        if ((char)param_1[2] == '\0') {
          lStack_98 = lVar2 + lVar9;
        }
        plStack_a8 = (long *)*param_1;
        lStack_90 = plStack_a8[1];
        lStack_80 = lStack_90 - (param_1[4] + lStack_98);
        lStack_58 = param_2[1];
        lStack_78 = lStack_80;
        if ((bVar6 & 1) == 0) {
          lStack_78 = param_2[2];
        }
        lStack_68 = lStack_58 - lStack_80;
        uStack_60 = param_2[2] - lStack_78;
        lStack_88 = *param_2 + lStack_68 * 4 + uStack_60 * lStack_58 * 4;
        lStack_a0 = param_1[4] + lStack_98 + 1;
        lStack_b8 = lStack_90 - lStack_a0;
        lStack_c0 = *plStack_a8 + lStack_a0 * 4 + lStack_90 * lStack_98 * 4;
        plStack_70 = param_2;
        FUN_109551f88(&lStack_88,&lStack_c0,*(long *)param_1[1] + lStack_98 * 4,*param_3);
        lVar7 = lVar7 + 1;
        lVar2 = param_1[3];
        lVar9 = lVar9 + -1;
      } while (lVar7 < lVar2);
    }
  }
  return;
}



/* Entry: 109551f88; end: 1095523db;  */

void FUN_109551f88(float *******param_1,float *******param_2,float *param_3,float *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  float *****pppppfVar3;
  float ******ppppppfVar4;
  float ******ppppppfVar5;
  float ******ppppppfVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  code *pcVar10;
  float *******pppppppfVar11;
  float *******pppppppfVar12;
  float *pfVar13;
  float ******ppppppfVar14;
  float ******ppppppfVar15;
  undefined8 *puVar16;
  bool bVar17;
  float ******ppppppfVar18;
  ulong uVar19;
  float *****pppppfVar20;
  ulong uVar21;
  long lVar22;
  float *****pppppfVar23;
  long lVar24;
  float *pfVar25;
  float ******ppppppfVar26;
  float *unaff_x19;
  float ******unaff_x21;
  float *pfVar27;
  float *******unaff_x23;
  float *****pppppfVar28;
  float ******unaff_x24;
  float ******ppppppfVar29;
  float ******ppppppfVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar42;
  undefined8 uVar43;
  float *****pppppfStack_220;
  float ******ppppppfStack_218;
  undefined8 uStack_210;
  float *****pppppfStack_208;
  float ****ppppfStack_200;
  long lStack_1f8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  float *****pppppfStack_190;
  float *****pppppfStack_188;
  float *****pppppfStack_180;
  float ******ppppppfStack_178;
  float *pfStack_170;
  float ******ppppppfStack_168;
  undefined1 auStack_159 [9];
  float ******ppppppfStack_150;
  float *****pppppfStack_148;
  undefined8 uStack_140;
  float ******ppppppfStack_138;
  float *****pppppfStack_130;
  float *****pppppfStack_128;
  float *****pppppfStack_120;
  float *****pppppfStack_118;
  float *****pppppfStack_110;
  float *****pppppfStack_108;
  undefined8 uStack_100;
  float *pfStack_f8;
  float ****ppppfStack_f0;
  float *****pppppfStack_e8;
  float ******ppppppfStack_d8;
  ulong uStack_d0;
  float *****pppppfStack_c8;
  float *****pppppfStack_c0;
  float *****pppppfStack_b8;
  float *****pppppfStack_b0;
  float *****pppppfStack_a8;
  float *****pppppfStack_a0;
  float *****pppppfStack_98;
  float *****pppppfStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float ****ppppfStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppfVar30 = param_1[1];
  fVar31 = *param_3;
  uVar7 = (long)ppppppfVar30 - 1;
  if (uVar7 == 0) {
    fVar31 = 1.0 - fVar31;
    ppppppfStack_d8 = *param_1;
    pppppfStack_c8 = param_1[3][1];
    pppppfStack_148 = (float *****)(auStack_159 + 1);
    uStack_140 = (float ******)auStack_159;
    pppppppfVar11 = &ppppppfStack_150;
    auStack_159._1_4_ = fVar31;
    ppppppfStack_150 = (float ******)&ppppppfStack_d8;
    ppppppfStack_138 = (float ******)param_1;
    func_0x0001093c4f40();
  }
  else {
    pppppppfVar11 = param_1;
    if (fVar31 != 0.0) {
      pppppfStack_a8 = (float *****)param_1[3];
      pppppfStack_b0 = (float *****)param_1[2];
      pppppfStack_a0 = (float *****)param_1[4];
      pppppfStack_98 = (float *****)param_1[5];
      pppppfStack_b8 = (float *****)param_1[1];
      pppppfStack_c0 = (float *****)*param_1;
      ppppppfVar29 = param_1[2];
      pppppfStack_190 = (float *****)*param_1;
      ppppppfStack_178 = (float ******)((long)pppppfStack_190 + 4);
      pppppfStack_90 = (float *****)param_1[6];
      uStack_80 = 0;
      uStack_88 = 1;
      ppppfStack_78 = pppppfStack_a8[1];
      pppppfStack_180 = (float *****)*param_2;
      pppppfStack_188 = (float *****)param_2[1];
      ppppppfVar18 = (float ******)((ulong)-((uint)param_4 >> 2) & 3);
      if ((long)ppppppfVar29 <= (long)ppppppfVar18) {
        ppppppfVar18 = ppppppfVar29;
      }
      ppppppfVar15 = ppppppfVar29;
      if (((ulong)param_4 & 3) == 0) {
        ppppppfVar15 = ppppppfVar18;
      }
      unaff_x24 = (float ******)((long)ppppppfVar29 - (long)ppppppfVar15);
      unaff_x21 = (float ******)((long)unaff_x24 + 3);
      if (-1 < (long)unaff_x24) {
        unaff_x21 = unaff_x24;
      }
      unaff_x23 = (float *******)((ulong)unaff_x21 & 0xfffffffffffffffc);
      pfStack_170 = param_3;
      ppppppfStack_168 = (float ******)param_2;
      ppppppfStack_d8 = ppppppfStack_178;
      uStack_d0 = uVar7;
      pppppfStack_c8 = (float *****)ppppppfVar29;
      if (0 < (long)ppppppfVar15) {
        _bzero(param_4,(long)ppppppfVar15 << 2);
      }
      puVar1 = (undefined1 *)((long)unaff_x23 + (long)ppppppfVar15);
      if (3 < (long)unaff_x24) {
        puVar2 = puVar1;
        if ((long)puVar1 <= (long)((long)ppppppfVar15 + 4U)) {
          puVar2 = (undefined1 *)((long)ppppppfVar15 + 4U);
        }
        _bzero(param_4 + (long)ppppppfVar15,
               ((ulong)(puVar2 + ~(ulong)ppppppfVar15) & 0x3ffffffffffffffc) * 4 + 0x10);
      }
      if ((long)puVar1 < (long)ppppppfVar29) {
        _bzero(param_4 + (long)((long)ppppppfVar15 + ((long)unaff_x21 >> 2) * 4),
               ((long)unaff_x24 % 4) * 4);
      }
      ppppppfVar15 = ppppppfStack_168;
      pfVar27 = param_4;
      ppppppfVar18 = ppppppfVar29;
      if (ppppppfVar29 == (float ******)0x1) {
        if (uVar7 == 0) {
          fVar31 = 0.0;
        }
        else {
          uVar8 = (long)ppppppfVar30 + 2;
          uVar21 = (long)ppppppfVar30 + 6;
          if (-1 < (long)uVar7) {
            uVar8 = uVar7;
            uVar21 = uVar7;
          }
          if ((long)ppppppfVar30 + 2U < 7) {
            fVar31 = *(float *)pppppfStack_180 * *(float *)ppppppfStack_178;
            if (2 < (long)ppppppfVar30) {
              lVar22 = (long)ppppppfVar30 - 2;
              ppppppfVar26 = (float ******)(pppppfStack_190 + 1);
              ppppppfVar30 = (float ******)pppppfStack_180;
              do {
                ppppppfVar30 = (float ******)((long)ppppppfVar30 + 4);
                fVar31 = fVar31 + *(float *)ppppppfVar30 * *(float *)ppppppfVar26;
                lVar22 = lVar22 + -1;
                ppppppfVar26 = (float ******)((long)ppppppfVar26 + 4);
              } while (lVar22 != 0);
            }
          }
          else {
            uVar19 = uVar8 & 0xfffffffffffffffc;
            fVar31 = SUB84(*pppppfStack_180,0) * *(float *)ppppppfStack_178;
            fVar32 = (float)((ulong)*pppppfStack_180 >> 0x20) *
                     *(float *)((long)ppppppfStack_178 + 4);
            fVar33 = SUB84(pppppfStack_180[1],0) * *(float *)(ppppppfStack_178 + 1);
            fVar34 = (float)((ulong)pppppfStack_180[1] >> 0x20) *
                     *(float *)((long)ppppppfStack_178 + 0xc);
            if (8 < (long)ppppppfVar30) {
              uVar21 = uVar21 & 0xfffffffffffffff8;
              fVar35 = *(float *)(pppppfStack_180 + 2) *
                       (float)*(undefined8 *)((long)pppppfStack_190 + 0x14);
              fVar39 = *(float *)((long)pppppfStack_180 + 0x14) *
                       (float)((ulong)*(undefined8 *)((long)pppppfStack_190 + 0x14) >> 0x20);
              fVar40 = *(float *)(pppppfStack_180 + 3) *
                       (float)*(undefined8 *)((long)pppppfStack_190 + 0x1c);
              fVar41 = *(float *)((long)pppppfStack_180 + 0x1c) *
                       (float)((ulong)*(undefined8 *)((long)pppppfStack_190 + 0x1c) >> 0x20);
              if (0xf < uVar7) {
                puVar16 = (undefined8 *)((long)pppppfStack_190 + 0x34);
                ppppppfVar26 = (float ******)(pppppfStack_180 + 6);
                lVar22 = 8;
                do {
                  fVar31 = fVar31 + SUB84(ppppppfVar26[-2],0) * (float)puVar16[-2];
                  fVar32 = fVar32 + (float)((ulong)ppppppfVar26[-2] >> 0x20) *
                                    (float)((ulong)puVar16[-2] >> 0x20);
                  fVar33 = fVar33 + SUB84(ppppppfVar26[-1],0) * (float)puVar16[-1];
                  fVar34 = fVar34 + (float)((ulong)ppppppfVar26[-1] >> 0x20) *
                                    (float)((ulong)puVar16[-1] >> 0x20);
                  fVar35 = fVar35 + SUB84(*ppppppfVar26,0) * (float)*puVar16;
                  fVar39 = fVar39 + (float)((ulong)*ppppppfVar26 >> 0x20) *
                                    (float)((ulong)*puVar16 >> 0x20);
                  fVar40 = fVar40 + SUB84(ppppppfVar26[1],0) * (float)puVar16[1];
                  fVar41 = fVar41 + (float)((ulong)ppppppfVar26[1] >> 0x20) *
                                    (float)((ulong)puVar16[1] >> 0x20);
                  lVar22 = lVar22 + 8;
                  puVar16 = puVar16 + 4;
                  ppppppfVar26 = ppppppfVar26 + 4;
                } while (lVar22 < (long)uVar21);
              }
              fVar31 = fVar35 + fVar31;
              fVar32 = fVar39 + fVar32;
              fVar33 = fVar40 + fVar33;
              fVar34 = fVar41 + fVar34;
              if ((long)uVar21 < (long)uVar19) {
                pfVar13 = (float *)((long)pppppfStack_180 + uVar21 * 4);
                pfVar25 = (float *)((long)ppppppfStack_178 + uVar21 * 4);
                uVar43 = *(undefined8 *)(pfVar25 + 2);
                uVar42 = *(undefined8 *)pfVar25;
                fVar31 = fVar31 + *pfVar13 * (float)uVar42;
                fVar32 = fVar32 + pfVar13[1] * (float)((ulong)uVar42 >> 0x20);
                fVar33 = fVar33 + pfVar13[2] * (float)uVar43;
                fVar34 = fVar34 + pfVar13[3] * (float)((ulong)uVar43 >> 0x20);
              }
            }
            auVar36._4_4_ = fVar32;
            auVar36._0_4_ = fVar31;
            auVar36._8_4_ = fVar33;
            auVar36._12_4_ = fVar34;
            auVar9._4_4_ = fVar32;
            auVar9._0_4_ = fVar31;
            auVar9._8_4_ = fVar33;
            auVar9._12_4_ = fVar34;
            auVar36 = NEON_ext(auVar36,auVar9,8,1);
            fVar31 = fVar31 + auVar36._0_4_ + fVar32 + auVar36._4_4_;
            if ((long)uVar19 < (long)uVar7) {
              lVar22 = ~uVar19 + (long)ppppppfVar30;
              ppppppfVar30 = (float ******)(pppppfStack_190 + ((long)uVar8 >> 2) * 2);
              ppppppfVar26 = (float ******)(pppppfStack_180 + ((long)uVar8 >> 2) * 2);
              do {
                ppppppfVar30 = (float ******)((long)ppppppfVar30 + 4);
                fVar31 = fVar31 + *(float *)ppppppfVar26 * *(float *)ppppppfVar30;
                lVar22 = lVar22 + -1;
                ppppppfVar26 = (float ******)((long)ppppppfVar26 + 4);
              } while (lVar22 != 0);
            }
          }
        }
        *param_4 = fVar31 + *param_4;
        ppppppfVar30 = *param_1;
        pppppfVar28 = param_1[3][1];
        ppppppfVar26 = ppppppfVar30;
LAB_1095522fc:
        do {
          *pfVar27 = *(float *)ppppppfVar26 + *pfVar27;
          ppppppfVar18 = (float ******)((long)ppppppfVar18 - 1);
          pfVar27 = pfVar27 + 1;
          ppppppfVar26 = (float ******)((long)ppppppfVar26 + (long)pppppfVar28 * 4);
        } while (ppppppfVar18 != (float ******)0x0);
        pppppfVar28 = param_1[3][1];
      }
      else {
        ppppppfStack_150 = ppppppfStack_178;
        pppppfStack_120 = pppppfStack_a8;
        pppppfStack_128 = pppppfStack_b0;
        pppppfStack_110 = pppppfStack_98;
        pppppfStack_118 = pppppfStack_a0;
        uStack_100 = uStack_88;
        pppppfStack_108 = pppppfStack_90;
        ppppfStack_f0 = ppppfStack_78;
        pfStack_f8 = (float *)uStack_80;
        pppppfStack_130 = pppppfStack_b8;
        ppppppfStack_138 = (float ******)pppppfStack_c0;
        pppppfStack_148 = (float *****)uVar7;
        uStack_140 = ppppppfVar29;
        FUN_1095523dc(0x3f800000,&ppppppfStack_150,pppppfStack_180,pppppfStack_188,param_4);
        ppppppfVar30 = *param_1;
        pppppfVar28 = param_1[3][1];
        ppppppfVar26 = ppppppfVar30;
        if (0 < (long)ppppppfVar29) goto LAB_1095522fc;
      }
      fVar31 = *pfStack_170;
      ppppppfVar18 = param_1[2];
      pfVar27 = param_4;
      if (0 < (long)ppppppfVar18) {
        do {
          *(float *)ppppppfVar30 = *(float *)ppppppfVar30 - fVar31 * *pfVar27;
          ppppppfVar30 = (float ******)((long)ppppppfVar30 + (long)pppppfVar28 * 4);
          ppppppfVar18 = (float ******)((long)ppppppfVar18 - 1);
          pfVar27 = pfVar27 + 1;
        } while (ppppppfVar18 != (float ******)0x0);
        fVar31 = *pfStack_170;
      }
      pppppfStack_148 = ppppppfVar15[1];
      pppppfStack_130 = ppppppfVar15[1];
      ppppppfStack_138 = (float ******)*ppppppfVar15;
      pppppfStack_128 = ppppppfVar15[2];
      pppppfStack_120 = ppppppfVar15[3];
      pppppfStack_110 = ppppppfVar15[5];
      pppppfStack_118 = ppppppfVar15[4];
      pppppfStack_108 = ppppppfVar15[6];
      uStack_140 = (float ******)CONCAT44(fVar31,(undefined4)uStack_140);
      pppppppfVar11 = &ppppppfStack_d8;
      param_2 = &ppppppfStack_150;
      param_3 = param_4;
      pfStack_f8 = param_4;
      pppppfStack_e8 = (float *****)ppppppfVar29;
      FUN_109552540();
      unaff_x19 = param_4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_1a0 = &stack0xfffffffffffffff0;
  pcStack_198 = FUN_1095523dc;
  ppppppfVar30 = &pppppfStack_220;
  ppppppfVar18 = &pppppfStack_220;
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_3 >> 0x3e == 0) {
    unaff_x24 = *pppppppfVar11;
    unaff_x21 = pppppppfVar11[1];
    param_1 = (float *******)pppppppfVar11[2];
    ppppppfVar29 = pppppppfVar11[6];
    unaff_x19 = param_3;
    if (param_2 == (float *******)0x0) {
      param_2 = (float *******)((long)param_3 << 2);
      if (param_3 < (float *)0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar22 = -((long)param_2 + 0x1eU & 0xfffffffffffffff0);
        ppppppfVar30 = (float ******)((long)&pppppfStack_220 + lVar22);
        param_2 = (float *******)((long)&pppppfStack_220 + lVar22);
        unaff_x23 = param_2;
      }
      else {
        _malloc();
        unaff_x23 = param_2;
        if (param_2 == (float *******)0x0) goto LAB_109552500;
      }
    }
    else {
      ppppppfVar30 = &pppppfStack_220;
      unaff_x23 = (float *******)0x0;
    }
    ppppfStack_200 = (float ****)ppppppfVar29[1];
    uStack_210 = 1;
    ppppppfVar15 = &pppppfStack_208;
    pppppppfVar11 = param_1;
    ppppppfVar29 = unaff_x21;
    ppppppfStack_218 = (float ******)param_2;
    pppppfStack_208 = (float *****)unaff_x24;
    FUN_1093c55d4(fVar31);
    if ((float *)0x8000 < param_3) {
      pppppppfVar11 = unaff_x23;
      _free();
    }
    ppppppfVar18 = ppppppfVar30;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
      return;
    }
  }
  else {
LAB_109552500:
    pppppppfVar11 = (float *******)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ppppppfVar29 = (float ******)PTR___ZTISt9bad_alloc_110346a68;
    ppppppfVar15 = (float ******)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if ((float *)0x8000 < unaff_x19) {
    _free(unaff_x23);
  }
  pppppppfVar12 = pppppppfVar11;
  __Unwind_Resume();
  *(float *******)((long)ppppppfVar18 + -0x40) = unaff_x24;
  *(float ********)((long)ppppppfVar18 + -0x38) = unaff_x23;
  *(float ********)((long)ppppppfVar18 + -0x30) = param_1;
  *(float *******)((long)ppppppfVar18 + -0x28) = unaff_x21;
  *(float ********)((long)ppppppfVar18 + -0x20) = pppppppfVar11;
  *(float **)((long)ppppppfVar18 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)ppppppfVar18 + -0x10) = &puStack_1a0;
  *(code **)((long)ppppppfVar18 + -8) = FUN_109552540;
  *(undefined8 *)((long)ppppppfVar18 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppppfVar28 = ppppppfVar29[4];
  pfVar27 = (float *)((long)pppppfVar28 * 4);
  if (pfVar27 < (float *)0x20001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar13 = (float *)((long)ppppppfVar18 +
                       (-0x50 - ((ulong)((long)pfVar27 + 0x1eU) & 0xfffffffffffffff0)));
    if (pfVar13 == (float *)0x0) goto LAB_1095525bc;
    bVar17 = false;
  }
  else {
LAB_1095525bc:
    pfVar13 = pfVar27;
    _malloc();
    if (pfVar27 != (float *)0x0 && pfVar13 == (float *)0x0) goto LAB_109552790;
    bVar17 = true;
  }
  fVar31 = *(float *)((long)ppppppfVar29 + 0x14);
  pppppfVar20 = ppppppfVar29[3];
  pppppfVar3 = (float *****)((long)pppppfVar28 + 3);
  if (-1 < (long)pppppfVar28) {
    pppppfVar3 = pppppfVar28;
  }
  if (3 < (long)pppppfVar28) {
    lVar22 = 0;
    pfVar27 = pfVar13;
    pppppfVar23 = pppppfVar20;
    do {
      auVar37._0_8_ =
           CONCAT44(*(float *)((long)pppppfVar23 + 4) * fVar31,*(float *)pppppfVar23 * fVar31);
      auVar37._8_4_ = *(float *)(pppppfVar23 + 1) * fVar31;
      auVar37._12_4_ = *(float *)((long)pppppfVar23 + 0xc) * fVar31;
      *(long *)(pfVar27 + 2) = auVar37._8_8_;
      *(undefined8 *)pfVar27 = auVar37._0_8_;
      lVar22 = lVar22 + 4;
      pfVar27 = pfVar27 + 4;
      pppppfVar23 = pppppfVar23 + 2;
    } while (lVar22 < (long)((ulong)pppppfVar3 & 0xfffffffffffffffc));
  }
  lVar22 = (long)pppppfVar28 % 4;
  if (lVar22 != 0 &&
      lVar22 < 0 == SBORROW8((long)pppppfVar28,(ulong)pppppfVar3 & 0xfffffffffffffffc)) {
    pppppfVar28 = pppppfVar20 + ((long)pppppfVar3 >> 2) * 2;
    pfVar27 = pfVar13 + ((long)pppppfVar3 >> 2) * 4;
    do {
      *pfVar27 = fVar31 * *(float *)pppppfVar28;
      lVar22 = lVar22 + -1;
      pppppfVar28 = (float *****)((long)pppppfVar28 + 4);
      pfVar27 = pfVar27 + 1;
    } while (lVar22 != 0);
  }
  ppppppfVar30 = pppppppfVar12[2];
  if (0 < (long)ppppppfVar30) {
    lVar22 = 0;
    ppppppfVar29 = (float ******)0x0;
    do {
      pppppfVar28 = pppppppfVar12[6][1];
      ppppppfVar5 = *pppppppfVar12;
      ppppppfVar6 = pppppppfVar12[1];
      uVar7 = (long)ppppppfVar5 + (long)pppppfVar28 * (long)ppppppfVar29 * 4;
      fVar31 = *(float *)((long)ppppppfVar15 + (long)ppppppfVar29 * 4);
      ppppppfVar26 = (float ******)((ulong)-((uint)uVar7 >> 2) & 3);
      if ((long)ppppppfVar6 <= (long)ppppppfVar26) {
        ppppppfVar26 = ppppppfVar6;
      }
      ppppppfVar4 = ppppppfVar6;
      if ((uVar7 & 3) == 0) {
        ppppppfVar4 = ppppppfVar26;
      }
      uVar8 = (long)ppppppfVar6 - (long)ppppppfVar4;
      uVar7 = uVar8 + 3;
      if ((long)ppppppfVar4 <= (long)ppppppfVar6) {
        uVar7 = uVar8;
      }
      if (0 < (long)ppppppfVar4) {
        ppppppfVar14 = (float ******)((long)ppppppfVar5 + (long)pppppfVar28 * lVar22);
        pfVar27 = pfVar13;
        ppppppfVar26 = ppppppfVar4;
        do {
          *(float *)ppppppfVar14 = *(float *)ppppppfVar14 - fVar31 * *pfVar27;
          ppppppfVar26 = (float ******)((long)ppppppfVar26 - 1);
          ppppppfVar14 = (float ******)((long)ppppppfVar14 + 4);
          pfVar27 = pfVar27 + 1;
        } while (ppppppfVar26 != (float ******)0x0);
      }
      lVar24 = (uVar7 & 0xfffffffffffffffc) + (long)ppppppfVar4;
      if (3 < (long)uVar8) {
        pfVar27 = pfVar13 + (long)ppppppfVar4;
        puVar16 = (undefined8 *)
                  ((long)ppppppfVar5 + (long)pppppfVar28 * lVar22 + (long)ppppppfVar4 * 4);
        ppppppfVar26 = ppppppfVar4;
        do {
          auVar38._0_8_ =
               CONCAT44((float)((ulong)*puVar16 >> 0x20) - pfVar27[1] * fVar31,
                        (float)*puVar16 - *pfVar27 * fVar31);
          auVar38._8_4_ = (float)puVar16[1] - pfVar27[2] * fVar31;
          auVar38._12_4_ = (float)((ulong)puVar16[1] >> 0x20) - pfVar27[3] * fVar31;
          puVar16[1] = auVar38._8_8_;
          *puVar16 = auVar38._0_8_;
          ppppppfVar26 = (float ******)((long)ppppppfVar26 + 4);
          pfVar27 = pfVar27 + 4;
          puVar16 = puVar16 + 2;
        } while ((long)ppppppfVar26 < lVar24);
      }
      if (lVar24 < (long)ppppppfVar6) {
        lVar24 = uVar8 - (uVar7 & 0xfffffffffffffffc);
        pfVar27 = (float *)((long)ppppppfVar5 +
                           ((long)uVar7 >> 2) * 0x10 + (long)ppppppfVar4 * 4 +
                           (long)pppppfVar28 * lVar22);
        pfVar25 = pfVar13 + (long)ppppppfVar4 + ((long)uVar7 >> 2) * 4;
        do {
          *pfVar27 = *pfVar27 - fVar31 * *pfVar25;
          lVar24 = lVar24 + -1;
          pfVar27 = pfVar27 + 1;
          pfVar25 = pfVar25 + 1;
        } while (lVar24 != 0);
      }
      ppppppfVar29 = (float ******)((long)ppppppfVar29 + 1);
      lVar22 = lVar22 + 4;
    } while (ppppppfVar29 != ppppppfVar30);
  }
  if (bVar17) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppppppfVar18 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
LAB_109552790:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1095527b4);
  (*pcVar10)();
}



/* Entry: 1095523dc; end: 10955253f;  */

void FUN_1095523dc(undefined8 param_1,undefined8 *param_2,long *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  float *pfVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  bool bVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  ulong unaff_x19;
  undefined *unaff_x21;
  long *unaff_x22;
  float *pfVar21;
  long *unaff_x23;
  ulong uVar22;
  undefined8 unaff_x24;
  long lVar23;
  float fVar24;
  undefined8 uVar25;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  plVar5 = &lStack_90;
  plVar6 = &lStack_90;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_4 >> 0x3e == 0) {
    unaff_x24 = *param_2;
    unaff_x21 = (undefined *)param_2[1];
    unaff_x22 = (long *)param_2[2];
    lVar23 = param_2[6];
    unaff_x19 = param_4;
    if (param_3 == (long *)0x0) {
      param_3 = (long *)(param_4 << 2);
      if (param_4 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar16 = -((long)param_3 + 0x1eU & 0xfffffffffffffff0);
        plVar5 = (long *)((long)&lStack_90 + lVar16);
        param_3 = (long *)((long)&lStack_90 + lVar16);
        unaff_x23 = param_3;
      }
      else {
        _malloc();
        unaff_x23 = param_3;
        if (param_3 == (long *)0x0) goto LAB_109552500;
      }
    }
    else {
      plVar5 = &lStack_90;
      unaff_x23 = (long *)0x0;
    }
    uStack_70 = *(undefined8 *)(lVar23 + 8);
    uStack_80 = 1;
    puVar10 = &uStack_78;
    plVar7 = unaff_x22;
    puVar9 = unaff_x21;
    plStack_88 = param_3;
    uStack_78 = unaff_x24;
    FUN_1093c55d4(param_1);
    if (0x8000 < param_4) {
      plVar7 = unaff_x23;
      _free();
    }
    plVar6 = plVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  else {
LAB_109552500:
    plVar7 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar9 = PTR___ZTISt9bad_alloc_110346a68;
    puVar10 = (undefined8 *)PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < unaff_x19) {
    _free(unaff_x23);
  }
  plVar5 = plVar7;
  __Unwind_Resume();
  *(undefined8 *)((long)plVar6 + -0x40) = unaff_x24;
  *(long **)((long)plVar6 + -0x38) = unaff_x23;
  *(long **)((long)plVar6 + -0x30) = unaff_x22;
  *(undefined **)((long)plVar6 + -0x28) = unaff_x21;
  *(long **)((long)plVar6 + -0x20) = plVar7;
  *(ulong *)((long)plVar6 + -0x18) = unaff_x19;
  *(undefined1 **)((long)plVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)plVar6 + -8) = FUN_109552540;
  *(undefined8 *)((long)plVar6 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar22 = *(ulong *)(puVar9 + 0x20);
  pfVar21 = (float *)(uVar22 * 4);
  if (pfVar21 < (float *)0x20001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar8 = (float *)((long)plVar6 +
                      (-0x50 - ((ulong)((long)pfVar21 + 0x1eU) & 0xfffffffffffffff0)));
    if (pfVar8 == (float *)0x0) goto LAB_1095525bc;
    bVar13 = false;
  }
  else {
LAB_1095525bc:
    pfVar8 = pfVar21;
    _malloc();
    if (pfVar21 != (float *)0x0 && pfVar8 == (float *)0x0) goto LAB_109552790;
    bVar13 = true;
  }
  fVar24 = *(float *)(puVar9 + 0x14);
  puVar14 = *(undefined8 **)(puVar9 + 0x18);
  uVar20 = uVar22 + 3;
  if (-1 < (long)uVar22) {
    uVar20 = uVar22;
  }
  if (3 < (long)uVar22) {
    lVar23 = 0;
    pfVar21 = pfVar8;
    puVar18 = puVar14;
    do {
      uVar25 = *puVar18;
      *(ulong *)(pfVar21 + 2) =
           CONCAT44((float)((ulong)puVar18[1] >> 0x20) * fVar24,(float)puVar18[1] * fVar24);
      *(ulong *)pfVar21 = CONCAT44((float)((ulong)uVar25 >> 0x20) * fVar24,(float)uVar25 * fVar24);
      lVar23 = lVar23 + 4;
      pfVar21 = pfVar21 + 4;
      puVar18 = puVar18 + 2;
    } while (lVar23 < (long)(uVar20 & 0xfffffffffffffffc));
  }
  lVar23 = (long)uVar22 % 4;
  if (lVar23 != 0 && lVar23 < 0 == SBORROW8(uVar22,uVar20 & 0xfffffffffffffffc)) {
    pfVar21 = (float *)(puVar14 + ((long)uVar20 >> 2) * 2);
    pfVar11 = pfVar8 + ((long)uVar20 >> 2) * 4;
    do {
      *pfVar11 = fVar24 * *pfVar21;
      lVar23 = lVar23 + -1;
      pfVar21 = pfVar21 + 1;
      pfVar11 = pfVar11 + 1;
    } while (lVar23 != 0);
  }
  lVar23 = plVar5[2];
  if (0 < lVar23) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      lVar17 = *(long *)(plVar5[6] + 8);
      lVar2 = *plVar5;
      uVar3 = plVar5[1];
      uVar22 = lVar2 + lVar17 * lVar16 * 4;
      fVar24 = *(float *)((long)puVar10 + lVar16 * 4);
      uVar20 = (ulong)-((uint)uVar22 >> 2) & 3;
      if ((long)uVar3 <= (long)uVar20) {
        uVar20 = uVar3;
      }
      uVar1 = uVar3;
      if ((uVar22 & 3) == 0) {
        uVar1 = uVar20;
      }
      uVar20 = uVar3 - uVar1;
      uVar22 = uVar20 + 3;
      if ((long)uVar1 <= (long)uVar3) {
        uVar22 = uVar20;
      }
      if (0 < (long)uVar1) {
        pfVar21 = (float *)(lVar2 + lVar17 * lVar15);
        pfVar11 = pfVar8;
        uVar12 = uVar1;
        do {
          *pfVar21 = *pfVar21 - fVar24 * *pfVar11;
          uVar12 = uVar12 - 1;
          pfVar21 = pfVar21 + 1;
          pfVar11 = pfVar11 + 1;
        } while (uVar12 != 0);
      }
      lVar19 = (uVar22 & 0xfffffffffffffffc) + uVar1;
      if (3 < (long)uVar20) {
        pfVar21 = pfVar8 + uVar1;
        puVar14 = (undefined8 *)(lVar2 + lVar17 * lVar15 + uVar1 * 4);
        uVar12 = uVar1;
        do {
          uVar25 = *(undefined8 *)pfVar21;
          puVar14[1] = CONCAT44((float)((ulong)puVar14[1] >> 0x20) -
                                (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20) * fVar24,
                                (float)puVar14[1] - (float)*(undefined8 *)(pfVar21 + 2) * fVar24);
          *puVar14 = CONCAT44((float)((ulong)*puVar14 >> 0x20) -
                              (float)((ulong)uVar25 >> 0x20) * fVar24,
                              (float)*puVar14 - (float)uVar25 * fVar24);
          uVar12 = uVar12 + 4;
          pfVar21 = pfVar21 + 4;
          puVar14 = puVar14 + 2;
        } while ((long)uVar12 < lVar19);
      }
      if (lVar19 < (long)uVar3) {
        lVar19 = uVar20 - (uVar22 & 0xfffffffffffffffc);
        pfVar21 = (float *)(lVar2 + ((long)uVar22 >> 2) * 0x10 + uVar1 * 4 + lVar17 * lVar15);
        pfVar11 = pfVar8 + uVar1 + ((long)uVar22 >> 2) * 4;
        do {
          *pfVar21 = *pfVar21 - fVar24 * *pfVar11;
          lVar19 = lVar19 + -1;
          pfVar21 = pfVar21 + 1;
          pfVar11 = pfVar11 + 1;
        } while (lVar19 != 0);
      }
      lVar16 = lVar16 + 1;
      lVar15 = lVar15 + 4;
    } while (lVar16 != lVar23);
  }
  if (bVar13) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)plVar6 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
LAB_109552790:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1095527b4);
  (*pcVar4)();
}



/* Entry: 109552540; end: 1095527b7;  */

void FUN_109552540(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  float *pfVar5;
  float *pfVar6;
  ulong uVar7;
  bool bVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  ulong uVar18;
  float fVar19;
  undefined8 uVar20;
  float afStack_50 [2];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = *(ulong *)(param_2 + 0x20);
  pfVar17 = (float *)(uVar18 * 4);
  if (pfVar17 < (float *)0x20001) {
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pfVar5 = (float *)((long)afStack_50 - ((long)pfVar17 + 0x1eU & 0xfffffffffffffff0));
    if (pfVar5 == (float *)0x0) goto LAB_1095525bc;
    bVar8 = false;
  }
  else {
LAB_1095525bc:
    pfVar5 = pfVar17;
    _malloc();
    if (pfVar17 != (float *)0x0 && pfVar5 == (float *)0x0) goto LAB_109552790;
    bVar8 = true;
  }
  fVar19 = *(float *)(param_2 + 0x14);
  puVar9 = *(undefined8 **)(param_2 + 0x18);
  uVar16 = uVar18 + 3;
  if (-1 < (long)uVar18) {
    uVar16 = uVar18;
  }
  if (3 < (long)uVar18) {
    lVar12 = 0;
    pfVar17 = pfVar5;
    puVar14 = puVar9;
    do {
      uVar20 = *puVar14;
      *(ulong *)(pfVar17 + 2) =
           CONCAT44((float)((ulong)puVar14[1] >> 0x20) * fVar19,(float)puVar14[1] * fVar19);
      *(ulong *)pfVar17 = CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar19,(float)uVar20 * fVar19);
      lVar12 = lVar12 + 4;
      pfVar17 = pfVar17 + 4;
      puVar14 = puVar14 + 2;
    } while (lVar12 < (long)(uVar16 & 0xfffffffffffffffc));
  }
  lVar12 = (long)uVar18 % 4;
  if (lVar12 != 0 && lVar12 < 0 == SBORROW8(uVar18,uVar16 & 0xfffffffffffffffc)) {
    pfVar17 = (float *)(puVar9 + ((long)uVar16 >> 2) * 2);
    pfVar6 = pfVar5 + ((long)uVar16 >> 2) * 4;
    do {
      *pfVar6 = fVar19 * *pfVar17;
      lVar12 = lVar12 + -1;
      pfVar17 = pfVar17 + 1;
      pfVar6 = pfVar6 + 1;
    } while (lVar12 != 0);
  }
  lVar12 = param_1[2];
  if (0 < lVar12) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar13 = *(long *)(param_1[6] + 8);
      lVar2 = *param_1;
      uVar3 = param_1[1];
      uVar18 = lVar2 + lVar13 * lVar11 * 4;
      fVar19 = *(float *)(param_3 + lVar11 * 4);
      uVar16 = (ulong)-((uint)uVar18 >> 2) & 3;
      if ((long)uVar3 <= (long)uVar16) {
        uVar16 = uVar3;
      }
      uVar1 = uVar3;
      if ((uVar18 & 3) == 0) {
        uVar1 = uVar16;
      }
      uVar16 = uVar3 - uVar1;
      uVar18 = uVar16 + 3;
      if ((long)uVar1 <= (long)uVar3) {
        uVar18 = uVar16;
      }
      if (0 < (long)uVar1) {
        pfVar17 = (float *)(lVar2 + lVar13 * lVar10);
        pfVar6 = pfVar5;
        uVar7 = uVar1;
        do {
          *pfVar17 = *pfVar17 - fVar19 * *pfVar6;
          uVar7 = uVar7 - 1;
          pfVar17 = pfVar17 + 1;
          pfVar6 = pfVar6 + 1;
        } while (uVar7 != 0);
      }
      lVar15 = (uVar18 & 0xfffffffffffffffc) + uVar1;
      if (3 < (long)uVar16) {
        pfVar17 = pfVar5 + uVar1;
        puVar9 = (undefined8 *)(lVar2 + lVar13 * lVar10 + uVar1 * 4);
        uVar7 = uVar1;
        do {
          uVar20 = *(undefined8 *)pfVar17;
          puVar9[1] = CONCAT44((float)((ulong)puVar9[1] >> 0x20) -
                               (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20) * fVar19,
                               (float)puVar9[1] - (float)*(undefined8 *)(pfVar17 + 2) * fVar19);
          *puVar9 = CONCAT44((float)((ulong)*puVar9 >> 0x20) -
                             (float)((ulong)uVar20 >> 0x20) * fVar19,
                             (float)*puVar9 - (float)uVar20 * fVar19);
          uVar7 = uVar7 + 4;
          pfVar17 = pfVar17 + 4;
          puVar9 = puVar9 + 2;
        } while ((long)uVar7 < lVar15);
      }
      if (lVar15 < (long)uVar3) {
        lVar15 = uVar16 - (uVar18 & 0xfffffffffffffffc);
        pfVar17 = (float *)(lVar2 + ((long)uVar18 >> 2) * 0x10 + uVar1 * 4 + lVar13 * lVar10);
        pfVar6 = pfVar5 + uVar1 + ((long)uVar18 >> 2) * 4;
        do {
          *pfVar17 = *pfVar17 - fVar19 * *pfVar6;
          lVar15 = lVar15 + -1;
          pfVar17 = pfVar17 + 1;
          pfVar6 = pfVar6 + 1;
        } while (lVar15 != 0);
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 4;
    } while (lVar11 != lVar12);
  }
  if (bVar8) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
LAB_109552790:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1095527b4);
  (*pcVar4)();
}



/* Entry: 1095527b8; end: 109553697;  */

void FUN_1095527b8(undefined8 *param_1,long *param_2,long param_3,int param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  long lStack_288;
  ulong uStack_280;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  long lStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 *puStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_238 = 0;
  lVar10 = param_2[2];
  lStack_230 = 0;
  lStack_228 = 0;
  if (lVar10 != 0) {
    lVar19 = 0;
    if (lVar10 != 0) {
      lVar19 = 0x7fffffffffffffff / lVar10;
    }
    if (lVar19 < lVar10) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_109553614;
    }
  }
  FUN_1093d98c8(&lStack_238,lVar10 * lVar10,lVar10,lVar10);
  if (param_4 == 0) {
    lVar10 = param_2[2];
    uVar4 = lVar10 - 1;
    if (0 < lVar10) {
      lVar20 = lVar10 * 4;
      lVar19 = lVar20 + -4;
      lVar21 = lVar20;
      uVar15 = uVar4;
      do {
        puVar7 = (undefined8 *)(lVar10 + ~uVar15);
        if (puVar7 != (undefined8 *)0x0) {
          fVar26 = *(float *)(param_3 + uVar15 * 4);
          lVar14 = *param_2;
          lVar12 = param_2[1];
          lVar16 = param_2[2];
          lVar13 = param_2[3];
          lVar24 = *(long *)(lVar13 + 8);
          lStack_1f8 = param_2[1];
          lStack_200 = *param_2;
          lStack_218 = param_2[5];
          puStack_220 = (undefined8 *)param_2[4];
          lStack_210 = param_2[6];
          uVar17 = lStack_238 + lStack_228 * uVar15 * 4 + (lStack_228 - (long)puVar7) * 4;
          lStack_1f0 = lVar16;
          puStack_1e0 = puStack_220;
          lStack_1d8 = lStack_218;
          lStack_1d0 = lStack_210;
          lStack_158 = lStack_200;
          puStack_150 = (undefined8 *)lStack_1f8;
          lStack_148 = lVar16;
          if ((uVar17 & 3) == 0) {
            uVar3 = -((uint)uVar17 >> 2);
            puVar11 = (undefined8 *)((ulong)uVar3 & 3);
            if (puVar7 <= puVar11) {
              puVar11 = puVar7;
            }
            uVar25 = (long)puVar7 - (long)puVar11;
            uStack_280 = uVar25 + 3;
            if ((long)puVar11 <= (long)puVar7) {
              uStack_280 = uVar25;
            }
            lStack_288 = (long)uStack_280 >> 2;
            uStack_280 = uStack_280 & 0xfffffffffffffffc;
            puVar22 = (undefined8 *)(uStack_280 | (ulong)puVar11);
            if ((uVar3 & 3) != 0) goto LAB_109552cec;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            lStack_288 = 0;
            uStack_280 = 0;
            uVar25 = 0;
            puVar22 = puVar7;
            puVar11 = puVar7;
LAB_109552cec:
            _bzero(uVar17,(long)puVar11 << 2);
          }
          if (3 < (long)uVar25) {
            puVar2 = puVar22;
            if ((long)puVar22 <= (long)((long)puVar11 + 4U)) {
              puVar2 = (undefined8 *)((long)puVar11 + 4U);
            }
            _bzero(uVar17 + (long)puVar11 * 4,
                   ((long)puVar2 + ~(ulong)puVar11 & 0x3ffffffffffffffc) * 4 + 0x10);
          }
          if (puVar22 < puVar7) {
            _bzero(uVar17 + lStack_288 * 0x10 + (long)puVar11 * 4,(uVar25 - uStack_280) * 4);
          }
          lStack_178 = uVar15 + 1;
          lStack_1c0 = lVar12 + ~uVar15;
          lStack_170 = lVar16 - (long)puVar7;
          puStack_1c8 = (undefined8 *)(lVar14 + lStack_178 * 4 + lStack_170 * lVar24 * 4);
          lStack_1a8 = lStack_1f8;
          lStack_1b0 = lStack_200;
          lStack_1a0 = lStack_1f0;
          lStack_108 = lVar14 + lVar24 * uVar15 * 4;
          lStack_120 = lStack_108 + lStack_178 * 4;
          lStack_188 = lStack_218;
          puStack_190 = puStack_220;
          lStack_180 = lStack_210;
          puStack_128 = (undefined8 *)CONCAT44(puStack_128._4_4_,-fVar26);
          lStack_f0 = lStack_158;
          puStack_f8 = puStack_160;
          lStack_e0 = lStack_148;
          lStack_e8 = (long)puStack_150;
          lStack_c8 = lStack_1d8;
          puStack_d0 = puStack_1e0;
          lStack_c0 = lStack_1d0;
          uStack_b8 = 0;
          puStack_1b8 = puVar7;
          lStack_198 = lVar13;
          lStack_168 = lVar24;
          lStack_130 = lStack_1c0;
          lStack_118 = lStack_1c0;
          lStack_100 = lVar12;
          lStack_d8 = lVar13;
          uStack_b0 = uVar15;
          lStack_a8 = lVar24;
          lStack_a0 = lStack_178;
          lStack_90 = lVar24;
          FUN_109553698(0x3f800000,&puStack_1c8,&uStack_140,uVar17);
          if ((long)uVar15 < (long)uVar4) {
            lVar12 = 0;
            lVar13 = 0;
            lVar14 = lVar20 + -4;
            lVar16 = lVar20;
            uVar17 = uVar4;
            do {
              lVar24 = lStack_238 + lStack_228 * uVar15 * 4;
              fVar26 = *(float *)(lVar24 + uVar17 * 4);
              *(float *)(lVar24 + uVar17 * 4) =
                   fVar26 * *(float *)(lStack_238 + lStack_228 * uVar17 * 4 + uVar17 * 4);
              uVar25 = lVar10 + ~uVar17;
              if (0 < (long)uVar25) {
                uVar8 = lVar24 + (lStack_228 - uVar25) * 4;
                if ((uVar8 & 3) == 0) {
                  uVar3 = -((uint)uVar8 >> 2);
                  uVar8 = (ulong)uVar3 & 3;
                  if (uVar25 <= uVar8) {
                    uVar8 = uVar25;
                  }
                  uVar6 = uVar25 - uVar8;
                  uVar18 = uVar6 + 3;
                  if ((long)uVar8 <= (long)uVar25) {
                    uVar18 = uVar6;
                  }
                  uVar18 = uVar18 & 0xfffffffffffffffc | uVar8;
                  if ((uVar3 & 3) != 0) goto LAB_109552eb4;
                  uVar8 = 0;
                }
                else {
                  uVar6 = 0;
                  uVar18 = uVar25;
                  uVar8 = uVar25;
LAB_109552eb4:
                  uVar9 = 0;
                  lVar24 = lStack_238 + lVar13 + lVar21 * lStack_228;
                  do {
                    *(float *)(lVar24 + uVar9 * 4) =
                         fVar26 * *(float *)(lStack_238 + lVar13 + lStack_228 * lVar16 + uVar9 * 4)
                         + *(float *)(lVar24 + uVar9 * 4);
                    uVar9 = uVar9 + 1;
                  } while (uVar8 != uVar9);
                }
                if (3 < (long)uVar6) {
                  puVar7 = (undefined8 *)
                           (lStack_238 + lStack_228 * lVar14 + uVar8 * 4 + (lStack_228 + lVar12) * 4
                           );
                  puVar11 = (undefined8 *)
                            (lStack_238 +
                            lVar19 * lStack_228 + uVar8 * 4 + (lStack_228 + lVar12) * 4);
                  do {
                    uVar23 = *puVar7;
                    puVar11[1] = CONCAT44((float)((ulong)puVar11[1] >> 0x20) +
                                          (float)((ulong)puVar7[1] >> 0x20) * fVar26,
                                          (float)puVar11[1] + (float)puVar7[1] * fVar26);
                    *puVar11 = CONCAT44((float)((ulong)*puVar11 >> 0x20) +
                                        (float)((ulong)uVar23 >> 0x20) * fVar26,
                                        (float)*puVar11 + (float)uVar23 * fVar26);
                    uVar8 = uVar8 + 4;
                    puVar7 = puVar7 + 2;
                    puVar11 = puVar11 + 2;
                  } while ((long)uVar8 < (long)uVar18);
                }
                if (uVar18 < uVar25) {
                  lVar24 = lStack_238 + lVar19 * lStack_228 + (lStack_228 + lVar12) * 4;
                  do {
                    *(float *)(lVar24 + uVar18 * 4) =
                         fVar26 * *(float *)(lStack_238 +
                                             lStack_228 * lVar14 + (lStack_228 + lVar12) * 4 +
                                            uVar18 * 4) + *(float *)(lVar24 + uVar18 * 4);
                    uVar18 = uVar18 + 1;
                  } while (lVar12 + uVar18 != 0);
                }
              }
              uVar17 = uVar17 - 1;
              lVar13 = lVar13 + -4;
              lVar16 = lVar16 + -4;
              lVar14 = lVar14 + -4;
              lVar12 = lVar12 + -1;
            } while ((long)uVar15 < (long)uVar17);
          }
        }
        *(undefined4 *)(lStack_238 + lStack_228 * uVar15 * 4 + uVar15 * 4) =
             *(undefined4 *)(param_3 + uVar15 * 4);
        lVar21 = lVar21 + -4;
        lVar19 = lVar19 + -4;
        bVar1 = 0 < (long)uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar1);
    }
  }
  else {
    lVar10 = param_2[2];
    uVar4 = lVar10 - 1;
    if (0 < lVar10) {
      lVar20 = lVar10 * 4;
      lVar19 = lVar20 + -4;
      lVar21 = lVar20;
      uVar15 = uVar4;
      do {
        puVar7 = (undefined8 *)(lVar10 + ~uVar15);
        if (puVar7 != (undefined8 *)0x0) {
          fVar26 = *(float *)(param_3 + uVar15 * 4);
          lVar14 = *param_2;
          lVar12 = param_2[1];
          lVar16 = param_2[2];
          lVar13 = param_2[3];
          lVar24 = *(long *)(lVar13 + 8);
          lStack_1f8 = param_2[1];
          lStack_200 = *param_2;
          lStack_218 = param_2[5];
          puStack_220 = (undefined8 *)param_2[4];
          lStack_210 = param_2[6];
          uVar17 = lStack_238 + lStack_228 * uVar15 * 4 + (lStack_228 - (long)puVar7) * 4;
          lStack_1f0 = lVar16;
          puStack_1e0 = puStack_220;
          lStack_1d8 = lStack_218;
          lStack_1d0 = lStack_210;
          lStack_158 = lStack_200;
          puStack_150 = (undefined8 *)lStack_1f8;
          lStack_148 = lVar16;
          if ((uVar17 & 3) == 0) {
            uVar3 = -((uint)uVar17 >> 2);
            puVar11 = (undefined8 *)((ulong)uVar3 & 3);
            if (puVar7 <= puVar11) {
              puVar11 = puVar7;
            }
            uVar25 = (long)puVar7 - (long)puVar11;
            uStack_280 = uVar25 + 3;
            if ((long)puVar11 <= (long)puVar7) {
              uStack_280 = uVar25;
            }
            lStack_288 = (long)uStack_280 >> 2;
            uStack_280 = uStack_280 & 0xfffffffffffffffc;
            puVar22 = (undefined8 *)(uStack_280 | (ulong)puVar11);
            if ((uVar3 & 3) != 0) goto LAB_10955291c;
            puVar11 = (undefined8 *)0x0;
          }
          else {
            lStack_288 = 0;
            uStack_280 = 0;
            uVar25 = 0;
            puVar22 = puVar7;
            puVar11 = puVar7;
LAB_10955291c:
            _bzero(uVar17,(long)puVar11 << 2);
          }
          if (3 < (long)uVar25) {
            puVar2 = puVar22;
            if ((long)puVar22 <= (long)((long)puVar11 + 4U)) {
              puVar2 = (undefined8 *)((long)puVar11 + 4U);
            }
            _bzero(uVar17 + (long)puVar11 * 4,
                   ((long)puVar2 + ~(ulong)puVar11 & 0x3ffffffffffffffc) * 4 + 0x10);
          }
          if (puVar22 < puVar7) {
            _bzero(uVar17 + lStack_288 * 0x10 + (long)puVar11 * 4,(uVar25 - uStack_280) * 4);
          }
          lStack_178 = uVar15 + 1;
          lStack_1c0 = lVar12 + ~uVar15;
          lStack_170 = lVar16 - (long)puVar7;
          puStack_1c8 = (undefined8 *)(lVar14 + lStack_178 * 4 + lStack_170 * lVar24 * 4);
          lStack_1a8 = lStack_1f8;
          lStack_1b0 = lStack_200;
          lStack_1a0 = lStack_1f0;
          lStack_108 = lVar14 + lVar24 * uVar15 * 4;
          lStack_120 = lStack_108 + lStack_178 * 4;
          lStack_188 = lStack_218;
          puStack_190 = puStack_220;
          lStack_180 = lStack_210;
          puStack_128 = (undefined8 *)CONCAT44(puStack_128._4_4_,-fVar26);
          lStack_f0 = lStack_158;
          puStack_f8 = puStack_160;
          lStack_e0 = lStack_148;
          lStack_e8 = (long)puStack_150;
          lStack_c8 = lStack_1d8;
          puStack_d0 = puStack_1e0;
          lStack_c0 = lStack_1d0;
          uStack_b8 = 0;
          puStack_1b8 = puVar7;
          lStack_198 = lVar13;
          lStack_168 = lVar24;
          lStack_130 = lStack_1c0;
          lStack_118 = lStack_1c0;
          lStack_100 = lVar12;
          lStack_d8 = lVar13;
          uStack_b0 = uVar15;
          lStack_a8 = lVar24;
          lStack_a0 = lStack_178;
          lStack_90 = lVar24;
          FUN_109553698(0x3f800000,&puStack_1c8,&uStack_140,uVar17);
          if ((long)uVar15 < (long)uVar4) {
            lVar12 = 0;
            lVar13 = 0;
            lVar14 = lVar20 + -4;
            lVar16 = lVar20;
            uVar17 = uVar4;
            do {
              lVar24 = lStack_238 + lStack_228 * uVar15 * 4;
              fVar26 = *(float *)(lVar24 + uVar17 * 4);
              *(float *)(lVar24 + uVar17 * 4) =
                   fVar26 * *(float *)(lStack_238 + lStack_228 * uVar17 * 4 + uVar17 * 4);
              uVar25 = lVar10 + ~uVar17;
              if (0 < (long)uVar25) {
                uVar8 = lVar24 + (lStack_228 - uVar25) * 4;
                if ((uVar8 & 3) == 0) {
                  uVar3 = -((uint)uVar8 >> 2);
                  uVar8 = (ulong)uVar3 & 3;
                  if (uVar25 <= uVar8) {
                    uVar8 = uVar25;
                  }
                  uVar6 = uVar25 - uVar8;
                  uVar18 = uVar6 + 3;
                  if ((long)uVar8 <= (long)uVar25) {
                    uVar18 = uVar6;
                  }
                  uVar18 = uVar18 & 0xfffffffffffffffc | uVar8;
                  if ((uVar3 & 3) != 0) goto LAB_109552ae4;
                  uVar8 = 0;
                }
                else {
                  uVar6 = 0;
                  uVar18 = uVar25;
                  uVar8 = uVar25;
LAB_109552ae4:
                  uVar9 = 0;
                  lVar24 = lStack_238 + lVar13 + lVar21 * lStack_228;
                  do {
                    *(float *)(lVar24 + uVar9 * 4) =
                         fVar26 * *(float *)(lStack_238 + lVar13 + lStack_228 * lVar16 + uVar9 * 4)
                         + *(float *)(lVar24 + uVar9 * 4);
                    uVar9 = uVar9 + 1;
                  } while (uVar8 != uVar9);
                }
                if (3 < (long)uVar6) {
                  puVar7 = (undefined8 *)
                           (lStack_238 + lStack_228 * lVar14 + uVar8 * 4 + (lStack_228 + lVar12) * 4
                           );
                  puVar11 = (undefined8 *)
                            (lStack_238 +
                            lVar19 * lStack_228 + uVar8 * 4 + (lStack_228 + lVar12) * 4);
                  do {
                    uVar23 = *puVar7;
                    puVar11[1] = CONCAT44((float)((ulong)puVar11[1] >> 0x20) +
                                          (float)((ulong)puVar7[1] >> 0x20) * fVar26,
                                          (float)puVar11[1] + (float)puVar7[1] * fVar26);
                    *puVar11 = CONCAT44((float)((ulong)*puVar11 >> 0x20) +
                                        (float)((ulong)uVar23 >> 0x20) * fVar26,
                                        (float)*puVar11 + (float)uVar23 * fVar26);
                    uVar8 = uVar8 + 4;
                    puVar7 = puVar7 + 2;
                    puVar11 = puVar11 + 2;
                  } while ((long)uVar8 < (long)uVar18);
                }
                if (uVar18 < uVar25) {
                  lVar24 = lStack_238 + lVar19 * lStack_228 + (lStack_228 + lVar12) * 4;
                  do {
                    *(float *)(lVar24 + uVar18 * 4) =
                         fVar26 * *(float *)(lStack_238 +
                                             lStack_228 * lVar14 + (lStack_228 + lVar12) * 4 +
                                            uVar18 * 4) + *(float *)(lVar24 + uVar18 * 4);
                    uVar18 = uVar18 + 1;
                  } while (lVar12 + uVar18 != 0);
                }
              }
              uVar17 = uVar17 - 1;
              lVar13 = lVar13 + -4;
              lVar16 = lVar16 + -4;
              lVar14 = lVar14 + -4;
              lVar12 = lVar12 + -1;
            } while ((long)uVar15 < (long)uVar17);
          }
        }
        *(undefined4 *)(lStack_238 + lStack_228 * uVar15 * 4 + uVar15 * 4) =
             *(undefined4 *)(param_3 + uVar15 * 4);
        lVar21 = lVar21 + -4;
        lVar19 = lVar19 + -4;
        bVar1 = 0 < (long)uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar1);
    }
  }
  lVar10 = *param_2;
  lVar21 = param_2[1];
  lVar19 = param_2[2];
  lVar20 = param_2[3];
  uVar23 = *param_1;
  puVar7 = (undefined8 *)param_1[2];
  lVar14 = param_1[3];
  lStack_158 = 0;
  puStack_150 = (undefined8 *)0x0;
  puStack_160 = (undefined8 *)0x0;
  if (lVar19 == 0 || puVar7 == (undefined8 *)0x0) {
LAB_109553018:
    lVar16 = (long)puVar7 * lVar19;
    FUN_1093c3d54(&puStack_160,lVar16,lVar19,puVar7);
    if ((lStack_158 != lVar19) || (puStack_150 != puVar7)) {
      if (lVar19 != 0 && puVar7 != (undefined8 *)0x0) {
        lVar12 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          lVar12 = 0x7fffffffffffffff / (long)puVar7;
        }
        if (lVar12 < lVar19) goto LAB_109553540;
      }
      FUN_1093c3d54(&puStack_160,lVar16,lVar19,puVar7);
      lVar16 = lStack_158 * (long)puStack_150;
    }
    if (0 < lVar16) {
      _bzero(puStack_160,lVar16 << 2);
    }
    puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,0x3f800000);
    lVar16 = lVar21;
    if (lVar19 <= lVar21) {
      lVar16 = lVar19;
    }
    uStack_140 = 0;
    uStack_138 = 0;
    puStack_1c8 = puVar7;
    lStack_130 = lVar16;
    puStack_128 = puVar7;
    lStack_120 = lVar21;
    FUN_1093de430(&lStack_120,&lStack_130,&puStack_1c8,1);
    lStack_118 = lStack_120 * lStack_130;
    lStack_110 = (long)puStack_128 * lStack_120;
    FUN_1093dab64(lVar16,puVar7,lVar21,lVar10,*(undefined8 *)(lVar20 + 8),uVar23,
                  *(undefined8 *)(lVar14 + 8),puStack_160,1,lStack_158,&puStack_1e0,&uStack_140);
    _free(uStack_140);
    _free(uStack_138);
    if (param_4 == 0) {
      puStack_1c8 = (undefined8 *)0x0;
      lStack_1c0 = 0;
      puStack_1b8 = (undefined8 *)0x0;
      if (lStack_228 != 0 || puStack_150 != (undefined8 *)0x0) {
        if ((lStack_228 != 0) && (puStack_150 != (undefined8 *)0x0)) {
          lVar19 = 0;
          if (puStack_150 != (undefined8 *)0x0) {
            lVar19 = 0x7fffffffffffffff / (long)puStack_150;
          }
          if (lVar19 < lStack_228) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109553614;
          }
        }
        FUN_1093c3d54(&puStack_1c8,(long)puStack_150 * lStack_228);
        if (0 < (long)puStack_1b8 * lStack_1c0) {
          _bzero(puStack_1c8,(long)puStack_1b8 * lStack_1c0 * 4);
        }
      }
      puVar7 = puStack_150;
      lVar14 = lStack_228;
      lStack_200 = CONCAT44(lStack_200._4_4_,0x3f800000);
      lVar19 = lStack_228;
      if (lStack_230 <= lStack_228) {
        lVar19 = lStack_230;
      }
      uStack_140 = 0;
      uStack_138 = 0;
      lStack_130 = lStack_228;
      puStack_128 = puStack_150;
      puStack_1e0 = puStack_150;
      lStack_120 = lVar19;
      FUN_1093de430(&lStack_120,&lStack_130,&puStack_1e0,1);
      lStack_118 = lStack_120 * lStack_130;
      lStack_110 = (long)puStack_128 * lStack_120;
      FUN_1093de9b0(lVar14,puVar7,lVar19,lStack_238,lStack_228,puStack_160,lStack_158,puStack_1c8,1,
                    lStack_1c0,&lStack_200,&uStack_140);
      _free(uStack_140);
      _free(uStack_138);
      puVar7 = puStack_1c8;
      if ((lStack_158 != lStack_1c0) ||
         (lVar19 = lStack_1c0, puVar11 = puStack_1b8, puStack_150 != puStack_1b8)) {
        if ((lStack_1c0 != 0) && (puStack_1b8 != (undefined8 *)0x0)) {
          lVar19 = 0;
          if (puStack_1b8 != (undefined8 *)0x0) {
            lVar19 = 0x7fffffffffffffff / (long)puStack_1b8;
          }
          if (lVar19 < lStack_1c0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109553614;
          }
        }
        FUN_1093c3d54(&puStack_160,(long)puStack_1b8 * lStack_1c0);
        lVar19 = lStack_158;
        puVar11 = puStack_150;
      }
      uVar15 = lVar19 * (long)puVar11;
      uVar4 = uVar15 + 3;
      if (-1 < (long)uVar15) {
        uVar4 = uVar15;
      }
      if (3 < (long)uVar15) {
        lVar19 = 0;
        puVar11 = puStack_160;
        puVar22 = puVar7;
        do {
          uVar23 = *puVar22;
          puVar11[1] = puVar22[1];
          *puVar11 = uVar23;
          lVar19 = lVar19 + 4;
          puVar11 = puVar11 + 2;
          puVar22 = puVar22 + 2;
        } while (lVar19 < (long)(uVar4 & 0xfffffffffffffffc));
      }
      lVar19 = (long)uVar15 % 4;
      if (lVar19 != 0 && lVar19 < 0 == SBORROW8(uVar15,uVar4 & 0xfffffffffffffffc)) {
        puVar11 = puStack_160 + ((long)uVar4 >> 2) * 2;
        puVar7 = puVar7 + ((long)uVar4 >> 2) * 2;
        do {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar7;
          lVar19 = lVar19 + -1;
          puVar11 = (undefined8 *)((long)puVar11 + 4);
          puVar7 = (undefined8 *)((long)puVar7 + 4);
        } while (lVar19 != 0);
      }
    }
    else {
      puStack_1c8 = (undefined8 *)0x0;
      lStack_1c0 = 0;
      puStack_1b8 = (undefined8 *)0x0;
      if (lStack_230 != 0 || puStack_150 != (undefined8 *)0x0) {
        if ((lStack_230 != 0) && (puStack_150 != (undefined8 *)0x0)) {
          lVar19 = 0;
          if (puStack_150 != (undefined8 *)0x0) {
            lVar19 = 0x7fffffffffffffff / (long)puStack_150;
          }
          if (lVar19 < lStack_230) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109553614;
          }
        }
        FUN_1093c3d54(&puStack_1c8,(long)puStack_150 * lStack_230);
        if (0 < (long)puStack_1b8 * lStack_1c0) {
          _bzero(puStack_1c8,(long)puStack_1b8 * lStack_1c0 * 4);
        }
      }
      puVar7 = puStack_150;
      lVar14 = lStack_228;
      lStack_200 = CONCAT44(lStack_200._4_4_,0x3f800000);
      lVar19 = lStack_228;
      if (lStack_230 <= lStack_228) {
        lVar19 = lStack_230;
      }
      uStack_140 = 0;
      uStack_138 = 0;
      puStack_128 = puStack_150;
      lStack_120 = lStack_228;
      puStack_1e0 = puStack_150;
      lStack_130 = lVar19;
      FUN_1093de430(&lStack_120,&lStack_130,&puStack_1e0,1);
      lStack_118 = lStack_120 * lStack_130;
      lStack_110 = (long)puStack_128 * lStack_120;
      FUN_1093ddc54(lVar19,puVar7,lVar14,lStack_238,lStack_228,puStack_160,lStack_158,puStack_1c8,1,
                    lStack_1c0,&lStack_200,&uStack_140);
      _free(uStack_140);
      _free(uStack_138);
      puVar7 = puStack_1c8;
      if ((lStack_158 != lStack_1c0) ||
         (lVar19 = lStack_1c0, puVar11 = puStack_1b8, puStack_150 != puStack_1b8)) {
        if ((lStack_1c0 != 0) && (puStack_1b8 != (undefined8 *)0x0)) {
          lVar19 = 0;
          if (puStack_1b8 != (undefined8 *)0x0) {
            lVar19 = 0x7fffffffffffffff / (long)puStack_1b8;
          }
          if (lVar19 < lStack_1c0) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_109553614;
          }
        }
        FUN_1093c3d54(&puStack_160,(long)puStack_1b8 * lStack_1c0);
        lVar19 = lStack_158;
        puVar11 = puStack_150;
      }
      uVar15 = lVar19 * (long)puVar11;
      uVar4 = uVar15 + 3;
      if (-1 < (long)uVar15) {
        uVar4 = uVar15;
      }
      if (3 < (long)uVar15) {
        lVar19 = 0;
        puVar11 = puStack_160;
        puVar22 = puVar7;
        do {
          uVar23 = *puVar22;
          puVar11[1] = puVar22[1];
          *puVar11 = uVar23;
          lVar19 = lVar19 + 4;
          puVar11 = puVar11 + 2;
          puVar22 = puVar22 + 2;
        } while (lVar19 < (long)(uVar4 & 0xfffffffffffffffc));
      }
      lVar19 = (long)uVar15 % 4;
      if (lVar19 != 0 && lVar19 < 0 == SBORROW8(uVar15,uVar4 & 0xfffffffffffffffc)) {
        puVar11 = puStack_160 + ((long)uVar4 >> 2) * 2;
        puVar7 = puVar7 + ((long)uVar4 >> 2) * 2;
        do {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar7;
          lVar19 = lVar19 + -1;
          puVar11 = (undefined8 *)((long)puVar11 + 4);
          puVar7 = (undefined8 *)((long)puVar7 + 4);
        } while (lVar19 != 0);
      }
    }
    _free(puStack_1c8);
    puVar7 = puStack_150;
    puStack_1e0 = (undefined8 *)CONCAT44(puStack_1e0._4_4_,0xbf800000);
    uStack_140 = 0;
    uStack_138 = 0;
    puStack_128 = puStack_150;
    puStack_1c8 = puStack_150;
    lStack_130 = lVar21;
    lStack_120 = lVar16;
    FUN_1093de430(&lStack_120,&lStack_130,&puStack_1c8,1);
    lStack_118 = lStack_120 * lStack_130;
    lStack_110 = (long)puStack_128 * lStack_120;
    FUN_1093df4b8(lVar21,puVar7,lVar16,lVar10,*(undefined8 *)(lVar20 + 8),puStack_160,lStack_158,
                  *param_1,1,*(undefined8 *)(param_1[3] + 8),&puStack_1e0,&uStack_140);
    _free(uStack_140);
    _free(uStack_138);
    _free(puStack_160);
    _free(lStack_238);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
  }
  else {
    lVar16 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      lVar16 = 0x7fffffffffffffff / (long)puVar7;
    }
    if (lVar19 <= lVar16) goto LAB_109553018;
  }
LAB_109553540:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_109553614:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x109553618);
  (*pcVar5)();
}



/* Entry: 109553698; end: 1095537f7;  */

long * FUN_109553698(float param_1,undefined8 *param_2,long param_3,undefined8 param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  long *plVar26;
  long *unaff_x23;
  ulong uVar27;
  long lVar28;
  long lVar29;
  undefined8 unaff_x26;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = &uStack_60;
  puVar6 = &uStack_60;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  plVar26 = (long *)param_2[2];
  lVar29 = param_2[6];
  plVar8 = *(long **)(param_3 + 0x20);
  uVar17 = *(ulong *)(param_3 + 0x28);
  uStack_60._4_4_ = param_1 * *(float *)(param_3 + 0x18);
  if (uVar17 >> 0x3e == 0) {
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)(uVar17 << 2);
      if (uVar17 < 0x8001) {
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = -((long)plVar8 + 0x1eU & 0xfffffffffffffff0);
        puVar5 = (undefined8 *)((long)&uStack_60 + lVar12);
        plVar8 = (long *)((long)&uStack_60 + lVar12);
        unaff_x23 = plVar8;
      }
      else {
        _malloc();
        unaff_x23 = plVar8;
        if (plVar8 == (long *)0x0) goto LAB_1095537b8;
      }
    }
    else {
      puVar5 = &uStack_60;
      unaff_x23 = (long *)0x0;
    }
    uVar14 = *(undefined8 *)(lVar29 + 8);
    *(long *)((long)puVar5 + -0x10) = (long)&uStack_60 + 4;
    plVar9 = plVar26;
    puVar11 = puVar2;
    FUN_1093d9ac4(plVar26,puVar2,uVar1,uVar14,plVar8,1,param_4,1);
    param_5 = (int)uVar14;
    if (0x8000 < uVar17) {
      plVar9 = unaff_x23;
      _free();
    }
    puVar6 = puVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      return plVar9;
    }
  }
  else {
LAB_1095537b8:
    plVar9 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    puVar11 = (undefined8 *)PTR___ZTISt9bad_alloc_110346a68;
    ___cxa_throw();
  }
  ___stack_chk_fail();
  if (0x8000 < uVar17) {
    _free(unaff_x23);
  }
  plVar8 = plVar9;
  __Unwind_Resume();
  *(long **)((long)puVar6 + -0x30) = plVar26;
  *(undefined8 **)((long)puVar6 + -0x28) = puVar2;
  *(undefined8 *)((long)puVar6 + -0x20) = uVar1;
  *(long **)((long)puVar6 + -0x18) = plVar9;
  *(undefined1 **)((long)puVar6 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)puVar6 + -8) = FUN_1095537f8;
  lVar12 = puVar11[1];
  if (lVar12 != 0) {
    lVar28 = 0;
    if (lVar12 != 0) {
      lVar28 = 0x7fffffffffffffff / lVar12;
    }
    if (lVar28 < lVar12) goto LAB_1095538d8;
  }
  FUN_1093c3d54(plVar8,lVar12 * lVar12);
  param_5 = (int)lVar12;
  lVar12 = puVar11[1];
  lVar28 = lVar12;
  if (plVar8[1] != lVar12 || plVar8[2] != lVar12) {
    if (lVar12 != 0) {
      lVar28 = 0;
      if (lVar12 != 0) {
        lVar28 = 0x7fffffffffffffff / lVar12;
      }
      if (lVar28 < lVar12) {
LAB_1095538d8:
        plVar10 = (long *)0x8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        plVar9 = (long *)PTR___ZTISt9bad_alloc_110346a68;
        plVar13 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
        ___cxa_throw();
        *(undefined8 *)((long)puVar6 + -0x80) = unaff_x26;
        *(long *)((long)puVar6 + -0x78) = lVar29;
        *(ulong *)((long)puVar6 + -0x70) = uVar17;
        *(long **)((long)puVar6 + -0x68) = unaff_x23;
        *(long **)((long)puVar6 + -0x60) = plVar26;
        *(undefined8 **)((long)puVar6 + -0x58) = puVar2;
        *(undefined8 **)((long)puVar6 + -0x50) = puVar11;
        *(long **)((long)puVar6 + -0x48) = plVar8;
        *(undefined1 **)((long)puVar6 + -0x40) = (undefined1 *)((long)puVar6 + -0x10);
        *(code **)((long)puVar6 + -0x38) = FUN_1095538f8;
        if (param_5 == 0) {
          bVar25 = 0;
        }
        else {
          bVar25 = *(byte *)(plVar10 + 2) ^ 1;
        }
        uVar17 = plVar10[3];
        if (((long)uVar17 >= 0x30 && plVar9[2] != 1) && ((long)uVar17 < 0x30 || 0 < plVar9[2])) {
          lVar29 = 0;
          uVar27 = 0;
          uVar15 = uVar17 + 1 >> 1;
          if (0x5f < uVar17) {
            uVar15 = 0x30;
          }
          do {
            bVar4 = *(byte *)(plVar10 + 2);
            if (bVar4 == 1) {
              uVar18 = uVar27;
              uVar19 = uVar15 + uVar27;
              if ((long)uVar17 <= (long)(uVar15 + uVar27)) {
                uVar19 = uVar17;
              }
            }
            else {
              uVar18 = (uVar17 + lVar29) - uVar15;
              uVar18 = uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU);
              uVar19 = uVar17 + lVar29;
            }
            lVar12 = plVar10[4] + uVar18;
            plVar8 = (long *)*plVar10;
            plVar26 = (long *)plVar10[1];
            lVar28 = plVar8[1];
            lVar24 = lVar28 - lVar12;
            *(ulong *)((long)puVar6 + -0xb8) = *plVar8 + lVar12 * 4 + lVar28 * uVar18 * 4;
            *(long *)((long)puVar6 + -0xb0) = lVar24;
            *(ulong *)((long)puVar6 + -0xa8) = uVar19 - uVar18;
            *(long **)((long)puVar6 + -0xa0) = plVar8;
            *(long *)((long)puVar6 + -0x98) = lVar12;
            *(ulong *)((long)puVar6 + -0x90) = uVar18;
            *(long *)((long)puVar6 + -0x88) = lVar28;
            lVar3 = plVar9[1];
            lVar12 = lVar3 + (lVar12 - lVar28);
            bVar7 = (bVar25 & 1) == 0;
            lVar28 = lVar12;
            if (bVar7) {
              lVar28 = 0;
            }
            lVar20 = lVar24;
            if (bVar7) {
              lVar20 = plVar9[2];
            }
            *(long *)((long)puVar6 + -0xf0) = *plVar9 + lVar12 * 4 + lVar28 * lVar3 * 4;
            *(long *)((long)puVar6 + -0xe8) = lVar24;
            *(long *)((long)puVar6 + -0xe0) = lVar20;
            *(long **)((long)puVar6 + -0xd8) = plVar9;
            *(long *)((long)puVar6 + -0xd0) = lVar12;
            *(long *)((long)puVar6 + -200) = lVar28;
            *(long *)((long)puVar6 + -0xc0) = lVar3;
            plVar8 = (long *)((long)puVar6 + -0xf0);
            FUN_1095527b8((undefined1 *)((long)puVar6 + -0xf0),(undefined1 *)((long)puVar6 + -0xb8),
                          *plVar26 + uVar18 * 4,bVar4 ^ 1);
            uVar17 = plVar10[3];
            uVar27 = uVar27 + uVar15;
            lVar29 = lVar29 - uVar15;
          } while ((long)uVar27 < (long)uVar17);
        }
        else {
          plVar8 = plVar13;
          FUN_1093c3de4(plVar13);
          lVar29 = plVar10[3];
          if (0 < lVar29) {
            lVar12 = 0;
            lVar28 = -1;
            do {
              lVar3 = lVar12;
              if ((char)plVar10[2] == '\0') {
                lVar3 = lVar29 + lVar28;
              }
              plVar8 = (long *)*plVar10;
              plVar26 = (long *)plVar10[1];
              lVar20 = plVar8[1];
              lVar21 = plVar10[4];
              lVar22 = lVar20 - (lVar21 + lVar3);
              lVar24 = plVar9[1];
              lVar29 = lVar22;
              if ((bVar25 & 1) == 0) {
                lVar29 = plVar9[2];
              }
              lVar23 = plVar9[2] - lVar29;
              *(long *)((long)puVar6 + -0xb8) =
                   *plVar9 + (lVar24 - lVar22) * 4 + lVar23 * lVar24 * 4;
              *(long *)((long)puVar6 + -0xb0) = lVar22;
              *(long *)((long)puVar6 + -0xa8) = lVar29;
              *(long **)((long)puVar6 + -0xa0) = plVar9;
              *(long *)((long)puVar6 + -0x98) = lVar24 - lVar22;
              *(long *)((long)puVar6 + -0x90) = lVar23;
              *(long *)((long)puVar6 + -0x88) = lVar24;
              lVar29 = lVar21 + lVar3 + 1;
              *(long *)((long)puVar6 + -0xf0) = *plVar8 + lVar29 * 4 + lVar20 * lVar3 * 4;
              *(long *)((long)puVar6 + -0xe8) = lVar20 - lVar29;
              *(long **)((long)puVar6 + -0xd8) = plVar8;
              *(long *)((long)puVar6 + -0xd0) = lVar29;
              *(long *)((long)puVar6 + -200) = lVar3;
              *(long *)((long)puVar6 + -0xc0) = lVar20;
              plVar8 = (long *)((long)puVar6 + -0xb8);
              FUN_109551f88(plVar8,(undefined1 *)((long)puVar6 + -0xf0),*plVar26 + lVar3 * 4,
                            *plVar13);
              lVar12 = lVar12 + 1;
              lVar29 = plVar10[3];
              lVar28 = lVar28 + -1;
            } while (lVar12 < lVar29);
          }
        }
        return plVar8;
      }
    }
    FUN_1093c3d54(plVar8,lVar12 * lVar12,lVar12,lVar12);
    lVar12 = plVar8[2];
    lVar28 = plVar8[1];
  }
  if (0 < lVar12 * lVar28) {
    _bzero(*plVar8,lVar12 * lVar28 * 4);
  }
  lVar29 = puVar11[1];
  if (0 < lVar29) {
    lVar12 = *plVar8;
    piVar16 = (int *)*puVar11;
    do {
      *(undefined4 *)(lVar12 + (long)*piVar16 * 4) = 0x3f800000;
      lVar12 = lVar12 + lVar28 * 4;
      lVar29 = lVar29 + -1;
      piVar16 = piVar16 + 1;
    } while (lVar29 != 0);
  }
  return plVar8;
}



/* Entry: 1095537f8; end: 1095538f7;  */

long * FUN_1095537f8(long *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long *plStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    lVar13 = 0;
    if (lVar5 != 0) {
      lVar13 = 0x7fffffffffffffff / lVar5;
    }
    if (lVar13 < lVar5) goto LAB_1095538d8;
  }
  FUN_1093c3d54(param_1,lVar5 * lVar5);
  param_4 = (int)lVar5;
  lVar5 = param_2[1];
  lVar13 = lVar5;
  if (param_1[1] != lVar5 || param_1[2] != lVar5) {
    if (lVar5 != 0) {
      lVar13 = 0;
      if (lVar5 != 0) {
        lVar13 = 0x7fffffffffffffff / lVar5;
      }
      if (lVar13 < lVar5) {
LAB_1095538d8:
        plVar2 = (long *)0x8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        plVar4 = (long *)PTR___ZTISt9bad_alloc_110346a68;
        plVar6 = (long *)PTR___ZNSt9bad_allocD1Ev_110346998;
        ___cxa_throw();
        if (param_4 == 0) {
          bVar12 = 0;
        }
        else {
          bVar12 = *(byte *)(plVar2 + 2) ^ 1;
        }
        uVar9 = plVar2[3];
        if (((long)uVar9 >= 0x30 && plVar4[2] != 1) && ((long)uVar9 < 0x30 || 0 < plVar4[2])) {
          lVar5 = 0;
          uVar14 = 0;
          uVar7 = uVar9 + 1 >> 1;
          if (0x5f < uVar9) {
            uVar7 = 0x30;
          }
          do {
            if (*(byte *)(plVar2 + 2) == 1) {
              uStack_90 = uVar14;
              uVar11 = uVar7 + uVar14;
              if ((long)uVar9 <= (long)(uVar7 + uVar14)) {
                uVar11 = uVar9;
              }
            }
            else {
              uVar11 = (uVar9 + lVar5) - uVar7;
              uStack_90 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
              uVar11 = uVar9 + lVar5;
            }
            lStack_a8 = uVar11 - uStack_90;
            lStack_98 = plVar2[4] + uStack_90;
            plStack_a0 = (long *)*plVar2;
            lStack_88 = plStack_a0[1];
            lStack_b8 = *plStack_a0 + lStack_98 * 4 + lStack_88 * uStack_90 * 4;
            lStack_e8 = lStack_88 - lStack_98;
            lStack_c0 = plVar4[1];
            lStack_d0 = lStack_c0 + (lStack_98 - lStack_88);
            bVar1 = (bVar12 & 1) == 0;
            lStack_c8 = lStack_d0;
            if (bVar1) {
              lStack_c8 = 0;
            }
            lStack_f0 = *plVar4 + lStack_d0 * 4 + lStack_c8 * lStack_c0 * 4;
            lStack_e0 = lStack_e8;
            if (bVar1) {
              lStack_e0 = plVar4[2];
            }
            plVar3 = &lStack_f0;
            plStack_d8 = plVar4;
            lStack_b0 = lStack_e8;
            FUN_1095527b8(&lStack_f0,&lStack_b8,*(long *)plVar2[1] + uStack_90 * 4,
                          *(byte *)(plVar2 + 2) ^ 1);
            uVar9 = plVar2[3];
            uVar14 = uVar14 + uVar7;
            lVar5 = lVar5 - uVar7;
          } while ((long)uVar14 < (long)uVar9);
        }
        else {
          plVar3 = plVar6;
          FUN_1093c3de4(plVar6);
          lVar5 = plVar2[3];
          if (0 < lVar5) {
            lVar13 = 0;
            lVar10 = -1;
            do {
              lStack_c8 = lVar13;
              if ((char)plVar2[2] == '\0') {
                lStack_c8 = lVar5 + lVar10;
              }
              plStack_d8 = (long *)*plVar2;
              lStack_c0 = plStack_d8[1];
              lStack_b0 = lStack_c0 - (plVar2[4] + lStack_c8);
              lStack_88 = plVar4[1];
              lStack_a8 = lStack_b0;
              if ((bVar12 & 1) == 0) {
                lStack_a8 = plVar4[2];
              }
              lStack_98 = lStack_88 - lStack_b0;
              uStack_90 = plVar4[2] - lStack_a8;
              lStack_b8 = *plVar4 + lStack_98 * 4 + uStack_90 * lStack_88 * 4;
              lStack_d0 = plVar2[4] + lStack_c8 + 1;
              lStack_e8 = lStack_c0 - lStack_d0;
              lStack_f0 = *plStack_d8 + lStack_d0 * 4 + lStack_c0 * lStack_c8 * 4;
              plVar3 = &lStack_b8;
              plStack_a0 = plVar4;
              FUN_109551f88(plVar3,&lStack_f0,*(long *)plVar2[1] + lStack_c8 * 4,*plVar6);
              lVar13 = lVar13 + 1;
              lVar5 = plVar2[3];
              lVar10 = lVar10 + -1;
            } while (lVar13 < lVar5);
          }
        }
        return plVar3;
      }
    }
    FUN_1093c3d54(param_1,lVar5 * lVar5,lVar5,lVar5);
    lVar5 = param_1[2];
    lVar13 = param_1[1];
  }
  if (0 < lVar5 * lVar13) {
    _bzero(*param_1,lVar5 * lVar13 * 4);
  }
  lVar5 = param_2[1];
  if (0 < lVar5) {
    lVar10 = *param_1;
    piVar8 = (int *)*param_2;
    do {
      *(undefined4 *)(lVar10 + (long)*piVar8 * 4) = 0x3f800000;
      lVar10 = lVar10 + lVar13 * 4;
      lVar5 = lVar5 + -1;
      piVar8 = piVar8 + 1;
    } while (lVar5 != 0);
  }
  return param_1;
}



/* Entry: 1095538f8; end: 109553b0f;  */

void FUN_1095538f8(long *param_1,long *param_2,undefined8 *param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_68;
  ulong uStack_60;
  long lStack_58;
  
  if (param_4 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = *(byte *)(param_1 + 2) ^ 1;
  }
  uVar4 = param_1[3];
  if (((long)uVar4 >= 0x30 && param_2[2] != 1) && ((long)uVar4 < 0x30 || 0 < param_2[2])) {
    lVar2 = 0;
    uVar8 = 0;
    uVar3 = uVar4 + 1 >> 1;
    if (0x5f < uVar4) {
      uVar3 = 0x30;
    }
    do {
      if (*(byte *)(param_1 + 2) == 1) {
        uStack_60 = uVar8;
        uVar5 = uVar3 + uVar8;
        if ((long)uVar4 <= (long)(uVar3 + uVar8)) {
          uVar5 = uVar4;
        }
      }
      else {
        uVar5 = (uVar4 + lVar2) - uVar3;
        uStack_60 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
        uVar5 = uVar4 + lVar2;
      }
      lStack_78 = uVar5 - uStack_60;
      lStack_68 = param_1[4] + uStack_60;
      plStack_70 = (long *)*param_1;
      lStack_58 = plStack_70[1];
      lStack_88 = *plStack_70 + lStack_68 * 4 + lStack_58 * uStack_60 * 4;
      lStack_b8 = lStack_58 - lStack_68;
      lStack_90 = param_2[1];
      lStack_a0 = lStack_90 + (lStack_68 - lStack_58);
      bVar1 = (bVar6 & 1) == 0;
      lStack_98 = lStack_a0;
      if (bVar1) {
        lStack_98 = 0;
      }
      lStack_c0 = *param_2 + lStack_a0 * 4 + lStack_98 * lStack_90 * 4;
      lStack_b0 = lStack_b8;
      if (bVar1) {
        lStack_b0 = param_2[2];
      }
      plStack_a8 = param_2;
      lStack_80 = lStack_b8;
      FUN_1095527b8(&lStack_c0,&lStack_88,*(long *)param_1[1] + uStack_60 * 4,
                    *(byte *)(param_1 + 2) ^ 1);
      uVar4 = param_1[3];
      uVar8 = uVar8 + uVar3;
      lVar2 = lVar2 - uVar3;
    } while ((long)uVar8 < (long)uVar4);
  }
  else {
    FUN_1093c3de4(param_3);
    lVar2 = param_1[3];
    if (0 < lVar2) {
      lVar7 = 0;
      lVar9 = -1;
      do {
        lStack_98 = lVar7;
        if ((char)param_1[2] == '\0') {
          lStack_98 = lVar2 + lVar9;
        }
        plStack_a8 = (long *)*param_1;
        lStack_90 = plStack_a8[1];
        lStack_80 = lStack_90 - (param_1[4] + lStack_98);
        lStack_58 = param_2[1];
        lStack_78 = lStack_80;
        if ((bVar6 & 1) == 0) {
          lStack_78 = param_2[2];
        }
        lStack_68 = lStack_58 - lStack_80;
        uStack_60 = param_2[2] - lStack_78;
        lStack_88 = *param_2 + lStack_68 * 4 + uStack_60 * lStack_58 * 4;
        lStack_a0 = param_1[4] + lStack_98 + 1;
        lStack_b8 = lStack_90 - lStack_a0;
        lStack_c0 = *plStack_a8 + lStack_a0 * 4 + lStack_90 * lStack_98 * 4;
        plStack_70 = param_2;
        FUN_109551f88(&lStack_88,&lStack_c0,*(long *)param_1[1] + lStack_98 * 4,*param_3);
        lVar7 = lVar7 + 1;
        lVar2 = param_1[3];
        lVar9 = lVar9 + -1;
      } while (lVar7 < lVar2);
    }
  }
  return;
}



/* Entry: 109553b10; end: 109553c8f;  */

void FUN_109553b10(undefined8 param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long *extraout_x8;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined1 *unaff_x22;
  ulong uVar6;
  undefined1 *unaff_x25;
  long unaff_x26;
  undefined4 *unaff_x27;
  long unaff_x28;
  undefined8 unaff_d8;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar1 = auStack_a0;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_3[2];
  if (uVar6 >> 0x3e == 0) {
    unaff_x25 = (undefined1 *)*param_2;
    unaff_x21 = param_2[1];
    unaff_x22 = (undefined1 *)param_2[2];
    unaff_x26 = param_2[3];
    unaff_x27 = (undefined4 *)*param_3;
    puVar2 = (undefined1 *)(uVar6 << 2);
    unaff_x28 = param_3[4];
    if (uVar6 < 0x8001) goto LAB_109553ba4;
    _malloc();
    unaff_x19 = param_4;
    unaff_x20 = param_5;
    unaff_d8 = param_1;
    if (puVar2 == (undefined1 *)0x0) goto LAB_109553b84;
  }
  else {
LAB_109553b84:
    param_1 = unaff_d8;
    param_5 = unaff_x20;
    param_4 = unaff_x19;
    puVar2 = (undefined1 *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
LAB_109553ba4:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    puVar1 = auStack_a0 + -((ulong)(puVar2 + 0x1e) & 0xfffffffffffffff0);
    puVar2 = auStack_a0 + -((ulong)(puVar2 + 0x1e) & 0xfffffffffffffff0);
    if (uVar6 == 0) goto LAB_109553bf4;
  }
  uVar5 = 0;
  do {
    *(undefined4 *)(puVar2 + uVar5 * 4) = *unaff_x27;
    uVar5 = uVar5 + 1;
    unaff_x27 = unaff_x27 + unaff_x28;
  } while (uVar6 != uVar5);
LAB_109553bf4:
  uStack_80 = *(undefined8 *)(unaff_x26 + 8);
  uStack_90 = 1;
  puVar3 = unaff_x22;
  puStack_98 = puVar2;
  puStack_88 = unaff_x25;
  FUN_1093c55d4(param_1,unaff_x22,unaff_x21,&puStack_88,&puStack_98,param_4,
                *(undefined8 *)(param_5 + 8));
  if (0x8000 < uVar6) {
    puVar3 = puVar2;
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  if (0x8000 < uVar6) {
    _free(puVar2);
  }
  __Unwind_Resume(puVar3);
  *(undefined1 **)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long *)(puVar1 + -0x20) = param_5;
  *(undefined1 **)(puVar1 + -0x18) = puVar3;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = FUN_109553c90;
  lVar4 = 0x20;
  __Znwm();
  FUN_109553ce8();
  *extraout_x8 = lVar4 + 0x18;
  extraout_x8[1] = lVar4;
  return;
}



/* Entry: 109553c90; end: 109553ce7;  */

void FUN_109553c90(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  __Znwm();
  FUN_109553ce8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109553ce8; end: 109553d3b;  */

undefined8 * FUN_109553ce8(undefined8 *param_1,undefined4 *param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110afbd68;
  FUN_109553e40(param_1 + 3,*param_2,6,6);
  return param_1;
}



/* Entry: 109553d3c; end: 109553d4b;  */

void FUN_109553d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afbd68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109553d4c; end: 109553d6b;  */

void FUN_109553d4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afbd68;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109553d6c; end: 109553d7b;  */

void FUN_109553d6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = 0;
  if (lVar1 != 0) {
    FUN_1095570a8(lVar1 + 8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109553d7c; end: 109553deb;  */

void FUN_109553d7c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x20;
  __Znwm();
  FUN_109553dec();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109553dec; end: 109553e3f;  */

undefined8 *
FUN_109553dec(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110afbd68;
  FUN_109553e40(param_1 + 3,*param_2,*param_3,*param_4);
  return param_1;
}



/* Entry: 109553e40; end: 109553ecf;  */

undefined8 * FUN_109553e40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  uVar1 = 0x10;
  __Znwm(0x10);
  FUN_10955710c();
  FUN_109557068(param_1,uVar1);
  return param_1;
}



/* Entry: 109553ed0; end: 109554493;  */

void FUN_109553ed0(int *param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  float fVar9;
  double dVar10;
  float fVar11;
  undefined1 *puVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined *puVar21;
  float *pfVar22;
  uint uVar23;
  undefined *puVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  ulong *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  uint uVar33;
  uint uVar34;
  undefined8 *puVar35;
  uint *puVar36;
  int iVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  float *pfVar41;
  undefined4 *puVar42;
  undefined8 uVar43;
  uint uVar44;
  ulong uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  float extraout_s1_05;
  undefined4 extraout_s1_06;
  float extraout_s1_07;
  undefined4 extraout_s1_08;
  float extraout_s1_09;
  undefined4 extraout_s1_10;
  float extraout_s1_11;
  undefined4 extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  double extraout_d1;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined8 uStack_7b8;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  ulong uStack_6c8;
  undefined8 *puStack_688;
  undefined8 *puStack_660;
  uint uStack_644;
  undefined8 uStack_620;
  undefined4 auStack_590 [2];
  undefined8 *puStack_588;
  undefined8 uStack_580;
  float afStack_578 [2];
  undefined8 *puStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  ulong uStack_558;
  undefined8 uStack_550;
  int aiStack_548 [6];
  undefined8 uStack_530;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined1 uStack_518;
  undefined7 uStack_517;
  undefined1 auStack_510 [16];
  undefined8 uStack_500;
  ulong uStack_4f8;
  undefined8 uStack_4f0;
  float *pfStack_4e8;
  undefined8 uStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  uint uStack_4c0;
  undefined4 uStack_4bc;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined8 uStack_4ac;
  undefined8 uStack_4a4;
  undefined8 uStack_49c;
  undefined8 uStack_494;
  undefined4 uStack_48c;
  int iStack_488;
  uint uStack_484;
  undefined4 uStack_480;
  undefined *puStack_478;
  ulong uStack_470;
  uint uStack_468;
  float *pfStack_460;
  float *pfStack_458;
  ulong uStack_450;
  uint uStack_448;
  undefined1 uStack_444;
  undefined8 uStack_440;
  undefined4 uStack_438;
  ulong uStack_430;
  float *pfStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
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
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 auStack_2c0 [2];
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined4 auStack_2a8 [2];
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  int aiStack_278 [6];
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined4 *puStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  uint uStack_198;
  undefined4 *puStack_190;
  undefined4 *puStack_188;
  ulong uStack_180;
  uint uStack_178;
  undefined1 uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  ulong uStack_160;
  undefined4 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  
  uVar23 = (uint)param_5;
  aiStack_278[4] = (int)param_4;
  if (*param_1 == 1) {
    lVar26 = 0;
    aiStack_278[2] = 0;
    aiStack_278[0] = 0;
    aiStack_278[1] = 0;
    uStack_174 = 1;
    uStack_288 = param_4 << 0x20 | 1;
    uStack_280 = CONCAT44(uStack_280._4_4_,uVar23);
    aiStack_278[3] = 1;
    aiStack_278[5] = uVar23;
    uStack_260 = 2;
    puStack_208 = &uStack_260;
    uStack_254 = 1;
    uStack_250 = 1;
    uStack_24c = 1;
    uStack_248 = 0;
    uStack_220 = CONCAT44(uStack_220._4_4_,uVar23);
    puStack_218 = auStack_2a8;
    uStack_1d4 = 0;
    uStack_1dc = 0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1bc = 0;
    uStack_1a0 = uStack_288;
    uStack_198 = uVar23;
    uStack_168 = 0;
    uStack_170 = 0;
    do {
      if ((*(int *)((long)&uStack_1a0 + lVar26) != *(int *)((long)aiStack_278 + lVar26 + 0xc)) ||
         (*(int *)((long)aiStack_278 + lVar26) != 0)) {
        uStack_174 = 0;
      }
      lVar26 = lVar26 + 4;
    } while (lVar26 != 0xc);
    lVar26 = 0;
    uStack_1b0 = 1;
    iStack_1b8 = aiStack_278[4] * uVar23;
    uStack_1e0 = 1;
    uVar39 = 1;
    piVar15 = (int *)((long)&uStack_1cc + 4);
    do {
      uVar39 = aiStack_278[lVar26 + 5] * uVar39;
      uVar2 = uVar39;
      if ((int)uVar39 < 2) {
        uVar2 = 1;
      }
      iVar37 = 0x1f;
      if (0x80000000U >> (ulong)((uint)LZCOUNT(uVar2) & 0x1f) != uVar2) {
        iVar37 = 0x20;
      }
      iVar37 = iVar37 - (uint)LZCOUNT(uVar2);
      *(uint *)((long)&uStack_1e8 + lVar26 * 4 + 4) = uVar39;
      iVar13 = 0;
      if ((ulong)uVar2 != 0) {
        iVar13 = (int)((ulong)(1L << ((ulong)(iVar37 + 0x20) & 0x3f)) / (ulong)uVar2);
      }
      iVar25 = 0;
      if (iVar37 != 0) {
        iVar25 = iVar37 + -1;
      }
      piVar15[-2] = iVar13 + 1;
      piVar15[-1] = (uint)(iVar37 != 0);
      *piVar15 = iVar25;
      lVar26 = lVar26 + -1;
      piVar15 = piVar15 + -3;
    } while (lVar26 != -2);
    puStack_158 = auStack_2a8;
    uStack_160 = 0;
    uStack_108 = 0xae9de9e6af9de9e6;
    uStack_110 = 0xb09de9e6b19de9e6;
    uStack_f8 = 0xaa9de9e6ab9de9e6;
    uStack_100 = 0xac9de9e6ad9de9e6;
    uStack_e8 = 0xa69de9e6a79de9e6;
    uStack_f0 = 0xa89de9e6a99de9e6;
    uStack_d8 = 0xa29de9e6a39de9e6;
    uStack_e0 = 0xa49de9e6a59de9e6;
    uStack_148 = 0xbe95f61abf800000;
    uStack_150 = 0xc000000000000000;
    uStack_138 = 0xba9de1c8bb9dc971;
    uStack_140 = 0xbc9d6830bd9be50c;
    uStack_128 = 0xb69de9deb79de9c6;
    uStack_130 = 0xb89de964b99de7df;
    uStack_118 = 0xb29de9e6b39de9e6;
    uStack_120 = 0xb49de9e6b59de9e4;
    uStack_68 = 0xb3490fdbb3c90fdb;
    uStack_70 = 0xb4490fdbb4c90fdb;
    uStack_58 = 0xb1490fdbb1c90fdb;
    uStack_60 = 0xb2490fdbb2c90fdb;
    uStack_88 = 0xb7490fdbb7c90fdb;
    uStack_90 = 0xb8490fdbb8c90fdb;
    uStack_78 = 0xb5490fdbb5c90fdb;
    uStack_80 = 0xb6490fdbb6c90fdb;
    uStack_a8 = 0xbb490fc6bbc90f88;
    uStack_b0 = 0xbc490e90bcc90ab0;
    uStack_98 = 0xb9490fdbb9c90fda;
    uStack_a0 = 0xba490fd9bac90fd5;
    uStack_c8 = 0xbf3504f3bf800000;
    uStack_d0 = 0;
    uStack_b8 = 0xbd48fb30bdc8bd36;
    uStack_c0 = 0xbe47c5c2bec3ef15;
    uStack_1ec = 1;
    uVar39 = uVar23 * aiStack_278[4];
    uStack_1f8 = CONCAT44(aiStack_278[4] * uVar23,uVar23);
    uStack_210 = CONCAT44(uStack_210._4_4_,uVar39);
    uStack_290 = param_2;
    uStack_230 = param_3;
    uStack_228 = uStack_288;
    uStack_200 = uStack_288;
    uStack_1f0 = uVar23;
    uStack_1b4 = uVar23;
    uStack_1a8 = param_2;
    puStack_190 = puStack_218;
    puStack_188 = puStack_218;
    uStack_180 = uStack_288;
    uStack_178 = uVar23;
    if (param_3 == 0) {
      uVar14 = -(ulong)(uVar39 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar39 << 3;
      _malloc();
      if ((uVar39 != 0) && (uVar14 == 0)) {
        piVar15 = (int *)0x8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        puVar21 = PTR___ZTISt9bad_alloc_110346a68;
        puVar24 = PTR___ZNSt9bad_allocD1Ev_110346998;
        ___cxa_throw();
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        func_0x00010567aa40(&uStack_290);
        func_0x00010567aa40(&uStack_230);
        __Unwind_Resume();
        aiStack_548[5] = (int)param_2;
        aiStack_548[4] = (int)param_4;
        if (*piVar15 == 1) {
          lVar26 = 0;
          aiStack_548[2] = 0;
          aiStack_548[0] = 0;
          aiStack_548[1] = 0;
          uStack_444 = 1;
          uStack_558 = param_4 << 0x20 | 1;
          uStack_550 = CONCAT44(uStack_550._4_4_,aiStack_548[5]);
          aiStack_548[3] = 1;
          uStack_530 = 2;
          puStack_4d8 = &uStack_530;
          uStack_524 = 1;
          uStack_520 = 1;
          uStack_51c = 1;
          uStack_518 = 0;
          uStack_4f0 = CONCAT44(uStack_4f0._4_4_,aiStack_548[5]);
          pfStack_4e8 = afStack_578;
          uStack_4a4 = 0;
          uStack_4ac = 0;
          uStack_494 = 0;
          uStack_49c = 0;
          uStack_48c = 0;
          uStack_470 = uStack_558;
          uStack_468 = aiStack_548[5];
          uStack_438 = 0;
          uStack_440 = 0;
          do {
            if ((*(int *)((long)&uStack_470 + lVar26) != *(int *)((long)aiStack_548 + lVar26 + 0xc))
               || (*(int *)((long)aiStack_548 + lVar26) != 0)) {
              uStack_444 = 0;
            }
            lVar26 = lVar26 + 4;
          } while (lVar26 != 0xc);
          lVar26 = 0;
          uStack_480 = 1;
          iStack_488 = aiStack_548[4] * aiStack_548[5];
          uStack_4b0 = 1;
          uVar23 = 1;
          piVar15 = (int *)((long)&uStack_49c + 4);
          do {
            uVar23 = aiStack_548[lVar26 + 5] * uVar23;
            uVar39 = uVar23;
            if ((int)uVar23 < 2) {
              uVar39 = 1;
            }
            iVar37 = 0x1f;
            if (0x80000000U >> (ulong)((uint)LZCOUNT(uVar39) & 0x1f) != uVar39) {
              iVar37 = 0x20;
            }
            iVar37 = iVar37 - (uint)LZCOUNT(uVar39);
            *(uint *)((long)&uStack_4b8 + lVar26 * 4 + 4) = uVar23;
            iVar13 = 0;
            if ((ulong)uVar39 != 0) {
              iVar13 = (int)((ulong)(1L << ((ulong)(iVar37 + 0x20) & 0x3f)) / (ulong)uVar39);
            }
            iVar25 = 0;
            if (iVar37 != 0) {
              iVar25 = iVar37 + -1;
            }
            piVar15[-2] = iVar13 + 1;
            piVar15[-1] = (uint)(iVar37 != 0);
            *piVar15 = iVar25;
            lVar26 = lVar26 + -1;
            piVar15 = piVar15 + -3;
          } while (lVar26 != -2);
          pfStack_428 = afStack_578;
          uStack_430 = 0;
          uStack_3d8 = 0xae9de9e6af9de9e6;
          uStack_3e0 = 0xb09de9e6b19de9e6;
          uStack_3c8 = 0xaa9de9e6ab9de9e6;
          uStack_3d0 = 0xac9de9e6ad9de9e6;
          uStack_3b8 = 0xa69de9e6a79de9e6;
          uStack_3c0 = 0xa89de9e6a99de9e6;
          uStack_3a8 = 0xa29de9e6a39de9e6;
          uStack_3b0 = 0xa49de9e6a59de9e6;
          uStack_418 = 0xbe95f61abf800000;
          uStack_420 = 0xc000000000000000;
          uStack_408 = 0xba9de1c8bb9dc971;
          uStack_410 = 0xbc9d6830bd9be50c;
          uStack_3f8 = 0xb69de9deb79de9c6;
          uStack_400 = 0xb89de964b99de7df;
          uStack_3e8 = 0xb29de9e6b39de9e6;
          uStack_3f0 = 0xb49de9e6b59de9e4;
          uStack_338 = 0xb3490fdbb3c90fdb;
          uStack_340 = 0xb4490fdbb4c90fdb;
          uStack_328 = 0xb1490fdbb1c90fdb;
          uStack_330 = 0xb2490fdbb2c90fdb;
          uStack_358 = 0xb7490fdbb7c90fdb;
          uStack_360 = 0xb8490fdbb8c90fdb;
          uStack_348 = 0xb5490fdbb5c90fdb;
          uStack_350 = 0xb6490fdbb6c90fdb;
          uStack_378 = 0xbb490fc6bbc90f88;
          uStack_380 = 0xbc490e90bcc90ab0;
          uStack_368 = 0xb9490fdbb9c90fda;
          uStack_370 = 0xba490fd9bac90fd5;
          uStack_398 = 0xbf3504f3bf800000;
          uStack_3a0 = 0;
          uStack_388 = 0xbd48fb30bdc8bd36;
          uStack_390 = 0xbe47c5c2bec3ef15;
          uStack_4bc = 1;
          uVar23 = aiStack_548[5] * aiStack_548[4];
          uStack_4c8 = CONCAT44(aiStack_548[4] * aiStack_548[5],aiStack_548[5]);
          uStack_4e0 = CONCAT44(uStack_4e0._4_4_,uVar23);
          uStack_560 = puVar21;
          uStack_500 = puVar24;
          uStack_4f8 = uStack_558;
          uStack_4d0 = uStack_558;
          uStack_4c0 = aiStack_548[5];
          uStack_484 = aiStack_548[5];
          puStack_478 = puVar21;
          pfStack_460 = pfStack_4e8;
          pfStack_458 = pfStack_4e8;
          uStack_450 = uStack_558;
          uStack_448 = aiStack_548[5];
          if (puVar24 == (undefined *)0x0) {
            uVar14 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2;
            _malloc();
            if ((uVar23 != 0) && (uVar14 == 0)) {
              puVar16 = (uint *)0x8;
              ___cxa_allocate_exception();
              __ZNSt9bad_allocC1Ev();
              puVar21 = PTR___ZTISt9bad_alloc_110346a68;
              ___cxa_throw();
              func_0x000104bd46a0();
              func_0x000104bd46a0();
              func_0x00010567aa40(&uStack_560);
              func_0x00010567aa40(&uStack_500);
              __Unwind_Resume();
              uVar14 = (ulong)*puVar16;
              if (0 < (int)*puVar16) {
                uVar27 = 0;
                uVar23 = puVar16[0x27];
                lVar26 = *(long *)(puVar16 + 0x1a);
                do {
                  if ((uVar23 & 1) == 0) {
                    lVar40 = 0;
                    iVar37 = 0;
                    uVar17 = uVar27;
                    bVar7 = true;
                    do {
                      bVar20 = bVar7;
                      puVar36 = puVar16 + lVar40 * 3 + 0xd;
                      iVar13 = (int)uVar17;
                      iVar25 = (int)((ulong)*puVar36 * (long)iVar13 >> 0x20);
                      uVar2 = ((uint)(iVar13 - iVar25) >> (ulong)(puVar36[1] & 0x1f)) + iVar25 >>
                              (ulong)(puVar36[2] & 0x1f);
                      uVar39 = uVar2 + puVar16[lVar40 + 0x28];
                      param_4 = (ulong)uVar39;
                      iVar37 = iVar37 + uVar39 * puVar16[lVar40 + 0x16];
                      uVar39 = iVar13 - uVar2 * puVar16[lVar40 + 10];
                      uVar17 = (ulong)uVar39;
                      lVar40 = 1;
                      bVar7 = false;
                    } while (bVar20);
                    iVar37 = iVar37 + uVar39 + puVar16[0x2a];
                  }
                  else {
                    iVar37 = (int)uVar27;
                  }
                  *(ulong *)(puVar21 + uVar27 * 8) = (ulong)*(uint *)(lVar26 + (long)iVar37 * 4);
                  uVar27 = uVar27 + 1;
                } while (uVar27 != uVar14);
              }
              puVar28 = *(ulong **)(puVar16 + 2);
              if (*puVar28 != 0) {
                uVar27 = 0;
                do {
                  if ((puVar28[3] & 1) == 0) {
                    iVar37 = (int)puVar28[2] * (int)uVar27;
                  }
                  else {
                    iVar37 = 0;
                    if (*(int *)((long)puVar28 + 0x14) != 0) {
                      iVar37 = (int)uVar27 / *(int *)((long)puVar28 + 0x14);
                    }
                  }
                  uVar17 = (long)*(int *)((long)puVar28 + 0xc) + (long)iVar37;
                  uVar23 = puVar16[uVar17 + 4];
                  uVar45 = (ulong)uVar23;
                  puVar18 = (undefined8 *)
                            (-(ulong)(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar45 << 3);
                  puVar19 = puVar18;
                  _malloc();
                  iVar37 = (int)param_4;
                  if (uVar23 != 0 && puVar19 == (undefined8 *)0x0) goto LAB_109555318;
                  uVar39 = uVar23 - 1;
                  if ((uVar23 & uVar39) == 0) {
                    if (uVar23 < 2) {
                      uStack_644 = 0;
                    }
                    else {
                      uStack_644 = 0;
                      uVar30 = uVar45;
                      do {
                        uVar2 = (int)uVar30 >> 1;
                        uVar30 = (ulong)uVar2;
                        uStack_644 = uStack_644 + 1;
                      } while (1 < uVar2);
                    }
                    puStack_660 = (undefined8 *)0x0;
                    uStack_6c8 = 0;
                    uVar30 = 0;
                    puStack_688 = (undefined8 *)0x0;
                  }
                  else {
                    uVar29 = 2;
                    do {
                      uVar30 = uVar29;
                      uVar29 = (ulong)(uint)((int)uVar30 << 1);
                    } while ((int)uVar30 < (int)(uVar23 * 2 + -1));
                    uStack_644 = 0;
                    uVar29 = uVar30;
                    do {
                      uVar2 = (int)uVar29 >> 1;
                      uVar29 = (ulong)uVar2;
                      uStack_644 = uStack_644 + 1;
                    } while (1 < uVar2);
                    puStack_688 = (undefined8 *)
                                  (-(uVar30 >> 0x1f) & 0xfffffff800000000 | uVar30 << 3);
                    puStack_660 = puStack_688;
                    _malloc();
                    iVar37 = (int)param_4;
                    if (puStack_660 == (undefined8 *)0x0) {
LAB_109555318:
                      lVar26 = 8;
                      ___cxa_allocate_exception();
                      __ZNSt9bad_allocC1Ev();
                      pfVar22 = (float *)PTR___ZTISt9bad_alloc_110346a68;
                      puVar21 = PTR___ZNSt9bad_allocD1Ev_110346998;
                      ___cxa_throw();
                      uVar23 = (uint)puVar21;
                      if ((int)uVar23 < 9) {
                        if (uVar23 == 2) {
                          uVar43 = *(undefined8 *)(pfVar22 + 2);
                          uVar46 = (undefined1)((ulong)uVar43 >> 8);
                          uVar47 = (undefined1)((ulong)uVar43 >> 0x10);
                          uVar48 = (undefined1)((ulong)uVar43 >> 0x18);
                          uVar49 = (undefined1)((ulong)uVar43 >> 0x20);
                          uVar50 = (undefined1)((ulong)uVar43 >> 0x28);
                          uVar51 = (undefined1)((ulong)uVar43 >> 0x30);
                          uVar52 = (undefined1)((ulong)uVar43 >> 0x38);
                          auVar54[9] = uVar46;
                          auVar54._0_9_ = *(unkbyte9 *)pfVar22;
                          auVar54[10] = uVar47;
                          auVar54[0xb] = uVar48;
                          auVar54[0xc] = uVar49;
                          auVar54[0xd] = uVar50;
                          auVar54[0xe] = uVar51;
                          auVar54[0xf] = uVar52;
                          auVar8[9] = uVar46;
                          auVar8._0_9_ = *(unkbyte9 *)pfVar22;
                          auVar8[10] = uVar47;
                          auVar8[0xb] = uVar48;
                          auVar8[0xc] = uVar49;
                          auVar8[0xd] = uVar50;
                          auVar8[0xe] = uVar51;
                          auVar8[0xf] = uVar52;
                          auVar54 = NEON_ext(auVar54,auVar8,8,1);
                          fVar11 = auVar54._12_4_ - (float)((ulong)uVar43 >> 0x20);
                          *(ulong *)(pfVar22 + 2) =
                               CONCAT17((char)((uint)fVar11 >> 0x18),
                                        CONCAT16((char)((uint)fVar11 >> 0x10),
                                                 CONCAT15((char)((uint)fVar11 >> 8),
                                                          CONCAT14(SUB41(fVar11,0),
                                                                   auVar54._8_4_ - (float)uVar43))))
                          ;
                          *(ulong *)pfVar22 =
                               CONCAT44(auVar54._4_4_ +
                                        (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                                        auVar54._0_4_ + (float)*(undefined8 *)pfVar22);
                        }
                        else if (uVar23 == 4) {
                          fVar64 = *pfVar22 + pfVar22[2];
                          fVar60 = pfVar22[1] + pfVar22[3];
                          fVar65 = *pfVar22 - pfVar22[2];
                          fVar66 = pfVar22[1] - pfVar22[3];
                          fVar68 = pfVar22[4] + pfVar22[6];
                          fVar58 = pfVar22[5] + pfVar22[7];
                          uStack_798 = 0xbf80000000000000;
                          fVar11 = pfVar22[4] - pfVar22[6];
                          uVar46 = SUB41(fVar11,0);
                          uVar47 = (undefined1)((uint)fVar11 >> 8);
                          uVar48 = (undefined1)((uint)fVar11 >> 0x10);
                          uVar49 = (undefined1)((uint)fVar11 >> 0x18);
                          uStack_7a0 = CONCAT44(pfVar22[5] - pfVar22[7],fVar11);
                          FUN_1095512ac(&uStack_798,&uStack_7a0);
                          *pfVar22 = fVar64 + fVar68;
                          pfVar22[1] = fVar60 + fVar58;
                          pfVar22[2] = fVar65 + (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(
                                                  uVar47,uVar46)));
                          pfVar22[3] = fVar66 + extraout_s1_18;
                          pfVar22[4] = fVar64 - fVar68;
                          pfVar22[5] = fVar60 - fVar58;
                          pfVar22[6] = fVar65 - (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(
                                                  uVar47,uVar46)));
                          pfVar22[7] = fVar66 - extraout_s1_18;
                        }
                        else if (uVar23 == 8) {
                          fVar58 = *pfVar22 + pfVar22[2];
                          fVar59 = pfVar22[1] + pfVar22[3];
                          fVar65 = *pfVar22 - pfVar22[2];
                          fVar66 = pfVar22[1] - pfVar22[3];
                          fVar60 = pfVar22[4] + pfVar22[6];
                          fVar61 = pfVar22[5] + pfVar22[7];
                          fVar11 = pfVar22[4] - pfVar22[6];
                          uVar46 = SUB41(fVar11,0);
                          uVar47 = (undefined1)((uint)fVar11 >> 8);
                          uVar48 = (undefined1)((uint)fVar11 >> 0x10);
                          uVar49 = (undefined1)((uint)fVar11 >> 0x18);
                          uStack_798 = CONCAT44(pfVar22[5] - pfVar22[7],fVar11);
                          uStack_7a0 = 0xbf80000000000000;
                          FUN_1095512ac(&uStack_798,&uStack_7a0);
                          fVar11 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          fVar62 = pfVar22[8] + pfVar22[10];
                          fVar67 = pfVar22[9] + pfVar22[0xb];
                          fVar71 = pfVar22[8] - pfVar22[10];
                          fVar68 = pfVar22[9] - pfVar22[0xb];
                          fVar70 = pfVar22[0xc] + pfVar22[0xe];
                          fVar69 = pfVar22[0xd] + pfVar22[0xf];
                          fVar64 = pfVar22[0xc] - pfVar22[0xe];
                          uVar46 = SUB41(fVar64,0);
                          uVar47 = (undefined1)((uint)fVar64 >> 8);
                          uVar48 = (undefined1)((uint)fVar64 >> 0x10);
                          uVar49 = (undefined1)((uint)fVar64 >> 0x18);
                          uStack_798 = CONCAT44(pfVar22[0xd] - pfVar22[0xf],fVar64);
                          uStack_7a0 = 0xbf80000000000000;
                          FUN_1095512ac(&uStack_798,&uStack_7a0);
                          fVar64 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          fVar56 = fVar58 + fVar60;
                          fVar55 = fVar59 + fVar61;
                          fVar57 = fVar65 + fVar11;
                          fVar63 = fVar66 + extraout_s1_13;
                          fVar58 = fVar58 - fVar60;
                          fVar59 = fVar59 - fVar61;
                          fVar65 = fVar65 - fVar11;
                          fVar66 = fVar66 - extraout_s1_13;
                          fVar61 = fVar62 + fVar70;
                          fVar9 = fVar67 + fVar69;
                          uStack_798 = CONCAT44(fVar68 + extraout_s1_14,fVar71 + fVar64);
                          uVar46 = 0xf3;
                          uVar47 = 4;
                          uVar48 = 0x35;
                          uVar49 = 0x3f;
                          uStack_7a0 = 0xbf3504f33f3504f3;
                          FUN_1095512ac(&uStack_798,&uStack_7a0);
                          fVar11 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          uStack_798 = CONCAT44(fVar67 - fVar69,fVar62 - fVar70);
                          uVar46 = 0;
                          uVar47 = 0;
                          uVar48 = 0;
                          uVar49 = 0;
                          uStack_7a0 = 0xbf80000000000000;
                          FUN_1095512ac(&uStack_798,&uStack_7a0);
                          fVar60 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          uStack_798 = CONCAT44(fVar68 - extraout_s1_14,fVar71 - fVar64);
                          uVar46 = 0xf3;
                          uVar47 = 4;
                          uVar48 = 0x35;
                          uVar49 = 0xbf;
                          uStack_7a0 = 0xbf3504f3bf3504f3;
                          FUN_1095512ac(&uStack_798,&uStack_7a0);
                          *pfVar22 = fVar56 + fVar61;
                          pfVar22[1] = fVar55 + fVar9;
                          pfVar22[2] = fVar57 + fVar11;
                          pfVar22[3] = fVar63 + extraout_s1_15;
                          pfVar22[4] = fVar58 + fVar60;
                          pfVar22[5] = fVar59 + extraout_s1_16;
                          pfVar22[6] = fVar65 + (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(
                                                  uVar47,uVar46)));
                          pfVar22[7] = fVar66 + extraout_s1_17;
                          pfVar22[8] = fVar56 - fVar61;
                          pfVar22[9] = fVar55 - fVar9;
                          pfVar22[10] = fVar57 - fVar11;
                          pfVar22[0xb] = fVar63 - extraout_s1_15;
                          pfVar22[0xc] = fVar58 - fVar60;
                          pfVar22[0xd] = fVar59 - extraout_s1_16;
                          pfVar22[0xe] = fVar65 - (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(
                                                  uVar47,uVar46)));
                          pfVar22[0xf] = fVar66 - extraout_s1_17;
                        }
                      }
                      else {
                        uVar27 = (ulong)(uVar23 >> 1);
                        FUN_109555338();
                        FUN_109555338(lVar26,pfVar22 + uVar27 * 2,uVar27,iVar37 + -1);
                        lVar26 = lVar26 + (long)iVar37 * 4;
                        fVar11 = *(float *)(lVar26 + 0xc0) + 1.0;
                        uVar46 = SUB41(fVar11,0);
                        uVar47 = (undefined1)((uint)fVar11 >> 8);
                        uVar48 = (undefined1)((uint)fVar11 >> 0x10);
                        uVar49 = (undefined1)((uint)fVar11 >> 0x18);
                        uStack_798 = CONCAT44(*(float *)(lVar26 + 0x140) + 0.0,fVar11);
                        FUN_1095512ac(&uStack_798,&uStack_798);
                        uStack_7a0 = CONCAT44(extraout_s1_02,
                                              CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46
                                                                                      ))));
                        FUN_1095512ac(&uStack_7a0,&uStack_798);
                        uStack_7a8 = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                        uStack_7a4 = extraout_s1_03;
                        FUN_1095512ac(&uStack_7a8,&uStack_798);
                        uVar14 = 0;
                        uStack_7b0 = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                        uVar46 = 0;
                        uVar47 = 0;
                        uVar48 = 0x80;
                        uVar49 = 0x3f;
                        uStack_7b8 = 0x3f800000;
                        uStack_7ac = extraout_s1_04;
                        do {
                          pfVar41 = pfVar22 + uVar27 * 2;
                          FUN_1095512ac(pfVar41,&uStack_7b8);
                          fVar11 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          FUN_1095512ac(pfVar41 + 2,&uStack_7b8);
                          uStack_7c0 = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          uStack_7bc = extraout_s1_06;
                          FUN_1095512ac(&uStack_7c0,&uStack_798);
                          fVar64 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          FUN_1095512ac(pfVar41 + 4,&uStack_7b8);
                          uStack_7c0 = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          uStack_7bc = extraout_s1_08;
                          FUN_1095512ac(&uStack_7c0,&uStack_7a0);
                          fVar60 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          FUN_1095512ac(pfVar41 + 6,&uStack_7b8);
                          uStack_7c0 = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          uStack_7bc = extraout_s1_10;
                          FUN_1095512ac(&uStack_7c0,&uStack_7a8);
                          fVar65 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          FUN_1095512ac(&uStack_7b8,&uStack_7b0);
                          uStack_7b8 = CONCAT44(extraout_s1_12,
                                                CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,
                                                  uVar46))));
                          fVar66 = (float)((ulong)*(undefined8 *)pfVar22 >> 0x20) - extraout_s1_05;
                          *(ulong *)(pfVar22 + uVar27 * 2) =
                               CONCAT17((char)((uint)fVar66 >> 0x18),
                                        CONCAT16((char)((uint)fVar66 >> 0x10),
                                                 CONCAT15((char)((uint)fVar66 >> 8),
                                                          CONCAT14(SUB41(fVar66,0),
                                                                   (float)*(undefined8 *)pfVar22 -
                                                                   fVar11))));
                          fVar66 = (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) -
                                   extraout_s1_07;
                          *(ulong *)(pfVar41 + 2) =
                               CONCAT17((char)((uint)fVar66 >> 0x18),
                                        CONCAT16((char)((uint)fVar66 >> 0x10),
                                                 CONCAT15((char)((uint)fVar66 >> 8),
                                                          CONCAT14(SUB41(fVar66,0),
                                                                   (float)*(undefined8 *)
                                                                           (pfVar22 + 2) - fVar64)))
                                       );
                          uVar43 = *(undefined8 *)(pfVar22 + 2);
                          fVar11 = fVar11 + (float)*(undefined8 *)pfVar22;
                          uVar46 = SUB41(fVar11,0);
                          uVar47 = (undefined1)((uint)fVar11 >> 8);
                          uVar48 = (undefined1)((uint)fVar11 >> 0x10);
                          uVar49 = (undefined1)((uint)fVar11 >> 0x18);
                          fVar66 = extraout_s1_05 + (float)((ulong)*(undefined8 *)pfVar22 >> 0x20);
                          fVar68 = extraout_s1_07 + (float)((ulong)uVar43 >> 0x20);
                          *(ulong *)(pfVar41 + 4) =
                               CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 4) >> 0x20) -
                                        extraout_s1_09,(float)*(undefined8 *)(pfVar22 + 4) - fVar60)
                          ;
                          *(ulong *)(pfVar41 + 6) =
                               CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 6) >> 0x20) -
                                        extraout_s1_11,(float)*(undefined8 *)(pfVar22 + 6) - fVar65)
                          ;
                          *(ulong *)(pfVar22 + 2) =
                               CONCAT17((char)((uint)fVar68 >> 0x18),
                                        CONCAT16((char)((uint)fVar68 >> 0x10),
                                                 CONCAT15((char)((uint)fVar68 >> 8),
                                                          CONCAT14(SUB41(fVar68,0),
                                                                   fVar64 + (float)uVar43))));
                          *(ulong *)pfVar22 =
                               CONCAT17((char)((uint)fVar66 >> 0x18),
                                        CONCAT16((char)((uint)fVar66 >> 0x10),
                                                 CONCAT15((char)((uint)fVar66 >> 8),
                                                          CONCAT14(SUB41(fVar66,0),fVar11))));
                          pfVar22[6] = fVar65 + pfVar22[6];
                          pfVar22[7] = extraout_s1_11 + pfVar22[7];
                          pfVar22[4] = fVar60 + pfVar22[4];
                          pfVar22[5] = extraout_s1_09 + pfVar22[5];
                          uVar14 = uVar14 + 4;
                          pfVar22 = pfVar22 + 8;
                        } while (uVar14 < uVar27);
                      }
                      return;
                    }
                    _malloc();
                    iVar37 = (int)param_4;
                    if (puStack_688 == (undefined8 *)0x0) goto LAB_109555318;
                    uVar2 = uVar23 + 1;
                    uStack_6c8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
                    _malloc();
                    iVar37 = (int)param_4;
                    if ((uVar2 != 0) && (uStack_6c8 == 0)) goto LAB_109555318;
                    if (-1 < (int)uVar23) {
                      uVar29 = 0;
                      do {
                        dVar10 = ((double)(uVar29 & 0xffffffff) * 3.141592653589793 *
                                 (double)(uVar29 & 0xffffffff)) / (double)uVar23;
                        uVar46 = SUB81(dVar10,0);
                        uVar47 = (undefined1)((ulong)dVar10 >> 8);
                        uVar48 = (undefined1)((ulong)dVar10 >> 0x10);
                        uVar49 = (undefined1)((ulong)dVar10 >> 0x18);
                        uVar50 = (undefined1)((ulong)dVar10 >> 0x20);
                        uVar51 = (undefined1)((ulong)dVar10 >> 0x28);
                        uVar52 = (undefined1)((ulong)dVar10 >> 0x30);
                        uVar53 = (undefined1)((ulong)dVar10 >> 0x38);
                        ___sincos_stret();
                        fVar11 = (float)(double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,
                                                  CONCAT14(uVar50,CONCAT13(uVar49,CONCAT12(uVar48,
                                                  CONCAT11(uVar47,uVar46)))))));
                        *(ulong *)(uStack_6c8 + uVar29 * 8) =
                             CONCAT17((char)((uint)fVar11 >> 0x18),
                                      CONCAT16((char)((uint)fVar11 >> 0x10),
                                               CONCAT15((char)((uint)fVar11 >> 8),
                                                        CONCAT14(SUB41(fVar11,0),(float)extraout_d1)
                                                       )));
                        uVar29 = uVar29 + 1;
                      } while (uVar2 != uVar29);
                    }
                  }
                  iVar37 = 0;
                  if (uVar23 != 0) {
                    iVar37 = (int)uVar14 / (int)uVar23;
                  }
                  if (0 < iVar37) {
                    iVar37 = 0;
                    uVar2 = uVar23 >> 1;
                    uVar44 = (uint)uVar30;
                    uVar1 = uVar44 >> 1;
                    pfVar22 = (float *)(uStack_6c8 + 4);
                    do {
                      iVar25 = 0;
                      iVar13 = iVar37;
                      if (0 < (int)uVar17) {
                        puVar36 = puVar16 + 7;
                        uVar14 = uVar17 & 0xffffffff;
                        do {
                          iVar4 = 0;
                          if (puVar16[(uVar17 & 0xffffffff) + 4] != 0) {
                            iVar4 = (int)*puVar36 / (int)puVar16[(uVar17 & 0xffffffff) + 4];
                          }
                          iVar5 = 0;
                          if (iVar4 != 0) {
                            iVar5 = iVar13 / iVar4;
                          }
                          iVar13 = iVar13 - iVar5 * iVar4;
                          iVar25 = iVar25 + iVar5 * *puVar36;
                          uVar14 = uVar14 - 1;
                          puVar36 = puVar36 + 1;
                        } while (uVar14 != 0);
                      }
                      iVar13 = iVar13 + iVar25;
                      uVar3 = (puVar16 + 7)[uVar17];
                      pfVar41 = pfVar22;
                      uVar14 = uVar45;
                      puVar31 = puVar19;
                      puVar42 = (undefined4 *)((long)puStack_660 + 4);
                      if (uVar3 == 1) {
                        _memcpy(puVar19,puVar21 + (long)iVar13 * 8,puVar18);
                        if ((uVar23 & uVar39) == 0) goto LAB_10955501c;
                        if (0 < (int)uVar23) {
LAB_109554e70:
                          do {
                            fVar11 = pfVar41[-1];
                            uVar46 = SUB41(fVar11,0);
                            uVar47 = (undefined1)((uint)fVar11 >> 8);
                            uVar48 = (undefined1)((uint)fVar11 >> 0x10);
                            uVar49 = (undefined1)((uint)fVar11 >> 0x18);
                            uStack_620 = CONCAT44(-*pfVar41,fVar11);
                            FUN_1095512ac(puVar31,&uStack_620);
                            puVar42[-1] = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                            *puVar42 = extraout_s1;
                            uVar14 = uVar14 - 1;
                            pfVar41 = pfVar41 + 2;
                            puVar31 = puVar31 + 1;
                            puVar42 = puVar42 + 2;
                          } while (uVar14 != 0);
                        }
LAB_109554eac:
                        if ((int)uVar23 < (int)uVar44) {
                          _bzero((long)puStack_660 + (long)puVar18,(ulong)(uVar44 + ~uVar23) * 8 + 8
                                );
                        }
                        if (0 < (int)uVar23) {
                          _memcpy(puStack_688,uStack_6c8,uVar45 << 3);
                        }
                        if ((int)uVar23 < (int)(uVar44 - uVar23)) {
                          _bzero((long)puStack_688 + (long)puVar18,
                                 (ulong)(uVar44 + (uVar23 << 1 ^ 0xffffffff)) * 8 + 8);
                        }
                        puVar31 = (undefined8 *)(uStack_6c8 + (long)(int)uVar23 * 8);
                        lVar26 = (long)(int)(uVar44 - uVar23);
                        if (0 < (int)uVar23) {
                          do {
                            puStack_688[lVar26] = *puVar31;
                            lVar26 = lVar26 + 1;
                            puVar31 = puVar31 + -1;
                          } while (lVar26 < (int)uVar44);
                        }
                        if ((int)uVar44 < 2) {
                          FUN_109555338(puVar16,puStack_660,uVar30,uStack_644);
                        }
                        else {
                          uVar14 = 1;
                          iVar25 = 1;
                          do {
                            if ((long)uVar14 < (long)iVar25) {
                              uVar43 = puStack_660[(long)iVar25 + -1];
                              puStack_660[(long)iVar25 + -1] = puStack_660[uVar14 - 1];
                              puStack_660[uVar14 - 1] = uVar43;
                            }
                            uVar34 = uVar1;
                            if ((3 < uVar44) && (uVar33 = uVar1, (int)uVar1 < iVar25)) {
                              do {
                                iVar25 = iVar25 - uVar33;
                                uVar34 = uVar33 >> 1;
                                if (uVar33 < 4) break;
                                uVar33 = uVar34;
                              } while ((int)uVar34 < iVar25);
                            }
                            iVar25 = uVar34 + iVar25;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != uVar30);
                          FUN_109555338(puVar16,puStack_660,uVar30,uStack_644);
                          uVar14 = 1;
                          iVar25 = 1;
                          do {
                            if ((long)uVar14 < (long)iVar25) {
                              uVar43 = puStack_688[(long)iVar25 + -1];
                              puStack_688[(long)iVar25 + -1] = puStack_688[uVar14 - 1];
                              puStack_688[uVar14 - 1] = uVar43;
                            }
                            uVar34 = uVar1;
                            if ((3 < uVar44) && (uVar33 = uVar1, (int)uVar1 < iVar25)) {
                              do {
                                iVar25 = iVar25 - uVar33;
                                uVar34 = uVar33 >> 1;
                                if (uVar33 < 4) break;
                                uVar33 = uVar34;
                              } while ((int)uVar34 < iVar25);
                            }
                            iVar25 = uVar34 + iVar25;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != uVar30);
                        }
                        FUN_109555338(puVar16,puStack_688,uVar30,uStack_644);
                        puVar31 = puStack_688;
                        uVar14 = uVar30;
                        puVar32 = puStack_660;
                        if ((int)uVar44 < 1) {
                          param_4 = (ulong)uStack_644;
                          func_0x000109555844(puVar16,puStack_660,uVar30);
                        }
                        else {
                          do {
                            uStack_620 = *puVar31;
                            uVar46 = (undefined1)uStack_620;
                            uVar47 = (undefined1)((ulong)uStack_620 >> 8);
                            uVar48 = (undefined1)((ulong)uStack_620 >> 0x10);
                            uVar49 = (undefined1)((ulong)uStack_620 >> 0x18);
                            FUN_1095512ac(puVar32,&uStack_620);
                            *(uint *)puVar32 =
                                 CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                            *(undefined4 *)((long)puVar32 + 4) = extraout_s1_00;
                            uVar14 = uVar14 - 1;
                            puVar31 = puVar31 + 1;
                            puVar32 = puVar32 + 1;
                          } while (uVar14 != 0);
                          param_4 = (ulong)uStack_644;
                          if (1 < (int)uVar44) {
                            uVar14 = 1;
                            iVar25 = 1;
                            do {
                              if ((long)uVar14 < (long)iVar25) {
                                uVar43 = puStack_660[(long)iVar25 + -1];
                                puStack_660[(long)iVar25 + -1] = puStack_660[uVar14 - 1];
                                puStack_660[uVar14 - 1] = uVar43;
                              }
                              uVar34 = uVar1;
                              if ((3 < uVar44) && (uVar33 = uVar1, (int)uVar1 < iVar25)) {
                                do {
                                  iVar25 = iVar25 - uVar33;
                                  uVar34 = uVar33 >> 1;
                                  if (uVar33 < 4) break;
                                  uVar33 = uVar34;
                                } while ((int)uVar34 < iVar25);
                              }
                              iVar25 = uVar34 + iVar25;
                              uVar14 = uVar14 + 1;
                            } while (uVar14 != uVar30);
                          }
                          func_0x000109555844(puVar16,puStack_660,uVar30);
                          puVar31 = puStack_660;
                          uVar14 = uVar30;
                          do {
                            fVar11 = (float)((ulong)*puVar31 >> 0x20) / (float)uVar30;
                            *puVar31 = CONCAT17((char)((uint)fVar11 >> 0x18),
                                                CONCAT16((char)((uint)fVar11 >> 0x10),
                                                         CONCAT15((char)((uint)fVar11 >> 8),
                                                                  CONCAT14(SUB41(fVar11,0),
                                                                           (float)*puVar31 /
                                                                           (float)uVar30))));
                            uVar14 = uVar14 - 1;
                            puVar31 = puVar31 + 1;
                          } while (uVar14 != 0);
                        }
                        pfVar41 = pfVar22;
                        puVar42 = (undefined4 *)((long)puVar19 + 4);
                        puVar31 = puStack_660;
                        uVar14 = uVar45;
                        if ((int)uVar23 < 1) {
                          if (uVar3 != 1) goto LAB_109555298;
                          goto LAB_109555284;
                        }
                        do {
                          fVar11 = pfVar41[-1];
                          uVar46 = SUB41(fVar11,0);
                          uVar47 = (undefined1)((uint)fVar11 >> 8);
                          uVar48 = (undefined1)((uint)fVar11 >> 0x10);
                          uVar49 = (undefined1)((uint)fVar11 >> 0x18);
                          uStack_620 = CONCAT44(-*pfVar41,fVar11);
                          FUN_1095512ac(puVar31,&uStack_620);
                          puVar42[-1] = CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
                          *puVar42 = extraout_s1_01;
                          puVar42 = puVar42 + 2;
                          pfVar41 = pfVar41 + 2;
                          puVar31 = puVar31 + 1;
                          uVar14 = uVar14 - 1;
                        } while (uVar14 != 0);
                        if (uVar3 == 1) goto LAB_109555284;
LAB_10955523c:
                        puVar31 = (undefined8 *)(puVar21 + (long)iVar13 * 8);
                        puVar32 = puVar19;
                        uVar14 = uVar45;
                        do {
                          *puVar31 = *puVar32;
                          puVar31 = puVar31 + (int)uVar3;
                          uVar14 = uVar14 - 1;
                          puVar32 = puVar32 + 1;
                        } while (uVar14 != 0);
                      }
                      else {
                        if ((int)uVar23 < 1) {
                          if ((uVar23 & uVar23 - 1) != 0) goto LAB_109554eac;
                        }
                        else {
                          puVar32 = (undefined8 *)(puVar21 + (long)iVar13 * 8);
                          puVar35 = puVar19;
                          uVar29 = uVar45;
                          do {
                            *puVar35 = *puVar32;
                            puVar32 = puVar32 + (int)uVar3;
                            uVar29 = uVar29 - 1;
                            puVar35 = puVar35 + 1;
                          } while (uVar29 != 0);
                          if ((uVar23 & uVar23 - 1) != 0) goto LAB_109554e70;
                        }
LAB_10955501c:
                        if (1 < (int)uVar23) {
                          uVar14 = 1;
                          iVar25 = 1;
                          do {
                            if ((long)uVar14 < (long)iVar25) {
                              uVar43 = puVar19[(long)iVar25 + -1];
                              puVar19[(long)iVar25 + -1] = puVar19[uVar14 - 1];
                              puVar19[uVar14 - 1] = uVar43;
                            }
                            uVar34 = uVar2;
                            if ((3 < uVar23) && (uVar33 = uVar2, (int)uVar2 < iVar25)) {
                              do {
                                iVar25 = iVar25 - uVar33;
                                uVar34 = uVar33 >> 1;
                                if (uVar33 < 4) break;
                                uVar33 = uVar34;
                              } while ((int)uVar34 < iVar25);
                            }
                            iVar25 = uVar34 + iVar25;
                            uVar14 = uVar14 + 1;
                          } while (uVar14 != uVar45);
                        }
                        param_4 = (ulong)uStack_644;
                        FUN_109555338(puVar16,puVar19,uVar45);
                        if (uVar3 == 1) {
LAB_109555284:
                          _memcpy(puVar21 + (long)iVar13 * 8,puVar19,puVar18);
                        }
                        else if (0 < (int)uVar23) goto LAB_10955523c;
                      }
LAB_109555298:
                      iVar37 = iVar37 + 1;
                      uVar14 = (ulong)*puVar16;
                      iVar13 = 0;
                      if (uVar23 != 0) {
                        iVar13 = (int)*puVar16 / (int)uVar23;
                      }
                    } while (iVar37 < iVar13);
                  }
                  _free(puVar19);
                  if ((uVar23 & uVar39) != 0) {
                    _free(puStack_660);
                    _free(puStack_688);
                    _free(uStack_6c8);
                  }
                  uVar27 = uVar27 + 1;
                  puVar28 = *(ulong **)(puVar16 + 2);
                } while (uVar27 < *puVar28);
              }
              return;
            }
            uStack_430 = uVar14;
            FUN_109555d50(&uStack_4e0);
            uVar39 = (int)uStack_4c8 * (int)uStack_4d0 * uStack_4d0._4_4_;
            uVar23 = uVar39 + 0xf;
            if (-1 < (int)uVar39) {
              uVar23 = uVar39;
            }
            uVar2 = uVar23 & 0xfffffff0;
            if (0xf < (int)uVar39) {
              lVar26 = 0;
              uVar14 = 0;
              do {
                lVar38 = 4;
                lVar40 = lVar26;
                do {
                  uVar43 = *(undefined8 *)(uStack_430 + lVar40);
                  *(undefined8 *)((long)(uStack_500 + lVar40) + 8) =
                       ((undefined8 *)(uStack_430 + lVar40))[1];
                  *(undefined8 *)(uStack_500 + lVar40) = uVar43;
                  lVar40 = lVar40 + 0x10;
                  lVar38 = lVar38 + -1;
                } while (lVar38 != 0);
                uVar14 = uVar14 + 0x10;
                lVar26 = lVar26 + 0x40;
              } while (uVar14 < uVar2);
            }
            uVar1 = uVar39 + 3;
            if (-1 < (int)uVar39) {
              uVar1 = uVar39;
            }
            uVar1 = uVar1 & 0xfffffffc;
            if ((int)uVar2 < (int)uVar1) {
              lVar26 = (long)(int)uVar2;
              uVar14 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
              do {
                uVar43 = *(undefined8 *)(uStack_430 + uVar14);
                *(undefined8 *)((long)(uStack_500 + uVar14) + 8) =
                     ((undefined8 *)(uStack_430 + uVar14))[1];
                *(undefined8 *)(uStack_500 + uVar14) = uVar43;
                lVar26 = lVar26 + 4;
                uVar14 = uVar14 + 0x10;
              } while (lVar26 < (int)uVar1);
            }
            if ((int)uVar1 < (int)uVar39) {
              lVar26 = (long)(int)uVar1;
              do {
                *(undefined4 *)(uStack_500 + lVar26 * 4) = *(undefined4 *)(uStack_430 + lVar26 * 4);
                lVar26 = lVar26 + 1;
                uVar14 = uStack_430;
              } while ((int)uVar39 != lVar26);
              goto LAB_109554a08;
            }
          }
          else {
            FUN_109555d50(&uStack_4e0,puVar24);
          }
          uVar14 = uStack_430;
          if (uStack_430 == 0) {
            return;
          }
        }
        else {
          if (*piVar15 != 0) {
            lVar26 = *(long *)(piVar15 + 2);
            iVar37 = aiStack_548[5] * aiStack_548[4];
            uStack_500 = *(undefined **)(lVar26 + 0x10);
            uStack_4f8 = (long)uStack_500 + (long)iVar37 * 4;
            _vDSP_ctoz(puVar21,2,&uStack_500,1,(long)iVar37);
            uStack_558 = *(long *)(lVar26 + 0x10) + (long)(iVar37 * 2) * 4;
            uVar43 = *(undefined8 *)(lVar26 + 8);
            dVar10 = (double)aiStack_548[5];
            uVar46 = SUB81(dVar10,0);
            uVar47 = (undefined1)((ulong)dVar10 >> 8);
            uVar48 = (undefined1)((ulong)dVar10 >> 0x10);
            uVar49 = (undefined1)((ulong)dVar10 >> 0x18);
            uVar50 = (undefined1)((ulong)dVar10 >> 0x20);
            uVar51 = (undefined1)((ulong)dVar10 >> 0x28);
            uVar52 = (undefined1)((ulong)dVar10 >> 0x30);
            uVar53 = (undefined1)((ulong)dVar10 >> 0x38);
            uStack_560 = puVar24;
            _log2();
            _log2();
            _vDSP_fft2d_zop(uVar43,&uStack_500,1,0,&uStack_560,1,0,
                            (long)(double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(
                                                  uVar50,CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(
                                                  uVar47,uVar46))))))));
            afStack_578[0] = 1.0 / (float)iVar37;
            _vDSP_vsmul(puVar24,1,afStack_578,puVar24,1,(long)iVar37);
            return;
          }
          FUN_10936ff7c(&uStack_500,param_4,param_2,0xd,puVar21,
                        -(ulong)((aiStack_548[5] & 0x7fffffffU) >> 0x1e) & 0xfffffffc00000000 |
                        (ulong)(uint)(aiStack_548[5] << 1) << 2);
          FUN_10936ff7c(&uStack_560,param_4,param_2,5,puVar24,
                        -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2);
          uStack_568 = 0;
          afStack_578[0] = 2.3693558e-38;
          auStack_590[0] = 0x2010000;
          uStack_580 = 0;
          puStack_588 = &uStack_560;
          puStack_570 = &uStack_500;
          FUN_109a50598(afStack_578,auStack_590,0x23,0);
          if (CONCAT44(uStack_524,uStack_528) != 0) {
            piVar15 = (int *)(CONCAT44(uStack_524,uStack_528) + 0x14);
            do {
              iVar37 = *piVar15;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar7) {
                *piVar15 = iVar37 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar37 + -1 == 0) {
              func_0x000109a848d4(&uStack_560);
            }
          }
          uStack_528 = 0;
          uStack_524 = 0;
          aiStack_548[0] = 0;
          aiStack_548[1] = 0;
          uStack_550 = 0;
          aiStack_548[4] = 0;
          aiStack_548[5] = 0;
          aiStack_548[2] = 0;
          aiStack_548[3] = 0;
          if (0 < uStack_560._4_4_) {
            lVar26 = 0;
            do {
              *(undefined4 *)(CONCAT44(uStack_51c,uStack_520) + lVar26 * 4) = 0;
              lVar26 = lVar26 + 1;
            } while (lVar26 < uStack_560._4_4_);
          }
          puVar12 = (undefined1 *)CONCAT71(uStack_517,uStack_518);
          if (puVar12 != auStack_510 && puVar12 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puVar12 + -8));
          }
          if (uStack_4c8 != 0) {
            piVar15 = (int *)(uStack_4c8 + 0x14);
            do {
              iVar37 = *piVar15;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
              if (bVar7) {
                *piVar15 = iVar37 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar37 + -1 == 0) {
              func_0x000109a848d4(&uStack_500);
            }
          }
          uStack_4c8 = 0;
          pfStack_4e8 = (float *)0x0;
          uStack_4f0 = 0;
          puStack_4d8 = (undefined8 *)0x0;
          uStack_4e0 = 0;
          if (0 < uStack_500._4_4_) {
            lVar26 = 0;
            do {
              *(undefined4 *)(CONCAT44(uStack_4bc,uStack_4c0) + lVar26 * 4) = 0;
              lVar26 = lVar26 + 1;
            } while (lVar26 < uStack_500._4_4_);
          }
          if (uStack_4b8 == &uStack_4b0 || uStack_4b8 == (undefined4 *)0x0) {
            return;
          }
          uVar14 = *(ulong *)(uStack_4b8 + -2);
        }
LAB_109554a08:
        _free(uVar14);
        return;
      }
      uStack_160 = uVar14;
      FUN_109554a74(&uStack_210);
      uVar39 = (int)uStack_1f8 * (int)uStack_200 * uStack_200._4_4_;
      uVar23 = uVar39 + 7;
      if (-1 < (int)uVar39) {
        uVar23 = uVar39;
      }
      uVar2 = uVar23 & 0xfffffff8;
      if (7 < (int)uVar39) {
        lVar26 = 0;
        uVar14 = 0;
        do {
          lVar38 = 4;
          lVar40 = lVar26;
          do {
            uVar43 = *(undefined8 *)(uStack_160 + lVar40);
            ((undefined8 *)(uStack_230 + lVar40))[1] = ((undefined8 *)(uStack_160 + lVar40))[1];
            *(undefined8 *)(uStack_230 + lVar40) = uVar43;
            lVar40 = lVar40 + 0x10;
            lVar38 = lVar38 + -1;
          } while (lVar38 != 0);
          uVar14 = uVar14 + 8;
          lVar26 = lVar26 + 0x40;
        } while (uVar14 < uVar2);
      }
      uVar1 = uVar39 - ((int)uVar39 >> 0x1f) & 0xfffffffe;
      if ((int)uVar2 < (int)uVar1) {
        lVar26 = (long)(int)uVar2;
        uVar14 = -(ulong)(uVar23 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
        do {
          uVar43 = *(undefined8 *)(uStack_160 + uVar14);
          ((undefined8 *)(uStack_230 + uVar14))[1] = ((undefined8 *)(uStack_160 + uVar14))[1];
          *(undefined8 *)(uStack_230 + uVar14) = uVar43;
          lVar26 = lVar26 + 2;
          uVar14 = uVar14 + 0x10;
        } while (lVar26 < (int)uVar1);
      }
      if ((int)uVar1 < (int)uVar39) {
        lVar26 = (long)(int)uVar1;
        do {
          *(undefined8 *)(uStack_230 + lVar26 * 8) = *(undefined8 *)(uStack_160 + lVar26 * 8);
          lVar26 = lVar26 + 1;
          uVar14 = uStack_160;
        } while ((int)uVar39 != lVar26);
        goto LAB_109554428;
      }
    }
    else {
      FUN_109554a74(&uStack_210,param_3);
    }
    uVar14 = uStack_160;
    if (uStack_160 == 0) {
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      lVar26 = *(long *)(param_1 + 2);
      iVar37 = uVar23 * aiStack_278[4];
      auStack_2a8[0] = 0;
      uStack_230 = param_2;
      _vDSP_vfill(auStack_2a8,*(undefined8 *)(lVar26 + 0x10),1,(long)iVar37);
      uStack_228 = *(long *)(lVar26 + 0x10);
      uStack_290 = uStack_228 + (long)iVar37 * 4;
      uStack_288 = uStack_228 + (long)(iVar37 * 2) * 4;
      uVar43 = *(undefined8 *)(lVar26 + 8);
      dVar10 = (double)(int)uVar23;
      uVar46 = SUB81(dVar10,0);
      uVar47 = (undefined1)((ulong)dVar10 >> 8);
      uVar48 = (undefined1)((ulong)dVar10 >> 0x10);
      uVar49 = (undefined1)((ulong)dVar10 >> 0x18);
      uVar50 = (undefined1)((ulong)dVar10 >> 0x20);
      uVar51 = (undefined1)((ulong)dVar10 >> 0x28);
      uVar52 = (undefined1)((ulong)dVar10 >> 0x30);
      uVar53 = (undefined1)((ulong)dVar10 >> 0x38);
      _log2();
      _log2();
      _vDSP_fft2d_zop(uVar43,&uStack_230,1,0,&uStack_290,1,0,
                      (long)(double)CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,
                                                  CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,
                                                  uVar46))))))));
      _vDSP_ztoc(&uStack_290,1,param_3,2,(long)iVar37);
      return;
    }
    FUN_10936ff7c(&uStack_230,param_4,param_5,5,param_2,
                  -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
    FUN_10936ff7c(&uStack_290,param_4,param_5,0xd,param_3,
                  -(ulong)((uVar23 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 |
                  (ulong)(uVar23 << 1) << 2);
    uStack_298 = 0;
    auStack_2a8[0] = 0x1010000;
    auStack_2c0[0] = 0x2010000;
    uStack_2b0 = 0;
    puStack_2b8 = &uStack_290;
    puStack_2a0 = &uStack_230;
    FUN_109a50598(auStack_2a8,auStack_2c0,0x10,0);
    if (CONCAT44(uStack_254,uStack_258) != 0) {
      piVar15 = (int *)(CONCAT44(uStack_254,uStack_258) + 0x14);
      do {
        iVar37 = *piVar15;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = iVar37 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar37 + -1 == 0) {
        func_0x000109a848d4(&uStack_290);
      }
    }
    uStack_258 = 0;
    uStack_254 = 0;
    aiStack_278[0] = 0;
    aiStack_278[1] = 0;
    uStack_280 = 0;
    aiStack_278[4] = 0;
    aiStack_278[5] = 0;
    aiStack_278[2] = 0;
    aiStack_278[3] = 0;
    if (0 < uStack_290._4_4_) {
      lVar26 = 0;
      do {
        *(undefined4 *)(CONCAT44(uStack_24c,uStack_250) + lVar26 * 4) = 0;
        lVar26 = lVar26 + 1;
      } while (lVar26 < uStack_290._4_4_);
    }
    puVar12 = (undefined1 *)CONCAT71(uStack_247,uStack_248);
    if (puVar12 != auStack_240 && puVar12 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puVar12 + -8));
    }
    if (uStack_1f8 != 0) {
      piVar15 = (int *)(uStack_1f8 + 0x14);
      do {
        iVar37 = *piVar15;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar7) {
          *piVar15 = iVar37 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar37 + -1 == 0) {
        func_0x000109a848d4(&uStack_230);
      }
    }
    uStack_1f8 = 0;
    puStack_218 = (undefined4 *)0x0;
    uStack_220 = 0;
    puStack_208 = (undefined8 *)0x0;
    uStack_210 = 0;
    if (0 < uStack_230._4_4_) {
      lVar26 = 0;
      do {
        *(undefined4 *)(CONCAT44(uStack_1ec,uStack_1f0) + lVar26 * 4) = 0;
        lVar26 = lVar26 + 1;
      } while (lVar26 < uStack_230._4_4_);
    }
    if (uStack_1e8 == &uStack_1e0 || uStack_1e8 == (undefined4 *)0x0) {
      return;
    }
    uVar14 = *(ulong *)(uStack_1e8 + -2);
  }
LAB_109554428:
  _free(uVar14);
  return;
}



/* Entry: 109554494; end: 109554a73;  */

void FUN_109554494(int *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  float fVar12;
  undefined1 *puVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined *puVar21;
  float *pfVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  uint uVar32;
  uint uVar33;
  undefined8 *puVar34;
  uint *puVar35;
  int iVar36;
  long lVar37;
  int *piVar38;
  long lVar39;
  float *pfVar40;
  undefined4 *puVar41;
  undefined8 uVar42;
  uint uVar43;
  ulong uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  float extraout_s1_05;
  undefined4 extraout_s1_06;
  float extraout_s1_07;
  undefined4 extraout_s1_08;
  float extraout_s1_09;
  undefined4 extraout_s1_10;
  float extraout_s1_11;
  undefined4 extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  double extraout_d1;
  undefined1 auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 uStack_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_3f8;
  undefined8 *puStack_3b8;
  undefined8 *puStack_390;
  uint uStack_374;
  undefined8 uStack_350;
  undefined4 auStack_2c0 [2];
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  float afStack_2a8 [2];
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_288;
  undefined8 uStack_280;
  int aiStack_278 [6];
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 auStack_240 [16];
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  float *pfStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined8 uStack_1d4;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined4 uStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  uint uStack_198;
  float *pfStack_190;
  float *pfStack_188;
  ulong uStack_180;
  uint uStack_178;
  undefined1 uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  ulong uStack_160;
  float *pfStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  
  aiStack_278[5] = (int)param_5;
  aiStack_278[4] = (int)param_4;
  if (*param_1 == 1) {
    lVar25 = 0;
    aiStack_278[2] = 0;
    aiStack_278[0] = 0;
    aiStack_278[1] = 0;
    uStack_174 = 1;
    uStack_288 = param_4 << 0x20 | 1;
    uStack_280 = CONCAT44(uStack_280._4_4_,aiStack_278[5]);
    aiStack_278[3] = 1;
    uStack_260 = 2;
    puStack_208 = &uStack_260;
    uStack_254 = 1;
    uStack_250 = 1;
    uStack_24c = 1;
    uStack_248 = 0;
    uStack_220 = CONCAT44(uStack_220._4_4_,aiStack_278[5]);
    pfStack_218 = afStack_2a8;
    uStack_1d4 = 0;
    uStack_1dc = 0;
    uStack_1c4 = 0;
    uStack_1cc = 0;
    uStack_1bc = 0;
    uStack_1a0 = uStack_288;
    uStack_198 = aiStack_278[5];
    uStack_168 = 0;
    uStack_170 = 0;
    do {
      if ((*(int *)((long)&uStack_1a0 + lVar25) != *(int *)((long)aiStack_278 + lVar25 + 0xc)) ||
         (*(int *)((long)aiStack_278 + lVar25) != 0)) {
        uStack_174 = 0;
      }
      lVar25 = lVar25 + 4;
    } while (lVar25 != 0xc);
    lVar25 = 0;
    uStack_1b0 = 1;
    iStack_1b8 = aiStack_278[4] * aiStack_278[5];
    uStack_1e0 = 1;
    uVar23 = 1;
    piVar38 = (int *)((long)&uStack_1cc + 4);
    do {
      uVar23 = aiStack_278[lVar25 + 5] * uVar23;
      uVar3 = uVar23;
      if ((int)uVar23 < 2) {
        uVar3 = 1;
      }
      iVar36 = 0x1f;
      if (0x80000000U >> (ulong)((uint)LZCOUNT(uVar3) & 0x1f) != uVar3) {
        iVar36 = 0x20;
      }
      iVar36 = iVar36 - (uint)LZCOUNT(uVar3);
      *(uint *)((long)&uStack_1e8 + lVar25 * 4 + 4) = uVar23;
      iVar14 = 0;
      if ((ulong)uVar3 != 0) {
        iVar14 = (int)((ulong)(1L << ((ulong)(iVar36 + 0x20) & 0x3f)) / (ulong)uVar3);
      }
      iVar24 = 0;
      if (iVar36 != 0) {
        iVar24 = iVar36 + -1;
      }
      piVar38[-2] = iVar14 + 1;
      piVar38[-1] = (uint)(iVar36 != 0);
      *piVar38 = iVar24;
      lVar25 = lVar25 + -1;
      piVar38 = piVar38 + -3;
    } while (lVar25 != -2);
    pfStack_158 = afStack_2a8;
    uStack_160 = 0;
    uStack_108 = 0xae9de9e6af9de9e6;
    uStack_110 = 0xb09de9e6b19de9e6;
    uStack_f8 = 0xaa9de9e6ab9de9e6;
    uStack_100 = 0xac9de9e6ad9de9e6;
    uStack_e8 = 0xa69de9e6a79de9e6;
    uStack_f0 = 0xa89de9e6a99de9e6;
    uStack_d8 = 0xa29de9e6a39de9e6;
    uStack_e0 = 0xa49de9e6a59de9e6;
    uStack_148 = 0xbe95f61abf800000;
    uStack_150 = 0xc000000000000000;
    uStack_138 = 0xba9de1c8bb9dc971;
    uStack_140 = 0xbc9d6830bd9be50c;
    uStack_128 = 0xb69de9deb79de9c6;
    uStack_130 = 0xb89de964b99de7df;
    uStack_118 = 0xb29de9e6b39de9e6;
    uStack_120 = 0xb49de9e6b59de9e4;
    uStack_68 = 0xb3490fdbb3c90fdb;
    uStack_70 = 0xb4490fdbb4c90fdb;
    uStack_58 = 0xb1490fdbb1c90fdb;
    uStack_60 = 0xb2490fdbb2c90fdb;
    uStack_88 = 0xb7490fdbb7c90fdb;
    uStack_90 = 0xb8490fdbb8c90fdb;
    uStack_78 = 0xb5490fdbb5c90fdb;
    uStack_80 = 0xb6490fdbb6c90fdb;
    uStack_a8 = 0xbb490fc6bbc90f88;
    uStack_b0 = 0xbc490e90bcc90ab0;
    uStack_98 = 0xb9490fdbb9c90fda;
    uStack_a0 = 0xba490fd9bac90fd5;
    uStack_c8 = 0xbf3504f3bf800000;
    uStack_d0 = 0;
    uStack_b8 = 0xbd48fb30bdc8bd36;
    uStack_c0 = 0xbe47c5c2bec3ef15;
    uStack_1ec = 1;
    uVar23 = aiStack_278[5] * aiStack_278[4];
    uStack_1f8 = CONCAT44(aiStack_278[4] * aiStack_278[5],aiStack_278[5]);
    uStack_210 = CONCAT44(uStack_210._4_4_,uVar23);
    uStack_290 = param_2;
    uStack_230 = param_3;
    uStack_228 = uStack_288;
    uStack_200 = uStack_288;
    uStack_1f0 = aiStack_278[5];
    uStack_1b4 = aiStack_278[5];
    uStack_1a8 = param_2;
    pfStack_190 = pfStack_218;
    pfStack_188 = pfStack_218;
    uStack_180 = uStack_288;
    uStack_178 = aiStack_278[5];
    if (param_3 == 0) {
      uVar15 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar23 << 2;
      _malloc();
      if ((uVar23 != 0) && (uVar15 == 0)) {
        puVar16 = (uint *)0x8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        puVar21 = PTR___ZTISt9bad_alloc_110346a68;
        ___cxa_throw();
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        func_0x00010567aa40(&uStack_290);
        func_0x00010567aa40(&uStack_230);
        __Unwind_Resume();
        uVar15 = (ulong)*puVar16;
        if (0 < (int)*puVar16) {
          uVar26 = 0;
          uVar23 = puVar16[0x27];
          lVar25 = *(long *)(puVar16 + 0x1a);
          do {
            if ((uVar23 & 1) == 0) {
              lVar39 = 0;
              iVar36 = 0;
              uVar17 = uVar26;
              bVar8 = true;
              do {
                bVar20 = bVar8;
                puVar35 = puVar16 + lVar39 * 3 + 0xd;
                iVar14 = (int)uVar17;
                iVar24 = (int)((ulong)*puVar35 * (long)iVar14 >> 0x20);
                uVar1 = ((uint)(iVar14 - iVar24) >> (ulong)(puVar35[1] & 0x1f)) + iVar24 >>
                        (ulong)(puVar35[2] & 0x1f);
                uVar3 = uVar1 + puVar16[lVar39 + 0x28];
                param_4 = (ulong)uVar3;
                iVar36 = iVar36 + uVar3 * puVar16[lVar39 + 0x16];
                uVar3 = iVar14 - uVar1 * puVar16[lVar39 + 10];
                uVar17 = (ulong)uVar3;
                lVar39 = 1;
                bVar8 = false;
              } while (bVar20);
              iVar36 = iVar36 + uVar3 + puVar16[0x2a];
            }
            else {
              iVar36 = (int)uVar26;
            }
            *(ulong *)(puVar21 + uVar26 * 8) = (ulong)*(uint *)(lVar25 + (long)iVar36 * 4);
            uVar26 = uVar26 + 1;
          } while (uVar26 != uVar15);
        }
        puVar27 = *(ulong **)(puVar16 + 2);
        if (*puVar27 != 0) {
          uVar26 = 0;
          do {
            if ((puVar27[3] & 1) == 0) {
              iVar36 = (int)puVar27[2] * (int)uVar26;
            }
            else {
              iVar36 = 0;
              if (*(int *)((long)puVar27 + 0x14) != 0) {
                iVar36 = (int)uVar26 / *(int *)((long)puVar27 + 0x14);
              }
            }
            uVar17 = (long)*(int *)((long)puVar27 + 0xc) + (long)iVar36;
            uVar23 = puVar16[uVar17 + 4];
            uVar44 = (ulong)uVar23;
            puVar18 = (undefined8 *)(-(ulong)(uVar23 >> 0x1f) & 0xfffffff800000000 | uVar44 << 3);
            puVar19 = puVar18;
            _malloc();
            iVar36 = (int)param_4;
            if (uVar23 != 0 && puVar19 == (undefined8 *)0x0) goto LAB_109555318;
            uVar3 = uVar23 - 1;
            if ((uVar23 & uVar3) == 0) {
              if (uVar23 < 2) {
                uStack_374 = 0;
              }
              else {
                uStack_374 = 0;
                uVar29 = uVar44;
                do {
                  uVar1 = (int)uVar29 >> 1;
                  uVar29 = (ulong)uVar1;
                  uStack_374 = uStack_374 + 1;
                } while (1 < uVar1);
              }
              puStack_390 = (undefined8 *)0x0;
              uStack_3f8 = 0;
              uVar29 = 0;
              puStack_3b8 = (undefined8 *)0x0;
            }
            else {
              uVar28 = 2;
              do {
                uVar29 = uVar28;
                uVar28 = (ulong)(uint)((int)uVar29 << 1);
              } while ((int)uVar29 < (int)(uVar23 * 2 + -1));
              uStack_374 = 0;
              uVar28 = uVar29;
              do {
                uVar1 = (int)uVar28 >> 1;
                uVar28 = (ulong)uVar1;
                uStack_374 = uStack_374 + 1;
              } while (1 < uVar1);
              puStack_3b8 = (undefined8 *)(-(uVar29 >> 0x1f) & 0xfffffff800000000 | uVar29 << 3);
              puStack_390 = puStack_3b8;
              _malloc();
              iVar36 = (int)param_4;
              if (puStack_390 == (undefined8 *)0x0) {
LAB_109555318:
                lVar25 = 8;
                ___cxa_allocate_exception();
                __ZNSt9bad_allocC1Ev();
                pfVar22 = (float *)PTR___ZTISt9bad_alloc_110346a68;
                puVar21 = PTR___ZNSt9bad_allocD1Ev_110346998;
                ___cxa_throw();
                uVar23 = (uint)puVar21;
                if ((int)uVar23 < 9) {
                  if (uVar23 == 2) {
                    uVar42 = *(undefined8 *)(pfVar22 + 2);
                    uVar45 = (undefined1)((ulong)uVar42 >> 8);
                    uVar46 = (undefined1)((ulong)uVar42 >> 0x10);
                    uVar47 = (undefined1)((ulong)uVar42 >> 0x18);
                    uVar48 = (undefined1)((ulong)uVar42 >> 0x20);
                    uVar49 = (undefined1)((ulong)uVar42 >> 0x28);
                    uVar50 = (undefined1)((ulong)uVar42 >> 0x30);
                    uVar51 = (undefined1)((ulong)uVar42 >> 0x38);
                    auVar53[9] = uVar45;
                    auVar53._0_9_ = *(unkbyte9 *)pfVar22;
                    auVar53[10] = uVar46;
                    auVar53[0xb] = uVar47;
                    auVar53[0xc] = uVar48;
                    auVar53[0xd] = uVar49;
                    auVar53[0xe] = uVar50;
                    auVar53[0xf] = uVar51;
                    auVar9[9] = uVar45;
                    auVar9._0_9_ = *(unkbyte9 *)pfVar22;
                    auVar9[10] = uVar46;
                    auVar9[0xb] = uVar47;
                    auVar9[0xc] = uVar48;
                    auVar9[0xd] = uVar49;
                    auVar9[0xe] = uVar50;
                    auVar9[0xf] = uVar51;
                    auVar53 = NEON_ext(auVar53,auVar9,8,1);
                    fVar12 = auVar53._12_4_ - (float)((ulong)uVar42 >> 0x20);
                    *(ulong *)(pfVar22 + 2) =
                         CONCAT17((char)((uint)fVar12 >> 0x18),
                                  CONCAT16((char)((uint)fVar12 >> 0x10),
                                           CONCAT15((char)((uint)fVar12 >> 8),
                                                    CONCAT14(SUB41(fVar12,0),
                                                             auVar53._8_4_ - (float)uVar42))));
                    *(ulong *)pfVar22 =
                         CONCAT44(auVar53._4_4_ + (float)((ulong)*(undefined8 *)pfVar22 >> 0x20),
                                  auVar53._0_4_ + (float)*(undefined8 *)pfVar22);
                  }
                  else if (uVar23 == 4) {
                    fVar63 = *pfVar22 + pfVar22[2];
                    fVar59 = pfVar22[1] + pfVar22[3];
                    fVar64 = *pfVar22 - pfVar22[2];
                    fVar65 = pfVar22[1] - pfVar22[3];
                    fVar67 = pfVar22[4] + pfVar22[6];
                    fVar57 = pfVar22[5] + pfVar22[7];
                    uStack_4c8 = 0xbf80000000000000;
                    fVar12 = pfVar22[4] - pfVar22[6];
                    uVar45 = SUB41(fVar12,0);
                    uVar46 = (undefined1)((uint)fVar12 >> 8);
                    uVar47 = (undefined1)((uint)fVar12 >> 0x10);
                    uVar48 = (undefined1)((uint)fVar12 >> 0x18);
                    uStack_4d0 = CONCAT44(pfVar22[5] - pfVar22[7],fVar12);
                    FUN_1095512ac(&uStack_4c8,&uStack_4d0);
                    *pfVar22 = fVar63 + fVar67;
                    pfVar22[1] = fVar59 + fVar57;
                    pfVar22[2] = fVar64 + (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,
                                                  uVar45)));
                    pfVar22[3] = fVar65 + extraout_s1_18;
                    pfVar22[4] = fVar63 - fVar67;
                    pfVar22[5] = fVar59 - fVar57;
                    pfVar22[6] = fVar64 - (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,
                                                  uVar45)));
                    pfVar22[7] = fVar65 - extraout_s1_18;
                  }
                  else if (uVar23 == 8) {
                    fVar57 = *pfVar22 + pfVar22[2];
                    fVar58 = pfVar22[1] + pfVar22[3];
                    fVar64 = *pfVar22 - pfVar22[2];
                    fVar65 = pfVar22[1] - pfVar22[3];
                    fVar59 = pfVar22[4] + pfVar22[6];
                    fVar60 = pfVar22[5] + pfVar22[7];
                    fVar12 = pfVar22[4] - pfVar22[6];
                    uVar45 = SUB41(fVar12,0);
                    uVar46 = (undefined1)((uint)fVar12 >> 8);
                    uVar47 = (undefined1)((uint)fVar12 >> 0x10);
                    uVar48 = (undefined1)((uint)fVar12 >> 0x18);
                    uStack_4c8 = CONCAT44(pfVar22[5] - pfVar22[7],fVar12);
                    uStack_4d0 = 0xbf80000000000000;
                    FUN_1095512ac(&uStack_4c8,&uStack_4d0);
                    fVar12 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    fVar61 = pfVar22[8] + pfVar22[10];
                    fVar66 = pfVar22[9] + pfVar22[0xb];
                    fVar70 = pfVar22[8] - pfVar22[10];
                    fVar67 = pfVar22[9] - pfVar22[0xb];
                    fVar69 = pfVar22[0xc] + pfVar22[0xe];
                    fVar68 = pfVar22[0xd] + pfVar22[0xf];
                    fVar63 = pfVar22[0xc] - pfVar22[0xe];
                    uVar45 = SUB41(fVar63,0);
                    uVar46 = (undefined1)((uint)fVar63 >> 8);
                    uVar47 = (undefined1)((uint)fVar63 >> 0x10);
                    uVar48 = (undefined1)((uint)fVar63 >> 0x18);
                    uStack_4c8 = CONCAT44(pfVar22[0xd] - pfVar22[0xf],fVar63);
                    uStack_4d0 = 0xbf80000000000000;
                    FUN_1095512ac(&uStack_4c8,&uStack_4d0);
                    fVar63 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    fVar55 = fVar57 + fVar59;
                    fVar54 = fVar58 + fVar60;
                    fVar56 = fVar64 + fVar12;
                    fVar62 = fVar65 + extraout_s1_13;
                    fVar57 = fVar57 - fVar59;
                    fVar58 = fVar58 - fVar60;
                    fVar64 = fVar64 - fVar12;
                    fVar65 = fVar65 - extraout_s1_13;
                    fVar60 = fVar61 + fVar69;
                    fVar10 = fVar66 + fVar68;
                    uStack_4c8 = CONCAT44(fVar67 + extraout_s1_14,fVar70 + fVar63);
                    uVar45 = 0xf3;
                    uVar46 = 4;
                    uVar47 = 0x35;
                    uVar48 = 0x3f;
                    uStack_4d0 = 0xbf3504f33f3504f3;
                    FUN_1095512ac(&uStack_4c8,&uStack_4d0);
                    fVar12 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    uStack_4c8 = CONCAT44(fVar66 - fVar68,fVar61 - fVar69);
                    uVar45 = 0;
                    uVar46 = 0;
                    uVar47 = 0;
                    uVar48 = 0;
                    uStack_4d0 = 0xbf80000000000000;
                    FUN_1095512ac(&uStack_4c8,&uStack_4d0);
                    fVar59 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    uStack_4c8 = CONCAT44(fVar67 - extraout_s1_14,fVar70 - fVar63);
                    uVar45 = 0xf3;
                    uVar46 = 4;
                    uVar47 = 0x35;
                    uVar48 = 0xbf;
                    uStack_4d0 = 0xbf3504f3bf3504f3;
                    FUN_1095512ac(&uStack_4c8,&uStack_4d0);
                    *pfVar22 = fVar55 + fVar60;
                    pfVar22[1] = fVar54 + fVar10;
                    pfVar22[2] = fVar56 + fVar12;
                    pfVar22[3] = fVar62 + extraout_s1_15;
                    pfVar22[4] = fVar57 + fVar59;
                    pfVar22[5] = fVar58 + extraout_s1_16;
                    pfVar22[6] = fVar64 + (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,
                                                  uVar45)));
                    pfVar22[7] = fVar65 + extraout_s1_17;
                    pfVar22[8] = fVar55 - fVar60;
                    pfVar22[9] = fVar54 - fVar10;
                    pfVar22[10] = fVar56 - fVar12;
                    pfVar22[0xb] = fVar62 - extraout_s1_15;
                    pfVar22[0xc] = fVar57 - fVar59;
                    pfVar22[0xd] = fVar58 - extraout_s1_16;
                    pfVar22[0xe] = fVar64 - (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,
                                                  uVar45)));
                    pfVar22[0xf] = fVar65 - extraout_s1_17;
                  }
                }
                else {
                  uVar26 = (ulong)(uVar23 >> 1);
                  FUN_109555338();
                  FUN_109555338(lVar25,pfVar22 + uVar26 * 2,uVar26,iVar36 + -1);
                  lVar25 = lVar25 + (long)iVar36 * 4;
                  fVar12 = *(float *)(lVar25 + 0xc0) + 1.0;
                  uVar45 = SUB41(fVar12,0);
                  uVar46 = (undefined1)((uint)fVar12 >> 8);
                  uVar47 = (undefined1)((uint)fVar12 >> 0x10);
                  uVar48 = (undefined1)((uint)fVar12 >> 0x18);
                  uStack_4c8 = CONCAT44(*(float *)(lVar25 + 0x140) + 0.0,fVar12);
                  FUN_1095512ac(&uStack_4c8,&uStack_4c8);
                  uStack_4d0 = CONCAT44(extraout_s1_02,
                                        CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))));
                  FUN_1095512ac(&uStack_4d0,&uStack_4c8);
                  uStack_4d8 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                  uStack_4d4 = extraout_s1_03;
                  FUN_1095512ac(&uStack_4d8,&uStack_4c8);
                  uVar15 = 0;
                  uStack_4e0 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                  uVar45 = 0;
                  uVar46 = 0;
                  uVar47 = 0x80;
                  uVar48 = 0x3f;
                  uStack_4e8 = 0x3f800000;
                  uStack_4dc = extraout_s1_04;
                  do {
                    pfVar40 = pfVar22 + uVar26 * 2;
                    FUN_1095512ac(pfVar40,&uStack_4e8);
                    fVar12 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    FUN_1095512ac(pfVar40 + 2,&uStack_4e8);
                    uStack_4f0 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    uStack_4ec = extraout_s1_06;
                    FUN_1095512ac(&uStack_4f0,&uStack_4c8);
                    fVar63 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    FUN_1095512ac(pfVar40 + 4,&uStack_4e8);
                    uStack_4f0 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    uStack_4ec = extraout_s1_08;
                    FUN_1095512ac(&uStack_4f0,&uStack_4d0);
                    fVar59 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    FUN_1095512ac(pfVar40 + 6,&uStack_4e8);
                    uStack_4f0 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    uStack_4ec = extraout_s1_10;
                    FUN_1095512ac(&uStack_4f0,&uStack_4d8);
                    fVar64 = (float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    FUN_1095512ac(&uStack_4e8,&uStack_4e0);
                    uStack_4e8 = CONCAT44(extraout_s1_12,
                                          CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))))
                    ;
                    fVar65 = (float)((ulong)*(undefined8 *)pfVar22 >> 0x20) - extraout_s1_05;
                    *(ulong *)(pfVar22 + uVar26 * 2) =
                         CONCAT17((char)((uint)fVar65 >> 0x18),
                                  CONCAT16((char)((uint)fVar65 >> 0x10),
                                           CONCAT15((char)((uint)fVar65 >> 8),
                                                    CONCAT14(SUB41(fVar65,0),
                                                             (float)*(undefined8 *)pfVar22 - fVar12)
                                                   )));
                    fVar65 = (float)((ulong)*(undefined8 *)(pfVar22 + 2) >> 0x20) - extraout_s1_07;
                    *(ulong *)(pfVar40 + 2) =
                         CONCAT17((char)((uint)fVar65 >> 0x18),
                                  CONCAT16((char)((uint)fVar65 >> 0x10),
                                           CONCAT15((char)((uint)fVar65 >> 8),
                                                    CONCAT14(SUB41(fVar65,0),
                                                             (float)*(undefined8 *)(pfVar22 + 2) -
                                                             fVar63))));
                    uVar42 = *(undefined8 *)(pfVar22 + 2);
                    fVar12 = fVar12 + (float)*(undefined8 *)pfVar22;
                    uVar45 = SUB41(fVar12,0);
                    uVar46 = (undefined1)((uint)fVar12 >> 8);
                    uVar47 = (undefined1)((uint)fVar12 >> 0x10);
                    uVar48 = (undefined1)((uint)fVar12 >> 0x18);
                    fVar65 = extraout_s1_05 + (float)((ulong)*(undefined8 *)pfVar22 >> 0x20);
                    fVar67 = extraout_s1_07 + (float)((ulong)uVar42 >> 0x20);
                    *(ulong *)(pfVar40 + 4) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 4) >> 0x20) -
                                  extraout_s1_09,(float)*(undefined8 *)(pfVar22 + 4) - fVar59);
                    *(ulong *)(pfVar40 + 6) =
                         CONCAT44((float)((ulong)*(undefined8 *)(pfVar22 + 6) >> 0x20) -
                                  extraout_s1_11,(float)*(undefined8 *)(pfVar22 + 6) - fVar64);
                    *(ulong *)(pfVar22 + 2) =
                         CONCAT17((char)((uint)fVar67 >> 0x18),
                                  CONCAT16((char)((uint)fVar67 >> 0x10),
                                           CONCAT15((char)((uint)fVar67 >> 8),
                                                    CONCAT14(SUB41(fVar67,0),fVar63 + (float)uVar42)
                                                   )));
                    *(ulong *)pfVar22 =
                         CONCAT17((char)((uint)fVar65 >> 0x18),
                                  CONCAT16((char)((uint)fVar65 >> 0x10),
                                           CONCAT15((char)((uint)fVar65 >> 8),
                                                    CONCAT14(SUB41(fVar65,0),fVar12))));
                    pfVar22[6] = fVar64 + pfVar22[6];
                    pfVar22[7] = extraout_s1_11 + pfVar22[7];
                    pfVar22[4] = fVar59 + pfVar22[4];
                    pfVar22[5] = extraout_s1_09 + pfVar22[5];
                    uVar15 = uVar15 + 4;
                    pfVar22 = pfVar22 + 8;
                  } while (uVar15 < uVar26);
                }
                return;
              }
              _malloc();
              iVar36 = (int)param_4;
              if (puStack_3b8 == (undefined8 *)0x0) goto LAB_109555318;
              uVar1 = uVar23 + 1;
              uStack_3f8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
              _malloc();
              iVar36 = (int)param_4;
              if ((uVar1 != 0) && (uStack_3f8 == 0)) goto LAB_109555318;
              if (-1 < (int)uVar23) {
                uVar28 = 0;
                do {
                  dVar11 = ((double)(uVar28 & 0xffffffff) * 3.141592653589793 *
                           (double)(uVar28 & 0xffffffff)) / (double)uVar23;
                  uVar45 = SUB81(dVar11,0);
                  uVar46 = (undefined1)((ulong)dVar11 >> 8);
                  uVar47 = (undefined1)((ulong)dVar11 >> 0x10);
                  uVar48 = (undefined1)((ulong)dVar11 >> 0x18);
                  uVar49 = (undefined1)((ulong)dVar11 >> 0x20);
                  uVar50 = (undefined1)((ulong)dVar11 >> 0x28);
                  uVar51 = (undefined1)((ulong)dVar11 >> 0x30);
                  uVar52 = (undefined1)((ulong)dVar11 >> 0x38);
                  ___sincos_stret();
                  fVar12 = (float)(double)CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(
                                                  uVar49,CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(
                                                  uVar46,uVar45)))))));
                  *(ulong *)(uStack_3f8 + uVar28 * 8) =
                       CONCAT17((char)((uint)fVar12 >> 0x18),
                                CONCAT16((char)((uint)fVar12 >> 0x10),
                                         CONCAT15((char)((uint)fVar12 >> 8),
                                                  CONCAT14(SUB41(fVar12,0),(float)extraout_d1))));
                  uVar28 = uVar28 + 1;
                } while (uVar1 != uVar28);
              }
            }
            iVar36 = 0;
            if (uVar23 != 0) {
              iVar36 = (int)uVar15 / (int)uVar23;
            }
            if (0 < iVar36) {
              iVar36 = 0;
              uVar1 = uVar23 >> 1;
              uVar43 = (uint)uVar29;
              uVar2 = uVar43 >> 1;
              pfVar22 = (float *)(uStack_3f8 + 4);
              do {
                iVar24 = 0;
                iVar14 = iVar36;
                if (0 < (int)uVar17) {
                  puVar35 = puVar16 + 7;
                  uVar15 = uVar17 & 0xffffffff;
                  do {
                    iVar5 = 0;
                    if (puVar16[(uVar17 & 0xffffffff) + 4] != 0) {
                      iVar5 = (int)*puVar35 / (int)puVar16[(uVar17 & 0xffffffff) + 4];
                    }
                    iVar6 = 0;
                    if (iVar5 != 0) {
                      iVar6 = iVar14 / iVar5;
                    }
                    iVar14 = iVar14 - iVar6 * iVar5;
                    iVar24 = iVar24 + iVar6 * *puVar35;
                    uVar15 = uVar15 - 1;
                    puVar35 = puVar35 + 1;
                  } while (uVar15 != 0);
                }
                iVar14 = iVar14 + iVar24;
                uVar4 = (puVar16 + 7)[uVar17];
                pfVar40 = pfVar22;
                uVar15 = uVar44;
                puVar30 = puVar19;
                puVar41 = (undefined4 *)((long)puStack_390 + 4);
                if (uVar4 == 1) {
                  _memcpy(puVar19,puVar21 + (long)iVar14 * 8,puVar18);
                  if ((uVar23 & uVar3) == 0) goto LAB_10955501c;
                  if (0 < (int)uVar23) {
LAB_109554e70:
                    do {
                      fVar12 = pfVar40[-1];
                      uVar45 = SUB41(fVar12,0);
                      uVar46 = (undefined1)((uint)fVar12 >> 8);
                      uVar47 = (undefined1)((uint)fVar12 >> 0x10);
                      uVar48 = (undefined1)((uint)fVar12 >> 0x18);
                      uStack_350 = CONCAT44(-*pfVar40,fVar12);
                      FUN_1095512ac(puVar30,&uStack_350);
                      puVar41[-1] = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                      *puVar41 = extraout_s1;
                      uVar15 = uVar15 - 1;
                      pfVar40 = pfVar40 + 2;
                      puVar30 = puVar30 + 1;
                      puVar41 = puVar41 + 2;
                    } while (uVar15 != 0);
                  }
LAB_109554eac:
                  if ((int)uVar23 < (int)uVar43) {
                    _bzero((long)puStack_390 + (long)puVar18,(ulong)(uVar43 + ~uVar23) * 8 + 8);
                  }
                  if (0 < (int)uVar23) {
                    _memcpy(puStack_3b8,uStack_3f8,uVar44 << 3);
                  }
                  if ((int)uVar23 < (int)(uVar43 - uVar23)) {
                    _bzero((long)puStack_3b8 + (long)puVar18,
                           (ulong)(uVar43 + (uVar23 << 1 ^ 0xffffffff)) * 8 + 8);
                  }
                  puVar30 = (undefined8 *)(uStack_3f8 + (long)(int)uVar23 * 8);
                  lVar25 = (long)(int)(uVar43 - uVar23);
                  if (0 < (int)uVar23) {
                    do {
                      puStack_3b8[lVar25] = *puVar30;
                      lVar25 = lVar25 + 1;
                      puVar30 = puVar30 + -1;
                    } while (lVar25 < (int)uVar43);
                  }
                  if ((int)uVar43 < 2) {
                    FUN_109555338(puVar16,puStack_390,uVar29,uStack_374);
                  }
                  else {
                    uVar15 = 1;
                    iVar24 = 1;
                    do {
                      if ((long)uVar15 < (long)iVar24) {
                        uVar42 = puStack_390[(long)iVar24 + -1];
                        puStack_390[(long)iVar24 + -1] = puStack_390[uVar15 - 1];
                        puStack_390[uVar15 - 1] = uVar42;
                      }
                      uVar33 = uVar2;
                      if ((3 < uVar43) && (uVar32 = uVar2, (int)uVar2 < iVar24)) {
                        do {
                          iVar24 = iVar24 - uVar32;
                          uVar33 = uVar32 >> 1;
                          if (uVar32 < 4) break;
                          uVar32 = uVar33;
                        } while ((int)uVar33 < iVar24);
                      }
                      iVar24 = uVar33 + iVar24;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 != uVar29);
                    FUN_109555338(puVar16,puStack_390,uVar29,uStack_374);
                    uVar15 = 1;
                    iVar24 = 1;
                    do {
                      if ((long)uVar15 < (long)iVar24) {
                        uVar42 = puStack_3b8[(long)iVar24 + -1];
                        puStack_3b8[(long)iVar24 + -1] = puStack_3b8[uVar15 - 1];
                        puStack_3b8[uVar15 - 1] = uVar42;
                      }
                      uVar33 = uVar2;
                      if ((3 < uVar43) && (uVar32 = uVar2, (int)uVar2 < iVar24)) {
                        do {
                          iVar24 = iVar24 - uVar32;
                          uVar33 = uVar32 >> 1;
                          if (uVar32 < 4) break;
                          uVar32 = uVar33;
                        } while ((int)uVar33 < iVar24);
                      }
                      iVar24 = uVar33 + iVar24;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 != uVar29);
                  }
                  FUN_109555338(puVar16,puStack_3b8,uVar29,uStack_374);
                  puVar30 = puStack_3b8;
                  uVar15 = uVar29;
                  puVar31 = puStack_390;
                  if ((int)uVar43 < 1) {
                    param_4 = (ulong)uStack_374;
                    func_0x000109555844(puVar16,puStack_390,uVar29);
                  }
                  else {
                    do {
                      uStack_350 = *puVar30;
                      uVar45 = (undefined1)uStack_350;
                      uVar46 = (undefined1)((ulong)uStack_350 >> 8);
                      uVar47 = (undefined1)((ulong)uStack_350 >> 0x10);
                      uVar48 = (undefined1)((ulong)uStack_350 >> 0x18);
                      FUN_1095512ac(puVar31,&uStack_350);
                      *(uint *)puVar31 = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                      *(undefined4 *)((long)puVar31 + 4) = extraout_s1_00;
                      uVar15 = uVar15 - 1;
                      puVar30 = puVar30 + 1;
                      puVar31 = puVar31 + 1;
                    } while (uVar15 != 0);
                    param_4 = (ulong)uStack_374;
                    if (1 < (int)uVar43) {
                      uVar15 = 1;
                      iVar24 = 1;
                      do {
                        if ((long)uVar15 < (long)iVar24) {
                          uVar42 = puStack_390[(long)iVar24 + -1];
                          puStack_390[(long)iVar24 + -1] = puStack_390[uVar15 - 1];
                          puStack_390[uVar15 - 1] = uVar42;
                        }
                        uVar33 = uVar2;
                        if ((3 < uVar43) && (uVar32 = uVar2, (int)uVar2 < iVar24)) {
                          do {
                            iVar24 = iVar24 - uVar32;
                            uVar33 = uVar32 >> 1;
                            if (uVar32 < 4) break;
                            uVar32 = uVar33;
                          } while ((int)uVar33 < iVar24);
                        }
                        iVar24 = uVar33 + iVar24;
                        uVar15 = uVar15 + 1;
                      } while (uVar15 != uVar29);
                    }
                    func_0x000109555844(puVar16,puStack_390,uVar29);
                    puVar30 = puStack_390;
                    uVar15 = uVar29;
                    do {
                      fVar12 = (float)((ulong)*puVar30 >> 0x20) / (float)uVar29;
                      *puVar30 = CONCAT17((char)((uint)fVar12 >> 0x18),
                                          CONCAT16((char)((uint)fVar12 >> 0x10),
                                                   CONCAT15((char)((uint)fVar12 >> 8),
                                                            CONCAT14(SUB41(fVar12,0),
                                                                     (float)*puVar30 / (float)uVar29
                                                                    ))));
                      uVar15 = uVar15 - 1;
                      puVar30 = puVar30 + 1;
                    } while (uVar15 != 0);
                  }
                  pfVar40 = pfVar22;
                  puVar41 = (undefined4 *)((long)puVar19 + 4);
                  puVar30 = puStack_390;
                  uVar15 = uVar44;
                  if ((int)uVar23 < 1) {
                    if (uVar4 != 1) goto LAB_109555298;
                    goto LAB_109555284;
                  }
                  do {
                    fVar12 = pfVar40[-1];
                    uVar45 = SUB41(fVar12,0);
                    uVar46 = (undefined1)((uint)fVar12 >> 8);
                    uVar47 = (undefined1)((uint)fVar12 >> 0x10);
                    uVar48 = (undefined1)((uint)fVar12 >> 0x18);
                    uStack_350 = CONCAT44(-*pfVar40,fVar12);
                    FUN_1095512ac(puVar30,&uStack_350);
                    puVar41[-1] = CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45)));
                    *puVar41 = extraout_s1_01;
                    puVar41 = puVar41 + 2;
                    pfVar40 = pfVar40 + 2;
                    puVar30 = puVar30 + 1;
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                  if (uVar4 == 1) goto LAB_109555284;
LAB_10955523c:
                  puVar30 = (undefined8 *)(puVar21 + (long)iVar14 * 8);
                  puVar31 = puVar19;
                  uVar15 = uVar44;
                  do {
                    *puVar30 = *puVar31;
                    puVar30 = puVar30 + (int)uVar4;
                    uVar15 = uVar15 - 1;
                    puVar31 = puVar31 + 1;
                  } while (uVar15 != 0);
                }
                else {
                  if ((int)uVar23 < 1) {
                    if ((uVar23 & uVar23 - 1) != 0) goto LAB_109554eac;
                  }
                  else {
                    puVar31 = (undefined8 *)(puVar21 + (long)iVar14 * 8);
                    puVar34 = puVar19;
                    uVar28 = uVar44;
                    do {
                      *puVar34 = *puVar31;
                      puVar31 = puVar31 + (int)uVar4;
                      uVar28 = uVar28 - 1;
                      puVar34 = puVar34 + 1;
                    } while (uVar28 != 0);
                    if ((uVar23 & uVar23 - 1) != 0) goto LAB_109554e70;
                  }
LAB_10955501c:
                  if (1 < (int)uVar23) {
                    uVar15 = 1;
                    iVar24 = 1;
                    do {
                      if ((long)uVar15 < (long)iVar24) {
                        uVar42 = puVar19[(long)iVar24 + -1];
                        puVar19[(long)iVar24 + -1] = puVar19[uVar15 - 1];
                        puVar19[uVar15 - 1] = uVar42;
                      }
                      uVar33 = uVar1;
                      if ((3 < uVar23) && (uVar32 = uVar1, (int)uVar1 < iVar24)) {
                        do {
                          iVar24 = iVar24 - uVar32;
                          uVar33 = uVar32 >> 1;
                          if (uVar32 < 4) break;
                          uVar32 = uVar33;
                        } while ((int)uVar33 < iVar24);
                      }
                      iVar24 = uVar33 + iVar24;
                      uVar15 = uVar15 + 1;
                    } while (uVar15 != uVar44);
                  }
                  param_4 = (ulong)uStack_374;
                  FUN_109555338(puVar16,puVar19,uVar44);
                  if (uVar4 == 1) {
LAB_109555284:
                    _memcpy(puVar21 + (long)iVar14 * 8,puVar19,puVar18);
                  }
                  else if (0 < (int)uVar23) goto LAB_10955523c;
                }
LAB_109555298:
                iVar36 = iVar36 + 1;
                uVar15 = (ulong)*puVar16;
                iVar14 = 0;
                if (uVar23 != 0) {
                  iVar14 = (int)*puVar16 / (int)uVar23;
                }
              } while (iVar36 < iVar14);
            }
            _free(puVar19);
            if ((uVar23 & uVar3) != 0) {
              _free(puStack_390);
              _free(puStack_3b8);
              _free(uStack_3f8);
            }
            uVar26 = uVar26 + 1;
            puVar27 = *(ulong **)(puVar16 + 2);
          } while (uVar26 < *puVar27);
        }
        return;
      }
      uStack_160 = uVar15;
      FUN_109555d50(&uStack_210);
      uVar3 = (int)uStack_1f8 * (int)uStack_200 * uStack_200._4_4_;
      uVar23 = uVar3 + 0xf;
      if (-1 < (int)uVar3) {
        uVar23 = uVar3;
      }
      uVar1 = uVar23 & 0xfffffff0;
      if (0xf < (int)uVar3) {
        lVar25 = 0;
        uVar15 = 0;
        do {
          lVar37 = 4;
          lVar39 = lVar25;
          do {
            uVar42 = *(undefined8 *)(uStack_160 + lVar39);
            ((undefined8 *)(uStack_230 + lVar39))[1] = ((undefined8 *)(uStack_160 + lVar39))[1];
            *(undefined8 *)(uStack_230 + lVar39) = uVar42;
            lVar39 = lVar39 + 0x10;
            lVar37 = lVar37 + -1;
          } while (lVar37 != 0);
          uVar15 = uVar15 + 0x10;
          lVar25 = lVar25 + 0x40;
        } while (uVar15 < uVar1);
      }
      uVar2 = uVar3 + 3;
      if (-1 < (int)uVar3) {
        uVar2 = uVar3;
      }
      uVar2 = uVar2 & 0xfffffffc;
      if ((int)uVar1 < (int)uVar2) {
        lVar25 = (long)(int)uVar1;
        uVar15 = -(ulong)(uVar23 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        do {
          uVar42 = *(undefined8 *)(uStack_160 + uVar15);
          ((undefined8 *)(uStack_230 + uVar15))[1] = ((undefined8 *)(uStack_160 + uVar15))[1];
          *(undefined8 *)(uStack_230 + uVar15) = uVar42;
          lVar25 = lVar25 + 4;
          uVar15 = uVar15 + 0x10;
        } while (lVar25 < (int)uVar2);
      }
      if ((int)uVar2 < (int)uVar3) {
        lVar25 = (long)(int)uVar2;
        do {
          *(undefined4 *)(uStack_230 + lVar25 * 4) = *(undefined4 *)(uStack_160 + lVar25 * 4);
          lVar25 = lVar25 + 1;
          uVar15 = uStack_160;
        } while ((int)uVar3 != lVar25);
        goto LAB_109554a08;
      }
    }
    else {
      FUN_109555d50(&uStack_210,param_3);
    }
    uVar15 = uStack_160;
    if (uStack_160 == 0) {
      return;
    }
  }
  else {
    if (*param_1 != 0) {
      lVar25 = *(long *)(param_1 + 2);
      iVar36 = aiStack_278[5] * aiStack_278[4];
      uStack_230 = *(long *)(lVar25 + 0x10);
      uStack_228 = uStack_230 + (long)iVar36 * 4;
      _vDSP_ctoz(param_2,2,&uStack_230,1,(long)iVar36);
      uStack_288 = *(long *)(lVar25 + 0x10) + (long)(iVar36 * 2) * 4;
      uVar42 = *(undefined8 *)(lVar25 + 8);
      dVar11 = (double)aiStack_278[5];
      uVar45 = SUB81(dVar11,0);
      uVar46 = (undefined1)((ulong)dVar11 >> 8);
      uVar47 = (undefined1)((ulong)dVar11 >> 0x10);
      uVar48 = (undefined1)((ulong)dVar11 >> 0x18);
      uVar49 = (undefined1)((ulong)dVar11 >> 0x20);
      uVar50 = (undefined1)((ulong)dVar11 >> 0x28);
      uVar51 = (undefined1)((ulong)dVar11 >> 0x30);
      uVar52 = (undefined1)((ulong)dVar11 >> 0x38);
      uStack_290 = param_3;
      _log2();
      _log2();
      _vDSP_fft2d_zop(uVar42,&uStack_230,1,0,&uStack_290,1,0,
                      (long)(double)CONCAT17(uVar52,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,
                                                  CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,
                                                  uVar45))))))));
      afStack_2a8[0] = 1.0 / (float)iVar36;
      _vDSP_vsmul(param_3,1,afStack_2a8,param_3,1,(long)iVar36);
      return;
    }
    FUN_10936ff7c(&uStack_230,param_4,param_5,0xd,param_2,
                  -(ulong)((aiStack_278[5] & 0x7fffffffU) >> 0x1e) & 0xfffffffc00000000 |
                  (ulong)(uint)(aiStack_278[5] << 1) << 2);
    FUN_10936ff7c(&uStack_290,param_4,param_5,5,param_3,
                  -(param_5 >> 0x1f & 1) & 0xfffffffc00000000 | (param_5 & 0xffffffff) << 2);
    uStack_298 = 0;
    afStack_2a8[0] = 2.3693558e-38;
    auStack_2c0[0] = 0x2010000;
    uStack_2b0 = 0;
    puStack_2b8 = &uStack_290;
    puStack_2a0 = &uStack_230;
    FUN_109a50598(afStack_2a8,auStack_2c0,0x23,0);
    if (CONCAT44(uStack_254,uStack_258) != 0) {
      piVar38 = (int *)(CONCAT44(uStack_254,uStack_258) + 0x14);
      do {
        iVar36 = *piVar38;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar8) {
          *piVar38 = iVar36 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar36 + -1 == 0) {
        func_0x000109a848d4(&uStack_290);
      }
    }
    uStack_258 = 0;
    uStack_254 = 0;
    aiStack_278[0] = 0;
    aiStack_278[1] = 0;
    uStack_280 = 0;
    aiStack_278[4] = 0;
    aiStack_278[5] = 0;
    aiStack_278[2] = 0;
    aiStack_278[3] = 0;
    if (0 < uStack_290._4_4_) {
      lVar25 = 0;
      do {
        *(undefined4 *)(CONCAT44(uStack_24c,uStack_250) + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < uStack_290._4_4_);
    }
    puVar13 = (undefined1 *)CONCAT71(uStack_247,uStack_248);
    if (puVar13 != auStack_240 && puVar13 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puVar13 + -8));
    }
    if (uStack_1f8 != 0) {
      piVar38 = (int *)(uStack_1f8 + 0x14);
      do {
        iVar36 = *piVar38;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar38,0x10);
        if (bVar8) {
          *piVar38 = iVar36 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar36 + -1 == 0) {
        func_0x000109a848d4(&uStack_230);
      }
    }
    uStack_1f8 = 0;
    pfStack_218 = (float *)0x0;
    uStack_220 = 0;
    puStack_208 = (undefined8 *)0x0;
    uStack_210 = 0;
    if (0 < uStack_230._4_4_) {
      lVar25 = 0;
      do {
        *(undefined4 *)(CONCAT44(uStack_1ec,uStack_1f0) + lVar25 * 4) = 0;
        lVar25 = lVar25 + 1;
      } while (lVar25 < uStack_230._4_4_);
    }
    if (uStack_1e8 == &uStack_1e0 || uStack_1e8 == (undefined4 *)0x0) {
      return;
    }
    uVar15 = *(ulong *)(uStack_1e8 + -2);
  }
LAB_109554a08:
  _free(uVar15);
  return;
}



/* Entry: 109554a74; end: 109555337;  */

void FUN_109554a74(uint *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  float *pfVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 (*pauVar17) [12];
  uint uVar18;
  undefined *puVar19;
  int iVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  uint *puVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  float *pfVar35;
  undefined4 *puVar36;
  ulong uVar37;
  uint uVar38;
  ulong uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  float extraout_s1_05;
  undefined4 extraout_s1_06;
  float extraout_s1_07;
  undefined4 extraout_s1_08;
  float extraout_s1_09;
  undefined4 extraout_s1_10;
  float extraout_s1_11;
  undefined4 extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  float extraout_s1_16;
  float extraout_s1_17;
  float extraout_s1_18;
  double extraout_d1;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  float fStack_210;
  undefined4 uStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  ulong uStack_128;
  undefined8 *puStack_e8;
  undefined8 *puStack_c0;
  uint uStack_a4;
  undefined8 uStack_80;
  
  uVar37 = (ulong)*param_1;
  if (0 < (int)*param_1) {
    uVar21 = 0;
    uVar18 = param_1[0x27];
    lVar32 = *(long *)(param_1 + 0x1a);
    do {
      if ((uVar18 & 1) == 0) {
        lVar34 = 0;
        iVar33 = 0;
        uVar13 = uVar21;
        bVar11 = true;
        do {
          bVar16 = bVar11;
          puVar31 = param_1 + lVar34 * 3 + 0xd;
          iVar12 = (int)uVar13;
          iVar20 = (int)((ulong)*puVar31 * (long)iVar12 >> 0x20);
          uVar3 = ((uint)(iVar12 - iVar20) >> (ulong)(puVar31[1] & 0x1f)) + iVar20 >>
                  (ulong)(puVar31[2] & 0x1f);
          uVar8 = uVar3 + param_1[lVar34 + 0x28];
          param_4 = (ulong)uVar8;
          iVar33 = iVar33 + uVar8 * param_1[lVar34 + 0x16];
          uVar8 = iVar12 - uVar3 * param_1[lVar34 + 10];
          uVar13 = (ulong)uVar8;
          lVar34 = 1;
          bVar11 = false;
        } while (bVar16);
        iVar33 = iVar33 + uVar8 + param_1[0x2a];
      }
      else {
        iVar33 = (int)uVar21;
      }
      *(ulong *)(param_2 + uVar21 * 8) = (ulong)*(uint *)(lVar32 + (long)iVar33 * 4);
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar37);
  }
  puVar22 = *(ulong **)(param_1 + 2);
  if (*puVar22 != 0) {
    uVar21 = 0;
    do {
      if ((puVar22[3] & 1) == 0) {
        iVar33 = (int)puVar22[2] * (int)uVar21;
      }
      else {
        iVar33 = 0;
        if (*(int *)((long)puVar22 + 0x14) != 0) {
          iVar33 = (int)uVar21 / *(int *)((long)puVar22 + 0x14);
        }
      }
      uVar13 = (long)*(int *)((long)puVar22 + 0xc) + (long)iVar33;
      uVar18 = param_1[uVar13 + 4];
      uVar39 = (ulong)uVar18;
      puVar14 = (undefined8 *)(-(ulong)(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar39 << 3);
      puVar15 = puVar14;
      _malloc();
      iVar33 = (int)param_4;
      if (uVar18 != 0 && puVar15 == (undefined8 *)0x0) goto LAB_109555318;
      uVar8 = uVar18 - 1;
      if ((uVar18 & uVar8) == 0) {
        if (uVar18 < 2) {
          uStack_a4 = 0;
        }
        else {
          uStack_a4 = 0;
          uVar24 = uVar39;
          do {
            uVar3 = (int)uVar24 >> 1;
            uVar24 = (ulong)uVar3;
            uStack_a4 = uStack_a4 + 1;
          } while (1 < uVar3);
        }
        puStack_c0 = (undefined8 *)0x0;
        uStack_128 = 0;
        uVar24 = 0;
        puStack_e8 = (undefined8 *)0x0;
      }
      else {
        uVar23 = 2;
        do {
          uVar24 = uVar23;
          uVar23 = (ulong)(uint)((int)uVar24 << 1);
        } while ((int)uVar24 < (int)(uVar18 * 2 + -1));
        uStack_a4 = 0;
        uVar23 = uVar24;
        do {
          uVar3 = (int)uVar23 >> 1;
          uVar23 = (ulong)uVar3;
          uStack_a4 = uStack_a4 + 1;
        } while (1 < uVar3);
        puStack_e8 = (undefined8 *)(-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3);
        puStack_c0 = puStack_e8;
        _malloc();
        iVar33 = (int)param_4;
        if (puStack_c0 == (undefined8 *)0x0) {
LAB_109555318:
          lVar32 = 8;
          ___cxa_allocate_exception();
          __ZNSt9bad_allocC1Ev();
          pauVar17 = (undefined1 (*) [12])PTR___ZTISt9bad_alloc_110346a68;
          puVar19 = PTR___ZNSt9bad_allocD1Ev_110346998;
          ___cxa_throw();
          uVar18 = (uint)puVar19;
          if ((int)uVar18 < 9) {
            if (uVar18 == 2) {
              fVar41 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
              uVar30 = *(undefined8 *)*pauVar17;
              auVar48._12_4_ = fVar41;
              auVar48._0_12_ = *pauVar17;
              auVar9._12_4_ = fVar41;
              auVar9._0_12_ = *pauVar17;
              auVar48 = NEON_ext(auVar48,auVar9,8,1);
              *(ulong *)(*pauVar17 + 8) =
                   CONCAT44(auVar48._12_4_ - fVar41,
                            auVar48._8_4_ - (float)*(undefined8 *)(*pauVar17 + 8));
              *(ulong *)*pauVar17 =
                   CONCAT44(auVar48._4_4_ + (float)((ulong)uVar30 >> 0x20),
                            auVar48._0_4_ + (float)uVar30);
            }
            else if (uVar18 == 4) {
              fVar42 = *(float *)*pauVar17 + *(float *)(*pauVar17 + 8);
              fVar45 = *(float *)(*pauVar17 + 4) + *(float *)pauVar17[1];
              fVar52 = *(float *)*pauVar17 - *(float *)(*pauVar17 + 8);
              fVar53 = *(float *)(*pauVar17 + 4) - *(float *)pauVar17[1];
              fVar43 = *(float *)(pauVar17[1] + 4) + *(float *)pauVar17[2];
              fVar44 = *(float *)(pauVar17[1] + 8) + *(float *)(pauVar17[2] + 4);
              uStack_1f8 = 0xbf80000000000000;
              fVar41 = *(float *)(pauVar17[1] + 4) - *(float *)pauVar17[2];
              uStack_200 = CONCAT44(*(float *)(pauVar17[1] + 8) - *(float *)(pauVar17[2] + 4),fVar41
                                   );
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              *(float *)*pauVar17 = fVar42 + fVar43;
              *(float *)(*pauVar17 + 4) = fVar45 + fVar44;
              *(float *)(*pauVar17 + 8) = fVar52 + fVar41;
              *(float *)pauVar17[1] = fVar53 + extraout_s1_18;
              *(float *)(pauVar17[1] + 4) = fVar42 - fVar43;
              *(float *)(pauVar17[1] + 8) = fVar45 - fVar44;
              *(float *)pauVar17[2] = fVar52 - fVar41;
              *(float *)(pauVar17[2] + 4) = fVar53 - extraout_s1_18;
            }
            else if (uVar18 == 8) {
              fVar52 = *(float *)*pauVar17 + *(float *)(*pauVar17 + 8);
              fVar53 = *(float *)(*pauVar17 + 4) + *(float *)pauVar17[1];
              fVar43 = *(float *)*pauVar17 - *(float *)(*pauVar17 + 8);
              fVar44 = *(float *)(*pauVar17 + 4) - *(float *)pauVar17[1];
              fVar54 = *(float *)(pauVar17[1] + 4) + *(float *)pauVar17[2];
              fVar55 = *(float *)(pauVar17[1] + 8) + *(float *)(pauVar17[2] + 4);
              fVar41 = *(float *)(pauVar17[1] + 4) - *(float *)pauVar17[2];
              uStack_1f8 = CONCAT44(*(float *)(pauVar17[1] + 8) - *(float *)(pauVar17[2] + 4),fVar41
                                   );
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              fVar56 = *(float *)(pauVar17[2] + 8) + *(float *)(pauVar17[3] + 4);
              fVar58 = *(float *)pauVar17[3] + *(float *)(pauVar17[3] + 8);
              fVar61 = *(float *)(pauVar17[2] + 8) - *(float *)(pauVar17[3] + 4);
              fVar42 = *(float *)pauVar17[3] - *(float *)(pauVar17[3] + 8);
              fVar60 = *(float *)pauVar17[4] + *(float *)(pauVar17[4] + 8);
              fVar59 = *(float *)(pauVar17[4] + 4) + *(float *)pauVar17[5];
              fVar45 = *(float *)pauVar17[4] - *(float *)(pauVar17[4] + 8);
              uStack_1f8 = CONCAT44(*(float *)(pauVar17[4] + 4) - *(float *)pauVar17[5],fVar45);
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              fVar50 = fVar52 + fVar54;
              fVar49 = fVar53 + fVar55;
              fVar51 = fVar43 + fVar41;
              fVar57 = fVar44 + extraout_s1_13;
              fVar52 = fVar52 - fVar54;
              fVar53 = fVar53 - fVar55;
              fVar43 = fVar43 - fVar41;
              fVar44 = fVar44 - extraout_s1_13;
              fVar54 = fVar56 + fVar60;
              fVar55 = fVar58 + fVar59;
              uStack_1f8 = CONCAT44(fVar42 + extraout_s1_14,fVar61 + fVar45);
              fVar46 = 0.70710677;
              uStack_200 = 0xbf3504f33f3504f3;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              uStack_1f8 = CONCAT44(fVar58 - fVar59,fVar56 - fVar60);
              fVar56 = 0.0;
              uStack_200 = 0xbf80000000000000;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              uStack_1f8 = CONCAT44(fVar42 - extraout_s1_14,fVar61 - fVar45);
              fVar41 = -0.70710677;
              uStack_200 = 0xbf3504f3bf3504f3;
              FUN_1095512ac(&uStack_1f8,&uStack_200);
              *(float *)*pauVar17 = fVar50 + fVar54;
              *(float *)(*pauVar17 + 4) = fVar49 + fVar55;
              *(float *)(*pauVar17 + 8) = fVar51 + fVar46;
              *(float *)pauVar17[1] = fVar57 + extraout_s1_15;
              *(float *)(pauVar17[1] + 4) = fVar52 + fVar56;
              *(float *)(pauVar17[1] + 8) = fVar53 + extraout_s1_16;
              *(float *)pauVar17[2] = fVar43 + fVar41;
              *(float *)(pauVar17[2] + 4) = fVar44 + extraout_s1_17;
              *(float *)(pauVar17[2] + 8) = fVar50 - fVar54;
              *(float *)pauVar17[3] = fVar49 - fVar55;
              *(float *)(pauVar17[3] + 4) = fVar51 - fVar46;
              *(float *)(pauVar17[3] + 8) = fVar57 - extraout_s1_15;
              *(float *)pauVar17[4] = fVar52 - fVar56;
              *(float *)(pauVar17[4] + 4) = fVar53 - extraout_s1_16;
              *(float *)(pauVar17[4] + 8) = fVar43 - fVar41;
              *(float *)pauVar17[5] = fVar44 - extraout_s1_17;
            }
          }
          else {
            uVar21 = (ulong)(uVar18 >> 1);
            FUN_109555338();
            FUN_109555338(lVar32,*pauVar17 + uVar21 * 8,uVar21,iVar33 + -1);
            lVar32 = lVar32 + (long)iVar33 * 4;
            fVar41 = *(float *)(lVar32 + 0xc0) + 1.0;
            uStack_1f8 = CONCAT44(*(float *)(lVar32 + 0x140) + 0.0,fVar41);
            FUN_1095512ac(&uStack_1f8,&uStack_1f8);
            uStack_200 = CONCAT44(extraout_s1_02,fVar41);
            FUN_1095512ac(&uStack_200,&uStack_1f8);
            fStack_208 = fVar41;
            uStack_204 = extraout_s1_03;
            FUN_1095512ac(&fStack_208,&uStack_1f8);
            uVar37 = 0;
            fVar42 = 1.0;
            uStack_218 = 0x3f800000;
            fStack_210 = fVar41;
            uStack_20c = extraout_s1_04;
            do {
              puVar2 = *pauVar17 + uVar21 * 8;
              FUN_1095512ac(puVar2,&uStack_218);
              fVar43 = fVar42;
              FUN_1095512ac(puVar2 + 8,&uStack_218);
              fStack_220 = fVar43;
              uStack_21c = extraout_s1_06;
              FUN_1095512ac(&fStack_220,&uStack_1f8);
              fVar44 = fVar43;
              FUN_1095512ac((long)puVar2 + 0x10,&uStack_218);
              fStack_220 = fVar44;
              uStack_21c = extraout_s1_08;
              FUN_1095512ac(&fStack_220,&uStack_200);
              fVar54 = fVar44;
              FUN_1095512ac((long)puVar2 + 0x18,&uStack_218);
              fStack_220 = fVar54;
              uStack_21c = extraout_s1_10;
              FUN_1095512ac(&fStack_220,&fStack_208);
              fVar41 = fVar54;
              FUN_1095512ac(&uStack_218,&fStack_210);
              uStack_218 = CONCAT44(extraout_s1_12,fVar41);
              *(ulong *)(*pauVar17 + uVar21 * 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)*pauVar17 >> 0x20) - extraout_s1_05,
                            (float)*(undefined8 *)*pauVar17 - fVar42);
              *(ulong *)(puVar2 + 8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20) - extraout_s1_07,
                            (float)*(undefined8 *)(*pauVar17 + 8) - fVar43);
              uVar10 = *(undefined8 *)(*pauVar17 + 8);
              uVar30 = *(undefined8 *)*pauVar17;
              fVar42 = fVar42 + (float)uVar30;
              *(ulong *)(puVar2 + 0x10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(pauVar17[1] + 4) >> 0x20) -
                            extraout_s1_09,(float)*(undefined8 *)(pauVar17[1] + 4) - fVar44);
              *(ulong *)(puVar2 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)pauVar17[2] >> 0x20) - extraout_s1_11,
                            (float)*(undefined8 *)pauVar17[2] - fVar54);
              fVar41 = *(float *)(pauVar17[1] + 4);
              fVar45 = *(float *)(pauVar17[1] + 8);
              fVar52 = *(float *)pauVar17[2];
              fVar53 = *(float *)(pauVar17[2] + 4);
              *(ulong *)(*pauVar17 + 8) =
                   CONCAT44(extraout_s1_07 + (float)((ulong)uVar10 >> 0x20),fVar43 + (float)uVar10);
              *(ulong *)*pauVar17 = CONCAT44(extraout_s1_05 + (float)((ulong)uVar30 >> 0x20),fVar42)
              ;
              *(float *)pauVar17[2] = fVar54 + fVar52;
              *(float *)(pauVar17[2] + 4) = extraout_s1_11 + fVar53;
              *(float *)(pauVar17[1] + 4) = fVar44 + fVar41;
              *(float *)(pauVar17[1] + 8) = extraout_s1_09 + fVar45;
              uVar37 = uVar37 + 4;
              pauVar17 = (undefined1 (*) [12])(pauVar17[2] + 8);
            } while (uVar37 < uVar21);
          }
          return;
        }
        _malloc();
        iVar33 = (int)param_4;
        if (puStack_e8 == (undefined8 *)0x0) goto LAB_109555318;
        uVar3 = uVar18 + 1;
        uStack_128 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
        _malloc();
        iVar33 = (int)param_4;
        if ((uVar3 != 0) && (uStack_128 == 0)) goto LAB_109555318;
        if (-1 < (int)uVar18) {
          uVar23 = 0;
          do {
            dVar47 = ((double)(uVar23 & 0xffffffff) * 3.141592653589793 *
                     (double)(uVar23 & 0xffffffff)) / (double)uVar18;
            ___sincos_stret();
            *(ulong *)(uStack_128 + uVar23 * 8) = CONCAT44((float)dVar47,(float)extraout_d1);
            uVar23 = uVar23 + 1;
          } while (uVar3 != uVar23);
        }
      }
      iVar33 = 0;
      if (uVar18 != 0) {
        iVar33 = (int)uVar37 / (int)uVar18;
      }
      if (0 < iVar33) {
        iVar33 = 0;
        uVar3 = uVar18 >> 1;
        uVar38 = (uint)uVar24;
        uVar5 = uVar38 >> 1;
        pfVar1 = (float *)(uStack_128 + 4);
        do {
          iVar20 = 0;
          iVar12 = iVar33;
          if (0 < (int)uVar13) {
            puVar31 = param_1 + 7;
            uVar37 = uVar13 & 0xffffffff;
            do {
              iVar6 = 0;
              if (param_1[(uVar13 & 0xffffffff) + 4] != 0) {
                iVar6 = (int)*puVar31 / (int)param_1[(uVar13 & 0xffffffff) + 4];
              }
              iVar7 = 0;
              if (iVar6 != 0) {
                iVar7 = iVar12 / iVar6;
              }
              iVar12 = iVar12 - iVar7 * iVar6;
              iVar20 = iVar20 + iVar7 * *puVar31;
              uVar37 = uVar37 - 1;
              puVar31 = puVar31 + 1;
            } while (uVar37 != 0);
          }
          iVar12 = iVar12 + iVar20;
          uVar4 = (param_1 + 7)[uVar13];
          pfVar35 = pfVar1;
          uVar37 = uVar39;
          puVar25 = puVar15;
          puVar36 = (undefined4 *)((long)puStack_c0 + 4);
          if (uVar4 == 1) {
            _memcpy(puVar15,param_2 + (long)iVar12 * 8,puVar14);
            if ((uVar18 & uVar8) == 0) goto LAB_10955501c;
            if (0 < (int)uVar18) {
LAB_109554e70:
              do {
                fVar41 = pfVar35[-1];
                uStack_80 = CONCAT44(-*pfVar35,fVar41);
                FUN_1095512ac(puVar25,&uStack_80);
                puVar36[-1] = fVar41;
                *puVar36 = extraout_s1;
                uVar37 = uVar37 - 1;
                pfVar35 = pfVar35 + 2;
                puVar25 = puVar25 + 1;
                puVar36 = puVar36 + 2;
              } while (uVar37 != 0);
            }
LAB_109554eac:
            if ((int)uVar18 < (int)uVar38) {
              _bzero((long)puStack_c0 + (long)puVar14,(ulong)(uVar38 + ~uVar18) * 8 + 8);
            }
            if (0 < (int)uVar18) {
              _memcpy(puStack_e8,uStack_128,uVar39 << 3);
            }
            if ((int)uVar18 < (int)(uVar38 - uVar18)) {
              _bzero((long)puStack_e8 + (long)puVar14,
                     (ulong)(uVar38 + (uVar18 << 1 ^ 0xffffffff)) * 8 + 8);
            }
            puVar25 = (undefined8 *)(uStack_128 + (long)(int)uVar18 * 8);
            lVar32 = (long)(int)(uVar38 - uVar18);
            if (0 < (int)uVar18) {
              do {
                puStack_e8[lVar32] = *puVar25;
                lVar32 = lVar32 + 1;
                puVar25 = puVar25 + -1;
              } while (lVar32 < (int)uVar38);
            }
            if ((int)uVar38 < 2) {
              FUN_109555338(param_1,puStack_c0,uVar24,uStack_a4);
            }
            else {
              uVar37 = 1;
              iVar20 = 1;
              do {
                if ((long)uVar37 < (long)iVar20) {
                  uVar30 = puStack_c0[(long)iVar20 + -1];
                  puStack_c0[(long)iVar20 + -1] = puStack_c0[uVar37 - 1];
                  puStack_c0[uVar37 - 1] = uVar30;
                }
                uVar28 = uVar5;
                if ((3 < uVar38) && (uVar27 = uVar5, (int)uVar5 < iVar20)) {
                  do {
                    iVar20 = iVar20 - uVar27;
                    uVar28 = uVar27 >> 1;
                    if (uVar27 < 4) break;
                    uVar27 = uVar28;
                  } while ((int)uVar28 < iVar20);
                }
                iVar20 = uVar28 + iVar20;
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar24);
              FUN_109555338(param_1,puStack_c0,uVar24,uStack_a4);
              uVar37 = 1;
              iVar20 = 1;
              do {
                if ((long)uVar37 < (long)iVar20) {
                  uVar30 = puStack_e8[(long)iVar20 + -1];
                  puStack_e8[(long)iVar20 + -1] = puStack_e8[uVar37 - 1];
                  puStack_e8[uVar37 - 1] = uVar30;
                }
                uVar28 = uVar5;
                if ((3 < uVar38) && (uVar27 = uVar5, (int)uVar5 < iVar20)) {
                  do {
                    iVar20 = iVar20 - uVar27;
                    uVar28 = uVar27 >> 1;
                    if (uVar27 < 4) break;
                    uVar27 = uVar28;
                  } while ((int)uVar28 < iVar20);
                }
                iVar20 = uVar28 + iVar20;
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar24);
            }
            FUN_109555338(param_1,puStack_e8,uVar24,uStack_a4);
            puVar25 = puStack_e8;
            uVar37 = uVar24;
            puVar26 = puStack_c0;
            if ((int)uVar38 < 1) {
              param_4 = (ulong)uStack_a4;
              func_0x000109555844(param_1,puStack_c0,uVar24);
            }
            else {
              do {
                uStack_80 = *puVar25;
                uVar40 = (undefined4)uStack_80;
                FUN_1095512ac(puVar26,&uStack_80);
                *(undefined4 *)puVar26 = uVar40;
                *(undefined4 *)((long)puVar26 + 4) = extraout_s1_00;
                uVar37 = uVar37 - 1;
                puVar25 = puVar25 + 1;
                puVar26 = puVar26 + 1;
              } while (uVar37 != 0);
              param_4 = (ulong)uStack_a4;
              if (1 < (int)uVar38) {
                uVar37 = 1;
                iVar20 = 1;
                do {
                  if ((long)uVar37 < (long)iVar20) {
                    uVar30 = puStack_c0[(long)iVar20 + -1];
                    puStack_c0[(long)iVar20 + -1] = puStack_c0[uVar37 - 1];
                    puStack_c0[uVar37 - 1] = uVar30;
                  }
                  uVar28 = uVar5;
                  if ((3 < uVar38) && (uVar27 = uVar5, (int)uVar5 < iVar20)) {
                    do {
                      iVar20 = iVar20 - uVar27;
                      uVar28 = uVar27 >> 1;
                      if (uVar27 < 4) break;
                      uVar27 = uVar28;
                    } while ((int)uVar28 < iVar20);
                  }
                  iVar20 = uVar28 + iVar20;
                  uVar37 = uVar37 + 1;
                } while (uVar37 != uVar24);
              }
              func_0x000109555844(param_1,puStack_c0,uVar24);
              puVar25 = puStack_c0;
              uVar37 = uVar24;
              do {
                *puVar25 = CONCAT44((float)((ulong)*puVar25 >> 0x20) / (float)uVar24,
                                    (float)*puVar25 / (float)uVar24);
                uVar37 = uVar37 - 1;
                puVar25 = puVar25 + 1;
              } while (uVar37 != 0);
            }
            pfVar35 = pfVar1;
            puVar36 = (undefined4 *)((long)puVar15 + 4);
            puVar25 = puStack_c0;
            uVar37 = uVar39;
            if (0 < (int)uVar18) {
              do {
                fVar41 = pfVar35[-1];
                uStack_80 = CONCAT44(-*pfVar35,fVar41);
                FUN_1095512ac(puVar25,&uStack_80);
                puVar36[-1] = fVar41;
                *puVar36 = extraout_s1_01;
                puVar36 = puVar36 + 2;
                pfVar35 = pfVar35 + 2;
                puVar25 = puVar25 + 1;
                uVar37 = uVar37 - 1;
              } while (uVar37 != 0);
              if (uVar4 != 1) goto LAB_10955523c;
              goto LAB_109555284;
            }
            if (uVar4 == 1) goto LAB_109555284;
          }
          else {
            if ((int)uVar18 < 1) {
              if ((uVar18 & uVar18 - 1) != 0) goto LAB_109554eac;
            }
            else {
              puVar26 = (undefined8 *)(param_2 + (long)iVar12 * 8);
              puVar29 = puVar15;
              uVar23 = uVar39;
              do {
                *puVar29 = *puVar26;
                puVar26 = puVar26 + (int)uVar4;
                uVar23 = uVar23 - 1;
                puVar29 = puVar29 + 1;
              } while (uVar23 != 0);
              if ((uVar18 & uVar18 - 1) != 0) goto LAB_109554e70;
            }
LAB_10955501c:
            if (1 < (int)uVar18) {
              uVar37 = 1;
              iVar20 = 1;
              do {
                if ((long)uVar37 < (long)iVar20) {
                  uVar30 = puVar15[(long)iVar20 + -1];
                  puVar15[(long)iVar20 + -1] = puVar15[uVar37 - 1];
                  puVar15[uVar37 - 1] = uVar30;
                }
                uVar28 = uVar3;
                if ((3 < uVar18) && (uVar27 = uVar3, (int)uVar3 < iVar20)) {
                  do {
                    iVar20 = iVar20 - uVar27;
                    uVar28 = uVar27 >> 1;
                    if (uVar27 < 4) break;
                    uVar27 = uVar28;
                  } while ((int)uVar28 < iVar20);
                }
                iVar20 = uVar28 + iVar20;
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar39);
            }
            param_4 = (ulong)uStack_a4;
            FUN_109555338(param_1,puVar15,uVar39);
            if (uVar4 == 1) {
LAB_109555284:
              _memcpy(param_2 + (long)iVar12 * 8,puVar15,puVar14);
            }
            else if (0 < (int)uVar18) {
LAB_10955523c:
              puVar25 = (undefined8 *)(param_2 + (long)iVar12 * 8);
              puVar26 = puVar15;
              uVar37 = uVar39;
              do {
                *puVar25 = *puVar26;
                puVar25 = puVar25 + (int)uVar4;
                uVar37 = uVar37 - 1;
                puVar26 = puVar26 + 1;
              } while (uVar37 != 0);
            }
          }
          iVar33 = iVar33 + 1;
          uVar37 = (ulong)*param_1;
          iVar12 = 0;
          if (uVar18 != 0) {
            iVar12 = (int)*param_1 / (int)uVar18;
          }
        } while (iVar33 < iVar12);
      }
      _free(puVar15);
      if ((uVar18 & uVar8) != 0) {
        _free(puStack_c0);
        _free(puStack_e8);
        _free(uStack_128);
      }
      uVar21 = uVar21 + 1;
      puVar22 = *(ulong **)(param_1 + 2);
    } while (uVar21 < *puVar22);
  }
  return;
}



/* Entry: 109555338; end: 109555d4f;  */

float FUN_109555338(float param_1,long param_2,undefined1 (*param_3) [12],uint param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float extraout_s1_02;
  undefined4 extraout_s1_03;
  float extraout_s1_04;
  undefined4 extraout_s1_05;
  float extraout_s1_06;
  undefined4 extraout_s1_07;
  float extraout_s1_08;
  undefined4 extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((int)param_4 < 9) {
    if (param_4 == 2) {
      fVar9 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      uVar3 = *(undefined8 *)*param_3;
      fVar7 = (float)uVar3;
      auVar12._12_4_ = fVar9;
      auVar12._0_12_ = *param_3;
      auVar2._12_4_ = fVar9;
      auVar2._0_12_ = *param_3;
      auVar12 = NEON_ext(auVar12,auVar2,8,1);
      param_1 = auVar12._0_4_ - fVar7;
      *(ulong *)(*param_3 + 8) =
           CONCAT44(auVar12._12_4_ - fVar9,auVar12._8_4_ - (float)*(undefined8 *)(*param_3 + 8));
      *(ulong *)*param_3 =
           CONCAT44(auVar12._4_4_ + (float)((ulong)uVar3 >> 0x20),auVar12._0_4_ + fVar7);
    }
    else if (param_4 == 4) {
      fVar9 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar10 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar16 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar17 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar8 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      uStack_98 = 0xbf80000000000000;
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_a0 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar9 + fVar17;
      *(float *)(*param_3 + 4) = fVar10 + fVar8;
      *(float *)(*param_3 + 8) = param_1 + fVar7;
      *(float *)param_3[1] = fVar16 + extraout_s1_15;
      *(float *)(param_3[1] + 4) = fVar9 - fVar17;
      *(float *)(param_3[1] + 8) = fVar10 - fVar8;
      param_1 = param_1 - fVar7;
      *(float *)param_3[2] = param_1;
      *(float *)(param_3[2] + 4) = fVar16 - extraout_s1_15;
    }
    else if (param_4 == 8) {
      fVar16 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar17 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar8 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar18 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar19 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_98 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar20 = *(float *)(param_3[2] + 8) + *(float *)(param_3[3] + 4);
      fVar22 = *(float *)param_3[3] + *(float *)(param_3[3] + 8);
      fVar25 = *(float *)(param_3[2] + 8) - *(float *)(param_3[3] + 4);
      fVar9 = *(float *)param_3[3] - *(float *)(param_3[3] + 8);
      fVar24 = *(float *)param_3[4] + *(float *)(param_3[4] + 8);
      fVar23 = *(float *)(param_3[4] + 4) + *(float *)param_3[5];
      fVar10 = *(float *)param_3[4] - *(float *)(param_3[4] + 8);
      uStack_98 = CONCAT44(*(float *)(param_3[4] + 4) - *(float *)param_3[5],fVar10);
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar14 = fVar16 + fVar18;
      fVar13 = fVar17 + fVar19;
      fVar15 = param_1 + fVar7;
      fVar21 = fVar8 + extraout_s1_10;
      fVar16 = fVar16 - fVar18;
      fVar17 = fVar17 - fVar19;
      param_1 = param_1 - fVar7;
      fVar8 = fVar8 - extraout_s1_10;
      fVar18 = fVar20 + fVar24;
      fVar19 = fVar22 + fVar23;
      uStack_98 = CONCAT44(fVar9 + extraout_s1_11,fVar25 + fVar10);
      fVar11 = 0.70710677;
      uStack_a0 = 0xbf3504f33f3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar22 - fVar23,fVar20 - fVar24);
      fVar20 = 0.0;
      uStack_a0 = 0xbf80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar9 - extraout_s1_11,fVar25 - fVar10);
      fVar7 = -0.70710677;
      uStack_a0 = 0xbf3504f3bf3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar14 + fVar18;
      *(float *)(*param_3 + 4) = fVar13 + fVar19;
      *(float *)(*param_3 + 8) = fVar15 + fVar11;
      *(float *)param_3[1] = fVar21 + extraout_s1_12;
      *(float *)(param_3[1] + 4) = fVar16 + fVar20;
      *(float *)(param_3[1] + 8) = fVar17 + extraout_s1_13;
      *(float *)param_3[2] = param_1 + fVar7;
      *(float *)(param_3[2] + 4) = fVar8 + extraout_s1_14;
      *(float *)(param_3[2] + 8) = fVar14 - fVar18;
      *(float *)param_3[3] = fVar13 - fVar19;
      *(float *)(param_3[3] + 4) = fVar15 - fVar11;
      *(float *)(param_3[3] + 8) = fVar21 - extraout_s1_12;
      *(float *)param_3[4] = fVar16 - fVar20;
      *(float *)(param_3[4] + 4) = fVar17 - extraout_s1_13;
      param_1 = param_1 - fVar7;
      *(float *)(param_3[4] + 8) = param_1;
      *(float *)param_3[5] = fVar8 - extraout_s1_14;
    }
  }
  else {
    uVar5 = (ulong)(param_4 >> 1);
    FUN_109555338(param_2,param_3,uVar5,param_5 + -1);
    FUN_109555338(param_2,*param_3 + uVar5 * 8,uVar5,param_5 + -1);
    param_2 = param_2 + (long)param_5 * 4;
    fVar7 = *(float *)(param_2 + 0xc0) + 1.0;
    uStack_98 = CONCAT44(*(float *)(param_2 + 0x140) + 0.0,fVar7);
    FUN_1095512ac(&uStack_98,&uStack_98);
    uStack_a0 = CONCAT44(extraout_s1,fVar7);
    FUN_1095512ac(&uStack_a0,&uStack_98);
    fStack_a8 = fVar7;
    uStack_a4 = extraout_s1_00;
    FUN_1095512ac(&fStack_a8,&uStack_98);
    uVar6 = 0;
    param_1 = 1.0;
    uStack_b8 = 0x3f800000;
    fStack_b0 = fVar7;
    uStack_ac = extraout_s1_01;
    do {
      puVar1 = *param_3 + uVar5 * 8;
      FUN_1095512ac(puVar1,&uStack_b8);
      fVar17 = param_1;
      FUN_1095512ac(puVar1 + 8,&uStack_b8);
      fStack_c0 = fVar17;
      uStack_bc = extraout_s1_03;
      FUN_1095512ac(&fStack_c0,&uStack_98);
      fVar8 = fVar17;
      FUN_1095512ac((long)puVar1 + 0x10,&uStack_b8);
      fStack_c0 = fVar8;
      uStack_bc = extraout_s1_05;
      FUN_1095512ac(&fStack_c0,&uStack_a0);
      fVar18 = fVar8;
      FUN_1095512ac((long)puVar1 + 0x18,&uStack_b8);
      fStack_c0 = fVar18;
      uStack_bc = extraout_s1_07;
      FUN_1095512ac(&fStack_c0,&fStack_a8);
      fVar7 = fVar18;
      FUN_1095512ac(&uStack_b8,&fStack_b0);
      uStack_b8 = CONCAT44(extraout_s1_09,fVar7);
      *(ulong *)(*param_3 + uVar5 * 8) =
           CONCAT44((float)((ulong)*(undefined8 *)*param_3 >> 0x20) - extraout_s1_02,
                    (float)*(undefined8 *)*param_3 - param_1);
      *(ulong *)(puVar1 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) - extraout_s1_04,
                    (float)*(undefined8 *)(*param_3 + 8) - fVar17);
      uVar4 = *(undefined8 *)(*param_3 + 8);
      uVar3 = *(undefined8 *)*param_3;
      param_1 = param_1 + (float)uVar3;
      *(ulong *)(puVar1 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) - extraout_s1_06,
                    (float)*(undefined8 *)(param_3[1] + 4) - fVar8);
      *(ulong *)(puVar1 + 0x18) =
           CONCAT44((float)((ulong)*(undefined8 *)param_3[2] >> 0x20) - extraout_s1_08,
                    (float)*(undefined8 *)param_3[2] - fVar18);
      fVar7 = *(float *)(param_3[1] + 4);
      fVar9 = *(float *)(param_3[1] + 8);
      fVar10 = *(float *)param_3[2];
      fVar16 = *(float *)(param_3[2] + 4);
      *(ulong *)(*param_3 + 8) =
           CONCAT44(extraout_s1_04 + (float)((ulong)uVar4 >> 0x20),fVar17 + (float)uVar4);
      *(ulong *)*param_3 = CONCAT44(extraout_s1_02 + (float)((ulong)uVar3 >> 0x20),param_1);
      *(float *)param_3[2] = fVar18 + fVar10;
      *(float *)(param_3[2] + 4) = extraout_s1_08 + fVar16;
      *(float *)(param_3[1] + 4) = fVar8 + fVar7;
      *(float *)(param_3[1] + 8) = extraout_s1_06 + fVar9;
      uVar6 = uVar6 + 4;
      param_3 = (undefined1 (*) [12])(param_3[2] + 8);
    } while (uVar6 < uVar5);
  }
  return param_1;
}



/* Entry: 109555d50; end: 10955664f;  */

/* WARNING: Possible PIC construction at 0x0001095564c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001095564fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001095563d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001095566a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001095563d8) */
/* WARNING: Removing unreachable block (ram,0x0001095563e8) */
/* WARNING: Removing unreachable block (ram,0x0001095564c8) */
/* WARNING: Removing unreachable block (ram,0x0001095564d0) */
/* WARNING: Removing unreachable block (ram,0x0001095564e4) */
/* WARNING: Removing unreachable block (ram,0x000109556500) */
/* WARNING: Removing unreachable block (ram,0x000109556514) */
/* WARNING: Removing unreachable block (ram,0x000109556538) */
/* WARNING: Removing unreachable block (ram,0x000109556540) */
/* WARNING: Removing unreachable block (ram,0x00010955655c) */
/* WARNING: Removing unreachable block (ram,0x00010955657c) */
/* WARNING: Removing unreachable block (ram,0x00010955658c) */
/* WARNING: Removing unreachable block (ram,0x00010955659c) */
/* WARNING: Removing unreachable block (ram,0x0001095566a8) */
/* WARNING: Removing unreachable block (ram,0x000109556720) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109555d50(undefined1 (*param_1) [12],undefined1 (*param_2) [12],undefined8 param_3,
                  undefined1 (*param_4) [12])

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [12];
  undefined1 *puVar5;
  bool bVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 (*pauVar10) [12];
  bool bVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  undefined1 (*pauVar15) [12];
  ulong *puVar16;
  undefined1 (*pauVar17) [12];
  float *pfVar18;
  float *pfVar19;
  uint uVar20;
  undefined8 uVar21;
  int *piVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  undefined1 (*unaff_x19) [12];
  undefined1 (*unaff_x20) [12];
  undefined1 (*unaff_x21) [12];
  undefined1 (*pauVar28) [12];
  ulong uVar29;
  uint uVar30;
  undefined1 *unaff_x27;
  undefined1 (*unaff_x28) [12];
  undefined1 (*pauVar31) [12];
  undefined1 *puVar32;
  float fVar33;
  undefined4 uVar34;
  double dVar35;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float fVar36;
  float extraout_s1_01;
  float extraout_s1_02;
  undefined4 extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  double extraout_d1;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  double unaff_d10;
  undefined8 unaff_d11;
  float fVar41;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  float fVar42;
  undefined8 unaff_d14;
  float fVar43;
  undefined8 unaff_d15;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_190 [8];
  undefined1 (*pauStack_188) [12];
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  uint uStack_164;
  undefined1 *puStack_160;
  uint uStack_154;
  undefined4 *puStack_150;
  undefined1 *puStack_148;
  float *pfStack_140;
  float *pfStack_138;
  float *pfStack_130;
  float *pfStack_128;
  undefined1 (*pauStack_120) [12];
  long lStack_118;
  ulong uStack_110;
  undefined1 *puStack_108;
  undefined4 *puStack_100;
  undefined1 (*pauStack_f8) [12];
  undefined1 (*pauStack_f0) [12];
  undefined1 (*pauStack_e8) [12];
  long lStack_e0;
  undefined1 (*pauStack_d8) [12];
  long lStack_d0;
  int iStack_c4;
  int *piStack_c0;
  undefined1 (*pauStack_b8) [12];
  undefined4 uStack_ac;
  undefined1 (*pauStack_a8) [12];
  uint uStack_9c;
  undefined1 (*pauStack_98) [12];
  undefined8 auStack_90 [2];
  
  puVar32 = &stack0xfffffffffffffff0;
  uVar13 = *(uint *)*param_1;
  pauVar28 = (undefined1 (*) [12])(long)(int)uVar13;
  puVar9 = (undefined4 *)((long)pauVar28 << 3);
  _malloc();
  puStack_100 = puVar9;
  if (uVar13 == 0 || puVar9 != (undefined4 *)0x0) {
    if (0 < (int)uVar13) {
      pauVar15 = (undefined1 (*) [12])0x0;
      bVar2 = param_1[0xd][0];
      lVar25 = *(long *)(param_1[8] + 8);
      do {
        if ((bVar2 & 1) == 0) {
          lVar27 = 0;
          iVar26 = 0;
          pauVar10 = pauVar15;
          bVar6 = true;
          do {
            bVar11 = bVar6;
            puVar12 = (uint *)(param_1[lVar27 + 4] + 4);
            iVar8 = (int)pauVar10;
            iVar14 = (int)((ulong)*puVar12 * (long)iVar8 >> 0x20);
            uVar30 = ((uint)(iVar8 - iVar14) >> (ulong)(puVar12[1] & 0x1f)) + iVar14 >>
                     (ulong)(puVar12[2] & 0x1f);
            uVar20 = uVar30 + *(int *)(param_1[0xd] + lVar27 * 4 + 4);
            param_4 = (undefined1 (*) [12])(ulong)uVar20;
            iVar26 = iVar26 + uVar20 * *(int *)(param_1[7] + lVar27 * 4 + 4);
            uVar20 = iVar8 - uVar30 * *(int *)(param_1[3] + lVar27 * 4 + 4);
            pauVar10 = (undefined1 (*) [12])(ulong)uVar20;
            lVar27 = 1;
            bVar6 = false;
          } while (bVar11);
          iVar26 = iVar26 + uVar20 + *(int *)param_1[0xe];
        }
        else {
          iVar26 = (int)pauVar15;
        }
        *(undefined8 *)(puVar9 + (long)pauVar15 * 2) = *(undefined8 *)(lVar25 + (long)iVar26 * 8);
        pauVar15 = (undefined1 (*) [12])(*pauVar15 + 1);
      } while (pauVar15 != pauVar28);
    }
    puVar16 = *(ulong **)(*param_1 + 8);
    if (*puVar16 != 0) {
      uVar29 = 0;
      puStack_108 = param_1[1] + 4;
      piStack_c0 = (int *)(param_1[2] + 4);
      puStack_150 = puVar9 + 1;
      unaff_d8 = 0x3ff0000000000000;
      unaff_d9 = 0x400921fb54442d18;
      pauStack_188 = param_2;
      pauStack_a8 = param_1;
      do {
        if ((puVar16[3] & 1) == 0) {
          iVar26 = (int)puVar16[2] * (int)uVar29;
        }
        else {
          iVar26 = 0;
          if (*(int *)((long)puVar16 + 0x14) != 0) {
            iVar26 = (int)uVar29 / *(int *)((long)puVar16 + 0x14);
          }
        }
        pauVar15 = (undefined1 (*) [12])((long)*(int *)((long)puVar16 + 0xc) + (long)iVar26);
        uVar20 = *(uint *)(puStack_108 + (long)pauVar15 * 4);
        unaff_x21 = (undefined1 (*) [12])(ulong)uVar20;
        pauVar10 = (undefined1 (*) [12])
                   (-(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (long)unaff_x21 << 3);
        pauStack_e8 = pauVar10;
        _malloc();
        unaff_x28 = pauVar15;
        pauStack_98 = pauVar10;
        if (uVar20 != 0 && pauVar10 == (undefined1 (*) [12])0x0) goto LAB_109556630;
        uStack_154 = uVar20 - 1;
        if ((uVar20 & uStack_154) == 0) {
          if (uVar20 < 2) {
            unaff_x27 = (undefined1 *)0x0;
          }
          else {
            unaff_x27 = (undefined1 *)0x0;
            pauVar10 = unaff_x21;
            do {
              uVar30 = (int)pauVar10 >> 1;
              pauVar10 = (undefined1 (*) [12])(ulong)uVar30;
              unaff_x27 = (undefined1 *)(ulong)((int)unaff_x27 + 1);
            } while (1 < uVar30);
          }
          pauStack_b8 = (undefined1 (*) [12])0x0;
          pauStack_d8 = (undefined1 (*) [12])0x0;
          pauVar10 = (undefined1 (*) [12])0x0;
          pauStack_f0 = (undefined1 (*) [12])0x0;
        }
        else {
          pauVar17 = (undefined1 (*) [12])0x2;
          do {
            pauVar10 = pauVar17;
            pauVar17 = (undefined1 (*) [12])(ulong)(uint)((int)pauVar10 << 1);
          } while ((int)pauVar10 < (int)(uVar20 * 2 + -1));
          unaff_x27 = (undefined1 *)0x0;
          pauVar17 = pauVar10;
          do {
            uVar30 = (int)pauVar17 >> 1;
            pauVar17 = (undefined1 (*) [12])(ulong)uVar30;
            unaff_x27 = (undefined1 *)(ulong)((int)unaff_x27 + 1);
          } while (1 < uVar30);
          unaff_x19 = (undefined1 (*) [12])
                      (-((ulong)pauVar10 >> 0x1f) & 0xfffffff800000000 | (long)pauVar10 << 3);
          pauVar17 = unaff_x19;
          _malloc();
          pauStack_d8 = pauVar17;
          if ((pauVar17 == (undefined1 (*) [12])0x0) ||
             (pauVar17 = unaff_x19, _malloc(), pauStack_f0 = pauVar17,
             pauVar17 == (undefined1 (*) [12])0x0)) goto LAB_109556630;
          uVar30 = uVar20 + 1;
          unaff_x19 = (undefined1 (*) [12])(ulong)uVar30;
          pauVar17 = (undefined1 (*) [12])
                     (-(ulong)(uVar30 >> 0x1f) & 0xfffffff800000000 | (long)unaff_x19 << 3);
          _malloc();
          if ((uVar30 != 0) && (pauVar17 == (undefined1 (*) [12])0x0)) goto LAB_109556630;
          pauStack_b8 = pauVar17;
          if (-1 < (int)uVar20) {
            unaff_x20 = (undefined1 (*) [12])0x0;
            unaff_d10 = (double)uVar20;
            do {
              dVar35 = ((double)((ulong)unaff_x20 & 0xffffffff) * 3.141592653589793 *
                       (double)((ulong)unaff_x20 & 0xffffffff)) / unaff_d10;
              ___sincos_stret();
              *(ulong *)(*pauStack_b8 + (long)unaff_x20 * 8) =
                   CONCAT44((float)dVar35,(float)extraout_d1);
              unaff_x20 = (undefined1 (*) [12])(*unaff_x20 + 1);
            } while (unaff_x19 != unaff_x20);
          }
        }
        iVar26 = 0;
        if (uVar20 != 0) {
          iVar26 = (int)uVar13 / (int)uVar20;
        }
        if (0 < iVar26) {
          uStack_9c = (uint)unaff_x27;
          uStack_110 = (ulong)pauVar15 & 0xffffffff;
          puStack_160 = pauStack_98[-1] + 4;
          uStack_164 = uVar20 >> 1;
          unaff_d10 = (double)(ulong)(uint)(1.0 / (float)(int)uVar20);
          uVar30 = (uint)pauVar10;
          lStack_170 = (ulong)(uVar30 + ~uVar20) << 3;
          lStack_178 = (ulong)(uVar30 + (uVar20 << 1 ^ 0xffffffff)) << 3;
          lStack_e0 = (long)(int)(uVar30 - uVar20);
          lStack_118 = (long)(int)uVar30;
          unaff_x27 = pauStack_d8[-1] + 4;
          uVar13 = uVar30 >> 1;
          unaff_x19 = (undefined1 (*) [12])(ulong)uVar13;
          unaff_x20 = (undefined1 (*) [12])(pauStack_f0[-1] + 4);
          fVar33 = (float)(long)pauVar10;
          unaff_d11 = CONCAT44(fVar33,fVar33);
          pauVar17 = (undefined1 (*) [12])(*pauStack_d8 + 4);
          pfStack_128 = (float *)(*pauStack_f0 + 4);
          pfStack_130 = (float *)(*pauStack_b8 + 4);
          pfStack_138 = pfStack_128 + (long)(int)uVar20 * -2 + (long)(int)uVar30 * 2;
          pfStack_140 = pfStack_130 + (long)(int)uVar20 * 2;
          puStack_148 = *pauStack_98 + 4;
          uStack_ac = 0;
          iVar26 = 0;
          if ((int)pauVar15 < 1) {
            iStack_c4 = 0;
          }
          else {
            iStack_c4 = 0;
            piVar22 = piStack_c0;
            uVar23 = uStack_110;
            do {
              iVar8 = 0;
              if (*(int *)(puStack_108 + uStack_110 * 4) != 0) {
                iVar8 = *piVar22 / *(int *)(puStack_108 + uStack_110 * 4);
              }
              iVar14 = 0;
              if (iVar8 != 0) {
                iVar14 = iStack_c4 / iVar8;
              }
              iStack_c4 = iStack_c4 - iVar14 * iVar8;
              iVar26 = iVar26 + iVar14 * *piVar22;
              uVar23 = uVar23 - 1;
              piVar22 = piVar22 + 1;
            } while (uVar23 != 0);
          }
          iStack_c4 = iStack_c4 + iVar26;
          lStack_d0 = (long)piStack_c0[(long)pauVar15];
          uStack_180 = uVar29;
          pauStack_120 = pauVar17;
          pauStack_f8 = pauVar15;
          if (piStack_c0[(long)pauVar15] == 1) {
            uVar1 = uVar20 & uStack_154;
            _memcpy(pauStack_98,puStack_100 + (long)iStack_c4 * 2,pauStack_e8);
            param_2 = (undefined1 (*) [12])(ulong)uVar1;
            if (uVar1 != 0) {
              pauVar15 = unaff_x21;
              pauVar28 = pauStack_98;
              pauVar17 = pauStack_120;
              pauVar31 = pauStack_b8;
              if (0 < (int)uVar20) {
LAB_109556194:
                do {
                  FUN_1095512ac(pauVar28,pauVar31);
                  *(float *)(pauVar17[-1] + 8) = fVar33;
                  *(undefined4 *)*pauVar17 = extraout_s1;
                  pauVar17 = (undefined1 (*) [12])(*pauVar17 + 8);
                  pauVar4 = pauVar15 + -1;
                  pauVar15 = (undefined1 (*) [12])(*pauVar4 + 0xb);
                  pauVar28 = (undefined1 (*) [12])(*pauVar28 + 8);
                  pauVar31 = (undefined1 (*) [12])(*pauVar31 + 8);
                } while ((undefined1 (*) [12])(*pauVar4 + 0xb) != (undefined1 (*) [12])0x0);
              }
LAB_1095561c4:
              pauVar28 = pauStack_d8;
              if ((int)uVar20 < (int)uVar30) {
                _bzero(*pauStack_e8 + (long)*pauStack_d8,lStack_170 + 8);
              }
              unaff_x28 = pauStack_a8;
              pfVar18 = pfStack_130;
              pfVar19 = pfStack_128;
              pauVar15 = unaff_x21;
              if (0 < (int)uVar20) {
                do {
                  fVar33 = *pfVar18;
                  *(float *)*(undefined1 (*) [12])(pfVar19 + -1) = pfVar18[-1];
                  *pfVar19 = -fVar33;
                  pfVar19 = pfVar19 + 2;
                  pfVar18 = pfVar18 + 2;
                  pauVar15 = (undefined1 (*) [12])(pauVar15[-1] + 0xb);
                } while (pauVar15 != (undefined1 (*) [12])0x0);
              }
              if ((int)uVar20 < (int)lStack_e0) {
                _bzero(*pauStack_e8 + (long)*pauStack_f0,lStack_178 + 8);
              }
              pfVar18 = pfStack_140;
              pfVar19 = pfStack_138;
              lVar25 = lStack_e0;
              if (0 < (int)uVar20) {
                do {
                  fVar33 = *pfVar18;
                  *(float *)*(undefined1 (*) [12])(pfVar19 + -1) = pfVar18[0xffffffffffffffff];
                  *pfVar19 = -fVar33;
                  lVar25 = lVar25 + 1;
                  pfVar19 = pfVar19 + 2;
                  pfVar18 = pfVar18 + 0xfffffffffffffffe;
                } while (lVar25 < lStack_118);
              }
              if ((int)uVar30 < 2) {
                func_0x000109556b5c(unaff_x28,pauVar28,pauVar10,uStack_9c);
              }
              else {
                pauVar15 = (undefined1 (*) [12])0x1;
                iVar26 = 1;
                do {
                  if ((long)pauVar15 < (long)iVar26) {
                    uVar21 = *(undefined8 *)(unaff_x27 + (long)iVar26 * 8);
                    *(undefined8 *)(unaff_x27 + (long)iVar26 * 8) =
                         *(undefined8 *)(unaff_x27 + (long)pauVar15 * 8);
                    *(undefined8 *)(unaff_x27 + (long)pauVar15 * 8) = uVar21;
                  }
                  uVar20 = uVar13;
                  if ((3 < uVar30) && (pauVar17 = unaff_x19, (int)uVar13 < iVar26)) {
                    do {
                      iVar26 = iVar26 - (uint)pauVar17;
                      uVar20 = (uint)(undefined1 (*) [12])((ulong)pauVar17 >> 1);
                      if ((uint)pauVar17 < 4) break;
                      pauVar17 = (undefined1 (*) [12])((ulong)pauVar17 >> 1);
                    } while ((int)uVar20 < iVar26);
                  }
                  iVar26 = uVar20 + iVar26;
                  pauVar15 = (undefined1 (*) [12])(*pauVar15 + 1);
                } while (pauVar15 != pauVar10);
                func_0x000109556b5c(unaff_x28,pauVar28,pauVar10,uStack_9c);
                pauVar15 = (undefined1 (*) [12])0x1;
                iVar26 = 1;
                do {
                  if ((long)pauVar15 < (long)iVar26) {
                    uVar21 = *(undefined8 *)(*unaff_x20 + (long)iVar26 * 8);
                    *(undefined8 *)(*unaff_x20 + (long)iVar26 * 8) =
                         *(undefined8 *)(*unaff_x20 + (long)pauVar15 * 8);
                    *(undefined8 *)(*unaff_x20 + (long)pauVar15 * 8) = uVar21;
                  }
                  uVar20 = uVar13;
                  if ((3 < uVar30) && (pauVar17 = unaff_x19, (int)uVar13 < iVar26)) {
                    do {
                      iVar26 = iVar26 - (uint)pauVar17;
                      uVar20 = (uint)(undefined1 (*) [12])((ulong)pauVar17 >> 1);
                      if ((uint)pauVar17 < 4) break;
                      pauVar17 = (undefined1 (*) [12])((ulong)pauVar17 >> 1);
                    } while ((int)uVar20 < iVar26);
                  }
                  iVar26 = uVar20 + iVar26;
                  pauVar15 = (undefined1 (*) [12])(*pauVar15 + 1);
                } while (pauVar15 != pauVar10);
              }
              param_2 = pauStack_f0;
              func_0x000109556b5c(unaff_x28,pauStack_f0,pauVar10,uStack_9c);
              pauVar17 = pauVar10;
              pauVar15 = unaff_x28;
              if ((int)uVar30 < 1) {
                uVar21 = 0x109556500;
                puVar7 = auStack_190;
                pauVar17 = pauStack_d8;
                param_4 = (undefined1 (*) [12])(ulong)uStack_9c;
                pauVar28 = pauStack_d8;
                param_1 = pauVar10;
              }
              else {
                do {
                  puVar5 = *param_2;
                  auStack_90[0] = *(undefined8 *)*param_2;
                  uVar34 = (undefined4)auStack_90[0];
                  FUN_1095512ac(pauVar28,auStack_90);
                  *(undefined4 *)*pauVar28 = uVar34;
                  *(undefined4 *)(*pauVar28 + 4) = extraout_s1_00;
                  pauVar17 = (undefined1 (*) [12])(pauVar17[-1] + 0xb);
                  param_2 = (undefined1 (*) [12])(puVar5 + 8);
                  pauVar28 = (undefined1 (*) [12])(*pauVar28 + 8);
                } while (pauVar17 != (undefined1 (*) [12])0x0);
                if (1 < (int)uVar30) {
                  pauVar28 = (undefined1 (*) [12])0x1;
                  iVar26 = 1;
                  do {
                    if ((long)pauVar28 < (long)iVar26) {
                      uVar21 = *(undefined8 *)(unaff_x27 + (long)iVar26 * 8);
                      *(undefined8 *)(unaff_x27 + (long)iVar26 * 8) =
                           *(undefined8 *)(unaff_x27 + (long)pauVar28 * 8);
                      *(undefined8 *)(unaff_x27 + (long)pauVar28 * 8) = uVar21;
                    }
                    uVar20 = uVar13;
                    if ((3 < uVar30) && (pauVar17 = unaff_x19, (int)uVar13 < iVar26)) {
                      do {
                        iVar26 = iVar26 - (uint)pauVar17;
                        uVar20 = (uint)(undefined1 (*) [12])((ulong)pauVar17 >> 1);
                        if ((uint)pauVar17 < 4) break;
                        pauVar17 = (undefined1 (*) [12])((ulong)pauVar17 >> 1);
                      } while ((int)uVar20 < iVar26);
                    }
                    iVar26 = uVar20 + iVar26;
                    pauVar28 = (undefined1 (*) [12])(*pauVar28 + 1);
                  } while (pauVar28 != pauVar10);
                }
                uVar21 = 0x1095564c8;
                puVar7 = auStack_190;
                pauVar17 = pauStack_d8;
                param_4 = (undefined1 (*) [12])(ulong)uStack_9c;
                pauVar28 = pauStack_d8;
                param_1 = (undefined1 (*) [12])0x0;
              }
              goto FUN_109556650;
            }
          }
          else if ((int)uVar20 < 1) {
            if ((uVar20 & uVar20 - 1) != 0) goto LAB_1095561c4;
          }
          else {
            puVar24 = (undefined8 *)(puStack_100 + (long)iStack_c4 * 2);
            pauVar15 = pauStack_98;
            pauVar28 = unaff_x21;
            do {
              *(undefined8 *)*pauVar15 = *puVar24;
              puVar24 = puVar24 + lStack_d0;
              pauVar28 = (undefined1 (*) [12])(pauVar28[-1] + 0xb);
              pauVar15 = (undefined1 (*) [12])(*pauVar15 + 8);
            } while (pauVar28 != (undefined1 (*) [12])0x0);
            param_2 = unaff_x21;
            pauVar15 = unaff_x21;
            pauVar28 = pauStack_98;
            param_1 = pauVar17;
            unaff_x28 = pauStack_b8;
            pauVar31 = pauStack_b8;
            if ((uVar20 & uVar20 - 1) != 0) goto LAB_109556194;
          }
          if (1 < (int)uVar20) {
            pauVar15 = (undefined1 (*) [12])0x1;
            iVar26 = 1;
            do {
              if ((long)pauVar15 < (long)iVar26) {
                uVar21 = *(undefined8 *)(puStack_160 + (long)iVar26 * 8);
                *(undefined8 *)(puStack_160 + (long)iVar26 * 8) =
                     *(undefined8 *)(puStack_160 + (long)pauVar15 * 8);
                *(undefined8 *)(puStack_160 + (long)pauVar15 * 8) = uVar21;
              }
              uVar13 = uStack_164;
              if ((3 < uVar20) && (uVar30 = uStack_164, (int)uStack_164 < iVar26)) {
                do {
                  iVar26 = iVar26 - uVar30;
                  uVar13 = uVar30 >> 1;
                  if (uVar30 < 4) break;
                  uVar30 = uVar13;
                } while ((int)uVar13 < iVar26);
              }
              iVar26 = uVar13 + iVar26;
              pauVar15 = (undefined1 (*) [12])(*pauVar15 + 1);
            } while (pauVar15 != unaff_x21);
          }
          uVar21 = 0x1095563d8;
          puVar7 = auStack_190;
          pauVar15 = pauStack_a8;
          pauVar17 = pauStack_98;
          pauVar10 = unaff_x21;
          param_4 = (undefined1 (*) [12])(ulong)uStack_9c;
          goto FUN_109556650;
        }
        uVar20 = uVar20 & uStack_154;
        unaff_x19 = (undefined1 (*) [12])(ulong)uVar20;
        _free(pauStack_98);
        if (uVar20 != 0) {
          _free(pauStack_d8);
          _free(pauStack_f0);
          _free(pauStack_b8);
        }
        uVar29 = uVar29 + 1;
        puVar16 = *(ulong **)(*param_1 + 8);
      } while (uVar29 < *puVar16);
    }
    if (0 < (int)uVar13) {
      uVar29 = (ulong)uVar13;
      puVar9 = puStack_100;
      do {
        *(undefined4 *)*param_2 = *puVar9;
        uVar29 = uVar29 - 1;
        puVar9 = puVar9 + 2;
        param_2 = (undefined1 (*) [12])(*param_2 + 4);
      } while (uVar29 != 0);
    }
    _free(puStack_100);
    return;
  }
LAB_109556630:
  pauVar15 = (undefined1 (*) [12])0x8;
  ___cxa_allocate_exception();
  __ZNSt9bad_allocC1Ev();
  uVar21 = 0x109556650;
  pauVar17 = (undefined1 (*) [12])PTR___ZTISt9bad_alloc_110346a68;
  pauVar10 = (undefined1 (*) [12])PTR___ZNSt9bad_allocD1Ev_110346998;
  ___cxa_throw();
  puVar7 = auStack_190;
FUN_109556650:
  while( true ) {
    pauVar31 = param_4;
    *(undefined8 *)(puVar7 + -0x90) = unaff_d15;
    *(undefined8 *)(puVar7 + -0x88) = unaff_d14;
    *(undefined8 *)(puVar7 + -0x80) = unaff_d13;
    *(undefined8 *)(puVar7 + -0x78) = unaff_d12;
    *(undefined8 *)(puVar7 + -0x70) = unaff_d11;
    *(double *)(puVar7 + -0x68) = unaff_d10;
    *(undefined8 *)(puVar7 + -0x60) = unaff_d9;
    *(undefined8 *)(puVar7 + -0x58) = unaff_d8;
    *(undefined1 (**) [12])(puVar7 + -0x50) = unaff_x28;
    *(undefined1 **)(puVar7 + -0x48) = unaff_x27;
    *(undefined1 (**) [12])(puVar7 + -0x40) = param_1;
    *(undefined1 (**) [12])(puVar7 + -0x38) = pauVar28;
    *(undefined1 (**) [12])(puVar7 + -0x30) = param_2;
    *(undefined1 (**) [12])(puVar7 + -0x28) = unaff_x21;
    *(undefined1 (**) [12])(puVar7 + -0x20) = unaff_x20;
    *(undefined1 (**) [12])(puVar7 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x10) = puVar32;
    *(undefined8 *)(puVar7 + -8) = uVar21;
    puVar32 = puVar7 + -0x10;
    uVar13 = (uint)pauVar10;
    if ((int)uVar13 < 9) break;
    pauVar10 = (undefined1 (*) [12])(ulong)(uVar13 >> 1);
    pauVar28 = (undefined1 (*) [12])(ulong)((int)pauVar31 - 1);
    uVar21 = 0x1095566a8;
    puVar7 = puVar7 + -0x160;
    param_4 = pauVar28;
    unaff_x19 = pauVar17;
    unaff_x20 = pauVar10;
    unaff_x21 = pauVar31;
    param_2 = pauVar15;
  }
  if (uVar13 == 2) {
    fVar33 = (float)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
    uVar21 = *(undefined8 *)*pauVar17;
    auVar37._12_4_ = fVar33;
    auVar37._0_12_ = *pauVar17;
    auVar3._12_4_ = fVar33;
    auVar3._0_12_ = *pauVar17;
    auVar37 = NEON_ext(auVar37,auVar3,8,1);
    *(ulong *)(*pauVar17 + 8) =
         CONCAT44(auVar37._12_4_ - fVar33,auVar37._8_4_ - (float)*(undefined8 *)(*pauVar17 + 8));
    *(ulong *)*pauVar17 =
         CONCAT44(auVar37._4_4_ + (float)((ulong)uVar21 >> 0x20),auVar37._0_4_ + (float)uVar21);
  }
  else if (uVar13 == 4) {
    fVar40 = *(float *)*pauVar17 + *(float *)(*pauVar17 + 8);
    fVar41 = *(float *)(*pauVar17 + 4) + *(float *)pauVar17[1];
    fVar42 = *(float *)*pauVar17 - *(float *)(*pauVar17 + 8);
    fVar43 = *(float *)(*pauVar17 + 4) - *(float *)pauVar17[1];
    fVar33 = *(float *)(pauVar17[1] + 4);
    fVar36 = *(float *)(pauVar17[1] + 8);
    fVar38 = *(float *)pauVar17[2];
    fVar39 = *(float *)(pauVar17[2] + 4);
    fVar44 = fVar33 + fVar38;
    fVar45 = fVar36 + fVar39;
    *(undefined8 *)(puVar7 + -0x98) = 0x3f80000000000000;
    fVar33 = fVar33 - fVar38;
    *(float *)(puVar7 + -0xa0) = fVar33;
    *(float *)(puVar7 + -0x9c) = fVar36 - fVar39;
    FUN_1095512ac(puVar7 + -0x98,puVar7 + -0xa0);
    *(float *)*pauVar17 = fVar40 + fVar44;
    *(float *)(*pauVar17 + 4) = fVar41 + fVar45;
    *(float *)(*pauVar17 + 8) = fVar42 + fVar33;
    *(float *)pauVar17[1] = fVar43 + extraout_s1_06;
    *(float *)(pauVar17[1] + 4) = fVar40 - fVar44;
    *(float *)(pauVar17[1] + 8) = fVar41 - fVar45;
    *(float *)pauVar17[2] = fVar42 - fVar33;
    *(float *)(pauVar17[2] + 4) = fVar43 - extraout_s1_06;
  }
  else if (uVar13 == 8) {
    fVar33 = *(float *)*pauVar17;
    fVar36 = *(float *)(*pauVar17 + 4);
    fVar38 = *(float *)(*pauVar17 + 8);
    fVar39 = *(float *)pauVar17[1];
    *(float *)(puVar7 + -0xd0) = fVar33 + fVar38;
    *(float *)(puVar7 + -0xe0) = fVar36 + fVar39;
    *(float *)(puVar7 + -0x130) = fVar33 - fVar38;
    *(float *)(puVar7 + -0x140) = fVar36 - fVar39;
    fVar33 = *(float *)(pauVar17[1] + 4);
    fVar36 = *(float *)(pauVar17[1] + 8);
    fVar38 = *(float *)pauVar17[2];
    fVar39 = *(float *)(pauVar17[2] + 4);
    *(float *)(puVar7 + -0xf0) = fVar33 + fVar38;
    *(float *)(puVar7 + -0x100) = fVar36 + fVar39;
    fVar33 = fVar33 - fVar38;
    *(float *)(puVar7 + -0x98) = fVar33;
    *(float *)(puVar7 + -0x94) = fVar36 - fVar39;
    *(undefined8 *)(puVar7 + -0xa0) = 0x3f80000000000000;
    *(undefined8 *)(puVar7 + -0x150) = 0x3f80000000000000;
    FUN_1095512ac(puVar7 + -0x98,puVar7 + -0xa0);
    fVar36 = *(float *)(pauVar17[2] + 8);
    fVar38 = *(float *)pauVar17[3];
    fVar39 = *(float *)(pauVar17[3] + 4);
    fVar40 = *(float *)(pauVar17[3] + 8);
    fVar41 = fVar38 + fVar40;
    fVar43 = fVar36 - fVar39;
    *(float *)(puVar7 + -0x160) = fVar43;
    *(float *)(puVar7 + -0x15c) = fVar36 + fVar39;
    *(float *)(puVar7 + -0x158) = fVar38 - fVar40;
    fVar38 = *(float *)(pauVar17[4] + 4);
    fVar39 = *(float *)pauVar17[5];
    fVar42 = *(float *)pauVar17[4] + *(float *)(pauVar17[4] + 8);
    fVar40 = fVar38 + fVar39;
    fVar36 = *(float *)pauVar17[4] - *(float *)(pauVar17[4] + 8);
    *(float *)(puVar7 + -0x98) = fVar36;
    *(float *)(puVar7 + -0x94) = fVar38 - fVar39;
    *(undefined8 *)(puVar7 + -0xa0) = 0x3f80000000000000;
    FUN_1095512ac(puVar7 + -0x98,puVar7 + -0xa0);
    *(float *)(puVar7 + -0x148) = *(float *)(puVar7 + -0xe0) + *(float *)(puVar7 + -0x100);
    *(float *)(puVar7 + -0x144) = *(float *)(puVar7 + -0xd0) + *(float *)(puVar7 + -0xf0);
    *(float *)(puVar7 + -0x110) = *(float *)(puVar7 + -0x130) + fVar33;
    *(float *)(puVar7 + -0x120) = *(float *)(puVar7 + -0x140) + extraout_s1_01;
    *(float *)(puVar7 + -0xf0) = *(float *)(puVar7 + -0xd0) - *(float *)(puVar7 + -0xf0);
    *(float *)(puVar7 + -0x100) = *(float *)(puVar7 + -0xe0) - *(float *)(puVar7 + -0x100);
    *(float *)(puVar7 + -0xd0) = *(float *)(puVar7 + -0x130) - fVar33;
    *(float *)(puVar7 + -0xe0) = *(float *)(puVar7 + -0x140) - extraout_s1_01;
    fVar38 = *(float *)(puVar7 + -0x15c);
    fVar39 = *(float *)(puVar7 + -0x158);
    *(float *)(puVar7 + -0x130) = fVar38 + fVar42;
    *(float *)(puVar7 + -0x140) = fVar41 + fVar40;
    *(float *)(puVar7 + -0x98) = fVar43 + fVar36;
    *(float *)(puVar7 + -0x94) = fVar39 + extraout_s1_02;
    fVar33 = 0.70710677;
    *(undefined8 *)(puVar7 + -0xa0) = 0x3f3504f33f3504f3;
    FUN_1095512ac(puVar7 + -0x98,puVar7 + -0xa0);
    *(undefined4 *)(puVar7 + -0x154) = extraout_s1_03;
    *(float *)(puVar7 + -0x98) = fVar38 - fVar42;
    *(float *)(puVar7 + -0x94) = fVar41 - fVar40;
    fVar38 = (float)*(undefined8 *)(puVar7 + -0x150);
    *(undefined8 *)(puVar7 + -0xa0) = *(undefined8 *)(puVar7 + -0x150);
    FUN_1095512ac(puVar7 + -0x98,puVar7 + -0xa0);
    *(float *)(puVar7 + -0x98) = *(float *)(puVar7 + -0x160) - fVar36;
    *(float *)(puVar7 + -0x94) = fVar39 - extraout_s1_02;
    fVar36 = -0.70710677;
    *(undefined8 *)(puVar7 + -0xa0) = 0x3f3504f3bf3504f3;
    FUN_1095512ac(puVar7 + -0x98,puVar7 + -0xa0);
    fVar46 = *(float *)(puVar7 + -0x148);
    fVar45 = *(float *)(puVar7 + -0x144);
    fVar47 = *(float *)(puVar7 + -0x130);
    fVar48 = *(float *)(puVar7 + -0x140);
    *(float *)*pauVar17 = fVar45 + fVar47;
    *(float *)(*pauVar17 + 4) = fVar46 + fVar48;
    fVar43 = *(float *)(puVar7 + -0x110);
    fVar44 = *(float *)(puVar7 + -0x120);
    fVar49 = *(float *)(puVar7 + -0x154);
    *(float *)(*pauVar17 + 8) = fVar43 + fVar33;
    *(float *)pauVar17[1] = fVar44 + fVar49;
    fVar41 = *(float *)(puVar7 + -0xf0);
    fVar42 = *(float *)(puVar7 + -0x100);
    *(float *)(pauVar17[1] + 4) = fVar41 + fVar38;
    *(float *)(pauVar17[1] + 8) = fVar42 + extraout_s1_04;
    fVar39 = *(float *)(puVar7 + -0xd0);
    fVar40 = *(float *)(puVar7 + -0xe0);
    *(float *)pauVar17[2] = fVar39 + fVar36;
    *(float *)(pauVar17[2] + 4) = fVar40 + extraout_s1_05;
    *(float *)(pauVar17[2] + 8) = fVar45 - fVar47;
    *(float *)pauVar17[3] = fVar46 - fVar48;
    *(float *)(pauVar17[3] + 4) = fVar43 - fVar33;
    *(float *)(pauVar17[3] + 8) = fVar44 - fVar49;
    *(float *)pauVar17[4] = fVar41 - fVar38;
    *(float *)(pauVar17[4] + 4) = fVar42 - extraout_s1_04;
    *(float *)(pauVar17[4] + 8) = fVar39 - fVar36;
    *(float *)pauVar17[5] = fVar40 - extraout_s1_05;
  }
  return;
}



/* Entry: 109556650; end: 109557067;  */

float FUN_109556650(float param_1,long param_2,undefined1 (*param_3) [12],uint param_4,int param_5)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  float extraout_s1_02;
  undefined4 extraout_s1_03;
  float extraout_s1_04;
  undefined4 extraout_s1_05;
  float extraout_s1_06;
  undefined4 extraout_s1_07;
  float extraout_s1_08;
  undefined4 extraout_s1_09;
  float extraout_s1_10;
  float extraout_s1_11;
  float extraout_s1_12;
  float extraout_s1_13;
  float extraout_s1_14;
  float extraout_s1_15;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((int)param_4 < 9) {
    if (param_4 == 2) {
      fVar9 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
      uVar3 = *(undefined8 *)*param_3;
      fVar7 = (float)uVar3;
      auVar11._12_4_ = fVar9;
      auVar11._0_12_ = *param_3;
      auVar2._12_4_ = fVar9;
      auVar2._0_12_ = *param_3;
      auVar11 = NEON_ext(auVar11,auVar2,8,1);
      param_1 = auVar11._0_4_ - fVar7;
      *(ulong *)(*param_3 + 8) =
           CONCAT44(auVar11._12_4_ - fVar9,auVar11._8_4_ - (float)*(undefined8 *)(*param_3 + 8));
      *(ulong *)*param_3 =
           CONCAT44(auVar11._4_4_ + (float)((ulong)uVar3 >> 0x20),auVar11._0_4_ + fVar7);
    }
    else if (param_4 == 4) {
      fVar9 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar10 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar15 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar16 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar8 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      uStack_98 = 0x3f80000000000000;
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_a0 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar9 + fVar16;
      *(float *)(*param_3 + 4) = fVar10 + fVar8;
      *(float *)(*param_3 + 8) = param_1 + fVar7;
      *(float *)param_3[1] = fVar15 + extraout_s1_15;
      *(float *)(param_3[1] + 4) = fVar9 - fVar16;
      *(float *)(param_3[1] + 8) = fVar10 - fVar8;
      param_1 = param_1 - fVar7;
      *(float *)param_3[2] = param_1;
      *(float *)(param_3[2] + 4) = fVar15 - extraout_s1_15;
    }
    else if (param_4 == 8) {
      fVar15 = *(float *)*param_3 + *(float *)(*param_3 + 8);
      fVar16 = *(float *)(*param_3 + 4) + *(float *)param_3[1];
      param_1 = *(float *)*param_3 - *(float *)(*param_3 + 8);
      fVar8 = *(float *)(*param_3 + 4) - *(float *)param_3[1];
      fVar17 = *(float *)(param_3[1] + 4) + *(float *)param_3[2];
      fVar18 = *(float *)(param_3[1] + 8) + *(float *)(param_3[2] + 4);
      fVar7 = *(float *)(param_3[1] + 4) - *(float *)param_3[2];
      uStack_98 = CONCAT44(*(float *)(param_3[1] + 8) - *(float *)(param_3[2] + 4),fVar7);
      uStack_a0 = 0x3f80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar19 = *(float *)(param_3[2] + 8) + *(float *)(param_3[3] + 4);
      fVar21 = *(float *)param_3[3] + *(float *)(param_3[3] + 8);
      fVar24 = *(float *)(param_3[2] + 8) - *(float *)(param_3[3] + 4);
      fVar9 = *(float *)param_3[3] - *(float *)(param_3[3] + 8);
      fVar23 = *(float *)param_3[4] + *(float *)(param_3[4] + 8);
      fVar22 = *(float *)(param_3[4] + 4) + *(float *)param_3[5];
      fVar10 = *(float *)param_3[4] - *(float *)(param_3[4] + 8);
      uStack_98 = CONCAT44(*(float *)(param_3[4] + 4) - *(float *)param_3[5],fVar10);
      uStack_a0 = 0x3f80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      fVar13 = fVar15 + fVar17;
      fVar12 = fVar16 + fVar18;
      fVar14 = param_1 + fVar7;
      fVar20 = fVar8 + extraout_s1_10;
      fVar15 = fVar15 - fVar17;
      fVar16 = fVar16 - fVar18;
      param_1 = param_1 - fVar7;
      fVar8 = fVar8 - extraout_s1_10;
      fVar17 = fVar19 + fVar23;
      fVar18 = fVar21 + fVar22;
      uStack_98 = CONCAT44(fVar9 + extraout_s1_11,fVar24 + fVar10);
      fVar7 = 0.70710677;
      uStack_a0 = 0x3f3504f33f3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar21 - fVar22,fVar19 - fVar23);
      fVar19 = 0.0;
      uStack_a0 = 0x3f80000000000000;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      uStack_98 = CONCAT44(fVar9 - extraout_s1_11,fVar24 - fVar10);
      fVar9 = -0.70710677;
      uStack_a0 = 0x3f3504f3bf3504f3;
      FUN_1095512ac(&uStack_98,&uStack_a0);
      *(float *)*param_3 = fVar13 + fVar17;
      *(float *)(*param_3 + 4) = fVar12 + fVar18;
      *(float *)(*param_3 + 8) = fVar14 + fVar7;
      *(float *)param_3[1] = fVar20 + extraout_s1_12;
      *(float *)(param_3[1] + 4) = fVar15 + fVar19;
      *(float *)(param_3[1] + 8) = fVar16 + extraout_s1_13;
      *(float *)param_3[2] = param_1 + fVar9;
      *(float *)(param_3[2] + 4) = fVar8 + extraout_s1_14;
      *(float *)(param_3[2] + 8) = fVar13 - fVar17;
      *(float *)param_3[3] = fVar12 - fVar18;
      *(float *)(param_3[3] + 4) = fVar14 - fVar7;
      *(float *)(param_3[3] + 8) = fVar20 - extraout_s1_12;
      *(float *)param_3[4] = fVar15 - fVar19;
      *(float *)(param_3[4] + 4) = fVar16 - extraout_s1_13;
      param_1 = param_1 - fVar9;
      *(float *)(param_3[4] + 8) = param_1;
      *(float *)param_3[5] = fVar8 - extraout_s1_14;
    }
  }
  else {
    uVar5 = (ulong)(param_4 >> 1);
    FUN_109556650(param_2,param_3,uVar5,param_5 + -1);
    FUN_109556650(param_2,*param_3 + uVar5 * 8,uVar5,param_5 + -1);
    param_2 = param_2 + (long)param_5 * 4;
    fVar7 = *(float *)(param_2 + 0xc0) + 1.0;
    uStack_98 = CONCAT44(0.0 - *(float *)(param_2 + 0x140),fVar7);
    FUN_1095512ac(&uStack_98,&uStack_98);
    uStack_a0 = CONCAT44(extraout_s1,fVar7);
    FUN_1095512ac(&uStack_a0,&uStack_98);
    fStack_a8 = fVar7;
    uStack_a4 = extraout_s1_00;
    FUN_1095512ac(&fStack_a8,&uStack_98);
    uVar6 = 0;
    param_1 = 1.0;
    uStack_b8 = 0x3f800000;
    fStack_b0 = fVar7;
    uStack_ac = extraout_s1_01;
    do {
      puVar1 = *param_3 + uVar5 * 8;
      FUN_1095512ac(puVar1,&uStack_b8);
      fVar16 = param_1;
      FUN_1095512ac(puVar1 + 8,&uStack_b8);
      fStack_c0 = fVar16;
      uStack_bc = extraout_s1_03;
      FUN_1095512ac(&fStack_c0,&uStack_98);
      fVar8 = fVar16;
      FUN_1095512ac((long)puVar1 + 0x10,&uStack_b8);
      fStack_c0 = fVar8;
      uStack_bc = extraout_s1_05;
      FUN_1095512ac(&fStack_c0,&uStack_a0);
      fVar17 = fVar8;
      FUN_1095512ac((long)puVar1 + 0x18,&uStack_b8);
      fStack_c0 = fVar17;
      uStack_bc = extraout_s1_07;
      FUN_1095512ac(&fStack_c0,&fStack_a8);
      fVar7 = fVar17;
      FUN_1095512ac(&uStack_b8,&fStack_b0);
      uStack_b8 = CONCAT44(extraout_s1_09,fVar7);
      *(ulong *)(*param_3 + uVar5 * 8) =
           CONCAT44((float)((ulong)*(undefined8 *)*param_3 >> 0x20) - extraout_s1_02,
                    (float)*(undefined8 *)*param_3 - param_1);
      *(ulong *)(puVar1 + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20) - extraout_s1_04,
                    (float)*(undefined8 *)(*param_3 + 8) - fVar16);
      uVar4 = *(undefined8 *)(*param_3 + 8);
      uVar3 = *(undefined8 *)*param_3;
      param_1 = param_1 + (float)uVar3;
      *(ulong *)(puVar1 + 0x10) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20) - extraout_s1_06,
                    (float)*(undefined8 *)(param_3[1] + 4) - fVar8);
      *(ulong *)(puVar1 + 0x18) =
           CONCAT44((float)((ulong)*(undefined8 *)param_3[2] >> 0x20) - extraout_s1_08,
                    (float)*(undefined8 *)param_3[2] - fVar17);
      fVar7 = *(float *)(param_3[1] + 4);
      fVar9 = *(float *)(param_3[1] + 8);
      fVar10 = *(float *)param_3[2];
      fVar15 = *(float *)(param_3[2] + 4);
      *(ulong *)(*param_3 + 8) =
           CONCAT44(extraout_s1_04 + (float)((ulong)uVar4 >> 0x20),fVar16 + (float)uVar4);
      *(ulong *)*param_3 = CONCAT44(extraout_s1_02 + (float)((ulong)uVar3 >> 0x20),param_1);
      *(float *)param_3[2] = fVar17 + fVar10;
      *(float *)(param_3[2] + 4) = extraout_s1_08 + fVar15;
      *(float *)(param_3[1] + 4) = fVar8 + fVar7;
      *(float *)(param_3[1] + 8) = extraout_s1_06 + fVar9;
      uVar6 = uVar6 + 4;
      param_3 = (undefined1 (*) [12])(param_3[2] + 8);
    } while (uVar6 < uVar5);
  }
  return param_1;
}



/* Entry: 109557068; end: 1095570a7;  */

void FUN_109557068(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095570a8(lVar1 + 8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 1095570a8; end: 1095570cf;  */

void FUN_1095570a8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_1095570d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1095570d0; end: 10955710b;  */

long FUN_1095570d0(long param_1)

{
  _vDSP_destroy_fftsetup(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10955710c; end: 10955719b;  */

undefined4 * FUN_10955710c(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar1 = 0x28;
  __Znwm(0x28);
  FUN_10955719c();
  FUN_1095570a8(param_1 + 2,uVar1);
  return param_1;
}



/* Entry: 10955719c; end: 10955723b;  */

int * FUN_10955719c(int *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  
  piVar3 = param_1 + 4;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *param_1 = 1 << (ulong)(param_2 & 0x1f);
  param_1[1] = 1 << (ulong)(param_3 & 0x1f);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((int)param_2 <= (int)param_3) {
    param_2 = param_3;
  }
  lVar2 = (long)(int)param_2;
  _vDSP_create_fftsetup(lVar2,0);
  *(long *)(param_1 + 2) = lVar2;
  if (lVar2 != 0) {
    func_0x00010742a308(piVar3,(long)*param_1 * (long)param_1[1] * 3);
    return param_1;
  }
  func_0x000105688514(&UNK_10f573573);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109557220);
  (*pcVar1)();
}



/* Entry: 10955723c; end: 109557aeb;  */

undefined4 * FUN_10955723c(undefined4 *param_1,long param_2)

{
  ulong *puVar1;
  float *pfVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  bool bVar10;
  float ****ppppfVar11;
  float *****pppppfVar12;
  float *****pppppfVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  float *****pppppfVar24;
  ulong *puVar25;
  long lVar26;
  float *****pppppfVar27;
  long lVar28;
  uint uVar29;
  undefined **ppuVar30;
  float *pfVar31;
  undefined4 uVar32;
  float ****ppppfVar33;
  float ****ppppfVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint uStack_12c;
  float ****ppppfStack_120;
  float ****ppppfStack_118;
  float ****ppppfStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  float ****ppppfStack_d0;
  float ****ppppfStack_c8;
  float ****ppppfStack_c0;
  float ****ppppfStack_b8;
  float ****ppppfStack_b0;
  
  puVar22 = (undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 6) = 0;
  *puVar22 = 0;
  pppppfVar13 = (float *****)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  ppuVar3 = &PTR_PTR_1132dd3f0;
  if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x58);
  }
  *param_1 = *(undefined4 *)(ppuVar3 + 2);
  param_1[1] = *(undefined4 *)((long)ppuVar3 + 0x14);
  param_1[2] = *(undefined4 *)(ppuVar3 + 3);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)((long)ppuVar3 + 0x1c);
  func_0x000107c31930(puVar22,(long)*(int *)(param_2 + 0x20));
  uVar17 = *(ulong *)(param_2 + 0x18);
  puVar25 = (ulong *)(param_2 + 0x18);
  if ((uVar17 & 1) != 0) {
    puVar25 = (ulong *)(uVar17 + 7);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    lVar28 = (long)*(int *)(param_2 + 0x20) << 3;
    do {
      func_0x000107c2ac70(puVar22,*puVar25);
      lVar28 = lVar28 + -8;
      puVar25 = puVar25 + 1;
    } while (lVar28 != 0);
  }
  uVar17 = *(ulong *)(param_2 + 0x30);
  puVar25 = (ulong *)(param_2 + 0x30);
  if ((uVar17 & 1) != 0) {
    puVar25 = (ulong *)(uVar17 + 7);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    uVar17 = *(ulong *)(param_1 + 0xc);
    puVar1 = puVar25 + *(int *)(param_2 + 0x38);
    do {
      uVar20 = *(ulong *)(*puVar25 + 0x10);
      uVar16 = *(ulong *)(*puVar25 + 0x18);
      if (uVar17 < *(ulong *)(param_1 + 0xe)) {
        FUN_10955ac28(uVar17,uVar20 & 0xfffffffffffffffc,uVar16 & 0xfffffffffffffffc);
        uVar17 = uVar17 + 0x30;
        *(ulong *)(param_1 + 0xc) = uVar17;
      }
      else {
        lVar28 = uVar17 - (long)*pppppfVar13;
        uVar17 = (lVar28 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar17) {
          FUN_10955ace4();
          goto LAB_1095579f4;
        }
        lVar23 = (long)(*(ulong *)(param_1 + 0xe) - (long)*pppppfVar13) >> 4;
        uVar21 = lVar23 * 0x5555555555555556;
        if (uVar21 < uVar17 || uVar21 - uVar17 == 0) {
          uVar21 = uVar17;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar23 * -0x5555555555555555)) {
          uVar21 = 0x555555555555555;
        }
        ppppfStack_b0 = (float ****)pppppfVar13;
        if (uVar21 == 0) {
          ppppfVar11 = (float ****)0x0;
        }
        else {
          if (0x555555555555555 < uVar21) {
            func_0x000104c4f740();
            goto LAB_1095579f4;
          }
          ppppfVar11 = (float ****)(uVar21 * 0x30);
          __Znwm();
        }
        lVar28 = (long)ppppfVar11 + lVar28;
        ppppfStack_d0 = ppppfVar11;
        ppppfStack_c8 = (float ****)lVar28;
        ppppfStack_c0 = (float ****)lVar28;
        ppppfStack_b8 = ppppfVar11 + uVar21 * 6;
        FUN_10955ac28(lVar28,uVar20 & 0xfffffffffffffffc,uVar16 & 0xfffffffffffffffc);
        pppppfVar24 = *(float ******)(param_1 + 10);
        pppppfVar27 = *(float ******)(param_1 + 0xc);
        puVar22 = (undefined8 *)((long)pppppfVar24 + (lVar28 - (long)pppppfVar27));
        pppppfVar12 = pppppfVar24;
        puVar18 = puVar22;
        if (pppppfVar27 != pppppfVar24) {
          do {
            ppppfVar34 = pppppfVar12[1];
            ppppfVar33 = *pppppfVar12;
            puVar18[2] = pppppfVar12[2];
            puVar18[1] = ppppfVar34;
            *puVar18 = ppppfVar33;
            pppppfVar12[1] = (float ****)0x0;
            pppppfVar12[2] = (float ****)0x0;
            *pppppfVar12 = (float ****)0x0;
            ppppfVar34 = pppppfVar12[4];
            ppppfVar33 = pppppfVar12[3];
            puVar18[5] = pppppfVar12[5];
            puVar18[4] = ppppfVar34;
            puVar18[3] = ppppfVar33;
            pppppfVar12[4] = (float ****)0x0;
            pppppfVar12[5] = (float ****)0x0;
            pppppfVar12[3] = (float ****)0x0;
            pppppfVar12 = pppppfVar12 + 6;
            puVar18 = puVar18 + 6;
          } while (pppppfVar12 != pppppfVar27);
          do {
            FUN_10955a8ec(pppppfVar24);
            pppppfVar24 = pppppfVar24 + 6;
          } while (pppppfVar24 != pppppfVar27);
          pppppfVar24 = (float *****)*pppppfVar13;
        }
        uVar17 = lVar28 + 0x30;
        *(undefined8 **)(param_1 + 10) = puVar22;
        *(ulong *)(param_1 + 0xc) = uVar17;
        ppppfStack_b8 = *(float *****)(param_1 + 0xe);
        *(float *****)(param_1 + 0xe) = ppppfVar11 + uVar21 * 6;
        ppppfStack_d0 = (float ****)pppppfVar24;
        ppppfStack_c8 = (float ****)pppppfVar24;
        ppppfStack_c0 = (float ****)pppppfVar24;
        FUN_10955acf8(&ppppfStack_d0);
      }
      *(ulong *)(param_1 + 0xc) = uVar17;
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar1);
  }
  ppuVar3 = &PTR_PTR_1132dd438;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x60);
  }
  param_1[0x10] = *(undefined4 *)(ppuVar3 + 2);
  ppuVar3 = &PTR_PTR_1132dd438;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x60);
  }
  param_1[0x11] = *(undefined4 *)((long)ppuVar3 + 0x14);
  ppuVar3 = &PTR_PTR_1132dd438;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x60);
  }
  param_1[0x12] = *(undefined4 *)(ppuVar3 + 3);
  ppuVar3 = &PTR_PTR_1132dd438;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x60);
  }
  uVar32 = *(undefined4 *)((long)ppuVar3 + 0x1c);
  *(long *)(param_1 + 0x14) = 0;
  param_1[0x13] = uVar32;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  ppuVar3 = &PTR_PTR_1132dd488;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_2 + 0x50);
  }
  lStack_f0 = 0;
  lStack_e8 = 0;
  uStack_e0 = 0;
  FUN_10955a79c(&lStack_f0,ppuVar3[3],ppuVar3[3] + (long)*(int *)(ppuVar3 + 2) * 4);
  pppppfVar13 = (float *****)ppuVar3[6];
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_108 = 0;
  FUN_10955a80c(&lStack_108,pppppfVar13,(long)pppppfVar13 + (long)*(int *)(ppuVar3 + 5) * 4);
  ppppfStack_120 = (float ****)0x0;
  ppppfStack_118 = (float ****)0x0;
  ppppfStack_110 = (float ****)0x0;
  puVar19 = ppuVar3[7];
  ppuVar30 = ppuVar3 + 7;
  if (((ulong)puVar19 & 1) != 0) {
    ppuVar30 = (undefined **)(puVar19 + 7);
  }
  if (*(int *)(ppuVar3 + 8) != 0) {
    lVar28 = (long)*(int *)(ppuVar3 + 8) << 3;
    do {
      ppppfVar11 = ppppfStack_118;
      pppppfVar13 = *(float ******)(*ppuVar30 + 0x18);
      lVar26 = (long)*(int *)(*ppuVar30 + 0x10);
      lVar23 = (long)pppppfVar13 + lVar26 * 4;
      if (ppppfStack_118 < ppppfStack_110) {
        *ppppfStack_118 = (float ***)0x0;
        ppppfStack_118[1] = (float ***)0x0;
        ppppfStack_118[2] = (float ***)0x0;
        FUN_10955a80c(ppppfStack_118,pppppfVar13,lVar23,lVar26);
        pppppfVar24 = (float *****)(ppppfVar11 + 3);
      }
      else {
        lVar14 = (long)ppppfStack_118 - (long)ppppfStack_120;
        uVar17 = (lVar14 >> 3) * -0x5555555555555555 + 1;
        if (0xaaaaaaaaaaaaaaa < uVar17) {
          FUN_1093957a0();
LAB_1095579f4:
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1095579f8);
          (*pcVar9)();
        }
        lVar15 = (long)ppppfStack_110 - (long)ppppfStack_120 >> 3;
        uVar20 = lVar15 * 0x5555555555555556;
        if (uVar20 < uVar17 || uVar20 - uVar17 == 0) {
          uVar20 = uVar17;
        }
        if (0x555555555555554 < (ulong)(lVar15 * -0x5555555555555555)) {
          uVar20 = 0xaaaaaaaaaaaaaaa;
        }
        ppppfStack_b0 = (float ****)&ppppfStack_120;
        if (uVar20 == 0) {
          pppppfVar12 = (float *****)0x0;
        }
        else {
          pppppfVar12 = &ppppfStack_120;
          func_0x0001093957b4();
        }
        puVar22 = (undefined8 *)((long)pppppfVar12 + lVar14);
        ppppfStack_d0 = (float ****)pppppfVar12;
        ppppfStack_c8 = (float ****)puVar22;
        ppppfStack_c0 = (float ****)puVar22;
        ppppfStack_b8 = (float ****)(pppppfVar12 + uVar20 * 3);
        *puVar22 = 0;
        puVar22[1] = 0;
        puVar22[2] = 0;
        FUN_10955a80c(puVar22,pppppfVar13,lVar23,lVar26);
        pppppfVar24 = (float *****)(puVar22 + 3);
        pppppfVar27 = (float *****)((long)puVar22 - ((long)ppppfStack_118 - (long)ppppfStack_120));
        pppppfVar13 = (float *****)ppppfStack_120;
        _memcpy(pppppfVar27);
        ppppfStack_c0 = ppppfStack_120;
        ppppfStack_b8 = ppppfStack_110;
        ppppfStack_d0 = ppppfStack_120;
        ppppfStack_c8 = ppppfStack_120;
        ppppfStack_120 = (float ****)pppppfVar27;
        ppppfStack_118 = (float ****)pppppfVar24;
        ppppfStack_110 = (float ****)(pppppfVar12 + uVar20 * 3);
        func_0x000108a11c04(&ppppfStack_d0);
      }
      ppuVar30 = ppuVar30 + 1;
      lVar28 = lVar28 + -8;
      ppppfStack_118 = (float ****)pppppfVar24;
    } while (lVar28 != 0);
  }
  iVar4 = *(int *)((long)ppuVar3 + 100);
  iVar5 = *(int *)(ppuVar3 + 0xd);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_1 + 0x14);
  lVar28 = lStack_e8 - lStack_f0;
  if (lVar28 != 0) {
    lVar23 = 0;
    do {
      iVar6 = *(int *)(lStack_f0 + lVar23 * 4);
      ppppfStack_d0 = (float ****)0x0;
      ppppfStack_c8 = (float ****)0x0;
      ppppfStack_c0 = (float ****)0x0;
      fVar35 = *(float *)(lStack_108 + lVar23 * 4);
      lVar26 = lVar23 + 1;
      fVar37 = *(float *)(lStack_108 + lVar26 * 4);
      pppppfVar12 = (float *****)0x8;
      __Znwm();
      uVar7 = 0;
      if (iVar6 != 0) {
        uVar7 = (iVar4 + -1) / iVar6;
      }
      uVar8 = 0;
      if (iVar6 != 0) {
        uVar8 = (iVar5 + -1) / iVar6;
      }
      fVar36 = SQRT((float)(int)(uVar7 + 1) / (float)(int)(uVar8 + 1));
      fVar37 = SQRT(fVar35 * fVar37);
      ppppfStack_c0 = (float ****)(pppppfVar12 + 1);
      *(float *)pppppfVar12 = fVar37 / fVar36;
      *(float *)((long)pppppfVar12 + 4) = fVar36 * fVar37;
      ppppfVar33 = (float ****)(ppppfStack_120 + lVar23 * 3)[1];
      pppppfVar24 = (float *****)ppppfStack_c0;
      ppppfStack_d0 = (float ****)pppppfVar12;
      for (ppppfVar11 = (float ****)ppppfStack_120[lVar23 * 3];
          ppppfStack_c8 = (float ****)pppppfVar24, ppppfVar11 != ppppfVar33;
          ppppfVar11 = (float ****)((long)ppppfVar11 + 4)) {
        fVar38 = fVar35 * (SQRT(*(float *)ppppfVar11) / fVar36);
        fVar37 = fVar35 / (SQRT(*(float *)ppppfVar11) / fVar36);
        if (pppppfVar24 < ppppfStack_c0) {
          pppppfVar27 = pppppfVar24 + 1;
          *(float *)pppppfVar24 = fVar38;
          *(float *)((long)pppppfVar24 + 4) = fVar37;
        }
        else {
          lVar23 = (long)pppppfVar24 - (long)ppppfStack_d0;
          uVar17 = (lVar23 >> 3) + 1;
          if (uVar17 >> 0x3d != 0) {
            FUN_1094d2b78();
            goto LAB_1095579f4;
          }
          uVar20 = (long)ppppfStack_c0 - (long)ppppfStack_d0 >> 2;
          if (uVar20 <= uVar17) {
            uVar20 = uVar17;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)ppppfStack_c0 - (long)ppppfStack_d0)) {
            uVar20 = 0x1fffffffffffffff;
          }
          pppppfVar12 = &ppppfStack_d0;
          FUN_1094d2b8c();
          pppppfVar13 = (float *****)ppppfStack_d0;
          lVar14 = (long)ppppfStack_c8 - (long)ppppfStack_d0;
          pfVar31 = (float *)((long)pppppfVar12 + lVar23);
          *pfVar31 = fVar38;
          pfVar31[1] = fVar37;
          pppppfVar27 = (float *****)(pfVar31 + 2);
          pppppfVar24 = (float *****)((long)pfVar31 - lVar14);
          _memcpy(pppppfVar24);
          bVar10 = (float *****)ppppfStack_d0 != (float *****)0x0;
          ppppfStack_d0 = (float ****)pppppfVar24;
          ppppfStack_c0 = (float ****)(pppppfVar12 + uVar20);
          if (bVar10) {
            ppppfStack_c8 = (float ****)pppppfVar27;
            __ZdlPv();
          }
        }
        pppppfVar24 = pppppfVar27;
      }
      if (-1 < (int)uVar8) {
        uStack_12c = 0;
        do {
          if (-1 < (int)uVar7) {
            uVar29 = 0;
            fVar35 = ((float)uStack_12c + 0.5) / (float)(int)(uVar8 + 1);
            do {
              ppppfVar11 = ppppfStack_c8;
              if (ppppfStack_d0 != ppppfStack_c8) {
                fVar37 = ((float)uVar29 + 0.5) / (float)(int)(uVar7 + 1);
                pfVar31 = *(float **)(param_1 + 0x16);
                pppppfVar24 = pppppfVar13;
                pppppfVar12 = (float *****)ppppfStack_d0;
                do {
                  fVar38 = *(float *)pppppfVar12;
                  fVar36 = *(float *)((long)pppppfVar12 + 4);
                  if (pfVar31 < *(float **)(param_1 + 0x18)) {
                    *pfVar31 = fVar37;
                    pfVar31[1] = fVar35;
                    pfVar31[2] = fVar38;
                    pfVar31[3] = fVar36;
                    pfVar31 = pfVar31 + 4;
                    pppppfVar13 = pppppfVar24;
                  }
                  else {
                    lVar23 = *(long *)(param_1 + 0x14);
                    lVar14 = (long)pfVar31 - lVar23;
                    uVar17 = (lVar14 >> 4) + 1;
                    if (uVar17 >> 0x3c != 0) {
                      FUN_10955a978();
                      goto LAB_1095579f4;
                    }
                    uVar16 = (long)*(float **)(param_1 + 0x18) - lVar23;
                    uVar20 = (long)uVar16 >> 3;
                    if (uVar20 <= uVar17) {
                      uVar20 = uVar17;
                    }
                    if (0x7fffffffffffffef < uVar16) {
                      uVar20 = 0xfffffffffffffff;
                    }
                    FUN_10955a98c();
                    pppppfVar13 = *(float ******)(param_1 + 0x14);
                    lVar23 = *(long *)(param_1 + 0x16);
                    pfVar2 = (float *)(uVar20 + lVar14);
                    *pfVar2 = fVar37;
                    pfVar2[1] = fVar35;
                    pfVar2[2] = fVar38;
                    pfVar2[3] = fVar36;
                    pfVar31 = pfVar2 + 4;
                    lVar14 = (long)pfVar2 - (lVar23 - (long)pppppfVar13);
                    _memcpy(lVar14);
                    lVar23 = *(long *)(param_1 + 0x14);
                    *(long *)(param_1 + 0x14) = lVar14;
                    *(float **)(param_1 + 0x16) = pfVar31;
                    *(ulong *)(param_1 + 0x18) = uVar20 + (long)pppppfVar24 * 0x10;
                    if (lVar23 != 0) {
                      __ZdlPv();
                    }
                  }
                  *(float **)(param_1 + 0x16) = pfVar31;
                  pppppfVar12 = pppppfVar12 + 1;
                  pppppfVar24 = pppppfVar13;
                } while (pppppfVar12 != (float *****)ppppfVar11);
              }
              bVar10 = uVar29 != uVar7;
              uVar29 = uVar29 + 1;
            } while (bVar10);
          }
          bVar10 = uStack_12c != uVar8;
          uStack_12c = uStack_12c + 1;
        } while (bVar10);
      }
      if ((float *****)ppppfStack_d0 != (float *****)0x0) {
        ppppfStack_c8 = ppppfStack_d0;
        __ZdlPv();
      }
      lVar23 = lVar26;
    } while (lVar26 != lVar28 >> 2);
  }
  ppppfStack_d0 = (float ****)&ppppfStack_120;
  func_0x0001093957f8(&ppppfStack_d0);
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  if (lStack_f0 != 0) {
    lStack_e8 = lStack_f0;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109557aec; end: 109557b33;  */

long FUN_109557aec(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x28;
  FUN_10955a87c(&lStack_28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  return param_1;
}



/* Entry: 109557b34; end: 109557da3;  */

void FUN_109557b34(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint6 uVar7;
  code *pcVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  long *plVar12;
  uint *puVar13;
  uint *puVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  long lVar18;
  uint *puVar19;
  float fVar20;
  float fVar21;
  ushort uVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  uint *puStack_98;
  uint *puStack_90;
  uint *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar12 = (long *)*param_3;
  iVar4 = *(int *)(plVar12[8] + 4);
  puVar11 = (uint *)(long)iVar4;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_1093c71a0(&uStack_80,*plVar12,*plVar12 + (long)*(int *)(plVar12[1] + 8) * (long)iVar4 * 4);
  lVar16 = plVar12[7];
  puStack_98 = (uint *)0x0;
  puStack_90 = (uint *)0x0;
  puStack_88 = (uint *)0x0;
  puVar9 = puVar11;
  FUN_109557da4(&puStack_98);
  puVar14 = puStack_98;
  puVar17 = puStack_88;
  puVar19 = puStack_90;
  if (iVar4 != 0) {
    lVar18 = 0;
    puVar13 = puStack_98;
    do {
      puVar2 = (undefined8 *)(lVar16 + lVar18);
      puVar3 = (undefined8 *)(*(long *)(param_2 + 0x50) + lVar18);
      fVar20 = (float)_expf(*(float *)(puVar2 + 1) / *(float *)(param_2 + 0x48),
                            *(float *)(param_2 + 0x48));
      fVar21 = (float)_expf(*(float *)((long)puVar2 + 0xc) / *(float *)(param_2 + 0x4c),
                            *(float *)(param_2 + 0x4c));
      uVar31 = *puVar3;
      uVar28 = puVar3[1];
      fVar27 = (float)uVar28;
      fVar29 = (float)((ulong)uVar28 >> 0x20);
      fVar30 = (float)uVar31 + fVar27 * ((float)*puVar2 / (float)*(undefined8 *)(param_2 + 0x40));
      fVar32 = (float)((ulong)uVar31 >> 0x20) +
               fVar29 * ((float)((ulong)*puVar2 >> 0x20) /
                        (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20));
      fVar25 = fVar30 - fVar27 * fVar20 * 0.5;
      fVar26 = fVar32 - fVar29 * fVar21 * 0.5;
      fVar30 = fVar30 + fVar27 * fVar20 * 0.5;
      fVar32 = fVar32 + fVar29 * fVar21 * 0.5;
      uVar24 = -(ushort)(0.0 < fVar26);
      if (puVar19 < puVar17) {
        uVar7 = CONCAT24(uVar24,CONCAT22(uVar24,-(ushort)(0.0 < fVar25))) & 0xffff0000ffff;
        puVar19[2] = ((uint)fVar30 ^ 0x3f800000) &
                     -(uint)((int)((uint)(ushort)-(ushort)(fVar30 < 1.0) << 0x1f) < 0) ^ 0x3f800000;
        puVar19[3] = ((uint)fVar32 ^ 0x3f800000) &
                     -(uint)((int)((uint)(fVar32 < 1.0) * -0x80000000) < 0) ^ 0x3f800000;
        *puVar19 = (uint)fVar25 & -(uint)((int)uVar7 << 0x1f < 0);
        puVar19[1] = (uint)fVar26 & -(uint)((int)((uint)(ushort)(uVar7 >> 0x20) << 0x1f) < 0);
        puVar14 = puVar13;
      }
      else {
        auVar6._4_4_ = fVar26;
        auVar6._0_4_ = fVar25;
        lVar15 = (long)puVar19 - (long)puVar13;
        uVar1 = (lVar15 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          puStack_98 = puVar13;
          puStack_88 = puVar17;
          FUN_10955a930();
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x109557d5c);
          (*pcVar8)();
        }
        uVar10 = (long)puVar17 - (long)puVar13 >> 3;
        if (uVar10 <= uVar1) {
          uVar10 = uVar1;
        }
        if (0x7fffffffffffffef < (ulong)((long)puVar17 - (long)puVar13)) {
          uVar10 = 0xfffffffffffffff;
        }
        FUN_10955a944();
        puVar19 = (uint *)(uVar10 + lVar15);
        puVar17 = (uint *)(uVar10 + (long)puVar9 * 0x10);
        auVar22._0_4_ = -(uint)((int)((uint)(ushort)-(ushort)(0.0 < fVar25) << 0x1f) < 0);
        auVar22._4_4_ = -(uint)((int)((uint)uVar24 << 0x1f) < 0);
        auVar22._8_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar30 < 1.0) << 0x1f) < 0);
        auVar22._12_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar32 < 1.0) << 0x1f) < 0);
        auVar6._8_4_ = fVar30;
        auVar5._12_4_ = 0x3f800000;
        auVar5._0_12_ = ZEXT412(0x3f800000) << 0x40;
        auVar6._12_4_ = fVar32;
        auVar23._12_4_ = 0x3f800000;
        auVar23._0_12_ = ZEXT412(0x3f800000) << 0x40;
        auVar23 = auVar23 ^ (auVar5 ^ auVar6) & auVar22;
        puVar14 = puVar19 + (lVar15 >> 4) * -4;
        *(long *)(puVar19 + 2) = auVar23._8_8_;
        *(long *)puVar19 = auVar23._0_8_;
        puVar9 = puVar13;
        _memcpy(puVar14,puVar13,lVar15);
        if (puVar13 != (uint *)0x0) {
          __ZdlPv(puVar13);
        }
      }
      puVar19 = puVar19 + 4;
      lVar18 = lVar18 + 0x10;
      puVar11 = (uint *)((long)puVar11 + -1);
      puVar13 = puVar14;
    } while (puVar11 != (uint *)0x0);
  }
  *param_1 = puVar14;
  param_1[1] = puVar19;
  param_1[2] = puVar17;
  param_1[4] = uStack_78;
  param_1[3] = uStack_80;
  param_1[5] = uStack_70;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 109557da4; end: 109557e33;  */

/* WARNING: Removing unreachable block (ram,0x0001095588bc) */
/* WARNING: Removing unreachable block (ram,0x00010955889c) */
/* WARNING: Removing unreachable block (ram,0x0001095587bc) */

long * FUN_109557da4(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 ****ppppuVar16;
  code *pcVar17;
  long *plVar18;
  long *plVar19;
  undefined8 ****ppppuVar20;
  float **ppfVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  float *****pppppfVar24;
  float ****ppppfVar25;
  long lVar26;
  undefined8 *****pppppuVar27;
  undefined8 *****pppppuVar28;
  long lVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined *puVar32;
  ulong uVar33;
  ulong uVar34;
  ulong *puVar35;
  float *pfVar36;
  float ****ppppfVar37;
  long *plVar38;
  float ****ppppfVar39;
  float *pfVar40;
  float *pfVar41;
  float ****ppppfVar42;
  undefined8 *****pppppuVar43;
  undefined8 *****pppppuVar44;
  int iVar45;
  float *pfVar46;
  undefined8 ****ppppuVar47;
  long lVar48;
  long lVar49;
  undefined8 ****ppppuVar50;
  float fVar51;
  float fVar52;
  float ****ppppfVar53;
  long lStack_1c8;
  float fStack_1c0;
  undefined4 uStack_1bc;
  ulong uStack_1b8;
  byte bStack_1a9;
  float fStack_1a8;
  undefined4 uStack_1a4;
  char cStack_191;
  undefined8 ****ppppuStack_190;
  undefined8 ****ppppuStack_188;
  undefined8 ****ppppuStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  float *pfStack_160;
  float *pfStack_158;
  float *pfStack_150;
  float *pfStack_148;
  float *pfStack_140;
  undefined8 uStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****ppppuStack_120;
  undefined8 ***pppuStack_118;
  long *plStack_110;
  float ****ppppfStack_108;
  float ****ppppfStack_100;
  float ****ppppfStack_f8;
  undefined8 ****ppppuStack_f0;
  float ***pppfStack_e8;
  float ***pppfStack_e0;
  
  lVar26 = *param_1;
  if ((ulong)(param_1[2] - lVar26 >> 4) < param_2) {
    if (param_2 >> 0x3c != 0) {
      FUN_10955a930();
      plVar38 = param_1 + 2;
      param_1[3] = 0;
      *plVar38 = 0;
      plVar18 = param_1 + 5;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      ppuVar8 = &PTR_PTR_1132dd3f0;
      if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
        ppuVar8 = *(undefined ***)(param_2 + 0x58);
      }
      *(undefined4 *)param_1 = *(undefined4 *)(ppuVar8 + 2);
      *(undefined4 *)((long)param_1 + 4) = *(undefined4 *)((long)ppuVar8 + 0x14);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(ppuVar8 + 3);
      *(undefined1 *)((long)param_1 + 0xc) = *(undefined1 *)((long)ppuVar8 + 0x1c);
      func_0x000107c31930(plVar38,(long)*(int *)(param_2 + 0x20) + 1);
      uVar30 = param_1[3];
      if (uVar30 < (ulong)param_1[4]) {
        func_0x000107c31940(uVar30,"");
        plVar19 = (long *)(uVar30 + 0x18);
        param_1[3] = (long)plVar19;
      }
      else {
        plVar19 = plVar38;
        FUN_10955ab14(plVar38,"");
      }
      param_1[3] = (long)plVar19;
      uVar30 = *(ulong *)(param_2 + 0x18);
      puVar35 = (ulong *)(param_2 + 0x18);
      if ((uVar30 & 1) != 0) {
        puVar35 = (ulong *)(uVar30 + 7);
      }
      if (*(int *)(param_2 + 0x20) != 0) {
        lVar26 = (long)*(int *)(param_2 + 0x20) << 3;
        do {
          func_0x000107c2ac70(plVar38,*puVar35);
          lVar26 = lVar26 + -8;
          puVar35 = puVar35 + 1;
        } while (lVar26 != 0);
      }
      uVar30 = *(ulong *)(param_2 + 0x30);
      puVar35 = (ulong *)(param_2 + 0x30);
      if ((uVar30 & 1) != 0) {
        puVar35 = (ulong *)(uVar30 + 7);
      }
      if (*(int *)(param_2 + 0x38) != 0) {
        uVar30 = param_1[6];
        puVar2 = puVar35 + *(int *)(param_2 + 0x38);
        do {
          uVar34 = *(ulong *)(*puVar35 + 0x10);
          uVar10 = *(ulong *)(*puVar35 + 0x18);
          if (uVar30 < (ulong)param_1[7]) {
            FUN_10955ad44(uVar30,uVar34 & 0xfffffffffffffffc,uVar10 & 0xfffffffffffffffc);
            uVar30 = uVar30 + 0x30;
            param_1[6] = uVar30;
          }
          else {
            lVar26 = uVar30 - *plVar18;
            uVar30 = (lVar26 >> 4) * -0x5555555555555555 + 1;
            if (0x555555555555555 < uVar30) {
              FUN_10955ae00();
              goto LAB_1095588ec;
            }
            lVar29 = param_1[7] - *plVar18 >> 4;
            uVar33 = lVar29 * 0x5555555555555556;
            if (uVar33 < uVar30 || uVar33 - uVar30 == 0) {
              uVar33 = uVar30;
            }
            if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar29 * -0x5555555555555555)) {
              uVar33 = 0x555555555555555;
            }
            plStack_110 = plVar18;
            if (uVar33 == 0) {
              ppppuVar20 = (undefined8 ****)0x0;
            }
            else {
              if (0x555555555555555 < uVar33) {
                func_0x000104c4f740();
                goto LAB_1095588ec;
              }
              ppppuVar20 = (undefined8 ****)(uVar33 * 0x30);
              __Znwm();
            }
            lVar26 = (long)ppppuVar20 + lVar26;
            ppppuStack_130 = ppppuVar20;
            ppppuStack_128 = (undefined8 ****)lVar26;
            ppppuStack_120 = (undefined8 ****)lVar26;
            pppuStack_118 = ppppuVar20 + uVar33 * 6;
            FUN_10955ad44(lVar26,uVar34 & 0xfffffffffffffffc,uVar10 & 0xfffffffffffffffc);
            pppppuVar43 = (undefined8 *****)param_1[5];
            pppppuVar28 = (undefined8 *****)param_1[6];
            puVar5 = (undefined8 *)((long)pppppuVar43 + (lVar26 - (long)pppppuVar28));
            pppppuVar27 = pppppuVar43;
            puVar31 = puVar5;
            if (pppppuVar28 != pppppuVar43) {
              do {
                ppppuVar50 = pppppuVar27[1];
                ppppuVar47 = *pppppuVar27;
                puVar31[2] = pppppuVar27[2];
                puVar31[1] = ppppuVar50;
                *puVar31 = ppppuVar47;
                pppppuVar27[1] = (undefined8 ****)0x0;
                pppppuVar27[2] = (undefined8 ****)0x0;
                *pppppuVar27 = (undefined8 ****)0x0;
                ppppuVar50 = pppppuVar27[4];
                ppppuVar47 = pppppuVar27[3];
                puVar31[5] = pppppuVar27[5];
                puVar31[4] = ppppuVar50;
                puVar31[3] = ppppuVar47;
                pppppuVar27[4] = (undefined8 ****)0x0;
                pppppuVar27[5] = (undefined8 ****)0x0;
                pppppuVar27[3] = (undefined8 ****)0x0;
                pppppuVar27 = pppppuVar27 + 6;
                puVar31 = puVar31 + 6;
              } while (pppppuVar27 != pppppuVar28);
              do {
                FUN_10955aad0(pppppuVar43);
                pppppuVar43 = pppppuVar43 + 6;
              } while (pppppuVar43 != pppppuVar28);
              pppppuVar43 = (undefined8 *****)*plVar18;
            }
            uVar30 = lVar26 + 0x30;
            param_1[5] = (long)puVar5;
            param_1[6] = uVar30;
            pppuStack_118 = (undefined8 ***)param_1[7];
            param_1[7] = (long)(ppppuVar20 + uVar33 * 6);
            ppppuStack_130 = pppppuVar43;
            ppppuStack_128 = pppppuVar43;
            ppppuStack_120 = pppppuVar43;
            FUN_10955ae14(&ppppuStack_130);
          }
          param_1[6] = uVar30;
          puVar35 = puVar35 + 1;
        } while (puVar35 != puVar2);
      }
      plVar18 = param_1 + 8;
      *plVar18 = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      ppuVar8 = &PTR_PTR_1132dd488;
      if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
        ppuVar8 = *(undefined ***)(param_2 + 0x50);
      }
      pfStack_140 = (float *)0x0;
      uStack_138 = 0;
      pfStack_148 = (float *)0x0;
      FUN_10955a80c(&pfStack_148,ppuVar8[6],ppuVar8[6] + (long)*(int *)(ppuVar8 + 5) * 4);
      param_1[0xf] = (long)pfStack_140 - (long)pfStack_148 >> 2;
      pfStack_160 = (float *)0x0;
      pfStack_158 = (float *)0x0;
      pfStack_150 = (float *)0x0;
      if (*(int *)(ppuVar8 + 8) == 1) {
        puVar32 = ppuVar8[7];
        ppuVar9 = ppuVar8 + 7;
        if (((ulong)puVar32 & 1) != 0) {
          ppuVar9 = (undefined **)(puVar32 + 7);
        }
        puVar32 = *ppuVar9;
        iVar11 = *(int *)(puVar32 + 0x10);
        param_1[0xe] = (long)iVar11;
        if (iVar11 == 0) {
          func_0x000105688514(&UNK_10f5735fa);
        }
        else {
          pfVar36 = *(float **)(puVar32 + 0x18);
          lVar26 = (long)iVar11 << 2;
          do {
            if (pfStack_158 < pfStack_150) {
              pfVar46 = pfStack_158 + 1;
              *pfStack_158 = *pfVar36;
            }
            else {
              lVar29 = (long)pfStack_158 - (long)pfStack_160;
              uVar30 = (lVar29 >> 2) + 1;
              if (uVar30 >> 0x3e != 0) {
                FUN_1092cc18c();
                goto LAB_1095588ec;
              }
              uVar34 = (long)pfStack_150 - (long)pfStack_160 >> 1;
              if (uVar34 <= uVar30) {
                uVar34 = uVar30;
              }
              if (0x7ffffffffffffffb < (ulong)((long)pfStack_150 - (long)pfStack_160)) {
                uVar34 = 0x3fffffffffffffff;
              }
              ppfVar21 = &pfStack_160;
              FUN_1092cc1a0();
              pfVar41 = pfStack_160;
              pfVar3 = (float *)((long)ppfVar21 + lVar29);
              pfVar4 = (float *)((long)ppfVar21 + uVar34 * 4);
              pfVar40 = (float *)((long)pfVar3 - ((long)pfStack_158 - (long)pfStack_160));
              pfVar46 = pfVar3 + 1;
              *pfVar3 = *pfVar36;
              _memcpy(pfVar40,pfVar41);
              bVar7 = pfStack_160 != (float *)0x0;
              pfStack_160 = pfVar40;
              pfStack_150 = pfVar4;
              if (bVar7) {
                pfStack_158 = pfVar46;
                __ZdlPv();
              }
            }
            pfVar36 = pfVar36 + 1;
            lVar26 = lVar26 + -4;
            pfStack_158 = pfVar46;
          } while (lVar26 != 0);
          lStack_170 = 0;
          uStack_168 = 0;
          lStack_178 = 0;
          FUN_10955a79c(&lStack_178,ppuVar8[0xb],ppuVar8[0xb] + (long)*(int *)(ppuVar8 + 10) * 4);
          lVar26 = lStack_170 - lStack_178;
          if (lVar26 == 0) {
            func_0x000105688514(&UNK_10f573619);
          }
          else {
            lStack_1c8 = 0;
            iVar11 = *(int *)((long)ppuVar8 + 100);
            param_1[0xb] = (long)iVar11;
            iVar12 = *(int *)(ppuVar8 + 0xd);
            param_1[0xc] = (long)iVar12;
            ppppuStack_130 = (undefined8 *****)0x0;
            ppppuStack_128 = (undefined8 *****)0x0;
            ppppuStack_120 = (undefined8 *****)0x0;
            lVar29 = ((long)pfStack_158 - (long)pfStack_160 >> 2) *
                     ((long)pfStack_140 - (long)pfStack_148 >> 2);
            do {
              ppppuStack_f0 = (undefined8 ****)0x0;
              pppfStack_e8 = (float ***)0x0;
              pppfStack_e0 = (float ***)0x0;
              ppppfStack_108 = (float ****)0x0;
              ppppfStack_100 = (float ****)0x0;
              ppppfStack_f8 = (float ****)0x0;
              FUN_1094d5930(&ppppfStack_108,lVar29);
              pfVar3 = pfStack_158;
              for (pfVar36 = pfStack_160; pfVar4 = pfStack_140, pfVar36 != pfVar3;
                  pfVar36 = pfVar36 + 1) {
                if (pfStack_148 != pfStack_140) {
                  fVar51 = *pfVar36;
                  fVar52 = SQRT((float)*(int *)(lStack_178 + lStack_1c8 * 4) / fVar51);
                  pfVar41 = pfStack_148;
                  do {
                    fStack_1a8 = fVar51 * fVar52 * *pfVar41;
                    fStack_1c0 = fVar52 * *pfVar41;
                    if (ppppfStack_100 < ppppfStack_f8) {
                      pppppfVar24 = (float *****)(ppppfStack_100 + 1);
                      *(float *)ppppfStack_100 = fStack_1a8;
                      *(float *)((long)ppppfStack_100 + 4) = fStack_1c0;
                    }
                    else {
                      pppppfVar24 = &ppppfStack_108;
                      FUN_1094d8ed8(pppppfVar24,&fStack_1a8,&fStack_1c0);
                    }
                    pfVar41 = pfVar41 + 1;
                    ppppfStack_100 = (float ****)pppppfVar24;
                  } while (pfVar41 != pfVar4);
                }
              }
              uVar1 = (int)lStack_1c8 + 3;
              iVar13 = 1 << (ulong)(uVar1 & 0x1f);
              iVar6 = iVar12 + -1 + iVar13 >> (uVar1 & 0x1f);
              iVar13 = iVar11 + -1 + iVar13 >> (uVar1 & 0x1f);
              iVar14 = iVar6 * iVar13;
              ppppfVar25 = (float ****)(lVar29 * iVar14);
              FUN_10955a634(&ppppuStack_f0);
              if (0 < iVar14) {
                iVar45 = 0;
                do {
                  ppppfVar53 = (float ****)ppppuStack_f0;
                  ppppfVar37 = (float ****)pppfStack_e8;
                  ppppfVar39 = (float ****)pppfStack_e0;
                  if (lVar29 != 0) {
                    lVar49 = 0;
                    iVar15 = 0;
                    if (iVar13 != 0) {
                      iVar15 = iVar45 / iVar13;
                    }
                    fVar51 = ((float)iVar11 / (float)iVar13) *
                             ((float)(uint)(iVar45 - iVar15 * iVar13) + 0.5);
                    fVar52 = ((float)iVar12 / (float)iVar6) * ((float)iVar15 + 0.5);
                    ppppfVar42 = (float ****)ppppuStack_f0;
                    do {
                      ppppfVar53 = (float ****)ppppfStack_108[lVar49];
                      if (ppppfVar37 < ppppfVar39) {
                        *(float *)ppppfVar37 = fVar51;
                        *(float *)((long)ppppfVar37 + 4) = fVar52;
                        ppppfVar37[1] = (float ***)ppppfVar53;
                        ppppfVar53 = ppppfVar42;
                      }
                      else {
                        lVar48 = (long)ppppfVar37 - (long)ppppfVar42;
                        uVar30 = (lVar48 >> 4) + 1;
                        if (uVar30 >> 0x3c != 0) {
                          ppppuStack_f0 = (undefined8 ****)ppppfVar42;
                          FUN_10955a978();
                          goto LAB_1095588ec;
                        }
                        uVar34 = (long)ppppfVar39 - (long)ppppfVar42 >> 3;
                        if (uVar34 <= uVar30) {
                          uVar34 = uVar30;
                        }
                        if (0x7fffffffffffffef < (ulong)((long)ppppfVar39 - (long)ppppfVar42)) {
                          uVar34 = 0xfffffffffffffff;
                        }
                        FUN_10955a98c();
                        ppppfVar37 = (float ****)(uVar34 + lVar48);
                        ppppfVar39 = (float ****)(uVar34 + (long)ppppfVar25 * 0x10);
                        *(float *)ppppfVar37 = fVar51;
                        *(float *)((long)ppppfVar37 + 4) = fVar52;
                        ppppfVar37[1] = (float ***)ppppfVar53;
                        ppppfVar53 = ppppfVar37 + (lVar48 >> 4) * -2;
                        ppppfVar25 = ppppfVar42;
                        _memcpy(ppppfVar53,ppppfVar42,lVar48);
                        if (ppppfVar42 != (float ****)0x0) {
                          __ZdlPv(ppppfVar42);
                        }
                      }
                      ppppfVar37 = ppppfVar37 + 2;
                      lVar49 = lVar49 + 1;
                      ppppfVar42 = ppppfVar53;
                    } while (lVar29 - lVar49 != 0);
                  }
                  pppfStack_e0 = (float ***)ppppfVar39;
                  pppfStack_e8 = (float ***)ppppfVar37;
                  ppppuStack_f0 = (undefined8 ****)ppppfVar53;
                  iVar45 = iVar45 + 1;
                } while (iVar45 != iVar14);
              }
              ppppuVar20 = ppppuStack_f0;
              lVar49 = (long)pppfStack_e8 - (long)ppppuStack_f0;
              if (lVar49 == 0) {
                ppppuVar22 = (undefined8 ****)0x0;
                ppppuVar50 = (undefined8 ****)0x0;
                ppppuVar47 = (undefined8 ****)0x0;
              }
              else {
                ppppuVar22 = (undefined8 ****)(lVar49 >> 4);
                if ((ulong)ppppuVar22 >> 0x3c != 0) {
                  FUN_10955a978();
                  goto LAB_1095588ec;
                }
                FUN_10955a98c();
                ppppuVar47 = ppppuVar22 + (long)ppppfVar25 * 2;
                _memmove();
                ppppuVar50 = (undefined8 ****)((long)ppppuVar22 + lVar49);
              }
              ppppuVar16 = ppppuStack_128;
              pppppuVar27 = (undefined8 *****)ppppuStack_130;
              if (ppppuStack_128 < ppppuStack_120) {
                *ppppuStack_128 = (undefined8 ****)CONCAT44(iVar13,iVar6);
                ppppuStack_128[1] = ppppuVar22;
                pppppuVar27 = (undefined8 *****)(ppppuStack_128 + 4);
                ppppuStack_128[2] = ppppuVar50;
                ppppuStack_128[3] = ppppuVar47;
              }
              else {
                lVar49 = (long)ppppuStack_128 - (long)ppppuStack_130;
                lVar48 = lVar49 >> 5;
                uVar30 = lVar48 + 1;
                if (uVar30 >> 0x3b != 0) {
                  FUN_10955a9c0();
                  goto LAB_1095588ec;
                }
                uVar34 = (long)ppppuStack_120 - (long)ppppuStack_130 >> 4;
                if (uVar34 <= uVar30) {
                  uVar34 = uVar30;
                }
                if (0x7fffffffffffffdf < (ulong)((long)ppppuStack_120 - (long)ppppuStack_130)) {
                  uVar34 = 0x7ffffffffffffff;
                }
                if (uVar34 >> 0x3b != 0) {
                  func_0x000104c4f740();
                  goto LAB_1095588ec;
                }
                lVar23 = uVar34 << 5;
                __Znwm();
                puVar5 = (undefined8 *)(lVar23 + lVar49);
                *puVar5 = (undefined8 ****)CONCAT44(iVar13,iVar6);
                puVar5[1] = ppppuVar22;
                puVar5[2] = ppppuVar50;
                puVar5[3] = ppppuVar47;
                pppppuVar44 = (undefined8 *****)(puVar5 + lVar48 * -4);
                pppppuVar28 = pppppuVar44;
                pppppuVar43 = pppppuVar27;
                if (pppppuVar27 != (undefined8 *****)ppppuVar16) {
                  do {
                    *pppppuVar28 = *pppppuVar43;
                    pppppuVar28[1] = (undefined8 ****)0x0;
                    pppppuVar28[2] = (undefined8 ****)0x0;
                    pppppuVar28[3] = (undefined8 ****)0x0;
                    ppppuVar47 = pppppuVar43[1];
                    pppppuVar28[2] = pppppuVar43[2];
                    pppppuVar28[1] = ppppuVar47;
                    pppppuVar28[3] = pppppuVar43[3];
                    pppppuVar43[1] = (undefined8 ****)0x0;
                    pppppuVar43[2] = (undefined8 ****)0x0;
                    pppppuVar43[3] = (undefined8 ****)0x0;
                    pppppuVar43 = pppppuVar43 + 4;
                    pppppuVar28 = pppppuVar28 + 4;
                  } while (pppppuVar43 != (undefined8 *****)ppppuVar16);
                  do {
                    if (pppppuVar27[1] != (undefined8 ****)0x0) {
                      pppppuVar27[2] = pppppuVar27[1];
                      __ZdlPv();
                    }
                    pppppuVar27 = pppppuVar27 + 4;
                    pppppuVar43 = (undefined8 *****)ppppuStack_130;
                  } while (pppppuVar27 != (undefined8 *****)ppppuVar16);
                }
                ppppuStack_120 = (undefined8 ****)(lVar23 + uVar34 * 0x20);
                pppppuVar27 = (undefined8 *****)(puVar5 + 4);
                ppppuStack_130 = pppppuVar44;
                if (pppppuVar43 != (undefined8 *****)0x0) {
                  ppppuStack_128 = pppppuVar27;
                  __ZdlPv(pppppuVar43);
                }
              }
              ppppuStack_128 = pppppuVar27;
              if ((float *****)ppppfStack_108 != (float *****)0x0) {
                ppppfStack_100 = ppppfStack_108;
                __ZdlPv();
              }
              if ((float ****)ppppuVar20 != (float ****)0x0) {
                __ZdlPv(ppppuVar20);
              }
              lStack_1c8 = lStack_1c8 + 1;
            } while (lStack_1c8 != lVar26 >> 2);
            ppppuStack_188 = ppppuStack_128;
            ppppuStack_190 = ppppuStack_130;
            ppppuStack_180 = ppppuStack_120;
            ppppuStack_128 = (undefined8 *****)0x0;
            ppppuStack_120 = (undefined8 *****)0x0;
            ppppuStack_130 = (undefined8 ****)0x0;
            ppppuStack_f0 = &ppppuStack_130;
            FUN_10955aa20(&ppppuStack_f0);
            if (*plVar18 != 0) {
              FUN_10955a9d4();
              __ZdlPv(*plVar18);
              *plVar18 = 0;
              param_1[9] = 0;
              param_1[10] = 0;
            }
            param_1[9] = (long)ppppuStack_188;
            param_1[8] = (long)ppppuStack_190;
            param_1[10] = (long)ppppuStack_180;
            ppppuStack_188 = (undefined8 ****)0x0;
            ppppuStack_180 = (undefined8 ****)0x0;
            ppppuStack_190 = (undefined8 ****)0x0;
            ppppuStack_130 = &ppppuStack_190;
            FUN_10955aa20(&ppppuStack_130);
            lVar26 = param_1[9] - param_1[8] >> 5;
            if (lVar26 == (param_1[6] - param_1[5] >> 4) * -0x5555555555555555) {
              param_1[0xd] = lVar26;
              if (lStack_178 != 0) {
                lStack_170 = lStack_178;
                __ZdlPv();
              }
              if (pfStack_160 != (float *)0x0) {
                pfStack_158 = pfStack_160;
                __ZdlPv();
              }
              if (pfStack_148 != (float *)0x0) {
                pfStack_140 = pfStack_148;
                __ZdlPv();
              }
              return param_1;
            }
            __ZNSt3__19to_stringEm(&fStack_1a8);
            FUN_10928a5e0(&ppppuStack_190,&UNK_10f573663,&fStack_1a8);
            FUN_109259240(&ppppfStack_108,&ppppuStack_190,&UNK_10f57367c);
            __ZNSt3__19to_stringEm(&fStack_1c0,(param_1[6] - param_1[5] >> 4) * -0x5555555555555555)
            ;
            pfVar36 = (float *)CONCAT44(uStack_1bc,fStack_1c0);
            if (-1 < (char)bStack_1a9) {
              uStack_1b8 = (ulong)bStack_1a9;
              pfVar36 = &fStack_1c0;
            }
            pppppfVar24 = &ppppfStack_108;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppfVar24,pfVar36,uStack_1b8);
            pppfStack_e8 = (float ***)pppppfVar24[1];
            ppppuStack_f0 = (undefined8 ****)*pppppfVar24;
            pppfStack_e0 = (float ***)pppppfVar24[2];
            pppppfVar24[1] = (float ****)0x0;
            pppppfVar24[2] = (float ****)0x0;
            *pppppfVar24 = (float ****)0x0;
            FUN_109259240(&ppppuStack_130,&ppppuStack_f0,&UNK_10f57369b);
            if ((char)bStack_1a9 < '\0') {
              __ZdlPv(CONCAT44(uStack_1bc,fStack_1c0));
            }
            if ((long)ppppuStack_180 < 0) {
              __ZdlPv(ppppuStack_190);
            }
            if (cStack_191 < '\0') {
              __ZdlPv(CONCAT44(uStack_1a4,fStack_1a8));
            }
            func_0x000105687ee0(&ppppuStack_130);
          }
        }
      }
      else {
        __ZNSt3__19to_stringEi(&ppppuStack_f0);
        FUN_10928a5e0(&ppppuStack_130,&UNK_10f573594,&ppppuStack_f0);
        func_0x000105687ee0(&ppppuStack_130);
      }
LAB_1095588ec:
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1095588f0);
      (*pcVar17)();
    }
    lVar29 = param_1[1];
    uVar30 = param_2;
    FUN_10955a944();
    lVar26 = param_2 + (lVar29 - lVar26);
    lVar29 = lVar26 - (param_1[1] - *param_1);
    _memcpy(lVar29);
    plVar18 = (long *)*param_1;
    *param_1 = lVar29;
    param_1[1] = lVar26;
    param_1[2] = param_2 + uVar30 * 0x10;
    param_1 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar18;
    }
  }
  return param_1;
}



/* Entry: 109557e34; end: 109558af3;  */

/* WARNING: Removing unreachable block (ram,0x0001095588bc) */
/* WARNING: Removing unreachable block (ram,0x00010955889c) */
/* WARNING: Removing unreachable block (ram,0x0001095587bc) */

undefined4 * FUN_109557e34(undefined4 *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  bool bVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 ****ppppuVar15;
  code *pcVar16;
  undefined8 *puVar17;
  undefined8 ****ppppuVar18;
  float **ppfVar19;
  undefined8 ****ppppuVar20;
  long lVar21;
  float *****pppppfVar22;
  float ****ppppfVar23;
  undefined8 *****pppppuVar24;
  long *plVar25;
  undefined8 *****pppppuVar26;
  ulong uVar27;
  undefined *puVar28;
  ulong uVar29;
  ulong uVar30;
  ulong *puVar31;
  float *pfVar32;
  float ****ppppfVar33;
  undefined8 *puVar34;
  float ****ppppfVar35;
  long lVar36;
  float *pfVar37;
  long lVar38;
  float *pfVar39;
  float ****ppppfVar40;
  undefined8 *****pppppuVar41;
  undefined8 *****pppppuVar42;
  int iVar43;
  float *pfVar44;
  undefined8 ****ppppuVar45;
  long lVar46;
  long lVar47;
  undefined8 ****ppppuVar48;
  float fVar49;
  float fVar50;
  float ****ppppfVar51;
  long lStack_198;
  float fStack_190;
  undefined4 uStack_18c;
  ulong uStack_188;
  byte bStack_179;
  float fStack_178;
  undefined4 uStack_174;
  char cStack_161;
  undefined8 ****ppppuStack_160;
  undefined8 ****ppppuStack_158;
  undefined8 ****ppppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  float *pfStack_130;
  float *pfStack_128;
  float *pfStack_120;
  float *pfStack_118;
  float *pfStack_110;
  undefined8 uStack_108;
  undefined8 ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ***pppuStack_e8;
  long *plStack_e0;
  float ****ppppfStack_d8;
  float ****ppppfStack_d0;
  float ****ppppfStack_c8;
  undefined8 ****ppppuStack_c0;
  float ***pppfStack_b8;
  float ***pppfStack_b0;
  
  puVar34 = (undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 6) = 0;
  *puVar34 = 0;
  plVar25 = (long *)(param_1 + 10);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  ppuVar7 = &PTR_PTR_1132dd3f0;
  if (*(undefined ***)(param_2 + 0x58) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(param_2 + 0x58);
  }
  *param_1 = *(undefined4 *)(ppuVar7 + 2);
  param_1[1] = *(undefined4 *)((long)ppuVar7 + 0x14);
  param_1[2] = *(undefined4 *)(ppuVar7 + 3);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)((long)ppuVar7 + 0x1c);
  func_0x000107c31930(puVar34,(long)*(int *)(param_2 + 0x20) + 1);
  uVar27 = *(ulong *)(param_1 + 6);
  if (uVar27 < *(ulong *)(param_1 + 8)) {
    func_0x000107c31940(uVar27,"");
    puVar17 = (undefined8 *)(uVar27 + 0x18);
    *(undefined8 **)(param_1 + 6) = puVar17;
  }
  else {
    puVar17 = puVar34;
    FUN_10955ab14(puVar34,"");
  }
  *(undefined8 **)(param_1 + 6) = puVar17;
  uVar27 = *(ulong *)(param_2 + 0x18);
  puVar31 = (ulong *)(param_2 + 0x18);
  if ((uVar27 & 1) != 0) {
    puVar31 = (ulong *)(uVar27 + 7);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    lVar36 = (long)*(int *)(param_2 + 0x20) << 3;
    do {
      func_0x000107c2ac70(puVar34,*puVar31);
      lVar36 = lVar36 + -8;
      puVar31 = puVar31 + 1;
    } while (lVar36 != 0);
  }
  uVar27 = *(ulong *)(param_2 + 0x30);
  puVar31 = (ulong *)(param_2 + 0x30);
  if ((uVar27 & 1) != 0) {
    puVar31 = (ulong *)(uVar27 + 7);
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    uVar27 = *(ulong *)(param_1 + 0xc);
    puVar2 = puVar31 + *(int *)(param_2 + 0x38);
    do {
      uVar30 = *(ulong *)(*puVar31 + 0x10);
      uVar9 = *(ulong *)(*puVar31 + 0x18);
      if (uVar27 < *(ulong *)(param_1 + 0xe)) {
        FUN_10955ad44(uVar27,uVar30 & 0xfffffffffffffffc,uVar9 & 0xfffffffffffffffc);
        uVar27 = uVar27 + 0x30;
        *(ulong *)(param_1 + 0xc) = uVar27;
      }
      else {
        lVar36 = uVar27 - *plVar25;
        uVar27 = (lVar36 >> 4) * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar27) {
          FUN_10955ae00();
          goto LAB_1095588ec;
        }
        lVar38 = (long)(*(ulong *)(param_1 + 0xe) - *plVar25) >> 4;
        uVar29 = lVar38 * 0x5555555555555556;
        if (uVar29 < uVar27 || uVar29 - uVar27 == 0) {
          uVar29 = uVar27;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar38 * -0x5555555555555555)) {
          uVar29 = 0x555555555555555;
        }
        plStack_e0 = plVar25;
        if (uVar29 == 0) {
          ppppuVar18 = (undefined8 ****)0x0;
        }
        else {
          if (0x555555555555555 < uVar29) {
            func_0x000104c4f740();
            goto LAB_1095588ec;
          }
          ppppuVar18 = (undefined8 ****)(uVar29 * 0x30);
          __Znwm();
        }
        lVar36 = (long)ppppuVar18 + lVar36;
        ppppuStack_100 = ppppuVar18;
        ppppuStack_f8 = (undefined8 ****)lVar36;
        ppppuStack_f0 = (undefined8 ****)lVar36;
        pppuStack_e8 = ppppuVar18 + uVar29 * 6;
        FUN_10955ad44(lVar36,uVar30 & 0xfffffffffffffffc,uVar9 & 0xfffffffffffffffc);
        pppppuVar41 = *(undefined8 ******)(param_1 + 10);
        pppppuVar26 = *(undefined8 ******)(param_1 + 0xc);
        puVar34 = (undefined8 *)((long)pppppuVar41 + (lVar36 - (long)pppppuVar26));
        pppppuVar24 = pppppuVar41;
        puVar17 = puVar34;
        if (pppppuVar26 != pppppuVar41) {
          do {
            ppppuVar48 = pppppuVar24[1];
            ppppuVar45 = *pppppuVar24;
            puVar17[2] = pppppuVar24[2];
            puVar17[1] = ppppuVar48;
            *puVar17 = ppppuVar45;
            pppppuVar24[1] = (undefined8 ****)0x0;
            pppppuVar24[2] = (undefined8 ****)0x0;
            *pppppuVar24 = (undefined8 ****)0x0;
            ppppuVar48 = pppppuVar24[4];
            ppppuVar45 = pppppuVar24[3];
            puVar17[5] = pppppuVar24[5];
            puVar17[4] = ppppuVar48;
            puVar17[3] = ppppuVar45;
            pppppuVar24[4] = (undefined8 ****)0x0;
            pppppuVar24[5] = (undefined8 ****)0x0;
            pppppuVar24[3] = (undefined8 ****)0x0;
            pppppuVar24 = pppppuVar24 + 6;
            puVar17 = puVar17 + 6;
          } while (pppppuVar24 != pppppuVar26);
          do {
            FUN_10955aad0(pppppuVar41);
            pppppuVar41 = pppppuVar41 + 6;
          } while (pppppuVar41 != pppppuVar26);
          pppppuVar41 = (undefined8 *****)*plVar25;
        }
        uVar27 = lVar36 + 0x30;
        *(undefined8 **)(param_1 + 10) = puVar34;
        *(ulong *)(param_1 + 0xc) = uVar27;
        pppuStack_e8 = *(undefined8 ****)(param_1 + 0xe);
        *(undefined8 *****)(param_1 + 0xe) = ppppuVar18 + uVar29 * 6;
        ppppuStack_100 = pppppuVar41;
        ppppuStack_f8 = pppppuVar41;
        ppppuStack_f0 = pppppuVar41;
        FUN_10955ae14(&ppppuStack_100);
      }
      *(ulong *)(param_1 + 0xc) = uVar27;
      puVar31 = puVar31 + 1;
    } while (puVar31 != puVar2);
  }
  plVar25 = (long *)(param_1 + 0x10);
  *plVar25 = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  ppuVar7 = &PTR_PTR_1132dd488;
  if (*(undefined ***)(param_2 + 0x50) != (undefined **)0x0) {
    ppuVar7 = *(undefined ***)(param_2 + 0x50);
  }
  pfStack_110 = (float *)0x0;
  uStack_108 = 0;
  pfStack_118 = (float *)0x0;
  FUN_10955a80c(&pfStack_118,ppuVar7[6],ppuVar7[6] + (long)*(int *)(ppuVar7 + 5) * 4);
  *(long *)(param_1 + 0x1e) = (long)pfStack_110 - (long)pfStack_118 >> 2;
  pfStack_130 = (float *)0x0;
  pfStack_128 = (float *)0x0;
  pfStack_120 = (float *)0x0;
  if (*(int *)(ppuVar7 + 8) == 1) {
    puVar28 = ppuVar7[7];
    ppuVar8 = ppuVar7 + 7;
    if (((ulong)puVar28 & 1) != 0) {
      ppuVar8 = (undefined **)(puVar28 + 7);
    }
    puVar28 = *ppuVar8;
    iVar10 = *(int *)(puVar28 + 0x10);
    *(long *)(param_1 + 0x1c) = (long)iVar10;
    if (iVar10 == 0) {
      func_0x000105688514(&UNK_10f5735fa);
    }
    else {
      pfVar32 = *(float **)(puVar28 + 0x18);
      lVar36 = (long)iVar10 << 2;
      do {
        if (pfStack_128 < pfStack_120) {
          pfVar44 = pfStack_128 + 1;
          *pfStack_128 = *pfVar32;
        }
        else {
          lVar38 = (long)pfStack_128 - (long)pfStack_130;
          uVar27 = (lVar38 >> 2) + 1;
          if (uVar27 >> 0x3e != 0) {
            FUN_1092cc18c();
            goto LAB_1095588ec;
          }
          uVar30 = (long)pfStack_120 - (long)pfStack_130 >> 1;
          if (uVar30 <= uVar27) {
            uVar30 = uVar27;
          }
          if (0x7ffffffffffffffb < (ulong)((long)pfStack_120 - (long)pfStack_130)) {
            uVar30 = 0x3fffffffffffffff;
          }
          ppfVar19 = &pfStack_130;
          FUN_1092cc1a0();
          pfVar39 = pfStack_130;
          pfVar3 = (float *)((long)ppfVar19 + lVar38);
          pfVar4 = (float *)((long)ppfVar19 + uVar30 * 4);
          pfVar37 = (float *)((long)pfVar3 - ((long)pfStack_128 - (long)pfStack_130));
          pfVar44 = pfVar3 + 1;
          *pfVar3 = *pfVar32;
          _memcpy(pfVar37,pfVar39);
          bVar6 = pfStack_130 != (float *)0x0;
          pfStack_130 = pfVar37;
          pfStack_120 = pfVar4;
          if (bVar6) {
            pfStack_128 = pfVar44;
            __ZdlPv();
          }
        }
        pfVar32 = pfVar32 + 1;
        lVar36 = lVar36 + -4;
        pfStack_128 = pfVar44;
      } while (lVar36 != 0);
      lStack_140 = 0;
      uStack_138 = 0;
      lStack_148 = 0;
      FUN_10955a79c(&lStack_148,ppuVar7[0xb],ppuVar7[0xb] + (long)*(int *)(ppuVar7 + 10) * 4);
      lVar36 = lStack_140 - lStack_148;
      if (lVar36 == 0) {
        func_0x000105688514(&UNK_10f573619);
      }
      else {
        lStack_198 = 0;
        iVar10 = *(int *)((long)ppuVar7 + 100);
        *(long *)(param_1 + 0x16) = (long)iVar10;
        iVar11 = *(int *)(ppuVar7 + 0xd);
        *(long *)(param_1 + 0x18) = (long)iVar11;
        ppppuStack_100 = (undefined8 *****)0x0;
        ppppuStack_f8 = (undefined8 *****)0x0;
        ppppuStack_f0 = (undefined8 *****)0x0;
        lVar38 = ((long)pfStack_128 - (long)pfStack_130 >> 2) *
                 ((long)pfStack_110 - (long)pfStack_118 >> 2);
        do {
          ppppuStack_c0 = (undefined8 ****)0x0;
          pppfStack_b8 = (float ***)0x0;
          pppfStack_b0 = (float ***)0x0;
          ppppfStack_d8 = (float ****)0x0;
          ppppfStack_d0 = (float ****)0x0;
          ppppfStack_c8 = (float ****)0x0;
          FUN_1094d5930(&ppppfStack_d8,lVar38);
          pfVar3 = pfStack_128;
          for (pfVar32 = pfStack_130; pfVar4 = pfStack_110, pfVar32 != pfVar3; pfVar32 = pfVar32 + 1
              ) {
            if (pfStack_118 != pfStack_110) {
              fVar49 = *pfVar32;
              fVar50 = SQRT((float)*(int *)(lStack_148 + lStack_198 * 4) / fVar49);
              pfVar39 = pfStack_118;
              do {
                fStack_178 = fVar49 * fVar50 * *pfVar39;
                fStack_190 = fVar50 * *pfVar39;
                if (ppppfStack_d0 < ppppfStack_c8) {
                  pppppfVar22 = (float *****)(ppppfStack_d0 + 1);
                  *(float *)ppppfStack_d0 = fStack_178;
                  *(float *)((long)ppppfStack_d0 + 4) = fStack_190;
                }
                else {
                  pppppfVar22 = &ppppfStack_d8;
                  FUN_1094d8ed8(pppppfVar22,&fStack_178,&fStack_190);
                }
                pfVar39 = pfVar39 + 1;
                ppppfStack_d0 = (float ****)pppppfVar22;
              } while (pfVar39 != pfVar4);
            }
          }
          uVar1 = (int)lStack_198 + 3;
          iVar12 = 1 << (ulong)(uVar1 & 0x1f);
          iVar5 = iVar11 + -1 + iVar12 >> (uVar1 & 0x1f);
          iVar12 = iVar10 + -1 + iVar12 >> (uVar1 & 0x1f);
          iVar13 = iVar5 * iVar12;
          ppppfVar23 = (float ****)(lVar38 * iVar13);
          FUN_10955a634(&ppppuStack_c0);
          if (0 < iVar13) {
            iVar43 = 0;
            do {
              ppppfVar51 = (float ****)ppppuStack_c0;
              ppppfVar33 = (float ****)pppfStack_b8;
              ppppfVar35 = (float ****)pppfStack_b0;
              if (lVar38 != 0) {
                lVar47 = 0;
                iVar14 = 0;
                if (iVar12 != 0) {
                  iVar14 = iVar43 / iVar12;
                }
                fVar49 = ((float)iVar10 / (float)iVar12) *
                         ((float)(uint)(iVar43 - iVar14 * iVar12) + 0.5);
                fVar50 = ((float)iVar11 / (float)iVar5) * ((float)iVar14 + 0.5);
                ppppfVar40 = (float ****)ppppuStack_c0;
                do {
                  ppppfVar51 = (float ****)ppppfStack_d8[lVar47];
                  if (ppppfVar33 < ppppfVar35) {
                    *(float *)ppppfVar33 = fVar49;
                    *(float *)((long)ppppfVar33 + 4) = fVar50;
                    ppppfVar33[1] = (float ***)ppppfVar51;
                    ppppfVar51 = ppppfVar40;
                  }
                  else {
                    lVar46 = (long)ppppfVar33 - (long)ppppfVar40;
                    uVar27 = (lVar46 >> 4) + 1;
                    if (uVar27 >> 0x3c != 0) {
                      ppppuStack_c0 = (undefined8 ****)ppppfVar40;
                      FUN_10955a978();
                      goto LAB_1095588ec;
                    }
                    uVar30 = (long)ppppfVar35 - (long)ppppfVar40 >> 3;
                    if (uVar30 <= uVar27) {
                      uVar30 = uVar27;
                    }
                    if (0x7fffffffffffffef < (ulong)((long)ppppfVar35 - (long)ppppfVar40)) {
                      uVar30 = 0xfffffffffffffff;
                    }
                    FUN_10955a98c();
                    ppppfVar33 = (float ****)(uVar30 + lVar46);
                    ppppfVar35 = (float ****)(uVar30 + (long)ppppfVar23 * 0x10);
                    *(float *)ppppfVar33 = fVar49;
                    *(float *)((long)ppppfVar33 + 4) = fVar50;
                    ppppfVar33[1] = (float ***)ppppfVar51;
                    ppppfVar51 = ppppfVar33 + (lVar46 >> 4) * -2;
                    ppppfVar23 = ppppfVar40;
                    _memcpy(ppppfVar51,ppppfVar40,lVar46);
                    if (ppppfVar40 != (float ****)0x0) {
                      __ZdlPv(ppppfVar40);
                    }
                  }
                  ppppfVar33 = ppppfVar33 + 2;
                  lVar47 = lVar47 + 1;
                  ppppfVar40 = ppppfVar51;
                } while (lVar38 - lVar47 != 0);
              }
              pppfStack_b0 = (float ***)ppppfVar35;
              pppfStack_b8 = (float ***)ppppfVar33;
              ppppuStack_c0 = (undefined8 ****)ppppfVar51;
              iVar43 = iVar43 + 1;
            } while (iVar43 != iVar13);
          }
          ppppuVar18 = ppppuStack_c0;
          lVar47 = (long)pppfStack_b8 - (long)ppppuStack_c0;
          if (lVar47 == 0) {
            ppppuVar20 = (undefined8 ****)0x0;
            ppppuVar48 = (undefined8 ****)0x0;
            ppppuVar45 = (undefined8 ****)0x0;
          }
          else {
            ppppuVar20 = (undefined8 ****)(lVar47 >> 4);
            if ((ulong)ppppuVar20 >> 0x3c != 0) {
              FUN_10955a978();
              goto LAB_1095588ec;
            }
            FUN_10955a98c();
            ppppuVar45 = ppppuVar20 + (long)ppppfVar23 * 2;
            _memmove();
            ppppuVar48 = (undefined8 ****)((long)ppppuVar20 + lVar47);
          }
          ppppuVar15 = ppppuStack_f8;
          pppppuVar24 = (undefined8 *****)ppppuStack_100;
          if (ppppuStack_f8 < ppppuStack_f0) {
            *ppppuStack_f8 = (undefined8 ****)CONCAT44(iVar12,iVar5);
            ppppuStack_f8[1] = ppppuVar20;
            pppppuVar24 = (undefined8 *****)(ppppuStack_f8 + 4);
            ppppuStack_f8[2] = ppppuVar48;
            ppppuStack_f8[3] = ppppuVar45;
          }
          else {
            lVar47 = (long)ppppuStack_f8 - (long)ppppuStack_100;
            lVar46 = lVar47 >> 5;
            uVar27 = lVar46 + 1;
            if (uVar27 >> 0x3b != 0) {
              FUN_10955a9c0();
              goto LAB_1095588ec;
            }
            uVar30 = (long)ppppuStack_f0 - (long)ppppuStack_100 >> 4;
            if (uVar30 <= uVar27) {
              uVar30 = uVar27;
            }
            if (0x7fffffffffffffdf < (ulong)((long)ppppuStack_f0 - (long)ppppuStack_100)) {
              uVar30 = 0x7ffffffffffffff;
            }
            if (uVar30 >> 0x3b != 0) {
              func_0x000104c4f740();
              goto LAB_1095588ec;
            }
            lVar21 = uVar30 << 5;
            __Znwm();
            puVar34 = (undefined8 *)(lVar21 + lVar47);
            *puVar34 = (undefined8 ****)CONCAT44(iVar12,iVar5);
            puVar34[1] = ppppuVar20;
            puVar34[2] = ppppuVar48;
            puVar34[3] = ppppuVar45;
            pppppuVar42 = (undefined8 *****)(puVar34 + lVar46 * -4);
            pppppuVar26 = pppppuVar42;
            pppppuVar41 = pppppuVar24;
            if (pppppuVar24 != (undefined8 *****)ppppuVar15) {
              do {
                *pppppuVar26 = *pppppuVar41;
                pppppuVar26[1] = (undefined8 ****)0x0;
                pppppuVar26[2] = (undefined8 ****)0x0;
                pppppuVar26[3] = (undefined8 ****)0x0;
                ppppuVar45 = pppppuVar41[1];
                pppppuVar26[2] = pppppuVar41[2];
                pppppuVar26[1] = ppppuVar45;
                pppppuVar26[3] = pppppuVar41[3];
                pppppuVar41[1] = (undefined8 ****)0x0;
                pppppuVar41[2] = (undefined8 ****)0x0;
                pppppuVar41[3] = (undefined8 ****)0x0;
                pppppuVar41 = pppppuVar41 + 4;
                pppppuVar26 = pppppuVar26 + 4;
              } while (pppppuVar41 != (undefined8 *****)ppppuVar15);
              do {
                if (pppppuVar24[1] != (undefined8 ****)0x0) {
                  pppppuVar24[2] = pppppuVar24[1];
                  __ZdlPv();
                }
                pppppuVar24 = pppppuVar24 + 4;
                pppppuVar41 = (undefined8 *****)ppppuStack_100;
              } while (pppppuVar24 != (undefined8 *****)ppppuVar15);
            }
            ppppuStack_f0 = (undefined8 ****)(lVar21 + uVar30 * 0x20);
            pppppuVar24 = (undefined8 *****)(puVar34 + 4);
            ppppuStack_100 = pppppuVar42;
            if (pppppuVar41 != (undefined8 *****)0x0) {
              ppppuStack_f8 = pppppuVar24;
              __ZdlPv(pppppuVar41);
            }
          }
          ppppuStack_f8 = pppppuVar24;
          if ((float *****)ppppfStack_d8 != (float *****)0x0) {
            ppppfStack_d0 = ppppfStack_d8;
            __ZdlPv();
          }
          if ((float ****)ppppuVar18 != (float ****)0x0) {
            __ZdlPv(ppppuVar18);
          }
          lStack_198 = lStack_198 + 1;
        } while (lStack_198 != lVar36 >> 2);
        ppppuStack_158 = ppppuStack_f8;
        ppppuStack_160 = ppppuStack_100;
        ppppuStack_150 = ppppuStack_f0;
        ppppuStack_f8 = (undefined8 *****)0x0;
        ppppuStack_f0 = (undefined8 *****)0x0;
        ppppuStack_100 = (undefined8 ****)0x0;
        ppppuStack_c0 = &ppppuStack_100;
        FUN_10955aa20(&ppppuStack_c0);
        if (*plVar25 != 0) {
          FUN_10955a9d4();
          __ZdlPv(*plVar25);
          *plVar25 = 0;
          *(undefined8 *)(param_1 + 0x12) = 0;
          *(undefined8 *)(param_1 + 0x14) = 0;
        }
        *(undefined8 *****)(param_1 + 0x12) = ppppuStack_158;
        *(undefined8 *****)(param_1 + 0x10) = ppppuStack_160;
        *(undefined8 *****)(param_1 + 0x14) = ppppuStack_150;
        ppppuStack_158 = (undefined8 ****)0x0;
        ppppuStack_150 = (undefined8 ****)0x0;
        ppppuStack_160 = (undefined8 ****)0x0;
        ppppuStack_100 = &ppppuStack_160;
        FUN_10955aa20(&ppppuStack_100);
        lVar36 = *(long *)(param_1 + 0x12) - *(long *)(param_1 + 0x10) >> 5;
        if (lVar36 == (*(long *)(param_1 + 0xc) - *(long *)(param_1 + 10) >> 4) *
                      -0x5555555555555555) {
          *(long *)(param_1 + 0x1a) = lVar36;
          if (lStack_148 != 0) {
            lStack_140 = lStack_148;
            __ZdlPv();
          }
          if (pfStack_130 != (float *)0x0) {
            pfStack_128 = pfStack_130;
            __ZdlPv();
          }
          if (pfStack_118 != (float *)0x0) {
            pfStack_110 = pfStack_118;
            __ZdlPv();
          }
          return param_1;
        }
        __ZNSt3__19to_stringEm(&fStack_178);
        FUN_10928a5e0(&ppppuStack_160,&UNK_10f573663,&fStack_178);
        FUN_109259240(&ppppfStack_d8,&ppppuStack_160,&UNK_10f57367c);
        __ZNSt3__19to_stringEm
                  (&fStack_190,
                   (*(long *)(param_1 + 0xc) - *(long *)(param_1 + 10) >> 4) * -0x5555555555555555);
        pfVar32 = (float *)CONCAT44(uStack_18c,fStack_190);
        if (-1 < (char)bStack_179) {
          uStack_188 = (ulong)bStack_179;
          pfVar32 = &fStack_190;
        }
        pppppfVar22 = &ppppfStack_d8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppppfVar22,pfVar32,uStack_188);
        pppfStack_b8 = (float ***)pppppfVar22[1];
        ppppuStack_c0 = (undefined8 ****)*pppppfVar22;
        pppfStack_b0 = (float ***)pppppfVar22[2];
        pppppfVar22[1] = (float ****)0x0;
        pppppfVar22[2] = (float ****)0x0;
        *pppppfVar22 = (float ****)0x0;
        FUN_109259240(&ppppuStack_100,&ppppuStack_c0,&UNK_10f57369b);
        if ((char)bStack_179 < '\0') {
          __ZdlPv(CONCAT44(uStack_18c,fStack_190));
        }
        if ((long)ppppuStack_150 < 0) {
          __ZdlPv(ppppuStack_160);
        }
        if (cStack_161 < '\0') {
          __ZdlPv(CONCAT44(uStack_174,fStack_178));
        }
        func_0x000105687ee0(&ppppuStack_100);
      }
    }
  }
  else {
    __ZNSt3__19to_stringEi(&ppppuStack_c0);
    FUN_10928a5e0(&ppppuStack_100,&UNK_10f573594,&ppppuStack_c0);
    func_0x000105687ee0(&ppppuStack_100);
  }
LAB_1095588ec:
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1095588f0);
  (*pcVar16)();
}



/* Entry: 109558af4; end: 109558b3b;  */

long FUN_109558af4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x28;
  FUN_10955aa60(&lStack_28);
  lStack_28 = param_1 + 0x10;
  func_0x000104c607c8(&lStack_28);
  return param_1;
}



/* Entry: 109558b3c; end: 1095596a3;  */

/* WARNING: Removing unreachable block (ram,0x000109559370) */

void FUN_109558b3c(undefined8 *param_1,long param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint6 uVar14;
  undefined8 ****ppppuVar15;
  code *pcVar16;
  long *plVar17;
  long *plVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  undefined8 *puVar33;
  long lVar34;
  long lVar35;
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  undefined8 *puStack_330;
  undefined8 uStack_308;
  int iStack_300;
  int iStack_2fc;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  int *piStack_2c8;
  ulong *puStack_2c0;
  ulong auStack_2b8 [2];
  undefined8 ***pppuStack_2a8;
  ulong uStack_2a0;
  byte bStack_291;
  undefined8 ***pppuStack_290;
  ulong uStack_288;
  byte bStack_279;
  undefined8 ***pppuStack_278;
  ulong uStack_270;
  byte bStack_261;
  undefined8 ***pppuStack_260;
  ulong uStack_258;
  byte bStack_249;
  undefined8 auStack_248 [2];
  char cStack_231;
  undefined8 auStack_230 [2];
  char cStack_219;
  undefined8 auStack_218 [2];
  char cStack_201;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  long lStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined8 *puStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined8 **ppuStack_e0;
  long *plStack_d8;
  long alStack_d0 [2];
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  
  uStack_190 = 0;
  auVar38._0_14_ = ZEXT214(0);
  auVar38._14_2_ = 0;
  lStack_198 = 0;
  lStack_1a0 = 0;
  lVar5 = *(long *)(param_2 + 0x70);
  lVar6 = *(long *)(param_2 + 0x78);
  if (*(long *)(param_2 + 0x68) == 0) {
    uStack_190 = 0;
    puVar28 = (undefined8 *)0x0;
    puVar27 = (undefined8 *)0x0;
    puStack_330 = (undefined8 *)0x0;
  }
  else {
    puStack_330 = (undefined8 *)0x0;
    puVar27 = (undefined8 *)0x0;
    puVar28 = (undefined8 *)0x0;
    uVar26 = 0;
    uVar23 = (*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3) * -0x5555555555555555;
    uVar21 = -(uVar23 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar23 & 0xffffffff) << 2;
    puVar24 = (undefined8 *)((ulong)&uStack_120 | 4);
    uVar46 = NEON_fmov(0x3f800000,4);
    do {
      lVar30 = *(long *)(param_2 + 0x28) + uVar26 * 0x30;
      plVar17 = param_3;
      FUN_1095596a4(param_3,lVar30);
      lVar22 = plVar17[1];
      iVar3 = *(int *)(lVar22 + 4);
      iVar4 = *(int *)(lVar22 + 8);
      iVar7 = *(int *)(lVar22 + 0xc);
      plVar18 = param_3;
      FUN_1095596a4(param_3,lVar30 + 0x18);
      iVar8 = iVar4 * iVar3 * iVar7;
      piVar2 = (int *)(*(long *)(param_2 + 0x40) + uVar26 * 0x20);
      lVar22 = lVar6 * lVar5 * (long)piVar2[1] * (long)*piVar2;
      uVar31 = (ulong)iVar8;
      iVar11 = 0;
      if (uVar23 != 0) {
        iVar11 = (int)(uVar31 / uVar23);
      }
      iVar29 = (int)lVar22;
      if (iVar29 != iVar11) {
        __ZNSt3__19to_stringEm(auStack_248,lVar22);
        FUN_10928a5e0(auStack_230,&UNK_10f5736d6,auStack_248);
        FUN_109259240(auStack_218,auStack_230,&UNK_10f5736f6);
        __ZNSt3__19to_stringEi(&pppuStack_260,iVar3);
        ppppuVar15 = (undefined8 ****)pppuStack_260;
        if (-1 < (char)bStack_249) {
          uStack_258 = (ulong)bStack_249;
          ppppuVar15 = &pppuStack_260;
        }
        puVar27 = auStack_218;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar27,ppppuVar15,uStack_258);
        uStack_200 = *puVar27;
        uStack_1f8 = puVar27[1];
        lStack_1f0 = puVar27[2];
        puVar27[1] = 0;
        puVar27[2] = 0;
        *puVar27 = 0;
        FUN_109259240(auStack_1e8,&uStack_200,&UNK_10f57371b);
        __ZNSt3__19to_stringEi(&pppuStack_278,iVar4);
        ppppuVar15 = (undefined8 ****)pppuStack_278;
        if (-1 < (char)bStack_261) {
          uStack_270 = (ulong)bStack_261;
          ppppuVar15 = &pppuStack_278;
        }
        puVar27 = auStack_1e8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar27,ppppuVar15,uStack_270);
        uStack_1d0 = *puVar27;
        uStack_1c8 = puVar27[1];
        lStack_1c0 = puVar27[2];
        puVar27[1] = 0;
        puVar27[2] = 0;
        *puVar27 = 0;
        FUN_109259240(auStack_1b8,&uStack_1d0,&UNK_10f57371b);
        __ZNSt3__19to_stringEi(&pppuStack_290,iVar7);
        ppppuVar15 = (undefined8 ****)pppuStack_290;
        if (-1 < (char)bStack_279) {
          uStack_288 = (ulong)bStack_279;
          ppppuVar15 = &pppuStack_290;
        }
        puVar27 = auStack_1b8;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar27,ppppuVar15,uStack_288);
        uStack_c0 = *puVar27;
        puStack_b8 = (undefined8 *)puVar27[1];
        uStack_b0 = puVar27[2];
        puVar27[1] = 0;
        puVar27[2] = 0;
        *puVar27 = 0;
        FUN_109259240(&uStack_308,&uStack_c0,&UNK_10f57371f);
        __ZNSt3__19to_stringEm(&pppuStack_2a8,uVar23);
        ppppuVar15 = (undefined8 ****)pppuStack_2a8;
        if (-1 < (char)bStack_291) {
          uStack_2a0 = (ulong)bStack_291;
          ppppuVar15 = &pppuStack_2a8;
        }
        puVar27 = &uStack_308;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (puVar27,ppppuVar15,uStack_2a0);
        uStack_180 = *puVar27;
        puStack_178 = (undefined8 *)puVar27[1];
        lStack_170 = puVar27[2];
        puVar27[1] = 0;
        puVar27[2] = 0;
        *puVar27 = 0;
        FUN_109259240(&uStack_120,&uStack_180,&UNK_10f57372d);
        if (lStack_170 < 0) {
          __ZdlPv(uStack_180);
        }
        if ((char)bStack_291 < '\0') {
          __ZdlPv(pppuStack_2a8);
        }
        if (lStack_2f8 < 0) {
          __ZdlPv(uStack_308);
        }
        if ((char)bStack_279 < '\0') {
          __ZdlPv(pppuStack_290);
        }
        if (cStack_1a1 < '\0') {
          __ZdlPv(auStack_1b8[0]);
        }
        if (lStack_1c0 < 0) {
          __ZdlPv(uStack_1d0);
        }
        if ((char)bStack_261 < '\0') {
          __ZdlPv(pppuStack_278);
        }
        if (cStack_1d1 < '\0') {
          __ZdlPv(auStack_1e8[0]);
        }
        if (lStack_1f0 < 0) {
          __ZdlPv(uStack_200);
        }
        if ((char)bStack_249 < '\0') {
          __ZdlPv(pppuStack_260);
        }
        if (cStack_201 < '\0') {
          __ZdlPv(auStack_218[0]);
        }
        if (cStack_219 < '\0') {
          __ZdlPv(auStack_230[0]);
        }
        if (cStack_231 < '\0') {
          __ZdlPv(auStack_248[0]);
        }
        func_0x000105687ee0(&uStack_120);
LAB_10955948c:
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x109559490);
        (*pcVar16)();
      }
      lVar30 = *plVar17;
      lVar35 = *plVar18;
      lVar34 = lStack_198 - lStack_1a0;
      func_0x0001073b504c(&lStack_1a0,uVar31 + (lVar34 >> 2));
      if (iVar8 != 0) {
        lVar32 = uVar31 << 2;
        do {
          FUN_1092c9a40(&lStack_1a0,lVar30);
          lVar30 = lVar30 + 4;
          lVar32 = lVar32 + -4;
        } while (lVar32 != 0);
      }
      lStack_2f8 = lStack_1a0 + lVar34;
      uStack_308 = 0x242ff0005;
      iStack_2fc = (int)uVar23;
      lStack_2e0 = 0;
      lStack_2e8 = 0;
      lStack_2d0 = 0;
      uStack_2d8 = 0;
      auStack_2b8[0] = 0;
      auStack_2b8[1] = 0;
      iStack_300 = iVar29;
      lStack_2f0 = lStack_2f8;
      piStack_2c8 = &iStack_300;
      puStack_2c0 = auStack_2b8;
      if (((long)iVar29 * (long)iStack_2fc != 0) && (lStack_1a0 == 0)) {
        puStack_118 = (undefined8 *)0x0;
        uStack_120 = (undefined4 *)0x0;
        puVar19 = (undefined4 *)0x24;
        func_0x000107c2ae8c();
        *puVar19 = 1;
        uStack_120 = puVar19 + 1;
        puStack_118 = (undefined8 *)0x1c;
        *(undefined1 *)(puVar19 + 8) = 0;
        *(undefined8 *)(puVar19 + 3) = 0x207c7c2030203d3d;
        *(undefined8 *)(puVar19 + 1) = 0x2029286c61746f74;
        *(undefined8 *)(puVar19 + 6) = 0x4c4c554e203d2120;
        *(undefined8 *)(puVar19 + 4) = 0x61746164207c7c20;
        FUN_109ac3188(0xffffff29,&uStack_120,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
        goto LAB_10955948c;
      }
      uStack_308 = 0x242ff4005;
      auStack_2b8[1] = 4;
      lStack_2e8 = lStack_2f8 + (long)iVar29 * uVar21;
      lStack_110 = 0;
      uStack_120._0_4_ = 0x1010000;
      uStack_180._0_4_ = 0x2010000;
      lStack_170 = 0;
      lStack_2e0 = lStack_2e8;
      auStack_2b8[0] = uVar21;
      puStack_178 = &uStack_308;
      puStack_118 = &uStack_308;
      FUN_109a60a84(&uStack_120,&uStack_180);
      uStack_120 = (undefined4 *)CONCAT44(uStack_120._4_4_,0x42ff0000);
      puVar24[1] = 0;
      *puVar24 = 0;
      puVar24[3] = 0;
      puVar24[2] = 0;
      puVar24[5] = 0;
      puVar24[4] = 0;
      *(undefined8 *)((long)puVar24 + 0x34) = 0;
      *(undefined8 *)((long)puVar24 + 0x2c) = 0;
      alStack_d0[0] = 0;
      alStack_d0[1] = 0;
      lStack_170 = 0;
      uStack_180 = CONCAT44(uStack_180._4_4_,0x1010000);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,0x2010000);
      puStack_b8 = &uStack_120;
      uStack_b0 = 0;
      puVar20 = &uStack_c0;
      puStack_178 = &uStack_308;
      ppuStack_e0 = &puStack_118;
      plStack_d8 = alStack_d0;
      FUN_109a93444(&uStack_180,puVar20,1,0,0xffffffff);
      if (0 < iStack_300) {
        lVar30 = 0;
        do {
          fVar47 = *(float *)(lStack_110 + *plStack_d8 * lVar30);
          lVar34 = lVar30 + 1;
          uStack_c0._4_4_ = (undefined4)lVar34;
          uStack_c0._0_4_ = (undefined4)lVar30;
          auStack_1b8[0] = 0x7fffffff80000000;
          FUN_109a84930(&uStack_180,&uStack_308,&uStack_c0,auStack_1b8);
          uStack_c0 = CONCAT44(uStack_c0._4_4_,0x2010000);
          uStack_b0 = 0;
          puVar20 = &uStack_c0;
          puStack_b8 = &uStack_180;
          FUN_109a41858(1.0 / (double)fVar47,0,&uStack_180,puVar20,0xffffffff);
          if (lStack_148 != 0) {
            piVar1 = (int *)(lStack_148 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar10) {
                *piVar1 = iVar3 + -1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(&uStack_180);
            }
          }
          lStack_148 = 0;
          uStack_168 = 0;
          lStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          if (0 < uStack_180._4_4_) {
            lVar30 = 0;
            do {
              *(undefined4 *)(lStack_140 + lVar30 * 4) = 0;
              lVar30 = lVar30 + 1;
            } while (lVar30 < uStack_180._4_4_);
          }
          if (puStack_138 != auStack_130 && puStack_138 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_138 + -8));
          }
          lVar30 = lVar34;
        } while (lVar34 < iStack_300);
      }
      if (lStack_e8 != 0) {
        piVar1 = (int *)(lStack_e8 + 0x14);
        do {
          iVar3 = *piVar1;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar3 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_120);
        }
      }
      lStack_e8 = 0;
      uStack_108 = 0;
      lStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      if (0 < uStack_120._4_4_) {
        lVar30 = 0;
        do {
          *(undefined4 *)((long)ppuStack_e0 + lVar30 * 4) = 0;
          lVar30 = lVar30 + 1;
        } while (lVar30 < uStack_120._4_4_);
      }
      if (plStack_d8 != alStack_d0 && plStack_d8 != (long *)0x0) {
        _free(plStack_d8[-1]);
      }
      if (lVar22 != 0) {
        lVar30 = 0;
        lVar35 = lVar35 + 0xc;
        do {
          lVar34 = *(long *)(piVar2 + 2);
          fVar47 = (float)_expf();
          fVar36 = (float)_expf();
          uVar37 = *(undefined8 *)(lVar34 + lVar30);
          uVar42 = ((undefined8 *)(lVar34 + lVar30))[1];
          fVar41 = (float)uVar42;
          fVar43 = (float)((ulong)uVar42 >> 0x20);
          fVar44 = ((float)uVar37 + fVar41 * (float)*(undefined8 *)(lVar35 + -0xc)) /
                   (float)*(ulong *)(param_2 + 0x58);
          fVar45 = ((float)((ulong)uVar37 >> 0x20) +
                   fVar43 * (float)((ulong)*(undefined8 *)(lVar35 + -0xc) >> 0x20)) /
                   (float)*(ulong *)(param_2 + 0x60);
          fVar47 = (fVar41 * fVar47 * 0.5) / (float)*(ulong *)(param_2 + 0x58);
          fVar36 = (fVar43 * fVar36 * 0.5) / (float)*(ulong *)(param_2 + 0x60);
          fVar41 = fVar44 - fVar47;
          fVar43 = fVar45 - fVar36;
          uVar37 = CONCAT44(fVar43,fVar41);
          fVar44 = fVar44 + fVar47;
          fVar45 = fVar45 + fVar36;
          if (puVar27 < puVar28) {
            uVar37 = NEON_fmaxnm(uVar37,0,4);
            uVar42 = NEON_fminnm(CONCAT44(fVar45,fVar44),uVar46,4);
            *puVar27 = uVar37;
            puVar27[1] = uVar42;
            puVar33 = puStack_330;
          }
          else {
            lVar34 = (long)puVar27 - (long)puStack_330;
            uVar31 = (lVar34 >> 4) + 1;
            if (uVar31 >> 0x3c != 0) {
              FUN_10955a930();
              goto LAB_10955948c;
            }
            uVar25 = (long)puVar28 - (long)puStack_330 >> 3;
            if (uVar25 <= uVar31) {
              uVar25 = uVar31;
            }
            if (0x7fffffffffffffef < (ulong)((long)puVar28 - (long)puStack_330)) {
              uVar25 = 0xfffffffffffffff;
            }
            FUN_10955a944();
            puVar27 = (undefined8 *)(uVar25 + lVar34);
            puVar28 = (undefined8 *)(uVar25 + (long)puVar20 * 0x10);
            uVar14 = CONCAT24(-(ushort)(0.0 < fVar43),-(uint)(0.0 < fVar41)) & 0xffff0000ffff;
            auVar39._0_4_ = -(uint)((int)uVar14 << 0x1f < 0);
            auVar39._4_4_ = -(uint)((int)((uint)(ushort)(uVar14 >> 0x20) << 0x1f) < 0);
            auVar39._8_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar44 < 1.0) << 0x1f) < 0);
            auVar39._12_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar45 < 1.0) << 0x1f) < 0);
            auVar12._12_4_ = 0x3f800000;
            auVar12._0_12_ = ZEXT412(0x3f800000) << 0x40;
            auVar13._8_4_ = fVar44;
            auVar13._0_8_ = uVar37;
            auVar13._12_4_ = fVar45;
            auVar40._12_4_ = 0x3f800000;
            auVar40._0_12_ = ZEXT412(0x3f800000) << 0x40;
            auVar40 = auVar40 ^ (auVar12 ^ auVar13) & auVar39;
            puVar33 = puVar27 + (lVar34 >> 4) * -2;
            puVar27[1] = auVar40._8_8_;
            *puVar27 = auVar40._0_8_;
            puVar20 = puStack_330;
            _memcpy(puVar33,puStack_330,lVar34);
            if (puStack_330 != (undefined8 *)0x0) {
              __ZdlPv(puStack_330);
            }
          }
          puStack_330 = puVar33;
          puVar27 = puVar27 + 2;
          lVar35 = lVar35 + 0x10;
          lVar30 = lVar30 + 0x10;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      if (lStack_2d0 != 0) {
        piVar2 = (int *)(lStack_2d0 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = iVar3 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_308);
        }
      }
      lStack_2d0 = 0;
      lStack_2f0 = 0;
      lStack_2f8 = 0;
      lStack_2e0 = 0;
      lStack_2e8 = 0;
      if (0 < uStack_308._4_4_) {
        lVar22 = 0;
        do {
          piStack_2c8[lVar22] = 0;
          lVar22 = lVar22 + 1;
        } while (lVar22 < uStack_308._4_4_);
      }
      if (puStack_2c0 != auStack_2b8 && puStack_2c0 != (ulong *)0x0) {
        _free(puStack_2c0[-1]);
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(ulong *)(param_2 + 0x68));
    auVar38._8_8_ = lStack_198;
    auVar38._0_8_ = lStack_1a0;
  }
  *param_1 = puStack_330;
  param_1[1] = puVar27;
  param_1[2] = puVar28;
  param_1[4] = auVar38._8_8_;
  param_1[3] = auVar38._0_8_;
  param_1[5] = uStack_190;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 1095596a4; end: 1095596df;  */

undefined8 * FUN_1095596a4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint6 uVar12;
  undefined1 auVar13 [16];
  code *pcVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long *plVar17;
  float *pfVar18;
  undefined8 *extraout_x8;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  int iVar22;
  long *plVar23;
  ulong uVar24;
  float *pfVar25;
  float *pfVar26;
  undefined8 *puVar27;
  long lVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  float fVar42;
  float fStack_11c;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float *pfStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  long lStack_18;
  
  plVar17 = &lStack_18;
  FUN_10955ae60(param_1,plVar17,param_2);
  if (*param_1 != 0) {
    return (undefined8 *)(*param_1 + 0x38);
  }
  pcVar15 = "map::at:  key not found";
  FUN_109262df8();
  lVar28 = *plVar17;
  plVar23 = (long *)(lVar28 + 8);
  iVar22 = 0;
  for (; lVar28 != plVar17[1]; lVar28 = lVar28 + 0x38) {
    iVar22 = iVar22 + *(int *)(*(long *)(lVar28 + 8) + 8) * *(int *)(*(long *)(lVar28 + 8) + 4);
  }
  iVar6 = *(int *)(*plVar23 + 0xc);
  pfStack_c0 = (float *)0x0;
  puStack_b8 = (undefined8 *)0x0;
  puStack_b0 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  FUN_109557da4(&pfStack_c0,(long)iVar22);
  puVar16 = &uStack_e0;
  func_0x0001073b504c(puVar16,(long)iVar22 * ((long)iVar6 + -5));
  lVar28 = *plVar17;
  puStack_110 = puVar16;
  if (plVar17[1] != lVar28) {
    uVar24 = 0;
    do {
      plVar23 = (long *)(lVar28 + uVar24 * 0x38);
      puStack_118 = (undefined8 *)*plVar23;
      puStack_108 = (undefined8 *)0x0;
      uStack_100 = 0;
      puStack_110 = (undefined8 *)0x0;
      pfVar18 = (float *)plVar23[1];
      FUN_109285684(&puStack_110,pfVar18,plVar23[2],plVar23[2] - (long)pfVar18 >> 2);
      uStack_f8 = (undefined4)plVar23[4];
      plStack_e8 = SUB168(*(undefined1 (*) [16])(plVar23 + 5),8);
      uStack_f0 = SUB168(*(undefined1 (*) [16])(plVar23 + 5),0);
      if (plVar23[6] != 0) {
        plVar23 = (long *)(plVar23[6] + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar8) {
            *plVar23 = *plVar23 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uVar5 = *(uint *)((long)puStack_110 + 4);
      if (0 < (int)uVar5) {
        uVar19 = 0;
        uVar3 = *(uint *)(puStack_110 + 1);
        uVar4 = *(uint *)((long)puStack_110 + 0xc);
        fVar30 = (float)*(int *)(*(long *)(pcVar15 + 0x48) + uVar24 * 4);
        puVar16 = puStack_118;
        do {
          pfVar26 = pfStack_c0;
          puVar27 = puStack_b8;
          puVar21 = puStack_b0;
          if (0 < (int)uVar3) {
            uVar29 = 0;
            pfVar25 = pfStack_c0;
            do {
              fVar31 = (float)_expf();
              fVar32 = (float)_expf();
              uVar41 = *puVar16;
              uVar40 = *(undefined8 *)(pcVar15 + 0x40);
              if (5 < (int)uVar4) {
                fVar42 = *(float *)(puVar16 + 2);
                lVar28 = 0x14;
                do {
                  fStack_11c = fVar42 * *(float *)((long)puVar16 + lVar28);
                  pfVar18 = &fStack_11c;
                  FUN_10939f5b4(&uStack_e0);
                  lVar28 = lVar28 + 4;
                } while ((ulong)uVar4 * 4 - lVar28 != 0);
              }
              uVar40 = NEON_scvtf(uVar40,4);
              uVar40 = NEON_rev64(uVar40,4);
              fVar42 = (float)((ulong)uVar40 >> 0x20);
              fVar37 = (((float)uVar41 + (float)uVar29) * fVar30) / (float)uVar40;
              fVar38 = (((float)((ulong)uVar41 >> 0x20) + (float)uVar19) * fVar30) / fVar42;
              fVar31 = (fVar31 * fVar30) / (float)uVar40;
              fVar42 = (fVar32 * fVar30) / fVar42;
              fVar32 = fVar37 + -fVar31 * 0.5;
              fVar39 = fVar38 + -fVar42 * 0.5;
              fVar37 = fVar37 + fVar31 * 0.5;
              fVar38 = fVar38 + fVar42 * 0.5;
              if (puVar27 < puVar21) {
                uVar12 = CONCAT24(-(ushort)(0.0 < fVar39),-(uint)(0.0 < fVar32)) & 0xffff0000ffff;
                auVar33._0_4_ = -(uint)((int)uVar12 << 0x1f < 0);
                auVar33._4_4_ = -(uint)((int)((uint)(ushort)(uVar12 >> 0x20) << 0x1f) < 0);
                auVar33._8_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar37 < 1.0) << 0x1f) < 0);
                auVar33._12_4_ = -(uint)((int)((uint)(fVar38 < 1.0) * -0x80000000) < 0);
                auVar9._12_4_ = 0x3f800000;
                auVar9._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar11._4_4_ = fVar39;
                auVar11._0_4_ = fVar32;
                auVar11._8_4_ = fVar37;
                auVar11._12_4_ = fVar38;
                auVar34._12_4_ = 0x3f800000;
                auVar34._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar34 = auVar34 ^ (auVar9 ^ auVar11) & auVar33;
                puVar27[1] = auVar34._8_8_;
                *puVar27 = auVar34._0_8_;
                pfVar26 = pfVar25;
              }
              else {
                lVar28 = (long)puVar27 - (long)pfVar25;
                uVar1 = (lVar28 >> 4) + 1;
                if (uVar1 >> 0x3c != 0) {
                  pfStack_c0 = pfVar25;
                  puStack_b8 = puVar27;
                  puStack_b0 = puVar21;
                  FUN_10955a930();
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x109559ae0);
                  (*pcVar14)();
                }
                auVar13._12_4_ = fVar38;
                auVar13._8_4_ = fVar37;
                uVar20 = (long)puVar21 - (long)pfVar25 >> 3;
                if (uVar20 <= uVar1) {
                  uVar20 = uVar1;
                }
                if (0x7fffffffffffffef < (ulong)((long)puVar21 - (long)pfVar25)) {
                  uVar20 = 0xfffffffffffffff;
                }
                FUN_10955a944();
                puVar27 = (undefined8 *)(uVar20 + lVar28);
                puVar21 = (undefined8 *)(uVar20 + (long)pfVar18 * 0x10);
                auVar35._0_4_ = -(uint)((int)((uint)(0.0 < fVar32) * -0x80000000) < 0);
                auVar35._4_4_ = -(uint)((int)((uint)(ushort)-(ushort)(0.0 < fVar39) << 0x1f) < 0);
                auVar35._8_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar37 < 1.0) << 0x1f) < 0);
                auVar35._12_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar38 < 1.0) << 0x1f) < 0);
                auVar13._4_4_ = fVar39;
                auVar13._0_4_ = fVar32;
                auVar10._12_4_ = 0x3f800000;
                auVar10._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar36._12_4_ = 0x3f800000;
                auVar36._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar36 = auVar36 ^ (auVar10 ^ auVar13) & auVar35;
                pfVar26 = (float *)(puVar27 + (lVar28 >> 4) * -2);
                puVar27[1] = auVar36._8_8_;
                *puVar27 = auVar36._0_8_;
                pfVar18 = pfVar25;
                _memcpy(pfVar26,pfVar25,lVar28);
                if (pfVar25 != (float *)0x0) {
                  __ZdlPv(pfVar25);
                }
              }
              puVar27 = puVar27 + 2;
              uVar29 = uVar29 + 1;
              puVar16 = (undefined8 *)((long)puVar16 + (long)(int)uVar4 * 4);
              pfVar25 = pfVar26;
            } while (uVar29 != uVar3);
          }
          puStack_b0 = puVar21;
          puStack_b8 = puVar27;
          pfStack_c0 = pfVar26;
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar5);
      }
      plVar23 = plStack_e8;
      if (plStack_e8 != (long *)0x0) {
        plVar2 = plStack_e8 + 1;
        do {
          lVar28 = *plVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar28 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar28 == 0) {
          (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar23);
        }
      }
      if (puStack_110 != (undefined8 *)0x0) {
        puStack_108 = puStack_110;
        __ZdlPv();
      }
      uVar24 = uVar24 + 1;
      lVar28 = *plVar17;
    } while (uVar24 < (ulong)((plVar17[1] - lVar28 >> 3) * 0x6db6db6db6db6db7));
  }
  extraout_x8[1] = puStack_b8;
  *extraout_x8 = pfStack_c0;
  extraout_x8[2] = puStack_b0;
  extraout_x8[4] = uStack_d8;
  extraout_x8[3] = uStack_e0;
  extraout_x8[5] = uStack_d0;
  *(undefined1 *)(extraout_x8 + 6) = 0;
  *(undefined1 *)(extraout_x8 + 9) = 0;
  return puStack_110;
}



/* Entry: 1095596e0; end: 109559b77;  */

void FUN_1095596e0(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint6 uVar12;
  undefined1 auVar13 [16];
  code *pcVar14;
  float *pfVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  float *pfVar22;
  float *pfVar23;
  undefined8 *puVar24;
  long lVar25;
  uint uVar26;
  undefined8 *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar40;
  float fStack_fc;
  undefined8 *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  float *pfStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  
  lVar25 = *param_3;
  plVar20 = (long *)(lVar25 + 8);
  iVar19 = 0;
  for (; lVar25 != param_3[1]; lVar25 = lVar25 + 0x38) {
    iVar19 = iVar19 + *(int *)(*(long *)(lVar25 + 8) + 8) * *(int *)(*(long *)(lVar25 + 8) + 4);
  }
  iVar6 = *(int *)(*plVar20 + 0xc);
  pfStack_a0 = (float *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  FUN_109557da4(&pfStack_a0,(long)iVar19);
  func_0x0001073b504c(&uStack_c0,(long)iVar19 * ((long)iVar6 + -5));
  lVar25 = *param_3;
  if (param_3[1] != lVar25) {
    uVar21 = 0;
    do {
      plVar20 = (long *)(lVar25 + uVar21 * 0x38);
      puStack_f8 = (undefined8 *)*plVar20;
      lStack_e8 = 0;
      uStack_e0 = 0;
      lStack_f0 = 0;
      pfVar15 = (float *)plVar20[1];
      FUN_109285684(&lStack_f0,pfVar15,plVar20[2],plVar20[2] - (long)pfVar15 >> 2);
      uStack_d8 = (undefined4)plVar20[4];
      plStack_c8 = SUB168(*(undefined1 (*) [16])(plVar20 + 5),8);
      uStack_d0 = SUB168(*(undefined1 (*) [16])(plVar20 + 5),0);
      if (plVar20[6] != 0) {
        plVar20 = (long *)(plVar20[6] + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar8) {
            *plVar20 = *plVar20 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uVar5 = *(uint *)(lStack_f0 + 4);
      if (0 < (int)uVar5) {
        uVar16 = 0;
        uVar3 = *(uint *)(lStack_f0 + 8);
        uVar4 = *(uint *)(lStack_f0 + 0xc);
        fVar28 = (float)*(int *)(*(long *)(param_2 + 0x48) + uVar21 * 4);
        puVar27 = puStack_f8;
        do {
          pfVar23 = pfStack_a0;
          puVar24 = puStack_98;
          puVar18 = puStack_90;
          if (0 < (int)uVar3) {
            uVar26 = 0;
            pfVar22 = pfStack_a0;
            do {
              fVar29 = (float)_expf();
              fVar30 = (float)_expf();
              uVar39 = *puVar27;
              uVar38 = *(undefined8 *)(param_2 + 0x40);
              if (5 < (int)uVar4) {
                fVar40 = *(float *)(puVar27 + 2);
                lVar25 = 0x14;
                do {
                  fStack_fc = fVar40 * *(float *)((long)puVar27 + lVar25);
                  pfVar15 = &fStack_fc;
                  FUN_10939f5b4(&uStack_c0);
                  lVar25 = lVar25 + 4;
                } while ((ulong)uVar4 * 4 - lVar25 != 0);
              }
              uVar38 = NEON_scvtf(uVar38,4);
              uVar38 = NEON_rev64(uVar38,4);
              fVar40 = (float)((ulong)uVar38 >> 0x20);
              fVar35 = (((float)uVar39 + (float)uVar26) * fVar28) / (float)uVar38;
              fVar36 = (((float)((ulong)uVar39 >> 0x20) + (float)uVar16) * fVar28) / fVar40;
              fVar29 = (fVar29 * fVar28) / (float)uVar38;
              fVar40 = (fVar30 * fVar28) / fVar40;
              fVar30 = fVar35 + -fVar29 * 0.5;
              fVar37 = fVar36 + -fVar40 * 0.5;
              fVar35 = fVar35 + fVar29 * 0.5;
              fVar36 = fVar36 + fVar40 * 0.5;
              if (puVar24 < puVar18) {
                uVar12 = CONCAT24(-(ushort)(0.0 < fVar37),-(uint)(0.0 < fVar30)) & 0xffff0000ffff;
                auVar31._0_4_ = -(uint)((int)uVar12 << 0x1f < 0);
                auVar31._4_4_ = -(uint)((int)((uint)(ushort)(uVar12 >> 0x20) << 0x1f) < 0);
                auVar31._8_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar35 < 1.0) << 0x1f) < 0);
                auVar31._12_4_ = -(uint)((int)((uint)(fVar36 < 1.0) * -0x80000000) < 0);
                auVar9._12_4_ = 0x3f800000;
                auVar9._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar11._4_4_ = fVar37;
                auVar11._0_4_ = fVar30;
                auVar11._8_4_ = fVar35;
                auVar11._12_4_ = fVar36;
                auVar32._12_4_ = 0x3f800000;
                auVar32._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar32 = auVar32 ^ (auVar9 ^ auVar11) & auVar31;
                puVar24[1] = auVar32._8_8_;
                *puVar24 = auVar32._0_8_;
                pfVar23 = pfVar22;
              }
              else {
                lVar25 = (long)puVar24 - (long)pfVar22;
                uVar1 = (lVar25 >> 4) + 1;
                if (uVar1 >> 0x3c != 0) {
                  pfStack_a0 = pfVar22;
                  puStack_98 = puVar24;
                  puStack_90 = puVar18;
                  FUN_10955a930();
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x109559ae0);
                  (*pcVar14)();
                }
                auVar13._12_4_ = fVar36;
                auVar13._8_4_ = fVar35;
                uVar17 = (long)puVar18 - (long)pfVar22 >> 3;
                if (uVar17 <= uVar1) {
                  uVar17 = uVar1;
                }
                if (0x7fffffffffffffef < (ulong)((long)puVar18 - (long)pfVar22)) {
                  uVar17 = 0xfffffffffffffff;
                }
                FUN_10955a944();
                puVar24 = (undefined8 *)(uVar17 + lVar25);
                puVar18 = (undefined8 *)(uVar17 + (long)pfVar15 * 0x10);
                auVar33._0_4_ = -(uint)((int)((uint)(0.0 < fVar30) * -0x80000000) < 0);
                auVar33._4_4_ = -(uint)((int)((uint)(ushort)-(ushort)(0.0 < fVar37) << 0x1f) < 0);
                auVar33._8_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar35 < 1.0) << 0x1f) < 0);
                auVar33._12_4_ = -(uint)((int)((uint)(ushort)-(ushort)(fVar36 < 1.0) << 0x1f) < 0);
                auVar13._4_4_ = fVar37;
                auVar13._0_4_ = fVar30;
                auVar10._12_4_ = 0x3f800000;
                auVar10._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar34._12_4_ = 0x3f800000;
                auVar34._0_12_ = ZEXT412(0x3f800000) << 0x40;
                auVar34 = auVar34 ^ (auVar10 ^ auVar13) & auVar33;
                pfVar23 = (float *)(puVar24 + (lVar25 >> 4) * -2);
                puVar24[1] = auVar34._8_8_;
                *puVar24 = auVar34._0_8_;
                pfVar15 = pfVar22;
                _memcpy(pfVar23,pfVar22,lVar25);
                if (pfVar22 != (float *)0x0) {
                  __ZdlPv(pfVar22);
                }
              }
              puVar24 = puVar24 + 2;
              uVar26 = uVar26 + 1;
              puVar27 = (undefined8 *)((long)puVar27 + (long)(int)uVar4 * 4);
              pfVar22 = pfVar23;
            } while (uVar26 != uVar3);
          }
          puStack_90 = puVar18;
          puStack_98 = puVar24;
          pfStack_a0 = pfVar23;
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar5);
      }
      plVar20 = plStack_c8;
      if (plStack_c8 != (long *)0x0) {
        plVar2 = plStack_c8 + 1;
        do {
          lVar25 = *plVar2;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar25 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar25 == 0) {
          (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar20);
        }
      }
      if (lStack_f0 != 0) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
      uVar21 = uVar21 + 1;
      lVar25 = *param_3;
    } while (uVar21 < (ulong)((param_3[1] - lVar25 >> 3) * 0x6db6db6db6db6db7));
  }
  param_1[1] = puStack_98;
  *param_1 = pfStack_a0;
  param_1[2] = puStack_90;
  param_1[4] = uStack_b8;
  param_1[3] = uStack_c0;
  param_1[5] = uStack_b0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}



/* Entry: 109559b78; end: 10955a633;  */

void FUN_109559b78(undefined8 *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  undefined8 uVar11;
  long **pplVar12;
  code *pcVar13;
  undefined4 *puVar14;
  long **pplVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  float *pfVar25;
  bool bVar26;
  long lVar27;
  long **pplVar28;
  ulong uVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  float fVar35;
  float *pfStack_708;
  undefined4 uStack_700;
  undefined4 uStack_6fc;
  long **pplStack_6f8;
  undefined8 uStack_6f0;
  undefined4 uStack_5a0;
  int iStack_59c;
  undefined1 auStack_598 [8];
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  long lStack_568;
  undefined1 *puStack_560;
  undefined8 *puStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  long *aplStack_540 [44];
  undefined4 uStack_3e0;
  int iStack_3dc;
  undefined1 auStack_3d8 [8];
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long lStack_3a8;
  undefined1 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined4 uStack_380;
  int iStack_37c;
  undefined1 auStack_378 [8];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_348;
  undefined1 *puStack_340;
  undefined8 *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  int iStack_318;
  int iStack_314;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  int *piStack_2e0;
  long *plStack_2d8;
  long alStack_2d0 [2];
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_160;
  undefined8 uStack_15c;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long lStack_128;
  int *piStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long **pplStack_c0;
  float *pfStack_b8;
  float *pfStack_b0;
  
  plVar7 = (long *)*param_3;
  lVar27 = param_3[1];
  uVar3 = *(uint *)(plVar7[1] + 4);
  iVar5 = *(int *)(plVar7[1] + 8);
  pplStack_c0 = (long **)0x0;
  pfStack_b8 = (float *)0x0;
  pfStack_b0 = (float *)0x0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  lStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_160 = 0x42ff0000;
  piStack_120 = (int *)((long)&uStack_15c + 4);
  iStack_154 = 0;
  uStack_150 = 0;
  uStack_15c = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_134 = 0;
  uStack_13c = 0;
  uStack_138 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  puStack_118 = &uStack_110;
  FUN_10955a634(&pplStack_c0,0xa2);
  pplVar15 = (long **)(long)(int)((iVar5 - 5U) * 0xa2);
  func_0x0001073b504c(&lStack_e0);
  uVar29 = (lVar27 - (long)plVar7 >> 3) * 0x6db6db6db6db6db7;
  if (1 < uVar29) {
    pplVar15 = (long **)0xa2;
    FUN_10955a6c4(&lStack_100);
  }
  if (0 < (int)uVar3) {
    uVar23 = 0;
    lVar27 = *plVar7;
    puVar18 = (undefined8 *)((ulong)&uStack_380 | 4);
    puVar19 = (undefined8 *)((ulong)&uStack_3e0 | 4);
    puVar20 = (undefined8 *)((ulong)&uStack_5a0 | 4);
    pfStack_708 = (float *)(lVar27 + 0x14);
    do {
      puVar1 = (undefined8 *)(lVar27 + uVar23 * (long)iVar5 * 4);
      fVar35 = *(float *)(puVar1 + 2);
      if (*(float *)(param_2 + 0x48) < fVar35) {
        if (1 < uVar29) {
          lVar24 = *param_3;
          lVar16 = *(long *)(lVar24 + 0x40);
          iVar4 = *(int *)(lVar16 + 8);
          iVar6 = *(int *)(lVar16 + 0xc);
          if (CONCAT44(uStack_14c,uStack_150) == 0) {
LAB_109559d5c:
            FUN_109a8261c(&plStack_2c0,iVar4,iVar6,0);
            (**(code **)(*plStack_2c0 + 0x18))(plStack_2c0,&plStack_2c0,&uStack_160,0xffffffff);
            FUN_10918eb6c(&plStack_2c0);
          }
          else {
            uVar17 = uStack_15c & 0xffffffff;
            if ((int)uStack_15c < 3) {
              lVar16 = (long)iStack_154 * (long)uStack_15c._4_4_;
            }
            else {
              lVar16 = 1;
              piVar21 = piStack_120;
              do {
                lVar16 = lVar16 * *piVar21;
                uVar17 = uVar17 - 1;
                piVar21 = piVar21 + 1;
              } while (uVar17 != 0);
            }
            if (lVar16 == 0) goto LAB_109559d5c;
          }
          lVar16 = *(long *)(lVar24 + 0x38);
          uStack_320 = 0x242ff0005;
          lStack_310 = lVar16 + (long)(iVar4 * (int)uVar23 * iVar6) * 4;
          lStack_2f8 = 0;
          lStack_300 = 0;
          lStack_2e8 = 0;
          uStack_2f0 = 0;
          alStack_2d0[0] = 0;
          alStack_2d0[1] = 0;
          iStack_318 = iVar4;
          iStack_314 = iVar6;
          lStack_308 = lStack_310;
          piStack_2e0 = &iStack_318;
          plStack_2d8 = alStack_2d0;
          if (((long)iVar6 * (long)iVar4 != 0) && (lVar16 == 0)) {
            puVar14 = (undefined4 *)0x24;
            func_0x000107c2ae8c();
            *puVar14 = 1;
            plStack_2c0 = (long *)(puVar14 + 1);
            uStack_2b8 = 0x1c;
            *(undefined1 *)(puVar14 + 8) = 0;
            *(undefined8 *)(puVar14 + 3) = 0x207c7c2030203d3d;
            *(undefined8 *)(puVar14 + 1) = 0x2029286c61746f74;
            *(undefined8 *)(puVar14 + 6) = 0x4c4c554e203d2120;
            *(undefined8 *)(puVar14 + 4) = 0x61746164207c7c20;
            FUN_109ac3188(0xffffff29,&plStack_2c0,&UNK_10f2e8162,&UNK_10f566d1b,0x19a);
            goto LAB_10955a4e8;
          }
          alStack_2d0[0] = (long)iVar6 * 4;
          uStack_320 = 0x242ff4005;
          alStack_2d0[1] = 4;
          lStack_300 = lStack_310 + alStack_2d0[0] * iVar4;
          lStack_2f8 = lStack_300;
          FUN_109a7ead4(&plStack_2c0,(double)*(float *)(param_2 + 0x4c),&uStack_320);
          uStack_380 = 0x42ff0000;
          *(undefined8 *)((long)puVar18 + 0x34) = 0;
          *(undefined8 *)((long)puVar18 + 0x2c) = 0;
          puVar18[3] = 0;
          puVar18[2] = 0;
          puVar18[5] = 0;
          puVar18[4] = 0;
          puVar18[1] = 0;
          *puVar18 = 0;
          uStack_330 = 0;
          uStack_328 = 0;
          puStack_340 = auStack_378;
          puStack_338 = &uStack_330;
          (**(code **)(*plStack_2c0 + 0x18))(plStack_2c0,&plStack_2c0,&uStack_380,0xffffffff);
          FUN_10918eb6c(&plStack_2c0);
          FUN_109a7e098(&plStack_2c0,0x406fe00000000000,&uStack_380);
          uStack_700 = 0xc1060000;
          pplStack_6f8 = &plStack_2c0;
          uStack_6f0 = 0;
          FUN_109ab74d4(aplStack_540,&uStack_700);
          plVar7 = aplStack_540[0];
          FUN_10918eb6c(&plStack_2c0);
          FUN_109a7e87c(aplStack_540,0x406fe00000000000,&uStack_380);
          uStack_3e0 = 0x42ff0000;
          *(undefined8 *)((long)puVar19 + 0x34) = 0;
          *(undefined8 *)((long)puVar19 + 0x2c) = 0;
          puVar19[3] = 0;
          puVar19[2] = 0;
          puVar19[5] = 0;
          puVar19[4] = 0;
          puVar19[1] = 0;
          *puVar19 = 0;
          uStack_390 = 0;
          uStack_388 = 0;
          puStack_3a0 = auStack_3d8;
          puStack_398 = &uStack_390;
          (**(code **)(*aplStack_540[0] + 0x18))
                    (aplStack_540[0],aplStack_540,&uStack_3e0,0xffffffff);
          FUN_109a7e87c(&uStack_700,0,&uStack_160);
          uStack_5a0 = 0x42ff0000;
          *(undefined8 *)((long)puVar20 + 0x34) = 0;
          *(undefined8 *)((long)puVar20 + 0x2c) = 0;
          puVar20[3] = 0;
          puVar20[2] = 0;
          puVar20[5] = 0;
          puVar20[4] = 0;
          puVar20[1] = 0;
          *puVar20 = 0;
          uStack_550 = 0;
          uStack_548 = 0;
          puStack_560 = auStack_598;
          puStack_558 = &uStack_550;
          (**(code **)(*(long *)CONCAT44(uStack_6fc,uStack_700) + 0x18))
                    ((long *)CONCAT44(uStack_6fc,uStack_700),&uStack_700,&uStack_5a0,0xffffffff);
          FUN_109a7ef1c(&plStack_2c0,&uStack_3e0,&uStack_5a0);
          pplVar15 = &plStack_2c0;
          (**(code **)(*plStack_2c0 + 0x18))(plStack_2c0,pplVar15,&uStack_380,0xffffffff);
          FUN_10918eb6c(&plStack_2c0);
          if (lStack_568 != 0) {
            piVar21 = (int *)(lStack_568 + 0x14);
            do {
              iVar4 = *piVar21;
              cVar8 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar26) {
                *piVar21 = iVar4 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(&uStack_5a0);
            }
          }
          lStack_568 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          uStack_578 = 0;
          uStack_580 = 0;
          if (0 < iStack_59c) {
            lVar16 = 0;
            do {
              *(undefined4 *)(puStack_560 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_59c);
          }
          if (puStack_558 != &uStack_550 && puStack_558 != (undefined8 *)0x0) {
            _free(puStack_558[-1]);
          }
          FUN_10918eb6c(&uStack_700);
          if (lStack_3a8 != 0) {
            piVar21 = (int *)(lStack_3a8 + 0x14);
            do {
              iVar4 = *piVar21;
              cVar8 = '\x01';
              bVar26 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar26) {
                *piVar21 = iVar4 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(&uStack_3e0);
            }
          }
          lStack_3a8 = 0;
          uStack_3c8 = 0;
          uStack_3d0 = 0;
          uStack_3b8 = 0;
          uStack_3c0 = 0;
          if (0 < iStack_3dc) {
            lVar16 = 0;
            do {
              *(undefined4 *)(puStack_3a0 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_3dc);
          }
          if (puStack_398 != &uStack_390 && puStack_398 != (undefined8 *)0x0) {
            _free(puStack_398[-1]);
          }
          FUN_10918eb6c(aplStack_540);
          FUN_109a7e098(&plStack_2c0,0x406fe00000000000,&uStack_380);
          uStack_700 = 0xc1060000;
          pplStack_6f8 = &plStack_2c0;
          uStack_6f0 = 0;
          FUN_109ab74d4(aplStack_540,&uStack_700);
          plVar10 = aplStack_540[0];
          FUN_10918eb6c(&plStack_2c0);
          if (((double)*(float *)(param_2 + 0x50) <
               ((double)plVar7 - (double)plVar10) / ((double)plVar7 + 1.1920928955078125e-07)) ||
             ((double)plVar10 < (double)*(float *)(param_2 + 0x54))) {
            bVar26 = false;
          }
          else {
            FUN_109a7f0b8(&plStack_2c0,&uStack_160,&uStack_380);
            (**(code **)(*plStack_2c0 + 0x18))(plStack_2c0,&plStack_2c0,&uStack_160,0xffffffff);
            FUN_10918eb6c(&plStack_2c0);
            pplVar15 = (long **)&uStack_380;
            FUN_1094c5270(&lStack_100);
            bVar26 = true;
          }
          if (lStack_348 != 0) {
            piVar21 = (int *)(lStack_348 + 0x14);
            do {
              iVar4 = *piVar21;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar9) {
                *piVar21 = iVar4 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(&uStack_380);
            }
          }
          lStack_348 = 0;
          uStack_368 = 0;
          uStack_370 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          if (0 < iStack_37c) {
            lVar16 = 0;
            do {
              *(undefined4 *)(puStack_340 + lVar16 * 4) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < iStack_37c);
          }
          if (puStack_338 != &uStack_330 && puStack_338 != (undefined8 *)0x0) {
            _free(puStack_338[-1]);
          }
          if (lStack_2e8 != 0) {
            piVar21 = (int *)(lStack_2e8 + 0x14);
            do {
              iVar4 = *piVar21;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar21,0x10);
              if (bVar9) {
                *piVar21 = iVar4 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar4 + -1 == 0) {
              func_0x000109a848d4(&uStack_320);
            }
          }
          lStack_2e8 = 0;
          lStack_308 = 0;
          lStack_310 = 0;
          lStack_2f8 = 0;
          lStack_300 = 0;
          if (0 < uStack_320._4_4_) {
            lVar16 = 0;
            do {
              piStack_2e0[lVar16] = 0;
              lVar16 = lVar16 + 1;
            } while (lVar16 < uStack_320._4_4_);
          }
          if (plStack_2d8 != alStack_2d0 && plStack_2d8 != (long *)0x0) {
            _free(plStack_2d8[-1]);
          }
          if (!bVar26) goto LAB_10955a32c;
        }
        pplVar12 = pplStack_c0;
        auVar31._0_8_ = *(undefined8 *)(param_2 + 0x40);
        auVar31._8_8_ = auVar31._0_8_;
        auVar31 = NEON_rev64(auVar31,4);
        fVar30 = (float)*puVar1 / auVar31._0_4_;
        fVar32 = (float)((ulong)*puVar1 >> 0x20) / auVar31._4_4_;
        fVar33 = (float)puVar1[1] / auVar31._8_4_;
        fVar34 = (float)((ulong)puVar1[1] >> 0x20) / auVar31._12_4_;
        if (pfStack_b8 < pfStack_b0) {
          pfStack_b8[2] = fVar33;
          pfStack_b8[3] = fVar34;
          *pfStack_b8 = fVar30;
          pfStack_b8[1] = fVar32;
          pfVar25 = pfStack_b8;
        }
        else {
          lVar16 = (long)pfStack_b8 - (long)pplStack_c0;
          uVar17 = (lVar16 >> 4) + 1;
          if (uVar17 >> 0x3c != 0) {
            FUN_10955a978();
LAB_10955a4e8:
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x10955a4ec);
            (*pcVar13)();
          }
          uVar22 = (long)pfStack_b0 - (long)pplStack_c0 >> 3;
          if (uVar22 <= uVar17) {
            uVar22 = uVar17;
          }
          if (0x7fffffffffffffef < (ulong)((long)pfStack_b0 - (long)pplStack_c0)) {
            uVar22 = 0xfffffffffffffff;
          }
          FUN_10955a98c();
          pfVar25 = (float *)(uVar22 + lVar16);
          pfVar2 = (float *)(uVar22 + (long)pplVar15 * 0x10);
          pplVar28 = (long **)(pfVar25 + (lVar16 >> 4) * -4);
          *(ulong *)(pfVar25 + 2) = CONCAT44(fVar34,fVar33);
          *(ulong *)pfVar25 = CONCAT44(fVar32,fVar30);
          pplVar15 = pplVar12;
          _memcpy(pplVar28,pplVar12,lVar16);
          pplStack_c0 = pplVar28;
          pfStack_b0 = pfVar2;
          if (pplVar12 != (long **)0x0) {
            __ZdlPv(pplVar12);
          }
        }
        pfStack_b8 = pfVar25 + 4;
        pfVar25 = pfStack_708;
        uVar17 = (ulong)(iVar5 - 5U);
        if (5 < iVar5) {
          do {
            plStack_2c0 = (long *)CONCAT44(plStack_2c0._4_4_,fVar35 * *pfVar25);
            pplVar15 = &plStack_2c0;
            FUN_10939f5b4(&lStack_e0);
            uVar17 = uVar17 - 1;
            pfVar25 = pfVar25 + 1;
          } while (uVar17 != 0);
        }
      }
LAB_10955a32c:
      uVar23 = uVar23 + 1;
      pfStack_708 = pfStack_708 + iVar5;
    } while (uVar23 != uVar3);
  }
  uVar11 = uStack_d0;
  param_1[1] = pfStack_b8;
  *param_1 = pplStack_c0;
  param_1[2] = pfStack_b0;
  pfStack_b8 = (float *)0x0;
  pfStack_b0 = (float *)0x0;
  pplStack_c0 = (long **)0x0;
  param_1[4] = lStack_d8;
  param_1[3] = lStack_e0;
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  if (uVar29 < 2) {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else {
    param_1[7] = uStack_f8;
    param_1[6] = lStack_100;
    param_1[8] = uStack_f0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    lStack_100 = 0;
  }
  param_1[5] = uVar11;
  *(bool *)(param_1 + 9) = 1 < uVar29;
  if (lStack_128 != 0) {
    piVar21 = (int *)(lStack_128 + 0x14);
    do {
      iVar5 = *piVar21;
      cVar8 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(piVar21,0x10);
      if (bVar26) {
        *piVar21 = iVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar5 + -1 == 0) {
      func_0x000109a848d4(&uStack_160);
    }
  }
  lStack_128 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  if (0 < (int)uStack_15c) {
    lVar27 = 0;
    do {
      piStack_120[lVar27] = 0;
      lVar27 = lVar27 + 1;
    } while (lVar27 < (int)uStack_15c);
  }
  if (puStack_118 != &uStack_110 && puStack_118 != (undefined8 *)0x0) {
    _free(puStack_118[-1]);
  }
  plStack_2c0 = &lStack_100;
  FUN_1093702c4(&plStack_2c0);
  if (lStack_e0 != 0) {
    lStack_d8 = lStack_e0;
    __ZdlPv();
  }
  if (pplStack_c0 != (long **)0x0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10955a634; end: 10955a6c3;  */

void FUN_10955a634(long *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  lVar3 = *param_1;
  if ((undefined4 *)(param_1[2] - lVar3 >> 4) < param_2) {
    if ((ulong)param_2 >> 0x3c != 0) {
      FUN_10955a978();
      lVar3 = *param_1;
      if ((undefined4 *)((param_1[2] - lVar3 >> 5) * -0x5555555555555555) < param_2) {
        if ((undefined4 *)0x2aaaaaaaaaaaaaa < param_2) {
          FUN_10937026c();
          FUN_10919d9fc(&plStack_88);
          __Unwind_Resume();
          if (param_4 != 0) {
            FUN_10925b938();
            puVar2 = (undefined4 *)param_1[1];
            for (; param_2 != param_3; param_2 = param_2 + 1) {
              *puVar2 = *param_2;
              puVar2 = puVar2 + 1;
            }
            param_1[1] = (long)puVar2;
          }
          return;
        }
        lVar4 = param_1[1];
        plVar1 = param_1;
        plStack_68 = param_1;
        FUN_109370280();
        lVar3 = (long)plVar1 + (lVar4 - lVar3);
        lVar4 = lVar3 + (*param_1 - param_1[1]);
        plStack_88 = plVar1;
        plStack_80 = (long *)lVar3;
        plStack_78 = (long *)lVar3;
        plStack_70 = plVar1 + (long)param_2 * 0xc;
        FUN_10938f158(param_1,*param_1,param_1[1],lVar4);
        plStack_88 = (long *)*param_1;
        *param_1 = lVar4;
        param_1[1] = lVar3;
        plStack_70 = (long *)param_1[2];
        param_1[2] = (long)(plVar1 + (long)param_2 * 0xc);
        plStack_80 = plStack_88;
        plStack_78 = plStack_88;
        FUN_10919d9fc(&plStack_88);
      }
      return;
    }
    lVar4 = param_1[1];
    puVar2 = param_2;
    FUN_10955a98c();
    lVar3 = (long)param_2 + (lVar4 - lVar3);
    lVar5 = lVar3 - (param_1[1] - *param_1);
    _memcpy(lVar5);
    lVar4 = *param_1;
    *param_1 = lVar5;
    param_1[1] = lVar3;
    param_1[2] = (long)(param_2 + (long)puVar2 * 4);
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10955a6c4; end: 10955a79b;  */

void FUN_10955a6c4(long *param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar2 = *param_1;
  if ((undefined4 *)((param_1[2] - lVar2 >> 5) * -0x5555555555555555) < param_2) {
    if ((undefined4 *)0x2aaaaaaaaaaaaaa < param_2) {
      FUN_10937026c();
      FUN_10919d9fc(&plStack_58);
      __Unwind_Resume();
      if (param_4 != 0) {
        FUN_10925b938();
        puVar3 = (undefined4 *)param_1[1];
        for (; param_2 != param_3; param_2 = param_2 + 1) {
          *puVar3 = *param_2;
          puVar3 = puVar3 + 1;
        }
        param_1[1] = (long)puVar3;
      }
      return;
    }
    lVar4 = param_1[1];
    plVar1 = param_1;
    plStack_38 = param_1;
    FUN_109370280();
    lVar2 = (long)plVar1 + (lVar4 - lVar2);
    lVar4 = lVar2 + (*param_1 - param_1[1]);
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar2;
    plStack_48 = (long *)lVar2;
    plStack_40 = plVar1 + (long)param_2 * 0xc;
    FUN_10938f158(param_1,*param_1,param_1[1],lVar4);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar4;
    param_1[1] = lVar2;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + (long)param_2 * 0xc);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_10919d9fc(&plStack_58);
  }
  return;
}



/* Entry: 10955a79c; end: 10955a80b;  */

void FUN_10955a79c(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_10925b938(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10955a80c; end: 10955a87b;  */

void FUN_10955a80c(long param_1,undefined4 *param_2,undefined4 *param_3,long param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    FUN_1092cc154(param_1,param_4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined4 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10955a87c; end: 10955a8eb;  */

void FUN_10955a87c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10955a8ec(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10955a8ec; end: 10955a92f;  */

void FUN_10955a8ec(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10955a930; end: 10955a943;  */

void FUN_10955a930(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3c == 0) {
    __Znwm((long)puVar2 << 4);
    return;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3c == 0) {
    __Znwm((long)puVar2 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = *plVar3;
  for (lVar4 = plVar3[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x20) {
    if (*(long *)(lVar4 + -0x18) != 0) {
      *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
      __ZdlPv();
    }
  }
  plVar3[1] = lVar1;
  return;
}



/* Entry: 10955a944; end: 10955a977;  */

void FUN_10955a944(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3c == 0) {
    __Znwm((long)puVar2 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = *plVar3;
  for (lVar4 = plVar3[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x20) {
    if (*(long *)(lVar4 + -0x18) != 0) {
      *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
      __ZdlPv();
    }
  }
  plVar3[1] = lVar1;
  return;
}



/* Entry: 10955a978; end: 10955a98b;  */

void FUN_10955a978(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)puVar2 >> 0x3c == 0) {
    __Znwm((long)puVar2 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar3 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = *plVar3;
  for (lVar4 = plVar3[1]; lVar4 != lVar1; lVar4 = lVar4 + -0x20) {
    if (*(long *)(lVar4 + -0x18) != 0) {
      *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
      __ZdlPv();
    }
  }
  plVar3[1] = lVar1;
  return;
}



/* Entry: 10955a98c; end: 10955a9bf;  */

void FUN_10955a98c(ulong param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_1 >> 0x3c == 0) {
    __Znwm(param_1 << 4);
    return;
  }
  func_0x000104c4f740();
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = *plVar2;
  for (lVar3 = plVar2[1]; lVar3 != lVar1; lVar3 = lVar3 + -0x20) {
    if (*(long *)(lVar3 + -0x18) != 0) {
      *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
      __ZdlPv();
    }
  }
  plVar2[1] = lVar1;
  return;
}



/* Entry: 10955a9c0; end: 10955a9d3;  */

void FUN_10955a9c0(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = *plVar2;
  for (lVar3 = plVar2[1]; lVar3 != lVar1; lVar3 = lVar3 + -0x20) {
    if (*(long *)(lVar3 + -0x18) != 0) {
      *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
      __ZdlPv();
    }
  }
  plVar2[1] = lVar1;
  return;
}



/* Entry: 10955a9d4; end: 10955aa1f;  */

void FUN_10955a9d4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x20) {
    if (*(long *)(lVar2 + -0x18) != 0) {
      *(long *)(lVar2 + -0x10) = *(long *)(lVar2 + -0x18);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10955aa20; end: 10955aa5f;  */

void FUN_10955aa20(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10955a9d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10955aa60; end: 10955aacf;  */

void FUN_10955aa60(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10955aad0(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10955aad0; end: 10955ab13;  */

void FUN_10955aad0(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10955ab14; end: 10955ac27;  */

long * FUN_10955ab14(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * -0x5555555555555555 + 1;
  if (uVar3 < 0xaaaaaaaaaaaaaab) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5555555555555556;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x555555555555554 < (ulong)(lVar2 * -0x5555555555555555)) {
      uVar4 = 0xaaaaaaaaaaaaaaa;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      func_0x000104c60784();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    plStack_40 = plVar1 + uVar4 * 3;
    func_0x000107c31940(lVar5,param_2);
    lVar2 = lVar5 - (param_1[1] - *param_1);
    _memcpy(lVar2);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar2;
    param_1[1] = lVar5 + 0x18;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar1 + uVar4 * 3);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x000107c31938(&plStack_58);
    return (long *)(lVar5 + 0x18);
  }
  func_0x000104c60770();
  func_0x000107c31938(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_a0,*param_2,param_2[1]);
  }
  else {
    lStack_98 = param_2[1];
    lStack_a0 = *param_2;
    lStack_90 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&lStack_c0,*param_3,param_3[1]);
  }
  else {
    lStack_b8 = param_3[1];
    lStack_c0 = *param_3;
    lStack_b0 = param_3[2];
  }
  param_1[1] = lStack_98;
  *param_1 = lStack_a0;
  param_1[2] = lStack_90;
  param_1[4] = lStack_b8;
  param_1[3] = lStack_c0;
  param_1[5] = lStack_b0;
  return param_1;
}



/* Entry: 10955ac28; end: 10955ace3;  */

undefined8 * FUN_10955ac28(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  return param_1;
}



/* Entry: 10955ace4; end: 10955acf7;  */

long * FUN_10955ace4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x30;
    FUN_10955a8ec();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10955acf8; end: 10955ad43;  */

long * FUN_10955acf8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_10955a8ec();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10955ad44; end: 10955adff;  */

undefined8 * FUN_10955ad44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_40,*param_2,param_2[1]);
  }
  else {
    uStack_38 = param_2[1];
    uStack_40 = *param_2;
    uStack_30 = param_2[2];
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&uStack_60,*param_3,param_3[1]);
  }
  else {
    uStack_58 = param_3[1];
    uStack_60 = *param_3;
    uStack_50 = param_3[2];
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  return param_1;
}



/* Entry: 10955ae00; end: 10955ae13;  */

long * FUN_10955ae00(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    plVar2[2] = lVar3 + -0x30;
    FUN_10955aad0();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10955ae14; end: 10955ae5f;  */

long * FUN_10955ae14(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x30;
    FUN_10955aad0();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10955ae60; end: 10955aee3;  */

long * FUN_10955ae60(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10955aecc;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10955aecc:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 10955aee4; end: 10955bb57;  */

long * FUN_10955aee4(long *param_1,long param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined4 *puVar7;
  code *pcVar8;
  int iVar9;
  undefined4 **ppuVar10;
  undefined ***pppuVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  char cVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined4 *puVar19;
  ulong *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  undefined **ppuVar25;
  long lVar26;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  char cStack_281;
  long *plStack_278;
  long *plStack_270;
  long *plStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined4 *puStack_248;
  undefined4 *puStack_240;
  undefined4 *puStack_238;
  undefined **ppuStack_230;
  int iStack_228;
  undefined4 uStack_224;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined8 auStack_1e0 [3];
  byte bStack_1c8;
  undefined2 uStack_1c0;
  undefined1 uStack_1be;
  undefined ***pppuStack_190;
  long *plStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined2 uStack_158;
  undefined4 uStack_156;
  undefined1 uStack_152;
  undefined2 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined1 uStack_142;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined **appuStack_110 [20];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_1 + 3;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  if ((*(int *)(param_2 + 0x20) == 0) || (*(int *)(param_2 + 0x38) == 0)) {
LAB_10955b10c:
    uVar18 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
    lVar26 = (long)*(char *)(uVar18 + 0x17);
    if (lVar26 < 0) {
      lVar26 = *(long *)(uVar18 + 8);
    }
    if (lVar26 == 0) goto LAB_10955b9a4;
    func_0x000104c60808(param_1);
    func_0x0001093f2528(param_1 + 7);
    func_0x000104c60808(plVar12);
    FUN_10945ac64(&pppuStack_190,uVar18,0x18);
    iStack_228 = CONCAT31(iStack_228._1_3_,1);
    ppuStack_230 = &PTR_DAT_110b3e648;
    ppuVar17 = (undefined **)0x108;
    __Znwm();
    ppuVar17[1] = (undefined *)0x0;
    ppuVar17[2] = (undefined *)0x0;
    *ppuVar17 = (undefined *)&PTR_DAT_110b3e2d8;
    ppuStack_220 = ppuVar17 + 3;
    *ppuStack_220 = (undefined *)&PTR_FUN_110b2bad8;
    ppuVar17[4] = (undefined *)0x0;
    ppuVar17[6] = (undefined *)0x0;
    ppuVar17[5] = (undefined *)0x0;
    ppuVar17[8] = (undefined *)0x0;
    ppuVar17[7] = (undefined *)0x0;
    ppuVar17[10] = (undefined *)0x0;
    ppuVar17[9] = (undefined *)0x0;
    ppuVar17[0xc] = (undefined *)0x0;
    ppuVar17[0xb] = (undefined *)0x0;
    ppuVar17[0xe] = (undefined *)0x0;
    ppuVar17[0xd] = (undefined *)0x0;
    ppuVar17[0x10] = (undefined *)0x0;
    ppuVar17[0xf] = (undefined *)0x0;
    ppuVar17[0x12] = (undefined *)0x0;
    ppuVar17[0x11] = (undefined *)0x0;
    ppuVar17[0x14] = (undefined *)0x0;
    ppuVar17[0x13] = (undefined *)0x0;
    ppuVar17[0x16] = (undefined *)0x0;
    ppuVar17[0x15] = (undefined *)0x0;
    ppuVar17[0x18] = (undefined *)0x0;
    ppuVar17[0x17] = (undefined *)0x0;
    ppuVar17[0x1a] = (undefined *)0x0;
    ppuVar17[0x19] = (undefined *)0x0;
    ppuVar17[0x1b] = (undefined *)0x0;
    ppuVar17[0x1c] = &DAT_11383d918;
    *(undefined4 *)(ppuVar17 + 0x20) = 0;
    ppuVar17[0x1d] = &DAT_11383d918;
    ppuVar17[0x1e] = (undefined *)0x0;
    ppuVar17[0x1f] = (undefined *)0x0;
    lStack_208 = 0;
    lStack_210 = 0;
    lStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    lStack_1f0 = 0;
    ppuStack_218 = ppuVar17;
    func_0x000109d0b818(&ppuStack_230,&pppuStack_190);
    lVar26 = lStack_208;
    if (lStack_210 != lStack_208) {
      lVar14 = lStack_210 + 0x18;
      do {
        lVar21 = lVar14 + -0x18;
        uVar18 = param_1[1];
        if (uVar18 < (ulong)param_1[2]) {
          FUN_1092d3130(param_1,lVar21);
          plVar15 = (long *)(uVar18 + 0x18);
        }
        else {
          plVar15 = param_1;
          func_0x000107c281ec(param_1,lVar21);
        }
        param_1[1] = (long)plVar15;
        uStack_2a0 = CONCAT44(1,*(undefined4 *)(lVar14 + 0x10));
        func_0x000109d0eb9c(auStack_1e0,lVar14,&uStack_2a0);
        FUN_10955c3e0(param_1 + 7,lVar21,lVar21,auStack_1e0);
        func_0x000105675c90(auStack_1e0);
        lVar21 = lVar14 + 0x40;
        lVar14 = lVar14 + 0x58;
      } while (lVar21 != lVar26);
    }
    lVar26 = lStack_1f0;
    if (lStack_1f8 != lStack_1f0) {
      plVar15 = (long *)param_1[4];
      lVar14 = lStack_1f8;
      do {
        if (plVar15 < (long *)param_1[5]) {
          FUN_1092d3130(plVar12,lVar14);
          plVar15 = plVar15 + 3;
        }
        else {
          plVar15 = plVar12;
          func_0x000107c281ec(plVar12,lVar14);
        }
        param_1[4] = (long)plVar15;
        lVar14 = lVar14 + 0x58;
      } while (lVar14 != lVar26);
    }
    func_0x000109d0b7a0(&ppuStack_230);
    pppuStack_190 = (undefined ***)&PTR_SUB_1108a5a38;
    ppuStack_180 = &PTR_DAT_1108a5a60;
    appuStack_110[0] = &PTR_DAT_1108a5a88;
    ppuStack_178 = &PTR_DAT_11088d7b0;
    if (uStack_124._3_1_ < '\0') {
      __ZdlPv(CONCAT44(uStack_134,uStack_138));
    }
    ppuStack_178 = (undefined **)
                   (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    __ZNSt3__16localeD1Ev(&uStack_170);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&pppuStack_190,&PTR_PTR_1108a5aa0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
  }
  else {
    ppuVar17 = &PTR_PTR_1132db508;
    if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
      ppuVar17 = *(undefined ***)(param_2 + 0x60);
    }
    if (*(int *)((long)ppuVar17 + 0x1c) == 1) {
      ppuVar17 = (undefined **)ppuVar17[2];
    }
    else {
      ppuVar17 = &PTR_PTR_1132db4a8;
    }
    auStack_1e0[0] = 0x100000001;
    iStack_228 = 3;
    if (*(int *)(ppuVar17 + 6) != 0) {
      iStack_228 = *(int *)(ppuVar17 + 6);
    }
    ppuStack_230 = (undefined **)ppuVar17[5];
    uStack_224 = 1;
    uVar18 = *(ulong *)(param_2 + 0x18);
    puVar20 = (ulong *)(param_2 + 0x18);
    if ((uVar18 & 1) != 0) {
      puVar20 = (ulong *)(uVar18 + 7);
    }
    lVar26 = (long)*(int *)(param_2 + 0x20) << 3;
    do {
      puVar22 = &DAT_11383d918;
      if (*(int *)(*puVar20 + 0x1c) == 1) {
        puVar22 = (undefined *)(*(ulong *)(*puVar20 + 0x10) & 0xfffffffffffffffc);
      }
      lVar14 = (long)(char)puVar22[0x17];
      if (lVar14 < 0) {
        lVar14 = *(long *)(puVar22 + 8);
      }
      if (lVar14 == 0) goto LAB_10955b10c;
      uVar18 = param_1[1];
      if (uVar18 < (ulong)param_1[2]) {
        FUN_1092d3130(param_1,puVar22);
        plVar15 = (long *)(uVar18 + 0x18);
      }
      else {
        plVar15 = param_1;
        func_0x000107c281ec(param_1,puVar22);
      }
      param_1[1] = (long)plVar15;
      func_0x000109d0eb9c(&pppuStack_190,&ppuStack_230,auStack_1e0);
      FUN_10955c3e0(param_1 + 7,puVar22,puVar22,&pppuStack_190);
      func_0x000105675c90(&pppuStack_190);
      puVar20 = puVar20 + 1;
      lVar26 = lVar26 + -8;
    } while (lVar26 != 0);
    uVar18 = *(ulong *)(param_2 + 0x30);
    puVar20 = (ulong *)(param_2 + 0x30);
    if ((uVar18 & 1) != 0) {
      puVar20 = (ulong *)(uVar18 + 7);
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      lVar26 = (long)*(int *)(param_2 + 0x38) << 3;
      do {
        puVar22 = &DAT_11383d918;
        if (*(int *)(*puVar20 + 0x1c) == 1) {
          puVar22 = (undefined *)(*(ulong *)(*puVar20 + 0x10) & 0xfffffffffffffffc);
        }
        lVar14 = (long)(char)puVar22[0x17];
        if (lVar14 < 0) {
          lVar14 = *(long *)(puVar22 + 8);
        }
        if (lVar14 == 0) goto LAB_10955b10c;
        uVar18 = param_1[4];
        if (uVar18 < (ulong)param_1[5]) {
          FUN_1092d3130(plVar12);
          plVar15 = (long *)(uVar18 + 0x18);
        }
        else {
          plVar15 = plVar12;
          func_0x000107c281ec();
        }
        param_1[4] = (long)plVar15;
        puVar20 = puVar20 + 1;
        lVar26 = lVar26 + -8;
      } while (lVar26 != 0);
    }
  }
  ppuVar17 = &PTR_PTR_1132db508;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar17 = *(undefined ***)(param_2 + 0x60);
  }
  if (*(int *)((long)ppuVar17 + 0x1c) == 1) {
    ppuVar17 = (undefined **)ppuVar17[2];
  }
  else {
    ppuVar17 = &PTR_PTR_1132db4a8;
  }
  bStack_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1be = 0;
  cVar16 = '\x01';
  if (*(uint *)((long)ppuVar17 + 0x34) < 4) {
    cVar16 = (char)*(uint *)((long)ppuVar17 + 0x34) + '\x01';
  }
  uVar18 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
  lVar26 = (long)*(char *)(uVar18 + 0x17);
  if (lVar26 < 0) {
    lVar26 = *(long *)(uVar18 + 8);
  }
  if (lVar26 == 0) {
    plVar15 = (long *)(*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc);
    ppuStack_178._0_1_ = 3;
    if (*(char *)((long)plVar15 + 0x17) < '\0') {
      func_0x000107c3192c(&pppuStack_190,*plVar15,plVar15[1]);
    }
    else {
      plStack_188 = (long *)plVar15[1];
      pppuStack_190 = (undefined ***)*plVar15;
      ppuStack_180 = (undefined **)plVar15[2];
    }
    ppuStack_178 = (undefined **)CONCAT71(ppuStack_178._1_7_,1);
    uStack_170 = (ulong)CONCAT51((int5)((ulong)uStack_170 >> 0x18),cVar16) << 0x10;
    FUN_10955bf84(auStack_1e0,&pppuStack_190);
    uStack_1c0 = (undefined2)uStack_170;
    uStack_1be = uStack_170._2_1_;
    (*(code *)(&PTR_FUN_110af4bf0)[(ulong)ppuStack_178 & 0xff])(&pppuStack_190);
  }
  else {
    FUN_1093f2710(&pppuStack_190,&ppuStack_230);
    plVar15 = plStack_188;
    if (plStack_188 != (long *)0x0) {
      plVar1 = plStack_188 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppuStack_178 = (undefined **)CONCAT71((int7)((ulong)ppuStack_178 >> 8),2);
    uStack_170 = (ulong)CONCAT51((int5)((ulong)uStack_170 >> 0x18),cVar16) << 0x10;
    FUN_10955bf84(auStack_1e0,&pppuStack_190);
    uStack_1c0 = (undefined2)uStack_170;
    uStack_1be = uStack_170._2_1_;
    (*(code *)(&PTR_FUN_110af4bf0)[(ulong)ppuStack_178 & 0xff])(&pppuStack_190);
    if (plVar15 != (long *)0x0) {
      plVar1 = plVar15 + 1;
      do {
        lVar26 = *plVar1;
        cVar16 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar26 + -1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
      }
    }
  }
  if ((bRam0000000113732fb0 & 1) == 0) {
    iVar9 = 0x13732fb0;
    ___cxa_guard_acquire();
    if (iVar9 != 0) {
      _memcpy(&pppuStack_190,&PTR_DAT_110afbda8,0x108);
      FUN_10955c208(&pppuStack_190,0xb);
      ___cxa_atexit(FUN_10955c1e0,0x113732fb8,0x100000000);
      ___cxa_guard_release(0x113732fb0);
    }
  }
  puStack_248 = (undefined4 *)0x0;
  puStack_240 = (undefined4 *)0x0;
  puStack_238 = (undefined4 *)0x0;
  ppuVar25 = ppuVar17 + 2;
  if (((ulong)ppuVar17[2] & 1) != 0) {
    ppuVar25 = (undefined **)(ppuVar17[2] + 7);
  }
  if (*(int *)(ppuVar17 + 3) == 0) {
LAB_10955b5c8:
    uVar18 = (long)puStack_238 - (long)puStack_248 >> 1;
    if (uVar18 < 2) {
      uVar18 = 1;
    }
    if (0x7ffffffffffffffb < (ulong)((long)puStack_238 - (long)puStack_248)) {
      uVar18 = 0x3fffffffffffffff;
    }
    ppuVar10 = &puStack_248;
    FUN_10937dfb0();
    puVar7 = puStack_248;
    lVar26 = (long)puStack_240 - (long)puStack_248;
    puVar2 = (undefined4 *)((long)ppuVar10 + uVar18 * 4);
    puVar19 = (undefined4 *)((long)ppuVar10 + 4);
    *(undefined4 *)ppuVar10 = 1;
    puVar24 = (undefined4 *)((long)ppuVar10 - lVar26);
    _memcpy(puVar24,puVar7);
    bVar4 = puStack_248 != (undefined4 *)0x0;
    puStack_248 = puVar24;
    puStack_240 = puVar19;
    puStack_238 = puVar2;
    if (bVar4) {
      __ZdlPv();
      puStack_240 = puVar19;
    }
  }
  else {
    ppuVar17 = ppuVar25 + *(int *)(ppuVar17 + 3);
    do {
      puVar23 = (undefined8 *)*ppuVar25;
      lVar26 = (long)*(char *)((long)puVar23 + 0x17);
      puVar13 = puVar23;
      if (lVar26 < 0) {
        puVar13 = (undefined8 *)*puVar23;
        lVar26 = puVar23[1];
      }
      lVar14 = 0x113732fc0;
      lVar21 = lRam0000000113732fc0;
      if (lRam0000000113732fc0 != 0) {
        do {
          uVar18 = *(ulong *)(lVar21 + 0x20);
          func_0x000107c2abd8(uVar18,*(undefined8 *)(lVar21 + 0x28),puVar13,lVar26);
          if (-1 < (char)uVar18) {
            lVar14 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (uVar18 >> 4 & 8));
        } while (lVar21 != 0);
        if ((lVar14 != 0x113732fc0) &&
           (func_0x000107c2abd8(puVar13,lVar26,*(undefined8 *)(lVar14 + 0x20),
                                *(undefined8 *)(lVar14 + 0x28)), ((uint)puVar13 >> 7 & 1) == 0)) {
          func_0x00010937ddc4(&puStack_248,lVar14 + 0x30);
        }
      }
      ppuVar25 = ppuVar25 + 1;
    } while (ppuVar25 != ppuVar17);
    if (puStack_248 == puStack_240) {
      if (puStack_238 <= puStack_248) goto LAB_10955b5c8;
      *puStack_240 = 1;
      puStack_240 = puStack_240 + 1;
    }
  }
  ppuStack_260 = (undefined **)0x0;
  ppuStack_258 = (undefined **)0x0;
  ppuStack_250 = (undefined **)0x0;
  FUN_109378e2c(&ppuStack_260,(param_1[1] - *param_1 >> 3) * -0x5555555555555555);
  ppuVar25 = (undefined **)param_1[1];
  for (ppuVar17 = (undefined **)*param_1; ppuVar17 != ppuVar25; ppuVar17 = ppuVar17 + 3) {
    plVar15 = param_1 + 7;
    ppuStack_230 = ppuVar17;
    FUN_10937a098(plVar15,ppuVar17,&UNK_10dd5b8f9,&ppuStack_230,&plStack_270);
    ppuVar6 = ppuStack_258;
    if (ppuStack_258 < ppuStack_250) {
      FUN_10955c16c(ppuStack_258,ppuVar17,plVar15 + 6,plVar15 + 8);
      pppuVar11 = (undefined ***)(ppuVar6 + 0xb);
    }
    else {
      pppuVar11 = &ppuStack_260;
      FUN_10955c014(pppuVar11,ppuVar17,plVar15 + 6,plVar15 + 8);
    }
    ppuStack_258 = (undefined **)pppuVar11;
  }
  FUN_109378950(&ppuStack_230,&ppuStack_260,plVar12);
  pppuStack_190 = (undefined ***)0x0;
  plStack_188 = (long *)0x0;
  ppuStack_180 = (undefined **)0x0;
  ppuStack_178 = (undefined **)CONCAT17(ppuStack_178._7_1_,0x3f800000);
  uStack_168 = 0;
  lStack_160 = 0;
  uStack_170 = 0;
  uStack_158 = 0x201;
  uStack_156 = 0;
  uStack_152 = 0;
  uStack_150 = 1;
  uStack_14c = 0;
  uStack_148 = 0x10000;
  uStack_144 = 0x100;
  uStack_142 = 1;
  uStack_140 = 0x1000000;
  uStack_13c = 1;
  uStack_138 = 0x100;
  uStack_130 = 100000;
  uStack_128 = 0;
  uStack_124 = 1;
  uStack_120 = 0;
  plVar12 = (long *)0x120;
  __Znwm();
  plVar12[1] = 0;
  plVar12[2] = 0;
  plVar15 = plVar12 + 3;
  *plVar12 = (long)&PTR_FUN_110af4c20;
  func_0x000109d03d44(plVar15,&ppuStack_230,auStack_1e0,&puStack_248,&pppuStack_190,2);
  uVar18 = *(ulong *)(param_2 + 0x58);
  puVar13 = (undefined8 *)0x10;
  plStack_270 = plVar15;
  plStack_268 = plVar12;
  __Znwm();
  func_0x000109d05694(puVar13,&plStack_278,uVar18 & 0xfffffffffffffffc);
  func_0x000109d03fe8(&plStack_278,*puVar13,&plStack_270,0);
  FUN_10938ab98(&uStack_2a0,&plStack_278);
  uVar5 = uStack_2a0;
  uStack_2a0 = 0;
  FUN_10938cda4(param_1 + 6,uVar5);
  if (cStack_281 < '\0') {
    __ZdlPv(uStack_298);
  }
  lVar26 = uStack_2a0;
  uStack_2a0 = 0;
  if (lVar26 != 0) {
    func_0x000109cda590();
    __ZdlPv();
  }
  if (plStack_278 != (long *)0x0) {
    plVar12 = plStack_278 + 1;
    do {
      lVar26 = *plVar12;
      cVar16 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar4) {
        *plVar12 = lVar26 + -1;
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_278 + 0x10))();
    }
  }
  func_0x000109d0503c(puVar13);
  __ZdlPv();
  plVar12 = plStack_268;
  if (plStack_268 != (long *)0x0) {
    plVar15 = plStack_268 + 1;
    do {
      lVar26 = *plVar15;
      cVar16 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *plVar15 = lVar26 + -1;
        cVar16 = ExclusiveMonitorsStatus();
      }
    } while (cVar16 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plStack_268 + 0x10))(plStack_268);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
    }
  }
  if (lStack_160 < 0) {
    __ZdlPv(uStack_170);
  }
  if (pppuStack_190 != (undefined ***)0x0) {
    __ZdlPv();
  }
  if (lStack_1f0 < 0) {
    __ZdlPv(uStack_200);
  }
  pppuStack_190 = &ppuStack_218;
  FUN_109378cec(&pppuStack_190);
  pppuStack_190 = &ppuStack_230;
  FUN_109378cec(&pppuStack_190);
  pppuStack_190 = &ppuStack_260;
  FUN_109378cec(&pppuStack_190);
  if (puStack_248 != (undefined4 *)0x0) {
    puStack_240 = puStack_248;
    __ZdlPv();
  }
  (*(code *)(&PTR_FUN_110af4bf0)[bStack_1c8])(auStack_1e0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
LAB_10955b9a4:
  func_0x000105688514(&UNK_10f57374b);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10955b9b4);
  (*pcVar8)();
}



/* Entry: 10955bb58; end: 10955bbab;  */

void FUN_10955bb58(undefined8 param_1,long *param_2,int param_3)

{
  long *plVar1;
  undefined1 uStack_29;
  long lStack_28;
  
  plVar1 = param_2 + 7;
  lStack_28 = *param_2 + (long)param_3 * 0x18;
  FUN_10937a098(plVar1,lStack_28,&UNK_10dd5b8f9,&lStack_28,&uStack_29);
  FUN_10955bbac(param_1,plVar1 + 5);
  return;
}



/* Entry: 10955bbac; end: 10955bca3;  */

void FUN_10955bbac(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 (*pauVar1) [12];
  undefined4 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_b9;
  long lStack_b8;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  plVar5 = &lStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  if (param_2[0x48] == '\x01') {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
    plVar5 = (long *)param_2;
    for (puVar8 = *(undefined4 **)(param_2 + 0x30); puVar8 != puVar2; puVar8 = puVar8 + 1) {
      uStack_50 = CONCAT44(uStack_50._4_4_,*puVar8);
      plVar5 = &lStack_70;
      FUN_1092d7128(&lStack_70,&uStack_50);
    }
  }
  else {
    pauVar1 = (undefined1 (*) [12])(param_2 + 8);
    uVar11 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    auVar12._12_4_ = uVar11;
    auVar12._0_12_ = *pauVar1;
    auVar4._12_4_ = uVar11;
    auVar4._0_12_ = *pauVar1;
    auVar12 = NEON_ext(auVar12,auVar4,0xc,1);
    uStack_48 = CONCAT44(SUB124(*pauVar1,8),SUB124(*pauVar1,0));
    uStack_50 = CONCAT44(auVar12._8_4_,auVar12._0_4_);
    FUN_1092c5f10(&lStack_70,&uStack_50,auStack_40,4);
  }
  *param_1 = *(undefined8 *)(param_2 + 0x20);
  param_1[2] = lStack_68;
  param_1[1] = lStack_70;
  param_1[3] = uStack_60;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  __Unwind_Resume();
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  FUN_10954940c(extraout_x8,*(undefined8 *)((long)plVar5 + 0x78));
  lVar9 = *(long *)((long)plVar5 + 0x18);
  lVar3 = *(long *)((long)plVar5 + 0x20);
  if (lVar9 != lVar3) {
    puVar10 = (undefined8 *)((ulong)&uStack_f0 | 8);
    do {
      puVar6 = (undefined1 *)((long)plVar5 + 0x60);
      lStack_b8 = lVar9;
      FUN_10937a098(puVar6,lVar9,&UNK_10dd5b8f9,&lStack_b8,&uStack_b9);
      FUN_10955bbac(&uStack_f0,puVar6 + 0x28);
      puVar7 = (undefined8 *)extraout_x8[1];
      if (puVar7 < (undefined8 *)extraout_x8[2]) {
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[1] = lStack_e8;
        *puVar7 = uStack_f0;
        puVar7[3] = uStack_d8;
        puVar7[2] = lStack_e0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        *(undefined4 *)(puVar7 + 4) = uStack_d0;
        extraout_x8[1] = puVar7 + 5;
      }
      else {
        puVar7 = extraout_x8;
        FUN_10954a380(extraout_x8,&uStack_f0);
        extraout_x8[1] = puVar7;
        if (lStack_e8 != 0) {
          lStack_e0 = lStack_e8;
          __ZdlPv();
        }
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar3);
  }
  return;
}



/* Entry: 10955bca4; end: 10955bdd7;  */

void FUN_10955bca4(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 uStack_49;
  long lStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10954940c(param_1,*(undefined8 *)(param_2 + 0x78));
  lVar4 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar4 != lVar1) {
    puVar5 = (undefined8 *)((ulong)&uStack_80 | 8);
    do {
      lVar2 = param_2 + 0x60;
      lStack_48 = lVar4;
      FUN_10937a098(lVar2,lVar4,&UNK_10dd5b8f9,&lStack_48,&uStack_49);
      FUN_10955bbac(&uStack_80,lVar2 + 0x28);
      puVar3 = (undefined8 *)param_1[1];
      if (puVar3 < (undefined8 *)param_1[2]) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[1] = lStack_78;
        *puVar3 = uStack_80;
        puVar3[3] = uStack_68;
        puVar3[2] = lStack_70;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined4 *)(puVar3 + 4) = uStack_60;
        param_1[1] = puVar3 + 5;
      }
      else {
        puVar3 = param_1;
        FUN_10954a380(param_1,&uStack_80);
        param_1[1] = puVar3;
        if (lStack_78 != 0) {
          lStack_70 = lStack_78;
          __ZdlPv();
        }
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar1);
  }
  return;
}



/* Entry: 10955bdd8; end: 10955be43;  */

void FUN_10955bdd8(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [40];
  
  lVar1 = *(long *)(param_1 + 0x30);
  plVar2 = *(long **)(lVar1 + 0x78);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x48))(plVar2,0);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  func_0x000109cdb3f0(auStack_48,lVar1,param_1 + 0x38,1);
  func_0x0001093f2488(param_1 + 0x60,auStack_48);
  func_0x000109379fe8(auStack_48);
  return;
}



/* Entry: 10955be44; end: 10955bee3;  */

void FUN_10955be44(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  for (plVar1 = *(long **)(param_2 + 0x48); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10955bbac(auStack_48,plVar1 + 5);
    FUN_10954aef4(param_1,plVar1 + 2,plVar1 + 2,auStack_48);
    if (lStack_40 != 0) {
      lStack_38 = lStack_40;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10955bee4; end: 10955bf83;  */

void FUN_10955bee4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  for (plVar1 = *(long **)(param_2 + 0x70); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    FUN_10955bbac(auStack_48,plVar1 + 5);
    FUN_10954aef4(param_1,plVar1 + 2,plVar1 + 2,auStack_48);
    if (lStack_40 != 0) {
      lStack_38 = lStack_40;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10955bf84; end: 10955c013;  */

undefined8 * FUN_10955bf84(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    (*(code *)(&PTR_FUN_110af4bf0)[*(byte *)(param_1 + 3)])(param_1);
    *(undefined1 *)(param_1 + 3) = 3;
    cVar1 = *(char *)(param_2 + 3);
    if (cVar1 == '\x02') {
      uVar2 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar2;
      *param_2 = 0;
      param_2[1] = 0;
    }
    else if (cVar1 == '\x01') {
      uVar3 = param_2[1];
      uVar2 = *param_2;
      param_1[2] = param_2[2];
      param_1[1] = uVar3;
      *param_1 = uVar2;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      cVar1 = *(char *)(param_2 + 3);
    }
    *(char *)(param_1 + 3) = cVar1;
  }
  return param_1;
}



/* Entry: 10955c014; end: 10955c16b;  */

long * FUN_10955c014(long *param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar4 < 0x2e8ba2e8ba2e8bb) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * 0x5d1745d1745d1746;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x1745d1745d1745c < (ulong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
      uVar5 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_48 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_109378aac();
    }
    lVar6 = (long)plVar2 + lVar6;
    plStack_50 = plVar2 + uVar5 * 0xb;
    plStack_68 = plVar2;
    plStack_60 = (long *)lVar6;
    plStack_58 = (long *)lVar6;
    FUN_10955c16c(lVar6,param_2,param_3,param_4);
    plStack_58 = (long *)(lVar6 + 0x58);
    lVar6 = lVar6 + (*param_1 - param_1[1]);
    FUN_109378f10(param_1,*param_1,param_1[1],lVar6);
    plVar2 = plStack_58;
    plStack_68 = (long *)*param_1;
    *param_1 = lVar6;
    lVar6 = param_1[2];
    param_1[2] = (long)plStack_50;
    param_1[1] = (long)plStack_58;
    plStack_60 = plStack_68;
    plStack_58 = plStack_68;
    plStack_50 = (long *)lVar6;
    func_0x0001056754bc(&plStack_68);
    return plVar2;
  }
  FUN_109378a98();
  func_0x0001056754bc(&plStack_68);
  __Unwind_Resume();
  uVar1 = *param_4;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar3 = param_2[1];
    lVar6 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar3;
    *param_1 = lVar6;
  }
  lVar6 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar6;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 10955c16c; end: 10955c1df;  */

undefined8 *
FUN_10955c16c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_4;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
  }
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 10955c1e0; end: 10955c207;  */

long FUN_10955c1e0(long param_1)

{
  FUN_10955c3a8(*(undefined8 *)(param_1 + 8));
  return param_1;
}



/* Entry: 10955c208; end: 10955c3a7;  */

void FUN_10955c208(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lRam0000000113732fc8 = 0;
  plRam0000000113732fc0 = (long *)0x0;
  plRam0000000113732fb8 = (long *)0x113732fc0;
  if (param_2 != 0) {
    puVar7 = param_1 + param_2 * 3;
    plVar1 = (long *)0x113732fc0;
    do {
      plVar8 = plVar1;
      plVar9 = plVar1;
      if (plRam0000000113732fb8 == (long *)0x113732fc0) {
LAB_10955c2fc:
        if (plRam0000000113732fc0 == (long *)0x0) {
LAB_10955c310:
          plVar8 = (long *)0x113732fc0;
          goto LAB_10955c318;
        }
        plVar9 = plVar8 + 1;
LAB_10955c304:
        if (*plVar9 == 0) goto LAB_10955c318;
      }
      else {
        plVar6 = plVar1;
        plVar2 = plRam0000000113732fc0;
        if (plRam0000000113732fc0 == (long *)0x0) {
          do {
            plVar8 = (long *)plVar6[2];
            bVar3 = (long *)*plVar8 == plVar6;
            plVar6 = plVar8;
          } while (bVar3);
        }
        else {
          do {
            plVar8 = plVar2;
            plVar2 = (long *)plVar8[1];
          } while ((long *)plVar8[1] != (long *)0x0);
        }
        lVar4 = plVar8[4];
        func_0x000107c2abd8(lVar4,plVar8[5],*param_1,param_1[1]);
        if (((uint)lVar4 >> 7 & 1) != 0) goto LAB_10955c2fc;
        plVar6 = plRam0000000113732fc0;
        if (plRam0000000113732fc0 == (long *)0x0) goto LAB_10955c310;
        do {
          while( true ) {
            plVar8 = plVar6;
            uVar10 = *param_1;
            func_0x000107c2abd8(uVar10,param_1[1],plVar8[4],plVar8[5]);
            if (((uint)uVar10 >> 7 & 1) != 0) break;
            lVar4 = plVar8[4];
            func_0x000107c2abd8(lVar4,plVar8[5],*param_1,param_1[1]);
            if (((uint)lVar4 >> 7 & 1) == 0) goto LAB_10955c304;
            plVar9 = plVar8 + 1;
            plVar6 = (long *)*plVar9;
            if ((long *)*plVar9 == (long *)0x0) goto LAB_10955c318;
          }
          plVar6 = (long *)*plVar8;
          plVar9 = plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
LAB_10955c318:
        puVar5 = (undefined8 *)0x38;
        __Znwm();
        uVar11 = param_1[1];
        uVar10 = *param_1;
        puVar5[6] = param_1[2];
        puVar5[5] = uVar11;
        puVar5[4] = uVar10;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = plVar8;
        *plVar9 = (long)puVar5;
        if ((long *)*plRam0000000113732fb8 != (long *)0x0) {
          puVar5 = (undefined8 *)*plVar9;
          plRam0000000113732fb8 = (long *)*plRam0000000113732fb8;
        }
        func_0x000107c27d40(plRam0000000113732fc0,puVar5);
        lRam0000000113732fc8 = lRam0000000113732fc8 + 1;
      }
      param_1 = param_1 + 3;
    } while (param_1 != puVar7);
  }
  return;
}



/* Entry: 10955c3a8; end: 10955c3df;  */

void FUN_10955c3a8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10955c3a8(*param_1);
    FUN_10955c3a8(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10955c3e0; end: 10955c623;  */

undefined1  [16]
FUN_10955c3e0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x26;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x26 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x26 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10955c5e0;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x26) break;
        }
      }
    }
  }
  FUN_10955c624(aplStack_78,param_1,plVar6,param_3,param_4);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10937a3dc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x26 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x26 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x26 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x26 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x26 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_10955c5e0:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10955c624; end: 10955c69f;  */

void FUN_10955c624(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1094c86f8(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10955c6a0; end: 10955c8eb;  */

void FUN_10955c6a0(uint *param_1,uint *param_2,long param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  float *pfVar19;
  int iVar20;
  int iVar21;
  float *pfVar22;
  float *pfVar23;
  long lVar24;
  float *pfVar25;
  uint uVar26;
  float fVar27;
  
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar26 = *param_1;
  if ((char)param_4[4] == '\x01') {
    uVar13 = (ulong)*param_4;
    uVar10 = (ulong)param_4[1];
    FUN_10955c8ec(uVar13,uVar10,(ulong)uVar5,uVar4,param_4[3]);
    iVar12 = (int)(uVar13 >> 0x20);
    iVar14 = (int)(uVar10 >> 0x20);
  }
  else {
    iVar14 = 0;
    uVar10 = 0;
    iVar12 = 0;
    uVar13 = 0;
  }
  iVar7 = (int)uVar10;
  iVar2 = iVar7 + uVar5 + iVar12;
  iVar6 = iVar2 * 3;
  if (0 < (int)uVar4) {
    iVar16 = 0;
    uVar17 = 0;
    iVar1 = (uVar26 >> 3 & 0x1ff) + 1;
    lVar18 = *(long *)(param_1 + 4);
    pfVar19 = *(float **)(param_3 + 0x10);
    pfVar8 = *(float **)(param_3 + 0x28);
    lVar15 = 3;
    if (param_5 != 0) {
      lVar15 = 4;
    }
    iVar3 = (iVar7 + iVar14 * iVar2) * 3;
    do {
      if (0 < (int)uVar5) {
        uVar10 = 0;
        iVar20 = iVar3;
        iVar11 = iVar16;
        do {
          pfVar22 = pfVar19;
          pfVar23 = pfVar8;
          lVar24 = lVar15;
          pfVar25 = (float *)(param_2 + iVar20);
          iVar21 = iVar11;
          do {
            fVar27 = (float)NEON_ucvtf((uint)*(byte *)(lVar18 + iVar21));
            *pfVar25 = ((*(float *)(param_3 + 8) + *(float *)(param_3 + 4) * fVar27) - *pfVar22) *
                       (1.0 / *pfVar23);
            iVar21 = iVar21 + 1;
            lVar24 = lVar24 + -1;
            pfVar22 = pfVar22 + 1;
            pfVar23 = pfVar23 + 1;
            pfVar25 = pfVar25 + 1;
          } while (lVar24 != 0);
          uVar10 = uVar10 + 1;
          iVar20 = iVar20 + 3;
          iVar11 = iVar11 + iVar1;
        } while (uVar10 != uVar5);
      }
      uVar17 = uVar17 + 1;
      iVar3 = iVar3 + iVar6;
      iVar16 = iVar16 + uVar5 * iVar1;
    } while (uVar17 != uVar4);
  }
  if ((param_4[4] & 1) != 0) {
    if (0 < iVar6 * iVar14) {
      uVar26 = param_4[2];
      uVar10 = (ulong)(uint)(iVar6 * iVar14) + 1;
      puVar9 = param_2;
      do {
        *puVar9 = uVar26;
        uVar10 = uVar10 - 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar10);
    }
    if (0 < (int)uVar4) {
      lVar15 = (long)iVar14;
      do {
        if (0 < iVar7) {
          uVar26 = param_4[2];
          puVar9 = param_2 + lVar15 * iVar6;
          uVar10 = (long)(iVar7 * 3) + 1;
          do {
            *puVar9 = uVar26;
            uVar10 = uVar10 - 1;
            puVar9 = puVar9 + 1;
          } while (1 < uVar10);
        }
        if (0 < iVar12) {
          uVar26 = param_4[2];
          puVar9 = param_2 + (int)((iVar7 + uVar5 + iVar2 * (int)lVar15) * 3);
          uVar10 = (long)(iVar12 * 3) + 1;
          do {
            *puVar9 = uVar26;
            uVar10 = uVar10 - 1;
            puVar9 = puVar9 + 1;
          } while (1 < uVar10);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)(iVar14 + uVar4));
    }
    uVar5 = iVar6 * (int)uVar13;
    if (0 < (int)uVar5) {
      uVar26 = param_4[2];
      uVar13 = (ulong)uVar5 + 1;
      puVar9 = param_2 + (int)(iVar6 * (iVar14 + uVar4));
      do {
        *puVar9 = uVar26;
        uVar13 = uVar13 - 1;
        puVar9 = puVar9 + 1;
      } while (1 < uVar13);
    }
  }
  return;
}



/* Entry: 10955c8ec; end: 10955c9bf;  */

ulong FUN_10955c8ec(int param_1,long param_2,long param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  uint *puVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  float fVar26;
  
  if (param_1 < 1) {
    FUN_109389068(&UNK_10f57394e,0x1c0);
LAB_10955c984:
    FUN_109389068(&UNK_10f57394e,0x1c1);
LAB_10955c994:
    FUN_109389068(&UNK_10f57394e,0x1c2);
  }
  else {
    iVar20 = (int)param_2;
    if (iVar20 < 1) goto LAB_10955c984;
    iVar10 = (int)param_3;
    if (iVar10 < 1) goto LAB_10955c994;
    iVar11 = (int)param_4;
    if (0 < iVar11) {
      if (param_5 == 1) {
        fVar26 = (float)(param_1 - iVar10) / 2.0;
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        iVar20 = (int)((float)(iVar20 - iVar11) / 2.0);
        param_1 = (int)fVar26;
LAB_10955c960:
        return CONCAT44(param_1,iVar20);
      }
      if (param_5 == 0) {
        iVar20 = iVar20 - iVar11;
        param_1 = param_1 - iVar10;
        goto LAB_10955c960;
      }
      goto LAB_10955c9b4;
    }
  }
  param_2 = 0x1c3;
  FUN_109389068(&UNK_10f57394e);
LAB_10955c9b4:
  pcVar7 = "";
  FUN_10938ce40();
  uVar3 = *(uint *)((long)pcVar7 + 8);
  uVar4 = *(uint *)((long)pcVar7 + 0xc);
  iVar20 = (*(uint *)pcVar7 >> 3 & 0x1ff) + 1;
  if ((char)param_4[4] == '\x01') {
    uVar8 = (ulong)*param_4;
    uVar17 = (ulong)param_4[1];
    FUN_10955c8ec(uVar8,uVar17,(ulong)uVar4,uVar3,param_4[3]);
    iVar10 = (int)(uVar8 >> 0x20);
    iVar11 = (int)(uVar17 >> 0x20);
  }
  else {
    iVar11 = 0;
    uVar17 = 0;
    iVar10 = 0;
    uVar8 = 0;
  }
  uVar21 = 0;
  iVar1 = iVar11 + uVar3;
  iVar9 = (int)uVar17;
  iVar2 = iVar9 + iVar10 + uVar4;
  lVar22 = *(long *)((long)pcVar7 + 0x10);
  uVar17 = 3;
  if (param_5 != 0) {
    uVar17 = 4;
  }
  iVar5 = iVar9 + iVar11 * iVar2;
  iVar6 = ((int)uVar8 + iVar1) * iVar2;
  do {
    if (0 < (int)uVar3) {
      uVar25 = 0;
      lVar12 = *(long *)(param_3 + 0x10);
      lVar13 = *(long *)(param_3 + 0x28);
      uVar14 = uVar21;
      iVar16 = iVar5;
      do {
        uVar18 = uVar14;
        uVar24 = (ulong)uVar4;
        iVar23 = iVar16;
        if (0 < (int)uVar4) {
          do {
            fVar26 = (float)NEON_ucvtf((uint)*(byte *)(lVar22 + (int)uVar18));
            *(float *)(param_2 + (long)iVar23 * 4) =
                 ((*(float *)(param_3 + 8) + *(float *)(param_3 + 4) * fVar26) -
                 *(float *)(lVar12 + uVar21 * 4)) * (1.0 / *(float *)(lVar13 + uVar21 * 4));
            iVar23 = iVar23 + 1;
            uVar18 = (ulong)(uint)((int)uVar18 + iVar20);
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
        uVar25 = uVar25 + 1;
        iVar16 = iVar16 + iVar2;
        uVar14 = (ulong)((int)uVar14 + uVar4 * iVar20);
      } while (uVar25 != uVar3);
    }
    uVar21 = uVar21 + 1;
    iVar5 = iVar5 + iVar6;
  } while (uVar21 != uVar17);
  if ((char)param_4[4] == '\x01') {
    lVar22 = 0;
    iVar20 = (int)uVar8 * iVar2;
    uVar8 = (long)(iVar2 * iVar11) + 1;
    do {
      puVar15 = (uint *)(param_2 + (long)(iVar6 * (int)lVar22) * 4);
      if (0 < iVar2 * iVar11) {
        uVar25 = param_4[2];
        uVar17 = uVar8;
        puVar19 = puVar15;
        do {
          *puVar19 = uVar25;
          uVar17 = uVar17 - 1;
          puVar19 = puVar19 + 1;
        } while (1 < uVar17);
      }
      lVar12 = (long)iVar11;
      if (0 < (int)uVar3) {
        do {
          if (0 < iVar9) {
            uVar25 = param_4[2];
            uVar17 = (long)iVar9 + 1;
            puVar19 = puVar15 + lVar12 * iVar2;
            do {
              *puVar19 = uVar25;
              uVar17 = uVar17 - 1;
              puVar19 = puVar19 + 1;
            } while (1 < uVar17);
          }
          if (0 < iVar10) {
            uVar25 = param_4[2];
            puVar19 = puVar15 + lVar12 * iVar2 + (long)iVar9 + (long)(int)uVar4;
            uVar17 = (long)iVar10 + 1;
            do {
              *puVar19 = uVar25;
              uVar17 = uVar17 - 1;
              puVar19 = puVar19 + 1;
            } while (1 < uVar17);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < iVar1);
      }
      if (0 < iVar20) {
        uVar25 = param_4[2];
        puVar15 = puVar15 + iVar2 * iVar1;
        uVar17 = (long)iVar20 + 1;
        do {
          *puVar15 = uVar25;
          uVar17 = uVar17 - 1;
          puVar15 = puVar15 + 1;
        } while (1 < uVar17);
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 != 3);
  }
  return uVar8;
}



/* Entry: 10955c9c0; end: 10955cc2f;  */

void FUN_10955c9c0(uint *param_1,long param_2,long param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  float fVar25;
  
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  iVar1 = (*param_1 >> 3 & 0x1ff) + 1;
  if ((char)param_4[4] == '\x01') {
    uVar15 = (ulong)*param_4;
    uVar9 = (ulong)param_4[1];
    FUN_10955c8ec(uVar15,uVar9,(ulong)uVar5,uVar4,param_4[3]);
    iVar18 = (int)(uVar15 >> 0x20);
    iVar21 = (int)(uVar9 >> 0x20);
  }
  else {
    iVar21 = 0;
    uVar9 = 0;
    iVar18 = 0;
    uVar15 = 0;
  }
  uVar19 = 0;
  iVar2 = iVar21 + uVar4;
  iVar8 = (int)uVar9;
  iVar3 = iVar8 + iVar18 + uVar5;
  lVar20 = *(long *)(param_1 + 4);
  uVar9 = 3;
  if (param_5 != 0) {
    uVar9 = 4;
  }
  iVar6 = iVar8 + iVar21 * iVar3;
  iVar7 = ((int)uVar15 + iVar2) * iVar3;
  do {
    if (0 < (int)uVar4) {
      uVar24 = 0;
      lVar10 = *(long *)(param_3 + 0x10);
      lVar11 = *(long *)(param_3 + 0x28);
      uVar12 = uVar19;
      iVar14 = iVar6;
      do {
        uVar16 = uVar12;
        uVar23 = (ulong)uVar5;
        iVar22 = iVar14;
        if (0 < (int)uVar5) {
          do {
            fVar25 = (float)NEON_ucvtf((uint)*(byte *)(lVar20 + (int)uVar16));
            *(float *)(param_2 + (long)iVar22 * 4) =
                 ((*(float *)(param_3 + 8) + *(float *)(param_3 + 4) * fVar25) -
                 *(float *)(lVar10 + uVar19 * 4)) * (1.0 / *(float *)(lVar11 + uVar19 * 4));
            iVar22 = iVar22 + 1;
            uVar16 = (ulong)(uint)((int)uVar16 + iVar1);
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        uVar24 = uVar24 + 1;
        iVar14 = iVar14 + iVar3;
        uVar12 = (ulong)((int)uVar12 + uVar5 * iVar1);
      } while (uVar24 != uVar4);
    }
    uVar19 = uVar19 + 1;
    iVar6 = iVar6 + iVar7;
  } while (uVar19 != uVar9);
  if ((char)param_4[4] == '\x01') {
    lVar20 = 0;
    iVar1 = (int)uVar15 * iVar3;
    do {
      puVar13 = (uint *)(param_2 + (long)(iVar7 * (int)lVar20) * 4);
      if (0 < iVar3 * iVar21) {
        uVar24 = param_4[2];
        uVar15 = (long)(iVar3 * iVar21) + 1;
        puVar17 = puVar13;
        do {
          *puVar17 = uVar24;
          uVar15 = uVar15 - 1;
          puVar17 = puVar17 + 1;
        } while (1 < uVar15);
      }
      lVar10 = (long)iVar21;
      if (0 < (int)uVar4) {
        do {
          if (0 < iVar8) {
            uVar24 = param_4[2];
            uVar15 = (long)iVar8 + 1;
            puVar17 = puVar13 + lVar10 * iVar3;
            do {
              *puVar17 = uVar24;
              uVar15 = uVar15 - 1;
              puVar17 = puVar17 + 1;
            } while (1 < uVar15);
          }
          if (0 < iVar18) {
            uVar24 = param_4[2];
            puVar17 = puVar13 + lVar10 * iVar3 + (long)iVar8 + (long)(int)uVar5;
            uVar15 = (long)iVar18 + 1;
            do {
              *puVar17 = uVar24;
              uVar15 = uVar15 - 1;
              puVar17 = puVar17 + 1;
            } while (1 < uVar15);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < iVar2);
      }
      if (0 < iVar1) {
        uVar24 = param_4[2];
        puVar13 = puVar13 + iVar3 * iVar2;
        uVar15 = (long)iVar1 + 1;
        do {
          *puVar13 = uVar24;
          uVar15 = uVar15 - 1;
          puVar13 = puVar13 + 1;
        } while (1 < uVar15);
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 != 3);
  }
  return;
}



/* Entry: 10955cc30; end: 10955cc87;  */

void FUN_10955cc30(void)

{
  int in_w4;
  
  if (in_w4 == 0) {
    FUN_10955c9c0();
  }
  else {
    FUN_10955c6a0();
  }
  return;
}



/* Entry: 10955cc88; end: 10955cf63;  */

char * FUN_10955cc88(char *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = -0x80;
  param_1[7] = '?';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  pcVar4 = param_1 + 0x10;
  pcVar4[0] = '\0';
  pcVar4[1] = '\0';
  pcVar4[2] = '\0';
  pcVar4[3] = '\0';
  pcVar4[4] = '\0';
  pcVar4[5] = '\0';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  uStack_70 = 0;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  FUN_1093c71a0(pcVar4,&uStack_70,(long)&uStack_68 + 4,3);
  pcVar3 = param_1 + 0x28;
  pcVar3[0] = '\0';
  pcVar3[1] = '\0';
  pcVar3[2] = '\0';
  pcVar3[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  uStack_70 = NEON_fmov(0x3f800000,4);
  uStack_68._0_4_ = 0x3f800000;
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  FUN_1093c71a0(pcVar3,&uStack_70,(long)&uStack_68 + 4,3);
  fVar6 = *(float *)(param_2 + 0x30);
  *(float *)(param_1 + 4) = (*(float *)(param_2 + 0x34) - fVar6) / 255.0;
  *(float *)(param_1 + 8) = fVar6;
  cVar2 = *(char *)(param_2 + 0x38);
  *param_1 = cVar2;
  iVar1 = *(int *)(param_2 + 0x10);
  if (cVar2 == '\x01') {
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      if (iVar1 == 4) {
        uStack_68 = (*(undefined8 **)(param_2 + 0x18))[1];
        uStack_70 = **(undefined8 **)(param_2 + 0x18);
        FUN_1093c3a1c(pcVar4,&uStack_70,auStack_60,4);
        uStack_68 = (*(undefined8 **)(param_2 + 0x28))[1];
        uStack_70 = **(undefined8 **)(param_2 + 0x28);
        FUN_1093c3a1c(pcVar3,&uStack_70,auStack_60,4);
        goto LAB_10955cedc;
      }
      uVar5 = **(undefined4 **)(param_2 + 0x18);
    }
    if (*(int *)(param_2 + 0x20) == 0) {
      uVar7 = 0x3f800000;
    }
    else {
      uVar7 = **(undefined4 **)(param_2 + 0x28);
    }
    uStack_70 = CONCAT44(uVar5,uVar5);
    uStack_68 = CONCAT44(uVar5,uVar5);
    FUN_1093c3a1c(pcVar4,&uStack_70,auStack_60,4);
    uStack_70 = CONCAT44(uVar7,uVar7);
    uStack_68 = CONCAT44(uVar7,uVar7);
    FUN_1093c3a1c(pcVar3,&uStack_70,auStack_60,4);
  }
  else {
    if (iVar1 == 0) {
      uStack_68._0_4_ = 0;
    }
    else {
      if (iVar1 == 3) {
        uStack_70 = **(undefined8 **)(param_2 + 0x18);
        uStack_68._0_4_ = *(undefined4 *)(*(undefined8 **)(param_2 + 0x18) + 1);
        FUN_1093c3a1c(pcVar4,&uStack_70,(long)&uStack_68 + 4,3);
        uStack_70 = **(undefined8 **)(param_2 + 0x28);
        uStack_68 = CONCAT44(uStack_68._4_4_,*(undefined4 *)(*(undefined8 **)(param_2 + 0x28) + 1));
        FUN_1093c3a1c(pcVar3,&uStack_70,(long)&uStack_68 + 4,3);
        goto LAB_10955cedc;
      }
      uStack_68._0_4_ = **(undefined4 **)(param_2 + 0x18);
    }
    if (*(int *)(param_2 + 0x20) == 0) {
      uVar5 = 0x3f800000;
    }
    else {
      uVar5 = **(undefined4 **)(param_2 + 0x28);
    }
    uStack_70 = CONCAT44((undefined4)uStack_68,(undefined4)uStack_68);
    FUN_1093c3a1c(pcVar4,&uStack_70,(long)&uStack_68 + 4,3);
    uStack_70 = CONCAT44(uVar5,uVar5);
    uStack_68 = CONCAT44(uStack_68._4_4_,uVar5);
    FUN_1093c3a1c(pcVar3,&uStack_70,(long)&uStack_68 + 4,3);
  }
LAB_10955cedc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar3;
  }
  ___stack_chk_fail();
  FUN_10955cf64(param_1);
  __Unwind_Resume();
  if (*(long *)(pcVar3 + 0x28) != 0) {
    *(long *)(pcVar3 + 0x30) = *(long *)(pcVar3 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(pcVar3 + 0x10) != 0) {
    *(long *)(pcVar3 + 0x18) = *(long *)(pcVar3 + 0x10);
    __ZdlPv();
  }
  return pcVar3;
}



/* Entry: 10955cf64; end: 10955cfa3;  */

long FUN_10955cf64(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10955cfa4; end: 10955d06f;  */

void FUN_10955cfa4(uint param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  if (param_1 < 2) {
    return;
  }
  if ((param_1 == 0x7fffffff) || (param_1 == 0x80000000)) {
    __ZNSt3__19to_stringEi(auStack_50);
    FUN_10928a5e0(auStack_38,&UNK_10f5739d3,auStack_50);
    func_0x000105687ee0(auStack_38);
  }
  else {
    __ZNSt3__19to_stringEi(auStack_50);
    FUN_10928a5e0(auStack_38,&UNK_10f573a2a,auStack_50);
    func_0x000105687ee0(auStack_38);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10955d034);
  (*pcVar1)();
}


