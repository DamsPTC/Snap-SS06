/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103068934; end: 1030689fb;  */

undefined8 * FUN_103068934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  cVar6 = *(char *)(param_1 + 9);
  if (cVar6 == -1) {
    uVar11 = param_2[4];
    uVar15 = param_2[7];
    uVar12 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar11;
    param_1[7] = uVar15;
    param_1[6] = uVar12;
    uVar11 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar11;
    uVar15 = *param_2;
    uVar12 = param_2[3];
    uVar11 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar15;
    param_1[3] = uVar12;
    param_1[2] = uVar11;
  }
  else {
    cVar7 = *(char *)(param_2 + 9);
    if (cVar7 == -1) {
      FUN_103059634();
      uVar11 = param_2[4];
      uVar15 = param_2[7];
      uVar12 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar11;
      param_1[7] = uVar15;
      param_1[6] = uVar12;
      uVar11 = *(undefined8 *)((long)param_2 + 0x39);
      *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
      *(undefined8 *)((long)param_1 + 0x39) = uVar11;
      uVar15 = *param_2;
      uVar12 = param_2[3];
      uVar11 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar15;
      param_1[3] = uVar12;
      param_1[2] = uVar11;
    }
    else {
      uVar8 = param_2[8];
      uVar11 = *param_1;
      uVar2 = param_1[1];
      uVar12 = param_1[2];
      uVar3 = param_1[3];
      uVar15 = param_1[4];
      uVar4 = param_1[5];
      uVar1 = param_1[6];
      uVar5 = param_1[7];
      uVar9 = param_1[8];
      uVar10 = *param_2;
      uVar14 = param_2[3];
      uVar13 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      param_1[3] = uVar14;
      param_1[2] = uVar13;
      uVar10 = param_2[4];
      uVar14 = param_2[7];
      uVar13 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar10;
      param_1[7] = uVar14;
      param_1[6] = uVar13;
      param_1[8] = uVar8;
      *(char *)(param_1 + 9) = cVar7;
      FUN_103059268(uVar11,uVar2,uVar12,uVar3,uVar15,uVar4,uVar1,uVar5,uVar9,cVar6);
    }
  }
  return param_1;
}



/* Entry: 1030689fc; end: 103068abf;  */

int FUN_1030689fc(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = (*(byte *)(param_1 + 0x12) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0x12) < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 103068ac0; end: 103068f2b;  */

void FUN_103068ac0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  char cStack_70;
  
  lVar3 = 0x112f37060;
  uStack_130 = param_2;
  uStack_120 = param_1;
  func_0x0001000285a8(0x112f37060,&UNK_10db7fdf8);
  lStack_128 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_170 - extraout_x8;
  lVar3 = 0x112f37068;
  func_0x0001000285a8(0x112f37068,&UNK_10db7fe00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar8 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5f524();
  lVar10 = *(long *)(lVar4 + -8);
  lStack_140 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112f37070;
  func_0x0001000285a8(0x112f37070,&UNK_10db7fe08);
  lVar9 = *(long *)(lVar4 + -8);
  lStack_138 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar11 - extraout_x8_02;
  lVar4 = 0x112f37078;
  func_0x0001000285a8(0x112f37078,&UNK_10db7fe10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_150 = lVar13 - extraout_x8_03;
  cVar2 = (char)unaff_x20[9];
  if (cVar2 == -1) {
    uVar5 = 0x112f37080;
    func_0x0001000285a8(0x112f37080,&UNK_10db7fe18);
    uVar6 = 0x112f37088;
    func_0x000103068f78(0x112f37088,0x112f37080,&UNK_10db7fe18,
                        PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008);
    func_0x000107c5f650(lVar8,1,uVar5,uVar6);
    func_0x000103068fbc(lVar8,lVar12);
    lVar11 = lVar12;
    func_0x000107c6159c(lVar12,lVar3,1);
    FUN_10306900c();
    lVar3 = lVar11;
    FUN_1030690dc();
    func_0x000107c5f490(uStack_120,lVar12,lVar4,lStack_128,lVar11,lVar3);
    func_0x000103069174(lVar8);
  }
  else {
    lVar8 = *unaff_x20;
    lVar1 = unaff_x20[1];
    lStack_a0 = unaff_x20[3];
    lStack_a8 = unaff_x20[2];
    lStack_90 = unaff_x20[5];
    lStack_98 = unaff_x20[4];
    lStack_80 = unaff_x20[7];
    lStack_88 = unaff_x20[6];
    lStack_78 = unaff_x20[8];
    lStack_168 = lVar12;
    lStack_160 = lVar3;
    lStack_158 = lVar9;
    lStack_148 = lVar4;
    lStack_b8 = lVar8;
    lStack_b0 = lVar1;
    cStack_70 = cVar2;
    func_0x000103059b1c(&lStack_b8,&lStack_108);
    func_0x000107c5f520(lVar11);
    uVar5 = 0x112f37080;
    func_0x0001000285a8(0x112f37080,&UNK_10db7fe18);
    uVar6 = 0x112f37088;
    func_0x000103068f78(0x112f37088,0x112f37080,&UNK_10db7fe18,
                        PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008);
    uStack_170 = uVar5;
    func_0x000107c5f658(lVar13,lVar11,uVar5,uVar6);
    lVar3 = lStack_140;
    (**(code **)(lVar10 + 8))(lVar11,lStack_140);
    if (cVar2 == '\x01') {
      func_0x0001030691bc();
      lVar3 = lVar1;
      lVar11 = lVar8;
    }
    else {
      lStack_f0 = unaff_x20[3];
      lStack_f8 = unaff_x20[2];
      lStack_e0 = unaff_x20[5];
      lStack_e8 = unaff_x20[4];
      lStack_d0 = unaff_x20[7];
      lStack_d8 = unaff_x20[6];
      lStack_c8 = unaff_x20[8];
      lStack_108 = lVar8;
      lStack_100 = lVar1;
      FUN_10307ff24();
    }
    lVar12 = lStack_128;
    lVar8 = lStack_160;
    lVar4 = lStack_168;
    uStack_118 = uStack_170;
    puVar7 = &uStack_118;
    uStack_110 = uVar6;
    func_0x000107c614f4(puVar7,
                        PTR___s7SwiftUI4ViewPAAE20accessibilityElement8childrenQrAA26AccessibilityChildBehaviorV_tFQOMQ_110349580
                        ,1);
    lVar10 = lStack_138;
    lVar9 = lStack_150;
    func_0x000107c5f640(lStack_150,lVar11,lVar3,0,PTR___swiftEmptyArrayStorage_11034f1c8,lStack_138,
                        puVar7);
    func_0x000107c6142c(lVar3);
    (**(code **)(lStack_158 + 8))(lVar13,lVar10);
    func_0x000100d31a0c(lVar9,lVar4);
    lVar3 = lVar4;
    func_0x000107c6159c(lVar4,lVar8,0);
    FUN_10306900c();
    lVar11 = lVar3;
    FUN_1030690dc();
    func_0x000107c5f490(uStack_120,lVar4,lStack_148,lVar12,lVar3,lVar11);
    func_0x0001030691f0();
    func_0x000100d31a5c(lVar9);
  }
  return;
}



/* Entry: 103068f2c; end: 103068f37;  */

void FUN_103068f2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE05_makeC08modifier6inputs4bodyAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVAiA01_J0V_ANtctFZ_110348800
  )();
  return;
}



/* Entry: 103068f38; end: 10306900b;  */

void FUN_103068f38(void)

{
  FUN_103068ac0();
  return;
}



/* Entry: 10306900c; end: 1030690db;  */

void FUN_10306900c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112f37090 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37078;
  func_0x00010002969c(0x112f37078,&UNK_10db7fe10);
  uVar2 = 0x112f37080;
  func_0x00010002969c(0x112f37080,&UNK_10db7fe18);
  uVar3 = 0x112f37088;
  func_0x000103068f78(0x112f37088,0x112f37080,&UNK_10db7fe18,
                      PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008);
  puVar4 = &uStack_40;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  func_0x000107c614f4(puVar4,
                      PTR___s7SwiftUI4ViewPAAE20accessibilityElement8childrenQrAA26AccessibilityChildBehaviorV_tFQOMQ_110349580
                      ,1);
  puVar5 = puVar4;
  FUN_10305de24();
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_50 = puVar4;
  puStack_48 = puVar5;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_50);
  puRam0000000112f37090 = puVar6;
  return;
}



/* Entry: 1030690dc; end: 103069293;  */

void FUN_1030690dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f37098 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37060;
  func_0x00010002969c(0x112f37060,&UNK_10db7fdf8);
  uVar2 = 0x112f37088;
  func_0x000103068f78(0x112f37088,0x112f37080,&UNK_10db7fe18,
                      PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008);
  uVar3 = uVar2;
  FUN_10305de24();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f37098 = puVar4;
  return;
}



/* Entry: 103069294; end: 10306929b;  */

long FUN_103069294(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10306929c; end: 10306931f;  */

void FUN_10306929c(void)

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



/* Entry: 103069320; end: 103069323;  */

void FUN_103069320(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7fe50;
  func_0x000107c61520(&UNK_10db7fe50,&UNK_110603360);
  puRam0000000112f370b0 = puVar1;
  return;
}



/* Entry: 103069324; end: 103069363;  */

void FUN_103069324(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7fe50;
  func_0x000107c61520(&UNK_10db7fe50,&UNK_110603360);
  puRam0000000112f370b0 = puVar1;
  return;
}



/* Entry: 103069364; end: 103069367;  */

void FUN_103069364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7feb8;
  func_0x000107c61520(&UNK_10db7feb8,&UNK_1106033f0);
  puRam0000000112f370b8 = puVar1;
  return;
}



/* Entry: 103069368; end: 1030693a7;  */

void FUN_103069368(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7feb8;
  func_0x000107c61520(&UNK_10db7feb8,&UNK_1106033f0);
  puRam0000000112f370b8 = puVar1;
  return;
}



/* Entry: 1030693a8; end: 1030693ab;  */

void FUN_1030693a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7ff20;
  func_0x000107c61520(&UNK_10db7ff20,&UNK_110603480);
  puRam0000000112f370c0 = puVar1;
  return;
}



/* Entry: 1030693ac; end: 1030693eb;  */

void FUN_1030693ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7ff20;
  func_0x000107c61520(&UNK_10db7ff20,&UNK_110603480);
  puRam0000000112f370c0 = puVar1;
  return;
}



/* Entry: 1030693ec; end: 1030693ef;  */

void FUN_1030693ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7ff88;
  func_0x000107c61520(&UNK_10db7ff88,&UNK_110603510);
  puRam0000000112f370c8 = puVar1;
  return;
}



/* Entry: 1030693f0; end: 10306942f;  */

void FUN_1030693f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f370c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db7ff88;
  func_0x000107c61520(&UNK_10db7ff88,&UNK_110603510);
  puRam0000000112f370c8 = puVar1;
  return;
}



/* Entry: 103069430; end: 1030698c3;  */

