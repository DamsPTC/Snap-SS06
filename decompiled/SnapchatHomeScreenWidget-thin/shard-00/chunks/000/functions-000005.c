/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10002c1e0; end: 10002c513;  */

void FUN_10002c1e0(long *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
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
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
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
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar7 = param_2 * 0.55 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar6 = param_2 * 0.5 + param_2 * 0.32;
  dVar5 = param_2 * 0.27 + dVar7 * 0.5;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,param_2 * 0.55,0,dVar7,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar6;
  dStack_2d0 = dVar5;
  dStack_1b8 = dVar6;
  dStack_1b0 = dVar5;
  dStack_158 = dVar6;
  dStack_150 = dVar5;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fc3333333333333;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fc3333333333333;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002c514; end: 10002c51f;  */

void FUN_10002c514(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined6 uStack_380;
  undefined2 uStack_37a;
  undefined6 uStack_378;
  undefined2 uStack_372;
  undefined6 uStack_370;
  undefined2 uStack_36a;
  undefined6 uStack_368;
  undefined2 uStack_362;
  undefined6 uStack_360;
  undefined2 uStack_35a;
  undefined6 uStack_358;
  undefined2 uStack_352;
  undefined6 uStack_350;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long alStack_290 [2];
  undefined2 uStack_280;
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
  long alStack_248 [2];
  undefined2 uStack_238;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined8 uStack_21e;
  undefined8 uStack_216;
  undefined6 uStack_20e;
  undefined2 uStack_208;
  undefined6 uStack_206;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  double dStack_158;
  double dStack_150;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  double dStack_f8;
  double dStack_f0;
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
  double dStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  uVar4 = *unaff_x20;
  dVar6 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&uStack_380 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar9 = dVar6 * 0.55 * (1.0 / *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070);
  dVar8 = dVar6 * 0.5 + dVar6 * 0.32;
  dVar7 = dVar6 * 0.27 + dVar9 * 0.5;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (lVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  lVar2 = lVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,lVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(lVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&lStack_2c0,dVar6 * 0.55,0,dVar9,0,lVar3,lVar1);
  uStack_362 = (undefined2)lStack_2a8;
  uStack_360 = (undefined6)((ulong)lStack_2a8 >> 0x10);
  uStack_36a = (undefined2)lStack_2b0;
  uStack_368 = (undefined6)((ulong)lStack_2b0 >> 0x10);
  uStack_372 = (undefined2)lStack_2b8;
  uStack_370 = (undefined6)((ulong)lStack_2b8 >> 0x10);
  uStack_37a = (undefined2)lStack_2c0;
  uStack_378 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_352 = (undefined2)lStack_298;
  uStack_350 = (undefined6)((ulong)lStack_298 >> 0x10);
  uStack_35a = (undefined2)lStack_2a0;
  uStack_358 = (undefined6)((ulong)lStack_2a0 >> 0x10);
  alStack_290[1] = 0;
  uStack_280 = 1;
  uStack_22e = CONCAT26(uStack_372,uStack_378);
  uStack_236 = CONCAT26(uStack_37a,uStack_380);
  uStack_21e = CONCAT26(uStack_362,uStack_368);
  uStack_226 = CONCAT26(uStack_36a,uStack_370);
  uStack_266 = uStack_368;
  uStack_260 = uStack_362;
  uStack_26e = uStack_370;
  uStack_268 = uStack_36a;
  uStack_276 = uStack_378;
  uStack_270 = uStack_372;
  uStack_278 = uStack_37a;
  uStack_216 = CONCAT26(uStack_35a,uStack_360);
  uStack_256 = uStack_358;
  uStack_25e = uStack_360;
  uStack_258 = uStack_35a;
  lStack_118 = lStack_2b0;
  lStack_120 = lStack_2b8;
  lStack_108 = lStack_2a0;
  lStack_110 = lStack_2a8;
  lStack_128 = lStack_2c0;
  lStack_130 = CONCAT62(uStack_380,1);
  lStack_138 = 0;
  lStack_100 = lStack_298;
  alStack_248[1] = 0;
  uStack_238 = 1;
  uStack_20e = uStack_358;
  uStack_208 = uStack_352;
  alStack_290[0] = lVar2;
  uStack_250 = uStack_352;
  uStack_24e = uStack_350;
  alStack_248[0] = lVar2;
  uStack_206 = uStack_350;
  lStack_140 = lVar2;
  FUN_10002dd98(alStack_290,&lStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(alStack_248,0x1000c4778,&UNK_10008a450);
  lStack_1c0 = lStack_100;
  lStack_1d8 = lStack_118;
  lStack_1e0 = lStack_120;
  lStack_1c8 = lStack_108;
  lStack_1d0 = lStack_110;
  lStack_2f8 = lStack_118;
  lStack_300 = lStack_120;
  lStack_2e8 = lStack_108;
  lStack_2f0 = lStack_110;
  lStack_1f8 = lStack_138;
  lStack_200 = lStack_140;
  lStack_1e8 = lStack_128;
  lStack_1f0 = lStack_130;
  lStack_318 = lStack_138;
  lStack_320 = lStack_140;
  lStack_308 = lStack_128;
  lStack_310 = lStack_130;
  lStack_2e0 = lStack_100;
  lStack_160 = lStack_100;
  lStack_178 = lStack_118;
  lStack_180 = lStack_120;
  lStack_168 = lStack_108;
  lStack_170 = lStack_110;
  lStack_198 = lStack_138;
  lStack_1a0 = lStack_140;
  lStack_188 = lStack_128;
  lStack_190 = lStack_130;
  dStack_2d8 = dVar8;
  dStack_2d0 = dVar7;
  dStack_1b8 = dVar8;
  dStack_1b0 = dVar7;
  dStack_158 = dVar8;
  dStack_150 = dVar7;
  FUN_10002dd98(&lStack_200,&lStack_e0,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&lStack_1a0,0x1000c52e8,&UNK_10008a838);
  lStack_118 = lStack_2f8;
  lStack_120 = lStack_300;
  lStack_108 = lStack_2e8;
  lStack_110 = lStack_2f0;
  dStack_f8 = dStack_2d8;
  lStack_100 = lStack_2e0;
  lStack_138 = lStack_318;
  lStack_140 = lStack_320;
  lStack_128 = lStack_308;
  lStack_130 = lStack_310;
  dStack_f0 = dStack_2d0;
  lStack_e8 = 0x3fc3333333333333;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  dStack_98 = dStack_2d8;
  lStack_a0 = lStack_2e0;
  dStack_90 = dStack_2d0;
  uStack_88 = 0x3fc3333333333333;
  FUN_10002dd98(&lStack_140,&uStack_380,0x1000c52f0,&UNK_10008a840);
  func_0x00010002dde0(&lStack_e0,0x1000c52f0,&UNK_10008a840);
  param_1[5] = lStack_118;
  param_1[4] = lStack_120;
  param_1[7] = lStack_108;
  param_1[6] = lStack_110;
  param_1[9] = (long)dStack_f8;
  param_1[8] = lStack_100;
  param_1[0xb] = lStack_e8;
  param_1[10] = (long)dStack_f0;
  param_1[1] = lStack_138;
  *param_1 = lStack_140;
  param_1[3] = lStack_128;
  param_1[2] = lStack_130;
  return;
}



/* Entry: 10002c520; end: 10002c7bb;  */

void FUN_10002c520(undefined8 *param_1,double param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar5 = *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070;
  dVar7 = param_2 * 0.5;
  dVar6 = dVar7 + param_2 * 0.13;
  _objc_retain(param_3);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,param_3);
  _swift_release(param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,param_2 * 0.73,0,param_2 * 0.73 * (1.0 / dVar5),0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = dVar7;
  dStack_f0 = dVar6;
  dStack_98 = dVar7;
  dStack_90 = dVar6;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002c7bc; end: 10002c7c7;  */

void FUN_10002c7bc(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [88];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 uStack_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 uStack_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined2 uStack_178;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_166;
  undefined8 uStack_15e;
  undefined8 uStack_156;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined6 uStack_140;
  undefined2 uStack_13a;
  undefined6 uStack_138;
  undefined2 uStack_132;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  double dStack_90;
  
  uVar4 = *unaff_x20;
  dVar7 = (double)unaff_x20[1];
  lVar1 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  dVar6 = *(double *)PTR__kSCSilhouetteWidthHeightRatio_1000b1070;
  dVar9 = dVar7 * 0.5;
  dVar8 = dVar9 + dVar7 * 0.13;
  _objc_retain(uVar4);
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  (**(code **)(lVar5 + 0x68))
            (puVar3,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_1000b07e8,
             lVar1);
  puVar2 = puVar3;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,0,0,puVar3,uVar4);
  _swift_release(uVar4);
  (**(code **)(lVar5 + 8))(puVar3,lVar1);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_200,dVar7 * 0.73,0,dVar7 * 0.73 * (1.0 / dVar6),0,puVar3,lVar1);
  uStack_122 = (undefined2)uStack_1e8;
  uStack_120 = (undefined6)((ulong)uStack_1e8 >> 0x10);
  uStack_12a = (undefined2)uStack_1f0;
  uStack_128 = (undefined6)((ulong)uStack_1f0 >> 0x10);
  uStack_132 = (undefined2)uStack_1f8;
  uStack_130 = (undefined6)((ulong)uStack_1f8 >> 0x10);
  uStack_13a = (undefined2)uStack_200;
  uStack_138 = (undefined6)((ulong)uStack_200 >> 0x10);
  uStack_1c8 = 0;
  uStack_112 = (undefined2)uStack_1d8;
  uStack_110 = (undefined6)((ulong)uStack_1d8 >> 0x10);
  uStack_11a = (undefined2)uStack_1e0;
  uStack_118 = (undefined6)((ulong)uStack_1e0 >> 0x10);
  uStack_1c0 = 1;
  uStack_16e = CONCAT26(uStack_132,uStack_138);
  uStack_176 = CONCAT26(uStack_13a,uStack_140);
  uStack_1a6 = uStack_128;
  uStack_1a0 = uStack_122;
  uStack_1ae = uStack_130;
  uStack_1a8 = uStack_12a;
  uStack_15e = CONCAT26(uStack_122,uStack_128);
  uStack_166 = CONCAT26(uStack_12a,uStack_130);
  uStack_1b6 = uStack_138;
  uStack_1b0 = uStack_132;
  uStack_1b8 = uStack_13a;
  uStack_196 = uStack_118;
  uStack_19e = uStack_120;
  uStack_198 = uStack_11a;
  uStack_228 = uStack_1f0;
  uStack_230 = uStack_1f8;
  uStack_218 = uStack_1e0;
  uStack_220 = uStack_1e8;
  uStack_238 = uStack_200;
  uStack_240 = CONCAT62(uStack_140,1);
  uStack_210 = uStack_1d8;
  uStack_248 = 0;
  uStack_180 = 0;
  uStack_178 = 1;
  uStack_156 = CONCAT26(uStack_11a,uStack_120);
  uStack_14e = uStack_118;
  uStack_148 = uStack_112;
  puStack_250 = puVar2;
  puStack_1d0 = puVar2;
  uStack_190 = uStack_112;
  uStack_18e = uStack_110;
  puStack_188 = puVar2;
  uStack_146 = uStack_110;
  FUN_10002dd98(&puStack_1d0,&puStack_e0,0x1000c4778,&UNK_10008a450);
  func_0x00010002dde0(&puStack_188,0x1000c4778,&UNK_10008a450);
  uStack_118 = (undefined6)uStack_228;
  uStack_112 = (undefined2)((ulong)uStack_228 >> 0x30);
  uStack_120 = (undefined6)uStack_230;
  uStack_11a = (undefined2)((ulong)uStack_230 >> 0x30);
  uStack_108 = uStack_218;
  uStack_110 = (undefined6)uStack_220;
  uStack_10a = (undefined2)((ulong)uStack_220 >> 0x30);
  uStack_100 = uStack_210;
  uStack_138 = (undefined6)uStack_248;
  uStack_132 = (undefined2)((ulong)uStack_248 >> 0x30);
  uStack_140 = SUB86(puStack_250,0);
  uStack_13a = (undefined2)((ulong)puStack_250 >> 0x30);
  uStack_128 = (undefined6)uStack_238;
  uStack_122 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_130 = (undefined6)uStack_240;
  uStack_12a = (undefined2)((ulong)uStack_240 >> 0x30);
  uStack_a0 = uStack_210;
  uStack_b8 = uStack_228;
  uStack_c0 = uStack_230;
  uStack_a8 = uStack_218;
  uStack_b0 = uStack_220;
  uStack_d8 = uStack_248;
  puStack_e0 = puStack_250;
  uStack_c8 = uStack_238;
  uStack_d0 = uStack_240;
  dStack_f8 = dVar9;
  dStack_f0 = dVar8;
  dStack_98 = dVar9;
  dStack_90 = dVar8;
  FUN_10002dd98(&uStack_140,auStack_2a8,0x1000c52e8,&UNK_10008a838);
  func_0x00010002dde0(&puStack_e0,0x1000c52e8,&UNK_10008a838);
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = uStack_108;
  param_1[6] = CONCAT26(uStack_10a,uStack_110);
  param_1[9] = dStack_f8;
  param_1[8] = uStack_100;
  param_1[10] = dStack_f0;
  param_1[1] = CONCAT26(uStack_132,uStack_138);
  *param_1 = CONCAT26(uStack_13a,uStack_140);
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,uStack_130);
  return;
}



/* Entry: 10002c7c8; end: 10002c807;  */

void FUN_10002c7c8(void)

{
  FUN_10002ae78();
  return;
}



/* Entry: 10002c808; end: 10002c8db;  */

undefined * FUN_10002c808(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10002c8dc);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_1000b14d0;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x1000c5078;
      func_0x0001000100d0(0x1000c5078,&UNK_10008a060);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x11;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 4) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10002c8d8);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(puVar4 + 0x20,param_2 + param_3 * 0x10,lVar2,&UNK_1000b2e40);
  }
  return puVar4;
}



