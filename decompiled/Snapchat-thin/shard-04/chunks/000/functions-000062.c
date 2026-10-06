/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10307a86c; end: 10307a913;  */

undefined8 * FUN_10307a86c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10305a544(uVar3,uVar2);
  func_0x000107c61574(param_1[2]);
  uVar3 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x000107c61574(uVar3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  uVar3 = param_1[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  func_0x000107c61574(uVar3);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar3);
  param_1[9] = param_2[9];
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61574(uVar3);
  return param_1;
}



/* Entry: 10307a914; end: 10307a9af;  */

int FUN_10307a914(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10307a9b0; end: 10307a9e3;  */

void FUN_10307a9b0(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e742a60,1);
  return;
}



/* Entry: 10307a9e4; end: 10307c137;  */

void FUN_10307a9e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long extraout_x8;
  long extraout_x12;
  long lVar12;
  undefined8 *unaff_x20;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *puStack_148;
  undefined *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  puVar1 = &UNK_10db811d8;
  func_0x000107c61520(&UNK_10db811d8);
  uVar2 = 0xff;
  lStack_168 = param_3;
  func_0x000107c5f4d8(0xff,param_3,puVar1);
  uVar9 = 0x112f369b8;
  uStack_178 = uVar2;
  func_0x00010002969c(0x112f369b8,&UNK_10db7f060);
  puVar1 = PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8;
  uStack_170 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uStack_170,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  uVar2 = 0x112eb9330;
  func_0x00010002969c(0x112eb9330,&UNK_10db81230);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,uVar2);
  uVar2 = 0xff;
  func_0x000107c61510(0xff,&UNK_110604638,uVar4,0,0);
  uVar3 = 0xff;
  func_0x000107c5f7dc(0xff,uVar2);
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar3);
  uVar4 = 0xff;
  func_0x000107c5f760(0xff,uVar3,puVar5);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar4,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  uVar6 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,puVar1);
  uVar2 = 0x112f36ea0;
  func_0x00010002969c(0x112f36ea0,&UNK_10db7f988);
  uVar7 = 0xff;
  func_0x000107c5f34c(0xff,uVar6,uVar2);
  uVar2 = 0x112f36ea8;
  func_0x00010002969c(0x112f36ea8,&UNK_10db81240);
  puVar5 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,uVar4);
  puVar1 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_70 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar8 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_78 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar3,&puStack_78);
  puStack_80 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar5 = puVar1;
  puStack_88 = puVar8;
  func_0x000107c61520(puVar1,uVar6,&puStack_88);
  uVar3 = 0x112f36eb0;
  FUN_10307d85c(0x112f36eb0,0x112f36ea0,&UNK_10db7f988,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar8 = puVar1;
  puStack_98 = puVar5;
  uStack_90 = uVar3;
  func_0x000107c61520(puVar1,uVar7,&puStack_98);
  uVar3 = 0x112f36eb8;
  FUN_10307d85c(0x112f36eb8,0x112f36ea8,&UNK_10db81240,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1103488d8);
  uVar4 = 0xff;
  uStack_128 = uVar7;
  uStack_120 = uVar2;
  puStack_118 = puVar8;
  uStack_110 = uVar3;
  func_0x000107c614f8(0xff,&uStack_128,
                      PTR___s7SwiftUI4ViewPAAE7gesture_9includingQrqd___AA11GestureMaskVtAA0F0Rd__lFQOMQ_110349628
                      ,0);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar4,PTR___s7SwiftUI25_AppearanceActionModifierVN_110349168);
  uVar2 = 0x112e09088;
  func_0x00010002969c(0x112e09088,&UNK_10db7f080);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,uVar2);
  uVar2 = 0xff;
  func_0x000107c61510(0xff,uVar9,uVar4,0,0);
  uVar9 = 0xff;
  func_0x000107c5f7dc(0xff,uVar2);
  uVar2 = 0xff;
  func_0x000107c60188(0xff,uVar9);
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar9);
  puVar8 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  puStack_a0 = puVar5;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar2,&puStack_a0);
  uVar3 = 0xff;
  func_0x000107c5f768(0xff,uVar2,puVar8);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  uVar9 = 0x112e02e30;
  func_0x00010002969c(0x112e02e30,&UNK_10da5a740);
  uVar4 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,uVar9);
  puVar5 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,uVar3);
  puStack_a8 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar8 = puVar1;
  puStack_b0 = puVar5;
  func_0x000107c61520(puVar1,uVar2,&puStack_b0);
  uVar9 = 0x112e02e28;
  FUN_10307d85c(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar5 = puVar1;
  puStack_c0 = puVar8;
  uStack_b8 = uVar9;
  func_0x000107c61520(puVar1,uVar4,&puStack_c0);
  uVar2 = 0xff;
  func_0x000107c5f310(0xff,uVar4,puVar5);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVN_110349200);
  puVar8 = PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_110348990;
  func_0x000107c61520(PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_110348990,uVar2);
  puStack_c8 = PTR___s7SwiftUI30_SafeAreaRegionsIgnoringLayoutVAA12ViewModifierAAWP_1103491f0;
  puStack_d0 = puVar8;
  func_0x000107c61520(puVar1,uVar3,&puStack_d0);
  uVar6 = 0xff;
  puStack_190 = puVar1;
  func_0x000107c5f38c(0xff,uVar3,puVar1);
  uVar9 = uStack_178;
  lVar10 = 0;
  uStack_188 = uVar6;
  func_0x000107c5f34c(0,uStack_178,uVar6);
  lStack_180 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_180 + 0x40));
  lVar13 = (long)&puStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12;
  puVar1 = &UNK_1106046b0;
  func_0x000107c613fc(&UNK_1106046b0,0x78,7);
  uVar6 = *(undefined8 *)(lStack_168 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uStack_170;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  uVar6 = unaff_x20[4];
  uVar15 = unaff_x20[7];
  uVar7 = unaff_x20[6];
  *(undefined8 *)(puVar1 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar1 + 0x40) = uVar6;
  *(undefined8 *)(puVar1 + 0x58) = uVar15;
  *(undefined8 *)(puVar1 + 0x50) = uVar7;
  uVar6 = unaff_x20[8];
  *(undefined8 *)(puVar1 + 0x68) = unaff_x20[9];
  *(undefined8 *)(puVar1 + 0x60) = uVar6;
  *(undefined8 *)(puVar1 + 0x70) = unaff_x20[10];
  uVar6 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar7 = unaff_x20[2];
  *(undefined8 *)(puVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x38) = uVar15;
  *(undefined8 *)(puVar1 + 0x30) = uVar7;
  (**(code **)(*(long *)(lStack_168 + -8) + 0x10))(&uStack_128);
  pcVar14 = FUN_10307d5bc;
  func_0x000107c5f30c(FUN_10307d5bc,puVar1,uVar4,puVar5);
  pcStack_138 = pcVar14;
  puStack_130 = puVar1;
  func_0x000107c5f354();
  pcVar11 = pcVar14;
  func_0x000107c5f574();
  func_0x000107c5f630(&uStack_128,pcVar14,pcVar11,uVar2,puVar8);
  func_0x000107c61574();
  func_0x000107c5f7ac();
  puVar8 = PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008;
  func_0x000107c61520(PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008,uVar9);
  func_0x000107c5f698(lVar13,&uStack_128,puVar1,pcVar11,uVar9,uVar3,puVar8,puStack_190);
  func_0x000107c61574(uStack_120);
  puVar5 = PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0;
  func_0x000107c61520(PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_110348bf0,uStack_188);
  puVar1 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_148 = puVar8;
  puStack_140 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar10,&puStack_148);
  FUN_103061a64(lVar12,lVar13,lVar10,puVar1);
  pcVar14 = *(code **)(lStack_180 + 8);
  (*pcVar14)(lVar13,lVar10);
  FUN_103061a64(param_1,lVar12,lVar10,puVar1);
  (*pcVar14)(lVar12,lVar10);
  return;
}



/* Entry: 10307c138; end: 10307ca43;  */