int FUN_103069430(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1030694ac;
        goto LAB_103069490;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103069490:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1030694ac:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1030698c4; end: 10306996f;  */

void FUN_1030698c4(void)

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



/* Entry: 103069970; end: 103069f7f;  */

void FUN_103069970(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  undefined8 extraout_x8;
  long lVar7;
  byte *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 ***pppuStack_14f0;
  undefined1 *puStack_14e8;
  long lStack_14e0;
  long lStack_14d8;
  long lStack_14d0;
  long lStack_14c8;
  long lStack_14c0;
  long lStack_14b8;
  long lStack_14b0;
  undefined8 uStack_14a0;
  undefined8 uStack_1498;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  code *pcStack_1310;
  undefined *puStack_1308;
  undefined8 ***pppuStack_1300;
  undefined1 *puStack_12f8;
  long lStack_12f0;
  long lStack_12e8;
  long lStack_12e0;
  long lStack_12d8;
  long lStack_12d0;
  undefined1 uStack_12c8;
  undefined7 uStack_12c7;
  undefined1 uStack_12c0;
  undefined7 uStack_12bf;
  char cStack_12b8;
  undefined8 ***pppuStack_1180;
  undefined1 *puStack_1178;
  long lStack_1170;
  long lStack_1168;
  long lStack_1160;
  long lStack_1158;
  long lStack_1150;
  undefined1 uStack_1148;
  undefined7 uStack_1147;
  undefined1 uStack_1140;
  undefined7 uStack_113f;
  char cStack_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined1 auStack_1120 [272];
  undefined8 uStack_1010;
  undefined8 uStack_1008;
  undefined1 auStack_1000 [272];
  undefined1 auStack_ef0 [336];
  undefined1 auStack_da0 [336];
  undefined1 auStack_c50 [336];
  undefined8 uStack_b00;
  undefined1 uStack_af8;
  undefined1 auStack_af0 [336];
  undefined8 uStack_9a0;
  undefined1 uStack_998;
  undefined1 auStack_990 [352];
  code *pcStack_830;
  undefined *puStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  long alStack_810 [44];
  code *pcStack_6b0;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined1 auStack_690 [272];
  undefined1 auStack_580 [288];
  undefined1 auStack_460 [48];
  undefined1 auStack_430 [352];
  undefined8 ***pppuStack_2d0;
  undefined1 *puStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 auStack_288 [272];
  undefined1 auStack_178 [280];
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppppuVar6 = &pppuStack_14f0;
  func_0x000107c5f7ac();
  FUN_103069f80(&uStack_14a0);
  func_0x000107c610b4(auStack_288,&uStack_14a0,0x110);
  func_0x000107c610b4(auStack_178,&uStack_14a0,0x110);
  func_0x00010306b128(auStack_288,alStack_810,0x112f370d0,&UNK_10db80030);
  func_0x00010306b170(auStack_178,0x112f370d0,&UNK_10db80030);
  puVar14 = auStack_690;
  puVar5 = auStack_288;
  func_0x000107c610b4(puVar14,puVar5,0x110);
  uVar8 = *(undefined8 *)(&UNK_10db80180 + (ulong)*unaff_x20 * 8);
  func_0x000107c5f7ac();
  uStack_1130 = param_1;
  uStack_1128 = param_2;
  func_0x000107c610b4(auStack_1120,auStack_690,0x110);
  func_0x000107c5f2d4(auStack_460,uVar8,0,uVar8,0,puVar14,puVar5);
  func_0x000107c610b4(auStack_580,&uStack_1130,0x120);
  uStack_1010 = param_1;
  uStack_1008 = param_2;
  func_0x000107c610b4(auStack_1000,auStack_690,0x110);
  func_0x00010306b128(&uStack_1130,&uStack_14a0,0x112f370d8,&UNK_10db80038);
  puVar1 = &uStack_1010;
  func_0x00010306b170(puVar1,0x112f370d8,&UNK_10db80038);
  func_0x000107c5f7c4(0x4010000000000000);
  uVar8 = 0;
  func_0x000107c5f7bc(0,puVar1);
  func_0x000107c61574(puVar1);
  uStack_1498 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_14a0 = *(undefined8 *)(unaff_x20 + 0x98);
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(alStack_810);
  func_0x000107c610b4(auStack_ef0,auStack_580,0x150);
  func_0x000107c610b4(auStack_da0,auStack_580,0x150);
  func_0x00010306b128(auStack_ef0,&uStack_14a0,0x112f370e0,&UNK_10db80048);
  func_0x00010306b170(auStack_da0,0x112f370e0,&UNK_10db80048);
  puVar2 = &UNK_110603568;
  func_0x000107c613fc(&UNK_110603568,0xb8,7);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(puVar2 + 0x98) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(puVar2 + 0x90) = uVar9;
  *(undefined8 *)(puVar2 + 0xa8) = uVar16;
  *(undefined8 *)(puVar2 + 0xa0) = uVar12;
  *(undefined8 *)(puVar2 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar2 + 0x58) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar2 + 0x50) = uVar9;
  *(undefined8 *)(puVar2 + 0x68) = uVar16;
  *(undefined8 *)(puVar2 + 0x60) = uVar12;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(puVar2 + 0x78) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(puVar2 + 0x70) = uVar16;
  *(undefined8 *)(puVar2 + 0x88) = uVar12;
  *(undefined8 *)(puVar2 + 0x80) = uVar9;
  uVar9 = *(undefined8 *)unaff_x20;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x28) = uVar16;
  *(undefined8 *)(puVar2 + 0x20) = uVar12;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar2 + 0x30) = uVar16;
  *(undefined8 *)(puVar2 + 0x48) = uVar12;
  *(undefined8 *)(puVar2 + 0x40) = uVar9;
  func_0x000107c610b4(auStack_c50,auStack_580,0x150);
  uStack_af8 = (undefined1)alStack_810[0];
  uStack_b00 = uVar8;
  func_0x000107c610b4(auStack_430,auStack_c50,0x159);
  func_0x000107c610b4(auStack_af0,auStack_580,0x150);
  uStack_998 = (undefined1)alStack_810[0];
  uStack_9a0 = uVar8;
  FUN_10306a5ec();
  func_0x00010306b128(auStack_c50,&uStack_14a0,0x112f370e8,&UNK_10db80050);
  func_0x00010306b170(auStack_af0,0x112f370e8,&UNK_10db80050);
  puVar3 = &UNK_110603590;
  func_0x000107c613fc(&UNK_110603590,0xb8,7);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(puVar3 + 0x98) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(puVar3 + 0x90) = uVar8;
  *(undefined8 *)(puVar3 + 0xa8) = uVar12;
  *(undefined8 *)(puVar3 + 0xa0) = uVar9;
  *(undefined8 *)(puVar3 + 0xb0) = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(puVar3 + 0x58) = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(puVar3 + 0x50) = uVar8;
  *(undefined8 *)(puVar3 + 0x68) = uVar12;
  *(undefined8 *)(puVar3 + 0x60) = uVar9;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x70);
  *(undefined8 *)(puVar3 + 0x78) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(puVar3 + 0x70) = uVar12;
  *(undefined8 *)(puVar3 + 0x88) = uVar9;
  *(undefined8 *)(puVar3 + 0x80) = uVar8;
  uVar8 = *(undefined8 *)unaff_x20;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar12;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar3 + 0x38) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar3 + 0x30) = uVar12;
  *(undefined8 *)(puVar3 + 0x48) = uVar9;
  *(undefined8 *)(puVar3 + 0x40) = uVar8;
  func_0x000107c610b4(auStack_990,auStack_430,0x160);
  pcStack_830 = FUN_10306a5e4;
  uStack_818 = 0;
  uStack_820 = 0;
  puStack_828 = puVar2;
  func_0x000107c610b4(&uStack_14a0,auStack_990,0x180);
  func_0x000107c610b4(alStack_810,auStack_430,0x160);
  pcStack_6b0 = FUN_10306a5e4;
  uStack_698 = 0;
  uStack_6a0 = 0;
  puStack_6a8 = puVar2;
  FUN_10306a5ec();
  func_0x00010306b128(auStack_990,&pppuStack_1300,0x112f370f0,&UNK_10db80058);
  plVar4 = alStack_810;
  func_0x00010306b170(plVar4,0x112f370f0,&UNK_10db80058);
  uStack_1320 = 0;
  uStack_1318 = 0;
  pcStack_1310 = FUN_10306a678;
  uStack_12bf = (undefined7)*(undefined8 *)(unaff_x20 + 0x89);
  cStack_12b8 = (char)((ulong)*(undefined8 *)(unaff_x20 + 0x89) >> 0x38);
  uStack_12c0 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x81) >> 0x38);
  lVar13 = *(long *)(unaff_x20 + 0x60);
  lVar10 = *(long *)(unaff_x20 + 0x58);
  lVar17 = *(long *)(unaff_x20 + 0x70);
  lVar15 = *(long *)(unaff_x20 + 0x68);
  lVar19 = *(long *)(unaff_x20 + 0x80);
  lVar18 = *(long *)(unaff_x20 + 0x78);
  uStack_12c8 = (undefined1)lVar19;
  uStack_12c7 = (undefined7)((ulong)lVar19 >> 8);
  puVar14 = *(undefined1 **)(unaff_x20 + 0x50);
  ppppuVar11 = *(undefined8 *****)(unaff_x20 + 0x48);
  puStack_1308 = puVar3;
  pppuStack_1300 = ppppuVar11;
  puStack_12f8 = puVar14;
  lStack_12f0 = lVar10;
  lStack_12e8 = lVar13;
  lStack_12e0 = lVar15;
  lStack_12d8 = lVar17;
  lStack_12d0 = lVar18;
  if (cStack_12b8 == -1) {
    func_0x00010307fcb8();
    puVar14 = (undefined1 *)plVar4[1];
    ppppuVar11 = (undefined8 ****)*plVar4;
    lVar13 = plVar4[3];
    lVar10 = plVar4[2];
    lVar17 = plVar4[5];
    lVar15 = plVar4[4];
    lVar19 = plVar4[7];
    lVar18 = plVar4[6];
    lVar7 = plVar4[8];
    lStack_1168 = plVar4[3];
    lStack_1170 = plVar4[2];
    lStack_1158 = plVar4[5];
    lStack_1160 = plVar4[4];
    lStack_1150 = plVar4[6];
    uStack_1140 = (undefined1)plVar4[8];
    uStack_113f = (undefined7)((ulong)plVar4[8] >> 8);
    uStack_1148 = (undefined1)plVar4[7];
    uStack_1147 = (undefined7)((ulong)plVar4[7] >> 8);
    puStack_1178 = (undefined1 *)plVar4[1];
    pppuStack_1180 = (undefined8 ***)*plVar4;
    pppuStack_14f0 = ppppuVar11;
    puStack_14e8 = puVar14;
    lStack_14e0 = lVar10;
    lStack_14d8 = lVar13;
    lStack_14d0 = lVar15;
    lStack_14c8 = lVar17;
    lStack_14c0 = lVar18;
    lStack_14b8 = lVar19;
    lStack_14b0 = lVar7;
    func_0x000103059c3c(&pppuStack_14f0,&pppuStack_2d0);
    cStack_1138 = '\0';
    pppuStack_2d0 = ppppuVar11;
  }
  else {
    if (cStack_12b8 == '\x01') {
      lStack_1168 = *(long *)(unaff_x20 + 0x60);
      lStack_1170 = *(long *)(unaff_x20 + 0x58);
      lStack_1158 = *(long *)(unaff_x20 + 0x70);
      lStack_1160 = *(long *)(unaff_x20 + 0x68);
      lStack_1150 = *(long *)(unaff_x20 + 0x78);
      uStack_1148 = (undefined1)*(undefined8 *)(unaff_x20 + 0x80);
      uStack_113f = (undefined7)*(undefined8 *)(unaff_x20 + 0x89);
      cStack_1138 = (char)((ulong)*(undefined8 *)(unaff_x20 + 0x89) >> 0x38);
      uStack_1147 = (undefined7)*(undefined8 *)(unaff_x20 + 0x81);
      uStack_1140 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x81) >> 0x38);
      puStack_1178 = *(undefined1 **)(unaff_x20 + 0x50);
      pppuStack_1180 = *(undefined8 ****)(unaff_x20 + 0x48);
      func_0x000103059b1c(&pppuStack_1180,&pppuStack_14f0);
      goto LAB_103069ee0;
    }
    lVar7 = CONCAT71(uStack_12bf,uStack_12c0);
    uStack_1140 = uStack_12c0;
    uStack_113f = uStack_12bf;
    cStack_1138 = cStack_12b8;
    pppuStack_2d0 = ppppuVar11;
    pppuStack_1180 = ppppuVar11;
    puStack_1178 = puVar14;
    lStack_1170 = lVar10;
    lStack_1168 = lVar13;
    lStack_1160 = lVar15;
    lStack_1158 = lVar17;
    lStack_1150 = lVar18;
    uStack_1148 = uStack_12c8;
    uStack_1147 = uStack_12c7;
  }
  ppppuVar11 = &pppuStack_1300;
  puStack_2c8 = puVar14;
  lStack_2c0 = lVar10;
  lStack_2b8 = lVar13;
  lStack_2b0 = lVar15;
  lStack_2a8 = lVar17;
  lStack_2a0 = lVar18;
  lStack_298 = lVar19;
  lStack_290 = lVar7;
  func_0x00010306b128(ppppuVar11,&pppuStack_14f0,0x112f36930,&UNK_10db7ef80);
  FUN_10307ff24();
  FUN_103059634(&pppuStack_1180);
  puVar14 = (undefined1 *)ppppuVar6;
LAB_103069ee0:
  uVar8 = 0x112f370f8;
  func_0x0001000285a8(0x112f370f8,&UNK_10db80068);
  uVar9 = 0x112f37100;
  FUN_10306a6f4(0x112f37100,0x112f370f8,&UNK_10db80068,FUN_10306a6d0);
  func_0x000107c5f640(extraout_x8,ppppuVar11,puVar14,0,PTR___swiftEmptyArrayStorage_11034f1c8,uVar8,
                      uVar9);
  func_0x000107c6142c(puVar14);
  func_0x00010306b170(&uStack_14a0,0x112f370f8,&UNK_10db80068);
  return;
}



/* Entry: 103069f80; end: 10306a447;  */

