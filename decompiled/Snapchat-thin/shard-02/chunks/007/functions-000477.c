/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020ab964; end: 1020abd53;  */

/* WARNING: Possible PIC construction at 0x0001020ab9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abd4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abcc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020abc8c) */
/* WARNING: Removing unreachable block (ram,0x0001020abd50) */
/* WARNING: Removing unreachable block (ram,0x0001020abd38) */
/* WARNING: Removing unreachable block (ram,0x0001020abbd8) */
/* WARNING: Removing unreachable block (ram,0x0001020abbe0) */
/* WARNING: Removing unreachable block (ram,0x0001020abcfc) */
/* WARNING: Removing unreachable block (ram,0x0001020abbe8) */
/* WARNING: Removing unreachable block (ram,0x0001020abb08) */
/* WARNING: Removing unreachable block (ram,0x0001020abb34) */
/* WARNING: Removing unreachable block (ram,0x0001020abb70) */
/* WARNING: Removing unreachable block (ram,0x0001020abb54) */
/* WARNING: Removing unreachable block (ram,0x0001020abb6c) */
/* WARNING: Removing unreachable block (ram,0x0001020abb90) */
/* WARNING: Removing unreachable block (ram,0x0001020ab9e0) */
/* WARNING: Removing unreachable block (ram,0x0001020ab9f0) */
/* WARNING: Removing unreachable block (ram,0x0001020aba2c) */
/* WARNING: Removing unreachable block (ram,0x0001020abc84) */
/* WARNING: Removing unreachable block (ram,0x0001020aba34) */
/* WARNING: Removing unreachable block (ram,0x0001020aba64) */
/* WARNING: Removing unreachable block (ram,0x0001020abaa0) */
/* WARNING: Removing unreachable block (ram,0x0001020aba84) */
/* WARNING: Removing unreachable block (ram,0x0001020aba9c) */
/* WARNING: Removing unreachable block (ram,0x0001020abac0) */
/* WARNING: Removing unreachable block (ram,0x0001020abccc) */
/* WARNING: Removing unreachable block (ram,0x0001020abcdc) */

void FUN_1020ab964(ulong param_1)

{
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  
  FUN_1020aeb6c();
  uVar2 = *(ulong *)(unaff_x20 + 0x70);
  if ((uVar2 == 0) || (uVar1 = param_1, FUN_1020a469c(param_1,uVar2), (uVar1 & 1) == 0)) {
    *(ulong *)(unaff_x20 + 0x70) = param_1;
    func_0x000107c61434(param_1);
    param_1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1);
  return;
}



/* Entry: 1020abd54; end: 1020abe03;  */

void FUN_1020abd54(void)

{
  long unaff_x20;
  
  FUN_1020ab788();
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 1020abe04; end: 1020abec3;  */

int FUN_1020abe04(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1020abec4; end: 1020abf23;  */

/* WARNING: Possible PIC construction at 0x0001020abed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020abf08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020abefc) */
/* WARNING: Removing unreachable block (ram,0x0001020abeec) */
/* WARNING: Removing unreachable block (ram,0x0001020abedc) */
/* WARNING: Removing unreachable block (ram,0x0001020abf0c) */

void FUN_1020abec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020abf24; end: 1020abfef;  */

undefined8 * FUN_1020abf24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  uVar6 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar6;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  uVar8 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar8;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  return param_1;
}



/* Entry: 1020abff0; end: 1020ac13b;  */

undefined8 * FUN_1020abff0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020ac13c; end: 1020ac1ef;  */

undefined8 * FUN_1020ac13c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1020ac1f0; end: 1020ac2b3;  */

int FUN_1020ac1f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020ac2b4; end: 1020ac883;  */

undefined * FUN_1020ac2b4(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  long unaff_x20;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong *puVar28;
  undefined8 uVar29;
  ulong uVar30;
  undefined *puVar31;
  long lVar32;
  ulong uStack_2a8;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar31 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1020a9ccc();
  lVar32 = *(long *)(param_1 + 0x10);
  if (lVar32 != 0) {
    puStack_1b0 = puVar31;
    FUN_1020a5720(0,lVar32,0);
    puVar28 = (ulong *)(param_1 + 0x20);
    uVar2 = *(ulong *)(unaff_x20 + 0x48);
    uVar4 = *(ulong *)(unaff_x20 + 0x50);
    do {
      puVar31 = puStack_1b0;
      uStack_b8 = puVar28[0xd];
      uStack_c0 = puVar28[0xc];
      uStack_a8 = puVar28[0xf];
      uStack_b0 = puVar28[0xe];
      uStack_98 = puVar28[0x11];
      uStack_a0 = puVar28[0x10];
      uStack_f8 = puVar28[5];
      uStack_100 = puVar28[4];
      uStack_e8 = puVar28[7];
      uStack_f0 = puVar28[6];
      uStack_d8 = puVar28[9];
      uStack_e0 = puVar28[8];
      uStack_c8 = puVar28[0xb];
      uStack_d0 = puVar28[10];
      uStack_118 = puVar28[1];
      uStack_120 = *puVar28;
      uStack_108 = puVar28[3];
      uStack_110 = puVar28[2];
      uStack_1b8 = puVar28[1];
      uStack_1c0 = *puVar28;
      uStack_80 = uStack_1c0;
      uStack_78 = uStack_1b8;
      func_0x000100402194(&uStack_80,&uStack_250);
      FUN_1020aef30(&uStack_120,&uStack_250);
      func_0x000107c5fb78(0x3a,0xe100000000000000);
      uVar7 = uStack_108;
      uVar6 = uStack_110;
      func_0x000107c61434(uStack_108);
      func_0x000107c5fb78(uVar6,uVar7);
      uVar9 = uStack_b8;
      uVar8 = uStack_c0;
      uVar5 = uStack_1b8;
      uVar3 = uStack_1c0;
      uVar21 = uVar2;
      uVar30 = uVar4;
      if ((uStack_b8 != 0) &&
         (((uVar2 == uStack_c0 && (uStack_b8 == uVar4)) ||
          (uVar12 = uVar2, func_0x000107c605b8(uVar2,uVar4,uStack_c0,uStack_b8,0), (uVar12 & 1) != 0
          )))) {
        uVar21 = uStack_e0;
        uVar30 = uStack_d8;
      }
      func_0x000107c61434(uVar30);
      uVar25 = uStack_c8;
      uStack_2a8 = uStack_d0;
      uVar17 = uStack_f8;
      uVar12 = uStack_100;
      if (uStack_c8 == 0) {
        func_0x000107c61434(uVar9);
        func_0x000107c61434(uVar17);
LAB_1020ac464:
        uStack_2a8 = 0;
        uVar25 = 0xc000000000000000;
      }
      else {
        func_0x000107c61434(uVar9);
        func_0x000107c61434(uVar17);
        func_0x000107c5ee08(uStack_2a8,uVar25,0);
        if (0xe < uVar25 >> 0x3c) goto LAB_1020ac464;
      }
      uVar18 = uStack_d8;
      uVar15 = uStack_e0;
      uStack_88 = uStack_98;
      uStack_90 = uStack_a0;
      uStack_1b8 = uStack_98;
      uStack_1c0 = uStack_a0;
      func_0x000107c61434(uStack_d8);
      func_0x000101223174(&uStack_90,&uStack_250);
      puVar13 = puVar11;
      func_0x000107c61558();
      uVar14 = uVar3;
      uVar16 = uVar5;
      func_0x000100029284();
      uVar20 = (ulong)~(uint)uVar16 & 1;
      lVar23 = *(long *)(puVar11 + 0x10) + uVar20;
      if (SCARRY8(*(long *)(puVar11 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1020ac870);
        (*pcVar10)();
      }
      if (*(long *)(puVar11 + 0x18) < lVar23) {
        func_0x0001020a7f3c(lVar23,puVar13);
        uVar14 = uVar3;
        uVar20 = uVar5;
        func_0x000100029284();
        if (((uint)uVar16 & 1) != ((uint)uVar20 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1020ac884);
          (*pcVar10)();
        }
joined_r0x0001020ac5a8:
        if ((uVar16 & 1) != 0) goto LAB_1020ac520;
LAB_1020ac5ac:
        *(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x40) | 1L << (uVar14 & 0x3f);
        puVar19 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar14 * 0x10);
        *puVar19 = uVar3;
        puVar19[1] = uVar5;
        puVar19 = (ulong *)(*(long *)(puVar11 + 0x38) + uVar14 * 0x70);
        *puVar19 = uVar12;
        puVar19[1] = uVar17;
        puVar19[2] = uVar6;
        puVar19[3] = uVar7;
        puVar19[4] = uStack_2a8;
        puVar19[5] = uVar25;
        puVar19[6] = uVar8;
        puVar19[7] = uVar9;
        puVar19[8] = uVar21;
        puVar19[9] = uVar30;
        puVar19[10] = uVar15;
        puVar19[0xb] = uVar18;
        puVar19[0xd] = uStack_1b8;
        puVar19[0xc] = uStack_1c0;
        if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1020ac874);
          (*pcVar10)();
        }
        *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
      }
      else {
        if ((int)puVar13 == 0) {
          FUN_1020a6cd0();
          goto joined_r0x0001020ac5a8;
        }
        if ((uVar16 & 1) == 0) goto LAB_1020ac5ac;
LAB_1020ac520:
        puVar19 = (ulong *)(*(long *)(puVar11 + 0x38) + uVar14 * 0x70);
        uStack_238 = puVar19[3];
        uStack_240 = puVar19[2];
        uStack_228 = puVar19[5];
        uStack_230 = puVar19[4];
        uStack_248 = puVar19[1];
        uStack_250 = *puVar19;
        uStack_1f8 = puVar19[0xb];
        uStack_200 = puVar19[10];
        uStack_1e8 = puVar19[0xd];
        uStack_1f0 = puVar19[0xc];
        uStack_218 = puVar19[7];
        uStack_220 = puVar19[6];
        uStack_208 = puVar19[9];
        uStack_210 = puVar19[8];
        *puVar19 = uVar12;
        puVar19[1] = uVar17;
        puVar19[2] = uVar6;
        puVar19[3] = uVar7;
        puVar19[4] = uStack_2a8;
        puVar19[5] = uVar25;
        puVar19[6] = uVar8;
        puVar19[7] = uVar9;
        puVar19[8] = uVar21;
        puVar19[9] = uVar30;
        puVar19[10] = uVar15;
        puVar19[0xb] = uVar18;
        puVar19[0xd] = uStack_1b8;
        puVar19[0xc] = uStack_1c0;
        func_0x0001020af2f0(&uStack_250);
        func_0x000107c6142c(uVar5);
      }
      func_0x000107c61428(unaff_x20 + 0x80,&uStack_250,0x20,0);
      lVar23 = *(long *)(unaff_x20 + 0x80);
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar22 = 0;
      }
      else {
        func_0x000107c61434(lVar23);
        func_0x000100029284();
        if ((uVar17 & 1) == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(undefined8 *)(*(long *)(lVar23 + 0x38) + uVar12 * 8);
          func_0x000107c61174(uVar22);
        }
        func_0x000107c6142c(lVar23);
      }
      func_0x000107c614a8(&uStack_250);
      func_0x000107c61428(unaff_x20 + 0x78,&uStack_250,0x20,0);
      lVar23 = *(long *)(unaff_x20 + 0x78);
      if (*(long *)(lVar23 + 0x10) == 0) {
        uVar24 = 0;
        uVar26 = 0;
        uVar29 = 0;
        uVar27 = 1;
      }
      else {
        func_0x000107c61434(lVar23);
        func_0x000100029284();
        if ((uVar18 & 1) == 0) {
          uVar24 = 0;
          uVar26 = 0;
          uVar29 = 0;
          uVar27 = 1;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(lVar23 + 0x38) + uVar15 * 0x20);
          uVar24 = *puVar1;
          uVar27 = puVar1[1];
          uVar26 = puVar1[2];
          uVar29 = puVar1[3];
          func_0x000107c61434(uVar29);
          func_0x000107c61434(uVar27);
        }
        func_0x000107c6142c(lVar23);
      }
      func_0x000107c614a8(&uStack_250);
      FUN_1020aef64(&uStack_1a8,&uStack_120,uVar22,uVar24,uVar27,uVar26,uVar29);
      FUN_1020af290(uVar24,uVar27,uVar26,uVar29);
      func_0x000107c61170(uVar22);
      func_0x0001020af2c4(&uStack_120);
      uVar3 = *(ulong *)(puVar31 + 0x10);
      puStack_1b0 = puVar31;
      if (*(ulong *)(puVar31 + 0x18) >> 1 <= uVar3) {
        FUN_1020a5720(1 < *(ulong *)(puVar31 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(puStack_1b0 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x28) = uStack_1a0;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x20) = uStack_1a8;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x58) = uStack_170;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x50) = uStack_178;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x68) = uStack_160;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x60) = uStack_168;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x38) = uStack_190;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x30) = uStack_198;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x48) = uStack_180;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x40) = uStack_188;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0xa0) = uStack_128;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x88) = uStack_140;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x80) = uStack_148;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x98) = uStack_130;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x90) = uStack_138;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x78) = uStack_150;
      *(undefined8 *)(puStack_1b0 + uVar3 * 0x88 + 0x70) = uStack_158;
      puVar28 = puVar28 + 0x12;
      lVar32 = lVar32 + -1;
      puVar31 = puStack_1b0;
    } while (lVar32 != 0);
  }
  func_0x000107c61428(unaff_x20 + 0x88,&uStack_250,1,0);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined **)(unaff_x20 + 0x88) = puVar11;
  func_0x000107c6142c(uVar22);
  return puVar31;
}



