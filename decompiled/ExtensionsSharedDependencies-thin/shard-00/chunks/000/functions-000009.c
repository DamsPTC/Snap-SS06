/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000451fc; end: 00045253;  */

void FUN_000451fc(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s7SwiftUI15ScrollViewProxyVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x11 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00045254; end: 00045293;  */

void FUN_00045254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  char cStack_31;
  
  lVar1 = 0;
  __s7SwiftUI15ScrollViewProxyVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  cStack_31 = *(char *)(unaff_x20 + 0x10);
  if (cStack_31 != '\t') {
    __s7SwiftUI9UnitPointV6centerACvgZ
              (param_3,cStack_31,unaff_x20 + (uVar2 + 0x11 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x00045344();
    __s7SwiftUI15ScrollViewProxyV8scrollTo_6anchoryx_AA9UnitPointVSgtSHRzlF
              (&cStack_31,param_1,param_2,0,&UNK_0099e7d0,param_3);
  }
  return;
}



/* Entry: 00045294; end: 000452eb;  */

void FUN_00045294(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s7SwiftUI15ScrollViewProxyVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000452ec; end: 00045327;  */

void FUN_000452ec(char *param_1)

{
  __s7SwiftUI15ScrollViewProxyVMa();
  if (*param_1 != '\t') {
    __s7SwiftUI9AnimationV7defaultACvgZ();
    __s7SwiftUI13withAnimationyxAA0D0VSg_xyKXEtKlF();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 00045328; end: 00045383;  */

void FUN_00045328(void)

{
  long unaff_x20;
  
  FUN_00044268(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00045384; end: 000453c7;  */

void FUN_00045384(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _swift_retain(uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar2);
    return;
  }
  return;
}



/* Entry: 000453c8; end: 00045763;  */

void FUN_000453c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_4c8 [168];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
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
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
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
  undefined *puStack_138;
  undefined1 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar8 = 0x4028000000000000;
  uVar4 = param_6;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_e8 = CONCAT71(uStack_e8._1_7_,param_6);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_120 = 0;
  uStack_118 = CONCAT71(uStack_118._1_7_,1);
  uStack_110 = 0x402c000000000000;
  uStack_108 = 0x6472616f6279656b;
  uStack_100 = 0xe800000000000000;
  uStack_f8 = 0xd4;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  uStack_e0 = uVar8;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_338 = uStack_d8;
  uStack_340 = uStack_e0;
  uStack_328 = uStack_c8;
  uStack_330 = uStack_d0;
  uStack_320 = (undefined1)uStack_c0;
  uStack_378 = uStack_118;
  uStack_380 = uStack_120;
  uStack_368 = uStack_108;
  uStack_370 = uStack_110;
  uStack_358 = uStack_f8;
  uStack_360 = uStack_100;
  uStack_348 = uStack_e8;
  uStack_350 = uStack_f0;
  uVar8 = uStack_100;
  FUN_00048a54(&uStack_380,&uStack_1d0,0xae7be8,&UNK_007cf050);
  uVar9 = 0x4022000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_188 = uStack_338;
  uStack_190 = uStack_340;
  uStack_178 = uStack_328;
  uStack_180 = uStack_330;
  uStack_170 = CONCAT71(uStack_170._1_7_,uStack_320);
  uStack_1c8 = uStack_378;
  uStack_1d0 = uStack_380;
  uStack_1b8 = uStack_368;
  uStack_1c0 = uStack_370;
  uStack_1a8 = uStack_358;
  uStack_1b0 = uStack_360;
  uStack_198 = uStack_348;
  uStack_1a0 = uStack_350;
  FUN_00048988(&uStack_120,0xae7be8,&UNK_007cf050);
  puVar5 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar6 = puVar5;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_2b0 = uStack_170;
  uStack_2c8 = uStack_188;
  uStack_2d0 = uStack_190;
  uStack_2b8 = uStack_178;
  uStack_2c0 = uStack_180;
  uStack_308 = uStack_1c8;
  uStack_310 = uStack_1d0;
  uStack_2f8 = uStack_1b8;
  uStack_300 = uStack_1c0;
  uStack_2e8 = uStack_1a8;
  uStack_2f0 = uStack_1b0;
  uStack_2d8 = uStack_198;
  uStack_2e0 = uStack_1a0;
  uStack_3b8 = CONCAT71(uStack_2a7,uVar4);
  uStack_418 = uStack_1c8;
  uStack_420 = uStack_1d0;
  uStack_408 = uStack_1b8;
  uStack_410 = uStack_1c0;
  uStack_3c8 = uStack_178;
  uStack_3d0 = uStack_180;
  uStack_3c0 = uStack_170;
  uStack_3d8 = uStack_188;
  uStack_3e0 = uStack_190;
  uStack_3f8 = uStack_1a8;
  uStack_400 = uStack_1b0;
  uStack_3e8 = uStack_198;
  uStack_3f0 = uStack_1a0;
  uStack_228 = uStack_188;
  uStack_230 = uStack_190;
  uStack_218 = uStack_178;
  uStack_220 = uStack_180;
  uStack_280 = 0;
  uStack_390 = 0;
  uStack_210 = uStack_170;
  uStack_268 = uStack_1c8;
  uStack_270 = uStack_1d0;
  uStack_258 = uStack_1b8;
  uStack_260 = uStack_1c0;
  uStack_248 = uStack_1a8;
  uStack_250 = uStack_1b0;
  uStack_238 = uStack_198;
  uStack_240 = uStack_1a0;
  uStack_1e0 = 0;
  uStack_3b0 = uVar9;
  uStack_3a8 = uVar8;
  uStack_3a0 = param_4;
  uStack_398 = param_5;
  uStack_2a8 = uVar4;
  uStack_2a0 = uVar9;
  uStack_298 = uVar8;
  uStack_290 = param_4;
  uStack_288 = param_5;
  uStack_208 = uVar4;
  uStack_200 = uVar9;
  uStack_1f8 = uVar8;
  uStack_1f0 = param_4;
  uStack_1e8 = param_5;
  FUN_00048a54(&uStack_310,&uStack_120,0xae7bd8,&UNK_007ced70);
  FUN_00048988(&uStack_270,0xae7bd8,&UNK_007ced70);
  uStack_168 = uStack_3b8;
  uStack_170 = uStack_3c0;
  uStack_158 = uStack_3a8;
  uStack_160 = uStack_3b0;
  uStack_148 = uStack_398;
  uStack_150 = uStack_3a0;
  uStack_140 = CONCAT71(uStack_38f,uStack_390);
  uStack_1a8 = uStack_3f8;
  uStack_1b0 = uStack_400;
  uStack_198 = uStack_3e8;
  uStack_1a0 = uStack_3f0;
  uStack_188 = uStack_3d8;
  uStack_190 = uStack_3e0;
  uStack_178 = uStack_3c8;
  uStack_180 = uStack_3d0;
  uStack_1c8 = uStack_418;
  uStack_1d0 = uStack_420;
  uStack_1b8 = uStack_408;
  uStack_1c0 = uStack_410;
  lVar7 = 0xae7bb8;
  puStack_138 = puVar5;
  uStack_130 = (char)puVar6;
  func_0x000115a8(0xae7bb8,&UNK_007ced60);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  lVar7 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar7 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar7 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar7);
  puVar1[1] = 0x4040000000000000;
  *puVar1 = 0x4040000000000000;
  lVar7 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24)) = 0x100;
  param_1[0x11] = uStack_148;
  param_1[0x10] = uStack_150;
  param_1[0x13] = puStack_138;
  param_1[0x12] = uStack_140;
  *(undefined1 *)(param_1 + 0x14) = uStack_130;
  param_1[9] = uStack_188;
  param_1[8] = uStack_190;
  param_1[0xb] = uStack_178;
  param_1[10] = uStack_180;
  param_1[0xd] = uStack_168;
  param_1[0xc] = uStack_170;
  param_1[0xf] = uStack_158;
  param_1[0xe] = uStack_160;
  param_1[1] = uStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = uStack_1b8;
  param_1[2] = uStack_1c0;
  param_1[5] = uStack_1a8;
  param_1[4] = uStack_1b0;
  param_1[7] = uStack_198;
  param_1[6] = uStack_1a0;
  uStack_b8 = uStack_3b8;
  uStack_c0 = uStack_3c0;
  uStack_a8 = uStack_3a8;
  uStack_b0 = uStack_3b0;
  uStack_98 = uStack_398;
  uStack_a0 = uStack_3a0;
  uStack_90 = CONCAT71(uStack_38f,uStack_390);
  uStack_f8 = uStack_3f8;
  uStack_100 = uStack_400;
  uStack_e8 = uStack_3e8;
  uStack_f0 = uStack_3f0;
  uStack_d8 = uStack_3d8;
  uStack_e0 = uStack_3e0;
  uStack_c8 = uStack_3c8;
  uStack_d0 = uStack_3d0;
  uStack_118 = uStack_418;
  uStack_120 = uStack_420;
  uStack_108 = uStack_408;
  uStack_110 = uStack_410;
  puStack_88 = puVar5;
  uStack_80 = (char)puVar6;
  FUN_00048a54(&uStack_1d0,auStack_4c8,0xae7bc8,&UNK_007ced68);
  FUN_00048988(&uStack_120,0xae7bc8,&UNK_007ced68);
  return;
}



/* Entry: 00045764; end: 000457a7;  */

void FUN_00045764(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar2);
    return;
  }
  return;
}



/* Entry: 000457a8; end: 00045b3f;  */

void FUN_000457a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_4c8 [168];
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  ulong uStack_3f0;
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
  undefined1 uStack_390;
  undefined7 uStack_38f;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  ulong uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 uStack_280;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
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
  undefined *puStack_138;
  undefined1 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar8 = 0x4028000000000000;
  uVar4 = param_6;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_e8 = CONCAT71(uStack_e8._1_7_,param_6);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_120 = 0;
  uStack_118 = CONCAT71(uStack_118._1_7_,1);
  uStack_110 = 0x4031000000000000;
  uStack_108 = 0x65626f6c67;
  uStack_100 = 0xe500000000000000;
  uStack_f8 = 0x48;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  uStack_e0 = uVar8;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_338 = uStack_d8;
  uStack_340 = uStack_e0;
  uStack_328 = uStack_c8;
  uStack_330 = uStack_d0;
  uStack_320 = (undefined1)uStack_c0;
  uStack_378 = uStack_118;
  uStack_380 = uStack_120;
  uStack_368 = uStack_108;
  uStack_370 = uStack_110;
  uStack_358 = uStack_f8;
  uStack_360 = uStack_100;
  uStack_348 = uStack_e8;
  uStack_350 = uStack_f0;
  uVar8 = uStack_100;
  FUN_00048a54(&uStack_380,&uStack_1d0,0xae7be8,&UNK_007cf050);
  uVar9 = 0x4018000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_188 = uStack_338;
  uStack_190 = uStack_340;
  uStack_178 = uStack_328;
  uStack_180 = uStack_330;
  uStack_170 = CONCAT71(uStack_170._1_7_,uStack_320);
  uStack_1c8 = uStack_378;
  uStack_1d0 = uStack_380;
  uStack_1b8 = uStack_368;
  uStack_1c0 = uStack_370;
  uStack_1a8 = uStack_358;
  uStack_1b0 = uStack_360;
  uStack_198 = uStack_348;
  uStack_1a0 = uStack_350;
  FUN_00048988(&uStack_120,0xae7be8,&UNK_007cf050);
  puVar5 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar6 = puVar5;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_2b0 = uStack_170;
  uStack_2c8 = uStack_188;
  uStack_2d0 = uStack_190;
  uStack_2b8 = uStack_178;
  uStack_2c0 = uStack_180;
  uStack_308 = uStack_1c8;
  uStack_310 = uStack_1d0;
  uStack_2f8 = uStack_1b8;
  uStack_300 = uStack_1c0;
  uStack_2e8 = uStack_1a8;
  uStack_2f0 = uStack_1b0;
  uStack_2d8 = uStack_198;
  uStack_2e0 = uStack_1a0;
  uStack_3b8 = CONCAT71(uStack_2a7,uVar4);
  uStack_418 = uStack_1c8;
  uStack_420 = uStack_1d0;
  uStack_408 = uStack_1b8;
  uStack_410 = uStack_1c0;
  uStack_3c8 = uStack_178;
  uStack_3d0 = uStack_180;
  uStack_3c0 = uStack_170;
  uStack_3d8 = uStack_188;
  uStack_3e0 = uStack_190;
  uStack_3f8 = uStack_1a8;
  uStack_400 = uStack_1b0;
  uStack_3e8 = uStack_198;
  uStack_3f0 = uStack_1a0;
  uStack_228 = uStack_188;
  uStack_230 = uStack_190;
  uStack_218 = uStack_178;
  uStack_220 = uStack_180;
  uStack_280 = 0;
  uStack_390 = 0;
  uStack_210 = uStack_170;
  uStack_268 = uStack_1c8;
  uStack_270 = uStack_1d0;
  uStack_258 = uStack_1b8;
  uStack_260 = uStack_1c0;
  uStack_248 = uStack_1a8;
  uStack_250 = uStack_1b0;
  uStack_238 = uStack_198;
  uStack_240 = uStack_1a0;
  uStack_1e0 = 0;
  uStack_3b0 = uVar9;
  uStack_3a8 = uVar8;
  uStack_3a0 = param_4;
  uStack_398 = param_5;
  uStack_2a8 = uVar4;
  uStack_2a0 = uVar9;
  uStack_298 = uVar8;
  uStack_290 = param_4;
  uStack_288 = param_5;
  uStack_208 = uVar4;
  uStack_200 = uVar9;
  uStack_1f8 = uVar8;
  uStack_1f0 = param_4;
  uStack_1e8 = param_5;
  FUN_00048a54(&uStack_310,&uStack_120,0xae7bd8,&UNK_007ced70);
  FUN_00048988(&uStack_270,0xae7bd8,&UNK_007ced70);
  uStack_168 = uStack_3b8;
  uStack_170 = uStack_3c0;
  uStack_158 = uStack_3a8;
  uStack_160 = uStack_3b0;
  uStack_148 = uStack_398;
  uStack_150 = uStack_3a0;
  uStack_140 = CONCAT71(uStack_38f,uStack_390);
  uStack_1a8 = uStack_3f8;
  uStack_1b0 = uStack_400;
  uStack_198 = uStack_3e8;
  uStack_1a0 = uStack_3f0;
  uStack_188 = uStack_3d8;
  uStack_190 = uStack_3e0;
  uStack_178 = uStack_3c8;
  uStack_180 = uStack_3d0;
  uStack_1c8 = uStack_418;
  uStack_1d0 = uStack_420;
  uStack_1b8 = uStack_408;
  uStack_1c0 = uStack_410;
  lVar7 = 0xae7bb8;
  puStack_138 = puVar5;
  uStack_130 = (char)puVar6;
  func_0x000115a8(0xae7bb8,&UNK_007ced60);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x24));
  lVar7 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar7 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar7 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar7);
  puVar1[1] = 0x4040000000000000;
  *puVar1 = 0x4040000000000000;
  lVar7 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24)) = 0x100;
  param_1[0x11] = uStack_148;
  param_1[0x10] = uStack_150;
  param_1[0x13] = puStack_138;
  param_1[0x12] = uStack_140;
  *(undefined1 *)(param_1 + 0x14) = uStack_130;
  param_1[9] = uStack_188;
  param_1[8] = uStack_190;
  param_1[0xb] = uStack_178;
  param_1[10] = uStack_180;
  param_1[0xd] = uStack_168;
  param_1[0xc] = uStack_170;
  param_1[0xf] = uStack_158;
  param_1[0xe] = uStack_160;
  param_1[1] = uStack_1c8;
  *param_1 = uStack_1d0;
  param_1[3] = uStack_1b8;
  param_1[2] = uStack_1c0;
  param_1[5] = uStack_1a8;
  param_1[4] = uStack_1b0;
  param_1[7] = uStack_198;
  param_1[6] = uStack_1a0;
  uStack_b8 = uStack_3b8;
  uStack_c0 = uStack_3c0;
  uStack_a8 = uStack_3a8;
  uStack_b0 = uStack_3b0;
  uStack_98 = uStack_398;
  uStack_a0 = uStack_3a0;
  uStack_90 = CONCAT71(uStack_38f,uStack_390);
  uStack_f8 = uStack_3f8;
  uStack_100 = uStack_400;
  uStack_e8 = uStack_3e8;
  uStack_f0 = uStack_3f0;
  uStack_d8 = uStack_3d8;
  uStack_e0 = uStack_3e0;
  uStack_c8 = uStack_3c8;
  uStack_d0 = uStack_3d0;
  uStack_118 = uStack_418;
  uStack_120 = uStack_420;
  uStack_108 = uStack_408;
  uStack_110 = uStack_410;
  puStack_88 = puVar5;
  uStack_80 = (char)puVar6;
  FUN_00048a54(&uStack_1d0,auStack_4c8,0xae7bc8,&UNK_007ced68);
  FUN_00048988(&uStack_120,0xae7bc8,&UNK_007ced68);
  return;
}



/* Entry: 00045b40; end: 00045b97;  */

void FUN_00045b40(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  uVar1 = 0xae7b48;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_21,uVar1);
  (**(code **)(param_1 + 0x60))();
  return;
}



/* Entry: 00045b98; end: 00046267;  */