void FUN_103069f80(undefined8 param_1,byte *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_8b0 [160];
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined7 uStack_637;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined1 uStack_610;
  undefined7 uStack_60f;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined1 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
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
  undefined1 uStack_350;
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
  undefined1 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  undefined1 uStack_f8;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  FUN_10306a448(&uStack_148);
  uStack_c8 = uStack_120;
  uStack_d0 = uStack_128;
  uStack_b8 = uStack_110;
  uStack_c0 = uStack_118;
  uStack_a8 = uStack_100;
  uStack_b0 = uStack_108;
  uStack_a0 = uStack_f8;
  uStack_e8 = uStack_140;
  uStack_f0 = uStack_148;
  uStack_d8 = uStack_130;
  uStack_e0 = uStack_138;
  uStack_88 = *(undefined8 *)(param_2 + 0xa0);
  uStack_90 = *(undefined8 *)(param_2 + 0x98);
  uStack_438 = *(undefined8 *)(param_2 + 0xa0);
  uStack_440 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(&uStack_4e0);
  uStack_1d0 = 0xc01921fb54442d18;
  uStack_1d8 = uStack_1d0;
  if ((char)uStack_4e0 == '\0') {
    uStack_1d8 = 0;
  }
  func_0x000107c5f7e4();
  uStack_208 = uStack_c8;
  uStack_210 = uStack_d0;
  uStack_1f8 = uStack_b8;
  uStack_200 = uStack_c0;
  uStack_1e8 = uStack_a8;
  uStack_1f0 = uStack_b0;
  uStack_1e0 = CONCAT71(uStack_9f,uStack_a0);
  uStack_228 = uStack_e8;
  uStack_230 = uStack_f0;
  uStack_218 = uStack_d8;
  uStack_220 = uStack_e0;
  uStack_1a8 = uStack_d8;
  uStack_1b0 = uStack_e0;
  uStack_1b8 = uStack_e8;
  uStack_1c0 = uStack_f0;
  uStack_178 = uStack_a8;
  uStack_180 = uStack_b0;
  uStack_188 = uStack_b8;
  uStack_190 = uStack_c0;
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uVar5 = uStack_d0;
  uVar6 = uStack_c0;
  uStack_1c8 = uStack_138;
  uStack_170 = uStack_1e0;
  uStack_168 = uStack_1d8;
  uStack_160 = uStack_1d0;
  func_0x00010306b128(&uStack_230,&uStack_440,0x112f37140,&UNK_10db80158);
  puVar3 = &uStack_1c0;
  func_0x00010306b170(puVar3,0x112f37140,&UNK_10db80158);
  uVar1 = SUB81(puVar3,0);
  FUN_10306a448(&uStack_2e8);
  uVar7 = *(undefined8 *)(&UNK_10db80198 + (ulong)*param_2 * 8);
  uStack_378 = uStack_2c0;
  uStack_380 = uStack_2c8;
  uStack_368 = uStack_2b0;
  uStack_370 = uStack_2b8;
  uStack_358 = uStack_2a0;
  uStack_360 = uStack_2a8;
  uStack_350 = uStack_298;
  uStack_398 = uStack_2e0;
  uStack_3a0 = uStack_2e8;
  uStack_388 = uStack_2d0;
  uStack_390 = uStack_2d8;
  uVar4 = uStack_2d8;
  func_0x000107c5f56c();
  func_0x000107c5f280();
  uStack_268 = uStack_378;
  uStack_270 = uStack_380;
  uStack_258 = uStack_368;
  uStack_260 = uStack_370;
  uStack_248 = uStack_358;
  uStack_250 = uStack_360;
  uStack_240 = uStack_350;
  uStack_288 = uStack_398;
  uStack_290 = uStack_3a0;
  uStack_278 = uStack_388;
  uStack_280 = uStack_390;
  uStack_328 = uStack_2d0;
  uStack_330 = uStack_2d8;
  uStack_338 = uStack_2e0;
  uStack_340 = uStack_2e8;
  uStack_2f0 = uStack_298;
  uStack_2f8 = uStack_2a0;
  uStack_300 = uStack_2a8;
  uStack_308 = uStack_2b0;
  uStack_310 = uStack_2b8;
  uStack_318 = uStack_2c0;
  uStack_320 = uStack_2c8;
  func_0x00010306b128(&uStack_3a0,&uStack_440,0x112f37148,&UNK_10db80160);
  func_0x00010306b170(&uStack_340,0x112f37148,&UNK_10db80160);
  uStack_438 = uStack_88;
  uStack_440 = uStack_90;
  func_0x000107c5f72c(&uStack_4e0,uVar2);
  uStack_600 = 0x401921fb54442d18;
  uStack_608 = uStack_600;
  if ((char)uStack_4e0 == '\0') {
    uStack_608 = 0;
  }
  func_0x000107c5f7e4();
  uStack_668 = uStack_268;
  uStack_670 = uStack_270;
  uStack_658 = uStack_258;
  uStack_660 = uStack_260;
  uStack_648 = uStack_248;
  uStack_650 = uStack_250;
  uStack_688 = uStack_288;
  uStack_690 = uStack_290;
  uStack_678 = uStack_278;
  uStack_680 = uStack_280;
  uStack_5e8 = uStack_288;
  uStack_5f0 = uStack_290;
  uStack_5d8 = uStack_278;
  uStack_5e0 = uStack_280;
  uStack_5b8 = uStack_258;
  uStack_5c0 = uStack_260;
  uStack_5a8 = uStack_248;
  uStack_5b0 = uStack_250;
  uStack_640 = CONCAT71(uStack_23f,uStack_240);
  uStack_5a0 = CONCAT71(uStack_23f,uStack_240);
  uStack_610 = 0;
  uStack_5c8 = uStack_268;
  uStack_5d0 = uStack_270;
  uStack_570 = 0;
  uStack_638 = uVar1;
  uStack_630 = uVar7;
  uStack_628 = uVar4;
  uStack_620 = uVar5;
  uStack_618 = uVar6;
  uStack_5f8 = uStack_2b8;
  uStack_598 = uVar1;
  uStack_590 = uVar7;
  uStack_580 = uVar5;
  uStack_578 = uVar6;
  uStack_568 = uStack_608;
  uStack_560 = uStack_600;
  func_0x00010306b128(&uStack_690,&uStack_440,0x112f37150,&UNK_10db80168);
  func_0x00010306b170(&uStack_5f0,0x112f37150,&UNK_10db80168);
  uStack_6b8 = uStack_1e8;
  uStack_6c0 = uStack_1f0;
  uStack_6a8 = uStack_1d8;
  uStack_6b0 = uStack_1e0;
  uStack_698 = uStack_1c8;
  uStack_6a0 = uStack_1d0;
  uStack_6f8 = uStack_228;
  uStack_700 = uStack_230;
  uStack_6e8 = uStack_218;
  uStack_6f0 = uStack_220;
  uStack_6d8 = uStack_208;
  uStack_6e0 = uStack_210;
  uStack_6c8 = uStack_1f8;
  uStack_6d0 = uStack_200;
  uStack_428 = uStack_678;
  uStack_430 = uStack_680;
  uStack_438 = uStack_688;
  uStack_440 = uStack_690;
  uStack_3e8 = CONCAT71(uStack_637,uStack_638);
  uStack_3f0 = uStack_640;
  uStack_3f8 = uStack_648;
  uStack_400 = uStack_650;
  uStack_408 = uStack_658;
  uStack_410 = uStack_660;
  uStack_418 = uStack_668;
  uStack_420 = uStack_670;
  uStack_3c0 = CONCAT71(uStack_60f,uStack_610);
  uStack_460 = CONCAT71(uStack_60f,uStack_610);
  uStack_3a8 = uStack_5f8;
  uStack_3b0 = uStack_600;
  uStack_3b8 = uStack_608;
  uStack_3c8 = uStack_618;
  uStack_3d0 = uStack_620;
  uStack_3d8 = uStack_628;
  uStack_3e0 = uStack_630;
  uStack_548 = uStack_228;
  uStack_550 = uStack_230;
  uStack_538 = uStack_218;
  uStack_540 = uStack_220;
  uStack_808 = uStack_228;
  uStack_810 = uStack_230;
  uStack_7f8 = uStack_218;
  uStack_800 = uStack_220;
  uStack_528 = uStack_208;
  uStack_530 = uStack_210;
  uStack_518 = uStack_1f8;
  uStack_520 = uStack_200;
  uStack_7e8 = uStack_208;
  uStack_7f0 = uStack_210;
  uStack_7d8 = uStack_1f8;
  uStack_7e0 = uStack_200;
  uStack_508 = uStack_1e8;
  uStack_510 = uStack_1f0;
  uStack_4f8 = uStack_1d8;
  uStack_500 = uStack_1e0;
  uStack_7c8 = uStack_1e8;
  uStack_7d0 = uStack_1f0;
  uStack_7b8 = uStack_1d8;
  uStack_7c0 = uStack_1e0;
  uStack_720 = CONCAT71(uStack_60f,uStack_610);
  uStack_478 = uStack_628;
  uStack_480 = uStack_630;
  uStack_468 = uStack_618;
  uStack_470 = uStack_620;
  uStack_458 = uStack_608;
  uStack_448 = uStack_5f8;
  uStack_450 = uStack_600;
  uStack_4b8 = uStack_668;
  uStack_4c0 = uStack_670;
  uStack_4a8 = uStack_658;
  uStack_4b0 = uStack_660;
  uStack_488 = CONCAT71(uStack_637,uStack_638);
  uStack_748 = CONCAT71(uStack_637,uStack_638);
  uStack_498 = uStack_648;
  uStack_4a0 = uStack_650;
  uStack_490 = uStack_640;
  uStack_4d8 = uStack_688;
  uStack_4e0 = uStack_690;
  uStack_4c8 = uStack_678;
  uStack_4d0 = uStack_680;
  uStack_728 = uStack_618;
  uStack_730 = uStack_620;
  uStack_718 = uStack_608;
  uStack_708 = uStack_5f8;
  uStack_710 = uStack_600;
  uStack_4e8 = uStack_1c8;
  uStack_4f0 = uStack_1d0;
  uStack_768 = uStack_658;
  uStack_770 = uStack_660;
  uStack_758 = uStack_648;
  uStack_760 = uStack_650;
  uStack_750 = uStack_640;
  uStack_738 = uStack_628;
  uStack_740 = uStack_630;
  uStack_7a8 = uStack_1c8;
  uStack_7b0 = uStack_1d0;
  uStack_798 = uStack_688;
  uStack_7a0 = uStack_690;
  uStack_788 = uStack_678;
  uStack_790 = uStack_680;
  uStack_778 = uStack_668;
  uStack_780 = uStack_670;
  func_0x000107c610b4(param_1,&uStack_810,0x110);
  func_0x00010306b128(&uStack_550,auStack_8b0,0x112f37140,&UNK_10db80158);
  func_0x00010306b128(&uStack_4e0,auStack_8b0,0x112f37150,&UNK_10db80168);
  func_0x00010306b170(&uStack_440,0x112f37150,&UNK_10db80168);
  func_0x00010306b170(&uStack_700,0x112f37140,&UNK_10db80158);
  return;
}



/* Entry: 10306a448; end: 10306a5e3;  */

void FUN_10306a448(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auStack_1a0 [72];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined2 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined2 uStack_d0;
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
  
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar2 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  uVar3 = uVar2;
  func_0x000107c5f72c(&uStack_158);
  cVar1 = (char)uStack_158;
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_103080684();
  uStack_150 = 0x3fe3333333333333;
  if (cVar1 == '\0') {
    uStack_150 = 0;
  }
  uVar4 = 1;
  func_0x000107c5f2b4(&uStack_c8,*(undefined8 *)(&UNK_10db801b0 + (ulong)*unaff_x20 * 8),
                      0x4024000000000000,1,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c5f7d0(0x3ff8000000000000);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x98);
  func_0x000107c5f72c(&uStack_158,uVar2);
  cVar1 = (char)uStack_158;
  uStack_158 = 0;
  uStack_140 = uStack_c0;
  uStack_148 = uStack_c8;
  uStack_130 = uStack_b0;
  uStack_138 = uStack_b8;
  uStack_128 = uStack_a8;
  param_1[5] = uStack_b0;
  param_1[4] = uStack_b8;
  param_1[7] = uVar3;
  param_1[6] = uStack_a8;
  param_1[9] = uVar4;
  uStack_118 = 0x100;
  *(undefined2 *)(param_1 + 8) = 0x100;
  param_1[1] = uStack_150;
  *param_1 = 0;
  param_1[3] = uStack_c0;
  param_1[2] = uStack_c8;
  *(char *)(param_1 + 10) = cVar1;
  uStack_110 = 0;
  uStack_f8 = uStack_c0;
  uStack_100 = uStack_c8;
  uStack_e8 = uStack_b0;
  uStack_f0 = uStack_b8;
  uStack_e0 = uStack_a8;
  uStack_d0 = 0x100;
  uStack_120 = uVar3;
  uStack_108 = uStack_150;
  uStack_d8 = uVar3;
  func_0x00010306b128(&uStack_158,auStack_1a0,0x112f37158,&UNK_10db80170);
  func_0x00010306b170(&uStack_110,0x112f37158,&UNK_10db80170);
  return;
}



/* Entry: 10306a5e4; end: 10306a5eb;  */

void FUN_10306a5e4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_31 = 1;
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730(&uStack_31,uVar1);
  return;
}



/* Entry: 10306a5ec; end: 10306a61f;  */

undefined8 FUN_10306a5ec(undefined8 param_1,undefined8 param_2)

{
  FUN_10306aa10(param_2,param_1,&UNK_110603610);
  return param_2;
}



/* Entry: 10306a620; end: 10306a677;  */

