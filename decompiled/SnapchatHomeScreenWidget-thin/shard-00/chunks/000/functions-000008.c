/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000396a4; end: 100039743;  */

void FUN_1000396a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c58c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5888;
  func_0x000100010120(0x1000c5888,&UNK_10008b968);
  uVar2 = 0x1000c58d0;
  func_0x000100010120(0x1000c58d0,&UNK_10008b988);
  uVar3 = uVar2;
  FUN_100039744();
  puVar4 = &uStack_30;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getOpaqueTypeConformance(puVar4,PTR___s7SwiftUI4ViewPAAE10unredactedQryFQOMQ_1000b0710,1);
  puVar5 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960;
  puStack_38 = puVar4;
  _swift_getWitnessTable(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960,uVar1,&puStack_38);
  puRam00000001000c58c8 = puVar5;
  return;
}



/* Entry: 100039744; end: 1000397b3;  */

void FUN_100039744(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam00000001000c58d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c58d0;
  func_0x000100010120(0x1000c58d0,&UNK_10008b988);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_1000b0820;
  puStack_18 = PTR___s7SwiftUI12_FrameLayoutVAA12ViewModifierAAWP_1000b02e8;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_20);
  puRam00000001000c58d8 = puVar2;
  return;
}



/* Entry: 1000397b4; end: 1000397ef;  */

undefined8 FUN_1000397b4(undefined8 param_1,undefined8 param_2)

{
  FUN_100036890(param_2,param_1);
  return param_2;
}



/* Entry: 1000397f0; end: 1000397f7;  */

void FUN_1000397f0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
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
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = uVar1;
  param_1[1] = 0x4028000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x1000c58f8;
  func_0x0001000100d0(0x1000c58f8,&UNK_10008b9b0);
  FUN_100038940((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_a0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  lVar2 = 0x1000c5890;
  func_0x0001000100d0(0x1000c5890,&UNK_10008b970);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  param_1[9] = uStack_58;
  param_1[8] = uStack_60;
  param_1[0xb] = uStack_48;
  param_1[10] = uStack_50;
  param_1[0xd] = uStack_38;
  param_1[0xc] = uStack_40;
  param_1[1] = uStack_98;
  *param_1 = uStack_a0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  return;
}



/* Entry: 1000397f8; end: 10003995f;  */

void FUN_1000397f8(undefined8 param_1)

{
  func_0x0001000100d0(0x1000c58f0,&UNK_10008b9a8);
  __s9WidgetKit27DynamicIslandExpandedRegionV19_viewRepresentationQrvg(param_1);
  return;
}



/* Entry: 100039960; end: 100039973;  */

void FUN_100039960(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0x1000c5870;
  func_0x0001000100d0(0x1000c5870,&UNK_10008b950);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  func_0x000100039094(param_1,unaff_x20 + uVar2,
                      *(undefined8 *)
                       (unaff_x20 +
                       (*(long *)(*(long *)(lVar1 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8)));
  return;
}



/* Entry: 100039974; end: 1000399df;  */

long FUN_100039974(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1000399e0; end: 100039a73;  */

undefined1 * FUN_1000399e0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  param_1[0x38] = param_2[0x38];
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  uVar4 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar4);
  return param_1;
}



/* Entry: 100039a74; end: 100039b5f;  */

undefined1 * FUN_100039a74(undefined1 *param_1,undefined1 *param_2)

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
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _objc_retain();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100039b60; end: 100039b8b;  */

void FUN_100039b60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Entry: 100039b8c; end: 100039c1f;  */

undefined1 * FUN_100039b8c(undefined1 *param_1,undefined1 *param_2)

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
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 100039c20; end: 100039cdf;  */

int FUN_100039c20(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100039ce0; end: 10003a77f;  */

void FUN_100039ce0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined *puStack_720;
  undefined2 uStack_718;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined3 uStack_618;
  undefined5 uStack_615;
  undefined3 uStack_610;
  undefined5 uStack_60d;
  undefined3 uStack_608;
  undefined5 uStack_605;
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
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined3 uStack_528;
  undefined5 uStack_525;
  undefined3 uStack_520;
  undefined5 uStack_51d;
  undefined3 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
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
  undefined3 uStack_458;
  undefined5 uStack_455;
  undefined3 uStack_450;
  undefined5 uStack_44d;
  undefined3 uStack_448;
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
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined *puStack_3a8;
  undefined2 uStack_3a0;
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
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined2 uStack_2c0;
  undefined6 uStack_2be;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined2 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
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
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined5 uStack_115;
  undefined3 uStack_110;
  undefined5 uStack_10d;
  undefined3 uStack_108;
  undefined5 uStack_105;
  undefined3 uStack_100;
  undefined5 uStack_fd;
  undefined3 uStack_f8;
  undefined5 uStack_f5;
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
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  func_0x00010003a168(&uStack_160);
  uStack_548 = uStack_138;
  uStack_550 = uStack_140;
  uStack_538 = uStack_128;
  uStack_540 = uStack_130;
  uStack_528 = uStack_118;
  uStack_530 = uStack_120;
  uStack_51d = uStack_10d;
  uStack_518 = uStack_108;
  uStack_525 = uStack_115;
  uStack_520 = uStack_110;
  uStack_568 = uStack_158;
  uStack_570 = uStack_160;
  uStack_558 = uStack_148;
  uStack_560 = uStack_150;
  uStack_4e8 = uStack_138;
  uStack_4f0 = uStack_140;
  uStack_4d8 = uStack_128;
  uStack_4e0 = uStack_130;
  uStack_4d0 = uStack_120;
  uStack_508 = uStack_158;
  uStack_510 = uStack_160;
  uStack_4f8 = uStack_148;
  uStack_500 = uStack_150;
  uVar4 = 0x1000c5918;
  func_0x00010003a938(&uStack_570,&uStack_250,0x1000c5918,&UNK_10008ba48);
  puVar1 = &uStack_510;
  func_0x00010003a980(puVar1,0x1000c5918,&UNK_10008ba48);
  uStack_638 = uStack_548;
  uStack_640 = uStack_550;
  uStack_628 = uStack_538;
  uStack_630 = uStack_540;
  uStack_618 = uStack_528;
  uStack_620 = uStack_530;
  uStack_60d = uStack_51d;
  uStack_608 = uStack_518;
  uStack_615 = uStack_525;
  uStack_610 = uStack_520;
  uStack_658 = uStack_568;
  uStack_660 = uStack_570;
  uStack_648 = uStack_558;
  uStack_650 = uStack_560;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_478 = uStack_638;
  uStack_480 = uStack_640;
  uStack_468 = uStack_628;
  uStack_470 = uStack_630;
  uStack_458 = uStack_618;
  uStack_460 = uStack_620;
  uStack_44d = uStack_60d;
  uStack_448 = uStack_608;
  uStack_455 = uStack_615;
  uStack_450 = uStack_610;
  uStack_498 = uStack_658;
  uStack_4a0 = uStack_660;
  uStack_488 = uStack_648;
  uStack_490 = uStack_650;
  uStack_4b0 = param_2;
  uStack_4a8 = param_3;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_f0,uVar5,0,uVar5,0,puVar1,uVar4);
  uStack_118 = (undefined3)uStack_468;
  uStack_115 = (undefined5)((ulong)uStack_468 >> 0x18);
  uStack_120 = uStack_470;
  uStack_108 = uStack_458;
  uStack_110 = (undefined3)uStack_460;
  uStack_10d = (undefined5)((ulong)uStack_460 >> 0x18);
  uStack_fd = uStack_44d;
  uStack_f8 = uStack_448;
  uStack_105 = uStack_455;
  uStack_100 = uStack_450;
  uStack_158 = uStack_4a8;
  uStack_160 = uStack_4b0;
  uStack_148 = uStack_498;
  uStack_150 = uStack_4a0;
  uStack_138 = uStack_488;
  uStack_140 = uStack_490;
  uStack_128 = uStack_478;
  uStack_130 = uStack_480;
  uStack_428 = uStack_658;
  uStack_430 = uStack_660;
  uStack_418 = uStack_648;
  uStack_420 = uStack_650;
  uStack_3f8 = uStack_628;
  uStack_400 = uStack_630;
  uStack_3f0 = uStack_620;
  uStack_408 = uStack_638;
  uStack_410 = uStack_640;
  uStack_440 = param_2;
  uStack_438 = param_3;
  func_0x00010003a938(&uStack_4b0,&uStack_250,0x1000c5920,&UNK_10008ba50);
  func_0x00010003a980(&uStack_440,0x1000c5920,&UNK_10008ba50);
  puVar2 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar3 = puVar2;
  __s7SwiftUI5ColorV7opacityyACSdF(0x3fe4cccccccccccd);
  _swift_release(puVar2);
  uVar4 = 0;
  uVar5 = 0;
  __s7SwiftUI11StrokeStyleV9lineWidth0E3Cap0E4Join10miterLimit4dash0K5PhaseAC12CoreGraphics7CGFloatV_So06CGLineG0VSo0pH0VALSayALGALtcfC
            (&uStack_748,0x4000000000000000,0x4024000000000000,0,0,0,
             PTR___swiftEmptyArrayStorage_1000b14d0);
  uStack_718 = 0x100;
  puStack_720 = puVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_3c8 = uStack_740;
  uStack_3d0 = uStack_748;
  uStack_3b8 = uStack_730;
  uStack_3c0 = uStack_738;
  puStack_3a8 = puStack_720;
  uStack_3b0 = uStack_728;
  uStack_5f8 = CONCAT53(uStack_f5,uStack_f8);
  uStack_600 = CONCAT53(uStack_fd,uStack_100);
  uStack_318 = uStack_e8;
  uStack_320 = uStack_f0;
  uStack_308 = uStack_d8;
  uStack_310 = uStack_e0;
  uStack_2f8 = uStack_c8;
  uStack_300 = uStack_d0;
  uStack_368 = uStack_138;
  uStack_370 = uStack_140;
  uStack_358 = uStack_128;
  uStack_360 = uStack_130;
  uStack_348 = CONCAT53(uStack_115,uStack_118);
  uStack_340 = CONCAT53(uStack_10d,uStack_110);
  uStack_350 = uStack_120;
  uStack_388 = uStack_158;
  uStack_390 = uStack_160;
  uStack_378 = uStack_148;
  uStack_380 = uStack_150;
  uStack_298 = uStack_740;
  uStack_2a0 = uStack_748;
  uStack_288 = uStack_730;
  uStack_290 = uStack_738;
  uStack_2e8 = uStack_740;
  uStack_2f0 = uStack_748;
  uStack_2d8 = uStack_730;
  uStack_2e0 = uStack_738;
  puStack_278 = puStack_720;
  uStack_280 = uStack_728;
  puStack_2c8 = puStack_720;
  uStack_2d0 = uStack_728;
  uStack_658 = uStack_158;
  uStack_660 = uStack_160;
  uStack_648 = uStack_148;
  uStack_650 = uStack_150;
  uStack_618 = uStack_118;
  uStack_615 = uStack_115;
  uStack_620 = uStack_120;
  uStack_608 = uStack_108;
  uStack_605 = uStack_105;
  uStack_610 = uStack_110;
  uStack_60d = uStack_10d;
  uStack_3a0 = uStack_718;
  uStack_270 = uStack_718;
  uStack_2c0 = uStack_718;
  uStack_638 = uStack_138;
  uStack_640 = uStack_140;
  uStack_628 = uStack_128;
  uStack_630 = uStack_130;
  uStack_5d8 = uStack_d8;
  uStack_5e0 = uStack_e0;
  uStack_5c8 = uStack_c8;
  uStack_5d0 = uStack_d0;
  uStack_5e8 = uStack_e8;
  uStack_5f0 = uStack_f0;
  uStack_590 = CONCAT62(uStack_2be,uStack_718);
  puStack_598 = puStack_720;
  uStack_5a0 = uStack_728;
  uStack_5b8 = uStack_740;
  uStack_5c0 = uStack_748;
  uStack_5a8 = uStack_730;
  uStack_5b0 = uStack_738;
  uStack_588 = uVar4;
  uStack_580 = uVar5;
  uStack_2b8 = uVar4;
  uStack_2b0 = uVar5;
  uStack_268 = uVar4;
  uStack_260 = uVar5;
  func_0x00010003a938(&uStack_3d0,&uStack_250,0x1000c5928,&UNK_10008ba58);
  func_0x00010003a938(&uStack_390,&uStack_250,0x1000c5930,&UNK_10008ba60);
  func_0x00010003a938(&uStack_2f0,&uStack_250,0x1000c5938,&UNK_10008ba68);
  func_0x00010003a980(&uStack_2a0,0x1000c5938,&UNK_10008ba68);
  func_0x00010003a980(&uStack_748,0x1000c5928,&UNK_10008ba58);
  func_0x00010003a980(&uStack_160,0x1000c5930,&UNK_10008ba60);
  puStack_188 = puStack_598;
  uStack_190 = uStack_5a0;
  uStack_178 = uStack_588;
  uStack_180 = uStack_590;
  uStack_1c8 = uStack_5d8;
  uStack_1d0 = uStack_5e0;
  uStack_1b8 = uStack_5c8;
  uStack_1c0 = uStack_5d0;
  uStack_1a8 = uStack_5b8;
  uStack_1b0 = uStack_5c0;
  uStack_198 = uStack_5a8;
  uStack_1a0 = uStack_5b0;
  uStack_208 = CONCAT53(uStack_615,uStack_618);
  uStack_1f8 = CONCAT53(uStack_605,uStack_608);
  uStack_200 = CONCAT53(uStack_60d,uStack_610);
  uStack_210 = uStack_620;
  uStack_1e8 = uStack_5f8;
  uStack_1f0 = uStack_600;
  uStack_1d8 = uStack_5e8;
  uStack_1e0 = uStack_5f0;
  uStack_248 = uStack_658;
  uStack_250 = uStack_660;
  uStack_238 = uStack_648;
  uStack_240 = uStack_650;
  uStack_228 = uStack_638;
  uStack_230 = uStack_640;
  uStack_218 = uStack_628;
  uStack_220 = uStack_630;
  puStack_98 = puStack_598;
  uStack_a0 = uStack_5a0;
  uStack_88 = uStack_588;
  uStack_90 = uStack_590;
  uStack_d8 = uStack_5d8;
  uStack_e0 = uStack_5e0;
  uStack_c8 = uStack_5c8;
  uStack_d0 = uStack_5d0;
  uStack_b8 = uStack_5b8;
  uStack_c0 = uStack_5c0;
  uStack_a8 = uStack_5a8;
  uStack_b0 = uStack_5b0;
  uStack_118 = uStack_618;
  uStack_115 = uStack_615;
  uStack_120 = uStack_620;
  uStack_110 = uStack_610;
  uStack_10d = uStack_60d;
  uStack_f8 = (undefined3)uStack_5f8;
  uStack_f5 = (undefined5)((ulong)uStack_5f8 >> 0x18);
  uStack_100 = (undefined3)uStack_600;
  uStack_fd = (undefined5)((ulong)uStack_600 >> 0x18);
  uStack_e8 = uStack_5e8;
  uStack_f0 = uStack_5f0;
  uStack_158 = uStack_658;
  uStack_160 = uStack_660;
  uStack_148 = uStack_648;
  uStack_150 = uStack_650;
  uStack_170 = uStack_580;
  uStack_80 = uStack_580;
  uStack_138 = uStack_638;
  uStack_140 = uStack_640;
  uStack_128 = uStack_628;
  uStack_130 = uStack_630;
  func_0x00010003a938(&uStack_250,&uStack_748,0x1000c5940,&UNK_10008ba70);
  func_0x00010003a980(&uStack_160,0x1000c5940,&UNK_10008ba70);
  param_1[0x19] = puStack_188;
  param_1[0x18] = uStack_190;
  param_1[0x1b] = uStack_178;
  param_1[0x1a] = uStack_180;
  param_1[0x1c] = uStack_170;
  param_1[0x11] = uStack_1c8;
  param_1[0x10] = uStack_1d0;
  param_1[0x13] = uStack_1b8;
  param_1[0x12] = uStack_1c0;
  param_1[0x15] = uStack_1a8;
  param_1[0x14] = uStack_1b0;
  param_1[0x17] = uStack_198;
  param_1[0x16] = uStack_1a0;
  param_1[9] = uStack_208;
  param_1[8] = uStack_210;
  param_1[0xb] = uStack_1f8;
  param_1[10] = uStack_200;
  param_1[0xd] = uStack_1e8;
  param_1[0xc] = uStack_1f0;
  param_1[0xf] = uStack_1d8;
  param_1[0xe] = uStack_1e0;
  param_1[1] = uStack_248;
  *param_1 = uStack_250;
  param_1[3] = uStack_238;
  param_1[2] = uStack_240;
  param_1[5] = uStack_228;
  param_1[4] = uStack_230;
  param_1[7] = uStack_218;
  param_1[6] = uStack_220;
  return;
}



/* Entry: 10003a780; end: 10003a78b;  */

void FUN_10003a780(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10003a78c; end: 10003a9bf;  */

void FUN_10003a78c(void)

{
  FUN_100039ce0();
  return;
}



/* Entry: 10003a9c0; end: 10003a9c3;  */

void FUN_10003a9c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5970 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5940;
  func_0x000100010120(0x1000c5940,&UNK_10008ba70);
  uVar2 = uVar1;
  func_0x00010003aa5c();
  uVar3 = 0x1000c5988;
  func_0x00010003aaf4(0x1000c5988,0x1000c5938,&UNK_10008ba68,
                      PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5970 = puVar4;
  return;
}



/* Entry: 10003a9c4; end: 10003ab63;  */

void FUN_10003a9c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5970 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5940;
  func_0x000100010120(0x1000c5940,&UNK_10008ba70);
  uVar2 = uVar1;
  func_0x00010003aa5c();
  uVar3 = 0x1000c5988;
  func_0x00010003aaf4(0x1000c5988,0x1000c5938,&UNK_10008ba68,
                      PTR___s7SwiftUI16_OverlayModifierVyxGAA04ViewD0AAMc_1000b0480);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5970 = puVar4;
  return;
}



/* Entry: 10003ab64; end: 10003ab6b;  */

void FUN_10003ab64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10003ab6c; end: 10003abaf;  */

undefined8 * FUN_10003ab6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10003abb0; end: 10003ac13;  */

undefined8 * FUN_10003abb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10003ac14; end: 10003ac5f;  */

undefined8 * FUN_10003ac14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10003ac60; end: 10003acff;  */

int FUN_10003ac60(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10003ad00; end: 10003ae1b;  */

long * FUN_10003ad00(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    param_1[2] = param_2[2];
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar5 = (long)*(int *)(param_3 + 0x18);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar2 + -8);
    pcVar7 = *(code **)(lVar6 + 0x30);
    _swift_bridgeObjectRetain(lVar3);
    lVar3 = (long)param_2 + lVar5;
    (*pcVar7)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar3 = 0x1000c4330;
      func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10003ae1c; end: 10003ae93;  */

void FUN_10003ae1c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003ae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10003ae94; end: 10003b0c7;  */

undefined8 * FUN_10003ae94(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 10003b0c8; end: 10003b1a7;  */

undefined8 * FUN_10003b0c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar3 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 10003b1a8; end: 10003b2db;  */

undefined8 * FUN_10003b1a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      goto LAB_10003b29c;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    goto LAB_10003b29c;
  }
  lVar4 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
LAB_10003b29c:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Entry: 10003b2dc; end: 10003b2e7;  */

void FUN_10003b2dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10003b2e8; end: 10003b373;  */

ulong FUN_10003b2e8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010003b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 10003b374; end: 10003b37f;  */

void FUN_10003b374(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10003b380; end: 10003b3ff;  */

void FUN_10003b380(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
                    /* WARNING: Could not recover jumptable at 0x00010003b3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,lVar1);
  return;
}



/* Entry: 10003b400; end: 10003b437;  */

void FUN_10003b400(undefined8 param_1)

{
  if (lRam00000001000c59e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10009014c);
  return;
}



/* Entry: 10003b438; end: 10003b4bf;  */

void FUN_10003b438(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_10008bae0;
  puStack_38 = &UNK_10008baf8;
  lVar1 = 0x13f;
  func_0x0001000241e0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_1000b1108 + 0x40;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10003b4c0; end: 10003b4cf;  */

void FUN_10003b4c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10009019c,1);
  return;
}



/* Entry: 10003b4d0; end: 10003b9cb;  */

void FUN_10003b4d0(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_130 [8];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long in_stack_ffffffffffffff70;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  lVar2 = 0;
  plStack_d8 = param_1;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar14 = auStack_130 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10003b400();
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar10 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar14 - extraout_x8;
  FUN_10003c89c((long)unaff_x20 + (long)iVar1,lVar12,0x1000c4330,&UNK_1000890b0);
  lVar10 = lVar12;
  (**(code **)(lVar11 + 0x30))(lVar12,1,lVar2);
  if ((int)lVar10 == 1) {
    func_0x00010003c8e4(lVar12,0x1000c4330,&UNK_1000890b0);
    lStack_d0 = *unaff_x20;
    puStack_c8 = (undefined1 *)unaff_x20[1];
    lStack_c0 = unaff_x20[2];
    uStack_b8 = (ulong)*(byte *)(unaff_x20 + 3);
    uStack_b0 = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x1c));
    uStack_a8 = 1;
    _swift_bridgeObjectRetain();
    uVar6 = 0x1000c5a88;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar7 = uVar6;
    FUN_10003c924();
    uVar8 = uVar7;
    func_0x00010003c98c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&lStack_a0,&lStack_d0,uVar6,&UNK_1000b4548,uVar7,uVar8);
  }
  else {
    (**(code **)(lVar11 + 0x20))(puVar14,lVar12,lVar2);
    iVar1 = 2;
    FUN_1000806c0(2,0x11,2,0);
    if (iVar1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0x1000c5aa0;
      func_0x0001000100d0(0x1000c5aa0,&UNK_10008bca0);
      lStack_f8 = *(long *)(lVar10 + -8);
      uStack_108 = *(undefined8 *)(lStack_f8 + 0x40);
      lStack_f0 = lVar10;
      lStack_e0 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      uStack_100 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
      lVar12 = lVar12 - uStack_100;
      lVar3 = 0x1000c5aa8;
      func_0x0001000100d0(0x1000c5aa8,&UNK_10008bca8);
      lStack_118 = *(long *)(lVar3 + -8);
      lStack_110 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)
                (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar13 = lVar12 - extraout_x8_00;
      lStack_128 = lVar13;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar15 = lVar13 - (lVar15 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar14;
      (**(code **)(lVar11 + 0x10))(lVar15,puVar14,lVar2);
      __s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV14destinationURLAC10Foundation0K0V_tcfC
                ();
      lStack_d0 = lVar15;
      puStack_c8 = puVar9;
      func_0x00010003c98c();
      lVar10 = lVar15;
      FUN_10003c9d4();
      __s7SwiftUI6ButtonV012_AppIntents_aB0E6intent5labelACyxGqd___xyXEtc0dE00D6IntentRd__lufC
                (lVar13,&lStack_d0,FUN_10003c9cc,&lStack_a0,&UNK_1000b4548,
                 PTR___s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN_1000b0df8
                 ,lVar15,lVar10);
      lVar4 = 0;
      __s7SwiftUI16PlainButtonStyleVMa();
      lVar15 = *(long *)(lVar4 + -8);
      lStack_120 = lVar13;
      (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar15 + 0x40));
      lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      puStack_e8 = puVar14;
      __s7SwiftUI16PlainButtonStyleVACycfC(lVar13);
      in_stack_ffffffffffffff70 = 0x1000c5ab8;
      func_0x00010003cc7c(0x1000c5ab8,0x1000c5aa8,&UNK_10008bca8,
                          PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_1000b0868);
      lStack_88 = in_stack_ffffffffffffff70;
      func_0x00010003ca14();
      lVar10 = lStack_128;
      __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lF
                (lVar12,lVar13,lVar3,lVar4,in_stack_ffffffffffffff70,lStack_88);
      (**(code **)(lVar15 + 8))(lVar13,lVar4);
      (**(code **)(lStack_118 + 8))(lVar10,lVar3);
      lVar10 = lStack_110;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar13 = lStack_f0;
      lVar15 = lStack_f8;
      lVar10 = lVar10 - uStack_100;
      (**(code **)(lStack_f8 + 0x10))(lVar10,lVar12,lStack_f0);
      plVar5 = &lStack_a0;
      lStack_a0 = lVar3;
      lStack_98 = lVar4;
      _swift_getOpaqueTypeConformance
                (plVar5,
                 PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lFQOMQ_1000b0720
                 ,1);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar10,lVar13,plVar5);
      (**(code **)(lVar15 + 8))(lVar12,lVar13);
      puVar14 = puStack_e8;
      _swift_retain(lVar10);
    }
    lStack_c0 = 0;
    puStack_c8 = (undefined1 *)0x0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uVar6 = 0x1000c5a88;
    lStack_d0 = lVar10;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar7 = uVar6;
    FUN_10003c924();
    uVar8 = uVar7;
    func_0x00010003c98c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&lStack_a0,&lStack_d0,uVar6,&UNK_1000b4548,uVar7,uVar8);
    _swift_release(lVar10);
    (**(code **)(lVar11 + 8))(puVar14,lVar2);
  }
  plStack_d8[1] = lStack_98;
  *plStack_d8 = lStack_a0;
  plStack_d8[3] = lStack_88;
  plStack_d8[2] = in_stack_ffffffffffffff70;
  plStack_d8[4] = lStack_80;
  *(undefined1 *)(plStack_d8 + 5) = uStack_78;
  return;
}