/* Entry: 10002c8dc; end: 10002c9eb;  */

void FUN_10002c8dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5190 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5188;
  func_0x000100010120(0x1000c5188,&UNK_10008a2d8);
  uVar2 = uVar1;
  func_0x00010002c974();
  uVar3 = 0x1000c51b0;
  FUN_10002ca2c(0x1000c51b0,0x1000c51b8,&UNK_10008a2e8,FUN_10002ca9c);
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c5190 = puVar4;
  return;
}



/* Entry: 10002c9ec; end: 10002ca2b;  */

void FUN_10002c9ec(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c51a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008a400;
  _swift_getWitnessTable(&UNK_10008a400,&UNK_1000b31a0);
  puRam00000001000c51a8 = puVar1;
  return;
}



/* Entry: 10002ca2c; end: 10002ca9b;  */

void FUN_10002ca2c(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    func_0x000100010120(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    uVar2 = uVar1;
    func_0x00010002cadc();
    puVar3 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
    uStack_40 = uVar1;
    uStack_38 = uVar2;
    _swift_getWitnessTable
              (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,param_2,
               &uStack_40);
    *param_1 = (long)puVar3;
  }
  return;
}



/* Entry: 10002ca9c; end: 10002cb1b;  */

void FUN_10002ca9c(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c51c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008a3b0;
  _swift_getWitnessTable(&UNK_10008a3b0,&UNK_1000b3118);
  puRam00000001000c51c0 = puVar1;
  return;
}



/* Entry: 10002cb1c; end: 10002cb57;  */

/* WARNING: Possible PIC construction at 0x00010002cb34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002cb38) */

void FUN_10002cb1c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 10002cb58; end: 10002cc8b;  */