void FUN_10307c138(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  double *pdVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *unaff_x20;
  double dVar15;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [8];
  long alStack_3c0 [4];
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  undefined *puStack_388;
  undefined *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined *puStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  double dStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  double *pdStack_298;
  undefined *puStack_290;
  double dStack_288;
  long lStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_230;
  long lStack_228;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  undefined2 uStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined1 uStack_180;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  double dStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  char cStack_e0;
  
  lVar11 = 0x112f36ea8;
  uStack_370 = param_4;
  uStack_2c0 = param_1;
  func_0x0001000285a8(0x112f36ea8,&UNK_10db81240);
  lStack_2d0 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_2d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_2d8 = (long)&lStack_3a0 - extraout_x8;
  func_0x000107c5f6c4();
  lStack_3a0 = *(long *)(lVar1 + -8);
  lStack_390 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_3a0 + 0x40));
  puVar10 = PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8;
  lVar14 = ((long)&lStack_3a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_2a8 = *(undefined8 *)(param_5 + 0x10);
  uVar2 = 0xff;
  lStack_398 = lVar14;
  lStack_2a0 = param_5;
  func_0x000107c5f34c(0xff,uStack_2a8,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  uVar4 = 0x112eb9330;
  func_0x00010002969c(0x112eb9330,&UNK_10db81230);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,uVar4);
  uVar4 = 0xff;
  func_0x000107c61510(0xff,&UNK_110604638,uVar3,0,0);
  uVar2 = 0xff;
  func_0x000107c5f7dc(0xff,uVar4);
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar2);
  lVar1 = 0;
  puStack_378 = puVar5;
  uStack_360 = uVar2;
  func_0x000107c5f760(0,uVar2);
  lStack_358 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_358 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_01;
  lVar6 = 0;
  lStack_368 = lVar14;
  func_0x000107c5f34c(0,lVar1,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  lStack_348 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_348 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_02;
  lVar7 = 0;
  lStack_350 = lVar14;
  func_0x000107c5f34c(0,lVar6,puVar10);
  lStack_308 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_308 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_03;
  uVar4 = 0x112f36ea0;
  lStack_2b0 = lVar14;
  func_0x00010002969c(0x112f36ea0,&UNK_10db7f988);
  dVar8 = 0.0;
  func_0x000107c5f34c(0,lVar7,uVar4);
  lStack_2e8 = *(long *)((long)dVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_2e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_04;
  puVar5 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  lStack_300 = lVar14;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,lVar1);
  puVar10 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_148 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar9 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_388 = puVar5;
  puStack_150 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar6,&puStack_150);
  puStack_158 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar5 = puVar10;
  puStack_380 = puVar9;
  lStack_2f8 = lVar7;
  puStack_160 = puVar9;
  func_0x000107c61520(puVar10,lVar7,&puStack_160);
  uVar4 = 0x112f36eb0;
  FUN_10307d85c(0x112f36eb0,0x112f36ea0,&UNK_10db7f988,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puStack_340 = puVar5;
  puStack_170 = puVar5;
  uStack_168 = uVar4;
  func_0x000107c61520(puVar10,dVar8,&puStack_170);
  uVar4 = 0x112f36eb8;
  FUN_10307d85c(0x112f36eb8,0x112f36ea8,&UNK_10db81240,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1103488d8);
  lVar7 = 0;
  puStack_338 = puVar10;
  uStack_330 = uVar4;
  dStack_2e0 = dVar8;
  lStack_2c8 = lVar11;
  dStack_140 = dVar8;
  lStack_138 = lVar11;
  puStack_130 = puVar10;
  uStack_128 = uVar4;
  func_0x000107c614f8(0,&dStack_140,
                      PTR___s7SwiftUI4ViewPAAE7gesture_9includingQrqd___AA11GestureMaskVtAA0F0Rd__lFQOMQ_110349628
                      ,0);
  lStack_320 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_320 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_05;
  lVar11 = 0;
  lStack_318 = lVar7;
  lStack_2b8 = lVar14;
  func_0x000107c5f34c();
  lStack_328 = *(long *)(lVar11 + -8);
  lStack_2f0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_328 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_06;
  lStack_310 = lVar14;
  func_0x000107c5f2f0();
  lStack_138 = unaff_x20[8];
  dStack_140 = (double)unaff_x20[7];
  func_0x0001000285a8(0x112f37a48,&UNK_10db81250);
  func_0x000107c5f72c(&dStack_288);
  dVar8 = 23.0;
  if ((dStack_288._0_1_ != '\0') && (dVar8 = param_3, dStack_288._0_1_ == '\x01')) {
    dVar8 = param_3 * 0.4;
  }
  lStack_138 = unaff_x20[10];
  dStack_140 = (double)unaff_x20[9];
  uVar4 = 0x112eb92c0;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f72c(&dStack_288);
  dVar15 = dVar8 - dStack_288;
  if (param_3 <= dVar8 - dStack_288) {
    dVar15 = param_3;
  }
  uStack_370 = *(undefined8 *)(lStack_2a0 + 0x18);
  puStack_130 = (undefined *)uStack_2a8;
  uStack_128 = uStack_370;
  func_0x000107c5f438();
  lVar11 = lStack_368;
  uVar2 = 0;
  func_0x000107c5f75c(lStack_368);
  func_0x000107c5f7ac();
  lVar7 = lStack_350;
  func_0x000107c5f680(lStack_350,0,1,dVar15,0,uVar4,uVar2,lVar1,puStack_388);
  (**(code **)(lStack_358 + 8))();
  func_0x000107c5f7ac();
  puVar10 = puStack_380;
  *(long *)(lVar14 + -0x10) = lVar6;
  *(undefined **)(lVar14 + -8) = puVar10;
  *(long *)(lVar14 + -0x20) = lVar11;
  *(long *)(lVar14 + -0x18) = lVar1;
  *(undefined1 *)(lVar14 + -0x28) = 1;
  *(undefined8 *)(lVar14 + -0x30) = 0;
  *(undefined1 *)(lVar14 + -0x38) = 1;
  *(undefined8 *)(lVar14 + -0x40) = 0;
  func_0x000107c5f684(lStack_2b0,0,1,0,1,0x7ff0000000000000,0,0,1);
  (**(code **)(lStack_348 + 8))(lVar7,lVar6);
  lVar11 = *unaff_x20;
  FUN_10305fc34(lVar11,(char)unaff_x20[1]);
  FUN_10307e424(&dStack_140);
  uVar4 = uStack_128;
  lStack_228 = lStack_398;
  if (cStack_e0 == '\x01') {
    func_0x000103080adc();
    FUN_103080684();
    lStack_228 = lVar11;
  }
  else {
    (**(code **)(lStack_3a0 + 0x68))
              (lStack_398,
               *(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8,
               lStack_390);
    func_0x000107c5f6d8(uVar4,unaff_x20,uStack_118,0x3ff0000000000000);
  }
  lVar11 = lStack_228;
  func_0x000107c5f6c8();
  lVar1 = lVar11;
  func_0x000107c5f6d4(0x3fc3333333333333);
  func_0x000107c61574();
  func_0x000107c5f354();
  lVar6 = lVar11;
  func_0x000107c5f574();
  uStack_230 = 0x4024000000000000;
  uStack_220 = 0x100;
  uStack_208 = 0;
  uStack_210 = 0x4020000000000000;
  uStack_200 = 0xc000000000000000;
  uStack_1f8 = 0x4024000000000000;
  uStack_180 = (undefined1)lVar6;
  uStack_190 = 0xc000000000000000;
  uStack_1b0 = CONCAT62(uStack_21e,0x100);
  uStack_1c0 = 0x4024000000000000;
  uStack_198 = 0;
  uStack_1a0 = 0x4020000000000000;
  uStack_1e8 = 0x100;
  uStack_1d0 = 0;
  uStack_1d8 = 0x4020000000000000;
  uStack_1c8 = 0xc000000000000000;
  lStack_218 = lVar1;
  lStack_1f0 = lStack_228;
  lStack_1e0 = lVar1;
  lStack_1b8 = lStack_228;
  lStack_1a8 = lVar1;
  lStack_188 = lVar11;
  FUN_10307d5e0(&uStack_230,&dStack_288);
  uVar4 = 0x112f36ed0;
  puVar12 = &uStack_1f8;
  func_0x00010307d630(puVar12,0x112f36ed0,&UNK_10db81260);
  func_0x000107c5f7ac();
  uVar2 = 0x112f36ed8;
  func_0x0001000285a8(0x112f36ed8,&UNK_10db7f990);
  uVar3 = uVar2;
  FUN_103063d68();
  lVar6 = lStack_2b0;
  lVar1 = lStack_2f8;
  lVar11 = lStack_300;
  func_0x000107c5f5f8(lStack_300,&uStack_1c0,puVar12,uVar4,lStack_2f8,uVar2,puStack_340,uVar3);
  func_0x00010307d630(&uStack_1c0,0x112f36ed8,&UNK_10db7f990);
  (**(code **)(lStack_308 + 8))(lVar6,lVar1);
  lVar7 = lStack_2a0;
  lVar1 = lStack_2d8;
  lVar14 = lStack_2a0;
  FUN_10307ce0c(lStack_2d8,param_3,lStack_2a0);
  func_0x000107c5f2a8();
  lVar6 = lStack_2c8;
  dVar8 = dStack_2e0;
  uVar4 = uStack_330;
  puVar5 = puStack_338;
  func_0x000107c5f690(lStack_2b8,lVar1,lVar14,dStack_2e0,lStack_2c8,puStack_338,uStack_330);
  (**(code **)(lStack_2d0 + 8))(lVar1,lVar6);
  (**(code **)(lStack_2e8 + 8))(lVar11,dVar8);
  puVar10 = &UNK_1106046d8;
  func_0x000107c613fc(&UNK_1106046d8,0x78,7);
  *(undefined8 *)(puVar10 + 0x10) = uStack_2a8;
  *(undefined8 *)(puVar10 + 0x18) = uStack_370;
  lVar11 = unaff_x20[4];
  lVar14 = unaff_x20[7];
  lVar1 = unaff_x20[6];
  *(long *)(puVar10 + 0x48) = unaff_x20[5];
  *(long *)(puVar10 + 0x40) = lVar11;
  *(long *)(puVar10 + 0x58) = lVar14;
  *(long *)(puVar10 + 0x50) = lVar1;
  lVar11 = unaff_x20[8];
  *(long *)(puVar10 + 0x68) = unaff_x20[9];
  *(long *)(puVar10 + 0x60) = lVar11;
  *(long *)(puVar10 + 0x70) = unaff_x20[10];
  lVar11 = *unaff_x20;
  lVar14 = unaff_x20[3];
  lVar1 = unaff_x20[2];
  *(long *)(puVar10 + 0x28) = unaff_x20[1];
  *(long *)(puVar10 + 0x20) = lVar11;
  *(long *)(puVar10 + 0x38) = lVar14;
  *(long *)(puVar10 + 0x30) = lVar1;
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(&dStack_288);
  dStack_288 = dVar8;
  lStack_280 = lVar6;
  puStack_278 = puVar5;
  uStack_270 = uVar4;
  pdVar13 = &dStack_288;
  func_0x000107c614f4(pdVar13,
                      PTR___s7SwiftUI4ViewPAAE7gesture_9includingQrqd___AA11GestureMaskVtAA0F0Rd__lFQOMQ_110349628
                      ,1);
  lVar6 = lStack_2b8;
  lVar1 = lStack_310;
  lVar11 = lStack_318;
  func_0x000107c5f614(lStack_310,FUN_10307d670,puVar10,lStack_318,pdVar13);
  func_0x000107c61574(puVar10);
  (**(code **)(lStack_320 + 8))(lVar6,lVar11);
  uVar4 = 2;
  func_0x000107c5f2dc(2);
  lVar11 = lStack_2f0;
  puStack_290 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
  puVar10 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  pdStack_298 = pdVar13;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lStack_2f0,&pdStack_298);
  func_0x000107c5f600(uStack_2c0,uVar4,lVar11,puVar10);
  func_0x000107c61574(uVar4);
  (**(code **)(lStack_328 + 8))(lVar1,lVar11);
  return;
}



/* Entry: 10307ca44; end: 10307cae7;  */

void FUN_10307ca44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (lRam0000000112f37a40 != -1) {
    func_0x000107c61568(0x112f37a40,FUN_103079dd4);
  }
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_40 = param_1;
  func_0x000107c5f300(uRam0000000113806b10,FUN_10307d7fc,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10307cae8; end: 10307cb53;  */

void FUN_10307cae8(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  func_0x00010307a3c4(0);
  uStack_38 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined1 *)(param_1 + 0x20);
  uStack_41 = 0;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_41,uVar1);
  return;
}



/* Entry: 10307cb54; end: 10307ce0b;  */