/* Entry: 10003b9cc; end: 10003ba2b;  */

void FUN_10003b9cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  lVar4 = 0;
  FUN_10003b400();
  uVar6 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x1c));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  *(undefined1 *)(param_1 + 3) = uVar3;
  param_1[4] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(uVar2);
  return;
}



/* Entry: 10003ba2c; end: 10003ba3f;  */

void FUN_10003ba2c(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_130 [8];
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  long lStack_e0;
  long *plStack_d8;
  long lStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long in_stack_ffffffffffffff70;
  long lStack_88;
  long lStack_80;
  undefined1 uStack_78;
  
  lVar2 = 0;
  plStack_d8 = param_1;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar2 + -8);
  lVar15 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar14 = auStack_130 + -(lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10003b400();
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar10 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar14 - extraout_x8;
  FUN_10003c89c((long)unaff_x20 + (long)iVar1,lVar12,0x1000c4330,&UNK_1000890b0);
  lVar10 = lVar12;
  (**(code **)(lVar11 + 0x30))(lVar12,1,lVar2);
  if ((int)lVar10 == 1) {
    func_0x00010003c8e4(lVar12,0x1000c4330,&UNK_1000890b0);
    lStack_d0 = *unaff_x20;
    puStack_c8 = (undefined1 *)unaff_x20[1];
    lStack_c0 = unaff_x20[2];
    uStack_b8 = (ulong)*(byte *)(unaff_x20 + 3);
    uStack_b0 = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x1c));
    uStack_a8 = 1;
    _swift_bridgeObjectRetain();
    uVar6 = 0x1000c5a88;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar7 = uVar6;
    FUN_10003c924();
    uVar8 = uVar7;
    func_0x00010003c98c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&lStack_a0,&lStack_d0,uVar6,&UNK_1000b4548,uVar7,uVar8);
  }
  else {
    (**(code **)(lVar11 + 0x20))(puVar14,lVar12,lVar2);
    iVar1 = 2;
    FUN_1000806c0(2,0x11,2,0);
    if (iVar1 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0x1000c5aa0;
      func_0x0001000100d0(0x1000c5aa0,&UNK_10008bca0);
      lStack_f8 = *(long *)(lVar10 + -8);
      uStack_108 = *(undefined8 *)(lStack_f8 + 0x40);
      lStack_f0 = lVar10;
      lStack_e0 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      uStack_100 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
      lVar12 = lVar12 - uStack_100;
      lVar3 = 0x1000c5aa8;
      func_0x0001000100d0(0x1000c5aa8,&UNK_10008bca8);
      lStack_118 = *(long *)(lVar3 + -8);
      lStack_110 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)
                (*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar13 = lVar12 - extraout_x8_00;
      lStack_128 = lVar13;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar15 = lVar13 - (lVar15 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar14;
      (**(code **)(lVar11 + 0x10))(lVar15,puVar14,lVar2);
      __s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV14destinationURLAC10Foundation0K0V_tcfC
                ();
      lStack_d0 = lVar15;
      puStack_c8 = puVar9;
      func_0x00010003c98c();
      lVar10 = lVar15;
      FUN_10003c9d4();
      __s7SwiftUI6ButtonV012_AppIntents_aB0E6intent5labelACyxGqd___xyXEtc0dE00D6IntentRd__lufC
                (lVar13,&lStack_d0,FUN_10003c9cc,&lStack_a0,&UNK_1000b4548,
                 PTR___s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN_1000b0df8
                 ,lVar15,lVar10);
      lVar4 = 0;
      __s7SwiftUI16PlainButtonStyleVMa();
      lVar15 = *(long *)(lVar4 + -8);
      lStack_120 = lVar13;
      (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar15 + 0x40));
      lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      puStack_e8 = puVar14;
      __s7SwiftUI16PlainButtonStyleVACycfC(lVar13);
      in_stack_ffffffffffffff70 = 0x1000c5ab8;
      func_0x00010003cc7c(0x1000c5ab8,0x1000c5aa8,&UNK_10008bca8,
                          PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_1000b0868);
      lStack_88 = in_stack_ffffffffffffff70;
      func_0x00010003ca14();
      lVar10 = lStack_128;
      __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lF
                (lVar12,lVar13,lVar3,lVar4,in_stack_ffffffffffffff70,lStack_88);
      (**(code **)(lVar15 + 8))(lVar13,lVar4);
      (**(code **)(lStack_118 + 8))(lVar10,lVar3);
      lVar10 = lStack_110;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar13 = lStack_f0;
      lVar15 = lStack_f8;
      lVar10 = lVar10 - uStack_100;
      (**(code **)(lStack_f8 + 0x10))(lVar10,lVar12,lStack_f0);
      plVar5 = &lStack_a0;
      lStack_a0 = lVar3;
      lStack_98 = lVar4;
      _swift_getOpaqueTypeConformance
                (plVar5,
                 PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lFQOMQ_1000b0720
                 ,1);
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar10,lVar13,plVar5);
      (**(code **)(lVar15 + 8))(lVar12,lVar13);
      puVar14 = puStack_e8;
      _swift_retain(lVar10);
    }
    lStack_c0 = 0;
    puStack_c8 = (undefined1 *)0x0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_a8 = 0;
    uVar6 = 0x1000c5a88;
    lStack_d0 = lVar10;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar7 = uVar6;
    FUN_10003c924();
    uVar8 = uVar7;
    func_0x00010003c98c();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&lStack_a0,&lStack_d0,uVar6,&UNK_1000b4548,uVar7,uVar8);
    _swift_release(lVar10);
    (**(code **)(lVar11 + 8))(puVar14,lVar2);
  }
  plStack_d8[1] = lStack_98;
  *plStack_d8 = lStack_a0;
  plStack_d8[3] = lStack_88;
  plStack_d8[2] = in_stack_ffffffffffffff70;
  plStack_d8[4] = lStack_80;
  *(undefined1 *)(plStack_d8 + 5) = uStack_78;
  return;
}



/* Entry: 10003ba40; end: 10003c237;  */