undefined8 * FUN_10002cb58(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001000276a4(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  uVar2 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 3);
  func_0x0001000276a4(uVar2,uVar1);
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = uVar1;
  uVar2 = param_2[4];
  uVar1 = *(undefined1 *)(param_2 + 5);
  func_0x0001000276a4(uVar2,uVar1);
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar1;
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 10002cc8c; end: 10002cd0b;  */

undefined8 * FUN_10002cc8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001000276b8(uVar3,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  uVar2 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  func_0x0001000276b8(uVar3,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  uVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  func_0x0001000276b8(uVar3,uVar2);
  param_1[6] = param_2[6];
  return param_1;
}



/* Entry: 10002cd0c; end: 10002cdb3;  */

int FUN_10002cd0c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10002cdb4; end: 10002ce0f;  */

long FUN_10002cdb4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10002ce10; end: 10002ceff;  */

undefined8 * FUN_10002ce10(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001000276a4(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  uVar2 = param_2[2];
  uVar1 = *(undefined1 *)(param_2 + 3);
  func_0x0001000276a4(uVar2,uVar1);
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = uVar1;
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10002cf00; end: 10002cf13;  */

void FUN_10002cf00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 10002cf14; end: 10002cf77;  */

undefined8 * FUN_10002cf14(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001000276b8(uVar3,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  uVar2 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar1;
  func_0x0001000276b8(uVar3,uVar2);
  param_1[4] = param_2[4];
  return param_1;
}



/* Entry: 10002cf78; end: 10002d02f;  */

int FUN_10002cf78(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10002d030; end: 10002d0db;  */

undefined8 * FUN_10002d030(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0001000276a4(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10002d0dc; end: 10002d0ef;  */

void FUN_10002d0dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10002d0f0; end: 10002d137;  */

undefined8 * FUN_10002d0f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x0001000276b8(uVar3,uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 10002d138; end: 10002d1d3;  */

int FUN_10002d138(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10002d1d4; end: 10002d207;  */

void FUN_10002d1d4(void)

{
  FUN_10002ca2c(0x1000c51d8,0x1000c51e0,&UNK_10008a358,FUN_10002c8dc);
  return;
}



/* Entry: 10002d208; end: 10002d243;  */

void FUN_10002d208(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008fbd4,1);
  return;
}



/* Entry: 10002d244; end: 10002d277;  */

void FUN_10002d244(void)

{
  long unaff_x20;
  
  func_0x0001000276b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  func_0x0001000276b8(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10002d278; end: 10002d27f;  */

void FUN_10002d278(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar3 = *(char *)(unaff_x20 + 0x18);
  uStack_68 = uVar4;
  if (cVar3 == '\x01') {
    func_0x0001000276a4(uVar4,1);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    uStack_60 = param_2;
    cStack_58 = cVar3;
    FUN_10002d2bc();
    uVar2 = uVar1;
    func_0x00010002d2fc();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3368,&UNK_1000b32e8,uVar1,uVar2);
    cVar3 = '\x01';
  }
  else {
    func_0x0001000276a4(uVar4,cVar3);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    cStack_58 = '\0';
    uStack_60 = param_2;
    FUN_10002d2bc();
    uVar2 = uVar1;
    func_0x00010002d2fc();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3368,&UNK_1000b32e8,uVar1,uVar2);
  }
  func_0x0001000276b8(uVar4,cVar3);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  *(undefined1 *)(param_1 + 2) = uStack_40;
  return;
}



/* Entry: 10002d280; end: 10002d2bb;  */

undefined8 FUN_10002d280(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x100027a90)(param_2,param_1);
  return param_2;
}



/* Entry: 10002d2bc; end: 10002d3bb;  */

void FUN_10002d2bc(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008a7e8;
  _swift_getWitnessTable(&UNK_10008a7e8,&UNK_1000b3368);
  puRam00000001000c5210 = puVar1;
  return;
}



/* Entry: 10002d3bc; end: 10002d3cf;  */

void FUN_10002d3bc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  cVar3 = *(char *)(unaff_x20 + 0x38);
  uStack_68 = uVar4;
  if (cVar3 == '\x01') {
    func_0x0001000276a4(uVar4,1);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    uStack_60 = param_2;
    cStack_58 = cVar3;
    func_0x00010002d518();
    uVar2 = uVar1;
    func_0x00010002d558();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3768,&UNK_1000b36e8,uVar1,uVar2);
    cVar3 = '\x01';
  }
  else {
    func_0x0001000276a4(uVar4,cVar3);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    cStack_58 = '\0';
    uStack_60 = param_2;
    func_0x00010002d518();
    uVar2 = uVar1;
    func_0x00010002d558();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3768,&UNK_1000b36e8,uVar1,uVar2);
  }
  func_0x0001000276b8(uVar4,cVar3);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  *(undefined1 *)(param_1 + 2) = uStack_40;
  return;
}



/* Entry: 10002d3d0; end: 10002d40f;  */

void FUN_10002d3d0(void)

{
  long unaff_x20;
  
  func_0x0001000276b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  func_0x0001000276b8(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  func_0x0001000276b8(*(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010008609c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000b1580)();
  return;
}



/* Entry: 10002d410; end: 10002d417;  */

void FUN_10002d410(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar3 = *(char *)(unaff_x20 + 0x18);
  uStack_68 = uVar4;
  if (cVar3 == '\x01') {
    func_0x0001000276a4(uVar4,1);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    uStack_60 = param_2;
    cStack_58 = cVar3;
    FUN_10002d418();
    uVar2 = uVar1;
    func_0x00010002d458();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3568,&UNK_1000b34e8,uVar1,uVar2);
    cVar3 = '\x01';
  }
  else {
    func_0x0001000276a4(uVar4,cVar3);
    uVar1 = uVar4;
    _objc_retain(uVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    cStack_58 = '\0';
    uStack_60 = param_2;
    FUN_10002d418();
    uVar2 = uVar1;
    func_0x00010002d458();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (&uStack_50,&uStack_68,&UNK_1000b3568,&UNK_1000b34e8,uVar1,uVar2);
  }
  func_0x0001000276b8(uVar4,cVar3);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  *(undefined1 *)(param_1 + 2) = uStack_40;
  return;
}



/* Entry: 10002d418; end: 10002d597;  */

void FUN_10002d418(void)

{
  undefined *puVar1;
  
  if (puRam00000001000c5248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10008a6a8;
  _swift_getWitnessTable(&UNK_10008a6a8,&UNK_1000b3568);
  puRam00000001000c5248 = puVar1;
  return;
}



/* Entry: 10002d598; end: 10002d5c3;  */

undefined8 * FUN_10002d598(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _objc_retain();
  return param_1;
}



/* Entry: 10002d5c4; end: 10002d5db;  */

undefined1  [16] FUN_10002d5c4(void)

{
  return ZEXT816(0x1000b32e8);
}



/* Entry: 10002d5dc; end: 10002d627;  */

undefined8 * FUN_10002d5dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 10002d628; end: 10002d663;  */

undefined8 * FUN_10002d628(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Entry: 10002d664; end: 10002d77b;  */

undefined1  [16] FUN_10002d664(void)

{
  return ZEXT816(0x1000b3368);
}



/* Entry: 10002d77c; end: 10002d8ab;  */

void FUN_10002d77c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5278 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c51f0;
  func_0x000100010120(0x1000c51f0,&UNK_10008a460);
  uVar2 = uVar1;
  func_0x00010002d814();
  uVar3 = 0x1000c5288;
  func_0x00010002dcb4(0x1000c5288,0x1000c5290,&UNK_10008a500,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5278 = puVar4;
  return;
}



/* Entry: 10002d8ac; end: 10002d91b;  */

void FUN_10002d8ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (puRam00000001000c4798 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c47a0;
  func_0x000100010120(0x1000c47a0,&UNK_10008a4f0);
  puStack_20 = PTR___s7SwiftUI5ImageVAA4ViewAAWP_1000b0820;
  puStack_18 = PTR___s7SwiftUI18_AspectRatioLayoutVAA12ViewModifierAAWP_1000b0548;
  puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &puStack_20);
  puRam00000001000c4798 = puVar2;
  return;
}



/* Entry: 10002d91c; end: 10002d91f;  */

void FUN_10002d91c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5298 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5208;
  func_0x000100010120(0x1000c5208,&UNK_10008a478);
  uVar2 = uVar1;
  func_0x00010002d9b8();
  uVar3 = 0x1000c5288;
  func_0x00010002dcb4(0x1000c5288,0x1000c5290,&UNK_10008a500,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5298 = puVar4;
  return;
}



/* Entry: 10002d920; end: 10002dae7;  */

void FUN_10002d920(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5298 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5208;
  func_0x000100010120(0x1000c5208,&UNK_10008a478);
  uVar2 = uVar1;
  func_0x00010002d9b8();
  uVar3 = 0x1000c5288;
  func_0x00010002dcb4(0x1000c5288,0x1000c5290,&UNK_10008a500,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5298 = puVar4;
  return;
}



/* Entry: 10002dae8; end: 10002daeb;  */

void FUN_10002dae8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c52c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5240;
  func_0x000100010120(0x1000c5240,&UNK_10008a490);
  uVar2 = uVar1;
  func_0x00010002db84();
  uVar3 = 0x1000c5288;
  func_0x00010002dcb4(0x1000c5288,0x1000c5290,&UNK_10008a500,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c52c0 = puVar4;
  return;
}



/* Entry: 10002daec; end: 10002dcf7;  */

void FUN_10002daec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c52c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5240;
  func_0x000100010120(0x1000c5240,&UNK_10008a490);
  uVar2 = uVar1;
  func_0x00010002db84();
  uVar3 = 0x1000c5288;
  func_0x00010002dcb4(0x1000c5288,0x1000c5290,&UNK_10008a500,
                      PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_1000b02d8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c52c0 = puVar4;
  return;
}



/* Entry: 10002dcf8; end: 10002dd97;  */

void FUN_10002dcf8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008fd64,1);
  return;
}



/* Entry: 10002dd98; end: 10002de1f;  */

undefined8 FUN_10002dd98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10002de20; end: 10002de23;  */

void FUN_10002de20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c52f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c52e8;
  func_0x000100010120(0x1000c52e8,&UNK_10008a838);
  uVar2 = uVar1;
  func_0x000100019f68();
  puStack_28 = PTR___s7SwiftUI15_PositionLayoutVAA12ViewModifierAAWP_1000b03e8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c52f8 = puVar3;
  return;
}



/* Entry: 10002de24; end: 10002de9b;  */

void FUN_10002de24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c52f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c52e8;
  func_0x000100010120(0x1000c52e8,&UNK_10008a838);
  uVar2 = uVar1;
  func_0x000100019f68();
  puStack_28 = PTR___s7SwiftUI15_PositionLayoutVAA12ViewModifierAAWP_1000b03e8;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c52f8 = puVar3;
  return;
}



/* Entry: 10002de9c; end: 10002de9f;  */

void FUN_10002de9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c5300 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c52f0;
  func_0x000100010120(0x1000c52f0,&UNK_10008a840);
  uVar2 = uVar1;
  FUN_10002de24();
  puStack_28 = PTR___s7SwiftUI14_OpacityEffectVAA12ViewModifierAAWP_1000b03a0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5300 = puVar3;
  return;
}



/* Entry: 10002dea0; end: 10002df17;  */

void FUN_10002dea0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c5300 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c52f0;
  func_0x000100010120(0x1000c52f0,&UNK_10008a840);
  uVar2 = uVar1;
  FUN_10002de24();
  puStack_28 = PTR___s7SwiftUI14_OpacityEffectVAA12ViewModifierAAWP_1000b03a0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5300 = puVar3;
  return;
}



/* Entry: 10002df18; end: 10002e103;  */

void FUN_10002df18(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10002e104; end: 10002e167;  */

long FUN_10002e104(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10002e168; end: 10002e26f;  */

undefined8 * FUN_10002e168(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  func_0x000100027838(uVar3,uVar1,uVar2);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  uVar3 = param_2[5];
  param_1[5] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Entry: 10002e270; end: 10002e2d3;  */

undefined8 * FUN_10002e270(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100027878(uVar3,uVar4,uVar2);
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(param_1[4]);
  uVar3 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Entry: 10002e2d4; end: 10002e387;  */

int FUN_10002e2d4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10002e388; end: 10002f2d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10002e388(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long alStack_180 [6];
  long alStack_150 [17];
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
  
  lVar2 = 0x1000c5318;
  alStack_150[0] = param_1;
  func_0x0001000100d0(0x1000c5318,&UNK_10008a8e8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)alStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  puVar9 = (undefined8 *)(lVar8 - extraout_x12);
  lVar3 = 0x1000c5320;
  func_0x0001000100d0(0x1000c5320,&UNK_10008a8f0);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  plVar11 = (long *)(lVar10 - extraout_x12_00);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar11 = lVar4;
  plVar11[1] = 0;
  *(undefined1 *)(plVar11 + 2) = 1;
  lVar4 = 0x1000c5328;
  puVar7 = &UNK_10008a8f8;
  func_0x0001000100d0();
  lVar5 = param_2;
  func_0x00010002e6cc((long)plVar11 + (long)*(int *)(lVar4 + 0x2c));
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  plVar11[-2] = lVar5;
  plVar11[-1] = (long)puVar7;
  *(undefined1 *)(plVar11 + -3) = 1;
  plVar11[-4] = 0;
  *(undefined1 *)(plVar11 + -5) = 1;
  plVar11[-6] = 0;
  uVar6 = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (alStack_150 + 1,0,1,0,1,0x7ff0000000000000,0,0,1);
  puVar1 = (undefined8 *)((long)plVar11 + (long)*(int *)(lVar3 + 0x24));
  puVar1[9] = alStack_150[10];
  puVar1[8] = alStack_150[9];
  puVar1[0xb] = alStack_150[0xc];
  puVar1[10] = alStack_150[0xb];
  puVar1[0xd] = alStack_150[0xe];
  puVar1[0xc] = alStack_150[0xd];
  puVar1[1] = alStack_150[2];
  *puVar1 = alStack_150[1];
  puVar1[3] = alStack_150[4];
  puVar1[2] = alStack_150[3];
  puVar1[5] = alStack_150[6];
  puVar1[4] = alStack_150[5];
  puVar1[7] = alStack_150[8];
  puVar1[6] = alStack_150[7];
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *puVar9 = uVar6;
  puVar9[1] = 0x4024000000000000;
  *(undefined1 *)(puVar9 + 2) = 0;
  lVar3 = 0x1000c5330;
  puVar7 = &UNK_10008a900;
  func_0x0001000100d0();
  func_0x00010002f034((long)puVar9 + (long)*(int *)(lVar3 + 0x2c));
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  plVar11[-2] = param_2;
  plVar11[-1] = (long)puVar7;
  *(undefined1 *)(plVar11 + -3) = 1;
  plVar11[-4] = 0;
  *(undefined1 *)(plVar11 + -5) = 1;
  plVar11[-6] = 0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (alStack_150 + 0xf,0,1,0,1,0x7ff0000000000000,0,0,1);
  puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar2 + 0x24));
  puVar1[9] = uStack_90;
  puVar1[8] = uStack_98;
  puVar1[0xb] = uStack_80;
  puVar1[10] = uStack_88;
  puVar1[0xd] = uStack_70;
  puVar1[0xc] = uStack_78;
  puVar1[1] = alStack_150[0x10];
  *puVar1 = alStack_150[0xf];
  puVar1[3] = uStack_c0;
  puVar1[2] = uStack_c8;
  puVar1[5] = uStack_b0;
  puVar1[4] = uStack_b8;
  puVar1[7] = uStack_a0;
  puVar1[6] = uStack_a8;
  func_0x00010002f4f4(plVar11,lVar10,0x1000c5320,&UNK_10008a8f0);
  func_0x000100030ac0(puVar9,lVar8,0x1000c5318,&UNK_10008a8e8);
  lVar3 = alStack_150[0];
  func_0x00010002f4f4(lVar10,alStack_150[0],0x1000c5320,&UNK_10008a8f0);
  lVar2 = 0x1000c5338;
  func_0x0001000100d0(0x1000c5338,&UNK_10008a908);
  func_0x000100030ac0(lVar8,lVar3 + *(int *)(lVar2 + 0x30),0x1000c5318,&UNK_10008a8e8);
  func_0x000100030b08(puVar9,0x1000c5318,&UNK_10008a8e8);
  func_0x00010002f53c(plVar11,0x1000c5320,&UNK_10008a8f0);
  func_0x000100030b08(lVar8,0x1000c5318,&UNK_10008a8e8);
  func_0x00010002f53c(lVar10,0x1000c5320,&UNK_10008a8f0);
  return;
}



/* Entry: 10002f2d4; end: 10002f2df;  */

void FUN_10002f2d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 10002f2e0; end: 10002f3a3;  */

void FUN_10002f2e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = 0x90;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = param_6;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar3 = 0x1000c5308;
  func_0x0001000100d0(0x1000c5308,&UNK_10008a8d8);
  FUN_10002e388((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uVar4 = 0x4026000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar3 = 0x1000c5310;
  func_0x0001000100d0(0x1000c5310,&UNK_10008a8e0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar4;
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 10002f3a4; end: 10002f3db;  */

void FUN_10002f3a4(undefined8 param_1)

{
  if (lRam00000001000c5410 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008fda8);
  return;
}



/* Entry: 10002f3dc; end: 10002f57b;  */

undefined8 FUN_10002f3dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10002f3a4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10002f57c; end: 10002f68f;  */

long * FUN_10002f57c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    lVar3 = param_2[2];
    lVar2 = param_2[3];
    param_1[2] = lVar3;
    param_1[3] = lVar2;
    lVar5 = param_2[4];
    param_1[4] = lVar5;
    lVar6 = (long)*(int *)(param_3 + 0x1c);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar2 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar5);
    lVar3 = (long)param_2 + lVar6;
    (*pcVar8)(lVar3,1,lVar2);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar2);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar2);
    }
    else {
      lVar3 = 0x1000c4330;
      func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
      _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
              *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
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



/* Entry: 10002f690; end: 10002f70f;  */

void FUN_10002f690(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010002f70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 10002f710; end: 10002f947;  */

undefined8 * FUN_10002f710(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar7 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar7;
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  param_1[4] = uVar3;
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  _swift_bridgeObjectRetain(uVar7);
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



/* Entry: 10002f948; end: 10002fa17;  */

undefined8 * FUN_10002f948(undefined8 *param_1,undefined8 *param_2,long param_3)

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
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  lVar3 = (long)*(int *)(param_3 + 0x1c);
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



/* Entry: 10002fa18; end: 10002fb47;  */

undefined8 * FUN_10002fa18(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar6 = (long)*(int *)(param_3 + 0x1c);
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
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    return param_1;
  }
  lVar4 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 10002fb48; end: 10002fb53;  */

void FUN_10002fb48(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 10002fb54; end: 10002fbdf;  */

ulong FUN_10002fb54(long param_1,undefined8 param_2,long param_3)

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
  uVar2 = param_1 + *(int *)(param_3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x00010002fbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 10002fbe0; end: 10002fbeb;  */

void FUN_10002fbe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 10002fbec; end: 10002fc6b;  */

void FUN_10002fbec(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 0x10) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
                    /* WARNING: Could not recover jumptable at 0x00010002fc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x1c),param_2,param_2,lVar1);
  return;
}



/* Entry: 10002fc6c; end: 10002fcef;  */

void FUN_10002fc6c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = PTR___sBi64_WV_1000b1108 + 0x40;
  puStack_38 = &UNK_10008a990;
  puStack_30 = &UNK_10008a990;
  lVar1 = 0x13f;
  func_0x0001000241e0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 10002fcf0; end: 10002fcf3;  */

void FUN_10002fcf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c5450 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5310;
  func_0x000100010120(0x1000c5310,&UNK_10008a8e0);
  uVar2 = 0x1000c5458;
  func_0x000100030a5c(0x1000c5458,0x1000c5460,&UNK_10008a9a8,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000b08a0);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5450 = puVar3;
  return;
}



/* Entry: 10002fcf4; end: 10002fd8b;  */

void FUN_10002fcf4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam00000001000c5450 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5310;
  func_0x000100010120(0x1000c5310,&UNK_10008a8e0);
  uVar2 = 0x1000c5458;
  func_0x000100030a5c(0x1000c5458,0x1000c5460,&UNK_10008a9a8,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1000b08a0);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_1000b03b0;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5450 = puVar3;
  return;
}



/* Entry: 10002fd8c; end: 10002fd9b;  */

void FUN_10002fd8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008fdf8,1);
  return;
}



/* Entry: 10002fd9c; end: 10003010f;  */

void FUN_10002fd9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  lVar2 = 0x1000c5468;
  uStack_88 = param_1;
  func_0x0001000100d0(0x1000c5468,&UNK_10008aa00);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x1000c5470;
  lStack_a8 = (long)&lStack_b0 - extraout_x8;
  func_0x0001000100d0(0x1000c5470,&UNK_10008aa08);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)&lStack_b0 - extraout_x8) - extraout_x8_00;
  lVar2 = 0x1000c5478;
  func_0x0001000100d0(0x1000c5478,&UNK_10008aa10);
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar8 - extraout_x8_01;
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar10 - extraout_x8_02;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar7 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_10002f3a4();
  func_0x000100030ac0(unaff_x20 + *(int *)(lVar2 + 0x1c),lVar7,0x1000c4330,&UNK_1000890b0);
  lVar2 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000100030b08(lVar7,0x1000c4330,&UNK_1000890b0);
    lVar2 = lStack_a8;
    FUN_100030110(lStack_a8);
    func_0x000100030ac0(lVar2,lVar8,0x1000c5468,&UNK_10008aa00);
    _swift_storeEnumTagMultiPayload(lVar8,lStack_a0,1);
    uVar5 = 0x1000c5480;
    func_0x000100030a5c(0x1000c5480,0x1000c5478,&UNK_10008aa10,
                        PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
    uVar3 = uVar5;
    func_0x0001000308b4();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_88,lVar8,lStack_98,lStack_90,uVar5,uVar3);
    func_0x000100030b08(lVar2,0x1000c5468,&UNK_10008aa00);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar11,lVar7,lVar1);
    lVar4 = lVar6;
    (**(code **)(lVar9 + 0x10))(lVar6,lVar11,lVar1);
    func_0x0001000308b4();
    lVar7 = lStack_90;
    __s7SwiftUI4LinkV11destination5labelACyxG10Foundation3URLV_xyXEtcfC
              (lVar10,lVar6,0x100030aa0,auStack_80,lStack_90,lVar4);
    lVar6 = lStack_98;
    lVar2 = lStack_b0;
    (**(code **)(lStack_b0 + 0x10))(lVar8,lVar10,lStack_98);
    _swift_storeEnumTagMultiPayload(lVar8,lStack_a0,0);
    uVar5 = 0x1000c5480;
    func_0x000100030a5c(0x1000c5480,0x1000c5478,&UNK_10008aa10,
                        PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_88,lVar8,lVar6,lVar7,uVar5,lVar4);
    (**(code **)(lVar2 + 8))(lVar10,lVar6);
    (**(code **)(lVar9 + 8))(lVar11,lVar1);
  }
  return;
}



