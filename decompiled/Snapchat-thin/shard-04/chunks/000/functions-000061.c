/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103074d90; end: 103074ddf;  */

undefined8 * FUN_103074d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10305a4a0(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10305a544(uVar3,uVar2);
  return param_1;
}



/* Entry: 103074de0; end: 103074e1b;  */

undefined8 * FUN_103074de0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10305a544(uVar3,uVar2);
  return param_1;
}



/* Entry: 103074e1c; end: 103074ebf;  */

int FUN_103074e1c(int *param_1,uint param_2)

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



/* Entry: 103074ec0; end: 103074f37;  */

undefined1 * FUN_103074ec0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 103074f38; end: 103075023;  */

int FUN_103074f38(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
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



/* Entry: 103075024; end: 1030750e3;  */

void FUN_103075024(void)

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



/* Entry: 1030750e4; end: 1030750f3;  */

undefined1  [16] FUN_1030750e4(void)

{
  return ZEXT816(0x110604058);
}



/* Entry: 1030750f4; end: 1030751ef;  */

void FUN_1030750f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f376c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f376b8;
  func_0x00010002969c(0x112f376b8,&UNK_10db80ba0);
  uVar2 = 0x112f376d0;
  func_0x0001030751ac(0x112f376d0,0x112f376b0,&UNK_10db80b98,
                      PTR___s7SwiftUI21_ViewModifier_ContentVyxGAA0C0AAMc_110349008);
  uVar3 = 0x112f376d8;
  func_0x0001030751ac(0x112f376d8,0x112f376e0,&UNK_10db80bb8,
                      PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f376c8 = puVar4;
  return;
}



/* Entry: 1030751f0; end: 103075217;  */

void FUN_1030751f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI12ViewModifierPAAE14_viewListCount6inputs4bodySiSgAA01_cfG6InputsV_AgIXEtFZ_110348810
  )();
  return;
}



/* Entry: 103075218; end: 10307566b;  */

void FUN_103075218(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 auStack_1f0 [8];
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [80];
  long lStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  long *plStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined1 *puStack_b8;
  char cStack_78;
  
  lVar1 = 0x112f376e8;
  uStack_1b8 = param_1;
  func_0x0001000285a8(0x112f376e8,&UNK_10db80bc0);
  lStack_1d8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112f376f0;
  puStack_1c0 = auStack_1f0 + -extraout_x8;
  func_0x0001000285a8(0x112f376f0,&UNK_10db80bc8);
  lStack_1c8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)(auStack_1f0 + -extraout_x8) - extraout_x8_00;
  lVar1 = 0x112f376f8;
  lStack_1e8 = lVar7;
  func_0x0001000285a8(0x112f376f8,&UNK_10db80bd0);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_01;
  lVar2 = 0x112f37700;
  func_0x0001000285a8(0x112f37700,&UNK_10db80bd8);
  lStack_1e0 = *(long *)(lVar2 + -8);
  lStack_1d0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_1e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar7 - extraout_x8_02;
  puStack_b8 = *(undefined1 **)(unaff_x20 + 0xa8);
  plStack_c0 = *(long **)(unaff_x20 + 0xa0);
  func_0x0001000285a8(0x112d4fe10,&UNK_10d9160e0);
  func_0x000107c5f778(&lStack_160);
  uVar3 = 0x112e09160;
  func_0x0001000285a8(0x112e09160,&UNK_10d9defa0);
  uVar4 = uVar3;
  func_0x000101c166c0();
  func_0x000107c5f758(lVar7,lStack_160,puStack_158,uStack_150 & 0xff,FUN_103075778,&plStack_c0,uVar3
                      ,uVar4);
  uVar3 = 0x112f37708;
  FUN_1030771cc(0x112f37708,0x112f376f8,&UNK_10db80bd0,
                PTR___s7SwiftUI6ToggleVyxGAA4ViewAAMc_1103498d0);
  uVar4 = uVar3;
  FUN_103075780();
  func_0x000107c5f618(lVar9);
  (**(code **)(lVar8 + 8))(lVar7,lVar1);
  puVar6 = puStack_1c0;
  lVar7 = lStack_1d0;
  lVar2 = lStack_1e0;
  puVar11 = *(undefined1 **)(unaff_x20 + 0x58);
  plVar10 = *(long **)(unaff_x20 + 0x50);
  cStack_78 = (char)((ulong)*(undefined8 *)(unaff_x20 + 0x91) >> 0x38);
  plStack_c0 = plVar10;
  puStack_b8 = puVar11;
  if (cStack_78 == '\x01') {
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_128 = (undefined1)*(undefined8 *)(unaff_x20 + 0x88);
    uStack_11f = *(undefined8 *)(unaff_x20 + 0x91);
    uStack_127 = (undefined7)*(undefined8 *)(unaff_x20 + 0x89);
    uStack_120 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x89) >> 0x38);
    puStack_158 = *(undefined **)(unaff_x20 + 0x58);
    lStack_160 = *(long *)(unaff_x20 + 0x50);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x60);
    func_0x0001030772ec(&plStack_c0,auStack_1b0,0x112f36930,&UNK_10db7ef80);
    func_0x000103059b1c(&lStack_160,auStack_1b0);
  }
  else {
    if (cStack_78 == -1) {
      (**(code **)(lStack_1e0 + 0x10))(puStack_1c0,lVar9,lStack_1d0);
      puVar11 = puVar6;
      func_0x000107c6159c(puVar6,lStack_1d8,1);
      FUN_1030757c0();
      puStack_158 = &UNK_110604180;
      plVar10 = &lStack_160;
      lStack_160 = lVar1;
      uStack_150 = uVar3;
      uStack_148 = uVar4;
      func_0x000107c614f4(plVar10,
                          PTR___s7SwiftUI4ViewPAAE11toggleStyleyQrqd__AA06ToggleE0Rd__lFQOMQ_1103494b8
                          ,1);
      func_0x000107c5f490(uStack_1b8,puVar6,lStack_1c8,lVar7,puVar11,plVar10);
      goto LAB_10307563c;
    }
    puStack_158 = *(undefined **)(unaff_x20 + 0x58);
    lStack_160 = *(long *)(unaff_x20 + 0x50);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x78);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_128 = (undefined1)*(undefined8 *)(unaff_x20 + 0x88);
    uStack_11f = *(undefined8 *)(unaff_x20 + 0x91);
    uStack_127 = (undefined7)*(undefined8 *)(unaff_x20 + 0x89);
    uStack_120 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x89) >> 0x38);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x90);
    plVar5 = &lStack_160;
    puVar6 = auStack_1b0;
    plStack_108 = plVar10;
    puStack_100 = puVar11;
    func_0x000103059b1c(plVar5,puVar6);
    FUN_10307ff24();
    plVar10 = plVar5;
    puVar11 = puVar6;
  }
  lVar7 = lStack_1d0;
  lVar2 = lStack_1e0;
  puStack_158 = &UNK_110604180;
  plVar5 = &lStack_160;
  lStack_160 = lVar1;
  uStack_150 = uVar3;
  uStack_148 = uVar4;
  func_0x000107c614f4(plVar5,
                      PTR___s7SwiftUI4ViewPAAE11toggleStyleyQrqd__AA06ToggleE0Rd__lFQOMQ_1103494b8,1
                     );
  lVar1 = lStack_1e8;
  func_0x000107c5f640(lStack_1e8,plVar10,puVar11,0,PTR___swiftEmptyArrayStorage_11034f1c8,lVar7,
                      plVar5);
  func_0x000107c6142c(puVar11);
  puVar6 = puStack_1c0;
  func_0x000100d32404(lVar1,puStack_1c0);
  puVar11 = puVar6;
  func_0x000107c6159c(puVar6,lStack_1d8,0);
  FUN_1030757c0();
  func_0x000107c5f490(uStack_1b8,puVar6,lStack_1c8,lVar7,puVar11,plVar5);
  func_0x000103077334(&plStack_c0,0x112f36930,&UNK_10db7ef80);
  func_0x000100d32454(lVar1);
LAB_10307563c:
  (**(code **)(lVar2 + 8))(lVar9,lVar7);
  return;
}



/* Entry: 10307566c; end: 103075777;  */

void FUN_10307566c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_170 [80];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long *plStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  puVar2 = auStack_170;
  uVar5 = *(undefined8 *)((long)param_2 + 0x41);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
  puVar6 = (undefined1 *)param_2[1];
  plVar4 = (long *)*param_2;
  lStack_68 = param_2[3];
  lStack_70 = param_2[2];
  lStack_58 = param_2[5];
  lStack_60 = param_2[4];
  lStack_50 = param_2[6];
  uStack_48 = (undefined1)param_2[7];
  uStack_47 = (undefined7)((ulong)param_2[7] >> 8);
  uStack_3f._7_1_ = (char)((ulong)uVar5 >> 0x38);
  plStack_80 = plVar4;
  puStack_78 = puVar6;
  uStack_3f = uVar5;
  if (uStack_3f._7_1_ == '\x01') {
    lStack_f8 = param_2[5];
    lStack_100 = param_2[4];
    lStack_f0 = param_2[6];
    uStack_e8 = (undefined1)param_2[7];
    uStack_df = *(undefined8 *)((long)param_2 + 0x41);
    uStack_e7 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
    uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
    lStack_118 = param_2[1];
    lStack_120 = *param_2;
    lStack_108 = param_2[3];
    lStack_110 = param_2[2];
    func_0x000103059b1c(&lStack_120,auStack_170);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else if (uStack_3f._7_1_ == -1) {
    puVar3 = (undefined *)0x0;
    plVar4 = (long *)0x0;
    puVar6 = (undefined1 *)0x0;
  }
  else {
    lStack_118 = param_2[1];
    lStack_120 = *param_2;
    lStack_108 = param_2[3];
    lStack_110 = param_2[2];
    lStack_f8 = param_2[5];
    lStack_100 = param_2[4];
    lStack_90 = param_2[7];
    lStack_f0 = param_2[6];
    lStack_88 = param_2[8];
    uStack_e8 = (undefined1)lStack_90;
    uStack_df = *(undefined8 *)((long)param_2 + 0x41);
    uStack_e7 = (undefined7)*(undefined8 *)((long)param_2 + 0x39);
    uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x39) >> 0x38);
    plVar1 = &lStack_120;
    plStack_c8 = plVar4;
    puStack_c0 = puVar6;
    lStack_b8 = lStack_110;
    lStack_b0 = lStack_108;
    lStack_a8 = lStack_100;
    lStack_a0 = lStack_f8;
    lStack_98 = lStack_f0;
    func_0x000103059b1c();
    FUN_10307ff24();
    func_0x000103077334(&plStack_80,0x112f36930,&UNK_10db7ef80);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    plVar4 = plVar1;
    puVar6 = puVar2;
  }
  *param_1 = (long)plVar4;
  param_1[1] = (long)puVar6;
  param_1[2] = 0;
  param_1[3] = (long)puVar3;
  return;
}



/* Entry: 103075778; end: 10307577f;  */

void FUN_103075778(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_170 [80];
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long *plStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  undefined1 *puStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  puVar2 = auStack_170;
  uVar5 = *(undefined8 *)((long)plVar1 + 0x41);
  uStack_40 = (undefined1)((ulong)*(undefined8 *)((long)plVar1 + 0x39) >> 0x38);
  puVar6 = (undefined1 *)plVar1[1];
  plVar4 = (long *)*plVar1;
  lStack_68 = plVar1[3];
  lStack_70 = plVar1[2];
  lStack_58 = plVar1[5];
  lStack_60 = plVar1[4];
  lStack_50 = plVar1[6];
  uStack_48 = (undefined1)plVar1[7];
  uStack_47 = (undefined7)((ulong)plVar1[7] >> 8);
  uStack_3f._7_1_ = (char)((ulong)uVar5 >> 0x38);
  plStack_80 = plVar4;
  puStack_78 = puVar6;
  uStack_3f = uVar5;
  if (uStack_3f._7_1_ == '\x01') {
    lStack_f8 = plVar1[5];
    lStack_100 = plVar1[4];
    lStack_f0 = plVar1[6];
    uStack_e8 = (undefined1)plVar1[7];
    uStack_df = *(undefined8 *)((long)plVar1 + 0x41);
    uStack_e7 = (undefined7)*(undefined8 *)((long)plVar1 + 0x39);
    uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)plVar1 + 0x39) >> 0x38);
    lStack_118 = plVar1[1];
    lStack_120 = *plVar1;
    lStack_108 = plVar1[3];
    lStack_110 = plVar1[2];
    func_0x000103059b1c(&lStack_120,auStack_170);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else if (uStack_3f._7_1_ == -1) {
    puVar3 = (undefined *)0x0;
    plVar4 = (long *)0x0;
    puVar6 = (undefined1 *)0x0;
  }
  else {
    lStack_118 = plVar1[1];
    lStack_120 = *plVar1;
    lStack_108 = plVar1[3];
    lStack_110 = plVar1[2];
    lStack_f8 = plVar1[5];
    lStack_100 = plVar1[4];
    lStack_90 = plVar1[7];
    lStack_f0 = plVar1[6];
    lStack_88 = plVar1[8];
    uStack_e8 = (undefined1)lStack_90;
    uStack_df = *(undefined8 *)((long)plVar1 + 0x41);
    uStack_e7 = (undefined7)*(undefined8 *)((long)plVar1 + 0x39);
    uStack_e0 = (undefined1)((ulong)*(undefined8 *)((long)plVar1 + 0x39) >> 0x38);
    plVar1 = &lStack_120;
    plStack_c8 = plVar4;
    puStack_c0 = puVar6;
    lStack_b8 = lStack_110;
    lStack_b0 = lStack_108;
    lStack_a8 = lStack_100;
    lStack_a0 = lStack_f8;
    lStack_98 = lStack_f0;
    func_0x000103059b1c();
    FUN_10307ff24();
    func_0x000103077334(&plStack_80,0x112f36930,&UNK_10db7ef80);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    plVar4 = plVar1;
    puVar6 = puVar2;
  }
  *param_1 = (long)plVar4;
  param_1[1] = (long)puVar6;
  param_1[2] = 0;
  param_1[3] = (long)puVar3;
  return;
}



