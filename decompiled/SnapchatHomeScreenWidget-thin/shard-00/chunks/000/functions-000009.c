/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10003fe20; end: 10003ffd7;  */

void FUN_10003fe20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5cc0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5cb0;
  func_0x000100010120(0x1000c5cb0,&UNK_10008bfd0);
  uVar2 = 0x1000c5cc8;
  FUN_10003ffd8(0x1000c5cc8,0x1000c5ca8,&UNK_10008bfc8,0x10003fed8);
  uVar3 = 0x1000c55c8;
  FUN_100040048(0x1000c55c8,0x1000c55d0,&UNK_10008c000,
                PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_1000b0570);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5cc0 = puVar4;
  return;
}



/* Entry: 10003ffd8; end: 100040047;  */

void FUN_10003ffd8(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_1000b02e8;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 100040048; end: 10004008b;  */

void FUN_100040048(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 10004008c; end: 10004008f;  */

void FUN_10004008c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5ce8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5cf0;
  func_0x000100010120(0x1000c5cf0,&UNK_10008c008);
  uVar2 = uVar1;
  FUN_10003c924();
  uVar3 = uVar2;
  func_0x00010003e424();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c5ce8 = puVar4;
  return;
}



/* Entry: 100040090; end: 100040107;  */

void FUN_100040090(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5ce8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5cf0;
  func_0x000100010120(0x1000c5cf0,&UNK_10008c008);
  uVar2 = uVar1;
  FUN_10003c924();
  uVar3 = uVar2;
  func_0x00010003e424();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c5ce8 = puVar4;
  return;
}



/* Entry: 100040108; end: 10004016f;  */

void FUN_100040108(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100040170; end: 1000401eb;  */

long FUN_100040170(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1000401ec; end: 10004029f;  */

undefined1 * FUN_1000401ec(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  param_1[0x38] = param_2[0x38];
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  return param_1;
}



/* Entry: 1000402a0; end: 1000403b3;  */

undefined1 * FUN_1000402a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x38] = param_2[0x38];
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _objc_retain();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1000403b4; end: 1000403d7;  */

void FUN_1000403b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return;
}



/* Entry: 1000403d8; end: 10004047b;  */

undefined1 * FUN_1000403d8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x38] = param_2[0x38];
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 10004047c; end: 10004053f;  */

int FUN_10004047c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100040540; end: 1000406db;  */

void FUN_100040540(void)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __s7SwiftUI5ColorV13RGBColorSpaceOMa();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x68))
            (puVar2,*(undefined4 *)PTR___s7SwiftUI5ColorV13RGBColorSpaceO4sRGByA2EmFWC_1000b0760);
  __s7SwiftUI5ColorV_3red5green4blue7opacityA2C13RGBColorSpaceO_S4dtcfC
            (0x3fe6767676767676,0x3fe6767676767676,0x3fe6767676767676,0x3ff0000000000000);
  puRam00000001000c5f58 = puVar2;
  return;
}



/* Entry: 1000406dc; end: 10004159b;  */

void FUN_1000406dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *plVar10;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long lVar11;
  long lVar12;
  long *plVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long alStack_260 [6];
  long *plStack_230;
  long alStack_228 [4];
  long alStack_208 [8];
  long *plStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  long *plStack_f8;
  undefined8 uStack_f0;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
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
  
  lVar5 = 0;
  uStack_1a0 = param_1;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar14 = *(long *)(lVar5 + -8);
  alStack_228[2] = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar14 + 0x40));
  plVar16 = (long *)((long)&plStack_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0x1000c5d08;
  func_0x0001000100d0(0x1000c5d08,&UNK_10008c0a0);
  alStack_228[3] = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar11 = (long)plVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_208[1] = lVar11;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar11 - extraout_x12;
  lVar5 = 0x1000c5d10;
  alStack_208[0] = lVar11;
  func_0x0001000100d0(0x1000c5d10,&UNK_10008c0a8);
  alStack_208[7] = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar10 = (long *)(lVar11 - extraout_x8_01);
  lVar5 = 0x1000c5d18;
  plStack_1c8 = plVar10;
  func_0x0001000100d0(0x1000c5d18,&UNK_10008c0b0);
  lStack_1a8 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar10 = (long *)((long)plVar10 - extraout_x8_02);
  lVar5 = 0x1000c5d20;
  func_0x0001000100d0(0x1000c5d20,&UNK_10008c0b8);
  lStack_1c0 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x1000c5d28;
  lStack_1b0 = (long)plVar10 - extraout_x8_03;
  func_0x0001000100d0(0x1000c5d28,&UNK_10008c0c0);
  alStack_208[4] = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = ((long)plVar10 - extraout_x8_03) - extraout_x8_04;
  lVar5 = 0x1000c5d30;
  alStack_208[5] = lVar11;
  func_0x0001000100d0(0x1000c5d30,&UNK_10008c0c8);
  lStack_1b8 = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar11 - extraout_x8_05;
  lVar5 = 0x1000c5d38;
  alStack_208[6] = lVar11;
  func_0x0001000100d0(0x1000c5d38,&UNK_10008c0d0);
  alStack_208[2] = lVar5;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  plVar17 = (long *)(lVar11 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  alStack_208[3] = (long)plVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar15 = (long *)(((long)plVar17 - extraout_x12_00) - extraout_x12_01);
  lVar5 = 0x1000c5d40;
  func_0x0001000100d0(0x1000c5d40,&UNK_10008c0d8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar12 = (long)plVar15 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  alStack_228[0] = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar12 = lVar12 - extraout_x12_02;
  lVar11 = 0x1000c5d48;
  func_0x0001000100d0(0x1000c5d48,&UNK_10008c0e0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar13 = (long *)(lVar12 - extraout_x8_08);
  alStack_228[1] = extraout_x12_03;
  if ((*param_6 == '\0') && (plVar7 = *(long **)(param_6 + 0x68), plVar7 != (long *)0x0)) {
    _objc_retain();
    plVar10 = plVar7;
    __s7SwiftUI17VerticalAlignmentV3topACvgZ();
    *plVar13 = (long)plVar10;
    plVar13[1] = 0x4018000000000000;
    *(undefined1 *)(plVar13 + 2) = 0;
    plStack_230 = plVar13;
    _objc_retain();
    plStack_1c8 = plVar7;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    puVar9 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_1000b0820;
    plStack_f8 = plVar7;
    __s7SwiftUI4ViewPAAE10unredactedQryF
              (lVar12,PTR___s7SwiftUI5ImageVN_1000b0830,PTR___s7SwiftUI5ImageVAA4ViewAAWP_1000b0820)
    ;
    _swift_release(plVar7);
    __s7SwiftUI9AlignmentV14bottomTrailingACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (&uStack_198,0x4060800000000000,0,0x4064000000000000,0,plVar7,puVar9);
    lVar11 = 0x1000c5df8;
    func_0x0001000100d0(0x1000c5df8,&UNK_10008c150);
    puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar11 + 0x24));
    puVar1[1] = uStack_190;
    *puVar1 = uStack_198;
    puVar1[3] = uStack_180;
    puVar1[2] = uStack_188;
    puVar1[5] = uStack_170;
    puVar1[4] = uStack_178;
    *(undefined2 *)(lVar12 + *(int *)(lVar5 + 0x24)) = 0;
    uVar19 = uStack_188;
    __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
    *plVar15 = lVar11;
    plVar15[1] = 0;
    *(undefined1 *)(plVar15 + 2) = 0;
    lVar5 = 0x1000c5dd0;
    func_0x0001000100d0(0x1000c5dd0,&UNK_10008c128);
    FUN_10004159c((long)plVar15 + (long)*(int *)(lVar5 + 0x2c));
    uVar4 = SUB81(param_6,0);
    __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
    uVar18 = 0x4032000000000000;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    lVar5 = 0x1000c5dd8;
    uVar6 = uVar19;
    uVar22 = param_4;
    uVar20 = param_5;
    func_0x0001000100d0(0x1000c5dd8,&UNK_10008c130);
    puVar2 = (undefined1 *)((long)plVar15 + (long)*(int *)(lVar5 + 0x24));
    *puVar2 = uVar4;
    *(undefined8 *)(puVar2 + 8) = uVar18;
    *(undefined8 *)(puVar2 + 0x10) = uVar19;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    puVar2[0x28] = 0;
    __s7SwiftUI4EdgeO3SetV8trailingAEvgZ();
    uVar19 = 0x4030000000000000;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    lVar11 = 0x1000c5de0;
    puVar9 = &UNK_10008c138;
    func_0x0001000100d0();
    puVar2 = (undefined1 *)((long)plVar15 + (long)*(int *)(lVar11 + 0x24));
    *puVar2 = (char)lVar5;
    *(undefined8 *)(puVar2 + 8) = uVar19;
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    *(undefined8 *)(puVar2 + 0x18) = uVar22;
    *(undefined8 *)(puVar2 + 0x20) = uVar20;
    puVar2[0x28] = 0;
    __s7SwiftUI9AlignmentV10topLeadingACvgZ();
    lVar5 = 0x1000c5e00;
    func_0x0001000100d0(0x1000c5e00,&UNK_10008c158);
    lVar14 = (long)plVar13 + (long)*(int *)(lVar5 + 0x2c);
    plVar13[-2] = lVar11;
    plVar13[-1] = (long)puVar9;
    *(undefined1 *)(plVar13 + -3) = 0;
    plVar13[-4] = 0x7ff0000000000000;
    *(undefined1 *)(plVar13 + -5) = 1;
    plVar13[-6] = 0;
    __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
              (&uStack_168,0,1,0,1,0x7ff0000000000000,0,0,1);
    puVar1 = (undefined8 *)((long)plVar15 + (long)*(int *)(alStack_208[2] + 0x24));
    puVar1[9] = uStack_120;
    puVar1[8] = uStack_128;
    puVar1[0xb] = uStack_110;
    puVar1[10] = uStack_118;
    puVar1[0xd] = uStack_100;
    puVar1[0xc] = uStack_108;
    puVar1[1] = uStack_160;
    *puVar1 = uStack_168;
    lVar8 = alStack_228[0];
    puVar1[3] = uStack_150;
    puVar1[2] = uStack_158;
    puVar1[5] = uStack_140;
    puVar1[4] = uStack_148;
    puVar1[7] = uStack_130;
    puVar1[6] = uStack_138;
    lVar5 = 0x1000c5d40;
    func_0x000100043910(lVar12,alStack_228[0],0x1000c5d40,&UNK_10008c0d8);
    lVar3 = alStack_208[3];
    func_0x000100043910(plVar15,alStack_208[3],0x1000c5d38,&UNK_10008c0d0);
    func_0x000100043910(lVar8,lVar14,0x1000c5d40,&UNK_10008c0d8);
    lVar11 = 0x1000c5e08;
    func_0x0001000100d0(0x1000c5e08,&UNK_10008c160);
    func_0x000100043910(lVar3,lVar14 + *(int *)(lVar11 + 0x30),0x1000c5d38,&UNK_10008c0d0);
    func_0x000100043f64(plVar15,0x1000c5d38,&UNK_10008c0d0);
    func_0x000100043f64(lVar12,0x1000c5d40,&UNK_10008c0d8);
    func_0x000100043f64(lVar3,0x1000c5d38,&UNK_10008c0d0);
    func_0x000100043f64(lVar8,0x1000c5d40,&UNK_10008c0d8);
    __s7SwiftUI9AlignmentV10topLeadingACvgZ();
    plVar13[-2] = lVar8;
    plVar13[-1] = lVar5;
    *(undefined1 *)(plVar13 + -3) = 0;
    plVar13[-4] = 0x4064000000000000;
    *(undefined1 *)(plVar13 + -5) = 1;
    plVar13[-6] = 0;
    __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
              (&plStack_f8,0,1,0,1,0x7ff0000000000000,0,0x4064000000000000,0);
    lVar5 = alStack_208[5];
    plVar10 = plStack_230;
    puVar1 = (undefined8 *)((long)plStack_230 + (long)*(int *)(alStack_228[1] + 0x24));
    puVar1[9] = uStack_b0;
    puVar1[8] = uStack_b8;
    puVar1[0xb] = uStack_a0;
    puVar1[10] = uStack_a8;
    puVar1[0xd] = uStack_90;
    puVar1[0xc] = uStack_98;
    puVar1[1] = uStack_f0;
    *puVar1 = plStack_f8;
    puVar1[3] = uStack_e0;
    puVar1[2] = CONCAT62(uStack_e6,uStack_e8);
    puVar1[5] = uStack_d0;
    puVar1[4] = uStack_d8;
    puVar1[7] = uStack_c0;
    puVar1[6] = uStack_c8;
    uVar19 = 0x1000c5d48;
    puVar9 = &UNK_10008c0e0;
    func_0x000100043910(plStack_230,alStack_208[5],0x1000c5d48,&UNK_10008c0e0);
    lVar12 = lVar5;
    _swift_storeEnumTagMultiPayload(lVar5,alStack_208[4],0);
    func_0x000100043658();
    lVar14 = lVar12;
    func_0x0001000436f0();
    lVar11 = alStack_208[6];
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (alStack_208[6],lVar5,alStack_228[1],alStack_208[7],lVar12,lVar14);
    lVar5 = lStack_1b0;
    func_0x000100043910(lVar11,lStack_1b0,0x1000c5d30,&UNK_10008c0c8);
    lVar12 = lVar5;
    _swift_storeEnumTagMultiPayload(lVar5,lStack_1c0,0);
    func_0x0001000435e0();
    lVar14 = lVar12;
    func_0x000100043788();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_1a0,lVar5,lStack_1b8,lStack_1a8,lVar12,lVar14);
    _objc_release(plStack_1c8);
    func_0x000100043f64(lVar11,0x1000c5d30,&UNK_10008c0c8);
  }
  else {
    lVar5 = *(long *)(param_6 + 0x60);
    if (lVar5 == 0) {
      __s7SwiftUI17VerticalAlignmentV3topACvgZ();
      *plVar10 = lVar5;
      plVar10[1] = 0x4028000000000000;
      *(undefined1 *)(plVar10 + 2) = 0;
      lVar5 = 0x1000c5d50;
      func_0x0001000100d0(0x1000c5d50,&UNK_10008c0e8);
      func_0x0001000428a0((long)plVar10 + (long)*(int *)(lVar5 + 0x2c));
      uVar4 = SUB81(param_6,0);
      __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
      uVar20 = 0x4034000000000000;
      __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
      lVar5 = 0x1000c5d58;
      uVar19 = param_3;
      uVar6 = param_4;
      uVar22 = param_5;
      func_0x0001000100d0(0x1000c5d58,&UNK_10008c0f0);
      puVar2 = (undefined1 *)((long)plVar10 + (long)*(int *)(lVar5 + 0x24));
      *puVar2 = uVar4;
      *(undefined8 *)(puVar2 + 8) = uVar20;
      *(undefined8 *)(puVar2 + 0x10) = param_3;
      *(undefined8 *)(puVar2 + 0x18) = param_4;
      *(undefined8 *)(puVar2 + 0x20) = param_5;
      puVar2[0x28] = 0;
      __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
      uVar20 = 0x4032000000000000;
      __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
      lVar11 = 0x1000c5d60;
      puVar9 = &UNK_10008c0f8;
      func_0x0001000100d0();
      puVar2 = (undefined1 *)((long)plVar10 + (long)*(int *)(lVar11 + 0x24));
      *puVar2 = (char)lVar5;
      *(undefined8 *)(puVar2 + 8) = uVar20;
      *(undefined8 *)(puVar2 + 0x10) = uVar19;
      *(undefined8 *)(puVar2 + 0x18) = uVar6;
      *(undefined8 *)(puVar2 + 0x20) = uVar22;
      puVar2[0x28] = 0;
      __s7SwiftUI9AlignmentV10topLeadingACvgZ();
      plVar13[-2] = lVar11;
      plVar13[-1] = (long)puVar9;
      *(undefined1 *)(plVar13 + -3) = 1;
      plVar13[-4] = 0;
      *(undefined1 *)(plVar13 + -5) = 1;
      plVar13[-6] = 0;
      __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
                (&plStack_f8,0,1,0,1,0x7ff0000000000000,0,0,1);
      lVar11 = lStack_1a8;
      puVar1 = (undefined8 *)((long)plVar10 + (long)*(int *)(lStack_1a8 + 0x24));
      puVar1[9] = uStack_b0;
      puVar1[8] = uStack_b8;
      puVar1[0xb] = uStack_a0;
      puVar1[10] = uStack_a8;
      puVar1[0xd] = uStack_90;
      puVar1[0xc] = uStack_98;
      plVar13 = plStack_f8;
      uVar19 = CONCAT62(uStack_e6,uStack_e8);
      puVar1[1] = uStack_f0;
      *puVar1 = plVar13;
      puVar1[3] = uStack_e0;
      puVar1[2] = uVar19;
      puVar1[5] = uStack_d0;
      puVar1[4] = uStack_d8;
      puVar1[7] = uStack_c0;
      puVar1[6] = uStack_c8;
      lVar5 = lStack_1b0;
      uVar19 = 0x1000c5d18;
      puVar9 = &UNK_10008c0b0;
      func_0x000100043910(plVar10,lStack_1b0,0x1000c5d18,&UNK_10008c0b0);
      lVar12 = lVar5;
      _swift_storeEnumTagMultiPayload(lVar5,lStack_1c0,1);
      func_0x0001000435e0();
      lVar14 = lVar12;
      func_0x000100043788();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_1a0,lVar5,lStack_1b8,lVar11,lVar12,lVar14);
    }
    else {
      _objc_retain();
      lVar11 = lVar5;
      __s7SwiftUI17VerticalAlignmentV3topACvgZ();
      plVar10 = plStack_1c8;
      *plStack_1c8 = lVar11;
      plVar10[1] = 0x4018000000000000;
      *(undefined1 *)(plVar10 + 2) = 0;
      _objc_retain();
      alStack_228[0] = lVar5;
      __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
      lVar11 = alStack_228[2];
      (**(code **)(lVar14 + 0x68))
                (plVar16,*(undefined4 *)
                          PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
                 alStack_228[2]);
      uVar21 = 0;
      uVar23 = 0;
      plVar15 = plVar16;
      __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
                (0,0,plVar16,lVar5);
      _swift_release(lVar5);
      (**(code **)(lVar14 + 8))(plVar16,lVar11);
      uStack_f0 = 0;
      uStack_e8 = 0x101;
      uVar19 = 0x1000c47a0;
      plStack_f8 = plVar15;
      func_0x0001000100d0(0x1000c47a0,&UNK_10008a4f0);
      uVar6 = uVar19;
      FUN_10002d8ac();
      lVar14 = alStack_208[0];
      __s7SwiftUI4ViewPAAE10unredactedQryF(alStack_208[0],uVar19,uVar6);
      _swift_release(plVar15);
      __s7SwiftUI9AlignmentV14bottomTrailingACvgZ();
      __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
                (&uStack_198,0x4060800000000000,0,0x4064000000000000,0,plVar15,uVar6);
      lVar5 = 0x1000c5dc8;
      func_0x0001000100d0(0x1000c5dc8,&UNK_10008c120);
      puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar5 + 0x24));
      puVar1[1] = uStack_190;
      *puVar1 = uStack_198;
      puVar1[3] = uStack_180;
      puVar1[2] = uStack_188;
      puVar1[5] = uStack_170;
      puVar1[4] = uStack_178;
      *(undefined2 *)(lVar14 + *(int *)(alStack_228[3] + 0x24)) = 0;
      uVar19 = uStack_188;
      __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
      *plVar17 = lVar5;
      plVar17[1] = 0;
      *(undefined1 *)(plVar17 + 2) = 0;
      lVar5 = 0x1000c5dd0;
      func_0x0001000100d0(0x1000c5dd0,&UNK_10008c128);
      FUN_10004159c((long)plVar17 + (long)*(int *)(lVar5 + 0x2c));
      uVar4 = SUB81(param_6,0);
      __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
      uVar18 = 0x4032000000000000;
      __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
      lVar5 = 0x1000c5dd8;
      uVar6 = uVar19;
      uVar22 = uVar21;
      uVar20 = uVar23;
      func_0x0001000100d0(0x1000c5dd8,&UNK_10008c130);
      puVar2 = (undefined1 *)((long)plVar17 + (long)*(int *)(lVar5 + 0x24));
      *puVar2 = uVar4;
      *(undefined8 *)(puVar2 + 8) = uVar18;
      *(undefined8 *)(puVar2 + 0x10) = uVar19;
      *(undefined8 *)(puVar2 + 0x18) = uVar21;
      *(undefined8 *)(puVar2 + 0x20) = uVar23;
      puVar2[0x28] = 0;
      __s7SwiftUI4EdgeO3SetV8trailingAEvgZ();
      uVar19 = 0x4030000000000000;
      __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
      lVar11 = 0x1000c5de0;
      puVar9 = &UNK_10008c138;
      func_0x0001000100d0();
      puVar2 = (undefined1 *)((long)plVar17 + (long)*(int *)(lVar11 + 0x24));
      *puVar2 = (char)lVar5;
      *(undefined8 *)(puVar2 + 8) = uVar19;
      *(undefined8 *)(puVar2 + 0x10) = uVar6;
      *(undefined8 *)(puVar2 + 0x18) = uVar22;
      *(undefined8 *)(puVar2 + 0x20) = uVar20;
      puVar2[0x28] = 0;
      __s7SwiftUI9AlignmentV10topLeadingACvgZ();
      lVar5 = 0x1000c5de8;
      func_0x0001000100d0(0x1000c5de8,&UNK_10008c140);
      lVar12 = (long)plVar10 + (long)*(int *)(lVar5 + 0x2c);
      plVar13[-2] = lVar11;
      plVar13[-1] = (long)puVar9;
      *(undefined1 *)(plVar13 + -3) = 0;
      plVar13[-4] = 0x7ff0000000000000;
      *(undefined1 *)(plVar13 + -5) = 1;
      plVar13[-6] = 0;
      __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
                (&uStack_168,0,1,0,1,0x7ff0000000000000,0,0,1);
      puVar1 = (undefined8 *)((long)plVar17 + (long)*(int *)(alStack_208[2] + 0x24));
      puVar1[9] = uStack_120;
      puVar1[8] = uStack_128;
      puVar1[0xb] = uStack_110;
      puVar1[10] = uStack_118;
      puVar1[0xd] = uStack_100;
      puVar1[0xc] = uStack_108;
      puVar1[1] = uStack_160;
      *puVar1 = uStack_168;
      puVar1[3] = uStack_150;
      puVar1[2] = uStack_158;
      puVar1[5] = uStack_140;
      puVar1[4] = uStack_148;
      puVar1[7] = uStack_130;
      puVar1[6] = uStack_138;
      lVar8 = alStack_208[1];
      lVar5 = 0x1000c5d08;
      func_0x000100043910(lVar14,alStack_208[1],0x1000c5d08,&UNK_10008c0a0);
      lVar3 = alStack_208[3];
      func_0x000100043910(plVar17,alStack_208[3],0x1000c5d38,&UNK_10008c0d0);
      func_0x000100043910(lVar8,lVar12,0x1000c5d08,&UNK_10008c0a0);
      lVar11 = 0x1000c5df0;
      func_0x0001000100d0(0x1000c5df0,&UNK_10008c148);
      func_0x000100043910(lVar3,lVar12 + *(int *)(lVar11 + 0x30),0x1000c5d38,&UNK_10008c0d0);
      func_0x000100043f64(plVar17,0x1000c5d38,&UNK_10008c0d0);
      func_0x000100043f64(lVar14,0x1000c5d08,&UNK_10008c0a0);
      func_0x000100043f64(lVar3,0x1000c5d38,&UNK_10008c0d0);
      func_0x000100043f64(lVar8,0x1000c5d08,&UNK_10008c0a0);
      __s7SwiftUI9AlignmentV10topLeadingACvgZ();
      plVar13[-2] = lVar8;
      plVar13[-1] = lVar5;
      *(undefined1 *)(plVar13 + -3) = 0;
      plVar13[-4] = 0x4064000000000000;
      *(undefined1 *)(plVar13 + -5) = 1;
      plVar13[-6] = 0;
      __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
                (&plStack_f8,0,1,0,1,0x7ff0000000000000,0,0x4064000000000000,0);
      plVar10 = plStack_1c8;
      lVar12 = alStack_208[7];
      lVar5 = alStack_208[5];
      puVar1 = (undefined8 *)((long)plStack_1c8 + (long)*(int *)(alStack_208[7] + 0x24));
      puVar1[9] = uStack_b0;
      puVar1[8] = uStack_b8;
      puVar1[0xb] = uStack_a0;
      puVar1[10] = uStack_a8;
      puVar1[0xd] = uStack_90;
      puVar1[0xc] = uStack_98;
      puVar1[1] = uStack_f0;
      *puVar1 = plStack_f8;
      puVar1[3] = uStack_e0;
      puVar1[2] = CONCAT62(uStack_e6,uStack_e8);
      puVar1[5] = uStack_d0;
      puVar1[4] = uStack_d8;
      puVar1[7] = uStack_c0;
      puVar1[6] = uStack_c8;
      uVar19 = 0x1000c5d10;
      puVar9 = &UNK_10008c0a8;
      func_0x000100043910(plStack_1c8,alStack_208[5],0x1000c5d10,&UNK_10008c0a8);
      lVar8 = lVar5;
      _swift_storeEnumTagMultiPayload(lVar5,alStack_208[4],1);
      func_0x000100043658();
      lVar14 = lVar8;
      func_0x0001000436f0();
      lVar11 = alStack_208[6];
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (alStack_208[6],lVar5,alStack_228[1],lVar12,lVar8,lVar14);
      lVar5 = lStack_1b0;
      func_0x000100043910(lVar11,lStack_1b0,0x1000c5d30,&UNK_10008c0c8);
      lVar14 = lVar5;
      _swift_storeEnumTagMultiPayload(lVar5,lStack_1c0,0);
      func_0x0001000435e0();
      lVar12 = lVar14;
      func_0x000100043788();
      __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
                (uStack_1a0,lVar5,lStack_1b8,lStack_1a8,lVar14,lVar12);
      _objc_release(alStack_228[0]);
      func_0x000100043f64(lVar11,0x1000c5d30,&UNK_10008c0c8);
    }
  }
  func_0x000100043f64(plVar10,uVar19,puVar9);
  return;
}