/* Entry: 100030110; end: 100030623;  */

void FUN_100030110(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_760 [256];
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
  undefined8 uStack_560;
  undefined8 uStack_558;
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
  undefined7 uStack_4d0;
  undefined1 uStack_4c9;
  undefined7 uStack_4c8;
  undefined1 uStack_4c1;
  undefined7 uStack_4c0;
  undefined1 uStack_4b9;
  undefined7 uStack_4b8;
  undefined1 uStack_4b1;
  undefined7 uStack_4b0;
  undefined1 uStack_4a9;
  undefined7 uStack_4a8;
  undefined1 uStack_4a1;
  undefined7 uStack_4a0;
  undefined1 uStack_499;
  undefined7 uStack_498;
  undefined1 uStack_491;
  undefined7 uStack_490;
  undefined1 uStack_489;
  undefined7 uStack_488;
  undefined1 uStack_481;
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
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_127;
  undefined8 uStack_11f;
  undefined8 uStack_117;
  undefined8 uStack_10f;
  undefined8 uStack_107;
  undefined8 uStack_ff;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
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
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  FUN_100030624(&uStack_340);
  uStack_218 = uStack_318;
  uStack_220 = uStack_320;
  uStack_208 = uStack_308;
  uStack_210 = uStack_310;
  uStack_200 = uStack_300;
  uStack_228 = uStack_328;
  uStack_230 = uStack_330;
  uStack_238 = uStack_338;
  uStack_240 = uStack_340;
  uStack_1c8 = uStack_318;
  uStack_1d0 = uStack_320;
  uStack_1b8 = uStack_308;
  uStack_1c0 = uStack_310;
  uStack_1b0 = uStack_300;
  uStack_1d8 = uStack_328;
  uStack_1e0 = uStack_330;
  uStack_1e8 = uStack_338;
  uStack_1f0 = uStack_340;
  uVar8 = 0x1000c54d0;
  func_0x000100030ac0(&uStack_240,&uStack_4d0,0x1000c54d0,&UNK_10008aa38);
  puVar4 = &uStack_1f0;
  func_0x000100030b08(puVar4,0x1000c54d0,&UNK_10008aa38);
  uStack_4b1 = (undefined1)uStack_228;
  uStack_4b0 = (undefined7)((ulong)uStack_228 >> 8);
  uStack_4b9 = (undefined1)uStack_230;
  uStack_4b8 = (undefined7)((ulong)uStack_230 >> 8);
  uStack_4a1 = (undefined1)uStack_218;
  uStack_4a0 = (undefined7)((ulong)uStack_218 >> 8);
  uStack_4a9 = (undefined1)uStack_220;
  uStack_4a8 = (undefined7)((ulong)uStack_220 >> 8);
  uStack_491 = (undefined1)uStack_208;
  uStack_490 = (undefined7)((ulong)uStack_208 >> 8);
  uStack_499 = (undefined1)uStack_210;
  uStack_498 = (undefined7)((ulong)uStack_210 >> 8);
  uStack_489 = (undefined1)uStack_200;
  uStack_488 = (undefined7)((ulong)uStack_200 >> 8);
  uStack_4c1 = (undefined1)uStack_238;
  uStack_4c0 = (undefined7)((ulong)uStack_238 >> 8);
  uStack_4c9 = (undefined1)uStack_240;
  uStack_4c8 = (undefined7)((ulong)uStack_240 >> 8);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_177 = uStack_4b8;
  uStack_170 = uStack_4b1;
  uStack_17f = uStack_4c0;
  uStack_178 = uStack_4b9;
  uStack_167 = uStack_4a8;
  uStack_160 = uStack_4a1;
  uStack_16f = uStack_4b0;
  uStack_168 = uStack_4a9;
  uStack_157 = uStack_498;
  uStack_15f = uStack_4a0;
  uStack_158 = uStack_499;
  uStack_148 = CONCAT71(uStack_488,uStack_489);
  uStack_150 = uStack_491;
  uStack_14f = uStack_490;
  uStack_198 = 0;
  uStack_190 = 1;
  uStack_187 = uStack_4c8;
  uStack_180 = uStack_4c1;
  uStack_18f = uStack_4d0;
  uStack_188 = uStack_4c9;
  uStack_1a0 = param_2;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_370,0,1,0x4042000000000000,0,puVar4,uVar8);
  uStack_3b0 = CONCAT71(uStack_17f,uStack_180);
  uStack_3a8 = CONCAT71(uStack_177,uStack_178);
  uStack_398 = CONCAT71(uStack_167,uStack_168);
  uStack_3a0 = CONCAT71(uStack_16f,uStack_170);
  uStack_390 = CONCAT71(uStack_15f,uStack_160);
  uStack_388 = CONCAT71(uStack_157,uStack_158);
  uStack_380 = CONCAT71(uStack_14f,uStack_150);
  uStack_378 = uStack_148;
  uStack_3b8 = CONCAT71(uStack_187,uStack_188);
  uStack_3c0 = CONCAT71(uStack_18f,uStack_190);
  uStack_3c8 = uStack_198;
  uStack_3d0 = uStack_1a0;
  uStack_138 = 0;
  uStack_130 = 1;
  uStack_12f = CONCAT17(uStack_4c9,uStack_4d0);
  uStack_127 = CONCAT17(uStack_4c1,uStack_4c8);
  uStack_117 = CONCAT17(uStack_4b1,uStack_4b8);
  uStack_11f = CONCAT17(uStack_4b9,uStack_4c0);
  uStack_10f = CONCAT17(uStack_4a9,uStack_4b0);
  uStack_107 = CONCAT17(uStack_4a1,uStack_4a8);
  uStack_ff = CONCAT17(uStack_499,uStack_4a0);
  uStack_e8 = CONCAT71(uStack_488,uStack_489);
  uStack_ef = uStack_490;
  uStack_f7 = uStack_498;
  uStack_f0 = uStack_491;
  uStack_140 = param_2;
  func_0x000100030ac0(&uStack_1a0,&uStack_340,0x1000c54b8,&UNK_10008aa28);
  func_0x000100030b08(&uStack_140,0x1000c54b8,&UNK_10008aa28);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_78 = uStack_368;
  uStack_80 = uStack_370;
  uStack_68 = uStack_358;
  uStack_70 = uStack_360;
  uStack_58 = uStack_348;
  uStack_60 = uStack_350;
  uStack_b8 = uStack_3a8;
  uStack_c0 = uStack_3b0;
  uStack_a8 = uStack_398;
  uStack_b0 = uStack_3a0;
  uStack_98 = uStack_388;
  uStack_a0 = uStack_390;
  uStack_88 = uStack_378;
  uStack_90 = uStack_380;
  uStack_d8 = uStack_3c8;
  uStack_e0 = uStack_3d0;
  uStack_c8 = uStack_3b8;
  uStack_d0 = uStack_3c0;
  __s7SwiftUI16_FlexFrameLayoutV8minWidth05idealG003maxG00F6Height0hJ00iJ09alignmentAC12CoreGraphics7CGFloatVSg_A5nA9AlignmentVtcfC
            (&uStack_2b0,0,1,0,1,0x7ff0000000000000,0,0,1,0,1);
  uStack_2d8 = uStack_368;
  uStack_2e0 = uStack_370;
  uStack_2c8 = uStack_358;
  uStack_2d0 = uStack_360;
  uStack_2b8 = uStack_348;
  uStack_2c0 = uStack_350;
  uStack_318 = uStack_3a8;
  uStack_320 = uStack_3b0;
  uStack_308 = uStack_398;
  uStack_310 = uStack_3a0;
  uStack_2e8 = uStack_378;
  uStack_2f0 = uStack_380;
  uStack_2f8 = uStack_388;
  uStack_300 = uStack_390;
  uStack_328 = uStack_3b8;
  uStack_330 = uStack_3c0;
  uStack_338 = uStack_3c8;
  uStack_340 = uStack_3d0;
  uStack_5f8 = uStack_368;
  uStack_600 = uStack_370;
  uStack_5e8 = uStack_358;
  uStack_5f0 = uStack_360;
  uStack_5d8 = uStack_348;
  uStack_5e0 = uStack_350;
  uStack_638 = uStack_3a8;
  uStack_640 = uStack_3b0;
  uStack_628 = uStack_398;
  uStack_630 = uStack_3a0;
  uStack_618 = uStack_388;
  uStack_620 = uStack_390;
  uStack_608 = uStack_378;
  uStack_610 = uStack_380;
  uStack_658 = uStack_3c8;
  uStack_660 = uStack_3d0;
  uStack_648 = uStack_3b8;
  uStack_650 = uStack_3c0;
  func_0x000100030ac0(&uStack_e0,&uStack_4d0,0x1000c54a8,&UNK_10008aa20);
  func_0x000100030b08(&uStack_660,0x1000c54a8,&UNK_10008aa20);
  lVar5 = 0x1000c5468;
  func_0x0001000100d0(0x1000c5468,&UNK_10008aa00);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  lVar5 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar5 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_1000b0538;
  lVar5 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))((long)puVar4 + (long)iVar3,uVar2,lVar5);
  auVar10 = NEON_fmov(0x4032000000000000,8);
  puVar4[1] = auVar10._8_8_;
  *puVar4 = auVar10._0_8_;
  puVar6 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  lVar5 = 0x1000c54d8;
  puVar9 = &UNK_10008aa40;
  func_0x0001000100d0();
  *(undefined **)((long)puVar4 + (long)*(int *)(lVar5 + 0x34)) = puVar6;
  *(undefined2 *)((long)puVar4 + (long)*(int *)(lVar5 + 0x38)) = 0x100;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uStack_508 = uStack_278;
  uStack_510 = uStack_280;
  uStack_4f8 = uStack_268;
  uStack_500 = uStack_270;
  uStack_4e8 = uStack_258;
  uStack_4f0 = uStack_260;
  uStack_4d8 = uStack_248;
  uStack_4e0 = uStack_250;
  uStack_548 = uStack_2b8;
  uStack_550 = uStack_2c0;
  uStack_538 = uStack_2a8;
  uStack_540 = uStack_2b0;
  uStack_528 = uStack_298;
  uStack_530 = uStack_2a0;
  uStack_518 = uStack_288;
  uStack_520 = uStack_290;
  uStack_588 = uStack_2f8;
  uStack_590 = uStack_300;
  uStack_578 = uStack_2e8;
  uStack_580 = uStack_2f0;
  uStack_568 = uStack_2d8;
  uStack_570 = uStack_2e0;
  uStack_558 = uStack_2c8;
  uStack_560 = uStack_2d0;
  uStack_5c8 = uStack_338;
  uStack_5d0 = uStack_340;
  uStack_5b8 = uStack_328;
  uStack_5c0 = uStack_330;
  uStack_5a8 = uStack_318;
  uStack_5b0 = uStack_320;
  uStack_598 = uStack_308;
  uStack_5a0 = uStack_310;
  lVar7 = 0x1000c54c8;
  func_0x0001000100d0(0x1000c54c8,&UNK_10008aa30);
  plVar1 = (long *)((long)puVar4 + (long)*(int *)(lVar7 + 0x24));
  *plVar1 = lVar5;
  plVar1[1] = (long)puVar9;
  param_1[5] = uStack_318;
  param_1[4] = uStack_320;
  param_1[7] = uStack_308;
  param_1[6] = uStack_310;
  param_1[1] = uStack_338;
  *param_1 = uStack_340;
  param_1[3] = uStack_328;
  param_1[2] = uStack_330;
  param_1[0xd] = uStack_2d8;
  param_1[0xc] = uStack_2e0;
  param_1[0xf] = uStack_2c8;
  param_1[0xe] = uStack_2d0;
  param_1[9] = uStack_2f8;
  param_1[8] = uStack_300;
  param_1[0xb] = uStack_2e8;
  param_1[10] = uStack_2f0;
  param_1[0x15] = uStack_298;
  param_1[0x14] = uStack_2a0;
  param_1[0x17] = uStack_288;
  param_1[0x16] = uStack_290;
  param_1[0x11] = uStack_2b8;
  param_1[0x10] = uStack_2c0;
  param_1[0x13] = uStack_2a8;
  param_1[0x12] = uStack_2b0;
  param_1[0x1d] = uStack_258;
  param_1[0x1c] = uStack_260;
  param_1[0x1f] = uStack_248;
  param_1[0x1e] = uStack_250;
  param_1[0x19] = uStack_278;
  param_1[0x18] = uStack_280;
  param_1[0x1b] = uStack_268;
  param_1[0x1a] = uStack_270;
  uStack_408 = uStack_278;
  uStack_410 = uStack_280;
  uStack_3f8 = uStack_268;
  uStack_400 = uStack_270;
  uStack_3e8 = uStack_258;
  uStack_3f0 = uStack_260;
  uStack_3d8 = uStack_248;
  uStack_3e0 = uStack_250;
  uStack_448 = uStack_2b8;
  uStack_450 = uStack_2c0;
  uStack_438 = uStack_2a8;
  uStack_440 = uStack_2b0;
  uStack_428 = uStack_298;
  uStack_430 = uStack_2a0;
  uStack_418 = uStack_288;
  uStack_420 = uStack_290;
  uStack_488 = (undefined7)uStack_2f8;
  uStack_481 = (undefined1)((ulong)uStack_2f8 >> 0x38);
  uStack_490 = (undefined7)uStack_300;
  uStack_489 = (undefined1)((ulong)uStack_300 >> 0x38);
  uStack_478 = uStack_2e8;
  uStack_480 = uStack_2f0;
  uStack_468 = uStack_2d8;
  uStack_470 = uStack_2e0;
  uStack_458 = uStack_2c8;
  uStack_460 = uStack_2d0;
  uStack_4c8 = (undefined7)uStack_338;
  uStack_4c1 = (undefined1)((ulong)uStack_338 >> 0x38);
  uStack_4d0 = (undefined7)uStack_340;
  uStack_4c9 = (undefined1)((ulong)uStack_340 >> 0x38);
  uStack_4b8 = (undefined7)uStack_328;
  uStack_4b1 = (undefined1)((ulong)uStack_328 >> 0x38);
  uStack_4c0 = (undefined7)uStack_330;
  uStack_4b9 = (undefined1)((ulong)uStack_330 >> 0x38);
  uStack_4a8 = (undefined7)uStack_318;
  uStack_4a1 = (undefined1)((ulong)uStack_318 >> 0x38);
  uStack_4b0 = (undefined7)uStack_320;
  uStack_4a9 = (undefined1)((ulong)uStack_320 >> 0x38);
  uStack_498 = (undefined7)uStack_308;
  uStack_491 = (undefined1)((ulong)uStack_308 >> 0x38);
  uStack_4a0 = (undefined7)uStack_310;
  uStack_499 = (undefined1)((ulong)uStack_310 >> 0x38);
  func_0x000100030ac0(&uStack_5d0,auStack_760,0x1000c5498,&UNK_10008aa18);
  func_0x000100030b08(&uStack_4d0,0x1000c5498,&UNK_10008aa18);
  return;
}



