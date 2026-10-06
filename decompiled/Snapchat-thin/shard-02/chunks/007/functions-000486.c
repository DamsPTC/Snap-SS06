/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020e1020; end: 1020e104b;  */

long FUN_1020e1020(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1020e104c; end: 1020e1107;  */

int FUN_1020e104c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 6)) {
    uVar1 = *(byte *)(param_1 + 6) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1020e1108; end: 1020e144f;  */

void FUN_1020e1108(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auStack_220 [8];
  undefined1 *puStack_218;
  byte bStack_210;
  undefined7 uStack_20f;
  undefined8 uStack_208;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 uStack_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined1 *puStack_1c0;
  ulong uStack_1b8;
  long lStack_1b0;
  undefined2 uStack_1a8;
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
  undefined1 uStack_170;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 uStack_158;
  undefined2 uStack_152;
  undefined6 uStack_150;
  undefined2 uStack_14a;
  undefined6 uStack_148;
  undefined2 uStack_142;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined1 uStack_110;
  undefined1 *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined1 uStack_b8;
  undefined1 auStack_b0 [64];
  
  lVar1 = 0;
  func_0x000107c5f6f0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c450a4(param_2,param_2);
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5f6cc();
    uStack_160 = SUB86(puVar2,0);
    uStack_15a = (undefined2)((ulong)puVar2 >> 0x30);
    uStack_110 = 1;
    uVar6 = 0x112e57ee8;
    func_0x0001000285a8(0x112e57ee8,&UNK_10da5b720);
    uVar7 = uVar6;
    func_0x0001020e146c();
    func_0x000107c5f490(&puStack_108,&uStack_160,uVar6,PTR___s7SwiftUI5ColorVN_1103496f0,uVar7,
                        PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
  }
  else {
    func_0x000107c61174();
    puVar3 = puVar2;
    func_0x000107c5f6e8();
    (**(code **)(lVar8 + 0x68))
              (puVar5,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar1);
    puVar4 = puVar5;
    func_0x000107c5f6fc(0,0,0,0,puVar5,puVar3);
    func_0x000107c61574(puVar3);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x000107c5f7ac();
    func_0x000107c5f2d4(auStack_b0,param_2,0,param_2,0,puVar5,lVar1);
    uStack_152 = (undefined2)auStack_b0._8_8_;
    uStack_150 = SUB86(auStack_b0._8_8_,2);
    uStack_15a = (undefined2)auStack_b0._0_8_;
    uStack_158 = SUB86(auStack_b0._0_8_,2);
    uStack_142 = (undefined2)auStack_b0._24_8_;
    uStack_140 = SUB86(auStack_b0._24_8_,2);
    uStack_14a = (undefined2)auStack_b0._16_8_;
    uStack_148 = SUB86(auStack_b0._16_8_,2);
    uStack_132 = (undefined2)auStack_b0._40_8_;
    uStack_130 = SUB86(auStack_b0._40_8_,2);
    uStack_13a = (undefined2)auStack_b0._32_8_;
    uStack_138 = SUB86(auStack_b0._32_8_,2);
    bStack_210 = param_5 & 1;
    uStack_208 = 0;
    uStack_200 = 1;
    uStack_1f6 = uStack_158;
    uStack_1f0 = uStack_152;
    uStack_1fe = uStack_160;
    uStack_1f8 = uStack_15a;
    uStack_1e6 = uStack_148;
    uStack_1e0 = uStack_142;
    uStack_1ee = uStack_150;
    uStack_1e8 = uStack_14a;
    uStack_1d6 = uStack_138;
    uStack_1de = uStack_140;
    uStack_1d8 = uStack_13a;
    uStack_1b8 = CONCAT71(uStack_1b8._1_7_,param_5) & 0xffffffffffffff01;
    lStack_1b0 = 0;
    uStack_1a8 = 1;
    uStack_17e = uStack_138;
    uStack_178 = uStack_132;
    uStack_186 = uStack_140;
    uStack_180 = uStack_13a;
    uStack_18e = uStack_148;
    uStack_188 = uStack_142;
    uStack_196 = uStack_150;
    uStack_190 = uStack_14a;
    uStack_19e = uStack_158;
    uStack_198 = uStack_152;
    uStack_1a0 = uStack_15a;
    uVar6 = 0x112e57ee8;
    puStack_218 = puVar4;
    uStack_1d0 = uStack_132;
    uStack_1ce = uStack_130;
    puStack_1c0 = puVar4;
    uStack_176 = uStack_130;
    func_0x0001020e155c(&puStack_218,&puStack_108,0x112e57ee8,&UNK_10da5b720);
    func_0x0001020e15a4(&puStack_1c0,0x112e57ee8,&UNK_10da5b720);
    lStack_128 = CONCAT62(uStack_1de,uStack_1e0);
    uStack_138 = (undefined6)CONCAT62(uStack_1ee,uStack_1f0);
    uStack_132 = (undefined2)((uint6)uStack_1ee >> 0x20);
    uStack_140 = (undefined6)CONCAT62(uStack_1f6,uStack_1f8);
    uStack_13a = (undefined2)((uint6)uStack_1f6 >> 0x20);
    uStack_130 = (undefined6)CONCAT62(uStack_1e6,uStack_1e8);
    uStack_12a = (undefined2)((uint6)uStack_1e6 >> 0x20);
    lStack_118 = CONCAT62(uStack_1ce,uStack_1d0);
    lStack_120 = CONCAT62(uStack_1d6,uStack_1d8);
    uStack_158 = (undefined6)CONCAT71(uStack_20f,bStack_210);
    uStack_152 = (undefined2)((uint7)uStack_20f >> 0x28);
    uStack_160 = SUB86(puStack_218,0);
    uStack_15a = (undefined2)((ulong)puStack_218 >> 0x30);
    uStack_148 = (undefined6)CONCAT62(uStack_1fe,uStack_200);
    uStack_142 = (undefined2)((uint6)uStack_1fe >> 0x20);
    uStack_150 = (undefined6)uStack_208;
    uStack_14a = (undefined2)((ulong)uStack_208 >> 0x30);
    uStack_110 = 0;
    func_0x0001000285a8(0x112e57ee8,&UNK_10da5b720);
    uVar7 = uVar6;
    func_0x0001020e146c();
    func_0x000107c5f490(&puStack_108,&uStack_160,uVar6,PTR___s7SwiftUI5ColorVN_1103496f0,uVar7,
                        PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
    func_0x000107c61170(puVar2);
  }
  uStack_198 = (undefined2)lStack_e0;
  uStack_196 = (undefined6)((ulong)lStack_e0 >> 0x10);
  uStack_1a0 = (undefined2)lStack_e8;
  uStack_19e = (undefined6)((ulong)lStack_e8 >> 0x10);
  uStack_188 = (undefined2)lStack_d0;
  uStack_186 = (undefined6)((ulong)lStack_d0 >> 0x10);
  uStack_190 = (undefined2)lStack_d8;
  uStack_18e = (undefined6)((ulong)lStack_d8 >> 0x10);
  uStack_178 = (undefined2)lStack_c0;
  uStack_176 = (undefined6)((ulong)lStack_c0 >> 0x10);
  uStack_180 = (undefined2)lStack_c8;
  uStack_17e = (undefined6)((ulong)lStack_c8 >> 0x10);
  param_1[5] = lStack_e0;
  param_1[4] = lStack_e8;
  param_1[7] = lStack_d0;
  param_1[6] = lStack_d8;
  param_1[9] = lStack_c0;
  param_1[8] = lStack_c8;
  uStack_1b8 = lStack_100;
  puStack_1c0 = puStack_108;
  uStack_1a8 = (undefined2)lStack_f0;
  uStack_1a6 = (undefined6)((ulong)lStack_f0 >> 0x10);
  lStack_1b0 = lStack_f8;
  param_1[1] = lStack_100;
  *param_1 = puStack_108;
  param_1[3] = lStack_f0;
  param_1[2] = lStack_f8;
  uStack_170 = uStack_b8;
  *(undefined1 *)(param_1 + 10) = uStack_b8;
  uStack_158 = (undefined6)lStack_100;
  uStack_152 = (undefined2)((ulong)lStack_100 >> 0x30);
  uStack_160 = SUB86(puStack_108,0);
  uStack_15a = (undefined2)((ulong)puStack_108 >> 0x30);
  uStack_148 = (undefined6)lStack_f0;
  uStack_142 = (undefined2)((ulong)lStack_f0 >> 0x30);
  uStack_150 = (undefined6)lStack_f8;
  uStack_14a = (undefined2)((ulong)lStack_f8 >> 0x30);
  uStack_110 = uStack_b8;
  lStack_128 = lStack_d0;
  uStack_130 = (undefined6)lStack_d8;
  uStack_12a = (undefined2)((ulong)lStack_d8 >> 0x30);
  lStack_118 = lStack_c0;
  lStack_120 = lStack_c8;
  uStack_138 = (undefined6)lStack_e0;
  uStack_132 = (undefined2)((ulong)lStack_e0 >> 0x30);
  uStack_140 = (undefined6)lStack_e8;
  uStack_13a = (undefined2)((ulong)lStack_e8 >> 0x30);
  func_0x0001020e155c(&puStack_1c0,&puStack_218,0x112e57f08,&UNK_10da5b738);
  func_0x0001020e15a4(&uStack_160,0x112e57f08,&UNK_10da5b738);
  return;
}



/* Entry: 1020e1450; end: 1020e146b;  */

void FUN_1020e1450(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020e146c; end: 1020e165b;  */

void FUN_1020e146c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e57ef0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57ee8;
  func_0x00010002969c(0x112e57ee8,&UNK_10da5b720);
  uVar2 = uVar1;
  func_0x0001020e14e4();
  puStack_28 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e57ef0 = puVar3;
  return;
}



/* Entry: 1020e165c; end: 1020e1663;  */

void FUN_1020e165c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1020e1664; end: 1020e16af;  */

undefined8 * FUN_1020e1664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1020e16b0; end: 1020e16eb;  */

undefined8 * FUN_1020e16b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 1020e16ec; end: 1020e17b7;  */

int FUN_1020e16ec(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1020e17b8; end: 1020e1a97;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1020e17b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 auStack_70 [2];
  byte bStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  
  lVar5 = 0x112e57f18;
  func_0x0001000285a8(0x112e57f18,&UNK_10da5b7b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar12 = (undefined8 *)((long)auStack_70 + lVar2);
  lVar6 = 0;
  FUN_1020e3cac();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar13 = (undefined8 *)((long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (param_2 != 0) {
    puVar7 = &UNK_10da5b7b8;
    func_0x000107c614e0(&UNK_10da5b7b8);
    puVar8 = &UNK_10da5b7e0;
    func_0x000107c614e0(&UNK_10da5b7e0);
    func_0x000107c61174(param_2);
    func_0x000107c5f20c(&bStack_60);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(param_2);
    bVar3 = bStack_60;
    uVar9 = 0;
    func_0x0001020d05f8();
    uVar11 = 0x112e56cb0;
    FUN_1020e1b84(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
    func_0x000107c5f398();
    if ((bVar3 & 1) == 0) {
      puVar7 = &UNK_10da5b800;
      func_0x000107c614e0();
      auStack_70[1] = 0;
      uVar10 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      func_0x000107c5f728(&bStack_60,auStack_70 + 1,uVar10);
      *puVar12 = uVar9;
      *(undefined8 *)((long)auStack_70 + lVar2 + 8U) = uVar11;
      *(undefined **)(&bStack_60 + lVar2) = puVar7;
      *(undefined1 *)((long)&uStack_58 + lVar2) = 0;
      *(undefined8 *)(&stack0xffffffffffffffb8 + lVar2) = uStack_58;
      *(ulong *)(&stack0xffffffffffffffb0 + lVar2) = CONCAT71(uStack_5f,bStack_60);
      func_0x000107c6159c(puVar12,lVar5,1);
      uVar11 = 0x112e57f20;
      FUN_1020e1b84(0x112e57f20,FUN_1020e3cac,&UNK_10da5ba80);
      uVar9 = uVar11;
      FUN_1020e1bc4();
      func_0x000107c5f490(param_1,puVar12,lVar6,&UNK_1104c9fb8,uVar11,uVar9);
    }
    else {
      *puVar13 = uVar9;
      puVar13[1] = uVar11;
      iVar1 = *(int *)(lVar6 + 0x14);
      puVar7 = &UNK_10da5b830;
      func_0x000107c614e0();
      *(undefined **)((long)puVar13 + (long)iVar1) = puVar7;
      uVar11 = 0x112e57758;
      func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
      func_0x000107c6159c((long)puVar13 + (long)iVar1,uVar11,0);
      FUN_1020e1ca0(puVar13,puVar12);
      func_0x000107c6159c(puVar12,lVar5,0);
      uVar11 = 0x112e57f20;
      FUN_1020e1b84(0x112e57f20,FUN_1020e3cac,&UNK_10da5ba80);
      uVar9 = uVar11;
      FUN_1020e1bc4();
      func_0x000107c5f490(param_1,puVar12,lVar6,&UNK_1104c9fb8,uVar11,uVar9);
      func_0x0001020e1ce4(puVar13);
    }
    return;
  }
  uVar9 = 0;
  func_0x0001020d05f8(0);
  uVar11 = 0x112e56cb0;
  FUN_1020e1b84(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,param_3,uVar9,uVar11);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1020e1a98);
  (*pcVar4)();
}



/* Entry: 1020e1a98; end: 1020e1aab;  */

void FUN_1020e1a98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020e1aac; end: 1020e1b83;  */

/* WARNING: Possible PIC construction at 0x0001020e1afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020e1b00) */

void FUN_1020e1aac(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10da5b7b8;
  func_0x000107c614e0(&UNK_10da5b7b8);
  puVar2 = &UNK_10da5b7e0;
  func_0x000107c614e0(&UNK_10da5b7e0);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1020e1b84; end: 1020e1bc3;  */

void FUN_1020e1b84(long *param_1,code *param_2,long param_3)

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



/* Entry: 1020e1bc4; end: 1020e1c03;  */

void FUN_1020e1bc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e57f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5bc64;
  func_0x000107c61520(&UNK_10da5bc64,&UNK_1104c9fb8);
  puRam0000000112e57f28 = puVar1;
  return;
}



/* Entry: 1020e1c04; end: 1020e1c23;  */

void FUN_1020e1c04(void)

{
  func_0x000107c5f3ac();
  return;
}



/* Entry: 1020e1c24; end: 1020e1c9f;  */

void FUN_1020e1c24(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  func_0x000107c5f340();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1);
  func_0x000107c5f3b0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 1020e1ca0; end: 1020e1daf;  */

undefined8 FUN_1020e1ca0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1020e3cac();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020e1db0; end: 1020e1db7;  */

undefined8 * FUN_1020e1db0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 1020e1db8; end: 1020e2bfb;  */

long * FUN_1020e1db8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar14 = *param_2;
  *param_1 = lVar14;
  if ((uVar8 >> 0x11 & 1) == 0) {
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    uVar6 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar6;
    lVar9 = 0;
    func_0x0001020c31a0();
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x18));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x18));
    uVar7 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar7;
    uVar17 = puVar4[3];
    puVar3[2] = puVar4[2];
    puVar3[3] = uVar17;
    lVar10 = 0;
    func_0x0001020c2460();
    lVar15 = (long)*(int *)(lVar10 + 0x18);
    lVar11 = 0;
    func_0x000107c5ede0();
    lVar16 = *(long *)(lVar11 + -8);
    pcVar12 = *(code **)(lVar16 + 0x30);
    func_0x000107c61174(lVar14);
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
    func_0x000107c61434(uVar17);
    lVar14 = (long)puVar4 + lVar15;
    (*pcVar12)(lVar14,1,lVar11);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar3 + lVar15,(long)puVar4 + lVar15,lVar11);
      (**(code **)(lVar16 + 0x38))((long)puVar3 + lVar15,0,1,lVar11);
    }
    else {
      lVar14 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar3 + lVar15,(long)puVar4 + lVar15,
                          *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(lVar10 + 0x1c);
    lVar14 = (long)puVar4 + lVar10;
    (*pcVar12)(lVar14,1,lVar11);
    if ((int)lVar14 == 0) {
      (**(code **)(lVar16 + 0x10))((long)puVar3 + lVar10,(long)puVar4 + lVar10,lVar11);
      (**(code **)(lVar16 + 0x38))((long)puVar3 + lVar10,0,1,lVar11);
    }
    else {
      lVar14 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar3 + lVar10,(long)puVar4 + lVar10,
                          *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
    }
    puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
    uVar5 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x20)) =
         *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x20));
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
    puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x24));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    uVar6 = puVar2[3];
    puVar1[2] = puVar2[2];
    puVar1[3] = uVar6;
    uVar7 = puVar2[5];
    puVar1[4] = puVar2[4];
    puVar1[5] = uVar7;
    *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 6);
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar14 = puVar3[1];
    uVar17 = *puVar3;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar4[1] = puVar3[1];
    *puVar4 = uVar17;
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
    func_0x000107c61434(uVar6);
    func_0x000107c61434(uVar7);
  }
  else {
    uVar13 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar14 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar14);
  return param_1;
}