void FUN_10306a620(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0xa0) != -1) {
    FUN_103059268(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                  *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                  *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                  *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                  *(undefined8 *)(unaff_x20 + 0x98),*(char *)(unaff_x20 + 0xa0));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10306a678; end: 10306a67f;  */

void FUN_10306a678(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_31 = 0;
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730(&uStack_31,uVar1);
  return;
}



/* Entry: 10306a680; end: 10306a6cf;  */

void FUN_10306a680(undefined1 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar1 = 0x112d4f580;
  uStack_31 = param_1;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730(&uStack_31,uVar1);
  return;
}



/* Entry: 10306a6d0; end: 10306a6f3;  */

void FUN_10306a6d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0x112f370f0;
  if (puRam0000000112f37108 == (undefined *)0x0) {
    func_0x00010002969c(0x112f370f0,&UNK_10db80058);
    uVar2 = uVar1;
    FUN_10306a764();
    puStack_38 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar2;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,uVar1,&uStack_40);
    puRam0000000112f37108 = puVar3;
  }
  return;
}



/* Entry: 10306a6f4; end: 10306a763;  */

void FUN_10306a6f4(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI25_AppearanceActionModifierVAA04ViewE0AAWP_110349158;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 10306a764; end: 10306a8d7;  */

void FUN_10306a764(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f37110 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f370e8;
  func_0x00010002969c(0x112f370e8,&UNK_10db80050);
  uVar2 = uVar1;
  func_0x00010306a7fc();
  uVar3 = 0x112e02e28;
  func_0x00010306a894(0x112e02e28,0x112e02e30,&UNK_10da5a740,
                      PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f37110 = puVar4;
  return;
}



/* Entry: 10306a8d8; end: 10306a8db;  */

void FUN_10306a8d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80078;
  func_0x000107c61520(&UNK_10db80078,&UNK_1106036b0);
  puRam0000000112f37128 = puVar1;
  return;
}



/* Entry: 10306a8dc; end: 10306a91b;  */

void FUN_10306a8dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80078;
  func_0x000107c61520(&UNK_10db80078,&UNK_1106036b0);
  puRam0000000112f37128 = puVar1;
  return;
}



/* Entry: 10306a91c; end: 10306a937;  */

void FUN_10306a91c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7422ec,1);
  return;
}



/* Entry: 10306a938; end: 10306aa0f;  */

void FUN_10306a938(void)

{
  FUN_103069970();
  return;
}



/* Entry: 10306aa10; end: 10306ad3f;  */

undefined1 * FUN_10306aa10(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = *param_2;
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  cVar8 = param_2[0x90];
  if (cVar8 == -1) {
    uVar10 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x78) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x81);
    *(undefined8 *)(param_1 + 0x89) = *(undefined8 *)(param_2 + 0x89);
    *(undefined8 *)(param_1 + 0x81) = uVar10;
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar10;
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x68);
    uVar6 = *(undefined8 *)(param_2 + 0x70);
    uVar3 = *(undefined8 *)(param_2 + 0x78);
    uVar7 = *(undefined8 *)(param_2 + 0x80);
    uVar9 = *(undefined8 *)(param_2 + 0x88);
    FUN_103059198(uVar10,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar9,cVar8);
    *(undefined8 *)(param_1 + 0x48) = uVar10;
    *(undefined8 *)(param_1 + 0x50) = uVar4;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x70) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar3;
    *(undefined8 *)(param_1 + 0x80) = uVar7;
    *(undefined8 *)(param_1 + 0x88) = uVar9;
    param_1[0x90] = cVar8;
  }
  param_1[0x98] = param_2[0x98];
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10306ad40; end: 10306ae43;  */

undefined1 * FUN_10306ad40(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  uVar10 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  cVar8 = param_1[0x90];
  if (cVar8 != -1) {
    cVar9 = param_2[0x90];
    if (cVar9 != -1) {
      uVar11 = *(undefined8 *)(param_2 + 0x88);
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      uVar6 = *(undefined8 *)(param_1 + 0x70);
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      uVar7 = *(undefined8 *)(param_1 + 0x80);
      uVar12 = *(undefined8 *)(param_1 + 0x88);
      uVar13 = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_1 + 0x58) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = uVar13;
      uVar13 = *(undefined8 *)(param_2 + 0x78);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_1 + 0x78) = uVar13;
      *(undefined8 *)(param_1 + 0x88) = uVar11;
      param_1[0x90] = cVar9;
      FUN_103059268(uVar10,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,cVar8);
      goto LAB_10306ae18;
    }
    FUN_103059634(param_1 + 0x48);
  }
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x81);
  *(undefined8 *)(param_1 + 0x89) = *(undefined8 *)(param_2 + 0x89);
  *(undefined8 *)(param_1 + 0x81) = uVar10;
  uVar10 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar10;
LAB_10306ae18:
  param_1[0x98] = param_2[0x98];
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c61574(uVar10);
  return param_1;
}



/* Entry: 10306ae44; end: 10306b08f;  */

int FUN_10306ae44(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10306b090; end: 10306b1af;  */

void FUN_10306b090(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f37130 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37138;
  func_0x00010002969c(0x112f37138,&UNK_10db80150);
  uVar2 = 0x112f37100;
  FUN_10306a6f4(0x112f37100,0x112f370f8,&UNK_10db80068,FUN_10306a6d0);
  uVar3 = uVar2;
  FUN_10305de24();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f37130 = puVar4;
  return;
}



/* Entry: 10306b1b0; end: 10306b1e7;  */

undefined1 FUN_10306b1b0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_103059cec();
  func_0x000107c5f3fc(&uStack_11,&UNK_110603798,&UNK_110603798,param_1);
  return uStack_11;
}



/* Entry: 10306b1e8; end: 10306b1ef;  */

void FUN_10306b1e8(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10306b1f0; end: 10306b20f;  */

uint FUN_10306b1f0(uint param_1)

{
  func_0x000107c5f308();
  return param_1 & 1;
}



/* Entry: 10306b210; end: 10306b27f;  */

void FUN_10306b210(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &UNK_10db801d0;
  func_0x000107c614e0();
  *param_1 = puVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar2 = 0;
  FUN_10306b280(0,param_4,param_5);
  (*param_2)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  return;
}



/* Entry: 10306b280; end: 10306b28b;  */

void FUN_10306b280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e742314);
  return;
}



/* Entry: 10306b28c; end: 10306b4cb;  */

void FUN_10306b28c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_c0;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  lVar3 = 0;
  func_0x000107c5f4f8();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar13 = (long)&puStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar4 = 0;
  func_0x000107c5f318(0,uVar1,uVar2);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_00;
  puVar5 = PTR___s7SwiftUI14NavigationViewVyxGAA0D0AAMc_1103489b0;
  func_0x000107c61520(PTR___s7SwiftUI14NavigationViewVyxGAA0D0AAMc_1103489b0,lVar4);
  puVar6 = puVar5;
  FUN_10306b4cc();
  lVar7 = 0;
  puStack_c0 = puVar6;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  puStack_80 = puVar5;
  puStack_78 = puVar6;
  func_0x000107c614f8(0,&lStack_90,
                      PTR___s7SwiftUI4ViewPAAE010navigationC5StyleyQrqd__AA010NavigationcE0Rd__lFQOMQ_110349420
                      ,0);
  lVar11 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar16 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12;
  puStack_80 = (undefined *)uVar1;
  puStack_78 = (undefined *)uVar2;
  func_0x000107c5f314(lVar14,FUN_10306b5bc,&lStack_90,uVar1,uVar2);
  func_0x000107c5f4f4(lVar13);
  puVar6 = puStack_c0;
  func_0x000107c5f5e4(lVar16,lVar13,lVar4,lVar3,puVar5,puStack_c0);
  (**(code **)(lVar9 + 8))(lVar13,lVar3);
  (**(code **)(lVar10 + 8))(lVar14,lVar4);
  puStack_78 = puVar6;
  plVar8 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  puStack_80 = puVar5;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE010navigationC5StyleyQrqd__AA010NavigationcE0Rd__lFQOMQ_110349420
                      ,1);
  FUN_103061a64(lVar15,lVar16,lVar7,plVar8);
  pcVar12 = *(code **)(lVar11 + 8);
  (*pcVar12)(lVar16,lVar7);
  FUN_103061a64(param_1,lVar15,lVar7,plVar8);
  (*pcVar12)(lVar15,lVar7);
  return;
}



/* Entry: 10306b4cc; end: 10306b50f;  */

void FUN_10306b4cc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f37160 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5f4f8(0xff);
  puVar2 = PTR___s7SwiftUI24StackNavigationViewStyleVAA0deF0AAMc_110349090;
  func_0x000107c61520(PTR___s7SwiftUI24StackNavigationViewStyleVAA0deF0AAMc_110349090,uVar1);
  puRam0000000112f37160 = puVar2;
  return;
}



/* Entry: 10306b510; end: 10306b5bb;  */

void FUN_10306b510(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_10306b280();
  FUN_103061a64(puVar2,param_2 + *(int *)(lVar1 + 0x24),param_3,param_4);
  FUN_103061a64(param_1,puVar2,param_3,param_4);
  (**(code **)(lVar3 + 8))(puVar2,param_3);
  return;
}



/* Entry: 10306b5bc; end: 10306b5d7;  */

void FUN_10306b5bc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10306b280();
  FUN_103061a64(puVar5,lVar4 + *(int *)(lVar3 + 0x24),lVar1,uVar2);
  FUN_103061a64(param_1,puVar5,lVar1,uVar2);
  (**(code **)(lVar6 + 8))(puVar5,lVar1);
  return;
}



/* Entry: 10306b5d8; end: 10306b763;  */

void FUN_10306b5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_78 = param_1;
  func_0x000107c5f404();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c614f8(0,&uStack_70,
                      PTR___s7SwiftUI4ViewPAAE29navigationBarTitleDisplayModeyQrAA010NavigationE4ItemV0fgH0OFQOMQ_1103495f8
                      ,0);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar9 - extraout_x12;
  (**(code **)(lVar4 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___s7SwiftUI17NavigationBarItemV16TitleDisplayModeO6inlineyA2EmFWC_110348d08
             ,lVar1);
  func_0x000107c5f67c(lVar9,puVar7,param_2,param_3);
  (**(code **)(lVar4 + 8))(puVar7,lVar1);
  puVar3 = &uStack_70;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c614f4(puVar3,
                      PTR___s7SwiftUI4ViewPAAE29navigationBarTitleDisplayModeyQrAA010NavigationE4ItemV0fgH0OFQOMQ_1103495f8
                      ,1);
  FUN_103061a64(lVar6,lVar9,lVar2,puVar3);
  pcVar5 = *(code **)(lVar8 + 8);
  (*pcVar5)(lVar9,lVar2);
  FUN_103061a64(uStack_78,lVar6,lVar2,puVar3);
  (*pcVar5)(lVar6,lVar2);
  return;
}



/* Entry: 10306b764; end: 10306b7ff;  */

void FUN_10306b764(undefined8 param_1,long param_2,undefined8 param_3)

{
  long extraout_x8;
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar2 + 0x40));
  puVar1 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_103061a64(puVar1);
  FUN_103061a64(param_1,puVar1,param_2,param_3);
  (**(code **)(lVar2 + 8))(puVar1,param_2);
  return;
}



/* Entry: 10306b800; end: 10306b833;  */

void FUN_10306b800(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e742350,1);
  return;
}



/* Entry: 10306b834; end: 10306b83b;  */

void FUN_10306b834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 10306b83c; end: 10306b8b3;  */

void FUN_10306b83c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10db80268;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0,2,&puStack_30,param_1 + 0x20);
  }
  return;
}



/* Entry: 10306b8b4; end: 10306b98b;  */

long * FUN_10306b8b4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar5 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar5 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar4 - 10 | uVar4) - *(long *)(lVar5 + 0x40)) {
    lVar3 = *param_2;
    lVar1 = param_2[1];
    func_0x000101c13424(lVar3,(char)lVar1);
    *param_1 = lVar3;
    *(char *)(param_1 + 1) = (char)lVar1;
    (**(code **)(lVar5 + 0x10))
              ((long)param_1 + uVar4 + 9 & (uVar4 ^ 0xffffffffffffffff),
               (long)param_2 + uVar4 + 9 & (uVar4 ^ 0xffffffffffffffff),lVar2);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10306b98c; end: 10306b9d3;  */

void FUN_10306b98c(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  func_0x000101c01914(*param_1,*(undefined1 *)(param_1 + 1));
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010306b9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))((long)param_1 + uVar2 + 9 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 10306b9d4; end: 10306bad7;  */

undefined8 * FUN_10306b9d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101c13424(uVar4,uVar1);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar1;
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x10))
            (uVar3 + 9 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 9 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10306bad8; end: 10306bb2f;  */

undefined8 * FUN_10306bad8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x20))
            (uVar2 + 9 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 9 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10306bb30; end: 10306bba3;  */

undefined8 * FUN_10306bb30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000101c01914(uVar3,uVar2);
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  (**(code **)(lVar4 + 0x28))
            (uVar5 + 9 + (long)param_1 & (uVar5 ^ 0xffffffffffffffff),
             uVar5 + 9 + (long)param_2 & (uVar5 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10306bba4; end: 10306bcdb;  */

ulong FUN_10306bba4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0xff) {
    uVar1 = 0xfe;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10306bc5c;
  uVar5 = (uVar7 + 9 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10306bc5c;
      goto LAB_10306bbec;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_10306bbec:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_10306bc5c:
  if (uVar2 < 0xff) {
    uVar1 = 0;
    if (1 < (byte)param_1[2]) {
      uVar1 = ((byte)param_1[2] ^ 0xff) + 1;
    }
    return (ulong)uVar1;
  }
  uVar7 = (long)param_1 + uVar7 + 9 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010306bc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Entry: 10306bcdc; end: 10306bedb;  */

void FUN_10306bcdc(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar3 = uVar4;
  if (uVar4 < 0xff) {
    uVar3 = 0xfe;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar2 = (uVar7 + 9 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar8 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar8 << 3 & 0x1f)) >> (ulong)(uVar8 << 3 & 0x1f))
            + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
  }
  else {
    bVar9 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar8 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar2);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar10;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (param_2 != 0) {
      if (0xfe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010306be68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x38))((long)param_1 + uVar7 + 9 & ~uVar7);
        return;
      }
      if (param_2 < 0xff) {
        *(char *)(param_1 + 1) = -(char)param_2;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = (ulong)(param_2 - 0xff);
      }
    }
  }
  return;
}



