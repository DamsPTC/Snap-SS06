/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0003f2ac; end: 0003f2f3;  */

long FUN_0003f2ac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 0003f2f4; end: 0003f37f;  */

undefined8 *
__s23ExtensionsStickerPicker13LoggedOutViewV15stringsProviderAcA0bC16StringsProviding_p_tcfC
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = &UNK_007ce8c0;
  _swift_getKeyPath();
  *param_1 = puVar2;
  uVar4 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  _swift_storeEnumTagMultiPayload(param_1,uVar4,0);
  lVar3 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
  *puVar1 = 0xd000000000000015;
  puVar1[1] = 0x80000000008b54a0;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
  uVar5 = param_2[1];
  uVar4 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  return param_1;
}



/* Entry: 0003f380; end: 0003f387;  */

void FUN_0003f380(void)

{
  __s7SwiftUI17EnvironmentValuesV7openURLAA13OpenURLActionVvg();
  return;
}



/* Entry: 0003f388; end: 0003f3bf;  */

void __s23ExtensionsStickerPicker13LoggedOutViewVMa(undefined8 param_1)

{
  if (lRam0000000000ae7840 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&__s23ExtensionsStickerPicker13LoggedOutViewVMn);
  return;
}



/* Entry: 0003f3c0; end: 0003f3d7;  */

undefined8 * FUN_0003f3c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 0003f3d8; end: 0003f55f;  */

void FUN_0003f3d8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  lVar1 = 0xae7898;
  func_0x000115a8(0xae7898,&UNK_007ce9b0);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar7 = (undefined8 *)(puVar6 + -extraout_x12);
  puVar2 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar3 = puVar2;
  __s7SwiftUI15SafeAreaRegionsV3allACvgZ();
  puVar4 = puVar3;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  puVar5 = puVar4;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *puVar7 = puVar5;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  lVar1 = 0xae78a0;
  func_0x000115a8(0xae78a0,&UNK_007ce9b8);
  FUN_0003f570((long)puVar7 + (long)*(int *)(lVar1 + 0x2c),param_2);
  func_0x00040cc8(puVar7,puVar6,0xae7898,&UNK_007ce9b0);
  *param_1 = puVar2;
  param_1[1] = puVar3;
  *(char *)(param_1 + 2) = (char)puVar4;
  lVar1 = 0xae78a8;
  func_0x000115a8(0xae78a8,&UNK_007ce9c0);
  func_0x00040cc8(puVar6,(long)param_1 + (long)*(int *)(lVar1 + 0x30),0xae7898,&UNK_007ce9b0);
  _swift_retain(puVar2);
  func_0x00040d10(puVar7,0xae7898,&UNK_007ce9b0);
  func_0x00040d10(puVar6,0xae7898,&UNK_007ce9b0);
  _swift_release(puVar2);
  return;
}



/* Entry: 0003f560; end: 0003f56f;  */

void FUN_0003f560(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_0083e68c,1);
  return;
}



/* Entry: 0003f570; end: 0003fa8f;  */

void FUN_0003f570(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_400 [8];
  undefined1 *puStack_3f8;
  long alStack_3f0 [3];
  long lStack_3d8;
  long lStack_3d0;
  undefined1 auStack_3c8 [120];
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
  undefined1 uStack_2e0;
  undefined1 auStack_2d0 [16];
  long lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined2 uStack_290;
  undefined6 uStack_28e;
  undefined2 uStack_288;
  undefined6 uStack_286;
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
  long alStack_258 [2];
  undefined2 uStack_248;
  undefined8 uStack_246;
  undefined8 uStack_23e;
  undefined8 uStack_236;
  undefined8 uStack_22e;
  undefined8 uStack_226;
  undefined6 uStack_21e;
  undefined2 uStack_218;
  undefined6 uStack_216;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined1 uStack_1a0;
  undefined6 uStack_190;
  undefined2 uStack_18a;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined2 uStack_17a;
  undefined6 uStack_178;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 uStack_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  long lStack_158;
  long lStack_150;
  undefined1 uStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_128;
  undefined1 uStack_120;
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
  undefined1 uStack_a0;
  
  lVar3 = 0;
  alStack_3f0[2] = param_2;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  alStack_3f0[0] = *(long *)(lVar3 + -8);
  alStack_3f0[1] = *(long *)(alStack_3f0[0] + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar3 = 0xae78b0;
  puStack_3f8 = auStack_400 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  func_0x000115a8(0xae78b0,&UNK_007ce9c8);
  lStack_3d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = (long)(auStack_400 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_3d0 = lVar9;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar9 = lVar9 - extraout_x12_00;
  lVar4 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0x6f68476574696877;
  __s7SwiftUI5ImageV_6bundleACSS_So8NSBundleCSgtcfC(0x6f68476574696877,0xea00000000007473,0);
  (**(code **)(lVar12 + 0x68))
            (lVar10,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_00999670,
             lVar4);
  lVar14 = 0;
  lVar15 = 0;
  lVar3 = lVar10;
  __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
            (0,0,lVar10,uVar5);
  _swift_release(uVar5);
  (**(code **)(lVar12 + 8))(lVar10,lVar4);
  __s7SwiftUI9AlignmentV6centerACvgZ();
  uVar2 = 0;
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (auStack_2d0,0x4059000000000000,0,0x4059000000000000,0,lVar10,lVar4);
  uStack_182 = (undefined2)auStack_2d0._8_8_;
  uStack_180 = SUB86(auStack_2d0._8_8_,2);
  uStack_18a = (undefined2)auStack_2d0._0_8_;
  uStack_188 = SUB86(auStack_2d0._0_8_,2);
  uStack_172 = (undefined2)uStack_2b8;
  uStack_170 = (undefined6)((ulong)uStack_2b8 >> 0x10);
  uStack_17a = (undefined2)lStack_2c0;
  uStack_178 = (undefined6)((ulong)lStack_2c0 >> 0x10);
  uStack_162 = (undefined2)uStack_2a8;
  uStack_160 = (undefined6)((ulong)uStack_2a8 >> 0x10);
  uStack_16a = (undefined2)uStack_2b0;
  uStack_168 = (undefined6)((ulong)uStack_2b0 >> 0x10);
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  lStack_298 = 0;
  uStack_290 = 1;
  uStack_286 = uStack_188;
  uStack_280 = uStack_182;
  uStack_28e = uStack_190;
  uStack_288 = uStack_18a;
  uStack_276 = uStack_178;
  uStack_270 = uStack_172;
  uStack_27e = uStack_180;
  uStack_278 = uStack_17a;
  uStack_266 = uStack_168;
  uStack_26e = uStack_170;
  uStack_268 = uStack_16a;
  uStack_260 = uStack_162;
  uStack_25e = uStack_160;
  lVar13 = 0x4024000000000000;
  lVar4 = lStack_2c0;
  lStack_2a0 = lVar3;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lStack_328 = CONCAT62(uStack_276,uStack_278);
  lStack_330 = CONCAT62(uStack_27e,uStack_280);
  lStack_318 = CONCAT62(uStack_266,uStack_268);
  lStack_320 = CONCAT62(uStack_26e,uStack_270);
  lStack_338 = CONCAT62(uStack_286,uStack_288);
  lStack_340 = CONCAT62(uStack_28e,uStack_290);
  lStack_310 = CONCAT62(uStack_25e,uStack_260);
  lStack_348 = lStack_298;
  lStack_350 = lStack_2a0;
  alStack_258[1] = 0;
  uStack_248 = 1;
  uStack_23e = CONCAT26(uStack_182,uStack_188);
  uStack_246 = CONCAT26(uStack_18a,uStack_190);
  uStack_22e = CONCAT26(uStack_172,uStack_178);
  uStack_236 = CONCAT26(uStack_17a,uStack_180);
  uStack_226 = CONCAT26(uStack_16a,uStack_170);
  uStack_216 = uStack_160;
  uStack_21e = uStack_168;
  uStack_218 = uStack_162;
  alStack_258[0] = lVar3;
  func_0x00040cc8(&lStack_2a0,&lStack_110,0xae78b8,&UNK_007ce9d0);
  func_0x00040d10(alStack_258,0xae78b8,&UNK_007ce9d0);
  lStack_1f8 = lStack_338;
  lStack_200 = lStack_340;
  lStack_1e8 = lStack_328;
  lStack_1f0 = lStack_330;
  lStack_1d8 = lStack_318;
  lStack_1e0 = lStack_320;
  lStack_1d0 = lStack_310;
  lStack_208 = lStack_348;
  lStack_210 = lStack_350;
  uStack_1a0 = 0;
  lStack_150 = lStack_310;
  lStack_158 = lStack_318;
  uStack_160 = (undefined6)lStack_320;
  uStack_15a = (undefined2)((ulong)lStack_320 >> 0x30);
  uStack_168 = (undefined6)lStack_328;
  uStack_162 = (undefined2)((ulong)lStack_328 >> 0x30);
  uStack_170 = (undefined6)lStack_330;
  uStack_16a = (undefined2)((ulong)lStack_330 >> 0x30);
  uStack_178 = (undefined6)lStack_338;
  uStack_172 = (undefined2)((ulong)lStack_338 >> 0x30);
  uStack_180 = (undefined6)lStack_340;
  uStack_17a = (undefined2)((ulong)lStack_340 >> 0x30);
  uStack_188 = (undefined6)lStack_348;
  uStack_182 = (undefined2)((ulong)lStack_348 >> 0x30);
  uStack_190 = (undefined6)lStack_350;
  uStack_18a = (undefined2)((ulong)lStack_350 >> 0x30);
  uStack_120 = 0;
  lVar10 = lStack_330;
  lVar12 = lStack_320;
  lVar16 = lStack_350;
  uStack_1c8 = uVar2;
  lStack_1c0 = lVar13;
  lStack_1b8 = lVar4;
  lStack_1b0 = lVar14;
  lStack_1a8 = lVar15;
  uStack_148 = uVar2;
  lStack_140 = lVar13;
  lStack_130 = lVar14;
  lStack_128 = lVar15;
  func_0x00040cc8(&lStack_210,&lStack_110,0xae78c0,&UNK_007ce9d8);
  func_0x00040d10(&uStack_190,0xae78c0,&UNK_007ce9d8);
  lVar3 = alStack_3f0[2];
  puVar1 = puStack_3f8;
  FUN_000408e0(alStack_3f0[2],puStack_3f8);
  uVar8 = (ulong)*(byte *)(alStack_3f0[0] + 0x50);
  uVar11 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar6 = &UNK_0099eeb0;
  _swift_allocObject(&UNK_0099eeb0,uVar11 + alStack_3f0[1],uVar8 | 7);
  FUN_000409e8(puVar1,puVar6 + uVar11);
  lStack_100 = lVar3;
  uVar5 = 0xae78c8;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  uVar7 = uVar5;
  FUN_00040a60();
  uVar2 = 0x2c;
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (lVar9,FUN_00040a2c,puVar6,FUN_00040a58,&lStack_110,uVar5,uVar7);
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar5 = 0x4034000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  puVar1 = (undefined1 *)(lVar9 + *(int *)(lStack_3d8 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(long *)(puVar1 + 0x10) = lVar10;
  *(long *)(puVar1 + 0x18) = lVar12;
  *(long *)(puVar1 + 0x20) = lVar16;
  puVar1[0x28] = 0;
  lVar4 = lStack_3d0;
  lStack_308 = CONCAT71(uStack_1c7,uStack_1c8);
  lStack_2f8 = lStack_1b8;
  lStack_300 = lStack_1c0;
  lStack_2e8 = lStack_1a8;
  lStack_2f0 = lStack_1b0;
  uStack_2e0 = uStack_1a0;
  lStack_348 = lStack_208;
  lStack_350 = lStack_210;
  lStack_338 = lStack_1f8;
  lStack_340 = lStack_200;
  lStack_328 = lStack_1e8;
  lStack_330 = lStack_1f0;
  lStack_318 = lStack_1d8;
  lStack_320 = lStack_1e0;
  lStack_310 = lStack_1d0;
  func_0x00040cc8(lVar9,lStack_3d0,0xae78b0,&UNK_007ce9c8);
  lStack_c8 = lStack_308;
  lStack_d0 = lStack_310;
  lStack_b8 = lStack_2f8;
  lStack_c0 = lStack_300;
  lStack_a8 = lStack_2e8;
  lStack_b0 = lStack_2f0;
  uStack_a0 = uStack_2e0;
  lStack_108 = lStack_348;
  lStack_110 = lStack_350;
  lStack_f8 = lStack_338;
  lStack_100 = lStack_340;
  lStack_e8 = lStack_328;
  lStack_f0 = lStack_330;
  lStack_d8 = lStack_318;
  lStack_e0 = lStack_320;
  *(undefined1 *)(param_1 + 0xe) = uStack_2e0;
  param_1[0xb] = lStack_2f8;
  param_1[10] = lStack_300;
  param_1[0xd] = lStack_2e8;
  param_1[0xc] = lStack_2f0;
  param_1[7] = lStack_318;
  param_1[6] = lStack_320;
  param_1[9] = lStack_308;
  param_1[8] = lStack_310;
  param_1[3] = lStack_338;
  param_1[2] = lStack_340;
  param_1[5] = lStack_328;
  param_1[4] = lStack_330;
  param_1[1] = lStack_348;
  *param_1 = lStack_350;
  lVar3 = 0xae7930;
  func_0x000115a8(0xae7930,&UNK_007cea10);
  func_0x00040cc8(lVar4,(long)param_1 + (long)*(int *)(lVar3 + 0x30),0xae78b0,&UNK_007ce9c8);
  func_0x00040cc8(&lStack_110,auStack_3c8,0xae78c0,&UNK_007ce9d8);
  func_0x00040d10(lVar9,0xae78b0,&UNK_007ce9c8);
  func_0x00040d10(lVar4,0xae78b0,&UNK_007ce9c8);
  func_0x00040d10(&lStack_350,0xae78c0,&UNK_007ce9d8);
  return;
}



/* Entry: 0003fa90; end: 0003fc0f;  */

void FUN_0003fa90(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = 0;
  __s7SwiftUI13OpenURLActionVMa();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x14));
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar6,*puVar1,puVar1[1]);
  lVar4 = lVar6;
  (**(code **)(lVar9 + 0x30))(lVar6,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x00040d10(lVar6,0xae6dd0,&UNK_007ce690);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,lVar6,lVar3);
    FUN_00047820(puVar5);
    __s7SwiftUI13OpenURLActionV14callAsFunctionyy10Foundation3URLVF(lVar7);
    (**(code **)(lVar8 + 8))(puVar5,lVar2);
    (**(code **)(lVar9 + 8))(lVar7,lVar3);
  }
  return;
}



/* Entry: 0003fc10; end: 0003ff97;  */