/* Entry: 1020e2bfc; end: 1020e2c13;  */

void FUN_1020e2bfc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020e2c14; end: 1020e2c4b;  */

void FUN_1020e2c14(undefined8 param_1)

{
  if (lRam0000000112e57f98 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6af2bc);
  return;
}



/* Entry: 1020e2c4c; end: 1020e2ccf;  */

void FUN_1020e2c4c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x0001020c31a0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020e2cd0; end: 1020e2cdf;  */

void FUN_1020e2cd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af308,1);
  return;
}



/* Entry: 1020e2ce0; end: 1020e304f;  */

void FUN_1020e2ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long alStack_110 [5];
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar3 = 0x112e57fe8;
  alStack_110[3] = param_1;
  func_0x0001000285a8(0x112e57fe8,&UNK_10da5b8f0);
  alStack_110[2] = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar12 - extraout_x12);
  lVar3 = 0;
  FUN_1020e2c14();
  lVar15 = *(long *)(lVar3 + -8);
  lVar18 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar13 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112e57ff0;
  puVar5 = &UNK_10da5b8f8;
  func_0x0001000285a8(0x112e57ff0,&UNK_10da5b8f8);
  alStack_110[1] = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_110[1] + 0x40));
  lVar14 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar14 - extraout_x12_00;
  uVar9 = *param_6;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_b8,0,1,0x405e000000000000,0,lVar4,puVar5);
  uStack_e8 = uStack_b8;
  uStack_e0 = uStack_b0;
  uStack_d8 = uStack_a8;
  uStack_d0 = uStack_a0;
  uStack_c0 = uStack_90;
  uStack_c8 = uStack_98;
  alStack_110[4] = uVar9;
  func_0x0001020e365c(param_6,lVar11,FUN_1020e2c14);
  uVar8 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar16 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1104c9d98;
  func_0x000107c613fc(&UNK_1104c9d98,uVar16 + lVar18,uVar8 | 7);
  FUN_1020e3354(lVar11,puVar5 + uVar16);
  func_0x000107c61174(uVar9);
  uVar6 = 0x112e57ff8;
  func_0x0001000285a8(0x112e57ff8,&UNK_10da5b900);
  uVar7 = uVar6;
  func_0x0001020e33fc();
  func_0x000107c5f620(lVar17,1,0x1020e3398,puVar5,uVar6,uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61574();
  func_0x000107c5f438();
  *puVar13 = puVar5;
  puVar13[1] = 0x4030000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  lVar4 = 0x112e58010;
  func_0x0001000285a8(0x112e58010,&UNK_10da5b908);
  FUN_1020e3050((long)puVar13 + (long)*(int *)(lVar4 + 0x2c));
  uVar2 = SUB81(param_6,0);
  func_0x000107c5f568();
  uVar19 = 0x4030000000000000;
  func_0x000107c5f280();
  lVar4 = 0x112e58018;
  uVar6 = param_3;
  uVar7 = param_4;
  uVar9 = param_5;
  func_0x0001000285a8(0x112e58018,&UNK_10da5b910);
  puVar1 = (undefined1 *)((long)puVar13 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar19;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f584();
  uVar19 = 0x4020000000000000;
  func_0x000107c5f280();
  lVar11 = alStack_110[1];
  puVar1 = (undefined1 *)((long)puVar13 + (long)*(int *)(alStack_110[2] + 0x24));
  *puVar1 = (char)lVar4;
  *(undefined8 *)(puVar1 + 8) = uVar19;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x20) = uVar9;
  puVar1[0x28] = 0;
  pcVar10 = *(code **)(lVar11 + 0x10);
  (*pcVar10)(lVar14,lVar17,lVar3);
  FUN_1020e34b4(puVar13,lVar12);
  lVar15 = alStack_110[3];
  (*pcVar10)(alStack_110[3],lVar14,lVar3);
  lVar4 = 0x112e58020;
  func_0x0001000285a8(0x112e58020,&UNK_10da5b918);
  FUN_1020e34b4(lVar12,lVar15 + *(int *)(lVar4 + 0x30));
  func_0x0001020e3504(puVar13);
  pcVar10 = *(code **)(lVar11 + 8);
  (*pcVar10)(lVar17,lVar3);
  func_0x0001020e3504(lVar12);
  (*pcVar10)(lVar14,lVar3);
  return;
}



/* Entry: 1020e3050; end: 1020e32a3;  */

void FUN_1020e3050(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long alStack_70 [2];
  
  lVar5 = 0;
  alStack_70[1] = param_1;
  FUN_1020db870();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar10 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar10 - extraout_x12;
  lVar6 = 0;
  FUN_1020d9e40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = (undefined8 *)(lVar12 - extraout_x12_00);
  lVar7 = 0;
  FUN_1020e2c14();
  iVar4 = *(int *)(lVar7 + 0x14);
  func_0x0001020e365c(param_2 + iVar4,(long)puVar13 + (long)*(int *)(lVar6 + 0x14),0x1020c31a0);
  puVar1 = (undefined8 *)(param_2 + *(int *)(lVar7 + 0x18));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  puVar8 = &UNK_10da5b920;
  func_0x000107c614e0();
  *puVar13 = puVar8;
  uVar9 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  func_0x000107c6159c(puVar13,uVar9,0);
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar6 + 0x18));
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  func_0x0001020e365c(param_2 + iVar4,lVar11,0x1020c31a0);
  puVar1 = (undefined8 *)(lVar11 + *(int *)(lVar5 + 0x14));
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  iVar4 = *(int *)(lVar5 + 0x18);
  uVar9 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  *(undefined8 *)(lVar11 + iVar4) = uVar9;
  func_0x0001020e365c(puVar13,lVar12,FUN_1020d9e40);
  func_0x0001020e365c(lVar11,lVar10,FUN_1020db870);
  lVar6 = alStack_70[1];
  func_0x0001020e365c(lVar12,alStack_70[1],FUN_1020d9e40);
  lVar5 = 0x112e58090;
  func_0x0001000285a8(0x112e58090,&UNK_10da5b950);
  func_0x0001020e365c(lVar10,lVar6 + *(int *)(lVar5 + 0x30),FUN_1020db870);
  func_0x000107c61580(uVar3,2);
  func_0x0001020e36a0(lVar11,FUN_1020db870);
  func_0x0001020e36a0(puVar13,FUN_1020d9e40);
  func_0x0001020e36a0(lVar10,FUN_1020db870);
  func_0x0001020e36a0(lVar12,FUN_1020d9e40);
  return;
}