/* Entry: 10004159c; end: 1000424bb;  */

void FUN_10004159c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 ****ppppuVar22;
  undefined *puVar23;
  undefined8 ****ppppuVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *puVar25;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar26;
  long lVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  code *pcVar28;
  undefined8 uVar29;
  undefined8 uStack_870;
  undefined1 auStack_868 [8];
  undefined8 uStack_860;
  undefined1 auStack_858 [8];
  long alStack_850 [2];
  long alStack_840 [4];
  long lStack_820;
  undefined8 *puStack_818;
  long lStack_810;
  undefined8 *puStack_808;
  undefined8 ***pppuStack_800;
  uint uStack_7f4;
  long lStack_7f0;
  long lStack_7e8;
  long lStack_7e0;
  long lStack_7d8;
  long lStack_7d0;
  long lStack_7c8;
  long lStack_7c0;
  long lStack_7b8;
  long lStack_7b0;
  long lStack_7a8;
  undefined8 *puStack_7a0;
  uint uStack_794;
  char *pcStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  undefined1 auStack_770 [192];
  undefined8 ***pppuStack_6b0;
  undefined8 ***pppuStack_6a8;
  undefined1 uStack_6a0;
  undefined8 ***pppuStack_698;
  undefined *puStack_690;
  undefined *puStack_688;
  undefined8 uStack_680;
  undefined1 uStack_678;
  undefined *puStack_670;
  undefined8 uStack_668;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  long lStack_650;
  undefined8 ***pppuStack_648;
  undefined *puStack_640;
  undefined *puStack_638;
  long lStack_630;
  long lStack_628;
  undefined *puStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
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
  undefined8 ***pppuStack_5a0;
  undefined8 ***pppuStack_598;
  long lStack_590;
  undefined8 ***pppuStack_588;
  undefined *puStack_580;
  undefined *puStack_578;
  long lStack_570;
  long lStack_568;
  undefined *puStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
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
  undefined8 ***pppuStack_4e0;
  undefined8 ***pppuStack_4d8;
  undefined1 uStack_4d0;
  undefined7 uStack_4cf;
  undefined8 ***pppuStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  long lStack_4b0;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined *puStack_4a0;
  long lStack_498;
  undefined8 ***pppuStack_490;
  undefined8 ***pppuStack_488;
  long lStack_480;
  undefined8 ***pppuStack_478;
  undefined *puStack_470;
  undefined *puStack_468;
  long lStack_460;
  long lStack_458;
  undefined *puStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
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
  undefined8 ***pppuStack_3d0;
  undefined8 ***pppuStack_3c8;
  long lStack_3c0;
  undefined8 ***pppuStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined *puStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 uStack_310;
  undefined8 uStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 uStack_2e8;
  undefined8 ***pppuStack_2e0;
  undefined8 ***pppuStack_2d8;
  undefined8 uStack_2d0;
  undefined8 ***pppuStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined2 uStack_290;
  undefined8 ***pppuStack_280;
  undefined8 ***pppuStack_278;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined8 ***pppuStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  uint7 uStack_247;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 ***pppuStack_230;
  undefined8 ***pppuStack_228;
  undefined1 uStack_220;
  undefined8 ***pppuStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 ***pppuStack_1e0;
  undefined8 ***pppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 ***pppuStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 uStack_170;
  undefined8 ***pppuStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 ***pppuStack_130;
  undefined8 ***pppuStack_128;
  undefined8 uStack_120;
  undefined8 ***pppuStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [120];
  
  lVar8 = 0x1000c5e10;
  puStack_7a0 = param_1;
  func_0x0001000100d0(0x1000c5e10,&UNK_10008c168);
  lStack_7a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x1000c5e18;
  puStack_808 = (undefined8 *)((long)alStack_840 - extraout_x8);
  func_0x0001000100d0(0x1000c5e18,&UNK_10008c170);
  lStack_7f0 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar26 = ((long)alStack_840 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_840[3] = lVar26;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar26 = lVar26 - extraout_x12;
  lVar8 = 0x1000c5e20;
  lStack_810 = lVar26;
  func_0x0001000100d0(0x1000c5e20,&UNK_10008c178);
  lStack_7e8 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar26 - extraout_x8_01;
  lVar8 = 0x1000c5e28;
  lStack_7d8 = lVar26;
  func_0x0001000100d0(0x1000c5e28,&UNK_10008c180);
  lStack_7e0 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = (undefined8 *)(lVar26 - extraout_x8_02);
  lVar8 = 0x1000c5e30;
  puStack_818 = puVar25;
  func_0x0001000100d0(0x1000c5e30,&UNK_10008c188);
  alStack_840[1] = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar26 = (long)puVar25 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  alStack_840[2] = lVar26;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar26 = lVar26 - extraout_x12_00;
  lVar8 = 0x1000c5e38;
  lStack_820 = lVar26;
  func_0x0001000100d0(0x1000c5e38,&UNK_10008c190);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar26 = lVar26 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_7b0 = lVar26;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar26 = lVar26 - extraout_x12_01;
  lVar8 = 0x1000c5e40;
  func_0x0001000100d0(0x1000c5e40,&UNK_10008c198);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar27 = lVar26 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_7b8 = lVar27;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar27 = lVar27 - extraout_x12_02;
  lVar8 = 0x1000c5e48;
  lStack_780 = lVar27;
  func_0x0001000100d0(0x1000c5e48,&UNK_10008c1a0);
  lStack_788 = *(long *)(lVar8 + -8);
  lStack_7c8 = lVar8;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_788 + 0x40));
  lVar27 = lVar27 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lStack_7d0 = lVar27;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar27 = lVar27 - extraout_x12_03;
  ppppuVar9 = *(undefined8 *****)(param_6 + 0x18);
  ppppuVar10 = *(undefined8 *****)(param_6 + 0x20);
  uStack_794 = (uint)(byte)param_6[0x51];
  uStack_7f4 = (uint)(byte)param_6[0x38];
  lStack_7c0 = lVar26;
  pcStack_790 = param_6;
  lStack_778 = lVar27;
  if (uStack_7f4 == 1) {
    FUN_1000373c8();
  }
  else if (*param_6 == '\x01') {
    func_0x000100037660();
  }
  else {
    func_0x000100037514();
  }
  pppuStack_3d0 = ppppuVar9;
  pppuStack_3c8 = ppppuVar10;
  FUN_100010174();
  ppppuVar10 = &pppuStack_3d0;
  puVar13 = PTR___sSSN_1000b1180;
  pppuStack_800 = ppppuVar9;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  ppppuVar11 = ppppuVar10;
  _SIGStylesGet();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar12 = ppppuVar11;
  func_0x000100086980();
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(ppppuVar11);
  __s7SwiftUI4FontVyACSo9CTFontRefacfC();
  ppppuVar11 = ppppuVar12;
  ppppuVar22 = ppppuVar10;
  puVar23 = puVar13;
  ppppuVar24 = ppppuVar9;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(ppppuVar12);
  func_0x000100022a4c(ppppuVar10,puVar13,ppppuVar9);
  _swift_bridgeObjectRelease();
  if (uStack_794 == 1) {
    __s7SwiftUI5ColorV7primaryACvgZ();
  }
  else {
    param_9 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  }
  puVar13 = &UNK_10008c1a8;
  _swift_getKeyPath();
  puVar14 = &UNK_10008c1d8;
  _swift_getKeyPath();
  uStack_270 = SUB81(puVar23,0);
  uStack_250 = 2;
  uStack_248 = 0;
  uStack_238 = 0x3feb851eb851eb85;
  lStack_148 = (ulong)uStack_247 << 8;
  uStack_150 = 2;
  uStack_138 = 0x3feb851eb851eb85;
  uStack_170 = CONCAT71(uStack_26f,uStack_270);
  uStack_200 = 2;
  uStack_1f8 = 0;
  uStack_1e8 = 0x3feb851eb851eb85;
  uVar29 = 0x1000c5bc8;
  pppuStack_280 = ppppuVar11;
  pppuStack_278 = ppppuVar22;
  pppuStack_268 = ppppuVar24;
  puStack_260 = param_9;
  puStack_258 = puVar13;
  puStack_240 = puVar14;
  pppuStack_230 = ppppuVar11;
  pppuStack_228 = ppppuVar22;
  uStack_220 = uStack_270;
  pppuStack_218 = ppppuVar24;
  puStack_210 = param_9;
  puStack_208 = puVar13;
  puStack_1f0 = puVar14;
  pppuStack_180 = ppppuVar11;
  pppuStack_178 = ppppuVar22;
  pppuStack_168 = ppppuVar24;
  puStack_160 = param_9;
  puStack_158 = puVar13;
  puStack_140 = puVar14;
  func_0x000100043e94(&pppuStack_280,&pppuStack_3d0,0x1000c5bc8,&UNK_10008be98);
  ppppuVar9 = &pppuStack_230;
  func_0x000100043edc(ppppuVar9,0x1000c5bc8,&UNK_10008be98);
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  puStack_1b8 = puStack_158;
  puStack_1c0 = puStack_160;
  lStack_1a8 = lStack_148;
  uStack_1b0 = uStack_150;
  uStack_198 = uStack_138;
  puStack_1a0 = puStack_140;
  pppuStack_1c8 = pppuStack_168;
  uStack_1d0 = uStack_170;
  pppuStack_1d8 = pppuStack_178;
  pppuStack_1e0 = pppuStack_180;
  uStack_190 = 0x100;
  *(undefined8 *****)(lVar27 + -0x10) = ppppuVar9;
  *(undefined8 *)(lVar27 + -8) = uVar29;
  *(undefined1 *)(lVar27 + -0x18) = 1;
  *(undefined8 *)(lVar27 + -0x20) = 0;
  *(undefined1 *)(lVar27 + -0x28) = 1;
  *(undefined8 *)(lVar27 + -0x30) = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (auStack_d8,0,1,0,1,0x7ff0000000000000,0,0,1);
  puStack_108 = puStack_1b8;
  puStack_110 = puStack_1c0;
  lStack_f8 = lStack_1a8;
  uStack_100 = uStack_1b0;
  uStack_e8 = uStack_198;
  puStack_f0 = puStack_1a0;
  uStack_e0 = uStack_190;
  pppuStack_128 = pppuStack_1d8;
  pppuStack_130 = pppuStack_1e0;
  pppuStack_118 = pppuStack_1c8;
  uStack_120 = uStack_1d0;
  puStack_2b8 = puStack_158;
  puStack_2c0 = puStack_160;
  lStack_2a8 = lStack_148;
  uStack_2b0 = uStack_150;
  uStack_298 = uStack_138;
  puStack_2a0 = puStack_140;
  pppuStack_2c8 = pppuStack_168;
  uStack_2d0 = uStack_170;
  pppuStack_2d8 = pppuStack_178;
  pppuStack_2e0 = pppuStack_180;
  uStack_290 = 0x100;
  puVar13 = &UNK_10008c210;
  func_0x000100043e94(&pppuStack_1e0,&pppuStack_3d0,0x1000c5e50);
  func_0x000100043edc(&pppuStack_2e0,0x1000c5e50,&UNK_10008c210);
  lVar8 = 0x1000c5e58;
  lVar26 = lVar8;
  func_0x0001000100d0(0x1000c5e58,&UNK_10008c218);
  lVar15 = lVar26;
  func_0x000100043aa0();
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(lStack_778,1,lVar26,lVar15);
  ppppuVar9 = &pppuStack_130;
  func_0x000100043edc(ppppuVar9,0x1000c5e58,&UNK_10008c218);
  FUN_1000424bc();
  if (lVar8 == 0) {
    lVar8 = 0x1000c5e70;
    func_0x0001000100d0(0x1000c5e70,&UNK_10008c228);
    uVar29 = 1;
    lVar26 = lStack_780;
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lStack_780,1,1,lVar8);
  }
  else {
    ppppuVar10 = &pppuStack_3d0;
    puVar23 = PTR___sSSN_1000b1180;
    ppppuVar22 = (undefined8 ****)pppuStack_800;
    pppuStack_3d0 = ppppuVar9;
    pppuStack_3c8 = (undefined8 ***)lVar8;
    __s7SwiftUI4TextVyACxcSyRzlufC();
    ppppuVar9 = ppppuVar10;
    _SIGStylesGet();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar11 = ppppuVar9;
    func_0x000100086980();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(ppppuVar9);
    __s7SwiftUI4FontVyACSo9CTFontRefacfC();
    ppppuVar9 = ppppuVar11;
    ppppuVar12 = ppppuVar10;
    puVar14 = puVar23;
    ppppuVar24 = ppppuVar22;
    __s7SwiftUI4TextV4fontyAcA4FontVSgF();
    _swift_release(ppppuVar11);
    func_0x000100022a4c(ppppuVar10,puVar23,ppppuVar22);
    _swift_bridgeObjectRelease();
    if (uStack_794 == 1) {
      __s7SwiftUI5ColorV9secondaryACvgZ();
    }
    else {
      puVar13 = PTR__OBJC_CLASS___UIColor_1000c20f8;
      _objc_opt_self();
      func_0x0001000875e0();
      _objc_retainAutoreleasedReturnValue();
      __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    }
    puVar16 = &UNK_10008c1a8;
    _swift_getKeyPath();
    puVar17 = &UNK_10008c1d8;
    _swift_getKeyPath();
    puVar18 = puVar17;
    __s7SwiftUI9AlignmentV7leadingACvgZ();
    lStack_4b0 = 1;
    uStack_4a8 = 0;
    lStack_498 = 0x3fec28f5c28f5c29;
    pppuStack_4e0 = ppppuVar9;
    pppuStack_4d8 = ppppuVar12;
    uStack_4d0 = (char)puVar14;
    pppuStack_4c8 = ppppuVar24;
    puStack_4c0 = puVar13;
    puStack_4b8 = puVar16;
    puStack_4a0 = puVar17;
    *(undefined **)(lVar27 + -0x10) = puVar18;
    *(undefined **)(lVar27 + -8) = puVar23;
    *(undefined1 *)(lVar27 + -0x18) = 1;
    *(undefined8 *)(lVar27 + -0x20) = 0;
    *(undefined1 *)(lVar27 + -0x28) = 1;
    *(undefined8 *)(lVar27 + -0x30) = 0;
    __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
              (&lStack_440,0,1,0,1,0x7ff0000000000000,0,0,1);
    lStack_458 = CONCAT71(uStack_4a7,uStack_4a8);
    puStack_468 = puStack_4b8;
    puStack_470 = puStack_4c0;
    lStack_460 = lStack_4b0;
    lStack_448 = lStack_498;
    puStack_450 = puStack_4a0;
    lStack_480 = CONCAT71(uStack_4cf,uStack_4d0);
    pppuStack_488 = pppuStack_4d8;
    pppuStack_490 = pppuStack_4e0;
    pppuStack_478 = pppuStack_4c8;
    uStack_680 = 1;
    uStack_678 = 0;
    uStack_668 = 0x3fec28f5c28f5c29;
    pppuStack_6b0 = ppppuVar9;
    pppuStack_6a8 = ppppuVar12;
    uStack_6a0 = (char)puVar14;
    pppuStack_698 = ppppuVar24;
    puStack_690 = puVar13;
    puStack_688 = puVar16;
    puStack_670 = puVar17;
    func_0x000100043e94(&pppuStack_4e0,&pppuStack_3d0,0x1000c5bc8,&UNK_10008be98);
    ppppuVar9 = &pppuStack_6b0;
    func_0x000100043edc(ppppuVar9,0x1000c5bc8,&UNK_10008be98);
    uVar7 = SUB81(ppppuVar9,0);
    __s7SwiftUI4EdgeO3SetV3topAEvgZ();
    uStack_5d8 = uStack_408;
    uStack_5e0 = uStack_410;
    uStack_5c8 = uStack_3f8;
    uStack_5d0 = uStack_400;
    uStack_5b8 = uStack_3e8;
    uStack_5c0 = uStack_3f0;
    uStack_5a8 = uStack_3d8;
    uStack_5b0 = uStack_3e0;
    lStack_618 = lStack_448;
    puStack_620 = puStack_450;
    lStack_608 = lStack_438;
    lStack_610 = lStack_440;
    lStack_5f8 = lStack_428;
    lStack_600 = lStack_430;
    uStack_5e8 = uStack_418;
    uStack_5f0 = uStack_420;
    pppuStack_658 = pppuStack_488;
    pppuStack_660 = pppuStack_490;
    pppuStack_648 = pppuStack_478;
    lStack_650 = lStack_480;
    puStack_638 = puStack_468;
    puStack_640 = puStack_470;
    lStack_628 = lStack_458;
    lStack_630 = lStack_460;
    uVar29 = 0x4010000000000000;
    lVar8 = lStack_460;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    uStack_348 = uStack_408;
    uStack_350 = uStack_410;
    uStack_338 = uStack_3f8;
    uStack_340 = uStack_400;
    uStack_328 = uStack_3e8;
    uStack_330 = uStack_3f0;
    uStack_318 = uStack_3d8;
    uStack_320 = uStack_3e0;
    lStack_388 = lStack_448;
    puStack_390 = puStack_450;
    lStack_378 = lStack_438;
    lStack_380 = lStack_440;
    lStack_368 = lStack_428;
    lStack_370 = lStack_430;
    uStack_358 = uStack_418;
    uStack_360 = uStack_420;
    pppuStack_3c8 = pppuStack_488;
    pppuStack_3d0 = pppuStack_490;
    pppuStack_3b8 = pppuStack_478;
    lStack_3c0 = lStack_480;
    puStack_3a8 = puStack_468;
    puStack_3b0 = puStack_470;
    lStack_398 = lStack_458;
    lStack_3a0 = lStack_460;
    uStack_518 = uStack_408;
    uStack_520 = uStack_410;
    uStack_508 = uStack_3f8;
    uStack_510 = uStack_400;
    uStack_4f8 = uStack_3e8;
    uStack_500 = uStack_3f0;
    uStack_4e8 = uStack_3d8;
    uStack_4f0 = uStack_3e0;
    lStack_558 = lStack_448;
    puStack_560 = puStack_450;
    lStack_548 = lStack_438;
    lStack_550 = lStack_440;
    lStack_538 = lStack_428;
    lStack_540 = lStack_430;
    uStack_528 = uStack_418;
    uStack_530 = uStack_420;
    uStack_2e8 = 0;
    pppuStack_598 = pppuStack_488;
    pppuStack_5a0 = pppuStack_490;
    pppuStack_588 = pppuStack_478;
    lStack_590 = lStack_480;
    puStack_578 = puStack_468;
    puStack_580 = puStack_470;
    lStack_568 = lStack_458;
    lStack_570 = lStack_460;
    uStack_310 = uVar7;
    uStack_308 = uVar29;
    lStack_300 = lVar8;
    uStack_2f8 = param_4;
    uStack_2f0 = param_5;
    func_0x000100043e94(&pppuStack_660,auStack_770,0x1000c5ea0,&UNK_10008c248);
    func_0x000100043edc(&pppuStack_5a0,0x1000c5ea0,&UNK_10008c248);
    uVar29 = 0x1000c5ea8;
    func_0x0001000100d0(0x1000c5ea8,&UNK_10008c250);
    uVar19 = uVar29;
    func_0x000100043b90();
    lVar26 = lStack_780;
    __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(lStack_780,1,uVar29,uVar19);
    func_0x000100043edc(&pppuStack_3d0,0x1000c5ea8,&UNK_10008c250);
    lVar8 = 0x1000c5e70;
    param_4 = uStack_3f0;
    param_5 = uStack_400;
    func_0x0001000100d0(0x1000c5e70,&UNK_10008c228);
    uVar29 = 0;
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar26,0,1,lVar8);
  }
  lVar15 = lStack_810;
  lVar8 = lStack_820;
  if (uStack_7f4 == 1) {
    FUN_1000425bc(lStack_820);
    __s7SwiftUI9AlignmentV6centerACvgZ();
    *(long *)(lVar27 + -0x10) = lVar26;
    *(undefined8 *)(lVar27 + -8) = uVar29;
    *(undefined1 *)(lVar27 + -0x18) = 0;
    *(undefined8 *)(lVar27 + -0x20) = 0x4046000000000000;
    *(undefined1 *)(lVar27 + -0x28) = 1;
    *(undefined8 *)(lVar27 + -0x30) = 0;
    uVar7 = 0;
    __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
              (&pppuStack_3d0,0,1,0,1,0x7ff0000000000000,0,0x4046000000000000,0);
    plVar1 = (long *)(lVar8 + *(int *)(lStack_7f0 + 0x24));
    plVar1[9] = lStack_388;
    plVar1[8] = (long)puStack_390;
    plVar1[0xb] = lStack_378;
    plVar1[10] = lStack_380;
    plVar1[0xd] = lStack_368;
    plVar1[0xc] = lStack_370;
    plVar1[1] = (long)pppuStack_3c8;
    *plVar1 = (long)pppuStack_3d0;
    plVar1[3] = (long)pppuStack_3b8;
    plVar1[2] = lStack_3c0;
    plVar1[5] = (long)puStack_3a8;
    plVar1[4] = (long)puStack_3b0;
    plVar1[7] = lStack_398;
    plVar1[6] = lStack_3a0;
    puVar13 = puStack_3b0;
    __s7SwiftUI4EdgeO3SetV3topAEvgZ();
    uVar29 = 0x4028000000000000;
    __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
    lVar27 = alStack_840[2];
    puVar2 = (undefined1 *)(lVar8 + *(int *)(alStack_840[1] + 0x24));
    *puVar2 = uVar7;
    *(undefined8 *)(puVar2 + 8) = uVar29;
    *(undefined **)(puVar2 + 0x10) = puVar13;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    puVar2[0x28] = 0;
    uVar29 = 0x1000c5e30;
    puVar13 = &UNK_10008c188;
    func_0x000100043e94(lVar8,alStack_840[2],0x1000c5e30,&UNK_10008c188);
    puVar25 = puStack_818;
    func_0x000100043e94(lVar27,puStack_818,0x1000c5e30,&UNK_10008c188);
    lVar26 = 0x1000c5e98;
    func_0x0001000100d0(0x1000c5e98,&UNK_10008c240);
    puVar3 = (undefined8 *)((long)puVar25 + (long)*(int *)(lVar26 + 0x30));
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    func_0x000100043edc(lVar27,0x1000c5e30,&UNK_10008c188);
    lVar26 = lStack_7d8;
    uVar19 = 0x1000c5e28;
    puVar23 = &UNK_10008c180;
    func_0x000100043e94(puVar25,lStack_7d8,0x1000c5e28,&UNK_10008c180);
    _swift_storeEnumTagMultiPayload(lVar26,lStack_7e8,0);
    puVar14 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940;
    uVar20 = 0x1000c5e80;
    func_0x0001000441a0(0x1000c5e80,0x1000c5e28,&UNK_10008c180,
                        PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940);
    lVar15 = lVar8;
  }
  else {
    FUN_1000425bc(lStack_810);
    __s7SwiftUI9AlignmentV6centerACvgZ();
    *(long *)(lVar27 + -0x10) = lVar26;
    *(undefined8 *)(lVar27 + -8) = uVar29;
    *(undefined1 *)(lVar27 + -0x18) = 0;
    *(undefined8 *)(lVar27 + -0x20) = 0x4046000000000000;
    *(undefined1 *)(lVar27 + -0x28) = 1;
    *(undefined8 *)(lVar27 + -0x30) = 0;
    __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
              (&pppuStack_3d0,0,1,0,1,0x7ff0000000000000,0,0x4046000000000000,0);
    lVar26 = alStack_840[3];
    plVar1 = (long *)(lVar15 + *(int *)(lStack_7f0 + 0x24));
    plVar1[9] = lStack_388;
    plVar1[8] = (long)puStack_390;
    plVar1[0xb] = lStack_378;
    plVar1[10] = lStack_380;
    plVar1[0xd] = lStack_368;
    plVar1[0xc] = lStack_370;
    plVar1[1] = (long)pppuStack_3c8;
    *plVar1 = (long)pppuStack_3d0;
    plVar1[3] = (long)pppuStack_3b8;
    plVar1[2] = lStack_3c0;
    plVar1[5] = (long)puStack_3a8;
    plVar1[4] = (long)puStack_3b0;
    plVar1[7] = lStack_398;
    plVar1[6] = lStack_3a0;
    uVar29 = 0x1000c5e18;
    puVar13 = &UNK_10008c170;
    func_0x000100043e94(lVar15,alStack_840[3],0x1000c5e18,&UNK_10008c170);
    puVar25 = puStack_808;
    *puStack_808 = 0x4028000000000000;
    *(undefined1 *)(puVar25 + 1) = 0;
    lVar8 = 0x1000c5e78;
    func_0x0001000100d0(0x1000c5e78,&UNK_10008c230);
    func_0x000100043e94(lVar26,(long)puVar25 + (long)*(int *)(lVar8 + 0x30),0x1000c5e18,
                        &UNK_10008c170);
    func_0x000100043edc(lVar26,0x1000c5e18,&UNK_10008c170);
    lVar26 = lStack_7d8;
    uVar19 = 0x1000c5e10;
    puVar23 = &UNK_10008c168;
    func_0x000100043e94(puVar25,lStack_7d8,0x1000c5e10,&UNK_10008c168);
    _swift_storeEnumTagMultiPayload(lVar26,lStack_7e8,1);
    puVar14 = PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940;
    uVar20 = 0x1000c5e80;
    func_0x0001000441a0(0x1000c5e80,0x1000c5e28,&UNK_10008c180,
                        PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_1000b0940);
  }
  uVar21 = 0x1000c5e88;
  func_0x0001000441a0(0x1000c5e88,0x1000c5e10,&UNK_10008c168,puVar14);
  lVar4 = lStack_7c0;
  __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
            (lStack_7c0,lVar26,lStack_7e0,lStack_7a8,uVar20,uVar21);
  func_0x000100043edc(lVar15,uVar29,puVar13);
  func_0x000100043edc(puVar25,uVar19,puVar23);
  lVar27 = lStack_7c8;
  lVar26 = lStack_7d0;
  pcVar28 = *(code **)(lStack_788 + 0x10);
  (*pcVar28)(lStack_7d0,lStack_778,lStack_7c8);
  lVar6 = lStack_780;
  lVar15 = lStack_7b8;
  func_0x000100043f1c(lStack_780,lStack_7b8,0x1000c5e40,&UNK_10008c198);
  lVar5 = lStack_7b0;
  func_0x000100043e94(lVar4,lStack_7b0,0x1000c5e38,&UNK_10008c190);
  puVar25 = puStack_7a0;
  *puStack_7a0 = 0;
  *(undefined1 *)(puStack_7a0 + 1) = 0;
  lVar8 = 0x1000c5e90;
  func_0x0001000100d0(0x1000c5e90,&UNK_10008c238);
  (*pcVar28)((long)puVar25 + (long)*(int *)(lVar8 + 0x30),lVar26,lVar27);
  func_0x000100043f1c(lVar15,(long)puVar25 + (long)*(int *)(lVar8 + 0x40),0x1000c5e40,&UNK_10008c198
                     );
  func_0x000100043e94(lVar5,(long)puVar25 + (long)*(int *)(lVar8 + 0x50),0x1000c5e38,&UNK_10008c190)
  ;
  func_0x000100043edc(lVar4,0x1000c5e38,&UNK_10008c190);
  func_0x000100043f64(lVar6,0x1000c5e40,&UNK_10008c198);
  pcVar28 = *(code **)(lStack_788 + 8);
  (*pcVar28)(lStack_778,lVar27);
  func_0x000100043edc(lVar5,0x1000c5e38,&UNK_10008c190);
  func_0x000100043f64(lVar15,0x1000c5e40,&UNK_10008c198);
  (*pcVar28)(lVar26,lVar27);
  return;
}