void FUN_00045b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,char *param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long lVar7;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long alStack_8c0 [34];
  long lStack_7b0;
  long lStack_7a8;
  long lStack_7a0;
  long lStack_798;
  long lStack_790;
  long lStack_788;
  long lStack_780;
  long lStack_778;
  long lStack_770;
  long lStack_768;
  long lStack_760;
  long lStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  long lStack_738;
  long lStack_730;
  long lStack_728;
  long lStack_720;
  long lStack_718;
  long lStack_710;
  undefined1 uStack_708;
  undefined7 uStack_707;
  long lStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  undefined1 uStack_6e0;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  undefined8 uStack_630;
  undefined1 uStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  undefined1 uStack_600;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  undefined1 uStack_588;
  undefined7 uStack_587;
  undefined1 uStack_580;
  undefined7 uStack_57f;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  undefined *puStack_518;
  undefined1 uStack_510;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  ulong uStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  undefined8 uStack_430;
  undefined *puStack_428;
  undefined1 uStack_420;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
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
  undefined1 uStack_290;
  undefined7 uStack_28f;
  long lStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  long lStack_248;
  long lStack_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined8 *puVar8;
  
  lVar7 = 0;
  alStack_8c0[4] = param_1;
  __s7SwiftUI11ColorSchemeOMa();
  alStack_8c0[1] = *(long *)(lVar7 + -8);
  alStack_8c0[2] = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(alStack_8c0[1] + 0x40));
  lVar15 = (long)alStack_8c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  alStack_8c0[0] = lVar15;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar15 = lVar15 - extraout_x12;
  lVar7 = 0xae7c38;
  func_0x000115a8(0xae7c38,&UNK_007cedc0);
  alStack_8c0[3] = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar14 = (long *)(lVar15 - extraout_x8_00);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  lStack_5e8 = 0;
  lStack_5e0 = CONCAT71(lStack_5e0._1_7_,1);
  lVar16 = *(long *)(param_6 + 0xa8);
  lVar12 = *(long *)(param_6 + 0xb0);
  lStack_5f0 = lVar7;
  FUN_0001393c(param_6 + 0x90,lVar16);
  (**(code **)(lVar12 + 0x28))();
  lStack_280 = 0x18b;
  uStack_278 = 0;
  lStack_270 = 0x402c000000000000;
  lStack_268 = 0x697966696e67616d;
  lStack_260 = -0x108c8c9e93989892;
  lStack_258 = 0x48;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_237 = 0x402c0000000000;
  uStack_230 = 0x4a;
  uStack_22f = 0;
  uStack_228 = 0;
  uStack_220 = 0x18b;
  uStack_218 = 0;
  uStack_210 = 0x402c000000000000;
  uStack_208 = 0x697966696e67616d;
  uStack_200 = 0xef7373616c67676e;
  uStack_1f8 = 0x48;
  uStack_1f0 = 0;
  uStack_1d8 = 0x402c000000000000;
  uStack_1d0 = 0x4a;
  uStack_1c8 = 0;
  lStack_248 = lVar16;
  lStack_240 = lVar12;
  lStack_1e8 = lVar16;
  lStack_1e0 = lVar12;
  FUN_00048a54(&lStack_280,&lStack_500,0xae7c80,&UNK_007cede8);
  puVar8 = &uStack_220;
  FUN_00048988(puVar8,0xae7c80,&UNK_007cede8);
  uVar6 = SUB81(puVar8,0);
  lStack_5a8 = CONCAT71(uStack_24f,uStack_250);
  lStack_5b0 = lStack_258;
  lStack_5b8 = lStack_260;
  lStack_5a0 = lStack_248;
  uStack_590 = uStack_238;
  lStack_598 = lStack_240;
  uStack_587 = uStack_22f;
  uStack_580 = uStack_228;
  uStack_58f = uStack_237;
  uStack_588 = uStack_230;
  lStack_5d0 = CONCAT71(uStack_277,uStack_278);
  lStack_5d8 = lStack_280;
  lStack_5c0 = lStack_268;
  lStack_5c8 = lStack_270;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  lStack_178 = lStack_5a8;
  lStack_180 = lStack_5b0;
  lStack_168 = lStack_598;
  lStack_170 = lStack_5a0;
  uStack_158 = CONCAT71(uStack_587,uStack_588);
  uStack_160 = CONCAT71(uStack_58f,uStack_590);
  uStack_150 = uStack_580;
  lStack_1b8 = lStack_5e8;
  lStack_1c0 = lStack_5f0;
  lStack_1a8 = lStack_5d8;
  lStack_1b0 = lStack_5e0;
  lStack_198 = lStack_5c8;
  lStack_1a0 = lStack_5d0;
  lStack_188 = lStack_5b8;
  lStack_190 = lStack_5c0;
  lVar7 = lStack_5c0;
  FUN_00048a54(&lStack_1c0,&lStack_500,0xae7c78,&UNK_007cede0);
  lVar16 = 0x4028000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lStack_488 = CONCAT71(lStack_488._1_7_,uVar6);
  uStack_460 = uStack_460 & 0xffffffffffffff00;
  lStack_4b8 = lStack_178;
  lStack_4c0 = lStack_180;
  lStack_4a8 = lStack_168;
  lStack_4b0 = lStack_170;
  uStack_498 = uStack_158;
  uStack_4a0 = uStack_160;
  uStack_490 = CONCAT71(uStack_490._1_7_,uStack_150);
  lStack_4f8 = lStack_1b8;
  lStack_500 = lStack_1c0;
  lStack_4e8 = lStack_1a8;
  lStack_4f0 = lStack_1b0;
  lStack_4d8 = lStack_198;
  lStack_4e0 = lStack_1a0;
  lStack_4c8 = lStack_188;
  lStack_4d0 = lStack_190;
  plVar9 = &lStack_5f0;
  lStack_480 = lVar16;
  lStack_478 = lVar7;
  lStack_470 = param_4;
  lStack_468 = param_5;
  FUN_00048988(plVar9,0xae7c78,&UNK_007cede0);
  uVar6 = SUB81(plVar9,0);
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  lStack_b8 = lStack_478;
  lStack_c0 = lStack_480;
  lStack_a8 = lStack_468;
  lStack_b0 = lStack_470;
  uStack_a0 = (undefined1)uStack_460;
  lStack_f8 = lStack_4b8;
  lStack_100 = lStack_4c0;
  lStack_e8 = lStack_4a8;
  lStack_f0 = lStack_4b0;
  uStack_d8 = uStack_498;
  uStack_e0 = uStack_4a0;
  lStack_c8 = lStack_488;
  uStack_d0 = uStack_490;
  lStack_138 = lStack_4f8;
  lStack_140 = lStack_500;
  lStack_128 = lStack_4e8;
  lStack_130 = lStack_4f0;
  lStack_118 = lStack_4d8;
  lStack_120 = lStack_4e0;
  lStack_108 = lStack_4c8;
  lStack_110 = lStack_4d0;
  lVar7 = lStack_4e0;
  FUN_00048a54(&lStack_140,&lStack_5f0,0xae7c68,&UNK_007cedd8);
  lVar16 = 0x4018000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lStack_388 = lStack_b8;
  lStack_390 = lStack_c0;
  lStack_378 = lStack_a8;
  lStack_380 = lStack_b0;
  uStack_370 = uStack_a0;
  lStack_3c8 = lStack_f8;
  lStack_3d0 = lStack_100;
  lStack_3b8 = lStack_e8;
  lStack_3c0 = lStack_f0;
  uStack_3a8 = uStack_d8;
  uStack_3b0 = uStack_e0;
  lStack_398 = lStack_c8;
  uStack_3a0 = uStack_d0;
  lStack_408 = lStack_138;
  lStack_410 = lStack_140;
  lStack_3f8 = lStack_128;
  lStack_400 = lStack_130;
  lStack_3e8 = lStack_118;
  lStack_3f0 = lStack_120;
  lStack_3d8 = lStack_108;
  lStack_3e0 = lStack_110;
  FUN_00048988(&lStack_500,0xae7c68,&UNK_007cedd8);
  if (*param_6 == '\x01') {
    __s23ExtensionsStickerPicker12PillTagsViewVMa();
    func_0x00047a34(lVar15);
    lVar4 = alStack_8c0[2];
    lVar3 = alStack_8c0[1];
    lVar12 = alStack_8c0[0];
    (**(code **)(alStack_8c0[1] + 0x68))
              (alStack_8c0[0],*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO4darkyA2CmFWC_00999150,
               alStack_8c0[2]);
    __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(lVar15,lVar12);
    pcVar13 = *(code **)(lVar3 + 8);
    (*pcVar13)(lVar12,lVar4);
    (*pcVar13)(lVar15,lVar4);
  }
  puVar10 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar11 = puVar10;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  lStack_710 = CONCAT71(uStack_36f,uStack_370);
  uStack_630 = CONCAT71(uStack_36f,uStack_370);
  lStack_728 = lStack_388;
  lStack_730 = lStack_390;
  lStack_718 = lStack_378;
  lStack_720 = lStack_380;
  lStack_768 = lStack_3c8;
  lStack_770 = lStack_3d0;
  lStack_758 = lStack_3b8;
  lStack_760 = lStack_3c0;
  uStack_748 = uStack_3a8;
  uStack_750 = uStack_3b0;
  lStack_738 = lStack_398;
  uStack_740 = uStack_3a0;
  lStack_7a8 = lStack_408;
  lStack_7b0 = lStack_410;
  lStack_798 = lStack_3f8;
  lStack_7a0 = lStack_400;
  lStack_788 = lStack_3e8;
  lStack_790 = lStack_3f0;
  lStack_778 = lStack_3d8;
  lStack_780 = lStack_3e0;
  uStack_2f8 = uStack_3a8;
  uStack_300 = uStack_3b0;
  lStack_2e8 = lStack_398;
  uStack_2f0 = uStack_3a0;
  lStack_2d8 = lStack_388;
  lStack_2e0 = lStack_390;
  lStack_2c8 = lStack_378;
  lStack_2d0 = lStack_380;
  lStack_338 = lStack_3e8;
  lStack_340 = lStack_3f0;
  lStack_328 = lStack_3d8;
  lStack_330 = lStack_3e0;
  lStack_318 = lStack_3c8;
  lStack_320 = lStack_3d0;
  lStack_308 = lStack_3b8;
  lStack_310 = lStack_3c0;
  lStack_358 = lStack_408;
  lStack_360 = lStack_410;
  lStack_348 = lStack_3f8;
  lStack_350 = lStack_400;
  lStack_2b8 = CONCAT71(uStack_707,uVar6);
  lStack_648 = lStack_388;
  lStack_650 = lStack_390;
  lStack_638 = lStack_378;
  lStack_640 = lStack_380;
  lStack_688 = lStack_3c8;
  lStack_690 = lStack_3d0;
  lStack_678 = lStack_3b8;
  lStack_680 = lStack_3c0;
  uStack_668 = uStack_3a8;
  uStack_670 = uStack_3b0;
  lStack_658 = lStack_398;
  uStack_660 = uStack_3a0;
  lStack_6c8 = lStack_408;
  lStack_6d0 = lStack_410;
  lStack_6b8 = lStack_3f8;
  lStack_6c0 = lStack_400;
  uStack_6e0 = 0;
  uStack_290 = 0;
  lStack_6a8 = lStack_3e8;
  lStack_6b0 = lStack_3f0;
  lStack_698 = lStack_3d8;
  lStack_6a0 = lStack_3e0;
  uStack_600 = 0;
  uStack_708 = uVar6;
  lStack_700 = lVar16;
  lStack_6f8 = lVar7;
  lStack_6f0 = param_4;
  lStack_6e8 = param_5;
  uStack_628 = uVar6;
  lStack_620 = lVar16;
  lStack_618 = lVar7;
  lStack_610 = param_4;
  lStack_608 = param_5;
  lStack_2c0 = lStack_710;
  lStack_2b0 = lVar16;
  lStack_2a8 = lVar7;
  lStack_2a0 = param_4;
  lStack_298 = param_5;
  FUN_00048a54(&lStack_7b0,&lStack_500,0xae7c58,&UNK_007cedd0);
  FUN_00048988(&lStack_6d0,0xae7c58,&UNK_007cedd0);
  lStack_548 = lStack_2b8;
  lStack_550 = lStack_2c0;
  lStack_538 = lStack_2a8;
  lStack_540 = lStack_2b0;
  lStack_528 = lStack_298;
  lStack_530 = lStack_2a0;
  lStack_520 = CONCAT71(uStack_28f,uStack_290);
  uStack_588 = (undefined1)uStack_2f8;
  uStack_587 = (undefined7)((ulong)uStack_2f8 >> 8);
  uStack_590 = (undefined1)uStack_300;
  uStack_58f = (undefined7)((ulong)uStack_300 >> 8);
  lStack_578 = lStack_2e8;
  uStack_580 = (undefined1)uStack_2f0;
  uStack_57f = (undefined7)((ulong)uStack_2f0 >> 8);
  lStack_568 = lStack_2d8;
  lStack_570 = lStack_2e0;
  lStack_558 = lStack_2c8;
  lStack_560 = lStack_2d0;
  lStack_5c8 = lStack_338;
  lStack_5d0 = lStack_340;
  lStack_5b8 = lStack_328;
  lStack_5c0 = lStack_330;
  lStack_5a8 = lStack_318;
  lStack_5b0 = lStack_320;
  lStack_598 = lStack_308;
  lStack_5a0 = lStack_310;
  puVar8 = (undefined8 *)((long)plVar14 + (long)*(int *)(alStack_8c0[3] + 0x24));
  lStack_5e8 = lStack_358;
  lStack_5f0 = lStack_360;
  lStack_5d8 = lStack_348;
  lStack_5e0 = lStack_350;
  lVar7 = 0;
  puStack_518 = puVar10;
  uStack_510 = (char)puVar11;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar2 = *(int *)(lVar7 + 0x14);
  uVar1 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar7 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x68))((long)puVar8 + (long)iVar2,uVar1,lVar7);
  puVar8[1] = 0x4040000000000000;
  *puVar8 = 0x4040000000000000;
  lVar7 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x24)) = 0x100;
  puVar5 = puStack_518;
  lVar16 = lStack_520;
  lVar7 = lStack_530;
  plVar14[0x19] = lStack_528;
  plVar14[0x18] = lVar7;
  plVar14[0x1b] = (long)puVar5;
  plVar14[0x1a] = lVar16;
  *(undefined1 *)(plVar14 + 0x1c) = uStack_510;
  lVar12 = lStack_558;
  lVar16 = lStack_560;
  lVar7 = lStack_570;
  plVar14[0x11] = lStack_568;
  plVar14[0x10] = lVar7;
  plVar14[0x13] = lVar12;
  plVar14[0x12] = lVar16;
  lVar12 = lStack_538;
  lVar16 = lStack_540;
  lVar7 = lStack_550;
  plVar14[0x15] = lStack_548;
  plVar14[0x14] = lVar7;
  plVar14[0x17] = lVar12;
  plVar14[0x16] = lVar16;
  lVar12 = lStack_598;
  lVar16 = lStack_5a0;
  lVar7 = lStack_5b0;
  plVar14[9] = lStack_5a8;
  plVar14[8] = lVar7;
  plVar14[0xb] = lVar12;
  plVar14[10] = lVar16;
  lVar12 = lStack_578;
  lVar7 = CONCAT71(uStack_58f,uStack_590);
  lVar16 = CONCAT71(uStack_57f,uStack_580);
  plVar14[0xd] = CONCAT71(uStack_587,uStack_588);
  plVar14[0xc] = lVar7;
  plVar14[0xf] = lVar12;
  plVar14[0xe] = lVar16;
  lVar12 = lStack_5d8;
  lVar16 = lStack_5e0;
  lVar7 = lStack_5f0;
  plVar14[1] = lStack_5e8;
  *plVar14 = lVar7;
  plVar14[3] = lVar12;
  plVar14[2] = lVar16;
  lVar12 = lStack_5b8;
  lVar16 = lStack_5c0;
  lVar7 = lStack_5d0;
  plVar14[5] = lStack_5c8;
  plVar14[4] = lVar7;
  plVar14[7] = lVar12;
  plVar14[6] = lVar16;
  lStack_458 = lStack_2b8;
  uStack_460 = lStack_2c0;
  lStack_448 = lStack_2a8;
  lStack_450 = lStack_2b0;
  lStack_438 = lStack_298;
  lStack_440 = lStack_2a0;
  uStack_430 = CONCAT71(uStack_28f,uStack_290);
  uStack_498 = uStack_2f8;
  uStack_4a0 = uStack_300;
  lStack_488 = lStack_2e8;
  uStack_490 = uStack_2f0;
  lStack_478 = lStack_2d8;
  lStack_480 = lStack_2e0;
  lStack_468 = lStack_2c8;
  lStack_470 = lStack_2d0;
  lStack_4d8 = lStack_338;
  lStack_4e0 = lStack_340;
  lStack_4c8 = lStack_328;
  lStack_4d0 = lStack_330;
  lStack_4b8 = lStack_318;
  lStack_4c0 = lStack_320;
  lStack_4a8 = lStack_308;
  lStack_4b0 = lStack_310;
  lStack_4f8 = lStack_358;
  lStack_500 = lStack_360;
  lStack_4e8 = lStack_348;
  lStack_4f0 = lStack_350;
  puStack_428 = puVar10;
  uStack_420 = (char)puVar11;
  FUN_00048a54(&lStack_5f0,alStack_8c0 + 5,0xae7c48,&UNK_007cedc8);
  FUN_00048988(&lStack_500,0xae7c48,&UNK_007cedc8);
  FUN_00046268(alStack_8c0[4]);
  FUN_00048988(plVar14,0xae7c38,&UNK_007cedc0);
  return;
}



/* Entry: 00046268; end: 000469f3;  */

void FUN_00046268(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x1a,0,0);
  if (iVar1 == 0) {
    lVar2 = 0xae7c88;
    func_0x000115a8(0xae7c88,&UNK_007cedf0);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar3 = 0xae7c38;
    FUN_00048a54();
    _swift_storeEnumTagMultiPayload(&stack0xffffffffffffffa0 + -extraout_x8_00,lVar2,1);
    func_0x000115a8(0xae7c38,&UNK_007cedc0);
    uVar4 = uVar3;
    func_0x000483ac();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,&stack0xffffffffffffffa0 + -extraout_x8_00,PTR___s7SwiftUI7AnyViewVN_00999740
               ,uVar3,PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730,uVar4);
  }
  else {
    lVar2 = 0xae7c90;
    func_0x000115a8(0xae7c90,&UNK_007cedf8);
    lVar7 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    uVar8 = lVar7 + 0xfU & 0xfffffffffffffff0;
    puVar5 = &stack0xffffffffffffffa0 + -uVar8;
    FUN_00048a54();
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar7 = (long)puVar5 - uVar8;
    FUN_00048a54(puVar5,lVar7,0xae7c90,&UNK_007cedf8);
    uVar3 = 0xae7c98;
    func_0x000488d8(0xae7c98,0xae7c90,&UNK_007cedf8,0x483ac);
    __s7SwiftUI7AnyViewVyACxcAA0D0RzlufC(lVar7,lVar2,uVar3);
    lVar2 = 0xae7c88;
    func_0x000115a8(0xae7c88,&UNK_007cedf0);
    (*(code *)PTR____chkstk_darwin_00999f48)
              (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    plVar6 = (long *)(puVar5 + -extraout_x8);
    *plVar6 = lVar7;
    _swift_storeEnumTagMultiPayload(plVar6);
    uVar3 = 0xae7c38;
    func_0x000115a8(0xae7c38,&UNK_007cedc0);
    uVar4 = uVar3;
    func_0x000483ac();
    __s7SwiftUI19_ConditionalContentVA2A4ViewRzAaDR_rlE7storageACyxq_GAC7StorageOyxq__G_tcfC
              (param_1,plVar6,PTR___s7SwiftUI7AnyViewVN_00999740,uVar3,
               PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730,uVar4);
    FUN_00048988(puVar5,0xae7c90,&UNK_007cedf8);
  }
  return;
}



/* Entry: 000469f4; end: 00046adf;  */

void FUN_000469f4(long param_1)

{
  undefined8 uVar1;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  long lStack_40;
  
  uStack_80 = *(ulong *)(param_1 + 0x30);
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  lStack_70 = CONCAT71(lStack_70._1_7_,*(undefined1 *)(param_1 + 0x40));
  uVar1 = 0xae7b48;
  lStack_40 = param_1;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_58);
  if ((char)uStack_58 == '\x01') {
    uStack_58 = 0;
    __s7SwiftUI11TransactionV18disablesAnimationsSbvs(1);
    uVar1 = uStack_58;
    uStack_68 = 0x489c8;
    puStack_60 = auStack_50;
    lStack_70 = param_1;
    __s7SwiftUI15withTransactionyxAA0D0V_xyKXEtKlF
              (uStack_58,FUN_00048aa0,&uStack_80,PTR___sytN_0099b8e0 + 8);
    _swift_release(uVar1);
  }
  else {
    uStack_80 = uStack_80 & 0xffffffffffffff00;
    __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_80,uVar1);
    (**(code **)(param_1 + 0x70))();
  }
  return;
}