/* Entry: 1020e32a4; end: 1020e32ab;  */

void FUN_1020e32a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020e32ac; end: 1020e3353;  */

void FUN_1020e32ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 unaff_w20;
  undefined8 uVar3;
  
  func_0x000107c5f438();
  *param_1 = param_6;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112e57fd8;
  func_0x0001000285a8(0x112e57fd8,&UNK_10da5b8e0);
  FUN_1020e2ce0((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
  func_0x000107c5f574();
  uVar3 = 0x4018000000000000;
  func_0x000107c5f280();
  lVar2 = 0x112e57fe0;
  func_0x0001000285a8(0x112e57fe0,&UNK_10da5b8e8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  *puVar1 = unaff_w20;
  *(undefined8 *)(puVar1 + 8) = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 1020e3354; end: 1020e3473;  */

undefined8 FUN_1020e3354(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1020e2c14();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020e3474; end: 1020e34b3;  */

void FUN_1020e3474(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5b9f8;
  func_0x000107c61520(&UNK_10da5b9f8,&UNK_1104c9dc0);
  puRam0000000112e58008 = puVar1;
  return;
}



/* Entry: 1020e34b4; end: 1020e354b;  */

undefined8 FUN_1020e34b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e57fe8;
  func_0x0001000285a8(0x112e57fe8,&UNK_10da5b8f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020e354c; end: 1020e3563;  */

void FUN_1020e354c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1020e3564; end: 1020e3577;  */

void FUN_1020e3564(void)

{
  func_0x000107c5f464();
  return;
}



/* Entry: 1020e3578; end: 1020e3583;  */

void FUN_1020e3578(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb63f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE21_overrideSizeThatFits_2in6uiViewySo6CGSizeVz_AA09_ProposedF0V0C4TypeQztF_110348eb0
  )();
  return;
}



/* Entry: 1020e3584; end: 1020e3597;  */

void FUN_1020e3584(void)

{
  func_0x000107c5f46c();
  return;
}



/* Entry: 1020e3598; end: 1020e3637;  */

void FUN_1020e3598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1020e37c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb641c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE9_makeView4view6inputsAA01_F7OutputsVAA11_GraphValueVyxG_AA01_F6InputsVtFZ_110348ec8
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1020e3638; end: 1020e36db;  */

void FUN_1020e3638(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_1020e37c4();
  func_0x000107c5f480(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e365c);
  (*pcVar1)();
}



/* Entry: 1020e36dc; end: 1020e36eb;  */

undefined1  [16] FUN_1020e36dc(void)

{
  return ZEXT816(0x1104c9dc0);
}



/* Entry: 1020e36ec; end: 1020e3763;  */

void FUN_1020e36ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e58098 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e57fe0;
  func_0x00010002969c(0x112e57fe0,&UNK_10da5b8e8);
  uVar2 = uVar1;
  FUN_1020e3764();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e58098 = puVar3;
  return;
}



/* Entry: 1020e3764; end: 1020e37b3;  */

void FUN_1020e3764(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e580a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e580a8;
  func_0x00010002969c(0x112e580a8,&UNK_10da5b968);
  puVar2 = PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0;
  func_0x000107c61520(PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0,uVar1);
  puRam0000000112e580a0 = puVar2;
  return;
}



/* Entry: 1020e37b4; end: 1020e37c3;  */

void FUN_1020e37b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e58008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5b9f8;
  func_0x000107c61520(&UNK_10da5b9f8,&UNK_1104c9dc0);
  puRam0000000112e58008 = puVar1;
  return;
}



/* Entry: 1020e37c4; end: 1020e3803;  */

void FUN_1020e37c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e580b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da5b970;
  func_0x000107c61520(&UNK_10da5b970,&UNK_1104c9dc0);
  puRam0000000112e580b0 = puVar1;
  return;
}



/* Entry: 1020e3804; end: 1020e380b;  */

void FUN_1020e3804(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb68fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_1103494d8)();
  return;
}



/* Entry: 1020e380c; end: 1020e38eb;  */

long * FUN_1020e380c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((uVar1 >> 0x11 & 1) == 0) {
    param_1[1] = param_2[1];
    lVar6 = (long)*(int *)(param_3 + 0x14);
    func_0x000107c61174();
    uVar4 = 0x112e57758;
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    lVar3 = (long)param_2 + lVar6;
    func_0x000107c614c4(lVar3,uVar4);
    bVar2 = (int)lVar3 != 1;
    if (bVar2) {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      func_0x000107c6157c();
    }
    else {
      lVar3 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3)
      ;
    }
    func_0x000107c6159c((long)param_1 + lVar6,uVar4,!bVar2);
  }
  else {
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1020e38ec; end: 1020e3967;  */

void FUN_1020e38ec(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c61170(*param_1);
  lVar3 = (long)*(int *)(param_2 + 0x14);
  uVar1 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar2 = (long)param_1 + lVar3;
  func_0x000107c614c4(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    func_0x000107c5f340();
                    /* WARNING: Could not recover jumptable at 0x0001020e3954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + lVar3,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)((long)param_1 + lVar3));
  return;
}



/* Entry: 1020e3968; end: 1020e3a13;  */

undefined8 * FUN_1020e3968(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  lVar4 = (long)*(int *)(param_3 + 0x14);
  func_0x000107c61174();
  uVar2 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar3 = (long)param_2 + lVar4;
  func_0x000107c614c4(lVar3,uVar2);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
    func_0x000107c6157c();
  }
  else {
    lVar3 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3);
  }
  func_0x000107c6159c((long)param_1 + lVar4,uVar2,!bVar1);
  return param_1;
}



/* Entry: 1020e3a14; end: 1020e3aff;  */

undefined8 * FUN_1020e3a14(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  param_1[1] = param_2[1];
  if (param_1 != param_2) {
    lVar4 = (long)*(int *)(param_3 + 0x14);
    uVar3 = 0x112e57758;
    func_0x0001020e4f64((long)param_1 + lVar4,0x112e57758,&UNK_10da5add0);
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    lVar2 = (long)param_2 + lVar4;
    func_0x000107c614c4(lVar2,uVar3);
    bVar1 = (int)lVar2 != 1;
    if (bVar1) {
      *(undefined8 *)((long)param_1 + lVar4) = *(undefined8 *)((long)param_2 + lVar4);
      func_0x000107c6157c();
    }
    else {
      lVar2 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2)
      ;
    }
    func_0x000107c6159c((long)param_1 + lVar4,uVar3,!bVar1);
  }
  return param_1;
}



/* Entry: 1020e3b00; end: 1020e3bab;  */