/* Entry: 1020ac884; end: 1020ac8a7;  */

void FUN_1020ac884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5b8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x5b0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x5a8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x5a0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ac8a8,0,0);
  return;
}



/* Entry: 1020ac8a8; end: 1020ac9cf;  */

/* WARNING: Removing unreachable block (ram,0x0001020ac8fc) */

void FUN_1020ac8a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x5a0);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x538,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x5c0) = lVar3;
  if (lVar3 != 0) {
    func_0x000107c5fd64();
    *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x5b0);
    *(long *)(unaff_x22 + 0x560) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x568) = *(undefined8 *)(unaff_x22 + 0x5a8);
    uVar1 = 0x112e56380;
    func_0x0001000285a8(0x112e56380,&UNK_10da58f68);
    func_0x000107c61418(unaff_x22 + 0x10,0,uVar1,&UNK_10da58f60,unaff_x22 + 0x550,unaff_x22 + 0x590)
    ;
    *(long *)(unaff_x22 + 0x580) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x588) = uVar2;
    uVar1 = 0x112e56388;
    func_0x0001000285a8(0x112e56388,&UNK_10da58f80);
    func_0x000107c61418(unaff_x22 + 0x290,0,uVar1,&UNK_10da58f78,unaff_x22 + 0x570,unaff_x22 + 0x598
                       );
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_asyncLet_get_110350060)
              (unaff_x22 + 0x10,unaff_x22 + 0x590,FUN_1020ac9d0,unaff_x22 + 0x510);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001020ac924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020ac9d0; end: 1020aca13;  */

void FUN_1020ac9d0(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5d0) = *(undefined8 *)(unaff_x22 + 0x590);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x290,unaff_x22 + 0x598,FUN_1020aca14,unaff_x22 + 0x510);
  return;
}



/* Entry: 1020aca14; end: 1020aca27;  */

void FUN_1020aca14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020aca28,0,0);
  return;
}



/* Entry: 1020aca28; end: 1020acaf3;  */

void FUN_1020aca28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x5c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x598);
  *(undefined8 *)(unaff_x22 + 0x5d8) = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fd64();
  *(long *)(unaff_x22 + 0x5e0) = lVar3;
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x5d0);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_asyncLet_finish_110350058)
              (unaff_x22 + 0x290,unaff_x22 + 0x598,FUN_1020acbe0,unaff_x22 + 0x510);
    return;
  }
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x5e8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020acaf4,uVar1,uVar2);
  return;
}



/* Entry: 1020acaf4; end: 1020acb6b;  */

void FUN_1020acaf4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x5d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x5d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x5b8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x5e8));
  FUN_1020acf8c(uVar3,uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x290,unaff_x22 + 0x598,FUN_1020acb6c,unaff_x22 + 0x510);
  return;
}



/* Entry: 1020acb6c; end: 1020acbab;  */

void FUN_1020acb6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1020acb80,0,0);
  return;
}



/* Entry: 1020acbac; end: 1020acbdf;  */

void FUN_1020acbac(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x5c0));
                    /* WARNING: Could not recover jumptable at 0x0001020acbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020acbe0; end: 1020acc1f;  */

void FUN_1020acbe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1020acbf4,0,0);
  return;
}



/* Entry: 1020acc20; end: 1020acc53;  */

void FUN_1020acc20(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x5c0));
                    /* WARNING: Could not recover jumptable at 0x0001020acc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020acc54; end: 1020acc6f;  */

void FUN_1020acc54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020acc70,0,0);
  return;
}



/* Entry: 1020acc70; end: 1020acd2f;  */

void FUN_1020acc70(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar3 = &uStack_50;
  lVar5 = *(long *)(unaff_x22 + 0x60);
  puVar4 = *(undefined **)(lVar5 + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    func_0x000107c61434(lVar5);
    puVar2 = puVar4;
    func_0x00010109b448(puVar4,0);
    func_0x00010109b930(&uStack_50,puVar2 + 0x20,puVar4,lVar5);
    func_0x000100ce0d8c(uStack_50,uStack_48,uStack_40,uStack_38,uStack_30);
    if (puVar3 != (undefined8 *)puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020acce0);
      (*pcVar1)();
    }
  }
  *(undefined **)(unaff_x22 + 0x68) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1020acd30;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_1020ad0ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1020acd30; end: 1020acda3;  */

void FUN_1020acd30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1020acd70,0,0);
  return;
}



/* Entry: 1020acda4; end: 1020acdbf;  */

void FUN_1020acda4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020acdc0,0,0);
  return;
}



/* Entry: 1020acdc0; end: 1020acefb;  */

void FUN_1020acdc0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = *(long *)(unaff_x22 + 0x68);
  puVar6 = *(undefined8 **)(lVar7 + 0x10);
  puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar6 != (undefined8 *)0x0) {
    func_0x000107c61434(lVar7);
    puVar2 = puVar6;
    func_0x00010109b448(puVar6,0);
    puVar3 = &uStack_68;
    func_0x00010109b930(puVar3,puVar2 + 4,puVar6,lVar7);
    func_0x000100ce0d8c(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
    if (puVar3 != puVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020ace38);
      (*pcVar1)();
    }
  }
  *(undefined8 **)(unaff_x22 + 0x70) = puVar2;
  lVar8 = *(long *)(unaff_x22 + 0x60);
  pcVar4 = "fetchLensMetadata(_:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x22 + 0x78) = pcVar4;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1020acefc;
  lVar7 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar7,0);
  func_0x000103b90f24(0);
  uVar9 = *(undefined8 *)(lVar8 + 0x38);
  puVar5 = &UNK_1104c6c20;
  func_0x000107c613fc(&UNK_1104c6c20,0x18,7);
  *(long *)(puVar5 + 0x10) = lVar7;
  func_0x000103b8f19c(puVar2,uVar9,pcVar4,FUN_1020af92c,puVar5);
  func_0x000107c61574(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1020acefc; end: 1020acf3b;  */

void FUN_1020acefc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020acf3c,0,0);
  return;
}



/* Entry: 1020acf3c; end: 1020acf8b;  */

void FUN_1020acf3c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x58);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(uVar1);
  *puVar2 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001020acf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020acf8c; end: 1020ad0eb;  */

/* WARNING: Removing unreachable block (ram,0x0001020ad0d8) */

void FUN_1020acf8c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  ulong auStack_58 [3];
  
  uVar1 = param_1;
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    func_0x000107c61428(unaff_x20 + 0x78,auStack_58,0x21,0);
    func_0x000107c61434(param_2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
    func_0x000107c61558(uVar2);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x78);
    *(undefined8 *)(unaff_x20 + 0x78) = 0x8000000000000000;
    FUN_1020af428(param_2,0x1020ae890,0,uVar2,&uStack_60);
    func_0x000107c6142c(param_2);
    *(undefined8 *)(unaff_x20 + 0x78) = uStack_60;
    func_0x000107c614a8(auStack_58);
    if (param_3 != 0) {
      func_0x000107c61428(unaff_x20 + 0x80,auStack_58,0x21,0);
      func_0x000107c61434(param_3);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
      func_0x000107c61558(uVar2);
      uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
      *(undefined8 *)(unaff_x20 + 0x80) = 0x8000000000000000;
      FUN_1020af6d4(param_3,FUN_1020ae85c,0,uVar2,&uStack_60);
      func_0x000107c6142c(param_3);
      *(undefined8 *)(unaff_x20 + 0x80) = uStack_60;
      func_0x000107c614a8(auStack_58);
    }
    FUN_1020ac2b4();
    auStack_58[0] = param_1;
    func_0x000100087c34(auStack_58);
    func_0x000107c6142c(param_1);
  }
  return;
}



/* Entry: 1020ad0ec; end: 1020ad253;  */

void FUN_1020ad0ec(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000295c4(0);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar2 = lVar6;
  func_0x000107c5fff0(lVar6);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  puVar3 = &UNK_1104c6c48;
  func_0x000107c613fc(&UNK_1104c6c48,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_1020af95c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f6151c;
  puStack_68 = &UNK_1104c6c60;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c5b4f8(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1020ad254; end: 1020ad59f;  */

void FUN_1020ad254(undefined *param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong uStack_80;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1020a9bb0();
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar14 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar14 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar14 == (undefined *)0x0) {
    func_0x000107c61434(param_1);
  }
  else {
    func_0x000107c61434(param_1);
    lVar17 = 4;
    do {
      uVar12 = lVar17 - 4;
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad534);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(puVar4 + lVar17 * 8);
        func_0x000107c61174();
        puVar9 = param_2;
      }
      else {
        uVar7 = uVar12;
        puVar9 = puVar4;
        func_0x00010103193c();
      }
      puVar1 = (undefined *)(lVar17 - 3);
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad52c);
        (*pcVar5)();
      }
      uVar12 = uVar7;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar12 == 0) {
        func_0x000107c61170(uVar7);
        param_2 = puVar9;
      }
      else {
        uVar15 = uVar12;
        func_0x000107c5faec();
        puVar8 = puVar9;
        func_0x000107c61170(uVar12);
        uVar12 = uVar7;
        func_0x000107c42120();
        func_0x000107c61180();
        if (uVar12 == 0) {
          uVar16 = 0;
          puVar18 = (undefined *)0x0;
          puVar13 = puVar8;
        }
        else {
          uVar16 = uVar12;
          func_0x000107c5faec();
          puVar13 = puVar8;
          func_0x000107c61170(uVar12);
          puVar18 = puVar8;
        }
        uVar12 = uVar7;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        if (uVar12 == 0) {
LAB_1020ad3dc:
          uStack_80 = 0;
          puVar13 = (undefined *)0x0;
        }
        else {
          uVar11 = uVar12;
          func_0x000107c3e978();
          func_0x000107c61180();
          func_0x000107c61170(uVar12);
          if (uVar11 == 0) goto LAB_1020ad3dc;
          uStack_80 = uVar11;
          func_0x000107c5faec();
          func_0x000107c61170(uVar11);
        }
        puVar8 = puVar6;
        func_0x000107c61558();
        uVar12 = uVar15;
        puVar10 = puVar9;
        func_0x000100029284();
        uVar11 = (ulong)~(uint)puVar10 & 1;
        lVar2 = *(long *)(puVar6 + 0x10) + uVar11;
        if (SCARRY8(*(long *)(puVar6 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad530);
          (*pcVar5)();
        }
        if (*(long *)(puVar6 + 0x18) < lVar2) {
          func_0x0001020a7c84(lVar2,puVar8);
          uVar12 = uVar15;
          param_2 = puVar9;
          func_0x000100029284();
          if (((uint)puVar10 & 1) != ((uint)param_2 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad5a0);
            (*pcVar5)();
          }
        }
        else {
          param_2 = puVar10;
          if (((ulong)puVar8 & 1) == 0) {
            FUN_1020a6b3c();
          }
        }
        if (((ulong)puVar10 & 1) == 0) {
          *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar6 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar12 * 0x10);
          *puVar3 = uVar15;
          puVar3[1] = (ulong)puVar9;
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar12 * 0x20);
          *puVar3 = uVar16;
          puVar3[1] = (ulong)puVar18;
          puVar3[2] = uStack_80;
          puVar3[3] = (ulong)puVar13;
          func_0x000107c61170(uVar7);
          if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad538);
            (*pcVar5)();
          }
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        }
        else {
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar12 * 0x20);
          uVar12 = puVar3[1];
          uVar15 = puVar3[3];
          *puVar3 = uVar16;
          puVar3[1] = (ulong)puVar18;
          puVar3[2] = uStack_80;
          puVar3[3] = (ulong)puVar13;
          func_0x000107c6142c(puVar9);
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar12);
          func_0x000107c6142c(uVar15);
        }
      }
      lVar17 = lVar17 + 1;
    } while (puVar1 != puVar14);
  }
  func_0x000107c6142c(puVar4);
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 1020ad5a0; end: 1020ad72f;  */