/* Entry: 103075780; end: 1030757bf;  */

void FUN_103075780(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f37710 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80c58;
  func_0x000107c61520(&UNK_10db80c58,&UNK_110604180);
  puRam0000000112f37710 = puVar1;
  return;
}



/* Entry: 1030757c0; end: 1030758bb;  */

void FUN_1030757c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam0000000112f37718 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f376f0;
  func_0x00010002969c(0x112f376f0,&UNK_10db80bc8);
  uVar2 = 0x112f376f8;
  func_0x00010002969c(0x112f376f8,&UNK_10db80bd0);
  uVar3 = 0x112f37708;
  FUN_1030771cc(0x112f37708,0x112f376f8,&UNK_10db80bd0,
                PTR___s7SwiftUI6ToggleVyxGAA4ViewAAMc_1103498d0);
  uVar4 = uVar3;
  FUN_103075780();
  puStack_48 = &UNK_110604180;
  puVar5 = &uStack_50;
  uStack_50 = uVar2;
  uStack_40 = uVar3;
  uStack_38 = uVar4;
  func_0x000107c614f4(puVar5,
                      PTR___s7SwiftUI4ViewPAAE11toggleStyleyQrqd__AA06ToggleE0Rd__lFQOMQ_1103494b8,1
                     );
  uVar2 = 0x112d500b8;
  func_0x000103077248(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                      PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar6 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  puStack_60 = puVar5;
  uStack_58 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&puStack_60);
  puRam0000000112f37718 = puVar6;
  return;
}



/* Entry: 1030758bc; end: 1030758cb;  */

void FUN_1030758bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7427c0,1);
  return;
}



/* Entry: 1030758cc; end: 1030759df;  */

void FUN_1030758cc(void)

{
  FUN_103075218();
  return;
}



/* Entry: 1030759e0; end: 103075e73;  */

undefined8 * FUN_1030759e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cVar6 = *(char *)(param_2 + 9);
  if (cVar6 == -1) {
    uVar8 = param_2[4];
    uVar10 = param_2[7];
    uVar9 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar10;
    param_1[6] = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    uVar10 = *param_2;
    uVar9 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
  }
  else {
    uVar8 = *param_2;
    uVar2 = param_2[1];
    uVar9 = param_2[2];
    uVar3 = param_2[3];
    uVar10 = param_2[4];
    uVar4 = param_2[5];
    uVar1 = param_2[6];
    uVar5 = param_2[7];
    uVar7 = param_2[8];
    FUN_103059198(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,cVar6);
    *param_1 = uVar8;
    param_1[1] = uVar2;
    param_1[2] = uVar9;
    param_1[3] = uVar3;
    param_1[4] = uVar10;
    param_1[5] = uVar4;
    param_1[6] = uVar1;
    param_1[7] = uVar5;
    param_1[8] = uVar7;
    *(char *)(param_1 + 9) = cVar6;
  }
  cVar6 = *(char *)(param_2 + 0x13);
  if (cVar6 == -1) {
    uVar8 = param_2[0xe];
    uVar10 = param_2[0x11];
    uVar9 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0x11] = uVar10;
    param_1[0x10] = uVar9;
    uVar8 = *(undefined8 *)((long)param_2 + 0x89);
    *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_2 + 0x91);
    *(undefined8 *)((long)param_1 + 0x89) = uVar8;
    uVar10 = param_2[10];
    uVar9 = param_2[0xd];
    uVar8 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar10;
    param_1[0xd] = uVar9;
    param_1[0xc] = uVar8;
  }
  else {
    uVar8 = param_2[10];
    uVar2 = param_2[0xb];
    uVar9 = param_2[0xc];
    uVar3 = param_2[0xd];
    uVar10 = param_2[0xe];
    uVar4 = param_2[0xf];
    uVar1 = param_2[0x10];
    uVar5 = param_2[0x11];
    uVar7 = param_2[0x12];
    FUN_103059198(uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar1,uVar5,uVar7,cVar6);
    param_1[10] = uVar8;
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar9;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar10;
    param_1[0xf] = uVar4;
    param_1[0x10] = uVar1;
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar7;
    *(char *)(param_1 + 0x13) = cVar6;
  }
  uVar8 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar8;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar8);
  return param_1;
}



/* Entry: 103075e74; end: 103075fb7;  */

undefined8 * FUN_103075e74(undefined8 *param_1,undefined8 *param_2)

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
LAB_103075eec:
    uVar8 = param_2[4];
    uVar15 = param_2[7];
    uVar12 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    param_1[7] = uVar15;
    param_1[6] = uVar12;
    uVar8 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar8;
    uVar15 = *param_2;
    uVar12 = param_2[3];
    uVar8 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar15;
    param_1[3] = uVar12;
    param_1[2] = uVar8;
  }
  else {
    cVar7 = *(char *)(param_2 + 9);
    if (cVar7 == -1) {
      FUN_103059634(param_1);
      goto LAB_103075eec;
    }
    uVar9 = param_2[8];
    uVar8 = *param_1;
    uVar2 = param_1[1];
    uVar12 = param_1[2];
    uVar3 = param_1[3];
    uVar15 = param_1[4];
    uVar4 = param_1[5];
    uVar1 = param_1[6];
    uVar5 = param_1[7];
    uVar10 = param_1[8];
    uVar11 = *param_2;
    uVar14 = param_2[3];
    uVar13 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    param_1[3] = uVar14;
    param_1[2] = uVar13;
    uVar11 = param_2[4];
    uVar14 = param_2[7];
    uVar13 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar11;
    param_1[7] = uVar14;
    param_1[6] = uVar13;
    param_1[8] = uVar9;
    *(char *)(param_1 + 9) = cVar7;
    FUN_103059268(uVar8,uVar2,uVar12,uVar3,uVar15,uVar4,uVar1,uVar5,uVar10,cVar6);
  }
  cVar6 = *(char *)(param_1 + 0x13);
  if (cVar6 != -1) {
    cVar7 = *(char *)(param_2 + 0x13);
    if (cVar7 != -1) {
      uVar9 = param_2[0x12];
      uVar8 = param_1[10];
      uVar2 = param_1[0xb];
      uVar12 = param_1[0xc];
      uVar3 = param_1[0xd];
      uVar15 = param_1[0xe];
      uVar4 = param_1[0xf];
      uVar1 = param_1[0x10];
      uVar5 = param_1[0x11];
      uVar10 = param_1[0x12];
      uVar11 = param_2[10];
      uVar14 = param_2[0xd];
      uVar13 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar11;
      param_1[0xd] = uVar14;
      param_1[0xc] = uVar13;
      uVar11 = param_2[0xe];
      uVar14 = param_2[0x11];
      uVar13 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar11;
      param_1[0x11] = uVar14;
      param_1[0x10] = uVar13;
      param_1[0x12] = uVar9;
      *(char *)(param_1 + 0x13) = cVar7;
      FUN_103059268(uVar8,uVar2,uVar12,uVar3,uVar15,uVar4,uVar1,uVar5,uVar10,cVar6);
      goto LAB_103075f7c;
    }
    FUN_103059634(param_1 + 10);
  }
  uVar8 = param_2[0xe];
  uVar15 = param_2[0x11];
  uVar12 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar8;
  param_1[0x11] = uVar15;
  param_1[0x10] = uVar12;
  uVar8 = *(undefined8 *)((long)param_2 + 0x89);
  *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)((long)param_1 + 0x89) = uVar8;
  uVar15 = param_2[10];
  uVar12 = param_2[0xd];
  uVar8 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar15;
  param_1[0xd] = uVar12;
  param_1[0xc] = uVar8;
LAB_103075f7c:
  uVar8 = param_1[0x14];
  param_1[0x14] = param_2[0x14];
  func_0x000107c61574(uVar8);
  uVar8 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  func_0x000107c61574(uVar8);
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0x16);
  return param_1;
}



/* Entry: 103075fb8; end: 10307607f;  */

int FUN_103075fb8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xb1) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x2a);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103076080; end: 10307616b;  */

void FUN_103076080(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (puRam0000000112f37720 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37728;
  func_0x00010002969c(0x112f37728,&UNK_10db80c40);
  uVar2 = uVar1;
  FUN_1030757c0();
  uVar3 = 0x112f376f8;
  func_0x00010002969c(0x112f376f8,&UNK_10db80bd0);
  uVar4 = 0x112f37708;
  FUN_1030771cc(0x112f37708,0x112f376f8,&UNK_10db80bd0,
                PTR___s7SwiftUI6ToggleVyxGAA4ViewAAMc_1103498d0);
  uVar5 = uVar4;
  FUN_103075780();
  puStack_58 = &UNK_110604180;
  puVar6 = &uStack_60;
  uStack_60 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  func_0x000107c614f4(puVar6,
                      PTR___s7SwiftUI4ViewPAAE11toggleStyleyQrqd__AA06ToggleE0Rd__lFQOMQ_1103494b8,1
                     );
  puVar7 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_70 = uVar2;
  puStack_68 = puVar6;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_70);
  puRam0000000112f37720 = puVar7;
  return;
}



/* Entry: 10307616c; end: 10307618b;  */

undefined1  [16] FUN_10307616c(void)

{
  return ZEXT816(0x110604180);
}



/* Entry: 10307618c; end: 1030761bb;  */

void FUN_10307618c(undefined8 param_1)

{
  func_0x000107c5f7c8(0x3fd6666666666666,0x3fe8000000000000,0);
  uRam0000000113806b08 = param_1;
  return;
}



/* Entry: 1030761bc; end: 103076223;  */

void FUN_1030761bc(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar2 = 0;
  FUN_103076224();
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar2 = 0;
  func_0x000107c5f510();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))((long)param_1 + (long)iVar1,param_2,lVar2);
  puVar3 = &UNK_10db80c90;
  func_0x000107c614e0();
  *param_1 = puVar3;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103076224; end: 10307625b;  */

void FUN_103076224(undefined8 param_1)

{
  if (lRam0000000112f37788 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74280c);
  return;
}



/* Entry: 10307625c; end: 1030762ff;  */

long * FUN_10307625c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar5 = *param_2;
    lVar3 = param_2[1];
    func_0x000101c13424(lVar5,(char)lVar3);
    *param_1 = lVar5;
    *(char *)(param_1 + 1) = (char)lVar3;
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    func_0x000107c5f510();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103076300; end: 103076347;  */

void FUN_103076300(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000101c01914(*param_1,*(undefined1 *)(param_1 + 1));
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  func_0x000107c5f510();
                    /* WARNING: Could not recover jumptable at 0x000103076344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 103076348; end: 103076443;  */

undefined8 * FUN_103076348(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000101c13424(uVar4,uVar1);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar1;
  iVar2 = *(int *)(param_3 + 0x14);
  lVar3 = 0;
  func_0x000107c5f510();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  return param_1;
}



/* Entry: 103076444; end: 103076513;  */

undefined8 * FUN_103076444(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  func_0x000107c5f510();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 103076514; end: 10307652b;  */

void FUN_103076514(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10307652c; end: 10307659f;  */

void FUN_10307652c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10db80cd0;
  lVar1 = 0x13f;
  func_0x000107c5f510();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 1030765a0; end: 1030765af;  */

void FUN_1030765a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e74285c,1);
  return;
}



/* Entry: 1030765b0; end: 103076843;  */

void FUN_1030765b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  ulong *unaff_x20;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long alStack_b0 [4];
  undefined1 auStack_90 [16];
  
  lVar1 = 0;
  alStack_b0[1] = param_1;
  FUN_103076224();
  lVar12 = *(long *)(lVar1 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)alStack_b0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112f377c8;
  func_0x0001000285a8(0x112f377c8,&UNK_10db80d38);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar11 = (long *)(lVar6 - extraout_x8);
  lVar2 = 0x112f377d0;
  func_0x0001000285a8(0x112f377d0,&UNK_10db80d40);
  lVar10 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f410();
  *plVar11 = lVar3;
  plVar11[1] = 0x4020000000000000;
  *(undefined1 *)(plVar11 + 2) = 0;
  lVar3 = 0x112f377d8;
  func_0x0001000285a8(0x112f377d8,&UNK_10db80d48);
  FUN_103076844((long)plVar11 + (long)*(int *)(lVar3 + 0x2c));
  uVar4 = *unaff_x20;
  func_0x000101c13094(uVar4,(char)unaff_x20[1]);
  uVar7 = 0x3ff0000000000000;
  if ((uVar4 & 1) == 0) {
    uVar7 = 0x3fd999999999999a;
  }
  lVar3 = 0x112f377e0;
  func_0x0001000285a8(0x112f377e0,&UNK_10db80d50);
  *(undefined8 *)((long)plVar11 + (long)*(int *)(lVar3 + 0x24)) = uVar7;
  *(undefined1 *)((long)plVar11 + (long)*(int *)(lVar1 + 0x24)) = 0;
  FUN_103076fe0();
  uVar4 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1106041a0;
  func_0x000107c613fc(&UNK_1106041a0,uVar13 + lVar14,uVar4 | 7);
  func_0x000103077024(lVar6,puVar5 + uVar13);
  FUN_103077094();
  func_0x000107c5f620((long)plVar11 - extraout_x8_00,1,FUN_103077068,puVar5,lVar1,lVar6);
  func_0x000107c61574(puVar5);
  func_0x000103077334(plVar11,0x112f377c8,&UNK_10db80d38);
  uVar7 = 0x112f37808;
  func_0x0001000285a8(0x112f37808,&UNK_10db80d60);
  plVar8 = alStack_b0 + 2;
  alStack_b0[2] = lVar1;
  alStack_b0[3] = lVar6;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctFQOMQ_1103494d0,1
                     );
  uVar9 = 0x112f37810;
  func_0x0001030771cc(0x112f37810,0x112f37808,&UNK_10db80d60,
                      PTR___s7SwiftUI6ToggleVyxGAA4ViewAAMc_1103498d0);
  func_0x000107c5f678(alStack_b0[1],FUN_1030771c4,auStack_90,lVar2,uVar7,plVar8,uVar9);
  (**(code **)(lVar10 + 8))((long)plVar11 - extraout_x8_00,lVar2);
  return;
}