undefined8 * FUN_1020e3b00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  lVar3 = (long)*(int *)(param_3 + 0x14);
  lVar1 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar2 = (long)param_2 + lVar3;
  func_0x000107c614c4(lVar2,lVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar2);
    func_0x000107c6159c((long)param_1 + lVar3,lVar1,1);
  }
  else {
    func_0x000107c610b4((long)param_1 + lVar3,(long)param_2 + lVar3,
                        *(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 1020e3bac; end: 1020e3c93;  */

undefined8 * FUN_1020e3bac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  if (param_1 != param_2) {
    lVar4 = (long)*(int *)(param_3 + 0x14);
    lVar2 = 0x112e57758;
    func_0x0001020e4f64((long)param_1 + lVar4,0x112e57758,&UNK_10da5add0);
    func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
    lVar3 = (long)param_2 + lVar4;
    func_0x000107c614c4(lVar3,lVar2);
    if ((int)lVar3 == 1) {
      lVar3 = 0;
      func_0x000107c5f340();
      (**(code **)(*(long *)(lVar3 + -8) + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3)
      ;
      func_0x000107c6159c((long)param_1 + lVar4,lVar2,1);
    }
    else {
      func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                          *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Entry: 1020e3c94; end: 1020e3cab;  */

void FUN_1020e3c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1020e3cac; end: 1020e3ce3;  */

void FUN_1020e3cac(undefined8 param_1)

{
  if (lRam0000000112e58110 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6af330);
  return;
}



/* Entry: 1020e3ce4; end: 1020e3d57;  */

void FUN_1020e3ce4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10da5ba68;
  lVar1 = 0x13f;
  func_0x0001020d6274();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1020e3d58; end: 1020e3d67;  */

void FUN_1020e3d58(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e6af358,1);
  return;
}



/* Entry: 1020e3d68; end: 1020e450f;  */

void FUN_1020e3d68(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long alStack_b0 [6];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_61;
  
  lVar4 = 0;
  lStack_70 = param_1;
  FUN_1020e3cac();
  alStack_b0[0] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)alStack_b0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e58150;
  alStack_b0[2] = extraout_x12;
  alStack_b0[3] = lVar13;
  func_0x0001000285a8(0x112e58150,&UNK_10da5bad8);
  alStack_b0[4] = *(long *)(lVar4 + -8);
  alStack_b0[5] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_b0[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar13 - extraout_x8;
  lVar4 = 0x112e58158;
  func_0x0001000285a8(0x112e58158,&UNK_10da5bae0);
  lStack_80 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar12 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_00;
  lVar5 = 0x112e58160;
  alStack_b0[1] = lVar12;
  func_0x0001000285a8(0x112e58160,&UNK_10da5bae8);
  lVar17 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar16 = (long *)(lVar12 - extraout_x12_01);
  func_0x000107c5f438();
  *plVar16 = lVar17;
  plVar16[1] = 0;
  *(undefined1 *)(plVar16 + 2) = 0;
  lVar17 = 0x112e58168;
  func_0x0001000285a8(0x112e58168,&UNK_10da5baf0);
  plVar6 = param_2;
  func_0x0001020e4198((long)plVar16 + (long)*(int *)(lVar17 + 0x2c));
  func_0x000107c5f7d4(0x3fd3333333333333);
  lVar17 = *param_2;
  if (lVar17 != 0) {
    puVar7 = &UNK_10da5baf8;
    func_0x000107c614e0(&UNK_10da5baf8);
    puVar8 = &UNK_10da5bb20;
    func_0x000107c614e0(&UNK_10da5bb20);
    func_0x000107c61174(lVar17);
    func_0x000107c5f20c(&uStack_61);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(lVar17);
    plVar1 = (long *)((long)plVar16 + (long)*(int *)(lVar5 + 0x24));
    *plVar1 = (long)plVar6;
    *(undefined1 *)(plVar1 + 1) = uStack_61;
    lVar5 = alStack_b0[3];
    FUN_1020e51f4(param_2,alStack_b0[3],FUN_1020e3cac);
    uVar11 = (ulong)*(byte *)(alStack_b0[0] + 0x50);
    uVar15 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
    puVar7 = &UNK_1104c9e98;
    func_0x000107c613fc(&UNK_1104c9e98,uVar15 + alStack_b0[2],uVar11 | 7);
    func_0x0001020e5238(lVar5,puVar7 + uVar15,FUN_1020e3cac);
    func_0x0001020e4da4();
    func_0x000107c5f738(lVar13,0x1020e4d78,puVar7,FUN_1020e4d20,0,&UNK_1104c9950,lVar5);
    FUN_1020e52dc(0x112e58178,0x112e58150,&UNK_10da5bad8,
                  PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
    FUN_1020e0e04();
    lVar5 = alStack_b0[5];
    lVar17 = alStack_b0[1];
    func_0x000107c5f60c(alStack_b0[1]);
    (**(code **)(alStack_b0[4] + 8))(lVar13,lVar5);
    func_0x0001020e4f1c(plVar16,lVar12,0x112e58160,&UNK_10da5bae8);
    lVar2 = lStack_78;
    lVar13 = lStack_80;
    pcVar14 = *(code **)(lStack_80 + 0x10);
    (*pcVar14)(lStack_78,lVar17,lVar4);
    lVar3 = lStack_70;
    func_0x0001020e4f1c(lVar12,lStack_70,0x112e58160,&UNK_10da5bae8);
    lVar5 = 0x112e58180;
    func_0x0001000285a8(0x112e58180,&UNK_10da5bb40);
    (*pcVar14)(lVar3 + *(int *)(lVar5 + 0x30),lVar2,lVar4);
    pcVar14 = *(code **)(lVar13 + 8);
    (*pcVar14)(lVar17,lVar4);
    func_0x0001020e4f64(plVar16,0x112e58160,&UNK_10da5bae8);
    (*pcVar14)(lVar2,lVar4);
    func_0x0001020e4f64(lVar12,0x112e58160,&UNK_10da5bae8);
    return;
  }
  lVar4 = param_2[1];
  uVar9 = 0;
  func_0x0001020d05f8(0);
  uVar10 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar4,uVar9,uVar10);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1020e4198);
  (*pcVar14)();
}



/* Entry: 1020e4510; end: 1020e4767;  */

void FUN_1020e4510(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
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
  
  lVar4 = 0;
  func_0x000107c5f4c0();
  puVar6 = PTR___s7SwiftUI21PinnedScrollableViewsVMa_110348f88;
  lVar11 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f43c();
  uStack_b8 = 0;
  uVar5 = 0x112e581e0;
  plStack_a0 = param_2;
  FUN_1020e4fac(0x112e581e0,puVar6,PTR___s7SwiftUI21PinnedScrollableViewsVs9OptionSetAAMc_110348f90)
  ;
  func_0x000107c60708(auStack_c0 + lVar10,&uStack_b8,lVar4,uVar5);
  uVar5 = 0x112e581e8;
  func_0x0001000285a8(0x112e581e8,&UNK_10da5bbb0);
  uVar8 = uVar5;
  func_0x0001020e4fec();
  uVar9 = 0;
  func_0x000107c5f284(param_1,lVar11,0,0,auStack_c0 + lVar10,FUN_1020e4fa4,&uStack_b0,uVar5,uVar8);
  func_0x000107c5f7a4();
  *(long *)((long)alStack_d0 + lVar10) = lVar11;
  *(undefined8 *)((long)alStack_d0 + lVar10 + 8) = uVar9;
  auStack_d8[lVar10] = 0;
  *(undefined8 *)((long)&uStack_e0 + lVar10) = 0x7ff0000000000000;
  auStack_e8[lVar10] = 1;
  *(undefined8 *)((long)&uStack_f0 + lVar10) = 0;
  func_0x000107c5f388(&uStack_b0,0,1,0,1,0,1,0,1);
  lVar10 = 0x112e581b0;
  func_0x0001000285a8(0x112e581b0,&UNK_10da5bb60);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  puVar1[9] = uStack_68;
  puVar1[8] = uStack_70;
  puVar1[0xb] = uStack_58;
  puVar1[10] = uStack_60;
  puVar1[0xd] = uStack_48;
  puVar1[0xc] = uStack_50;
  puVar1[1] = uStack_a8;
  *puVar1 = uStack_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = plStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = uStack_90;
  puVar1[7] = uStack_78;
  puVar1[6] = uStack_80;
  func_0x000107c5f7d4(0x3fd0000000000000);
  lVar11 = *param_2;
  if (lVar11 != 0) {
    puVar6 = &UNK_10da5bbc8;
    func_0x000107c614e0(&UNK_10da5bbc8);
    puVar7 = &UNK_10da5bbf0;
    func_0x000107c614e0(&UNK_10da5bbf0);
    func_0x000107c61174(lVar11);
    func_0x000107c5f20c(&uStack_b8);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(lVar11);
    lVar4 = CONCAT44(uStack_b4,uStack_b8);
    lVar11 = 0x112e58198;
    func_0x0001000285a8(0x112e58198,&UNK_10da5bb58);
    plVar2 = (long *)(param_1 + *(int *)(lVar11 + 0x24));
    *plVar2 = lVar10;
    plVar2[1] = lVar4;
    return;
  }
  lVar10 = param_2[1];
  uVar8 = 0;
  func_0x0001020d05f8(0);
  uVar5 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar10,uVar8,uVar5);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020e4768);
  (*pcVar3)();
}



/* Entry: 1020e4768; end: 1020e4973;  */

void FUN_1020e4768(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar2 = 0;
  FUN_1020e3cac();
  lVar13 = *(long *)(lVar2 + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = -(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *param_2;
  if (lVar12 != 0) {
    puVar3 = &UNK_10da5bbc8;
    func_0x000107c614e0(&UNK_10da5bbc8);
    puVar4 = &UNK_10da5bbf0;
    func_0x000107c614e0(&UNK_10da5bbf0);
    func_0x000107c61174(lVar12);
    func_0x000107c5f20c(auStack_58);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar12);
    puVar3 = &UNK_10da5bc10;
    func_0x000107c614e0(&UNK_10da5bc10);
    FUN_1020e51f4(param_2,auStack_60 + lVar2,FUN_1020e3cac);
    uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
    puVar4 = &UNK_1104c9ec0;
    func_0x000107c613fc(&UNK_1104c9ec0,uVar11 + lVar10,uVar9 | 7);
    func_0x0001020e5238(auStack_60 + lVar2,puVar4 + uVar11,FUN_1020e3cac);
    uVar8 = 0x112e572b8;
    func_0x0001000285a8(0x112e572b8,&UNK_10da5bc30);
    uVar7 = 0x112e58200;
    func_0x0001000285a8(0x112e58200,&UNK_10da5bbb8);
    uVar5 = 0x112e58218;
    FUN_1020e52dc(0x112e58218,0x112e572b8,&UNK_10da5bc30,PTR___sSayxGSksMc_11034dd18);
    uVar6 = uVar5;
    func_0x0001020e505c();
    *(undefined8 *)((long)auStack_70 + lVar2) = uVar6;
    func_0x000107c5f788(param_1,auStack_58,puVar3,FUN_1020e51a8,puVar4,uVar8,uVar7,uVar5,
                        PTR___sSSSHsWP_11034da90);
    return;
  }
  lVar2 = param_2[1];
  uVar7 = 0;
  func_0x0001020d05f8(0);
  uVar8 = 0x112e56cb0;
  func_0x0001020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar2,uVar7,uVar8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e4974);
  (*pcVar1)();
}



/* Entry: 1020e4974; end: 1020e4b73;  */

void FUN_1020e4974(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lStack_70;
  undefined1 uStack_61;
  
  lVar3 = 0;
  func_0x0001020c31a0();
  lStack_70 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lStack_70 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&lStack_70 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1020e3cac();
  lVar7 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar9 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x0001020e0768();
  FUN_1020e51f4(param_2,(long)param_1 + (long)*(int *)(lVar3 + 0x14),0x1020c31a0);
  FUN_1020d5a7c((long)param_1 + (long)*(int *)(lVar3 + 0x18));
  uVar4 = 0;
  func_0x0001020d05f8();
  uVar5 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f398();
  *param_1 = uVar4;
  param_1[1] = uVar5;
  uStack_61 = 0;
  func_0x000107c5f728((long)param_1 + (long)*(int *)(lVar3 + 0x1c),&uStack_61,PTR___sSbN_11034dd40);
  FUN_1020e51f4(param_3,lVar12,FUN_1020e3cac);
  FUN_1020e51f4(param_2,lVar9,0x1020c31a0);
  bVar1 = *(byte *)(lVar7 + 0x50);
  uVar8 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lStack_70 + 0x50);
  uVar11 = lVar13 + (ulong)bVar2 + uVar8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar6 = &UNK_1104c9ee8;
  func_0x000107c613fc(&UNK_1104c9ee8,uVar11 + lVar10,bVar1 | bVar2 | 7);
  func_0x0001020e5238(lVar12,puVar6 + uVar8,FUN_1020e3cac);
  func_0x0001020e5238(lVar9,puVar6 + uVar11,0x1020c31a0);
  lVar3 = 0x112e58200;
  func_0x0001000285a8(0x112e58200,&UNK_10da5bbb8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *param_1 = FUN_1020e527c;
  param_1[1] = puVar6;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1020e4b74; end: 1020e4c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e4b74(long *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar3 = *param_2;
    uVar2 = param_2[1];
    func_0x000107c61428(lVar4 + _DAT_112e57348,auStack_68,0x21,0);
    func_0x000107c61174(lVar4);
    func_0x000107c61434(uVar2);
    func_0x000100403b00(auStack_50,uVar3,uVar2);
    func_0x000107c614a8(auStack_68);
    func_0x000107c6142c(uStack_48);
    FUN_1020cd718();
    func_0x000107c61170(lVar4);
    return;
  }
  lVar4 = param_1[1];
  uVar2 = 0;
  func_0x0001020d05f8(0);
  uVar3 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar4,uVar2,uVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e4c58);
  (*pcVar1)();
}



/* Entry: 1020e4c58; end: 1020e4d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e4c58(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000100083b20(&uStack_38);
    uVar3 = 0;
    func_0x00010451c820(0);
    func_0x00010451989c();
    FUN_1020c7768();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uStack_38);
    func_0x000107c61170(uVar3);
    return;
  }
  lVar4 = param_1[1];
  func_0x0001020d05f8();
  uVar3 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar4,lVar2,uVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e4d20);
  (*pcVar1)();
}



/* Entry: 1020e4d20; end: 1020e4d2f;  */

void FUN_1020e4d20(void)

{
  return;
}



/* Entry: 1020e4d30; end: 1020e4d77;  */

void FUN_1020e4d30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c5f7a0();
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0x112e58148;
  func_0x0001000285a8(0x112e58148,&UNK_10da5bad0);
  FUN_1020e3d68((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  return;
}



/* Entry: 1020e4d78; end: 1020e4de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e4d78(void)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar4 = 0;
  FUN_1020e3cac();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  plVar1 = (long *)(unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    func_0x000107c61174();
    func_0x000100083b20(&uStack_38);
    uVar3 = 0;
    func_0x00010451c820(0);
    func_0x00010451989c();
    FUN_1020c7768();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(uStack_38);
    func_0x000107c61170(uVar3);
    return;
  }
  lVar6 = plVar1[1];
  func_0x0001020d05f8();
  uVar3 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar6,lVar4,uVar3);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020e4d20);
  (*pcVar2)();
}



/* Entry: 1020e4de4; end: 1020e4deb;  */

void FUN_1020e4de4(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
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
  
  plVar8 = *(long **)(unaff_x20 + 0x10);
  lVar3 = 0;
  func_0x000107c5f4c0();
  puVar5 = PTR___s7SwiftUI21PinnedScrollableViewsVMa_110348f88;
  lVar11 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f43c();
  uStack_b8 = 0;
  uVar4 = 0x112e581e0;
  plStack_a0 = plVar8;
  FUN_1020e4fac(0x112e581e0,puVar5,PTR___s7SwiftUI21PinnedScrollableViewsVs9OptionSetAAMc_110348f90)
  ;
  func_0x000107c60708(auStack_c0 + lVar10,&uStack_b8,lVar3,uVar4);
  uVar4 = 0x112e581e8;
  func_0x0001000285a8(0x112e581e8,&UNK_10da5bbb0);
  uVar7 = uVar4;
  func_0x0001020e4fec();
  uVar9 = 0;
  func_0x000107c5f284(param_1,lVar11,0,0,auStack_c0 + lVar10,FUN_1020e4fa4,&uStack_b0,uVar4,uVar7);
  func_0x000107c5f7a4();
  *(long *)((long)alStack_d0 + lVar10) = lVar11;
  *(undefined8 *)((long)alStack_d0 + lVar10 + 8) = uVar9;
  auStack_d8[lVar10] = 0;
  *(undefined8 *)((long)&uStack_e0 + lVar10) = 0x7ff0000000000000;
  auStack_e8[lVar10] = 1;
  *(undefined8 *)((long)&uStack_f0 + lVar10) = 0;
  func_0x000107c5f388(&uStack_b0,0,1,0,1,0,1,0,1);
  lVar10 = 0x112e581b0;
  func_0x0001000285a8(0x112e581b0,&UNK_10da5bb60);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar10 + 0x24));
  puVar1[9] = uStack_68;
  puVar1[8] = uStack_70;
  puVar1[0xb] = uStack_58;
  puVar1[10] = uStack_60;
  puVar1[0xd] = uStack_48;
  puVar1[0xc] = uStack_50;
  puVar1[1] = uStack_a8;
  *puVar1 = uStack_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = plStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = uStack_90;
  puVar1[7] = uStack_78;
  puVar1[6] = uStack_80;
  func_0x000107c5f7d4(0x3fd0000000000000);
  lVar11 = *plVar8;
  if (lVar11 != 0) {
    puVar5 = &UNK_10da5bbc8;
    func_0x000107c614e0(&UNK_10da5bbc8);
    puVar6 = &UNK_10da5bbf0;
    func_0x000107c614e0(&UNK_10da5bbf0);
    func_0x000107c61174(lVar11);
    func_0x000107c5f20c(&uStack_b8);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(lVar11);
    lVar3 = CONCAT44(uStack_b4,uStack_b8);
    lVar11 = 0x112e58198;
    func_0x0001000285a8(0x112e58198,&UNK_10da5bb58);
    plVar8 = (long *)(param_1 + *(int *)(lVar11 + 0x24));
    *plVar8 = lVar10;
    plVar8[1] = lVar3;
    return;
  }
  lVar10 = plVar8[1];
  uVar7 = 0;
  func_0x0001020d05f8(0);
  uVar4 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar10,uVar7,uVar4);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020e4768);
  (*pcVar2)();
}