/* Entry: 100030624; end: 1000308af;  */

void FUN_100030624(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100087600(0x4034000000000000,0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = puVar5 == (undefined *)0x0;
  if (bVar1) {
    puStack_80 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    puStack_78 = puVar5;
    __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
    puStack_80 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    _objc_release(puVar5);
    _swift_retain(puStack_78);
    _swift_retain(puStack_80);
  }
  uStack_88 = (ulong)!bVar1;
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar5 = PTR__OBJC_CLASS___NSBundle_1000c2230;
  _objc_opt_self();
  func_0x000100086fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0;
  __s10Foundation17NSLocalizedString_9tableName6bundle5value7commentS2S_SSSgSo8NSBundleCS2StF
            (uVar6,uVar10,0,0,puVar5,0,0xe000000000000000,uVar2,uVar3);
  _objc_release();
  uStack_70 = uVar6;
  uStack_68 = uVar10;
  FUN_100010174();
  puVar7 = &uStack_70;
  puVar11 = PTR___sSSN_1000b1180;
  __s7SwiftUI4TextVyACxcSyRzlufC();
  puVar8 = PTR__OBJC_CLASS___UIFont_1000c20f0;
  _objc_opt_self();
  func_0x0001000867e0(0x402c000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar8 != (undefined *)0x0) {
    __s7SwiftUI4FontVyACSo9CTFontRefacfC();
    puVar9 = puVar8;
    puVar12 = puVar7;
    puVar13 = puVar11;
    puVar15 = puVar5;
    __s7SwiftUI4TextV4fontyAcA4FontVSgF();
    _swift_release(puVar8);
    func_0x000100022a4c(puVar7,puVar11,puVar5);
    _swift_bridgeObjectRelease(uVar14);
    puVar5 = PTR__OBJC_CLASS___UIColor_1000c20f8;
    _objc_opt_self();
    func_0x0001000875e0();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
    func_0x000100030b48(puStack_78,0,uStack_88,puStack_80);
    FUN_100026d8c(puVar9,puVar12,puVar13);
    _swift_bridgeObjectRetain(puVar15);
    _swift_retain(puVar5);
    func_0x000100030b74(puStack_78,0,uStack_88,puStack_80);
    *param_1 = puStack_78;
    param_1[1] = 0;
    param_1[2] = uStack_88;
    param_1[3] = puStack_80;
    param_1[4] = puVar9;
    param_1[5] = puVar12;
    *(char *)(param_1 + 6) = (char)puVar13;
    param_1[7] = puVar15;
    param_1[8] = puVar5;
    func_0x000100022a4c(puVar9,puVar12,puVar13);
    _swift_release(puVar5);
    _swift_bridgeObjectRelease(puVar15);
    func_0x000100030b74(puStack_78,0,uStack_88,puStack_80);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000308b0);
  (*pcVar4)();
}



/* Entry: 1000308b0; end: 1000308b3;  */

void FUN_1000308b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  lVar2 = 0x1000c5468;
  uStack_88 = param_1;
  func_0x0001000100d0(0x1000c5468,&UNK_10008aa00);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x1000c5470;
  lStack_a8 = (long)&lStack_b0 - extraout_x8;
  func_0x0001000100d0(0x1000c5470,&UNK_10008aa08);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)&lStack_b0 - extraout_x8) - extraout_x8_00;
  lVar2 = 0x1000c5478;
  func_0x0001000100d0(0x1000c5478,&UNK_10008aa10);
  lStack_b0 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(long *)(lStack_b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar8 - extraout_x8_01;
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar10 - extraout_x8_02;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar7 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_10002f3a4();
  func_0x000100030ac0(unaff_x20 + *(int *)(lVar2 + 0x1c),lVar7,0x1000c4330,&UNK_1000890b0);
  lVar2 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar1);
  if ((int)lVar2 == 1) {
    func_0x000100030b08(lVar7,0x1000c4330,&UNK_1000890b0);
    lVar2 = lStack_a8;
    FUN_100030110(lStack_a8);
    func_0x000100030ac0(lVar2,lVar8,0x1000c5468,&UNK_10008aa00);
    _swift_storeEnumTagMultiPayload(lVar8,lStack_a0,1);
    uVar5 = 0x1000c5480;
    func_0x000100030a5c(0x1000c5480,0x1000c5478,&UNK_10008aa10,
                        PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
    uVar3 = uVar5;
    func_0x0001000308b4();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_88,lVar8,lStack_98,lStack_90,uVar5,uVar3);
    func_0x000100030b08(lVar2,0x1000c5468,&UNK_10008aa00);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar11,lVar7,lVar1);
    lVar4 = lVar6;
    (**(code **)(lVar9 + 0x10))(lVar6,lVar11,lVar1);
    func_0x0001000308b4();
    lVar7 = lStack_90;
    __s7SwiftUI4LinkV11destination5labelACyxG10Foundation3URLV_xyXEtcfC
              (lVar10,lVar6,0x100030aa0,auStack_80,lStack_90,lVar4);
    lVar6 = lStack_98;
    lVar2 = lStack_b0;
    (**(code **)(lStack_b0 + 0x10))(lVar8,lVar10,lStack_98);
    _swift_storeEnumTagMultiPayload(lVar8,lStack_a0,0);
    uVar5 = 0x1000c5480;
    func_0x000100030a5c(0x1000c5480,0x1000c5478,&UNK_10008aa10,
                        PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (uStack_88,lVar8,lVar6,lVar7,uVar5,lVar4);
    (**(code **)(lVar2 + 8))(lVar10,lVar6);
    (**(code **)(lVar9 + 8))(lVar11,lVar1);
  }
  return;
}