void FUN_1020ad5a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_78,0);
  func_0x000107c5fb58(auStack_78,uVar1,uVar3);
  func_0x000107c5fb58(auStack_78,uVar2,uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1020ad730; end: 1020ad82b;  */

void FUN_1020ad730(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    func_0x0001020a9ac4();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,&UNK_11068b1a8);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_1020ad82c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_1020adcb0(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1020ad82c; end: 1020adcaf;  */

void FUN_1020ad82c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  double *pdVar18;
  long unaff_x21;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  double dVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  double dVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  double dVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar9 = 0;
    do {
      puVar7 = puStack_58;
      lVar19 = lVar9 + 1;
      if (lVar19 < lVar10) {
        lVar8 = *param_3;
        dVar22 = *(double *)(lVar8 + lVar19 * 0xa0 + 0x58);
        lVar19 = lVar8 + lVar9 * 0xa0;
        dVar35 = *(double *)(lVar19 + 0x58);
        lVar16 = lVar9 + 2;
        pdVar18 = (double *)(lVar19 + 0x198);
        dVar48 = dVar22;
        do {
          lVar17 = lVar16;
          lVar19 = lVar10;
          if (lVar10 == lVar17) break;
          dVar51 = *pdVar18;
          bVar4 = dVar51 <= dVar48;
          lVar16 = lVar17 + 1;
          pdVar18 = pdVar18 + 0x14;
          dVar48 = dVar51;
          lVar19 = lVar17;
        } while (dVar35 < dVar22 != bVar4);
        if (dVar35 < dVar22) {
          if (lVar19 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc84);
            (*pcVar3)();
          }
          if (lVar9 < lVar19) {
            puVar15 = (undefined8 *)(lVar8 + lVar9 * 0xa0);
            lVar16 = lVar19;
            lVar10 = lVar9;
            puVar12 = (undefined8 *)(lVar8 + lVar19 * 0xa0);
            do {
              puVar11 = puVar12 + -0x14;
              lVar16 = lVar16 + -1;
              if (lVar10 != lVar16) {
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adca4);
                  (*pcVar3)();
                }
                uVar29 = puVar15[0xd];
                uVar23 = puVar15[0xc];
                uVar42 = puVar15[0xf];
                uVar36 = puVar15[0xe];
                uVar30 = puVar15[0x11];
                uVar24 = puVar15[0x10];
                uVar43 = puVar15[0x13];
                uVar37 = puVar15[0x12];
                uVar31 = puVar15[5];
                uVar25 = puVar15[4];
                uVar44 = puVar15[7];
                uVar38 = puVar15[6];
                uVar32 = puVar15[9];
                uVar26 = puVar15[8];
                uVar45 = puVar15[0xb];
                uVar39 = puVar15[10];
                uVar33 = puVar15[1];
                uVar27 = *puVar15;
                uVar46 = puVar15[3];
                uVar40 = puVar15[2];
                uVar34 = puVar12[-0x13];
                uVar28 = *puVar11;
                uVar47 = puVar12[-0x11];
                uVar41 = puVar12[-0x12];
                uVar50 = puVar12[-0xf];
                uVar49 = puVar12[-0x10];
                uVar53 = puVar12[-0xd];
                uVar52 = puVar12[-0xe];
                uVar55 = puVar12[-0xb];
                uVar54 = puVar12[-0xc];
                uVar57 = puVar12[-9];
                uVar56 = puVar12[-10];
                uVar59 = puVar12[-7];
                uVar58 = puVar12[-8];
                uVar61 = puVar12[-5];
                uVar60 = puVar12[-6];
                uVar62 = puVar12[-4];
                uVar64 = puVar12[-1];
                uVar63 = puVar12[-2];
                puVar15[0x11] = puVar12[-3];
                puVar15[0x10] = uVar62;
                puVar15[0x13] = uVar64;
                puVar15[0x12] = uVar63;
                puVar15[0xd] = uVar59;
                puVar15[0xc] = uVar58;
                puVar15[0xf] = uVar61;
                puVar15[0xe] = uVar60;
                puVar15[9] = uVar55;
                puVar15[8] = uVar54;
                puVar15[0xb] = uVar57;
                puVar15[10] = uVar56;
                puVar15[5] = uVar50;
                puVar15[4] = uVar49;
                puVar15[7] = uVar53;
                puVar15[6] = uVar52;
                puVar15[1] = uVar34;
                *puVar15 = uVar28;
                puVar15[3] = uVar47;
                puVar15[2] = uVar41;
                puVar12[-7] = uVar29;
                puVar12[-8] = uVar23;
                puVar12[-5] = uVar42;
                puVar12[-6] = uVar36;
                puVar12[-3] = uVar30;
                puVar12[-4] = uVar24;
                puVar12[-1] = uVar43;
                puVar12[-2] = uVar37;
                puVar12[-0xf] = uVar31;
                puVar12[-0x10] = uVar25;
                puVar12[-0xd] = uVar44;
                puVar12[-0xe] = uVar38;
                puVar12[-0xb] = uVar32;
                puVar12[-0xc] = uVar26;
                puVar12[-9] = uVar45;
                puVar12[-10] = uVar39;
                puVar12[-0x13] = uVar33;
                *puVar11 = uVar27;
                puVar12[-0x11] = uVar46;
                puVar12[-0x12] = uVar40;
              }
              lVar10 = lVar10 + 1;
              puVar15 = puVar15 + 0x14;
              puVar12 = puVar11;
            } while (lVar10 < lVar16);
            lVar10 = param_3[1];
          }
        }
      }
      lVar16 = lVar19;
      if (lVar19 < lVar10) {
        if (SBORROW8(lVar19,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc80);
          (*pcVar3)();
        }
        if (lVar19 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc88);
            (*pcVar3)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar10 <= lVar9 + param_4) {
            lVar8 = lVar10;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc8c);
            (*pcVar3)();
          }
          if (lVar19 != lVar8) {
            lVar13 = *param_3;
            puVar15 = (undefined8 *)(lVar13 + lVar19 * 0xa0);
            lVar10 = lVar9 - lVar19;
            lVar17 = lVar10;
            puVar12 = puVar15;
LAB_1020ada2c:
            do {
              if ((double)puVar15[-9] < (double)puVar15[0xb]) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc90);
                  (*pcVar3)();
                }
                puVar11 = puVar15 + -0x14;
                uVar28 = puVar15[0xd];
                uVar23 = puVar15[0xc];
                uVar39 = puVar15[0xf];
                uVar33 = puVar15[0xe];
                uVar29 = puVar15[0x11];
                uVar24 = puVar15[0x10];
                uVar40 = puVar15[0x13];
                uVar34 = puVar15[0x12];
                uVar30 = puVar15[5];
                uVar25 = puVar15[4];
                uVar41 = puVar15[7];
                uVar36 = puVar15[6];
                uVar31 = puVar15[9];
                uVar26 = puVar15[8];
                uVar42 = puVar15[0xb];
                uVar37 = puVar15[10];
                uVar32 = puVar15[1];
                uVar27 = *puVar15;
                uVar43 = puVar15[3];
                uVar38 = puVar15[2];
                puVar15[0xd] = puVar15[-7];
                puVar15[0xc] = puVar15[-8];
                puVar15[0xf] = puVar15[-5];
                puVar15[0xe] = puVar15[-6];
                puVar15[0x11] = puVar15[-3];
                puVar15[0x10] = puVar15[-4];
                puVar15[0x13] = puVar15[-1];
                puVar15[0x12] = puVar15[-2];
                puVar15[5] = puVar15[-0xf];
                puVar15[4] = puVar15[-0x10];
                puVar15[7] = puVar15[-0xd];
                puVar15[6] = puVar15[-0xe];
                puVar15[9] = puVar15[-0xb];
                puVar15[8] = puVar15[-0xc];
                puVar15[0xb] = puVar15[-9];
                puVar15[10] = puVar15[-10];
                puVar15[1] = puVar15[-0x13];
                *puVar15 = *puVar11;
                puVar15[3] = puVar15[-0x11];
                puVar15[2] = puVar15[-0x12];
                puVar15[-7] = uVar28;
                puVar15[-8] = uVar23;
                puVar15[-5] = uVar39;
                puVar15[-6] = uVar33;
                puVar15[-3] = uVar29;
                puVar15[-4] = uVar24;
                puVar15[-1] = uVar40;
                puVar15[-2] = uVar34;
                puVar15[-0xf] = uVar30;
                puVar15[-0x10] = uVar25;
                puVar15[-0xd] = uVar41;
                puVar15[-0xe] = uVar36;
                puVar15[-0xb] = uVar31;
                puVar15[-0xc] = uVar26;
                puVar15[-9] = uVar42;
                puVar15[-10] = uVar37;
                puVar15[-0x13] = uVar32;
                *puVar11 = uVar27;
                puVar15[-0x11] = uVar43;
                puVar15[-0x12] = uVar38;
                bVar4 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                puVar15 = puVar11;
                if (bVar4) goto LAB_1020ada2c;
              }
              lVar19 = lVar19 + 1;
              puVar15 = puVar12 + 0x14;
              lVar10 = lVar17 + -1;
              lVar16 = lVar8;
              lVar17 = lVar10;
              puVar12 = puVar15;
            } while (lVar19 != lVar8);
          }
        }
      }
      if (lVar16 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc70);
        (*pcVar3)();
      }
      puVar5 = puStack_58;
      func_0x000107c61558();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar21 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar21) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        func_0x0001000a91e0(puVar7,uVar21 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar21 + 1;
      *(long *)(puVar7 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar21 * 0x10 + 0x28) = lVar16;
      puStack_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adca8);
        (*pcVar3)();
      }
      FUN_1020add98(&puStack_58,*param_1,param_3);
      puVar7 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1020adc40;
      lVar10 = param_3[1];
      lVar9 = lVar16;
    } while (lVar16 < lVar10);
  }
  puVar7 = puStack_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adcb0);
    (*pcVar3)();
  }
  puVar5 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar20 = (ulong *)(puVar7 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adcac);
      (*pcVar3)();
    }
    plVar1 = (long *)(puVar7 + uVar21 * 0x10);
    lVar19 = *plVar1;
    puVar2 = puVar20 + uVar21 * 2;
    uVar14 = puVar2[1];
    FUN_1020ae00c(lVar9 + lVar19 * 0xa0,lVar9 + *puVar2 * 0xa0,lVar9 + uVar14 * 0xa0,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc74);
      (*pcVar3)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc78);
      (*pcVar3)();
    }
    *plVar1 = lVar19;
    plVar1[1] = uVar14;
    uVar14 = *puVar20;
    lVar9 = uVar14 - uVar21;
    if (uVar14 < uVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020adc7c);
      (*pcVar3)();
    }
    uVar21 = uVar14 - 1;
    func_0x000107c610b8(puVar2,puVar2 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_1020adc40:
  func_0x000107c6142c(puVar7);
  return;
}



/* Entry: 1020adcb0; end: 1020add97;  */