/* Entry: 1020e4dec; end: 1020e4fa3;  */

void FUN_1020e4dec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e581a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e58198;
  func_0x00010002969c(0x112e58198,&UNK_10da5bb58);
  uVar2 = uVar1;
  func_0x0001020e4e84();
  uVar3 = 0x112e581c8;
  FUN_1020e52dc(0x112e581c8,0x112e581d0,&UNK_10da5bb70,
                PTR___s7SwiftUI18_AnimationModifierVyxGAA04ViewD0AAMc_110348d80);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e581a0 = puVar4;
  return;
}



/* Entry: 1020e4fa4; end: 1020e4fab;  */

void FUN_1020e4fa4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  plVar9 = *(long **)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_1020e3cac();
  lVar14 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = -(lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *plVar9;
  if (lVar13 != 0) {
    puVar3 = &UNK_10da5bbc8;
    func_0x000107c614e0(&UNK_10da5bbc8);
    puVar4 = &UNK_10da5bbf0;
    func_0x000107c614e0(&UNK_10da5bbf0);
    func_0x000107c61174(lVar13);
    func_0x000107c5f20c(auStack_58);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(lVar13);
    puVar3 = &UNK_10da5bc10;
    func_0x000107c614e0(&UNK_10da5bc10);
    FUN_1020e51f4(plVar9,auStack_60 + lVar2,FUN_1020e3cac);
    uVar10 = (ulong)*(byte *)(lVar14 + 0x50);
    uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
    puVar4 = &UNK_1104c9ec0;
    func_0x000107c613fc(&UNK_1104c9ec0,uVar12 + lVar11,uVar10 | 7);
    func_0x0001020e5238(auStack_60 + lVar2,puVar4 + uVar12,FUN_1020e3cac);
    uVar8 = 0x112e572b8;
    func_0x0001000285a8(0x112e572b8,&UNK_10da5bc30);
    uVar7 = 0x112e58200;
    func_0x0001000285a8(0x112e58200,&UNK_10da5bbb8);
    uVar5 = 0x112e58218;
    FUN_1020e52dc(0x112e58218,0x112e572b8,&UNK_10da5bc30,PTR___sSayxGSksMc_11034dd18);
    uVar6 = uVar5;
    func_0x0001020e505c();
    *(undefined8 *)((long)auStack_70 + lVar2) = uVar6;
    func_0x000107c5f788(param_1,auStack_58,puVar3,FUN_1020e51a8,puVar4,uVar8,uVar7,uVar5,
                        PTR___sSSSHsWP_11034da90);
    return;
  }
  lVar2 = plVar9[1];
  uVar7 = 0;
  func_0x0001020d05f8(0);
  uVar8 = 0x112e56cb0;
  func_0x0001020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar2,uVar7,uVar8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e4974);
  (*pcVar1)();
}



/* Entry: 1020e4fac; end: 1020e50f3;  */

void FUN_1020e4fac(long *param_1,code *param_2,long param_3)

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



/* Entry: 1020e50f4; end: 1020e51a7;  */

void FUN_1020e50f4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar2 = 0;
  FUN_1020e3cac();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  func_0x000107c61170(*puVar1);
  lVar4 = (long)*(int *)(lVar2 + 0x14);
  uVar3 = 0x112e57758;
  func_0x0001000285a8(0x112e57758,&UNK_10da5add0);
  lVar2 = (long)puVar1 + lVar4;
  func_0x000107c614c4(lVar2,uVar3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    func_0x000107c5f340();
    (**(code **)(*(long *)(lVar2 + -8) + 8))((long)puVar1 + lVar4,lVar2);
  }
  else {
    func_0x000107c61574(*(undefined8 *)((long)puVar1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020e51a8; end: 1020e51f3;  */

void FUN_1020e51a8(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lStack_70;
  undefined1 uStack_61;
  
  lVar6 = 0;
  FUN_1020e3cac();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  lVar6 = 0;
  func_0x0001020c31a0();
  lStack_70 = *(long *)(lVar6 + -8);
  lVar10 = *(long *)(lStack_70 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)&lStack_70 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1020e3cac();
  lVar8 = *(long *)(lVar6 + -8);
  lVar13 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar9 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  func_0x0001020e0768();
  FUN_1020e51f4(param_2,(long)param_1 + (long)*(int *)(lVar6 + 0x14),0x1020c31a0);
  FUN_1020d5a7c((long)param_1 + (long)*(int *)(lVar6 + 0x18));
  uVar3 = 0;
  func_0x0001020d05f8();
  uVar4 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f398();
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uStack_61 = 0;
  func_0x000107c5f728((long)param_1 + (long)*(int *)(lVar6 + 0x1c),&uStack_61,PTR___sSbN_11034dd40);
  FUN_1020e51f4(unaff_x20 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)),lVar12,FUN_1020e3cac);
  FUN_1020e51f4(param_2,lVar9,0x1020c31a0);
  bVar1 = *(byte *)(lVar8 + 0x50);
  uVar7 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lStack_70 + 0x50);
  uVar11 = lVar13 + (ulong)bVar2 + uVar7 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1104c9ee8;
  func_0x000107c613fc(&UNK_1104c9ee8,uVar11 + lVar10,bVar1 | bVar2 | 7);
  func_0x0001020e5238(lVar12,puVar5 + uVar7,FUN_1020e3cac);
  func_0x0001020e5238(lVar9,puVar5 + uVar11,0x1020c31a0);
  lVar6 = 0x112e58200;
  func_0x0001000285a8(0x112e58200,&UNK_10da5bbb8);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  *param_1 = FUN_1020e527c;
  param_1[1] = puVar5;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



/* Entry: 1020e51f4; end: 1020e527b;  */

undefined8 FUN_1020e51f4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020e527c; end: 1020e52db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020e527c(void)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  lVar6 = 0;
  FUN_1020e3cac();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  lVar9 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  lVar6 = 0;
  func_0x0001020c31a0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  plVar1 = (long *)(unaff_x20 + uVar8);
  puVar2 = (undefined8 *)(unaff_x20 + (uVar8 + lVar9 + uVar7 & (uVar7 ^ 0xffffffffffffffff)));
  lVar6 = *plVar1;
  if (lVar6 != 0) {
    uVar5 = *puVar2;
    uVar4 = puVar2[1];
    func_0x000107c61428(lVar6 + _DAT_112e57348,auStack_68,0x21,0);
    func_0x000107c61174(lVar6);
    func_0x000107c61434(uVar4);
    func_0x000100403b00(auStack_50,uVar5,uVar4);
    func_0x000107c614a8(auStack_68);
    func_0x000107c6142c(uStack_48);
    FUN_1020cd718();
    func_0x000107c61170(lVar6);
    return;
  }
  lVar6 = plVar1[1];
  uVar4 = 0;
  func_0x0001020d05f8(0);
  uVar5 = 0x112e56cb0;
  FUN_1020e4fac(0x112e56cb0,0x1020d05f8,&UNK_10da5a7c0);
  func_0x000107c5f394(0,lVar6,uVar4,uVar5);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020e4c58);
  (*pcVar3)();
}



/* Entry: 1020e52dc; end: 1020e5383;  */

void FUN_1020e52dc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 1020e5384; end: 1020e5487;  */

undefined8 * FUN_1020e5384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[2];
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar2;
  uVar4 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar4;
  param_1[5] = uVar1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 1020e5488; end: 1020e54eb;  */

undefined8 * FUN_1020e5488(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar2);
  uVar1 = *(undefined1 *)(param_2 + 3);
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar1;
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1[4]);
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 1020e54ec; end: 1020e55c7;  */