/* Entry: 1000308b4; end: 100030b9f;  */

void FUN_1000308b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c5488 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c5468;
  func_0x000100010120(0x1000c5468,&UNK_10008aa00);
  uVar2 = uVar1;
  func_0x00010003094c();
  uVar3 = 0x1000c54c0;
  func_0x000100030a5c(0x1000c54c0,0x1000c54c8,&UNK_10008aa30,
                      PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_1000b0570);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_1000b03d0,uVar1,
             &uStack_30);
  puRam00000001000c5488 = puVar4;
  return;
}



/* Entry: 100030ba0; end: 100030ba3;  */

void FUN_100030ba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c54e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c54e8;
  func_0x000100010120(0x1000c54e8,&UNK_10008aa48);
  uVar2 = 0x1000c5480;
  func_0x000100030a5c(0x1000c5480,0x1000c5478,&UNK_10008aa10,
                      PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
  uVar3 = uVar2;
  func_0x0001000308b4();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c54e0 = puVar4;
  return;
}



/* Entry: 100030ba4; end: 100030c3b;  */

void FUN_100030ba4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000c54e0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000c54e8;
  func_0x000100010120(0x1000c54e8,&UNK_10008aa48);
  uVar2 = 0x1000c5480;
  func_0x000100030a5c(0x1000c5480,0x1000c5478,&UNK_10008aa10,
                      PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
  uVar3 = uVar2;
  func_0x0001000308b4();
  puVar4 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_1000b05a0,uVar1,
             &uStack_30);
  puRam00000001000c54e0 = puVar4;
  return;
}