/* Entry: 10306bedc; end: 10306bef7;  */

undefined1  [16] FUN_10306bedc(void)

{
  return ZEXT816(0x110603798);
}



/* Entry: 10306bef8; end: 10306bf73;  */

void FUN_10306bef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined7 uStack_70;
  undefined1 uStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10db802f0;
  func_0x000107c614e0();
  uStack_61 = (undefined1)param_2[1];
  uStack_60 = (undefined7)((ulong)param_2[1] >> 8);
  uStack_69 = (undefined1)*param_2;
  uStack_68 = (undefined7)((ulong)*param_2 >> 8);
  uStack_51 = (undefined1)param_2[3];
  uStack_50 = (undefined7)((ulong)param_2[3] >> 8);
  uStack_59 = (undefined1)param_2[2];
  uStack_58 = (undefined7)((ulong)param_2[2] >> 8);
  uStack_41 = (undefined1)param_2[5];
  uStack_40 = (undefined7)((ulong)param_2[5] >> 8);
  uStack_49 = (undefined1)param_2[4];
  uStack_48 = (undefined7)((ulong)param_2[4] >> 8);
  uStack_31 = (undefined1)param_2[7];
  uStack_39 = (undefined1)param_2[6];
  uStack_38 = (undefined7)((ulong)param_2[6] >> 8);
  uVar3 = *(undefined8 *)((long)param_2 + 0x41);
  uVar2 = *(undefined8 *)((long)param_2 + 0x39);
  *param_1 = puVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_61,uStack_68);
  *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_69,uStack_70);
  *(undefined8 *)((long)param_1 + 0x51) = uVar3;
  *(undefined8 *)((long)param_1 + 0x49) = uVar2;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_39,uStack_40);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_41,uStack_48);
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_49,uStack_50);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_51,uStack_58);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_59,uStack_60);
  return;
}



/* Entry: 10306bf74; end: 10306c1df;  */

void FUN_10306bf74(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  long alStack_e0 [4];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = 0x112f371e8;
  uStack_a8 = param_1;
  func_0x00010002969c(0x112f371e8,&UNK_10db80318);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = 0xff;
  func_0x000107c61514(0xff,uVar2,PTR___s7SwiftUI6SpacerVN_1103498b8,uVar12,0,0);
  uVar2 = 0xff;
  func_0x000107c5f7dc(0xff,uVar1);
  puVar3 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar2);
  lVar4 = 0;
  func_0x000107c5f750(0,uVar2,puVar3);
  lStack_b8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar11 = auStack_c0 + -extraout_x8;
  lVar5 = 0;
  func_0x000107c5f34c(0,lVar4,PTR___s7SwiftUI16_FlexFrameLayoutVN_110348bd8);
  lStack_b0 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar10 - extraout_x12;
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_80 = uVar12;
  func_0x000107c5f410();
  uVar2 = 0x4020000000000000;
  func_0x000107c5f74c(puVar11);
  func_0x000107c5f7ac();
  puVar3 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878;
  func_0x000107c61520(PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_110349878,lVar4);
  *(long *)(lVar9 + -0x10) = lVar4;
  *(undefined **)(lVar9 + -8) = puVar3;
  *(long *)(lVar9 + -0x20) = lVar6;
  *(undefined8 *)(lVar9 + -0x18) = uVar2;
  *(undefined1 *)(lVar9 + -0x28) = 1;
  *(undefined8 *)(lVar9 + -0x30) = 0;
  *(undefined1 *)(lVar9 + -0x38) = 1;
  *(undefined8 *)(lVar9 + -0x40) = 0;
  func_0x000107c5f684(lVar10,0,1,0,1,0,1,0x4040000000000000,0);
  (**(code **)(lStack_b8 + 8))(puVar11,lVar4);
  puStack_98 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_a0 = puVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar5,&puStack_a0);
  FUN_103061a64(lVar9,lVar10,lVar5,puVar7);
  pcVar8 = *(code **)(lStack_b0 + 8);
  (*pcVar8)(lVar10,lVar5);
  FUN_103061a64(uStack_a8,lVar9,lVar5,puVar7);
  (*pcVar8)(lVar9,lVar5);
  return;
}



/* Entry: 10306c1e0; end: 10306c5d7;  */

void FUN_10306c1e0(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar15;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar16;
  undefined8 *puVar17;
  long alStack_260 [4];
  long lStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  undefined8 *puStack_190;
  undefined1 auStack_188 [72];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_d8;
  byte *pbStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  lStack_210 = *(long *)(param_3 + -8);
  alStack_260[1] = param_3;
  uStack_220 = param_4;
  uStack_218 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_210 + 0x40));
  lVar14 = (long)alStack_260 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_208 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar4 = 0;
  lStack_228 = lVar14;
  func_0x000107c5f434();
  alStack_260[3] = *(long *)(lVar4 + -8);
  lStack_240 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_260[3] + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f6c4();
  alStack_260[0] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_260[0] + 0x40));
  puVar17 = (undefined8 *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pbVar5 = (byte *)0x112f371e8;
  pbVar13 = &UNK_10db80318;
  func_0x0001000285a8();
  pbStack_238 = pbVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(pbVar5 + -8) + 0x40));
  pbVar15 = (byte *)((long)puVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  pbStack_230 = pbVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_260[2] = (long)pbVar15 - extraout_x12_00;
  pbVar15 = (byte *)param_2[2];
  pbVar1 = (byte *)param_2[3];
  if ((char)param_2[0xb] == '\x01') {
    pbVar5 = pbVar1;
    func_0x000107c61434();
    pbVar13 = pbVar1;
  }
  else {
    lStack_c0 = param_2[5];
    lStack_c8 = param_2[4];
    lStack_b0 = param_2[7];
    lStack_b8 = param_2[6];
    lStack_a0 = param_2[9];
    lStack_a8 = param_2[8];
    lStack_98 = param_2[10];
    pbStack_d8 = pbVar15;
    pbStack_d0 = pbVar1;
    FUN_10307ff24();
    pbVar15 = pbVar5;
  }
  func_0x000103081b38();
  uVar6 = (ulong)*pbVar5;
  FUN_103081288(*(undefined8 *)(pbVar5 + 8),*(undefined8 *)(pbVar5 + 0x18),uVar6,pbVar5[0x10]);
  puVar7 = &UNK_10db803c8;
  func_0x000107c614e0();
  puVar8 = (undefined8 *)*param_2;
  FUN_10305fc34(puVar8,(char)param_2[1]);
  FUN_10307e424(auStack_188);
  if (cStack_128 == '\x01') {
    func_0x000103080bc0();
    uStack_118 = puVar8[1];
    uStack_120 = *puVar8;
    uStack_108 = puVar8[3];
    uStack_110 = puVar8[2];
    uStack_f8 = puVar8[5];
    uStack_100 = puVar8[4];
    uStack_e8 = puVar8[7];
    uStack_f0 = puVar8[6];
    FUN_103080684();
    puVar17 = puVar8;
  }
  else {
    (**(code **)(alStack_260[0] + 0x68))
              (puVar17,*(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8,
               lVar4);
    func_0x000107c5f6d8(uStack_140,uStack_138,uStack_130,0x3ff0000000000000);
  }
  uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
  puStack_1a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pbStack_1c0 = pbVar15;
  pbStack_1b8 = pbVar13;
  puStack_1a0 = puVar7;
  uStack_198 = uVar6;
  puStack_190 = puVar17;
  func_0x000107c5f430(lVar14);
  uVar9 = 0x112f36c20;
  func_0x0001000285a8(0x112f36c20,&UNK_10db7f390);
  uVar10 = uVar9;
  FUN_10305d478();
  lVar2 = alStack_260[2];
  func_0x000107c5f668(alStack_260[2],lVar14,uVar9,uVar10);
  (**(code **)(alStack_260[3] + 8))(lVar14,lStack_240);
  func_0x000107c61574(puVar17);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c6142c(pbVar13);
  uVar9 = uStack_220;
  lVar4 = alStack_260[1];
  lVar11 = 0;
  func_0x00010306beec(0,alStack_260[1],uStack_220);
  lVar14 = lStack_228;
  FUN_103061a64(lStack_228,(long)param_2 + (long)*(int *)(lVar11 + 0x28),lVar4,uVar9);
  pbVar5 = pbStack_230;
  FUN_10306cf5c(lVar2,pbStack_230);
  lVar3 = lStack_208;
  lVar11 = lStack_210;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  pbStack_1b8 = (byte *)&uStack_1d0;
  pbStack_1c0 = pbVar5;
  lVar12 = lStack_208;
  (**(code **)(lStack_210 + 0x10))(lStack_208,lVar14,lVar4);
  uStack_1b0 = lVar3;
  pbStack_1e8 = pbStack_238;
  puStack_1e0 = PTR___s7SwiftUI6SpacerVN_1103498b8;
  lStack_1d8 = lVar4;
  func_0x00010306cfac();
  puStack_1f8 = PTR___s7SwiftUI6SpacerVAA4ViewAAWP_1103498a8;
  uStack_1f0 = uVar9;
  lStack_200 = lVar12;
  func_0x000101c14e58(uStack_218,&pbStack_1c0,3,&pbStack_1e8,&lStack_200);
  pcVar16 = *(code **)(lVar11 + 8);
  (*pcVar16)(lVar14,lVar4);
  func_0x00010306d024(lVar2);
  (*pcVar16)(lVar3,lVar4);
  func_0x00010306d024(pbVar5);
  return;
}



/* Entry: 10306c5d8; end: 10306c5e3;  */

void FUN_10306c5d8(undefined8 param_1)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  byte *pbVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  byte *pbVar16;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar17;
  long unaff_x20;
  undefined8 *puVar18;
  long alStack_260 [4];
  long lStack_240;
  byte *pbStack_238;
  byte *pbStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  byte *pbStack_1e8;
  undefined *puStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  ulong uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  ulong uStack_198;
  undefined8 *puStack_190;
  undefined1 auStack_188 [72];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_d8;
  byte *pbStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  
  alStack_260[1] = *(long *)(unaff_x20 + 0x10);
  uStack_220 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar13 = *(long **)(unaff_x20 + 0x20);
  lStack_210 = *(long *)(alStack_260[1] + -8);
  uStack_218 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_210 + 0x40));
  lVar15 = (long)alStack_260 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_208 = lVar15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar15 - extraout_x12;
  lVar4 = 0;
  lStack_228 = lVar15;
  func_0x000107c5f434();
  alStack_260[3] = *(long *)(lVar4 + -8);
  lStack_240 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_260[3] + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f6c4();
  alStack_260[0] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_260[0] + 0x40));
  puVar18 = (undefined8 *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pbVar5 = (byte *)0x112f371e8;
  pbVar14 = &UNK_10db80318;
  func_0x0001000285a8();
  pbStack_238 = pbVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(pbVar5 + -8) + 0x40));
  pbVar16 = (byte *)((long)puVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  pbStack_230 = pbVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_260[2] = (long)pbVar16 - extraout_x12_00;
  pbVar16 = (byte *)plVar13[2];
  pbVar1 = (byte *)plVar13[3];
  if ((char)plVar13[0xb] == '\x01') {
    pbVar5 = pbVar1;
    func_0x000107c61434();
    pbVar14 = pbVar1;
  }
  else {
    lStack_c0 = plVar13[5];
    lStack_c8 = plVar13[4];
    lStack_b0 = plVar13[7];
    lStack_b8 = plVar13[6];
    lStack_a0 = plVar13[9];
    lStack_a8 = plVar13[8];
    lStack_98 = plVar13[10];
    pbStack_d8 = pbVar16;
    pbStack_d0 = pbVar1;
    FUN_10307ff24();
    pbVar16 = pbVar5;
  }
  func_0x000103081b38();
  uVar6 = (ulong)*pbVar5;
  FUN_103081288(*(undefined8 *)(pbVar5 + 8),*(undefined8 *)(pbVar5 + 0x18),uVar6,pbVar5[0x10]);
  puVar7 = &UNK_10db803c8;
  func_0x000107c614e0();
  puVar8 = (undefined8 *)*plVar13;
  FUN_10305fc34(puVar8,(char)plVar13[1]);
  FUN_10307e424(auStack_188);
  if (cStack_128 == '\x01') {
    func_0x000103080bc0();
    uStack_118 = puVar8[1];
    uStack_120 = *puVar8;
    uStack_108 = puVar8[3];
    uStack_110 = puVar8[2];
    uStack_f8 = puVar8[5];
    uStack_100 = puVar8[4];
    uStack_e8 = puVar8[7];
    uStack_f0 = puVar8[6];
    FUN_103080684();
    puVar18 = puVar8;
  }
  else {
    (**(code **)(alStack_260[0] + 0x68))
              (puVar18,*(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1103496a8,
               lVar4);
    func_0x000107c5f6d8(uStack_140,uStack_138,uStack_130,0x3ff0000000000000);
  }
  uStack_1b0 = uStack_1b0 & 0xffffffffffffff00;
  puStack_1a8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  pbStack_1c0 = pbVar16;
  pbStack_1b8 = pbVar14;
  puStack_1a0 = puVar7;
  uStack_198 = uVar6;
  puStack_190 = puVar18;
  func_0x000107c5f430(lVar15);
  uVar9 = 0x112f36c20;
  func_0x0001000285a8(0x112f36c20,&UNK_10db7f390);
  uVar10 = uVar9;
  FUN_10305d478();
  lVar2 = alStack_260[2];
  func_0x000107c5f668(alStack_260[2],lVar15,uVar9,uVar10);
  (**(code **)(alStack_260[3] + 8))(lVar15,lStack_240);
  func_0x000107c61574(puVar18);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c6142c(pbVar14);
  uVar9 = uStack_220;
  lVar4 = alStack_260[1];
  lVar11 = 0;
  func_0x00010306beec(0,alStack_260[1],uStack_220);
  lVar15 = lStack_228;
  FUN_103061a64(lStack_228,(long)plVar13 + (long)*(int *)(lVar11 + 0x28),lVar4,uVar9);
  pbVar5 = pbStack_230;
  FUN_10306cf5c(lVar2,pbStack_230);
  lVar3 = lStack_208;
  lVar11 = lStack_210;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  pbStack_1b8 = (byte *)&uStack_1d0;
  pbStack_1c0 = pbVar5;
  lVar12 = lStack_208;
  (**(code **)(lStack_210 + 0x10))(lStack_208,lVar15,lVar4);
  uStack_1b0 = lVar3;
  pbStack_1e8 = pbStack_238;
  puStack_1e0 = PTR___s7SwiftUI6SpacerVN_1103498b8;
  lStack_1d8 = lVar4;
  func_0x00010306cfac();
  puStack_1f8 = PTR___s7SwiftUI6SpacerVAA4ViewAAWP_1103498a8;
  uStack_1f0 = uVar9;
  lStack_200 = lVar12;
  func_0x000101c14e58(uStack_218,&pbStack_1c0,3,&pbStack_1e8,&lStack_200);
  pcVar17 = *(code **)(lVar11 + 8);
  (*pcVar17)(lVar15,lVar4);
  func_0x00010306d024(lVar2);
  (*pcVar17)(lVar3,lVar4);
  func_0x00010306d024(pbVar5);
  return;
}



/* Entry: 10306c5e4; end: 10306c617;  */

void FUN_10306c5e4(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e7423e4,1);
  return;
}