/* Entry: 103076844; end: 103076aaf;  */

void FUN_103076844(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined *puVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long alStack_a0 [5];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x112f37828;
  func_0x0001000285a8(0x112f37828,&UNK_10db80d68);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar7 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  lVar2 = 0x112f37830;
  func_0x0001000285a8(0x112f37830,&UNK_10db80d70);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12_00;
  pbVar3 = (byte *)0x0;
  FUN_103076224();
  func_0x000107c5f50c(lVar10);
  func_0x000103081b2c();
  uVar4 = (ulong)*pbVar3;
  FUN_103081288(*(undefined8 *)(pbVar3 + 8),*(undefined8 *)(pbVar3 + 0x18),uVar4,pbVar3[0x10]);
  puVar5 = &UNK_10db80d78;
  func_0x000107c614e0();
  plVar6 = (long *)0x112f37838;
  func_0x0001000285a8(0x112f37838,&UNK_10db80da8);
  puVar1 = (undefined8 *)(lVar10 + *(int *)((long)plVar6 + 0x24));
  *puVar1 = puVar5;
  puVar1[1] = uVar4;
  func_0x000103080be4();
  alStack_a0[1] = plVar6[1];
  alStack_a0[0] = *plVar6;
  alStack_a0[3] = plVar6[3];
  alStack_a0[2] = plVar6[2];
  lStack_78 = plVar6[5];
  alStack_a0[4] = plVar6[4];
  lStack_68 = plVar6[7];
  lStack_70 = plVar6[6];
  FUN_103080684();
  *(long **)(lVar10 + *(int *)(lVar2 + 0x24)) = plVar6;
  FUN_103076ab0(lVar8);
  func_0x0001030772ec(lVar10,lVar9,0x112f37830,&UNK_10db80d70);
  func_0x0001030772ec(lVar8,lVar7,0x112f37828,&UNK_10db80d68);
  func_0x0001030772ec(lVar9,param_1,0x112f37830,&UNK_10db80d70);
  lVar2 = 0x112f37840;
  func_0x0001000285a8(0x112f37840,&UNK_10db80db0);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x0001030772ec(lVar7,param_1 + *(int *)(lVar2 + 0x40),0x112f37828,&UNK_10db80d68);
  func_0x000103077334(lVar8,0x112f37828,&UNK_10db80d68);
  func_0x000103077334(lVar10,0x112f37830,&UNK_10db80d70);
  func_0x000103077334(lVar7,0x112f37828,&UNK_10db80d68);
  func_0x000103077334(lVar9,0x112f37830,&UNK_10db80d70);
  return;
}



/* Entry: 103076ab0; end: 103076e9f;  */

void FUN_103076ab0(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined6 uStack_4e0;
  undefined2 uStack_4da;
  undefined6 uStack_4d8;
  undefined2 uStack_4d2;
  undefined6 uStack_4d0;
  undefined2 uStack_4ca;
  undefined6 uStack_4c8;
  undefined2 uStack_4c2;
  undefined6 uStack_4c0;
  undefined2 uStack_4ba;
  undefined6 uStack_4b8;
  undefined2 uStack_4b2;
  undefined6 uStack_4b0;
  undefined8 *puStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined1 uStack_3e0;
  undefined7 uStack_3df;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined8 **ppuStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  undefined1 uStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  undefined1 uStack_318;
  undefined8 **ppuStack_310;
  long lStack_308;
  undefined8 *puStack_300;
  undefined2 uStack_2f8;
  undefined2 uStack_2f0;
  undefined6 uStack_2ee;
  undefined2 uStack_2e8;
  undefined6 uStack_2e6;
  undefined2 uStack_2e0;
  undefined6 uStack_2de;
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined6 uStack_2ce;
  undefined2 uStack_2c8;
  undefined6 uStack_2c6;
  undefined8 *puStack_2c0;
  undefined2 uStack_2b8;
  undefined8 uStack_2b6;
  undefined8 uStack_2ae;
  long lStack_2a6;
  undefined8 uStack_29e;
  long lStack_296;
  undefined6 uStack_28e;
  undefined2 uStack_288;
  undefined6 uStack_286;
  undefined8 *puStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 *puStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [48];
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
  undefined8 **ppuVar9;
  
  puVar4 = (undefined8 *)0x0;
  FUN_103076224();
  func_0x000107c5f500();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000103080b78();
  }
  else {
    func_0x000103080b90();
  }
  uStack_b8 = puVar4[1];
  uStack_c0 = *puVar4;
  uStack_a8 = puVar4[3];
  uStack_b0 = puVar4[2];
  uStack_98 = puVar4[5];
  uStack_a0 = puVar4[4];
  uStack_88 = puVar4[7];
  uStack_90 = puVar4[6];
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar5 = 0;
  func_0x000107c5f41c();
  lVar6 = param_1;
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))(param_1,uVar2,lVar5);
  FUN_103080684();
  lVar5 = 0x112e02d80;
  puVar10 = &UNK_10d9dee00;
  func_0x0001000285a8(0x112e02d80,&UNK_10d9dee00);
  *(long *)(param_1 + *(int *)(lVar5 + 0x34)) = lVar6;
  *(undefined2 *)(param_1 + *(int *)(lVar5 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_160,0x4042000000000000,0,0x4038000000000000,0,lVar5,puVar10);
  puVar4 = (undefined8 *)0x112f37848;
  puVar10 = &UNK_10db81050;
  func_0x0001000285a8(0x112f37848,&UNK_10db81050);
  puVar7 = (undefined8 *)(param_1 + *(int *)((long)puVar4 + 0x24));
  puVar7[1] = uStack_158;
  *puVar7 = uStack_160;
  puVar7[3] = uStack_148;
  puVar7[2] = uStack_150;
  puVar7[5] = uStack_138;
  puVar7[4] = uStack_140;
  func_0x000103080c20();
  uStack_f8 = puVar4[1];
  uStack_100 = *puVar4;
  uStack_e8 = puVar4[3];
  uStack_f0 = puVar4[2];
  uStack_d8 = puVar4[5];
  uStack_e0 = puVar4[4];
  uStack_c8 = puVar4[7];
  uStack_d0 = puVar4[6];
  FUN_103080684();
  puVar7 = puVar4;
  func_0x000107c5f7ac();
  lVar5 = 0x4030000000000000;
  func_0x000107c5f2d4(auStack_130,0x4030000000000000,0,0x4030000000000000,0,puVar7,puVar10);
  uStack_4d2 = (undefined2)auStack_130._8_8_;
  uStack_4d0 = SUB86(auStack_130._8_8_,2);
  uStack_4da = (undefined2)auStack_130._0_8_;
  uStack_4d8 = SUB86(auStack_130._0_8_,2);
  uStack_4c2 = (undefined2)auStack_130._24_8_;
  uStack_4c0 = SUB86(auStack_130._24_8_,2);
  uStack_4ca = (undefined2)auStack_130._16_8_;
  uStack_4c8 = SUB86(auStack_130._16_8_,2);
  uStack_4b2 = (undefined2)auStack_130._40_8_;
  uStack_4b0 = SUB86(auStack_130._40_8_,2);
  uStack_4ba = (undefined2)auStack_130._32_8_;
  uStack_4b8 = SUB86(auStack_130._32_8_,2);
  func_0x000107c5f6c8();
  lVar8 = lVar5;
  func_0x000107c5f6d4(0x3fc999999999999a);
  func_0x000107c61574(lVar5);
  uStack_2f8 = 0x100;
  uStack_2ee = uStack_4d8;
  uStack_2e8 = uStack_4d2;
  uStack_2f0 = uStack_4da;
  uStack_2ae = CONCAT26(uStack_4d2,uStack_4d8);
  uStack_2b6 = CONCAT26(uStack_4da,uStack_4e0);
  uStack_29e = CONCAT26(uStack_4c2,uStack_4c8);
  lVar6 = CONCAT26(uStack_4ca,uStack_4d0);
  uStack_2de = uStack_4c8;
  uStack_2d8 = uStack_4c2;
  uStack_2e6 = uStack_4d0;
  uStack_2e0 = uStack_4ca;
  lVar13 = CONCAT26(uStack_4ba,uStack_4c0);
  uStack_2ce = uStack_4b8;
  uStack_2d6 = uStack_4c0;
  uStack_2d0 = uStack_4ba;
  uStack_2c8 = uStack_4b2;
  uStack_2c6 = uStack_4b0;
  lStack_438 = CONCAT62(uStack_4e0,0x100);
  lStack_428 = CONCAT62(uStack_4d0,uStack_4d2);
  lStack_430 = CONCAT62(uStack_4d8,uStack_4da);
  lStack_418 = CONCAT62(uStack_4c0,uStack_4c2);
  lStack_420 = CONCAT62(uStack_4c8,uStack_4ca);
  lStack_408 = CONCAT62(uStack_4b0,uStack_4b2);
  lStack_410 = CONCAT62(uStack_4b8,uStack_4ba);
  uStack_2b8 = 0x100;
  uStack_286 = uStack_4b0;
  uStack_28e = uStack_4b8;
  uStack_288 = uStack_4b2;
  puStack_440 = puVar4;
  puStack_300 = puVar4;
  puStack_2c0 = puVar4;
  lStack_2a6 = lVar6;
  lStack_296 = lVar13;
  func_0x0001030772ec(&puStack_300,&puStack_3a0,0x112d4f680,&UNK_10d915678);
  ppuVar9 = &puStack_2c0;
  func_0x000103077334(ppuVar9,0x112d4f680,&UNK_10d915678);
  uVar3 = SUB81(ppuVar9,0);
  lStack_278 = lStack_438;
  puStack_280 = puStack_440;
  lStack_268 = lStack_428;
  lStack_270 = lStack_430;
  lStack_258 = lStack_418;
  lStack_260 = lStack_420;
  lStack_248 = lStack_408;
  lStack_250 = lStack_410;
  lStack_230 = 0;
  lStack_238 = 0x4008000000000000;
  lStack_228 = 0x3ff0000000000000;
  lVar12 = lStack_410;
  lStack_240 = lVar8;
  func_0x000107c5f56c();
  lVar11 = 0x4010000000000000;
  func_0x000107c5f280();
  lStack_198 = lStack_258;
  lStack_1a0 = lStack_260;
  lStack_188 = lStack_248;
  lStack_190 = lStack_250;
  lStack_178 = lStack_238;
  lStack_180 = lStack_240;
  lStack_168 = lStack_228;
  lStack_170 = lStack_230;
  lStack_1b8 = lStack_278;
  puStack_1c0 = puStack_280;
  lStack_1a8 = lStack_268;
  lStack_1b0 = lStack_270;
  lStack_1f8 = lStack_418;
  lStack_200 = lStack_420;
  lStack_1e8 = lStack_408;
  lStack_1f0 = lStack_410;
  lStack_218 = lStack_438;
  puStack_220 = puStack_440;
  lStack_208 = lStack_428;
  lStack_210 = lStack_430;
  uStack_1d0 = 0;
  uStack_1d8 = 0x4008000000000000;
  uStack_1c8 = 0x3ff0000000000000;
  lVar5 = 0x112f37850;
  lStack_1e0 = lVar8;
  func_0x0001030772ec(&puStack_280,&puStack_3a0,0x112f37850,&UNK_10db80db8);
  ppuVar9 = &puStack_220;
  func_0x000103077334(ppuVar9,0x112f37850,&UNK_10db80db8);
  func_0x000107c5f500();
  if (((ulong)ppuVar9 & 1) == 0) {
    func_0x000107c5f7b0();
  }
  else {
    func_0x000107c5f7b4();
  }
  lStack_418 = lStack_198;
  lStack_420 = lStack_1a0;
  lStack_408 = lStack_188;
  lStack_410 = lStack_190;
  lStack_3f8 = lStack_178;
  lStack_400 = lStack_180;
  lStack_3e8 = lStack_168;
  lStack_3f0 = lStack_170;
  lStack_438 = lStack_1b8;
  puStack_440 = puStack_1c0;
  lStack_428 = lStack_1a8;
  lStack_430 = lStack_1b0;
  uStack_3b8 = 0;
  lVar8 = 0x112f37828;
  uStack_3e0 = uVar3;
  lStack_3d8 = lVar11;
  lStack_3d0 = lVar12;
  lStack_3c8 = lVar6;
  lStack_3c0 = lVar13;
  ppuStack_3b0 = ppuVar9;
  lStack_3a8 = lVar5;
  func_0x0001000285a8(0x112f37828,&UNK_10db80d68);
  plVar1 = (long *)(param_1 + *(int *)(lVar8 + 0x24));
  plVar1[0xd] = lStack_3d8;
  plVar1[0xc] = CONCAT71(uStack_3df,uStack_3e0);
  plVar1[0xf] = lStack_3c8;
  plVar1[0xe] = lStack_3d0;
  plVar1[0x11] = CONCAT71(uStack_3b7,uStack_3b8);
  plVar1[0x10] = lStack_3c0;
  plVar1[0x13] = lStack_3a8;
  plVar1[0x12] = (long)ppuStack_3b0;
  plVar1[5] = lStack_418;
  plVar1[4] = lStack_420;
  plVar1[7] = lStack_408;
  plVar1[6] = lStack_410;
  plVar1[9] = lStack_3f8;
  plVar1[8] = lStack_400;
  plVar1[0xb] = lStack_3e8;
  plVar1[10] = lStack_3f0;
  plVar1[1] = lStack_438;
  *plVar1 = (long)puStack_440;
  plVar1[3] = lStack_428;
  plVar1[2] = lStack_430;
  lStack_378 = lStack_198;
  lStack_380 = lStack_1a0;
  lStack_368 = lStack_188;
  lStack_370 = lStack_190;
  lStack_358 = lStack_178;
  lStack_360 = lStack_180;
  lStack_348 = lStack_168;
  lStack_350 = lStack_170;
  lStack_398 = lStack_1b8;
  puStack_3a0 = puStack_1c0;
  lStack_388 = lStack_1a8;
  lStack_390 = lStack_1b0;
  uStack_318 = 0;
  uStack_340 = uVar3;
  lStack_338 = lVar11;
  lStack_330 = lVar12;
  lStack_328 = lVar6;
  lStack_320 = lVar13;
  ppuStack_310 = ppuVar9;
  lStack_308 = lVar5;
  func_0x0001030772ec(&puStack_440,&uStack_4e0,0x112f37858,&UNK_10db80dc0);
  func_0x000103077334(&puStack_3a0,0x112f37858,&UNK_10db80dc0);
  return;
}