void FUN_10307cb54(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  long alStack_f0 [4];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lStack_c8 = *(long *)(param_3 + -8);
  uStack_b8 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  puVar12 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5f34c();
  lStack_c0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar8 = (long)puVar12 - extraout_x8_00;
  uVar2 = 0x112eb9330;
  func_0x00010002969c(0x112eb9330,&UNK_10db81230);
  lVar3 = 0;
  lVar7 = lVar1;
  func_0x000107c5f34c(0,lVar1,uVar2);
  lVar13 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  (**(code **)(param_2 + 0x28))(puVar12);
  func_0x000107c5f7a4();
  *(long *)(lVar11 + -0x10) = param_3;
  *(undefined8 *)(lVar11 + -8) = param_4;
  *(long *)(lVar11 + -0x20) = lVar4;
  *(long *)(lVar11 + -0x18) = lVar7;
  *(undefined1 *)(lVar11 + -0x28) = 0;
  *(undefined8 *)(lVar11 + -0x30) = 0x7ff0000000000000;
  *(undefined1 *)(lVar11 + -0x38) = 1;
  *(undefined8 *)(lVar11 + -0x40) = 0;
  func_0x000107c5f684(lVar8,0,1,0,1,0x7ff0000000000000,0,0,1);
  (**(code **)(lStack_c8 + 8))(puVar12,param_3);
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_68 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_70 = param_4;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar1,&uStack_70);
  func_0x000107c5f68c(lVar10,0,lVar1,puVar5);
  (**(code **)(lStack_c0 + 8))(lVar8,lVar1);
  uVar2 = 0x112eb9328;
  FUN_10307d85c(0x112eb9328,0x112eb9330,&UNK_10db81230,
                PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1103487e8);
  puStack_80 = puVar5;
  uStack_78 = uVar2;
  func_0x000107c61520(puVar6,lVar3,&puStack_80);
  FUN_103061a64(lVar11,lVar10,lVar3,puVar6);
  pcVar9 = *(code **)(lVar13 + 8);
  (*pcVar9)(lVar10,lVar3);
  lVar4 = lVar10;
  (**(code **)(lVar13 + 0x10))(lVar10,lVar11,lVar3);
  puStack_a0 = &UNK_110604638;
  lStack_98 = lVar3;
  lStack_88 = lVar10;
  func_0x00010307d714();
  lStack_b0 = lVar4;
  puStack_a8 = puVar6;
  func_0x000101c14e58(uStack_b8,auStack_90,2,&puStack_a0,&lStack_b0);
  (*pcVar9)(lVar11,lVar3);
  (*pcVar9)(lVar10,lVar3);
  return;
}



/* Entry: 10307ce0c; end: 10307d0c7;  */

void FUN_10307ce0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined8 *unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [88];
  
  lVar2 = 0;
  uStack_d0 = param_1;
  func_0x000107c5f334();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f2a0();
  lStack_e8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e8 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112f36f00;
  func_0x0001000285a8(0x112f36f00,&UNK_10db7f998);
  lStack_d8 = *(long *)(lVar4 + -8);
  lStack_e0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  (**(code **)(lVar6 + 0x68))
            (puVar8,*(undefined4 *)PTR___s7SwiftUI15CoordinateSpaceO6globalyA2CmFWC_110348a30,lVar2)
  ;
  func_0x000107c5f294(lVar7,0x4010000000000000,puVar8);
  puVar5 = &UNK_110604700;
  func_0x000107c613fc(&UNK_110604700,0x78,7);
  uVar13 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(puVar5 + 0x10) = uVar13;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  uVar10 = unaff_x20[4];
  uVar12 = unaff_x20[7];
  uVar11 = unaff_x20[6];
  *(undefined8 *)(puVar5 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x40) = uVar10;
  *(undefined8 *)(puVar5 + 0x58) = uVar12;
  *(undefined8 *)(puVar5 + 0x50) = uVar11;
  uVar10 = unaff_x20[8];
  *(undefined8 *)(puVar5 + 0x68) = unaff_x20[9];
  *(undefined8 *)(puVar5 + 0x60) = uVar10;
  *(undefined8 *)(puVar5 + 0x70) = unaff_x20[10];
  uVar10 = *unaff_x20;
  uVar12 = unaff_x20[3];
  uVar11 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x38) = uVar12;
  *(undefined8 *)(puVar5 + 0x30) = uVar11;
  pcVar9 = *(code **)(*(long *)(param_3 + -8) + 0x10);
  (*pcVar9)(auStack_c8);
  uVar10 = 0x112f36f08;
  FUN_10307d688(0x112f36f08,PTR___s7SwiftUI11DragGestureVMa_110348758,
                PTR___s7SwiftUI11DragGestureVAA0D0AAMc_110348750);
  uVar11 = 0x112f36f10;
  FUN_10307d688(0x112f36f10,PTR___s7SwiftUI11DragGestureV5ValueVMa_110348740,
                PTR___s7SwiftUI11DragGestureV5ValueVSQAAMc_110348748);
  func_0x000107c5f798(lVar7 - extraout_x8_01,0x10307d67c,puVar5,lVar3,uVar10,uVar11);
  func_0x000107c61574(puVar5);
  (**(code **)(lStack_e8 + 8))(lVar7,lVar3);
  puVar5 = &UNK_110604728;
  func_0x000107c613fc(&UNK_110604728,0x80,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar13;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  uVar10 = unaff_x20[4];
  uVar13 = unaff_x20[7];
  uVar11 = unaff_x20[6];
  *(undefined8 *)(puVar5 + 0x48) = unaff_x20[5];
  *(undefined8 *)(puVar5 + 0x40) = uVar10;
  *(undefined8 *)(puVar5 + 0x58) = uVar13;
  *(undefined8 *)(puVar5 + 0x50) = uVar11;
  uVar10 = unaff_x20[8];
  *(undefined8 *)(puVar5 + 0x68) = unaff_x20[9];
  *(undefined8 *)(puVar5 + 0x60) = uVar10;
  *(undefined8 *)(puVar5 + 0x70) = unaff_x20[10];
  uVar10 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar11 = unaff_x20[2];
  *(undefined8 *)(puVar5 + 0x28) = unaff_x20[1];
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 *)(puVar5 + 0x38) = uVar13;
  *(undefined8 *)(puVar5 + 0x30) = uVar11;
  *(undefined8 *)(puVar5 + 0x78) = param_2;
  (*pcVar9)(auStack_c8);
  uVar10 = 0x112f36f18;
  FUN_10307d85c(0x112f36f18,0x112f36f00,&UNK_10db7f998,
                PTR___s7SwiftUI15_ChangedGestureVyxGAA0D0AAMc_110348ab8);
  lVar4 = lStack_e0;
  func_0x000107c5f794(uStack_d0,FUN_10307d6c8,puVar5,lStack_e0,uVar10);
  func_0x000107c61574(puVar5);
  (**(code **)(lStack_d8 + 8))(lVar7 - extraout_x8_01,lVar4);
  return;
}



/* Entry: 10307d0c8; end: 10307d1ab;  */

void FUN_10307d0c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x40);
  uStack_30 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = CONCAT71(uStack_38._1_7_,*(undefined1 *)(param_1 + 0x21));
  uVar1 = 0x112f37a48;
  func_0x0001000285a8(0x112f37a48,&UNK_10db81250);
  func_0x000107c5f730(&uStack_38,uVar1);
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = 0;
  uVar1 = 0x112eb92c0;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 10307d1ac; end: 10307d423;  */

void FUN_10307d1ac(double param_1,double param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char cStack_68;
  char cStack_61;
  
  uStack_88 = *(undefined8 *)(param_4 + 0x40);
  uStack_90 = *(undefined8 *)(param_4 + 0x38);
  uVar2 = 0x112f37a48;
  func_0x0001000285a8(0x112f37a48,&UNK_10db81250);
  func_0x000107c5f72c(&cStack_61);
  if (cStack_61 == '\0') {
    dVar9 = 23.0;
  }
  else {
    dVar9 = param_1;
    if (cStack_61 == '\x01') {
      dVar9 = param_1 * 0.4;
    }
  }
  func_0x000107c5f29c();
  dVar9 = dVar9 - param_2;
  uStack_88 = *(undefined8 *)(param_4 + 0x40);
  uStack_90 = *(undefined8 *)(param_4 + 0x38);
  func_0x000107c5f72c(&cStack_61,uVar2);
  uStack_80 = param_5;
  uStack_78 = param_6;
  lStack_70 = param_4;
  if (cStack_61 == '\0') {
    lVar3 = 0x112f37958;
    func_0x0001000285a8(0x112f37958,&UNK_10db81030);
    func_0x000107c61538();
    if (11.5 <= dVar9) goto LAB_10307d310;
  }
  else {
    lVar3 = 0x112f37958;
    func_0x0001000285a8(0x112f37958,&UNK_10db81030);
    func_0x000107c61538();
    if (param_1 * 0.4 * 0.5 <= dVar9) {
LAB_10307d310:
      if (*(long *)(lVar3 + 0x10) == 0) {
        cVar6 = '\x03';
      }
      else {
        cVar6 = *(char *)(lVar3 + 0x20);
        lVar4 = *(long *)(lVar3 + 0x10) + -1;
        if (lVar4 != 0) {
          pcVar5 = (char *)(lVar3 + 0x21);
          do {
            cVar1 = *pcVar5;
            dVar7 = param_1 * 0.4;
            if (cVar1 != '\x01') {
              dVar7 = param_1;
            }
            dVar8 = 23.0;
            if (cVar1 != '\0') {
              dVar8 = dVar7;
            }
            if (cVar6 == '\0') {
              dVar7 = 23.0;
            }
            else {
              dVar7 = param_1 * 0.4;
              if (cVar6 != '\x01') {
                dVar7 = param_1;
              }
            }
            if (ABS(dVar7 - dVar9) <= ABS(dVar8 - dVar9)) {
              cVar1 = cVar6;
            }
            cVar6 = cVar1;
            lVar4 = lVar4 + -1;
            pcVar5 = pcVar5 + 1;
          } while (lVar4 != 0);
        }
      }
      if (lRam0000000112f37a40 != -1) {
        func_0x000107c61568(0x112f37a40,FUN_103079dd4);
      }
      cStack_68 = cVar6;
      func_0x000107c5f300(uRam0000000113806b10,FUN_10307d6d8,&uStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(lVar3);
      return;
    }
  }
  if (lRam0000000112f37a40 != -1) {
    func_0x000107c61568(0x112f37a40,FUN_103079dd4);
  }
  func_0x000107c5f300(uRam0000000113806b10,0x10307d6f8,&uStack_90,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10307d424; end: 10307d4c7;  */

void FUN_10307d424(void)

{
  undefined8 uVar1;
  ulong uStack_28;
  
  func_0x00010307a3c4(0);
  uStack_28 = uStack_28 & 0xffffffffffffff00;
  uVar1 = 0x112d4fe10;
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f774(&uStack_28,uVar1);
  uStack_28 = 0;
  uVar1 = 0x112eb92c0;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_28,uVar1);
  return;
}



/* Entry: 10307d4c8; end: 10307d567;  */

void FUN_10307d4c8(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  if (param_2 == '\x03') {
    param_2 = '\x01';
  }
  uStack_28 = CONCAT71(uStack_28._1_7_,param_2);
  uVar1 = 0x112f37a48;
  func_0x0001000285a8(0x112f37a48,&UNK_10db81250);
  func_0x000107c5f730(&uStack_28,uVar1);
  uStack_28 = 0;
  uVar1 = 0x112eb92c0;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_28,uVar1);
  return;
}



/* Entry: 10307d568; end: 10307d573;  */

void FUN_10307d568(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE05_makeC08modifier6inputs4bodyAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVAiA01_J0V_ANtctFZ_110348800
  )();
  return;
}