/* Entry: 00046ae0; end: 00046aeb;  */

void FUN_00046ae0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000485b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_000469f4(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 00046aec; end: 00046f37;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00046aec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_5c0;
  undefined8 auStack_5b8 [19];
  undefined1 auStack_520 [16];
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
  undefined1 uStack_4b0;
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
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 uStack_410;
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
  undefined1 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
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
  undefined1 uStack_2c0;
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
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
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
  undefined1 uStack_140;
  undefined7 uStack_13f;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  
  lVar10 = 0xae7bb8;
  func_0x000115a8(0xae7bb8,&UNK_007ced60);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar11 = (undefined8 *)((long)&uStack_5c0 + lVar4);
  uVar7 = 9;
  (**(code **)(param_6 + 0x50))();
  uStack_1d0 = (undefined1)uVar7;
  uStack_1e0 = 0x66;
  if ((uVar7 & 1) == 0) {
    uStack_1e0 = 0x48;
  }
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar12 = 0x4028000000000000;
  uVar6 = uStack_1d0;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_1a8 = 0;
  uStack_208 = 0x16;
  uStack_200 = 0;
  uStack_1f8 = 0x4031000000000000;
  uStack_1f0 = 0xd000000000000033;
  uStack_1e8 = 0x80000000008b5f50;
  uStack_1d8 = 1;
  uStack_1c8 = uVar12;
  uStack_1c0 = param_3;
  uStack_1b8 = param_4;
  uStack_1b0 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_4c8 = uStack_1c0;
  uStack_4d0 = uStack_1c8;
  uStack_4b8 = uStack_1b0;
  uStack_4c0 = uStack_1b8;
  uStack_4b0 = uStack_1a8;
  uStack_508 = CONCAT71(uStack_1ff,uStack_200);
  uStack_510 = uStack_208;
  uStack_4f8 = uStack_1f0;
  uStack_500 = uStack_1f8;
  uStack_4d8 = CONCAT71(uStack_1cf,uStack_1d0);
  uStack_4e0 = CONCAT71(uStack_1d7,uStack_1d8);
  uStack_4e8 = uStack_1e0;
  uStack_4f0 = uStack_1e8;
  uVar12 = uStack_1e8;
  FUN_00048a54(&uStack_510,&uStack_2b0,0xae7be8,&UNK_007cf050);
  uVar13 = 0x4018000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_158 = uStack_4c8;
  uStack_160 = uStack_4d0;
  uStack_148 = uStack_4b8;
  uStack_150 = uStack_4c0;
  uStack_140 = uStack_4b0;
  uStack_198 = uStack_508;
  uStack_1a0 = uStack_510;
  uStack_188 = uStack_4f8;
  uStack_190 = uStack_500;
  uStack_178 = uStack_4e8;
  uStack_180 = uStack_4f0;
  uStack_168 = uStack_4d8;
  uStack_170 = uStack_4e0;
  FUN_00048988(&uStack_208,0xae7be8,&UNK_007cf050);
  uVar8 = 9;
  FUN_00047080();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  uVar9 = uVar8;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_440 = CONCAT71(uStack_13f,uStack_140);
  uStack_3a0 = CONCAT71(uStack_13f,uStack_140);
  uStack_458 = uStack_158;
  uStack_460 = uStack_160;
  uStack_448 = uStack_148;
  uStack_450 = uStack_150;
  uStack_498 = uStack_198;
  uStack_4a0 = uStack_1a0;
  uStack_488 = uStack_188;
  uStack_490 = uStack_190;
  uStack_478 = uStack_178;
  uStack_480 = uStack_180;
  uStack_468 = uStack_168;
  uStack_470 = uStack_170;
  uStack_c8 = CONCAT71(uStack_437,uVar6);
  uStack_128 = uStack_198;
  uStack_130 = uStack_1a0;
  uStack_118 = uStack_188;
  uStack_120 = uStack_190;
  uStack_d8 = uStack_148;
  uStack_e0 = uStack_150;
  uStack_e8 = uStack_158;
  uStack_f0 = uStack_160;
  uStack_f8 = uStack_168;
  uStack_100 = uStack_170;
  uStack_108 = uStack_178;
  uStack_110 = uStack_180;
  uStack_3b8 = uStack_158;
  uStack_3c0 = uStack_160;
  uStack_3a8 = uStack_148;
  uStack_3b0 = uStack_150;
  uStack_410 = 0;
  uStack_a0 = 0;
  uStack_3f8 = uStack_198;
  uStack_400 = uStack_1a0;
  uStack_3e8 = uStack_188;
  uStack_3f0 = uStack_190;
  uStack_3d8 = uStack_178;
  uStack_3e0 = uStack_180;
  uStack_3c8 = uStack_168;
  uStack_3d0 = uStack_170;
  uStack_370 = 0;
  uStack_438 = uVar6;
  uStack_430 = uVar13;
  uStack_428 = uVar12;
  uStack_420 = param_4;
  uStack_418 = param_5;
  uStack_398 = uVar6;
  uStack_390 = uVar13;
  uStack_388 = uVar12;
  uStack_380 = param_4;
  uStack_378 = param_5;
  uStack_d0 = uStack_440;
  uStack_c0 = uVar13;
  uStack_b8 = uVar12;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  FUN_00048a54(&uStack_4a0,&uStack_2b0,0xae7bd8,&UNK_007ced70);
  FUN_00048988(&uStack_400,0xae7bd8,&UNK_007ced70);
  uStack_2f8 = uStack_c8;
  uStack_300 = uStack_d0;
  uStack_2e8 = uStack_b8;
  uStack_2f0 = uStack_c0;
  uStack_2d8 = uStack_a8;
  uStack_2e0 = uStack_b0;
  uStack_2d0 = CONCAT71(uStack_9f,uStack_a0);
  uStack_338 = uStack_108;
  uStack_340 = uStack_110;
  uStack_328 = uStack_f8;
  uStack_330 = uStack_100;
  uStack_318 = uStack_e8;
  uStack_320 = uStack_f0;
  uStack_308 = uStack_d8;
  uStack_310 = uStack_e0;
  puVar1 = (undefined8 *)((long)puVar11 + (long)*(int *)(lVar10 + 0x24));
  uStack_358 = uStack_128;
  uStack_360 = uStack_130;
  uStack_348 = uStack_118;
  uStack_350 = uStack_120;
  lVar10 = 0;
  uStack_2c8 = uVar8;
  uStack_2c0 = (char)uVar9;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar10 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar10 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar10);
  puVar1[1] = 0x4040000000000000;
  *puVar1 = 0x4040000000000000;
  lVar10 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) = 0x100;
  uVar5 = uStack_2c8;
  uVar13 = uStack_2d0;
  uVar12 = uStack_2e0;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x80U) = uStack_2d8;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x78U) = uVar12;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x90U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x88U) = uVar13;
  auStack_520[lVar4] = uStack_2c0;
  uVar5 = uStack_308;
  uVar13 = uStack_310;
  uVar12 = uStack_320;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x40U) = uStack_318;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x38U) = uVar12;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x50U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x48U) = uVar13;
  uVar5 = uStack_2e8;
  uVar13 = uStack_2f0;
  uVar12 = uStack_300;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x60U) = uStack_2f8;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x58U) = uVar12;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x70U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x68U) = uVar13;
  uVar5 = uStack_348;
  uVar13 = uStack_350;
  uVar12 = uStack_360;
  *(undefined8 *)((long)auStack_5b8 + lVar4) = uStack_358;
  *puVar11 = uVar12;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x10U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 8U) = uVar13;
  uVar5 = uStack_328;
  uVar13 = uStack_330;
  uVar12 = uStack_340;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x20U) = uStack_338;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x18U) = uVar12;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x30U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x28U) = uVar13;
  uStack_248 = uStack_c8;
  uStack_250 = uStack_d0;
  uStack_238 = uStack_b8;
  uStack_240 = uStack_c0;
  uStack_228 = uStack_a8;
  uStack_230 = uStack_b0;
  uStack_220 = CONCAT71(uStack_9f,uStack_a0);
  uStack_288 = uStack_108;
  uStack_290 = uStack_110;
  uStack_278 = uStack_f8;
  uStack_280 = uStack_100;
  uStack_268 = uStack_e8;
  uStack_270 = uStack_f0;
  uStack_258 = uStack_d8;
  uStack_260 = uStack_e0;
  uStack_2a8 = uStack_128;
  uStack_2b0 = uStack_130;
  uStack_298 = uStack_118;
  uStack_2a0 = uStack_120;
  uStack_218 = uVar8;
  uStack_210 = (char)uVar9;
  FUN_00048a54(&uStack_360,auStack_5b8,0xae7bc8,&UNK_007ced68);
  FUN_00048988(&uStack_2b0,0xae7bc8,&UNK_007ced68);
  func_0x000464ec(param_1);
  FUN_00048988(puVar11,0xae7bb8,&UNK_007ced60);
  return;
}



/* Entry: 00046f38; end: 00046f63;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00046f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_5c0;
  undefined8 auStack_5b8 [19];
  undefined1 auStack_520 [16];
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
  undefined1 uStack_4b0;
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
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined1 uStack_410;
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
  undefined1 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined1 uStack_370;
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
  undefined1 uStack_2c0;
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
  undefined1 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 uStack_1a8;
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
  undefined1 uStack_140;
  undefined7 uStack_13f;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar10 = 0xae7bb8;
  func_0x000115a8(0xae7bb8,&UNK_007ced60);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar12 = (undefined8 *)((long)&uStack_5c0 + lVar4);
  uVar7 = 9;
  (**(code **)(lVar11 + 0x50))();
  uStack_1d0 = (undefined1)uVar7;
  uStack_1e0 = 0x66;
  if ((uVar7 & 1) == 0) {
    uStack_1e0 = 0x48;
  }
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar13 = 0x4028000000000000;
  uVar6 = uStack_1d0;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_1a8 = 0;
  uStack_208 = 0x16;
  uStack_200 = 0;
  uStack_1f8 = 0x4031000000000000;
  uStack_1f0 = 0xd000000000000033;
  uStack_1e8 = 0x80000000008b5f50;
  uStack_1d8 = 1;
  uStack_1c8 = uVar13;
  uStack_1c0 = param_3;
  uStack_1b8 = param_4;
  uStack_1b0 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_4c8 = uStack_1c0;
  uStack_4d0 = uStack_1c8;
  uStack_4b8 = uStack_1b0;
  uStack_4c0 = uStack_1b8;
  uStack_4b0 = uStack_1a8;
  uStack_508 = CONCAT71(uStack_1ff,uStack_200);
  uStack_510 = uStack_208;
  uStack_4f8 = uStack_1f0;
  uStack_500 = uStack_1f8;
  uStack_4d8 = CONCAT71(uStack_1cf,uStack_1d0);
  uStack_4e0 = CONCAT71(uStack_1d7,uStack_1d8);
  uStack_4e8 = uStack_1e0;
  uStack_4f0 = uStack_1e8;
  uVar13 = uStack_1e8;
  FUN_00048a54(&uStack_510,&uStack_2b0,0xae7be8,&UNK_007cf050);
  uVar14 = 0x4018000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_158 = uStack_4c8;
  uStack_160 = uStack_4d0;
  uStack_148 = uStack_4b8;
  uStack_150 = uStack_4c0;
  uStack_140 = uStack_4b0;
  uStack_198 = uStack_508;
  uStack_1a0 = uStack_510;
  uStack_188 = uStack_4f8;
  uStack_190 = uStack_500;
  uStack_178 = uStack_4e8;
  uStack_180 = uStack_4f0;
  uStack_168 = uStack_4d8;
  uStack_170 = uStack_4e0;
  FUN_00048988(&uStack_208,0xae7be8,&UNK_007cf050);
  uVar8 = 9;
  FUN_00047080();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  uVar9 = uVar8;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_440 = CONCAT71(uStack_13f,uStack_140);
  uStack_3a0 = CONCAT71(uStack_13f,uStack_140);
  uStack_458 = uStack_158;
  uStack_460 = uStack_160;
  uStack_448 = uStack_148;
  uStack_450 = uStack_150;
  uStack_498 = uStack_198;
  uStack_4a0 = uStack_1a0;
  uStack_488 = uStack_188;
  uStack_490 = uStack_190;
  uStack_478 = uStack_178;
  uStack_480 = uStack_180;
  uStack_468 = uStack_168;
  uStack_470 = uStack_170;
  uStack_c8 = CONCAT71(uStack_437,uVar6);
  uStack_128 = uStack_198;
  uStack_130 = uStack_1a0;
  uStack_118 = uStack_188;
  uStack_120 = uStack_190;
  uStack_d8 = uStack_148;
  uStack_e0 = uStack_150;
  uStack_e8 = uStack_158;
  uStack_f0 = uStack_160;
  uStack_f8 = uStack_168;
  uStack_100 = uStack_170;
  uStack_108 = uStack_178;
  uStack_110 = uStack_180;
  uStack_3b8 = uStack_158;
  uStack_3c0 = uStack_160;
  uStack_3a8 = uStack_148;
  uStack_3b0 = uStack_150;
  uStack_410 = 0;
  uStack_a0 = 0;
  uStack_3f8 = uStack_198;
  uStack_400 = uStack_1a0;
  uStack_3e8 = uStack_188;
  uStack_3f0 = uStack_190;
  uStack_3d8 = uStack_178;
  uStack_3e0 = uStack_180;
  uStack_3c8 = uStack_168;
  uStack_3d0 = uStack_170;
  uStack_370 = 0;
  uStack_438 = uVar6;
  uStack_430 = uVar14;
  uStack_428 = uVar13;
  uStack_420 = param_4;
  uStack_418 = param_5;
  uStack_398 = uVar6;
  uStack_390 = uVar14;
  uStack_388 = uVar13;
  uStack_380 = param_4;
  uStack_378 = param_5;
  uStack_d0 = uStack_440;
  uStack_c0 = uVar14;
  uStack_b8 = uVar13;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  FUN_00048a54(&uStack_4a0,&uStack_2b0,0xae7bd8,&UNK_007ced70);
  FUN_00048988(&uStack_400,0xae7bd8,&UNK_007ced70);
  uStack_2f8 = uStack_c8;
  uStack_300 = uStack_d0;
  uStack_2e8 = uStack_b8;
  uStack_2f0 = uStack_c0;
  uStack_2d8 = uStack_a8;
  uStack_2e0 = uStack_b0;
  uStack_2d0 = CONCAT71(uStack_9f,uStack_a0);
  uStack_338 = uStack_108;
  uStack_340 = uStack_110;
  uStack_328 = uStack_f8;
  uStack_330 = uStack_100;
  uStack_318 = uStack_e8;
  uStack_320 = uStack_f0;
  uStack_308 = uStack_d8;
  uStack_310 = uStack_e0;
  puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar10 + 0x24));
  uStack_358 = uStack_128;
  uStack_360 = uStack_130;
  uStack_348 = uStack_118;
  uStack_350 = uStack_120;
  lVar10 = 0;
  uStack_2c8 = uVar8;
  uStack_2c0 = (char)uVar9;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar10 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar10 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar10);
  puVar1[1] = 0x4040000000000000;
  *puVar1 = 0x4040000000000000;
  lVar10 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) = 0x100;
  uVar5 = uStack_2c8;
  uVar14 = uStack_2d0;
  uVar13 = uStack_2e0;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x80U) = uStack_2d8;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x78U) = uVar13;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x90U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x88U) = uVar14;
  auStack_520[lVar4] = uStack_2c0;
  uVar5 = uStack_308;
  uVar14 = uStack_310;
  uVar13 = uStack_320;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x40U) = uStack_318;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x38U) = uVar13;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x50U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x48U) = uVar14;
  uVar5 = uStack_2e8;
  uVar14 = uStack_2f0;
  uVar13 = uStack_300;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x60U) = uStack_2f8;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x58U) = uVar13;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x70U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x68U) = uVar14;
  uVar5 = uStack_348;
  uVar14 = uStack_350;
  uVar13 = uStack_360;
  *(undefined8 *)((long)auStack_5b8 + lVar4) = uStack_358;
  *puVar12 = uVar13;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x10U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 8U) = uVar14;
  uVar5 = uStack_328;
  uVar14 = uStack_330;
  uVar13 = uStack_340;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x20U) = uStack_338;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x18U) = uVar13;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x30U) = uVar5;
  *(undefined8 *)((long)auStack_5b8 + lVar4 + 0x28U) = uVar14;
  uStack_248 = uStack_c8;
  uStack_250 = uStack_d0;
  uStack_238 = uStack_b8;
  uStack_240 = uStack_c0;
  uStack_228 = uStack_a8;
  uStack_230 = uStack_b0;
  uStack_220 = CONCAT71(uStack_9f,uStack_a0);
  uStack_288 = uStack_108;
  uStack_290 = uStack_110;
  uStack_278 = uStack_f8;
  uStack_280 = uStack_100;
  uStack_268 = uStack_e8;
  uStack_270 = uStack_f0;
  uStack_258 = uStack_d8;
  uStack_260 = uStack_e0;
  uStack_2a8 = uStack_128;
  uStack_2b0 = uStack_130;
  uStack_298 = uStack_118;
  uStack_2a0 = uStack_120;
  uStack_218 = uVar8;
  uStack_210 = (char)uVar9;
  FUN_00048a54(&uStack_360,auStack_5b8,0xae7bc8,&UNK_007ced68);
  FUN_00048988(&uStack_2b0,0xae7bc8,&UNK_007ced68);
  func_0x000464ec(param_1);
  FUN_00048988(puVar12,0xae7bb8,&UNK_007ced60);
  return;
}



/* Entry: 00046f64; end: 0004701b;  */

void FUN_00046f64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae7bc0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7bc8;
  FUN_00016c74(0xae7bc8,&UNK_007ced68);
  uVar2 = 0xae7bd0;
  func_0x00048868(0xae7bd0,0xae7bd8,&UNK_007ced70,FUN_0004701c);
  uVar3 = 0xae7910;
  func_0x00048520(0xae7910,0xae7918,&UNK_007cea00,
                  PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_009994a8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae7bc0 = puVar4;
  return;
}



/* Entry: 0004701c; end: 0004703f;  */

void FUN_0004701c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0xae7be8;
  if (puRam0000000000ae7be0 == (undefined *)0x0) {
    FUN_00016c74(0xae7be8,&UNK_007cf050);
    uVar2 = uVar1;
    FUN_00047040();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_00999278;
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    uStack_40 = uVar2;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1
               ,&uStack_40);
    puRam0000000000ae7be0 = puVar3;
  }
  return;
}



/* Entry: 00047040; end: 0004707f;  */

void FUN_00047040(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s23ExtensionsStickerPicker12SIGIconImageV7SwiftUI4ViewAAMc;
  _swift_getWitnessTable
            (&__s23ExtensionsStickerPicker12SIGIconImageV7SwiftUI4ViewAAMc,
             &__s23ExtensionsStickerPicker12SIGIconImageVN);
  puRam0000000000ae7bf0 = puVar1;
  return;
}