void FUN_10003ba40(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auStack_f58 [408];
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 uStack_d40;
  undefined8 uStack_d38;
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
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined1 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined1 uStack_ca0;
  undefined7 uStack_c98;
  undefined1 uStack_c91;
  undefined7 uStack_c90;
  undefined1 uStack_c89;
  undefined7 uStack_c88;
  undefined1 uStack_c81;
  undefined7 uStack_c80;
  undefined1 uStack_c79;
  undefined7 uStack_c78;
  undefined1 uStack_c71;
  undefined7 uStack_c70;
  undefined1 uStack_c69;
  undefined7 uStack_c68;
  undefined1 uStack_c61;
  undefined7 uStack_c60;
  undefined1 uStack_c59;
  undefined7 uStack_c58;
  undefined1 uStack_c51;
  undefined7 uStack_c50;
  undefined1 uStack_c49;
  undefined7 uStack_c48;
  undefined1 uStack_c41;
  undefined7 uStack_c40;
  undefined1 uStack_c39;
  undefined7 uStack_c38;
  undefined1 uStack_c31;
  undefined7 uStack_c30;
  undefined1 uStack_c29;
  undefined7 uStack_c28;
  undefined1 uStack_c21;
  undefined7 uStack_c20;
  undefined1 uStack_c19;
  undefined7 uStack_c18;
  undefined1 uStack_c11;
  undefined7 uStack_c10;
  undefined1 uStack_c09;
  undefined7 uStack_c08;
  undefined1 uStack_c01;
  undefined7 uStack_c00;
  undefined1 uStack_bf9;
  undefined7 uStack_bf8;
  undefined1 uStack_bf1;
  undefined7 uStack_bf0;
  undefined1 uStack_be9;
  undefined7 uStack_be8;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 uStack_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined1 uStack_870;
  undefined7 uStack_86f;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
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
  undefined1 auStack_740 [112];
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
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
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
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined1 uStack_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined1 uStack_550;
  undefined7 uStack_54f;
  undefined1 uStack_548;
  undefined7 uStack_547;
  undefined1 uStack_540;
  undefined7 uStack_53f;
  undefined1 uStack_538;
  undefined7 uStack_537;
  undefined1 uStack_530;
  undefined7 uStack_52f;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 uStack_520;
  undefined7 uStack_51f;
  undefined1 uStack_518;
  undefined7 uStack_517;
  undefined1 uStack_510;
  undefined7 uStack_50f;
  undefined1 uStack_508;
  undefined7 uStack_507;
  undefined1 uStack_500;
  undefined7 uStack_4ff;
  undefined1 uStack_4f8;
  undefined7 uStack_4f7;
  undefined1 uStack_4f0;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
  undefined7 uStack_4e7;
  undefined1 uStack_4e0;
  undefined7 uStack_4df;
  undefined1 uStack_4d8;
  undefined7 uStack_4d7;
  undefined1 uStack_4d0;
  undefined7 uStack_4cf;
  undefined1 uStack_4c8;
  undefined7 uStack_4c7;
  undefined1 uStack_4c0;
  undefined7 uStack_4bf;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined1 uStack_498;
  undefined8 uStack_497;
  undefined8 uStack_48f;
  undefined8 uStack_487;
  undefined8 uStack_47f;
  undefined8 uStack_477;
  undefined8 uStack_46f;
  undefined8 uStack_467;
  undefined8 uStack_45f;
  undefined8 uStack_457;
  undefined8 uStack_44f;
  undefined8 uStack_447;
  undefined8 uStack_43f;
  undefined8 uStack_437;
  undefined8 uStack_42f;
  undefined8 uStack_427;
  undefined8 uStack_41f;
  undefined8 uStack_417;
  undefined8 uStack_40f;
  undefined8 uStack_407;
  undefined8 uStack_3ff;
  undefined8 uStack_3f7;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
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
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
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
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f0;
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
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_c0;
  undefined8 *puVar6;
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  FUN_10003c238(&uStack_868);
  uStack_658 = uStack_7f0;
  uStack_660 = uStack_7f8;
  uStack_648 = uStack_7e0;
  uStack_650 = uStack_7e8;
  uStack_638 = uStack_7d0;
  uStack_640 = uStack_7d8;
  uStack_628 = uStack_7c0;
  uStack_630 = uStack_7c8;
  uStack_698 = uStack_830;
  uStack_6a0 = uStack_838;
  uStack_688 = uStack_820;
  uStack_690 = uStack_828;
  uStack_678 = uStack_810;
  uStack_680 = uStack_818;
  uStack_668 = uStack_800;
  uStack_670 = uStack_808;
  uStack_6c8 = uStack_860;
  uStack_6d0 = uStack_868;
  uStack_6b8 = uStack_850;
  uStack_6c0 = uStack_858;
  uStack_6a8 = uStack_840;
  uStack_6b0 = uStack_848;
  uStack_5a8 = uStack_7f0;
  uStack_5b0 = uStack_7f8;
  uStack_598 = uStack_7e0;
  uStack_5a0 = uStack_7e8;
  uStack_588 = uStack_7d0;
  uStack_590 = uStack_7d8;
  uStack_578 = uStack_7c0;
  uStack_580 = uStack_7c8;
  uStack_5e8 = uStack_830;
  uStack_5f0 = uStack_838;
  uStack_5d8 = uStack_820;
  uStack_5e0 = uStack_828;
  uStack_5c8 = uStack_810;
  uStack_5d0 = uStack_818;
  uStack_5b8 = uStack_800;
  uStack_5c0 = uStack_808;
  uStack_618 = uStack_860;
  uStack_620 = uStack_868;
  uStack_608 = uStack_850;
  uStack_610 = uStack_858;
  uStack_5f8 = uStack_840;
  uStack_600 = uStack_848;
  FUN_10003c89c(&uStack_6d0,&uStack_b00,0x1000c5a28,&UNK_10008bbb0);
  puVar6 = &uStack_620;
  func_0x00010003c8e4(puVar6,0x1000c5a28,&UNK_10008bbb0);
  uVar4 = SUB81(puVar6,0);
  uStack_c19 = (undefined1)uStack_658;
  uStack_c18 = (undefined7)((ulong)uStack_658 >> 8);
  uStack_c21 = (undefined1)uStack_660;
  uStack_c20 = (undefined7)((ulong)uStack_660 >> 8);
  uStack_c09 = (undefined1)uStack_648;
  uStack_c08 = (undefined7)((ulong)uStack_648 >> 8);
  uStack_c11 = (undefined1)uStack_650;
  uStack_c10 = (undefined7)((ulong)uStack_650 >> 8);
  uStack_bf9 = (undefined1)uStack_638;
  uStack_bf8 = (undefined7)((ulong)uStack_638 >> 8);
  uStack_c01 = (undefined1)uStack_640;
  uStack_c00 = (undefined7)((ulong)uStack_640 >> 8);
  uStack_be9 = (undefined1)uStack_628;
  uStack_be8 = (undefined7)((ulong)uStack_628 >> 8);
  uStack_bf1 = (undefined1)uStack_630;
  uStack_bf0 = (undefined7)((ulong)uStack_630 >> 8);
  uStack_c59 = (undefined1)uStack_698;
  uStack_c58 = (undefined7)((ulong)uStack_698 >> 8);
  uStack_c61 = (undefined1)uStack_6a0;
  uStack_c60 = (undefined7)((ulong)uStack_6a0 >> 8);
  uStack_c49 = (undefined1)uStack_688;
  uStack_c48 = (undefined7)((ulong)uStack_688 >> 8);
  uStack_c51 = (undefined1)uStack_690;
  uStack_c50 = (undefined7)((ulong)uStack_690 >> 8);
  uStack_c39 = (undefined1)uStack_678;
  uStack_c38 = (undefined7)((ulong)uStack_678 >> 8);
  uStack_c41 = (undefined1)uStack_680;
  uStack_c40 = (undefined7)((ulong)uStack_680 >> 8);
  uStack_c29 = (undefined1)uStack_668;
  uStack_c28 = (undefined7)((ulong)uStack_668 >> 8);
  uStack_c31 = (undefined1)uStack_670;
  uStack_c30 = (undefined7)((ulong)uStack_670 >> 8);
  uStack_c89 = (undefined1)uStack_6c8;
  uStack_c88 = (undefined7)((ulong)uStack_6c8 >> 8);
  uStack_c91 = (undefined1)uStack_6d0;
  uStack_c90 = (undefined7)((ulong)uStack_6d0 >> 8);
  uStack_c79 = (undefined1)uStack_6b8;
  uStack_c78 = (undefined7)((ulong)uStack_6b8 >> 8);
  uStack_c81 = (undefined1)uStack_6c0;
  uStack_c80 = (undefined7)((ulong)uStack_6c0 >> 8);
  uStack_c69 = (undefined1)uStack_6a8;
  uStack_c68 = (undefined7)((ulong)uStack_6a8 >> 8);
  uStack_c71 = (undefined1)uStack_6b0;
  uStack_c70 = (undefined7)((ulong)uStack_6b0 >> 8);
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uStack_4d7 = uStack_c10;
  uStack_4d0 = uStack_c09;
  uStack_4df = uStack_c18;
  uStack_4d8 = uStack_c11;
  uStack_4c7 = uStack_c00;
  uStack_4c0 = uStack_bf9;
  uStack_4cf = uStack_c08;
  uStack_4c8 = uStack_c01;
  uStack_4b7 = uStack_bf0;
  uStack_4bf = uStack_bf8;
  uStack_4b8 = uStack_bf1;
  uStack_517 = uStack_c50;
  uStack_510 = uStack_c49;
  uStack_51f = uStack_c58;
  uStack_518 = uStack_c51;
  uStack_507 = uStack_c40;
  uStack_500 = uStack_c39;
  uStack_50f = uStack_c48;
  uStack_508 = uStack_c41;
  uStack_4f7 = uStack_c30;
  uStack_4f0 = uStack_c29;
  uStack_4ff = uStack_c38;
  uStack_4f8 = uStack_c31;
  uStack_4e7 = uStack_c20;
  uStack_4e0 = uStack_c19;
  uStack_4ef = uStack_c28;
  uStack_4e8 = uStack_c21;
  uStack_557 = uStack_c90;
  uStack_550 = uStack_c89;
  uStack_55f = uStack_c98;
  uStack_558 = uStack_c91;
  uStack_547 = uStack_c80;
  uStack_540 = uStack_c79;
  uStack_54f = uStack_c88;
  uStack_548 = uStack_c81;
  uVar14 = CONCAT17(uStack_c61,uStack_c68);
  uStack_537 = uStack_c70;
  uStack_530 = uStack_c69;
  uStack_53f = uStack_c78;
  uStack_538 = uStack_c71;
  uStack_568 = 0x4010000000000000;
  uStack_560 = 0;
  uStack_4b0 = uStack_be9;
  uStack_4af = uStack_be8;
  uStack_527 = uStack_c60;
  uStack_520 = uStack_c59;
  uStack_52f = uStack_c68;
  uStack_528 = uStack_c61;
  uVar12 = 0x4028000000000000;
  uVar16 = uStack_7e8;
  uVar17 = uStack_7d8;
  uStack_570 = param_2;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_a58 = CONCAT71(uStack_4c7,uStack_4c8);
  uStack_a60 = CONCAT71(uStack_4cf,uStack_4d0);
  uStack_a48 = CONCAT71(uStack_4b7,uStack_4b8);
  uStack_a50 = CONCAT71(uStack_4bf,uStack_4c0);
  uStack_a98 = CONCAT71(uStack_507,uStack_508);
  uStack_aa0 = CONCAT71(uStack_50f,uStack_510);
  uStack_a88 = CONCAT71(uStack_4f7,uStack_4f8);
  uStack_a90 = CONCAT71(uStack_4ff,uStack_500);
  uStack_a78 = CONCAT71(uStack_4e7,uStack_4e8);
  uStack_a80 = CONCAT71(uStack_4ef,uStack_4f0);
  uStack_a68 = CONCAT71(uStack_4d7,uStack_4d8);
  uStack_a70 = CONCAT71(uStack_4df,uStack_4e0);
  uStack_ad8 = CONCAT71(uStack_547,uStack_548);
  uStack_ae0 = CONCAT71(uStack_54f,uStack_550);
  uStack_ac8 = CONCAT71(uStack_537,uStack_538);
  uStack_ad0 = CONCAT71(uStack_53f,uStack_540);
  uStack_ab8 = CONCAT71(uStack_527,uStack_528);
  uStack_ac0 = CONCAT71(uStack_52f,uStack_530);
  uStack_aa8 = CONCAT71(uStack_517,uStack_518);
  uStack_ab0 = CONCAT71(uStack_51f,uStack_520);
  uStack_ae8 = CONCAT71(uStack_557,uStack_558);
  uStack_af0 = CONCAT71(uStack_55f,uStack_560);
  uStack_af8 = uStack_568;
  uStack_b00 = uStack_570;
  uStack_40f = CONCAT17(uStack_c09,uStack_c10);
  uStack_417 = CONCAT17(uStack_c11,uStack_c18);
  uStack_3ff = CONCAT17(uStack_bf9,uStack_c00);
  uStack_407 = CONCAT17(uStack_c01,uStack_c08);
  uStack_3f7 = CONCAT17(uStack_bf1,uStack_bf8);
  uStack_3ef = uStack_bf0;
  uStack_44f = CONCAT17(uStack_c49,uStack_c50);
  uStack_457 = CONCAT17(uStack_c51,uStack_c58);
  uStack_43f = CONCAT17(uStack_c39,uStack_c40);
  uStack_447 = CONCAT17(uStack_c41,uStack_c48);
  uStack_42f = CONCAT17(uStack_c29,uStack_c30);
  uStack_437 = CONCAT17(uStack_c31,uStack_c38);
  uStack_41f = CONCAT17(uStack_c19,uStack_c20);
  uStack_427 = CONCAT17(uStack_c21,uStack_c28);
  uStack_48f = CONCAT17(uStack_c89,uStack_c90);
  uStack_497 = CONCAT17(uStack_c91,uStack_c98);
  uStack_47f = CONCAT17(uStack_c79,uStack_c80);
  uStack_487 = CONCAT17(uStack_c81,uStack_c88);
  uStack_46f = CONCAT17(uStack_c69,uStack_c70);
  uStack_477 = CONCAT17(uStack_c71,uStack_c78);
  uStack_45f = CONCAT17(uStack_c59,uStack_c60);
  uStack_467 = CONCAT17(uStack_c61,uStack_c68);
  uStack_a40 = CONCAT71(uStack_4af,uStack_4b0);
  uStack_4a0 = 0x4010000000000000;
  uStack_498 = 0;
  uStack_3e8 = uStack_be9;
  uStack_3e7 = uStack_be8;
  uStack_4a8 = param_2;
  FUN_10003c89c(&uStack_570,&uStack_868,0x1000c5a30,&UNK_10008bbb8);
  puVar6 = &uStack_4a8;
  func_0x00010003c8e4(puVar6,0x1000c5a30,&UNK_10008bbb8);
  uVar5 = SUB81(puVar6,0);
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_338 = uStack_a58;
  uStack_340 = uStack_a60;
  uStack_328 = uStack_a48;
  uStack_330 = uStack_a50;
  uStack_320 = uStack_a40;
  uStack_378 = uStack_a98;
  uStack_380 = uStack_aa0;
  uStack_368 = uStack_a88;
  uStack_370 = uStack_a90;
  uStack_358 = uStack_a78;
  uStack_360 = uStack_a80;
  uStack_348 = uStack_a68;
  uStack_350 = uStack_a70;
  uStack_3b8 = uStack_ad8;
  uStack_3c0 = uStack_ae0;
  uStack_3a8 = uStack_ac8;
  uStack_3b0 = uStack_ad0;
  uStack_398 = uStack_ab8;
  uStack_3a0 = uStack_ac0;
  uStack_388 = uStack_aa8;
  uStack_390 = uStack_ab0;
  uStack_3d8 = uStack_af8;
  uStack_3e0 = uStack_b00;
  uStack_3c8 = uStack_ae8;
  uStack_3d0 = uStack_af0;
  uStack_2f0 = 0;
  uVar13 = 0x4010000000000000;
  uVar15 = uStack_b00;
  uStack_318 = uVar4;
  uStack_310 = uVar12;
  uStack_308 = uVar14;
  uStack_300 = uVar16;
  uStack_2f8 = uVar17;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_898 = CONCAT71(uStack_317,uStack_318);
  uStack_8a0 = uStack_320;
  uStack_888 = uStack_308;
  uStack_890 = uStack_310;
  uStack_878 = uStack_2f8;
  uStack_880 = uStack_300;
  uStack_870 = uStack_2f0;
  uStack_8d8 = uStack_358;
  uStack_8e0 = uStack_360;
  uStack_8c8 = uStack_348;
  uStack_8d0 = uStack_350;
  uStack_8b8 = uStack_338;
  uStack_8c0 = uStack_340;
  uStack_8a8 = uStack_328;
  uStack_8b0 = uStack_330;
  uStack_918 = uStack_398;
  uStack_920 = uStack_3a0;
  uStack_908 = uStack_388;
  uStack_910 = uStack_390;
  uStack_8f8 = uStack_378;
  uStack_900 = uStack_380;
  uStack_8e8 = uStack_368;
  uStack_8f0 = uStack_370;
  uStack_958 = uStack_3d8;
  uStack_960 = uStack_3e0;
  uStack_948 = uStack_3c8;
  uStack_950 = uStack_3d0;
  uStack_938 = uStack_3b8;
  uStack_940 = uStack_3c0;
  uStack_928 = uStack_3a8;
  uStack_930 = uStack_3b0;
  uStack_238 = uStack_a58;
  uStack_240 = uStack_a60;
  uStack_228 = uStack_a48;
  uStack_230 = uStack_a50;
  uStack_220 = uStack_a40;
  uStack_278 = uStack_a98;
  uStack_280 = uStack_aa0;
  uStack_268 = uStack_a88;
  uStack_270 = uStack_a90;
  uStack_258 = uStack_a78;
  uStack_260 = uStack_a80;
  uStack_248 = uStack_a68;
  uStack_250 = uStack_a70;
  uStack_2b8 = uStack_ad8;
  uStack_2c0 = uStack_ae0;
  uStack_2a8 = uStack_ac8;
  uStack_2b0 = uStack_ad0;
  uStack_298 = uStack_ab8;
  uStack_2a0 = uStack_ac0;
  uStack_288 = uStack_aa8;
  uStack_290 = uStack_ab0;
  uStack_2d8 = uStack_af8;
  uStack_2e0 = uStack_b00;
  uStack_2c8 = uStack_ae8;
  uStack_2d0 = uStack_af0;
  uStack_1f0 = 0;
  uStack_218 = uVar4;
  uStack_210 = uVar12;
  uStack_208 = uVar14;
  FUN_10003c89c(&uStack_3e0,&uStack_868,0x1000c5a38,&UNK_10008bbc0);
  puVar6 = &uStack_2e0;
  func_0x00010003c8e4(puVar6,0x1000c5a38,&UNK_10008bbc0);
  dVar18 = *(double *)(unaff_x20 + 0x20);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_118 = uStack_898;
  uStack_120 = uStack_8a0;
  uStack_108 = uStack_888;
  uStack_110 = uStack_890;
  uStack_f8 = uStack_878;
  uStack_100 = uStack_880;
  uStack_f0 = CONCAT71(uStack_86f,uStack_870);
  uStack_158 = uStack_8d8;
  uStack_160 = uStack_8e0;
  uStack_148 = uStack_8c8;
  uStack_150 = uStack_8d0;
  uStack_138 = uStack_8b8;
  uStack_140 = uStack_8c0;
  uStack_128 = uStack_8a8;
  uStack_130 = uStack_8b0;
  uStack_198 = uStack_918;
  uStack_1a0 = uStack_920;
  uStack_188 = uStack_908;
  uStack_190 = uStack_910;
  uStack_178 = uStack_8f8;
  uStack_180 = uStack_900;
  uStack_168 = uStack_8e8;
  uStack_170 = uStack_8f0;
  uStack_1d8 = uStack_958;
  uStack_1e0 = uStack_960;
  uStack_1c8 = uStack_948;
  uStack_1d0 = uStack_950;
  uStack_1b8 = uStack_938;
  uStack_1c0 = uStack_940;
  uStack_1a8 = uStack_928;
  uStack_1b0 = uStack_930;
  uStack_c0 = 0;
  uStack_e8 = uVar5;
  uStack_e0 = uVar13;
  uStack_d8 = uVar15;
  if (NAN(dVar18)) {
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    puVar10 = puVar6;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    __s2os0A4_log_3dso0B0__ySo0a1_B7_type_ta_SVSo03OS_a1_B0Cs12StaticStringVs7CVarArg_pdtF
              (puVar6,0x100000000,puVar10,"Contradictory frame constraints specified.",0x2a,2,
               PTR___swiftEmptyArrayStorage_1000b14d0);
    _objc_release(puVar10);
  }
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (auStack_740,0,1,0,1,0x7ff0000000000000,0,dVar18,0,0,1);
  _memcpy(&uStack_868,&uStack_1e0,0x121);
  uStack_cf8 = uStack_898;
  uStack_d00 = uStack_8a0;
  uStack_ce8 = uStack_888;
  uStack_cf0 = uStack_890;
  uStack_cd8 = uStack_878;
  uStack_ce0 = uStack_880;
  uStack_cd0 = CONCAT71(uStack_86f,uStack_870);
  uStack_d38 = uStack_8d8;
  uStack_d40 = uStack_8e0;
  uStack_d28 = uStack_8c8;
  uStack_d30 = uStack_8d0;
  uStack_d18 = uStack_8b8;
  uStack_d20 = uStack_8c0;
  uStack_d08 = uStack_8a8;
  uStack_d10 = uStack_8b0;
  uStack_d78 = uStack_918;
  uStack_d80 = uStack_920;
  uStack_d68 = uStack_908;
  uStack_d70 = uStack_910;
  uStack_d58 = uStack_8f8;
  uStack_d60 = uStack_900;
  uStack_d48 = uStack_8e8;
  uStack_d50 = uStack_8f0;
  uStack_db8 = uStack_958;
  uStack_dc0 = uStack_960;
  uStack_da8 = uStack_948;
  uStack_db0 = uStack_950;
  uStack_d98 = uStack_938;
  uStack_da0 = uStack_940;
  uStack_d88 = uStack_928;
  uStack_d90 = uStack_930;
  uStack_ca0 = 0;
  uStack_cc8 = uVar5;
  uStack_cc0 = uVar13;
  uStack_cb8 = uVar15;
  FUN_10003c89c(&uStack_1e0,&uStack_b00,0x1000c5a40,&UNK_10008bbc8);
  func_0x00010003c8e4(&uStack_dc0,0x1000c5a40,&UNK_10008bbc8);
  lVar7 = 0x1000c5a48;
  func_0x0001000100d0(0x1000c5a48,&UNK_10008bbd0);
  lVar1 = param_1 + *(int *)(lVar7 + 0x24);
  uVar3 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_1000b0538;
  lVar7 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))(lVar1,uVar3,lVar7);
  puVar8 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  lVar7 = 0x1000c5a50;
  puVar11 = &UNK_10008bbd8;
  func_0x0001000100d0();
  *(undefined **)(lVar1 + *(int *)(lVar7 + 0x34)) = puVar8;
  *(undefined2 *)(lVar1 + *(int *)(lVar7 + 0x38)) = 0x100;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  _memcpy(&uStack_c98,&uStack_868,0x198);
  lVar9 = 0x1000c5a58;
  func_0x0001000100d0(0x1000c5a58,&UNK_10008bbe0);
  plVar2 = (long *)(lVar1 + *(int *)(lVar9 + 0x24));
  *plVar2 = lVar7;
  plVar2[1] = (long)puVar11;
  _memcpy(param_1,&uStack_868,0x198);
  _memcpy(&uStack_b00,&uStack_868,0x198);
  FUN_10003c89c(&uStack_c98,auStack_f58,0x1000c5a60,&UNK_10008bbe8);
  func_0x00010003c8e4(&uStack_b00,0x1000c5a60,&UNK_10008bbe8);
  return;
}