void FUN_1020adcb0(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar4 = (undefined8 *)(lVar3 + param_3 * 0xa0);
    param_1 = param_1 - param_3;
    lVar6 = param_1;
    puVar5 = puVar4;
LAB_1020adcf4:
    do {
      if ((double)puVar4[-9] < (double)puVar4[0xb]) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1020add98);
          (*pcVar1)();
        }
        puVar7 = puVar4 + -0x14;
        uVar13 = puVar4[0xd];
        uVar8 = puVar4[0xc];
        uVar23 = puVar4[0xf];
        uVar18 = puVar4[0xe];
        uVar14 = puVar4[0x11];
        uVar9 = puVar4[0x10];
        uVar24 = puVar4[0x13];
        uVar19 = puVar4[0x12];
        uVar15 = puVar4[5];
        uVar10 = puVar4[4];
        uVar25 = puVar4[7];
        uVar20 = puVar4[6];
        uVar16 = puVar4[9];
        uVar11 = puVar4[8];
        uVar26 = puVar4[0xb];
        uVar21 = puVar4[10];
        uVar17 = puVar4[1];
        uVar12 = *puVar4;
        uVar27 = puVar4[3];
        uVar22 = puVar4[2];
        puVar4[0xd] = puVar4[-7];
        puVar4[0xc] = puVar4[-8];
        puVar4[0xf] = puVar4[-5];
        puVar4[0xe] = puVar4[-6];
        puVar4[0x11] = puVar4[-3];
        puVar4[0x10] = puVar4[-4];
        puVar4[0x13] = puVar4[-1];
        puVar4[0x12] = puVar4[-2];
        puVar4[5] = puVar4[-0xf];
        puVar4[4] = puVar4[-0x10];
        puVar4[7] = puVar4[-0xd];
        puVar4[6] = puVar4[-0xe];
        puVar4[9] = puVar4[-0xb];
        puVar4[8] = puVar4[-0xc];
        puVar4[0xb] = puVar4[-9];
        puVar4[10] = puVar4[-10];
        puVar4[1] = puVar4[-0x13];
        *puVar4 = *puVar7;
        puVar4[3] = puVar4[-0x11];
        puVar4[2] = puVar4[-0x12];
        puVar4[-7] = uVar13;
        puVar4[-8] = uVar8;
        puVar4[-5] = uVar23;
        puVar4[-6] = uVar18;
        puVar4[-3] = uVar14;
        puVar4[-4] = uVar9;
        puVar4[-1] = uVar24;
        puVar4[-2] = uVar19;
        puVar4[-0xf] = uVar15;
        puVar4[-0x10] = uVar10;
        puVar4[-0xd] = uVar25;
        puVar4[-0xe] = uVar20;
        puVar4[-0xb] = uVar16;
        puVar4[-0xc] = uVar11;
        puVar4[-9] = uVar26;
        puVar4[-10] = uVar21;
        puVar4[-0x13] = uVar17;
        *puVar7 = uVar12;
        puVar4[-0x11] = uVar27;
        puVar4[-0x12] = uVar22;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar4 = puVar7;
        if (bVar2) goto LAB_1020adcf4;
      }
      param_3 = param_3 + 1;
      puVar4 = puVar5 + 0x14;
      param_1 = lVar6 + -1;
      lVar6 = param_1;
      puVar5 = puVar4;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1020add98; end: 1020ae00b;  */

undefined8 FUN_1020add98(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar11 = *param_1;
  if (1 < *(ulong *)(uVar11 + 0x10)) {
    uVar10 = uVar11;
    func_0x000107c61558();
    if ((uVar10 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar11;
    lVar1 = uVar11 + 0x20;
    uVar10 = *(ulong *)(uVar11 + 0x10);
    do {
      uVar13 = uVar10 - 1;
      if (uVar10 < 4) {
        if (uVar10 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar11 + 0x28),*(long *)(uVar11 + 0x20));
          lVar8 = *(long *)(uVar11 + 0x28) - *(long *)(uVar11 + 0x20);
          goto LAB_1020ade70;
        }
        if (uVar10 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfec);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1020aded0:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfdc);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar13 * 0x10);
        lVar8 = *plVar2;
        lVar12 = plVar2[1];
        if (SBORROW8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfe4);
          (*pcVar6)();
        }
        uVar14 = uVar13;
        if (lVar12 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar10 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfc4);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfc8);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar11 + uVar10 * 0x10);
        lVar12 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar12;
        if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfd0);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfd8);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1020ade70:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfcc);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar11 + uVar10 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfd4);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar12 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar12;
          if (SBORROW8(lVar4,lVar12)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfe0);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfe8);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1020aded0;
          uVar14 = uVar10 - 2;
          if (lVar5 <= lVar8) {
            uVar14 = uVar13;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar13 * 0x10);
          lVar9 = *plVar2;
          lVar12 = plVar2[1];
          if (SBORROW8(lVar12,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adff0);
            (*pcVar6)();
          }
          uVar14 = uVar10 - 2;
          if (lVar12 - lVar9 <= lVar8) {
            uVar14 = uVar13;
          }
        }
      }
      uVar13 = uVar14 - 1;
      if (uVar10 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfb4);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar11;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020ae00c);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar13 * 0x10);
      lVar12 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar14 * 0x10);
      lVar9 = plVar3[1];
      FUN_1020ae00c(lVar8 + lVar12 * 0xa0,lVar8 + *plVar3 * 0xa0,lVar8 + lVar9 * 0xa0,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfb8);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfbc);
        (*pcVar6)();
      }
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      if (uVar13 <= uVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020adfc0);
        (*pcVar6)();
      }
      uVar10 = uVar13 - 1;
      func_0x000107c610b8(plVar3,plVar3 + 2,(uVar10 - uVar14) * 0x10);
      *(ulong *)(uVar11 + 0x10) = uVar10;
    } while (2 < uVar13);
    *param_1 = uVar11;
  }
  return 1;
}



/* Entry: 1020ae00c; end: 1020ae2a3;  */

undefined8
FUN_1020ae00c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0xa0;
  lVar2 = ((long)param_3 - (long)param_2) / 0xa0;
  if (lVar1 < lVar2) {
    if ((param_4 < param_1) || ((param_1 + lVar1 * 0x14 <= param_4 || (param_4 != param_1)))) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0xa0);
    }
    puVar4 = param_4 + lVar1 * 0x14;
    puVar5 = param_1;
    if (0x9f < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if ((double)param_2[0xb] <= (double)param_4[0xb]) {
          puVar6 = param_4 + 0x14;
          puVar3 = param_4;
        }
        else {
          puVar6 = param_4;
          puVar3 = param_2;
          param_2 = param_2 + 0x14;
        }
        param_4 = puVar6;
        if (puVar5 != puVar3) {
          uVar8 = puVar3[1];
          uVar7 = *puVar3;
          uVar10 = puVar3[3];
          uVar9 = puVar3[2];
          uVar12 = puVar3[5];
          uVar11 = puVar3[4];
          uVar14 = puVar3[7];
          uVar13 = puVar3[6];
          uVar16 = puVar3[9];
          uVar15 = puVar3[8];
          uVar18 = puVar3[0xb];
          uVar17 = puVar3[10];
          uVar20 = puVar3[0xd];
          uVar19 = puVar3[0xc];
          uVar22 = puVar3[0xf];
          uVar21 = puVar3[0xe];
          uVar23 = puVar3[0x10];
          uVar25 = puVar3[0x13];
          uVar24 = puVar3[0x12];
          puVar5[0x11] = puVar3[0x11];
          puVar5[0x10] = uVar23;
          puVar5[0x13] = uVar25;
          puVar5[0x12] = uVar24;
          puVar5[0xd] = uVar20;
          puVar5[0xc] = uVar19;
          puVar5[0xf] = uVar22;
          puVar5[0xe] = uVar21;
          puVar5[9] = uVar16;
          puVar5[8] = uVar15;
          puVar5[0xb] = uVar18;
          puVar5[10] = uVar17;
          puVar5[5] = uVar12;
          puVar5[4] = uVar11;
          puVar5[7] = uVar14;
          puVar5[6] = uVar13;
          puVar5[1] = uVar8;
          *puVar5 = uVar7;
          puVar5[3] = uVar10;
          puVar5[2] = uVar9;
        }
        puVar5 = puVar5 + 0x14;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 0x14 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0xa0);
    }
    puVar3 = param_4 + lVar2 * 0x14;
    puVar4 = puVar3;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0x9f < (long)param_3 - (long)param_2)) {
      do {
        while (puVar6 = param_3 + -0x14, (double)param_2[-9] < (double)puVar3[-9]) {
          puVar5 = param_2 + -0x14;
          if (param_3 != param_2) {
            uVar8 = param_2[-0x13];
            uVar7 = *puVar5;
            uVar10 = param_2[-0x11];
            uVar9 = param_2[-0x12];
            uVar12 = param_2[-0xf];
            uVar11 = param_2[-0x10];
            uVar14 = param_2[-0xd];
            uVar13 = param_2[-0xe];
            uVar16 = param_2[-0xb];
            uVar15 = param_2[-0xc];
            uVar18 = param_2[-9];
            uVar17 = param_2[-10];
            uVar20 = param_2[-7];
            uVar19 = param_2[-8];
            uVar22 = param_2[-5];
            uVar21 = param_2[-6];
            uVar23 = param_2[-4];
            uVar25 = param_2[-1];
            uVar24 = param_2[-2];
            param_3[-3] = param_2[-3];
            param_3[-4] = uVar23;
            param_3[-1] = uVar25;
            param_3[-2] = uVar24;
            param_3[-7] = uVar20;
            param_3[-8] = uVar19;
            param_3[-5] = uVar22;
            param_3[-6] = uVar21;
            param_3[-0xb] = uVar16;
            param_3[-0xc] = uVar15;
            param_3[-9] = uVar18;
            param_3[-10] = uVar17;
            param_3[-0xf] = uVar12;
            param_3[-0x10] = uVar11;
            param_3[-0xd] = uVar14;
            param_3[-0xe] = uVar13;
            param_3[-0x13] = uVar8;
            *puVar6 = uVar7;
            param_3[-0x11] = uVar10;
            param_3[-0x12] = uVar9;
          }
          puVar4 = puVar3;
          if ((puVar5 <= param_1) || (param_3 = puVar6, param_2 = puVar5, puVar3 <= param_4))
          goto LAB_1020ae240;
        }
        puVar4 = puVar3 + -0x14;
        if (param_3 != puVar3) {
          uVar8 = puVar3[-0x13];
          uVar7 = *puVar4;
          uVar10 = puVar3[-0x11];
          uVar9 = puVar3[-0x12];
          uVar12 = puVar3[-0xf];
          uVar11 = puVar3[-0x10];
          uVar14 = puVar3[-0xd];
          uVar13 = puVar3[-0xe];
          uVar16 = puVar3[-0xb];
          uVar15 = puVar3[-0xc];
          uVar18 = puVar3[-9];
          uVar17 = puVar3[-10];
          uVar20 = puVar3[-7];
          uVar19 = puVar3[-8];
          uVar22 = puVar3[-5];
          uVar21 = puVar3[-6];
          uVar23 = puVar3[-4];
          uVar25 = puVar3[-1];
          uVar24 = puVar3[-2];
          param_3[-3] = puVar3[-3];
          param_3[-4] = uVar23;
          param_3[-1] = uVar25;
          param_3[-2] = uVar24;
          param_3[-7] = uVar20;
          param_3[-8] = uVar19;
          param_3[-5] = uVar22;
          param_3[-6] = uVar21;
          param_3[-0xb] = uVar16;
          param_3[-0xc] = uVar15;
          param_3[-9] = uVar18;
          param_3[-10] = uVar17;
          param_3[-0xf] = uVar12;
          param_3[-0x10] = uVar11;
          param_3[-0xd] = uVar14;
          param_3[-0xe] = uVar13;
          param_3[-0x13] = uVar8;
          *puVar6 = uVar7;
          param_3[-0x11] = uVar10;
          param_3[-0x12] = uVar9;
        }
        puVar3 = puVar4;
        puVar5 = param_2;
        param_3 = puVar6;
      } while (param_4 < puVar4);
    }
  }
LAB_1020ae240:
  lVar1 = ((long)puVar4 - (long)param_4) / 0xa0;
  if ((puVar5 != param_4) || (param_4 + lVar1 * 0x14 <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,lVar1 * 0xa0);
  }
  return 1;
}



/* Entry: 1020ae2a4; end: 1020ae62b;  */

/* WARNING: Removing unreachable block (ram,0x0001020ae5d8) */
/* WARNING: Removing unreachable block (ram,0x0001020ae5e8) */