void FUN_0003fc10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_458 [152];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
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
  undefined8 uStack_348;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
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
  undefined *puStack_128;
  undefined1 uStack_120;
  undefined8 uStack_110;
  long lStack_108;
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
  
  lVar5 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  param_6 = param_6 + *(int *)(lVar5 + 0x18);
  uVar6 = *(undefined8 *)(param_6 + 0x18);
  lVar5 = *(long *)(param_6 + 0x20);
  FUN_0001393c(param_6,uVar6);
  (**(code **)(lVar5 + 8))();
  uVar9 = uVar6;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uVar4 = (char)uVar9;
  uStack_e0 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4024000000000000);
  uStack_e8 = CONCAT71(uStack_e8._1_7_,(char)uVar9);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_100 = 0x4031000000000000;
  uStack_f8 = 0xd5;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  uStack_110 = uVar6;
  lStack_108 = lVar5;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uStack_308 = uStack_e8;
  uStack_310 = uStack_f0;
  uStack_2f8 = uStack_d8;
  uStack_300 = uStack_e0;
  uStack_2e8 = uStack_c8;
  uStack_2f0 = uStack_d0;
  uStack_2e0 = (undefined1)uStack_c0;
  lStack_328 = lStack_108;
  uStack_330 = uStack_110;
  uStack_318 = uStack_f8;
  uStack_320 = uStack_100;
  uVar6 = uStack_100;
  func_0x00040cc8(&uStack_330,&uStack_1b0,0xae7900,&UNK_007ce9f8);
  uVar9 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4051800000000000);
  uStack_188 = uStack_308;
  uStack_190 = uStack_310;
  uStack_178 = uStack_2f8;
  uStack_180 = uStack_300;
  uStack_168 = uStack_2e8;
  uStack_170 = uStack_2f0;
  uStack_160 = CONCAT71(uStack_160._1_7_,uStack_2e0);
  lStack_1a8 = lStack_328;
  uStack_1b0 = uStack_330;
  uStack_198 = uStack_318;
  uStack_1a0 = uStack_320;
  func_0x00040d10(&uStack_110,0xae7900,&UNK_007ce9f8);
  puVar7 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar8 = puVar7;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_280 = uStack_160;
  uStack_2a8 = uStack_188;
  uStack_2b0 = uStack_190;
  uStack_298 = uStack_178;
  uStack_2a0 = uStack_180;
  uStack_288 = uStack_168;
  uStack_290 = uStack_170;
  lStack_2c8 = lStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_398 = uStack_188;
  uStack_3a0 = uStack_190;
  uStack_388 = uStack_178;
  uStack_390 = uStack_180;
  uStack_368 = CONCAT71(uStack_277,uVar4);
  uStack_378 = uStack_168;
  uStack_380 = uStack_170;
  uStack_370 = uStack_160;
  lStack_3b8 = lStack_1a8;
  uStack_3c0 = uStack_1b0;
  uStack_3a8 = uStack_198;
  uStack_3b0 = uStack_1a0;
  uStack_218 = uStack_188;
  uStack_220 = uStack_190;
  uStack_208 = uStack_178;
  uStack_210 = uStack_180;
  uStack_1f8 = uStack_168;
  uStack_200 = uStack_170;
  uStack_250 = 0;
  uStack_340 = 0;
  uStack_1f0 = uStack_160;
  lStack_238 = lStack_1a8;
  uStack_240 = uStack_1b0;
  uStack_228 = uStack_198;
  uStack_230 = uStack_1a0;
  uStack_1c0 = 0;
  uStack_360 = uVar9;
  uStack_358 = uVar6;
  uStack_350 = param_4;
  uStack_348 = param_5;
  uStack_278 = uVar4;
  uStack_270 = uVar9;
  uStack_268 = uVar6;
  uStack_260 = param_4;
  uStack_258 = param_5;
  uStack_1e8 = uVar4;
  uStack_1e0 = uVar9;
  uStack_1d8 = uVar6;
  uStack_1d0 = param_4;
  uStack_1c8 = param_5;
  func_0x00040cc8(&uStack_2d0,&uStack_110,0xae78f0,&UNK_007ce9f0);
  func_0x00040d10(&uStack_240,0xae78f0,&UNK_007ce9f0);
  uStack_148 = uStack_358;
  uStack_150 = uStack_360;
  uStack_138 = uStack_348;
  uStack_140 = uStack_350;
  uStack_130 = CONCAT71(uStack_33f,uStack_340);
  uStack_188 = uStack_398;
  uStack_190 = uStack_3a0;
  uStack_178 = uStack_388;
  uStack_180 = uStack_390;
  uStack_168 = uStack_378;
  uStack_170 = uStack_380;
  uStack_158 = uStack_368;
  uStack_160 = uStack_370;
  lStack_1a8 = lStack_3b8;
  uStack_1b0 = uStack_3c0;
  uStack_198 = uStack_3a8;
  uStack_1a0 = uStack_3b0;
  lVar5 = 0xae78c8;
  puStack_128 = puVar7;
  uStack_120 = (char)puVar8;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  lVar5 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar5 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar5 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar5);
  auVar10 = NEON_fmov(0x4036000000000000,8);
  puVar1[1] = auVar10._8_8_;
  *puVar1 = auVar10._0_8_;
  lVar5 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24)) = 0x100;
  param_1[0xd] = uStack_148;
  param_1[0xc] = uStack_150;
  param_1[0xf] = uStack_138;
  param_1[0xe] = uStack_140;
  param_1[0x11] = puStack_128;
  param_1[0x10] = uStack_130;
  *(undefined1 *)(param_1 + 0x12) = uStack_120;
  param_1[5] = uStack_188;
  param_1[4] = uStack_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = uStack_168;
  param_1[8] = uStack_170;
  param_1[0xb] = uStack_158;
  param_1[10] = uStack_160;
  param_1[1] = lStack_1a8;
  *param_1 = uStack_1b0;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  uStack_a8 = uStack_358;
  uStack_b0 = uStack_360;
  uStack_98 = uStack_348;
  uStack_a0 = uStack_350;
  uStack_90 = CONCAT71(uStack_33f,uStack_340);
  uStack_e8 = uStack_398;
  uStack_f0 = uStack_3a0;
  uStack_d8 = uStack_388;
  uStack_e0 = uStack_390;
  uStack_c8 = uStack_378;
  uStack_d0 = uStack_380;
  uStack_b8 = uStack_368;
  uStack_c0 = uStack_370;
  lStack_108 = lStack_3b8;
  uStack_110 = uStack_3c0;
  uStack_f8 = uStack_3a8;
  uStack_100 = uStack_3b0;
  puStack_88 = puVar7;
  uStack_80 = (char)puVar8;
  func_0x00040cc8(&uStack_1b0,auStack_458,0xae78e0,&UNK_007ce9e8);
  func_0x00040d10(&uStack_110,0xae78e0,&UNK_007ce9e8);
  return;
}



/* Entry: 0003ff98; end: 0003ffa3;  */

void FUN_0003ff98(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_009995a8
  )();
  return;
}



/* Entry: 0003ffa4; end: 0003ffeb;  */

void FUN_0003ffa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  __s7SwiftUI9AlignmentV6centerACvgZ();
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar1 = 0xae77d8;
  func_0x000115a8(0xae77d8,&UNK_007ce8f8);
  FUN_0003f3d8((long)param_1 + (long)*(int *)(lVar1 + 0x2c));
  return;
}



/* Entry: 0003ffec; end: 00040103;  */

long * FUN_0003ffec(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    uVar7 = 0xae6710;
    func_0x000115a8(0xae6710,&UNK_007ce8f0);
    plVar8 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar7);
    bVar6 = (int)plVar8 != 1;
    if (bVar6) {
      *param_1 = *param_2;
      _swift_retain();
    }
    else {
      lVar9 = 0;
      __s7SwiftUI13OpenURLActionVMa();
      (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar7,!bVar6);
    iVar4 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    lVar9 = (long)param_1 + (long)iVar4;
    lVar3 = (long)param_2 + (long)iVar4;
    lVar12 = *(long *)(lVar3 + 0x18);
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
    *(long *)(lVar9 + 0x18) = lVar12;
    pcVar11 = (code *)**(undefined8 **)(lVar12 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar11)(lVar9,lVar3,lVar12);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar9 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 00040104; end: 0004018b;  */

void FUN_00040104(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar1);
  if ((int)puVar2 == 1) {
    lVar3 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
  }
  else {
    _swift_release(*param_1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x14) + 8));
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x18));
  lVar3 = *(long *)(param_1[3] + -8);
  if ((*(byte *)(lVar3 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 0004018c; end: 0004037b;  */

undefined8 * FUN_0004018c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  uVar5 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  puVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar5);
  bVar4 = (int)puVar6 != 1;
  if (bVar4) {
    *param_1 = *param_2;
    _swift_retain();
  }
  else {
    lVar7 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar5,!bVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar5 = puVar1[1];
  *puVar6 = *puVar1;
  puVar6[1] = uVar5;
  lVar7 = (long)param_1 + (long)iVar3;
  lVar2 = (long)param_2 + (long)iVar3;
  lVar9 = *(long *)(lVar2 + 0x18);
  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
  *(long *)(lVar7 + 0x18) = lVar9;
  pcVar8 = (code *)**(undefined8 **)(lVar9 + -8);
  _swift_bridgeObjectRetain();
  (*pcVar8)(lVar7,lVar2,lVar9);
  return param_1;
}



/* Entry: 0004037c; end: 000404db;  */

void FUN_0004037c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00040434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      param_1[4] = param_2[4];
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_0099bb20)(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}



/* Entry: 000404dc; end: 000405a3;  */

long FUN_000404dc(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  lVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar4);
  if ((int)lVar5 == 1) {
    lVar5 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2,lVar5);
    _swift_storeEnumTagMultiPayload(param_1,lVar4,1);
  }
  else {
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar2 = (undefined8 *)(param_1 + iVar1);
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar6 = *puVar3;
  uVar8 = puVar3[3];
  uVar7 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar6;
  puVar2[3] = uVar8;
  puVar2[2] = uVar7;
  puVar2[4] = puVar3[4];
  return param_1;
}



/* Entry: 000405a4; end: 000406af;  */

long FUN_000405a4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    lVar3 = 0xae6710;
    func_0x00040d10(param_1,0xae6710,&UNK_007ce8f0);
    func_0x000115a8(0xae6710,&UNK_007ce8f0);
    lVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar3);
    if ((int)lVar4 == 1) {
      lVar4 = 0;
      __s7SwiftUI13OpenURLActionVMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
      _swift_storeEnumTagMultiPayload(param_1,lVar3,1);
    }
    else {
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
    }
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  FUN_00011670(puVar1);
  uVar6 = *puVar2;
  uVar7 = puVar2[3];
  uVar5 = puVar2[2];
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar7;
  puVar1[2] = uVar5;
  puVar1[4] = puVar2[4];
  return param_1;
}



/* Entry: 000406b0; end: 000406bb;  */

void FUN_000406b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 000406bc; end: 00040747;  */

ulong FUN_000406bc(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0xae77e0;
  func_0x000115a8(0xae77e0,&UNK_007ce958);
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00040718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 00040748; end: 00040753;  */

void FUN_00040748(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 00040754; end: 000407db;  */

void FUN_00040754(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0xae77e0;
  func_0x000115a8(0xae77e0,&UNK_007ce958);
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000407b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = (ulong)((int)param_2 - 1);
  return;
}



/* Entry: 000407dc; end: 000408ab;  */

void FUN_000407dc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x00040858();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_007ce978;
    puStack_28 = &UNK_007ce990;
    _swift_initStructMetadata(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 000408ac; end: 000408df;  */

void FUN_000408ac(void)

{
  FUN_00040c84(0xae7888,0xae7890,&UNK_007ce9a8,PTR___s7SwiftUI6ZStackVyxGAA4ViewAAMc_00999728);
  return;
}



/* Entry: 000408e0; end: 00040923;  */

undefined8 FUN_000408e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00040924; end: 000409e7;  */

void FUN_00040924(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  uVar3 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  puVar4 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,uVar3);
  if ((int)puVar4 == 1) {
    lVar5 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 8))(puVar1,lVar5);
  }
  else {
    _swift_release(*puVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar2 + 0x14) + 8));
  FUN_00011670((long)puVar1 + (long)*(int *)(lVar2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000409e8; end: 00040a2b;  */

undefined8 FUN_000409e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00040a2c; end: 00040a57;  */

void FUN_00040a2c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar4 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar2 = 0;
  __s7SwiftUI13OpenURLActionVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  puVar1 = (undefined8 *)
           (unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)) + (long)*(int *)(lVar4 + 0x14)
           );
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar7,*puVar1,puVar1[1]);
  lVar4 = lVar7;
  (**(code **)(lVar10 + 0x30))(lVar7,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x00040d10(lVar7,0xae6dd0,&UNK_007ce690);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,lVar7,lVar3);
    FUN_00047820(puVar6);
    __s7SwiftUI13OpenURLActionV14callAsFunctionyy10Foundation3URLVF(lVar8);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    (**(code **)(lVar10 + 8))(lVar8,lVar3);
  }
  return;
}



/* Entry: 00040a58; end: 00040a5f;  */