/* Entry: 10307d574; end: 10307d5bb;  */

void FUN_10307d574(void)

{
  FUN_10307a9e4();
  return;
}



/* Entry: 10307d5bc; end: 10307d5df;  */

void FUN_10307d5bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar15;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  long alStack_160 [4];
  long lStack_140;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_69 [9];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_108 = unaff_x20 + 0x20;
  uVar4 = 0x112f369b8;
  uStack_128 = param_2;
  uStack_118 = param_1;
  func_0x00010002969c(0x112f369b8,&UNK_10db7f060);
  puVar9 = PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8;
  uVar2 = 0xff;
  uStack_120 = uVar4;
  func_0x000107c5f34c(0xff,uVar1,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  uVar4 = 0x112eb9330;
  func_0x00010002969c(0x112eb9330,&UNK_10db81230);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,uVar4);
  uVar4 = 0xff;
  func_0x000107c61510(0xff,&UNK_110604638,uVar3,0,0);
  uVar2 = 0xff;
  func_0x000107c5f7dc(0xff,uVar4);
  puVar5 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar2);
  uVar3 = 0xff;
  func_0x000107c5f760(0xff,uVar2,puVar5);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,PTR___s7SwiftUI12_FrameLayoutVN_110348858);
  uVar6 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,puVar9);
  uVar4 = 0x112f36ea0;
  func_0x00010002969c(0x112f36ea0,&UNK_10db7f988);
  uVar7 = 0xff;
  func_0x000107c5f34c(0xff,uVar6,uVar4);
  uVar4 = 0x112f36ea8;
  func_0x00010002969c(0x112f36ea8,&UNK_10db81240);
  puVar5 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,uVar3);
  puVar9 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_78 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar8 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_80 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar2,&puStack_80);
  puStack_88 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar5 = puVar9;
  puStack_90 = puVar8;
  func_0x000107c61520(puVar9,uVar6,&puStack_90);
  uVar2 = 0x112f36eb0;
  FUN_10307d85c(0x112f36eb0,0x112f36ea0,&UNK_10db7f988,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puStack_a0 = puVar5;
  uStack_98 = uVar2;
  func_0x000107c61520(puVar9,uVar7,&puStack_a0);
  uVar2 = 0x112f36eb8;
  FUN_10307d85c(0x112f36eb8,0x112f36ea8,&UNK_10db81240,
                PTR___s7SwiftUI13_EndedGestureVyxGAA0D0AAMc_1103488d8);
  uVar3 = 0xff;
  uStack_e0 = uVar7;
  uStack_d8 = uVar4;
  puStack_d0 = puVar9;
  uStack_c8 = uVar2;
  func_0x000107c614f8(0xff,&uStack_e0,
                      PTR___s7SwiftUI4ViewPAAE7gesture_9includingQrqd___AA11GestureMaskVtAA0F0Rd__lFQOMQ_110349628
                      ,0);
  uVar2 = 0xff;
  func_0x000107c5f34c(0xff,uVar3,PTR___s7SwiftUI25_AppearanceActionModifierVN_110349168);
  uVar4 = 0x112e09088;
  func_0x00010002969c(0x112e09088,&UNK_10db7f080);
  uVar3 = 0xff;
  func_0x000107c5f34c(0xff,uVar2,uVar4);
  uVar4 = 0xff;
  func_0x000107c61510(0xff,uStack_120,uVar3,0,0);
  uVar2 = 0xff;
  func_0x000107c5f7dc(0xff,uVar4);
  uVar4 = 0xff;
  func_0x000107c60188(0xff,uVar2);
  puVar9 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar2);
  puVar5 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  puStack_a8 = puVar9;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,uVar4,&puStack_a8);
  lVar10 = 0;
  func_0x000107c5f768(0,uVar4,puVar5);
  lStack_140 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_140 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&lStack_140 - extraout_x8;
  lVar11 = 0;
  func_0x000107c5f34c(0,lVar10,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  lStack_138 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_138 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar15 - extraout_x8_00;
  uVar4 = 0x112e02e30;
  func_0x00010002969c(0x112e02e30,&UNK_10da5a740);
  lVar12 = 0;
  lVar14 = lVar11;
  func_0x000107c5f34c(0,lVar11,uVar4);
  lStack_130 = *(long *)(lVar12 + -8);
  lVar13 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_130 + 0x40));
  lVar18 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar18 - extraout_x12;
  func_0x000107c5f7a8();
  uStack_c8 = uStack_110;
  lStack_c0 = lStack_108;
  uStack_b8 = uStack_128;
  uStack_120 = uVar1;
  puStack_d0 = (undefined *)uVar1;
  func_0x000107c5f764(lVar15);
  func_0x000107c5f7a8();
  puVar9 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,lVar10);
  *(long *)(lVar17 + -0x10) = lVar10;
  *(undefined **)(lVar17 + -8) = puVar9;
  *(long *)(lVar17 + -0x20) = lVar13;
  *(long *)(lVar17 + -0x18) = lVar14;
  *(undefined1 *)(lVar17 + -0x28) = 0;
  *(undefined8 *)(lVar17 + -0x30) = 0x7ff0000000000000;
  *(undefined1 *)(lVar17 + -0x38) = 1;
  *(undefined8 *)(lVar17 + -0x40) = 0;
  func_0x000107c5f684(lVar19,0,1,0,1,0x7ff0000000000000,0,0,1);
  (**(code **)(lStack_140 + 8))(lVar15,lVar10);
  if (lRam0000000112f37a40 != -1) {
    func_0x000107c61568(0x112f37a40,FUN_103079dd4);
  }
  uVar4 = uRam0000000113806b10;
  func_0x00010307a3c4(0,uStack_120,uStack_110);
  uStack_d8 = *(undefined8 *)(lStack_108 + 0x18);
  uStack_e0 = *(undefined8 *)(lStack_108 + 0x10);
  puStack_d0 = (undefined *)CONCAT71(puStack_d0._1_7_,*(undefined1 *)(lStack_108 + 0x20));
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f770(auStack_69);
  puVar5 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_e0 = CONCAT71(uStack_e0._1_7_,auStack_69[0]);
  puStack_e8 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar8 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_f0 = puVar9;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar11,&puStack_f0);
  func_0x000107c5f6b4(lVar18,uVar4,&uStack_e0,lVar11,PTR___sSbN_11034dd40,puVar8,
                      PTR___sSbSQsWP_11034dd50);
  (**(code **)(lStack_138 + 8))(lVar19,lVar11);
  uVar4 = 0x112e02e28;
  FUN_10307d85c(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puStack_100 = puVar8;
  uStack_f8 = uVar4;
  func_0x000107c61520(puVar5,lVar12,&puStack_100);
  FUN_103061a64(lVar17,lVar18,lVar12,puVar5);
  pcVar16 = *(code **)(lStack_130 + 8);
  (*pcVar16)(lVar18,lVar12);
  FUN_103061a64(uStack_118,lVar17,lVar12,puVar5);
  (*pcVar16)(lVar17,lVar12);
  return;
}



/* Entry: 10307d5e0; end: 10307d66f;  */

undefined8 FUN_10307d5e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f36ed0;
  func_0x0001000285a8(0x112f36ed0,&UNK_10db81260);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10307d670; end: 10307d687;  */