undefined * FUN_1020ae2a4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uStack_100;
  long lStack_f8;
  undefined *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  ulong uStack_c8;
  long *plStack_c0;
  long lStack_98;
  ulong *puStack_90;
  ulong uStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar17 = (ulong *)(param_1 + 0x40);
    uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar18 = 0xffffffffffffffff;
    if (-uVar15 < 0x40) {
      uVar18 = ~(-1L << (-uVar15 & 0x3f));
    }
    uVar18 = uVar18 & *puVar17;
    puVar1 = param_2 + 0x38;
    func_0x000107c61434();
    lVar7 = 0;
    uStack_100 = ~uVar15;
    lVar6 = 0;
    do {
      while (uVar18 != 0) {
        uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 - 1 & uVar18;
        puVar3 = (ulong *)(*(long *)(param_1 + 0x30) +
                           LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) * 0x10 + lVar7 * 0x400);
        uVar13 = *puVar3;
        uVar4 = puVar3[1];
        lStack_f8 = lVar7;
        lStack_98 = param_1;
        puStack_90 = puVar17;
        uStack_88 = uStack_100;
        lStack_80 = lVar7;
        uStack_78 = uVar18;
        func_0x000107c6068c(auStack_e0,*(undefined8 *)(param_2 + 0x28));
        func_0x000107c61434(uVar4);
        puVar10 = auStack_e0;
        func_0x000107c5fb58(puVar10,uVar13,uVar4);
        func_0x000107c606a8();
        uVar14 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar16 = (ulong)puVar10 & (uVar14 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
          do {
            puVar3 = (ulong *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
            uVar11 = *puVar3;
            uVar5 = puVar3[1];
            if ((uVar11 == uVar13 && uVar5 == uVar4) ||
               (func_0x000107c605b8(uVar11,uVar5,uVar13,uVar4,0), (uVar11 & 1) != 0)) {
              func_0x000107c6142c(uVar4);
              uVar15 = (1L << ((ulong)(byte)param_2[0x20] & 0x3f)) + 0x3fU >> 6;
              plStack_c0 = &lStack_98;
              uVar18 = uVar15 << 3;
              puStack_d0 = param_2;
              uStack_c8 = uVar16;
              if ((param_2[0x20] & 0x3f) < 0xe) {
LAB_1020ae464:
                (*(code *)PTR____chkstk_darwin_11034bd40)();
                puVar12 = (undefined *)((long)&uStack_100 - (uVar18 + 0xf & 0x1ffffffffffffff0));
                func_0x000107c610b4(puVar12,puVar1);
                FUN_1020ae62c(puVar12,uVar15,param_2,uVar16,&lStack_98);
              }
              else {
                iVar9 = 2;
                func_0x000100029b9c(2,0xf,4,0);
                if ((iVar9 != 0) &&
                   (uVar13 = uVar18, func_0x000107c61594(uVar18,8), (uVar13 & 1) != 0))
                goto LAB_1020ae464;
                func_0x000107c6158c(uVar18,0xffffffffffffffff);
                if (uVar18 == 0) goto LAB_1020ae5d4;
                func_0x000107c610b4();
                FUN_1020af980(&puStack_e8,uVar18,uVar15);
                func_0x000107c61590(uVar18,0xffffffffffffffff,0xffffffffffffffff);
                puVar12 = puStack_e8;
              }
              func_0x000107c61574(param_2);
              func_0x000100ce0d8c(lStack_98,puStack_90,uStack_88,lStack_80,uStack_78);
              param_2 = puVar12;
              goto LAB_1020ae508;
            }
            uVar16 = uVar16 + 1 & ~uVar14;
          } while ((*(ulong *)(puVar1 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(uVar4);
        lVar7 = lStack_f8;
        lVar6 = lStack_f8;
      }
      lVar2 = lVar7 + 1;
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1020ae548);
        (*pcVar8)();
      }
      if ((long)(0x3f - uVar15 >> 6) <= lVar2) goto LAB_1020ae4f4;
      uVar18 = puVar17[lVar2];
      lVar7 = lVar2;
    } while( true );
  }
  func_0x000107c61574(param_2);
  param_2 = PTR___swiftEmptySetSingleton_11034f1d8;
LAB_1020ae508:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_2;
  }
  func_0x000107c60e78();
LAB_1020ae5d4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1020ae5d8);
  (*pcVar8)();
LAB_1020ae4f4:
  func_0x000100ce0d8c(param_1,puVar17,uStack_100,lVar6,0);
  goto LAB_1020ae508;
}



/* Entry: 1020ae62c; end: 1020ae85b;  */

void FUN_1020ae62c(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  lVar9 = *(long *)(param_3 + 0x10);
  uVar10 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar10) = *(ulong *)(param_1 + uVar10) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar9 = lVar9 + -1;
  do {
    while( true ) {
      lVar2 = param_5[3];
      uVar10 = param_5[4];
      lVar11 = lVar2;
      if (uVar10 == 0) {
        uVar12 = param_5[2] + 0x40U >> 6;
        lVar13 = lVar2;
        do {
          lVar11 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020ae858);
            (*pcVar4)();
          }
          if ((long)uVar12 <= lVar11) {
            if ((long)uVar12 <= lVar2 + 1) {
              uVar12 = lVar2 + 1;
            }
            param_5[3] = uVar12 - 1;
            param_5[4] = 0;
            func_0x000107c6157c(param_3);
            func_0x0001010aeef0(param_1,param_2,lVar9,param_3);
            return;
          }
          uVar10 = *(ulong *)(param_5[1] + lVar11 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar10 == 0);
      }
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      puVar1 = (ulong *)(*(long *)(*param_5 + 0x30) +
                         LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 0x10 + lVar11 * 0x400);
      uVar12 = *puVar1;
      uVar3 = puVar1[1];
      param_5[3] = lVar11;
      param_5[4] = uVar10 - 1 & uVar10;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_3 + 0x28));
      func_0x000107c61434(uVar3);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar12,uVar3);
      func_0x000107c606a8();
      uVar10 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar16 = (ulong)puVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar15 = uVar16 >> 6;
      uVar14 = 1L << (uVar16 & 0x3f);
      if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) != 0) break;
LAB_1020ae7d8:
      func_0x000107c6142c(uVar3);
    }
    puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar16 * 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    if (uVar7 != uVar12 || uVar8 != uVar3) {
      do {
        func_0x000107c605b8(uVar7,uVar8,uVar12,uVar3,0);
        if ((uVar7 & 1) != 0) break;
        uVar16 = uVar16 + 1 & ~uVar10;
        uVar15 = uVar16 >> 6;
        uVar14 = 1L << (uVar16 & 0x3f);
        if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) == 0) goto LAB_1020ae7d8;
        puVar1 = (ulong *)(*(long *)(param_3 + 0x30) + uVar16 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
      } while ((uVar7 != uVar12) || (uVar8 != uVar3));
    }
    func_0x000107c6142c(uVar3);
    uVar10 = *(ulong *)(param_1 + uVar15 * 8);
    *(ulong *)(param_1 + uVar15 * 8) = uVar10 & (uVar14 ^ 0xffffffffffffffff);
    if ((uVar10 & uVar14) != 0) {
      bVar5 = SBORROW8(lVar9,1);
      lVar9 = lVar9 + -1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020ae85c);
        (*pcVar4)();
      }
      if (lVar9 == 0) {
        return;
      }
    }
  } while( true );
}



/* Entry: 1020ae85c; end: 1020aeab3;  */

void FUN_1020ae85c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x000107c61434(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 1020aeab4; end: 1020aeb6b;  */

undefined8
FUN_1020aeab4(ulong param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
             ulong param_7,long param_8)

{
  if (param_2 == 0) {
    if (param_6 != 0) {
      return 0;
    }
  }
  else {
    if (param_6 == 0) {
      return 0;
    }
    if (((param_1 != param_5) || (param_2 != param_6)) &&
       (func_0x000107c605b8(param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
      return 0;
    }
  }
  if (param_4 == 0) {
    if (param_8 == 0) {
      return 1;
    }
  }
  else if ((param_8 != 0) &&
          (((param_3 == param_7 && (param_4 == param_8)) ||
           (func_0x000107c605b8(param_3,param_4,param_7,param_8,0), (param_3 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1020aeb6c; end: 1020aee7b;  */

/* WARNING: Removing unreachable block (ram,0x0001020aee74) */

undefined * FUN_1020aeb6c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puStack_1d0;
  undefined1 auStack_1c0 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1a8;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_70;
  
  puStack_70 = PTR___swiftEmptySetSingleton_11034f1d8;
  lStack_120 = param_1;
  func_0x000107c61434();
  FUN_1020ad730(&lStack_120);
  lVar3 = lStack_120;
  uVar20 = *(ulong *)(lStack_120 + 0x10);
  if (uVar20 == 0) {
    puStack_1d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1020aee3c:
    puVar18 = puStack_70;
    func_0x000107c61574();
    func_0x000107c6142c(puVar18);
    return puStack_1d0;
  }
  uVar19 = 0;
  lVar1 = lStack_120 + 0x20;
  puStack_1d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1020aebe0:
  plVar22 = (long *)(lVar1 + uVar19 * 0xa0);
  uVar21 = uVar19;
  do {
    if (*(ulong *)(lVar3 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1020aee74);
      (*pcVar16)();
    }
    lVar24 = plVar22[1];
    lVar23 = *plVar22;
    lVar26 = plVar22[3];
    lVar25 = plVar22[2];
    lStack_f8 = plVar22[5];
    lStack_100 = plVar22[4];
    lVar27 = plVar22[7];
    lStack_f0 = plVar22[6];
    lStack_d8 = plVar22[9];
    lVar28 = plVar22[8];
    lStack_c8 = plVar22[0xb];
    lStack_d0 = plVar22[10];
    lStack_b8 = plVar22[0xd];
    lStack_c0 = plVar22[0xc];
    lStack_a8 = plVar22[0xf];
    lStack_b0 = plVar22[0xe];
    lStack_98 = plVar22[0x11];
    lStack_a0 = plVar22[0x10];
    lStack_88 = plVar22[0x13];
    lStack_90 = plVar22[0x12];
    lStack_120 = lVar23;
    lStack_118 = lVar24;
    lStack_110 = lVar25;
    lStack_108 = lVar26;
    lStack_e8 = lVar27;
    lStack_e0 = lVar28;
    if (lVar28 != 0) {
      func_0x000107c61438(lVar24,2);
      func_0x000107c61438(lVar26,2);
      FUN_1016c5c80(&lStack_120,auStack_1c0);
      func_0x000107c61434(lVar28);
      puVar17 = auStack_1c0;
      FUN_1020a8460(puVar17,lVar23,lVar24,lVar25,lVar26);
      func_0x000107c6142c(uStack_1b8);
      func_0x000107c6142c(uStack_1a8);
      lVar15 = lStack_88;
      lVar14 = lStack_90;
      lVar13 = lStack_98;
      lVar12 = lStack_a0;
      lVar11 = lStack_a8;
      lVar10 = lStack_b0;
      lVar9 = lStack_b8;
      lVar8 = lStack_c0;
      lVar7 = lStack_d0;
      lVar6 = lStack_d8;
      lVar5 = lStack_f8;
      lVar4 = lStack_100;
      if (((ulong)puVar17 & 1) != 0) break;
      func_0x000107c6142c(lVar24);
      func_0x000107c6142c(lVar26);
      FUN_1016c2a94(&lStack_120);
      func_0x000107c6142c(lVar28);
    }
    uVar21 = uVar21 + 1;
    plVar22 = plVar22 + 0x14;
    if (uVar20 == uVar21) goto LAB_1020aee3c;
  } while( true );
  func_0x000107c61434();
  func_0x000107c61434(lVar5);
  func_0x000107c61434(lVar7);
  func_0x000107c61434(lVar9);
  func_0x000107c61434(lVar11);
  func_0x000107c61434(lVar13);
  FUN_1016c2a94(&lStack_120);
  puVar18 = puStack_1d0;
  func_0x000107c61558();
  if (((ulong)puVar18 & 1) == 0) {
    plVar22 = (long *)(puStack_1d0 + 0x10);
    puStack_1d0 = (undefined *)0x0;
    FUN_1020a53cc(0,*plVar22 + 1,1);
  }
  uVar2 = *(ulong *)(puStack_1d0 + 0x10);
  if (*(ulong *)(puStack_1d0 + 0x18) >> 1 <= uVar2) {
    puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puStack_1d0 + 0x18));
    FUN_1020a53cc(puVar18,uVar2 + 1,1,puStack_1d0);
    puStack_1d0 = puVar18;
  }
  uVar19 = uVar21 + 1;
  *(ulong *)(puStack_1d0 + 0x10) = uVar2 + 1;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x20) = lVar23;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x28) = lVar24;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x30) = lVar4;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x38) = lVar5;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x40) = lVar25;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x48) = lVar26;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x50) = lVar6;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x58) = lVar7;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x60) = lVar27;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x68) = lVar28;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x70) = lVar8;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x78) = lVar9;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x80) = lVar10;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x88) = lVar11;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x90) = lVar12;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0x98) = lVar13;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0xa0) = lVar14;
  *(long *)(puStack_1d0 + uVar2 * 0x90 + 0xa8) = lVar15;
  if (uVar20 - 1 == uVar21) goto LAB_1020aee3c;
  goto LAB_1020aebe0;
}



/* Entry: 1020aee7c; end: 1020aeef3;  */

void FUN_1020aee7c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x5f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1020aeef4;
  plVar5[0xb7] = lVar4;
  plVar5[0xb6] = lVar2;
  plVar5[0xb5] = lVar3;
  plVar5[0xb4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020ac8a8,0,0);
  return;
}



/* Entry: 1020aeef4; end: 1020aef2f;  */

void FUN_1020aeef4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020aef2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020aef30; end: 1020aef63;  */

undefined8 FUN_1020aef30(undefined8 param_1,undefined8 param_2)