void FUN_00040a58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_458 [152];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
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
  undefined8 uStack_348;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
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
  undefined *puStack_128;
  undefined1 uStack_120;
  undefined8 uStack_110;
  long lStack_108;
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
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar5 = 0;
  __s23ExtensionsStickerPicker13LoggedOutViewVMa();
  lVar9 = lVar9 + *(int *)(lVar5 + 0x18);
  uVar6 = *(undefined8 *)(lVar9 + 0x18);
  lVar5 = *(long *)(lVar9 + 0x20);
  FUN_0001393c(lVar9,uVar6);
  (**(code **)(lVar5 + 8))();
  uVar10 = uVar6;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uVar4 = (char)uVar10;
  uStack_e0 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4024000000000000);
  uStack_e8 = CONCAT71(uStack_e8._1_7_,(char)uVar10);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_100 = 0x4031000000000000;
  uStack_f8 = 0xd5;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  uStack_110 = uVar6;
  lStack_108 = lVar5;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uStack_308 = uStack_e8;
  uStack_310 = uStack_f0;
  uStack_2f8 = uStack_d8;
  uStack_300 = uStack_e0;
  uStack_2e8 = uStack_c8;
  uStack_2f0 = uStack_d0;
  uStack_2e0 = (undefined1)uStack_c0;
  lStack_328 = lStack_108;
  uStack_330 = uStack_110;
  uStack_318 = uStack_f8;
  uStack_320 = uStack_100;
  uVar6 = uStack_100;
  func_0x00040cc8(&uStack_330,&uStack_1b0,0xae7900,&UNK_007ce9f8);
  uVar10 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4051800000000000);
  uStack_188 = uStack_308;
  uStack_190 = uStack_310;
  uStack_178 = uStack_2f8;
  uStack_180 = uStack_300;
  uStack_168 = uStack_2e8;
  uStack_170 = uStack_2f0;
  uStack_160 = CONCAT71(uStack_160._1_7_,uStack_2e0);
  lStack_1a8 = lStack_328;
  uStack_1b0 = uStack_330;
  uStack_198 = uStack_318;
  uStack_1a0 = uStack_320;
  func_0x00040d10(&uStack_110,0xae7900,&UNK_007ce9f8);
  puVar7 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar8 = puVar7;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_280 = uStack_160;
  uStack_2a8 = uStack_188;
  uStack_2b0 = uStack_190;
  uStack_298 = uStack_178;
  uStack_2a0 = uStack_180;
  uStack_288 = uStack_168;
  uStack_290 = uStack_170;
  lStack_2c8 = lStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_398 = uStack_188;
  uStack_3a0 = uStack_190;
  uStack_388 = uStack_178;
  uStack_390 = uStack_180;
  uStack_368 = CONCAT71(uStack_277,uVar4);
  uStack_378 = uStack_168;
  uStack_380 = uStack_170;
  uStack_370 = uStack_160;
  lStack_3b8 = lStack_1a8;
  uStack_3c0 = uStack_1b0;
  uStack_3a8 = uStack_198;
  uStack_3b0 = uStack_1a0;
  uStack_218 = uStack_188;
  uStack_220 = uStack_190;
  uStack_208 = uStack_178;
  uStack_210 = uStack_180;
  uStack_1f8 = uStack_168;
  uStack_200 = uStack_170;
  uStack_250 = 0;
  uStack_340 = 0;
  uStack_1f0 = uStack_160;
  lStack_238 = lStack_1a8;
  uStack_240 = uStack_1b0;
  uStack_228 = uStack_198;
  uStack_230 = uStack_1a0;
  uStack_1c0 = 0;
  uStack_360 = uVar10;
  uStack_358 = uVar6;
  uStack_350 = param_4;
  uStack_348 = param_5;
  uStack_278 = uVar4;
  uStack_270 = uVar10;
  uStack_268 = uVar6;
  uStack_260 = param_4;
  uStack_258 = param_5;
  uStack_1e8 = uVar4;
  uStack_1e0 = uVar10;
  uStack_1d8 = uVar6;
  uStack_1d0 = param_4;
  uStack_1c8 = param_5;
  func_0x00040cc8(&uStack_2d0,&uStack_110,0xae78f0,&UNK_007ce9f0);
  func_0x00040d10(&uStack_240,0xae78f0,&UNK_007ce9f0);
  uStack_148 = uStack_358;
  uStack_150 = uStack_360;
  uStack_138 = uStack_348;
  uStack_140 = uStack_350;
  uStack_130 = CONCAT71(uStack_33f,uStack_340);
  uStack_188 = uStack_398;
  uStack_190 = uStack_3a0;
  uStack_178 = uStack_388;
  uStack_180 = uStack_390;
  uStack_168 = uStack_378;
  uStack_170 = uStack_380;
  uStack_158 = uStack_368;
  uStack_160 = uStack_370;
  lStack_1a8 = lStack_3b8;
  uStack_1b0 = uStack_3c0;
  uStack_198 = uStack_3a8;
  uStack_1a0 = uStack_3b0;
  lVar9 = 0xae78c8;
  puStack_128 = puVar7;
  uStack_120 = (char)puVar8;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24));
  lVar9 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar9 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar9 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar9);
  auVar11 = NEON_fmov(0x4036000000000000,8);
  puVar1[1] = auVar11._8_8_;
  *puVar1 = auVar11._0_8_;
  lVar9 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) = 0x100;
  param_1[0xd] = uStack_148;
  param_1[0xc] = uStack_150;
  param_1[0xf] = uStack_138;
  param_1[0xe] = uStack_140;
  param_1[0x11] = puStack_128;
  param_1[0x10] = uStack_130;
  *(undefined1 *)(param_1 + 0x12) = uStack_120;
  param_1[5] = uStack_188;
  param_1[4] = uStack_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = uStack_168;
  param_1[8] = uStack_170;
  param_1[0xb] = uStack_158;
  param_1[10] = uStack_160;
  param_1[1] = lStack_1a8;
  *param_1 = uStack_1b0;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  uStack_a8 = uStack_358;
  uStack_b0 = uStack_360;
  uStack_98 = uStack_348;
  uStack_a0 = uStack_350;
  uStack_90 = CONCAT71(uStack_33f,uStack_340);
  uStack_e8 = uStack_398;
  uStack_f0 = uStack_3a0;
  uStack_d8 = uStack_388;
  uStack_e0 = uStack_390;
  uStack_c8 = uStack_378;
  uStack_d0 = uStack_380;
  uStack_b8 = uStack_368;
  uStack_c0 = uStack_370;
  lStack_108 = lStack_3b8;
  uStack_110 = uStack_3c0;
  uStack_f8 = uStack_3a8;
  uStack_100 = uStack_3b0;
  puStack_88 = puVar7;
  uStack_80 = (char)puVar8;
  func_0x00040cc8(&uStack_1b0,auStack_458,0xae78e0,&UNK_007ce9e8);
  func_0x00040d10(&uStack_110,0xae78e0,&UNK_007ce9e8);
  return;
}



/* Entry: 00040a60; end: 00040baf;  */

void FUN_00040a60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000000ae78d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae78c8;
  FUN_00016c74(0xae78c8,&UNK_007ce9e0);
  uVar2 = uVar1;
  func_0x00040af8();
  uVar3 = 0xae7920;
  FUN_00040c84(0xae7920,0xae7928,&UNK_007d19c0,
               PTR___s7SwiftUI11_ClipEffectVyxGAA12ViewModifierAAMc_00999198);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae78d0 = puVar4;
  return;
}



/* Entry: 00040bb0; end: 00040bd3;  */

void FUN_00040bb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = 0xae7900;
  if (puRam0000000000ae78f8 == (undefined *)0x0) {
    FUN_00016c74(0xae7900,&UNK_007ce9f8);
    uVar2 = uVar1;
    FUN_00040c44();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_00999278;
    puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    uStack_40 = uVar2;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1
               ,&uStack_40);
    puRam0000000000ae78f8 = puVar3;
  }
  return;
}



/* Entry: 00040bd4; end: 00040c43;  */

void FUN_00040bd4(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_00999278;
    puVar2 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
    uStack_40 = uVar1;
    _swift_getWitnessTable
              (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,
               param_2,&uStack_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 00040c44; end: 00040c83;  */

void FUN_00040c44(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &__s23ExtensionsStickerPicker7SIGTextV7SwiftUI4ViewAAMc;
  _swift_getWitnessTable
            (&__s23ExtensionsStickerPicker7SIGTextV7SwiftUI4ViewAAMc,
             &__s23ExtensionsStickerPicker7SIGTextVN);
  puRam0000000000ae7908 = puVar1;
  return;
}



/* Entry: 00040c84; end: 00040d4f;  */

void FUN_00040c84(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 00040d50; end: 00040e0b;  */

void __s23ExtensionsStickerPicker12NoAvatarViewV19stickerImageFetcher15stringsProviderAcA0bhI0CSg_AA0bC16StringsProviding_ptcfC
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  uVar2 = 0xae7938;
  func_0x000115a8(0xae7938,&UNK_007cea20);
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(param_1 + 1,&uStack_48,uVar2);
  lVar3 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  iVar1 = *(int *)(lVar3 + 0x18);
  puVar4 = &UNK_007cea28;
  _swift_getKeyPath();
  *(undefined **)((long)param_1 + (long)iVar1) = puVar4;
  uVar2 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  _swift_storeEnumTagMultiPayload((long)param_1 + (long)iVar1,uVar2,0);
  *param_1 = param_2;
  FUN_0003f3c0(param_3,(long)param_1 + (long)*(int *)(lVar3 + 0x1c));
  return;
}



/* Entry: 00040e0c; end: 00040e43;  */

void __s23ExtensionsStickerPicker12NoAvatarViewVMa(undefined8 param_1)

{
  if (lRam0000000000ae7998 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&__s23ExtensionsStickerPicker12NoAvatarViewVMn);
  return;
}



/* Entry: 00040e44; end: 00040e4b;  */

void FUN_00040e44(void)

{
  __s7SwiftUI17EnvironmentValuesV7openURLAA13OpenURLActionVvg();
  return;
}



/* Entry: 00040e4c; end: 00041193;  */

void FUN_00040e4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  lVar3 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar3 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar10 = lVar11 + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)&puStack_a0 - uVar10;
  FUN_000420cc();
  uVar9 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar13 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar4 = &UNK_0099ef18;
  _swift_allocObject(&UNK_0099ef18,uVar13 + lVar11,uVar9 | 7);
  FUN_00042114(lVar12,puVar4 + uVar13);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - uVar10;
  FUN_000420cc();
  uVar5 = 0;
  __sScMMa();
  __sScM6sharedScMvgZ();
  uVar6 = uVar5;
  FUN_000421a4();
  uVar10 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &UNK_0099ef40;
  _swift_allocObject(&UNK_0099ef40,uVar10 + lVar11,uVar9 | 7);
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  *(undefined8 *)(puVar7 + 0x18) = uVar6;
  FUN_00042114(lVar12,puVar7 + uVar10);
  lVar3 = 0;
  __sScPMa();
  lVar11 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar9 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar12 - uVar9;
  __sScP13userInitiatedScPvgZ(lVar12);
  iVar2 = 2;
  FUN_0040c9a8(2,0x1a,4,0);
  if (iVar2 == 0) {
    lVar14 = 0xae6728;
    func_0x000115a8(0xae6728,&UNK_007cea70);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar14 + 0x24));
    lVar14 = 0;
    __s7SwiftUI13_TaskModifierVMa();
    (**(code **)(lVar11 + 0x20))((long)puVar1 + (long)*(int *)(lVar14 + 0x14),lVar12,lVar3);
    *puVar1 = &UNK_007cea68;
    puVar1[1] = puVar7;
    *param_1 = FUN_00042158;
    param_1[1] = puVar4;
  }
  else {
    lVar14 = 0;
    __s7SwiftUI14_TaskModifier2VMa();
    lStack_90 = *(long *)(lVar14 + -8);
    lStack_88 = lVar14;
    lStack_80 = lVar12;
    (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_90 + 0x40));
    lVar15 = lVar12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    puStack_98 = param_1;
    __ss11_StringGutsV4growyySiF(0x11);
    _swift_bridgeObjectRelease(uStack_68);
    uStack_70 = 0xd000000000000037;
    uStack_68 = 0x80000000008b5e70;
    uStack_78 = 0x26;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_0099b2e8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_0099b2c0,PTR___sSis23CustomStringConvertiblesWP_0099b2e8);
    puStack_a0 = puVar4;
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    uVar5 = uStack_68;
    uVar6 = uStack_70;
    (*(code *)PTR____chkstk_darwin_00999f48)();
    lVar14 = lVar15 - uVar9;
    (**(code **)(lVar11 + 0x10))(lVar14,lVar12,lVar3);
    __s7SwiftUI14_TaskModifier2V4name18executorPreference8priority6actionACSS_Sch_pSgScPyyYaYAcntcfC
              (lVar15,uVar6,uVar5,0,0,lVar14,&UNK_007cea68,puVar7);
    (**(code **)(lVar11 + 8))(lVar12,lVar3);
    lVar3 = 0xae6730;
    func_0x000115a8(0xae6730,&UNK_007cd4e0);
    puVar1 = puStack_98;
    (**(code **)(lStack_90 + 0x20))
              ((long)puStack_98 + (long)*(int *)(lVar3 + 0x24),lVar15,lStack_88);
    *puVar1 = FUN_00042158;
    puVar1[1] = puStack_a0;
  }
  return;
}



/* Entry: 00041194; end: 0004127f;  */

void FUN_00041194(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_3;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = uVar3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar4 = 0xae79f0;
  func_0x000115a8(0xae79f0,&UNK_007ceb48);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar1 = lVar4;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 0;
  lVar4 = 0xae79f8;
  func_0x000115a8(0xae79f8,&UNK_007ceb50);
  FUN_00041280((long)plVar1 + (long)*(int *)(lVar4 + 0x2c),param_4,param_3);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_60,param_2,0,0,1,param_4,param_3);
  lVar4 = 0xae7a00;
  func_0x000115a8(0xae7a00,&UNK_007ceb58);
  puVar2 = (undefined8 *)((long)plVar1 + (long)*(int *)(lVar4 + 0x24));
  puVar2[1] = uStack_58;
  *puVar2 = uStack_60;
  puVar2[3] = uStack_48;
  puVar2[2] = uStack_50;
  puVar2[5] = uStack_38;
  puVar2[4] = uStack_40;
  return;
}



/* Entry: 00041280; end: 0004196b;  */