/* Entry: 00047080; end: 0004730f;  */

void FUN_00047080(ulong param_1)

{
  char cVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  char *unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  
  lVar2 = 0;
  __s7SwiftUI11ColorSchemeOMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar4 = (long)puVar3 - extraout_x12;
  cVar1 = *unaff_x20;
  (**(code **)(unaff_x20 + 0x50))();
  if ((cVar1 == '\x01') && ((param_1 & 1) == 0)) {
    __s23ExtensionsStickerPicker12PillTagsViewVMa();
    func_0x00047a34(lVar4);
    (**(code **)(lVar6 + 0x68))
              (puVar3,*(undefined4 *)PTR___s7SwiftUI11ColorSchemeO4darkyA2CmFWC_00999150,lVar2);
    __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(lVar4,puVar3);
    pcVar5 = *(code **)(lVar6 + 8);
    (*pcVar5)(puVar3,lVar2);
    (*pcVar5)(lVar4,lVar2);
  }
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_00ac2de0);
  func_0x007917e0();
                    /* WARNING: Could not recover jumptable at 0x0077aa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_0099adc0)();
  return;
}



/* Entry: 00047310; end: 0004740f;  */

void FUN_00047310(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 uStack_48;
  
  uStack_90 = *(ulong *)(param_1 + 0x30);
  uStack_48 = (undefined1)param_2;
  uStack_88 = *(undefined8 *)(param_1 + 0x38);
  lStack_80 = CONCAT71(lStack_80._1_7_,*(undefined1 *)(param_1 + 0x40));
  uVar1 = 0xae7b48;
  lStack_50 = param_1;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_68);
  if ((char)uStack_68 == '\x01') {
    uStack_68 = 0;
    __s7SwiftUI11TransactionV18disablesAnimationsSbvs(1);
    uVar1 = uStack_68;
    pcStack_78 = FUN_00048948;
    puStack_70 = auStack_60;
    lStack_80 = param_1;
    __s7SwiftUI15withTransactionyxAA0D0V_xyKXEtKlF
              (uStack_68,FUN_00048974,&uStack_90,PTR___sytN_0099b8e0 + 8);
    _swift_release(uVar1);
  }
  else {
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_90,uVar1);
    (**(code **)(param_1 + 0x80))(param_2);
  }
  return;
}



/* Entry: 00047410; end: 0004781f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00047410(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  ulong *puVar12;
  undefined8 uVar13;
  ulong uStack_530;
  ulong auStack_528 [17];
  undefined1 auStack_4a0 [16];
  ulong uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  ulong uStack_430;
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
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  ulong uStack_3a0;
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
  undefined1 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  ulong uStack_310;
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
  ulong uStack_288;
  undefined1 uStack_280;
  ulong uStack_270;
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
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined1 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  ulong uStack_120;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  
  lVar10 = 0xae78c8;
  uStack_530 = param_1;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar12 = (ulong *)((long)&uStack_530 + lVar4);
  uVar11 = *(undefined8 *)(param_6 + 0xa8);
  uVar13 = *(undefined8 *)(param_6 + 0xb0);
  lVar7 = param_6 + 0x90;
  FUN_0001393c(lVar7,uVar11);
  uVar8 = param_7;
  __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE5title3forSSAA7PillTagO_tF
            (param_7,uVar11,uVar13,lVar7);
  uVar9 = param_7;
  (**(code **)(param_6 + 0x50))();
  uStack_1b0 = (undefined1)uVar9;
  uStack_1c0 = 0x66;
  if ((uVar9 & 1) == 0) {
    uStack_1c0 = 0x48;
  }
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar13 = 0x4028000000000000;
  uVar6 = uStack_1b0;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_188 = 0;
  uStack_1c8 = 0x402c000000000000;
  uStack_1b8 = 1;
  uStack_1d8 = uVar8;
  uStack_1d0 = uVar11;
  uStack_1a8 = uVar13;
  uStack_1a0 = param_3;
  uStack_198 = param_4;
  uStack_190 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_468 = CONCAT71(uStack_1af,uStack_1b0);
  uStack_470 = CONCAT71(uStack_1b7,uStack_1b8);
  uStack_458 = uStack_1a0;
  uStack_460 = uStack_1a8;
  uStack_448 = uStack_190;
  uStack_450 = uStack_198;
  uStack_440 = uStack_188;
  uStack_488 = uStack_1d0;
  uStack_490 = uStack_1d8;
  uStack_478 = uStack_1c0;
  uStack_480 = uStack_1c8;
  uVar11 = uStack_1c8;
  FUN_00048a54(&uStack_490,&uStack_270,0xae7900,&UNK_007ce9f8);
  uVar13 = 0x4018000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_158 = uStack_468;
  uStack_160 = uStack_470;
  uStack_148 = uStack_458;
  uStack_150 = uStack_460;
  uStack_138 = uStack_448;
  uStack_140 = uStack_450;
  uStack_130 = uStack_440;
  uStack_178 = uStack_488;
  uStack_180 = uStack_490;
  uStack_168 = uStack_478;
  uStack_170 = uStack_480;
  FUN_00048988(&uStack_1d8,0xae7900,&UNK_007ce9f8);
  FUN_00047080();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  uVar9 = param_7;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_3e0 = CONCAT71(uStack_12f,uStack_130);
  uStack_350 = CONCAT71(uStack_12f,uStack_130);
  uStack_408 = uStack_158;
  uStack_410 = uStack_160;
  uStack_3f8 = uStack_148;
  uStack_400 = uStack_150;
  uStack_3e8 = uStack_138;
  uStack_3f0 = uStack_140;
  uStack_428 = uStack_178;
  uStack_430 = uStack_180;
  uStack_418 = uStack_168;
  uStack_420 = uStack_170;
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_c8 = CONCAT71(uStack_3d7,uVar6);
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_118 = uStack_178;
  uStack_120 = uStack_180;
  uStack_108 = uStack_168;
  uStack_110 = uStack_170;
  uStack_378 = uStack_158;
  uStack_380 = uStack_160;
  uStack_368 = uStack_148;
  uStack_370 = uStack_150;
  uStack_358 = uStack_138;
  uStack_360 = uStack_140;
  uStack_3b0 = 0;
  uStack_a0 = 0;
  uStack_398 = uStack_178;
  uStack_3a0 = uStack_180;
  uStack_388 = uStack_168;
  uStack_390 = uStack_170;
  uStack_320 = 0;
  uStack_3d8 = uVar6;
  uStack_3d0 = uVar13;
  uStack_3c8 = uVar11;
  uStack_3c0 = param_4;
  uStack_3b8 = param_5;
  uStack_348 = uVar6;
  uStack_340 = uVar13;
  uStack_338 = uVar11;
  uStack_330 = param_4;
  uStack_328 = param_5;
  uStack_d0 = uStack_3e0;
  uStack_c0 = uVar13;
  uStack_b8 = uVar11;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  FUN_00048a54(&uStack_430,&uStack_270,0xae78f0,&UNK_007ce9f0);
  FUN_00048988(&uStack_3a0,0xae78f0,&UNK_007ce9f0);
  uStack_2a8 = uStack_b8;
  uStack_2b0 = uStack_c0;
  uStack_298 = uStack_a8;
  uStack_2a0 = uStack_b0;
  uStack_290 = CONCAT71(uStack_9f,uStack_a0);
  uStack_2e8 = uStack_f8;
  uStack_2f0 = uStack_100;
  uStack_2d8 = uStack_e8;
  uStack_2e0 = uStack_f0;
  uStack_2c8 = uStack_d8;
  uStack_2d0 = uStack_e0;
  uStack_2b8 = uStack_c8;
  uStack_2c0 = uStack_d0;
  puVar1 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar10 + 0x24));
  uStack_308 = uStack_118;
  uStack_310 = uStack_120;
  uStack_2f8 = uStack_108;
  uStack_300 = uStack_110;
  lVar10 = 0;
  uStack_288 = param_7;
  uStack_280 = (char)uVar9;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar10 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar10 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar10);
  puVar1[1] = 0x4040000000000000;
  *puVar1 = 0x4040000000000000;
  lVar10 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) = 0x100;
  uVar5 = uStack_298;
  uVar13 = uStack_2a0;
  uVar11 = uStack_2b0;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x60U) = uStack_2a8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x58U) = uVar11;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x70U) = uVar5;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x68U) = uVar13;
  uVar11 = uStack_290;
  *(ulong *)((long)auStack_528 + lVar4 + 0x80U) = uStack_288;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x78U) = uVar11;
  auStack_4a0[lVar4] = uStack_280;
  uVar5 = uStack_2d8;
  uVar13 = uStack_2e0;
  uVar11 = uStack_2f0;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x20U) = uStack_2e8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x18U) = uVar11;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x30U) = uVar5;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x28U) = uVar13;
  uVar5 = uStack_2b8;
  uVar13 = uStack_2c0;
  uVar11 = uStack_2d0;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x40U) = uStack_2c8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x38U) = uVar11;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x50U) = uVar5;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x48U) = uVar13;
  uVar13 = uStack_2f8;
  uVar11 = uStack_300;
  uVar8 = uStack_310;
  *(undefined8 *)((long)auStack_528 + lVar4) = uStack_308;
  *puVar12 = uVar8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x10U) = uVar13;
  *(undefined8 *)((long)auStack_528 + lVar4 + 8U) = uVar11;
  uStack_208 = uStack_b8;
  uStack_210 = uStack_c0;
  uStack_1f8 = uStack_a8;
  uStack_200 = uStack_b0;
  uStack_1f0 = CONCAT71(uStack_9f,uStack_a0);
  uStack_248 = uStack_f8;
  uStack_250 = uStack_100;
  uStack_238 = uStack_e8;
  uStack_240 = uStack_f0;
  uStack_228 = uStack_d8;
  uStack_230 = uStack_e0;
  uStack_218 = uStack_c8;
  uStack_220 = uStack_d0;
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  uStack_258 = uStack_108;
  uStack_260 = uStack_110;
  uStack_1e8 = param_7;
  uStack_1e0 = (char)uVar9;
  FUN_00048a54(&uStack_310,auStack_528,0xae78e0,&UNK_007ce9e8);
  FUN_00048988(&uStack_270,0xae78e0,&UNK_007ce9e8);
  func_0x00046770(uStack_530);
  FUN_00048988(puVar12,0xae78c8,&UNK_007ce9e0);
  return;
}



/* Entry: 00047820; end: 00047c43;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_00047820(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  dword *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 auStack_70 [2];
  
  lVar1 = 0;
  __s7SwiftUI17EnvironmentValuesVMa();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)(lVar8 - extraout_x8_00);
  FUN_00048a54();
  puVar2 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,puVar9,lVar3);
  }
  else {
    uVar10 = *puVar9;
    __sSo13os_log_type_ta0A0E5faultABvgZ();
    puVar9 = puVar2;
    __s7SwiftUI3LogO013runtimeIssuesC0So9OS_os_logCvgZ();
    puVar4 = puVar9;
    _os_log_type_enabled();
    if ((int)puVar4 != 0) {
      pdVar5 = &MACH_HEADER.filetype;
      _swift_slowAlloc(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      _swift_slowAlloc(0x20,0xffffffffffffffff);
      *pdVar5 = 0x8200102;
      uVar7 = 0x414c52556e65704f;
      auStack_70[1] = uVar6;
      FUN_00047c44(0x414c52556e65704f,0xed00006e6f697463,auStack_70 + 1);
      *(undefined8 *)(pdVar5 + 1) = uVar7;
      __os_log_impl(0,puVar9,(uint)puVar2 & 0xff,
                    "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                    ,pdVar5,0xc);
      FUN_000485f8(uVar6);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      _swift_slowDealloc(pdVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    _objc_release(puVar9);
    __s7SwiftUI17EnvironmentValuesVACycfC(lVar8);
    _swift_getAtKeyPath(param_1,lVar8,uVar10);
    _swift_release(uVar10);
    (**(code **)(lVar11 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 00047c44; end: 00047d0b;  */

undefined * FUN_00047c44(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_00047d0c(&puStack_60,0,0,1,param_1,param_2);
  puVar1 = puStack_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    puStack_60 = param_1;
    puStack_48 = PTR___ss11_StringGutsVN_0099b460;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    puStack_60 = (undefined *)ppuVar2;
    puStack_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_000232c8(&puStack_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_000485f8(&puStack_60);
  return puVar1;
}



/* Entry: 00047d0c; end: 00047e1b;  */

void FUN_00047d0c(ulong *param_1,ulong param_2,long param_3,char param_4,ulong param_5,ulong param_6
                 )

{
  code *pcVar1;
  ulong uVar2;
  ulong uStack_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if ((param_5 >> 0x3c & 1) == 0) {
        __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_5,param_6);
        if (param_5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x47e1c);
          (*pcVar1)();
        }
      }
      else {
        param_5 = (param_6 & 0xfffffffffffffff) + 0x20;
      }
      *param_1 = param_5;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != 0)) &&
          (uVar2 = param_6 >> 0x38 & 0xf, uVar2 < param_3 - param_2)) {
    uStack_38 = param_6 & 0xffffffffffffff;
    uStack_40 = param_5;
    _memcpy(param_2,&uStack_40,uVar2);
    *(undefined1 *)(param_2 + uVar2) = 0;
    *param_1 = param_2;
    return;
  }
  FUN_00047e1c(param_5);
  *param_1 = param_6;
  return;
}



/* Entry: 00047e1c; end: 00047e7f;  */

void FUN_00047e1c(void)

{
  FUN_00047e80();
  func_0x000115a8(0xae65a8,&UNK_007cd3b0);
  _swift_initStaticObject();
  func_0x00047fb4();
  return;
}



/* Entry: 00047e80; end: 000480a3;  */

undefined * FUN_00047e80(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar4 = (undefined *)((ulong)param_1 & 0xffffffffffff);
    puVar5 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar4;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar5;
    }
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    if (puVar2 != (undefined *)0x0) {
      FUN_00022434(puVar2,0);
      puVar3 = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1 >> 0x3c & 1) == 0) {
          __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1);
          if ((long)puVar4 < (long)param_2) goto LAB_00047fb0;
        }
        else {
          param_1 = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar4;
          if (SBORROW8((long)puVar4,(long)puVar4)) {
LAB_00047fb0:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x47fb4);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,param_1,param_2);
        if (param_2 != puVar4) {
LAB_00047f1c:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x47f20);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        puStack_50 = param_1;
        _memcpy(puVar2 + 0x20,&puStack_50,puVar5);
      }
    }
  }
  else {
    puVar2 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
    puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      FUN_00022434();
      puVar4 = puVar3 + 0x20;
      puVar5 = puVar2;
      __ss11_StringGutsV16_foreignCopyUTF84intoSiSgSrys5UInt8VG_tF(puVar4,puVar2,param_1,param_2);
      if (((uint)puVar5 & 0xff) == 1) goto LAB_00047fb0;
      if (puVar4 != puVar2) goto LAB_00047f1c;
    }
  }
  return puVar3;
}



/* Entry: 000480a4; end: 00048193;  */

undefined * FUN_000480a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x48194);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xae65a8;
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 00048194; end: 000482f3;  */

undefined * FUN_00048194(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)(param_1 + 0x10);
  lVar10 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar12 != 0) {
    lVar13 = 0;
    plVar11 = (long *)(PTR___swiftEmptyArrayStorage_0099b8f0 + 0x20);
    puVar9 = PTR___swiftEmptyArrayStorage_0099b8f0;
    do {
      uVar2 = *(undefined1 *)(param_1 + 0x20 + lVar13);
      puVar5 = puVar9;
      if (lVar10 == 0) {
        uVar7 = *(ulong *)(puVar9 + 0x18);
        if ((long)((uVar7 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x482f0);
          (*pcVar3)();
        }
        uVar8 = uVar7 & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar8 = 1;
        }
        puVar5 = (undefined *)0xae7d00;
        func_0x000115a8(0xae7d00,&UNK_007cee20);
        _swift_allocObject();
        puVar6 = puVar5;
        _malloc_size();
        puVar1 = puVar6 + -0x11;
        if (0x1f < (long)puVar6) {
          puVar1 = puVar6 + -0x20;
        }
        *(ulong *)(puVar5 + 0x10) = uVar8;
        *(long *)(puVar5 + 0x18) = ((long)puVar1 >> 4) << 1;
        puVar6 = puVar5 + 0x20;
        uVar7 = *(ulong *)(puVar9 + 0x18);
        lVar10 = (uVar7 >> 1) * 0x10;
        if (*(long *)(puVar9 + 0x10) != 0) {
          if ((puVar5 != puVar9) || (puVar9 + 0x20 + lVar10 <= puVar6)) {
            _memmove(puVar6,puVar9 + 0x20,lVar10);
          }
          *(undefined8 *)(puVar9 + 0x10) = 0;
        }
        plVar11 = (long *)(puVar6 + lVar10);
        lVar10 = ((long)puVar1 >> 4 & 0x7fffffffffffffffU) - (uVar7 >> 1);
        _swift_release(puVar9);
      }
      bVar4 = SBORROW8(lVar10,1);
      lVar10 = lVar10 + -1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x482ec);
        (*pcVar3)();
      }
      *plVar11 = lVar13;
      lVar13 = lVar13 + 1;
      *(undefined1 *)(plVar11 + 1) = uVar2;
      plVar11 = plVar11 + 2;
      puVar9 = puVar5;
    } while (lVar12 != lVar13);
  }
  if (1 < *(ulong *)(puVar5 + 0x18)) {
    uVar7 = *(ulong *)(puVar5 + 0x18) >> 1;
    if (SBORROW8(uVar7,lVar10)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x482f4);
      (*pcVar3)();
    }
    *(ulong *)(puVar5 + 0x10) = uVar7 - lVar10;
  }
  return puVar5;
}



/* Entry: 000482f4; end: 00048347;  */

void FUN_000482f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined1 uStack_58;
  
  lVar5 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  lVar5 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  lVar5 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  FUN_00043674(lVar1,auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0));
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar8 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  lVar5 = uVar8 + lVar7;
  puVar2 = &UNK_0099f140;
  _swift_allocObject(&UNK_0099f140,lVar5 + 1,uVar6 | 7);
  FUN_000436bc(auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar2 + uVar8);
  puVar2[lVar5] = param_3;
  uVar3 = 0xae7cd8;
  lStack_60 = lVar1;
  uStack_58 = param_3;
  func_0x000115a8(0xae7cd8,&UNK_007cee08);
  uVar4 = 0xae7ce0;
  FUN_00048768(0xae7ce0,0xae7cd8,&UNK_007cee08,FUN_00040a60);
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (param_1,FUN_00048728,puVar2,FUN_0004875c,auStack_70,uVar3,uVar4);
  lVar5 = 0xae7c00;
  func_0x000115a8(0xae7c00,&UNK_007ceda8);
  *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x34)) = param_3;
  return;
}



/* Entry: 00048348; end: 0004836b;  */