{
  FUN_1020abf24(param_2,param_1,&UNK_1104c6b88);
  return param_2;
}



/* Entry: 1020aef64; end: 1020af28f;  */

void FUN_1020aef64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  ulong uStack_a0;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 == (undefined8 *)0x0) {
LAB_1020aefd4:
    puVar11 = (undefined8 *)param_2[7];
    if (puVar11 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      puVar11 = (undefined8 *)0xe000000000000000;
    }
    else {
      puVar10 = (undefined8 *)param_2[6];
      func_0x000107c61434(puVar11);
    }
  }
  else {
    puVar13 = param_3;
    puVar11 = param_3;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (puVar13 == (undefined8 *)0x0) goto LAB_1020aefd4;
    puVar10 = puVar13;
    func_0x000107c5faec();
    func_0x000107c61170(puVar13);
  }
  uStack_70 = *param_2;
  uStack_68 = param_2[1];
  func_0x000107c61434();
  func_0x000107c5fb78(0x3a,0xe100000000000000);
  uVar4 = param_2[2];
  uVar8 = param_2[3];
  func_0x000107c5fb78();
  uVar3 = uStack_68;
  uVar2 = uStack_70;
  if (param_5 < 2) {
    uStack_88 = 0;
    uStack_a0 = 0xe000000000000000;
  }
  else {
    uVar4 = param_5;
    func_0x000107c61434();
    uStack_a0 = param_5;
    uStack_88 = param_4;
  }
  func_0x0001020ba8f0();
  lVar5 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
  lVar6 = lVar5;
  func_0x00010075bbf0();
  *(long *)(lVar5 + 0x40) = lVar6;
  *(undefined8 **)(lVar5 + 0x20) = puVar10;
  *(undefined8 **)(lVar5 + 0x28) = puVar11;
  uVar9 = uVar8;
  func_0x000107c5fb00(uVar4,uVar8,lVar5);
  func_0x000107c6142c(uVar8);
  if (param_3 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13 = param_3;
    func_0x000107c4045c();
    func_0x000107c61180();
  }
  lVar5 = 0x112e561e0;
  func_0x0001000285a8(0x112e561e0,&UNK_10da58f50);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  if (param_5 == 1) {
    param_6 = 0;
    param_7 = 0;
  }
  else {
    func_0x000107c61434(param_7);
  }
  uVar8 = param_2[9];
  *(undefined8 *)(lVar5 + 0x20) = param_2[8];
  *(undefined8 *)(lVar5 + 0x28) = uVar8;
  *(undefined8 *)(lVar5 + 0x30) = param_6;
  *(undefined8 *)(lVar5 + 0x38) = param_7;
  uStack_68 = param_2[5];
  uStack_70 = param_2[4];
  if (param_3 == (undefined8 *)0x0) {
    func_0x000107c61434();
    puVar11 = &uStack_70;
    func_0x000100402194(puVar11,auStack_80);
    puVar14 = (undefined1 *)0x0;
    puVar10 = (undefined8 *)0x0;
    puVar12 = (undefined1 *)0x0;
    goto LAB_1020af228;
  }
  func_0x000107c61434();
  puVar12 = auStack_80;
  func_0x000100402194(&uStack_70);
  puVar11 = param_3;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  puVar14 = puVar12;
  if (puVar11 == (undefined8 *)0x0) {
LAB_1020af1a8:
    puVar10 = (undefined8 *)0x0;
    puVar12 = (undefined1 *)0x0;
  }
  else {
    puVar7 = puVar11;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(puVar11);
    puVar14 = puVar12;
    if (puVar7 == (undefined8 *)0x0) goto LAB_1020af1a8;
    puVar10 = puVar7;
    func_0x000107c5faec();
    puVar14 = puVar12;
    func_0x000107c61170(puVar7);
  }
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (param_3 != (undefined8 *)0x0) {
    puVar11 = param_3;
    func_0x000107c4f8b8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar11 != (undefined8 *)0x0) {
      param_3 = puVar11;
      func_0x000107c5faec();
      func_0x000107c61170();
      goto LAB_1020af228;
    }
  }
  puVar11 = param_3;
  param_3 = (undefined8 *)0x0;
  puVar14 = (undefined1 *)0x0;
LAB_1020af228:
  func_0x000103f7c3bc();
  uVar8 = *puVar11;
  uVar1 = puVar11[1];
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uStack_88;
  param_1[3] = uStack_a0;
  param_1[4] = uVar4;
  param_1[5] = uVar9;
  param_1[6] = puVar13;
  *(undefined2 *)(param_1 + 7) = 1;
  param_1[8] = lVar5;
  param_1[10] = uStack_68;
  param_1[9] = uStack_70;
  param_1[0xb] = puVar10;
  param_1[0xc] = puVar12;
  param_1[0xd] = param_3;
  param_1[0xe] = puVar14;
  param_1[0xf] = uVar8;
  param_1[0x10] = uVar1;
  func_0x000107c61434();
  return;
}



/* Entry: 1020af290; end: 1020af323;  */

/* WARNING: Possible PIC construction at 0x0001020af2b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020af2b4) */

void FUN_1020af290(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1020af324; end: 1020af387;  */

void FUN_1020af324(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1020af388;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar2;
  plVar3[10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020acc70,0,0);
  return;
}



/* Entry: 1020af388; end: 1020af3c3;  */

void FUN_1020af388(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x0001020af3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020af3c4; end: 1020af427;  */

void FUN_1020af3c4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1020afbcc;
  plVar3[0xc] = lVar1;
  plVar3[0xd] = lVar2;
  plVar3[0xb] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020acdc0,0,0);
  return;
}



/* Entry: 1020af428; end: 1020af6d3;  */

void FUN_1020af428(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uStack_c8;
  ulong uStack_c0;
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
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar20 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar20 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uStack_98 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 0x20);
      uVar19 = puVar1[1];
      uStack_80 = puVar1[1];
      uStack_88 = *puVar1;
      uStack_70 = puVar1[3];
      uStack_78 = puVar1[2];
      uVar21 = puVar1[3];
      uStack_90 = uVar3;
      func_0x000107c61434(uVar21);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar19);
      (*param_2)(&uStack_c8,&uStack_98);
      func_0x000107c6142c(uVar21);
      func_0x000107c6142c(uVar19);
      func_0x000107c6142c(uVar3);
      uVar5 = uStack_a0;
      uVar21 = uStack_a8;
      uVar19 = uStack_b0;
      uVar3 = uStack_b8;
      uVar4 = uStack_c0;
      uVar11 = uStack_c8;
      lVar16 = *param_5;
      uVar9 = uStack_c8;
      uVar10 = uStack_c0;
      func_0x000100029284();
      lVar12 = *(long *)(lVar16 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar17 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1020af6c0);
        (*pcVar6)();
      }
      if (*(long *)(lVar16 + 0x18) < lVar17) {
        func_0x0001020a7c84(lVar17,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar4;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020af6d4);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_1020a6b3c();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar17 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar17 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar4;
        puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 0x20);
        *puVar1 = uVar3;
        puVar1[1] = uVar19;
        puVar1[2] = uVar21;
        puVar1[3] = uVar5;
        if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1020af6c4);
          (*pcVar6)();
        }
        *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        puVar1 = (undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 0x20);
        uVar8 = puVar1[1];
        uVar15 = puVar1[3];
        *puVar1 = uVar3;
        puVar1[1] = uVar19;
        puVar1[2] = uVar21;
        puVar1[3] = uVar5;
        func_0x000107c6142c(uVar8);
        func_0x000107c6142c(uVar15);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1020af6bc);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar20) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar20];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1020af6d4; end: 1020af92b;  */

void FUN_1020af6d4(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar16 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_78 = *puVar1;
      uVar3 = puVar1[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar3;
      uStack_68 = uVar15;
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar15);
      (*param_2)(&uStack_90,&uStack_78);
      func_0x000107c61170(uVar15);
      func_0x000107c6142c(uVar3);
      uVar3 = uStack_80;
      uVar4 = uStack_88;
      uVar9 = uStack_90;
      lVar13 = *param_5;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
      func_0x000100029284();
      lVar10 = *(long *)(lVar13 + 0x10);
      uVar12 = (ulong)~(uint)uVar8 & 1;
      lVar14 = lVar10 + uVar12;
      if (SCARRY8(lVar10,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020af918);
        (*pcVar5)();
      }
      if (*(long *)(lVar13 + 0x18) < lVar14) {
        FUN_101bb6f30(lVar14,param_4 & 1);
        uVar7 = uVar9;
        uVar12 = uVar4;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020af92c);
          (*pcVar5)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000101bb6dc0();
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar14 = *param_5;
      if ((uVar8 & 1) == 0) {
        lVar10 = lVar14 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar4;
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020af91c);
          (*pcVar5)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        func_0x000107c61170(uVar15);
      }
      param_4 = 1;
    }
    bVar6 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1020af914);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar16) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1020af92c; end: 1020af95b;  */

void FUN_1020af92c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1020af95c; end: 1020af97f;  */

void FUN_1020af95c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  ulong uStack_80;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = *(long *)(unaff_x20 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1020a9bb0();
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar15 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar15 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c61434(param_1);
  }
  else {
    func_0x000107c61434(param_1);
    lVar18 = 4;
    do {
      uVar13 = lVar18 - 4;
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad534);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(puVar4 + lVar18 * 8);
        func_0x000107c61174();
        puVar9 = param_2;
      }
      else {
        uVar7 = uVar13;
        puVar9 = puVar4;
        func_0x00010103193c();
      }
      puVar1 = (undefined *)(lVar18 - 3);
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad52c);
        (*pcVar5)();
      }
      uVar13 = uVar7;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar13 == 0) {
        func_0x000107c61170(uVar7);
        param_2 = puVar9;
      }
      else {
        uVar16 = uVar13;
        func_0x000107c5faec();
        puVar8 = puVar9;
        func_0x000107c61170(uVar13);
        uVar13 = uVar7;
        func_0x000107c42120();
        func_0x000107c61180();
        if (uVar13 == 0) {
          uVar17 = 0;
          puVar19 = (undefined *)0x0;
          puVar14 = puVar8;
        }
        else {
          uVar17 = uVar13;
          func_0x000107c5faec();
          puVar14 = puVar8;
          func_0x000107c61170(uVar13);
          puVar19 = puVar8;
        }
        uVar13 = uVar7;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        if (uVar13 == 0) {
LAB_1020ad3dc:
          uStack_80 = 0;
          puVar14 = (undefined *)0x0;
        }
        else {
          uVar12 = uVar13;
          func_0x000107c3e978();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          if (uVar12 == 0) goto LAB_1020ad3dc;
          uStack_80 = uVar12;
          func_0x000107c5faec();
          func_0x000107c61170(uVar12);
        }
        puVar8 = puVar6;
        func_0x000107c61558();
        uVar13 = uVar16;
        puVar10 = puVar9;
        func_0x000100029284();
        uVar12 = (ulong)~(uint)puVar10 & 1;
        lVar2 = *(long *)(puVar6 + 0x10) + uVar12;
        if (SCARRY8(*(long *)(puVar6 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad530);
          (*pcVar5)();
        }
        if (*(long *)(puVar6 + 0x18) < lVar2) {
          func_0x0001020a7c84(lVar2,puVar8);
          uVar13 = uVar16;
          param_2 = puVar9;
          func_0x000100029284();
          if (((uint)puVar10 & 1) != ((uint)param_2 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad5a0);
            (*pcVar5)();
          }
        }
        else {
          param_2 = puVar10;
          if (((ulong)puVar8 & 1) == 0) {
            FUN_1020a6b3c();
          }
        }
        if (((ulong)puVar10 & 1) == 0) {
          *(ulong *)(puVar6 + (uVar13 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar6 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar13 * 0x10);
          *puVar3 = uVar16;
          puVar3[1] = (ulong)puVar9;
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar13 * 0x20);
          *puVar3 = uVar17;
          puVar3[1] = (ulong)puVar19;
          puVar3[2] = uStack_80;
          puVar3[3] = (ulong)puVar14;
          func_0x000107c61170(uVar7);
          if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ad538);
            (*pcVar5)();
          }
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        }
        else {
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar13 * 0x20);
          uVar13 = puVar3[1];
          uVar16 = puVar3[3];
          *puVar3 = uVar17;
          puVar3[1] = (ulong)puVar19;
          puVar3[2] = uStack_80;
          puVar3[3] = (ulong)puVar14;
          func_0x000107c6142c(puVar9);
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar13);
          func_0x000107c6142c(uVar16);
        }
      }
      lVar18 = lVar18 + 1;
    } while (puVar1 != puVar15);
  }
  func_0x000107c6142c(puVar4);
  **(undefined8 **)(*(long *)(lVar11 + 0x40) + 0x28) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 1020af980; end: 1020af9af;  */