/* Entry: 103076ea0; end: 103076f2f;  */

void FUN_103076ea0(ulong *param_1)

{
  ulong uVar1;
  undefined1 auStack_50 [16];
  ulong *puStack_40;
  
  uVar1 = *param_1;
  func_0x000101c13094(uVar1,(char)param_1[1]);
  if ((uVar1 & 1) != 0) {
    if (lRam0000000112f37820 != -1) {
      func_0x000107c61568(0x112f37820,FUN_10307618c);
    }
    puStack_40 = param_1;
    func_0x000107c5f300(uRam0000000113806b08,0x103077288,auStack_50,PTR___sytN_11034f1b0 + 8);
  }
  return;
}



/* Entry: 103076f30; end: 103076fdb;  */

void FUN_103076f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  lVar1 = 0;
  FUN_103076224();
  func_0x000107c5f504((long)*(int *)(lVar1 + 0x14));
  uVar2 = 0;
  uStack_50 = param_2;
  func_0x000107c5f508(0);
  uVar3 = 0x112f37818;
  func_0x000103077248(0x112f37818,PTR___s7SwiftUI24ToggleStyleConfigurationV5LabelVMa_1103490d0,
                      PTR___s7SwiftUI24ToggleStyleConfigurationV5LabelVAA4ViewAAMc_1103490c8);
  func_0x000107c5f758(param_1,lVar1,param_3,param_4 & 1,0x103077210,auStack_60,uVar2,uVar3);
  return;
}



/* Entry: 103076fdc; end: 103076fdf;  */

void FUN_103076fdc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long *plVar11;
  ulong *unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long alStack_b0 [4];
  undefined1 auStack_90 [16];
  
  lVar1 = 0;
  alStack_b0[1] = param_1;
  FUN_103076224();
  lVar12 = *(long *)(lVar1 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)alStack_b0 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112f377c8;
  func_0x0001000285a8(0x112f377c8,&UNK_10db80d38);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar11 = (long *)(lVar6 - extraout_x8);
  lVar2 = 0x112f377d0;
  func_0x0001000285a8(0x112f377d0,&UNK_10db80d40);
  lVar10 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5f410();
  *plVar11 = lVar3;
  plVar11[1] = 0x4020000000000000;
  *(undefined1 *)(plVar11 + 2) = 0;
  lVar3 = 0x112f377d8;
  func_0x0001000285a8(0x112f377d8,&UNK_10db80d48);
  FUN_103076844((long)plVar11 + (long)*(int *)(lVar3 + 0x2c));
  uVar4 = *unaff_x20;
  func_0x000101c13094(uVar4,(char)unaff_x20[1]);
  uVar7 = 0x3ff0000000000000;
  if ((uVar4 & 1) == 0) {
    uVar7 = 0x3fd999999999999a;
  }
  lVar3 = 0x112f377e0;
  func_0x0001000285a8(0x112f377e0,&UNK_10db80d50);
  *(undefined8 *)((long)plVar11 + (long)*(int *)(lVar3 + 0x24)) = uVar7;
  *(undefined1 *)((long)plVar11 + (long)*(int *)(lVar1 + 0x24)) = 0;
  FUN_103076fe0();
  uVar4 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1106041a0;
  func_0x000107c613fc(&UNK_1106041a0,uVar13 + lVar14,uVar4 | 7);
  func_0x000103077024(lVar6,puVar5 + uVar13);
  FUN_103077094();
  func_0x000107c5f620((long)plVar11 - extraout_x8_00,1,FUN_103077068,puVar5,lVar1,lVar6);
  func_0x000107c61574(puVar5);
  func_0x000103077334(plVar11,0x112f377c8,&UNK_10db80d38);
  uVar7 = 0x112f37808;
  func_0x0001000285a8(0x112f37808,&UNK_10db80d60);
  plVar8 = alStack_b0 + 2;
  alStack_b0[2] = lVar1;
  alStack_b0[3] = lVar6;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctFQOMQ_1103494d0,1
                     );
  uVar9 = 0x112f37810;
  func_0x0001030771cc(0x112f37810,0x112f37808,&UNK_10db80d60,
                      PTR___s7SwiftUI6ToggleVyxGAA4ViewAAMc_1103498d0);
  func_0x000107c5f678(alStack_b0[1],FUN_1030771c4,auStack_90,lVar2,uVar7,plVar8,uVar9);
  (**(code **)(lVar10 + 8))((long)plVar11 - extraout_x8_00,lVar2);
  return;
}



/* Entry: 103076fe0; end: 103077067;  */

undefined8 FUN_103076fe0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_103076224();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103077068; end: 103077093;  */

void FUN_103077068(void)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auStack_50 [16];
  ulong *puStack_40;
  
  lVar2 = 0;
  FUN_103076224();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (ulong *)(unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
  uVar3 = *puVar1;
  func_0x000101c13094(uVar3,(char)puVar1[1]);
  if ((uVar3 & 1) != 0) {
    if (lRam0000000112f37820 != -1) {
      func_0x000107c61568(0x112f37820,FUN_10307618c);
    }
    puStack_40 = puVar1;
    func_0x000107c5f300(uRam0000000113806b08,0x103077288,auStack_50,PTR___sytN_11034f1b0 + 8);
  }
  return;
}



/* Entry: 103077094; end: 1030771c3;  */

void FUN_103077094(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f377e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f377c8;
  func_0x00010002969c(0x112f377c8,&UNK_10db80d38);
  uVar2 = uVar1;
  func_0x00010307712c();
  uVar3 = 0x112d4fe68;
  FUN_1030771cc(0x112d4fe68,0x112d4fe70,&UNK_10da5a660,
                PTR___s7SwiftUI21_ContentShapeModifierVyxGAA04ViewE0AAMc_110348fd8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f377e8 = puVar4;
  return;
}



/* Entry: 1030771c4; end: 1030771cb;  */

void FUN_1030771c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_103076224();
  func_0x000107c5f504((long)*(int *)(lVar1 + 0x14));
  uVar2 = 0;
  uStack_50 = uVar3;
  func_0x000107c5f508(0);
  uVar3 = 0x112f37818;
  func_0x000103077248(0x112f37818,PTR___s7SwiftUI24ToggleStyleConfigurationV5LabelVMa_1103490d0,
                      PTR___s7SwiftUI24ToggleStyleConfigurationV5LabelVAA4ViewAAMc_1103490c8);
  func_0x000107c5f758(param_1,lVar1,param_3,param_4 & 1,0x103077210,auStack_60,uVar2,uVar3);
  return;
}



/* Entry: 1030771cc; end: 103077373;  */

void FUN_1030771cc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103077374; end: 1030773f3;  */