/* Entry: 10003c238; end: 10003c7fb;  */

void FUN_10003c238(undefined8 *param_1,undefined8 **param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 **ppuVar13;
  undefined *puVar14;
  undefined8 **ppuVar15;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 *puStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_588;
  undefined1 auStack_578 [104];
  undefined8 *puStack_510;
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
  undefined *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 *puStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  undefined **ppuStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined1 uStack_3d0;
  undefined7 uStack_3cf;
  undefined1 uStack_3c8;
  undefined **ppuStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 uStack_3b0;
  undefined **ppuStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined *puStack_380;
  undefined1 uStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 uStack_318;
  undefined **ppuStack_310;
  undefined **ppuStack_308;
  undefined8 uStack_300;
  undefined **ppuStack_2f8;
  undefined *puStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined6 uStack_2b0;
  undefined2 uStack_2aa;
  undefined6 uStack_2a8;
  undefined2 uStack_2a2;
  undefined6 uStack_2a0;
  undefined2 uStack_29a;
  undefined6 uStack_298;
  undefined2 uStack_292;
  undefined6 uStack_290;
  undefined2 uStack_28a;
  undefined6 uStack_288;
  undefined2 uStack_282;
  undefined6 uStack_280;
  undefined2 uStack_27a;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined **ppuStack_240;
  undefined **ppuStack_238;
  undefined8 uStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined2 uStack_168;
  undefined6 uStack_166;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined2 uStack_e0;
  undefined6 uStack_de;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [64];
  
  ppuVar5 = param_2;
  if (*(char *)(param_2 + 3) != '\x01') {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_opt_self();
    param_5 = (undefined *)0x51;
    func_0x000100087620(0x4032000000000000,0x4032000000000000);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = (undefined8 **)0x0;
    if (ppuVar2 != (undefined **)0x0) {
      _objc_retain();
      ppuVar3 = ppuVar2;
      __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
      ppuVar4 = ppuVar3;
      __s7SwiftUI9AlignmentV6centerACvgZ();
      __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
                (auStack_a0,0x4032000000000000,0,0x4032000000000000,0,ppuVar4,param_3);
      _objc_release(ppuVar2);
      uStack_2a2 = (undefined2)auStack_a0._8_8_;
      uStack_2a0 = SUB86(auStack_a0._8_8_,2);
      uStack_2aa = (undefined2)auStack_a0._0_8_;
      uStack_2a8 = SUB86(auStack_a0._0_8_,2);
      uStack_292 = (undefined2)auStack_a0._24_8_;
      uStack_290 = SUB86(auStack_a0._24_8_,2);
      uStack_29a = (undefined2)auStack_a0._16_8_;
      uStack_298 = SUB86(auStack_a0._16_8_,2);
      uStack_282 = (undefined2)auStack_a0._40_8_;
      uStack_280 = SUB86(auStack_a0._40_8_,2);
      uStack_28a = (undefined2)auStack_a0._32_8_;
      uStack_288 = SUB86(auStack_a0._32_8_,2);
      ppuStack_178 = (undefined **)0x0;
      uStack_170 = 1;
      uStack_166 = uStack_2a8;
      uStack_160 = uStack_2a2;
      uStack_16e = uStack_2b0;
      uStack_168 = uStack_2aa;
      uStack_156 = uStack_298;
      uStack_150 = uStack_292;
      uStack_15e = uStack_2a0;
      uStack_158 = uStack_29a;
      uStack_146 = uStack_288;
      uStack_14e = uStack_290;
      uStack_148 = uStack_28a;
      puStack_108 = (undefined *)0x0;
      uStack_100 = 1;
      uStack_d6 = uStack_288;
      uStack_d0 = uStack_282;
      uStack_de = uStack_290;
      uStack_d8 = uStack_28a;
      uStack_e6 = uStack_298;
      uStack_e0 = uStack_292;
      uStack_ee = uStack_2a0;
      uStack_e8 = uStack_29a;
      uStack_f6 = uStack_2a8;
      uStack_f0 = uStack_2a2;
      uStack_f8 = uStack_2aa;
      param_5 = &UNK_10008a450;
      ppuStack_180 = ppuVar3;
      uStack_140 = uStack_282;
      uStack_13e = uStack_280;
      puStack_110 = ppuVar3;
      uStack_ce = uStack_280;
      FUN_10003c89c(&ppuStack_180,&ppuStack_240,0x1000c4778,&UNK_10008a450);
      ppuVar5 = &puStack_110;
      func_0x00010003c8e4(ppuVar5,0x1000c4778,&UNK_10008a450);
      uStack_5a8 = CONCAT62(uStack_166,uStack_168);
      uStack_5b0 = CONCAT62(uStack_16e,uStack_170);
      uStack_598 = ppuStack_178;
      puStack_5a0 = ppuStack_180;
      uStack_5b8 = CONCAT62(uStack_156,uStack_158);
      uStack_5c0 = CONCAT62(uStack_15e,uStack_160);
      uStack_5c8 = CONCAT62(uStack_146,uStack_148);
      uStack_5d0 = CONCAT62(uStack_14e,uStack_150);
      uStack_588 = CONCAT62(uStack_13e,uStack_140);
      goto LAB_10003c3a4;
    }
  }
  uStack_588 = 0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  puStack_5a0 = (undefined **)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
LAB_10003c3a4:
  puStack_110 = *param_2;
  puVar1 = param_2[1];
  puStack_108 = (undefined *)puVar1;
  FUN_100010174();
  _swift_bridgeObjectRetain(puVar1);
  ppuVar6 = &puStack_110;
  puVar10 = PTR___sSSN_1000b1180;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  ppuVar7 = ppuVar6;
  _SIGStylesGet();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = ppuVar7;
  func_0x000100086980();
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(ppuVar7);
  __s7SwiftUI4FontVyACSo9CTFontRefacfC();
  ppuVar7 = ppuVar8;
  ppuVar13 = ppuVar6;
  puVar14 = puVar10;
  ppuVar15 = ppuVar5;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  _swift_release(ppuVar8);
  func_0x000100022a4c(ppuVar6,puVar10,ppuVar5);
  _swift_bridgeObjectRelease(param_5);
  puVar9 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar10 = &UNK_10008bbf0;
  _swift_getKeyPath();
  puVar11 = &UNK_10008bc20;
  _swift_getKeyPath();
  uStack_3e0 = 1;
  uStack_3d8 = 0;
  uStack_3d0 = SUB81(puVar11,0);
  uStack_3cf = (undefined7)((ulong)puVar11 >> 8);
  uStack_3c8 = 1;
  puVar12 = &UNK_10008bc50;
  ppuStack_410 = (undefined **)ppuVar7;
  ppuStack_408 = (undefined **)ppuVar13;
  uStack_400 = (char)puVar14;
  ppuStack_3f8 = (undefined **)ppuVar15;
  puStack_3f0 = puVar9;
  puStack_3e8 = puVar10;
  _swift_getKeyPath();
  uStack_230 = CONCAT71(uStack_3ff,uStack_400);
  puStack_218 = puStack_3e8;
  puStack_220 = puStack_3f0;
  uStack_208 = uStack_3d8;
  uStack_210 = uStack_3e0;
  uStack_1ff = uStack_3cf;
  uStack_1f8 = uStack_3c8;
  uStack_207 = uStack_3d7;
  uStack_200 = uStack_3d0;
  ppuStack_238 = ppuStack_408;
  ppuStack_240 = ppuStack_410;
  ppuStack_228 = ppuStack_3f8;
  uStack_390 = 1;
  uStack_388 = 0;
  uStack_378 = 1;
  ppuStack_3c0 = (undefined **)ppuVar7;
  ppuStack_3b8 = (undefined **)ppuVar13;
  uStack_3b0 = (char)puVar14;
  ppuStack_3a8 = (undefined **)ppuVar15;
  puStack_3a0 = puVar9;
  puStack_398 = puVar10;
  puStack_380 = puVar11;
  FUN_10003c89c(&ppuStack_410,&puStack_110,0x1000c5a68,&UNK_10008bc80);
  func_0x00010003c8e4(&ppuStack_3c0,0x1000c5a68,&UNK_10008bc80);
  ppuStack_368 = ppuStack_238;
  ppuStack_370 = ppuStack_240;
  ppuStack_358 = ppuStack_228;
  uStack_360 = uStack_230;
  uStack_338 = CONCAT71(uStack_207,uStack_208);
  puStack_348 = puStack_218;
  puStack_350 = puStack_220;
  uStack_340 = uStack_210;
  uStack_158 = SUB82(puStack_218,0);
  uStack_156 = (undefined6)((ulong)puStack_218 >> 0x10);
  uStack_160 = SUB82(puStack_220,0);
  uStack_15e = (undefined6)((ulong)puStack_220 >> 0x10);
  uStack_148 = (undefined2)uStack_338;
  uStack_146 = (undefined6)((uint7)uStack_207 >> 8);
  uStack_150 = (undefined2)uStack_210;
  uStack_14e = (undefined6)((ulong)uStack_210 >> 0x10);
  uStack_328 = CONCAT71(uStack_1f7,uStack_1f8);
  uStack_330 = CONCAT71(uStack_1ff,uStack_200);
  uStack_2d8 = CONCAT71(uStack_207,uStack_208);
  uStack_318 = 0x3feb851eb851eb85;
  ppuStack_178 = ppuStack_238;
  ppuStack_180 = ppuStack_240;
  uStack_168 = SUB82(ppuStack_228,0);
  uStack_166 = (undefined6)((ulong)ppuStack_228 >> 0x10);
  uStack_170 = (undefined2)uStack_230;
  uStack_16e = (undefined6)((ulong)uStack_230 >> 0x10);
  uStack_140 = (undefined2)uStack_330;
  uStack_13e = (undefined6)((uint7)uStack_1ff >> 8);
  uStack_128 = 0x3feb851eb851eb85;
  puStack_2e8 = puStack_218;
  puStack_2f0 = puStack_220;
  uStack_2e0 = uStack_210;
  uStack_2c8 = CONCAT71(uStack_1f7,uStack_1f8);
  uStack_2d0 = CONCAT71(uStack_1ff,uStack_200);
  ppuStack_308 = ppuStack_238;
  ppuStack_310 = ppuStack_240;
  ppuStack_2f8 = ppuStack_228;
  uStack_300 = uStack_230;
  uStack_2b8 = 0x3feb851eb851eb85;
  puStack_320 = puVar12;
  puStack_2c0 = puVar12;
  uStack_138 = uStack_328;
  puStack_130 = puVar12;
  FUN_10003c89c(&ppuStack_370,&puStack_110,0x1000c5a70,&UNK_10008bc88);
  func_0x00010003c8e4(&ppuStack_310,0x1000c5a70,&UNK_10008bc88);
  puStack_218 = (undefined *)CONCAT62(uStack_156,uStack_158);
  puStack_220 = (undefined *)CONCAT62(uStack_15e,uStack_160);
  uStack_278 = CONCAT62(uStack_146,uStack_148);
  uStack_210 = CONCAT62(uStack_14e,uStack_150);
  uStack_288 = SUB86(puStack_218,0);
  uStack_282 = (undefined2)((uint6)uStack_156 >> 0x20);
  uStack_290 = SUB86(puStack_220,0);
  uStack_28a = (undefined2)((uint6)uStack_15e >> 0x20);
  uStack_280 = (undefined6)uStack_210;
  uStack_27a = (undefined2)((uint6)uStack_14e >> 0x20);
  uStack_270 = CONCAT62(uStack_13e,uStack_140);
  uStack_268 = uStack_138;
  uStack_258 = uStack_128;
  puStack_260 = puStack_130;
  ppuStack_228 = (undefined **)CONCAT62(uStack_166,uStack_168);
  uStack_230 = CONCAT62(uStack_16e,uStack_170);
  uStack_2a8 = SUB86(ppuStack_178,0);
  uStack_2a2 = (undefined2)((ulong)ppuStack_178 >> 0x30);
  uStack_2b0 = SUB86(ppuStack_180,0);
  uStack_2aa = (undefined2)((ulong)ppuStack_180 >> 0x30);
  uStack_298 = SUB86(ppuStack_228,0);
  uStack_292 = (undefined2)((uint6)uStack_166 >> 0x20);
  uStack_2a0 = (undefined6)uStack_230;
  uStack_29a = (undefined2)((uint6)uStack_16e >> 0x20);
  uStack_250 = 0x3ff0000000000000;
  ppuStack_238 = ppuStack_178;
  ppuStack_240 = ppuStack_180;
  uStack_208 = (undefined1)uStack_148;
  uStack_207 = (undefined7)((ulong)uStack_278 >> 8);
  uStack_1f8 = (undefined1)uStack_138;
  uStack_1f7 = (undefined7)((ulong)uStack_138 >> 8);
  uStack_200 = (undefined1)uStack_140;
  uStack_1ff = (undefined7)((ulong)uStack_270 >> 8);
  uStack_1e8 = uStack_128;
  puStack_1f0 = puStack_130;
  uStack_1e0 = 0x3ff0000000000000;
  FUN_10003c89c(&uStack_2b0,&puStack_110,0x1000c5a78,&UNK_10008bc90);
  func_0x00010003c8e4(&ppuStack_240,0x1000c5a78,&UNK_10008bc90);
  uStack_440 = uStack_5a8;
  uStack_448 = uStack_5b0;
  uStack_450 = uStack_598;
  puStack_458 = puStack_5a0;
  uStack_420 = uStack_5c8;
  uStack_428 = uStack_5d0;
  uStack_430 = uStack_5b8;
  uStack_438 = uStack_5c0;
  uStack_498 = CONCAT26(uStack_27a,uStack_280);
  uStack_c8 = uStack_268;
  uStack_d0 = (undefined2)uStack_270;
  uStack_ce = (undefined6)((ulong)uStack_270 >> 0x10);
  uStack_b8 = uStack_258;
  puStack_c0 = puStack_260;
  puStack_108 = (undefined *)CONCAT26(uStack_2a2,uStack_2a8);
  puStack_110 = (undefined8 *)CONCAT26(uStack_2aa,uStack_2b0);
  uStack_f8 = (undefined2)uStack_298;
  uStack_f6 = (undefined6)(CONCAT26(uStack_292,uStack_298) >> 0x10);
  uStack_100 = (undefined2)uStack_2a0;
  uStack_fe = (undefined6)(CONCAT26(uStack_29a,uStack_2a0) >> 0x10);
  uStack_4c0 = CONCAT26(uStack_2a2,uStack_2a8);
  uStack_4c8 = CONCAT26(uStack_2aa,uStack_2b0);
  uStack_4b0 = CONCAT26(uStack_292,uStack_298);
  uStack_4b8 = CONCAT26(uStack_29a,uStack_2a0);
  uStack_4a0 = CONCAT26(uStack_282,uStack_288);
  uStack_4a8 = CONCAT26(uStack_28a,uStack_290);
  uStack_e8 = (undefined2)uStack_288;
  uStack_e6 = (undefined6)(CONCAT26(uStack_282,uStack_288) >> 0x10);
  uStack_f0 = (undefined2)uStack_290;
  uStack_ee = (undefined6)(CONCAT26(uStack_28a,uStack_290) >> 0x10);
  uStack_d8 = (undefined2)uStack_278;
  uStack_d6 = (undefined6)((ulong)uStack_278 >> 0x10);
  uStack_e0 = (undefined2)uStack_280;
  uStack_de = (undefined6)(CONCAT26(uStack_27a,uStack_280) >> 0x10);
  uStack_1a8 = uStack_5b8;
  uStack_1b0 = uStack_5c0;
  uStack_198 = uStack_5c8;
  uStack_1a0 = uStack_5d0;
  uStack_1c8 = uStack_598;
  puStack_1d0 = puStack_5a0;
  uStack_1b8 = uStack_5a8;
  uStack_1c0 = uStack_5b0;
  uStack_4e8 = uStack_5b8;
  uStack_4f0 = uStack_5c0;
  uStack_4d8 = uStack_5c8;
  uStack_4e0 = uStack_5d0;
  uStack_508 = uStack_598;
  puStack_510 = puStack_5a0;
  uStack_4f8 = uStack_5a8;
  uStack_500 = uStack_5b0;
  ppuStack_178 = (undefined **)CONCAT26(uStack_2a2,uStack_2a8);
  ppuStack_180 = (undefined **)CONCAT26(uStack_2aa,uStack_2b0);
  uStack_166 = (undefined6)(CONCAT26(uStack_292,uStack_298) >> 0x10);
  uStack_16e = (undefined6)(CONCAT26(uStack_29a,uStack_2a0) >> 0x10);
  uStack_138 = uStack_268;
  uStack_128 = uStack_258;
  puStack_130 = puStack_260;
  uStack_156 = (undefined6)(CONCAT26(uStack_282,uStack_288) >> 0x10);
  uStack_15e = (undefined6)(CONCAT26(uStack_28a,uStack_290) >> 0x10);
  uStack_14e = (undefined6)(CONCAT26(uStack_27a,uStack_280) >> 0x10);
  uStack_418 = uStack_588;
  uStack_b0 = uStack_250;
  uStack_190 = uStack_588;
  uStack_120 = uStack_250;
  uStack_4d0 = uStack_588;
  uStack_468 = uStack_250;
  uStack_470 = uStack_258;
  puStack_478 = puStack_260;
  uStack_480 = uStack_268;
  uStack_488 = uStack_270;
  uStack_490 = uStack_278;
  param_1[1] = uStack_598;
  *param_1 = puStack_5a0;
  param_1[3] = uStack_5a8;
  param_1[2] = uStack_5b0;
  param_1[9] = uStack_4c8;
  param_1[8] = uStack_588;
  param_1[0xb] = uStack_4b8;
  param_1[10] = uStack_4c0;
  param_1[5] = uStack_5b8;
  param_1[4] = uStack_5c0;
  param_1[7] = uStack_5c8;
  param_1[6] = uStack_5d0;
  param_1[0x13] = puStack_260;
  param_1[0x12] = uStack_268;
  param_1[0x15] = uStack_250;
  param_1[0x14] = uStack_258;
  param_1[0xf] = uStack_498;
  param_1[0xe] = uStack_4a0;
  param_1[0x11] = uStack_270;
  param_1[0x10] = uStack_278;
  param_1[0xd] = uStack_4a8;
  param_1[0xc] = uStack_4b0;
  uStack_170 = uStack_100;
  uStack_168 = uStack_f8;
  uStack_160 = uStack_f0;
  uStack_158 = uStack_e8;
  uStack_150 = uStack_e0;
  uStack_148 = uStack_d8;
  uStack_146 = uStack_d6;
  uStack_140 = uStack_d0;
  uStack_13e = uStack_ce;
  FUN_10003c89c(&puStack_1d0,auStack_578,0x1000c5a80,&UNK_10008bff0);
  FUN_10003c89c(&ppuStack_180,auStack_578,0x1000c5a78,&UNK_10008bc90);
  func_0x00010003c8e4(&puStack_110,0x1000c5a78,&UNK_10008bc90);
  func_0x00010003c8e4(&puStack_458,0x1000c5a80,&UNK_10008bff0);
  return;
}