/* Entry: 10306c618; end: 10306c62f;  */

void FUN_10306c618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 10306c630; end: 10306c6af;  */

void FUN_10306c630(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_10db80388;
  puStack_30 = &UNK_10db803a0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0,3,&puStack_38,param_1 + 0x20);
  }
  return;
}



/* Entry: 10306c6b0; end: 10306c813;  */

long * FUN_10306c6b0(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  lVar12 = *(long *)(param_3 + 0x10);
  lVar17 = *(long *)(lVar12 + -8);
  uVar13 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  if (((uint)uVar13 < 8 && (*(uint *)(lVar17 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar13 - 0x5a | uVar13) - *(long *)(lVar17 + 0x40)) {
    lVar14 = *param_2;
    lVar10 = param_2[1];
    FUN_10305a4a0(lVar14,(char)lVar10);
    *param_1 = lVar14;
    *(char *)(param_1 + 1) = (char)lVar10;
    uVar15 = (ulong)param_1 & 0xfffffffffffffff8;
    uVar16 = (ulong)param_2 & 0xfffffffffffffff8;
    uVar1 = *(undefined8 *)(uVar16 + 0x10);
    uVar5 = *(undefined8 *)(uVar16 + 0x18);
    uVar2 = *(undefined8 *)(uVar16 + 0x20);
    uVar6 = *(undefined8 *)(uVar16 + 0x28);
    uVar3 = *(undefined8 *)(uVar16 + 0x30);
    uVar7 = *(undefined8 *)(uVar16 + 0x38);
    uVar4 = *(undefined8 *)(uVar16 + 0x40);
    uVar8 = *(undefined8 *)(uVar16 + 0x48);
    uVar11 = *(undefined8 *)(uVar16 + 0x50);
    uVar9 = *(undefined1 *)(uVar16 + 0x58);
    FUN_103059198();
    *(undefined8 *)(uVar15 + 0x10) = uVar1;
    *(undefined8 *)(uVar15 + 0x18) = uVar5;
    *(undefined8 *)(uVar15 + 0x20) = uVar2;
    *(undefined8 *)(uVar15 + 0x28) = uVar6;
    *(undefined8 *)(uVar15 + 0x30) = uVar3;
    *(undefined8 *)(uVar15 + 0x38) = uVar7;
    *(undefined8 *)(uVar15 + 0x40) = uVar4;
    *(undefined8 *)(uVar15 + 0x48) = uVar8;
    *(undefined8 *)(uVar15 + 0x50) = uVar11;
    *(undefined1 *)(uVar15 + 0x58) = uVar9;
    (**(code **)(lVar17 + 0x10))
              (uVar15 + uVar13 + 0x59 & (uVar13 ^ 0xffffffffffffffff),
               uVar16 + uVar13 + 0x59 & (uVar13 ^ 0xffffffffffffffff),lVar12);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    param_1 = (long *)(lVar12 + ((ulong)((uint)uVar13 & 0xf8 ^ 0x1f8) & uVar13 + 0x10));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10306c814; end: 10306c88b;  */

void FUN_10306c814(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_10305a544(*param_1,*(undefined1 *)(param_1 + 1));
  uVar3 = (ulong)param_1 & 0xfffffffffffffff8;
  FUN_103059268(*(undefined8 *)(uVar3 + 0x10),*(undefined8 *)(uVar3 + 0x18),
                *(undefined8 *)(uVar3 + 0x20),*(undefined8 *)(uVar3 + 0x28),
                *(undefined8 *)(uVar3 + 0x30),*(undefined8 *)(uVar3 + 0x38),
                *(undefined8 *)(uVar3 + 0x40),*(undefined8 *)(uVar3 + 0x48),
                *(undefined8 *)(uVar3 + 0x50),*(undefined1 *)(uVar3 + 0x58));
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010306c888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(uVar3 + uVar2 + 0x59 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Entry: 10306c88c; end: 10306cad3;  */

undefined8 * FUN_10306c88c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  
  uVar14 = *param_2;
  uVar8 = *(undefined1 *)(param_2 + 1);
  FUN_10305a4a0(uVar14,uVar8);
  *param_1 = uVar14;
  *(undefined1 *)(param_1 + 1) = uVar8;
  uVar13 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar12 = (ulong)param_2 & 0xfffffffffffffff8;
  uVar14 = *(undefined8 *)(uVar12 + 0x10);
  uVar4 = *(undefined8 *)(uVar12 + 0x18);
  uVar1 = *(undefined8 *)(uVar12 + 0x20);
  uVar5 = *(undefined8 *)(uVar12 + 0x28);
  uVar2 = *(undefined8 *)(uVar12 + 0x30);
  uVar6 = *(undefined8 *)(uVar12 + 0x38);
  uVar3 = *(undefined8 *)(uVar12 + 0x40);
  uVar7 = *(undefined8 *)(uVar12 + 0x48);
  uVar9 = *(undefined8 *)(uVar12 + 0x50);
  uVar8 = *(undefined1 *)(uVar12 + 0x58);
  FUN_103059198(uVar14,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar9,uVar8);
  *(undefined8 *)(uVar13 + 0x10) = uVar14;
  *(undefined8 *)(uVar13 + 0x18) = uVar4;
  *(undefined8 *)(uVar13 + 0x20) = uVar1;
  *(undefined8 *)(uVar13 + 0x28) = uVar5;
  *(undefined8 *)(uVar13 + 0x30) = uVar2;
  *(undefined8 *)(uVar13 + 0x38) = uVar6;
  *(undefined8 *)(uVar13 + 0x40) = uVar3;
  *(undefined8 *)(uVar13 + 0x48) = uVar7;
  *(undefined8 *)(uVar13 + 0x50) = uVar9;
  *(undefined1 *)(uVar13 + 0x58) = uVar8;
  lVar10 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  (**(code **)(lVar10 + 0x10))
            (uVar11 + 0x59 + uVar13 & (uVar11 ^ 0xffffffffffffffff),
             uVar11 + 0x59 + uVar12 & (uVar11 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10306cad4; end: 10306cb53;  */

undefined8 * FUN_10306cad4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar2 = (ulong)param_2 & 0xfffffffffffffff8;
  uVar9 = *(undefined8 *)(uVar2 + 0x38);
  uVar8 = *(undefined8 *)(uVar2 + 0x30);
  uVar6 = *(undefined8 *)(uVar2 + 0x48);
  uVar5 = *(undefined8 *)(uVar2 + 0x40);
  uVar7 = *(undefined8 *)(uVar2 + 0x49);
  uVar11 = *(undefined8 *)(uVar2 + 0x28);
  uVar10 = *(undefined8 *)(uVar2 + 0x20);
  *(undefined8 *)(uVar1 + 0x51) = *(undefined8 *)(uVar2 + 0x51);
  *(undefined8 *)(uVar1 + 0x49) = uVar7;
  *(undefined8 *)(uVar1 + 0x38) = uVar9;
  *(undefined8 *)(uVar1 + 0x30) = uVar8;
  *(undefined8 *)(uVar1 + 0x48) = uVar6;
  *(undefined8 *)(uVar1 + 0x40) = uVar5;
  *(undefined8 *)(uVar1 + 0x28) = uVar11;
  *(undefined8 *)(uVar1 + 0x20) = uVar10;
  uVar5 = *(undefined8 *)(uVar2 + 0x10);
  *(undefined8 *)(uVar1 + 0x18) = *(undefined8 *)(uVar2 + 0x18);
  *(undefined8 *)(uVar1 + 0x10) = uVar5;
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  (**(code **)(lVar3 + 0x20))
            (uVar4 + 0x59 + uVar1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 0x59 + uVar2 & (uVar4 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10306cb54; end: 10306cc1b;  */

undefined8 * FUN_10306cb54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar8 = *(undefined1 *)(param_2 + 1);
  uVar10 = *param_1;
  *param_1 = *param_2;
  uVar9 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar8;
  FUN_10305a544(uVar10,uVar9);
  uVar15 = (ulong)param_2 & 0xfffffffffffffff8;
  uVar11 = *(undefined8 *)(uVar15 + 0x50);
  uVar16 = (ulong)param_1 & 0xfffffffffffffff8;
  uVar8 = *(undefined1 *)(uVar15 + 0x58);
  uVar10 = *(undefined8 *)(uVar16 + 0x10);
  uVar4 = *(undefined8 *)(uVar16 + 0x18);
  uVar1 = *(undefined8 *)(uVar16 + 0x20);
  uVar5 = *(undefined8 *)(uVar16 + 0x28);
  uVar2 = *(undefined8 *)(uVar16 + 0x30);
  uVar6 = *(undefined8 *)(uVar16 + 0x38);
  uVar3 = *(undefined8 *)(uVar16 + 0x40);
  uVar7 = *(undefined8 *)(uVar16 + 0x48);
  uVar14 = *(undefined8 *)(uVar16 + 0x50);
  uVar9 = *(undefined1 *)(uVar16 + 0x58);
  uVar17 = *(undefined8 *)(uVar15 + 0x10);
  uVar19 = *(undefined8 *)(uVar15 + 0x28);
  uVar18 = *(undefined8 *)(uVar15 + 0x20);
  uVar21 = *(undefined8 *)(uVar15 + 0x38);
  uVar20 = *(undefined8 *)(uVar15 + 0x30);
  uVar23 = *(undefined8 *)(uVar15 + 0x48);
  uVar22 = *(undefined8 *)(uVar15 + 0x40);
  *(undefined8 *)(uVar16 + 0x18) = *(undefined8 *)(uVar15 + 0x18);
  *(undefined8 *)(uVar16 + 0x10) = uVar17;
  *(undefined8 *)(uVar16 + 0x28) = uVar19;
  *(undefined8 *)(uVar16 + 0x20) = uVar18;
  *(undefined8 *)(uVar16 + 0x38) = uVar21;
  *(undefined8 *)(uVar16 + 0x30) = uVar20;
  *(undefined8 *)(uVar16 + 0x48) = uVar23;
  *(undefined8 *)(uVar16 + 0x40) = uVar22;
  *(undefined8 *)(uVar16 + 0x50) = uVar11;
  *(undefined1 *)(uVar16 + 0x58) = uVar8;
  FUN_103059268(uVar10,uVar4,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar14,uVar9);
  lVar12 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  (**(code **)(lVar12 + 0x28))
            (uVar13 + 0x59 + uVar16 & (uVar13 ^ 0xffffffffffffffff),
             uVar13 + 0x59 + uVar15 & (uVar13 ^ 0xffffffffffffffff));
  return param_1;
}



/* Entry: 10306cc1c; end: 10306cd57;  */

ulong FUN_10306cc1c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0xff) {
    uVar1 = 0xfe;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10306ccd4;
  uVar5 = (uVar7 + 0x59 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10306ccd4;
      goto LAB_10306cc64;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_10306cc64:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_10306ccd4:
  if (uVar2 < 0xff) {
    uVar1 = 0;
    if (1 < (byte)param_1[2]) {
      uVar1 = ((byte)param_1[2] ^ 0xff) + 1;
    }
    return (ulong)uVar1;
  }
  uVar7 = ((ulong)param_1 & 0xfffffffffffffff8) + uVar7 + 0x59 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010306cd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Entry: 10306cd58; end: 10306cf5b;  */

void FUN_10306cd58(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar3 = uVar4;
  if (uVar4 < 0xff) {
    uVar3 = 0xfe;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar2 = (uVar7 + 0x59 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar8 = (uint)lVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar8 << 3 & 0x1f)) >> (ulong)(uVar8 << 3 & 0x1f))
            + 1;
    bVar9 = 2;
    if (0xffff < uVar1) {
      bVar9 = 4;
    }
    if (uVar1 < 0x100) {
      bVar9 = 1 < uVar1;
    }
  }
  else {
    bVar9 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar8 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        func_0x000107c60ee4(param_1,lVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      func_0x000107c60ee4(param_1,lVar2);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + lVar2) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + lVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + lVar2) = iVar10;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + lVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + lVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar2) = 0;
    }
    if (param_2 != 0) {
      if (0xfe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010306cee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x38))(((ulong)param_1 & 0xfffffffffffffff8) + uVar7 + 0x59 & ~uVar7);
        return;
      }
      if (param_2 < 0xff) {
        *(char *)(param_1 + 1) = -(char)param_2;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = (ulong)(param_2 - 0xff);
      }
    }
  }
  return;
}



/* Entry: 10306cf5c; end: 10306d06b;  */

undefined8 FUN_10306cf5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f371e8;
  func_0x0001000285a8(0x112f371e8,&UNK_10db80318);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10306d06c; end: 10306d08b;  */

void FUN_10306d06c(void)

{
  func_0x000107c614e0(&UNK_10db80408);
  return;
}



/* Entry: 10306d08c; end: 10306d0d7;  */

void FUN_10306d08c(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c5f39c();
  *param_1 = param_2;
  return;
}



/* Entry: 10306d0d8; end: 10306d2c7;  */

void FUN_10306d0d8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_268 [64];
  undefined8 *puStack_228;
  undefined2 uStack_220;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined8 uStack_20e;
  undefined8 uStack_206;
  undefined8 uStack_1fe;
  undefined6 uStack_1f6;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  undefined8 *puStack_1e8;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [112];
  undefined1 auStack_c0 [48];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = param_2;
  func_0x000103080ae8();
  uStack_88 = puVar1[1];
  uStack_90 = *puVar1;
  uStack_78 = puVar1[3];
  uStack_80 = puVar1[2];
  uStack_68 = puVar1[5];
  dVar4 = (double)puVar1[4];
  uStack_58 = puVar1[7];
  uStack_60 = puVar1[6];
  dStack_70 = dVar4;
  FUN_103080684();
  FUN_103060820(param_2,param_3);
  dVar5 = 1.0;
  if (1.0 < dVar4) {
    dVar5 = dVar4;
  }
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(auStack_c0,0,1,1.0 / dVar5,0,param_2,param_3);
  uStack_198 = (undefined2)auStack_c0._8_8_;
  uStack_196 = SUB86(auStack_c0._8_8_,2);
  uStack_1a0 = (undefined2)auStack_c0._0_8_;
  uStack_19e = SUB86(auStack_c0._0_8_,2);
  uStack_188 = (undefined2)auStack_c0._24_8_;
  uStack_186 = SUB86(auStack_c0._24_8_,2);
  uStack_190 = (undefined2)auStack_c0._16_8_;
  uStack_18e = SUB86(auStack_c0._16_8_,2);
  uStack_178 = (undefined2)auStack_c0._40_8_;
  uStack_176 = SUB86(auStack_c0._40_8_,2);
  uStack_180 = (undefined2)auStack_c0._32_8_;
  uStack_17e = SUB86(auStack_c0._32_8_,2);
  func_0x000107c5f7ac();
  uStack_1e0 = 0x100;
  uStack_1d6 = uStack_19e;
  uStack_1d0 = uStack_198;
  uStack_1de = uStack_1a6;
  uStack_1d8 = uStack_1a0;
  uStack_1c6 = uStack_18e;
  uStack_1c0 = uStack_188;
  uStack_1ce = uStack_196;
  uStack_1c8 = uStack_190;
  uStack_1b6 = uStack_17e;
  uStack_1be = uStack_186;
  uStack_1b8 = uStack_180;
  uStack_1b0 = uStack_178;
  uStack_1ae = uStack_176;
  puStack_1e8 = puVar1;
  func_0x000107c5f388(auStack_130,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  uStack_168 = CONCAT62(uStack_1de,uStack_1e0);
  uStack_158 = CONCAT62(uStack_1ce,uStack_1d0);
  uStack_160 = CONCAT62(uStack_1d6,uStack_1d8);
  puStack_170 = puStack_1e8;
  uStack_148 = CONCAT62(uStack_1be,uStack_1c0);
  uStack_150 = CONCAT62(uStack_1c6,uStack_1c8);
  uStack_138 = CONCAT62(uStack_1ae,uStack_1b0);
  uStack_140 = CONCAT62(uStack_1b6,uStack_1b8);
  uStack_220 = 0x100;
  uStack_216 = CONCAT26(uStack_198,uStack_19e);
  uStack_21e = CONCAT26(uStack_1a0,uStack_1a6);
  uStack_206 = CONCAT26(uStack_188,uStack_18e);
  uStack_20e = CONCAT26(uStack_190,uStack_196);
  uStack_1fe = CONCAT26(uStack_180,uStack_186);
  uStack_1f6 = uStack_17e;
  uStack_1f0 = uStack_178;
  uStack_1ee = uStack_176;
  puStack_228 = puVar1;
  FUN_10306d2e0(&puStack_1e8,auStack_268);
  FUN_10306d470(&puStack_228,0x112f37278,&UNK_10db80438);
  uVar2 = 0x112f37280;
  func_0x0001000285a8(0x112f37280,&UNK_10db80440);
  uVar3 = uVar2;
  func_0x00010306d330();
  func_0x000107c5f650(param_1,1,uVar2,uVar3);
  FUN_10306d470(&puStack_170,0x112f37280,&UNK_10db80440);
  return;
}



/* Entry: 10306d2c8; end: 10306d2df;  */

void FUN_10306d2c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 10306d2e0; end: 10306d41f;  */

undefined8 FUN_10306d2e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f37278;
  func_0x0001000285a8(0x112f37278,&UNK_10db80438);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10306d420; end: 10306d46f;  */

void FUN_10306d420(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f37298 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f372a0;
  func_0x00010002969c(0x112f372a0,&UNK_10db80448);
  puVar2 = PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718;
  func_0x000107c61520(PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718,uVar1);
  puRam0000000112f37298 = puVar2;
  return;
}



/* Entry: 10306d470; end: 10306d4af;  */

undefined8 FUN_10306d470(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10306d4b0; end: 10306d4cf;  */

void FUN_10306d4b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e742434,1);
  return;
}



/* Entry: 10306d4d0; end: 10306d51f;  */

undefined8 * FUN_10306d4d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101f295ec(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000101f29610(uVar3,uVar2);
  return param_1;
}



/* Entry: 10306d520; end: 10306d55b;  */

undefined8 * FUN_10306d520(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000101f29610(uVar3,uVar2);
  return param_1;
}



/* Entry: 10306d55c; end: 10306d5f7;  */

int FUN_10306d55c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10306d5f8; end: 10306d66f;  */

void FUN_10306d5f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f372a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f372b0;
  func_0x00010002969c(0x112f372b0,&UNK_10db804b8);
  uVar2 = uVar1;
  func_0x00010306d330();
  uVar3 = uVar2;
  FUN_10305de24();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f372a8 = puVar4;
  return;
}



/* Entry: 10306d670; end: 10306d683;  */

undefined8 * FUN_10306d670(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101f295ec(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 10306d684; end: 10306e007;  */

void FUN_10306d684(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  FUN_103061290();
  puVar6 = PTR___s7SwiftUI5ColorVN_1103496f0;
  puStack_88 = PTR___s7SwiftUI5ColorVN_1103496f0;
  uVar2 = 0xff;
  uStack_b8 = uVar5;
  uStack_90 = uVar1;
  puStack_80 = (undefined *)uVar5;
  lStack_78 = param_2;
  func_0x000107c5f290(0xff,&uStack_90);
  uVar3 = 0xff;
  func_0x000107c60188(0xff,uVar2);
  uVar2 = 0xff;
  func_0x000107c5f2f8(0xff,uVar1,uVar5);
  puVar4 = PTR___s7SwiftUI13_StrokedShapeVyxGAA0D0AAMc_110348920;
  func_0x000107c61520(PTR___s7SwiftUI13_StrokedShapeVyxGAA0D0AAMc_110348920,uVar2);
  puStack_88 = puVar6;
  uVar5 = 0xff;
  uStack_90 = uVar2;
  puStack_80 = puVar4;
  lStack_78 = param_2;
  func_0x000107c5f290(0xff,&uStack_90);
  uVar2 = 0xff;
  func_0x000107c60188(0xff,uVar5);
  uVar5 = 0xff;
  func_0x000107c61510(0xff,uVar3,uVar2,0,0);
  uVar2 = 0xff;
  func_0x000107c5f7dc(0xff,uVar5);
  puVar6 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8;
  func_0x000107c61520(PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8,uVar2);
  lVar7 = 0;
  func_0x000107c5f768(0,uVar2,puVar6);
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  uVar5 = 0xff;
  func_0x000107c5f544(0xff);
  lVar8 = 0;
  func_0x000107c5f34c(0,lVar7,uVar5);
  lVar11 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12;
  lStack_78 = uStack_b8;
  puStack_80 = (undefined *)uVar1;
  func_0x000107c5f7ac();
  func_0x000107c5f764(puVar9);
  puVar6 = PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910;
  func_0x000107c61520(PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_110349910,lVar7);
  func_0x000107c5f650(lVar14,1,lVar7,puVar6);
  (**(code **)(lVar12 + 8))(puVar9,lVar7);
  FUN_10305de24();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_a0 = puVar6;
  puStack_98 = puVar9;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,lVar8,&puStack_a0);
  FUN_103061a64(lVar13,lVar14,lVar8,puVar4);
  pcVar10 = *(code **)(lVar11 + 8);
  (*pcVar10)(lVar14,lVar8);
  FUN_103061a64(param_1,lVar13,lVar8,puVar4);
  (*pcVar10)(lVar13,lVar8);
  return;
}



/* Entry: 10306e008; end: 10306e013;  */

void FUN_10306e008(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar15;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  code *pcStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  undefined1 auStack_118 [40];
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar13 = *(long *)(unaff_x20 + 0x20);
  uVar5 = 0xff;
  uStack_170 = param_1;
  func_0x000107c5f2f8();
  puVar6 = PTR___s7SwiftUI13_StrokedShapeVyxGAA0D0AAMc_110348920;
  func_0x000107c61520(PTR___s7SwiftUI13_StrokedShapeVyxGAA0D0AAMc_110348920,uVar5);
  puVar7 = puVar6;
  FUN_103061290();
  puVar11 = PTR___s7SwiftUI5ColorVN_1103496f0;
  puStack_a8 = PTR___s7SwiftUI5ColorVN_1103496f0;
  lVar8 = 0;
  uStack_b0 = uVar5;
  puStack_a0 = puVar6;
  puStack_98 = puVar7;
  func_0x000107c5f290(0,&uStack_b0);
  lStack_1a0 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1a0 + 0x40));
  lVar14 = (long)&lStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_1d0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lStack_1e0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_00;
  lVar9 = 0;
  lStack_1d8 = lVar14;
  lStack_1a8 = lVar8;
  func_0x000107c60188();
  lStack_190 = *(long *)(lVar9 + -8);
  lStack_178 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_190 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_180 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_01;
  puStack_a8 = puVar11;
  lVar8 = 0;
  puStack_198 = puVar7;
  lStack_188 = lVar14;
  uStack_b0 = uVar3;
  puStack_a0 = (undefined *)uVar4;
  puStack_98 = puVar7;
  func_0x000107c5f290(0,&uStack_b0);
  lVar17 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar14 - extraout_x12_02;
  lVar9 = 0;
  func_0x000107c60188(0,lVar8);
  lStack_168 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_168 + 0x40));
  lVar19 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_160 = lVar19 - extraout_x12_03;
  lVar10 = 0;
  func_0x00010306d678(0,uVar3,uVar4);
  puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar10 + 0x24));
  uStack_1c8 = uVar3;
  uStack_1c0 = uVar4;
  lStack_1b8 = lVar10;
  if (*(char *)(puVar1 + 8) == '\x01') {
    (**(code **)(lVar17 + 0x38))(lVar19,1,1,lVar8);
    puVar6 = PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718;
    func_0x000107c61520(PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718,lVar8);
    puVar11 = puStack_198;
  }
  else {
    puStack_a8 = (undefined *)puVar1[1];
    uStack_b0 = *puVar1;
    puStack_98 = (undefined *)puVar1[3];
    puStack_a0 = (undefined *)puVar1[2];
    uStack_88 = puVar1[5];
    uStack_90 = puVar1[4];
    uStack_78 = puVar1[7];
    uStack_80 = puVar1[6];
    FUN_103080684();
    puVar11 = puStack_198;
    lStack_f0 = lVar10;
    func_0x000107c5f718(lVar14,&lStack_f0,0x100,uVar3,PTR___s7SwiftUI5ColorVN_1103496f0,uVar4,
                        puStack_198);
    func_0x000107c61574(lVar10);
    puVar6 = PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718;
    func_0x000107c61520(PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718,lVar8);
    FUN_103061a64(lVar15,lVar14,lVar8,puVar6);
    pcVar16 = *(code **)(lVar17 + 8);
    (*pcVar16)(lVar14,lVar8);
    FUN_103061a64(lVar14,lVar15,lVar8,puVar6);
    (*pcVar16)(lVar15,lVar8);
    (**(code **)(lVar17 + 0x20))(lVar19,lVar14,lVar8);
    (**(code **)(lVar17 + 0x38))(lVar19,0,1,lVar8);
  }
  puStack_198 = (undefined *)lVar8;
  FUN_10305896c(lStack_160,lVar19,lVar8,puVar6);
  pcStack_1b0 = *(code **)(lStack_168 + 8);
  lVar15 = lVar19;
  (*pcStack_1b0)(lVar19,lVar9);
  lVar14 = lStack_180;
  lVar10 = lStack_1a8;
  lVar8 = lStack_1b8;
  plVar2 = (long *)(lVar13 + *(int *)(lStack_1b8 + 0x28));
  if ((char)plVar2[8] == '\x01') {
    (**(code **)(lStack_1a0 + 0x38))(lStack_180,1,1,lStack_1a8);
    puVar11 = PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718;
    func_0x000107c61520(PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718,lVar10);
  }
  else {
    lStack_e8 = plVar2[1];
    lStack_f0 = *plVar2;
    lStack_d8 = plVar2[3];
    lStack_e0 = plVar2[2];
    lStack_c8 = plVar2[5];
    lStack_d0 = plVar2[4];
    lStack_b8 = plVar2[7];
    lStack_c0 = plVar2[6];
    FUN_103080684();
    lStack_128 = lVar15;
    func_0x000107c5f2b4(auStack_118,
                        *(undefined8 *)
                         (&UNK_10db80560 + (ulong)*(byte *)(lVar13 + *(int *)(lVar8 + 0x2c)) * 8),
                        0x4024000000000000,0,1,0,PTR___swiftEmptyArrayStorage_11034f1c8);
    lVar8 = lStack_1e0;
    func_0x000107c5f720(lStack_1e0,&lStack_128,auStack_118,uStack_1c8,
                        PTR___s7SwiftUI5ColorVN_1103496f0,uStack_1c0,puVar11);
    FUN_10306e72c(auStack_118);
    func_0x000107c61574(lVar15);
    puVar11 = PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718;
    func_0x000107c61520(PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718,lVar10);
    lVar13 = lStack_1d8;
    FUN_103061a64(lStack_1d8,lVar8,lVar10,puVar11);
    lVar15 = lStack_1a0;
    pcVar16 = *(code **)(lStack_1a0 + 8);
    (*pcVar16)(lVar8,lVar10);
    lVar8 = lStack_1d0;
    FUN_103061a64(lStack_1d0,lVar13,lVar10,puVar11);
    (*pcVar16)(lVar13,lVar10);
    lVar14 = lStack_180;
    (**(code **)(lVar15 + 0x20))(lStack_180,lVar8,lVar10);
    (**(code **)(lVar15 + 0x38))(lVar14,0,1,lVar10);
  }
  lVar13 = lStack_188;
  FUN_10305896c(lStack_188,lVar14,lVar10,puVar11);
  lVar15 = lStack_178;
  lVar8 = lStack_190;
  pcVar18 = *(code **)(lStack_190 + 8);
  (*pcVar18)(lVar14,lStack_178);
  lVar17 = lStack_160;
  (**(code **)(lStack_168 + 0x10))(lVar19,lStack_160,lVar9);
  lStack_128 = lVar19;
  (**(code **)(lVar8 + 0x10))(lVar14,lVar13,lVar15);
  puVar11 = PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718;
  lStack_130 = lVar15;
  puVar7 = PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718;
  lStack_138 = lVar9;
  lStack_120 = lVar14;
  func_0x000107c61520(PTR___s7SwiftUI10_ShapeViewVyxq_GAA0D0AAMc_110348718,puStack_198);
  puVar6 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  puVar12 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0;
  puStack_150 = puVar7;
  func_0x000107c61520(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_110349ad0,lVar9,&puStack_150);
  puStack_148 = puVar12;
  func_0x000107c61520(puVar11,lVar10);
  puStack_158 = puVar11;
  func_0x000107c61520(puVar6,lVar15,&puStack_158);
  puStack_140 = puVar6;
  func_0x000101c14e58(uStack_170,&lStack_128,2,&lStack_138,&puStack_148);
  (*pcVar18)(lVar13,lVar15);
  pcVar16 = pcStack_1b0;
  (*pcStack_1b0)(lVar17,lVar9);
  (*pcVar18)(lVar14,lVar15);
  (*pcVar16)(lVar19,lVar9);
  return;
}