void FUN_00041280(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long alStack_3e0 [5];
  undefined8 uStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  undefined1 auStack_368 [104];
  undefined6 uStack_300;
  undefined2 uStack_2fa;
  undefined6 uStack_2f8;
  undefined2 uStack_2f2;
  undefined6 uStack_2f0;
  undefined2 uStack_2ea;
  undefined6 uStack_2e8;
  undefined2 uStack_2e2;
  undefined6 uStack_2e0;
  undefined2 uStack_2da;
  undefined6 uStack_2d8;
  undefined2 uStack_2d2;
  undefined6 uStack_2d0;
  undefined2 uStack_2ca;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  undefined1 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined *puStack_228;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined1 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 uStack_1d0;
  undefined6 uStack_1ce;
  undefined1 uStack_1c8;
  undefined1 uStack_1c7;
  undefined6 uStack_1c6;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined1 uStack_1b8;
  undefined1 uStack_1b7;
  undefined6 uStack_1b6;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c0 [64];
  
  lVar4 = 0;
  lStack_3b0 = param_7;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  lStack_3a0 = *(long *)(lVar4 + -8);
  lStack_380 = lVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar11 = (long)alStack_3e0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xae7a08;
  lStack_398 = extraout_x12;
  lStack_390 = lVar11;
  func_0x000115a8(0xae7a08,&UNK_007ceb60);
  lStack_388 = lVar4;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar11 = lVar11 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_370 = lVar11;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  plVar13 = (long *)(lVar11 - extraout_x12_00);
  lVar4 = 0;
  __s7SwiftUI5ImageV12ResizingModeOMa();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = (long)plVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_128 = *(undefined8 *)(param_6 + 0x10);
  lStack_130 = *(long *)(param_6 + 8);
  plVar5 = (long *)0xae79e8;
  lStack_378 = param_6;
  func_0x000115a8(0xae79e8,&UNK_007ceb40);
  __s7SwiftUI5StateV12wrappedValuexvg(&lStack_1e8);
  if (lStack_1e8 == 0) {
    uStack_3b8 = 0;
    alStack_3e0[4] = 0;
    uStack_3a8 = 0;
    lStack_3b0 = 0;
    alStack_3e0[1] = 0;
    alStack_3e0[0] = 0;
    alStack_3e0[3] = 0;
    alStack_3e0[2] = 0;
    uStack_258 = 0;
  }
  else {
    (**(code **)(lVar14 + 0x68))
              (lVar11,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_00999670,
               lVar4);
    dVar15 = 0.0;
    param_5 = 0;
    lVar6 = lVar11;
    __s7SwiftUI5ImageV9resizable9capInsets12resizingModeAcA04EdgeF0V_AC08ResizingH0OtF
              (0,0,0,lVar11,lStack_1e8);
    (**(code **)(lVar14 + 8))(lVar11,lVar4);
    __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
    dVar16 = 430.0;
    if (dVar15 <= 430.0) {
      dVar16 = dVar15;
    }
    __s7SwiftUI9AlignmentV6centerACvgZ();
    __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
              (auStack_c0,dVar16,0,0,1,lVar11,lVar4);
    _swift_release(lStack_1e8);
    uStack_2f2 = (undefined2)auStack_c0._8_8_;
    uStack_2f0 = SUB86(auStack_c0._8_8_,2);
    uStack_2fa = (undefined2)auStack_c0._0_8_;
    uStack_2f8 = SUB86(auStack_c0._0_8_,2);
    uStack_2e2 = (undefined2)auStack_c0._24_8_;
    uStack_2e0 = SUB86(auStack_c0._24_8_,2);
    uStack_2ea = (undefined2)auStack_c0._16_8_;
    uStack_2e8 = SUB86(auStack_c0._16_8_,2);
    uStack_2d2 = (undefined2)auStack_c0._40_8_;
    uStack_2d0 = SUB86(auStack_c0._40_8_,2);
    uStack_2da = (undefined2)auStack_c0._32_8_;
    uStack_2d8 = SUB86(auStack_c0._32_8_,2);
    lStack_1e0 = 0;
    uStack_1d8 = 1;
    param_4 = CONCAT26(uStack_2ea,uStack_2f0);
    uStack_1ce = uStack_2f8;
    uStack_1c8 = (undefined1)auStack_c0._8_8_;
    uStack_1c7 = SUB81(auStack_c0._8_8_,1);
    uStack_1d6 = uStack_300;
    uStack_1d0 = uStack_2fa;
    uStack_1be = uStack_2e8;
    uStack_1b8 = (undefined1)auStack_c0._24_8_;
    uStack_1b7 = SUB81(auStack_c0._24_8_,1);
    uStack_1c6 = uStack_2f0;
    uStack_1c0 = uStack_2ea;
    uStack_1ae = uStack_2d8;
    uStack_1b6 = uStack_2e0;
    uStack_1b0 = (undefined1)auStack_c0._32_8_;
    uStack_1af = SUB81(auStack_c0._32_8_,1);
    lStack_128 = 0;
    uStack_120 = 1;
    uStack_f6 = uStack_2d8;
    uStack_f0 = uStack_2d2;
    uStack_fe = uStack_2e0;
    uStack_f8 = uStack_2da;
    uStack_106 = uStack_2e8;
    uStack_100 = uStack_2e2;
    uStack_10e = uStack_2f0;
    uStack_108 = uStack_2ea;
    uStack_116 = uStack_2f8;
    uStack_110 = uStack_2f2;
    uStack_118 = uStack_2fa;
    lStack_1e8 = lVar6;
    uStack_1a8 = uStack_2d2;
    uStack_1a6 = uStack_2d0;
    lStack_130 = lVar6;
    uStack_ee = uStack_2d0;
    func_0x00043250(&lStack_1e8,&lStack_250,0xae78b8,&UNK_007ce9d0);
    plVar5 = &lStack_130;
    func_0x00043298(plVar5,0xae78b8,&UNK_007ce9d0);
    uStack_3b8 = CONCAT62(uStack_1ce,uStack_1d0);
    alStack_3e0[4] = CONCAT62(uStack_1d6,uStack_1d8);
    uStack_3a8 = lStack_1e0;
    lStack_3b0 = lStack_1e8;
    alStack_3e0[1] = CONCAT62(uStack_1ae,CONCAT11(uStack_1af,uStack_1b0));
    param_3 = CONCAT62(uStack_1b6,CONCAT11(uStack_1b7,uStack_1b8));
    alStack_3e0[3] = CONCAT62(uStack_1be,uStack_1c0);
    alStack_3e0[2] = CONCAT62(uStack_1c6,CONCAT11(uStack_1c7,uStack_1c8));
    uStack_258 = CONCAT62(uStack_1a6,uStack_1a8);
    alStack_3e0[0] = param_3;
  }
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar13 = (long)plVar5;
  plVar13[1] = 0;
  *(undefined1 *)(plVar13 + 2) = 0;
  lVar4 = 0xae7a10;
  func_0x000115a8(0xae7a10,&UNK_007ceb68);
  lVar11 = lStack_378;
  lVar14 = lStack_390;
  iVar2 = *(int *)(lVar4 + 0x2c);
  FUN_000420cc(lStack_378,lStack_390);
  uVar10 = (ulong)*(byte *)(lStack_3a0 + 0x50);
  uVar12 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
  puVar7 = &UNK_0099ef68;
  _swift_allocObject(&UNK_0099ef68,uVar12 + lStack_398,uVar10 | 7);
  FUN_00042114(lVar14,puVar7 + uVar12);
  uStack_120 = (undefined2)lVar11;
  uStack_11e = (undefined6)((ulong)lVar11 >> 0x10);
  uVar17 = 0xae78c8;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  uVar8 = uVar17;
  FUN_00040a60();
  uVar3 = 4;
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            ((long)plVar13 + (long)iVar2,FUN_00042e04,puVar7,FUN_000431b8,&lStack_130,uVar17,uVar8);
  __s7SwiftUI4EdgeO3SetV3topAEvgZ();
  uVar17 = 0xc043000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar4 = 0xae7a18;
  lVar6 = param_3;
  lVar18 = param_4;
  lVar19 = param_5;
  func_0x000115a8(0xae7a18,&UNK_007ceb70);
  puVar1 = (undefined1 *)((long)plVar13 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar3;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(long *)(puVar1 + 0x10) = param_3;
  *(long *)(puVar1 + 0x18) = param_4;
  *(long *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uVar17 = 0x4024000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  puVar1 = (undefined1 *)((long)plVar13 + (long)*(int *)(lStack_388 + 0x24));
  *puVar1 = (char)lVar4;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(long *)(puVar1 + 0x10) = lVar6;
  *(long *)(puVar1 + 0x18) = lVar18;
  *(long *)(puVar1 + 0x20) = lVar19;
  puVar1[0x28] = 0;
  lVar11 = lVar11 + *(int *)(lStack_380 + 0x1c);
  lVar4 = *(long *)(lVar11 + 0x18);
  lVar14 = *(long *)(lVar11 + 0x20);
  FUN_0001393c(lVar11,lVar4);
  (**(code **)(lVar14 + 0x18))();
  puVar7 = &UNK_007ceb78;
  _swift_getKeyPath();
  puVar9 = puVar7;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  lVar11 = 0x4034000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  uStack_240 = 0x4028000000000000;
  uStack_238 = 0x49;
  uStack_230 = 0;
  uStack_220 = 1;
  uStack_218 = SUB81(puVar9,0);
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1d6 = 0x402800000000;
  uStack_1d0 = 0x49;
  uStack_1ce = 0;
  uStack_1c8 = 0;
  uStack_1c0 = SUB82(puVar7,0);
  uStack_1be = (undefined6)((ulong)puVar7 >> 0x10);
  uStack_1b8 = 1;
  uStack_1a8 = (undefined2)lVar11;
  uStack_1a6 = (undefined6)((ulong)lVar11 >> 0x10);
  uStack_188 = 0;
  lStack_250 = lVar4;
  lStack_248 = lVar14;
  puStack_228 = puVar7;
  lStack_210 = lVar11;
  lStack_208 = lVar6;
  lStack_200 = lVar18;
  lStack_1f8 = lVar19;
  lStack_1e8 = lVar4;
  lStack_1e0 = lVar14;
  uStack_1b0 = uStack_218;
  lStack_1a0 = lVar6;
  lStack_198 = lVar18;
  lStack_190 = lVar19;
  func_0x00043250(&lStack_250,&lStack_130,0xae7a20,&UNK_007ceba8);
  func_0x00043298(&lStack_1e8,0xae7a20,&UNK_007ceba8);
  lVar11 = lStack_370;
  uStack_280 = uStack_3b8;
  uStack_288 = alStack_3e0[4];
  uStack_290 = uStack_3a8;
  lStack_298 = lStack_3b0;
  uStack_260 = alStack_3e0[1];
  lStack_268 = alStack_3e0[0];
  uStack_270 = alStack_3e0[3];
  uStack_278 = alStack_3e0[2];
  func_0x00043250(plVar13,lStack_370,0xae7a08,&UNK_007ceb60);
  lStack_2b8 = lStack_208;
  lStack_2c0 = lStack_210;
  lStack_2a8 = lStack_1f8;
  lStack_2b0 = lStack_200;
  uStack_2f8 = (undefined6)lStack_248;
  uStack_2f2 = (undefined2)((ulong)lStack_248 >> 0x30);
  uStack_300 = (undefined6)lStack_250;
  uStack_2fa = (undefined2)((ulong)lStack_250 >> 0x30);
  uStack_2e8 = (undefined6)uStack_238;
  uStack_2e2 = (undefined2)((ulong)uStack_238 >> 0x30);
  uStack_2f0 = (undefined6)uStack_240;
  uStack_2ea = (undefined2)((ulong)uStack_240 >> 0x30);
  lStack_2c8 = CONCAT71(uStack_217,uStack_218);
  uStack_2d8 = SUB86(puStack_228,0);
  uStack_2d2 = (undefined2)((ulong)puStack_228 >> 0x30);
  uStack_2e0 = (undefined6)CONCAT71(uStack_22f,uStack_230);
  uStack_2da = (undefined2)((uint7)uStack_22f >> 0x28);
  uStack_2d0 = (undefined6)CONCAT71(uStack_21f,uStack_220);
  uStack_2ca = (undefined2)((uint7)uStack_21f >> 0x28);
  uStack_178 = uStack_290;
  lStack_180 = lStack_298;
  uStack_148 = uStack_260;
  lStack_150 = lStack_268;
  uStack_158 = uStack_270;
  uStack_160 = uStack_278;
  uStack_168 = uStack_280;
  uStack_170 = uStack_288;
  uStack_2a0 = uStack_1f0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  uStack_140 = uStack_258;
  param_1[10] = uStack_258;
  param_1[7] = uStack_270;
  param_1[6] = uStack_278;
  param_1[9] = uStack_260;
  param_1[8] = lStack_268;
  param_1[3] = uStack_290;
  param_1[2] = lStack_298;
  param_1[5] = uStack_280;
  param_1[4] = uStack_288;
  lVar4 = 0xae7a28;
  func_0x000115a8(0xae7a28,&UNK_007cebb0);
  func_0x00043250(lVar11,(long)param_1 + (long)*(int *)(lVar4 + 0x40),0xae7a08,&UNK_007ceb60);
  plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x50));
  uStack_d0 = uStack_2a0;
  lStack_e8 = lStack_2b8;
  uStack_f0 = (undefined2)lStack_2c0;
  uStack_ee = (undefined6)((ulong)lStack_2c0 >> 0x10);
  lStack_d8 = lStack_2a8;
  lStack_e0 = lStack_2b0;
  lStack_128 = CONCAT26(uStack_2f2,uStack_2f8);
  lStack_130 = CONCAT26(uStack_2fa,uStack_300);
  uStack_118 = (undefined2)uStack_2e8;
  uStack_116 = (undefined6)((ulong)CONCAT26(uStack_2e2,uStack_2e8) >> 0x10);
  uStack_120 = (undefined2)uStack_2f0;
  uStack_11e = (undefined6)((ulong)CONCAT26(uStack_2ea,uStack_2f0) >> 0x10);
  uStack_108 = (undefined2)uStack_2d8;
  uStack_106 = (undefined6)((ulong)CONCAT26(uStack_2d2,uStack_2d8) >> 0x10);
  uStack_110 = (undefined2)uStack_2e0;
  uStack_10e = (undefined6)((ulong)CONCAT26(uStack_2da,uStack_2e0) >> 0x10);
  uStack_f8 = (undefined2)lStack_2c8;
  uStack_f6 = (undefined6)((ulong)lStack_2c8 >> 0x10);
  uStack_100 = (undefined2)uStack_2d0;
  uStack_fe = (undefined6)((ulong)CONCAT26(uStack_2ca,uStack_2d0) >> 0x10);
  plVar5[1] = lStack_128;
  *plVar5 = lStack_130;
  plVar5[3] = CONCAT26(uStack_2e2,uStack_2e8);
  plVar5[2] = CONCAT26(uStack_2ea,uStack_2f0);
  plVar5[9] = lStack_2b8;
  plVar5[8] = lStack_2c0;
  plVar5[0xb] = lStack_2a8;
  plVar5[10] = lStack_2b0;
  plVar5[5] = CONCAT26(uStack_2d2,uStack_2d8);
  plVar5[4] = CONCAT26(uStack_2da,uStack_2e0);
  plVar5[7] = lStack_2c8;
  plVar5[6] = CONCAT26(uStack_2ca,uStack_2d0);
  *(undefined1 *)(plVar5 + 0xc) = uStack_2a0;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x60));
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00043250(&lStack_180,auStack_368,0xae7a30,&UNK_007cebb8);
  func_0x00043250(&lStack_130,auStack_368,0xae7a20,&UNK_007ceba8);
  func_0x00043298(plVar13,0xae7a08,&UNK_007ceb60);
  func_0x00043298(&uStack_300,0xae7a20,&UNK_007ceba8);
  func_0x00043298(lVar11,0xae7a08,&UNK_007ceb60);
  func_0x00043298(&lStack_298,0xae7a30,&UNK_007cebb8);
  return;
}



/* Entry: 0004196c; end: 00041a43;  */

void FUN_0004196c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar3 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  *(long *)(unaff_x22 + 0x30) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  uVar4 = 0;
  __sScMMa();
  uVar5 = uVar4;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar5;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00041a44,uVar4,uVar5);
  return;
}



/* Entry: 00041a44; end: 00041b9f;  */

void FUN_00041a44(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar8 = **(long **)(unaff_x22 + 0x18);
  *(long *)(unaff_x22 + 0x68) = lVar8;
  if (lVar8 == 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar1 = *(long *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    _swift_retain(lVar8);
    __s10Foundation3URLV6stringACSgSSh_tcfC(uVar9,0xd000000000000051,0x80000000008b5eb0);
    pcVar6 = *(code **)(lVar1 + 0x30);
    *(code **)(unaff_x22 + 0x70) = pcVar6;
    (*pcVar6)(uVar9,1,uVar7);
    if ((int)uVar9 != 1) {
      pcVar6 = *(code **)(*(long *)(unaff_x22 + 0x38) + 0x20);
      *(code **)(unaff_x22 + 0x78) = pcVar6;
      (*pcVar6)(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30));
      pcVar5 = section_000001a8.segname + 8;
      _swift_task_alloc();
      *(char **)(unaff_x22 + 0x80) = pcVar5;
      *(long *)pcVar5 = unaff_x22;
      *(code **)(pcVar5 + 8) = FUN_00041ba0;
      uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(pcVar5 + 0x160) = 0;
      *(long *)(pcVar5 + 0x168) = lVar8;
      *(undefined8 *)(pcVar5 + 0x150) = uVar7;
      *(undefined8 *)(pcVar5 + 0x158) = 0;
      lVar8 = 0;
      __s10Foundation4DateVMa();
      *(long *)(pcVar5 + 0x170) = lVar8;
      lVar8 = *(long *)(lVar8 + -8);
      *(long *)(pcVar5 + 0x178) = lVar8;
      uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
      uVar3 = uVar4 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 0x180) = uVar3;
      uVar4 = uVar4 & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(pcVar5 + 0x188) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_0099c0e8)(0x2f6b8,0,0);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    _swift_release(lVar8);
    _swift_release(uVar7);
    func_0x00043298(uVar9,0xae6dd0,&UNK_007ce690);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00041b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00041ba0; end: 00041c03;  */

void FUN_00041ba0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x80));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_00041c04;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar3 = *(undefined8 *)(lVar4 + 0x60);
    pcVar1 = FUN_00041e68;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 00041c04; end: 00041e67;  */