/* Entry: 10003c7fc; end: 10003c807;  */

void FUN_10003c7fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10003c808; end: 10003c83f;  */

void FUN_10003c808(void)

{
  FUN_10003ba40();
  return;
}



/* Entry: 10003c840; end: 10003c847;  */

void FUN_10003c840(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  __s7SwiftUI17EnvironmentValuesV9lineLimitSiSgvg();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 10003c848; end: 10003c893;  */

void FUN_10003c848(undefined1 *param_1,undefined1 param_2)

{
  __s7SwiftUI17EnvironmentValuesV22multilineTextAlignmentAA0fG0Ovg();
  *param_1 = param_2;
  return;
}



/* Entry: 10003c894; end: 10003c89b;  */

void FUN_10003c894(undefined8 *param_1,undefined8 param_2)

{
  __s7SwiftUI17EnvironmentValuesV18minimumScaleFactor12CoreGraphics7CGFloatVvg();
  *param_1 = param_2;
  return;
}



/* Entry: 10003c89c; end: 10003c923;  */

undefined8 FUN_10003c89c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10003c924; end: 10003c9cb;  */

void FUN_10003c924(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam00000001000c5a90 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5a88;
  func_0x000100010120(0x1000c5a88,&UNK_10008bde0);
  puStack_18 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_1000b08b8;
  puVar2 = PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960;
  _swift_getWitnessTable(PTR___sxSg7SwiftUI4ViewA2bCRzlMc_1000b0960,uVar1,&puStack_18);
  puRam00000001000c5a90 = puVar2;
  return;
}



/* Entry: 10003c9cc; end: 10003c9d3;  */

void FUN_10003c9cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar6 = puVar5[2];
  uVar3 = *(undefined1 *)(puVar5 + 3);
  lVar4 = 0;
  FUN_10003b400();
  uVar7 = *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar4 + 0x1c));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  *(undefined1 *)(param_1 + 3) = uVar3;
  param_1[4] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010008606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_1000b1560)(uVar2);
  return;
}



/* Entry: 10003c9d4; end: 10003ca57;  */

void FUN_10003c9d4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5ab0 != (undefined *)0x0) {
    return;
  }
  puVar1 = 
  PTR___s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV0bC00bI0AAMc_1000b0de8;
  _swift_getWitnessTable
            (PTR___s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV0bC00bI0AAMc_1000b0de8
             ,PTR___s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN_1000b0df8);
  puRam00000001000c5ab0 = puVar1;
  return;
}



/* Entry: 10003ca58; end: 10003ca5b;  */

void FUN_10003ca58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5ac8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5a48;
  func_0x000100010120(0x1000c5a48,&UNK_10008bbd0);
  uVar2 = uVar1;
  func_0x00010003caf4();
  uVar3 = 0x1000c5af0;
  func_0x00010003cc7c(0x1000c5af0,0x1000c5a58,&UNK_10008bbe0,
                      PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_1000b0570);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5ac8 = puVar4;
  return;
}



/* Entry: 10003ca5c; end: 10003ccbf;  */

void FUN_10003ca5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5ac8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5a48;
  func_0x000100010120(0x1000c5a48,&UNK_10008bbd0);
  uVar2 = uVar1;
  func_0x00010003caf4();
  uVar3 = 0x1000c5af0;
  func_0x00010003cc7c(0x1000c5af0,0x1000c5a58,&UNK_10008bbe0,
                      PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_1000b0570);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5ac8 = puVar4;
  return;
}



/* Entry: 10003ccc0; end: 10003ccc3;  */

void FUN_10003ccc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5af8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5b00;
  func_0x000100010120(0x1000c5b00,&UNK_10008bcb0);
  uVar2 = uVar1;
  FUN_10003c924();
  uVar3 = uVar2;
  func_0x00010003c98c();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c5af8 = puVar4;
  return;
}



/* Entry: 10003ccc4; end: 10003cd3b;  */

void FUN_10003ccc4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5af8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5b00;
  func_0x000100010120(0x1000c5b00,&UNK_10008bcb0);
  uVar2 = uVar1;
  FUN_10003c924();
  uVar3 = uVar2;
  func_0x00010003c98c();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c5af8 = puVar4;
  return;
}



/* Entry: 10003cd3c; end: 10003cd87;  */

void FUN_10003cd3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10003cd88; end: 10003cdb3;  */

long FUN_10003cd88(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10003cdb4; end: 10003cdb7;  */

void FUN_10003cdb4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10003cdb8; end: 10003cdef;  */

void FUN_10003cdb8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100086054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_1000b1550)(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Entry: 10003cdf0; end: 10003cdf3;  */

undefined1 * FUN_10003cdf0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  param_1[0x38] = param_2[0x38];
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10003cdf4; end: 10003ce6f;  */

undefined1 * FUN_10003cdf4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  param_1[0x38] = param_2[0x38];
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10003ce70; end: 10003ce73;  */

undefined1 * FUN_10003ce70(undefined1 *param_1,undefined1 *param_2)

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
  return param_1;
}



/* Entry: 10003ce74; end: 10003cf3f;  */

undefined1 * FUN_10003ce74(undefined1 *param_1,undefined1 *param_2)

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
  return param_1;
}



/* Entry: 10003cf40; end: 10003cf43;  */

undefined1 * FUN_10003cf40(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x38] = param_2[0x38];
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 10003cf44; end: 10003cfbf;  */

undefined1 * FUN_10003cf44(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x38] = param_2[0x38];
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
  return param_1;
}



/* Entry: 10003cfc0; end: 10003d087;  */

int FUN_10003cfc0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x52) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10003d088; end: 10003d5b7;  */

void FUN_10003d088(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 ***pppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  undefined8 uVar17;
  undefined8 ****ppppuVar18;
  undefined *puVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x12;
  long extraout_x12_00;
  long lVar24;
  code *pcVar25;
  undefined8 **ppuStack_150;
  undefined8 **ppuStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined1 uStack_f8;
  undefined8 **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined1 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  lVar23 = 0x1000c5bb8;
  lStack_120 = param_1;
  func_0x0001000100d0(0x1000c5bb8,&UNK_10008be28);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar23 + -8) + 0x40));
  lVar24 = (long)&ppuStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_118 = lVar24;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar24 = lVar24 - extraout_x12;
  lVar23 = 0x1000c5bc0;
  func_0x0001000100d0(0x1000c5bc0,&UNK_10008be30);
  lStack_140 = *(long *)(lVar23 + -8);
  lStack_128 = lVar23;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lStack_140 + 0x40));
  lVar23 = lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_138 = lVar23;
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lStack_110 = lVar23 - extraout_x12_00;
  pppuVar7 = *(undefined8 ****)(param_2 + 0x18);
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  lStack_130 = lVar24;
  if (param_2[0x38] == '\x01') {
    FUN_1000373c8();
  }
  else if (*param_2 == '\x01') {
    func_0x000100037660();
  }
  else {
    func_0x000100037514();
  }
  pppuStack_b8 = pppuVar7;
  pppuStack_b0 = (undefined8 ***)uVar17;
  FUN_100010174();
  ppppuVar8 = &pppuStack_b8;
  puVar13 = PTR___sSSN_1000b1180;
  ppuStack_148 = pppuVar7;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  ppppuVar9 = ppppuVar8;
  _SIGStylesGet();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar10 = ppppuVar9;
  func_0x000100086980();
  _objc_retainAutoreleasedReturnValue();
  _swift_unknownObjectRelease(ppppuVar9);
  __s7SwiftUI4FontVyACSo9CTFontRefacfC();
  ppppuVar9 = ppppuVar10;
  ppppuVar18 = ppppuVar8;
  puVar19 = puVar13;
  pppuVar16 = pppuVar7;
  __s7SwiftUI4TextV4fontyAcA4FontVSgF();
  pppuVar21 = pppuVar16;
  _swift_release(ppppuVar10);
  func_0x000100022a4c(ppppuVar8,puVar13,pppuVar7);
  _swift_bridgeObjectRelease(param_5);
  puVar11 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  puVar12 = puVar11;
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar13 = &UNK_10008be38;
  _swift_getKeyPath();
  puVar14 = &UNK_10008be68;
  _swift_getKeyPath();
  uStack_a8 = SUB81(puVar19,0);
  uStack_88 = 2;
  uStack_80 = 0;
  uStack_70 = 0x3feb851eb851eb85;
  pppuVar7 = (undefined8 ***)0x1000c5bc8;
  pppuVar15 = pppuVar7;
  pppuStack_b8 = ppppuVar9;
  pppuStack_b0 = ppppuVar18;
  ppuStack_a0 = pppuVar16;
  puStack_98 = puVar12;
  puStack_90 = puVar13;
  puStack_78 = puVar14;
  func_0x0001000100d0(0x1000c5bc8,&UNK_10008be98);
  pppuVar16 = pppuVar15;
  FUN_10003f3d4();
  __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(lStack_110,1,pppuVar15,pppuVar16);
  ppppuVar9 = &pppuStack_b8;
  func_0x00010003fdcc(ppppuVar9,0x1000c5bc8,&UNK_10008be98);
  FUN_10003d5b8();
  lVar23 = lStack_130;
  if (pppuVar7 != (undefined8 ***)0x0) {
    ppppuVar8 = &pppuStack_108;
    puVar13 = PTR___sSSN_1000b1180;
    pppuVar20 = (undefined8 ***)ppuStack_148;
    pppuStack_108 = ppppuVar9;
    pppuStack_100 = pppuVar7;
    __s7SwiftUI4TextVyACxcSyRzlufC();
    ppppuVar9 = ppppuVar8;
    _SIGStylesGet();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar10 = ppppuVar9;
    func_0x000100086980();
    _objc_retainAutoreleasedReturnValue();
    _swift_unknownObjectRelease(ppppuVar9);
    __s7SwiftUI4FontVyACSo9CTFontRefacfC();
    ppppuVar9 = ppppuVar10;
    ppppuVar18 = ppppuVar8;
    puVar12 = puVar13;
    pppuVar22 = pppuVar20;
    __s7SwiftUI4TextV4fontyAcA4FontVSgF();
    ppuStack_150 = pppuVar15;
    ppuStack_148 = pppuVar16;
    _swift_release(ppppuVar10);
    func_0x000100022a4c(ppppuVar8,puVar13,pppuVar20);
    _swift_bridgeObjectRelease(pppuVar21);
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    puVar13 = &UNK_10008be38;
    _swift_getKeyPath();
    puVar14 = &UNK_10008be68;
    _swift_getKeyPath();
    lVar23 = lStack_130;
    uStack_f8 = SUB81(puVar12,0);
    uStack_d8 = 1;
    uStack_d0 = 0;
    uStack_c0 = 0x3fec28f5c28f5c29;
    pppuStack_108 = ppppuVar9;
    pppuStack_100 = ppppuVar18;
    ppuStack_f0 = pppuVar22;
    puStack_e8 = puVar11;
    puStack_e0 = puVar13;
    puStack_c8 = puVar14;
    __s7SwiftUI4ViewPAAE16privacySensitiveyQrSbF(lStack_130,1,ppuStack_150,ppuStack_148);
    func_0x00010003fdcc(&pppuStack_108,0x1000c5bc8,&UNK_10008be98);
  }
  lVar3 = lStack_128;
  lVar1 = lStack_140;
  (**(code **)(lStack_140 + 0x38))(lVar23,pppuVar7 == (undefined8 ***)0x0,1,lStack_128);
  lVar6 = lStack_110;
  lVar2 = lStack_138;
  pcVar25 = *(code **)(lVar1 + 0x10);
  (*pcVar25)(lStack_138,lStack_110,lVar3);
  lVar5 = lStack_118;
  func_0x00010003f504(lVar23,lStack_118);
  lVar4 = lStack_120;
  (*pcVar25)(lStack_120,lVar2,lVar3);
  lVar24 = 0x1000c5be8;
  func_0x0001000100d0(0x1000c5be8,&UNK_10008bea8);
  func_0x00010003f504(lVar5,lVar4 + *(int *)(lVar24 + 0x30));
  func_0x00010003f554(lVar23,0x1000c5bb8,&UNK_10008be28);
  pcVar25 = *(code **)(lVar1 + 8);
  (*pcVar25)(lVar6,lVar3);
  func_0x00010003f554(lVar5,0x1000c5bb8,&UNK_10008be28);
  (*pcVar25)(lVar2,lVar3);
  return;
}