void FUN_10307d670(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_38 = CONCAT71(uStack_38._1_7_,*(undefined1 *)(unaff_x20 + 0x41));
  uVar1 = 0x112f37a48;
  func_0x0001000285a8(0x112f37a48,&UNK_10db81250,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c5f730(&uStack_38,uVar1);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_38 = 0;
  uVar1 = 0x112eb92c0;
  func_0x0001000285a8(0x112eb92c0,&UNK_10dad08b0);
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 10307d688; end: 10307d6c7;  */

void FUN_10307d688(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10307d6c8; end: 10307d6d7;  */

void FUN_10307d6c8(undefined8 param_1,double param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long unaff_x20;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  char cStack_68;
  char cStack_61;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  dVar9 = *(double *)(unaff_x20 + 0x78);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = 0x112f37a48;
  func_0x0001000285a8(0x112f37a48,&UNK_10db81250);
  func_0x000107c5f72c(&cStack_61);
  if (cStack_61 == '\0') {
    dVar12 = 23.0;
  }
  else {
    dVar12 = dVar9;
    if (cStack_61 == '\x01') {
      dVar12 = dVar9 * 0.4;
    }
  }
  func_0x000107c5f29c();
  dVar12 = dVar12 - param_2;
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c5f72c(&cStack_61,uVar4);
  uStack_80 = uVar1;
  uStack_78 = uVar2;
  lStack_70 = unaff_x20 + 0x20;
  if (cStack_61 == '\0') {
    lVar5 = 0x112f37958;
    func_0x0001000285a8(0x112f37958,&UNK_10db81030);
    func_0x000107c61538();
    if (11.5 <= dVar12) goto LAB_10307d310;
  }
  else {
    lVar5 = 0x112f37958;
    func_0x0001000285a8(0x112f37958,&UNK_10db81030);
    func_0x000107c61538();
    if (dVar9 * 0.4 * 0.5 <= dVar12) {
LAB_10307d310:
      if (*(long *)(lVar5 + 0x10) == 0) {
        cVar8 = '\x03';
      }
      else {
        cVar8 = *(char *)(lVar5 + 0x20);
        lVar6 = *(long *)(lVar5 + 0x10) + -1;
        if (lVar6 != 0) {
          pcVar7 = (char *)(lVar5 + 0x21);
          do {
            cVar3 = *pcVar7;
            dVar10 = dVar9 * 0.4;
            if (cVar3 != '\x01') {
              dVar10 = dVar9;
            }
            dVar11 = 23.0;
            if (cVar3 != '\0') {
              dVar11 = dVar10;
            }
            if (cVar8 == '\0') {
              dVar10 = 23.0;
            }
            else {
              dVar10 = dVar9 * 0.4;
              if (cVar8 != '\x01') {
                dVar10 = dVar9;
              }
            }
            if (ABS(dVar10 - dVar12) <= ABS(dVar11 - dVar12)) {
              cVar3 = cVar8;
            }
            cVar8 = cVar3;
            lVar6 = lVar6 + -1;
            pcVar7 = pcVar7 + 1;
          } while (lVar6 != 0);
        }
      }
      if (lRam0000000112f37a40 != -1) {
        func_0x000107c61568(0x112f37a40,FUN_103079dd4);
      }
      cStack_68 = cVar8;
      func_0x000107c5f300(uRam0000000113806b10,FUN_10307d6d8,&uStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(lVar5);
      return;
    }
  }
  if (lRam0000000112f37a40 != -1) {
    func_0x000107c61568(0x112f37a40,FUN_103079dd4);
  }
  func_0x000107c5f300(uRam0000000113806b10,0x10307d6f8,&uStack_90,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10307d6d8; end: 10307d753;  */

void FUN_10307d6d8(void)

{
  long unaff_x20;
  
  FUN_10307d4c8(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10307d754; end: 10307d7af;  */

void FUN_10307d754(void)

{
  long unaff_x20;
  
  FUN_10305a544(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10307d7b0; end: 10307d7bb;  */

void FUN_10307d7b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (lRam0000000112f37a40 != -1) {
    func_0x000107c61568(0x112f37a40,FUN_103079dd4);
  }
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  lStack_40 = unaff_x20 + 0x20;
  func_0x000107c5f300(uRam0000000113806b10,FUN_10307d7fc,auStack_60,PTR___sytN_11034f1b0 + 8);
  return;
}



/* Entry: 10307d7bc; end: 10307d7fb;  */

undefined8 FUN_10307d7bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10307d7fc; end: 10307d817;  */

void FUN_10307d7fc(void)

{
  long unaff_x20;
  
  FUN_10307cae8(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10307d818; end: 10307d827;  */

undefined1  [16] FUN_10307d818(void)

{
  return ZEXT816(0x110604778);
}



/* Entry: 10307d828; end: 10307d85b;  */

void FUN_10307d828(void)

{
  FUN_10307d85c(0x112f37ae8,0x112f37af0,&UNK_10db81298,
                PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718);
  return;
}



/* Entry: 10307d85c; end: 10307d89f;  */

void FUN_10307d85c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10307d8a0; end: 10307d8a7;  */

void FUN_10307d8a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb93c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s7SwiftUI19EmptyAnimatableDataVAA16VectorArithmeticAAMc_110348df0;
  func_0x000107c61520(PTR___s7SwiftUI19EmptyAnimatableDataVAA16VectorArithmeticAAMc_110348df0,
                      PTR___s7SwiftUI19EmptyAnimatableDataVN_110348e00);
  puRam0000000112eb93c0 = puVar1;
  return;
}



/* Entry: 10307d8a8; end: 10307d8e7;  */

void FUN_10307d8a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37af8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db812f0;
  func_0x000107c61520(&UNK_10db812f0,&UNK_110604778);
  puRam0000000112f37af8 = puVar1;
  return;
}



/* Entry: 10307d8e8; end: 10307d8eb;  */

void FUN_10307d8e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db812a0;
  func_0x000107c61520(&UNK_10db812a0,&UNK_110604778);
  puRam0000000112f37b00 = puVar1;
  return;
}



/* Entry: 10307d8ec; end: 10307d96b;  */

void FUN_10307d8ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db812a0;
  func_0x000107c61520(&UNK_10db812a0,&UNK_110604778);
  puRam0000000112f37b00 = puVar1;
  return;
}



/* Entry: 10307d96c; end: 10307d997;  */

void FUN_10307d96c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb68fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1103494d8)();
  return;
}



/* Entry: 10307d998; end: 10307de73;  */

void FUN_10307d998(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auStack_180 [8];
  ulong uStack_178;
  ulong uStack_170;
  ulong *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 auStack_118 [48];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char cStack_b8;
  undefined *puStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  
  uStack_138 = *(undefined8 *)(&UNK_10db813d0 + (param_1 & 0xff) * 8);
  uStack_140 = param_1;
  FUN_10307e424(auStack_118);
  if (cStack_b8 == '\x01') {
    puStack_130 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c610f8();
    func_0x000107c482a8(uStack_e8,uStack_e0,uStack_d8,0x3ff0000000000000);
    puStack_130 = puVar16;
  }
  puVar15 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar16 = puVar15;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  uVar4 = 0;
  FUN_10307de94(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar5 = uVar4;
  func_0x000100deaee4();
  puVar15 = puVar16;
  func_0x000107c5fe10(puVar16,uVar4,uVar5);
  func_0x000107c61170();
  if (((ulong)puVar15 & 0xc000000000000001) == 0) {
    lStack_98 = 0;
    uVar12 = -1L << ((ulong)(byte)puVar15[0x20] & 0x3f);
    puStack_a8 = (ulong *)(puVar15 + 0x38);
    uStack_a0 = ~uVar12;
    uVar12 = -uVar12;
    uStack_90 = 0xffffffffffffffff;
    if (uVar12 < 0x40) {
      uStack_90 = ~(-1L << (uVar12 & 0x3f));
    }
    uStack_90 = uStack_90 & *puStack_a8;
  }
  else {
    puVar16 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar16 = puVar15;
    }
    func_0x000107c60288();
    func_0x000107c5fe30(&puStack_b0);
    puVar15 = puStack_b0;
  }
  uStack_170 = uStack_a0 + 0x40 >> 6;
  lVar9 = lStack_98;
  uVar12 = uStack_90;
  uVar13 = uStack_170;
  puVar14 = puStack_a8;
  uStack_178 = uStack_a0;
  puStack_168 = puStack_a8;
  puStack_160 = puVar15;
  uStack_158 = uVar4;
  do {
    lVar8 = lVar9;
    uVar10 = uVar12;
    if ((long)puVar15 < 0) {
      func_0x000107c602ac();
      if (puVar16 == (undefined *)0x0) {
LAB_10307de1c:
        func_0x000100deaf38(puVar15,puVar14,uStack_178,lVar9,uVar12);
        func_0x000107c61170(puStack_130);
        return;
      }
      puStack_128 = puVar16;
      func_0x000107c6147c(&uStack_120,&puStack_128,PTR___syXlN_11034f1a0 + 8,uVar4,7);
      puVar16 = (undefined *)CONCAT71(uStack_11f,uStack_120);
      puVar11 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    else {
      while (uVar10 == 0) {
        lVar7 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10307de70);
          (*pcVar2)();
        }
        if ((long)uVar13 <= lVar7) {
          uVar12 = 0;
          goto LAB_10307de1c;
        }
        lVar8 = lVar7;
        uVar10 = puVar14[lVar7];
      }
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      puVar16 = *(undefined **)
                 (*(long *)(puVar15 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                 lVar8 * 0x200);
      func_0x000107c61174(puVar16);
      puVar11 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
    PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar11;
    if (puVar16 == (undefined *)0x0) goto LAB_10307de1c;
    func_0x000107c61168(puVar11);
    puVar6 = puVar16;
    func_0x000107c6148c(puVar16,puVar11);
    lVar9 = lVar8;
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c61170();
      uVar12 = uVar10;
    }
    else {
      puStack_150 = puVar16;
      uStack_148 = uVar10;
      func_0x000107c5e408();
      func_0x000107c61180();
      uVar5 = 0;
      FUN_10307de94(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
      puVar16 = puVar6;
      func_0x000107c5fc54(puVar6,uVar5);
      func_0x000107c61170(puVar6);
      if ((ulong)puVar16 >> 0x3e == 0) {
        puVar11 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar16) {
          puVar11 = puVar16;
        }
        func_0x000107c60480();
      }
      if (puVar11 == (undefined *)0x0) {
        func_0x000107c61170(puStack_150);
        func_0x000107c6142c();
        uVar12 = uStack_148;
      }
      else {
        iVar3 = 2;
        func_0x000100029b9c(2,0x11,0,0);
        if ((long)puVar11 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10307de74);
          (*pcVar2)();
        }
        puVar15 = (undefined *)0x0;
        do {
          if (((ulong)puVar16 & 0xc000000000000001) == 0) {
            puVar6 = *(undefined **)(puVar16 + (long)puVar15 * 8 + 0x20);
            func_0x000107c61174(puVar6);
          }
          else {
            puVar6 = puVar15;
            func_0x000100de9de8(puVar15,puVar16);
          }
          func_0x000107c57168();
          func_0x000107c59e10(puVar6);
          if (iVar3 == 0) {
            func_0x000107c61170(puVar6);
          }
          else {
            uStack_120 = (undefined1)uStack_140;
            lVar7 = 0;
            func_0x000107c5f17c();
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40))
            ;
            func_0x000107c600e4(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x000103075064();
            lVar8 = lVar7;
            func_0x0001030750a4();
            func_0x000107c5f180(&uStack_120,&UNK_110604ba0,&UNK_110604ba0,lVar7,lVar8);
            func_0x000107c600e8(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            func_0x000107c61170(puVar6);
          }
          puVar15 = puVar15 + 1;
        } while (puVar11 != puVar15);
        func_0x000107c61170(puStack_150);
        func_0x000107c6142c();
        uVar4 = uStack_158;
        puVar15 = puStack_160;
        uVar12 = uStack_148;
        uVar13 = uStack_170;
        puVar14 = puStack_168;
      }
    }
  } while( true );
}



/* Entry: 10307de74; end: 10307de93;  */

void FUN_10307de74(void)

{
  func_0x000107c61168(&PTR_PTR_112f37b50);
  return;
}



/* Entry: 10307de94; end: 10307ded3;  */

void FUN_10307de94(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10307ded4; end: 10307dfcb;  */

void FUN_10307ded4(double param_1,double param_2,double param_3)

{
  double dVar1;
  
  dVar1 = 0.0;
  if (param_1 != 0.0) {
    dVar1 = param_1;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (param_2 != 0.0) {
    dVar1 = param_2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (param_3 != 0.0) {
    dVar1 = param_3;
  }
  func_0x000107c606a0(dVar1);
  return;
}



/* Entry: 10307dfcc; end: 10307dfe3;  */

void FUN_10307dfcc(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  dVar2 = *unaff_x20;
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  func_0x000107c6068c(auStack_88,0);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10307dfe4; end: 10307e03f;  */

void FUN_10307dfe4(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  func_0x000107c6068c(auStack_88);
  FUN_10307ded4(uVar1,uVar2,uVar3,auStack_88);
  func_0x000107c606a8();
  return;
}



/* Entry: 10307e040; end: 10307e06f;  */

bool FUN_10307e040(double *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  if (!bVar1) {
    return false;
  }
  return param_1[2] == param_2[2];
}



/* Entry: 10307e070; end: 10307e2df;  */

void FUN_10307e070(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[4];
  dVar3 = unaff_x20[5];
  dVar1 = 0.0;
  if (unaff_x20[3] != 0.0) {
    dVar1 = unaff_x20[3];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[7];
  dVar3 = unaff_x20[8];
  dVar1 = 0.0;
  if (unaff_x20[6] != 0.0) {
    dVar1 = unaff_x20[6];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[10];
  dVar3 = unaff_x20[0xb];
  dVar1 = 0.0;
  if (unaff_x20[9] != 0.0) {
    dVar1 = unaff_x20[9];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  return;
}



/* Entry: 10307e2e0; end: 10307e2e7;  */

void FUN_10307e2e0(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [72];
  
  func_0x000107c6068c(auStack_88,0);
  dVar2 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[4];
  dVar3 = unaff_x20[5];
  dVar1 = 0.0;
  if (unaff_x20[3] != 0.0) {
    dVar1 = unaff_x20[3];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[7];
  dVar3 = unaff_x20[8];
  dVar1 = 0.0;
  if (unaff_x20[6] != 0.0) {
    dVar1 = unaff_x20[6];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[10];
  dVar3 = unaff_x20[0xb];
  dVar1 = 0.0;
  if (unaff_x20[9] != 0.0) {
    dVar1 = unaff_x20[9];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10307e2e8; end: 10307e31f;  */

void FUN_10307e2e8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_10307e070(auStack_68);
  func_0x000107c606a8();
  return;
}



/* Entry: 10307e320; end: 10307e377;  */

uint FUN_10307e320(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10307eddc(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10307e378; end: 10307e423;  */

void FUN_10307e378(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10307e424; end: 10307e81f;  */

void FUN_10307e424(undefined8 *param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  param_2 = param_2 & 0xff;
  uVar4 = *(undefined8 *)(&UNK_10db818c8 + param_2 * 8);
  uVar5 = *(undefined8 *)(&UNK_10db819a8 + param_2 * 8);
  uVar6 = *(undefined8 *)(&UNK_10db81a88 + param_2 * 8);
  uVar7 = *(undefined8 *)(&UNK_10db81b68 + param_2 * 8);
  uVar8 = *(undefined8 *)(&UNK_10db81c48 + param_2 * 8);
  uVar9 = *(undefined8 *)(&UNK_10db81d28 + param_2 * 8);
  uVar10 = *(undefined8 *)(&UNK_10db81e08 + param_2 * 8);
  uVar2 = *(undefined8 *)(&UNK_10db81ee8 + param_2 * 8);
  uVar3 = *(undefined8 *)(&UNK_10db81fc8 + param_2 * 8);
  *param_1 = *(undefined8 *)(&UNK_10db817e8 + param_2 * 8);
  param_1[1] = uVar4;
  uVar4 = *(undefined8 *)(&UNK_10db820a8 + param_2 * 8);
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  uVar5 = *(undefined8 *)(&UNK_10db82188 + param_2 * 8);
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  uVar1 = (&UNK_10db82268)[param_2];
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  param_1[8] = uVar2;
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  return;
}



/* Entry: 10307e820; end: 10307e84b;  */

void FUN_10307e820(void)

{
  func_0x0001000285a8(0x112f37bf0,&UNK_10db814f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_initStaticObject_11034f440)();
  return;
}



/* Entry: 10307e84c; end: 10307eb7b;  */

/* WARNING: Possible PIC construction at 0x00010307ec5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010307ebc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010307ec60) */
/* WARNING: Removing unreachable block (ram,0x00010307ebc4) */

undefined1  [16] FUN_10307e84c(ulong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  puVar3 = (undefined1 *)0xe600000000000000;
  puVar1 = (undefined1 *)0x6d6574737973;
  param_1 = param_1 & 0xff;
  puVar2 = puVar1;
  switch(param_1) {
  default:
    puVar3 = (undefined1 *)0xe500000000000000;
  case 0x62:
  case 0x7c:
  case 0x8a:
  case 0xca:
  case 0xe4:
  case 0xf2:
    puVar1 = (undefined1 *)0x696c;
  case 0x2f:
  case 0x43:
  case 0x4b:
  case 0x53:
  case 0x5b:
  case 0x6f:
  case 0x83:
  case 0x97:
  case 0xab:
  case 0xb3:
  case 0xbb:
  case 0xc3:
  case 0xd7:
  case 0xeb:
  case 0xff:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffffffff0000ffff | 0x68670000);
  case 0x3a:
  case 0x7a:
  case 0xa2:
  case 0xe2:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x7400000000);
  case 0x3c:
  case 0xa4:
    auVar5._8_8_ = puVar3;
    auVar5._0_8_ = puVar1;
    return auVar5;
  case 2:
    auVar12._8_8_ = 0xe400000000000000;
    auVar12._0_8_ = 0x6b726164;
    return auVar12;
  case 3:
    puVar3 = (undefined1 *)0xe800000000000000;
    puVar1 = (undefined1 *)0x6c426b726164;
  case 0x4e:
  case 0x56:
  case 0x5e:
  case 0x86:
  case 0xb6:
  case 0xbe:
  case 0xc6:
  case 0xee:
    auVar14._0_8_ = (ulong)puVar1 | 0x6575000000000000;
    auVar14._8_8_ = puVar3;
    return auVar14;
  case 4:
    puVar3 = (undefined1 *)0xe800000000000000;
    puVar1 = (undefined1 *)0x694d6b726164;
  case 0x24:
    auVar8._0_8_ = (ulong)puVar1 | 0x746e000000000000;
    auVar8._8_8_ = puVar3;
    return auVar8;
  case 5:
  case 0xec:
    auVar18._8_8_ = 0xe800000000000000;
    auVar18._0_8_ = 0x6b6e69506b726164;
    return auVar18;
  case 6:
    auVar21._8_8_ = 0xea0000000000656c;
    auVar21._0_8_ = 0x707275506b726164;
    return auVar21;
  case 7:
  case 0x94:
    puVar1 = (undefined1 *)0x42746867696c;
  case 0xd8:
    auVar15._0_8_ = (ulong)puVar1 | 0x756c000000000000;
    auVar15._8_8_ = 0xe900000000000065;
    return auVar15;
  case 8:
    param_1 = 0xe900000000000065;
  case 0x6a:
  case 0x92:
  case 0xd2:
  case 0xfa:
    puVar3 = (undefined1 *)(param_1 + 0xf);
    puVar1 = (undefined1 *)0x4d746867696c;
  case 0x68:
    auVar24._0_8_ = (ulong)puVar1 | 0x6e69000000000000;
    auVar24._8_8_ = puVar3;
    return auVar24;
  case 9:
    puVar1 = (undefined1 *)0x6e6950746867696c;
  case 0xe8:
    auVar10._8_8_ = 0xe90000000000006b;
    auVar10._0_8_ = puVar1;
    return auVar10;
  case 10:
    puVar3 = (undefined1 *)0xeb00000000656c70;
    goto code_r0x00010307eac0;
  case 0xb:
    puVar3 = (undefined1 *)0xeb00000000776f6c;
  case 0x31:
  case 0x71:
  case 0x99:
  case 0xd9:
    auVar7._8_8_ = puVar3;
    auVar7._0_8_ = 0x6c6559746867696c;
    return auVar7;
  case 0xc:
    auVar9._8_8_ = 0xee006e6565724765;
    auVar9._0_8_ = 0x756c42746867696c;
    return auVar9;
  case 0xd:
    auVar20._8_8_ = 0xef776f6c6c65596b;
    auVar20._0_8_ = 0x6e6950746867696c;
    return auVar20;
  case 0xe:
  case 0x44:
    puVar3 = (undefined1 *)0x6e6950656c70;
  case 0xad:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0xef6b000000000000);
  case 0x25:
  case 0x45:
  case 0xfc:
code_r0x00010307eac0:
    puVar1 = (undefined1 *)0x50746867696c;
code_r0x00010307eacc:
    puVar1 = (undefined1 *)((ulong)puVar1 | 0x7275000000000000);
    goto code_r0x00010307ead0;
  case 0xf:
    puVar1 = (undefined1 *)0x74736170;
  case 0xa8:
  case 0xb0:
  case 0xb8:
  case 0xc0:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff0000ffffffff | 0x6c6500000000);
code_r0x00010307e994:
    auVar13._0_8_ = (ulong)puVar1 | 0x7053000000000000;
    auVar13._8_8_ = 0xec000000676e6972;
    return auVar13;
  case 0x10:
    puVar1 = (undefined1 *)0x7978616c6167;
  case 0x28:
    goto code_r0x00010307e994;
  case 0x11:
  case 0xc4:
    puVar3 = (undefined1 *)0xef676e6972705368;
  case 0xbc:
    puVar1 = (undefined1 *)0x736966796c6c656a;
  case 0xb4:
    auVar16._8_8_ = puVar3;
    auVar16._0_8_ = puVar1;
    return auVar16;
  case 0x12:
    puVar3 = (undefined1 *)0xec00000072656d6d;
    puVar1 = (undefined1 *)0x656c676e756a;
  case 0xf8:
    auVar22._0_8_ = (ulong)puVar1 | 0x7553000000000000;
    auVar22._8_8_ = puVar3;
    return auVar22;
  case 0x13:
    puVar3 = (undefined1 *)0x6d6d7553;
  case 0x2e:
  case 0x42:
  case 0x4a:
  case 0x52:
  case 0x5a:
  case 0x6e:
  case 0x82:
  case 0x96:
  case 0xaa:
  case 0xb2:
  case 0xba:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xfe:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0xee00726500000000);
    puVar1 = (undefined1 *)0x67696e64696d;
  case 0x40:
  case 0x48:
  case 0x50:
  case 0x58:
  case 0x69:
  case 0x91:
  case 0xac:
    puVar1 = (undefined1 *)((ulong)puVar1 | 0x7468000000000000);
  case 0xd1:
  case 0xf9:
    auVar26._8_8_ = puVar3;
    auVar26._0_8_ = puVar1;
    return auVar26;
  case 0x14:
    pcVar4 = "opalescentSummer";
    goto code_r0x00010307ea10;
  case 0x15:
    auVar19._8_8_ = 0xea00000000007265;
    auVar19._0_8_ = 0x6d6d75536c6f6f70;
    return auVar19;
  case 0x16:
    puVar3 = (undefined1 *)0x73796164;
  case 0x70:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0xec00000000000000);
  case 0x6c:
    auVar25._8_8_ = puVar3;
    auVar25._0_8_ = 0x696c6f48776f6e73;
    return auVar25;
  case 0x17:
    puVar3 = (undefined1 *)0xed00007379616469;
    puVar1 = (undefined1 *)0x6c70;
  case 0x4c:
    auVar27._0_8_ = (ulong)puVar1 & 0xffff00000000ffff | 0x6c6f486469610000;
    auVar27._8_8_ = puVar3;
    return auVar27;
  case 0x18:
    pcVar4 = "kawaiiValentines";
code_r0x00010307ea10:
    auVar17._8_8_ = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000010;
    return auVar17;
  case 0x19:
    puVar3 = (undefined1 *)0x73656e69746e;
  case 0xd0:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0xee00000000000000);
    puVar1 = (undefined1 *)0x616c;
  case 0x2d:
  case 0x41:
  case 0x49:
  case 0x51:
  case 0x59:
  case 0x6d:
  case 0x81:
  case 0x95:
  case 0xa9:
  case 0xb1:
  case 0xb9:
  case 0xc1:
  case 0xd5:
  case 0xe9:
  case 0xfd:
    puVar1 = (undefined1 *)((ulong)puVar1 & 0xffff00000000ffff | 0x656c615665630000);
  case 0xd4:
    auVar11._8_8_ = puVar3;
    auVar11._0_8_ = puVar1;
    return auVar11;
  case 0x1a:
  case 0x54:
    puVar3 = (undefined1 *)0x6577;
  case 0x2c:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0xec0000006e650000);
    puVar1 = (undefined1 *)0x6572;
  case 0x32:
  case 0x5c:
  case 0x72:
  case 0x9a:
  case 0xda:
    auVar28._0_8_ = (ulong)puVar1 & 0xffff00000000ffff | 0x6f6c6c6148640000;
    auVar28._8_8_ = puVar3;
    return auVar28;
  case 0x1b:
  case 0x6b:
  case 0x93:
  case 0xd3:
  case 0xfb:
    puVar1 = (undefined1 *)0x64656b636977;
  case 0:
    auVar6._8_8_ = 0xe600000000000000;
    auVar6._0_8_ = puVar1;
    return auVar6;
  case 0x26:
  case 0x46:
  case 0xae:
    unaff_x20 = (undefined1 *)0xe600000000000000;
  case 0x30:
    unaff_x19 = unaff_x20;
    func_0x000107c5fb58();
    break;
  case 0x4d:
  case 0x55:
  case 0x5d:
  case 0x85:
    unaff_x19 = (undefined1 *)0xe600000000000000;
    puVar2 = &stack0x00000008;
    param_3 = puVar1;
  case 0xb5:
  case 0xbd:
  case 0xc5:
  case 0xed:
    func_0x000107c5fb58(puVar2,param_3,unaff_x19);
    break;
  case 0x80:
code_r0x00010307ead0:
    auVar23._8_8_ = puVar3;
    auVar23._0_8_ = puVar1;
    return auVar23;
  case 0x84:
    FUN_10307e84c();
    puVar2 = &stack0x00000008;
    param_3 = puVar1;
    unaff_x19 = puVar3;
  case 0x90:
    puVar3 = param_3;
  case 0x4f:
  case 0x57:
  case 0x5f:
  case 0x87:
  case 0xb7:
  case 0xbf:
  case 199:
  case 0xef:
    param_3 = puVar3;
    func_0x000107c5fb58(puVar2,param_3,unaff_x19);
    break;
  case 0x98:
    goto code_r0x00010307eacc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(unaff_x19);
  auVar29._8_8_ = param_3;
  auVar29._0_8_ = unaff_x19;
  return auVar29;
}



/* Entry: 10307eb7c; end: 10307ed0b;  */

void FUN_10307eb7c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_10307e84c(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10307ed0c; end: 10307ed7b;  */

void FUN_10307ed0c(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  if (lRam0000000112f37ef0 != -1) {
    func_0x000107c61568(0x112f37ef0,0x10307f46c);
  }
  lVar2 = lRam0000000113806b18;
  func_0x000107c4b940(*(undefined8 *)(lRam0000000113806b18 + 0x40));
  uVar1 = *(undefined1 *)(lVar2 + 0x48);
  func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x40));
  *param_1 = uVar1;
  return;
}



/* Entry: 10307ed7c; end: 10307eda3;  */

void FUN_10307ed7c(void)

{
  func_0x000107c5f188();
  return;
}



/* Entry: 10307eda4; end: 10307edab;  */

undefined8 FUN_10307eda4(void)

{
  return 1;
}



/* Entry: 10307edac; end: 10307eddb;  */

uint FUN_10307edac(uint param_1)

{
  func_0x000107c5f18c();
  return param_1 & 1;
}



/* Entry: 10307eddc; end: 10307ee9b;  */

undefined8 FUN_10307eddc(double *param_1,double *param_2)

{
  bool bVar1;
  
  if (*param_1 == *param_2) {
    bVar1 = false;
    if ((param_1[1] == param_2[1]) && (bVar1 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
      bVar1 = param_1[2] == param_2[2];
    }
    if ((bVar1) && (param_1[3] == param_2[3])) {
      bVar1 = false;
      if ((param_1[4] == param_2[4]) && (bVar1 = false, !NAN(param_1[5]) && !NAN(param_2[5]))) {
        bVar1 = param_1[5] == param_2[5];
      }
      if ((((bVar1) && (param_1[6] == param_2[6])) && (param_1[7] == param_2[7])) &&
         (((param_1[8] == param_2[8] && (param_1[9] == param_2[9])) &&
          ((param_1[10] == param_2[10] && (param_1[0xb] == param_2[0xb])))))) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 10307ee9c; end: 10307ef07;  */

ulong FUN_10307ee9c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c60608();
  func_0x000107c6142c(param_2);
  if (0x1b < uVar1) {
    uVar1 = 0x1c;
  }
  return uVar1;
}



/* Entry: 10307ef08; end: 10307ef0b;  */

void FUN_10307ef08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db81538;
  func_0x000107c61520(&UNK_10db81538,&UNK_1106049c8);
  puRam0000000112f37bf8 = puVar1;
  return;
}



/* Entry: 10307ef0c; end: 10307ef4b;  */

void FUN_10307ef0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37bf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db81538;
  func_0x000107c61520(&UNK_10db81538,&UNK_1106049c8);
  puRam0000000112f37bf8 = puVar1;
  return;
}



/* Entry: 10307ef4c; end: 10307ef4f;  */

void FUN_10307ef4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db815a0;
  func_0x000107c61520(&UNK_10db815a0,&UNK_110604a50);
  puRam0000000112f37c00 = puVar1;
  return;
}



/* Entry: 10307ef50; end: 10307ef8f;  */

void FUN_10307ef50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db815a0;
  func_0x000107c61520(&UNK_10db815a0,&UNK_110604a50);
  puRam0000000112f37c00 = puVar1;
  return;
}



/* Entry: 10307ef90; end: 10307ef93;  */

void FUN_10307ef90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db815c8;
  func_0x000107c61520(&UNK_10db815c8,&UNK_110604af0);
  puRam0000000112f37c08 = puVar1;
  return;
}



/* Entry: 10307ef94; end: 10307efd3;  */

void FUN_10307ef94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db815c8;
  func_0x000107c61520(&UNK_10db815c8,&UNK_110604af0);
  puRam0000000112f37c08 = puVar1;
  return;
}



/* Entry: 10307efd4; end: 10307efdb;  */

void FUN_10307efd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db81630;
  func_0x000107c61520(&UNK_10db81630,&UNK_110604b80);
  puRam0000000112f37698 = puVar1;
  return;
}



/* Entry: 10307efdc; end: 10307f02b;  */

void FUN_10307efdc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f37c10 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37620;
  func_0x00010002969c(0x112f37620,&UNK_10db816d0);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f37c10 = puVar2;
  return;
}



/* Entry: 10307f02c; end: 10307f087;  */

int FUN_10307f02c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10307f088; end: 10307f0b3;  */

long FUN_10307f088(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10307f0b4; end: 10307f3f7;  */

int FUN_10307f0b4(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10307f3f8; end: 10307f437;  */

undefined8 FUN_10307f3f8(void)

{
  if (lRam0000000112f37ef0 != -1) {
    func_0x000107c61568(0x112f37ef0,0x10307f46c);
  }
  return 0x113806b18;
}



/* Entry: 10307f438; end: 10307f4e3;  */

undefined1 FUN_10307f438(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c4b940(uVar2);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x48);
  func_0x000107c5d278(uVar2);
  return uVar1;
}



/* Entry: 10307f4e4; end: 10307f557;  */

void FUN_10307f4e4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f11b7f0);
  uRam0000000113806b20 = uVar1;
  return;
}



/* Entry: 10307f558; end: 10307f59b;  */

long FUN_10307f558(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10307f59c; end: 10307f68f;  */

void FUN_10307f59c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c4b940(uVar2);
  *(char *)(unaff_x20 + 0x48) = (char)param_1;
  func_0x000107c5d278(uVar2);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  FUN_10307f558(unaff_x20 + 0x10,auStack_70);
  func_0x0001000a8868(auStack_70,uStack_58);
  (**(code **)(lStack_50 + 8))(param_1,uStack_58,lStack_50);
  func_0x0001000834e4(auStack_70);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  if (lRam0000000112f37ef8 != -1) {
    func_0x000107c61568(0x112f37ef8,FUN_10307f4e4);
  }
  func_0x000107c4eb88(puVar1);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10307f690; end: 10307f6db;  */

void FUN_10307f690(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10307f6dc; end: 10307f74b;  */

void FUN_10307f6dc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uRam0000000113806b28 = 0xd000000000000017;
  uRam0000000113806b30 = 0x800000010f11b890;
  uRam0000000113806b40 = 0xed00007974696c69;
  uRam0000000113806b38 = 0x6269737365636341;
  puRam0000000113806b48 = puVar1;
  uRam0000000113806b50 = 0;
  uRam0000000113806b58 = 0xe000000000000000;
  uRam0000000113806b60 = 0;
  uRam0000000113806b68 = 0xe000000000000000;
  return;
}



/* Entry: 10307f74c; end: 10307f78b;  */

undefined8 FUN_10307f74c(void)

{
  if (lRam000000011350c850 != -1) {
    func_0x000107c61568(0x11350c850,FUN_10307f6dc);
  }
  return 0x113806b28;
}



/* Entry: 10307f78c; end: 10307f7fb;  */

void FUN_10307f78c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uRam0000000113806b70 = 0xd000000000000011;
  uRam0000000113806b78 = 0x800000010f11b870;
  uRam0000000113806b88 = 0xed00007974696c69;
  uRam0000000113806b80 = 0x6269737365636341;
  puRam0000000113806b90 = puVar1;
  uRam0000000113806b98 = 0;
  uRam0000000113806ba0 = 0xe000000000000000;
  uRam0000000113806ba8 = 0;
  uRam0000000113806bb0 = 0xe000000000000000;
  return;
}



/* Entry: 10307f7fc; end: 10307f83b;  */

undefined8 FUN_10307f7fc(void)

{
  if (lRam000000011350c858 != -1) {
    func_0x000107c61568(0x11350c858,FUN_10307f78c);
  }
  return 0x113806b70;
}



/* Entry: 10307f83c; end: 10307f8ab;  */

void FUN_10307f83c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uRam0000000113806bb8 = 0xd000000000000011;
  uRam0000000113806bc0 = 0x800000010f11b850;
  uRam0000000113806bd0 = 0xed00007974696c69;
  uRam0000000113806bc8 = 0x6269737365636341;
  puRam0000000113806bd8 = puVar1;
  uRam0000000113806be0 = 0;
  uRam0000000113806be8 = 0xe000000000000000;
  uRam0000000113806bf0 = 0;
  uRam0000000113806bf8 = 0xe000000000000000;
  return;
}



/* Entry: 10307f8ac; end: 10307f99b;  */

undefined8 FUN_10307f8ac(void)

{
  if (lRam000000011350c860 != -1) {
    func_0x000107c61568(0x11350c860,FUN_10307f83c);
  }
  return 0x113806bb8;
}



/* Entry: 10307f99c; end: 10307fa0b;  */

void FUN_10307f99c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uRam0000000113806c48 = 0xd000000000000014;
  uRam0000000113806c50 = 0x800000010f11b830;
  uRam0000000113806c60 = 0xed00007974696c69;
  uRam0000000113806c58 = 0x6269737365636341;
  puRam0000000113806c68 = puVar1;
  uRam0000000113806c70 = 0;
  uRam0000000113806c78 = 0xe000000000000000;
  uRam0000000113806c80 = 0;
  uRam0000000113806c88 = 0xe000000000000000;
  return;
}



/* Entry: 10307fa0c; end: 10307fe4f;  */

undefined8 FUN_10307fa0c(void)

{
  if (lRam000000011350c870 != -1) {
    func_0x000107c61568(0x11350c870,FUN_10307f99c);
  }
  return 0x113806c48;
}



/* Entry: 10307fe50; end: 10307febf;  */

void FUN_10307fe50(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168();
  func_0x000107c4c12c();
  func_0x000107c61180();
  uRam0000000113806e40 = 0xd000000000000010;
  uRam0000000113806e48 = 0x800000010f11b810;
  uRam0000000113806e58 = 0xed00007974696c69;
  uRam0000000113806e50 = 0x6269737365636341;
  puRam0000000113806e60 = puVar1;
  uRam0000000113806e68 = 0;
  uRam0000000113806e70 = 0xe000000000000000;
  uRam0000000113806e78 = 0;
  uRam0000000113806e80 = 0xe000000000000000;
  return;
}



/* Entry: 10307fec0; end: 10307feff;  */

undefined8 FUN_10307fec0(void)

{
  if (lRam000000011350c8a8 != -1) {
    func_0x000107c61568(0x11350c8a8,FUN_10307fe50);
  }
  return 0x113806e40;
}



/* Entry: 10307ff00; end: 10307ff23;  */

undefined1  [16] FUN_10307ff00(void)

{
  return ZEXT816(0x110604cb0);
}



/* Entry: 10307ff24; end: 10308002f;  */

undefined1  [16] FUN_10307ff24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x20;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar9 = *unaff_x20;
  uVar10 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  uVar6 = unaff_x20[7];
  uVar11 = unaff_x20[8];
  if (lRam0000000112f38050 != -1) {
    func_0x000107c61568(0x112f38050,&UNK_100083564);
  }
  lVar7 = lRam0000000113806e88;
  func_0x000107c61428(lRam0000000113806e88 + 0x10,auStack_78,0,0);
  FUN_103080030(lVar7 + 0x10,auStack_a0);
  puVar8 = auStack_a0;
  func_0x0001000a8868(puVar8,uStack_88);
  (**(code **)(lStack_80 + 8))
            (puVar8,uVar9,uVar10,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar11,uStack_88,lStack_80);
  func_0x0001000834e4(auStack_a0);
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = uVar9;
  return auVar12;
}