void FUN_00041c04(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)(unaff_x22 + 0x88);
  pcVar9 = *(code **)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  FUN_0002e6b4(uVar11,uVar8);
  (*pcVar9)(uVar11,1,uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  if ((int)uVar11 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
              (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x30));
    _swift_release(uVar11);
    func_0x00043298(uVar8,0xae6dd0,&UNK_007ce690);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    (**(code **)(unaff_x22 + 0x78))(uVar11,uVar8);
    uVar8 = 0;
    __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(uVar11,0);
    if (lVar10 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIImage_00ac2a88;
      _objc_allocWithZone();
      func_0x00023304(uVar11,uVar8);
      uVar7 = uVar11;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar11,uVar8);
      func_0x007851c0();
      _objc_release(uVar7);
      FUN_00023358(uVar11,uVar8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar10 = *(long *)(unaff_x22 + 0x38);
      if (puVar3 == (undefined *)0x0) {
        _swift_release(uVar12);
        FUN_00023358(uVar11,uVar8);
        pcVar9 = *(code **)(lVar10 + 8);
        (*pcVar9)(uVar1,uVar7);
      }
      else {
        _objc_retain();
        puVar4 = puVar3;
        __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
        *(undefined **)(unaff_x22 + 0x10) = puVar4;
        _swift_retain();
        uVar5 = 0xae79e8;
        func_0x000115a8(0xae79e8,&UNK_007ceb40);
        __s7SwiftUI5StateV12wrappedValuexvs(unaff_x22 + 0x10,uVar5);
        _swift_release(uVar12);
        _swift_release(puVar4);
        _objc_release(puVar3);
        FUN_00023358(uVar11,uVar8);
        pcVar9 = *(code **)(lVar10 + 8);
        (*pcVar9)(uVar1,uVar7);
      }
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar2 = *(long *)(unaff_x22 + 0x38);
      _swift_errorRelease(lVar10);
      _swift_release(uVar11);
      pcVar9 = *(code **)(lVar2 + 8);
      (*pcVar9)(uVar8,uVar7);
    }
    (*pcVar9)(uVar6,uVar7);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00041e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00041e68; end: 000420cb;  */

/* WARNING: Removing unreachable block (ram,0x00041f34) */

void FUN_00041e68(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  pcVar9 = *(code **)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  FUN_0002e6b4(uVar10,uVar8);
  (*pcVar9)(uVar10,1,uVar6);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  if ((int)uVar10 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
              (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x30));
    _swift_release(uVar10);
    func_0x00043298(uVar8,0xae6dd0,&UNK_007ce690);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    (**(code **)(unaff_x22 + 0x78))(uVar7,uVar8);
    uVar5 = 0;
    __s10Foundation4DataV10contentsOf7optionsAcA3URLVh_So20NSDataReadingOptionsVtKcfC(uVar7,0);
    puVar2 = PTR__OBJC_CLASS___UIImage_00ac2a88;
    _objc_allocWithZone();
    func_0x00023304(uVar7,uVar5);
    uVar8 = uVar7;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar7,uVar5);
    func_0x007851c0();
    _objc_release(uVar8);
    FUN_00023358(uVar7,uVar5);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar1 = *(long *)(unaff_x22 + 0x38);
    if (puVar2 == (undefined *)0x0) {
      _swift_release(uVar11);
      FUN_00023358(uVar7,uVar5);
      pcVar9 = *(code **)(lVar1 + 8);
      (*pcVar9)(uVar8,uVar10);
    }
    else {
      _objc_retain();
      puVar3 = puVar2;
      __s7SwiftUI5ImageV02uiC0ACSo7UIImageC_tcfC();
      *(undefined **)(unaff_x22 + 0x10) = puVar3;
      _swift_retain();
      uVar4 = 0xae79e8;
      func_0x000115a8(0xae79e8,&UNK_007ceb40);
      __s7SwiftUI5StateV12wrappedValuexvs(unaff_x22 + 0x10,uVar4);
      _swift_release(uVar11);
      _swift_release(puVar3);
      _objc_release(puVar2);
      FUN_00023358(uVar7,uVar5);
      pcVar9 = *(code **)(lVar1 + 8);
      (*pcVar9)(uVar8,uVar10);
    }
    (*pcVar9)(uVar6,uVar10);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000420c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000420cc; end: 0004210f;  */

undefined8 FUN_000420cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00042110; end: 00042113;  */

void FUN_00042110(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(puVar1[2]);
  lVar6 = (long)*(int *)(lVar2 + 0x18);
  uVar3 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  lVar4 = (long)puVar1 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar1 + lVar6,lVar4);
  }
  else {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar6));
  }
  FUN_00011670((long)puVar1 + (long)*(int *)(lVar2 + 0x1c));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00042114; end: 00042157;  */

undefined8 FUN_00042114(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00042158; end: 000421a3;  */

void FUN_00042158(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar4 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  uVar3 = param_3;
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *param_1 = uVar3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar5 = 0xae79f0;
  func_0x000115a8(0xae79f0,&UNK_007ceb48);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
  __s7SwiftUI19HorizontalAlignmentV6centerACvgZ();
  *plVar1 = lVar5;
  plVar1[1] = 0;
  *(undefined1 *)(plVar1 + 2) = 0;
  lVar5 = 0xae79f8;
  func_0x000115a8(0xae79f8,&UNK_007ceb50);
  FUN_00041280((long)plVar1 + (long)*(int *)(lVar5 + 0x2c),lVar4,param_3);
  __s7SwiftUI13GeometryProxyV4sizeSo6CGSizeVvg();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  __s7SwiftUI12_FrameLayoutV5width6height9alignmentAC12CoreGraphics7CGFloatVSg_AjA9AlignmentVtcfC
            (&uStack_60,param_2,0,0,1,lVar4,param_3);
  lVar5 = 0xae7a00;
  func_0x000115a8(0xae7a00,&UNK_007ceb58);
  puVar2 = (undefined8 *)((long)plVar1 + (long)*(int *)(lVar5 + 0x24));
  puVar2[1] = uStack_58;
  *puVar2 = uStack_60;
  puVar2[3] = uStack_48;
  puVar2[2] = uStack_50;
  puVar2[5] = uStack_38;
  puVar2[4] = uStack_40;
  return;
}



/* Entry: 000421a4; end: 000421e7;  */

void FUN_000421a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000ae77c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __sScMMa(0xff);
  puVar2 = PTR___sScMScAsMc_0099be88;
  _swift_getWitnessTable(PTR___sScMScAsMc_0099be88,uVar1);
  puRam0000000000ae77c8 = puVar2;
  return;
}



/* Entry: 000421e8; end: 000422c7;  */

void FUN_000421e8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff)));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(puVar1[2]);
  lVar6 = (long)*(int *)(lVar2 + 0x18);
  uVar3 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  lVar4 = (long)puVar1 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar1 + lVar6,lVar4);
  }
  else {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar6));
  }
  FUN_00011670((long)puVar1 + (long)*(int *)(lVar2 + 0x1c));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000422c8; end: 0004233b;  */

void FUN_000422c8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  qword *pqVar5;
  ulong uVar6;
  long unaff_x20;
  qword unaff_x22;
  
  lVar4 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  pqVar5 = &section_00000068.size;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0x10) = pqVar5;
  *pqVar5 = unaff_x22;
  pqVar5[1] = (qword)FUN_0004233c;
  pqVar5[3] = unaff_x20 + (uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar1 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar5[4] = uVar1;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar5[5] = uVar6;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  pqVar5[6] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  pqVar5[7] = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar1 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar5[8] = uVar1;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  pqVar5[9] = uVar6;
  uVar2 = 0;
  __sScMMa();
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  pqVar5[10] = uVar3;
  FUN_000421a4();
  __sScA15unownedExecutorScevgTj();
  pqVar5[0xb] = uVar2;
  pqVar5[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00041a44,uVar2,uVar3);
  return;
}



/* Entry: 0004233c; end: 00042377;  */

void FUN_0004233c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00042374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 00042378; end: 00042397;  */

void FUN_00042378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_0099ba58)(param_1,&UNK_0083e6dc,1);
  return;
}



/* Entry: 00042398; end: 000424af;  */

long * FUN_00042398(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar3 = *param_2;
  *param_1 = lVar3;
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar3 = param_2[1];
    lVar7 = param_2[2];
    param_1[1] = lVar3;
    param_1[2] = lVar7;
    lVar6 = (long)*(int *)(param_3 + 0x18);
    _swift_retain();
    _swift_retain(lVar3);
    _swift_retain(lVar7);
    uVar4 = 0xae6710;
    func_0x000115a8(0xae6710,&UNK_007ce8f0);
    lVar3 = (long)param_2 + lVar6;
    _swift_getEnumCaseMultiPayload(lVar3,uVar4);
    bVar2 = (int)lVar3 != 1;
    if (bVar2) {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      _swift_retain();
    }
    else {
      lVar3 = 0;
      __s7SwiftUI13OpenURLActionVMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3)
      ;
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar6,uVar4,!bVar2);
    lVar3 = (long)*(int *)(param_3 + 0x1c);
    lVar7 = *(long *)((long)param_2 + lVar3 + 0x18);
    *(undefined8 *)((long)param_1 + lVar3 + 0x20) = *(undefined8 *)((long)param_2 + lVar3 + 0x20);
    *(long *)((long)param_1 + lVar3 + 0x18) = lVar7;
    (*(code *)**(undefined8 **)(lVar7 + -8))();
  }
  else {
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 000424b0; end: 0004254b;  */

void FUN_000424b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_release(param_1[2]);
  lVar3 = (long)*(int *)(param_2 + 0x18);
  uVar1 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  lVar2 = (long)param_1 + lVar3;
  _swift_getEnumCaseMultiPayload(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + lVar3,lVar2);
  }
  else {
    _swift_release(*(undefined8 *)((long)param_1 + lVar3));
  }
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x1c));
  lVar2 = *(long *)(param_1[3] + -8);
  if ((*(byte *)(lVar2 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00011684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 0004254c; end: 00042963;  */

undefined8 * FUN_0004254c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar4 = param_2[2];
  param_1[2] = uVar4;
  lVar5 = (long)*(int *)(param_3 + 0x18);
  _swift_retain();
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  uVar2 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  lVar3 = (long)param_2 + lVar5;
  _swift_getEnumCaseMultiPayload(lVar3,uVar2);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
    _swift_retain();
  }
  else {
    lVar3 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
  }
  _swift_storeEnumTagMultiPayload((long)param_1 + lVar5,uVar2,!bVar1);
  lVar3 = (long)*(int *)(param_3 + 0x1c);
  lVar5 = *(long *)((long)param_2 + lVar3 + 0x18);
  *(undefined8 *)((long)param_1 + lVar3 + 0x20) = *(undefined8 *)((long)param_2 + lVar3 + 0x20);
  *(long *)((long)param_1 + lVar3 + 0x18) = lVar5;
  (*(code *)**(undefined8 **)(lVar5 + -8))();
  return param_1;
}



/* Entry: 00042964; end: 0004296f;  */

void FUN_00042964(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 00042970; end: 000429ff;  */

ulong FUN_00042970(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0xae77e0;
  func_0x000115a8(0xae77e0,&UNK_007ce958);
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
    uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000429d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
    return uVar2;
  }
  uVar2 = *(ulong *)(param_1 + *(int *)(param_3 + 0x1c) + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 00042a00; end: 00042a0b;  */

void FUN_00042a00(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 00042a0c; end: 00042a97;  */

void FUN_00042a0c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0xae77e0;
  func_0x000115a8(0xae77e0,&UNK_007ce958);
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x00042a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))
              (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x1c) + 0x18) = (ulong)((int)param_2 - 1);
  return;
}



/* Entry: 00042a98; end: 00042b1b;  */

void FUN_00042a98(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = &UNK_007ceae8;
  puStack_38 = &UNK_007ceb00;
  lVar1 = 0x13f;
  func_0x00040858();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_007ceb18;
    _swift_initStructMetadata(param_1,0x100,4,&puStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 00042b1c; end: 00042b97;  */

void FUN_00042b1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0xae79d8;
  FUN_00016c74(0xae79d8,&UNK_007ceb30);
  uVar2 = 0xae79e0;
  FUN_000431c0(0xae79e0,0xae79d8,&UNK_007ceb30,
               PTR___s7SwiftUI14GeometryReaderVyxGAA4ViewAAMc_00999260);
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  _swift_getOpaqueTypeConformance(&uStack_40,&DAT_0083dc70,1);
  return;
}



/* Entry: 00042b98; end: 00042e03;  */

void FUN_00042b98(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = 0;
  __s7SwiftUI13OpenURLActionVMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar4 - extraout_x8_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar6,0xd000000000000034,0x80000000008b5f10);
  lVar2 = lVar6;
  (**(code **)(lVar8 + 0x30))(lVar6,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x00043298(lVar6,0xae6dd0,&UNK_007ce690);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar5,lVar6,lVar3);
    __s23ExtensionsStickerPicker12NoAvatarViewVMa();
    FUN_00047820(puVar4);
    __s7SwiftUI13OpenURLActionV14callAsFunctionyy10Foundation3URLVF(lVar5);
    (**(code **)(lVar7 + 8))(puVar4,lVar1);
    (**(code **)(lVar8 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 00042e04; end: 00042e2f;  */

void FUN_00042e04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = 0;
  __s7SwiftUI13OpenURLActionVMa(uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff));
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar5 - extraout_x8_00;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV6stringACSgSSh_tcfC(lVar7,0xd000000000000034,0x80000000008b5f10);
  lVar3 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    func_0x00043298(lVar7,0xae6dd0,&UNK_007ce690);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar6,lVar7,lVar2);
    __s23ExtensionsStickerPicker12NoAvatarViewVMa();
    FUN_00047820(puVar5);
    __s7SwiftUI13OpenURLActionV14callAsFunctionyy10Foundation3URLVF(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    (**(code **)(lVar9 + 8))(lVar6,lVar2);
  }
  return;
}



/* Entry: 00042e30; end: 000431b7;  */