/* Entry: 1000424bc; end: 1000425bb;  */

undefined1  [16] FUN_1000424bc(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  uVar4 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  puVar3 = (undefined *)0x0;
  if (*(char *)(unaff_x20 + 0x38) == '\0') {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_50 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_48 = uVar6;
    _swift_bridgeObjectRetain(uVar6,0);
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(uVar4);
    FUN_100010174();
    uVar2 = uVar4;
    puVar3 = PTR___sSSN_1000b1180;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (uVar4,PTR___sSSN_1000b1180,uVar6);
    (**(code **)(lVar5 + 8))(uVar4,lVar1);
    func_0x00010003a7d4(&uStack_50);
    uVar4 = uVar2 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar4 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar4 == 0) {
      _swift_bridgeObjectRelease(puVar3);
      uVar2 = 0;
      puVar3 = (undefined *)0x0;
    }
  }
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 1000425bc; end: 100043293;  */

void FUN_1000425bc(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar13;
  long *plVar14;
  long alStack_70 [2];
  
  lVar5 = 0x1000c5ec0;
  func_0x0001000100d0(0x1000c5ec0,&UNK_10008c258);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar10 = (long *)((long)alStack_70 - extraout_x8);
  lVar3 = 0x1000c5ec8;
  func_0x0001000100d0(0x1000c5ec8,&UNK_10008c260);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)plVar10 - extraout_x8_00;
  lVar4 = 0x1000c5ed0;
  func_0x0001000100d0(0x1000c5ed0,&UNK_10008c268);
  lVar6 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar14 = (long *)(lVar13 - extraout_x8_01);
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    alStack_70[0] = lVar5;
    alStack_70[1] = param_1;
    __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
    *plVar14 = lVar6;
    plVar14[1] = 0x4020000000000000;
    *(undefined1 *)(plVar14 + 2) = 0;
    lVar5 = 0x1000c5f18;
    func_0x0001000100d0(0x1000c5f18,&UNK_10008c288);
    puVar1 = (undefined8 *)((long)plVar14 + (long)*(int *)(lVar5 + 0x2c));
    if (lRam00000001000c5830 != -1) {
      _swift_once(0x1000c5830,0x100037158);
    }
    uVar9 = uRam00000001000d0ef8;
    uVar11 = uRam00000001000d0ef0;
    lVar5 = 0;
    FUN_10003b400();
    iVar2 = *(int *)(lVar5 + 0x18);
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))((long)puVar1 + (long)iVar2,1,1,lVar6);
    *puVar1 = uVar11;
    puVar1[1] = uVar9;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x1c)) = 0x4046000000000000;
    uVar11 = 0x1000c5ed0;
    puVar12 = &UNK_10008c268;
    func_0x000100043e94(plVar14,lVar13,0x1000c5ed0,&UNK_10008c268);
    _swift_storeEnumTagMultiPayload(lVar13,lVar3,0);
    uVar8 = 0x1000c5ed8;
    func_0x0001000441a0(0x1000c5ed8,0x1000c5ed0,&UNK_10008c268,
                        PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
    uVar7 = uVar8;
    func_0x000100043c80();
    _swift_bridgeObjectRetain(uVar9);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (alStack_70[1],lVar13,lVar4,alStack_70[0],uVar8,uVar7);
    plVar10 = plVar14;
  }
  else {
    func_0x000100042bfc(plVar10);
    uVar11 = 0x1000c5ec0;
    puVar12 = &UNK_10008c258;
    func_0x000100043e94(plVar10,lVar13,0x1000c5ec0,&UNK_10008c258);
    _swift_storeEnumTagMultiPayload(lVar13,lVar3,1);
    uVar8 = 0x1000c5ed8;
    func_0x0001000441a0(0x1000c5ed8,0x1000c5ed0,&UNK_10008c268,
                        PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
    uVar9 = uVar8;
    func_0x000100043c80();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,lVar13,lVar4,lVar5,uVar8,uVar9);
  }
  func_0x000100043edc(plVar10,uVar11,puVar12);
  return;
}