void FUN_00048348(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0004836c; end: 00048397;  */

void FUN_0004836c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 00048398; end: 000483cf;  */

void FUN_00048398(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000485b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_00045b40(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 000483d0; end: 00048563;  */

void FUN_000483d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae7c40 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7c48;
  FUN_00016c74(0xae7c48,&UNK_007cedc8);
  uVar2 = 0xae7c50;
  func_0x00048868(0xae7c50,0xae7c58,&UNK_007cedd0,0x48488);
  uVar3 = 0xae7910;
  func_0x00048520(0xae7910,0xae7918,&UNK_007cea00,
                  PTR___s7SwiftUI24_BackgroundStyleModifierVyxGAA04ViewE0AAMc_009994a8);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae7c40 = puVar4;
  return;
}



/* Entry: 00048564; end: 0004857b;  */

void FUN_00048564(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000485b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_00045384(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 0004857c; end: 000485f7;  */

void FUN_0004857c(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000485b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 000485f8; end: 00048617;  */

void FUN_000485f8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0004860c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 00048618; end: 00048727;  */

void FUN_00048618(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  if (*(long *)(lVar1 + 8) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x28));
  }
  _swift_release(*(undefined8 *)(lVar1 + 0x30));
  _swift_release(*(undefined8 *)(lVar1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x48));
  _swift_release(*(undefined8 *)(lVar1 + 0x58));
  _swift_release(*(undefined8 *)(lVar1 + 0x68));
  _swift_release(*(undefined8 *)(lVar1 + 0x78));
  _swift_release(*(undefined8 *)(lVar1 + 0x88));
  FUN_000485f8(lVar1 + 0x90);
  lVar4 = (long)*(int *)(lVar2 + 0x44);
  uVar3 = 0xae6738;
  func_0x000115a8(0xae6738,&UNK_007cec00);
  lVar2 = lVar1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar2,uVar3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar1 + lVar4,lVar2);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00048728; end: 0004875b;  */

void FUN_00048728(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined1 uStack_48;
  
  lVar4 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  uVar2 = *(undefined1 *)(lVar1 + *(long *)(*(long *)(lVar4 + -8) + 0x40));
  uStack_90 = *(ulong *)(lVar1 + 0x30);
  uStack_88 = *(undefined8 *)(lVar1 + 0x38);
  lStack_80 = CONCAT71(lStack_80._1_7_,*(undefined1 *)(lVar1 + 0x40));
  uVar3 = 0xae7b48;
  lStack_50 = lVar1;
  uStack_48 = uVar2;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_68);
  if ((char)uStack_68 == '\x01') {
    uStack_68 = 0;
    __s7SwiftUI11TransactionV18disablesAnimationsSbvs(1);
    uVar3 = uStack_68;
    pcStack_78 = FUN_00048948;
    puStack_70 = auStack_60;
    lStack_80 = lVar1;
    __s7SwiftUI15withTransactionyxAA0D0V_xyKXEtKlF
              (uStack_68,FUN_00048974,&uStack_90,PTR___sytN_0099b8e0 + 8);
    _swift_release(uVar3);
  }
  else {
    uStack_90 = uStack_90 & 0xffffffffffffff00;
    __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_90,uVar3);
    (**(code **)(lVar1 + 0x80))(uVar2);
  }
  return;
}



/* Entry: 0004875c; end: 00048767;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0004875c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  long extraout_x8;
  long unaff_x20;
  ulong *puVar14;
  undefined8 uVar15;
  ulong uStack_530;
  ulong auStack_528 [17];
  undefined1 auStack_4a0 [16];
  ulong uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  ulong uStack_430;
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
  undefined1 uStack_3d8;
  undefined7 uStack_3d7;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  ulong uStack_3a0;
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
  undefined1 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  ulong uStack_310;
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
  ulong uStack_288;
  undefined1 uStack_280;
  ulong uStack_270;
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
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined1 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  ulong uStack_120;
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
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  uVar13 = (ulong)*(byte *)(unaff_x20 + 0x18);
  lVar10 = 0xae78c8;
  uStack_530 = param_1;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  puVar14 = (ulong *)((long)&uStack_530 + lVar4);
  uVar12 = *(undefined8 *)(lVar11 + 0xa8);
  uVar15 = *(undefined8 *)(lVar11 + 0xb0);
  lVar7 = lVar11 + 0x90;
  FUN_0001393c(lVar7,uVar12);
  uVar8 = uVar13;
  __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE5title3forSSAA7PillTagO_tF
            (uVar13,uVar12,uVar15,lVar7);
  uVar9 = uVar13;
  (**(code **)(lVar11 + 0x50))();
  uStack_1b0 = (undefined1)uVar9;
  uStack_1c0 = 0x66;
  if ((uVar9 & 1) == 0) {
    uStack_1c0 = 0x48;
  }
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar15 = 0x4028000000000000;
  uVar6 = uStack_1b0;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_188 = 0;
  uStack_1c8 = 0x402c000000000000;
  uStack_1b8 = 1;
  uStack_1d8 = uVar8;
  uStack_1d0 = uVar12;
  uStack_1a8 = uVar15;
  uStack_1a0 = param_3;
  uStack_198 = param_4;
  uStack_190 = param_5;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uStack_468 = CONCAT71(uStack_1af,uStack_1b0);
  uStack_470 = CONCAT71(uStack_1b7,uStack_1b8);
  uStack_458 = uStack_1a0;
  uStack_460 = uStack_1a8;
  uStack_448 = uStack_190;
  uStack_450 = uStack_198;
  uStack_440 = uStack_188;
  uStack_488 = uStack_1d0;
  uStack_490 = uStack_1d8;
  uStack_478 = uStack_1c0;
  uStack_480 = uStack_1c8;
  uVar12 = uStack_1c8;
  FUN_00048a54(&uStack_490,&uStack_270,0xae7900,&UNK_007ce9f8);
  uVar15 = 0x4018000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_158 = uStack_468;
  uStack_160 = uStack_470;
  uStack_148 = uStack_458;
  uStack_150 = uStack_460;
  uStack_138 = uStack_448;
  uStack_140 = uStack_450;
  uStack_130 = uStack_440;
  uStack_178 = uStack_488;
  uStack_180 = uStack_490;
  uStack_168 = uStack_478;
  uStack_170 = uStack_480;
  FUN_00048988(&uStack_1d8,0xae7900,&UNK_007ce9f8);
  FUN_00047080();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  uVar9 = uVar13;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_3e0 = CONCAT71(uStack_12f,uStack_130);
  uStack_350 = CONCAT71(uStack_12f,uStack_130);
  uStack_408 = uStack_158;
  uStack_410 = uStack_160;
  uStack_3f8 = uStack_148;
  uStack_400 = uStack_150;
  uStack_3e8 = uStack_138;
  uStack_3f0 = uStack_140;
  uStack_428 = uStack_178;
  uStack_430 = uStack_180;
  uStack_418 = uStack_168;
  uStack_420 = uStack_170;
  uStack_f8 = uStack_158;
  uStack_100 = uStack_160;
  uStack_e8 = uStack_148;
  uStack_f0 = uStack_150;
  uStack_c8 = CONCAT71(uStack_3d7,uVar6);
  uStack_d8 = uStack_138;
  uStack_e0 = uStack_140;
  uStack_118 = uStack_178;
  uStack_120 = uStack_180;
  uStack_108 = uStack_168;
  uStack_110 = uStack_170;
  uStack_378 = uStack_158;
  uStack_380 = uStack_160;
  uStack_368 = uStack_148;
  uStack_370 = uStack_150;
  uStack_358 = uStack_138;
  uStack_360 = uStack_140;
  uStack_3b0 = 0;
  uStack_a0 = 0;
  uStack_398 = uStack_178;
  uStack_3a0 = uStack_180;
  uStack_388 = uStack_168;
  uStack_390 = uStack_170;
  uStack_320 = 0;
  uStack_3d8 = uVar6;
  uStack_3d0 = uVar15;
  uStack_3c8 = uVar12;
  uStack_3c0 = param_4;
  uStack_3b8 = param_5;
  uStack_348 = uVar6;
  uStack_340 = uVar15;
  uStack_338 = uVar12;
  uStack_330 = param_4;
  uStack_328 = param_5;
  uStack_d0 = uStack_3e0;
  uStack_c0 = uVar15;
  uStack_b8 = uVar12;
  uStack_b0 = param_4;
  uStack_a8 = param_5;
  FUN_00048a54(&uStack_430,&uStack_270,0xae78f0,&UNK_007ce9f0);
  FUN_00048988(&uStack_3a0,0xae78f0,&UNK_007ce9f0);
  uStack_2a8 = uStack_b8;
  uStack_2b0 = uStack_c0;
  uStack_298 = uStack_a8;
  uStack_2a0 = uStack_b0;
  uStack_290 = CONCAT71(uStack_9f,uStack_a0);
  uStack_2e8 = uStack_f8;
  uStack_2f0 = uStack_100;
  uStack_2d8 = uStack_e8;
  uStack_2e0 = uStack_f0;
  uStack_2c8 = uStack_d8;
  uStack_2d0 = uStack_e0;
  uStack_2b8 = uStack_c8;
  uStack_2c0 = uStack_d0;
  puVar1 = (undefined8 *)((long)puVar14 + (long)*(int *)(lVar10 + 0x24));
  uStack_308 = uStack_118;
  uStack_310 = uStack_120;
  uStack_2f8 = uStack_108;
  uStack_300 = uStack_110;
  lVar10 = 0;
  uStack_288 = uVar13;
  uStack_280 = (char)uVar9;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar10 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar10 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar10 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar10);
  puVar1[1] = 0x4040000000000000;
  *puVar1 = 0x4040000000000000;
  lVar10 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24)) = 0x100;
  uVar5 = uStack_298;
  uVar15 = uStack_2a0;
  uVar12 = uStack_2b0;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x60U) = uStack_2a8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x58U) = uVar12;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x70U) = uVar5;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x68U) = uVar15;
  uVar12 = uStack_290;
  *(ulong *)((long)auStack_528 + lVar4 + 0x80U) = uStack_288;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x78U) = uVar12;
  auStack_4a0[lVar4] = uStack_280;
  uVar5 = uStack_2d8;
  uVar15 = uStack_2e0;
  uVar12 = uStack_2f0;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x20U) = uStack_2e8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x18U) = uVar12;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x30U) = uVar5;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x28U) = uVar15;
  uVar5 = uStack_2b8;
  uVar15 = uStack_2c0;
  uVar12 = uStack_2d0;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x40U) = uStack_2c8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x38U) = uVar12;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x50U) = uVar5;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x48U) = uVar15;
  uVar15 = uStack_2f8;
  uVar12 = uStack_300;
  uVar8 = uStack_310;
  *(undefined8 *)((long)auStack_528 + lVar4) = uStack_308;
  *puVar14 = uVar8;
  *(undefined8 *)((long)auStack_528 + lVar4 + 0x10U) = uVar15;
  *(undefined8 *)((long)auStack_528 + lVar4 + 8U) = uVar12;
  uStack_208 = uStack_b8;
  uStack_210 = uStack_c0;
  uStack_1f8 = uStack_a8;
  uStack_200 = uStack_b0;
  uStack_1f0 = CONCAT71(uStack_9f,uStack_a0);
  uStack_248 = uStack_f8;
  uStack_250 = uStack_100;
  uStack_238 = uStack_e8;
  uStack_240 = uStack_f0;
  uStack_228 = uStack_d8;
  uStack_230 = uStack_e0;
  uStack_218 = uStack_c8;
  uStack_220 = uStack_d0;
  uStack_268 = uStack_118;
  uStack_270 = uStack_120;
  uStack_258 = uStack_108;
  uStack_260 = uStack_110;
  uStack_1e8 = uVar13;
  uStack_1e0 = (char)uVar9;
  FUN_00048a54(&uStack_310,auStack_528,0xae78e0,&UNK_007ce9e8);
  FUN_00048988(&uStack_270,0xae78e0,&UNK_007ce9e8);
  func_0x00046770(uStack_530);
  FUN_00048988(puVar14,0xae78c8,&UNK_007ce9e0);
  return;
}



/* Entry: 00048768; end: 00048947;  */

void FUN_00048768(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_40 = PTR___s7SwiftUI7AnyViewVAA0D0AAWP_00999730;
    puVar2 = PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00999460;
    uStack_38 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI19_ConditionalContentVyxq_GAA4ViewA2aERzAaER_rlMc_00999460,param_2,
               &puStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 00048948; end: 00048973;  */

void FUN_00048948(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x80))
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x88),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 00048974; end: 00048987;  */

void FUN_00048974(void)

{
  FUN_000489ec();
  return;
}



/* Entry: 00048988; end: 000489eb;  */

undefined8 FUN_00048988(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 000489ec; end: 00048a53;  */

void FUN_000489ec(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 uStack_31;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uStack_31 = 0;
  uVar2 = 0xae7b48;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_31,uVar2);
  (*pcVar1)();
  return;
}



/* Entry: 00048a54; end: 00048a9b;  */

undefined8 FUN_00048a54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 00048a9c; end: 00048a9f;  */

void FUN_00048a9c(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x12;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar8 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar9 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  lVar8 = unaff_x20 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff));
  lVar3 = 0;
  lStack_a0 = param_1;
  uStack_90 = param_2;
  __s7SwiftUI15ScrollViewProxyVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar13 = auStack_b0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar8;
  lStack_a8 = extraout_x12;
  FUN_00043714();
  uStack_94 = (undefined4)lVar4;
  __s7SwiftUI4AxisO3SetV10horizontalAEvgZ();
  uVar5 = 0xae7b18;
  lStack_70 = lVar8;
  func_0x000115a8(0xae7b18,&UNK_007cecf0);
  uVar6 = 0xae7b20;
  func_0x00048868(0xae7b20,0xae7b18,&UNK_007cecf0,FUN_00045164);
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (param_1,lVar4,0,FUN_0004515c,&uStack_80,uVar5,uVar6);
  uStack_80 = *(undefined8 *)(lVar8 + 0x30);
  uStack_78 = *(undefined8 *)(lVar8 + 0x38);
  lStack_70 = CONCAT71(lStack_70._1_7_,*(undefined1 *)(lVar8 + 0x40));
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_81);
  uVar5 = uStack_90;
  pcVar10 = *(code **)(lVar11 + 0x10);
  (*pcVar10)(puVar13,uStack_90,lVar3);
  uVar14 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar9 = uVar14 + 0x11 & (uVar14 ^ 0xffffffffffffffff);
  puVar7 = &UNK_0099f000;
  _swift_allocObject(&UNK_0099f000,uVar9 + extraout_x12,uVar14 | 7);
  uVar2 = (undefined1)uStack_94;
  puVar7[0x10] = uVar2;
  pcVar12 = *(code **)(lVar11 + 0x20);
  (*pcVar12)(puVar7 + uVar9,puVar13,lVar3);
  lVar8 = 0xae7b50;
  func_0x000115a8(0xae7b50,&UNK_007ced10);
  lVar4 = lStack_a0;
  puVar1 = (undefined1 *)(lStack_a0 + *(int *)(lVar8 + 0x24));
  *puVar1 = uStack_81;
  *(code **)(puVar1 + 8) = FUN_00045254;
  *(undefined **)(puVar1 + 0x10) = puVar7;
  (*pcVar10)(puVar13,uVar5,lVar3);
  uVar9 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar7 = &UNK_0099f028;
  _swift_allocObject(&UNK_0099f028,uVar9 + lStack_a8,uVar14 | 7);
  (*pcVar12)(puVar7 + uVar9,puVar13,lVar3);
  lVar8 = 0xae7b58;
  func_0x000115a8(0xae7b58,&UNK_007ced18);
  puVar1 = (undefined1 *)(lVar4 + *(int *)(lVar8 + 0x24));
  *puVar1 = uVar2;
  *(code **)(puVar1 + 8) = FUN_000452ec;
  *(undefined **)(puVar1 + 0x10) = puVar7;
  return;
}



/* Entry: 00048aa0; end: 00048ab3;  */

void FUN_00048aa0(void)

{
  FUN_00048974();
  return;
}



/* Entry: 00048ab4; end: 00048acb;  */

void FUN_00048ab4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff));
  if (*(long *)(lVar1 + 8) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(lVar1 + 0x28));
  }
  _swift_release(*(undefined8 *)(lVar1 + 0x30));
  _swift_release(*(undefined8 *)(lVar1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x48));
  _swift_release(*(undefined8 *)(lVar1 + 0x58));
  _swift_release(*(undefined8 *)(lVar1 + 0x68));
  _swift_release(*(undefined8 *)(lVar1 + 0x78));
  _swift_release(*(undefined8 *)(lVar1 + 0x88));
  FUN_000485f8(lVar1 + 0x90);
  lVar4 = (long)*(int *)(lVar2 + 0x44);
  uVar3 = 0xae6738;
  func_0x000115a8(0xae6738,&UNK_007cec00);
  lVar2 = lVar1 + lVar4;
  _swift_getEnumCaseMultiPayload(lVar2,uVar3);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar1 + lVar4,lVar2);
  }
  else {
    _swift_release(*(undefined8 *)(lVar1 + lVar4));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00048acc; end: 00048c7b;  */

undefined * FUN_00048acc(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UITextField_00ac28a8;
  if ((*(byte *)(unaff_x20 + 0x31) & 1) == 0) {
    func_0x000496d4();
    puVar2 = param_1;
  }
  _objc_allocWithZone();
  func_0x00785700(0,0,0,0);
  uVar3 = 0xae7d88;
  func_0x000115a8(0xae7d88,&UNK_007cef70);
  __s7SwiftUI26UIViewRepresentableContextV11coordinator11CoordinatorQzvg(&uStack_38);
  uVar1 = uStack_38;
  func_0x0078d9e0(puVar2);
  _objc_release(uVar1);
  __s7SwiftUI26UIViewRepresentableContextV11coordinator11CoordinatorQzvg(&uStack_38,uVar3);
  func_0x0077e900(puVar2);
  _objc_release(uStack_38);
  func_0x0078cd80(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_00ac2de0);
  puVar5 = puVar4;
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x007909a0(puVar2);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIFont_00ac3290;
  _objc_opt_self(PTR__OBJC_CLASS___UIFont_00ac3290);
  func_0x00781dc0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e1e0(puVar2);
  _objc_release(puVar5);
  func_0x00790020(puVar2);
  func_0x0078d0a0(puVar2);
  _objc_retain(puVar2);
  func_0x007802e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078cde0(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x0078d6c0(0x437a0000,puVar2);
  return puVar2;
}



/* Entry: 00048c7c; end: 00048e53;  */

void FUN_00048c7c(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  byte bStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x00792780();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    uVar4 = 0;
    param_2 = 0;
  }
  else {
    uVar4 = uVar2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar2);
  }
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uVar3 = 0xae7d80;
  func_0x000115a8(0xae7d80,&UNK_007cef60);
  __s7SwiftUI7BindingV12wrappedValuexvg(&bStack_70);
  lVar1 = lStack_68;
  if (param_2 == 0) {
    _swift_bridgeObjectRelease(lStack_68);
  }
  else {
    if ((uVar4 == CONCAT71(uStack_6f,bStack_70)) && (param_2 == lStack_68)) {
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(lStack_68);
      goto LAB_00048da8;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar4,param_2,CONCAT71(uStack_6f,bStack_70),lStack_68,0);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(lVar1);
    if ((uVar4 & 1) != 0) goto LAB_00048da8;
  }
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  __s7SwiftUI7BindingV12wrappedValuexvg(&bStack_70,uVar3);
  uVar3 = CONCAT71(uStack_6f,bStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lStack_68);
  _swift_bridgeObjectRelease(lStack_68);
  func_0x00790980(param_1);
  _objc_release(uVar3);
LAB_00048da8:
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_50 = CONCAT71(uStack_50._1_7_,*(undefined1 *)(unaff_x20 + 6));
  uVar3 = 0xae7b48;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvg(&bStack_70);
  if ((bStack_70 == 1) && (uVar2 = param_1, func_0x00787920(), (uVar2 & 1) == 0)) {
    func_0x0077f820(param_1);
  }
  else {
    uStack_58 = unaff_x20[5];
    uStack_60 = unaff_x20[4];
    uStack_50 = CONCAT71(uStack_50._1_7_,*(undefined1 *)(unaff_x20 + 6));
    __s7SwiftUI7BindingV12wrappedValuexvg(&bStack_70,uVar3);
    if (((bStack_70 & 1) == 0) && (uVar2 = param_1, func_0x00787920(), (int)uVar2 != 0)) {
      func_0x0078b960(param_1);
    }
  }
  return;
}