/* Entry: 10003d5b8; end: 10003d6b7;  */

undefined1  [16] FUN_10003d5b8(void)

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



/* Entry: 10003d6b8; end: 10003d6c3;  */

void FUN_10003d6b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10003d6c4; end: 10003d73b;  */

void FUN_10003d6c4(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
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
  undefined2 uStack_30;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_30 = *(undefined2 *)(unaff_x20 + 10);
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  __s7SwiftUI19HorizontalAlignmentV7leadingACvgZ();
  *param_1 = param_2;
  param_1[1] = 0x4000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = 0x1000c5bb0;
  func_0x0001000100d0(0x1000c5bb0,&UNK_10008be20);
  FUN_10003d088((long)param_1 + (long)*(int *)(lVar1 + 0x2c),&uStack_80);
  return;
}



/* Entry: 10003d73c; end: 10003d74b;  */

void FUN_10003d73c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_100090250,1);
  return;
}



/* Entry: 10003d74c; end: 10003e15f;  */

void FUN_10003d74c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x1000c5b08;
  func_0x0001000100d0(0x1000c5b08,&UNK_10008bdb8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&uStack_80 - extraout_x8;
  lVar2 = 0x1000c5b10;
  func_0x0001000100d0(0x1000c5b10,&UNK_10008bdc0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar7 - extraout_x8_00;
  lVar3 = 0x1000c5b18;
  func_0x0001000100d0(0x1000c5b18,&UNK_10008bdc8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar10 - extraout_x8_01;
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    uStack_68 = 0x81;
    uStack_80 = param_1;
    if (lRam00000001000c5830 != -1) {
      lVar4 = 0x1000c5830;
      _swift_once(0x1000c5830,0x100037158);
    }
    uVar9 = uRam00000001000d0ef8;
    uStack_78 = uRam00000001000d0ef0;
    uStack_70 = uRam00000001000d0ef8;
    FUN_100010174();
    _swift_bridgeObjectRetain(uVar9);
    puVar5 = &uStack_78;
    puVar8 = PTR___sSSN_1000b1180;
    __s7SwiftUI4TextVyACxcSyRzlufC(puVar5,PTR___sSSN_1000b1180,lVar4);
    puVar6 = puVar5;
    FUN_10003e4b4();
    __s7SwiftUI4ViewPAAE18accessibilityLabelyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGAA4TextVF
              (lVar11,puVar5,puVar8,lVar4,in_x3,&UNK_1000b46c8,puVar6);
    func_0x000100022a4c(puVar5,puVar8,lVar4);
    _swift_bridgeObjectRelease(in_x3);
    uVar9 = 0x1000c5b18;
    puVar8 = &UNK_10008bdc8;
    FUN_10003fd84(lVar11,lVar10,0x1000c5b18,&UNK_10008bdc8);
    lVar4 = lVar10;
    _swift_storeEnumTagMultiPayload(lVar10,lVar2,0);
    func_0x00010003e424();
    lVar2 = lVar4;
    FUN_10003e4f4();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_80,lVar10,lVar3,lVar1,lVar4,lVar2);
    lVar7 = lVar11;
  }
  else {
    func_0x00010003d9f0(lVar7);
    uVar9 = 0x1000c5b08;
    puVar8 = &UNK_10008bdb8;
    FUN_10003fd84(lVar7,lVar10,0x1000c5b08,&UNK_10008bdb8);
    lVar4 = lVar10;
    _swift_storeEnumTagMultiPayload(lVar10,lVar2,1);
    func_0x00010003e424();
    lVar2 = lVar4;
    FUN_10003e4f4();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,lVar10,lVar3,lVar1,lVar4,lVar2);
  }
  func_0x00010003fdcc(lVar7,uVar9,puVar8);
  return;
}



/* Entry: 10003e160; end: 10003e16b;  */

void FUN_10003e160(undefined8 *param_1)

{
  *param_1 = 0x1e2;
  return;
}



/* Entry: 10003e16c; end: 10003e3db;  */

void FUN_10003e16c(long param_1,long param_2)

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
  FUN_10003e624();
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
  *puVar14 = 0x77;
  puVar14[1] = alStack_90[1];
  puVar14[2] = puVar7;
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
  *puVar13 = 0x65;
  puVar13[1] = uVar4;
  puVar13[2] = uVar6;
  lVar12 = alStack_90[3];
  FUN_10003e65c(puVar14,alStack_90[3]);
  lVar8 = alStack_90[4];
  FUN_10003e65c(puVar13,alStack_90[4]);
  lVar9 = alStack_90[5];
  FUN_10003e65c(lVar12,alStack_90[5]);
  lVar10 = 0x1000c5b78;
  func_0x0001000100d0(0x1000c5b78,&UNK_10008be00);
  FUN_10003e65c(lVar8,lVar9 + *(int *)(lVar10 + 0x30));
  func_0x00010003e6a0(puVar13);
  func_0x00010003e6a0(puVar14);
  func_0x00010003e6a0(lVar8);
  func_0x00010003e6a0(lVar12);
  return;
}



/* Entry: 10003e3dc; end: 10003e4b3;  */

void FUN_10003e3dc(void)

{
  FUN_10003d74c();
  return;
}



/* Entry: 10003e4b4; end: 10003e4f3;  */

void FUN_10003e4b4(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008bf78;
  _swift_getWitnessTable(&UNK_10008bf78,&UNK_1000b46c8);
  puRam00000001000c5b28 = puVar1;
  return;
}



/* Entry: 10003e4f4; end: 10003e623;  */

void FUN_10003e4f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5b38 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5b08;
  func_0x000100010120(0x1000c5b08,&UNK_10008bdb8);
  uVar2 = uVar1;
  func_0x00010003e58c();
  uVar3 = 0x1000c5b50;
  FUN_100040048(0x1000c5b50,0x1000c5b58,&UNK_10008bdd8,
                PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_1000b0888);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c5b38 = puVar4;
  return;
}



/* Entry: 10003e624; end: 10003e65b;  */

void FUN_10003e624(undefined8 param_1)

{
  if (lRam00000001000c5c48 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_100090204);
  return;
}



/* Entry: 10003e65c; end: 10003e6db;  */

undefined8 FUN_10003e65c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10003e624();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10003e6dc; end: 10003e71b;  */

void FUN_10003e6dc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentV0bC00bH0AAMc_1000b0dd0;
  _swift_getWitnessTable
            (PTR___s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentV0bC00bH0AAMc_1000b0dd0,
             PTR___s18SnapchatAppIntents33AcceptFriendingLiveActivityIntentVN_1000b0de0);
  puRam00000001000c5b98 = puVar1;
  return;
}



/* Entry: 10003e71c; end: 10003e7ab;  */

void FUN_10003e71c(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10003e7ac; end: 10003e8cf;  */

void FUN_10003e7ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (puRam00000001000c5ba8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5b80;
  func_0x000100010120(0x1000c5b80,&UNK_10008be08);
  uVar2 = 0x1000c5b90;
  func_0x000100010120(0x1000c5b90,&UNK_10008be18);
  uVar3 = 0xff;
  __s7SwiftUI16PlainButtonStyleVMa();
  puVar7 = PTR___s7SwiftUI16PlainButtonStyleVMa_1000b0410;
  uVar4 = 0x1000c5ba0;
  FUN_100040048(0x1000c5ba0,0x1000c5b90,&UNK_10008be18,
                PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_1000b0868);
  uVar5 = 0x1000c5ac0;
  FUN_10003e71c(0x1000c5ac0,puVar7,PTR___s7SwiftUI16PlainButtonStyleVAA09PrimitivedE0AAMc_1000b0400)
  ;
  puVar6 = &uStack_60;
  uStack_60 = uVar2;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  uStack_48 = uVar5;
  _swift_getOpaqueTypeConformance
            (puVar6,
             PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lFQOMQ_1000b0720,
             1);
  uVar2 = 0x1000c5b30;
  FUN_10003e71c(0x1000c5b30,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_1000b0628,
                PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_1000b0620);
  puVar7 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  puStack_70 = puVar6;
  uStack_68 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_70);
  puRam00000001000c5ba8 = puVar7;
  return;
}



/* Entry: 10003e8d0; end: 10003f03b;  */

void FUN_10003e8d0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  undefined1 *puVar13;
  long lVar14;
  long *unaff_x20;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_78;
  long lStack_70;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar2 + -8);
  lVar17 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = (long)&lStack_120 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10003e624();
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar3 = 0x1000c4330;
  puVar11 = &UNK_1000890b0;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined1 *)(lVar14 - extraout_x8);
  FUN_10003fd84((long)unaff_x20 + (long)iVar1,puVar13,0x1000c4330,&UNK_1000890b0);
  puVar4 = puVar13;
  (**(code **)(lVar19 + 0x30))(puVar13,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x00010003fdcc(puVar13,0x1000c4330,&UNK_1000890b0);
    lVar3 = 0x1000c5b18;
    func_0x0001000100d0(0x1000c5b18,&UNK_10008bdc8);
    lVar2 = lVar3;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar19 = (long)puVar13 - extraout_x8_00;
    lStack_78 = *unaff_x20;
    lStack_a0 = unaff_x20[1];
    lVar14 = unaff_x20[2];
    lStack_98 = lVar14;
    FUN_100010174();
    _swift_bridgeObjectRetain(lVar14);
    plVar7 = &lStack_a0;
    puVar10 = PTR___sSSN_1000b1180;
    __s7SwiftUI4TextVyACxcSyRzlufC(plVar7,PTR___sSSN_1000b1180,lVar2);
    plVar15 = plVar7;
    FUN_10003e4b4();
    __s7SwiftUI4ViewPAAE18accessibilityLabelyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGAA4TextVF
              (lVar19,plVar7,puVar10,lVar2,puVar11,&UNK_1000b46c8,plVar15);
    func_0x000100022a4c(plVar7,puVar10,lVar2);
    _swift_bridgeObjectRelease(puVar11);
    lVar2 = 0x1000c5cb8;
    func_0x0001000100d0(0x1000c5cb8,&UNK_10008bfe0);
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar14 = lVar19 - extraout_x8_01;
    FUN_10003fd84(lVar19,lVar14,0x1000c5b18,&UNK_10008bdc8);
    _swift_storeEnumTagMultiPayload(lVar14,lVar2,1);
    uVar5 = 0x1000c5a88;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar6 = uVar5;
    FUN_10003c924();
    uVar8 = uVar6;
    func_0x00010003e424();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,lVar14,uVar5,lVar3,uVar6,uVar8);
    func_0x00010003fdcc(lVar19,0x1000c5b18,&UNK_10008bdc8);
  }
  else {
    (**(code **)(lVar19 + 0x20))(lVar14,puVar13,lVar2);
    iVar1 = 2;
    FUN_1000806c0(2,0x11,2,0);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0x1000c5b80;
      func_0x0001000100d0(0x1000c5b80,&UNK_10008be08);
      uStack_d8 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
      lStack_c8 = lVar3;
      puStack_c0 = puVar13;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      uStack_d0 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
      lVar12 = (long)puVar13 - uStack_d0;
      lVar3 = 0x1000c5b88;
      lStack_f0 = lVar12;
      func_0x0001000100d0(0x1000c5b88,&UNK_10008be10);
      lStack_e8 = *(long *)(lVar3 + -8);
      lStack_f8 = lVar3;
      lStack_e0 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)
                (*(long *)(lStack_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = lVar12 - extraout_x8_02;
      lVar3 = 0x1000c5b90;
      lStack_118 = lVar12;
      func_0x0001000100d0(0x1000c5b90,&UNK_10008be18);
      lStack_110 = *(long *)(lVar3 + -8);
      lStack_108 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)
                (*(long *)(lStack_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = lVar12 - extraout_x8_03;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar18 = lVar12 - (lVar17 + 0xfU & 0xfffffffffffffff0);
      lVar17 = lVar14;
      (**(code **)(lVar19 + 0x10))(lVar18,lVar14,lVar2);
      __s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV14destinationURLAC10Foundation0K0V_tcfC
                ();
      lStack_78 = lVar18;
      lStack_70 = lVar17;
      FUN_10003e4b4();
      lVar17 = lVar18;
      FUN_10003c9d4();
      __s7SwiftUI6ButtonV012_AppIntents_aB0E6intent5labelACyxGqd___xyXEtc0dE00D6IntentRd__lufC
                (lVar12,&lStack_78,FUN_10003fe0c,&lStack_a0,&UNK_1000b46c8,
                 PTR___s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN_1000b0df8
                 ,lVar18,lVar17);
      lVar18 = 0;
      __s7SwiftUI16PlainButtonStyleVMa();
      puVar11 = PTR___s7SwiftUI16PlainButtonStyleVMa_1000b0410;
      lVar16 = *(long *)(lVar18 + -8);
      lStack_120 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar16 + 0x40));
      lVar20 = lVar12 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
      lStack_b8 = lVar14;
      __s7SwiftUI16PlainButtonStyleVACycfC(lVar20);
      uVar5 = 0x1000c5ba0;
      FUN_100040048(0x1000c5ba0,0x1000c5b90,&UNK_10008be18,
                    PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_1000b0868);
      uVar6 = 0x1000c5ac0;
      lStack_b0 = lVar19;
      FUN_10003e71c(0x1000c5ac0,puVar11,
                    PTR___s7SwiftUI16PlainButtonStyleVAA09PrimitivedE0AAMc_1000b0400);
      lVar17 = lStack_118;
      lStack_100 = lVar2;
      uStack_a8 = param_1;
      __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lF
                (lStack_118,lVar20,lVar3,lVar18,uVar5,uVar6);
      (**(code **)(lVar16 + 8))(lVar20,lVar18);
      (**(code **)(lStack_110 + 8))(lVar12,lVar3);
      lStack_a0 = unaff_x20[1];
      lVar2 = unaff_x20[2];
      lStack_98 = lVar2;
      FUN_100010174();
      _swift_bridgeObjectRetain(lVar2);
      plVar15 = &lStack_a0;
      puVar11 = PTR___sSSN_1000b1180;
      __s7SwiftUI4TextVyACxcSyRzlufC(plVar15,PTR___sSSN_1000b1180,lVar12);
      param_1 = uStack_a8;
      lVar19 = lStack_b0;
      plVar7 = &lStack_a0;
      lStack_a0 = lVar3;
      lStack_98 = lVar18;
      _swift_getOpaqueTypeConformance
                (plVar7,
                 PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lFQOMQ_1000b0720
                 ,1);
      lVar18 = lStack_f0;
      lVar3 = lStack_f8;
      lVar2 = lStack_100;
      __s7SwiftUI4ViewPAAE18accessibilityLabelyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGAA4TextVF
                (lStack_f0,plVar15,puVar11,lVar12,uVar5,lStack_f8,plVar7);
      lVar14 = lStack_b8;
      func_0x000100022a4c(plVar15,puVar11,lVar12);
      _swift_bridgeObjectRelease(uVar5);
      (**(code **)(lStack_e8 + 8))(lVar17,lVar3);
      lVar3 = lStack_e0;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar3 = lVar3 - uStack_d0;
      lVar17 = lVar18;
      func_0x00010003e75c(lVar18,lVar3);
      FUN_10003e7ac();
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar3,lStack_c8,lVar17);
      func_0x00010003f554(lVar18,0x1000c5b80,&UNK_10008be08);
      puVar13 = puStack_c0;
      _swift_retain(lVar3);
    }
    lVar17 = 0x1000c5cb8;
    func_0x0001000100d0(0x1000c5cb8,&UNK_10008bfe0);
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar15 = (long *)(puVar13 + -extraout_x8_05);
    *plVar15 = lVar3;
    _swift_storeEnumTagMultiPayload(plVar15);
    uVar5 = 0x1000c5a88;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar6 = 0x1000c5b18;
    func_0x0001000100d0(0x1000c5b18,&UNK_10008bdc8);
    uVar8 = uVar6;
    FUN_10003c924();
    uVar9 = uVar8;
    func_0x00010003e424();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,plVar15,uVar5,uVar6,uVar8,uVar9);
    _swift_release(lVar3);
    (**(code **)(lVar19 + 8))(lVar14,lVar2);
  }
  return;
}