void FUN_103077374(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 1030773f4; end: 103077893;  */

/* WARNING: Removing unreachable block (ram,0x0001030774ac) */

void FUN_1030773f4(long *param_1,long *param_2)

{
  byte ***pppbVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte ***pppbVar8;
  byte ***pppbVar9;
  byte ***pppbVar10;
  undefined1 auStack_420 [160];
  byte **ppbStack_380;
  byte ***pppbStack_378;
  ulong uStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  ulong uStack_358;
  undefined8 *puStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2ee;
  byte **ppbStack_2a0;
  byte ***pppbStack_298;
  ulong uStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  undefined8 *puStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_20e;
  byte **ppbStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  byte bStack_1b0;
  undefined7 uStack_1af;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined8 uStack_16e;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte **ppbStack_118;
  byte ***pppbStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte **ppbStack_d0;
  byte ***pppbStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  
  pppbVar10 = (byte ***)param_2[1];
  pppbVar9 = (byte ***)*param_2;
  lStack_b8 = param_2[3];
  lStack_c0 = param_2[2];
  lStack_a8 = param_2[5];
  lStack_b0 = param_2[4];
  lStack_98 = param_2[7];
  lStack_a0 = param_2[6];
  uStack_88 = param_2[9];
  lStack_90 = param_2[8];
  uStack_80 = (undefined1)param_2[10];
  ppbStack_d0 = (byte **)pppbVar9;
  pppbStack_c8 = pppbVar10;
  if ((uStack_88 & 0xff) == 1) {
    lStack_1d8 = param_2[5];
    lStack_1e0 = param_2[4];
    lStack_1c8 = param_2[7];
    lStack_1d0 = param_2[6];
    lStack_1b8 = param_2[9];
    lStack_1c0 = param_2[8];
    lStack_1f8 = param_2[1];
    ppbStack_200 = (byte **)*param_2;
    lStack_1e8 = param_2[3];
    lStack_1f0 = param_2[2];
    bStack_1b0 = *(byte *)(param_2 + 10) & 0x7f;
    FUN_103078164(&ppbStack_d0,&ppbStack_2a0);
    pppbVar1 = &ppbStack_200;
    func_0x000103059b1c(pppbVar1,&ppbStack_2a0);
    pppbVar8 = pppbVar10;
  }
  else {
    lStack_1d8 = param_2[5];
    lStack_1e0 = param_2[4];
    lStack_1c8 = param_2[7];
    lStack_1d0 = param_2[6];
    lStack_1b8 = param_2[9];
    lStack_1c0 = param_2[8];
    lStack_1f8 = param_2[1];
    ppbStack_200 = (byte **)*param_2;
    lStack_1e8 = param_2[3];
    lStack_1f0 = param_2[2];
    bStack_1b0 = *(byte *)(param_2 + 10) & 0x7f;
    pppbVar1 = &ppbStack_200;
    pppbVar8 = &ppbStack_2a0;
    ppbStack_118 = (byte **)pppbVar9;
    pppbStack_110 = pppbVar10;
    lStack_108 = lStack_c0;
    lStack_100 = lStack_b8;
    lStack_f8 = lStack_b0;
    lStack_f0 = lStack_a8;
    lStack_e8 = lStack_a0;
    lStack_e0 = lStack_98;
    lStack_d8 = lStack_90;
    func_0x000103059b1c();
    FUN_10307ff24();
    pppbVar9 = pppbVar1;
  }
  func_0x000103081b38();
  uVar2 = (ulong)*(byte *)pppbVar1;
  FUN_103081288(pppbVar1[1],pppbVar1[3],uVar2,*(byte *)(pppbVar1 + 2));
  puVar3 = (undefined8 *)&UNK_10db80e60;
  func_0x000107c614e0();
  puVar4 = puVar3;
  func_0x000103080be4();
  uStack_158 = puVar4[1];
  uStack_160 = *puVar4;
  uStack_148 = puVar4[3];
  uStack_150 = puVar4[2];
  uStack_138 = puVar4[5];
  uStack_140 = puVar4[4];
  uStack_128 = puVar4[7];
  uStack_130 = puVar4[6];
  FUN_103080684();
  uStack_290 = uStack_290 & 0xffffffffffffff00;
  puStack_288 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppbStack_2a0 = (byte **)pppbVar9;
  pppbStack_298 = pppbVar8;
  puStack_280 = puVar3;
  uStack_278 = uVar2;
  puStack_270 = puVar4;
  FUN_103078260(&ppbStack_2a0);
  lStack_318 = lStack_238;
  lStack_320 = lStack_240;
  lStack_308 = lStack_228;
  lStack_310 = lStack_230;
  lStack_300 = lStack_220;
  uStack_2ee = uStack_20e;
  uStack_358 = uStack_278;
  puStack_360 = puStack_280;
  lStack_348 = lStack_268;
  puStack_350 = puStack_270;
  lStack_338 = lStack_258;
  lStack_340 = lStack_260;
  lStack_328 = lStack_248;
  uStack_330 = uStack_250;
  pppbStack_378 = pppbStack_298;
  ppbStack_380 = ppbStack_2a0;
  puStack_368 = puStack_288;
  uStack_370 = uStack_290;
  func_0x000107c61434(pppbVar8);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar4);
  uVar5 = 0x112f36c20;
  func_0x0001000285a8(0x112f36c20,&UNK_10db7f390);
  uVar6 = uVar5;
  FUN_10305d478();
  uVar7 = uVar6;
  func_0x000101f2cce4();
  func_0x000107c5f490(&ppbStack_200,&ppbStack_380,uVar5,&UNK_1106031d0,uVar6,uVar7);
  FUN_1030781a4(&ppbStack_d0);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(pppbVar8);
  uStack_330 = CONCAT71(uStack_1af,bStack_1b0);
  lStack_318 = lStack_198;
  lStack_320 = lStack_1a0;
  lStack_308 = lStack_188;
  lStack_310 = lStack_190;
  lStack_300 = lStack_180;
  uStack_2ee = uStack_16e;
  uStack_358 = lStack_1d8;
  puStack_360 = (undefined8 *)lStack_1e0;
  lStack_348 = lStack_1c8;
  puStack_350 = (undefined8 *)lStack_1d0;
  lStack_338 = lStack_1b8;
  lStack_340 = lStack_1c0;
  lStack_328 = lStack_1a8;
  pppbStack_378 = (byte ***)lStack_1f8;
  ppbStack_380 = ppbStack_200;
  puStack_368 = (undefined *)lStack_1e8;
  uStack_370 = lStack_1f0;
  param_1[0xd] = lStack_198;
  param_1[0xc] = lStack_1a0;
  param_1[0xf] = lStack_188;
  param_1[0xe] = lStack_190;
  param_1[0x11] = CONCAT62(uStack_176,uStack_178);
  param_1[0x10] = lStack_180;
  *(undefined8 *)((long)param_1 + 0x92) = uStack_16e;
  *(ulong *)((long)param_1 + 0x8a) = CONCAT26(uStack_170,uStack_176);
  param_1[5] = lStack_1d8;
  param_1[4] = lStack_1e0;
  param_1[7] = lStack_1c8;
  param_1[6] = lStack_1d0;
  uStack_250 = CONCAT71(uStack_1af,bStack_1b0);
  param_1[9] = lStack_1b8;
  param_1[8] = lStack_1c0;
  param_1[0xb] = lStack_1a8;
  param_1[10] = CONCAT71(uStack_1af,bStack_1b0);
  param_1[1] = lStack_1f8;
  *param_1 = (long)ppbStack_200;
  param_1[3] = lStack_1e8;
  param_1[2] = lStack_1f0;
  lStack_238 = lStack_198;
  lStack_240 = lStack_1a0;
  lStack_228 = lStack_188;
  lStack_230 = lStack_190;
  lStack_220 = lStack_180;
  uStack_20e = uStack_16e;
  uStack_278 = lStack_1d8;
  puStack_280 = (undefined8 *)lStack_1e0;
  lStack_268 = lStack_1c8;
  puStack_270 = (undefined8 *)lStack_1d0;
  lStack_258 = lStack_1b8;
  lStack_260 = lStack_1c0;
  lStack_248 = lStack_1a8;
  pppbStack_298 = (byte ***)lStack_1f8;
  ppbStack_2a0 = ppbStack_200;
  puStack_288 = (undefined *)lStack_1e8;
  uStack_290 = lStack_1f0;
  func_0x0001030781d0(&ppbStack_380,auStack_420,0x112f37860,&UNK_10db80dd0);
  func_0x000103078218(&ppbStack_2a0);
  return;
}



/* Entry: 103077894; end: 10307789b;  */

/* WARNING: Removing unreachable block (ram,0x0001030774ac) */

void FUN_103077894(long *param_1)

{
  byte ***pppbVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  byte ***pppbVar9;
  long unaff_x20;
  byte ***pppbVar10;
  byte ***pppbVar11;
  undefined1 auStack_420 [160];
  byte **ppbStack_380;
  byte ***pppbStack_378;
  ulong uStack_370;
  undefined *puStack_368;
  undefined8 *puStack_360;
  ulong uStack_358;
  undefined8 *puStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined8 uStack_2ee;
  byte **ppbStack_2a0;
  byte ***pppbStack_298;
  ulong uStack_290;
  undefined *puStack_288;
  undefined8 *puStack_280;
  ulong uStack_278;
  undefined8 *puStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined8 uStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_20e;
  byte **ppbStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  byte bStack_1b0;
  undefined7 uStack_1af;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined2 uStack_178;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined8 uStack_16e;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte **ppbStack_118;
  byte ***pppbStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  byte **ppbStack_d0;
  byte ***pppbStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined1 uStack_80;
  
  plVar8 = *(long **)(unaff_x20 + 0x10);
  pppbVar11 = (byte ***)plVar8[1];
  pppbVar10 = (byte ***)*plVar8;
  lStack_b8 = plVar8[3];
  lStack_c0 = plVar8[2];
  lStack_a8 = plVar8[5];
  lStack_b0 = plVar8[4];
  lStack_98 = plVar8[7];
  lStack_a0 = plVar8[6];
  uStack_88 = plVar8[9];
  lStack_90 = plVar8[8];
  uStack_80 = (undefined1)plVar8[10];
  ppbStack_d0 = (byte **)pppbVar10;
  pppbStack_c8 = pppbVar11;
  if ((uStack_88 & 0xff) == 1) {
    lStack_1d8 = plVar8[5];
    lStack_1e0 = plVar8[4];
    lStack_1c8 = plVar8[7];
    lStack_1d0 = plVar8[6];
    lStack_1b8 = plVar8[9];
    lStack_1c0 = plVar8[8];
    lStack_1f8 = plVar8[1];
    ppbStack_200 = (byte **)*plVar8;
    lStack_1e8 = plVar8[3];
    lStack_1f0 = plVar8[2];
    bStack_1b0 = *(byte *)(plVar8 + 10) & 0x7f;
    FUN_103078164(&ppbStack_d0,&ppbStack_2a0);
    pppbVar1 = &ppbStack_200;
    func_0x000103059b1c(pppbVar1,&ppbStack_2a0);
    pppbVar9 = pppbVar11;
  }
  else {
    lStack_1d8 = plVar8[5];
    lStack_1e0 = plVar8[4];
    lStack_1c8 = plVar8[7];
    lStack_1d0 = plVar8[6];
    lStack_1b8 = plVar8[9];
    lStack_1c0 = plVar8[8];
    lStack_1f8 = plVar8[1];
    ppbStack_200 = (byte **)*plVar8;
    lStack_1e8 = plVar8[3];
    lStack_1f0 = plVar8[2];
    bStack_1b0 = *(byte *)(plVar8 + 10) & 0x7f;
    pppbVar1 = &ppbStack_200;
    pppbVar9 = &ppbStack_2a0;
    ppbStack_118 = (byte **)pppbVar10;
    pppbStack_110 = pppbVar11;
    lStack_108 = lStack_c0;
    lStack_100 = lStack_b8;
    lStack_f8 = lStack_b0;
    lStack_f0 = lStack_a8;
    lStack_e8 = lStack_a0;
    lStack_e0 = lStack_98;
    lStack_d8 = lStack_90;
    func_0x000103059b1c();
    FUN_10307ff24();
    pppbVar10 = pppbVar1;
  }
  func_0x000103081b38();
  uVar2 = (ulong)*(byte *)pppbVar1;
  FUN_103081288(pppbVar1[1],pppbVar1[3],uVar2,*(byte *)(pppbVar1 + 2));
  puVar3 = (undefined8 *)&UNK_10db80e60;
  func_0x000107c614e0();
  puVar4 = puVar3;
  func_0x000103080be4();
  uStack_158 = puVar4[1];
  uStack_160 = *puVar4;
  uStack_148 = puVar4[3];
  uStack_150 = puVar4[2];
  uStack_138 = puVar4[5];
  uStack_140 = puVar4[4];
  uStack_128 = puVar4[7];
  uStack_130 = puVar4[6];
  FUN_103080684();
  uStack_290 = uStack_290 & 0xffffffffffffff00;
  puStack_288 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppbStack_2a0 = (byte **)pppbVar10;
  pppbStack_298 = pppbVar9;
  puStack_280 = puVar3;
  uStack_278 = uVar2;
  puStack_270 = puVar4;
  FUN_103078260(&ppbStack_2a0);
  lStack_318 = lStack_238;
  lStack_320 = lStack_240;
  lStack_308 = lStack_228;
  lStack_310 = lStack_230;
  lStack_300 = lStack_220;
  uStack_2ee = uStack_20e;
  uStack_358 = uStack_278;
  puStack_360 = puStack_280;
  lStack_348 = lStack_268;
  puStack_350 = puStack_270;
  lStack_338 = lStack_258;
  lStack_340 = lStack_260;
  lStack_328 = lStack_248;
  uStack_330 = uStack_250;
  pppbStack_378 = pppbStack_298;
  ppbStack_380 = ppbStack_2a0;
  puStack_368 = puStack_288;
  uStack_370 = uStack_290;
  func_0x000107c61434(pppbVar9);
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(puVar4);
  uVar5 = 0x112f36c20;
  func_0x0001000285a8(0x112f36c20,&UNK_10db7f390);
  uVar6 = uVar5;
  FUN_10305d478();
  uVar7 = uVar6;
  func_0x000101f2cce4();
  func_0x000107c5f490(&ppbStack_200,&ppbStack_380,uVar5,&UNK_1106031d0,uVar6,uVar7);
  FUN_1030781a4(&ppbStack_d0);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(pppbVar9);
  uStack_330 = CONCAT71(uStack_1af,bStack_1b0);
  lStack_318 = lStack_198;
  lStack_320 = lStack_1a0;
  lStack_308 = lStack_188;
  lStack_310 = lStack_190;
  lStack_300 = lStack_180;
  uStack_2ee = uStack_16e;
  uStack_358 = lStack_1d8;
  puStack_360 = (undefined8 *)lStack_1e0;
  lStack_348 = lStack_1c8;
  puStack_350 = (undefined8 *)lStack_1d0;
  lStack_338 = lStack_1b8;
  lStack_340 = lStack_1c0;
  lStack_328 = lStack_1a8;
  pppbStack_378 = (byte ***)lStack_1f8;
  ppbStack_380 = ppbStack_200;
  puStack_368 = (undefined *)lStack_1e8;
  uStack_370 = lStack_1f0;
  param_1[0xd] = lStack_198;
  param_1[0xc] = lStack_1a0;
  param_1[0xf] = lStack_188;
  param_1[0xe] = lStack_190;
  param_1[0x11] = CONCAT62(uStack_176,uStack_178);
  param_1[0x10] = lStack_180;
  *(undefined8 *)((long)param_1 + 0x92) = uStack_16e;
  *(ulong *)((long)param_1 + 0x8a) = CONCAT26(uStack_170,uStack_176);
  param_1[5] = lStack_1d8;
  param_1[4] = lStack_1e0;
  param_1[7] = lStack_1c8;
  param_1[6] = lStack_1d0;
  uStack_250 = CONCAT71(uStack_1af,bStack_1b0);
  param_1[9] = lStack_1b8;
  param_1[8] = lStack_1c0;
  param_1[0xb] = lStack_1a8;
  param_1[10] = CONCAT71(uStack_1af,bStack_1b0);
  param_1[1] = lStack_1f8;
  *param_1 = (long)ppbStack_200;
  param_1[3] = lStack_1e8;
  param_1[2] = lStack_1f0;
  lStack_238 = lStack_198;
  lStack_240 = lStack_1a0;
  lStack_228 = lStack_188;
  lStack_230 = lStack_190;
  lStack_220 = lStack_180;
  uStack_20e = uStack_16e;
  uStack_278 = lStack_1d8;
  puStack_280 = (undefined8 *)lStack_1e0;
  lStack_268 = lStack_1c8;
  puStack_270 = (undefined8 *)lStack_1d0;
  lStack_258 = lStack_1b8;
  lStack_260 = lStack_1c0;
  lStack_248 = lStack_1a8;
  pppbStack_298 = (byte ***)lStack_1f8;
  ppbStack_2a0 = ppbStack_200;
  puStack_288 = (undefined *)lStack_1e8;
  uStack_290 = lStack_1f0;
  func_0x0001030781d0(&ppbStack_380,auStack_420,0x112f37860,&UNK_10db80dd0);
  func_0x000103078218(&ppbStack_2a0);
  return;
}



/* Entry: 10307789c; end: 103077913;  */