int FUN_1020e54ec(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1020e55c8; end: 1020e5837;  */

void FUN_1020e55c8(undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puVar4;
  
  uVar7 = param_6;
  func_0x000107c5f438();
  *param_1 = uVar7;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x112e58248;
  func_0x0001000285a8(0x112e58248,&UNK_10da5bcd8);
  puVar4 = param_7;
  FUN_1020e5838((long)param_1 + (long)*(int *)(lVar3 + 0x2c),param_7,param_6);
  uVar2 = SUB81(puVar4,0);
  func_0x000107c5f570();
  func_0x000107c5f2f0();
  dVar6 = param_3 * 0.15;
  func_0x000107c5f280();
  lVar3 = 0x112e58250;
  func_0x0001000285a8();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = uVar2;
  *(double *)(puVar1 + 8) = dVar6;
  *(double *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  func_0x000107c5f7a4();
  func_0x000107c5f388(&uStack_100,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar3 = 0x112e58258;
  func_0x0001000285a8(0x112e58258,&UNK_10da5bce8);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  puVar4[9] = uStack_b8;
  puVar4[8] = uStack_c0;
  puVar4[0xb] = uStack_a8;
  puVar4[10] = uStack_b0;
  puVar4[0xd] = uStack_98;
  puVar4[0xc] = uStack_a0;
  puVar4[1] = uStack_f8;
  *puVar4 = uStack_100;
  puVar4[3] = uStack_e8;
  puVar4[2] = uStack_f0;
  puVar4[5] = uStack_d8;
  puVar4[4] = uStack_e0;
  puVar4[7] = uStack_c8;
  puVar4[6] = uStack_d0;
  uStack_68 = param_7[1];
  uStack_70 = *param_7;
  uStack_80 = param_7[2];
  uStack_78 = *(undefined1 *)(param_7 + 3);
  uStack_88 = param_7[4];
  uStack_90 = param_7[5];
  puVar5 = &UNK_1104ca010;
  func_0x000107c613fc(&UNK_1104ca010,0x40,7);
  uVar7 = *param_7;
  uVar9 = param_7[3];
  uVar8 = param_7[2];
  *(undefined8 *)(puVar5 + 0x18) = param_7[1];
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  uVar7 = param_7[4];
  *(undefined8 *)(puVar5 + 0x38) = param_7[5];
  *(undefined8 *)(puVar5 + 0x30) = uVar7;
  uStack_118 = 0;
  FUN_1020e6790(&uStack_70,&uStack_110,0x112e58230,&UNK_10da5bcb8);
  FUN_1020e6790(&uStack_80,&uStack_110,0x112e58238,&UNK_10da5bcc0);
  FUN_1020e6790(&uStack_88,&uStack_110,0x112d36838,&UNK_10d915fb0);
  FUN_1020e6790(&uStack_90,&uStack_110,0x112e58240,&UNK_10da5bcd0);
  uVar7 = 0x112e08348;
  func_0x0001000285a8(0x112e08348,&UNK_10da5ac20);
  func_0x000107c5f728(&uStack_110,&uStack_118,uVar7);
  lVar3 = 0x112e58260;
  func_0x0001000285a8(0x112e58260,&UNK_10da5bd08);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *param_1 = &UNK_10da5bcf8;
  param_1[1] = puVar5;
  param_1[2] = uStack_110;
  param_1[3] = uStack_108;
  return;
}



/* Entry: 1020e5838; end: 1020e603b;  */

void FUN_1020e5838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined ****ppppuVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined *****pppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar16;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long alStack_1c0 [6];
  long alStack_190 [3];
  undefined8 *puStack_178;
  long lStack_170;
  long alStack_168 [7];
  undefined **ppuStack_130;
  long lStack_128;
  undefined ****ppppuStack_120;
  undefined *puStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
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
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined ***pppuStack_88;
  undefined8 auStack_80 [2];
  
  lVar7 = 0x112e58268;
  alStack_190[0] = param_5;
  alStack_168[6] = param_1;
  func_0x0001000285a8(0x112e58268,&UNK_10da5bd18);
  lStack_170 = *(long *)(lVar7 + -8);
  alStack_190[2] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_170 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)alStack_190 - extraout_x8;
  lVar7 = 0x112e58270;
  func_0x0001000285a8(0x112e58270,&UNK_10da5bd20);
  alStack_168[4] = *(long *)(lVar7 + -8);
  alStack_168[3] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_168[4] + 0x40));
  lVar16 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_168[5] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12;
  lVar7 = 0x112e58278;
  alStack_168[1] = lVar16;
  func_0x0001000285a8(0x112e58278,&UNK_10da5bd28);
  alStack_190[1] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_168[2] = lVar16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar16 - extraout_x12_00;
  lVar7 = 0x112e58280;
  func_0x0001000285a8(0x112e58280,&UNK_10da5bd30);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar17 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  alStack_168[0] = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = (undefined8 *)(lVar17 - extraout_x12_01);
  ppppuVar4 = (undefined ****)param_4[4];
  uVar23 = param_4[5];
  ppppuStack_120 = ppppuVar4;
  puStack_118 = (undefined *)uVar23;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(&uStack_a0);
  lVar8 = 0;
  func_0x0001020d26e8();
  iVar5 = *(int *)(lVar8 + 0x14);
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar17 = (long)puVar19 + (long)iVar5;
  (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lVar17,1,1);
  *puVar19 = uStack_a0;
  *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x18)) = 0;
  *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x1c)) = 0x4062c00000000000;
  *(undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x20)) = 0x4062c00000000000;
  func_0x000107c5f2e4();
  lVar8 = lVar17;
  func_0x000107c5f7e4();
  uVar24 = param_3;
  func_0x000107c5f2e0(0x3fee666666666666);
  lVar10 = lVar8;
  func_0x000107c5f2e8();
  func_0x000107c61574(lVar17);
  func_0x000107c61574(lVar8);
  ppppuVar11 = (undefined ****)0x112e58288;
  puVar14 = &UNK_10da5bd38;
  func_0x0001000285a8();
  *(long *)((long)puVar19 + (long)*(int *)((long)ppppuVar11 + 0x24)) = lVar10;
  func_0x000107c5f56c();
  uVar21 = 0x4020000000000000;
  ppppuVar12 = ppppuVar11;
  func_0x000107c5f280();
  puVar1 = (undefined1 *)((long)puVar19 + (long)*(int *)(lVar7 + 0x24));
  puStack_178 = puVar19;
  *puVar1 = (char)ppppuVar11;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = uVar24;
  puVar1[0x28] = 0;
  func_0x0001020e7a78();
  ppppuStack_120 = ppppuVar12;
  puStack_118 = puVar14;
  func_0x000100e8b654();
  pppppuVar13 = &ppppuStack_120;
  puVar14 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  uStack_110 = SUB81(ppppuVar12,0);
  dVar22 = 28.0;
  ppppuStack_120 = (undefined ****)pppppuVar13;
  puStack_118 = puVar14;
  lStack_108 = lVar9;
  func_0x0001026ffb14(lVar16,5,PTR___s7SwiftUI4TextVN_1103493f8,
                      PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8);
  func_0x000100f795bc(pppppuVar13,puVar14,ppppuVar12);
  func_0x000107c6142c(lVar9);
  uVar21 = 0xc6;
  func_0x0001026ff7d0();
  puVar14 = &UNK_10da5bd40;
  func_0x000107c614e0();
  lVar7 = 0x112e58290;
  func_0x0001000285a8(0x112e58290,&UNK_10da5bd70);
  puVar2 = (undefined8 *)(lVar16 + *(int *)(lVar7 + 0x24));
  *puVar2 = puVar14;
  puVar2[1] = uVar21;
  puVar14 = &UNK_10da5bd78;
  func_0x000107c614e0();
  lVar7 = 0x112e58298;
  puVar15 = &UNK_10da5bda8;
  func_0x0001000285a8();
  puVar2 = (undefined8 *)(lVar16 + *(int *)(lVar7 + 0x24));
  *puVar2 = puVar14;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000107c5f2f0();
  func_0x000107c5f7ac();
  if (NAN(dVar22 * 0.75)) {
    lVar17 = lVar7;
    func_0x000107c5ff78();
    lVar8 = lVar17;
    func_0x000107c5f558();
    func_0x000107c5f124(lVar17,0x100000000,lVar8,"Contradictory frame constraints specified.",0x2a,2
                        ,PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61170(lVar8);
  }
  puVar19[-2] = lVar7;
  puVar19[-1] = puVar15;
  *(undefined1 *)(puVar19 + -3) = 1;
  puVar19[-4] = 0;
  *(undefined1 *)(puVar19 + -5) = 1;
  puVar19[-6] = 0;
  func_0x000107c5f388(&ppppuStack_120,0,1,0,1,dVar22 * 0.75,0,0,1);
  lVar7 = 0x112e582a0;
  func_0x0001000285a8(0x112e582a0,&UNK_10da5bdb0);
  plVar3 = (long *)(lVar16 + *(int *)(lVar7 + 0x24));
  plVar3[9] = lStack_d8;
  plVar3[8] = lStack_e0;
  plVar3[0xb] = lStack_c8;
  plVar3[10] = lStack_d0;
  plVar3[0xd] = lStack_b8;
  plVar3[0xc] = lStack_c0;
  lVar8 = lStack_108;
  ppppuVar11 = ppppuStack_120;
  lVar17 = CONCAT71(uStack_10f,uStack_110);
  plVar3[1] = (long)puStack_118;
  *plVar3 = (long)ppppuVar11;
  plVar3[3] = lVar8;
  plVar3[2] = lVar17;
  plVar3[5] = lStack_f8;
  plVar3[4] = lStack_100;
  plVar3[7] = lStack_e8;
  plVar3[6] = lStack_f0;
  func_0x000107c5f574();
  uVar21 = 0x4030000000000000;
  lVar8 = lStack_100;
  func_0x000107c5f280();
  puVar1 = (undefined1 *)(lVar16 + *(int *)(alStack_190[1] + 0x24));
  *puVar1 = (char)lVar7;
  *(undefined8 *)(puVar1 + 8) = uVar21;
  *(long *)(puVar1 + 0x10) = lVar8;
  *(long *)(puVar1 + 0x18) = lVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar24;
  puVar1[0x28] = 0;
  uStack_98 = param_4[1];
  uStack_a0 = *param_4;
  uStack_b0 = param_4[2];
  uStack_a8 = *(undefined1 *)(param_4 + 3);
  puVar14 = &UNK_1104ca038;
  pppuStack_88 = (undefined ***)ppppuVar4;
  auStack_80[0] = uVar23;
  func_0x000107c613fc(&UNK_1104ca038,0x40,7);
  uVar23 = *param_4;
  uVar21 = param_4[3];
  uVar24 = param_4[2];
  *(undefined8 *)(puVar14 + 0x18) = param_4[1];
  *(undefined8 *)(puVar14 + 0x10) = uVar23;
  *(undefined8 *)(puVar14 + 0x28) = uVar21;
  *(undefined8 *)(puVar14 + 0x20) = uVar24;
  uVar23 = param_4[4];
  *(undefined8 *)(puVar14 + 0x38) = param_4[5];
  *(undefined8 *)(puVar14 + 0x30) = uVar23;
  FUN_1020e6790(&uStack_a0,&ppuStack_130,0x112e58230,&UNK_10da5bcb8);
  FUN_1020e6790(&uStack_b0,&ppuStack_130,0x112e58238,&UNK_10da5bcc0);
  FUN_1020e6790(&pppuStack_88,&ppuStack_130,0x112d36838,&UNK_10d915fb0);
  FUN_1020e6790(auStack_80,&ppuStack_130,0x112e58240,&UNK_10da5bcd0);
  uVar23 = 0x112e582a8;
  func_0x0001000285a8(0x112e582a8,&UNK_10da5bdb8);
  uVar24 = uVar23;
  FUN_1020e66a8();
  func_0x000107c5f738(lVar20,FUN_1020e66a0,puVar14,FUN_1020e6098,0,uVar23,uVar24);
  ppuStack_130._0_1_ = 0;
  uVar23 = 0x112e582c8;
  func_0x0001020e6818(0x112e582c8,0x112e58268,&UNK_10da5bd18,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar24 = uVar23;
  FUN_1020dc5d8();
  lVar8 = alStack_168[1];
  lVar7 = alStack_190[2];
  func_0x000107c5f60c(alStack_168[1],&ppuStack_130,alStack_190[2],&UNK_1104c92c8,uVar23,uVar24);
  (**(code **)(lStack_170 + 8))(lVar20,lVar7);
  lVar17 = alStack_168[0];
  puVar2 = puStack_178;
  FUN_1020e6790(puStack_178,alStack_168[0],0x112e58280,&UNK_10da5bd30);
  lVar10 = alStack_168[2];
  func_0x000100ce3638(lVar16,alStack_168[2]);
  lVar6 = alStack_168[5];
  lVar20 = alStack_168[4];
  lVar9 = alStack_168[3];
  pcVar18 = *(code **)(alStack_168[4] + 0x10);
  lStack_170 = lVar16;
  (*pcVar18)(alStack_168[5],lVar8,alStack_168[3]);
  lVar16 = alStack_168[6];
  FUN_1020e6790(lVar17,alStack_168[6],0x112e58280,&UNK_10da5bd30);
  lVar7 = 0x112e582d0;
  func_0x0001000285a8(0x112e582d0,&UNK_10da5bdc8);
  func_0x000100ce3638(lVar10,lVar16 + *(int *)(lVar7 + 0x30));
  (*pcVar18)(lVar16 + *(int *)(lVar7 + 0x40),lVar6,lVar9);
  pcVar18 = *(code **)(lVar20 + 8);
  (*pcVar18)(lVar8,lVar9);
  func_0x000100ce3688(lStack_170);
  func_0x0001020e67d8(puVar2,0x112e58280,&UNK_10da5bd30);
  (*pcVar18)(lVar6,lVar9);
  func_0x000100ce3688(lVar10);
  func_0x0001020e67d8(lVar17,0x112e58280,&UNK_10da5bd30);
  return;
}



/* Entry: 1020e603c; end: 1020e6097;  */

void FUN_1020e603c(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    func_0x000107c61174();
    FUN_1020cbf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  lVar4 = param_1[1];
  func_0x0001020d05f8();
  lVar3 = lVar2;
  FUN_1020c1a24();
  func_0x000107c5f394(0,lVar4,lVar2,lVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e6098);
  (*pcVar1)();
}



/* Entry: 1020e6098; end: 1020e62bb;  */

void FUN_1020e6098(long *param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_420 [192];
  undefined8 **ppuStack_360;
  undefined *puStack_358;
  undefined1 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  undefined8 **ppuStack_310;
  undefined *puStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 **ppuStack_250;
  undefined *puStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
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
  undefined8 **ppuStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
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
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001020e7b40();
  ppuStack_160 = param_2;
  puStack_158 = (undefined *)param_3;
  func_0x000100e8b654();
  uVar1 = SUB81(param_2,0);
  pppuVar2 = &ppuStack_160;
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c5f5e0();
  pppuVar3 = pppuVar2;
  puVar5 = puVar4;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&lStack_190,0x4069000000000000,0,0,1,pppuVar3,puVar5);
  func_0x000107c5f7ac();
  lStack_78 = lStack_188;
  lStack_80 = lStack_190;
  lStack_68 = lStack_178;
  lStack_70 = lStack_180;
  lStack_58 = lStack_168;
  lStack_60 = lStack_170;
  ppuStack_a0 = pppuVar2;
  puStack_98 = puVar4;
  uStack_90 = uVar1;
  lStack_88 = param_5;
  func_0x000107c5f388(&lStack_110,0,1,0,1,0,1,0x4046000000000000,0,0,1);
  lStack_138 = lStack_78;
  lStack_140 = lStack_80;
  lStack_128 = lStack_68;
  lStack_130 = lStack_70;
  lStack_118 = lStack_58;
  lStack_120 = lStack_60;
  lStack_150 = CONCAT71(uStack_8f,uStack_90);
  puStack_158 = puStack_98;
  ppuStack_160 = ppuStack_a0;
  lStack_148 = lStack_88;
  lStack_328 = lStack_178;
  lStack_330 = lStack_180;
  lStack_318 = lStack_168;
  lStack_320 = lStack_170;
  lStack_338 = lStack_188;
  lStack_340 = lStack_190;
  ppuStack_360 = pppuVar2;
  puStack_358 = puVar4;
  uStack_350 = uVar1;
  lStack_348 = param_5;
  FUN_1020e6790(&ppuStack_a0,&ppuStack_250,0x112e582c0,&UNK_10da5bdc0);
  func_0x0001020e67d8(&ppuStack_360,0x112e582c0,&UNK_10da5bdc0);
  lStack_288 = lStack_d8;
  lStack_290 = lStack_e0;
  lStack_278 = lStack_c8;
  lStack_280 = lStack_d0;
  lStack_268 = lStack_b8;
  lStack_270 = lStack_c0;
  lStack_258 = lStack_a8;
  lStack_260 = lStack_b0;
  lStack_2c8 = lStack_118;
  lStack_2d0 = lStack_120;
  lStack_2b8 = lStack_108;
  lStack_2c0 = lStack_110;
  lStack_2a8 = lStack_f8;
  lStack_2b0 = lStack_100;
  lStack_298 = lStack_e8;
  lStack_2a0 = lStack_f0;
  puStack_308 = puStack_158;
  ppuStack_310 = ppuStack_160;
  lStack_2f8 = lStack_148;
  lStack_300 = lStack_150;
  lStack_2e8 = lStack_138;
  lStack_2f0 = lStack_140;
  lStack_2d8 = lStack_128;
  lStack_2e0 = lStack_130;
  lStack_1c8 = lStack_d8;
  lStack_1d0 = lStack_e0;
  lStack_1b8 = lStack_c8;
  lStack_1c0 = lStack_d0;
  lStack_1a8 = lStack_b8;
  lStack_1b0 = lStack_c0;
  lStack_198 = lStack_a8;
  lStack_1a0 = lStack_b0;
  lStack_208 = lStack_118;
  lStack_210 = lStack_120;
  lStack_1f8 = lStack_108;
  lStack_200 = lStack_110;
  lStack_1e8 = lStack_f8;
  lStack_1f0 = lStack_100;
  lStack_1d8 = lStack_e8;
  lStack_1e0 = lStack_f0;
  puStack_248 = puStack_158;
  ppuStack_250 = ppuStack_160;
  lStack_238 = lStack_148;
  lStack_240 = lStack_150;
  lStack_228 = lStack_138;
  lStack_230 = lStack_140;
  lStack_218 = lStack_128;
  lStack_220 = lStack_130;
  FUN_1020e6790(&ppuStack_310,auStack_420,0x112e582a8,&UNK_10da5bdb8);
  func_0x0001020e67d8(&ppuStack_250,0x112e582a8,&UNK_10da5bdb8);
  param_1[0x11] = lStack_288;
  param_1[0x10] = lStack_290;
  param_1[0x13] = lStack_278;
  param_1[0x12] = lStack_280;
  param_1[0x15] = lStack_268;
  param_1[0x14] = lStack_270;
  param_1[0x17] = lStack_258;
  param_1[0x16] = lStack_260;
  param_1[9] = lStack_2c8;
  param_1[8] = lStack_2d0;
  param_1[0xb] = lStack_2b8;
  param_1[10] = lStack_2c0;
  param_1[0xd] = lStack_2a8;
  param_1[0xc] = lStack_2b0;
  param_1[0xf] = lStack_298;
  param_1[0xe] = lStack_2a0;
  param_1[1] = (long)puStack_308;
  *param_1 = (long)ppuStack_310;
  param_1[3] = lStack_2f8;
  param_1[2] = lStack_300;
  param_1[5] = lStack_2e8;
  param_1[4] = lStack_2f0;
  param_1[7] = lStack_2d8;
  param_1[6] = lStack_2e0;
  return;
}