/* Entry: 10003f03c; end: 10003f03f;  */

void FUN_10003f03c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_78;
  long lStack_70;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar19 = *(long *)(lVar2 + -8);
  lVar17 = *(long *)(lVar19 + 0x40);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar14 = (long)&lStack_120 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_10003e624();
  iVar1 = *(int *)(lVar3 + 0x18);
  lVar3 = 0x1000c4330;
  puVar11 = &UNK_1000890b0;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined1 *)(lVar14 - extraout_x8);
  FUN_10003fd84((long)unaff_x20 + (long)iVar1,puVar13,0x1000c4330,&UNK_1000890b0);
  puVar4 = puVar13;
  (**(code **)(lVar19 + 0x30))(puVar13,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x00010003fdcc(puVar13,0x1000c4330,&UNK_1000890b0);
    lVar3 = 0x1000c5b18;
    func_0x0001000100d0(0x1000c5b18,&UNK_10008bdc8);
    lVar2 = lVar3;
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar19 = (long)puVar13 - extraout_x8_00;
    lStack_78 = *unaff_x20;
    lStack_a0 = unaff_x20[1];
    lVar14 = unaff_x20[2];
    lStack_98 = lVar14;
    FUN_100010174();
    _swift_bridgeObjectRetain(lVar14);
    plVar7 = &lStack_a0;
    puVar10 = PTR___sSSN_1000b1180;
    __s7SwiftUI4TextVyACxcSyRzlufC(plVar7,PTR___sSSN_1000b1180,lVar2);
    plVar15 = plVar7;
    FUN_10003e4b4();
    __s7SwiftUI4ViewPAAE18accessibilityLabelyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGAA4TextVF
              (lVar19,plVar7,puVar10,lVar2,puVar11,&UNK_1000b46c8,plVar15);
    func_0x000100022a4c(plVar7,puVar10,lVar2);
    _swift_bridgeObjectRelease(puVar11);
    lVar2 = 0x1000c5cb8;
    func_0x0001000100d0(0x1000c5cb8,&UNK_10008bfe0);
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar14 = lVar19 - extraout_x8_01;
    FUN_10003fd84(lVar19,lVar14,0x1000c5b18,&UNK_10008bdc8);
    _swift_storeEnumTagMultiPayload(lVar14,lVar2,1);
    uVar5 = 0x1000c5a88;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar6 = uVar5;
    FUN_10003c924();
    uVar8 = uVar6;
    func_0x00010003e424();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,lVar14,uVar5,lVar3,uVar6,uVar8);
    func_0x00010003fdcc(lVar19,0x1000c5b18,&UNK_10008bdc8);
  }
  else {
    (**(code **)(lVar19 + 0x20))(lVar14,puVar13,lVar2);
    iVar1 = 2;
    FUN_1000806c0(2,0x11,2,0);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0x1000c5b80;
      func_0x0001000100d0(0x1000c5b80,&UNK_10008be08);
      uStack_d8 = *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40);
      lStack_c8 = lVar3;
      puStack_c0 = puVar13;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      uStack_d0 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
      lVar12 = (long)puVar13 - uStack_d0;
      lVar3 = 0x1000c5b88;
      lStack_f0 = lVar12;
      func_0x0001000100d0(0x1000c5b88,&UNK_10008be10);
      lStack_e8 = *(long *)(lVar3 + -8);
      lStack_f8 = lVar3;
      lStack_e0 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)
                (*(long *)(lStack_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = lVar12 - extraout_x8_02;
      lVar3 = 0x1000c5b90;
      lStack_118 = lVar12;
      func_0x0001000100d0(0x1000c5b90,&UNK_10008be18);
      lStack_110 = *(long *)(lVar3 + -8);
      lStack_108 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)
                (*(long *)(lStack_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = lVar12 - extraout_x8_03;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar18 = lVar12 - (lVar17 + 0xfU & 0xfffffffffffffff0);
      lVar17 = lVar14;
      (**(code **)(lVar19 + 0x10))(lVar18,lVar14,lVar2);
      __s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentV14destinationURLAC10Foundation0K0V_tcfC
                ();
      lStack_78 = lVar18;
      lStack_70 = lVar17;
      FUN_10003e4b4();
      lVar17 = lVar18;
      FUN_10003c9d4();
      __s7SwiftUI6ButtonV012_AppIntents_aB0E6intent5labelACyxGqd___xyXEtc0dE00D6IntentRd__lufC
                (lVar12,&lStack_78,FUN_10003fe0c,&lStack_a0,&UNK_1000b46c8,
                 PTR___s18SnapchatAppIntents42OpenFriendingLiveActivityDestinationIntentVN_1000b0df8
                 ,lVar18,lVar17);
      lVar18 = 0;
      __s7SwiftUI16PlainButtonStyleVMa();
      puVar11 = PTR___s7SwiftUI16PlainButtonStyleVMa_1000b0410;
      lVar16 = *(long *)(lVar18 + -8);
      lStack_120 = lVar12;
      (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar16 + 0x40));
      lVar20 = lVar12 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
      lStack_b8 = lVar14;
      __s7SwiftUI16PlainButtonStyleVACycfC(lVar20);
      uVar5 = 0x1000c5ba0;
      FUN_100040048(0x1000c5ba0,0x1000c5b90,&UNK_10008be18,
                    PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_1000b0868);
      uVar6 = 0x1000c5ac0;
      lStack_b0 = lVar19;
      FUN_10003e71c(0x1000c5ac0,puVar11,
                    PTR___s7SwiftUI16PlainButtonStyleVAA09PrimitivedE0AAMc_1000b0400);
      lVar17 = lStack_118;
      lStack_100 = lVar2;
      uStack_a8 = param_1;
      __s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lF
                (lStack_118,lVar20,lVar3,lVar18,uVar5,uVar6);
      (**(code **)(lVar16 + 8))(lVar20,lVar18);
      (**(code **)(lStack_110 + 8))(lVar12,lVar3);
      lStack_a0 = unaff_x20[1];
      lVar2 = unaff_x20[2];
      lStack_98 = lVar2;
      FUN_100010174();
      _swift_bridgeObjectRetain(lVar2);
      plVar15 = &lStack_a0;
      puVar11 = PTR___sSSN_1000b1180;
      __s7SwiftUI4TextVyACxcSyRzlufC(plVar15,PTR___sSSN_1000b1180,lVar12);
      param_1 = uStack_a8;
      lVar19 = lStack_b0;
      plVar7 = &lStack_a0;
      lStack_a0 = lVar3;
      lStack_98 = lVar18;
      _swift_getOpaqueTypeConformance
                (plVar7,
                 PTR___s7SwiftUI4ViewPAAE11buttonStyleyQrqd__AA015PrimitiveButtonE0Rd__lFQOMQ_1000b0720
                 ,1);
      lVar18 = lStack_f0;
      lVar3 = lStack_f8;
      lVar2 = lStack_100;
      __s7SwiftUI4ViewPAAE18accessibilityLabelyAA15ModifiedContentVyxAA31AccessibilityAttachmentModifierVGAA4TextVF
                (lStack_f0,plVar15,puVar11,lVar12,uVar5,lStack_f8,plVar7);
      lVar14 = lStack_b8;
      func_0x000100022a4c(plVar15,puVar11,lVar12);
      _swift_bridgeObjectRelease(uVar5);
      (**(code **)(lStack_e8 + 8))(lVar17,lVar3);
      lVar3 = lStack_e0;
      (*(code *)PTR____chkstk_darwin_1000b0c68)();
      lVar3 = lVar3 - uStack_d0;
      lVar17 = lVar18;
      func_0x00010003e75c(lVar18,lVar3);
      FUN_10003e7ac();
      __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar3,lStack_c8,lVar17);
      func_0x00010003f554(lVar18,0x1000c5b80,&UNK_10008be08);
      puVar13 = puStack_c0;
      _swift_retain(lVar3);
    }
    lVar17 = 0x1000c5cb8;
    func_0x0001000100d0(0x1000c5cb8,&UNK_10008bfe0);
    (*(code *)PTR____chkstk_darwin_1000b0c68)
              (*(long *)(*(long *)(lVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar15 = (long *)(puVar13 + -extraout_x8_05);
    *plVar15 = lVar3;
    _swift_storeEnumTagMultiPayload(plVar15);
    uVar5 = 0x1000c5a88;
    func_0x0001000100d0(0x1000c5a88,&UNK_10008bde0);
    uVar6 = 0x1000c5b18;
    func_0x0001000100d0(0x1000c5b18,&UNK_10008bdc8);
    uVar8 = uVar6;
    FUN_10003c924();
    uVar9 = uVar8;
    func_0x00010003e424();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,plVar15,uVar5,uVar6,uVar8,uVar9);
    _swift_release(lVar3);
    (**(code **)(lVar19 + 8))(lVar14,lVar2);
  }
  return;
}



/* Entry: 10003f040; end: 10003f3bb;  */

void FUN_10003f040(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined1 auStack_418 [152];
  undefined *puStack_380;
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
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined2 uStack_280;
  undefined6 uStack_27e;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined2 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined6 uStack_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined2 uStack_f2;
  undefined6 uStack_f0;
  undefined2 uStack_ea;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [64];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100087620(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uStack_440 = 0;
    puStack_438 = (undefined *)0x0;
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_448 = 0;
    ppuVar4 = (undefined **)0x0;
  }
  else {
    _objc_retain();
    puVar2 = puVar1;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    puVar3 = puVar2;
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (auStack_a0,0x4038000000000000,0,0x4038000000000000,0,puVar3,param_3);
    _objc_release(puVar1);
    uStack_112 = (undefined2)auStack_a0._8_8_;
    uStack_110 = SUB86(auStack_a0._8_8_,2);
    uStack_11a = (undefined2)auStack_a0._0_8_;
    uStack_118 = SUB86(auStack_a0._0_8_,2);
    uStack_102 = (undefined2)auStack_a0._24_8_;
    uStack_100 = SUB86(auStack_a0._24_8_,2);
    uStack_10a = (undefined2)auStack_a0._16_8_;
    uStack_108 = SUB86(auStack_a0._16_8_,2);
    uStack_f2 = (undefined2)auStack_a0._40_8_;
    uStack_f0 = SUB86(auStack_a0._40_8_,2);
    uStack_fa = (undefined2)auStack_a0._32_8_;
    uStack_f8 = SUB86(auStack_a0._32_8_,2);
    uStack_288 = 0;
    uStack_280 = 1;
    uStack_276 = uStack_118;
    uStack_270 = uStack_112;
    uStack_27e = uStack_120;
    uStack_278 = uStack_11a;
    uStack_266 = uStack_108;
    uStack_260 = uStack_102;
    uStack_26e = uStack_110;
    uStack_268 = uStack_10a;
    uStack_256 = uStack_f8;
    uStack_25e = uStack_100;
    uStack_258 = uStack_fa;
    uStack_1e8 = 0;
    uStack_1e0 = 1;
    uStack_1b6 = uStack_f8;
    uStack_1b0 = uStack_f2;
    uStack_1be = uStack_100;
    uStack_1b8 = uStack_fa;
    uStack_1c6 = uStack_108;
    uStack_1c0 = uStack_102;
    uStack_1ce = uStack_110;
    uStack_1c8 = uStack_10a;
    uStack_1d6 = uStack_118;
    uStack_1d0 = uStack_112;
    uStack_1d8 = uStack_11a;
    param_3 = 0x1000c4778;
    puStack_290 = puVar2;
    uStack_250 = uStack_f2;
    uStack_24e = uStack_f0;
    puStack_1f0 = puVar2;
    uStack_1ae = uStack_f0;
    FUN_10003fd84(&puStack_290,auStack_418,0x1000c4778,&UNK_10008a450);
    ppuVar4 = &puStack_1f0;
    func_0x00010003fdcc(ppuVar4,0x1000c4778,&UNK_10008a450);
    uStack_370 = CONCAT62(uStack_27e,uStack_280);
    uStack_368 = CONCAT62(uStack_276,uStack_278);
    uStack_360 = CONCAT62(uStack_26e,uStack_270);
    uStack_358 = CONCAT62(uStack_266,uStack_268);
    uStack_350 = CONCAT62(uStack_25e,uStack_260);
    uStack_440 = CONCAT62(uStack_256,uStack_258);
    puStack_438 = puStack_290;
    uStack_448 = CONCAT62(uStack_24e,uStack_250);
    uStack_378 = uStack_288;
  }
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar5 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_150,0x4046800000000000,0,0x4046800000000000,0,ppuVar4,param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar2 = puVar1;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  puStack_380 = puStack_438;
  uStack_348 = uStack_440;
  uStack_340 = uStack_448;
  uStack_330 = uStack_148;
  uStack_338 = uStack_150;
  uStack_310 = uStack_128;
  uStack_318 = uStack_130;
  uStack_320 = uStack_138;
  uStack_328 = uStack_140;
  uStack_f8 = (undefined6)uStack_358;
  uStack_f2 = (undefined2)((ulong)uStack_358 >> 0x30);
  uStack_100 = (undefined6)uStack_360;
  uStack_fa = (undefined2)((ulong)uStack_360 >> 0x30);
  uStack_e8 = uStack_440;
  uStack_f0 = (undefined6)uStack_350;
  uStack_ea = (undefined2)((ulong)uStack_350 >> 0x30);
  uStack_118 = (undefined6)uStack_378;
  uStack_112 = (undefined2)((ulong)uStack_378 >> 0x30);
  uStack_120 = SUB86(puStack_438,0);
  uStack_11a = (undefined2)((ulong)puStack_438 >> 0x30);
  uStack_108 = (undefined6)uStack_368;
  uStack_102 = (undefined2)((ulong)uStack_368 >> 0x30);
  uStack_110 = (undefined6)uStack_370;
  uStack_10a = (undefined2)((ulong)uStack_370 >> 0x30);
  uStack_c8 = uStack_140;
  uStack_d0 = uStack_148;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_b0 = uStack_128;
  uStack_d8 = uStack_150;
  uStack_e0 = uStack_448;
  puStack_308 = puStack_438;
  uStack_2d0 = uStack_440;
  uStack_2c8 = uStack_448;
  uStack_2a8 = uStack_138;
  uStack_2b0 = uStack_140;
  uStack_298 = uStack_128;
  uStack_2a0 = uStack_130;
  uStack_2b8 = uStack_148;
  uStack_2c0 = uStack_150;
  uStack_300 = uStack_378;
  uStack_2f8 = uStack_370;
  uStack_2f0 = uStack_368;
  uStack_2e8 = uStack_360;
  uStack_2e0 = uStack_358;
  uStack_2d8 = uStack_350;
  FUN_10003fd84(&puStack_380,&puStack_1f0,0x1000c5ca8,&UNK_10008bfc8);
  func_0x00010003fdcc(&puStack_308,0x1000c5ca8,&UNK_10008bfc8);
  uStack_248 = uStack_d8;
  uStack_250 = (undefined2)uStack_e0;
  uStack_24e = (undefined6)((ulong)uStack_e0 >> 0x10);
  uStack_238 = uStack_c8;
  uStack_240 = uStack_d0;
  uStack_228 = uStack_b8;
  uStack_230 = uStack_c0;
  uStack_288 = CONCAT26(uStack_112,uStack_118);
  puStack_290 = (undefined *)CONCAT26(uStack_11a,uStack_120);
  uStack_1e8 = CONCAT26(uStack_112,uStack_118);
  puStack_1f0 = (undefined *)CONCAT26(uStack_11a,uStack_120);
  uStack_278 = (undefined2)uStack_108;
  uStack_276 = (undefined6)(CONCAT26(uStack_102,uStack_108) >> 0x10);
  uStack_280 = (undefined2)uStack_110;
  uStack_27e = (undefined6)(CONCAT26(uStack_10a,uStack_110) >> 0x10);
  uStack_268 = (undefined2)uStack_f8;
  uStack_266 = (undefined6)(CONCAT26(uStack_f2,uStack_f8) >> 0x10);
  uStack_270 = (undefined2)uStack_100;
  uStack_26e = (undefined6)(CONCAT26(uStack_fa,uStack_100) >> 0x10);
  uStack_258 = (undefined2)uStack_e8;
  uStack_256 = (undefined6)((ulong)uStack_e8 >> 0x10);
  uStack_260 = (undefined2)uStack_f0;
  uStack_25e = (undefined6)(CONCAT26(uStack_ea,uStack_f0) >> 0x10);
  uStack_1c6 = (undefined6)(CONCAT26(uStack_f2,uStack_f8) >> 0x10);
  uStack_1ce = (undefined6)(CONCAT26(uStack_fa,uStack_100) >> 0x10);
  uStack_1be = (undefined6)(CONCAT26(uStack_ea,uStack_f0) >> 0x10);
  uStack_1d6 = (undefined6)(CONCAT26(uStack_102,uStack_108) >> 0x10);
  uStack_1de = (undefined6)(CONCAT26(uStack_10a,uStack_110) >> 0x10);
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uStack_188 = uStack_b8;
  uStack_190 = uStack_c0;
  uStack_220 = uStack_b0;
  uStack_210 = 0x100;
  uStack_1a8 = uStack_d8;
  uStack_180 = uStack_b0;
  uStack_170 = 0x100;
  puStack_218 = puVar1;
  puStack_208 = puVar2;
  uStack_200 = uVar5;
  uStack_1e0 = uStack_280;
  uStack_1d8 = uStack_278;
  uStack_1d0 = uStack_270;
  uStack_1c8 = uStack_268;
  uStack_1c0 = uStack_260;
  uStack_1b8 = uStack_258;
  uStack_1b6 = uStack_256;
  uStack_1b0 = uStack_250;
  uStack_1ae = uStack_24e;
  puStack_178 = puVar1;
  puStack_168 = puVar2;
  uStack_160 = uVar5;
  FUN_10003fd84(&puStack_290,auStack_418,0x1000c5cb0,&UNK_10008bfd0);
  func_0x00010003fdcc(&puStack_1f0,0x1000c5cb0,&UNK_10008bfd0);
  param_1[0xd] = uStack_228;
  param_1[0xc] = uStack_230;
  param_1[0xf] = puStack_218;
  param_1[0xe] = uStack_220;
  param_1[0x11] = puStack_208;
  param_1[0x10] = CONCAT62(uStack_20e,uStack_210);
  param_1[0x12] = uStack_200;
  param_1[5] = CONCAT62(uStack_266,uStack_268);
  param_1[4] = CONCAT62(uStack_26e,uStack_270);
  param_1[7] = CONCAT62(uStack_256,uStack_258);
  param_1[6] = CONCAT62(uStack_25e,uStack_260);
  param_1[9] = uStack_248;
  param_1[8] = CONCAT62(uStack_24e,uStack_250);
  param_1[0xb] = uStack_238;
  param_1[10] = uStack_240;
  param_1[1] = uStack_288;
  *param_1 = puStack_290;
  param_1[3] = CONCAT62(uStack_276,uStack_278);
  param_1[2] = CONCAT62(uStack_27e,uStack_280);
  return;
}