void FUN_1020af980(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1020ae62c(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1020af9b0; end: 1020afa13;  */

/* WARNING: Possible PIC construction at 0x0001020af9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020af9c8) */

void FUN_1020af9b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020afa14; end: 1020afa7f;  */

undefined8 * FUN_1020afa14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1020afa80; end: 1020afac3;  */

undefined8 * FUN_1020afa80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1020afac4; end: 1020afb5f;  */

int FUN_1020afac4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020afb60; end: 1020afb9f;  */

void FUN_1020afb60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e56390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da58f94;
  func_0x000107c61520(&UNK_10da58f94,&UNK_1104c6cf0);
  puRam0000000112e56390 = puVar1;
  return;
}



/* Entry: 1020afba0; end: 1020afbcf;  */

long FUN_1020afba0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1020afbd0; end: 1020afe0f;  */

void FUN_1020afbd0(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [112];
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
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (lVar2 == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    goto LAB_1020afcec;
  }
  func_0x000107c61428(lVar2 + 0x88,auStack_58,0x20,0);
  lVar2 = *(long *)(lVar2 + 0x88);
  if (*(long *)(lVar2 + 0x10) == 0) {
LAB_1020afcc0:
    uVar3 = 0;
    uVar4 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_3 & 1) == 0) {
      func_0x000107c6142c(lVar2);
      goto LAB_1020afcc0;
    }
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 0x70);
    uStack_158 = puVar1[3];
    uStack_160 = puVar1[2];
    uStack_168 = puVar1[5];
    uStack_170 = puVar1[4];
    uStack_148 = puVar1[1];
    uStack_150 = *puVar1;
    uStack_198 = puVar1[0xb];
    uStack_1a0 = puVar1[10];
    uVar4 = puVar1[0xd];
    uVar3 = puVar1[0xc];
    uStack_178 = puVar1[7];
    uStack_180 = puVar1[6];
    uStack_188 = puVar1[9];
    uStack_190 = puVar1[8];
    uStack_d0 = uStack_150;
    uStack_c8 = uStack_148;
    uStack_c0 = uStack_160;
    uStack_b8 = uStack_158;
    uStack_b0 = uStack_170;
    uStack_a8 = uStack_168;
    uStack_a0 = uStack_180;
    uStack_98 = uStack_178;
    uStack_90 = uStack_190;
    uStack_88 = uStack_188;
    uStack_80 = uStack_1a0;
    uStack_78 = uStack_198;
    uStack_70 = uVar3;
    uStack_68 = uVar4;
    FUN_1020ab5ac(&uStack_d0,auStack_140);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c614a8(auStack_58);
LAB_1020afcec:
  param_1[1] = uStack_148;
  *param_1 = uStack_150;
  param_1[3] = uStack_158;
  param_1[2] = uStack_160;
  param_1[5] = uStack_168;
  param_1[4] = uStack_170;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = uStack_188;
  param_1[8] = uStack_190;
  param_1[0xb] = uStack_198;
  param_1[10] = uStack_1a0;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar4;
  return;
}



/* Entry: 1020afe10; end: 1020afe93;  */

void FUN_1020afe10(void)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 0x18))();
  lVar1 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar1 + 0x18))();
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1020afe94; end: 1020afeb3;  */

void FUN_1020afe94(void)

{
  func_0x000107c61168(&PTR_PTR_112e563d8);
  return;
}



/* Entry: 1020afeb4; end: 1020afed7;  */

void FUN_1020afeb4(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001020afec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1020afed8; end: 1020aff27;  */

undefined8 FUN_1020afed8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1020b15bc(param_1,param_2);
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1020aff28; end: 1020b0083;  */

void FUN_1020aff28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4034000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52e0c(0x4000000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c3ab24(param_3);
  func_0x000107c61180();
  func_0x000107c52df8(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c562fc(puVar2);
  func_0x000107c61170(puVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1020b0084; end: 1020b00e7; -[_TtC18GamesFriendsFeedUI24BlurredAvatarClusterView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b0084(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112e564b8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000001d,0x800000010ef19c10,
                      "GamesFriendsFeedUI/BlurredAvatarClusterView.swift",0x31,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020b00e8);
  (*pcVar1)();
}



/* Entry: 1020b00e8; end: 1020b0267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b00e8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_traitCollectionDidChange__11267bf88,param_1);
  lVar2 = unaff_x20;
  func_0x000107c5ce94();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c44820();
  func_0x000107c61170(lVar2);
  if ((int)lVar3 != 0) {
    uVar7 = *(ulong *)(unaff_x20 + _DAT_112e56450);
    if (uVar7 >> 0x3e == 0) {
      uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar8 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar8 = uVar7;
      }
      func_0x000107c60480();
    }
    if (uVar8 != 0) {
      uVar9 = 0;
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e56458);
      do {
        if ((uVar7 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1020b0230);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = uVar9;
          FUN_1020b13f8(uVar9,uVar7);
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1020b022c);
          (*pcVar1)();
        }
        uVar11 = uVar9 + 1;
        uVar5 = uVar4;
        func_0x000107c4aba4();
        func_0x000107c61180();
        uVar6 = uVar10;
        func_0x000107c3ab24(uVar10);
        func_0x000107c61180();
        func_0x000107c52df8(uVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar11 != uVar8);
    }
  }
  return;
}



/* Entry: 1020b0268; end: 1020b02bb; -[_TtC18GamesFriendsFeedUI24BlurredAvatarClusterView traitCollectionDidChange:] */

/* WARNING: Possible PIC construction at 0x0001020b02a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b02a8) */

void FUN_1020b0268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1020b00e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1020b02bc; end: 1020b04f3;  */

/* WARNING: Possible PIC construction at 0x0001020b0498: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b049c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b02bc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  
  lVar6 = unaff_x20;
  func_0x000107c614f0();
  FUN_1020b04f4();
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar9 = *(ulong *)(unaff_x20 + _DAT_112e56450);
      if (uVar9 >> 0x3e == 0) {
        uVar12 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar12 = uVar9;
        }
        func_0x000107c60480();
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020b04ec);
          (*pcVar5)();
        }
      }
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar12 != 0) {
        func_0x000100403514(0,uVar12,0);
        uVar9 = 0;
        lVar14 = 0x112e56488;
        lVar11 = 0x112e56490;
        do {
          lVar3 = (uVar9 / 3) * -0x30;
          uVar10 = *(undefined8 *)(lVar14 + lVar3);
          uVar13 = *(undefined8 *)(lVar11 + lVar3);
          uVar1 = *(ulong *)(puVar4 + 0x10);
          uVar2 = *(ulong *)(puVar4 + 0x18);
          func_0x000107c61434(uVar13);
          if (uVar2 >> 1 <= uVar1) {
            func_0x000100403514(1 < uVar2,uVar1 + 1,1);
          }
          lVar11 = lVar11 + 0x10;
          lVar14 = lVar14 + 0x10;
          uVar9 = uVar9 + 1;
          *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar10;
          *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar13;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      puVar7 = &UNK_1104c6e00;
      func_0x000107c613fc(&UNK_1104c6e00,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,unaff_x20);
      puVar8 = &UNK_1104c6e28;
      func_0x000107c613fc(&UNK_1104c6e28,0x30,7);
      *(undefined **)(puVar8 + 0x10) = puVar4;
      *(long *)(puVar8 + 0x18) = param_1;
      *(undefined **)(puVar8 + 0x20) = puVar7;
      *(long *)(puVar8 + 0x28) = lVar6;
      func_0x000107c615f0(param_1);
      func_0x000100859150(0xd,4,0x38,4,0,0,&UNK_10da59058,puVar8,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar8);
      return;
    }
  }
  return;
}



/* Entry: 1020b04f4; end: 1020b0633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b04f4(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = _DAT_112e564b8;
  lVar5 = *(long *)(unaff_x20 + _DAT_112e564b8);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c6157c(lVar5);
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar5,PTR___sytN_11034f1b0 + 8,uVar3,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar5);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61574(uVar3);
  uVar6 = *(ulong *)(unaff_x20 + _DAT_112e56450);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020b0604);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174(uVar4);
      }
      else {
        uVar4 = uVar8;
        FUN_1020b13f8(uVar8,uVar6);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020b0600);
        (*pcVar2)();
      }
      uVar9 = uVar8 + 1;
      func_0x000107c55258();
      func_0x000107c61170(uVar4);
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar7);
  }
  return;
}



/* Entry: 1020b0634; end: 1020b06b3;  */

void FUN_1020b0634(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  plVar2 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1020b06b4;
  plVar2[4] = param_3;
  plVar2[5] = param_5;
  plVar2[3] = param_2;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[6] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b0920,0,0);
  return;
}



/* Entry: 1020b06b4; end: 1020b072b;  */

void FUN_1020b06b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(lVar3 + 0x48) = param_1;
  func_0x000107c615c0();
  func_0x000100eea164();
  *(undefined8 *)(lVar3 + 0x50) = uVar1;
  func_0x000107c5fca8();
  *(undefined8 *)(lVar3 + 0x58) = uVar2;
  *(undefined8 *)(lVar3 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b072c,uVar2,uVar1);
  return;
}



/* Entry: 1020b072c; end: 1020b07a3;  */

/* WARNING: Removing unreachable block (ram,0x0001020b0750) */

void FUN_1020b072c(void)

{
  func_0x000107c5fd64();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b07a4,0,0);
  return;
}



/* Entry: 1020b07a4; end: 1020b080b;  */

void FUN_1020b07a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b080c,uVar2,uVar1);
  return;
}



/* Entry: 1020b080c; end: 1020b091f;  */

void FUN_1020b080c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1020b0ab8(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c61170(lVar1);
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1020b0884,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 1020b0920; end: 1020b0a33;  */

void FUN_1020b0920(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  long lStack_10;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x18);
  lVar3 = 0;
  func_0x000107c5fd0c();
  uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar8,1,1,lVar3);
  puVar4 = &UNK_1104c6e50;
  func_0x000107c613fc(&UNK_1104c6e50,0x20,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar4;
  *(undefined8 *)(puVar4 + 0x18) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  plVar9 = (long *)0xe0;
  func_0x000107c615f0(uVar10);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar9;
  lVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  lVar5 = lVar3;
  func_0x000101bb4c5c();
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1020b0a34;
  puVar2 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
  puVar1 = PTR___ss5NeverON_11034ee88;
  lVar6 = *(long *)(unaff_x22 + 0x30);
  plVar9[0x16] = unaff_x22 + 0x10;
  plVar9[0x17] = lStack_10;
  plVar9[0x14] = lVar5;
  plVar9[0x15] = (long)puVar2;
  plVar9[0x12] = (long)&UNK_1104c6fd8;
  plVar9[0x13] = (long)puVar1;
  plVar9[0x10] = (long)puVar4;
  plVar9[0x11] = lVar3;
  plVar9[0xe] = lVar6;
  plVar9[0xf] = (long)&UNK_10da590b8;
  lVar3 = *(long *)(puVar1 + -8);
  plVar9[0x18] = lVar3;
  uVar7 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar9[0x19] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
  return;
}



/* Entry: 1020b0a34; end: 1020b0ab7;  */

/* WARNING: Possible PIC construction at 0x0001020b0a90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b0a94) */

void FUN_1020b0a34(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x38);
    func_0x0001000abe54(*(undefined8 *)(lVar2 + 0x30));
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1020b0ab8; end: 1020b0c47;  */

/* WARNING: Possible PIC construction at 0x0001020b0bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020b0b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b0bd4) */
/* WARNING: Removing unreachable block (ram,0x0001020b0b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b0ab8(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_1;
  func_0x000107c5fd5c();
  if ((uVar5 & 1) == 0) {
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112e56450);
    if (uVar5 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar6 = uVar5;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1020b0c10);
          (*pcVar1)();
        }
        lVar3 = *(long *)(uVar5 + 0x20);
        func_0x000107c61174(lVar3);
      }
      else {
        lVar3 = 0;
        FUN_1020b13f8(0,uVar5);
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1020b0c14);
          (*pcVar1)();
        }
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 == 0) {
          puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c61174(lVar3);
          func_0x000107c5af88(puVar2);
          func_0x000107c61180();
          func_0x000107c52b50(lVar3);
          func_0x000107c61170(puVar2);
        }
        else {
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c55258(lVar3);
          lVar3 = lVar4;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
  return;
}



/* Entry: 1020b0c48; end: 1020b0ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b0c48(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e564b8);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar2,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020b0ce4; end: 1020b0d93; -[_TtC18GamesFriendsFeedUI24BlurredAvatarClusterView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b0ce4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112e564b8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar3);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar3,PTR___sytN_11034f1b0 + 8,uVar2,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar3);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020b0d94; end: 1020b0ddb; -[_TtC18GamesFriendsFeedUI24BlurredAvatarClusterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020b0d94(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e56450));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e56458));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e564b8));
  return;
}



/* Entry: 1020b0ddc; end: 1020b0dff;  */