/* Entry: 1020e62bc; end: 1020e62d3;  */

void FUN_1020e62bc(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020e62d4,0,0);
  return;
}



/* Entry: 1020e62d4; end: 1020e63e7;  */

void FUN_1020e62d4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0x28);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(unaff_x22 + 0x40);
  if (*(long *)(unaff_x22 + 0x40) != 0) {
    func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x0001020e6330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0x10);
  FUN_1020d58f8(uVar1,*(undefined1 *)(*(long *)(unaff_x22 + 0x50) + 0x18));
  func_0x000100083b20(unaff_x22 + 0x48);
  func_0x000107c61574(uVar1);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  *(long *)(unaff_x22 + 0x58) = lVar3;
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1020e6390;
  plVar2[0x11] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020c469c,0,0);
  return;
}



/* Entry: 1020e63e8; end: 1020e6463;  */

void FUN_1020e63e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c5f7d0(0x3fb999999999999a);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  func_0x000107c5f300();
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001020e6460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020e6464; end: 1020e64c3;  */

void FUN_1020e6464(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = param_2;
  func_0x000107c61174(param_2);
  uVar1 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 1020e64c4; end: 1020e64cf;  */

void FUN_1020e64c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1020e64d0; end: 1020e65bb;  */

void FUN_1020e64d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  puVar3 = &UNK_1104c9fe8;
  uStack_40 = uVar2;
  uStack_38 = uVar1;
  func_0x000107c613fc(&UNK_1104c9fe8,0x40,7);
  uVar4 = *unaff_x20;
  uVar6 = unaff_x20[3];
  uVar5 = unaff_x20[2];
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined8 *)(puVar3 + 0x30) = uVar1;
  *(undefined8 *)(puVar3 + 0x38) = uVar2;
  *param_1 = FUN_1020e65bc;
  param_1[1] = puVar3;
  FUN_1020e6790(&uStack_60,auStack_70,0x112e58230,&UNK_10da5bcb8);
  FUN_1020e6790(&uStack_50,auStack_70,0x112e58238,&UNK_10da5bcc0);
  FUN_1020e6790(&uStack_38,auStack_70,0x112d36838,&UNK_10d915fb0);
  FUN_1020e6790(&uStack_40,auStack_70,0x112e58240,&UNK_10da5bcd0);
  return;
}



/* Entry: 1020e65bc; end: 1020e65c3;  */

void FUN_1020e65bc(undefined8 *param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined *puVar6;
  long unaff_x20;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)(unaff_x20 + 0x10);
  uVar8 = param_6;
  func_0x000107c5f438();
  *param_1 = uVar8;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar4 = 0x112e58248;
  func_0x0001000285a8(0x112e58248,&UNK_10da5bcd8);
  puVar5 = puVar1;
  FUN_1020e5838((long)param_1 + (long)*(int *)(lVar4 + 0x2c),puVar1,param_6);
  uVar3 = SUB81(puVar5,0);
  func_0x000107c5f570();
  func_0x000107c5f2f0();
  dVar7 = param_3 * 0.15;
  func_0x000107c5f280();
  lVar4 = 0x112e58250;
  func_0x0001000285a8();
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar2 = uVar3;
  *(double *)(puVar2 + 8) = dVar7;
  *(double *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  func_0x000107c5f7a4();
  func_0x000107c5f388(&uStack_100,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar4 = 0x112e58258;
  func_0x0001000285a8(0x112e58258,&UNK_10da5bce8);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  puVar5[9] = uStack_b8;
  puVar5[8] = uStack_c0;
  puVar5[0xb] = uStack_a8;
  puVar5[10] = uStack_b0;
  puVar5[0xd] = uStack_98;
  puVar5[0xc] = uStack_a0;
  puVar5[1] = uStack_f8;
  *puVar5 = uStack_100;
  puVar5[3] = uStack_e8;
  puVar5[2] = uStack_f0;
  puVar5[5] = uStack_d8;
  puVar5[4] = uStack_e0;
  puVar5[7] = uStack_c8;
  puVar5[6] = uStack_d0;
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_70 = *puVar1;
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_78 = *(undefined1 *)(unaff_x20 + 0x28);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1104ca010;
  func_0x000107c613fc(&UNK_1104ca010,0x40,7);
  uVar8 = *puVar1;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar6 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar6 + 0x10) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar10;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar6 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar6 + 0x30) = uVar8;
  uStack_118 = 0;
  FUN_1020e6790(&uStack_70,&uStack_110,0x112e58230,&UNK_10da5bcb8);
  FUN_1020e6790(&uStack_80,&uStack_110,0x112e58238,&UNK_10da5bcc0);
  FUN_1020e6790(&uStack_88,&uStack_110,0x112d36838,&UNK_10d915fb0);
  FUN_1020e6790(&uStack_90,&uStack_110,0x112e58240,&UNK_10da5bcd0);
  uVar8 = 0x112e08348;
  func_0x0001000285a8(0x112e08348,&UNK_10da5ac20);
  func_0x000107c5f728(&uStack_110,&uStack_118,uVar8);
  lVar4 = 0x112e58260;
  func_0x0001000285a8(0x112e58260,&UNK_10da5bd08);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *param_1 = &UNK_10da5bcf8;
  param_1[1] = puVar6;
  param_1[2] = uStack_110;
  param_1[3] = uStack_108;
  return;
}