void FUN_00042e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_458 [152];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
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
  undefined8 uStack_348;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
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
  undefined *puStack_128;
  undefined1 uStack_120;
  undefined8 uStack_110;
  long lStack_108;
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
  
  lVar5 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  param_6 = param_6 + *(int *)(lVar5 + 0x1c);
  uVar6 = *(undefined8 *)(param_6 + 0x18);
  lVar5 = *(long *)(param_6 + 0x20);
  FUN_0001393c(param_6,uVar6);
  (**(code **)(lVar5 + 0x10))();
  uVar9 = uVar6;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uVar4 = (char)uVar9;
  uStack_e0 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4024000000000000);
  uStack_e8 = CONCAT71(uStack_e8._1_7_,(char)uVar9);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_100 = 0x4031000000000000;
  uStack_f8 = 0x52;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  uStack_110 = uVar6;
  lStack_108 = lVar5;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uStack_308 = uStack_e8;
  uStack_310 = uStack_f0;
  uStack_2f8 = uStack_d8;
  uStack_300 = uStack_e0;
  uStack_2e8 = uStack_c8;
  uStack_2f0 = uStack_d0;
  uStack_2e0 = (undefined1)uStack_c0;
  lStack_328 = lStack_108;
  uStack_330 = uStack_110;
  uStack_318 = uStack_f8;
  uStack_320 = uStack_100;
  uVar6 = uStack_100;
  func_0x00043250(&uStack_330,&uStack_1b0,0xae7900,&UNK_007ce9f8);
  uVar9 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4046800000000000);
  uStack_188 = uStack_308;
  uStack_190 = uStack_310;
  uStack_178 = uStack_2f8;
  uStack_180 = uStack_300;
  uStack_168 = uStack_2e8;
  uStack_170 = uStack_2f0;
  uStack_160 = CONCAT71(uStack_160._1_7_,uStack_2e0);
  lStack_1a8 = lStack_328;
  uStack_1b0 = uStack_330;
  uStack_198 = uStack_318;
  uStack_1a0 = uStack_320;
  func_0x00043298(&uStack_110,0xae7900,&UNK_007ce9f8);
  puVar7 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar8 = puVar7;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_280 = uStack_160;
  uStack_2a8 = uStack_188;
  uStack_2b0 = uStack_190;
  uStack_298 = uStack_178;
  uStack_2a0 = uStack_180;
  uStack_288 = uStack_168;
  uStack_290 = uStack_170;
  lStack_2c8 = lStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_398 = uStack_188;
  uStack_3a0 = uStack_190;
  uStack_388 = uStack_178;
  uStack_390 = uStack_180;
  uStack_368 = CONCAT71(uStack_277,uVar4);
  uStack_378 = uStack_168;
  uStack_380 = uStack_170;
  uStack_370 = uStack_160;
  lStack_3b8 = lStack_1a8;
  uStack_3c0 = uStack_1b0;
  uStack_3a8 = uStack_198;
  uStack_3b0 = uStack_1a0;
  uStack_218 = uStack_188;
  uStack_220 = uStack_190;
  uStack_208 = uStack_178;
  uStack_210 = uStack_180;
  uStack_1f8 = uStack_168;
  uStack_200 = uStack_170;
  uStack_250 = 0;
  uStack_340 = 0;
  uStack_1f0 = uStack_160;
  lStack_238 = lStack_1a8;
  uStack_240 = uStack_1b0;
  uStack_228 = uStack_198;
  uStack_230 = uStack_1a0;
  uStack_1c0 = 0;
  uStack_360 = uVar9;
  uStack_358 = uVar6;
  uStack_350 = param_4;
  uStack_348 = param_5;
  uStack_278 = uVar4;
  uStack_270 = uVar9;
  uStack_268 = uVar6;
  uStack_260 = param_4;
  uStack_258 = param_5;
  uStack_1e8 = uVar4;
  uStack_1e0 = uVar9;
  uStack_1d8 = uVar6;
  uStack_1d0 = param_4;
  uStack_1c8 = param_5;
  func_0x00043250(&uStack_2d0,&uStack_110,0xae78f0,&UNK_007ce9f0);
  func_0x00043298(&uStack_240,0xae78f0,&UNK_007ce9f0);
  uStack_148 = uStack_358;
  uStack_150 = uStack_360;
  uStack_138 = uStack_348;
  uStack_140 = uStack_350;
  uStack_130 = CONCAT71(uStack_33f,uStack_340);
  uStack_188 = uStack_398;
  uStack_190 = uStack_3a0;
  uStack_178 = uStack_388;
  uStack_180 = uStack_390;
  uStack_168 = uStack_378;
  uStack_170 = uStack_380;
  uStack_158 = uStack_368;
  uStack_160 = uStack_370;
  lStack_1a8 = lStack_3b8;
  uStack_1b0 = uStack_3c0;
  uStack_198 = uStack_3a8;
  uStack_1a0 = uStack_3b0;
  lVar5 = 0xae78c8;
  puStack_128 = puVar7;
  uStack_120 = (char)puVar8;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  lVar5 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar5 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar5 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar5);
  auVar10 = NEON_fmov(0x4036000000000000,8);
  puVar1[1] = auVar10._8_8_;
  *puVar1 = auVar10._0_8_;
  lVar5 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar5 + 0x24)) = 0x100;
  param_1[0xd] = uStack_148;
  param_1[0xc] = uStack_150;
  param_1[0xf] = uStack_138;
  param_1[0xe] = uStack_140;
  param_1[0x11] = puStack_128;
  param_1[0x10] = uStack_130;
  *(undefined1 *)(param_1 + 0x12) = uStack_120;
  param_1[5] = uStack_188;
  param_1[4] = uStack_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = uStack_168;
  param_1[8] = uStack_170;
  param_1[0xb] = uStack_158;
  param_1[10] = uStack_160;
  param_1[1] = lStack_1a8;
  *param_1 = uStack_1b0;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  uStack_a8 = uStack_358;
  uStack_b0 = uStack_360;
  uStack_98 = uStack_348;
  uStack_a0 = uStack_350;
  uStack_90 = CONCAT71(uStack_33f,uStack_340);
  uStack_e8 = uStack_398;
  uStack_f0 = uStack_3a0;
  uStack_d8 = uStack_388;
  uStack_e0 = uStack_390;
  uStack_c8 = uStack_378;
  uStack_d0 = uStack_380;
  uStack_b8 = uStack_368;
  uStack_c0 = uStack_370;
  lStack_108 = lStack_3b8;
  uStack_110 = uStack_3c0;
  uStack_f8 = uStack_3a8;
  uStack_100 = uStack_3b0;
  puStack_88 = puVar7;
  uStack_80 = (char)puVar8;
  func_0x00043250(&uStack_1b0,auStack_458,0xae78e0,&UNK_007ce9e8);
  func_0x00043298(&uStack_110,0xae78e0,&UNK_007ce9e8);
  return;
}



/* Entry: 000431b8; end: 000431bf;  */

void FUN_000431b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_458 [152];
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
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
  undefined8 uStack_348;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_250;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  ulong uStack_190;
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
  undefined *puStack_128;
  undefined1 uStack_120;
  undefined8 uStack_110;
  long lStack_108;
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
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar5 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  lVar9 = lVar9 + *(int *)(lVar5 + 0x1c);
  uVar6 = *(undefined8 *)(lVar9 + 0x18);
  lVar5 = *(long *)(lVar9 + 0x20);
  FUN_0001393c(lVar9,uVar6);
  (**(code **)(lVar5 + 0x10))();
  uVar10 = uVar6;
  __s7SwiftUI4EdgeO3SetV8verticalAEvgZ();
  uVar4 = (char)uVar10;
  uStack_e0 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4024000000000000);
  uStack_e8 = CONCAT71(uStack_e8._1_7_,(char)uVar10);
  uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  uStack_100 = 0x4031000000000000;
  uStack_f8 = 0x52;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  uStack_110 = uVar6;
  lStack_108 = lVar5;
  uStack_d8 = param_3;
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uStack_308 = uStack_e8;
  uStack_310 = uStack_f0;
  uStack_2f8 = uStack_d8;
  uStack_300 = uStack_e0;
  uStack_2e8 = uStack_c8;
  uStack_2f0 = uStack_d0;
  uStack_2e0 = (undefined1)uStack_c0;
  lStack_328 = lStack_108;
  uStack_330 = uStack_110;
  uStack_318 = uStack_f8;
  uStack_320 = uStack_100;
  uVar6 = uStack_100;
  func_0x00043250(&uStack_330,&uStack_1b0,0xae7900,&UNK_007ce9f8);
  uVar10 = __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC(0x4046800000000000);
  uStack_188 = uStack_308;
  uStack_190 = uStack_310;
  uStack_178 = uStack_2f8;
  uStack_180 = uStack_300;
  uStack_168 = uStack_2e8;
  uStack_170 = uStack_2f0;
  uStack_160 = CONCAT71(uStack_160._1_7_,uStack_2e0);
  lStack_1a8 = lStack_328;
  uStack_1b0 = uStack_330;
  uStack_198 = uStack_318;
  uStack_1a0 = uStack_320;
  func_0x00043298(&uStack_110,0xae7900,&UNK_007ce9f8);
  puVar7 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  _objc_opt_self();
  func_0x007917e0();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar8 = puVar7;
  __s7SwiftUI4EdgeO3SetV3allAEvgZ();
  uStack_280 = uStack_160;
  uStack_2a8 = uStack_188;
  uStack_2b0 = uStack_190;
  uStack_298 = uStack_178;
  uStack_2a0 = uStack_180;
  uStack_288 = uStack_168;
  uStack_290 = uStack_170;
  lStack_2c8 = lStack_1a8;
  uStack_2d0 = uStack_1b0;
  uStack_2b8 = uStack_198;
  uStack_2c0 = uStack_1a0;
  uStack_398 = uStack_188;
  uStack_3a0 = uStack_190;
  uStack_388 = uStack_178;
  uStack_390 = uStack_180;
  uStack_368 = CONCAT71(uStack_277,uVar4);
  uStack_378 = uStack_168;
  uStack_380 = uStack_170;
  uStack_370 = uStack_160;
  lStack_3b8 = lStack_1a8;
  uStack_3c0 = uStack_1b0;
  uStack_3a8 = uStack_198;
  uStack_3b0 = uStack_1a0;
  uStack_218 = uStack_188;
  uStack_220 = uStack_190;
  uStack_208 = uStack_178;
  uStack_210 = uStack_180;
  uStack_1f8 = uStack_168;
  uStack_200 = uStack_170;
  uStack_250 = 0;
  uStack_340 = 0;
  uStack_1f0 = uStack_160;
  lStack_238 = lStack_1a8;
  uStack_240 = uStack_1b0;
  uStack_228 = uStack_198;
  uStack_230 = uStack_1a0;
  uStack_1c0 = 0;
  uStack_360 = uVar10;
  uStack_358 = uVar6;
  uStack_350 = param_4;
  uStack_348 = param_5;
  uStack_278 = uVar4;
  uStack_270 = uVar10;
  uStack_268 = uVar6;
  uStack_260 = param_4;
  uStack_258 = param_5;
  uStack_1e8 = uVar4;
  uStack_1e0 = uVar10;
  uStack_1d8 = uVar6;
  uStack_1d0 = param_4;
  uStack_1c8 = param_5;
  func_0x00043250(&uStack_2d0,&uStack_110,0xae78f0,&UNK_007ce9f0);
  func_0x00043298(&uStack_240,0xae78f0,&UNK_007ce9f0);
  uStack_148 = uStack_358;
  uStack_150 = uStack_360;
  uStack_138 = uStack_348;
  uStack_140 = uStack_350;
  uStack_130 = CONCAT71(uStack_33f,uStack_340);
  uStack_188 = uStack_398;
  uStack_190 = uStack_3a0;
  uStack_178 = uStack_388;
  uStack_180 = uStack_390;
  uStack_168 = uStack_378;
  uStack_170 = uStack_380;
  uStack_158 = uStack_368;
  uStack_160 = uStack_370;
  lStack_1a8 = lStack_3b8;
  uStack_1b0 = uStack_3c0;
  uStack_198 = uStack_3a8;
  uStack_1a0 = uStack_3b0;
  lVar9 = 0xae78c8;
  puStack_128 = puVar7;
  uStack_120 = (char)puVar8;
  func_0x000115a8(0xae78c8,&UNK_007ce9e0);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x24));
  lVar9 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar9 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_009993b0;
  lVar9 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar9);
  auVar11 = NEON_fmov(0x4036000000000000,8);
  puVar1[1] = auVar11._8_8_;
  *puVar1 = auVar11._0_8_;
  lVar9 = 0xae7928;
  func_0x000115a8(0xae7928,&UNK_007d19c0);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24)) = 0x100;
  param_1[0xd] = uStack_148;
  param_1[0xc] = uStack_150;
  param_1[0xf] = uStack_138;
  param_1[0xe] = uStack_140;
  param_1[0x11] = puStack_128;
  param_1[0x10] = uStack_130;
  *(undefined1 *)(param_1 + 0x12) = uStack_120;
  param_1[5] = uStack_188;
  param_1[4] = uStack_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  param_1[9] = uStack_168;
  param_1[8] = uStack_170;
  param_1[0xb] = uStack_158;
  param_1[10] = uStack_160;
  param_1[1] = lStack_1a8;
  *param_1 = uStack_1b0;
  param_1[3] = uStack_198;
  param_1[2] = uStack_1a0;
  uStack_a8 = uStack_358;
  uStack_b0 = uStack_360;
  uStack_98 = uStack_348;
  uStack_a0 = uStack_350;
  uStack_90 = CONCAT71(uStack_33f,uStack_340);
  uStack_e8 = uStack_398;
  uStack_f0 = uStack_3a0;
  uStack_d8 = uStack_388;
  uStack_e0 = uStack_390;
  uStack_c8 = uStack_378;
  uStack_d0 = uStack_380;
  uStack_b8 = uStack_368;
  uStack_c0 = uStack_370;
  lStack_108 = lStack_3b8;
  uStack_110 = uStack_3c0;
  uStack_f8 = uStack_3a8;
  uStack_100 = uStack_3b0;
  puStack_88 = puVar7;
  uStack_80 = (char)puVar8;
  func_0x00043250(&uStack_1b0,auStack_458,0xae78e0,&UNK_007ce9e8);
  func_0x00043298(&uStack_110,0xae78e0,&UNK_007ce9e8);
  return;
}



/* Entry: 000431c0; end: 000432d7;  */

void FUN_000431c0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_00016c74(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 000432d8; end: 000432db;  */

void FUN_000432d8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker12NoAvatarViewVMa();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  _swift_release(*puVar1);
  _swift_release(puVar1[1]);
  _swift_release(puVar1[2]);
  lVar6 = (long)*(int *)(lVar2 + 0x18);
  uVar3 = 0xae6710;
  func_0x000115a8(0xae6710,&UNK_007ce8f0);
  lVar4 = (long)puVar1 + lVar6;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
    __s7SwiftUI13OpenURLActionVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar1 + lVar6,lVar4);
  }
  else {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar6));
  }
  FUN_00011670((long)puVar1 + (long)*(int *)(lVar2 + 0x1c));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000432dc; end: 000433ff;  */

undefined8 *
__s23ExtensionsStickerPicker12PillTagsViewV13extensionType16showSearchButton0i12HostKeyboardK005onTaplM00im6SwitchK00N22AdvanceToNextInputMode18isTextFieldFocused4tags0V8Selected0noJ00nO7Recents0nO3Tag15stringsProviderAcA09ExtensionH0O_S2byycSgSbAS7SwiftUI7BindingVySbGSayAA0D3TagOGSbAYSgcyycyycyAYcAA0bC16StringsProviding_ptcfC
          (undefined1 *param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
          undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
          undefined4 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
          undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
          undefined8 param_21,undefined8 param_22,undefined8 *param_23)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  iVar1 = *(int *)(lVar2 + 0x44);
  puVar3 = &UNK_007cebd0;
  _swift_getKeyPath();
  *(undefined **)(param_1 + iVar1) = puVar3;
  uVar4 = 0xae6738;
  func_0x000115a8(0xae6738,&UNK_007cec00);
  _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar4,0);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined8 *)(param_1 + 8) = param_5;
  *(undefined8 *)(param_1 + 0x10) = param_6;
  param_1[0x18] = param_7;
  *(undefined8 *)(param_1 + 0x20) = param_8;
  *(undefined8 *)(param_1 + 0x28) = param_9;
  *(undefined8 *)(param_1 + 0x30) = param_10;
  *(undefined8 *)(param_1 + 0x38) = param_11;
  param_1[0x40] = param_12;
  *(undefined8 *)(param_1 + 0x50) = param_15;
  *(undefined8 *)(param_1 + 0x48) = param_14;
  *(undefined8 *)(param_1 + 0x60) = param_17;
  *(undefined8 *)(param_1 + 0x58) = param_16;
  *(undefined8 *)(param_1 + 0x70) = param_19;
  *(undefined8 *)(param_1 + 0x68) = param_18;
  *(undefined8 *)(param_1 + 0x80) = param_21;
  *(undefined8 *)(param_1 + 0x78) = param_20;
  *(undefined8 *)(param_1 + 0x88) = param_22;
  uVar5 = param_23[1];
  uVar4 = *param_23;
  uVar7 = param_23[3];
  uVar6 = param_23[2];
  *(undefined8 *)(param_1 + 0xb0) = param_23[4];
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar4;
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  return (undefined8 *)(param_1 + 0x90);
}