/* Entry: 10306e014; end: 10306e047;  */

void FUN_10306e014(undefined8 param_1,long param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  uStack_20 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c614f4(&uStack_20,&UNK_10e742498,1);
  return;
}



/* Entry: 10306e048; end: 10306e05f;  */

void FUN_10306e048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 10306e060; end: 10306e0df;  */

void FUN_10306e060(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10db80520;
    puStack_30 = &UNK_10db80520;
    puStack_28 = &UNK_10db80538;
    func_0x000107c6153c(param_1,0,4,&lStack_40,param_1 + 0x20);
  }
  return;
}



/* Entry: 10306e0e0; end: 10306e1db;  */

long * FUN_10306e0e0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 &&
      (lVar5 + 0x4fU & 0xfffffffffffffff8) + 0x42 < 0x19) {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
    uVar9 = puVar4[5];
    uVar8 = puVar4[4];
    uVar7 = puVar4[7];
    uVar6 = puVar4[6];
    uVar11 = puVar4[3];
    uVar10 = puVar4[2];
    *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar4 + 8);
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[7] = uVar7;
    puVar3[6] = uVar6;
    puVar3[3] = uVar11;
    puVar3[2] = uVar10;
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 0x4f & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 0x4f & 0xfffffffffffffff8);
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
    uVar9 = puVar4[5];
    uVar8 = puVar4[4];
    uVar7 = puVar4[7];
    uVar6 = puVar4[6];
    uVar11 = puVar4[3];
    uVar10 = puVar4[2];
    *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar4 + 8);
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[7] = uVar7;
    puVar3[6] = uVar6;
    puVar3[3] = uVar11;
    puVar3[2] = uVar10;
    *(undefined1 *)((long)puVar3 + 0x41) = *(undefined1 *)((long)puVar4 + 0x41);
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10306e1dc; end: 10306e1eb;  */