/* Entry: 00048e54; end: 00048feb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00048e54(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae7d20);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar9 = puVar1[2];
  uVar6 = puVar1[3];
  uVar3 = puVar1[4];
  uVar7 = puVar1[5];
  uVar4 = puVar1[7];
  uVar8 = puVar1[8];
  _swift_retain(uVar3);
  _swift_retain(uVar7);
  _swift_retain(uVar2);
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  uVar11 = uVar8;
  func_0x00049dec(uVar4);
  func_0x00792780();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
    uVar11 = 0xe000000000000000;
  }
  else {
    lVar10 = param_1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_1);
  }
  lStack_90 = lVar10;
  uStack_88 = uVar11;
  uStack_80 = uVar2;
  uStack_78 = uVar5;
  uStack_70 = uVar9;
  uStack_68 = uVar6;
  _swift_retain(uVar2);
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  uVar9 = 0xae7d80;
  func_0x000115a8(0xae7d80,&UNK_007cef60);
  __s7SwiftUI7BindingV12wrappedValuexvs(&lStack_90,uVar9);
  _swift_release(uVar7);
  _swift_release(uVar3);
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar2);
  func_0x00049ddc(uVar4,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar2);
  return;
}



/* Entry: 00048fec; end: 0004903b; -[_TtCV23ExtensionsStickerPicker18SearchBarTextField11Coordinator editingChanged:] */

void FUN_00048fec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00048e54(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0004903c; end: 00049087; -[_TtCV23ExtensionsStickerPicker18SearchBarTextField11Coordinator textFieldDidBeginEditing:] */

void FUN_0004903c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00049bd4();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00049088; end: 000490d3; -[_TtCV23ExtensionsStickerPicker18SearchBarTextField11Coordinator textFieldDidEndEditing:] */

void FUN_00049088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00049c6c();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000490d4; end: 0004912b; -[_TtCV23ExtensionsStickerPicker18SearchBarTextField11Coordinator textFieldShouldReturn:] */

uint FUN_000490d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_1;
  func_0x00049d04();
  _objc_release(param_3);
  _objc_release(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 0004912c; end: 0004926b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004912c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_00ae7d20 + 0x31) & 1) != 0) {
    return;
  }
  uVar1 = param_1;
  func_0x00788ee0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) goto LAB_00049254;
  func_0x007828e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x007927e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) goto LAB_00049254;
  uVar2 = param_1;
  func_0x0078c580();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    _objc_retain(uVar1);
LAB_00049234:
    func_0x00790380(param_1);
  }
  else {
    FUN_00049b94(0,0xae7da0,&PTR__OBJC_CLASS___UITextRange_00ac28b8);
    _objc_retain(uVar1);
    _objc_retain();
    uVar3 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar2);
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_00049234;
  }
  _objc_release(uVar1);
  _objc_release(uVar1);
LAB_00049254:
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0004926c; end: 000492bb; -[_TtCV23ExtensionsStickerPicker18SearchBarTextField11Coordinator textFieldDidChangeSelection:] */

void FUN_0004926c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0004912c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000492bc; end: 000492e7; -[_TtCV23ExtensionsStickerPicker18SearchBarTextField11Coordinator init] */

void FUN_000492bc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ExtensionsStickerPicker.Coordinator",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x492e8);
  (*pcVar1)();
}



/* Entry: 000492e8; end: 000492eb;  */

void FUN_000492e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000492ec; end: 0004935b; -[_TtCV23ExtensionsStickerPicker18SearchBarTextField11Coordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000492ec(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae7d20);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  uVar3 = puVar1[3];
  uVar6 = puVar1[4];
  lVar4 = puVar1[7];
  uVar7 = puVar1[8];
  _swift_release(puVar1[5]);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar2);
  _swift_release(uVar6);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar7);
    return;
  }
  return;
}



/* Entry: 0004935c; end: 0004937b;  */

void FUN_0004935c(void)

{
  _objc_opt_self(&PTR_PTR_00ac6d88);
  return;
}



/* Entry: 0004937c; end: 00049387;  */

undefined * FUN_0004937c(undefined *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  puVar2 = PTR__OBJC_CLASS___UITextField_00ac28a8;
  if ((*(byte *)(unaff_x20 + 0x31) & 1) == 0) {
    func_0x000496d4();
    puVar2 = param_1;
  }
  _objc_allocWithZone();
  func_0x00785700(0,0,0,0);
  uVar3 = 0xae7d88;
  func_0x000115a8(0xae7d88,&UNK_007cef70);
  __s7SwiftUI26UIViewRepresentableContextV11coordinator11CoordinatorQzvg(&uStack_38);
  uVar1 = uStack_38;
  func_0x0078d9e0(puVar2);
  _objc_release(uVar1);
  __s7SwiftUI26UIViewRepresentableContextV11coordinator11CoordinatorQzvg(&uStack_38,uVar3);
  func_0x0077e900(puVar2);
  _objc_release(uStack_38);
  func_0x0078cd80(puVar2);
  puVar4 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_00ac2de0);
  puVar5 = puVar4;
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x007909a0(puVar2);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIFont_00ac3290;
  _objc_opt_self(PTR__OBJC_CLASS___UIFont_00ac3290);
  func_0x00781dc0(0x4030000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078e1e0(puVar2);
  _objc_release(puVar5);
  func_0x00790020(puVar2);
  func_0x0078d0a0(puVar2);
  _objc_retain(puVar2);
  func_0x007802e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078cde0(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  func_0x0078d6c0(0x437a0000,puVar2);
  return puVar2;
}



/* Entry: 00049388; end: 00049423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00049388(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  FUN_0004935c();
  lVar2 = param_2;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar2 + _DAT_00ae7d20);
  uVar4 = unaff_x20[4];
  uVar6 = unaff_x20[7];
  uVar5 = unaff_x20[6];
  puVar1[5] = unaff_x20[5];
  puVar1[4] = uVar4;
  puVar1[7] = uVar6;
  puVar1[6] = uVar5;
  puVar1[8] = unaff_x20[8];
  uVar6 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  puVar1[1] = unaff_x20[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  FUN_00049b20(&uStack_80,auStack_c8);
  plVar3 = &lStack_d8;
  lStack_d8 = lVar2;
  lStack_d0 = param_2;
  _objc_msgSendSuper2(plVar3,PTR_s_init_00abbf70);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 00049424; end: 00049427;  */

void FUN_00049424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE19_identifiedViewTree2inAA011_IdentifiedfG0O0C4TypeQz_tF_009993f8
  )();
  return;
}



/* Entry: 00049428; end: 0004943b;  */

void FUN_00049428(void)

{
  __s7SwiftUI19UIViewRepresentablePAAE12sizeThatFits_6uiView7contextSo6CGSizeVSgAA08ProposedI4SizeV_0C4TypeQzAA0cD7ContextVyxGtF
            ();
  return;
}



/* Entry: 0004943c; end: 00049447;  */

void FUN_0004943c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE21_overrideSizeThatFits_2in6uiViewySo6CGSizeVz_AA09_ProposedF0V0C4TypeQztF_00999408
  )();
  return;
}



/* Entry: 00049448; end: 0004945b;  */

void FUN_00049448(void)

{
  __s7SwiftUI19UIViewRepresentablePAAE14_layoutOptionsyAA013_PlatformViewd6LayoutF0V0C4TypeQzFZ();
  return;
}



/* Entry: 0004945c; end: 000494fb;  */

void FUN_0004945c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_00049b54();
                    /* WARNING: Could not recover jumptable at 0x00777eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI19UIViewRepresentablePAAE9_makeView4view6inputsAA01_F7OutputsVAA11_GraphValueVyxG_AA01_F6InputsVtFZ_00999420
  )(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 000494fc; end: 000494ff;  */

void FUN_000494fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI4ViewPAAE14_viewListCount6inputsSiSgAA01_ceF6InputsV_tFZ_009995e8)();
  return;
}



/* Entry: 00049500; end: 00049523;  */

void FUN_00049500(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_00049b54();
  __s7SwiftUI19UIViewRepresentablePAAE4bodys5NeverOvg(param_1,uVar2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x49524);
  (*pcVar1)();
}



/* Entry: 00049524; end: 0004957b; -[_TtC23ExtensionsStickerPicker22NonSelectableTextField canPerformAction:withSender:] */

undefined8 FUN_00049524(void)

{
  long in_x3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (in_x3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    _swift_unknownObjectRetain(in_x3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(in_x3);
  }
  FUN_00027748(&uStack_40);
  return 0;
}



/* Entry: 0004957c; end: 000495b3; -[_TtC23ExtensionsStickerPicker22NonSelectableTextField selectionRectsForRange:] */

void FUN_0004957c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_00049b94(0,0xae7d98,&PTR__OBJC_CLASS___UITextSelectionRect_00ac28b0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(PTR___swiftEmptyArrayStorage_0099b8f0,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000495b4; end: 0004961f; -[_TtC23ExtensionsStickerPicker22NonSelectableTextField initWithFrame:] */

void FUN_000495b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  _swift_getObjectType();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__00abc2c8);
  return;
}



/* Entry: 00049620; end: 0004969f; -[_TtC23ExtensionsStickerPicker22NonSelectableTextField initWithCoder:] */

undefined1 * FUN_00049620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR_s_initWithCoder__00abc108;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 000496a0; end: 000496f3;  */

void FUN_000496a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000496f4; end: 0004977b;  */

long FUN_000496f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0004977c; end: 0004981f;  */

undefined8 * FUN_0004977c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar4 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar4;
  param_1[5] = uVar3;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  lVar5 = param_2[7];
  _swift_retain();
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar3);
  if (lVar5 == 0) {
    lVar5 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = lVar5;
  }
  else {
    uVar4 = param_2[8];
    param_1[7] = lVar5;
    param_1[8] = uVar4;
    _swift_retain();
  }
  return param_1;
}



/* Entry: 00049820; end: 00049933;  */

undefined8 * FUN_00049820(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_retain();
  _swift_release(uVar3);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  lVar1 = param_2[7];
  if (param_1[7] == 0) {
    if (lVar1 != 0) {
      uVar3 = param_2[8];
      param_1[7] = lVar1;
      param_1[8] = uVar3;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar3 = param_2[8];
      uVar2 = param_1[8];
      param_1[7] = lVar1;
      param_1[8] = uVar3;
      _swift_retain();
      _swift_release(uVar2);
      return param_1;
    }
    _swift_release(param_1[8]);
  }
  lVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = lVar1;
  return param_1;
}



/* Entry: 00049934; end: 00049957;  */

void FUN_00049934(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 00049958; end: 00049a27;  */

undefined8 * FUN_00049958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar1 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_release(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_release(uVar1);
  lVar2 = param_2[7];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  if (param_1[7] == 0) {
    if (lVar2 != 0) {
      uVar1 = param_2[8];
      param_1[7] = lVar2;
      param_1[8] = uVar1;
      return param_1;
    }
  }
  else {
    if (lVar2 != 0) {
      uVar3 = param_2[8];
      uVar1 = param_1[8];
      param_1[7] = lVar2;
      param_1[8] = uVar3;
      _swift_release(uVar1);
      return param_1;
    }
    _swift_release(param_1[8]);
  }
  lVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = lVar2;
  return param_1;
}



/* Entry: 00049a28; end: 00049adf;  */

int FUN_00049a28(int *param_1,int param_2)

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



/* Entry: 00049ae0; end: 00049b1f;  */

void FUN_00049ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007cee84;
  _swift_getWitnessTable(&UNK_007cee84,&UNK_0099f200);
  puRam0000000000ae7d78 = puVar1;
  return;
}



/* Entry: 00049b20; end: 00049b53;  */

undefined8 FUN_00049b20(undefined8 param_1,undefined8 param_2)

{
  FUN_0004977c(param_2,param_1,&UNK_0099f200);
  return param_2;
}



/* Entry: 00049b54; end: 00049b93;  */

void FUN_00049b54(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ceed4;
  _swift_getWitnessTable(&UNK_007ceed4,&UNK_0099f200);
  puRam0000000000ae7d90 = puVar1;
  return;
}



/* Entry: 00049b94; end: 00049bd3;  */

void FUN_00049b94(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 00049bd4; end: 00049ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00049bd4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  byte bStack_49;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = unaff_x20 + _DAT_00ae7d20;
  uStack_48 = *(undefined8 *)(lVar1 + 0x20);
  uStack_40 = *(undefined8 *)(lVar1 + 0x28);
  uStack_38 = *(undefined1 *)(lVar1 + 0x30);
  uVar2 = 0xae7b48;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvg(&bStack_49);
  if ((bStack_49 & 1) == 0) {
    uStack_48 = *(undefined8 *)(lVar1 + 0x20);
    uStack_40 = *(undefined8 *)(lVar1 + 0x28);
    uStack_38 = *(undefined1 *)(lVar1 + 0x30);
    bStack_49 = 1;
    __s7SwiftUI7BindingV12wrappedValuexvs(&bStack_49,uVar2);
  }
  return;
}



/* Entry: 00049ddc; end: 00049dff;  */

void FUN_00049ddc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_2);
    return;
  }
  return;
}



/* Entry: 00049e00; end: 00049f9b;  */

void FUN_00049e00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 unaff_w20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = param_6;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar2 = 0xae7da8;
  func_0x000115a8(0xae7da8,&UNK_007cef80);
  FUN_00049f9c((long)param_1 + (long)*(int *)(lVar2 + 0x2c));
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uVar5 = 0x4010000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar2 = 0xae7db0;
  uVar6 = param_3;
  uVar7 = param_4;
  uVar8 = param_5;
  func_0x000115a8(0xae7db0,&UNK_007cef88);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  *puVar1 = unaff_w20;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar5 = 0x4020000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar3 = 0xae7db8;
  func_0x000115a8(0xae7db8,&UNK_007cef90);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = (char)lVar2;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  puVar1[0x28] = 0;
  FUN_0004b1fc();
  puVar4 = &UNK_0099f2d8;
  _swift_allocObject(&UNK_0099f2d8,0xb8,7);
  *(undefined8 *)(puVar4 + 0x98) = uStack_70;
  *(undefined8 *)(puVar4 + 0x90) = uStack_78;
  *(undefined8 *)(puVar4 + 0xa8) = uStack_60;
  *(undefined8 *)(puVar4 + 0xa0) = uStack_68;
  *(undefined8 *)(puVar4 + 0xb0) = uStack_58;
  *(undefined8 *)(puVar4 + 0x58) = uStack_b0;
  *(undefined8 *)(puVar4 + 0x50) = uStack_b8;
  *(undefined8 *)(puVar4 + 0x68) = uStack_a0;
  *(undefined8 *)(puVar4 + 0x60) = uStack_a8;
  *(undefined8 *)(puVar4 + 0x78) = uStack_90;
  *(undefined8 *)(puVar4 + 0x70) = uStack_98;
  *(undefined8 *)(puVar4 + 0x88) = uStack_80;
  *(undefined8 *)(puVar4 + 0x80) = uStack_88;
  *(undefined8 *)(puVar4 + 0x18) = uStack_f0;
  *(undefined8 *)(puVar4 + 0x10) = uStack_f8;
  *(undefined8 *)(puVar4 + 0x28) = uStack_e0;
  *(undefined8 *)(puVar4 + 0x20) = uStack_e8;
  *(undefined8 *)(puVar4 + 0x38) = uStack_d0;
  *(undefined8 *)(puVar4 + 0x30) = uStack_d8;
  *(undefined8 *)(puVar4 + 0x48) = uStack_c0;
  *(undefined8 *)(puVar4 + 0x40) = uStack_c8;
  lVar2 = 0xae7dc0;
  func_0x000115a8(0xae7dc0,&UNK_007cef98);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = FUN_0004b234;
  param_1[3] = puVar4;
  return;
}



/* Entry: 00049f9c; end: 0004a26b;  */

void FUN_00049f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long alStack_150 [5];
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
  
  lVar3 = 0xae7df0;
  func_0x000115a8(0xae7df0,&UNK_007cf018);
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar8 = (long)alStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar8 - extraout_x12;
  lVar4 = 0xae7df8;
  func_0x000115a8(0xae7df8,&UNK_007cf020);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  plVar11 = (long *)(lVar10 - extraout_x12_00);
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *plVar11 = lVar5;
  plVar11[1] = 0;
  *(undefined1 *)(plVar11 + 2) = 1;
  lVar5 = 0xae7e00;
  func_0x000115a8(0xae7e00,&UNK_007cf028);
  uVar14 = param_6;
  FUN_0004a26c((long)plVar11 + (long)*(int *)(lVar5 + 0x2c));
  uVar2 = (undefined1)uVar14;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uVar14 = 0x4024000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar5 = 0xae7e08;
  func_0x000115a8(0xae7e08,&UNK_007cf030);
  puVar1 = (undefined1 *)((long)plVar11 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar14;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  *(undefined8 *)((long)plVar11 + (long)*(int *)(lVar4 + 0x24)) = 0x4036000000000000;
  FUN_0004b1fc(param_6,alStack_150 + 3);
  puVar6 = &UNK_0099f398;
  _swift_allocObject(&UNK_0099f398,0xb8,7);
  *(undefined8 *)(puVar6 + 0x98) = uStack_b0;
  *(undefined8 *)(puVar6 + 0x90) = uStack_b8;
  *(undefined8 *)(puVar6 + 0xa8) = uStack_a0;
  *(undefined8 *)(puVar6 + 0xa0) = uStack_a8;
  *(undefined8 *)(puVar6 + 0xb0) = uStack_98;
  *(undefined8 *)(puVar6 + 0x58) = uStack_f0;
  *(undefined8 *)(puVar6 + 0x50) = uStack_f8;
  *(undefined8 *)(puVar6 + 0x68) = uStack_e0;
  *(undefined8 *)(puVar6 + 0x60) = uStack_e8;
  *(undefined8 *)(puVar6 + 0x78) = uStack_d0;
  *(undefined8 *)(puVar6 + 0x70) = uStack_d8;
  *(undefined8 *)(puVar6 + 0x88) = uStack_c0;
  *(undefined8 *)(puVar6 + 0x80) = uStack_c8;
  *(long *)(puVar6 + 0x18) = alStack_150[4];
  *(long *)(puVar6 + 0x10) = alStack_150[3];
  *(undefined8 *)(puVar6 + 0x28) = uStack_120;
  *(undefined8 *)(puVar6 + 0x20) = uStack_128;
  *(undefined8 *)(puVar6 + 0x38) = uStack_110;
  *(undefined8 *)(puVar6 + 0x30) = uStack_118;
  *(undefined8 *)(puVar6 + 0x48) = uStack_100;
  *(undefined8 *)(puVar6 + 0x40) = uStack_108;
  puVar7 = puVar6;
  alStack_150[2] = param_6;
  FUN_00040c44();
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (lVar9,FUN_0004b9d8,puVar6,FUN_0004b9f8,alStack_150,
             &__s23ExtensionsStickerPicker7SIGTextVN,puVar7);
  FUN_0004ba5c(plVar11,lVar10);
  pcVar12 = *(code **)(lVar13 + 0x10);
  (*pcVar12)(lVar8,lVar9,lVar3);
  FUN_0004ba5c(lVar10,param_1);
  lVar4 = 0xae7e10;
  func_0x000115a8(0xae7e10,&UNK_007cf038);
  (*pcVar12)(param_1 + *(int *)(lVar4 + 0x30),lVar8,lVar3);
  pcVar12 = *(code **)(lVar13 + 8);
  (*pcVar12)(lVar9,lVar3);
  func_0x0004baac(plVar11);
  (*pcVar12)(lVar8,lVar3);
  func_0x0004baac(lVar10);
  return;
}