void FUN_10307789c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f37868 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37860;
  func_0x00010002969c(0x112f37860,&UNK_10db80dd0);
  uVar2 = uVar1;
  FUN_10305d478();
  uVar3 = uVar2;
  func_0x000101f2cce4();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_110348f10,
                      uVar1,&uStack_30);
  puRam0000000112f37868 = puVar4;
  return;
}



/* Entry: 103077914; end: 10307792f;  */

void FUN_103077914(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7428a0,1);
  return;
}



/* Entry: 103077930; end: 1030779cf;  */

void FUN_103077930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_c0 [16];
  undefined8 *puStack_b0;
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uVar4 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uVar3 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  puStack_b0 = &uStack_a0;
  uStack_48 = uVar4;
  uStack_40 = uVar3;
  func_0x000107c6157c(uVar3);
  uVar1 = 0x112f37860;
  func_0x0001000285a8(0x112f37860,&UNK_10db80dd0);
  uVar2 = uVar1;
  FUN_10307789c();
  func_0x000107c5f738(param_1,uVar4,uVar3,0x103078270,auStack_c0,uVar1,uVar2);
  return;
}



/* Entry: 1030779d0; end: 103077a2b;  */

void FUN_1030779d0(undefined8 *param_1)

{
  FUN_103077a2c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],*(undefined1 *)(param_1 + 10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[0xc]);
  return;
}



/* Entry: 103077a2c; end: 103077a77;  */

void FUN_103077a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,char param_12,
                  undefined4 param_13,code *UNRECOVERED_JUMPTABLE_00)

{
  if (-1 < param_12) {
                    /* WARNING: Could not recover jumptable at 0x000103077a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103077a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 103077a78; end: 103077c63;  */

undefined8 * FUN_103077a78(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = *param_2;
  uVar4 = param_2[1];
  uVar11 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = param_2[4];
  uVar6 = param_2[5];
  uVar2 = param_2[6];
  uVar7 = param_2[7];
  uVar3 = param_2[8];
  uVar8 = param_2[9];
  uVar9 = *(undefined1 *)(param_2 + 10);
  FUN_103077a2c(uVar10,uVar4,uVar11,uVar5,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar9);
  *param_1 = uVar10;
  param_1[1] = uVar4;
  param_1[2] = uVar11;
  param_1[3] = uVar5;
  param_1[4] = uVar1;
  param_1[5] = uVar6;
  param_1[6] = uVar2;
  param_1[7] = uVar7;
  param_1[8] = uVar3;
  param_1[9] = uVar8;
  *(undefined1 *)(param_1 + 10) = uVar9;
  uVar10 = param_2[0xc];
  uVar11 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar11;
  func_0x000107c6157c(uVar10);
  return param_1;
}



/* Entry: 103077c64; end: 103077cf3;  */

undefined8 * FUN_103077c64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar7 = *(undefined1 *)(param_2 + 10);
  uVar9 = *param_1;
  uVar10 = param_1[1];
  uVar3 = param_1[2];
  uVar13 = param_1[3];
  uVar4 = param_1[4];
  uVar1 = param_1[5];
  uVar5 = param_1[6];
  uVar2 = param_1[7];
  uVar6 = param_1[8];
  uVar11 = param_1[9];
  uVar8 = *(undefined1 *)(param_1 + 10);
  uVar12 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar12;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar12 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar12;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar12 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar12;
  *(undefined1 *)(param_1 + 10) = uVar7;
  FUN_103077a2c(uVar9,uVar10,uVar3,uVar13,uVar4,uVar1,uVar5,uVar2,uVar6,uVar11,uVar8);
  uVar10 = param_1[0xc];
  uVar13 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar13;
  func_0x000107c61574(uVar10);
  return param_1;
}



/* Entry: 103077cf4; end: 103077da3;  */

int FUN_103077cf4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x16);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103077da4; end: 103077de7;  */

void FUN_103077da4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 103077de8; end: 103077e33;  */

void FUN_103077de8(undefined8 *param_1)

{
  FUN_103077a2c(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],*(undefined1 *)(param_1 + 10));
  return;
}



/* Entry: 103077e34; end: 103077fdb;  */

undefined8 * FUN_103077e34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  uVar7 = param_2[3];
  uVar3 = param_2[4];
  uVar8 = param_2[5];
  uVar4 = param_2[6];
  uVar9 = param_2[7];
  uVar5 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = *(undefined1 *)(param_2 + 10);
  FUN_103077a2c(uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar11);
  *param_1 = uVar1;
  param_1[1] = uVar6;
  param_1[2] = uVar2;
  param_1[3] = uVar7;
  param_1[4] = uVar3;
  param_1[5] = uVar8;
  param_1[6] = uVar4;
  param_1[7] = uVar9;
  param_1[8] = uVar5;
  param_1[9] = uVar10;
  *(undefined1 *)(param_1 + 10) = uVar11;
  return param_1;
}



/* Entry: 103077fdc; end: 10307805b;  */

undefined8 * FUN_103077fdc(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = *(undefined1 *)(param_2 + 10);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar12 = param_1[9];
  uVar10 = *(undefined1 *)(param_1 + 10);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  uVar13 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar13;
  *(undefined1 *)(param_1 + 10) = uVar9;
  FUN_103077a2c(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar12,uVar10);
  return param_1;
}



/* Entry: 10307805c; end: 103078163;  */

int FUN_10307805c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (*(byte *)(param_1 + 0x14) & 0x7e | (uint)(*(byte *)(param_1 + 0x14) >> 7)) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103078164; end: 103078197;  */

undefined8 FUN_103078164(undefined8 param_1,undefined8 param_2)

{
  FUN_103077e34(param_2,param_1,&UNK_110604320);
  return param_2;
}



/* Entry: 103078198; end: 1030781a3;  */

void FUN_103078198(long param_1)

{
  *(undefined1 *)(param_1 + 0x99) = 1;
  return;
}



/* Entry: 1030781a4; end: 10307825f;  */

undefined8 FUN_1030781a4(undefined8 param_1)

{
  FUN_103077de8(param_1,&UNK_110604320);
  return param_1;
}



/* Entry: 103078260; end: 103078287;  */

void FUN_103078260(long param_1)

{
  *(undefined1 *)(param_1 + 0x99) = 0;
  return;
}



/* Entry: 103078288; end: 103078333;  */

void FUN_103078288(void)

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



/* Entry: 103078334; end: 103078547;  */