/* Entry: 1020e65c4; end: 1020e669f;  */

void FUN_1020e65c4(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1020e6610;
  plVar1[10] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020e62d4,0,0);
  return;
}



/* Entry: 1020e66a0; end: 1020e66a7;  */

void FUN_1020e66a0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    func_0x000107c61174();
    FUN_1020cbf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001020d05f8();
  lVar3 = lVar2;
  FUN_1020c1a24();
  func_0x000107c5f394(0,uVar4,lVar2,lVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020e6098);
  (*pcVar1)();
}



/* Entry: 1020e66a8; end: 1020e671f;  */

void FUN_1020e66a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112e582b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e582a8;
  func_0x00010002969c(0x112e582a8,&UNK_10da5bdb8);
  uVar2 = uVar1;
  FUN_1020e6720();
  puStack_28 = PTR___s7SwiftUI16_FlexFrameLayoutVAA12ViewModifierAAWP_110348bc8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e582b0 = puVar3;
  return;
}



/* Entry: 1020e6720; end: 1020e678f;  */

void FUN_1020e6720(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam0000000112e582b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e582c0;
  func_0x00010002969c(0x112e582c0,&UNK_10da5bdc0);
  puStack_20 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  puStack_18 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_110348848;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_20);
  puRam0000000112e582b8 = puVar2;
  return;
}



/* Entry: 1020e6790; end: 1020e68b7;  */

undefined8 FUN_1020e6790(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1020e68b8; end: 1020e697f;  */

undefined8 * FUN_1020e68b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[1];
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1020e6980; end: 1020e69cb;  */

undefined8 * FUN_1020e6980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 1020e69cc; end: 1020e6a73;  */

int FUN_1020e69cc(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020e6a74; end: 1020e6d93;  */

void FUN_1020e6a74(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,4,0);
  if (iVar1 == 0) {
    lVar4 = 0x112e58320;
    func_0x0001000285a8(0x112e58320,&UNK_10da5bed8);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar7 = auStack_a0 + -extraout_x8_01;
    lVar9 = 0x112e58328;
    func_0x0001000285a8(0x112e58328,&UNK_10da5bee0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar7,param_2,lVar9);
    func_0x000107c6159c(puVar7,lVar4,1);
    uVar5 = 0x112e58330;
    FUN_1020e740c(0x112e58330,0x112e58328,&UNK_10da5bee0);
    func_0x000107c5f490(param_1,puVar7,PTR___s7SwiftUI7AnyViewVN_110349928,lVar9,
                        PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918,uVar5);
  }
  else {
    lVar4 = 0x112e58338;
    func_0x0001000285a8(0x112e58338,&UNK_10da5bee8);
    lStack_88 = *(long *)(lVar4 + -8);
    lVar9 = *(long *)(lStack_88 + 0x40);
    lStack_80 = lVar4;
    uStack_78 = param_1;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uStack_90 = lVar9 + 0xfU & 0xfffffffffffffff0;
    puVar10 = auStack_a0 + -uStack_90;
    lVar9 = 0;
    func_0x000107c5f4a4();
    lVar8 = *(long *)(lVar9 + -8);
    lVar4 = lVar9;
    puStack_98 = puVar10;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar11 = (long)puVar10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c5f4a0(lVar11);
    func_0x000107c5f564();
    uVar5 = 0x112e58328;
    func_0x0001000285a8(0x112e58328,&UNK_10da5bee0);
    uVar2 = 0x112e58330;
    FUN_1020e740c(0x112e58330,0x112e58328,&UNK_10da5bee0);
    func_0x000107c5f65c(puVar10,lVar11,lVar4,uVar5,uVar2);
    (**(code **)(lVar8 + 8))(lVar11,lVar9);
    puVar7 = puStack_98;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar8 = lStack_80;
    lVar9 = lStack_88;
    lVar11 = (long)puVar7 - uStack_90;
    (**(code **)(lStack_88 + 0x10))(lVar11,puVar10,lStack_80);
    puVar3 = &uStack_70;
    uStack_70 = uVar5;
    uStack_68 = uVar2;
    func_0x000107c614f4(puVar3,
                        PTR___s7SwiftUI4ViewPAAE20scrollBounceBehavior_4axesQrAA06ScrolleF0V_AA4AxisO3SetVtFQOMQ_110349590
                        ,1);
    func_0x000107c5f76c(lVar11,lVar8,puVar3);
    lVar4 = 0x112e58320;
    func_0x0001000285a8(0x112e58320,&UNK_10da5bed8);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar6 = (long *)(puVar7 + -extraout_x8_00);
    *plVar6 = lVar11;
    func_0x000107c6159c(plVar6);
    func_0x000107c5f490(uStack_78,plVar6,PTR___s7SwiftUI7AnyViewVN_110349928,uVar5,
                        PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918,uVar2);
    (**(code **)(lVar9 + 8))(puVar10,lVar8);
  }
  return;
}



/* Entry: 1020e6d94; end: 1020e6d97;  */

void FUN_1020e6d94(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  undefined1 *puStack_98;
  ulong uStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,4,0);
  if (iVar1 == 0) {
    lVar4 = 0x112e58320;
    func_0x0001000285a8(0x112e58320,&UNK_10da5bed8);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar7 = auStack_a0 + -extraout_x8_01;
    lVar9 = 0x112e58328;
    func_0x0001000285a8(0x112e58328,&UNK_10da5bee0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(puVar7,param_2,lVar9);
    func_0x000107c6159c(puVar7,lVar4,1);
    uVar5 = 0x112e58330;
    FUN_1020e740c(0x112e58330,0x112e58328,&UNK_10da5bee0);
    func_0x000107c5f490(param_1,puVar7,PTR___s7SwiftUI7AnyViewVN_110349928,lVar9,
                        PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918,uVar5);
  }
  else {
    lVar4 = 0x112e58338;
    func_0x0001000285a8(0x112e58338,&UNK_10da5bee8);
    lStack_88 = *(long *)(lVar4 + -8);
    lVar9 = *(long *)(lStack_88 + 0x40);
    lStack_80 = lVar4;
    uStack_78 = param_1;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uStack_90 = lVar9 + 0xfU & 0xfffffffffffffff0;
    puVar10 = auStack_a0 + -uStack_90;
    lVar9 = 0;
    func_0x000107c5f4a4();
    lVar8 = *(long *)(lVar9 + -8);
    lVar4 = lVar9;
    puStack_98 = puVar10;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    lVar11 = (long)puVar10 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    func_0x000107c5f4a0(lVar11);
    func_0x000107c5f564();
    uVar5 = 0x112e58328;
    func_0x0001000285a8(0x112e58328,&UNK_10da5bee0);
    uVar2 = 0x112e58330;
    FUN_1020e740c(0x112e58330,0x112e58328,&UNK_10da5bee0);
    func_0x000107c5f65c(puVar10,lVar11,lVar4,uVar5,uVar2);
    (**(code **)(lVar8 + 8))(lVar11,lVar9);
    puVar7 = puStack_98;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar8 = lStack_80;
    lVar9 = lStack_88;
    lVar11 = (long)puVar7 - uStack_90;
    (**(code **)(lStack_88 + 0x10))(lVar11,puVar10,lStack_80);
    puVar3 = &uStack_70;
    uStack_70 = uVar5;
    uStack_68 = uVar2;
    func_0x000107c614f4(puVar3,
                        PTR___s7SwiftUI4ViewPAAE20scrollBounceBehavior_4axesQrAA06ScrolleF0V_AA4AxisO3SetVtFQOMQ_110349590
                        ,1);
    func_0x000107c5f76c(lVar11,lVar8,puVar3);
    lVar4 = 0x112e58320;
    func_0x0001000285a8(0x112e58320,&UNK_10da5bed8);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar6 = (long *)(puVar7 + -extraout_x8_00);
    *plVar6 = lVar11;
    func_0x000107c6159c(plVar6);
    func_0x000107c5f490(uStack_78,plVar6,PTR___s7SwiftUI7AnyViewVN_110349928,uVar5,
                        PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918,uVar2);
    (**(code **)(lVar9 + 8))(puVar10,lVar8);
  }
  return;
}



/* Entry: 1020e6d98; end: 1020e6ee7;  */

void FUN_1020e6d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  uVar2 = 0x112e58300;
  func_0x0001000285a8(0x112e58300,&UNK_10da5be60);
  func_0x000107c5f72c(&lStack_68);
  puVar1 = PTR___sytN_11034f1b0;
  if (lStack_68 != 0) {
    func_0x000107c5fd50(lStack_68,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(lStack_68);
  }
  puVar3 = &UNK_1104ca178;
  func_0x000107c613fc(&UNK_1104ca178,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  lVar4 = 0x62;
  func_0x0001001ca524(0x62,0,0x3c,4,0,0,&UNK_10da5be70,puVar3,puVar1 + 8);
  func_0x000107c61574(puVar3);
  lStack_68 = lVar4;
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x000107c5f730(&lStack_68,uVar2);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1020e6ee8; end: 1020e6f63;  */

void FUN_1020e6ee8(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  iVar1 = *param_2;
  plVar3 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1020e6f64;
                    /* WARNING: Could not recover jumptable at 0x0001020e6f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 1020e6f64; end: 1020e6fc7;  */

void FUN_1020e6f64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020e6fc8,uVar2,uVar1);
  return;
}



/* Entry: 1020e6fc8; end: 1020e6ff7;  */

void FUN_1020e6fc8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001020e6ff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020e6ff8; end: 1020e70bb;  */

void FUN_1020e6ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  uVar1 = 0x112e58300;
  func_0x0001000285a8(0x112e58300,&UNK_10da5be60);
  func_0x000107c5f72c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5fd50(lStack_48,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                        PTR___ss5NeverOs5ErrorsWP_11034ee90);
    func_0x000107c61574(lStack_48);
  }
  lStack_48 = 0;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c5f730(&lStack_48,uVar1);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1020e70bc; end: 1020e71e3;  */

void FUN_1020e70bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  puVar6 = &UNK_1104ca128;
  func_0x000107c613fc(&UNK_1104ca128,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar5;
  lVar7 = 0x112e582e8;
  func_0x0001000285a8(0x112e582e8,&UNK_10da5be48);
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
  lVar7 = 0x112e582f0;
  func_0x0001000285a8(0x112e582f0,&UNK_10da5be50);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = FUN_1020e71e4;
  puVar1[1] = puVar6;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar6 = &UNK_1104ca150;
  func_0x000107c613fc(&UNK_1104ca150,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  *(undefined8 *)(puVar6 + 0x20) = uVar3;
  *(undefined8 *)(puVar6 + 0x28) = uVar5;
  lVar7 = 0x112e582f8;
  func_0x0001000285a8(0x112e582f8,&UNK_10da5be58);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0x1020e71f0;
  puVar1[3] = puVar6;
  func_0x000107c61580(uVar5,2);
  func_0x000107c61580(uVar4,2);
  func_0x000107c61580(uVar3,2);
  return;
}