/* Entry: 00043400; end: 00043437;  */

void __s23ExtensionsStickerPicker12PillTagsViewVMa(undefined8 param_1)

{
  if (lRam0000000000ae7a98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&__s23ExtensionsStickerPicker12PillTagsViewVMn);
  return;
}



/* Entry: 00043438; end: 0004343f;  */

void FUN_00043438(void)

{
  __s7SwiftUI17EnvironmentValuesV11colorSchemeAA05ColorF0Ovg();
  return;
}



/* Entry: 00043440; end: 00043673;  */

void FUN_00043440(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x12;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  undefined1 *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  long lStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lVar3 = 0;
  lStack_a0 = param_1;
  uStack_90 = param_2;
  __s7SwiftUI15ScrollViewProxyVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar11 = auStack_b0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_3;
  lStack_a8 = extraout_x12;
  FUN_00043714();
  uStack_94 = (undefined4)lVar4;
  __s7SwiftUI4AxisO3SetV10horizontalAEvgZ();
  uVar5 = 0xae7b18;
  lStack_70 = param_3;
  func_0x000115a8(0xae7b18,&UNK_007cecf0);
  uVar6 = 0xae7b20;
  func_0x00048868(0xae7b20,0xae7b18,&UNK_007cecf0,FUN_00045164);
  __s7SwiftUI10ScrollViewV_15showsIndicators7contentACyxGAA4AxisO3SetV_SbxyXEtcfC
            (param_1,lVar4,0,FUN_0004515c,&uStack_80,uVar5,uVar6);
  uStack_80 = *(undefined8 *)(param_3 + 0x30);
  uStack_78 = *(undefined8 *)(param_3 + 0x38);
  lStack_70 = CONCAT71(lStack_70._1_7_,*(undefined1 *)(param_3 + 0x40));
  func_0x000115a8(0xae7b48,&UNK_007cf010);
  __s7SwiftUI7BindingV12wrappedValuexvg(&uStack_81);
  uVar5 = uStack_90;
  pcVar8 = *(code **)(lVar9 + 0x10);
  (*pcVar8)(puVar11,uStack_90,lVar3);
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar13 = uVar12 + 0x11 & (uVar12 ^ 0xffffffffffffffff);
  puVar7 = &UNK_0099f000;
  _swift_allocObject(&UNK_0099f000,uVar13 + extraout_x12,uVar12 | 7);
  uVar2 = (undefined1)uStack_94;
  puVar7[0x10] = uVar2;
  pcVar10 = *(code **)(lVar9 + 0x20);
  (*pcVar10)(puVar7 + uVar13,puVar11,lVar3);
  lVar4 = 0xae7b50;
  func_0x000115a8(0xae7b50,&UNK_007ced10);
  lVar9 = lStack_a0;
  puVar1 = (undefined1 *)(lStack_a0 + *(int *)(lVar4 + 0x24));
  *puVar1 = uStack_81;
  *(code **)(puVar1 + 8) = FUN_00045254;
  *(undefined **)(puVar1 + 0x10) = puVar7;
  (*pcVar8)(puVar11,uVar5,lVar3);
  uVar13 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar7 = &UNK_0099f028;
  _swift_allocObject(&UNK_0099f028,uVar13 + lStack_a8,uVar12 | 7);
  (*pcVar10)(puVar7 + uVar13,puVar11,lVar3);
  lVar4 = 0xae7b58;
  func_0x000115a8(0xae7b58,&UNK_007ced18);
  puVar1 = (undefined1 *)(lVar9 + *(int *)(lVar4 + 0x24));
  *puVar1 = uVar2;
  *(code **)(puVar1 + 8) = FUN_000452ec;
  *(undefined **)(puVar1 + 0x10) = puVar7;
  return;
}



/* Entry: 00043674; end: 000436b7;  */

undefined8 FUN_00043674(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 000436b8; end: 000436bb;  */

void FUN_000436b8(void)

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



/* Entry: 000436bc; end: 000436ff;  */

undefined8 FUN_000436bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00043700; end: 00043713;  */

void FUN_00043700(long param_1,undefined8 param_2)

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



/* Entry: 00043714; end: 000437b7;  */

ulong FUN_00043714(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  pcVar1 = *(code **)(param_1 + 0x50);
  uVar2 = 9;
  (*pcVar1)();
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
    (*pcVar1)();
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x48);
      uVar6 = *(ulong *)(lVar5 + 0x10);
      uVar2 = 0;
      while( true ) {
        if (uVar6 == uVar2) {
          return 9;
        }
        if (*(ulong *)(lVar5 + 0x10) <= uVar2) break;
        uVar4 = (ulong)*(byte *)(lVar5 + 0x20 + uVar2);
        uVar3 = uVar4;
        (*pcVar1)();
        uVar2 = uVar2 + 1;
        if ((uVar3 & 1) != 0) {
          return uVar4;
        }
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x437b8);
      (*pcVar1)();
    }
  }
  return 0;
}



/* Entry: 000437b8; end: 000438b3;  */

void FUN_000437b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = param_6;
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = uVar3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar4 = 0xae7b68;
  func_0x000115a8(0xae7b68,&UNK_007ced20);
  FUN_000438b4((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  uVar2 = (undefined1)param_6;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar6 = 0x4020000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar4 = 0xae7b30;
  uVar3 = param_3;
  uVar7 = param_4;
  uVar8 = param_5;
  func_0x000115a8(0xae7b30,&UNK_007cecf8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uVar6 = 0x4010000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar5 = 0xae7b18;
  func_0x000115a8(0xae7b18,&UNK_007cecf0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = (char)lVar4;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 000438b4; end: 0004418f;  */

void FUN_000438b4(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  code *pcVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 auStack_100 [2];
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
  undefined8 auStack_80 [2];
  long lStack_70;
  
  lVar3 = 0xae7b70;
  lStack_c8 = param_1;
  func_0x000115a8(0xae7b70,&UNK_007ced28);
  lStack_d8 = *(long *)(lVar3 + -8);
  lStack_c0 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_d8 + 0x40));
  lVar12 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_d0 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12;
  lVar3 = 0xae7b78;
  lStack_90 = lVar12;
  func_0x000115a8(0xae7b78,&UNK_007ced30);
  lStack_e8 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_e0 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12_00;
  lVar3 = 0xae7b80;
  lStack_88 = lVar12;
  func_0x000115a8(0xae7b80,&UNK_007ced38);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar12 = lVar12 - extraout_x12_01;
  lVar3 = 0;
  __s23ExtensionsStickerPicker12PillTagsViewVMa();
  lVar18 = *(long *)(lVar3 + -8);
  lVar19 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar17 = lVar12 - (lVar19 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0xae7b88;
  func_0x000115a8(0xae7b88,&UNK_007ced40);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar3 = lVar3 - extraout_x12_02;
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar3 = lVar3 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar16 = lVar3 - extraout_x12_04;
  bVar2 = *(char *)(param_2 + 0x18) != '\x01';
  if (bVar2) {
    lVar6 = 0xae7b90;
    func_0x000115a8(0xae7b90,&UNK_007ced48);
    pcVar14 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  }
  else {
    FUN_00043674(param_2,lVar17);
    uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar15 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
    puVar4 = &UNK_0099f118;
    _swift_allocObject(&UNK_0099f118,uVar15 + lVar19,uVar13 | 7);
    FUN_000436bc(lVar17,puVar4 + uVar15);
    uVar7 = 0xae7bb8;
    func_0x000115a8(0xae7bb8,&UNK_007ced60);
    uVar5 = uVar7;
    func_0x00046f40();
    __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
              (lVar16,0x48570,puVar4,FUN_000457a8,0,uVar7,uVar5);
    lVar6 = 0xae7b90;
    func_0x000115a8(0xae7b90,&UNK_007ced48);
    pcVar14 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
  }
  (*pcVar14)(lVar16,bVar2,1,lVar6);
  bVar2 = *(char *)(param_2 + 2) != '\x01';
  lStack_b0 = lVar16;
  if (!bVar2) {
    FUN_00043674(param_2,lVar17);
    uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar15 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
    puVar4 = &UNK_0099f0f0;
    _swift_allocObject(&UNK_0099f0f0,uVar15 + lVar19,uVar13 | 7);
    FUN_000436bc(lVar17,puVar4 + uVar15);
    uVar7 = 0xae7bb8;
    func_0x000115a8(0xae7bb8,&UNK_007ced60);
    uVar5 = uVar7;
    func_0x00046f40();
    __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
              (lVar3,FUN_00048564,puVar4,FUN_000453c8,0,uVar7,uVar5);
  }
  lVar6 = 0xae7b90;
  func_0x000115a8(0xae7b90,&UNK_007ced48);
  lStack_b8 = lVar3;
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar3,bVar2,1,lVar6);
  bVar2 = *(char *)(param_2 + 1) != '\x01';
  if (!bVar2) {
    FUN_00043674(param_2,lVar17);
    uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
    uVar15 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
    puVar4 = &UNK_0099f0c8;
    _swift_allocObject(&UNK_0099f0c8,uVar15 + lVar19,uVar13 | 7);
    FUN_000436bc(lVar17,puVar4 + uVar15);
    uVar7 = 0xae7c20;
    lStack_70 = param_2;
    func_0x000115a8(0xae7c20,&UNK_007cedb8);
    uVar5 = 0xae7c28;
    FUN_00048768(0xae7c28,0xae7c20,&UNK_007cedb8,0x483ac);
    __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
              (lVar12,FUN_00048398,puVar4,0x483a4,auStack_80,uVar7,uVar5);
  }
  lVar3 = 0xae7b98;
  func_0x000115a8(0xae7b98,&UNK_007ced50);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar12,bVar2,1,lVar3);
  FUN_00043674(param_2,lVar17);
  uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar15 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  puVar4 = &UNK_0099f050;
  _swift_allocObject(&UNK_0099f050,uVar15 + lVar19,uVar13 | 7);
  FUN_000436bc(lVar17,puVar4 + uVar15);
  uVar7 = 0xae7ba0;
  lStack_70 = param_2;
  func_0x000115a8(0xae7ba0,&UNK_007ced58);
  uVar5 = 0xae7ba8;
  lStack_f0 = lVar12;
  FUN_00048768(0xae7ba8,0xae7ba0,&UNK_007ced58,0x46f40);
  lVar3 = lStack_88;
  __s7SwiftUI6ButtonV6action5labelACyxGyyc_xyXEtcfC
            (FUN_00046ae0,puVar4,0x46f38,auStack_80,uVar7,uVar5);
  *(undefined1 *)(lVar3 + *(int *)(lStack_e8 + 0x34)) = 0;
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  FUN_00048194();
  puVar4 = &UNK_007ced80;
  auStack_80[0] = uVar7;
  _swift_getKeyPath(&UNK_007ced80);
  FUN_00043674(param_2,lVar17);
  puVar8 = &UNK_0099f078;
  _swift_allocObject(&UNK_0099f078,uVar15 + lVar19,uVar13 | 7);
  FUN_000436bc(lVar17,puVar8 + uVar15);
  puVar9 = &UNK_0099f0a0;
  _swift_allocObject(&UNK_0099f0a0,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_000482f4;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  uVar7 = 0xae7bf8;
  func_0x000115a8(0xae7bf8,&UNK_007ceda0);
  uVar5 = 0xae7c00;
  func_0x000115a8(0xae7c00,&UNK_007ceda8);
  uVar10 = 0xae7c08;
  func_0x00048520(0xae7c08,0xae7bf8,&UNK_007ceda0,PTR___sSayxGSksMc_0099b200);
  uVar11 = 0xae7c10;
  func_0x00048520(0xae7c10,0xae7c00,&UNK_007ceda8,PTR___s7SwiftUI6IDViewVyxq_GAA4ViewAAMc_00999708);
  *(undefined8 *)(lVar16 + -0x10) = uVar11;
  lVar18 = lStack_90;
  __s7SwiftUI7ForEachVA2A4ViewR0_rlE_2id7contentACyxq_q0_Gx_s7KeyPathCy7ElementQzq_Gq0_AKctcfC
            (lStack_90,auStack_80,puVar4,FUN_0004836c,puVar9,uVar7,uVar5,uVar10,
             PTR___sSiSHsWP_0099b2d0);
  lVar3 = lStack_a8;
  FUN_00048a54(lStack_b0,lStack_a8,0xae7b88,&UNK_007ced40);
  lVar6 = lStack_a0;
  FUN_00048a54(lStack_b8,lStack_a0,0xae7b88,&UNK_007ced40);
  lVar1 = lStack_98;
  FUN_00048a54(lVar12,lStack_98,0xae7b80,&UNK_007ced38);
  lVar12 = lStack_e0;
  FUN_00048a54(lStack_88,lStack_e0,0xae7b78,&UNK_007ced30);
  lVar19 = lStack_c0;
  lVar17 = lStack_d0;
  lVar16 = lStack_d8;
  pcVar14 = *(code **)(lStack_d8 + 0x10);
  (*pcVar14)(lStack_d0,lVar18,lStack_c0);
  lVar18 = lStack_c8;
  FUN_00048a54(lVar3,lStack_c8,0xae7b88,&UNK_007ced40);
  lVar3 = 0xae7c18;
  func_0x000115a8(0xae7c18,&UNK_007cedb0);
  FUN_00048a54(lVar6,lVar18 + *(int *)(lVar3 + 0x30),0xae7b88,&UNK_007ced40);
  FUN_00048a54(lVar1,lVar18 + *(int *)(lVar3 + 0x40),0xae7b80,&UNK_007ced38);
  FUN_00048a54(lVar12,lVar18 + *(int *)(lVar3 + 0x50),0xae7b78,&UNK_007ced30);
  (*pcVar14)(lVar18 + *(int *)(lVar3 + 0x60),lVar17,lVar19);
  pcVar14 = *(code **)(lVar16 + 8);
  (*pcVar14)(lStack_90,lVar19);
  FUN_00048988(lStack_88,0xae7b78,&UNK_007ced30);
  FUN_00048988(lStack_f0,0xae7b80,&UNK_007ced38);
  FUN_00048988(lStack_b8,0xae7b88,&UNK_007ced40);
  FUN_00048988(lStack_b0,0xae7b88,&UNK_007ced40);
  (*pcVar14)(lVar17,lVar19);
  FUN_00048988(lVar12,0xae7b78,&UNK_007ced30);
  FUN_00048988(lStack_98,0xae7b80,&UNK_007ced38);
  FUN_00048988(lStack_a0,0xae7b88,&UNK_007ced40);
  FUN_00048988(lStack_a8,0xae7b88,&UNK_007ced40);
  return;
}



/* Entry: 00044190; end: 00044267;  */

void FUN_00044190(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  char cStack_31;
  
  if (param_4 != '\t') {
    cStack_31 = param_4;
    __s7SwiftUI9UnitPointV6centerACvgZ();
    func_0x00045344();
    __s7SwiftUI15ScrollViewProxyV8scrollTo_6anchoryx_AA9UnitPointVSgtSHRzlF
              (&cStack_31,param_1,param_2,0,&UNK_0099e7d0,param_3);
  }
  return;
}



/* Entry: 00044268; end: 000442cf;  */

void FUN_00044268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uStack_31;
  
  uStack_31 = param_4;
  __s7SwiftUI9UnitPointV6centerACvgZ();
  func_0x00045344();
  __s7SwiftUI15ScrollViewProxyV8scrollTo_6anchoryx_AA9UnitPointVSgtSHRzlF
            (&uStack_31,param_1,param_2,0,&UNK_0099e7d0,param_3);
  return;
}



/* Entry: 000442d0; end: 000442db;  */

void FUN_000442d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00777ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_009995a8
  )();
  return;
}