/* Entry: 0004a26c; end: 0004aa7b;  */

void FUN_0004a26c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  undefined1 auStack_600 [208];
  undefined8 ***pppuStack_530;
  ulong uStack_528;
  undefined8 **ppuStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  undefined8 ***pppuStack_460;
  long lStack_458;
  undefined8 **ppuStack_450;
  long lStack_448;
  long lStack_440;
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
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 **ppuStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  undefined8 **ppuStack_2d0;
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
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 ***pppuStack_208;
  ulong uStack_200;
  undefined8 **ppuStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  ulong uStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 ***pppuStack_138;
  long lStack_130;
  undefined8 **ppuStack_128;
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
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar7 = 0xae7e18;
  lStack_618 = param_1;
  func_0x000115a8(0xae7e18,&UNK_007cf040);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = (long)&lStack_630 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_610 = lVar13;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar13 - extraout_x12;
  lVar7 = 0xae7e20;
  func_0x000115a8(0xae7e20,&UNK_007cf048);
  lStack_608 = *(long *)(lVar7 + -8);
  lStack_630 = lVar7;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_608 + 0x40));
  uVar6 = (undefined1)lVar7;
  lVar11 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_620 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = lVar11 - extraout_x12_00;
  __s7SwiftUI4EdgeO3SetV7leadingAEvgZ();
  uVar14 = 0x4028000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lStack_1d0 = CONCAT71(lStack_1d0._1_7_,uVar6);
  uStack_1a8 = uStack_1a8 & 0xffffffffffffff00;
  pppuStack_208 = (undefined8 ***)0x18b;
  uStack_200 = uStack_200 & 0xffffffffffffff00;
  ppuStack_1f8 = (undefined8 **)0x4031000000000000;
  lStack_1f0 = 0x697966696e67616d;
  lStack_1e8 = 0xef7373616c67676e;
  lStack_1e0 = 0x49;
  uStack_1d8 = uStack_1d8 & 0xffffffffffffff00;
  lStack_1c8 = uVar14;
  lStack_1c0 = param_3;
  lStack_1b8 = param_4;
  lStack_1b0 = param_5;
  FUN_0004b1fc(param_6,&pppuStack_138);
  puVar8 = &UNK_0099f3c0;
  _swift_allocObject(&UNK_0099f3c0,0xb8,7);
  *(long *)(puVar8 + 0x98) = lStack_b0;
  *(long *)(puVar8 + 0x90) = lStack_b8;
  *(long *)(puVar8 + 0xa8) = lStack_a0;
  *(long *)(puVar8 + 0xa0) = lStack_a8;
  *(long *)(puVar8 + 0xb0) = lStack_98;
  *(long *)(puVar8 + 0x58) = lStack_f0;
  *(long *)(puVar8 + 0x50) = lStack_f8;
  *(long *)(puVar8 + 0x68) = lStack_e0;
  *(long *)(puVar8 + 0x60) = lStack_e8;
  *(long *)(puVar8 + 0x78) = lStack_d0;
  *(long *)(puVar8 + 0x70) = lStack_d8;
  *(long *)(puVar8 + 0x88) = lStack_c0;
  *(long *)(puVar8 + 0x80) = lStack_c8;
  *(long *)(puVar8 + 0x18) = lStack_130;
  *(undefined8 ****)(puVar8 + 0x10) = pppuStack_138;
  *(long *)(puVar8 + 0x28) = lStack_120;
  *(undefined8 ***)(puVar8 + 0x20) = ppuStack_128;
  *(long *)(puVar8 + 0x38) = lStack_110;
  *(long *)(puVar8 + 0x30) = lStack_118;
  *(long *)(puVar8 + 0x48) = lStack_100;
  *(long *)(puVar8 + 0x40) = lStack_108;
  lVar7 = 0xae7be8;
  lVar9 = lVar7;
  func_0x000115a8(0xae7be8,&UNK_007cf050);
  uVar14 = 0xae7be0;
  FUN_0004b918(0xae7be0,0xae7be8,&UNK_007cf050,FUN_00047040);
  lStack_628 = lVar11;
  __s7SwiftUI4ViewPAAE12onTapGesture5count7performQrSi_yyctF
            (lVar11,1,FUN_0004baf4,puVar8,lVar9,uVar14);
  _swift_release(puVar8);
  ppppuVar10 = &pppuStack_208;
  func_0x0004bbf8(ppppuVar10,0xae7be8,&UNK_007cf050);
  __s7SwiftUI9AlignmentV7leadingACvgZ();
  FUN_0004aaf8(&pppuStack_138,param_6);
  lStack_308 = lStack_b0;
  lStack_310 = lStack_b8;
  lStack_2f8 = lStack_a0;
  lStack_300 = lStack_a8;
  lStack_2e8 = lStack_90;
  lStack_2f0 = lStack_98;
  lStack_2d8 = lStack_80;
  lStack_2e0 = lStack_88;
  lStack_348 = lStack_f0;
  lStack_350 = lStack_f8;
  lStack_338 = lStack_e0;
  lStack_340 = lStack_e8;
  lStack_328 = lStack_d0;
  lStack_330 = lStack_d8;
  lStack_318 = lStack_c0;
  lStack_320 = lStack_c8;
  lStack_388 = lStack_130;
  ppuStack_390 = pppuStack_138;
  lStack_378 = lStack_120;
  lStack_380 = (long)ppuStack_128;
  lStack_368 = lStack_110;
  lStack_370 = lStack_118;
  lStack_358 = lStack_100;
  lStack_360 = lStack_108;
  lStack_248 = lStack_b0;
  lStack_250 = lStack_b8;
  lStack_238 = lStack_a0;
  lStack_240 = lStack_a8;
  lStack_228 = lStack_90;
  lStack_230 = lStack_98;
  lStack_218 = lStack_80;
  lStack_220 = lStack_88;
  lStack_288 = lStack_f0;
  lStack_290 = lStack_f8;
  lStack_278 = lStack_e0;
  lStack_280 = lStack_e8;
  lStack_268 = lStack_d0;
  lStack_270 = lStack_d8;
  lStack_258 = lStack_c0;
  lStack_260 = lStack_c8;
  lStack_2c8 = lStack_130;
  ppuStack_2d0 = pppuStack_138;
  lStack_2b8 = lStack_120;
  lStack_2c0 = (long)ppuStack_128;
  lStack_2a8 = lStack_110;
  lStack_2b0 = lStack_118;
  lStack_298 = lStack_100;
  lStack_2a0 = lStack_108;
  func_0x0004bbb0(&ppuStack_390,&pppuStack_208,0xae7e28,&UNK_007cf058);
  func_0x0004bbf8(&ppuStack_2d0,0xae7e28,&UNK_007cf058);
  lStack_a0 = lStack_308;
  lStack_a8 = lStack_310;
  lStack_90 = lStack_2f8;
  lStack_98 = lStack_300;
  lStack_80 = lStack_2e8;
  lStack_88 = lStack_2f0;
  lStack_70 = lStack_2d8;
  lStack_78 = lStack_2e0;
  lStack_e0 = lStack_348;
  lStack_e8 = lStack_350;
  lStack_d0 = lStack_338;
  lStack_d8 = lStack_340;
  lStack_c0 = lStack_328;
  lStack_c8 = lStack_330;
  lStack_b0 = lStack_318;
  lStack_b8 = lStack_320;
  lStack_120 = lStack_388;
  ppuStack_128 = ppuStack_390;
  lStack_110 = lStack_378;
  lStack_118 = lStack_380;
  lStack_100 = lStack_368;
  lStack_108 = lStack_370;
  lStack_f0 = lStack_358;
  lStack_f8 = lStack_360;
  lStack_170 = lStack_308;
  lStack_178 = lStack_310;
  lStack_160 = lStack_2f8;
  lStack_168 = lStack_300;
  lStack_150 = lStack_2e8;
  lStack_158 = lStack_2f0;
  lStack_140 = lStack_2d8;
  lStack_148 = lStack_2e0;
  lStack_1b0 = lStack_348;
  lStack_1b8 = lStack_350;
  lStack_1a0 = lStack_338;
  uStack_1a8 = lStack_340;
  lStack_190 = lStack_328;
  lStack_198 = lStack_330;
  lStack_180 = lStack_318;
  lStack_188 = lStack_320;
  lStack_1f0 = lStack_388;
  ppuStack_1f8 = ppuStack_390;
  lStack_1e0 = lStack_378;
  lStack_1e8 = lStack_380;
  lStack_1d0 = lStack_368;
  uStack_1d8 = lStack_370;
  lStack_1c0 = lStack_358;
  lStack_1c8 = lStack_360;
  pppuStack_208 = ppppuVar10;
  uStack_200 = lVar7;
  pppuStack_138 = ppppuVar10;
  lStack_130 = lVar7;
  func_0x0004bbb0(&pppuStack_208,&pppuStack_460,0xae7e30,&UNK_007cf060);
  func_0x0004bbf8(&pppuStack_138,0xae7e30,&UNK_007cf060);
  lStack_458 = *(undefined8 *)(param_6 + 0x10);
  pppuStack_460 = *(undefined8 ****)(param_6 + 8);
  ppuStack_450 = *(undefined8 ***)(param_6 + 0x18);
  lStack_448 = *(undefined8 *)(param_6 + 0x20);
  func_0x000115a8(0xae7d80,&UNK_007cef60);
  __s7SwiftUI7BindingV12wrappedValuexvg(&pppuStack_530);
  _swift_bridgeObjectRelease(uStack_528);
  uVar2 = (ulong)pppuStack_530 & 0xffffffffffff;
  if ((uStack_528 & 0x2000000000000000) != 0) {
    uVar2 = uStack_528 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    FUN_0004b1fc(param_6,&pppuStack_460);
    puVar8 = &UNK_0099f3e8;
    _swift_allocObject(&UNK_0099f3e8,0xb8,7);
    *(long *)(puVar8 + 0x98) = lStack_3d8;
    *(long *)(puVar8 + 0x90) = lStack_3e0;
    *(long *)(puVar8 + 0xa8) = lStack_3c8;
    *(long *)(puVar8 + 0xa0) = lStack_3d0;
    *(long *)(puVar8 + 0xb0) = lStack_3c0;
    *(long *)(puVar8 + 0x58) = lStack_418;
    *(long *)(puVar8 + 0x50) = lStack_420;
    *(long *)(puVar8 + 0x68) = lStack_408;
    *(long *)(puVar8 + 0x60) = lStack_410;
    *(long *)(puVar8 + 0x78) = lStack_3f8;
    *(long *)(puVar8 + 0x70) = lStack_400;
    *(long *)(puVar8 + 0x88) = lStack_3e8;
    *(long *)(puVar8 + 0x80) = lStack_3f0;
    *(long *)(puVar8 + 0x18) = lStack_458;
    *(undefined8 ****)(puVar8 + 0x10) = pppuStack_460;
    *(long *)(puVar8 + 0x28) = lStack_448;
    *(undefined8 ***)(puVar8 + 0x20) = ppuStack_450;
    *(long *)(puVar8 + 0x38) = lStack_438;
    *(long *)(puVar8 + 0x30) = lStack_440;
    *(long *)(puVar8 + 0x48) = lStack_428;
    *(long *)(puVar8 + 0x40) = lStack_430;
    __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
              (lVar13,0x4bafc,puVar8,FUN_0004b0f0,0,lVar9,uVar14);
  }
  lVar7 = 0xae7e38;
  func_0x000115a8(0xae7e38,&UNK_007cf070);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar13,uVar2 == 0,1,lVar7);
  lVar3 = lStack_620;
  lVar11 = lStack_628;
  lVar9 = lStack_630;
  pcVar12 = *(code **)(lStack_608 + 0x10);
  (*pcVar12)(lStack_620,lStack_628,lStack_630);
  lVar5 = lStack_610;
  lStack_488 = lStack_160;
  lStack_490 = lStack_168;
  lStack_478 = lStack_150;
  lStack_480 = lStack_158;
  lStack_468 = lStack_140;
  lStack_470 = lStack_148;
  lStack_4c8 = lStack_1a0;
  lStack_4d0 = uStack_1a8;
  lStack_4b8 = lStack_190;
  lStack_4c0 = lStack_198;
  lStack_4a8 = lStack_180;
  lStack_4b0 = lStack_188;
  lStack_498 = lStack_170;
  lStack_4a0 = lStack_178;
  lStack_508 = lStack_1e0;
  lStack_510 = lStack_1e8;
  lStack_4f8 = lStack_1d0;
  lStack_500 = uStack_1d8;
  lStack_4e8 = lStack_1c0;
  lStack_4f0 = lStack_1c8;
  lStack_4d8 = lStack_1b0;
  lStack_4e0 = lStack_1b8;
  uStack_528 = uStack_200;
  pppuStack_530 = pppuStack_208;
  lStack_518 = lStack_1f0;
  ppuStack_520 = ppuStack_1f8;
  func_0x0004bbb0(lVar13,lStack_610,0xae7e18,&UNK_007cf040);
  lVar4 = lStack_618;
  (*pcVar12)(lStack_618,lVar3,lVar9);
  lVar7 = 0xae7e40;
  func_0x000115a8(0xae7e40,&UNK_007cf078);
  lStack_3b8 = lStack_488;
  lStack_3c0 = lStack_490;
  lStack_3a8 = lStack_478;
  lStack_3b0 = lStack_480;
  lStack_398 = lStack_468;
  lStack_3a0 = lStack_470;
  lStack_3f8 = lStack_4c8;
  lStack_400 = lStack_4d0;
  lStack_3e8 = lStack_4b8;
  lStack_3f0 = lStack_4c0;
  lStack_3d8 = lStack_4a8;
  lStack_3e0 = lStack_4b0;
  lStack_3c8 = lStack_498;
  lStack_3d0 = lStack_4a0;
  lStack_418 = lStack_4e8;
  lStack_420 = lStack_4f0;
  lStack_408 = lStack_4d8;
  lStack_410 = lStack_4e0;
  lStack_438 = lStack_508;
  lStack_440 = lStack_510;
  lStack_428 = lStack_4f8;
  lStack_430 = lStack_500;
  lStack_458 = uStack_528;
  pppuStack_460 = pppuStack_530;
  lStack_448 = lStack_518;
  ppuStack_450 = ppuStack_520;
  plVar1 = (long *)(lVar4 + *(int *)(lVar7 + 0x30));
  plVar1[0x15] = lStack_488;
  plVar1[0x14] = lStack_490;
  plVar1[0x17] = lStack_478;
  plVar1[0x16] = lStack_480;
  plVar1[0x19] = lStack_468;
  plVar1[0x18] = lStack_470;
  plVar1[0xd] = lStack_4c8;
  plVar1[0xc] = lStack_4d0;
  plVar1[0xf] = lStack_4b8;
  plVar1[0xe] = lStack_4c0;
  plVar1[0x11] = lStack_4a8;
  plVar1[0x10] = lStack_4b0;
  plVar1[0x13] = lStack_498;
  plVar1[0x12] = lStack_4a0;
  plVar1[5] = lStack_508;
  plVar1[4] = lStack_510;
  plVar1[7] = lStack_4f8;
  plVar1[6] = lStack_500;
  plVar1[9] = lStack_4e8;
  plVar1[8] = lStack_4f0;
  plVar1[0xb] = lStack_4d8;
  plVar1[10] = lStack_4e0;
  plVar1[1] = uStack_528;
  *plVar1 = (long)pppuStack_530;
  plVar1[3] = lStack_518;
  plVar1[2] = (long)ppuStack_520;
  func_0x0004bbb0(lVar5,lVar4 + *(int *)(lVar7 + 0x40),0xae7e18,&UNK_007cf040);
  func_0x0004bbb0(&pppuStack_460,auStack_600,0xae7e30,&UNK_007cf060);
  func_0x0004bbf8(lVar13,0xae7e18,&UNK_007cf040);
  pcVar12 = *(code **)(lStack_608 + 8);
  (*pcVar12)(lVar11,lVar9);
  func_0x0004bbf8(lVar5,0xae7e18,&UNK_007cf040);
  func_0x0004bbf8(&pppuStack_530,0xae7e30,&UNK_007cf060);
  (*pcVar12)(lVar3,lVar9);
  return;
}



/* Entry: 0004aa7c; end: 0004aaf7;  */

void FUN_0004aa7c(long param_1)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pcVar1 = *(code **)(param_1 + 0x50);
  if (pcVar1 != (code *)0x0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 8);
    uStack_40 = *(undefined8 *)(param_1 + 0x18);
    uStack_38 = *(undefined8 *)(param_1 + 0x20);
    func_0x000115a8(0xae7d80,&UNK_007cef60);
    __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_60);
    (*pcVar1)(uStack_60,uStack_58);
    _swift_bridgeObjectRelease(uStack_58);
  }
  return;
}



/* Entry: 0004aaf8; end: 0004b023;  */