/* Entry: 100030c3c; end: 100030c53;  */

void FUN_100030c3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 100030c54; end: 100030d47;  */

long * FUN_100030c54(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = *param_2;
    lVar5 = param_2[3];
    lVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = lVar3;
    param_1[3] = lVar5;
    param_1[2] = lVar2;
    param_1[4] = param_2[4];
    lVar5 = (long)*(int *)(param_3 + 0x24);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    lVar6 = *(long *)(lVar2 + -8);
    lVar3 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar3,1,lVar2);
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



/* Entry: 100030d48; end: 100030db3;  */

void FUN_100030d48(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x24);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100030db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 100030db4; end: 100030e7b;  */

undefined8 * FUN_100030db4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[4] = param_2[4];
  lVar3 = (long)*(int *)(param_3 + 0x24);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
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



/* Entry: 100030e7c; end: 100030fa7;  */

undefined8 * FUN_100030e7c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  lVar4 = (long)*(int *)(param_3 + 0x24);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x18))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 100030fa8; end: 10003106f;  */

undefined8 * FUN_100030fa8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  param_1[4] = param_2[4];
  lVar3 = (long)*(int *)(param_3 + 0x24);
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



/* Entry: 100031070; end: 10003119b;  */

undefined8 * FUN_100031070(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  lVar4 = (long)*(int *)(param_3 + 0x24);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  lVar2 = (long)param_1 + lVar4;
  (*pcVar6)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar4;
  (*pcVar6)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 0x28))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
      return param_1;
    }
    (**(code **)(lVar5 + 8))((long)param_1 + lVar4,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar1);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar1);
    return param_1;
  }
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 10003119c; end: 1000311a7;  */

void FUN_10003119c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_1000b15c8)();
  return;
}



/* Entry: 1000311a8; end: 1000311fb;  */

void FUN_1000311a8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_3 + 0x24);
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
                    /* WARNING: Could not recover jumptable at 0x0001000311f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1 + iVar1,param_2,lVar2);
  return;
}



/* Entry: 1000311fc; end: 100031207;  */

void FUN_1000311fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100086294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_1000b16d8)();
  return;
}



/* Entry: 100031208; end: 10003125f;  */