void FUN_103078334(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  
  lVar3 = 0x112f37888;
  func_0x0001000285a8(0x112f37888,&UNK_10db80e90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar4 = (undefined *)0x112f37890;
  puVar7 = &UNK_10db80e98;
  func_0x0001000285a8();
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar10 - extraout_x8_00;
  FUN_103078548(param_1);
  puVar8 = *(undefined **)(unaff_x20 + 0x50);
  if (*(char *)(unaff_x20 + 0x58) == '\0') {
    func_0x000107c5f408();
  }
  else {
    if (*(char *)(unaff_x20 + 0x58) != '\x01') {
      func_0x000107c5f7ac();
      func_0x000107c6159c(lVar9,puVar4,0);
      lVar6 = 0x112f37898;
      func_0x0001000285a8(0x112f37898,&UNK_10db80ea0);
      iVar2 = *(int *)(lVar6 + 0x24);
      FUN_103078b18();
      func_0x000107c5f490(param_1 + iVar2,lVar9,PTR___s7SwiftUI9EmptyViewVN_110349a58,lVar3,
                          PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_110349a48,lVar6);
      puVar8 = puVar5;
      goto LAB_1030784ec;
    }
    func_0x000107c5f40c();
  }
  FUN_103078cf8(puVar10);
  func_0x0001030799d4(puVar10,lVar9,0x112f37888,&UNK_10db80e90);
  func_0x000107c6159c(lVar9,puVar4,1);
  lVar6 = 0x112f37898;
  func_0x0001000285a8(0x112f37898,&UNK_10db80ea0);
  iVar2 = *(int *)(lVar6 + 0x24);
  FUN_103078b18();
  func_0x000107c5f490(param_1 + iVar2,lVar9,PTR___s7SwiftUI9EmptyViewVN_110349a58,lVar3,
                      PTR___s7SwiftUI9EmptyViewVAA0D0AAWP_110349a48,lVar6);
  func_0x000103079a1c(puVar10,0x112f37888,&UNK_10db80e90);
  puVar7 = puVar5;
LAB_1030784ec:
  lVar3 = 0x112f37898;
  func_0x0001000285a8(0x112f37898,&UNK_10db80ea0);
  iVar2 = *(int *)(lVar3 + 0x24);
  lVar3 = 0x112f378d8;
  func_0x0001000285a8(0x112f378d8,&UNK_10db80ec0);
  puVar1 = (undefined8 *)(param_1 + iVar2 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = puVar8;
  puVar1[1] = puVar7;
  return;
}



/* Entry: 103078548; end: 103078b17;  */

void FUN_103078548(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,byte *param_6,undefined8 param_7)

{
  long *plVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar13;
  long lVar14;
  byte **ppbVar15;
  byte *unaff_x20;
  byte *pbVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  byte *pbVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_6e0 [176];
  byte *pbStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  ulong uStack_608;
  undefined8 *puStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 *puStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  byte *pbStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 uStack_5b0;
  undefined7 uStack_5af;
  undefined8 uStack_5a8;
  byte *pbStack_5a0;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  undefined1 uStack_588;
  byte *pbStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined *puStack_568;
  undefined *puStack_560;
  ulong uStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  byte *pbStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 uStack_500;
  undefined8 uStack_4f8;
  byte *pbStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  byte *pbStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined7 uStack_47f;
  undefined *puStack_478;
  undefined *puStack_470;
  ulong uStack_468;
  undefined8 *puStack_460;
  undefined8 uStack_458;
  undefined1 uStack_450;
  byte *pbStack_448;
  undefined8 uStack_440;
  undefined1 uStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  ulong uStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined1 uStack_408;
  byte *pbStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined *puStack_3e8;
  undefined *puStack_3e0;
  ulong uStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  byte *pbStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  ulong uStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 *puStack_368;
  byte *pbStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  ulong uStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 *puStack_318;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined8 uStack_308;
  byte *pbStack_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  byte *pbStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  ulong uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined1 uStack_290;
  undefined8 uStack_288;
  byte *pbStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  byte *pbStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  ulong uStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  byte *pbStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte **ppbVar12;
  
  pbVar16 = *(byte **)unaff_x20;
  uVar21 = *(undefined8 *)(unaff_x20 + 8);
  if (unaff_x20[0x48] == 1) {
    param_6 = unaff_x20;
    func_0x0001030799a0();
    param_7 = uVar21;
  }
  else {
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_d0 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x40);
    pbStack_f8 = pbVar16;
    uStack_f0 = uVar21;
    FUN_10307ff24();
    pbVar16 = param_6;
  }
  func_0x000103081b44();
  uVar8 = (ulong)*param_6;
  FUN_103081288(*(undefined8 *)(param_6 + 8),*(undefined8 *)(param_6 + 0x18),uVar8,param_6[0x10]);
  puVar9 = &UNK_10db80fd0;
  func_0x000107c614e0();
  puVar10 = (undefined8 *)&UNK_10db81000;
  func_0x000107c614e0();
  bVar3 = unaff_x20[0x49];
  puVar11 = puVar10;
  if (bVar3 == 0) {
    func_0x000103080be4();
  }
  else {
    func_0x000103080c14();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_260 = *puVar11;
  uStack_258 = puVar11[1];
  uStack_248 = puVar11[3];
  uStack_250 = puVar11[2];
  uStack_240 = puVar11[4];
  uStack_238 = puVar11[5];
  uStack_228 = puVar11[7];
  uStack_230 = puVar11[6];
  uStack_480 = 0;
  puStack_478 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_458 = 3;
  uStack_450 = 0;
  pbStack_490 = pbVar16;
  uStack_488 = param_7;
  puStack_470 = puVar9;
  uStack_468 = uVar8;
  puStack_460 = puVar10;
  FUN_103080684();
  uStack_1f8 = uStack_468;
  puStack_200 = puStack_470;
  uStack_1e8 = uStack_458;
  puStack_1f0 = puStack_460;
  uStack_1e0 = uStack_450;
  uStack_210 = CONCAT71(uStack_47f,uStack_480);
  puStack_208 = puStack_478;
  uStack_218 = uStack_488;
  pbStack_220 = pbStack_490;
  uStack_438 = 0;
  puStack_430 = puVar5;
  uStack_410 = 3;
  uStack_408 = 0;
  pbStack_448 = pbVar16;
  uStack_440 = param_7;
  puStack_428 = puVar9;
  uStack_420 = uVar8;
  puStack_418 = puVar10;
  func_0x0001030799d4(&pbStack_490,&pbStack_580,0x112f37948,&UNK_10db80fc8);
  ppbVar12 = &pbStack_448;
  func_0x000103079a1c(ppbVar12,0x112f37948,&UNK_10db80fc8);
  uVar6 = SUB81(ppbVar12,0);
  func_0x000107c5f568();
  uStack_3d8 = uStack_1f8;
  puStack_3e0 = puStack_200;
  uStack_3c8 = uStack_1e8;
  puStack_3d0 = puStack_1f0;
  uStack_3c0 = CONCAT71(uStack_1df,uStack_1e0);
  uStack_3f8 = uStack_218;
  pbStack_400 = pbStack_220;
  puStack_3e8 = puStack_208;
  uStack_3f0 = uStack_210;
  pbVar16 = pbStack_220;
  puStack_3b8 = puVar11;
  uVar17 = func_0x000107c5f280(0x4020000000000000);
  uStack_1a8 = uStack_3d8;
  puStack_1b0 = puStack_3e0;
  uStack_198 = uStack_3c8;
  puStack_1a0 = puStack_3d0;
  puStack_188 = puStack_3b8;
  uStack_190 = uStack_3c0;
  puStack_1b8 = puStack_3e8;
  uStack_1c0 = uStack_3f0;
  uStack_1c8 = uStack_3f8;
  pbStack_1d0 = pbStack_400;
  uStack_370 = CONCAT71(uStack_1df,uStack_1e0);
  uStack_388 = uStack_1f8;
  puStack_390 = puStack_200;
  uStack_378 = uStack_1e8;
  puStack_380 = puStack_1f0;
  uStack_3a8 = uStack_218;
  pbStack_3b0 = pbStack_220;
  puStack_398 = puStack_208;
  uStack_3a0 = uStack_210;
  uVar21 = param_4;
  uVar22 = param_5;
  puStack_368 = puVar11;
  func_0x0001030799d4(&pbStack_400,&pbStack_580,0x112f37938,&UNK_10db80fc0);
  ppbVar12 = &pbStack_3b0;
  func_0x000103079a1c(ppbVar12,0x112f37938,&UNK_10db80fc0);
  uVar7 = SUB81(ppbVar12,0);
  func_0x000107c5f584();
  uStack_338 = uStack_1a8;
  puStack_340 = puStack_1b0;
  uStack_328 = uStack_198;
  puStack_330 = puStack_1a0;
  puStack_318 = puStack_188;
  uStack_320 = uStack_190;
  uStack_358 = uStack_1c8;
  pbStack_360 = pbStack_1d0;
  puStack_348 = puStack_1b8;
  uStack_350 = uStack_1c0;
  uStack_2f8 = (undefined1)param_4;
  uStack_2f7 = (undefined7)((ulong)param_4 >> 8);
  uStack_2f0 = (undefined1)param_5;
  uStack_2ef = (undefined7)((ulong)param_5 >> 8);
  uStack_2e8 = 0;
  pbVar20 = pbStack_1d0;
  uStack_310 = uVar6;
  uStack_308 = uVar17;
  pbStack_300 = pbVar16;
  uVar18 = func_0x000107c5f280(0x4010000000000000);
  uStack_130 = CONCAT71(uStack_30f,uStack_310);
  puStack_138 = puStack_318;
  uStack_140 = uStack_320;
  uStack_128 = uStack_308;
  uStack_118 = uStack_2f8;
  pbStack_120 = pbStack_300;
  uStack_10f = uStack_2ef;
  uStack_108 = uStack_2e8;
  uStack_117 = uStack_2f7;
  uStack_110 = uStack_2f0;
  uStack_178 = uStack_358;
  pbStack_180 = pbStack_360;
  puStack_168 = puStack_348;
  uStack_170 = uStack_350;
  uStack_158 = uStack_338;
  puStack_160 = puStack_340;
  uStack_148 = uStack_328;
  puStack_150 = puStack_330;
  puStack_298 = puStack_188;
  uStack_2a0 = uStack_190;
  uStack_2a8 = uStack_198;
  puStack_2b0 = puStack_1a0;
  uStack_2b8 = uStack_1a8;
  puStack_2c0 = puStack_1b0;
  uStack_2d8 = uStack_1c8;
  pbStack_2e0 = pbStack_1d0;
  puStack_2c8 = puStack_1b8;
  uStack_2d0 = uStack_1c0;
  uStack_268 = 0;
  uStack_290 = uVar6;
  uStack_288 = uVar17;
  pbStack_280 = pbVar16;
  uStack_278 = param_4;
  uStack_270 = param_5;
  func_0x0001030799d4(&pbStack_360,&pbStack_580,0x112f37928,&UNK_10db80fb8);
  func_0x000103079a1c(&pbStack_2e0,0x112f37928,&UNK_10db80fb8);
  lVar13 = 0x112f37908;
  func_0x0001000285a8(0x112f37908,&UNK_10db80fa8);
  puVar10 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar13 + 0x24));
  lVar13 = 0;
  func_0x000107c5f37c();
  iVar4 = *(int *)(lVar13 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar13 = 0;
  func_0x000107c5f41c();
  puVar11 = (undefined8 *)((long)puVar10 + (long)iVar4);
  (**(code **)(*(long *)(lVar13 + -8) + 0x68))(puVar11,uVar2,lVar13);
  auVar19 = NEON_fmov(0x4010000000000000,8);
  puVar10[1] = auVar19._8_8_;
  *puVar10 = auVar19._0_8_;
  if (bVar3 == 0) {
    func_0x000103080b24();
  }
  else if (bVar3 == 1) {
    func_0x000103080b84();
  }
  else {
    func_0x000103080b9c();
  }
  uStack_4d0 = *puVar11;
  uStack_4c8 = puVar11[1];
  uStack_4b8 = puVar11[3];
  uStack_4c0 = puVar11[2];
  uStack_4b0 = puVar11[4];
  uStack_4a8 = puVar11[5];
  uStack_498 = puVar11[7];
  uStack_4a0 = puVar11[6];
  FUN_103080684();
  lVar13 = 0x112d50058;
  puVar9 = &UNK_10d916410;
  func_0x0001000285a8();
  *(undefined8 **)((long)puVar10 + (long)*(int *)(lVar13 + 0x34)) = puVar11;
  *(undefined2 *)((long)puVar10 + (long)*(int *)(lVar13 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  puStack_5e8 = puStack_138;
  uStack_5f0 = uStack_140;
  uStack_5d8 = uStack_128;
  uStack_5e0 = uStack_130;
  uStack_5c8 = CONCAT71(uStack_117,uStack_118);
  uStack_5b8 = CONCAT71(uStack_107,uStack_108);
  uStack_5c0 = CONCAT71(uStack_10f,uStack_110);
  pbStack_5d0 = pbStack_120;
  uStack_628 = uStack_178;
  pbStack_630 = pbStack_180;
  puStack_618 = puStack_168;
  uStack_620 = uStack_170;
  uStack_608 = uStack_158;
  puStack_610 = puStack_160;
  uStack_5f8 = uStack_148;
  puStack_600 = puStack_150;
  uStack_598 = (undefined1)uVar21;
  uStack_597 = (undefined7)((ulong)uVar21 >> 8);
  uStack_590 = (undefined1)uVar22;
  uStack_58f = (undefined7)((ulong)uVar22 >> 8);
  uStack_588 = 0;
  lVar14 = 0x112eff310;
  uStack_5b0 = uVar7;
  uStack_5a8 = uVar18;
  pbStack_5a0 = pbVar20;
  func_0x0001000285a8(0x112eff310,&UNK_10db7f070);
  plVar1 = (long *)((long)puVar10 + (long)*(int *)(lVar14 + 0x24));
  *plVar1 = lVar13;
  plVar1[1] = (long)puVar9;
  param_1[1] = uStack_628;
  *param_1 = pbStack_630;
  param_1[3] = puStack_618;
  param_1[2] = uStack_620;
  param_1[9] = puStack_5e8;
  param_1[8] = uStack_5f0;
  param_1[0xb] = uStack_5d8;
  param_1[10] = uStack_5e0;
  param_1[5] = uStack_608;
  param_1[4] = puStack_610;
  param_1[7] = uStack_5f8;
  param_1[6] = puStack_600;
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_588,uStack_58f);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_590,uStack_597);
  param_1[0x11] = uStack_5a8;
  param_1[0x10] = CONCAT71(uStack_5af,uStack_5b0);
  param_1[0x13] = CONCAT71(uStack_597,uStack_598);
  param_1[0x12] = pbStack_5a0;
  param_1[0xd] = uStack_5c8;
  param_1[0xc] = pbStack_5d0;
  param_1[0xf] = uStack_5b8;
  param_1[0xe] = uStack_5c0;
  puStack_538 = puStack_138;
  uStack_540 = uStack_140;
  uStack_528 = uStack_128;
  uStack_530 = uStack_130;
  uStack_518 = CONCAT71(uStack_117,uStack_118);
  uStack_508 = CONCAT71(uStack_107,uStack_108);
  uStack_510 = CONCAT71(uStack_10f,uStack_110);
  pbStack_520 = pbStack_120;
  uStack_578 = uStack_178;
  pbStack_580 = pbStack_180;
  puStack_568 = puStack_168;
  uStack_570 = uStack_170;
  uStack_558 = uStack_158;
  puStack_560 = puStack_160;
  uStack_548 = uStack_148;
  puStack_550 = puStack_150;
  uStack_4d8 = 0;
  uStack_500 = uVar7;
  uStack_4f8 = uVar18;
  pbStack_4f0 = pbVar20;
  uStack_4e8 = uVar21;
  uStack_4e0 = uVar22;
  func_0x0001030799d4(&pbStack_630,auStack_6e0,0x112f37918,&UNK_10db80fb0);
  ppbVar12 = &pbStack_580;
  func_0x000103079a1c(ppbVar12,0x112f37918,&UNK_10db80fb0);
  func_0x000107c5f6c8();
  ppbVar15 = ppbVar12;
  func_0x000107c5f6d4(0x3fc47ae147ae147b);
  func_0x000107c61574(ppbVar12);
  lVar13 = 0x112f378f8;
  func_0x0001000285a8(0x112f378f8,&UNK_10db80fa0);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar13 + 0x24));
  *plVar1 = (long)ppbVar15;
  plVar1[2] = 0;
  plVar1[1] = 0x4000000000000000;
  plVar1[3] = 0x4000000000000000;
  return;
}



/* Entry: 103078b18; end: 103078cf7;  */

void FUN_103078b18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000112f378a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37888;
  func_0x00010002969c(0x112f37888,&UNK_10db80e90);
  uVar2 = uVar1;
  func_0x000103078b90();
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1103489f8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f378a0 = puVar3;
  return;
}



/* Entry: 103078cf8; end: 103078f27;  */

void FUN_103078cf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
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
  
  lVar5 = 0;
  func_0x000107c5f37c();
  iVar4 = *(int *)(lVar5 + 0x14);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar5 = 0;
  func_0x000107c5f41c();
  puVar6 = (undefined8 *)((long)param_1 + (long)iVar4);
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))(puVar6,uVar3,lVar5);
  auVar11 = NEON_fmov(0x4000000000000000,8);
  param_1[1] = auVar11._8_8_;
  *param_1 = auVar11._0_8_;
  if (*(char *)(unaff_x20 + 0x49) == '\0') {
    func_0x000103080b24();
  }
  else if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    func_0x000103080b84();
  }
  else {
    func_0x000103080b9c();
  }
  uStack_90 = *puVar6;
  uStack_88 = puVar6[1];
  uStack_78 = puVar6[3];
  uStack_80 = puVar6[2];
  uStack_70 = puVar6[4];
  uStack_68 = puVar6[5];
  uStack_58 = puVar6[7];
  uStack_60 = puVar6[6];
  FUN_103080684();
  lVar5 = 0x112d50058;
  puVar8 = &UNK_10d916410;
  func_0x0001000285a8(0x112d50058,&UNK_10d916410);
  *(undefined8 **)((long)param_1 + (long)*(int *)(lVar5 + 0x34)) = puVar6;
  *(undefined2 *)((long)param_1 + (long)*(int *)(lVar5 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_c0,0x4024000000000000,0,0x4024000000000000,0,lVar5,puVar8);
  lVar5 = 0x112d50060;
  func_0x0001000285a8(0x112d50060,&UNK_10d916418);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  puVar6[1] = uStack_b8;
  *puVar6 = uStack_c0;
  puVar6[3] = uStack_a8;
  puVar6[2] = uStack_b0;
  puVar6[5] = uStack_98;
  puVar6[4] = uStack_a0;
  uVar10 = uStack_b0;
  uVar9 = func_0x000107c5f7e4();
  lVar5 = 0x112f378d0;
  func_0x0001000285a8(0x112f378d0,&UNK_10db80eb8);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar6 = 0x3fe921fb54442d18;
  puVar6[1] = uVar9;
  puVar6[2] = uVar10;
  func_0x000107c5f410();
  lVar7 = 0x112f378c0;
  func_0x0001000285a8(0x112f378c0,&UNK_10db80eb0);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *plVar1 = lVar5;
  plVar1[1] = (long)FUN_103078f7c;
  plVar1[2] = 0;
  uVar9 = 0xc014000000000000;
  uVar10 = 0xc014000000000000;
  if (*(char *)(unaff_x20 + 0x58) != '\0') {
    uVar10 = 0x4014000000000000;
  }
  lVar5 = 0x112f378b0;
  func_0x0001000285a8(0x112f378b0,&UNK_10db80ea8);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar6 = 0;
  puVar6[1] = uVar10;
  func_0x000107c5f568();
  uVar10 = func_0x000107c5f280(0x4028000000000000);
  lVar7 = 0x112f37888;
  func_0x0001000285a8(0x112f37888,&UNK_10db80e90);
  puVar2 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  *puVar2 = (char)lVar5;
  *(undefined8 *)(puVar2 + 8) = uVar10;
  *(undefined8 *)(puVar2 + 0x10) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  puVar2[0x28] = 0;
  return;
}



/* Entry: 103078f28; end: 103078f2b;  */