void FUN_0004aaf8(undefined8 *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  undefined1 auStack_5e8 [152];
  undefined7 uStack_550;
  undefined1 uStack_549;
  undefined7 uStack_548;
  undefined1 uStack_541;
  undefined7 uStack_540;
  undefined1 uStack_539;
  undefined7 uStack_538;
  undefined1 uStack_531;
  undefined7 uStack_530;
  undefined1 uStack_529;
  undefined7 uStack_528;
  undefined1 uStack_521;
  undefined7 uStack_520;
  undefined1 uStack_519;
  undefined7 uStack_518;
  undefined1 uStack_511;
  undefined7 uStack_510;
  undefined1 uStack_509;
  undefined7 uStack_508;
  undefined1 uStack_501;
  undefined7 uStack_500;
  undefined1 uStack_4f9;
  undefined7 uStack_4f8;
  undefined1 uStack_4f1;
  undefined7 uStack_4f0;
  undefined1 uStack_4e9;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  undefined7 uStack_4e0;
  undefined1 uStack_4d9;
  undefined7 uStack_4d8;
  undefined1 uStack_4d1;
  undefined7 uStack_4d0;
  undefined1 uStack_4c9;
  undefined7 uStack_4c8;
  undefined1 uStack_4c1;
  undefined7 uStack_4c0;
  undefined8 uStack_4b9;
  ulong uStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  undefined1 uStack_480;
  undefined1 uStack_47f;
  undefined6 uStack_47e;
  undefined8 uStack_478;
  undefined *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  undefined1 uStack_408;
  undefined1 uStack_407;
  undefined8 uStack_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong uStack_320;
  ulong uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar2 = *(ulong *)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = 0xae7d80;
  uStack_1e0 = uVar2;
  uStack_1d8 = uVar12;
  uStack_1d0 = uVar11;
  uStack_1c8 = uVar3;
  func_0x000115a8(0xae7d80,&UNK_007cef60);
  __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_280);
  uVar5 = uStack_278;
  uVar1 = uStack_280;
  _swift_bridgeObjectRelease(uStack_278);
  uVar1 = uVar1 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uStack_600 = *(undefined8 *)(param_2 + 0x98);
    lStack_5f8 = *(long *)(param_2 + 0xa0);
    FUN_0001393c(param_2 + 0x80,uStack_600);
    (**(code **)(lStack_5f8 + 0x20))();
    uStack_610 = 0x49;
    uStack_608 = 0x4031000000000000;
  }
  else {
    uStack_600 = 0;
    lStack_5f8 = 0;
    uStack_610 = 0;
    uStack_608 = 0;
  }
  uStack_1e0 = uVar2;
  uStack_1d8 = uVar12;
  uStack_1d0 = uVar11;
  uStack_1c8 = uVar3;
  __s7SwiftUI7BindingV14projectedValueACyxGvg(&uStack_280,uVar8);
  uVar8 = uStack_270;
  uVar2 = uStack_278;
  uVar1 = uStack_280;
  uStack_1e0 = *(ulong *)(param_2 + 0x28);
  uStack_1d8 = *(ulong *)(param_2 + 0x30);
  uStack_1d0 = CONCAT71(uStack_1d0._1_7_,param_2[0x38]);
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV14projectedValueACyxGvg(&uStack_280);
  cVar4 = *param_2;
  FUN_0004b1fc(param_2,&uStack_1e0);
  puVar9 = &UNK_0099f410;
  uVar11 = 0xb8;
  _swift_allocObject(&UNK_0099f410,0xb8,7);
  *(undefined8 *)(puVar9 + 0x98) = uStack_158;
  *(undefined **)(puVar9 + 0x90) = puStack_160;
  *(undefined8 *)(puVar9 + 0xa8) = uStack_148;
  *(undefined8 *)(puVar9 + 0xa0) = uStack_150;
  *(undefined8 *)(puVar9 + 0xb0) = uStack_140;
  *(undefined8 *)(puVar9 + 0x58) = uStack_198;
  *(undefined **)(puVar9 + 0x50) = puStack_1a0;
  *(undefined8 *)(puVar9 + 0x68) = uStack_188;
  *(undefined8 *)(puVar9 + 0x60) = uStack_190;
  *(undefined8 *)(puVar9 + 0x78) = uStack_178;
  *(undefined8 *)(puVar9 + 0x70) = uStack_180;
  *(undefined8 *)(puVar9 + 0x88) = uStack_168;
  *(undefined8 *)(puVar9 + 0x80) = uStack_170;
  *(ulong *)(puVar9 + 0x18) = uStack_1d8;
  *(ulong *)(puVar9 + 0x10) = uStack_1e0;
  *(undefined8 *)(puVar9 + 0x28) = uStack_1c8;
  *(undefined8 *)(puVar9 + 0x20) = uStack_1d0;
  *(ulong *)(puVar9 + 0x38) = uStack_1b8;
  *(ulong *)(puVar9 + 0x30) = uStack_1c0;
  *(undefined8 *)(puVar9 + 0x48) = uStack_1a8;
  *(undefined8 *)(puVar9 + 0x40) = uStack_1b0;
  puVar10 = PTR__OBJC_CLASS___UIFont_00ac3290;
  _objc_opt_self();
  uVar12 = 0x4031000000000000;
  func_0x00781dc0(0x4031000000000000);
  _objc_retainAutoreleasedReturnValue();
  if (puVar10 != (undefined *)0x0) {
    bVar7 = cVar4 == '\0';
    func_0x007883e0();
    _objc_release(puVar10);
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (&uStack_130,0,1,uVar12,0,puVar10,uVar11);
    FUN_0004b1fc(param_2,&uStack_1e0);
    puVar10 = &UNK_0099f438;
    _swift_allocObject(&UNK_0099f438,0xb8,7);
    *(undefined8 *)(puVar10 + 0x98) = uStack_158;
    *(undefined **)(puVar10 + 0x90) = puStack_160;
    *(undefined8 *)(puVar10 + 0xa8) = uStack_148;
    *(undefined8 *)(puVar10 + 0xa0) = uStack_150;
    *(undefined8 *)(puVar10 + 0xb0) = uStack_140;
    *(undefined8 *)(puVar10 + 0x58) = uStack_198;
    *(undefined **)(puVar10 + 0x50) = puStack_1a0;
    *(undefined8 *)(puVar10 + 0x68) = uStack_188;
    *(undefined8 *)(puVar10 + 0x60) = uStack_190;
    *(undefined8 *)(puVar10 + 0x78) = uStack_178;
    *(undefined8 *)(puVar10 + 0x70) = uStack_180;
    *(undefined8 *)(puVar10 + 0x88) = uStack_168;
    *(undefined8 *)(puVar10 + 0x80) = uStack_170;
    *(ulong *)(puVar10 + 0x18) = uStack_1d8;
    *(ulong *)(puVar10 + 0x10) = uStack_1e0;
    *(undefined8 *)(puVar10 + 0x28) = uStack_1c8;
    *(undefined8 *)(puVar10 + 0x20) = uStack_1d0;
    *(ulong *)(puVar10 + 0x38) = uStack_1b8;
    *(ulong *)(puVar10 + 0x30) = uStack_1c0;
    *(undefined8 *)(puVar10 + 0x48) = uStack_1a8;
    *(undefined8 *)(puVar10 + 0x40) = uStack_1b0;
    uStack_4b0 = uVar1;
    uStack_4a8 = uVar2;
    uStack_4a0 = uVar8;
    uStack_498 = uStack_268;
    uStack_490 = uStack_280;
    uStack_488 = uStack_278;
    uStack_480 = (undefined1)uStack_270;
    uStack_478 = 0x4bb04;
    uStack_440 = uStack_108;
    uStack_448 = uStack_110;
    uStack_450 = uStack_118;
    uStack_458 = uStack_120;
    uStack_460 = uStack_128;
    uStack_468 = uStack_130;
    uStack_d0 = CONCAT62(uStack_47e,CONCAT11(bVar7,(undefined1)uStack_270));
    uStack_d8 = uStack_278;
    uStack_e0 = uStack_280;
    uStack_c8 = 0x4bb04;
    uStack_f8 = uVar2;
    uStack_100 = uVar1;
    uStack_e8 = uStack_268;
    uStack_f0 = uVar8;
    uStack_98 = uStack_110;
    uStack_a0 = uStack_118;
    uStack_90 = uStack_108;
    uStack_b8 = uStack_130;
    uStack_a8 = uStack_120;
    uStack_b0 = uStack_128;
    uStack_438 = uVar1;
    uStack_430 = uVar2;
    uStack_428 = uVar8;
    uStack_420 = uStack_268;
    uStack_418 = uStack_280;
    uStack_410 = uStack_278;
    uStack_408 = (undefined1)uStack_270;
    uStack_400 = 0x4bb04;
    uStack_3d8 = uStack_118;
    uStack_3e0 = uStack_120;
    uStack_3c8 = uStack_108;
    uStack_3d0 = uStack_110;
    uStack_3e8 = uStack_128;
    uStack_3f0 = uStack_130;
    uStack_47f = bVar7;
    puStack_470 = puVar9;
    uStack_407 = bVar7;
    puStack_3f8 = puVar9;
    puStack_c0 = puVar9;
    func_0x0004bbb0(&uStack_4b0,&uStack_280,0xae7e48,&UNK_007cf080);
    func_0x0004bbf8(&uStack_438,0xae7e48,&UNK_007cf080);
    uStack_378 = uStack_b8;
    puStack_380 = puStack_c0;
    uStack_368 = uStack_a8;
    uStack_370 = uStack_b0;
    uStack_358 = uStack_98;
    uStack_360 = uStack_a0;
    uStack_3b8 = uStack_f8;
    uStack_3c0 = uStack_100;
    uStack_3a8 = uStack_e8;
    uStack_3b0 = uStack_f0;
    uStack_398 = uStack_d8;
    uStack_3a0 = uStack_e0;
    uStack_388 = uStack_c8;
    uStack_390 = uStack_d0;
    uStack_2d8 = uStack_b8;
    puStack_2e0 = puStack_c0;
    uStack_2c8 = uStack_a8;
    uStack_2d0 = uStack_b0;
    uStack_2b8 = uStack_98;
    uStack_2c0 = uStack_a0;
    uStack_318 = uStack_f8;
    uStack_320 = uStack_100;
    uStack_308 = uStack_e8;
    uStack_310 = uStack_f0;
    uStack_350 = uStack_90;
    uStack_348 = 0x4bb88;
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_2f8 = uStack_d8;
    uStack_300 = uStack_e0;
    uStack_2e8 = uStack_c8;
    uStack_2f0 = uStack_d0;
    uStack_2b0 = uStack_90;
    uStack_2a8 = 0x4bb88;
    uStack_298 = 0;
    uStack_290 = 0;
    puStack_340 = puVar10;
    puStack_2a0 = puVar10;
    func_0x0004bbb0(&uStack_3c0,&uStack_1e0,0xae7e50,&UNK_007cf088);
    func_0x0004bbf8(&uStack_320,0xae7e50,&UNK_007cf088);
    uStack_178 = uStack_358;
    uStack_180 = uStack_360;
    uStack_168 = uStack_348;
    uStack_170 = uStack_350;
    uStack_158 = uStack_338;
    puStack_160 = puStack_340;
    uStack_1b8 = uStack_398;
    uStack_1c0 = uStack_3a0;
    uStack_1a8 = uStack_388;
    uStack_1b0 = uStack_390;
    uStack_198 = uStack_378;
    puStack_1a0 = puStack_380;
    uStack_188 = uStack_368;
    uStack_190 = uStack_370;
    uStack_1d8 = uStack_3b8;
    uStack_1e0 = uStack_3c0;
    uStack_1c8 = uStack_3a8;
    uStack_1d0 = uStack_3b0;
    uStack_218 = uStack_358;
    uStack_220 = uStack_360;
    uStack_208 = uStack_348;
    uStack_210 = uStack_350;
    uStack_1f8 = uStack_338;
    puStack_200 = puStack_340;
    uStack_258 = uStack_398;
    uStack_260 = uStack_3a0;
    uStack_248 = uStack_388;
    uStack_250 = uStack_390;
    uStack_238 = uStack_378;
    puStack_240 = puStack_380;
    uStack_228 = uStack_368;
    uStack_230 = uStack_370;
    uStack_278 = uStack_3b8;
    uStack_280 = uStack_3c0;
    uStack_268 = uStack_3a8;
    uStack_270 = uStack_3b0;
    uStack_4d1 = (undefined1)uStack_348;
    uStack_4d0 = (undefined7)((ulong)uStack_348 >> 8);
    uStack_4d9 = (undefined1)uStack_350;
    uStack_4d8 = (undefined7)((ulong)uStack_350 >> 8);
    uStack_4e1 = (undefined1)uStack_358;
    uStack_4e0 = (undefined7)((ulong)uStack_358 >> 8);
    uStack_4e9 = (undefined1)uStack_360;
    uStack_4e8 = (undefined7)((ulong)uStack_360 >> 8);
    uStack_511 = (undefined1)uStack_388;
    uStack_510 = (undefined7)((ulong)uStack_388 >> 8);
    uStack_519 = (undefined1)uStack_390;
    uStack_518 = (undefined7)((ulong)uStack_390 >> 8);
    uStack_521 = (undefined1)uStack_398;
    uStack_520 = (undefined7)(uStack_398 >> 8);
    uStack_529 = (undefined1)uStack_3a0;
    uStack_528 = (undefined7)(uStack_3a0 >> 8);
    uStack_4c1 = (undefined1)uStack_338;
    uStack_4c0 = (undefined7)((ulong)uStack_338 >> 8);
    uStack_4c9 = SUB81(puStack_340,0);
    uStack_4c8 = (undefined7)((ulong)puStack_340 >> 8);
    uStack_501 = (undefined1)uStack_378;
    uStack_500 = (undefined7)((ulong)uStack_378 >> 8);
    uStack_509 = SUB81(puStack_380,0);
    uStack_508 = (undefined7)((ulong)puStack_380 >> 8);
    uStack_4f1 = (undefined1)uStack_368;
    uStack_4f0 = (undefined7)((ulong)uStack_368 >> 8);
    uStack_4f9 = (undefined1)uStack_370;
    uStack_4f8 = (undefined7)((ulong)uStack_370 >> 8);
    uStack_4b9 = uStack_330;
    uStack_541 = (undefined1)uStack_3b8;
    uStack_540 = (undefined7)(uStack_3b8 >> 8);
    uStack_549 = (undefined1)uStack_3c0;
    uStack_548 = (undefined7)(uStack_3c0 >> 8);
    uStack_531 = (undefined1)uStack_3a8;
    uStack_530 = (undefined7)((ulong)uStack_3a8 >> 8);
    uStack_539 = (undefined1)uStack_3b0;
    uStack_538 = (undefined7)((ulong)uStack_3b0 >> 8);
    *(ulong *)((long)param_1 + 0x89) = CONCAT17(uStack_4e1,uStack_4e8);
    *(ulong *)((long)param_1 + 0x81) = CONCAT17(uStack_4e9,uStack_4f0);
    *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_4d1,uStack_4d8);
    *(ulong *)((long)param_1 + 0x91) = CONCAT17(uStack_4d9,uStack_4e0);
    *(ulong *)((long)param_1 + 0xa9) = CONCAT17(uStack_4c1,uStack_4c8);
    *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_4c9,uStack_4d0);
    param_1[0x17] = uStack_330;
    param_1[0x16] = uStack_338;
    *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_521,uStack_528);
    *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_529,uStack_530);
    *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_511,uStack_518);
    *(ulong *)((long)param_1 + 0x51) = CONCAT17(uStack_519,uStack_520);
    *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_501,uStack_508);
    *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_509,uStack_510);
    *(ulong *)((long)param_1 + 0x79) = CONCAT17(uStack_4f1,uStack_4f8);
    *(ulong *)((long)param_1 + 0x71) = CONCAT17(uStack_4f9,uStack_500);
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_541,uStack_548);
    *(ulong *)((long)param_1 + 0x21) = CONCAT17(uStack_549,uStack_550);
    uStack_150 = uStack_330;
    uStack_1f0 = uStack_330;
    *param_1 = uStack_600;
    param_1[1] = lStack_5f8;
    param_1[2] = uStack_608;
    param_1[3] = uStack_610;
    *(undefined1 *)(param_1 + 4) = 0;
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_531,uStack_538);
    *(ulong *)((long)param_1 + 0x31) = CONCAT17(uStack_539,uStack_540);
    _swift_bridgeObjectRetain(lStack_5f8);
    func_0x0004bbb0(&uStack_280,auStack_5e8,0xae7e50,&UNK_007cf088);
    func_0x0004bbf8(&uStack_1e0,0xae7e50,&UNK_007cf088);
    _swift_bridgeObjectRelease(lStack_5f8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x4b024);
  (*pcVar6)();
}



/* Entry: 0004b024; end: 0004b097;  */

void FUN_0004b024(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  uStack_31 = 0;
  uVar1 = 0xae7b48;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_31,uVar1);
  if (*(code **)(param_3 + 0x50) != (code *)0x0) {
    (**(code **)(param_3 + 0x50))(param_1,param_2);
  }
  return;
}



/* Entry: 0004b098; end: 0004b0ef;  */

void FUN_0004b098(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 1;
  uVar1 = 0xae7b48;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_21,uVar1);
  (**(code **)(param_1 + 0x60))();
  return;
}



/* Entry: 0004b0f0; end: 0004b1fb;  */

void FUN_0004b0f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_178 [104];
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  __s7SwiftUI4EdgeO3SetV8trailingAEvgZ();
  uVar1 = 0x4028000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_110 = 0x2f4;
  uStack_108 = 0;
  uStack_100 = 0x4031000000000000;
  uStack_f8 = 0xd000000000000011;
  uStack_f0 = 0x80000000008b5fc0;
  uStack_e8 = 0x49;
  uStack_e0 = 1;
  uStack_b0 = 0;
  uStack_a8 = 0x2f4;
  uStack_a0 = 0;
  uStack_98 = 0x4031000000000000;
  uStack_90 = 0xd000000000000011;
  uStack_88 = 0x80000000008b5fc0;
  uStack_80 = 0x49;
  uStack_78 = 1;
  uStack_48 = 0;
  uStack_d8 = param_6;
  uStack_d0 = uVar1;
  uStack_c8 = param_3;
  uStack_c0 = param_4;
  uStack_b8 = param_5;
  uStack_70 = param_6;
  uStack_68 = uVar1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  func_0x0004bbb0(&uStack_110,auStack_178,0xae7be8,&UNK_007cf050);
  func_0x0004bbf8(&uStack_a8,0xae7be8,&UNK_007cf050);
  param_1[9] = uStack_c8;
  param_1[8] = uStack_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = uStack_c0;
  *(undefined1 *)(param_1 + 0xc) = uStack_b0;
  param_1[1] = CONCAT71(uStack_107,uStack_108);
  *param_1 = uStack_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  param_1[5] = uStack_e8;
  param_1[4] = uStack_f0;
  param_1[7] = CONCAT71(uStack_d7,uStack_d8);
  param_1[6] = CONCAT71(uStack_df,uStack_e0);
  return;
}



/* Entry: 0004b1fc; end: 0004b22f;  */

undefined8 FUN_0004b1fc(undefined8 param_1,undefined8 param_2)

{
  FUN_0004b340(param_2,param_1,&UNK_0099f358);
  return param_2;
}



/* Entry: 0004b230; end: 0004b233;  */

void FUN_0004b230(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  }
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  FUN_00011670(unaff_x20 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0004b234; end: 0004b27b;  */

void FUN_0004b234(void)

{
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uStack_21 = 0;
  uVar1 = 0xae7b48;
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvs(&uStack_21,uVar1);
  return;
}



/* Entry: 0004b27c; end: 0004b29b;  */

void FUN_0004b27c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_0083e7f4,1);
  return;
}