/* Entry: 10003f3bc; end: 10003f3d3;  */

void FUN_10003f3bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined *puStack_438;
  undefined1 auStack_418 [152];
  undefined *puStack_380;
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
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined2 uStack_280;
  undefined6 uStack_27e;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined2 uStack_270;
  undefined6 uStack_26e;
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined6 uStack_25e;
  undefined2 uStack_258;
  undefined6 uStack_256;
  undefined2 uStack_250;
  undefined6 uStack_24e;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined2 uStack_210;
  undefined6 uStack_20e;
  undefined *puStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
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
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined2 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined6 uStack_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined2 uStack_f2;
  undefined6 uStack_f0;
  undefined2 uStack_ea;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [64];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100087620(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uStack_440 = 0;
    puStack_438 = (undefined *)0x0;
    uStack_378 = 0;
    uStack_370 = 0;
    uStack_368 = 0;
    uStack_360 = 0;
    uStack_358 = 0;
    uStack_350 = 0;
    uStack_448 = 0;
    ppuVar4 = (undefined **)0x0;
  }
  else {
    _objc_retain();
    puVar2 = puVar1;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    puVar3 = puVar2;
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (auStack_a0,0x4038000000000000,0,0x4038000000000000,0,puVar3,param_3);
    _objc_release(puVar1);
    uStack_112 = (undefined2)auStack_a0._8_8_;
    uStack_110 = SUB86(auStack_a0._8_8_,2);
    uStack_11a = (undefined2)auStack_a0._0_8_;
    uStack_118 = SUB86(auStack_a0._0_8_,2);
    uStack_102 = (undefined2)auStack_a0._24_8_;
    uStack_100 = SUB86(auStack_a0._24_8_,2);
    uStack_10a = (undefined2)auStack_a0._16_8_;
    uStack_108 = SUB86(auStack_a0._16_8_,2);
    uStack_f2 = (undefined2)auStack_a0._40_8_;
    uStack_f0 = SUB86(auStack_a0._40_8_,2);
    uStack_fa = (undefined2)auStack_a0._32_8_;
    uStack_f8 = SUB86(auStack_a0._32_8_,2);
    uStack_288 = 0;
    uStack_280 = 1;
    uStack_276 = uStack_118;
    uStack_270 = uStack_112;
    uStack_27e = uStack_120;
    uStack_278 = uStack_11a;
    uStack_266 = uStack_108;
    uStack_260 = uStack_102;
    uStack_26e = uStack_110;
    uStack_268 = uStack_10a;
    uStack_256 = uStack_f8;
    uStack_25e = uStack_100;
    uStack_258 = uStack_fa;
    uStack_1e8 = 0;
    uStack_1e0 = 1;
    uStack_1b6 = uStack_f8;
    uStack_1b0 = uStack_f2;
    uStack_1be = uStack_100;
    uStack_1b8 = uStack_fa;
    uStack_1c6 = uStack_108;
    uStack_1c0 = uStack_102;
    uStack_1ce = uStack_110;
    uStack_1c8 = uStack_10a;
    uStack_1d6 = uStack_118;
    uStack_1d0 = uStack_112;
    uStack_1d8 = uStack_11a;
    param_3 = 0x1000c4778;
    puStack_290 = puVar2;
    uStack_250 = uStack_f2;
    uStack_24e = uStack_f0;
    puStack_1f0 = puVar2;
    uStack_1ae = uStack_f0;
    FUN_10003fd84(&puStack_290,auStack_418,0x1000c4778,&UNK_10008a450);
    ppuVar4 = &puStack_1f0;
    func_0x00010003fdcc(ppuVar4,0x1000c4778,&UNK_10008a450);
    uStack_370 = CONCAT62(uStack_27e,uStack_280);
    uStack_368 = CONCAT62(uStack_276,uStack_278);
    uStack_360 = CONCAT62(uStack_26e,uStack_270);
    uStack_358 = CONCAT62(uStack_266,uStack_268);
    uStack_350 = CONCAT62(uStack_25e,uStack_260);
    uStack_440 = CONCAT62(uStack_256,uStack_258);
    puStack_438 = puStack_290;
    uStack_448 = CONCAT62(uStack_24e,uStack_250);
    uStack_378 = uStack_288;
  }
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar5 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_150,0x4046800000000000,0,0x4046800000000000,0,ppuVar4,param_3);
  puVar1 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar2 = puVar1;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  puStack_380 = puStack_438;
  uStack_348 = uStack_440;
  uStack_340 = uStack_448;
  uStack_330 = uStack_148;
  uStack_338 = uStack_150;
  uStack_310 = uStack_128;
  uStack_318 = uStack_130;
  uStack_320 = uStack_138;
  uStack_328 = uStack_140;
  uStack_f8 = (undefined6)uStack_358;
  uStack_f2 = (undefined2)((ulong)uStack_358 >> 0x30);
  uStack_100 = (undefined6)uStack_360;
  uStack_fa = (undefined2)((ulong)uStack_360 >> 0x30);
  uStack_e8 = uStack_440;
  uStack_f0 = (undefined6)uStack_350;
  uStack_ea = (undefined2)((ulong)uStack_350 >> 0x30);
  uStack_118 = (undefined6)uStack_378;
  uStack_112 = (undefined2)((ulong)uStack_378 >> 0x30);
  uStack_120 = SUB86(puStack_438,0);
  uStack_11a = (undefined2)((ulong)puStack_438 >> 0x30);
  uStack_108 = (undefined6)uStack_368;
  uStack_102 = (undefined2)((ulong)uStack_368 >> 0x30);
  uStack_110 = (undefined6)uStack_370;
  uStack_10a = (undefined2)((ulong)uStack_370 >> 0x30);
  uStack_c8 = uStack_140;
  uStack_d0 = uStack_148;
  uStack_b8 = uStack_130;
  uStack_c0 = uStack_138;
  uStack_b0 = uStack_128;
  uStack_d8 = uStack_150;
  uStack_e0 = uStack_448;
  puStack_308 = puStack_438;
  uStack_2d0 = uStack_440;
  uStack_2c8 = uStack_448;
  uStack_2a8 = uStack_138;
  uStack_2b0 = uStack_140;
  uStack_298 = uStack_128;
  uStack_2a0 = uStack_130;
  uStack_2b8 = uStack_148;
  uStack_2c0 = uStack_150;
  uStack_300 = uStack_378;
  uStack_2f8 = uStack_370;
  uStack_2f0 = uStack_368;
  uStack_2e8 = uStack_360;
  uStack_2e0 = uStack_358;
  uStack_2d8 = uStack_350;
  FUN_10003fd84(&puStack_380,&puStack_1f0,0x1000c5ca8,&UNK_10008bfc8);
  func_0x00010003fdcc(&puStack_308,0x1000c5ca8,&UNK_10008bfc8);
  uStack_248 = uStack_d8;
  uStack_250 = (undefined2)uStack_e0;
  uStack_24e = (undefined6)((ulong)uStack_e0 >> 0x10);
  uStack_238 = uStack_c8;
  uStack_240 = uStack_d0;
  uStack_228 = uStack_b8;
  uStack_230 = uStack_c0;
  uStack_288 = CONCAT26(uStack_112,uStack_118);
  puStack_290 = (undefined *)CONCAT26(uStack_11a,uStack_120);
  uStack_1e8 = CONCAT26(uStack_112,uStack_118);
  puStack_1f0 = (undefined *)CONCAT26(uStack_11a,uStack_120);
  uStack_278 = (undefined2)uStack_108;
  uStack_276 = (undefined6)(CONCAT26(uStack_102,uStack_108) >> 0x10);
  uStack_280 = (undefined2)uStack_110;
  uStack_27e = (undefined6)(CONCAT26(uStack_10a,uStack_110) >> 0x10);
  uStack_268 = (undefined2)uStack_f8;
  uStack_266 = (undefined6)(CONCAT26(uStack_f2,uStack_f8) >> 0x10);
  uStack_270 = (undefined2)uStack_100;
  uStack_26e = (undefined6)(CONCAT26(uStack_fa,uStack_100) >> 0x10);
  uStack_258 = (undefined2)uStack_e8;
  uStack_256 = (undefined6)((ulong)uStack_e8 >> 0x10);
  uStack_260 = (undefined2)uStack_f0;
  uStack_25e = (undefined6)(CONCAT26(uStack_ea,uStack_f0) >> 0x10);
  uStack_1c6 = (undefined6)(CONCAT26(uStack_f2,uStack_f8) >> 0x10);
  uStack_1ce = (undefined6)(CONCAT26(uStack_fa,uStack_100) >> 0x10);
  uStack_1be = (undefined6)(CONCAT26(uStack_ea,uStack_f0) >> 0x10);
  uStack_1d6 = (undefined6)(CONCAT26(uStack_102,uStack_108) >> 0x10);
  uStack_1de = (undefined6)(CONCAT26(uStack_10a,uStack_110) >> 0x10);
  uStack_198 = uStack_c8;
  uStack_1a0 = uStack_d0;
  uStack_188 = uStack_b8;
  uStack_190 = uStack_c0;
  uStack_220 = uStack_b0;
  uStack_210 = 0x100;
  uStack_1a8 = uStack_d8;
  uStack_180 = uStack_b0;
  uStack_170 = 0x100;
  puStack_218 = puVar1;
  puStack_208 = puVar2;
  uStack_200 = uVar5;
  uStack_1e0 = uStack_280;
  uStack_1d8 = uStack_278;
  uStack_1d0 = uStack_270;
  uStack_1c8 = uStack_268;
  uStack_1c0 = uStack_260;
  uStack_1b8 = uStack_258;
  uStack_1b6 = uStack_256;
  uStack_1b0 = uStack_250;
  uStack_1ae = uStack_24e;
  puStack_178 = puVar1;
  puStack_168 = puVar2;
  uStack_160 = uVar5;
  FUN_10003fd84(&puStack_290,auStack_418,0x1000c5cb0,&UNK_10008bfd0);
  func_0x00010003fdcc(&puStack_1f0,0x1000c5cb0,&UNK_10008bfd0);
  param_1[0xd] = uStack_228;
  param_1[0xc] = uStack_230;
  param_1[0xf] = puStack_218;
  param_1[0xe] = uStack_220;
  param_1[0x11] = puStack_208;
  param_1[0x10] = CONCAT62(uStack_20e,uStack_210);
  param_1[0x12] = uStack_200;
  param_1[5] = CONCAT62(uStack_266,uStack_268);
  param_1[4] = CONCAT62(uStack_26e,uStack_270);
  param_1[7] = CONCAT62(uStack_256,uStack_258);
  param_1[6] = CONCAT62(uStack_25e,uStack_260);
  param_1[9] = uStack_248;
  param_1[8] = CONCAT62(uStack_24e,uStack_250);
  param_1[0xb] = uStack_238;
  param_1[10] = uStack_240;
  param_1[1] = uStack_288;
  *param_1 = puStack_290;
  param_1[3] = CONCAT62(uStack_276,uStack_278);
  param_1[2] = CONCAT62(uStack_27e,uStack_280);
  return;
}



/* Entry: 10003f3d4; end: 10003f593;  */

void FUN_10003f3d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5bd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5bc8;
  func_0x000100010120(0x1000c5bc8,&UNK_10008be98);
  uVar2 = uVar1;
  func_0x00010003f46c();
  uVar3 = 0x1000c4d30;
  FUN_100040048(0x1000c4d30,0x1000c4d38,&UNK_100089cc0,
                PTR___s7SwiftUI30_EnvironmentKeyWritingModifierVyxGAA04ViewF0AAMc_1000b0618);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5bd0 = puVar4;
  return;
}



/* Entry: 10003f594; end: 10003f697;  */

long * FUN_10003f594(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    lVar4 = param_2[2];
    param_1[2] = lVar4;
    lVar5 = (long)*(int *)(param_3 + 0x18);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar2 + -8);
    pcVar7 = *(code **)(lVar6 + 0x30);
    _swift_bridgeObjectRetain(lVar4);
    lVar4 = (long)param_2 + lVar5;
    (*pcVar7)(lVar4,1,lVar2);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    }
    else {
      lVar4 = 0x1000c4330;
      func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
      _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 10003f698; end: 10003f70f;  */

void FUN_10003f698(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003f70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10003f710; end: 10003f917;  */

undefined8 * FUN_10003f710(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[2];
  param_1[2] = uVar3;
  lVar4 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  lVar2 = (long)param_2 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
  }
  else {
    lVar2 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 10003f918; end: 10003f9df;  */

undefined8 * FUN_10003f918(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  lVar3 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0x1000c4330;
    func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 10003f9e0; end: 10003faff;  */

undefined8 * FUN_10003f9e0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar3 = (long)param_1 + lVar5;
  (*pcVar7)(lVar3,1,lVar2);
  lVar4 = (long)param_2 + lVar5;
  (*pcVar7)(lVar4,1,lVar2);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar6 + 0x28))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
      return param_1;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,lVar2);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar2);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar2);
    return param_1;
  }
  lVar3 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 10003fb00; end: 10003fb0b;  */

void FUN_10003fb00(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10003fb0c; end: 10003fb97;  */

ulong FUN_10003fb0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010003fb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 10003fb98; end: 10003fba3;  */

void FUN_10003fb98(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10003fba4; end: 10003fc23;  */

void FUN_10003fba4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 0x10) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
                    /* WARNING: Could not recover jumptable at 0x00010003fc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,lVar1);
  return;
}



/* Entry: 10003fc24; end: 10003fca3;  */

void FUN_10003fc24(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBi64_WV_1000b1108 + 0x40;
  puStack_30 = &UNK_10008bed0;
  lVar1 = 0x13f;
  func_0x0001000241e0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 10003fca4; end: 10003fcb7;  */

undefined1  [16] FUN_10003fca4(void)

{
  return ZEXT816(0x1000b46c8);
}



/* Entry: 10003fcb8; end: 10003fd2f;  */

void FUN_10003fcb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5c88 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5c90;
  func_0x000100010120(0x1000c5c90,&UNK_10008bf18);
  uVar2 = uVar1;
  func_0x00010003e424();
  uVar3 = uVar2;
  FUN_10003e4f4();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c5c88 = puVar4;
  return;
}



/* Entry: 10003fd30; end: 10003fd63;  */

void FUN_10003fd30(void)

{
  FUN_100040048(0x1000c5c98,0x1000c5ca0,&UNK_10008bf20,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000b08a0);
  return;
}



/* Entry: 10003fd64; end: 10003fd83;  */

void FUN_10003fd64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_1000902c8,1);
  return;
}



/* Entry: 10003fd84; end: 10003fe0b;  */

undefined8 FUN_10003fd84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10003fe0c; end: 10003fe1f;  */

void FUN_10003fe0c(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = **(undefined8 **)(unaff_x20 + 0x10);
  return;
}