/* Entry: 100043294; end: 1000432ff;  */

void FUN_100043294(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam00000001000c5818 != -1) {
    _swift_once(0x1000c5818,FUN_100037088);
  }
  uVar1 = uRam00000001000d0f28;
  *param_1 = uRam00000001000d0f20;
  param_1[1] = uVar1;
  param_1[2] = 0x1e2;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0x4046000000000000;
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)();
  return;
}



/* Entry: 100043300; end: 10004358b;  */

void FUN_100043300(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long alStack_90 [6];
  
  lVar10 = 0;
  alStack_90[5] = param_1;
  FUN_10003b400();
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar12 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_90[4] = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar12 = lVar12 - extraout_x12;
  alStack_90[3] = lVar12;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar13 = (undefined8 *)(lVar12 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar14 = (undefined8 *)((long)puVar13 - extraout_x12_01);
  if (lRam00000001000c5828 != -1) {
    _swift_once(0x1000c5828,0x100037228);
  }
  puVar7 = puRam00000001000d0f18;
  alStack_90[1] = uRam00000001000d0f10;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar11 = puRam00000001000d0f18;
  _swift_bridgeObjectRetain();
  __s33FriendingLiveActivityWidgetBridge0abC13ExtensionKeysO8referrerSSvau();
  uVar2 = *puVar11;
  uVar4 = puVar11[1];
  iVar5 = *(int *)(lVar10 + 0x18);
  _swift_bridgeObjectRetain(uVar4);
  alStack_90[2] = uVar1;
  __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng4ChatD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
            ((long)puVar14 + (long)iVar5,uVar1,uVar3,uVar2,uVar4,0,0,2);
  _swift_bridgeObjectRelease(uVar4);
  *puVar14 = alStack_90[1];
  puVar14[1] = puVar7;
  puVar14[2] = 0x77;
  *(undefined1 *)(puVar14 + 3) = 0;
  *(undefined8 *)((long)puVar14 + (long)*(int *)(lVar10 + 0x1c)) = 0x4046000000000000;
  if (lRam00000001000c5820 != -1) {
    _swift_once(0x1000c5820,0x1000372f8);
  }
  uVar6 = uRam00000001000d0f08;
  uVar4 = uRam00000001000d0f00;
  uVar1 = *puVar11;
  uVar2 = puVar11[1];
  iVar5 = *(int *)(lVar10 + 0x18);
  _swift_bridgeObjectRetain(uRam00000001000d0f08);
  _swift_bridgeObjectRetain(uVar2);
  __s21SnapchatWidgetsShared16DeeplinkBuildersO010buildOneOng11ReplyCameraD06userId8referrer11widgetShape8loggedIn10Foundation3URLVSgSS_S2SSgSbSgtFZ
            ((long)puVar13 + (long)iVar5,alStack_90[2],uVar3,uVar1,uVar2,0,0,2);
  _swift_bridgeObjectRelease(uVar2);
  *puVar13 = uVar4;
  puVar13[1] = uVar6;
  puVar13[2] = 0x65;
  *(undefined1 *)(puVar13 + 3) = 0;
  *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar10 + 0x1c)) = 0x4046000000000000;
  lVar12 = alStack_90[3];
  FUN_100043dd8(puVar14,alStack_90[3]);
  lVar8 = alStack_90[4];
  FUN_100043dd8(puVar13,alStack_90[4]);
  lVar9 = alStack_90[5];
  FUN_100043dd8(lVar12,alStack_90[5]);
  lVar10 = 0x1000c5f38;
  func_0x0001000100d0(0x1000c5f38,&UNK_10008c2a8);
  FUN_100043dd8(lVar8,lVar9 + *(int *)(lVar10 + 0x30));
  func_0x000100043e1c(puVar13);
  func_0x000100043e1c(puVar14);
  func_0x000100043e1c(lVar8);
  func_0x000100043e1c(lVar12);
  return;
}



/* Entry: 10004358c; end: 100043597;  */

void FUN_10004358c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100043598; end: 100043d17;  */

void FUN_100043598(void)

{
  func_0x000100040610();
  return;
}



/* Entry: 100043d18; end: 100043dd7;  */

void FUN_100043d18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (puRam00000001000c5ee8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5ef0;
  func_0x000100010120(0x1000c5ef0,&UNK_10008c270);
  puVar4 = PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888;
  uVar2 = 0x1000c5ef8;
  func_0x0001000441a0(0x1000c5ef8,0x1000c5f00,&UNK_10008c278,
                      PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  uVar3 = 0x1000c5f08;
  func_0x0001000441a0(0x1000c5f08,0x1000c5f10,&UNK_10008c280,puVar4);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_40);
  puRam00000001000c5ee8 = puVar4;
  return;
}



/* Entry: 100043dd8; end: 100043fa3;  */

undefined8 FUN_100043dd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10003b400();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100043fa4; end: 100043fa7;  */

void FUN_100043fa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5f78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5d00;
  func_0x000100010120(0x1000c5d00,&UNK_10008c098);
  uVar2 = uVar1;
  func_0x000100044040();
  uVar3 = 0x1000c5fa8;
  func_0x0001000441a0(0x1000c5fa8,0x1000c5fb0,&UNK_10008c2d8,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5f78 = puVar4;
  return;
}



/* Entry: 100043fa8; end: 1000441e3;  */

void FUN_100043fa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5f78 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5d00;
  func_0x000100010120(0x1000c5d00,&UNK_10008c098);
  uVar2 = uVar1;
  func_0x000100044040();
  uVar3 = 0x1000c5fa8;
  func_0x0001000441a0(0x1000c5fa8,0x1000c5fb0,&UNK_10008c2d8,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5f78 = puVar4;
  return;
}



/* Entry: 1000441e4; end: 1000441f3;  */

undefined1  [16] FUN_1000441e4(void)

{
  return ZEXT816(0x1000b4808);
}



/* Entry: 1000441f4; end: 10004435f;  */

void FUN_1000441f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = 0x1000c6180;
  func_0x0001000100d0(0x1000c6180,&UNK_10008c3d8);
  _swift_allocObject();
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  uVar5 = uVar2;
  _swift_allocObject();
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  puVar4 = PTR___swiftEmptyArrayStorage_1000b14d0;
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  FUN_100053284();
  *(undefined **)(lVar1 + 0x18) = puVar3;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  lVar1 = 0x1000c6188;
  func_0x0001000100d0(0x1000c6188,&UNK_10008c3e0);
  _swift_allocObject();
  _swift_allocObject(uVar2,0x18,7);
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x000100053298();
  *(undefined **)(lVar1 + 0x18) = puVar4;
  *(long *)(unaff_x20 + 0x30) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar4 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000c2108;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar5 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010009da30);
  func_0x000100086c20();
  _objc_release(param_1);
  _objc_release(uVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar4;
  return;
}



/* Entry: 100044360; end: 100044f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100044360(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,ulong param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000100045ad0();
  lVar4 = lVar3;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar4 + _DAT_1000c6138);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(long *)(lVar4 + _DAT_1000c6140) = param_1;
  puVar2 = PTR_s_init_1000c1bf0;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  _swift_bridgeObjectRetain(param_3);
  _objc_retain(param_1);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  plVar6 = param_4;
  uVar9 = param_5;
  func_0x000100044ff0();
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar5;
    FUN_10004b0e8(plVar5);
    if (uVar9 >> 0x3c < 0xf) {
      plVar8 = plVar7;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
      func_0x000100087960(plVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(plVar8);
      __ss11_StringGutsV4growyySiF(0x66);
      __sSS6appendyySSF(0xd000000000000056,0x800000010009d9d0);
      __sSS6appendyySSF(param_2,param_3);
      __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
      __sSS6appendyySSF(param_4,param_5);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
      _objc_release();
      _objc_release(plVar5);
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_1000275d4(plVar7,uVar9);
      plVar5 = plVar6;
    }
    else {
      _objc_release(plVar6);
    }
  }
  _objc_release(plVar5);
  return;
}



/* Entry: 100044f30; end: 1000450af;  */

long FUN_100044f30(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    func_0x0001000877a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar3 != 0) {
      _objc_retain(lVar3);
      uVar1 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010009d900);
      lVar2 = lVar3;
      func_0x000100087580(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(lVar3);
      _objc_release(lVar3);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 1000450b0; end: 1000450eb;  */

void FUN_1000450b0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 1000450ec; end: 1000450f7; +[_TtC23MapFriendLocationWidget16BitmojiCacheInfo supportsSecureCoding] */

undefined1 FUN_1000450ec(void)

{
  return uRam00000001000c6179;
}



/* Entry: 1000450f8; end: 100045103; +[_TtC23MapFriendLocationWidget16BitmojiCacheInfo setSupportsSecureCoding:] */

void FUN_1000450f8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam00000001000c6179 = param_3;
  return;
}



