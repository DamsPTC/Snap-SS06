/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102deae5c; end: 102deaedf;  */

void FUN_102deae5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102de9664(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102deaee0; end: 102deaf1f;  */

void FUN_102deaee0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000107c5eec8(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102deaf20; end: 102deaf27;  */

void FUN_102deaf20(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de91b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102deaf28; end: 102deaf4f;  */

void FUN_102deaf28(void)

{
  func_0x000102deaec8();
  return;
}



/* Entry: 102deaf50; end: 102deaf63;  */

void FUN_102deaf50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102deaf64,0,0);
  return;
}



/* Entry: 102deaf64; end: 102deafbb;  */

void FUN_102deaf64(undefined8 param_1)

{
  long unaff_x22;
  
  FUN_102ddc4b0();
  func_0x000107c613f8(&UNK_1105d4120,param_1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102deafb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102deafbc; end: 102deafef;  */

void FUN_102deafbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102deafe4,0,0);
  return;
}



/* Entry: 102deaff0; end: 102deb003;  */

void FUN_102deaff0(void)

{
  func_0x000107c5ea58();
  return;
}



/* Entry: 102deb004; end: 102deb013;  */

undefined1  [16] FUN_102deb004(void)

{
  return ZEXT816(0x1105d3fb0);
}



/* Entry: 102deb014; end: 102df029b;  */

long FUN_102deb014(void)

{
  byte bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  ulong uVar13;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_1f0 [8];
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_130;
  code *pcStack_128;
  long lStack_120;
  undefined4 uStack_114;
  code *pcStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  undefined1 *puStack_d8;
  code *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  undefined4 uStack_94;
  undefined8 ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = 0;
  func_0x000107c5ef14();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar6 = 0;
  puStack_d8 = auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fad8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar12 = (long)(auStack_1f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  lStack_e0 = lVar12;
  func_0x000107c5ea84();
  lStack_190 = *(long *)(lVar6 + -8);
  lStack_148 = *(undefined8 *)(lStack_190 + 0x40);
  lStack_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_140 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_140;
  lStack_178 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x13;
  uVar7 = 0x112f19898;
  uStack_150 = lVar12;
  func_0x0001000285a8(0x112f19898,&UNK_10db50270);
  uVar8 = 0;
  lStack_130 = uVar7;
  func_0x000107c5ea54();
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_138 = uVar8;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,uVar8,0x102de61dc,0);
  lVar6 = 0x112f19d50;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19d50,&UNK_10db51660);
  lVar11 = 0x112f19d58;
  func_0x0001000285a8(0x112f19d58,&UNK_10db51668);
  uStack_e8 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  lStack_100 = uStack_e8 * 4;
  func_0x000107c613fc(lVar6,uVar15 + uStack_e8 * 5,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = 10;
  *(undefined8 *)(lVar6 + 0x10) = 5;
  lStack_f0 = lVar6 + uVar15;
  lVar11 = 0x112f19d60;
  uStack_158 = lVar6;
  func_0x0001000285a8(0x112f19d60,&UNK_10db51670);
  pcStack_d0 = *(code **)(*(long *)(lVar11 + -8) + 0x40);
  lVar20 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = extraout_x12_00 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uVar13;
  uStack_f8 = uVar13;
  FUN_102de5d00();
  func_0x000107c5ea3c(lVar12,7,1,&UNK_1105d38e8);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  lVar10 = 0;
  func_0x000107c5ea5c();
  lVar6 = *(long *)(lVar10 + -8);
  lVar19 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = lVar19 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar12 - uVar15;
  uStack_94 = *(undefined4 *)
               PTR___s10AppIntents0A19ShortcutPhraseTokenO15applicationNameyA2CmFWC_110345f18;
  pcStack_b0 = *(code **)(lVar6 + 0x68);
  uStack_b8 = uVar15;
  (*pcStack_b0)(lVar14,uStack_94,lVar10);
  func_0x000107c5ea34(lVar14,lVar11);
  pcStack_a0 = *(code **)(lVar6 + 8);
  (*pcStack_a0)(lVar14,lVar10);
  func_0x000107c5ea38(0x6172656d614320,0xe700000000000000,lVar11);
  lVar6 = lStack_f0;
  func_0x000107c5ea40(lStack_f0,lVar12,&UNK_1105d38e8,lVar20);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uVar13;
  func_0x000107c5ea3c(lVar14,0xc,1,&UNK_1105d38e8,lVar20);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  lStack_a8 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar19 = lVar14 - uVar15;
  (*pcStack_b0)(lVar19,uStack_94,lVar10);
  func_0x000107c5ea34(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar10);
  func_0x000107c5ea38(0x6172656d614320,0xe700000000000000,lVar11);
  uVar13 = uStack_e8;
  uStack_160 = lVar20;
  func_0x000107c5ea40(lVar6 + uStack_e8,lVar14,&UNK_1105d38e8,lVar20);
  lStack_108 = uVar13 << 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_f8;
  lVar19 = lVar19 - uStack_f8;
  func_0x000107c5ea3c(lVar19,5,1,&UNK_1105d38e8,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = uStack_b8;
  lVar12 = lVar19 - uStack_b8;
  lStack_c0 = lVar10;
  (*pcVar18)(lVar12,uVar5,lVar10);
  func_0x000107c5ea34(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar10);
  func_0x000107c5ea38(0x70616e5320,0xe500000000000000,lVar11);
  lVar20 = lStack_f0;
  lVar6 = lStack_108;
  uVar13 = uStack_160;
  func_0x000107c5ea40(lStack_f0 + lStack_108,lVar19,&UNK_1105d38e8,uStack_160);
  uStack_e8 = lVar6 + uStack_e8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uVar15;
  func_0x000107c5ea3c(lVar12,8,1,&UNK_1105d38e8,uVar13);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar14 = lVar12 - uVar16;
  (*pcStack_b0)(lVar14,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar6);
  func_0x000107c5ea38(0x6572757470616320,0xe800000000000000,lVar11);
  func_0x000107c5ea40(lVar20 + uStack_e8,lVar12,&UNK_1105d38e8,uVar13);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_f8;
  func_0x000107c5ea3c(lVar14,7,1,&UNK_1105d38e8,uVar13);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lStack_c0;
  lVar19 = lVar14 - uVar16;
  (*pcVar18)(lVar19,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar10);
  func_0x000107c5ea38(0x6569666c657320,0xe700000000000000,lVar11);
  func_0x000107c5ea40(lVar20 + lStack_100,lVar14,&UNK_1105d38e8,uVar13);
  lVar6 = 0x112f19870;
  func_0x0001000285a8(0x112f19870,&UNK_10db50248);
  lStack_f0 = *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  uStack_e8 = extraout_x12_01 + 0xfU & 0xfffffffffffffff0;
  lVar19 = lVar19 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x6172656d6143,0xe600000000000000);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  lVar11 = 0;
  func_0x000107c5ed38();
  lStack_100 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lStack_108 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_f8 = extraout_x12_02 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar19 - uStack_f8;
  uStack_114 = *(undefined4 *)
                PTR___s10Foundation23LocalizedStringResourceV17BundleDescriptionO4mainyA2EmFWC_110345330
  ;
  pcStack_110 = *(code **)(extraout_x8_01 + 0x68);
  (*pcStack_110)(lVar12);
  func_0x000107c5ed40(lVar19,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar12,0,0,0x100);
  lVar6 = 0;
  func_0x000107c5ed3c();
  pcStack_128 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  lStack_120 = lVar6;
  (*pcStack_128)(lVar19,0,1,lVar6);
  uVar15 = uStack_150;
  func_0x000107c5ea80(uStack_150,&pppuStack_90,uStack_158,lVar19,0x662e6172656d6163,
                      0xeb000000006c6c69,&UNK_1105d38e8,uVar13);
  func_0x000107c5ea48(lStack_178,uVar15);
  pcStack_d0 = *(code **)(lStack_190 + 8);
  (*pcStack_d0)(uVar15,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_140;
  lStack_180 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_03;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_198 = lVar12;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,uVar15,0x102de793c,0);
  lVar6 = 0x112f19d68;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19d68,&UNK_10db51680);
  lVar11 = 0x112f19d70;
  func_0x0001000285a8(0x112f19d70,&UNK_10db51688);
  uStack_158 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  lStack_170 = uStack_158 * 8;
  func_0x000107c613fc(lVar6,uVar15 + uStack_158 * 9,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = 0x12;
  *(undefined8 *)(lVar6 + 0x10) = 9;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0x112f19d78;
  lStack_1a0 = lVar6;
  func_0x0001000285a8(0x112f19d78,&UNK_10db51690);
  lStack_168 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar6 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_150 = extraout_x12_04 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_150;
  FUN_102de7468();
  func_0x000107c5ea3c(lVar12,4,1,&UNK_1105d3c08,lVar6);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  uVar13 = uStack_b8;
  lVar14 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar14,uStack_94,lVar10);
  func_0x000107c5ea34(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar10);
  func_0x000107c5ea38(0x70614d20,0xe400000000000000,lVar11);
  lStack_188 = lVar6;
  uStack_160 = lVar20;
  func_0x000107c5ea40(lVar20,lVar12,&UNK_1105d3c08,lVar6);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_150;
  func_0x000107c5ea3c(lVar14,9,1,&UNK_1105d3c08,lVar6);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  lVar12 = lVar14 - uVar13;
  (*pcStack_b0)(lVar12,uVar5,lVar10);
  func_0x000107c5ea34(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar10);
  func_0x000107c5ea38(0x70614d20,0xe400000000000000,lVar11);
  uVar13 = uStack_158;
  lVar10 = lStack_188;
  func_0x000107c5ea40(lVar20 + uStack_158,lVar14,&UNK_1105d3c08,lStack_188);
  lStack_1b0 = uVar13 << 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_150;
  func_0x000107c5ea3c(lVar12,9,1,&UNK_1105d3c08,lVar10);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar20 = lVar12 - uStack_b8;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar20,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar20,lVar6);
  func_0x000107c5ea38(0x614d2070616e5320,0xe900000000000070,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b0;
  func_0x000107c5ea40(uStack_160 + lStack_1b0,lVar12,&UNK_1105d3c08,lVar10);
  lStack_1b0 = lVar6 + uStack_158;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_150;
  lVar20 = lVar20 - uStack_150;
  func_0x000107c5ea3c(lVar20,9,1,&UNK_1105d3c08,lVar10);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  lVar12 = lStack_c0;
  lVar6 = lVar20 - uVar16;
  (*pcStack_b0)(lVar6,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar6,lVar11);
  (*pcVar18)(lVar6,lVar12);
  func_0x000107c5ea38(0x6f697461636f6c20,0xe90000000000006e,lVar11);
  func_0x000107c5ea40(uVar13 + lStack_1b0,lVar20,&UNK_1105d3c08,lVar10);
  uVar13 = uStack_158;
  lVar14 = uStack_158 * 4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - uVar15;
  func_0x000107c5ea3c(lVar6,0x14,1,&UNK_1105d3c08,lVar10);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_b8;
  lVar10 = lVar6 - uStack_b8;
  (*pcStack_b0)(lVar10,uVar5,lVar12);
  func_0x000107c5ea34(lVar10,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar10,lVar12);
  func_0x000107c5ea38(0xd000000000000014,0x800000010f10e3d0,lVar11);
  lVar20 = lStack_188;
  func_0x000107c5ea40(uStack_160 + lVar14,lVar6,&UNK_1105d3c08,lStack_188);
  lStack_1b0 = uVar13 * 5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uStack_150;
  func_0x000107c5ea3c(lVar10,0x15,1,&UNK_1105d3c08,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar10 - uVar15;
  (*pcStack_b0)(lVar6,uStack_94,lVar12);
  func_0x000107c5ea34(lVar6,lVar11);
  (*pcVar18)(lVar6,lVar12);
  func_0x000107c5ea38(0xd000000000000015,0x800000010f10e3f0,lVar11);
  uVar13 = uStack_160;
  func_0x000107c5ea40(uStack_160 + lStack_1b0,lVar10,&UNK_1105d3c08,lVar20);
  lStack_1b0 = uVar13 + uStack_158 * 6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_150;
  lVar6 = lVar6 - uStack_150;
  func_0x000107c5ea3c(lVar6,7,1,&UNK_1105d3c08,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  uVar15 = uStack_b8;
  lVar10 = lVar6 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lVar12);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcStack_a0)(lVar10,lVar12);
  func_0x000107c5ea38(0x736563616c7020,0xe700000000000000,lVar11);
  func_0x000107c5ea40(lStack_1b0,lVar6,&UNK_1105d3c08,lVar20);
  uStack_158 = lStack_170 - uStack_158;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uVar13;
  func_0x000107c5ea3c(lVar10,7,1,&UNK_1105d3c08,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  lVar6 = lVar10 - uVar15;
  (*pcVar18)(lVar6,uStack_94,lVar12);
  func_0x000107c5ea34(lVar6,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar6,lVar12);
  func_0x000107c5ea38(0x79627261656e20,0xe700000000000000,lVar11);
  uVar13 = uStack_160;
  func_0x000107c5ea40(uStack_160 + uStack_158,lVar10,&UNK_1105d3c08,lVar20);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar6 - uStack_150;
  func_0x000107c5ea3c(lVar6,0x10,1,&UNK_1105d3c08,lVar20);
  func_0x000107c5ea38(0xd000000000000010,0x800000010f10e410,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar6 - uVar15;
  (*pcVar18)(lVar14,uVar5,lVar12);
  func_0x000107c5ea34(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  func_0x000107c5ea40(uVar13 + lStack_170,lVar6,&UNK_1105d3c08,lVar20);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  lVar14 = lVar14 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x70614d,0xe300000000000000);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - uStack_f8;
  (*pcStack_110)(lVar10,uStack_114,lStack_108);
  func_0x000107c5ed40(lVar14,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar10,0,0,0x100);
  (*pcStack_128)(lVar14,0,1,lStack_120);
  lVar6 = lStack_198;
  func_0x000107c5ea80(lStack_198,&pppuStack_90,lStack_1a0,lVar14,0x6e6f697461636f6c,
                      0xed00006c6c69662e,&UNK_1105d3c08,lVar20);
  func_0x000107c5ea48(lStack_180,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uStack_140;
  lStack_188 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_05;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_198 = lVar10;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,lVar6,0x102de7f1c,0);
  lVar6 = 0x112f19d80;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19d80,&UNK_10db51698);
  lVar11 = 0x112f19d88;
  func_0x0001000285a8(0x112f19d88,&UNK_10db516a0);
  lStack_168 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar16 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar6,uVar16 + lStack_168 * 10,uVar13 | 7);
  uStack_1a8 = 0x14;
  lStack_1b0 = 10;
  *(undefined8 *)(lVar6 + 0x18) = 0x14;
  *(undefined8 *)(lVar6 + 0x10) = 10;
  lVar20 = lVar6 + uVar16;
  lVar11 = 0x112f19d90;
  lStack_1a0 = lVar6;
  uStack_150 = lVar20;
  func_0x0001000285a8(0x112f19d90,&UNK_10db516a8);
  lVar19 = *(long *)(*(long *)(lVar11 + -8) + 0x40);
  lVar6 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_158 = lVar19 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uStack_158;
  FUN_102de7a3c();
  uStack_160 = lVar6;
  func_0x000107c5ea3c(lVar10,9,1,&UNK_1105d3cd0,lVar6);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar14 = lVar10 - uVar15;
  (*pcStack_b0)(lVar14,uStack_94,lVar12);
  func_0x000107c5ea34(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar12);
  func_0x000107c5ea38(0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar13 = uStack_160;
  func_0x000107c5ea40(lVar20,lVar10,&UNK_1105d3cd0,uStack_160);
  lStack_170 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_158;
  func_0x000107c5ea3c(lVar14,0xe,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_c0;
  lVar20 = lVar14 - uVar15;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar6);
  func_0x000107c5ea38(0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar16 = uStack_150;
  uVar13 = uStack_160;
  lVar6 = lStack_168;
  func_0x000107c5ea40(uStack_150 + lStack_168,lVar14,&UNK_1105d3cd0,uStack_160);
  lStack_1b8 = lVar6 << 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_158;
  lVar20 = lVar20 - uStack_158;
  func_0x000107c5ea3c(lVar20,0x11,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0x20796d206e65706f,0xe800000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar3 = uStack_b8;
  lVar6 = lStack_c0;
  lVar10 = lVar20 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcStack_a0)(lVar10,lVar6);
  func_0x000107c5ea38(0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b8;
  func_0x000107c5ea40(uVar16 + lStack_1b8,lVar20,&UNK_1105d3cd0,uStack_160);
  lVar20 = lStack_168;
  lStack_1b8 = lVar6 + lStack_168;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uVar15;
  func_0x000107c5ea3c(lVar10,7,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar3;
  (*pcVar18)(lVar12,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  func_0x000107c5ea38(0x736f746f687020,0xe700000000000000,lVar11);
  uVar15 = uStack_150;
  func_0x000107c5ea40(uStack_150 + lStack_1b8,lVar10,&UNK_1105d3cd0,uVar13);
  lStack_1b8 = lVar20 << 2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_158;
  func_0x000107c5ea3c(lVar12,0xc,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar10 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  func_0x000107c5ea38(0x5320646576617320,0xec0000007370616e,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b8;
  func_0x000107c5ea40(uVar15 + lStack_1b8,lVar12,&UNK_1105d3cd0,uStack_160);
  lStack_1b8 = lVar6 + lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_158;
  lVar10 = lVar10 - uStack_158;
  func_0x000107c5ea3c(lVar10,0xc,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar16;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  func_0x000107c5ea38(0x206172656d616320,0xec0000006c6c6f72,lVar11);
  uVar16 = uStack_150;
  func_0x000107c5ea40(uStack_150 + lStack_1b8,lVar10,&UNK_1105d3cd0,uVar13);
  lStack_1b8 = uVar16 + lVar20 * 6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uVar15;
  func_0x000107c5ea3c(lVar12,0xc,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0x20796d,0xe300000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar20 = lVar12 - uStack_b8;
  (*pcVar18)(lVar20,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar6);
  func_0x000107c5ea38(0x6569726f6d654d20,0xe900000000000073,lVar11);
  uVar13 = uStack_160;
  func_0x000107c5ea40(lStack_1b8,lVar12,&UNK_1105d3cd0,uStack_160);
  lStack_1b8 = lStack_168 * 8;
  lStack_1d0 = lStack_168 * 7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_158;
  lVar20 = lVar20 - uStack_158;
  func_0x000107c5ea3c(lVar20,0xb,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  lVar10 = lVar20 - uVar16;
  (*pcStack_b0)(lVar10,uVar5,lVar6);
  func_0x000107c5ea34(lVar10,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar10,lVar6);
  func_0x000107c5ea38(0x61626873616c4620,0xeb00000000736b63,lVar11);
  func_0x000107c5ea40(uStack_150 + lStack_1d0,lVar20,&UNK_1105d3cd0,uVar13);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uVar15;
  func_0x000107c5ea3c(lVar10,0x10,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar16;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar6);
  func_0x000107c5ea38(0x61626873616c4620,0xeb00000000736b63,lVar11);
  uVar13 = uStack_160;
  lVar6 = lStack_1b8;
  func_0x000107c5ea40(uStack_150 + lStack_1b8,lVar10,&UNK_1105d3cd0,uStack_160);
  lStack_168 = lVar6 + lStack_168;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_158;
  func_0x000107c5ea3c(lVar12,0xe,1,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea38(0x20796d,0xe300000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lStack_c0;
  lVar20 = lVar12 - uVar16;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar10);
  func_0x000107c5ea38(0x61626873616c4620,0xeb00000000736b63,lVar11);
  func_0x000107c5ea40(uStack_150 + lStack_168,lVar12,&UNK_1105d3cd0,uVar13);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  lVar20 = lVar20 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x736569726f6d654d,0xe800000000000000);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar20 - uStack_f8;
  (*pcStack_110)(lVar12,uStack_114,lStack_108);
  func_0x000107c5ed40(lVar20,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar12,0,0,0x100);
  (*pcStack_128)(lVar20,0,1,lStack_120);
  lVar6 = lStack_198;
  func_0x000107c5ea80(lStack_198,&pppuStack_90,lStack_1a0,lVar20,0xd00000000000001e,
                      0x800000010f10e430,&UNK_1105d3cd0,uVar13);
  func_0x000107c5ea48(lStack_188,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_140;
  lStack_198 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_06;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_1a0 = lVar12;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,lVar6,0x102de7368,0);
  lVar6 = 0x112f19d98;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19d98,&UNK_10db516b0);
  lVar11 = 0x112f19da0;
  func_0x0001000285a8(0x112f19da0,&UNK_10db516b8);
  uStack_160 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar6,uVar15 + uStack_160 * 10,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = uStack_1a8;
  *(long *)(lVar6 + 0x10) = lStack_1b0;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0x112f19da8;
  lStack_1b8 = lVar6;
  func_0x0001000285a8(0x112f19da8,&UNK_10db516c0);
  lVar19 = *(long *)(*(long *)(lVar11 + -8) + 0x40);
  lVar6 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_150 = lVar19 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_150;
  FUN_102de6e8c();
  uStack_158 = lVar6;
  func_0x000107c5ea3c(lVar12,7,1,&UNK_1105d3b40,lVar6);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  uVar15 = uStack_b8;
  lVar14 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar14,uStack_94,lVar10);
  func_0x000107c5ea34(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar10);
  func_0x000107c5ea38(0x7365736e654c20,0xe700000000000000,lVar11);
  uVar13 = uStack_158;
  lStack_170 = lVar20;
  func_0x000107c5ea40(lVar20,lVar12,&UNK_1105d3b40,uStack_158);
  lStack_168 = lVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_150;
  func_0x000107c5ea3c(lVar14,0xc,1,&UNK_1105d3b40,uVar13);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar10 = lVar14 - uVar15;
  (*pcStack_b0)(lVar10,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  func_0x000107c5ea38(0x7365736e654c20,0xe700000000000000,lVar11);
  uVar15 = uStack_158;
  uVar13 = uStack_160;
  func_0x000107c5ea40(lVar20 + uStack_160,lVar14,&UNK_1105d3b40,uStack_158);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uStack_150;
  func_0x000107c5ea3c(lVar10,5,1,&UNK_1105d3b40,uVar15);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  uVar3 = uStack_b8;
  lVar12 = lVar10 - uStack_b8;
  (*pcVar18)(lVar12,uStack_94,lVar6);
  func_0x000107c5ea34(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  func_0x000107c5ea38(0x736e654c20,0xe500000000000000,lVar11);
  uVar16 = uStack_158;
  lVar20 = lStack_170;
  func_0x000107c5ea40(lStack_170 + uVar13 * 2,lVar10,&UNK_1105d3b40,uStack_158);
  uVar15 = uStack_160;
  lStack_1d0 = uVar13 * 2 + uStack_160;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_150;
  func_0x000107c5ea3c(lVar12,8,1,&UNK_1105d3b40,uVar16);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar10 = lVar12 - uVar3;
  (*pcStack_b0)(lVar10,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  func_0x000107c5ea38(0x737265746c696620,0xe800000000000000,lVar11);
  func_0x000107c5ea40(lVar20 + lStack_1d0,lVar12,&UNK_1105d3b40,uVar16);
  lStack_1d0 = uVar15 << 2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_150;
  lVar10 = lVar10 - uStack_150;
  func_0x000107c5ea3c(lVar10,0xd,1,&UNK_1105d3b40,uVar16);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - uStack_b8;
  (*pcVar18)(lVar12,uStack_94,lVar6);
  func_0x000107c5ea34(lVar12,lVar11);
  (*pcStack_a0)(lVar12,lVar6);
  func_0x000107c5ea38(0x737265746c696620,0xe800000000000000,lVar11);
  lVar6 = lStack_1d0;
  func_0x000107c5ea40(lVar20 + lStack_1d0,lVar10,&UNK_1105d3b40,uVar16);
  uVar13 = uStack_160;
  lStack_1d0 = lVar6 + uStack_160;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uVar15;
  func_0x000107c5ea3c(lVar12,8,1,&UNK_1105d3b40,uVar16);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar16 = uStack_b8;
  lVar6 = lStack_c0;
  lVar10 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcStack_a0)(lVar10,lVar6);
  func_0x000107c5ea38(0x7374636566666520,0xe800000000000000,lVar11);
  uVar15 = uStack_158;
  func_0x000107c5ea40(lVar20 + lStack_1d0,lVar12,&UNK_1105d3b40,uStack_158);
  lStack_1d0 = lVar20 + uVar13 * 6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_150;
  lVar10 = lVar10 - uStack_150;
  func_0x000107c5ea3c(lVar10,3,1,&UNK_1105d3b40,uVar15);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_c0;
  lVar12 = lVar10 - uVar16;
  (*pcVar18)(lVar12,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  func_0x000107c5ea38(0x726120,0xe300000000000000,lVar11);
  func_0x000107c5ea40(lStack_1d0,lVar10,&UNK_1105d3b40,uVar15);
  lStack_1d0 = uStack_160 * 8;
  lStack_1d8 = uStack_160 * 7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uVar13;
  func_0x000107c5ea3c(lVar12,0x12,1,&UNK_1105d3b40,uVar15);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar15 = uStack_b8;
  lVar10 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar10,uStack_94,lVar6);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  func_0x000107c5ea38(0xd000000000000012,0x800000010f10e450,lVar11);
  uVar13 = uStack_158;
  lVar20 = lStack_170;
  func_0x000107c5ea40(lStack_170 + lStack_1d8,lVar12,&UNK_1105d3b40,uStack_158);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uStack_150;
  func_0x000107c5ea3c(lVar10,0xd,1,&UNK_1105d3b40,uVar13);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar10 - uVar15;
  (*pcVar18)(lVar12,uVar5,lVar6);
  func_0x000107c5ea34(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar6);
  func_0x000107c5ea38(0x6665206563616620,0xed00007374636566,lVar11);
  uVar13 = uStack_158;
  lVar6 = lStack_1d0;
  func_0x000107c5ea40(lVar20 + lStack_1d0,lVar10,&UNK_1105d3b40,uStack_158);
  lVar6 = lVar6 + uStack_160;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_150;
  func_0x000107c5ea3c(lVar12,0x12,1,&UNK_1105d3b40,uVar13);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lStack_c0;
  lVar20 = lVar12 - uVar15;
  (*pcVar18)(lVar20,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar10);
  func_0x000107c5ea38(0x6665206563616620,0xed00007374636566,lVar11);
  func_0x000107c5ea40(lStack_170 + lVar6,lVar12,&UNK_1105d3b40,uVar13);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  lVar20 = lVar20 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x7365736e654c,0xe600000000000000);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar20 - uStack_f8;
  (*pcStack_110)(lVar14,uStack_114,lStack_108);
  func_0x000107c5ed40(lVar20,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar14,0,0,0x100);
  (*pcStack_128)(lVar20,0,1,lStack_120);
  lVar6 = lStack_1a0;
  func_0x000107c5ea80(lStack_1a0,&pppuStack_90,lStack_1b8,lVar20,0xd000000000000010,
                      0x800000010f10e470,&UNK_1105d3b40,uVar13);
  func_0x000107c5ea48(lStack_198,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_140;
  lStack_1a0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_07;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_170 = lVar14;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,lVar6,0x102de84fc,0);
  lVar6 = 0x112f19db0;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19db0,&UNK_10db516c8);
  lVar11 = 0x112f19db8;
  func_0x0001000285a8(0x112f19db8,&UNK_10db516d0);
  uStack_158 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar6,uVar15 + uStack_158 * 6,uVar13 | 7);
  uStack_1c8 = 0xc;
  lStack_1d0 = 6;
  *(undefined8 *)(lVar6 + 0x18) = 0xc;
  *(undefined8 *)(lVar6 + 0x10) = 6;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0x112f19dc0;
  lStack_1b8 = lVar6;
  lStack_168 = lVar20;
  func_0x0001000285a8(0x112f19dc0,&UNK_10db516d8);
  uStack_160 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar12 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_150 = extraout_x12_08 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uStack_150;
  FUN_102de801c();
  func_0x000107c5ea3c(lVar14,10,1,&UNK_1105d3d98,lVar12);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  uVar13 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcVar18)(lVar19,uStack_94,lVar10);
  func_0x000107c5ea34(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar10);
  func_0x000107c5ea38(0x67696c746f705320,0xea00000000007468,lVar11);
  func_0x000107c5ea40(lVar20,lVar14,&UNK_1105d3d98,lVar12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_150;
  lVar19 = lVar19 - uStack_150;
  func_0x000107c5ea3c(lVar19,0xf,1,&UNK_1105d3d98,lVar12);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar10 = lVar19 - uVar13;
  (*pcStack_b0)(lVar10,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar10,lVar11);
  (*pcVar4)(lVar10,lVar6);
  func_0x000107c5ea38(0x67696c746f705320,0xea00000000007468,lVar11);
  uVar13 = uStack_158;
  lVar20 = lStack_168;
  func_0x000107c5ea40(lStack_168 + uStack_158,lVar19,&UNK_1105d3d98,lVar12);
  lStack_1d8 = uVar13 << 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uVar15;
  func_0x000107c5ea3c(lVar10,7,1,&UNK_1105d3d98,lVar12);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_b8;
  lVar6 = lStack_c0;
  lVar14 = lVar10 - uStack_b8;
  (*pcVar18)(lVar14,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar6);
  func_0x000107c5ea38(0x736f6564697620,0xe700000000000000,lVar11);
  lVar6 = lStack_1d8;
  func_0x000107c5ea40(lVar20 + lStack_1d8,lVar10,&UNK_1105d3d98,lVar12);
  uVar13 = uStack_158;
  lStack_1d8 = lVar6 + uStack_158;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_150;
  func_0x000107c5ea3c(lVar14,8,1,&UNK_1105d3d98,lVar12);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar6 = lStack_c0;
  lVar19 = lVar14 - uVar15;
  (*pcStack_b0)(lVar19,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar6);
  func_0x000107c5ea38(0x756f7920726f6620,0xe800000000000000,lVar11);
  lVar10 = lStack_168;
  lStack_1e0 = lVar12;
  func_0x000107c5ea40(lStack_168 + lStack_1d8,lVar14,&UNK_1105d3d98,lVar12);
  lStack_1d8 = uVar13 << 2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uStack_150;
  func_0x000107c5ea3c(lVar19,9,1,&UNK_1105d3d98,lVar12);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_b8;
  lVar6 = lStack_c0;
  lVar14 = lVar19 - uStack_b8;
  (*pcVar18)(lVar14,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar14,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar6);
  func_0x000107c5ea38(0x6e69646e65727420,0xe900000000000067,lVar11);
  lVar6 = lStack_1d8;
  lVar20 = lStack_1e0;
  func_0x000107c5ea40(lVar10 + lStack_1d8,lVar19,&UNK_1105d3d98,lStack_1e0);
  lVar6 = lVar6 + uStack_158;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_150;
  func_0x000107c5ea3c(lVar14,6,1,&UNK_1105d3d98,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lStack_c0;
  lVar19 = lVar14 - uVar15;
  (*pcVar18)(lVar19,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar12);
  func_0x000107c5ea38(0x736c65657220,0xe600000000000000,lVar11);
  func_0x000107c5ea40(lVar10 + lVar6,lVar14,&UNK_1105d3d98,lVar20);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  lVar19 = lVar19 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x6867696c746f7053,0xe900000000000074);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - uStack_f8;
  (*pcStack_110)(lVar14,uStack_114,lStack_108);
  func_0x000107c5ed40(lVar19,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar14,0,0,0x100);
  (*pcStack_128)(lVar19,0,1,lStack_120);
  lVar6 = lStack_170;
  func_0x000107c5ea80(lStack_170,&pppuStack_90,lStack_1b8,lVar19,0x6c69662e79616c70,
                      0xe90000000000006c,&UNK_1105d3d98,lVar20);
  func_0x000107c5ea48(lStack_1a0,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_140;
  lStack_1b8 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12_09;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_1d8 = lVar14;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,lVar6,0x102de8ad8,0);
  lVar6 = 0x112f19dc8;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19dc8,&UNK_10db516e0);
  lVar11 = 0x112f19dd0;
  func_0x0001000285a8(0x112f19dd0,&UNK_10db516e8);
  uStack_150 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar16 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar6,uVar16 + uStack_150 * 10,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = uStack_1a8;
  *(long *)(lVar6 + 0x10) = lStack_1b0;
  lVar20 = lVar6 + uVar16;
  lVar11 = 0x112f19dd8;
  lStack_1e0 = lVar6;
  lStack_168 = lVar20;
  func_0x0001000285a8(0x112f19dd8,&UNK_10db516f0);
  uStack_158 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar10 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_160 = extraout_x12_10 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar14 - uStack_160;
  FUN_102de85fc();
  func_0x000107c5ea3c(lVar14,8,1,&UNK_1105d3e60,lVar10);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  lVar6 = lVar14 - uVar15;
  (*pcStack_b0)(lVar6,uStack_94,lVar12);
  func_0x000107c5ea34(lVar6,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar6,lVar12);
  func_0x000107c5ea38(0x736569726f745320,0xe800000000000000,lVar11);
  func_0x000107c5ea40(lVar20,lVar14,&UNK_1105d3e60,lVar10);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_160;
  lVar6 = lVar6 - uStack_160;
  func_0x000107c5ea3c(lVar6,0xd,1,&UNK_1105d3e60,lVar10);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lStack_c0;
  lVar14 = lVar6 - uVar15;
  (*pcVar18)(lVar14,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  func_0x000107c5ea38(0x736569726f745320,0xe800000000000000,lVar11);
  uVar15 = uStack_150;
  lVar20 = lStack_168;
  func_0x000107c5ea40(lStack_168 + uStack_150,lVar6,&UNK_1105d3e60,lVar10);
  lStack_1b0 = uVar15 << 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uVar13;
  func_0x000107c5ea3c(lVar14,9,1,&UNK_1105d3e60,lVar10);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  uVar16 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcStack_a0)(lVar19,lVar12);
  func_0x000107c5ea38(0x65766f6373694420,0xe900000000000072,lVar11);
  lVar6 = lStack_1b0;
  lStack_170 = lVar10;
  func_0x000107c5ea40(lVar20 + lStack_1b0,lVar14,&UNK_1105d3e60,lVar10);
  uVar15 = uStack_150;
  lStack_1b0 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_160;
  lVar19 = lVar19 - uStack_160;
  func_0x000107c5ea3c(lVar19,5,1,&UNK_1105d3e60,lVar10);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  lVar14 = lVar19 - uVar16;
  (*pcVar18)(lVar14,uStack_94,lVar12);
  func_0x000107c5ea34(lVar14,lVar11);
  (*pcStack_a0)(lVar14,lVar12);
  func_0x000107c5ea38(0x7377656e20,0xe500000000000000,lVar11);
  lVar10 = lStack_168;
  lVar20 = lStack_170;
  func_0x000107c5ea40(lStack_168 + lStack_1b0,lVar19,&UNK_1105d3e60,lStack_170);
  lStack_1b0 = uVar15 << 2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uVar13;
  func_0x000107c5ea3c(lVar14,6,1,&UNK_1105d3e60,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcStack_b0)(lVar19,uVar5,lVar12);
  func_0x000107c5ea34(lVar19,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar12);
  func_0x000107c5ea38(0x73776f687320,0xe600000000000000,lVar11);
  lVar6 = lStack_1b0;
  func_0x000107c5ea40(lVar10 + lStack_1b0,lVar14,&UNK_1105d3e60,lVar20);
  lVar6 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uStack_160;
  func_0x000107c5ea3c(lVar19,9,1,&UNK_1105d3e60,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  lVar14 = lVar19 - uVar13;
  (*pcStack_b0)(lVar14,uStack_94,lVar12);
  func_0x000107c5ea34(lVar14,lVar11);
  (*pcVar18)(lVar14,lVar12);
  func_0x000107c5ea38(0x726f746165726320,0xe900000000000073,lVar11);
  lVar10 = lStack_168;
  lVar20 = lStack_170;
  func_0x000107c5ea40(lStack_168 + lVar6,lVar19,&UNK_1105d3e60,lStack_170);
  lStack_1b0 = lVar10 + uStack_150 * 6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_160;
  func_0x000107c5ea3c(lVar14,0xb,1,&UNK_1105d3e60,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  lVar19 = lVar14 - uVar13;
  (*pcStack_b0)(lVar19,uVar5,lVar12);
  func_0x000107c5ea34(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar12);
  func_0x000107c5ea38(0x74532070616e5320,0xeb00000000737261,lVar11);
  func_0x000107c5ea40(lStack_1b0,lVar14,&UNK_1105d3e60,lVar20);
  lStack_1b0 = uStack_150 * 8;
  lStack_1e8 = uStack_150 * 7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_160;
  lVar19 = lVar19 - uStack_160;
  func_0x000107c5ea3c(lVar19,0xf,1,&UNK_1105d3e60,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - uStack_b8;
  (*pcVar18)(lVar14,uVar5,lVar12);
  func_0x000107c5ea34(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  func_0x000107c5ea38(0x20646e6569724620,0xef736569726f7453,lVar11);
  lVar10 = lStack_168;
  lVar6 = lStack_170;
  func_0x000107c5ea40(lStack_168 + lStack_1e8,lVar19,&UNK_1105d3e60,lStack_170);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uVar13;
  func_0x000107c5ea3c(lVar14,0x14,1,&UNK_1105d3e60,lVar6);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar13 = uStack_b8;
  lVar19 = lVar14 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  func_0x000107c5ea34(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar12);
  func_0x000107c5ea38(0x20646e6569724620,0xef736569726f7453,lVar11);
  lVar20 = lStack_170;
  lVar6 = lStack_1b0;
  func_0x000107c5ea40(lVar10 + lStack_1b0,lVar14,&UNK_1105d3e60,lStack_170);
  uStack_150 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uStack_160;
  func_0x000107c5ea3c(lVar19,0xe,1,&UNK_1105d3e60,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar19 - uVar13;
  (*pcVar18)(lVar14,uVar5,lVar12);
  func_0x000107c5ea34(lVar14,lVar11);
  (*pcVar4)(lVar14,lVar12);
  func_0x000107c5ea38(0x6972637362757320,0xee00736e6f697470,lVar11);
  func_0x000107c5ea40(lStack_168 + uStack_150,lVar19,&UNK_1105d3e60,lVar20);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  lVar14 = lVar14 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x736569726f7453,0xe700000000000000);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - uStack_f8;
  (*pcStack_110)(lVar10,uStack_114,lStack_108);
  func_0x000107c5ed40(lVar14,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar10,0,0,0x100);
  (*pcStack_128)(lVar14,0,1,lStack_120);
  lVar6 = lStack_1d8;
  func_0x000107c5ea80(lStack_1d8,&pppuStack_90,lStack_1e0,lVar14,0x662e6172656d6163,
                      0xee00737265746c69,&UNK_1105d3e60,lVar20);
  func_0x000107c5ea48(lStack_1b8,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uStack_140;
  lStack_170 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_11;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_1b0 = lVar10;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,lVar6,0x102de67b4,0);
  lVar6 = 0x112f19de0;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19de0,&UNK_10db516f8);
  lVar11 = 0x112f19de8;
  func_0x0001000285a8(0x112f19de8,&UNK_10db51700);
  uStack_150 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar6,uVar15 + uStack_150 * 6,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = uStack_1c8;
  *(long *)(lVar6 + 0x10) = lStack_1d0;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0x112f19df0;
  lStack_1d8 = lVar6;
  lStack_168 = lVar20;
  func_0x0001000285a8(0x112f19df0,&UNK_10db51708);
  uStack_158 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar14 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_160 = extraout_x12_12 + 0xfU & 0xfffffffffffffff0;
  lVar10 = lVar10 - uStack_160;
  FUN_102de62dc();
  func_0x000107c5ea3c(lVar10,5,1,&UNK_1105d39b0,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar13 = uStack_b8;
  lVar19 = lVar10 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcStack_a0)(lVar19,lVar12);
  func_0x000107c5ea38(0x7461684320,0xe500000000000000,lVar11);
  func_0x000107c5ea40(lVar20,lVar10,&UNK_1105d39b0,lVar14);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uStack_160;
  func_0x000107c5ea3c(lVar19,0xb,1,&UNK_1105d39b0,lVar14);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar19 - uVar13;
  (*pcVar18)(lVar10,uVar5,lVar12);
  func_0x000107c5ea34(lVar10,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar10,lVar12);
  func_0x000107c5ea38(0x737461684320,0xe600000000000000,lVar11);
  uVar13 = uStack_150;
  lVar6 = lStack_168;
  func_0x000107c5ea40(lStack_168 + uStack_150,lVar19,&UNK_1105d39b0,lVar14);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - uStack_160;
  func_0x000107c5ea3c(lVar10,6,1,&UNK_1105d39b0,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  lVar20 = lStack_c0;
  lVar12 = lVar10 - uStack_b8;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar20);
  func_0x000107c5ea38(0x737461684320,0xe600000000000000,lVar11);
  func_0x000107c5ea40(lVar6 + uVar13 * 2,lVar10,&UNK_1105d39b0,lVar14);
  lStack_1d0 = uVar13 * 2 + uStack_150;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_160;
  lVar12 = lVar12 - uStack_160;
  func_0x000107c5ea3c(lVar12,9,1,&UNK_1105d39b0,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  uVar15 = uStack_b8;
  lVar19 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar19,uVar5,lVar20);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar20);
  func_0x000107c5ea38(0x6567617373656d20,0xe900000000000073,lVar11);
  lVar20 = lStack_168;
  func_0x000107c5ea40(lStack_168 + lStack_1d0,lVar12,&UNK_1105d39b0,lVar14);
  lStack_1d0 = uStack_150 << 2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uVar13;
  func_0x000107c5ea3c(lVar19,6,1,&UNK_1105d39b0,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  lVar10 = lStack_c0;
  lVar12 = lVar19 - uVar15;
  (*pcVar18)(lVar12,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar12,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar12,lVar10);
  func_0x000107c5ea38(0x786f626e6920,0xe600000000000000,lVar11);
  lVar6 = lStack_1d0;
  func_0x000107c5ea40(lVar20 + lStack_1d0,lVar19,&UNK_1105d39b0,lVar14);
  lVar6 = lVar6 + uStack_150;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_160;
  func_0x000107c5ea3c(lVar12,4,1,&UNK_1105d39b0,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar12 - uStack_b8;
  (*pcVar18)(lVar20,uVar5,lVar10);
  func_0x000107c5ea34(lVar20,lVar11);
  (*pcVar4)(lVar20,lVar10);
  func_0x000107c5ea38(0x736d6420,0xe400000000000000,lVar11);
  func_0x000107c5ea40(lStack_168 + lVar6,lVar12,&UNK_1105d39b0,lVar14);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  lVar20 = lVar20 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x74616843,0xe400000000000000);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar20 - uStack_f8;
  (*pcStack_110)(lVar12,uStack_114,lStack_108);
  func_0x000107c5ed40(lVar20,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar12,0,0,0x100);
  (*pcStack_128)(lVar20,0,1,lStack_120);
  lVar6 = lStack_1b0;
  func_0x000107c5ea80(lStack_1b0,&pppuStack_90,lStack_1d8,lVar20,0x2e6567617373656d,
                      0xec0000006c6c6966,&UNK_1105d39b0,lVar14);
  func_0x000107c5ea48(lStack_170,lVar6);
  (*pcStack_d0)(lVar6,lStack_c8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - uStack_140;
  uStack_150 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_13;
  uStack_70 = 0;
  uStack_88 = 0;
  pppuStack_90 = (undefined8 ***)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_158 = lVar12;
  func_0x000107c5ea50();
  ppppuVar9 = &pppuStack_90;
  func_0x000107c5ea30(ppppuVar9,lVar6,0x102de6d8c,0);
  lVar6 = 0x112f19df8;
  pppuStack_90 = ppppuVar9;
  func_0x0001000285a8(0x112f19df8,&UNK_10db51710);
  lVar11 = 0x112f19e00;
  func_0x0001000285a8(0x112f19e00,&UNK_10db51718);
  lStack_130 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar15 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar6,uVar15 + lStack_130 * 7,uVar13 | 7);
  *(undefined8 *)(lVar6 + 0x18) = 0xe;
  *(undefined8 *)(lVar6 + 0x10) = 7;
  lVar20 = lVar6 + uVar15;
  lVar11 = 0x112f19e08;
  uStack_160 = lVar6;
  func_0x0001000285a8(0x112f19e08,&UNK_10db51720);
  uStack_140 = *(undefined8 *)(*(long *)(lVar11 + -8) + 0x40);
  lVar14 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_138 = extraout_x12_14 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uStack_138;
  FUN_102de68b4();
  func_0x000107c5ea3c(lVar12,6,1,&UNK_1105d3a78,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  pcVar18 = pcStack_b0;
  uVar13 = uStack_b8;
  lVar19 = lVar12 - uStack_b8;
  (*pcStack_b0)(lVar19,uStack_94,lVar10);
  func_0x000107c5ea34(lVar19,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar19,lVar10);
  func_0x000107c5ea38(0x73656d614720,0xe600000000000000,lVar11);
  lStack_148 = lVar20;
  func_0x000107c5ea40(lVar20,lVar12,&UNK_1105d3a78,lVar14);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uStack_138;
  func_0x000107c5ea3c(lVar19,0xb,1,&UNK_1105d3a78,lVar14);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lStack_c0;
  lVar12 = lVar19 - uVar13;
  (*pcVar18)(lVar12,uVar5,lStack_c0);
  func_0x000107c5ea34(lVar12,lVar11);
  (*pcVar4)(lVar12,lVar10);
  func_0x000107c5ea38(0x73656d614720,0xe600000000000000,lVar11);
  lVar6 = lStack_130;
  func_0x000107c5ea40(lVar20 + lStack_130,lVar19,&UNK_1105d3a78,lVar14);
  lStack_168 = lVar6 << 1;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_138;
  lVar12 = lVar12 - uStack_138;
  func_0x000107c5ea3c(lVar12,0xb,1,&UNK_1105d3a78,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar12 - uStack_b8;
  (*pcVar18)(lVar19,uStack_94,lVar10);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar10);
  func_0x000107c5ea38(0x61472070616e5320,0xeb0000000073656d,lVar11);
  lVar20 = lStack_148;
  lVar6 = lStack_168;
  func_0x000107c5ea40(lStack_148 + lStack_168,lVar12,&UNK_1105d3a78,lVar14);
  lVar10 = lStack_130;
  lStack_168 = lVar6 + lStack_130;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uVar13;
  func_0x000107c5ea3c(lVar19,0x10,1,&UNK_1105d3a78,lVar14);
  func_0x000107c5ea38(0x206e65706f,0xe500000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar15 = uStack_b8;
  lVar12 = lStack_c0;
  lVar6 = lVar19 - uStack_b8;
  (*pcStack_b0)(lVar6,uStack_94,lStack_c0);
  func_0x000107c5ea34(lVar6,lVar11);
  pcVar4 = pcStack_a0;
  (*pcStack_a0)(lVar6,lVar12);
  func_0x000107c5ea38(0x614720696e694d20,0xeb0000000073656d,lVar11);
  func_0x000107c5ea40(lVar20 + lStack_168,lVar19,&UNK_1105d3a78,lVar14);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar13 = uStack_138;
  lVar6 = lVar6 - uStack_138;
  func_0x000107c5ea3c(lVar6,5,1,&UNK_1105d3a78,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar18 = pcStack_b0;
  lVar19 = lVar6 - uVar15;
  (*pcStack_b0)(lVar19,uStack_94,lVar12);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcVar4)(lVar19,lVar12);
  func_0x000107c5ea38(0x79616c7020,0xe500000000000000,lVar11);
  lStack_1b0 = lVar14;
  func_0x000107c5ea40(lStack_148 + lVar10 * 4,lVar6,&UNK_1105d3a78,lVar14);
  lVar6 = lVar10 * 4 + lStack_130;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar19 - uVar13;
  func_0x000107c5ea3c(lVar19,7,1,&UNK_1105d3a78,lVar14);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = uStack_94;
  uVar13 = uStack_b8;
  lVar14 = lVar19 - uStack_b8;
  (*pcVar18)(lVar14,uStack_94,lVar12);
  func_0x000107c5ea34(lVar14,lVar11);
  pcVar18 = pcStack_a0;
  (*pcStack_a0)(lVar14,lVar12);
  func_0x000107c5ea38(0x676e696d616720,0xe700000000000000,lVar11);
  lVar10 = lStack_148;
  lVar20 = lStack_1b0;
  func_0x000107c5ea40(lStack_148 + lVar6,lVar19,&UNK_1105d3a78,lStack_1b0);
  lVar6 = lStack_130 * 6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - uStack_138;
  func_0x000107c5ea3c(lVar14,0xb,1,&UNK_1105d3a78,lVar20);
  func_0x000107c5ea38(0,0xe000000000000000,lVar11);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar14 - uVar13;
  (*pcStack_b0)(lVar19,uVar5,lVar12);
  func_0x000107c5ea34(lVar19,lVar11);
  (*pcVar18)(lVar19,lVar12);
  func_0x000107c5ea38(0x614720696e694d20,0xeb0000000073656d,lVar11);
  func_0x000107c5ea40(lVar10 + lVar6,lVar14,&UNK_1105d3a78,lVar20);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lStack_e0;
  lVar19 = lVar19 - uStack_e8;
  func_0x000107c5fad4(lStack_e0,0x73656d6147,0xe500000000000000);
  puVar2 = puStack_d8;
  func_0x000107c5ef04(puStack_d8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar19 - uStack_f8;
  (*pcStack_110)(lVar11,uStack_114,lStack_108);
  func_0x000107c5ed40(lVar19,lVar6,0x74726f6853707041,0xec00000073747563,puVar2,lVar11,0,0,0x100);
  (*pcStack_128)(lVar19,0,1,lStack_120);
  uVar13 = uStack_158;
  func_0x000107c5ea80(uStack_158,&pppuStack_90,uStack_160,lVar19,0xd000000000000013,
                      0x800000010f10e490,&UNK_1105d3a78,lVar20);
  func_0x000107c5ea48(uStack_150,uVar13);
  lVar19 = lStack_c8;
  (*pcStack_d0)(uVar13,lStack_c8);
  lVar6 = 0x112f19e10;
  func_0x0001000285a8(0x112f19e10,&UNK_10db51728);
  lVar20 = lStack_190;
  lVar17 = *(long *)(lStack_190 + 0x48);
  bVar1 = *(byte *)(lStack_190 + 0x50);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 0x10;
  *(undefined8 *)(lVar6 + 0x10) = 8;
  lVar11 = lVar6 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff));
  pcVar18 = *(code **)(lVar20 + 0x10);
  (*pcVar18)(lVar11,lStack_178,lVar19);
  (*pcVar18)(lVar11 + lVar17,lStack_180,lVar19);
  (*pcVar18)(lVar11 + lVar17 * 2,lStack_188,lVar19);
  lVar12 = lStack_198;
  (*pcVar18)(lVar11 + lVar17 * 3,lStack_198,lVar19);
  lVar10 = lStack_1a0;
  (*pcVar18)(lVar11 + lVar17 * 4,lStack_1a0,lVar19);
  lVar20 = lStack_1b8;
  (*pcVar18)(lVar11 + lVar17 * 5,lStack_1b8,lVar19);
  lVar14 = lStack_170;
  (*pcVar18)(lVar11 + lVar17 * 6,lStack_170,lVar19);
  uVar13 = uStack_150;
  (*pcVar18)(lVar11 + lVar17 * 7,uStack_150,lVar19);
  lVar11 = lVar6;
  func_0x000107c5ea44(lVar6);
  func_0x000107c61574(lVar6);
  pcVar18 = pcStack_d0;
  (*pcStack_d0)(uVar13,lVar19);
  (*pcVar18)(lVar14,lVar19);
  (*pcVar18)(lVar20,lVar19);
  (*pcVar18)(lVar10,lVar19);
  (*pcVar18)(lVar12,lVar19);
  (*pcVar18)(lStack_188,lVar19);
  (*pcVar18)(lStack_180,lVar19);
  (*pcVar18)(lStack_178,lVar19);
  return lVar11;
}



/* Entry: 102df029c; end: 102df0387;  */

void FUN_102df029c(void)

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



/* Entry: 102df0388; end: 102df03a3;  */

bool FUN_102df0388(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102df03a4; end: 102df0443;  */

void FUN_102df03a4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102df0444; end: 102df0447;  */

void FUN_102df0444(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db517b8;
  func_0x000107c61520(&UNK_10db517b8,&UNK_1105d4090);
  puRam0000000112f19e50 = puVar1;
  return;
}



/* Entry: 102df0448; end: 102df0487;  */

void FUN_102df0448(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db517b8;
  func_0x000107c61520(&UNK_10db517b8,&UNK_1105d4090);
  puRam0000000112f19e50 = puVar1;
  return;
}



/* Entry: 102df0488; end: 102df048b;  */

void FUN_102df0488(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f19e58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f19e60;
  func_0x00010002969c(0x112f19e60,&UNK_10db51778);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f19e58 = puVar2;
  return;
}



/* Entry: 102df048c; end: 102df04db;  */

void FUN_102df048c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f19e58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f19e60;
  func_0x00010002969c(0x112f19e60,&UNK_10db51778);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f19e58 = puVar2;
  return;
}



/* Entry: 102df04dc; end: 102df04df;  */

void FUN_102df04dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db517e0;
  func_0x000107c61520(&UNK_10db517e0,&UNK_1105d4120);
  puRam0000000112f19e68 = puVar1;
  return;
}



/* Entry: 102df04e0; end: 102df051f;  */

void FUN_102df04e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19e68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db517e0;
  func_0x000107c61520(&UNK_10db517e0,&UNK_1105d4120);
  puRam0000000112f19e68 = puVar1;
  return;
}



/* Entry: 102df0520; end: 102df077f;  */

void FUN_102df0520(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102df0780; end: 102df0a87;  */

void FUN_102df0780(long *param_1,long param_2)

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
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100355d64();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  func_0x00010384a758();
  func_0x000107c613fc();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174();
  uVar13 = uStack_d8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x00010384a3d8(auStack_70[0],uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,
                      uVar11,uVar12,uVar13,uStack_e0);
  *(undefined8 *)(param_2 + 0x10) = auStack_70[0];
  func_0x00010384a724();
  *(undefined8 *)(param_2 + 0x88) = auStack_70[0];
  *param_1 = param_2;
  return;
}



/* Entry: 102df0a88; end: 102df0acb;  */

void FUN_102df0a88(void)

{
  long unaff_x20;
  
  FUN_102df0780(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102df0acc; end: 102df0c97;  */

long FUN_102df0acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  *(undefined8 *)(unaff_x20 + 0x70) = param_13;
  *(undefined8 *)(unaff_x20 + 0x78) = param_14;
  *(undefined8 *)(unaff_x20 + 0x80) = param_15;
  func_0x00010384a758();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x00010384a3d8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14,param_15);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x00010384a724();
  *(undefined8 *)(unaff_x20 + 0x88) = param_1;
  return unaff_x20;
}



/* Entry: 102df0c98; end: 102df0d4b;  */

void FUN_102df0c98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 102df0d4c; end: 102df0d9f;  */

void FUN_102df0d4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df0da0; end: 102df0deb;  */

void FUN_102df0da0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x88);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df0dec; end: 102df0e3f;  */

void FUN_102df0dec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df0e40; end: 102df0f63;  */

long FUN_102df0e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001005dea6c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001005deaec();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001005deb28();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 102df0f64; end: 102df0fa7;  */

void FUN_102df0f64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df0fa8; end: 102df0feb;  */

undefined1  [16] FUN_102df0fa8(void)

{
  return ZEXT816(0x1105d43a0);
}



/* Entry: 102df0fec; end: 102df103f;  */

void FUN_102df0fec(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df1040; end: 102df11e7;  */

void FUN_102df1040(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010034b8a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_102dfde58(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000102dfdb34();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_102dfdb7c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102df11e8; end: 102df11f7;  */

void FUN_102df11e8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x00010034b8a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_102dfde58(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x000102dfdb34();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_102dfdb7c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102df11f8; end: 102df1343;  */

long FUN_102df11f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_102dfde58(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102dfdb34();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102dfdb7c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 102df1344; end: 102df138f;  */

void FUN_102df1344(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df1390; end: 102df13e3;  */

void FUN_102df1390(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df13e4; end: 102df142f;  */

void FUN_102df13e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df1430; end: 102df1483;  */

void FUN_102df1430(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df1484; end: 102df1517;  */

void FUN_102df1484(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010037cb20();
  func_0x000107c613fc();
  FUN_102df1578(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102df1518; end: 102df1523;  */

void FUN_102df1518(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010037cb20();
  func_0x000107c613fc();
  FUN_102df1578(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df1524; end: 102df1577;  */

undefined8 FUN_102df1524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102df1578(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102df1578; end: 102df1653;  */

void FUN_102df1578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_102dfd71c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102dfd528();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000102dfd580();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 102df1654; end: 102df168f;  */

void FUN_102df1654(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df1690; end: 102df16e3;  */

void FUN_102df1690(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df16e4; end: 102df172f;  */

void FUN_102df16e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df1730; end: 102df1783;  */

void FUN_102df1730(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df1784; end: 102df199f;  */

void FUN_102df1784(long *param_1,long param_2)

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
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x00010037a780();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  FUN_102e02ab0(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar6 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  func_0x000102e024a8();
  *(undefined8 *)(param_2 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  func_0x000102e02504();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(param_2 + 0x48) = uVar9;
  *param_1 = param_2;
  return;
}



/* Entry: 102df19a0; end: 102df19b3;  */

void FUN_102df19a0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x00010037a780();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  FUN_102e02ab0(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174(uStack_98);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  uVar8 = uStack_68;
  func_0x000107c61174();
  uVar9 = uVar8;
  func_0x000102e024a8();
  *(undefined8 *)(lVar1 + 0x10) = uVar9;
  uVar10 = uVar9;
  func_0x000107c6157c();
  func_0x000102e02504();
  func_0x000107c61574(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar1 + 0x48) = uVar10;
  *param_1 = lVar1;
  return;
}



/* Entry: 102df19b4; end: 102df1b5f;  */

long FUN_102df19b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  FUN_102e02ab0();
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102e024a8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000102e02504();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  return unaff_x20;
}



/* Entry: 102df1b60; end: 102df1bd3;  */

void FUN_102df1b60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102df1bd4; end: 102df1c27;  */

void FUN_102df1bd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df1c28; end: 102df1c73;  */

void FUN_102df1c28(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x48);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df1c74; end: 102df1cc7;  */

void FUN_102df1c74(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df1cc8; end: 102df1e2f;  */

void FUN_102df1cc8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x00010037a90c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_102e045f4(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000102e04220();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_102e0425c();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 102df1e30; end: 102df1e3b;  */

void FUN_102df1e30(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x00010037a90c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_102e045f4(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000102e04220();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_102e0425c();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 102df1e3c; end: 102df1f5f;  */

long FUN_102df1e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_102e045f4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102e04220();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102e0425c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 102df1f60; end: 102df1fa3;  */

void FUN_102df1f60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df1fa4; end: 102df1ff7;  */

void FUN_102df1fa4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df1ff8; end: 102df2043;  */

void FUN_102df1ff8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df2044; end: 102df2097;  */

void FUN_102df2044(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df2098; end: 102df212b;  */

void FUN_102df2098(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010037cc98();
  func_0x000107c613fc();
  FUN_102df218c(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 102df212c; end: 102df2137;  */

void FUN_102df212c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010037cc98();
  func_0x000107c613fc();
  FUN_102df218c(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df2138; end: 102df218b;  */

undefined8 FUN_102df2138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_102df218c(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 102df218c; end: 102df22ab;  */

void FUN_102df218c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f1a4b8,&UNK_10db523e8);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  uVar1 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x00010342a240(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103429ff0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar3 = uVar1;
  func_0x000107c6157c();
  func_0x00010342a024();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  return;
}



/* Entry: 102df22ac; end: 102df22e7;  */

void FUN_102df22ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df22e8; end: 102df233b;  */

void FUN_102df22e8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df233c; end: 102df2387;  */

void FUN_102df233c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df2388; end: 102df23db;  */

void FUN_102df2388(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df23dc; end: 102df2957;  */

long FUN_102df23dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_4;
  *(undefined8 *)(unaff_x20 + 0x78) = param_5;
  *(undefined8 *)(unaff_x20 + 0x80) = param_6;
  *(undefined8 *)(unaff_x20 + 0x88) = param_7;
  func_0x0001000285a8(0x112f1a5b0,&UNK_10db525c8);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_8;
  func_0x000107c6157c(param_8);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112f1a5b8,&UNK_10db525d0);
  func_0x000107c610f8();
  uVar1 = param_9;
  func_0x000107c6157c(param_9);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001000285a8(0x112f1a5c0,&UNK_10db525d8);
  func_0x000107c610f8();
  uVar1 = param_10;
  func_0x000107c6157c(param_10);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  func_0x0001000285a8(0x112f1a5c8,&UNK_10db525e0);
  func_0x000107c610f8();
  uVar1 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  func_0x0001000285a8(0x112f1a5d0,&UNK_10db525e8);
  func_0x000107c610f8();
  uVar1 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x38) = puVar6;
  func_0x0001000285a8(0x112f1a5d8,&UNK_10db525f0);
  func_0x000107c610f8();
  uVar1 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x40) = puVar7;
  func_0x0001000285a8(0x112f1a5e0,&UNK_10db525f8);
  func_0x000107c610f8();
  uVar1 = param_14;
  func_0x000107c6157c(param_14);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x48) = puVar8;
  func_0x0001000285a8(0x112f1a5e8,&UNK_10db52600);
  func_0x000107c610f8();
  uVar1 = param_15;
  func_0x000107c6157c(param_15);
  func_0x00010017da58();
  puVar9 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x50) = puVar9;
  func_0x0001000285a8(0x112f1a5f0,&UNK_10db52608);
  func_0x000107c610f8();
  uVar1 = param_16;
  func_0x000107c6157c(param_16);
  func_0x0001003b3b80();
  puVar10 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x58) = puVar10;
  func_0x0001007662e4();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = param_1;
  func_0x0001007663bc(param_1,param_2,param_3,param_4,param_5,param_6,param_7,puVar2,puVar3,puVar4,
                      puVar5,puVar6,puVar7,puVar8,puVar9,puVar10);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar11;
  uVar1 = uVar11;
  func_0x000107c6157c();
  func_0x000100766460();
  func_0x000107c61574(uVar11);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61574(param_8);
  func_0x000107c61574(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  func_0x000107c61574(param_14);
  func_0x000107c61574(param_15);
  func_0x000107c61574(param_16);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar1;
  return unaff_x20;
}



/* Entry: 102df2958; end: 102df2a13;  */

void FUN_102df2958(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 102df2a14; end: 102df2a57;  */

undefined1  [16] FUN_102df2a14(void)

{
  return ZEXT816(0x1105d4850);
}



/* Entry: 102df2a58; end: 102df2aab;  */

void FUN_102df2a58(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df2aac; end: 102df2b5f;  */

long FUN_102df2aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001007b1890(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x0001007b190c(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x0001007b1dc8();
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return unaff_x20;
}



/* Entry: 102df2b60; end: 102df2ba3;  */

void FUN_102df2b60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df2ba4; end: 102df2be7;  */

undefined1  [16] FUN_102df2ba4(void)

{
  return ZEXT816(0x1105d4918);
}



/* Entry: 102df2be8; end: 102df2c3b;  */

void FUN_102df2be8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df2c3c; end: 102df2c87;  */

undefined8 FUN_102df2c3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010073aac4(param_1,param_2);
  return unaff_x20;
}



/* Entry: 102df2c88; end: 102df2cbb;  */

void FUN_102df2c88(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df2cbc; end: 102df2cff;  */

undefined1  [16] FUN_102df2cbc(void)

{
  return ZEXT816(0x1105d49e0);
}



/* Entry: 102df2d00; end: 102df2d53;  */

void FUN_102df2d00(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df2d54; end: 102df2f77;  */

void FUN_102df2d54(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001003727b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  *(undefined8 *)(param_2 + 0x30) = uStack_78;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x18) = puVar4;
  func_0x0001000285a8(0x112f1a938,&UNK_10db52bd0);
  func_0x000107c610f8();
  uVar3 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(param_2 + 0x20) = puVar5;
  FUN_102e3936c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar5);
  uVar3 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar6 = uVar3;
  func_0x000102e39020(uVar3,uVar1,uVar2,puVar4,puVar5);
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_102e39068();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uStack_80);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 102df2f78; end: 102df2f87;  */

void FUN_102df2f78(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001003727b8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  *(undefined8 *)(lVar1 + 0x30) = uStack_78;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(lVar1 + 0x18) = puVar5;
  func_0x0001000285a8(0x112f1a938,&UNK_10db52bd0);
  func_0x000107c610f8();
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(lVar1 + 0x20) = puVar6;
  FUN_102e3936c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar6);
  uVar4 = uStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar7 = uVar4;
  func_0x000102e39020(uVar4,uVar2,uVar3,puVar5,puVar6);
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_102e39068();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_80);
  func_0x000107c61574(uStack_88);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102df2f88; end: 102df3153;  */

long FUN_102df2f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  func_0x0001000285a8(0x112e4ccd8,&UNK_10da46ce0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112f1a938,&UNK_10db52bd0);
  func_0x000107c610f8();
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  FUN_102e3936c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar1 = param_1;
  func_0x000102e39020(param_1,param_2,param_3,puVar2,puVar3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar4 = uVar1;
  func_0x000107c6157c();
  FUN_102e39068();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
  return unaff_x20;
}



/* Entry: 102df3154; end: 102df319f;  */

void FUN_102df3154(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df31a0; end: 102df31f3;  */

void FUN_102df31a0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df31f4; end: 102df323f;  */

void FUN_102df31f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df3240; end: 102df3293;  */

void FUN_102df3240(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df3294; end: 102df3627;  */

void FUN_102df3294(long *param_1,long param_2)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100378314();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  func_0x0001000285a8(0x112f1aa40,&UNK_10db52dc8);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c6157c(uStack_b8);
  func_0x00010017da58();
  puVar10 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x18) = puVar10;
  func_0x0001000285a8(0x112ed9688,&UNK_10db05e50);
  func_0x000107c610f8();
  uVar9 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(param_2 + 0x20) = puVar11;
  FUN_102e0c1c0();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = auStack_70[0];
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = uVar9;
  func_0x000102e0b548(uVar9,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,puVar10,puVar11);
  *(undefined8 *)(param_2 + 0x10) = uVar12;
  uVar13 = uVar12;
  func_0x000107c6157c();
  func_0x000102e0b664();
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61574(uStack_b8);
  func_0x000107c61574(uStack_c0);
  *(undefined8 *)(param_2 + 0x68) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 102df3628; end: 102df3663;  */

void FUN_102df3628(void)

{
  long unaff_x20;
  
  FUN_102df3294(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102df3664; end: 102df3943;  */

long FUN_102df3664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  func_0x0001000285a8(0x112f1aa40,&UNK_10db52dc8);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_10;
  func_0x000107c6157c(param_10);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112ed9688,&UNK_10db05e50);
  func_0x000107c610f8();
  uVar1 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  FUN_102e0c1c0();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102e0b548(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar2
                      ,puVar3);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar4 = uVar1;
  func_0x000107c6157c();
  func_0x000102e0b664();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61574(param_10);
  func_0x000107c61574(param_11);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar4;
  return unaff_x20;
}



/* Entry: 102df3944; end: 102df39d7;  */

void FUN_102df3944(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102df39d8; end: 102df3a2b;  */

void FUN_102df39d8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df3a2c; end: 102df3a77;  */

void FUN_102df3a2c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102df3a78; end: 102df3acb;  */

void FUN_102df3a78(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df3acc; end: 102df3b2f;  */

undefined8
FUN_102df3acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100b7c08c(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 102df3b30; end: 102df3b73;  */

void FUN_102df3b30(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102df3b74; end: 102df3bc3;  */

undefined8 FUN_102df3b74(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102df3bc4; end: 102df3c07;  */

undefined1  [16] FUN_102df3bc4(void)

{
  return ZEXT816(0x1105d4c38);
}



/* Entry: 102df3c08; end: 102df3c2f;  */

void FUN_102df3c08(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102df3c30; end: 102df3c37;  */

undefined8 FUN_102df3c30(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