/* Entry: 103080030; end: 1030800df;  */

long FUN_103080030(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1030800e0; end: 10308015b;  */

undefined8 * FUN_1030800e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar4 = param_2[8];
  param_1[8] = uVar4;
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  return param_1;
}



/* Entry: 10308015c; end: 10308021f;  */

undefined8 * FUN_10308015c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103080220; end: 103080293;  */

undefined8 * FUN_103080220(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103080294; end: 103080373;  */

int FUN_103080294(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103080374; end: 103080397;  */

void FUN_103080374(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103080398; end: 10308047f;  */

undefined1  [16]
FUN_103080398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 *puVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *unaff_x20;
  func_0x000107c61428(lVar2 + 0x10,auStack_78,0,0);
  FUN_103080030(lVar2 + 0x10,auStack_a0);
  puVar1 = auStack_a0;
  func_0x0001000a8868(puVar1,uStack_88);
  (**(code **)(lStack_80 + 8))
            (puVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             uStack_88,lStack_80);
  func_0x0001000834e4(auStack_a0);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 103080480; end: 103080527;  */

void FUN_103080480(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [72];
  
  dVar2 = *unaff_x20;
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  dVar5 = unaff_x20[3];
  func_0x000107c6068c(auStack_98,0);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar5 != 0.0) {
    dVar1 = dVar5;
  }
  func_0x000107c606a0(dVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103080528; end: 1030805a3;  */

void FUN_103080528(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar4 = unaff_x20[3];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  return;
}



/* Entry: 1030805a4; end: 103080647;  */

void FUN_1030805a4(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [72];
  
  dVar2 = *unaff_x20;
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  dVar5 = unaff_x20[3];
  func_0x000107c6068c(auStack_98);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar5 != 0.0) {
    dVar1 = dVar5;
  }
  func_0x000107c606a0(dVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103080648; end: 103080683;  */

bool FUN_103080648(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = false;
  if ((*param_1 == *param_2) && (bVar1 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar1 = param_1[1] == param_2[1];
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(param_1[2]) && !NAN(param_2[2]))) {
    bVar2 = param_1[2] == param_2[2];
  }
  if (!bVar2) {
    return false;
  }
  return param_1[3] == param_2[3];
}



/* Entry: 103080684; end: 10308087f;  */

void FUN_103080684(void)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x12;
  double *unaff_x20;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar3 = 0;
  func_0x000107c5f6c4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = *unaff_x20;
  if (dVar7 == unaff_x20[4]) {
    dVar8 = unaff_x20[1];
    dVar9 = unaff_x20[2];
    dVar10 = unaff_x20[3];
    bVar1 = false;
    if ((dVar8 == unaff_x20[5]) && (bVar1 = false, !NAN(dVar9) && !NAN(unaff_x20[6]))) {
      bVar1 = dVar9 == unaff_x20[6];
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(dVar10) && !NAN(unaff_x20[7]))) {
      bVar2 = dVar10 == unaff_x20[7];
    }
    if (bVar2) {
      (**(code **)(extraout_x12 + 0x68))
                (lVar3,*(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8)
      ;
      func_0x000107c5f6d8(dVar7,dVar8,dVar9,dVar10,lVar3);
      return;
    }
  }
  puVar4 = &UNK_110604e68;
  func_0x000107c613fc(&UNK_110604e68,0x50,7);
  dVar7 = *unaff_x20;
  dVar9 = unaff_x20[3];
  dVar8 = unaff_x20[2];
  *(double *)(puVar4 + 0x18) = unaff_x20[1];
  *(double *)(puVar4 + 0x10) = dVar7;
  *(double *)(puVar4 + 0x28) = dVar9;
  *(double *)(puVar4 + 0x20) = dVar8;
  dVar7 = unaff_x20[4];
  dVar9 = unaff_x20[7];
  dVar8 = unaff_x20[6];
  *(double *)(puVar4 + 0x38) = unaff_x20[5];
  *(double *)(puVar4 + 0x30) = dVar7;
  *(double *)(puVar4 + 0x48) = dVar9;
  *(double *)(puVar4 + 0x40) = dVar8;
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
  pcStack_50 = FUN_103080880;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_103080c38;
  puStack_58 = &UNK_110604e80;
  ppuVar6 = &puStack_70;
  puStack_48 = puVar4;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c46724(puVar5);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puStack_48);
  func_0x000107c5f6c0(puVar5);
  return;
}



/* Entry: 103080880; end: 103080887;  */

void FUN_103080880(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  bool bVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar1 = (undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5d9c8();
  bVar6 = param_1 == 2;
  lVar2 = 8;
  if (bVar6) {
    lVar2 = 0x28;
  }
  lVar3 = 0x10;
  if (bVar6) {
    lVar3 = 0x30;
  }
  lVar4 = 0x18;
  if (bVar6) {
    lVar4 = 0x38;
  }
  uVar7 = *(undefined8 *)((long)puVar1 + lVar4);
  uVar8 = *(undefined8 *)((long)puVar1 + lVar3);
  puVar5 = puVar1;
  if (bVar6) {
    puVar5 = (undefined8 *)(unaff_x20 + 0x30);
  }
  uVar9 = *puVar5;
  uVar10 = *(undefined8 *)((long)puVar1 + lVar2);
  func_0x000107c610f8(PTR__OBJC_CLASS___UIColor_1126aea70);
                    /* WARNING: Could not recover jumptable at 0x00010c03d7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar9,uVar10,uVar8,uVar7);
  return;
}



/* Entry: 103080888; end: 103080a47;  */

void FUN_103080888(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar4 = unaff_x20[3];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[5];
  dVar3 = unaff_x20[6];
  dVar4 = unaff_x20[7];
  dVar1 = 0.0;
  if (unaff_x20[4] != 0.0) {
    dVar1 = unaff_x20[4];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  return;
}



/* Entry: 103080a48; end: 103080a4f;  */

void FUN_103080a48(void)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [72];
  
  func_0x000107c6068c(auStack_88,0);
  dVar2 = unaff_x20[1];
  dVar3 = unaff_x20[2];
  dVar4 = unaff_x20[3];
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  dVar2 = unaff_x20[5];
  dVar3 = unaff_x20[6];
  dVar4 = unaff_x20[7];
  dVar1 = 0.0;
  if (unaff_x20[4] != 0.0) {
    dVar1 = unaff_x20[4];
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar2 != 0.0) {
    dVar1 = dVar2;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar3 != 0.0) {
    dVar1 = dVar3;
  }
  func_0x000107c606a0(dVar1);
  dVar1 = 0.0;
  if (dVar4 != 0.0) {
    dVar1 = dVar4;
  }
  func_0x000107c606a0(dVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103080a50; end: 103080a87;  */

void FUN_103080a50(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  FUN_103080888(auStack_68);
  func_0x000107c606a8();
  return;
}