void FUN_100031208(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_4 + 0x24);
  lVar2 = 0x1000c4330;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
                    /* WARNING: Could not recover jumptable at 0x00010003125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1 + iVar1,param_2,param_2,lVar2);
  return;
}



/* Entry: 100031260; end: 100031297;  */

void FUN_100031260(undefined8 param_1)

{
  if (lRam00000001000c5548 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10008fe20);
  return;
}



/* Entry: 100031298; end: 100031317;  */

void FUN_100031298(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_50 = PTR___sBi64_WV_1000b1108 + 0x40;
  lVar1 = 0x13f;
  puStack_48 = puStack_50;
  puStack_40 = puStack_50;
  puStack_38 = puStack_50;
  puStack_30 = puStack_50;
  func_0x0001000241e0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,6,&puStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 100031318; end: 100031327;  */

void FUN_100031318(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_1000b1608)(param_1,&UNK_10008fe48,1);
  return;
}



/* Entry: 100031328; end: 1000316c3;  */

void FUN_100031328(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long alStack_220 [18];
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
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  lVar4 = 0x1000c5590;
  alStack_220[5] = param_1;
  func_0x0001000100d0(0x1000c5590,&UNK_10008aab8);
  alStack_220[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar9 = (undefined8 *)((long)alStack_220 + lVar1);
  lVar4 = 0x1000c5598;
  func_0x0001000100d0(0x1000c5598,&UNK_10008aac0);
  alStack_220[2] = *(long *)(lVar4 + -8);
  alStack_220[4] = lVar4;
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(alStack_220[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x1000c4330;
  alStack_220[1] = (long)puVar9 - extraout_x8_00;
  func_0x0001000100d0(0x1000c4330,&UNK_1000890b0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)puVar9 - extraout_x8_00) - extraout_x8_01;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_1000b0c68)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = lVar8 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_1000b0c68)();
  lVar11 = lVar12 - extraout_x12;
  lVar4 = 0;
  FUN_100031260();
  FUN_1000318c8(unaff_x20 + *(int *)(lVar4 + 0x24),lVar8,0x1000c4330,&UNK_1000890b0);
  lVar4 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x000100031910(lVar8,0x1000c4330,&UNK_1000890b0);
    FUN_10003176c(&uStack_190);
    uStack_108 = uStack_168;
    uStack_110 = uStack_170;
    uStack_f8 = uStack_158;
    uStack_100 = uStack_160;
    uStack_e8 = uStack_148;
    uStack_f0 = uStack_150;
    uStack_d8 = uStack_138;
    uStack_e0 = uStack_140;
    uStack_128 = uStack_188;
    uStack_130 = uStack_190;
    uStack_118 = uStack_178;
    uStack_120 = uStack_180;
    uStack_c8 = uStack_188;
    uStack_d0 = uStack_190;
    uVar5 = 0x1000c55a0;
    FUN_1000318c8(&uStack_130,alStack_220 + 6,0x1000c55a0,&UNK_10008aac8);
    func_0x000100031910(&uStack_d0,0x1000c55a0,&UNK_10008aac8);
    uVar2 = uStack_f8;
    uVar6 = uStack_100;
    uVar7 = uStack_110;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x28) = uStack_108;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x20) = uVar7;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x38) = uVar2;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x30) = uVar6;
    uVar2 = uStack_d8;
    uVar6 = uStack_e0;
    uVar7 = uStack_f0;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x48) = uStack_e8;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x40) = uVar7;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x58) = uVar2;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x50) = uVar6;
    uVar2 = uStack_118;
    uVar6 = uStack_120;
    uVar7 = uStack_130;
    *(undefined8 *)((long)alStack_220 + lVar1 + 8) = uStack_128;
    *puVar9 = uVar7;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x18) = uVar2;
    *(undefined8 *)((long)alStack_220 + lVar1 + 0x10) = uVar6;
    _swift_storeEnumTagMultiPayload(puVar9,alStack_220[3],1);
    func_0x0001000100d0(0x1000c55a0,&UNK_10008aac8);
    uVar7 = 0x1000c55a8;
    func_0x000100031a60(0x1000c55a8,0x1000c5598,&UNK_10008aac0,
                        PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
    uVar6 = uVar7;
    func_0x000100031950();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (alStack_220[5],puVar9,alStack_220[4],uVar5,uVar7,uVar6);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar11,lVar8,lVar3);
    (**(code **)(lVar10 + 0x10))(lVar12,lVar11,lVar3);
    uVar5 = 0x1000c55a0;
    func_0x0001000100d0(0x1000c55a0,&UNK_10008aac8);
    uVar6 = uVar5;
    func_0x000100031950();
    lVar4 = alStack_220[1];
    __s7SwiftUI4LinkV11destination5labelACyxG10Foundation3URLV_xyXEtcfC
              (alStack_220[1],lVar12,FUN_100031aa4,&uStack_d0,uVar5,uVar6);
    lVar8 = alStack_220[4];
    lVar1 = alStack_220[2];
    (**(code **)(alStack_220[2] + 0x10))(puVar9,lVar4,alStack_220[4]);
    _swift_storeEnumTagMultiPayload(puVar9,alStack_220[3],0);
    uVar7 = 0x1000c55a8;
    func_0x000100031a60(0x1000c55a8,0x1000c5598,&UNK_10008aac0,
                        PTR___s7SwiftUI4LinkVyxGAA4ViewAAMc_1000b06b8);
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (alStack_220[5],puVar9,lVar8,uVar5,uVar7,uVar6);
    (**(code **)(lVar1 + 8))(lVar4,lVar8);
    (**(code **)(lVar10 + 8))(lVar11,lVar3);
  }
  return;
}



/* Entry: 1000316c4; end: 10003176b;  */

void FUN_1000316c4(undefined8 *param_1)

{
  undefined1 auStack_1b0 [96];
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10003176c(&uStack_150);
  uStack_c8 = uStack_128;
  uStack_d0 = uStack_130;
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_58 = uStack_118;
  uStack_60 = uStack_120;
  uStack_48 = uStack_108;
  uStack_50 = uStack_110;
  uStack_38 = uStack_f8;
  uStack_40 = uStack_100;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  FUN_1000318c8(&uStack_f0,auStack_1b0,0x1000c55a0,&UNK_10008aac8);
  func_0x000100031910(&uStack_90,0x1000c55a0,&UNK_10008aac8);
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}



/* Entry: 10003176c; end: 1000318b7;  */

void FUN_10003176c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1000c20c0;
  _objc_opt_self();
  func_0x000100087600(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 8));
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1000c20c0;
    _objc_allocWithZone();
    func_0x000100086bc0();
  }
  _objc_retain();
  puVar2 = puVar1;
  __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
  puVar3 = PTR__OBJC_CLASS___UIColor_1000c20f8;
  _objc_opt_self();
  puVar4 = puVar3;
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar5 = puVar4;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar6 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_90,uVar7,0,uVar7,0,puVar5,param_3);
  func_0x0001000875e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar5 = puVar3;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  _objc_release(puVar1);
  *param_1 = puVar2;
  param_1[1] = puVar4;
  param_1[2] = uStack_90;
  *(undefined1 *)(param_1 + 3) = uStack_88;
  param_1[4] = uStack_80;
  *(undefined1 *)(param_1 + 5) = uStack_78;
  param_1[6] = uStack_70;
  param_1[7] = uStack_68;
  param_1[8] = puVar3;
  *(undefined2 *)(param_1 + 9) = 0x100;
  param_1[10] = puVar5;
  param_1[0xb] = uVar6;
  return;
}



/* Entry: 1000318b8; end: 1000318c7;  */

void FUN_1000318b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001000853dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_1000b06f8
  )();
  return;
}



/* Entry: 1000318c8; end: 100031aa3;  */

undefined8 FUN_1000318c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000100d0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100031aa4; end: 100031aaf;  */

void FUN_100031aa4(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_1b0 [96];
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10003176c(&uStack_150,*(undefined8 *)(unaff_x20 + 0x10));
  uStack_c8 = uStack_128;
  uStack_d0 = uStack_130;
  uStack_b8 = uStack_118;
  uStack_c0 = uStack_120;
  uStack_a8 = uStack_108;
  uStack_b0 = uStack_110;
  uStack_98 = uStack_f8;
  uStack_a0 = uStack_100;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_68 = uStack_128;
  uStack_70 = uStack_130;
  uStack_58 = uStack_118;
  uStack_60 = uStack_120;
  uStack_48 = uStack_108;
  uStack_50 = uStack_110;
  uStack_38 = uStack_f8;
  uStack_40 = uStack_100;
  uStack_88 = uStack_148;
  uStack_90 = uStack_150;
  uStack_78 = uStack_138;
  uStack_80 = uStack_140;
  FUN_1000318c8(&uStack_f0,auStack_1b0,0x1000c55a0,&UNK_10008aac8);
  func_0x000100031910(&uStack_90,0x1000c55a0,&UNK_10008aac8);
  param_1[5] = uStack_c8;
  param_1[4] = uStack_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = uStack_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[1] = uStack_e8;
  *param_1 = uStack_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}