/* Entry: 100045104; end: 100045403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100045104(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar8 = &stack0xffffffffffffff40;
  uVar3 = 0x692d726174617661;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x692d726174617661,0xe900000000000064);
  lVar4 = param_1;
  func_0x0001000867a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_1000b14c8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_1000b14c8 + 8,PTR___sSSN_1000b1180,6);
    uVar2 = uStack_a8;
    uVar3 = uStack_b0;
    if (((ulong)puVar5 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1000453ac;
    }
    uVar6 = 0x2d72656b63697473;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2d72656b63697473,0xea00000000006469);
    lVar4 = param_1;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar4 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      puVar5 = &uStack_b0;
      _swift_dynamicCast(puVar5,&uStack_80,puVar1 + 8,PTR___sSSN_1000b1180,6);
      uVar6 = uStack_b0;
      if (((ulong)puVar5 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar7 = 0x2d696a6f6d746962;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2d696a6f6d746962,0xed00006567616d69)
        ;
        lVar4 = param_1;
        func_0x0001000867a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (lVar4 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uStack_a8);
          goto LAB_10004539c;
        }
        uVar7 = 0;
        func_0x000100045af0(0);
        puVar5 = &uStack_b0;
        _swift_dynamicCast(puVar5,&uStack_80,puVar1 + 8,uVar7,6);
        if (((ulong)puVar5 & 1) != 0) {
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_1000c60f8);
          *puVar5 = uVar3;
          puVar5[1] = uVar2;
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_1000c6100);
          *puVar5 = uVar6;
          puVar5[1] = uStack_a8;
          *(undefined8 *)(unaff_x20 + _DAT_1000c6108) = uStack_b0;
          func_0x000100045ab0();
          _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1000c1bf0);
          _objc_release(param_1);
          return puVar8;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uStack_a8);
      }
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1000453ac;
    }
    _objc_release(param_1);
LAB_10004539c:
    _swift_bridgeObjectRelease(uVar2);
  }
  FUN_10001d070(&uStack_80);
LAB_1000453ac:
  func_0x000100045ab0();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 100045404; end: 10004542b; -[_TtC23MapFriendLocationWidget16BitmojiCacheInfo initWithCoder:] */

void FUN_100045404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_100045104();
  return;
}



/* Entry: 10004542c; end: 100045547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004542c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000c60f8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1000c60f8))[1]);
  uVar1 = 0x692d726174617661;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x692d726174617661,0xe900000000000064);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000c6100);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1000c6100))[1]);
  uVar1 = 0x2d72656b63697473;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2d72656b63697473,0xea00000000006469);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x2d696a6f6d746962;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2d696a6f6d746962,0xed00006567616d69);
  func_0x0001000868e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(uVar2);
  return;
}



/* Entry: 100045548; end: 100045597; -[_TtC23MapFriendLocationWidget16BitmojiCacheInfo encodeWithCoder:] */

void FUN_100045548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10004542c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_1);
  return;
}



/* Entry: 100045598; end: 1000455c3; -[_TtC23MapFriendLocationWidget16BitmojiCacheInfo init] */

void FUN_100045598(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapFriendLocationWidget.BitmojiCacheInfo",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000455c4);
  (*pcVar1)();
}



/* Entry: 1000455c4; end: 1000455cf;  */

void FUN_1000455c4(void)

{
  (*(code *)0x100045ab0)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 1000455d0; end: 10004561f; -[_TtC23MapFriendLocationWidget16BitmojiCacheInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000455d0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000c60f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000c6100 + 8));
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(*(undefined8 *)(param_1 + _DAT_1000c6108));
  return;
}



/* Entry: 100045620; end: 10004562b; +[_TtC23MapFriendLocationWidget26BitmojiBackgroundCacheInfo supportsSecureCoding] */

undefined1 FUN_100045620(void)

{
  return uRam00000001000c6178;
}



/* Entry: 10004562c; end: 100045637; +[_TtC23MapFriendLocationWidget26BitmojiBackgroundCacheInfo setSupportsSecureCoding:] */

void FUN_10004562c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam00000001000c6178 = param_3;
  return;
}



/* Entry: 100045638; end: 10004585f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100045638(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = &stack0xffffffffffffff50;
  uVar2 = 0x756f72676b636162;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x756f72676b636162,0xed000064692d646e);
  lVar3 = param_1;
  func_0x0001000867a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_1000b14c8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar4 = &uStack_a0;
    _swift_dynamicCast(puVar4,&uStack_70,PTR___sypN_1000b14c8 + 8,PTR___sSSN_1000b1180,6);
    uVar2 = uStack_a0;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_100045814;
    }
    uVar5 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010009d850);
    lVar3 = param_1;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar3 == 0) {
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
      _swift_unknownObjectRelease(lVar3);
    }
    uStack_68 = uStack_88;
    uStack_70 = uStack_90;
    lStack_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      uVar5 = 0;
      func_0x000100045af0(0);
      puVar4 = &uStack_a0;
      _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
      if (((ulong)puVar4 & 1) != 0) {
        puVar4 = (undefined8 *)(unaff_x20 + _DAT_1000c6138);
        *puVar4 = uVar2;
        puVar4[1] = uStack_98;
        *(undefined8 *)(unaff_x20 + _DAT_1000c6140) = uStack_a0;
        func_0x000100045ad0();
        _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1000c1bf0);
        _objc_release(param_1);
        return puVar6;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_98);
      goto LAB_100045814;
    }
    _objc_release(param_1);
    _swift_bridgeObjectRelease(uStack_98);
  }
  FUN_10001d070(&uStack_70);
LAB_100045814:
  func_0x000100045ad0();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 100045860; end: 100045887; -[_TtC23MapFriendLocationWidget26BitmojiBackgroundCacheInfo initWithCoder:] */

void FUN_100045860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_100045638();
  return;
}



/* Entry: 100045888; end: 10004594b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100045888(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000c6138);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1000c6138))[1]);
  uVar1 = 0x756f72676b636162;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x756f72676b636162,0xed000064692d646e);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010009d850);
  func_0x0001000868e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(uVar2);
  return;
}



/* Entry: 10004594c; end: 10004599b; -[_TtC23MapFriendLocationWidget26BitmojiBackgroundCacheInfo encodeWithCoder:] */

void FUN_10004594c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_100045888(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_1);
  return;
}



/* Entry: 10004599c; end: 1000459c7; -[_TtC23MapFriendLocationWidget26BitmojiBackgroundCacheInfo init] */

void FUN_10004599c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapFriendLocationWidget.BitmojiBackgroundCacheInfo",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459c8);
  (*pcVar1)();
}



/* Entry: 1000459c8; end: 1000459d3;  */

void FUN_1000459c8(void)

{
  (*(code *)0x100045ad0)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 1000459d4; end: 100045a03;  */

void FUN_1000459d4(code *param_1)

{
  (*param_1)();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_1000c1878);
  return;
}



/* Entry: 100045a04; end: 100045a3f; -[_TtC23MapFriendLocationWidget26BitmojiBackgroundCacheInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100045a04(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000c6138 + 8));
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(*(undefined8 *)(param_1 + _DAT_1000c6140));
  return;
}



/* Entry: 100045a40; end: 100045b33;  */

void FUN_100045a40(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000c5fd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5fd0;
  func_0x000100010120(0x1000c5fd0,&UNK_10008c318);
  puVar2 = PTR___s9WidgetKit19IntentConfigurationVyxq_G7SwiftUI0aD0AAMc_1000b0ad8;
  _swift_getWitnessTable
            (PTR___s9WidgetKit19IntentConfigurationVyxq_G7SwiftUI0aD0AAMc_1000b0ad8,uVar1);
  puRam00000001000c5fd8 = puVar2;
  return;
}



/* Entry: 100045b34; end: 100045ba3;  */

void FUN_100045b34(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1000b4938;
  if (lRam00000001000c6190 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001000c6190 = param_1;
  }
  return;
}



/* Entry: 100045ba4; end: 100045be7;  */

void FUN_100045ba4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100045be8; end: 100045bf7;  */

void FUN_100045be8(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 100045bf8; end: 100045caf;  */

void FUN_100045bf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_1000b1518)();
  return;
}



/* Entry: 100045cb0; end: 100045cbb; +[_TtC23MapFriendLocationWidget24FriendLocationCachedInfo supportsSecureCoding] */

undefined1 FUN_100045cb0(void)

{
  return uRam00000001000c6370;
}



/* Entry: 100045cbc; end: 100045cc7; +[_TtC23MapFriendLocationWidget24FriendLocationCachedInfo setSupportsSecureCoding:] */

void FUN_100045cbc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam00000001000c6370 = param_3;
  return;
}



/* Entry: 100045cc8; end: 10004622f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100045cc8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 auStack_e0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar1 = 0x1000c4130;
  func_0x0001000100d0(0x1000c4130,&UNK_10008c520);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)auStack_e0 - extraout_x8);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = 0x656c746974;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974,0xe500000000000000);
  lVar1 = param_1;
  func_0x0001000867a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar1);
    _swift_unknownObjectRelease(lVar1);
  }
  puVar9 = PTR___sypN_1000b14c8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
    uVar3 = 0x1000c49f8;
    puVar9 = &UNK_1000899e0;
    puVar6 = &uStack_90;
  }
  else {
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_1000b14c8 + 8,PTR___sSSN_1000b1180,6);
    uVar3 = uStack_b8;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_100045f5c;
    }
    auStack_e0[1] = uStack_c0;
    uVar5 = 0x6d617473656d6974;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d617473656d6974,0xe900000000000070);
    lVar1 = param_1;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar1 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar1);
      _swift_unknownObjectRelease(lVar1);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar3);
      FUN_100046eb4(&uStack_90,0x1000c49f8,&UNK_1000899e0);
      (**(code **)(lVar12 + 0x38))(puVar6,1,1,lVar2);
    }
    else {
      puVar4 = puVar6;
      _swift_dynamicCast(puVar6,&uStack_90,puVar9 + 8,lVar2,6);
      (**(code **)(lVar12 + 0x38))(puVar6,(uint)puVar4 ^ 1,1,lVar2);
      puVar4 = puVar6;
      (**(code **)(lVar12 + 0x30))(puVar6,1,lVar2);
      if ((int)puVar4 != 1) {
        pcVar11 = *(code **)(lVar12 + 0x20);
        (*pcVar11)(lVar10,puVar6,lVar2);
        puVar6 = (undefined8 *)(unaff_x20 + _DAT_1000c6220);
        *puVar6 = auStack_e0[1];
        puVar6[1] = uVar3;
        uVar3 = 0x656c746974627573;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974627573,0xe800000000000000)
        ;
        lVar1 = param_1;
        func_0x0001000867a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if (lVar1 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar1);
          _swift_unknownObjectRelease(lVar1);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        uVar3 = uStack_a0;
        if (lStack_98 == 0) {
          FUN_100046eb4(&uStack_90,0x1000c49f8,&UNK_1000899e0);
          uStack_b8 = 0;
          uVar5 = 0;
        }
        else {
          puVar6 = &uStack_c0;
          _swift_dynamicCast(puVar6,&uStack_90,puVar9 + 8,PTR___sSSN_1000b1180,6);
          uVar5 = uStack_c0;
          if ((int)puVar6 == 0) {
            uVar5 = 0;
            uStack_b8 = 0;
          }
        }
        puVar6 = (undefined8 *)(unaff_x20 + _DAT_1000c6228);
        *puVar6 = uVar5;
        puVar6[1] = uStack_b8;
        uVar7 = 0x74616c;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74616c,0xe300000000000000);
        func_0x000100086780(param_1);
        uVar5 = uVar3;
        _objc_release(uVar7);
        *(undefined8 *)(unaff_x20 + _DAT_1000c6230) = uVar3;
        uVar3 = 0x676e6c;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e6c,0xe300000000000000);
        func_0x000100086780(param_1);
        _objc_release(uVar3);
        *(undefined8 *)(unaff_x20 + _DAT_1000c6238) = uVar5;
        uVar3 = 0x4972656b63697473;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4972656b63697473,0xe900000000000064)
        ;
        lVar1 = param_1;
        func_0x0001000867a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if (lVar1 == 0) {
          uStack_a8 = 0;
          uStack_b0 = 0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar1);
          _swift_unknownObjectRelease(lVar1);
        }
        uStack_88 = uStack_a8;
        uStack_90 = uStack_b0;
        lStack_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 == 0) {
          FUN_100046eb4(&uStack_90,0x1000c49f8,&UNK_1000899e0);
          uStack_c0 = 0;
        }
        else {
          uVar3 = 0;
          FUN_100046ef4(0);
          puVar6 = &uStack_c0;
          _swift_dynamicCast(puVar6,&uStack_90,puVar9 + 8,uVar3,6);
          if ((int)puVar6 == 0) {
            uStack_c0 = 0;
          }
        }
        *(undefined8 *)(unaff_x20 + _DAT_1000c6240) = uStack_c0;
        (*pcVar11)(unaff_x20 + _DAT_1000d0f30,lVar10,lVar2);
        FUN_100046574();
        puVar8 = &stack0xffffffffffffff30;
        _objc_msgSendSuper2(puVar8,PTR_s_init_1000c1bf0);
        _objc_release(param_1);
        return puVar8;
      }
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar3);
    }
    uVar3 = 0x1000c4130;
    puVar9 = &UNK_10008c520;
  }
  FUN_100046eb4(puVar6,uVar3,puVar9);
LAB_100045f5c:
  FUN_100046574(0);
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 100046230; end: 100046257; -[_TtC23MapFriendLocationWidget24FriendLocationCachedInfo initWithCoder:] */

void FUN_100046230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_100045cc8();
  return;
}



/* Entry: 100046258; end: 100046447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100046258(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000c6220);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1000c6220))[1]);
  uVar1 = 0x656c746974;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974,0xe500000000000000);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_1000c6228))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000c6228);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
  }
  uVar1 = 0x656c746974627573;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c746974627573,0xe800000000000000);
  func_0x0001000868e0(param_1);
  _swift_unknownObjectRelease(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1000c6230);
  uVar2 = 0x74616c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74616c,0xe300000000000000);
  func_0x0001000868c0(uVar1,param_1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_1000c6238);
  uVar2 = 0x676e6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e6c,0xe300000000000000);
  func_0x0001000868c0(uVar1,param_1);
  _objc_release(uVar2);
  uVar2 = 0x4972656b63697473;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4972656b63697473,0xe900000000000064);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
  __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(_DAT_1000d0f30);
  uVar1 = 0x6d617473656d6974;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d617473656d6974,0xe900000000000070);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(uVar1);
  return;
}



/* Entry: 100046448; end: 100046497; -[_TtC23MapFriendLocationWidget24FriendLocationCachedInfo encodeWithCoder:] */

void FUN_100046448(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_100046258(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_1);
  return;
}



/* Entry: 100046498; end: 1000464f7; -[_TtC23MapFriendLocationWidget24FriendLocationCachedInfo init] */

void FUN_100046498(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapFriendLocationWidget.FriendLocationCachedInfo",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000464c4);
  (*pcVar1)();
}



/* Entry: 1000464f8; end: 10004656b; -[_TtC23MapFriendLocationWidget24FriendLocationCachedInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000464f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000c6220 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000c6228 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1000c6240));
  lVar1 = _DAT_1000d0f30;
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000100046568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 10004656c; end: 100046573;  */

void FUN_10004656c(void)

{
  if (lRam00000001000c6270 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_100090520);
  return;
}



/* Entry: 100046574; end: 1000465ab;  */

void FUN_100046574(undefined8 param_1)

{
  if (lRam00000001000c6270 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090520);
  return;
}



/* Entry: 1000465ac; end: 100046647;  */

void FUN_1000465ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_50 = &UNK_10008c490;
  puStack_48 = &UNK_10008c4a8;
  puStack_40 = PTR___sBi64_WV_1000b1108 + 0x40;
  puStack_30 = &UNK_10008c4c0;
  lVar1 = 0x13f;
  puStack_38 = puStack_40;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 100046648; end: 100046753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100046648(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = ((undefined8 *)(param_2 + _DAT_1000c6220))[1];
  *param_1 = *(undefined8 *)(param_2 + _DAT_1000c6220);
  param_1[1] = uVar2;
  puVar1 = (undefined8 *)(param_2 + _DAT_1000c6228);
  uVar7 = puVar1[1];
  uVar8 = *puVar1;
  param_1[3] = puVar1[1];
  param_1[2] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + _DAT_1000c6238);
  param_1[4] = *(undefined8 *)(param_2 + _DAT_1000c6230);
  param_1[5] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + _DAT_1000c6240);
  param_1[6] = uVar8;
  lVar4 = _DAT_1000d0f30;
  lVar5 = 0;
  FUN_10005cf80();
  iVar3 = *(int *)(lVar5 + 0x20);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))((long)param_1 + (long)iVar3,param_2 + lVar4,lVar6);
  _objc_retain(uVar8);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar7);
  _objc_release(param_2);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24)) = 1;
  return;
}



/* Entry: 100046754; end: 10004685f;  */