/* Entry: 000442dc; end: 0004437f;  */

void FUN_000442dc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  FUN_00043674();
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &UNK_0099efd8;
  _swift_allocObject(&UNK_0099efd8,uVar5 + lVar3,uVar2 | 7);
  FUN_000436bc(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1 + uVar5);
  *param_1 = FUN_00048a9c;
  param_1[1] = puVar1;
  return;
}



/* Entry: 00044380; end: 0004457f;  */

long * FUN_00044380(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    *(undefined2 *)((long)param_1 + 1) = *(undefined2 *)((long)param_2 + 1);
    lVar6 = param_2[1];
    if (lVar6 == 0) {
      lVar6 = param_2[1];
      param_1[2] = param_2[2];
      param_1[1] = lVar6;
    }
    else {
      lVar3 = param_2[2];
      param_1[1] = lVar6;
      param_1[2] = lVar3;
      _swift_retain();
    }
    lVar6 = param_2[4];
    *(char *)(param_1 + 3) = (char)param_2[3];
    if (lVar6 == 0) {
      lVar6 = param_2[4];
      param_1[5] = param_2[5];
      param_1[4] = lVar6;
    }
    else {
      lVar3 = param_2[5];
      param_1[4] = lVar6;
      param_1[5] = lVar3;
      _swift_retain();
    }
    lVar6 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar6;
    *(char *)(param_1 + 8) = (char)param_2[8];
    lVar9 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = lVar9;
    lVar10 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = lVar10;
    lVar11 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = lVar11;
    lVar3 = param_2[0x11];
    lVar12 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = lVar12;
    param_1[0x11] = lVar3;
    lVar13 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = lVar13;
    pcVar8 = (code *)**(undefined8 **)(lVar13 + -8);
    _swift_retain();
    _swift_retain(lVar6);
    _swift_bridgeObjectRetain(lVar9);
    _swift_retain(lVar10);
    _swift_retain(lVar11);
    _swift_retain(lVar12);
    _swift_retain(lVar3);
    (*pcVar8)(param_1 + 0x12,param_2 + 0x12,lVar13);
    lVar6 = (long)*(int *)(param_3 + 0x44);
    uVar4 = 0xae6738;
    func_0x000115a8(0xae6738,&UNK_007cec00);
    puVar5 = (undefined1 *)((long)param_2 + lVar6);
    _swift_getEnumCaseMultiPayload(puVar5,uVar4);
    bVar2 = (int)puVar5 != 1;
    if (bVar2) {
      *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
      _swift_retain();
    }
    else {
      lVar3 = 0;
      __s7SwiftUI11ColorSchemeOMa();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))
                ((undefined1 *)((long)param_1 + lVar6),(undefined1 *)((long)param_2 + lVar6),lVar3);
    }
    _swift_storeEnumTagMultiPayload((undefined1 *)((long)param_1 + lVar6),uVar4,!bVar2);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 00044580; end: 00044653;  */

void FUN_00044580(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 8) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x10));
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x28));
  }
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_release(*(undefined8 *)(param_1 + 0x58));
  _swift_release(*(undefined8 *)(param_1 + 0x68));
  _swift_release(*(undefined8 *)(param_1 + 0x78));
  _swift_release(*(undefined8 *)(param_1 + 0x88));
  FUN_000485f8(param_1 + 0x90);
  lVar3 = (long)*(int *)(param_2 + 0x44);
  uVar1 = 0xae6738;
  func_0x000115a8(0xae6738,&UNK_007cec00);
  lVar2 = param_1 + lVar3;
  _swift_getEnumCaseMultiPayload(lVar2,uVar1);
  if ((int)lVar2 == 1) {
    lVar2 = 0;
    __s7SwiftUI11ColorSchemeOMa();
                    /* WARNING: Could not recover jumptable at 0x00044640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar3,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 00044654; end: 0004481f;  */

undefined1 * FUN_00044654(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _swift_retain();
  }
  lVar5 = *(long *)(param_2 + 0x20);
  param_1[0x18] = param_2[0x18];
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_1 + 0x20) = lVar5;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_1 + 0x20) = lVar5;
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    _swift_retain();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  param_1[0x40] = param_2[0x40];
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  uVar9 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar9;
  uVar10 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar10;
  uVar6 = *(undefined8 *)(param_2 + 0x88);
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  lVar5 = *(long *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(long *)(param_1 + 0xa8) = lVar5;
  pcVar7 = (code *)**(undefined8 **)(lVar5 + -8);
  _swift_retain();
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar8);
  _swift_retain(uVar9);
  _swift_retain(uVar10);
  _swift_retain(uVar11);
  _swift_retain(uVar6);
  (*pcVar7)(param_1 + 0x90,param_2 + 0x90,lVar5);
  iVar1 = *(int *)(param_3 + 0x44);
  uVar3 = 0xae6738;
  func_0x000115a8(0xae6738,&UNK_007cec00);
  puVar4 = param_2 + iVar1;
  _swift_getEnumCaseMultiPayload(puVar4,uVar3);
  bVar2 = (int)puVar4 != 1;
  if (bVar2) {
    *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
    _swift_retain();
  }
  else {
    lVar5 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar5);
  }
  _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar3,!bVar2);
  return param_1;
}



/* Entry: 00044820; end: 00044a87;  */

undefined1 * FUN_00044820(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar5 = *(long *)(param_2 + 8);
  if (*(long *)(param_1 + 8) == 0) {
    if (lVar5 == 0) goto LAB_000448a8;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _swift_retain();
  }
  else if (lVar5 == 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x10));
LAB_000448a8:
    lVar5 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    _swift_retain();
    _swift_release(uVar6);
  }
  param_1[0x18] = param_2[0x18];
  lVar5 = *(long *)(param_2 + 0x20);
  if (*(long *)(param_1 + 0x20) == 0) {
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      *(long *)(param_1 + 0x20) = lVar5;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      _swift_retain();
      goto LAB_00044910;
    }
  }
  else {
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x28);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x20) = lVar5;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      _swift_retain();
      _swift_release(uVar6);
      goto LAB_00044910;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x28));
  }
  lVar5 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(long *)(param_1 + 0x20) = lVar5;
LAB_00044910:
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_retain();
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_retain();
  _swift_release(uVar3);
  param_1[0x40] = param_2[0x40];
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  _swift_retain(uVar3);
  _swift_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  _swift_retain(uVar3);
  _swift_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  uVar7 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  _swift_retain(uVar3);
  _swift_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  uVar7 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  _swift_retain(uVar3);
  _swift_release(uVar6);
  FUN_0004037c(param_1 + 0x90,param_2 + 0x90);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_3 + 0x44);
    uVar3 = 0xae6738;
    FUN_00048988(param_1 + iVar1,0xae6738,&UNK_007cec00);
    func_0x000115a8(0xae6738,&UNK_007cec00);
    puVar4 = param_2 + iVar1;
    _swift_getEnumCaseMultiPayload(puVar4,uVar3);
    bVar2 = (int)puVar4 != 1;
    if (bVar2) {
      *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
      _swift_retain();
    }
    else {
      lVar5 = 0;
      __s7SwiftUI11ColorSchemeOMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar5);
    }
    _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar3,!bVar2);
  }
  return param_1;
}



/* Entry: 00044a88; end: 00044b83;  */

undefined1 * FUN_00044a88(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar5 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar5;
  param_1[0x18] = param_2[0x18];
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  param_1[0x40] = param_2[0x40];
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x88) = uVar7;
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  iVar1 = *(int *)(param_3 + 0x44);
  lVar2 = 0xae6738;
  func_0x000115a8(0xae6738,&UNK_007cec00);
  puVar3 = param_2 + iVar1;
  _swift_getEnumCaseMultiPayload(puVar3,lVar2);
  if ((int)puVar3 == 1) {
    lVar4 = 0;
    __s7SwiftUI11ColorSchemeOMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar4);
    _swift_storeEnumTagMultiPayload(param_1 + iVar1,lVar2,1);
  }
  else {
    _memcpy(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 00044b84; end: 00044d9b;  */

undefined1 * FUN_00044b84(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar5 = *(long *)(param_2 + 8);
  if (*(long *)(param_1 + 8) == 0) {
    if (lVar5 == 0) goto LAB_00044c00;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  else if (lVar5 == 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x10));
LAB_00044c00:
    lVar5 = *(long *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = lVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar6;
    _swift_release(uVar2);
  }
  lVar5 = *(long *)(param_2 + 0x20);
  param_1[0x18] = param_2[0x18];
  if (*(long *)(param_1 + 0x20) == 0) {
    if (lVar5 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      *(long *)(param_1 + 0x20) = lVar5;
      *(undefined8 *)(param_1 + 0x28) = uVar2;
      goto LAB_00044c5c;
    }
  }
  else {
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x20) = lVar5;
      *(undefined8 *)(param_1 + 0x28) = uVar6;
      _swift_release(uVar2);
      goto LAB_00044c5c;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x28));
  }
  lVar5 = *(long *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(long *)(param_1 + 0x20) = lVar5;
LAB_00044c5c:
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_release(uVar2);
  param_1[0x40] = param_2[0x40];
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  _swift_release(uVar2);
  FUN_000485f8(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar7 = *(undefined8 *)(param_2 + 0xa8);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0xa8) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_3 + 0x44);
    lVar5 = 0xae6738;
    FUN_00048988(param_1 + iVar1,0xae6738,&UNK_007cec00);
    func_0x000115a8(0xae6738,&UNK_007cec00);
    puVar3 = param_2 + iVar1;
    _swift_getEnumCaseMultiPayload(puVar3,lVar5);
    if ((int)puVar3 == 1) {
      lVar4 = 0;
      __s7SwiftUI11ColorSchemeOMa();
      (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,lVar4);
      _swift_storeEnumTagMultiPayload(param_1 + iVar1,lVar5,1);
    }
    else {
      _memcpy(param_1 + iVar1,param_2 + iVar1,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    }
  }
  return param_1;
}



/* Entry: 00044d9c; end: 00044da7;  */

void FUN_00044d9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 00044da8; end: 00044e33;  */

ulong FUN_00044da8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 0x38);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0xae7a38;
  func_0x000115a8(0xae7a38,&UNK_007cec60);
  uVar2 = param_1 + *(int *)(param_3 + 0x44);
                    /* WARNING: Could not recover jumptable at 0x00044e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 00044e34; end: 00044e3f;  */

void FUN_00044e34(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 00044e40; end: 00044ebf;  */

void FUN_00044e40(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 0x38) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0xae7a38;
  func_0x000115a8(0xae7a38,&UNK_007cec60);
                    /* WARNING: Could not recover jumptable at 0x00044ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x44),param_2,param_2,lVar1);
  return;
}



/* Entry: 00044ec0; end: 00044fcf;  */

void FUN_00044ec0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_90 = &UNK_007cec88;
  puStack_88 = &UNK_007cec88;
  puStack_80 = &UNK_007cec88;
  puStack_78 = &UNK_007ceca0;
  puStack_70 = &UNK_007cec88;
  puStack_68 = &UNK_007ceca0;
  puStack_58 = PTR___sBbWV_0099ae78 + 0x40;
  puStack_60 = &UNK_007cecb8;
  puStack_50 = PTR___syycWV_0099b8e8 + 0x40;
  puStack_30 = &UNK_007cecd0;
  lVar1 = 0x13f;
  puStack_48 = puStack_50;
  puStack_40 = puStack_50;
  puStack_38 = puStack_50;
  func_0x00044f7c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,0xe,&puStack_90,param_1 + 0x10);
  }
  return;
}



/* Entry: 00044fd0; end: 00045003;  */

void FUN_00044fd0(void)

{
  func_0x00048520(0xae7b08,0xae7b10,&UNK_007cece8,
                  PTR___s7SwiftUI16ScrollViewReaderVyxGAA0D0AAMc_00999330);
  return;
}



/* Entry: 00045004; end: 0004510f;  */

void FUN_00045004(void)

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



/* Entry: 00045110; end: 0004515b;  */

void FUN_00045110(long param_1,undefined8 param_2)

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



/* Entry: 0004515c; end: 00045163;  */

void FUN_0004515c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = uVar6;
  __s7SwiftUI17VerticalAlignmentV6centerACvgZ();
  *param_1 = uVar3;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  lVar4 = 0xae7b68;
  func_0x000115a8(0xae7b68,&UNK_007ced20);
  FUN_000438b4((long)param_1 + (long)*(int *)(lVar4 + 0x2c));
  uVar2 = (undefined1)uVar6;
  __s7SwiftUI4EdgeO3SetV10horizontalAEvgZ();
  uVar7 = 0x4020000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar4 = 0xae7b30;
  uVar3 = param_3;
  uVar6 = param_4;
  uVar8 = param_5;
  func_0x000115a8(0xae7b30,&UNK_007cecf8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  __s7SwiftUI4EdgeO3SetV6bottomAEvgZ();
  uVar7 = 0x4010000000000000;
  __s7SwiftUI10EdgeInsetsV4_allAC12CoreGraphics7CGFloatV_tcfC();
  lVar5 = 0xae7b18;
  func_0x000115a8(0xae7b18,&UNK_007cecf0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  *puVar1 = (char)lVar4;
  *(undefined8 *)(puVar1 + 8) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 00045164; end: 000451fb;  */

void FUN_00045164(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  if (puRam0000000000ae7b28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xae7b30;
  FUN_00016c74(0xae7b30,&UNK_007cecf8);
  uVar2 = 0xae7b38;
  func_0x00048520(0xae7b38,0xae7b40,&UNK_007ced00,PTR___s7SwiftUI6HStackVyxGAA4ViewAAMc_009996f8);
  puStack_28 = PTR___s7SwiftUI14_PaddingLayoutVAA12ViewModifierAAWP_00999278;
  puVar3 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8;
  uStack_30 = uVar2;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_009992b8,uVar1,
             &uStack_30);
  puRam0000000000ae7b28 = puVar3;
  return;
}