void FUN_1020b0ddc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b0e00,0,0);
  return;
}



/* Entry: 1020b0e00; end: 1020b0f23;  */

void FUN_1020b0e00(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  puVar1 = PTR_PTR_1126af5d8;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar2,uVar3);
  uVar3 = 0x3931303632323031;
  func_0x000107c5fadc(0x3931303632323031,0xe800000000000000);
  func_0x000107c458c4();
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  puVar1 = PTR_PTR_1126b83f8;
  func_0x000107c610f8();
  func_0x000107c4849c();
  *(undefined **)(unaff_x22 + 0x40) = puVar1;
  func_0x000107c432a0();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x48) = lVar6;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  lVar5 = 0x112d657e8;
  func_0x0001000285a8(0x112d657e8,&UNK_10d92a540);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1020b0f24;
  plVar4[7] = lVar6;
  plVar4[8] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_103968380,0,0);
  return;
}



/* Entry: 1020b0f24; end: 1020b0f7b;  */

void FUN_1020b0f24(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b0f7c,0,0);
  return;
}



/* Entry: 1020b0f7c; end: 1020b0ff3;  */

void FUN_1020b0f7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar3 = uVar4;
  FUN_1020b0ff4(uVar4,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  *puVar5 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001020b0ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020b0ff4; end: 1020b11af;  */

undefined8 FUN_1020b0ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  if (param_1 == 0) {
    uVar7 = 0;
  }
  else {
    uStack_68 = 0;
    puVar2 = &UNK_1104c6e78;
    func_0x000107c613fc(&UNK_1104c6e78,0x20,7);
    *(undefined8 **)(puVar2 + 0x10) = &uStack_68;
    *(undefined8 *)(puVar2 + 0x18) = unaff_x20;
    puVar3 = &UNK_1104c6ea0;
    func_0x000107c613fc(&UNK_1104c6ea0,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_1020b1ce0;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_78 = FUN_1020b1ce8;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1010a45c8;
    puStack_80 = &UNK_1104c6eb8;
    ppuVar4 = &puStack_98;
    puStack_70 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_70;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1104c6ef0;
    func_0x000107c613fc(&UNK_1104c6ef0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    puVar5 = &UNK_1104c6f18;
    func_0x000107c613fc(&UNK_1104c6f18,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x1020b1d24;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcStack_78 = (code *)0x1020b208c;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100e27b38;
    puStack_80 = &UNK_1104c6f30;
    ppuVar6 = &puStack_98;
    puStack_70 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_70;
    func_0x000107c61434(param_3);
    func_0x000107c61574(puVar5);
    func_0x000107c4c754(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    uVar7 = uStack_68;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
  }
  return uVar7;
}



/* Entry: 1020b11b0; end: 1020b11fb;  */

/* WARNING: Possible PIC construction at 0x0001020b11dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b11e0) */

void FUN_1020b11b0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61174();
    FUN_1020b1d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1020b11fc; end: 1020b1227;  */

void FUN_1020b11fc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___CIContext_1126b3120;
  func_0x000107c610f8();
  func_0x000107c47c98();
  puRam0000000112e564f8 = puVar1;
  return;
}



/* Entry: 1020b1228; end: 1020b12bb; -[_TtC18GamesFriendsFeedUI24BlurredAvatarClusterView initWithFrame:] */

void FUN_1020b1228(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesFriendsFeedUI.BlurredAvatarClusterView",0x2b,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020b1254);
  (*pcVar1)();
}



/* Entry: 1020b12bc; end: 1020b13f7;  */

undefined *
FUN_1020b12bc(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020b13f8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1020b1ee4(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1020b13f8; end: 1020b15bb;  */

ulong FUN_1020b13f8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020b14dc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020b14e0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c61168(PTR__OBJC_CLASS___UIImageView_1126aec28);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1020b1ee4(0,0x112e56500,&PTR__OBJC_CLASS___UIImageView_1126aec28);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020b15bc);
  (*pcVar2)();
}



/* Entry: 1020b15bc; end: 1020b1b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020b15bc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e564b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56458) = param_2;
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1020b1b44);
    (*pcVar3)();
  }
  if (param_1 == 0) {
    func_0x000107c61174(param_2);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61174(param_2);
    func_0x0001020b1254(0,param_1,0);
    do {
      puVar7 = puStack_78;
      FUN_1020aff28(&uStack_80,auStack_88,param_2);
      uVar12 = uStack_80;
      uVar16 = *(ulong *)(puVar7 + 0x10);
      puStack_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar16) {
        func_0x0001020b1254(1 < *(ulong *)(puVar7 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puStack_78 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puStack_78 + uVar16 * 8 + 0x20) = uVar12;
      param_1 = param_1 + -1;
      puVar7 = puStack_78;
    } while (param_1 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_112e56450) = puVar7;
  puVar4 = &stack0xffffffffffffff60;
  func_0x000107c61154(0,0,0,0,puVar4,PTR_s_initWithFrame__1125e2948);
  lVar2 = _DAT_112e56450;
  uVar16 = *(ulong *)(puVar4 + _DAT_112e56450);
  if (uVar16 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar17 = uVar16;
    }
    func_0x000107c60480();
  }
  puVar5 = puVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(uVar16);
  if (uVar17 != 0) {
    uVar18 = 0;
    do {
      if ((uVar16 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020b1b38);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar16 + uVar18 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar18;
        FUN_1020b13f8(uVar18,uVar16);
      }
      uVar1 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020b1b34);
        (*pcVar3)();
      }
      func_0x000107c3d89c(puVar5);
      func_0x000107c61170(uVar6);
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar17);
  }
  func_0x000107c6142c(uVar16);
  func_0x000107c61170(puVar5);
  uVar16 = *(ulong *)(puVar4 + lVar2);
  if (uVar16 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  }
  else {
    uVar17 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar17 = uVar16;
    }
    func_0x000107c60480();
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  }
  PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50 = puVar7;
  if (SBORROW8(uVar17,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1020b1b78);
    (*pcVar3)();
  }
  func_0x000107c61168();
  puVar8 = puVar7;
  func_0x0001008478a8();
  puVar9 = puVar8;
  func_0x000107c613fc();
  *(undefined8 *)(puVar9 + 0x18) = 5;
  *(undefined8 *)(puVar9 + 0x10) = 2;
  puVar10 = puVar5;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c40290((double)(long)(uVar17 - 1) * 26.0 + 40.0);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  *(undefined1 **)(puVar9 + 0x20) = puVar11;
  puVar10 = puVar5;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar11 = puVar10;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  *(undefined1 **)(puVar9 + 0x28) = puVar11;
  uVar12 = 0;
  FUN_1020b1ee4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar13 = puVar9;
  func_0x000107c5fc48(puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c3d048(puVar7);
  func_0x000107c61170(puVar13);
  uVar16 = *(ulong *)(puVar4 + lVar2);
  if (uVar16 >> 0x3e == 0) {
    uVar17 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar17 = uVar16;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar16);
  if (uVar17 != 0) {
    uVar18 = 0;
    do {
      if ((uVar16 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020b1b40);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar16 + uVar18 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar18;
        FUN_1020b13f8(uVar18,uVar16);
      }
      uVar1 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020b1b3c);
        (*pcVar3)();
      }
      puVar9 = puVar8;
      func_0x000107c613fc(puVar8,((ulong)*(uint *)(puVar8 + 0x30) + 7 & 0x1fffffff8) + 0x20,
                          *(ushort *)(puVar8 + 0x34) | 7);
      *(undefined8 *)(puVar9 + 0x18) = 9;
      *(undefined8 *)(puVar9 + 0x10) = 4;
      func_0x000107c61174();
      uVar14 = uVar6;
      func_0x000107c4acb0();
      func_0x000107c61180();
      puVar4 = puVar5;
      func_0x000107c4acb0(puVar5);
      func_0x000107c61180();
      uVar15 = uVar14;
      func_0x000107c40284((double)(long)uVar18 * 26.0);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar4);
      *(ulong *)(puVar9 + 0x20) = uVar15;
      uVar14 = uVar6;
      func_0x000107c3f764();
      func_0x000107c61180();
      puVar4 = puVar5;
      func_0x000107c3f764(puVar5);
      func_0x000107c61180();
      uVar15 = uVar14;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar4);
      *(ulong *)(puVar9 + 0x28) = uVar15;
      uVar14 = uVar6;
      func_0x000107c5e308();
      func_0x000107c61180();
      uVar15 = uVar14;
      func_0x000107c40290(0x4044000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      *(ulong *)(puVar9 + 0x30) = uVar15;
      uVar14 = uVar6;
      func_0x000107c44d9c();
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      uVar15 = uVar14;
      func_0x000107c40290(0x4044000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      *(ulong *)(puVar9 + 0x38) = uVar15;
      puVar13 = puVar9;
      func_0x000107c5fc48(puVar9,uVar12);
      func_0x000107c61574(puVar9);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar13);
      uVar18 = uVar18 + 1;
    } while (uVar1 != uVar17);
  }
  func_0x000107c6142c(uVar16);
  return puVar5;
}



/* Entry: 1020b1b90; end: 1020b1c07;  */

void FUN_1020b1b90(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x1020b2098;
  plVar7[5] = lVar3;
  lVar3 = 0;
  func_0x000107c5fcec();
  plVar7[6] = lVar3;
  func_0x000107c5fce8();
  plVar7[7] = lVar3;
  plVar4 = (long *)0x50;
  func_0x000107c615b8();
  plVar7[8] = (long)plVar4;
  *plVar4 = (long)plVar7;
  plVar4[1] = (long)FUN_1020b06b4;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  plVar4[3] = lVar5;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[6] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b0920,0,0);
  return;
}



/* Entry: 1020b1c08; end: 1020b1c27;  */

void FUN_1020b1c08(void)

{
  func_0x000107c61168(&PTR_PTR_11281cf00);
  return;
}



/* Entry: 1020b1c28; end: 1020b1ca3;  */

void FUN_1020b1c28(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1020b1ca4;
  plVar4[2] = param_1;
  plVar4[3] = lVar1;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  plVar4[4] = lVar3;
  plVar4[5] = lVar1;
  plVar4[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020b0e00,0,0,lVar3,param_3);
  return;
}



/* Entry: 1020b1ca4; end: 1020b1cdf;  */

void FUN_1020b1ca4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020b1cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020b1ce0; end: 1020b1ce7;  */

/* WARNING: Possible PIC construction at 0x0001020b11dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020b11e0) */

void FUN_1020b1ce0(long param_1)

{
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x000107c61174(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
    ;
    FUN_1020b1d28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1020b1ce8; end: 1020b1d07;  */

void FUN_1020b1ce8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020b1d08; end: 1020b1d27;  */

void FUN_1020b1d08(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1020b1d28; end: 1020b1ee3;  */

void FUN_1020b1d28(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
  func_0x000107c610f8();
  func_0x000107c46db4();
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0x6973737561474943;
    func_0x000107c5fadc(0x6973737561474943,0xee0072756c426e61);
    puVar3 = PTR__OBJC_CLASS___CIFilter_1126c7620;
    func_0x000107c61168();
    func_0x000107c43510();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar1;
      func_0x000107c45048(puVar1);
      func_0x000107c61180();
      func_0x000107c5a4a0(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c5fdd0(0x4034000000000000);
      func_0x000107c5a4a0(puVar3);
      func_0x000107c61170(puVar4);
      puVar4 = puVar3;
      func_0x000107c4e138();
      func_0x000107c61180();
      if (puVar4 != (undefined *)0x0) {
        if (lRam0000000112e564f0 != -1) {
          func_0x000107c61568(0x112e564f0,FUN_1020b11fc);
        }
        lVar5 = lRam0000000112e564f8;
        func_0x000107c42c78(puVar1);
        func_0x000107c4094c();
        if (lVar5 != 0) {
          func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
          func_0x000107c45af0();
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar1);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(lVar5);
          return;
        }
        func_0x000107c61170(puVar4);
      }
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar1);
  }
  return;
}