void FUN_10306e1dc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010306e1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8))();
  return;
}



/* Entry: 10306e1ec; end: 10306e4ab;  */

long FUN_10306e1ec(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar1 = *(long *)(lVar4 + 0x40);
  lVar4 = lVar1 + param_1;
  lVar1 = lVar1 + param_2;
  puVar2 = (undefined8 *)(lVar4 + 7U & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + 7U & 0xfffffffffffffff8);
  uVar5 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar5;
  uVar8 = puVar3[5];
  uVar7 = puVar3[4];
  uVar6 = puVar3[7];
  uVar5 = puVar3[6];
  uVar10 = puVar3[3];
  uVar9 = puVar3[2];
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(puVar3 + 8);
  puVar2[5] = uVar8;
  puVar2[4] = uVar7;
  puVar2[7] = uVar6;
  puVar2[6] = uVar5;
  puVar2[3] = uVar10;
  puVar2[2] = uVar9;
  puVar3 = (undefined8 *)(lVar4 + 0x4fU & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + 0x4fU & 0xfffffffffffffff8);
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  uVar8 = puVar2[5];
  uVar7 = puVar2[4];
  uVar6 = puVar2[7];
  uVar5 = puVar2[6];
  uVar10 = puVar2[3];
  uVar9 = puVar2[2];
  *(undefined1 *)(puVar3 + 8) = *(undefined1 *)(puVar2 + 8);
  puVar3[5] = uVar8;
  puVar3[4] = uVar7;
  puVar3[7] = uVar6;
  puVar3[6] = uVar5;
  puVar3[3] = uVar10;
  puVar3[2] = uVar9;
  *(undefined1 *)((long)puVar3 + 0x41) = *(undefined1 *)((long)puVar2 + 0x41);
  return param_1;
}



/* Entry: 10306e4ac; end: 10306e5b3;  */

uint * FUN_10306e4ac(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar6;
  if (uVar6 < 0xfe) {
    uVar2 = 0xfd;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    lVar1 = (*(long *)(lVar8 + 0x40) + 0x4fU & 0xfffffffffffffff8) + 0x42;
    uVar5 = (uint)lVar1;
    uVar7 = 2;
    uVar4 = uVar7;
    if (uVar5 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xffff >> 0x10) + 1;
    }
    if (0xffff < uVar4) {
      uVar7 = 4;
    }
    if (uVar4 < 0x100) {
      uVar7 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar7;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar7 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_10306e548;
    }
    else if (uVar3 == 2) {
      uVar7 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_10306e548:
        uVar6 = uVar7 - 1 << (ulong)((uVar5 & 3) << 3);
        if (uVar5 < 4) {
          uVar7 = (uint)(ushort)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar6 = 0;
        }
        return (uint *)(ulong)(uVar2 + (uVar7 | uVar6) + 1);
      }
    }
    else {
      uVar7 = *(uint *)((long)param_1 + lVar1);
      if (uVar7 != 0) goto LAB_10306e548;
    }
  }
  if (0xfc < uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010306e57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar6 = (uint)*(byte *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 0x4f & 0xffffffffffffff8U) +
                         0x41);
  uVar2 = 0;
  if (2 < uVar6) {
    uVar2 = uVar6 - 2;
  }
  return (uint *)(ulong)uVar2;
}



/* Entry: 10306e5b4; end: 10306e72b;  */

void FUN_10306e5b4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0xfe) {
    uVar2 = 0xfd;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  lVar1 = (lVar8 + 0x4fU & 0xfffffffffffffff8) + 0x42;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar9 = 2;
    uVar3 = uVar9;
    if ((uint)lVar1 < 4) {
      uVar3 = ((param_3 - uVar2) + 0xffff >> 0x10) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar9;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    func_0x000107c60ee4(param_1,lVar1);
    iVar6 = 1;
    if ((uint)lVar1 < 4) {
      iVar6 = (param_2 >> 0x10) + 1;
      *(short *)param_1 = (short)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      if (0xfc < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010306e6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1);
        return;
      }
      *(char *)(((long)param_1 + lVar8 + 0x4f & 0xffffffffffffff8U) + 0x41) = (char)param_2 + '\x02'
      ;
    }
  }
  return;
}



/* Entry: 10306e72c; end: 10306e75f;  */

undefined8 FUN_10306e72c(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___s7SwiftUI11StrokeStyleVN_1103487b8 + -8) + 8))();
  return param_1;
}



/* Entry: 10306e760; end: 10306e777;  */

void FUN_10306e760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e742508);
  return;
}