void FUN_100046754(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = 0x1000c6378;
  func_0x0001000100d0(0x1000c6378,&UNK_10008c530);
  _swift_allocObject();
  uVar2 = 0;
  __s11SwiftSCLock4LockCMa();
  _swift_allocObject();
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  puVar3 = PTR___swiftEmptyArrayStorage_1000b14d0;
  func_0x0001000532ac();
  *(undefined **)(lVar1 + 0x18) = puVar3;
  *(long *)(unaff_x20 + 0x28) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar3 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000c2108;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010009da30);
  func_0x000100086c20();
  _objc_release(param_1);
  _objc_release(uVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  return;
}



/* Entry: 100046860; end: 100046a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100046860(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_80;
  long lStack_78;
  
  lVar5 = 0;
  FUN_100046574();
  lVar6 = lVar5;
  _objc_allocWithZone();
  uVar2 = param_1[1];
  puVar1 = (undefined8 *)(lVar6 + _DAT_1000c6220);
  *puVar1 = *param_1;
  puVar1[1] = uVar2;
  uVar11 = param_1[3];
  uVar12 = param_1[2];
  puVar1 = (undefined8 *)(lVar6 + _DAT_1000c6228);
  puVar1[1] = param_1[3];
  *puVar1 = uVar12;
  uVar13 = param_1[4];
  *(undefined8 *)(lVar6 + _DAT_1000c6230) = uVar13;
  uVar14 = param_1[5];
  *(undefined8 *)(lVar6 + _DAT_1000c6238) = uVar14;
  uVar12 = param_1[6];
  *(undefined8 *)(lVar6 + _DAT_1000c6240) = uVar12;
  lVar7 = 0;
  FUN_10005cf80();
  lVar10 = _DAT_1000d0f30;
  iVar3 = *(int *)(lVar7 + 0x20);
  lVar7 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))(lVar6 + lVar10,(long)param_1 + (long)iVar3,lVar7);
  puVar4 = PTR_s_init_1000c1bf0;
  lStack_80 = lVar6;
  lStack_78 = lVar5;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar11);
  _objc_retain(uVar12);
  plVar8 = &lStack_80;
  _objc_msgSendSuper2(plVar8,puVar4);
  plVar9 = plVar8;
  _CLLocationCoordinate2DIsValid(uVar13,uVar14);
  if ((int)plVar9 == 0) goto LAB_100046a18;
  FUN_100046da0();
  if (param_2 == 0) {
LAB_1000469ac:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000044,0x800000010009da70);
  }
  else {
    plVar9 = plVar8;
    func_0x00010004b12c(plVar8);
    if (0xe < param_3 >> 0x3c) {
      _objc_release(param_2);
      goto LAB_1000469ac;
    }
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
    lVar10 = param_2;
    func_0x000100087960(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    FUN_1000275d4(plVar9,param_3);
    _objc_release(lVar10);
  }
  _objc_release();
LAB_100046a18:
  _objc_release(plVar8);
  return;
}



/* Entry: 100046a44; end: 100046d9f;  */

void FUN_100046a44(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  ulong uStack_78;
  
  lVar1 = 0;
  uStack_90 = param_1;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar10 = lVar4 - extraout_x12;
  lVar11 = *(long *)(unaff_x20 + 0x28);
  _swift_retain(lVar11);
  __s11SwiftSCLock4LockC4lockyyF();
  _swift_beginAccess(lVar11 + 0x18,&lStack_80,0x20,0);
  lVar8 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar8 + 0x10) == 0) {
    lVar12 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar8);
    lVar12 = param_2;
    uVar6 = param_3;
    func_0x000100035e00();
    if ((uVar6 & 1) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(*(long *)(lVar8 + 0x38) + lVar12 * 8);
      _objc_retain(lVar12);
    }
    _swift_bridgeObjectRelease(lVar8);
  }
  _swift_endAccess(&lStack_80);
  __s11SwiftSCLock4LockC6unlockyyF();
  _swift_release(lVar11);
  uVar5 = uStack_90;
  if (lVar12 != 0) {
    FUN_100046648(uStack_90,lVar12);
    uVar9 = 0;
    goto LAB_100046c48;
  }
  lVar8 = param_2;
  FUN_100046da0(param_2,param_3);
  if (lVar8 != 0) {
    lVar11 = lVar8;
    func_0x000100087160();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar4,lVar11);
    _objc_release(lVar11);
    (**(code **)(lVar7 + 0x20))(lVar10,lVar4,lVar1);
    puVar2 = PTR__OBJC_CLASS___NSData_1000c2100;
    _objc_allocWithZone();
    puVar3 = puVar2;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    func_0x000100086c80();
    _objc_release(puVar3);
    if (puVar2 != (undefined *)0x0) {
      uStack_78 = 0xf000000000000000;
      lStack_80 = 0;
      __s10Foundation4DataV34_conditionallyBridgeFromObjectiveC_6resultSbSo6NSDataC_ACSgztFZ
                (puVar2,&lStack_80);
      _objc_release(puVar2);
      uVar6 = uStack_78;
      lVar8 = lStack_80;
      if (uStack_78 >> 0x3c < 0xf) {
        lVar4 = lStack_80;
        FUN_1000470d8(lStack_80,uStack_78);
        if (lVar4 != 0) {
          lVar11 = *(long *)(unaff_x20 + 0x28);
          _swift_retain(lVar11);
          _objc_retain(lVar4);
          __s11SwiftSCLock4LockC4lockyyF();
          _swift_beginAccess(lVar11 + 0x18,&lStack_80,0x21,0);
          _objc_retain(lVar4);
          _swift_bridgeObjectRetain(param_3);
          uVar5 = *(undefined8 *)(lVar11 + 0x18);
          _swift_isUniquelyReferenced_nonNull_native(uVar5);
          uStack_88 = *(undefined8 *)(lVar11 + 0x18);
          *(undefined8 *)(lVar11 + 0x18) = 0x8000000000000000;
          FUN_100048f54(lVar4,param_2,param_3,uVar5);
          _swift_bridgeObjectRelease(param_3);
          *(undefined8 *)(lVar11 + 0x18) = uStack_88;
          _swift_endAccess(&lStack_80);
          __s11SwiftSCLock4LockC6unlockyyF();
          _swift_release(lVar11);
          _objc_release(lVar4);
          uVar5 = uStack_90;
          FUN_100046648(uStack_90,lVar4);
          FUN_1000275d4(lVar8,uVar6);
          (**(code **)(lVar7 + 8))(lVar10,lVar1);
          uVar9 = 0;
          goto LAB_100046c48;
        }
        (**(code **)(lVar7 + 8))(lVar10,lVar1);
        FUN_1000275d4(lVar8,uVar6);
        goto LAB_100046c40;
      }
    }
    (**(code **)(lVar7 + 8))(lVar10,lVar1);
  }
LAB_100046c40:
  uVar9 = 1;
  uVar5 = uStack_90;
LAB_100046c48:
  lVar1 = 0;
  FUN_10005cf80();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(uVar5,uVar9,1,lVar1);
  return;
}



/* Entry: 100046da0; end: 100046e5f;  */

long FUN_100046da0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    func_0x0001000877a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar3 != 0) {
      _objc_retain(lVar3);
      uVar1 = 0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010009da50);
      lVar2 = lVar3;
      func_0x000100087580(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(lVar3);
      _objc_release(lVar3);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 100046e60; end: 100046eb3;  */

void FUN_100046e60(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 100046eb4; end: 100046ef3;  */

undefined8 FUN_100046eb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100046ef4; end: 100046f37;  */

void FUN_100046ef4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c6368 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1000c2110;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam00000001000c6368 = puVar1;
  return;
}



/* Entry: 100046f38; end: 100046f57;  */

/* WARNING: Removing unreachable block (ram,0x000100047050) */

undefined8 FUN_100046f38(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  iVar1 = (int)auStack_70;
  FUN_100049e58(0,0x1000c6550,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
  lVar2 = 0x1000c6558;
  func_0x0001000100d0(0x1000c6558,&UNK_10008c5d8);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  uVar3 = 0;
  (*(code *)0x100045ab0)();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar4 = 0;
  FUN_100049e58(0,0x1000c6170,&PTR__OBJC_CLASS___UIImage_1000c20c0);
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  uVar4 = 0;
  FUN_100049e58(0,0x1000c6368,&PTR_PTR_1000c2110);
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  uVar4 = 0;
  FUN_100049e58(0,0x1000c6560,&PTR__OBJC_CLASS___NSDate_1000c2120);
  *(undefined8 *)(lVar2 + 0x38) = uVar4;
  __sSo17NSKeyedUnarchiverC10FoundationE16unarchivedObject9ofClasses4fromypSgSayyXlXpG_AC4DataVtKFZ
            (auStack_60,lVar2,param_1,param_2);
  _swift_release(lVar2);
  if (lStack_48 == 0) {
    FUN_100048b7c(auStack_60,0x1000c49f8,&UNK_1000899e0);
    auStack_70[0] = 0;
  }
  else {
    _swift_dynamicCast(auStack_70,auStack_60,PTR___sypN_1000b14c8 + 8,uVar3,6);
    if (iVar1 == 0) {
      auStack_70[0] = 0;
    }
  }
  return auStack_70[0];
}



/* Entry: 100046f58; end: 1000470d7;  */

/* WARNING: Removing unreachable block (ram,0x000100047050) */

undefined8 FUN_100046f58(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  iVar1 = (int)auStack_70;
  FUN_100049e58(0,0x1000c6550,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
  lVar2 = 0x1000c6558;
  func_0x0001000100d0(0x1000c6558,&UNK_10008c5d8);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  (*param_4)();
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  uVar3 = 0;
  FUN_100049e58(0,0x1000c6170,&PTR__OBJC_CLASS___UIImage_1000c20c0);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  uVar3 = 0;
  FUN_100049e58(0,0x1000c6368,&PTR_PTR_1000c2110);
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  uVar3 = 0;
  FUN_100049e58(0,0x1000c6560,&PTR__OBJC_CLASS___NSDate_1000c2120);
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  __sSo17NSKeyedUnarchiverC10FoundationE16unarchivedObject9ofClasses4fromypSgSayyXlXpG_AC4DataVtKFZ
            (auStack_60,lVar2,param_1,param_2);
  _swift_release(lVar2);
  if (lStack_48 == 0) {
    FUN_100048b7c(auStack_60,0x1000c49f8,&UNK_1000899e0);
    auStack_70[0] = 0;
  }
  else {
    _swift_dynamicCast(auStack_70,auStack_60,PTR___sypN_1000b14c8 + 8,param_3,6);
    if (iVar1 == 0) {
      auStack_70[0] = 0;
    }
  }
  return auStack_70[0];
}



/* Entry: 1000470d8; end: 1000470e7;  */

/* WARNING: Removing unreachable block (ram,0x000100047050) */

undefined8 FUN_1000470d8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_70 [2];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  iVar1 = (int)auStack_70;
  FUN_100049e58(0,0x1000c6550,&PTR__OBJC_CLASS___NSKeyedUnarchiver_1000c20e0);
  lVar2 = 0x1000c6558;
  func_0x0001000100d0(0x1000c6558,&UNK_10008c5d8);
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  uVar3 = 0;
  FUN_100046574();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar4 = 0;
  FUN_100049e58(0,0x1000c6170,&PTR__OBJC_CLASS___UIImage_1000c20c0);
  *(undefined8 *)(lVar2 + 0x28) = uVar4;
  uVar4 = 0;
  FUN_100049e58(0,0x1000c6368,&PTR_PTR_1000c2110);
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  uVar4 = 0;
  FUN_100049e58(0,0x1000c6560,&PTR__OBJC_CLASS___NSDate_1000c2120);
  *(undefined8 *)(lVar2 + 0x38) = uVar4;
  __sSo17NSKeyedUnarchiverC10FoundationE16unarchivedObject9ofClasses4fromypSgSayyXlXpG_AC4DataVtKFZ
            (auStack_60,lVar2,param_1,param_2);
  _swift_release(lVar2);
  if (lStack_48 == 0) {
    FUN_100048b7c(auStack_60,0x1000c49f8,&UNK_1000899e0);
    auStack_70[0] = 0;
  }
  else {
    _swift_dynamicCast(auStack_70,auStack_60,PTR___sypN_1000b14c8 + 8,uVar3,6);
    if (iVar1 == 0) {
      auStack_70[0] = 0;
    }
  }
  return auStack_70[0];
}



/* Entry: 1000470e8; end: 100047253;  */

void FUN_1000470e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  lVar1 = 0x1000c6580;
  func_0x0001000100d0(0x1000c6580,&UNK_10008c5f0);
  lVar2 = lVar1;
  _swift_allocObject();
  uVar3 = 0;
  __s11SwiftSCLock4LockCMa();
  uVar6 = uVar3;
  _swift_allocObject();
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(lVar2 + 0x10) = uVar6;
  puVar5 = PTR___swiftEmptyArrayStorage_1000b14d0;
  puVar4 = PTR___swiftEmptyArrayStorage_1000b14d0;
  func_0x0001000532c0();
  *(undefined **)(lVar2 + 0x18) = puVar4;
  *(long *)(unaff_x20 + 0x28) = lVar2;
  _swift_allocObject(lVar1,0x20,7);
  _swift_allocObject(uVar3,0x18,7);
  __s11SwiftSCLock4LockCACycfc();
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  func_0x0001000532c0();
  *(undefined **)(lVar1 + 0x18) = puVar5;
  *(long *)(unaff_x20 + 0x30) = lVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar5 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000c2108;
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar6 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010009da30);
  func_0x000100086c20();
  _objc_release(param_1);
  _objc_release(uVar6);
  *(undefined **)(unaff_x20 + 0x20) = puVar5;
  return;
}