void FUN_103078f28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f378e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80ec8;
  func_0x000107c61520(&UNK_10db80ec8,&UNK_110604478);
  puRam0000000112f378e0 = puVar1;
  return;
}



/* Entry: 103078f2c; end: 103078f6b;  */

void FUN_103078f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f378e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db80ec8;
  func_0x000107c61520(&UNK_10db80ec8,&UNK_110604478);
  puRam0000000112f378e0 = puVar1;
  return;
}



/* Entry: 103078f6c; end: 103078f7b;  */

void FUN_103078f6c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e742940,1);
  return;
}



/* Entry: 103078f7c; end: 103078f9f;  */

void FUN_103078f7c(void)

{
  func_0x000107c5f410();
  func_0x000107c5f328();
  return;
}



/* Entry: 103078fa0; end: 103078fab;  */

void FUN_103078fa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 103078fac; end: 10307901f;  */

void FUN_103078fac(void)

{
  FUN_103078334();
  return;
}



/* Entry: 103079020; end: 10307905f;  */

void FUN_103079020(undefined8 *param_1)

{
  FUN_103059268(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],*(undefined1 *)(param_1 + 9));
  return;
}



/* Entry: 103079060; end: 103079223;  */

undefined8 * FUN_103079060(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar10 = param_2[8];
  uVar9 = *(undefined1 *)(param_2 + 9);
  FUN_103059198(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  param_1[8] = uVar10;
  *(undefined1 *)(param_1 + 9) = uVar9;
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Entry: 103079224; end: 1030792ab;  */

undefined8 * FUN_103079224(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar12 = param_2[8];
  uVar9 = *(undefined1 *)(param_2 + 9);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar4 = param_1[7];
  uVar8 = param_1[8];
  uVar10 = *(undefined1 *)(param_1 + 9);
  uVar13 = *param_2;
  uVar15 = param_2[3];
  uVar14 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  param_1[3] = uVar15;
  param_1[2] = uVar14;
  uVar13 = param_2[4];
  uVar15 = param_2[7];
  uVar14 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar13;
  param_1[7] = uVar15;
  param_1[6] = uVar14;
  param_1[8] = uVar12;
  *(undefined1 *)(param_1 + 9) = uVar9;
  FUN_103059268(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar10);
  *(undefined1 *)((long)param_1 + 0x49) = *(undefined1 *)((long)param_2 + 0x49);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  return param_1;
}



/* Entry: 1030792ac; end: 103079593;  */

int FUN_1030792ac(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x59) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 0x12) ^ 0xff;
  if (*(byte *)(param_1 + 0x12) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103079594; end: 103079a5b;  */

void FUN_103079594(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f378e8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37898;
  func_0x00010002969c(0x112f37898,&UNK_10db80ea0);
  uVar2 = uVar1;
  func_0x00010307962c();
  uVar3 = 0x112f37950;
  func_0x00010307995c(0x112f37950,0x112f378d8,&UNK_10db80ec0,
                      PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_110348ee0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f378e8 = puVar4;
  return;
}



/* Entry: 103079a5c; end: 103079a6f;  */

bool FUN_103079a5c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103079a70; end: 103079b5b;  */

void FUN_103079a70(void)

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



/* Entry: 103079b5c; end: 103079c23;  */

void FUN_103079b5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar3 = *unaff_x20;
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  func_0x000107c3e8ac(param_2,param_3,param_4,param_5,uVar3,uVar3);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ab30();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c5f5c4(&uStack_88,puVar2);
  param_1[1] = uStack_80;
  *param_1 = uStack_88;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  *(undefined1 *)(param_1 + 4) = uStack_68;
  return;
}



/* Entry: 103079c24; end: 103079c27;  */

void FUN_103079c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI5ShapePAAE4roleAA0C4RoleOvgZ_1103497d8)();
  return;
}



/* Entry: 103079c28; end: 103079c4f;  */

void FUN_103079c28(void)

{
  func_0x000107c5f710();
  return;
}



/* Entry: 103079c50; end: 103079c57;  */

void FUN_103079c50(void)

{
  return;
}



/* Entry: 103079c58; end: 103079ccb;  */

code * FUN_103079c58(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x28,0xe8c7);
  }
  *param_1 = lVar1;
  lVar2 = lVar1;
  func_0x000107c5f26c();
  *(long *)(lVar1 + 0x20) = lVar2;
  return FUN_103079ccc;
}



/* Entry: 103079ccc; end: 103079cf7;  */

void FUN_103079ccc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x20))(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 103079cf8; end: 103079cfb;  */

void FUN_103079cf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb5de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI10AnimatablePA2A05EmptyC4DataV0cE0RtzrlE05_makeC05value6inputsyAA11_GraphValueVyxGz_AA01_I6InputsVtFZ_1103486a0
  )();
  return;
}



/* Entry: 103079cfc; end: 103079d9b;  */

void FUN_103079cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010307d92c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb6bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI5ShapePAAE9_makeView4view6inputsAA01_E7OutputsVAA11_GraphValueVyxG_AA01_E6InputsVtFZ_1103497e8
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 103079d9c; end: 103079dd3;  */

void FUN_103079d9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x00010307d92c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb6bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI5ShapePAAE4bodyAA01_C4ViewVyxAA15ForegroundStyleVGvg_1103497c8)
            (param_1,param_2,uVar1);
  return;
}



/* Entry: 103079dd4; end: 103079e07;  */

void FUN_103079dd4(undefined8 param_1)

{
  func_0x000107c5f7c8(0x3fd6666666666666,0x3fe999999999999a,0);
  uRam0000000113806b10 = param_1;
  return;
}



/* Entry: 103079e08; end: 10307a197;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_103079e08(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined1 auStack_288 [8];
  long alStack_280 [2];
  long lStack_270;
  undefined8 auStack_268 [9];
  undefined8 auStack_220 [6];
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
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar2 = 0x112f37960;
  func_0x0001000285a8(0x112f37960,&UNK_10db81038);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)&lStack_270 - extraout_x8);
  lVar3 = 0x112f37968;
  func_0x0001000285a8(0x112f37968,&UNK_10db81040);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar8 - extraout_x8_00;
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
  lVar4 = 0;
  func_0x000107c5f41c();
  puVar5 = puVar8;
  (**(code **)(*(long *)(lVar4 + -8) + 0x68))(puVar8,uVar1,lVar4);
  func_0x000103080c08();
  uStack_a8 = puVar5[1];
  uStack_b0 = *puVar5;
  uStack_98 = puVar5[3];
  uStack_a0 = puVar5[2];
  uStack_88 = puVar5[5];
  uStack_90 = puVar5[4];
  uStack_78 = puVar5[7];
  uStack_80 = puVar5[6];
  FUN_103080684();
  lVar4 = 0x112e02d80;
  puVar9 = &UNK_10d9dee00;
  func_0x0001000285a8(0x112e02d80,&UNK_10d9dee00);
  *(undefined8 **)((long)puVar8 + (long)*(int *)(lVar4 + 0x34)) = puVar5;
  *(undefined2 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x38)) = 0x100;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(auStack_220,0x4045000000000000,0,0x4014000000000000,0,lVar4,puVar9);
  lVar4 = 0x112f37848;
  puVar9 = &UNK_10db81050;
  func_0x0001000285a8();
  puVar5 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x24));
  puVar5[1] = auStack_220[1];
  *puVar5 = auStack_220[0];
  puVar5[3] = auStack_220[3];
  puVar5[2] = auStack_220[2];
  puVar5[5] = auStack_220[5];
  puVar5[4] = auStack_220[4];
  func_0x000107c5f7ac();
  *(long *)(lVar10 + -0x10) = lVar4;
  *(undefined **)(lVar10 + -8) = puVar9;
  *(undefined1 *)(lVar10 + -0x18) = 1;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined1 *)(lVar10 + -0x28) = 1;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  func_0x000107c5f388(&uStack_1f0,0,1,0,1,0x7ff0000000000000,0,0,1);
  lVar4 = 0x112f37970;
  puVar9 = &UNK_10db81058;
  func_0x0001000285a8(0x112f37970,&UNK_10db81058);
  puVar5 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar4 + 0x24));
  puVar5[9] = uStack_1a8;
  puVar5[8] = uStack_1b0;
  puVar5[0xb] = uStack_198;
  puVar5[10] = uStack_1a0;
  puVar5[0xd] = uStack_188;
  puVar5[0xc] = uStack_190;
  puVar5[1] = uStack_1e8;
  *puVar5 = uStack_1f0;
  puVar5[3] = uStack_1d8;
  puVar5[2] = uStack_1e0;
  puVar5[5] = uStack_1c8;
  puVar5[4] = uStack_1d0;
  puVar5[7] = uStack_1b8;
  puVar5[6] = uStack_1c0;
  func_0x000107c5f7ac();
  func_0x000107c5f2d4(&uStack_180,0,1,0x4037000000000000,0,lVar4,puVar9);
  puVar5 = (undefined8 *)0x112f37978;
  func_0x0001000285a8(0x112f37978,&UNK_10db81060);
  puVar6 = (undefined8 *)((long)puVar8 + (long)*(int *)((long)puVar5 + 0x24));
  puVar6[1] = uStack_178;
  *puVar6 = uStack_180;
  puVar6[3] = uStack_168;
  puVar6[2] = uStack_170;
  puVar6[5] = uStack_158;
  puVar6[4] = uStack_160;
  *(undefined1 *)((long)puVar8 + (long)*(int *)(lVar2 + 0x24)) = 0;
  func_0x00010307fe10();
  uStack_f8 = puVar5[1];
  uStack_100 = *puVar5;
  uStack_d8 = puVar5[5];
  uStack_e0 = puVar5[4];
  uStack_c8 = puVar5[7];
  uStack_d0 = puVar5[6];
  uStack_c0 = puVar5[8];
  uStack_e8 = puVar5[3];
  uStack_f0 = puVar5[2];
  puVar6 = &uStack_100;
  puVar5 = &uStack_150;
  func_0x000103059c3c(puVar6,puVar5);
  FUN_10307ff24();
  puVar7 = &uStack_100;
  func_0x000103059c78(puVar7);
  FUN_10307a198();
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5f640(lVar10,puVar6,puVar5,0,PTR___swiftEmptyArrayStorage_11034f1c8,lVar2,puVar7);
  func_0x000107c6142c(puVar5);
  func_0x00010307d630(puVar8,0x112f37960,&UNK_10db81038);
  FUN_10307fec0();
  uStack_148 = puVar8[1];
  uStack_150 = *puVar8;
  uStack_128 = puVar8[5];
  uStack_130 = puVar8[4];
  uStack_118 = puVar8[7];
  uStack_120 = puVar8[6];
  uStack_110 = puVar8[8];
  uStack_138 = puVar8[3];
  uStack_140 = puVar8[2];
  puVar5 = &uStack_150;
  lVar2 = (long)auStack_268;
  func_0x000103059c3c(puVar5,lVar2);
  FUN_10307ff24();
  func_0x000103059c78(&uStack_150);
  func_0x000107c5f344(param_1,puVar5,lVar2,0,puVar9,lVar3);
  func_0x000107c6142c(lVar2);
  func_0x00010307d630(lVar10,0x112f37968,&UNK_10db81040);
  return;
}



/* Entry: 10307a198; end: 10307a3b7;  */

void FUN_10307a198(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112f37980 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f37960;
  func_0x00010002969c(0x112f37960,&UNK_10db81038);
  uVar2 = uVar1;
  func_0x00010307a230();
  uVar3 = 0x112d4fe68;
  FUN_10307d85c(0x112d4fe68,0x112d4fe70,&UNK_10da5a660,
                PTR___s7SwiftUI21_ContentShapeModifierVyxGAA04ViewE0AAMc_110348fd8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112f37980 = puVar4;
  return;
}



/* Entry: 10307a3b8; end: 10307a3d3;  */

void FUN_10307a3b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 10307a3d4; end: 10307a447;  */

void FUN_10307a3d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f379a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db81070;
  func_0x000107c61520(&UNK_10db81070,&UNK_110604618);
  puRam0000000112f379a0 = puVar1;
  return;
}



/* Entry: 10307a448; end: 10307a5cb;  */

void FUN_10307a448(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e7429a0,1);
  return;
}



/* Entry: 10307a5cc; end: 10307a653;  */

void FUN_10307a5cc(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    uVar2 = 0x112d500b8;
    FUN_10307d688(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                  PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                        ,param_2,&uStack_40);
    *param_1 = (long)puVar3;
  }
  return;
}



/* Entry: 10307a654; end: 10307a65b;  */

void FUN_10307a654(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 10307a65c; end: 10307a6d3;  */

long FUN_10307a65c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10307a6d4; end: 10307a77b;  */

undefined8 * FUN_10307a6d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_2;
  uVar2 = *(undefined1 *)(param_2 + 1);
  FUN_10305a4a0(uVar4,uVar2);
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar2;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  uVar5 = param_2[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar4 = param_2[8];
  uVar3 = param_2[9];
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  uVar3 = param_2[10];
  param_1[10] = uVar3;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  return param_1;
}



/* Entry: 10307a77c; end: 10307a86b;  */

undefined8 * FUN_10307a77c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10305a4a0(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10305a544(uVar3,uVar2);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  func_0x000107c61574(uVar3);
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  uVar4 = param_1[6];
  uVar3 = param_2[6];
  uVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar5;
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(uVar4);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar3);
  param_1[9] = param_2[9];
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar3);
  return param_1;
}