/* Entry: 100047254; end: 100047583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100047254(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long *param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long extraout_x8;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = 0;
  uStack_c0 = param_4;
  __s7SwiftUI11ColorSchemeOMa();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x1000c4360;
  func_0x0001000100d0(0x1000c4360,&UNK_100088f60);
  lVar5 = lVar4;
  _swift_allocObject();
  puVar1 = PTR___sSdN_1000b11f0;
  uStack_c8 = 2;
  uStack_d0 = 1;
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  puVar2 = PTR___sSds7CVarArgsWP_1000b11f8;
  *(undefined **)(lVar5 + 0x38) = puVar1;
  *(undefined **)(lVar5 + 0x40) = puVar2;
  *(undefined8 *)(lVar5 + 0x20) = param_1;
  lVar18 = 0x6635312e25;
  lVar13 = -0x1b00000000000000;
  lVar6 = lVar18;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x6635312e25,0xe500000000000000,lVar5);
  _swift_allocObject(lVar4,0x48,7);
  *(undefined8 *)(lVar4 + 0x18) = uStack_c8;
  *(undefined8 *)(lVar4 + 0x10) = uStack_d0;
  *(undefined **)(lVar4 + 0x38) = puVar1;
  *(undefined **)(lVar4 + 0x40) = puVar2;
  *(undefined8 *)(lVar4 + 0x20) = param_2;
  lVar14 = -0x1b00000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x6635312e25,0xe500000000000000,lVar4);
  lVar4 = lVar18;
  FUN_100048b5c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  plVar9 = (long *)(lVar5 + _DAT_1000c64f0);
  *plVar9 = lVar6;
  plVar9[1] = lVar13;
  plVar9 = (long *)(lVar5 + _DAT_1000c64f8);
  *plVar9 = lVar18;
  plVar9[1] = lVar14;
  *(undefined8 *)(lVar5 + _DAT_1000c6500) = param_3;
  puVar1 = PTR_s_init_1000c1bf0;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  _objc_retain(param_3);
  plVar7 = &lStack_80;
  _objc_msgSendSuper2(plVar7,puVar1);
  (**(code **)(lVar16 + 0x68))
            (lVar17,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_1000b0270,lVar3);
  uVar8 = uStack_c0;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(uStack_c0,lVar17);
  (**(code **)(lVar16 + 8))(lVar17,lVar3);
  plVar9 = param_5;
  uVar15 = param_6;
  if ((uVar8 & 1) == 0) {
    func_0x000100047a18();
  }
  else {
    FUN_100047958();
  }
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar7;
    func_0x00010004b170(plVar7);
    if (uVar15 >> 0x3c < 0xf) {
      plVar11 = plVar10;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
      func_0x000100087960(plVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(plVar11);
      uStack_90 = 0;
      uStack_88 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x53);
      __sSS6appendyySSF(0xd000000000000043,0x800000010009dc00);
      uVar12 = 0;
      uStack_a0 = param_1;
      uStack_98 = param_2;
      func_0x000100045b90(0);
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (&uStack_a0,&uStack_90,uVar12,PTR___ss26DefaultStringInterpolationVN_1000b1408,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000b1410);
      __sSS6appendyySSF(0x646e65697266202c,0xec000000203a6449);
      __sSS6appendyySSF(param_5,param_6);
      uVar12 = uStack_88;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_90,uStack_88);
      _objc_release();
      _objc_release(plVar7);
      _swift_bridgeObjectRelease(uVar12);
      FUN_1000275d4(plVar10,uVar15);
      plVar7 = plVar9;
    }
    else {
      _objc_release(plVar9);
    }
  }
  _objc_release(plVar7);
  return;
}



/* Entry: 100047584; end: 100047957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100047584(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar7 + 0x68))
            (puVar6,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_1000b0270,lVar1);
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_3,puVar6);
  (**(code **)(lVar7 + 8))(puVar6,lVar1);
  lVar1 = param_4;
  if ((param_3 & 1) == 0) {
    lVar7 = param_4;
    func_0x000100047a18(param_4,param_5);
    lVar5 = *(long *)(unaff_x20 + 0x30);
    _swift_retain(lVar5);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_beginAccess(lVar5 + 0x18,auStack_78,0x20,0);
    lVar4 = *(long *)(lVar5 + 0x18);
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar8 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar4);
      lVar2 = param_4;
      uVar3 = param_5;
      func_0x000100035e00();
      if ((uVar3 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
        _objc_retain(uVar8);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_endAccess(auStack_78);
    __s11SwiftSCLock4LockC6unlockyyF();
    _swift_release(lVar5);
    FUN_1000495c4(param_1,param_2,param_4,param_5,lVar7,uVar8);
    _objc_release(uVar8);
    _objc_release(lVar7);
    lVar4 = *(long *)(unaff_x20 + 0x30);
    lVar7 = lVar1;
    _objc_retain();
    _swift_retain(lVar4);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_beginAccess(lVar4 + 0x18,auStack_78,0x21,0);
    _swift_bridgeObjectRetain(param_5);
    if (lVar1 == 0) goto LAB_1000478c8;
    lVar5 = lVar7;
    _objc_retain(lVar7);
  }
  else {
    lVar7 = param_4;
    FUN_100047958();
    lVar5 = *(long *)(unaff_x20 + 0x28);
    _swift_retain(lVar5);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_beginAccess(lVar5 + 0x18,auStack_78,0x20,0);
    lVar4 = *(long *)(lVar5 + 0x18);
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar8 = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar4);
      lVar2 = param_4;
      uVar3 = param_5;
      func_0x000100035e00();
      if ((uVar3 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
        _objc_retain(uVar8);
      }
      _swift_bridgeObjectRelease(lVar4);
    }
    _swift_endAccess(auStack_78);
    __s11SwiftSCLock4LockC6unlockyyF();
    _swift_release(lVar5);
    FUN_1000495c4(param_1,param_2,param_4,param_5,lVar7,uVar8);
    _objc_release(uVar8);
    _objc_release(lVar7);
    lVar4 = *(long *)(unaff_x20 + 0x28);
    lVar7 = lVar1;
    _objc_retain();
    _swift_retain(lVar4);
    __s11SwiftSCLock4LockC4lockyyF();
    _swift_beginAccess(lVar4 + 0x18,auStack_78,0x21,0);
    if (lVar1 == 0) {
      _swift_bridgeObjectRetain(param_5);
LAB_1000478c8:
      FUN_100048cec(param_4,param_5);
      _swift_bridgeObjectRelease(param_5);
      _objc_release(param_4);
      goto LAB_1000478ec;
    }
    lVar5 = lVar7;
    _objc_retain(lVar7);
    _swift_bridgeObjectRetain(param_5);
  }
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  uStack_80 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 0x18) = 0x8000000000000000;
  FUN_100048de0(lVar5,param_4,param_5,uVar8,0x1000c6548,&UNK_10008c5d0);
  _swift_bridgeObjectRelease(param_5);
  *(undefined8 *)(lVar4 + 0x18) = uStack_80;
LAB_1000478ec:
  _swift_endAccess(auStack_78);
  __s11SwiftSCLock4LockC6unlockyyF();
  _swift_release(lVar4);
  _objc_release(lVar7);
  if (lVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar7 + _DAT_1000c6500);
    _objc_retain(uVar8);
    _objc_release(lVar7);
  }
  return uVar8;
}



/* Entry: 100047958; end: 100047ad7;  */

long FUN_100047958(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    func_0x0001000877a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    if (lVar3 != 0) {
      _objc_retain(lVar3);
      uVar1 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010009db90);
      lVar2 = lVar3;
      func_0x000100087580(lVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(lVar3);
      _objc_release(lVar3);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 100047ad8; end: 1000485af;  */

undefined1  [16] FUN_100047ad8(void)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  long unaff_x20;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  undefined *unaff_x23;
  long lVar20;
  ulong uVar21;
  undefined *unaff_x24;
  ulong uVar22;
  long unaff_x25;
  long unaff_x26;
  undefined8 unaff_x27;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  long alStack_1d0 [2];
  ulong auStack_1c0 [2];
  ulong auStack_1b0 [6];
  ulong auStack_180 [2];
  undefined1 auStack_170 [7];
  undefined1 uStack_169;
  undefined8 uStack_168;
  ulong auStack_158 [13];
  long alStack_f0 [2];
  undefined *apuStack_e0 [2];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  ushort uStack_82;
  ulong uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000b0c78;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar23 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar23 + 0x40));
  lVar18 = (long)apuStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = lVar18 - extraout_x12;
  puVar7 = *(undefined **)(unaff_x20 + 0x40);
  lVar10 = lVar14;
  if (puVar7 == (undefined *)0x0) {
    lVar20 = *(long *)(unaff_x20 + 0x20);
    if (lVar20 == 0) {
      puVar15 = (undefined *)0x0;
      puVar17 = (undefined *)0x0;
      unaff_x23 = (undefined *)0x0;
    }
    else {
      unaff_x24 = (undefined *)0xd000000000000014;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010009db50);
      func_0x000100087580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x24);
      if (lVar20 == 0) {
        unaff_x23 = (undefined *)0x0;
LAB_100047cb0:
        puVar15 = (undefined *)0x0;
        puVar17 = (undefined *)0x0;
        unaff_x20 = unaff_x25;
      }
      else {
        lVar8 = lVar20;
        func_0x000100087160(lVar20);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar20);
        __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar18,lVar8);
        _objc_release(lVar8);
        (**(code **)(lVar23 + 0x20))(lVar14,lVar18,lVar6);
        puVar15 = PTR__OBJC_CLASS___NSData_1000c2100;
        _objc_allocWithZone();
        unaff_x23 = puVar15;
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        func_0x000100086c80();
        _objc_release(unaff_x23);
        unaff_x26 = unaff_x20;
        if (puVar15 == (undefined *)0x0) {
          (**(code **)(lVar23 + 8))(lVar14,lVar6);
          goto LAB_100047cb0;
        }
        uStack_88 = 0;
        uStack_87 = 0;
        uStack_86 = 0;
        uStack_85 = 0;
        uStack_84 = 0;
        uStack_83 = 0;
        uStack_82 = 0xf000;
        uStack_90 = 0;
        uStack_8f = 0;
        uStack_8e = 0;
        uStack_8d = 0;
        uStack_8c = 0;
        uStack_8b = 0;
        uStack_8a = 0;
        uStack_89 = 0;
        __s10Foundation4DataV34_conditionallyBridgeFromObjectiveC_6resultSbSo6NSDataC_ACSgztFZ
                  (puVar15,&uStack_90);
        _objc_release(puVar15);
        unaff_x23 = (undefined *)
                    CONCAT26(uStack_82,
                             CONCAT15(uStack_83,
                                      CONCAT14(uStack_84,
                                               CONCAT13(uStack_85,
                                                        CONCAT12(uStack_86,
                                                                 CONCAT11(uStack_87,uStack_88))))));
        if (0xe < uStack_82 >> 0xc) {
          (**(code **)(lVar23 + 8))(lVar14,lVar6);
          goto LAB_100047cb0;
        }
        iVar4 = CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(uStack_8f,uStack_90)));
        unaff_x24 = (undefined *)
                    CONCAT17(uStack_89,
                             CONCAT16(uStack_8a,CONCAT15(uStack_8b,CONCAT14(uStack_8c,iVar4))));
        uVar3 = (uint)((ulong)unaff_x23 >> 0x20);
        uVar13 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar13 == 0) {
            puVar17 = (undefined *)((ulong)uStack_82 & 0xff);
            puVar15 = &uStack_90;
            __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
LAB_100047fec:
            FUN_1000275d4(unaff_x24,unaff_x23);
            FUN_1000275d4(unaff_x24,unaff_x23);
            goto LAB_100048004;
          }
          lVar10 = (long)iVar4;
          apuStack_e0[0] = (undefined *)(((long)unaff_x24 >> 0x20) - lVar10);
          if ((long)unaff_x24 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100048034);
            (*pcVar5)();
          }
          puVar15 = (undefined *)((ulong)unaff_x23 & 0x3fffffffffffffff);
          _swift_retain();
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (puVar15 == (undefined *)0x0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
          }
          else {
            puVar17 = puVar15;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar10,(long)puVar17)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100048040);
              (*pcVar5)();
            }
            puVar15 = puVar15 + (lVar10 - (long)puVar17);
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar15 != (undefined *)0x0) {
              if ((long)apuStack_e0[0] <= (long)puVar17) {
                puVar17 = apuStack_e0[0];
              }
              goto LAB_100047ea0;
            }
          }
LAB_100047e98:
          puVar15 = (undefined *)0x0;
          puVar17 = (undefined *)0x0;
LAB_100047ea0:
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          if (puVar17 != (undefined *)0x0) goto LAB_100047fec;
          puStack_a0 = unaff_x24;
          puStack_98 = unaff_x23;
          func_0x00010001c120(unaff_x24,unaff_x23);
          uVar12 = 0x1000c6538;
          func_0x0001000100d0(0x1000c6538,&UNK_10008c5c0);
          ppuVar9 = &puStack_d0;
          _swift_dynamicCast(ppuVar9,&puStack_a0,PTR___s10Foundation4DataVN_1000b1930,uVar12,6);
          if (((ulong)ppuVar9 & 1) == 0) {
            uStack_b0 = 0;
            puStack_c8 = (undefined *)0x0;
            puStack_d0 = (undefined *)0x0;
            uStack_b8 = 0;
            uStack_c0 = 0;
            FUN_100048b7c(&puStack_d0,0x1000c6540,&UNK_10008c5c8);
LAB_100047fd8:
            puVar15 = unaff_x24;
            puVar17 = unaff_x23;
            FUN_10004950c();
            goto LAB_100047fec;
          }
          FUN_100049574(&puStack_d0,&uStack_90);
          puVar15 = puStack_70;
          uVar11 = uStack_78;
          func_0x000100013de4(&uStack_90,uStack_78);
          __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(uVar11,puVar15);
          if ((uVar11 & 1) == 0) {
            func_0x000100012b98(&uStack_90);
            goto LAB_100047fd8;
          }
          apuStack_e0[0] = puStack_70;
          func_0x000100013de4(&uStack_90,uStack_78);
          __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
                    (&puStack_d0,FUN_10004958c,0,PTR___sSSN_1000b1180,uStack_78,apuStack_e0[0]);
          FUN_1000275d4(unaff_x24,unaff_x23);
          FUN_1000275d4(unaff_x24,unaff_x23);
          (**(code **)(lVar23 + 8))(lVar14,lVar6);
          func_0x000100012b98(&uStack_90);
          puVar15 = puStack_d0;
          puVar17 = puStack_c8;
        }
        else {
          if (uVar13 == 2) {
            lVar10 = *(long *)(unaff_x24 + 0x10);
            apuStack_e0[0] = *(undefined **)(unaff_x24 + 0x18);
            _swift_retain(unaff_x24);
            puVar15 = (undefined *)((ulong)unaff_x23 & 0x3fffffffffffffff);
            _swift_retain();
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            puVar17 = puVar15;
            if (puVar15 != (undefined *)0x0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar10,(long)puVar17)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10004803c);
                (*pcVar5)();
              }
              puVar15 = puVar15 + (lVar10 - (long)puVar17);
            }
            puVar1 = apuStack_e0[0] + -lVar10;
            if (SBORROW8((long)apuStack_e0[0],lVar10)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100048038);
              (*pcVar5)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (puVar15 == (undefined *)0x0) goto LAB_100047e98;
            if ((long)puVar1 <= (long)puVar17) {
              puVar17 = puVar1;
            }
            goto LAB_100047ea0;
          }
          uStack_88 = 0;
          uStack_87 = 0;
          uStack_86 = 0;
          uStack_85 = 0;
          uStack_84 = 0;
          uStack_83 = 0;
          uStack_90 = 0;
          uStack_8f = 0;
          uStack_8e = 0;
          uStack_8d = 0;
          uStack_8c = 0;
          uStack_8b = 0;
          uStack_8a = 0;
          uStack_89 = 0;
          puVar15 = &uStack_90;
          puVar17 = (undefined *)0x0;
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          FUN_1000275d4(unaff_x24,unaff_x23);
          FUN_1000275d4(unaff_x24,unaff_x23);
LAB_100048004:
          (**(code **)(lVar23 + 8))(lVar14,lVar6);
        }
        lVar10 = *(long *)(unaff_x20 + 0x40);
        *(undefined **)(unaff_x20 + 0x38) = puVar15;
        *(undefined **)(unaff_x20 + 0x40) = puVar17;
        _swift_bridgeObjectRetain(puVar17);
        _swift_bridgeObjectRelease(lVar10);
      }
      unaff_x27 = 0;
      unaff_x25 = unaff_x20;
    }
  }
  else {
    puVar15 = *(undefined **)(unaff_x20 + 0x38);
    puVar17 = puVar7;
  }
  _swift_bridgeObjectRetain(puVar7);
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lStack_68) {
    auVar24._8_8_ = puVar17;
    auVar24._0_8_ = puVar15;
    return auVar24;
  }
  ___stack_chk_fail();
  *(long *)(lVar14 + -0x60) = lVar23;
  *(undefined8 *)(lVar14 + -0x58) = unaff_x27;
  *(long *)(lVar14 + -0x50) = unaff_x26;
  *(long *)(lVar14 + -0x48) = unaff_x25;
  *(undefined **)(lVar14 + -0x40) = unaff_x24;
  *(undefined **)(lVar14 + -0x38) = unaff_x23;
  *(long *)(lVar14 + -0x30) = lVar6;
  *(undefined **)(lVar14 + -0x28) = puVar17;
  *(undefined **)(lVar14 + -0x20) = puVar15;
  *(long *)(lVar14 + -0x18) = lVar10;
  *(undefined1 **)(lVar14 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(lVar14 + -8) = 0x100048044;
  *(undefined8 *)(lVar14 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_1000b0c78;
  lVar10 = 0;
  __s10Foundation3URLVMa();
  lVar23 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar23 + 0x40));
  lVar18 = (lVar14 + -0xe0) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar6 = lVar18 - extraout_x12_00;
  uVar11 = *(ulong *)(puVar15 + 0x50);
  if (uVar11 != 0) {
    uVar16 = *(ulong *)(puVar15 + 0x48);
    uVar19 = uVar11;
    goto LAB_100048224;
  }
  lVar20 = *(long *)(puVar15 + 0x20);
  if (lVar20 == 0) {
    uVar16 = 0;
    uVar19 = 0;
    goto LAB_100048224;
  }
  uVar12 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010009db30);
  func_0x000100087580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  if (lVar20 != 0) {
    lVar8 = lVar20;
    func_0x000100087160(lVar20);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar20);
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar18,lVar8);
    _objc_release(lVar8);
    (**(code **)(lVar23 + 0x20))(lVar6,lVar18,lVar10);
    puVar7 = PTR__OBJC_CLASS___NSData_1000c2100;
    _objc_allocWithZone();
    puVar17 = puVar7;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    func_0x000100086c80();
    _objc_release(puVar17);
    if (puVar7 == (undefined *)0x0) {
      (**(code **)(lVar23 + 8))(lVar6,lVar10);
    }
    else {
      *(undefined8 *)(lVar14 + -0x88) = 0xf000000000000000;
      *(undefined8 *)(lVar14 + -0x90) = 0;
      __s10Foundation4DataV34_conditionallyBridgeFromObjectiveC_6resultSbSo6NSDataC_ACSgztFZ
                (puVar7,lVar14 + -0x90);
      _objc_release(puVar7);
      uVar21 = *(ulong *)(lVar14 + -0x88);
      if (uVar21 >> 0x3c < 0xf) {
        uVar22 = *(ulong *)(lVar14 + -0x90);
        uVar3 = (uint)(uVar21 >> 0x20);
        uVar13 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar13 == 0) {
            *(char *)(lVar14 + -0x90) = (char)uVar22;
            *(char *)(lVar14 + -0x8f) = (char)(uVar22 >> 8);
            *(char *)(lVar14 + -0x8e) = (char)(uVar22 >> 0x10);
            *(char *)(lVar14 + -0x8d) = (char)(uVar22 >> 0x18);
            *(char *)(lVar14 + -0x8c) = (char)(uVar22 >> 0x20);
            *(char *)(lVar14 + -0x8b) = (char)(uVar22 >> 0x28);
            *(char *)(lVar14 + -0x8a) = (char)(uVar22 >> 0x30);
            *(char *)(lVar14 + -0x89) = (char)(uVar22 >> 0x38);
            *(char *)(lVar14 + -0x88) = (char)uVar21;
            *(char *)(lVar14 + -0x87) = (char)(uVar21 >> 8);
            *(char *)(lVar14 + -0x86) = (char)(uVar21 >> 0x10);
            *(char *)(lVar14 + -0x85) = (char)(uVar21 >> 0x18);
            *(char *)(lVar14 + -0x84) = (char)(uVar21 >> 0x20);
            uVar19 = uVar21 >> 0x30 & 0xff;
            *(char *)(lVar14 + -0x83) = (char)(uVar21 >> 0x28);
            uVar16 = lVar14 - 0x90;
            __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
LAB_100048558:
            FUN_1000275d4(uVar22,uVar21);
            FUN_1000275d4(uVar22,uVar21);
            goto LAB_100048570;
          }
          lVar18 = (long)(int)uVar22;
          *(long *)(lVar14 + -0xe0) = ((long)uVar22 >> 0x20) - lVar18;
          if ((long)uVar22 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000485a0);
            (*pcVar5)();
          }
          uVar16 = uVar21 & 0x3fffffffffffffff;
          _swift_retain();
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (uVar16 == 0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
          }
          else {
            uVar19 = uVar16;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar18,uVar19)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1000485ac);
              (*pcVar5)();
            }
            uVar16 = (lVar18 - uVar19) + uVar16;
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (uVar16 != 0) {
              if ((long)*(ulong *)(lVar14 + -0xe0) <= (long)uVar19) {
                uVar19 = *(ulong *)(lVar14 + -0xe0);
              }
              goto LAB_10004840c;
            }
          }
LAB_100048404:
          uVar16 = 0;
          uVar19 = 0;
LAB_10004840c:
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          if (uVar19 != 0) goto LAB_100048558;
          *(ulong *)(lVar14 + -0xa0) = uVar22;
          *(ulong *)(lVar14 + -0x98) = uVar21;
          func_0x00010001c120(uVar22,uVar21);
          uVar12 = 0x1000c6538;
          func_0x0001000100d0(0x1000c6538,&UNK_10008c5c0);
          uVar16 = lVar14 - 0xd0;
          _swift_dynamicCast(uVar16,lVar14 + -0xa0,PTR___s10Foundation4DataVN_1000b1930,uVar12,6);
          if ((uVar16 & 1) == 0) {
            *(undefined8 *)(lVar14 + -0xb0) = 0;
            *(undefined8 *)(lVar14 + -200) = 0;
            *(undefined8 *)(lVar14 + -0xd0) = 0;
            *(undefined8 *)(lVar14 + -0xb8) = 0;
            *(undefined8 *)(lVar14 + -0xc0) = 0;
            FUN_100048b7c(lVar14 + -0xd0,0x1000c6540,&UNK_10008c5c8);
LAB_100048544:
            uVar16 = uVar22;
            uVar19 = uVar21;
            FUN_10004950c();
            goto LAB_100048558;
          }
          FUN_100049574(lVar14 + -0xd0,lVar14 + -0x90);
          uVar16 = *(ulong *)(lVar14 + -0x78);
          uVar12 = *(undefined8 *)(lVar14 + -0x70);
          func_0x000100013de4(lVar14 + -0x90,uVar16);
          __ss19_HasContiguousBytesP09_providesbC6NoCopySbvgTj(uVar16,uVar12);
          if ((uVar16 & 1) == 0) {
            func_0x000100012b98(lVar14 + -0x90);
            goto LAB_100048544;
          }
          uVar12 = *(undefined8 *)(lVar14 + -0x78);
          *(undefined8 *)(lVar14 + -0xe0) = *(undefined8 *)(lVar14 + -0x70);
          func_0x000100013de4(lVar14 + -0x90,uVar12);
          __ss19_HasContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
                    (lVar14 + -0xd0,FUN_10004958c,0,PTR___sSSN_1000b1180,uVar12,
                     *(undefined8 *)(lVar14 + -0xe0));
          FUN_1000275d4(uVar22,uVar21);
          FUN_1000275d4(uVar22,uVar21);
          (**(code **)(lVar23 + 8))(lVar6,lVar10);
          FUN_100012b94(lVar14 + -0x90);
          uVar16 = *(ulong *)(lVar14 + -0xd0);
          uVar19 = *(ulong *)(lVar14 + -200);
        }
        else {
          if (uVar13 == 2) {
            lVar18 = *(long *)(uVar22 + 0x10);
            *(undefined8 *)(lVar14 + -0xe0) = *(undefined8 *)(uVar22 + 0x18);
            _swift_retain(uVar22);
            uVar16 = uVar21 & 0x3fffffffffffffff;
            _swift_retain();
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            uVar19 = uVar16;
            if (uVar16 != 0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar18,uVar19)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1000485a8);
                (*pcVar5)();
              }
              uVar16 = (lVar18 - uVar19) + uVar16;
            }
            uVar2 = *(long *)(lVar14 + -0xe0) - lVar18;
            if (SBORROW8(*(long *)(lVar14 + -0xe0),lVar18)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1000485a4);
              (*pcVar5)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (uVar16 == 0) goto LAB_100048404;
            if ((long)uVar2 <= (long)uVar19) {
              uVar19 = uVar2;
            }
            goto LAB_10004840c;
          }
          *(undefined8 *)(lVar14 + -0x8a) = 0;
          *(undefined8 *)(lVar14 + -0x90) = 0;
          uVar16 = lVar14 - 0x90;
          uVar19 = 0;
          __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ();
          FUN_1000275d4(uVar22,uVar21);
          FUN_1000275d4(uVar22,uVar21);
LAB_100048570:
          (**(code **)(lVar23 + 8))(lVar6,lVar10);
        }
        uVar12 = *(undefined8 *)(puVar15 + 0x50);
        *(ulong *)(puVar15 + 0x48) = uVar16;
        *(ulong *)(puVar15 + 0x50) = uVar19;
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRelease(uVar12);
        goto LAB_100048224;
      }
      (**(code **)(lVar23 + 8))(lVar6,lVar10);
    }
  }
  uVar16 = 0;
  uVar19 = 0;
LAB_100048224:
  _swift_bridgeObjectRetain(uVar11);
  if (*(long *)PTR____stack_chk_guard_1000b0c78 != *(long *)(lVar14 + -0x68)) {
    ___stack_chk_fail();
    *(long *)(lVar6 + -0x10) = lVar14 + -0x10;
    *(code **)(lVar6 + -8) = FUN_1000485b0;
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar16 + 0x18));
    _objc_release(*(undefined8 *)(uVar16 + 0x20));
    _swift_release(*(undefined8 *)(uVar16 + 0x28));
    _swift_release(*(undefined8 *)(uVar16 + 0x30));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar16 + 0x40));
    _swift_bridgeObjectRelease(*(undefined8 *)(uVar16 + 0x50));
    uVar12 = 0x58;
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_1000b1578)(uVar16,0x58,7);
    auVar26._8_8_ = uVar12;
    auVar26._0_8_ = uVar16;
    return auVar26;
  }
  auVar25._8_8_ = uVar19;
  auVar25._0_8_ = uVar16;
  return auVar25;
}



/* Entry: 1000485b0; end: 10004861b;  */

void FUN_1000485b0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100086090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000b1578)();
  return;
}



/* Entry: 10004861c; end: 100048627; +[_TtC23MapFriendLocationWidget20MapSnapshotCacheInfo supportsSecureCoding] */

undefined1 FUN_10004861c(void)

{
  return uRam00000001000c6530;
}



/* Entry: 100048628; end: 100048633; +[_TtC23MapFriendLocationWidget20MapSnapshotCacheInfo setSupportsSecureCoding:] */

void FUN_100048628(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  uRam00000001000c6530 = param_3;
  return;
}



/* Entry: 100048634; end: 100048937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100048634(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar8 = &stack0xffffffffffffff40;
  uVar3 = 0x74616c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74616c,0xe300000000000000);
  lVar4 = param_1;
  func_0x0001000867a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_1000b14c8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
  }
  else {
    puVar5 = &uStack_b0;
    _swift_dynamicCast(puVar5,&uStack_80,PTR___sypN_1000b14c8 + 8,PTR___sSSN_1000b1180,6);
    uVar2 = uStack_a8;
    uVar3 = uStack_b0;
    if (((ulong)puVar5 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_1000488e0;
    }
    uVar6 = 0x676e6c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e6c,0xe300000000000000);
    lVar4 = param_1;
    func_0x0001000867a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (lVar4 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 != 0) {
      puVar5 = &uStack_b0;
      _swift_dynamicCast(puVar5,&uStack_80,puVar1 + 8,PTR___sSSN_1000b1180,6);
      uVar6 = uStack_b0;
      if (((ulong)puVar5 & 1) == 0) {
        _objc_release(param_1);
      }
      else {
        uVar7 = 0x70616e732d70616d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x70616e732d70616d,0xec000000746f6873)
        ;
        lVar4 = param_1;
        func_0x0001000867a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (lVar4 == 0) {
          uStack_98 = 0;
          uStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        uStack_78 = uStack_98;
        uStack_80 = uStack_a0;
        lStack_68 = lStack_88;
        uStack_70 = uStack_90;
        if (lStack_88 == 0) {
          _objc_release(param_1);
          _swift_bridgeObjectRelease(uStack_a8);
          goto LAB_1000488c0;
        }
        uVar7 = 0;
        FUN_100049e58(0,0x1000c6170,&PTR__OBJC_CLASS___UIImage_1000c20c0);
        puVar5 = &uStack_b0;
        _swift_dynamicCast(puVar5,&uStack_80,puVar1 + 8,uVar7,6);
        if (((ulong)puVar5 & 1) != 0) {
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_1000c64f0);
          *puVar5 = uVar3;
          puVar5[1] = uVar2;
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_1000c64f8);
          *puVar5 = uVar6;
          puVar5[1] = uStack_a8;
          *(undefined8 *)(unaff_x20 + _DAT_1000c6500) = uStack_b0;
          FUN_100048b5c();
          _objc_msgSendSuper2(&stack0xffffffffffffff40,PTR_s_init_1000c1bf0);
          _objc_release(param_1);
          return puVar8;
        }
        _objc_release(param_1);
        _swift_bridgeObjectRelease(uStack_a8);
      }
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1000488e0;
    }
    _objc_release(param_1);
LAB_1000488c0:
    _swift_bridgeObjectRelease(uVar2);
  }
  FUN_100048b7c(&uStack_80,0x1000c49f8,&UNK_1000899e0);
LAB_1000488e0:
  FUN_100048b5c();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 100048938; end: 10004895f; -[_TtC23MapFriendLocationWidget20MapSnapshotCacheInfo initWithCoder:] */

void FUN_100048938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_100048634();
  return;
}



/* Entry: 100048960; end: 100048a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100048960(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000c64f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1000c64f0))[1]);
  uVar1 = 0x74616c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74616c,0xe300000000000000);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1000c64f8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_1000c64f8))[1]);
  uVar1 = 0x676e6c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e6c,0xe300000000000000);
  func_0x0001000868e0(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0x70616e732d70616d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x70616e732d70616d,0xec000000746f6873);
  func_0x0001000868e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(uVar2);
  return;
}



/* Entry: 100048a60; end: 100048aaf; -[_TtC23MapFriendLocationWidget20MapSnapshotCacheInfo encodeWithCoder:] */

void FUN_100048a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_100048960(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_1);
  return;
}



/* Entry: 100048ab0; end: 100048b0b; -[_TtC23MapFriendLocationWidget20MapSnapshotCacheInfo init] */

void FUN_100048ab0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MapFriendLocationWidget.MapSnapshotCacheInfo",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100048adc);
  (*pcVar1)();
}



/* Entry: 100048b0c; end: 100048b5b; -[_TtC23MapFriendLocationWidget20MapSnapshotCacheInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100048b0c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000c64f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1000c64f8 + 8));
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(*(undefined8 *)(param_1 + _DAT_1000c6500));
  return;
}



/* Entry: 100048b5c; end: 100048b7b;  */

void FUN_100048b5c(void)

{
  _objc_opt_self(&PTR_PTR_1000c2620);
  return;
}



/* Entry: 100048b7c; end: 100048bbb;  */

undefined8 FUN_100048b7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000100d0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100048bbc; end: 100048ceb;  */

undefined * FUN_100048bbc(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar3 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = (uint)(param_2 >> 0x20);
  uVar6 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar6 == 0) {
      puVar9 = (undefined1 *)(param_2 >> 0x30 & 0xff);
    }
    else {
      iVar7 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar7,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100048cec);
        (*pcVar2)();
      }
      puVar9 = (undefined1 *)(long)(iVar7 - (int)param_1);
    }
  }
  else {
    if (uVar6 != 2) goto LAB_100048cb4;
    puVar9 = (undefined1 *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100048ce8);
      (*pcVar2)();
    }
  }
  if (puVar9 != (undefined1 *)0x0) {
    puVar4 = puVar9;
    FUN_10001e7b4(puVar9,0);
    puVar5 = puVar8;
    __s10Foundation4DataV13_copyContents12initializingAC8IteratorV_SitSrys5UInt8VG_tF
              (puVar8,puVar4 + 0x20,puVar9,param_1,param_2);
    func_0x000100018c5c(param_1,param_2);
    (**(code **)(lVar10 + 8))(puVar8,lVar3);
    if (puVar5 == puVar9) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100048ca0);
    (*pcVar2)();
  }
LAB_100048cb4:
  func_0x000100018c5c(param_1,param_2);
  return PTR___swiftEmptyArrayStorage_1000b14d0;
}



/* Entry: 100048cec; end: 100048db7;  */

undefined8 FUN_100048cec(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  func_0x000100035e00();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100048f68(0x1000c6548,&UNK_10008c5d0);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x00010004935c(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 100048db8; end: 100048ddf;  */

void FUN_100048db8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100035e00();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100048ed0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1000490c8(lVar6,param_4 & 1,0x1000c6578,&UNK_10008c5e8);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100035e00();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_1000b1180);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100048e94);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100048f68(0x1000c6578,&UNK_10008c5e8);
    lVar6 = *unaff_x20;
    goto joined_r0x000100048eec;
  }
  lVar6 = *unaff_x20;
joined_r0x000100048eec:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000b10c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100048f54);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(param_3);
  return;
}



/* Entry: 100048de0; end: 100048f53;  */

void FUN_100048de0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100035e00();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100048ed0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1000490c8(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100035e00();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_1000b1180);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100048e94);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100048f68(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000100048eec;
  }
  lVar6 = *unaff_x20;
joined_r0x000100048eec:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000b10c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100048f54);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(param_3);
  return;
}



/* Entry: 100048f54; end: 100048f67;  */

void FUN_100048f54(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x20;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100035e00();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100048ed0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1000490c8(lVar6,param_4 & 1,0x1000c6568,&UNK_10008c860);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100035e00();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF
                (PTR___sSSN_1000b1180);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100048e94);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100048f68(0x1000c6568,&UNK_10008c860);
    lVar6 = *unaff_x20;
    goto joined_r0x000100048eec;
  }
  lVar6 = *unaff_x20;
joined_r0x000100048eec:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000b10c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100048f54);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(param_3);
  return;
}



/* Entry: 100048f68; end: 1000490c7;  */

void FUN_100048f68(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000100d0();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  __ss18_DictionaryStorageC4copy8originalAByxq_Gs05__RawaB0C_tFZ();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      _memmove(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_100049034;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        _swift_bridgeObjectRetain();
        _objc_retain(uVar12);
        if (uVar8 != 0) break;
LAB_100049034:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000490c8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1000490a0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1000490a0:
  _swift_release(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1000490c8; end: 10004950b;  */

void FUN_1000490c8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000100d0(param_3,param_4);
  lVar7 = lVar17;
  __ss18_DictionaryStorageC6resize8original8capacity4moveAByxq_Gs05__RawaB0C_SiSbtFZ
            (lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_100049328:
    _swift_release(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100049358);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_100049328;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRetain(uVar4);
      _objc_retain(uVar18);
    }
    __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    __sSS4hash4intoys6HasherVz_tF(puVar8,uVar3,uVar4);
    __ss6HasherV9_finalizeSiyF();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10004935c);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10004950c; end: 100049573;  */

long FUN_10004950c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x00010001c120();
  FUN_100048bbc(param_1,param_2);
  lVar1 = param_1 + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ
            (lVar1,*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(param_1);
  return lVar1;
}


