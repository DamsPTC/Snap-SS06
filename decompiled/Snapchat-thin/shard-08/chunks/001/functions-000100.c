/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d91ba4; end: 105d91d03; -[SCPreviewFeatureMusicServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d91ba4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735d40,0);
  _objc_storeStrong(param_1 + _DAT_112735d34,0);
  _objc_storeStrong(param_1 + _DAT_112735d30,0);
  _objc_storeStrong(param_1 + _DAT_112735d2c,0);
  _objc_storeStrong(param_1 + _DAT_112735d80,0);
  _objc_destroyWeak(param_1 + _DAT_112735d7c);
  _objc_destroyWeak(param_1 + _DAT_112735d78);
  _objc_destroyWeak(param_1 + _DAT_112735d74);
  _objc_destroyWeak(param_1 + _DAT_112735d3c);
  _objc_destroyWeak(param_1 + _DAT_112735d70);
  _objc_destroyWeak(param_1 + _DAT_112735d6c);
  _objc_destroyWeak(param_1 + _DAT_112735d68);
  _objc_destroyWeak(param_1 + _DAT_112735d38);
  _objc_destroyWeak(param_1 + _DAT_112735d64);
  _objc_destroyWeak(param_1 + _DAT_112735d60);
  _objc_destroyWeak(param_1 + _DAT_112735d5c);
  _objc_destroyWeak(param_1 + _DAT_112735d58);
  _objc_destroyWeak(param_1 + _DAT_112735d54);
  _objc_destroyWeak(param_1 + _DAT_112735d50);
  _objc_destroyWeak(param_1 + _DAT_112735d4c);
  _objc_destroyWeak(param_1 + _DAT_112735d48);
  _objc_destroyWeak(param_1 + _DAT_112735d28);
  _objc_destroyWeak(param_1 + _DAT_112735d24);
  _objc_destroyWeak(param_1 + _DAT_112735d20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735d44);
  return;
}



/* Entry: 105d91d04; end: 105d91daf; -[SCPreviewFeatureMusicServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d91d04(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735d84;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735d8c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0d2940(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d91db0; end: 105d91df3; -[SCPreviewFeatureMusicServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d91db0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735d8c);
  _objc_destroyWeak(param_1 + _DAT_112735d88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735d84);
  return;
}



/* Entry: 105d91df4; end: 105d91e9f; -[SCPreviewFeatureMusicToolbarItemProviderEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d91df4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735d90;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735d98;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0d2940(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d91ea0; end: 105d91ee3; -[SCPreviewFeatureMusicToolbarItemProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d91ea0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735d98);
  _objc_destroyWeak(param_1 + _DAT_112735d94);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735d90);
  return;
}



/* Entry: 105d91ee4; end: 105d91f57; -[SCPreviewFeatureCTRecommendationServices initWithCtRecommendation:] */

undefined1 * FUN_105d91ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed0a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d91f58; end: 105d91f5f; -[SCPreviewFeatureCTRecommendationServices ctRecommendation] */

undefined8 FUN_105d91f58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d91f60; end: 105d91f6b; -[SCPreviewFeatureCTRecommendationServices .cxx_destruct] */

void FUN_105d91f60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d91f6c; end: 105d92113; -[SCPreviewFeatureOverlayCompositionImpl initWithConfiguration:autoCaptions:caption:drawing:snapCrop:stickerContainer:filterOverlayComposition:previewABProvider:] */

undefined1 *
FUN_105d91f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126ed0b0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d92114; end: 105d9211b; -[SCPreviewFeatureOverlayCompositionImpl responderChainPriority] */

undefined8 FUN_105d92114(void)

{
  return 0x7fffffff;
}



/* Entry: 105d9211c; end: 105d92993; -[SCPreviewFeatureOverlayCompositionImpl getScreenshotAsynchronouslyWithRequest:transcodingTaskId:callbackQueue:completionBlock:] */

void FUN_105d9211c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9
                  ,undefined8 param_10)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  undefined8 uStack_350;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  double dStack_1f0;
  undefined8 uStack_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined1 uStack_1be;
  undefined1 uStack_1bd;
  byte bStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined8 *puStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  double dStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar3 = param_5;
  func_0x00010bf6b020(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbb9e0();
  dVar21 = param_1;
  uVar23 = param_2;
  _objc_release(lVar3);
  func_0x00010c0c6700(*(undefined8 *)(param_5 + 8));
  uVar4 = *(undefined8 *)(param_5 + 8);
  dVar22 = dVar21;
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf91760();
  _objc_release(uVar4);
  lVar6 = *(long *)(param_5 + 8);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0b8420();
  _objc_release(lVar6);
  lVar7 = *(long *)(param_5 + 8);
  func_0x00010c29a7e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar6 = param_7;
  func_0x00010c29a800();
  uVar4 = 0;
  if (((int)lVar6 != 0) && (lVar7 != 0)) {
    uVar4 = *(undefined8 *)(param_5 + 8);
    func_0x00010c29a7e0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = *(long *)(param_5 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010bf2fd60();
  _objc_release(lVar8);
  lVar8 = param_7;
  func_0x00010bf30040();
  uVar19 = 0;
  if (((int)lVar8 != 0) && (0 < lVar6)) {
    uVar9 = *(undefined8 *)(param_5 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar9;
    func_0x00010c252c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
  }
  lVar8 = param_5;
  func_0x00010bfd9dc0();
  lVar11 = param_7;
  func_0x00010bfae200();
  lVar17 = 0;
  if (((int)lVar11 != 0) && ((int)lVar8 != 0)) {
    lVar17 = param_5;
    func_0x00010c0ef960();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar8 = param_7;
  func_0x00010c2309a0();
  if ((int)lVar8 == 0) {
    uStack_350 = 0;
  }
  else {
    uStack_350 = *(undefined8 *)(param_5 + 8);
    func_0x00010c29b700();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar10 = *(undefined8 *)(param_5 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar10;
  func_0x00010bfdcb00();
  _objc_release(uVar10);
  lVar8 = param_5;
  func_0x00010bfd6740();
  lVar11 = param_7;
  func_0x00010c230920();
  lVar18 = 0;
  if (((int)lVar8 != 0) && ((((uint)lVar11 & (uint)uVar9 | (uint)uVar5) & 1) != 0)) {
    lVar11 = param_5;
    func_0x00010bf8a3e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar11;
  }
  if ((((uint)uVar5 & (uint)uVar9) == 1) &&
     (lVar11 = param_7, func_0x00010bfae200(), (int)lVar11 != 0)) {
    lVar11 = *(long *)(param_5 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar11;
    func_0x00010c252c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    lVar20 = 0;
  }
  _dispatch_group_create();
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_105d92994;
  uStack_b8 = 0x105d929a4;
  uStack_b0 = 0;
  func_0x00010bf5c940(param_7);
  puVar12 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  _objc_opt_new();
  uVar10 = 0x3ff0000000000000;
  func_0x00010c1f5fe0(0x3ff0000000000000);
  func_0x00010c1d4c20(puVar12);
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x3032000000;
  pcStack_f0 = FUN_105d92994;
  uStack_e8 = 0x105d929a4;
  uStack_e0 = 0;
  lVar13 = param_7;
  func_0x00010c27fee0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)lVar13 != 0) {
    iVar2 = (int)*(undefined8 *)(param_5 + 8);
    func_0x00010c075080();
    if (iVar2 != 0) {
      _dispatch_group_enter(lVar11);
      puStack_188 = puVar1;
      uVar10 = 0xc2000000;
      uStack_180 = 0xc2000000;
      pcStack_178 = FUN_105d929ac;
      puStack_170 = &UNK_1108e8150;
      lStack_168 = param_5;
      dStack_140 = dVar21;
      uStack_138 = uVar23;
      dStack_130 = param_1;
      uStack_128 = param_2;
      uStack_120 = param_3;
      uStack_118 = param_4;
      uStack_110 = lVar3 == 2;
      _objc_retain(param_7);
      puStack_148 = &uStack_108;
      lStack_160 = param_7;
      uStack_10f = dVar22 != INFINITY;
      _objc_retain(puVar12);
      puStack_158 = puVar12;
      _objc_retain(lVar11);
      ppuVar14 = &puStack_188;
      lStack_150 = lVar11;
      _objc_retainBlock(ppuVar14);
      uVar15 = *(undefined8 *)(param_5 + 0x40);
      func_0x00010c269d40(uVar15);
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar15;
      func_0x00010bfc0640();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260();
      _objc_release(uVar16);
      _objc_release(uVar15);
      _objc_release(ppuVar14);
      _objc_release(lStack_150);
      _objc_release(puStack_158);
      _objc_release(lStack_160);
    }
  }
  _dispatch_group_enter(lVar11);
  func_0x00010bf5c940(param_7);
  puStack_1b8 = puVar1;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_105d92e78;
  puStack_1a0 = &UNK_110853230;
  puStack_190 = &uStack_d8;
  _objc_retain(lVar11);
  lStack_198 = lVar11;
  func_0x00010bdca180(uVar10,param_5);
  puStack_278 = puVar1;
  uStack_270 = 0xc2000000;
  pcStack_268 = FUN_105d92ed4;
  puStack_260 = &UNK_1108e8270;
  _objc_retain(param_7);
  uStack_1bf = (undefined1)uVar5;
  lStack_258 = param_7;
  lStack_250 = param_5;
  dStack_1f0 = dVar21;
  uStack_1e8 = uVar23;
  dStack_1e0 = param_1;
  uStack_1d8 = param_2;
  uStack_1d0 = param_3;
  uStack_1c8 = param_4;
  uStack_1c0 = lVar3 == 2;
  _objc_retain(lVar18);
  lStack_248 = lVar18;
  _objc_retain(uVar19);
  uStack_240 = uVar19;
  puStack_238 = puVar12;
  _objc_retain(lVar20);
  lStack_230 = lVar20;
  uStack_1be = dVar22 != INFINITY;
  _objc_retain(uVar4);
  uStack_228 = uVar4;
  _objc_retain(lVar17);
  lStack_220 = lVar17;
  _objc_retain(uStack_350);
  uStack_218 = uStack_350;
  uStack_1bd = (undefined1)lVar8;
  bStack_1bc = (byte)uVar9 & 1;
  uStack_1bb = lVar7 != 0;
  uStack_1ba = 0 < lVar6;
  _objc_retain(param_9);
  puStack_200 = &uStack_d8;
  puStack_1f8 = &uStack_108;
  uStack_210 = param_9;
  _objc_retain(param_10);
  uStack_208 = param_10;
  _objc_retain(puVar12);
  ppuVar14 = &puStack_278;
  _objc_retainBlock();
  puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_300 = 0xc2000000;
  pcStack_2f8 = FUN_105d93ba4;
  puStack_2f0 = &UNK_1108e82a0;
  uStack_2c8 = uStack_350;
  puStack_288 = &uStack_d8;
  puStack_280 = &uStack_108;
  lStack_2e8 = param_7;
  uStack_2e0 = uVar4;
  uStack_2d8 = uVar19;
  lStack_2d0 = lVar17;
  lStack_2c0 = lVar20;
  lStack_2b8 = lVar18;
  uStack_2b0 = param_9;
  lStack_2a8 = param_5;
  uStack_2a0 = param_8;
  uStack_298 = param_10;
  ppuStack_290 = ppuVar14;
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(lVar18);
  _objc_retain(lVar20);
  _objc_retain(uStack_350);
  _objc_retain(lVar17);
  _objc_retain(uVar19);
  _objc_retain(uVar4);
  _objc_retain(param_7);
  func_0x000100bc0718(lVar11,PTR___dispatch_main_q_11034be20,&puStack_308);
  _objc_release(uStack_2a0);
  _objc_release(uStack_298);
  _objc_release(uStack_2b0);
  _objc_release(lStack_2b8);
  _objc_release(lStack_2c0);
  _objc_release(uStack_2c8);
  _objc_release(lStack_2d0);
  _objc_release(uStack_2d8);
  _objc_release(uStack_2e0);
  _objc_release(lStack_2e8);
  _objc_release(ppuVar14);
  _objc_release(uStack_208);
  _objc_release(uStack_210);
  _objc_release(uStack_218);
  _objc_release(lStack_220);
  _objc_release(uStack_228);
  _objc_release(lStack_230);
  _objc_release(puStack_238);
  _objc_release(uStack_240);
  _objc_release(lStack_248);
  _objc_release(lStack_258);
  _objc_release(lStack_198);
  __Block_object_dispose(&uStack_108,8);
  _objc_release(uStack_e0);
  _objc_release(puVar12);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  _objc_release(param_8);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(lVar18);
  _objc_release(lVar20);
  _objc_release(uStack_350);
  _objc_release(lVar17);
  _objc_release(uVar19);
  _objc_release(uVar4);
  _objc_release(param_7);
  _objc_release(lVar11);
  return;
}



/* Entry: 105d92994; end: 105d929ab;  */

void FUN_105d92994(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105d929ac; end: 105d92bfb;  */

void FUN_105d929ac(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0ed560(uVar2);
  func_0x00010bfe72e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  dVar7 = *(double *)(param_1 + 0x48);
  dVar9 = *(double *)(param_1 + 0x50);
  dVar11 = *(double *)(param_1 + 0x58);
  dVar13 = *(double *)(param_1 + 0x60);
  FUN_105d92bfc(param_2,uVar1,uVar6,uVar2);
  _objc_release(uVar6);
  uVar1 = *(undefined1 *)(param_1 + 0x79);
  func_0x00010bf5c940(*(undefined8 *)(param_1 + 0x28));
  dVar12 = dVar11;
  dVar14 = dVar13;
  FUN_105d92db4(uVar1);
  uVar6 = param_2;
  dVar8 = dVar7;
  dVar10 = dVar9;
  func_0x00010bfe9820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = uVar6;
  _objc_release(uVar2);
  if ((((0.0 < dVar13) && (0.0 < dVar11)) &&
      (func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28)),
      0.0 < dVar10)) &&
     (func_0x00010c23d0a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28)),
     0.0 < dVar8)) {
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc();
    func_0x00010c046ac0(dVar11,dVar13);
    puVar4 = puVar3;
    func_0x00010bfe91c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar4;
    _objc_release(uVar6);
    if (*(char *)(param_1 + 0x79) == '\x01') {
      uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      func_0x00010bf5c7a0(dVar7,dVar9,dVar12,dVar14);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      uVar2 = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
      _objc_release(uVar2);
    }
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 105d92bfc; end: 105d92db3;  */

undefined8 FUN_105d92bfc(long param_1,ulong param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  double in_d6;
  
  _objc_retain();
  _objc_retain(param_3);
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _objc_release(puVar1);
  }
  else {
    if ((param_2 & 1) == 0) {
      func_0x00010c0c2640(PTR_PTR_1126bf720);
    }
    if (in_d6 == 0.0) {
      func_0x00010c0c2a20(PTR_PTR_1126afee0);
    }
    if (param_4 == 0) {
      func_0x00010c106c40(param_3);
    }
    NEON_fmov(0x3fe0000000000000,8);
  }
  NEON_fmov(0x3ff0000000000000,8);
  _objc_release(param_3);
  _objc_release(param_1);
  return 0;
}



/* Entry: 105d92db4; end: 105d92e5b;  */

void FUN_105d92db4(int param_1)

{
  if (param_1 != 0) {
    func_0x00010b6908b0();
    func_0x00010b690910();
  }
  return;
}



/* Entry: 105d92e5c; end: 105d92e77;  */

void FUN_105d92e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105d92e78; end: 105d92ed3;  */

void FUN_105d92e78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d92ed4; end: 105d935d7;  */

void FUN_105d92ed4(long param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  code *pcStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined1 uStack_216;
  undefined1 uStack_215;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  double dStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  double dStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  double dStack_b8;
  double dStack_b0;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0ed560();
  lVar5 = param_2;
  if ((uVar4 & 1) == 0) {
    iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfaeaa0();
    if (iVar3 != 0) goto LAB_105d92f44;
  }
  else {
LAB_105d92f44:
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c075080();
    if ((param_2 == 0) && (iVar3 != 0)) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      func_0x00010bfbbbc0();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ed560(uVar7);
  func_0x00010bfe72e0(*(undefined8 *)(*(long *)(param_1 + 0x28) + 8));
  dVar17 = *(double *)(param_1 + 0x88);
  uVar18 = *(undefined8 *)(param_1 + 0x90);
  uVar19 = *(undefined8 *)(param_1 + 0x98);
  uVar20 = *(undefined8 *)(param_1 + 0xa0);
  FUN_105d92bfc(lVar5,uVar1,uVar6,uVar7);
  dVar23 = dVar17;
  _objc_release(uVar6);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (*(char *)(param_1 + 0xb9) == '\x01') {
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    dVar22 = dVar23 * *(double *)(param_1 + 0xa8);
    dVar23 = dVar23 * *(double *)(param_1 + 0xb0);
    _objc_release(puVar8);
    if ((*(long *)(param_1 + 0x30) == 0) && (*(long *)(param_1 + 0x38) == 0)) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
      _objc_alloc();
      func_0x00010c046ac0(dVar22,dVar23);
      puStack_e8 = puVar2;
      uStack_e0 = 0xc2000000;
      pcStack_d8 = FUN_105d935d8;
      puStack_d0 = &UNK_1108e8180;
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      dStack_b8 = dVar22;
      dStack_b0 = dVar23;
      _objc_retain(uVar6);
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      uStack_c8 = uVar6;
      _objc_retain(uVar7);
      puVar14 = puVar8;
      uStack_c0 = uVar7;
      func_0x00010bfe91c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_c0);
      _objc_release(uStack_c8);
      _objc_release(puVar8);
    }
    puVar10 = *(undefined **)(param_1 + 0x48);
    _objc_retain(puVar10);
    puVar8 = *(undefined **)(param_1 + 0x48);
    func_0x00010854478c(dVar22,dVar23,0x3ff0000000000000,0x3ff0000000000000,puVar8,puVar14,lVar5,
                        *(undefined1 *)(param_1 + 0xb8));
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
      func_0x00010c075080();
      if (iVar3 != 0) {
        _objc_retain(puVar8);
        _objc_release(puVar10);
        puVar10 = puVar8;
        puVar15 = (undefined *)0x0;
        goto LAB_105d93334;
      }
    }
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
    func_0x00010c083340();
    if (iVar3 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar8);
      puVar15 = puVar8;
    }
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xba);
    func_0x00010bf5c940(*(undefined8 *)(param_1 + 0x20));
    dVar23 = dVar17;
    uVar6 = uVar18;
    uVar7 = uVar19;
    uVar21 = uVar20;
    FUN_105d92db4(uVar1);
    puVar8 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc();
    func_0x00010c046ac0(uVar19,uVar20);
    puStack_168 = puVar2;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_105d93638;
    puStack_150 = &UNK_1108e81b0;
    _objc_retain(lVar5);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    lStack_148 = lVar5;
    dStack_128 = dVar23;
    uStack_120 = uVar6;
    uStack_118 = uVar7;
    uStack_110 = uVar21;
    _objc_retain(uVar11);
    uVar12 = *(undefined8 *)(param_1 + 0x58);
    uStack_140 = uVar11;
    dStack_108 = dVar17;
    uStack_100 = uVar18;
    uStack_f8 = uVar19;
    uStack_f0 = uVar20;
    _objc_retain(uVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    uStack_138 = uVar12;
    _objc_retain(uVar11);
    puVar14 = puVar8;
    uStack_130 = uVar11;
    func_0x00010bfe91c0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(param_1 + 0x60);
    if (lVar13 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puStack_1b8 = puVar2;
      uStack_1b0 = 0xc2000000;
      uStack_1a8 = 0x105d93690;
      puStack_1a0 = &UNK_1108db520;
      _objc_retain(lVar13);
      lStack_198 = lVar13;
      dStack_188 = dVar17;
      uStack_180 = uVar18;
      uStack_178 = uVar19;
      uStack_170 = uVar20;
      _objc_retain(puVar14);
      puVar15 = puVar8;
      puStack_190 = puVar14;
      func_0x00010bfe91c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_190);
      _objc_release(lStack_198);
    }
    puVar10 = puVar14;
    if (*(char *)(param_1 + 0xba) == '\x01') {
      func_0x00010bf5c7a0(dVar23,uVar6,uVar7,uVar21);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
    }
    _objc_release(uStack_130);
    _objc_release(uStack_138);
    _objc_release(uStack_140);
    _objc_release(lStack_148);
    puVar14 = (undefined *)0x0;
  }
LAB_105d93334:
  _objc_release(puVar8);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c230920();
  puVar8 = puVar10;
  if (iVar3 == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  if ((((*(byte *)(param_1 + 0xbb) & 1) == 0) && (*(long *)(param_1 + 0x50) == 0)) &&
     (*(long *)(param_1 + 0x38) == 0)) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = puVar8;
    puStack_2a0 = puVar2;
    if (*(char *)(param_1 + 0xbc) != '\x01') goto LAB_105d93464;
    iVar3 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c230920();
    if (iVar3 == 0) goto LAB_105d93464;
    puVar9 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    _objc_alloc();
    func_0x00010c046ac0(uVar19,uVar20);
    puStack_210 = puVar2;
    uStack_208 = 0xc2000000;
    uStack_200 = 0x105d936c8;
    puStack_1f8 = &UNK_1108e81e0;
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    uStack_1f0 = uVar6;
    dStack_1d8 = dVar17;
    uStack_1d0 = uVar18;
    uStack_1c8 = uVar19;
    uStack_1c0 = uVar20;
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uStack_1e8 = uVar7;
    _objc_retain(uVar6);
    puVar16 = puVar9;
    uStack_1e0 = uVar6;
    func_0x00010bfe91c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1e8);
    _objc_release(uStack_1f0);
    puVar8 = puVar9;
  }
  _objc_release(puVar8);
  puStack_2a0 = PTR___NSConcreteStackBlock_11034bd00;
LAB_105d93464:
  uStack_298 = 0xc2000000;
  pcStack_290 = FUN_105d93710;
  puStack_288 = &UNK_1108e8240;
  uStack_218 = *(undefined1 *)(param_1 + 0xb9);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar6);
  uStack_217 = *(undefined1 *)(param_1 + 0xbd);
  uStack_216 = *(undefined1 *)(param_1 + 0xbb);
  uStack_215 = *(undefined1 *)(param_1 + 0xbe);
  uStack_278 = *(undefined8 *)(param_1 + 0x28);
  uVar7 = *(undefined8 *)(param_1 + 0x68);
  uStack_280 = uVar6;
  uStack_228 = uVar19;
  uStack_220 = uVar20;
  _objc_retain(uVar7);
  uStack_230 = *(undefined8 *)(param_1 + 0x80);
  uVar18 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x70);
  uStack_270 = uVar7;
  puStack_268 = puVar10;
  puStack_260 = puVar14;
  puStack_258 = puVar16;
  puStack_250 = puVar15;
  _objc_retain(uVar6);
  uStack_248 = param_3;
  uStack_240 = uVar6;
  uStack_238 = uVar18;
  _objc_retain(param_3);
  _objc_retain(puVar15);
  _objc_retain(puVar16);
  _objc_retain(puVar14);
  _objc_retain(puVar10);
  func_0x0001000d76cc("APPSTORE",&puStack_2a0);
  _objc_release(uStack_248);
  _objc_release(uStack_240);
  _objc_release(puStack_250);
  _objc_release(puStack_258);
  _objc_release(puStack_260);
  _objc_release(puStack_268);
  _objc_release(uStack_270);
  _objc_release(uStack_280);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar10);
  _objc_release(param_3);
  _objc_release(lVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 105d935d8; end: 105d93637;  */

/* WARNING: Possible PIC construction at 0x000105d9360c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d93610) */

void FUN_105d935d8(long param_1)

{
  func_0x000100841590(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105d93638; end: 105d9370f;  */

/* WARNING: Possible PIC construction at 0x000105d93654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000105d93674: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105d93658) */
/* WARNING: Removing unreachable block (ram,0x000105d93678) */

void FUN_105d93638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 105d93710; end: 105d9388f;  */

void FUN_105d93710(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uVar3 = *(ulong *)(param_1 + 0x20);
    func_0x00010c0ed560();
    if ((uVar3 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x20);
      func_0x00010bfaeaa0();
      if ((uVar3 & 1) == 0) {
        iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
        func_0x00010c29a800();
        if ((((iVar2 == 0) || ((*(byte *)(param_1 + 0x89) & 1) == 0)) &&
            ((*(byte *)(param_1 + 0x8a) & 1) == 0)) && ((*(byte *)(param_1 + 0x8b) & 1) == 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010be1c820(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
          _objc_retainAutoreleasedReturnValue();
          goto LAB_105d93770;
        }
      }
    }
  }
  uVar4 = 0;
LAB_105d93770:
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105d93890;
  puStack_80 = &UNK_1108e8210;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar6;
  uStack_70 = uVar4;
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uStack_68 = uVar5;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uStack_60 = uVar6;
  _objc_retain(uVar5);
  uStack_38 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = uVar5;
  _objc_retain(uVar7);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = uVar7;
  uStack_40 = uVar8;
  _objc_retain(uVar6);
  uStack_50 = uVar6;
  _objc_retain(uVar4);
  func_0x00010007380c(uVar1,&puStack_98);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uVar4);
  return;
}



/* Entry: 105d93890; end: 105d93ba3;  */

void FUN_105d93890(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4828;
  _objc_alloc(PTR_PTR_1126c4828);
  func_0x00010c042720();
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))
            (*(long *)(param_1 + 0x50),puVar1,*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d93ba4; end: 105d93e13;  */

void FUN_105d93ba4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0ed560();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfaeaa0();
    if (((((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x28) == 0)) &&
        (*(long *)(param_1 + 0x30) == 0)) &&
       (((*(long *)(param_1 + 0x38) == 0 && (*(long *)(param_1 + 0x40) == 0)) &&
        ((*(long *)(param_1 + 0x48) == 0 && (*(long *)(param_1 + 0x50) == 0)))))) {
      lVar5 = *(long *)(param_1 + 0x58);
      if (lVar5 == 0) {
        return;
      }
      ppuVar4 = *(undefined ***)(param_1 + 0x70);
      if (ppuVar4 == (undefined **)0x0) {
        return;
      }
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105d93e14;
      puStack_50 = &UNK_110849cb0;
      uStack_38 = *(undefined8 *)(param_1 + 0x88);
      uStack_40 = *(undefined8 *)(param_1 + 0x80);
      _objc_retain(ppuVar4);
      ppuStack_48 = ppuVar4;
      func_0x00010007380c(lVar5,&puStack_68);
      ppuVar4 = ppuStack_48;
      goto LAB_105d93d50;
    }
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfaeaa0();
  if (iVar1 == 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0ed560();
    if (iVar1 == 0) {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_105d93f00;
      puStack_d8 = &UNK_110849530;
      uStack_d0 = *(undefined8 *)(param_1 + 0x78);
      func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),&puStack_f0);
      return;
    }
    ppuVar4 = *(undefined ***)(*(long *)(param_1 + 0x60) + 8);
    func_0x00010bfbbbc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x58);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105d93eec;
    puStack_b0 = &UNK_11084aaa8;
    uStack_a0 = *(undefined8 *)(param_1 + 0x78);
    ppuStack_a8 = ppuVar4;
    _objc_retain();
    func_0x00010007380c(uVar6,&puStack_c8);
    _objc_release(ppuStack_a8);
  }
  else {
    iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x60) + 8);
    func_0x00010c075080();
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5c940(*(undefined8 *)(param_1 + 0x20));
      uVar6 = uVar3;
      func_0x00010bfbf520(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c297260(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar6);
      return;
    }
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x105d93e90;
    puStack_80 = &UNK_11084aaa8;
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    ppuStack_78 = &PTR____CFConstantStringClassReference_110e29f98;
    func_0x00010007380c(*(undefined8 *)(param_1 + 0x58),&puStack_98);
    ppuVar4 = ppuStack_78;
  }
LAB_105d93d50:
  _objc_release(ppuVar4);
  return;
}



/* Entry: 105d93e14; end: 105d93eeb;  */

void FUN_105d93e14(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4828;
  _objc_alloc(PTR_PTR_1126c4828);
  func_0x00010c042720();
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d93eec; end: 105d93eff;  */

void FUN_105d93eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105d93efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105d93f00; end: 105d9409b;  */

void FUN_105d93f00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e29f78,
                      &PTR____CFConstantStringClassReference_110e29fb8,0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d9409c; end: 105d941df; -[SCPreviewFeatureOverlayCompositionImpl getScreenshotAsynchronouslyWithCallbackQueue:croppingAspectRatio:completionBlock:] */

void FUN_105d9409c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c4830;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c2ae1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa000(puVar1,param_3,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2adfc0(puVar1,param_3,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2ab6c0(param_1,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105d941e0;
  puStack_60 = &UNK_1108e82d0;
  uStack_58 = param_5;
  _objc_retain(param_5);
  func_0x00010bfc9ee0(param_2,param_3,puVar2,0,param_4,&puStack_78);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(puVar1);
  return;
}



/* Entry: 105d941e0; end: 105d94223;  */

void FUN_105d941e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c151a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105d94224; end: 105d94663; -[SCPreviewFeatureOverlayCompositionImpl getScreenshotAndOverlaysAsynchronouslyWithCallbackQueue:croppingAspectRatio:UCOImageIncluded:imageTranscodingTaskId:completionBlock:] */

void FUN_105d94224(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  long lStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 == 0) {
    puVar5 = PTR_PTR_1126c4830;
    _objc_opt_new(PTR_PTR_1126c4830);
    func_0x00010c2ae1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa000(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2adfc0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ab6c0(param_1,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2bbda0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    func_0x00010bfc9ee0(param_2);
    _objc_release(puVar6);
    _objc_release(param_7);
    _objc_release(param_7);
  }
  else {
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_105d92994;
    uStack_88 = 0x105d929a4;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_105d92994;
    uStack_b8 = 0x105d929a4;
    uStack_b0 = 0;
    puStack_100 = &uStack_108;
    uStack_108 = 0;
    uStack_f8 = 0x3032000000;
    pcStack_f0 = FUN_105d92994;
    uStack_e8 = 0x105d929a4;
    uStack_e0 = 0;
    _dispatch_group_create();
    _dispatch_group_enter();
    puVar6 = PTR_PTR_1126c4830;
    _objc_opt_new(PTR_PTR_1126c4830);
    func_0x00010c2ae1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2aa000(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ab6c0(param_1,puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_105d94664;
    puStack_128 = &UNK_1108e8300;
    puStack_118 = &uStack_a8;
    puStack_110 = &uStack_d8;
    _objc_retain(lVar2);
    lStack_120 = lVar2;
    func_0x00010bfc9ee0(param_2);
    _objc_release(puVar3);
    _dispatch_group_enter(lVar2);
    puVar3 = PTR_PTR_1126c4830;
    _objc_opt_new(PTR_PTR_1126c4830);
    func_0x00010c2adfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ab6c0(param_1,puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_170 = puVar5;
    uStack_168 = 0xc2000000;
    pcStack_160 = FUN_105d946f0;
    puStack_158 = &UNK_1108e8330;
    puStack_148 = &uStack_108;
    _objc_retain(lVar2);
    lStack_150 = lVar2;
    func_0x00010bfc9ee0(param_2);
    _objc_release(puVar4);
    puStack_1b0 = puVar5;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_105d94738;
    puStack_198 = &UNK_1108e8360;
    puStack_188 = &uStack_a8;
    puStack_180 = &uStack_d8;
    puStack_190 = param_7;
    puStack_178 = &uStack_108;
    _objc_retain(param_7);
    func_0x000100bc0718(lVar2,param_4,&puStack_1b0);
    _objc_release(puStack_190);
    _objc_release(lStack_150);
    _objc_release(puVar3);
    _objc_release(lStack_120);
    _objc_release(puVar6);
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_108,8);
    _objc_release(uStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    puVar5 = param_7;
  }
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 105d94664; end: 105d946ef;  */

void FUN_105d94664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c151a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_2;
  func_0x00010c141d60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105d946f0; end: 105d94737;  */

void FUN_105d946f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c151a00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105d94738; end: 105d94767;  */

void FUN_105d94738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105d94764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28),
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),0);
  return;
}



/* Entry: 105d94768; end: 105d9480f;  */

void FUN_105d94768(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c151a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010c141d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,0,param_3);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d94810; end: 105d9490b; -[SCPreviewFeatureOverlayCompositionImpl getOverlayAndVideoTrackedImagesWithCroppingAspectRatio:completion:] */

void FUN_105d94810(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c2485a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c083340();
  }
  _objc_release(lVar1);
  uVar2 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010bfc8660(param_1,param_2);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 105d9490c; end: 105d949a7;  */

void FUN_105d9490c(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  cVar1 = *(char *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  uVar2 = param_2;
  if (cVar1 == '\x01') {
    func_0x00010c29b720();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c151a00(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = param_2;
  func_0x00010c29b880(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  (**(code **)(lVar4 + 0x10))(lVar4,uVar2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d949a8; end: 105d94a6b; -[SCPreviewFeatureOverlayCompositionImpl getOverlayForVideoShouldGenerateThumbnail:croppingAspectRatio:callbackQueue:completionBlock:] */

void FUN_105d949a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4838;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c032500(param_1);
  func_0x00010bfc9ee0(param_2,param_3,puVar1,0,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d94a6c; end: 105d94bf3; -[SCPreviewFeatureOverlayCompositionImpl _allVideoTrackedImagesWithCroppingAspectRatio:completion:] */

void FUN_105d94a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = param_2;
  func_0x00010bdca160(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  _dispatch_group_create();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105d94bf4;
  puStack_78 = &UNK_1108e83f0;
  uStack_70 = uVar4;
  _objc_retain(puVar2);
  puStack_68 = puVar2;
  _objc_retain(uVar4);
  uVar5 = uVar3;
  func_0x00010bf97e80(uVar3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x105d94cf0;
  puStack_b0 = &UNK_11084a9e8;
  uStack_a8 = param_2;
  puStack_a0 = puVar2;
  uStack_98 = param_4;
  _objc_retain(puVar2);
  _objc_retain(param_4);
  func_0x000100bc0718(uVar4,uVar6,&puStack_c8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puStack_a0);
  _objc_release(uStack_98);
  _objc_release(puStack_68);
  _objc_release(uStack_70);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d94bf4; end: 105d94cc3;  */

void FUN_105d94bf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  _dispatch_group_enter(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar1;
  _objc_retain(uVar1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(param_2);
  _objc_release(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 105d94cc4; end: 105d94dd7;  */

void FUN_105d94cc4(long param_1,undefined8 param_2)

{
  func_0x00010befa140(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105d94dd8; end: 105d94f93; -[SCPreviewFeatureOverlayCompositionImpl _allVideoTrackedImageFuturesWithCroppingAspectRatio:] */

void FUN_105d94dd8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29b8c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29b900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c29b900(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = param_2;
  func_0x00010bfdcb20();
  if ((uVar4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c29b8a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar1,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf03700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(puVar1,param_3,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105d94f94; end: 105d95087; -[SCPreviewFeatureOverlayCompositionImpl _geofilterPngDataIfOnlyDrawnFilterAndFitsScreen:] */

void FUN_105d94f94(double param_1,double param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = *(long *)(param_3 + 0x40);
  dVar4 = param_1;
  dVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c23cb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
    goto LAB_105d95064;
  }
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,lVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0) {
LAB_105d95040:
    lVar1 = 0;
  }
  else {
    func_0x00010c23d0a0(puVar3);
    func_0x00010c23d0a0(puVar3);
    dVar4 = dVar4 / dVar5;
    param_1 = param_1 / param_2;
    dVar5 = param_1 / dVar4;
    if (param_1 < dVar4) {
      dVar5 = dVar4 / param_1;
    }
    if (1.02 <= dVar5) goto LAB_105d95040;
    lVar1 = lVar2;
    func_0x00010bf51e00(lVar2);
  }
  _objc_release(puVar3);
LAB_105d95064:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d95088; end: 105d952b7; -[SCPreviewFeatureOverlayCompositionImpl _translatedTrackedImages:withTimeBase:] */

void FUN_105d95088(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uStack_118 = param_4[1];
  uStack_120 = *param_4;
  uStack_110 = param_4[2];
  uStack_138 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_140 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_130 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  puVar2 = &uStack_120;
  _CMTimeCompare(puVar2,&uStack_140);
  if ((int)puVar2 == 0) {
    _objc_retain(param_3);
    puVar3 = param_3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(param_3);
    puVar4 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar6 = *(undefined8 *)((long)puVar5 * 8);
        func_0x00010c27a460(uVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar3);
        _objc_retain(puVar3);
        func_0x00010c0c0400(uVar6);
        _objc_release(puVar3);
        _objc_release(puVar3);
        _objc_release(uVar6);
        puVar5 = puVar5 + 1;
      } while (puVar4 != puVar5);
      puVar4 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_3 + 0x28));
  return;
}



/* Entry: 105d952b8; end: 105d952c3;  */

void FUN_105d952b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105d952c4; end: 105d953c3;  */

void FUN_105d952c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  uStack_68 = *(undefined8 *)(param_3 + 0x40);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  uStack_60 = *(undefined8 *)(param_3 + 0x48);
  uStack_70 = uVar5;
  func_0x00010becf520(uVar1,param_4,param_4,&uStack_70);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c41f8;
  func_0x00010c279740(PTR_PTR_1126c41f8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c4200;
  _objc_alloc(PTR_PTR_1126c4200);
  func_0x00010c0db660(*(undefined8 *)(param_3 + 0x28));
  uVar4 = *(undefined8 *)(param_3 + 0x28);
  func_0x00010bfe6ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fc00(uVar5,param_2,puVar3);
  _objc_release(uVar4);
  func_0x00010befa120(*(undefined8 *)(param_3 + 0x30));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105d953c4; end: 105d9557f; -[SCPreviewFeatureOverlayCompositionImpl _translateTrajectory:withTimeBase:] */

void FUN_105d953c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar5 = &uStack_130;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar6 = *(long *)(lStack_128 + lVar8 * 8);
        puVar3 = PTR_PTR_1126bb2a8;
        _objc_alloc(PTR_PTR_1126bb2a8);
        if (lVar6 == 0) {
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_150 = 0;
        }
        else {
          func_0x00010c26f000(&uStack_160,lVar6);
        }
        uStack_178 = param_4[1];
        uStack_180 = *param_4;
        uStack_170 = param_4[2];
        _CMTimeSubtract(auStack_148,&uStack_160,&uStack_180);
        func_0x00010c27a460(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c052280(puVar3);
        _objc_release(lVar6);
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      puVar5 = &uStack_130;
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    puVar4 = puVar5;
    func_0x00010c27a600(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010becf580(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar1 = PTR_PTR_1126c41f0;
    _objc_alloc(PTR_PTR_1126c41f0);
    puVar4 = puVar5;
    func_0x00010bf45e20(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c0553e0(puVar1);
    _objc_release(puVar4);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d95580; end: 105d95657; -[SCPreviewFeatureOverlayCompositionImpl _translateImageTrajectory:withTimeBase:] */

void FUN_105d95580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c27a600(param_3);
  _objc_retainAutoreleasedReturnValue();
  uStack_48 = param_4[1];
  uStack_50 = *param_4;
  uStack_40 = param_4[2];
  func_0x00010becf580(param_1,param_2,uVar1,&uStack_50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126c41f0;
  _objc_alloc(PTR_PTR_1126c41f0);
  uVar1 = param_3;
  func_0x00010bf45e20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0553e0(puVar2,param_2,param_1,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d95658; end: 105d956d3; -[SCPreviewFeatureOverlayCompositionImpl hasDrawingsOrStaticStickers] */

long FUN_105d95658(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf8a2c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c25dbe0();
  if (lVar3 < 1) {
    func_0x00010bfdcb20(param_1);
  }
  else {
    param_1 = 1;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 105d956d4; end: 105d957c3; -[SCPreviewFeatureOverlayCompositionImpl drawingsOrStaticStickersImage] */

void FUN_105d956d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = param_5;
  func_0x00010bfd6740();
  if ((int)lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(ulong *)(param_5 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf8a2c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010bf20c00(uVar3);
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
    lVar1 = param_5;
    func_0x00010bfdcb20();
    if ((int)lVar1 != 0) {
      uVar4 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00(uVar3);
      func_0x00010bf89be0(uVar4);
      _objc_release(uVar4);
    }
    uVar2 = uVar3;
    func_0x00010c074c20();
    if ((uVar2 & 1) == 0) {
      func_0x00010bf20c00(uVar3);
      uVar2 = uVar3;
      func_0x00010bf89b80(uVar3);
    }
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d957c4; end: 105d9588b; -[SCPreviewFeatureOverlayCompositionImpl hasStaticStickerOverlay] */

bool FUN_105d957c4(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfd9800();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfd97e0();
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x40);
      func_0x00010c269d40(lVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf03700();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf529e0();
      bVar1 = lVar8 == 0;
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return bVar1;
}



/* Entry: 105d9588c; end: 105d958e3; -[SCPreviewFeatureOverlayCompositionImpl hasOverlayImage] */

long FUN_105d9588c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdcb00();
  if ((uVar2 & 1) == 0) {
    func_0x00010bfd6740(param_1);
  }
  else {
    param_1 = 1;
  }
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105d958e4; end: 105d95a67; -[SCPreviewFeatureOverlayCompositionImpl overlayImage] */

void FUN_105d958e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_5;
  func_0x00010bfd9dc0();
  if ((int)uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf8a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
    uVar3 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf89bc0();
    _objc_release(uVar3);
    uVar1 = param_5;
    func_0x00010bfdcb20();
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_5 + 0x30);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf89be0(param_1,param_2,param_3,param_4);
      _objc_release(uVar3);
    }
    uVar3 = *(undefined8 *)(param_5 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf89bc0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf8a2c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf89b80(param_1,param_2,param_3,param_4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d95a68; end: 105d95a7f; -[SCPreviewFeatureOverlayCompositionImpl delegate] */

void FUN_105d95a68(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d95a80; end: 105d95a8b; -[SCPreviewFeatureOverlayCompositionImpl setDelegate:] */

void FUN_105d95a80(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 105d95a8c; end: 105d95b0b; -[SCPreviewFeatureOverlayCompositionImpl .cxx_destruct] */

void FUN_105d95a8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d95b0c; end: 105d95ca3; -[SCPreviewFeatureOverlayCompositionServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d95b0c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112735de0;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4848;
  _objc_alloc(PTR_PTR_1126c4848);
  func_0x00010c032900();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112735de4);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d95ca4; end: 105d95eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d95ca4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar17 = PTR_PTR_1126c4840;
    _objc_alloc(PTR_PTR_1126c4840);
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_112735dc4;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010bf11400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112735dc8;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112735dcc;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf89ea0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_112735dd0;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010c23fc40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112735dd4;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_112735dd8;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c0ef680();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1 + _DAT_112735ddc;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010beec300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0016a0(puVar17,param_2,uVar16,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 105d95eac; end: 105d95f3b; -[SCPreviewFeatureOverlayCompositionServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d95eac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735de4,0);
  _objc_destroyWeak(param_1 + _DAT_112735ddc);
  _objc_destroyWeak(param_1 + _DAT_112735dd8);
  _objc_destroyWeak(param_1 + _DAT_112735dd4);
  _objc_destroyWeak(param_1 + _DAT_112735dd0);
  _objc_destroyWeak(param_1 + _DAT_112735dcc);
  _objc_destroyWeak(param_1 + _DAT_112735dc8);
  _objc_destroyWeak(param_1 + _DAT_112735dc4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735de0);
  return;
}



/* Entry: 105d95f3c; end: 105d95fe7; -[SCPreviewFeatureOverlayCompositionServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d95f3c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735de8;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735df0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0ef680(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d95fe8; end: 105d9602b; -[SCPreviewFeatureOverlayCompositionServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d95fe8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735df0);
  _objc_destroyWeak(param_1 + _DAT_112735dec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735de8);
  return;
}



/* Entry: 105d9602c; end: 105d962bb; -[SCPreviewFeaturePinningImpl initWithPreviewConfiguration:stickerLogger:alignmentFeature:batchCaptureFeature:bounceFeature:stickerContainerFeature:videoPlaybackFeature:videoObjectTracker:creativeExpressionsManager:videoTracking:previewScopeServices:] */

undefined8 *
FUN_105d9602c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126ed0b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    uVar2 = puVar1[10];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126ec0();
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105d962bc; end: 105d9631f; -[SCPreviewFeaturePinningImpl dealloc] */

void FUN_105d962bc(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282180();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126ed0b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105d96320; end: 105d9632b; -[SCPreviewFeaturePinningImpl configureWithView:] */

void FUN_105d96320(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 105d9632c; end: 105d96333; -[SCPreviewFeaturePinningImpl responderChainPriority] */

undefined8 FUN_105d9632c(void)

{
  return 0x7fffffff;
}



/* Entry: 105d96334; end: 105d9645b; -[SCPreviewFeaturePinningImpl isPinningSupported] */

bool FUN_105d96334(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c083340();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    uVar3 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c07f960();
    _objc_release(uVar3);
    if ((uVar4 & 1) == 0) {
      uVar5 = *(ulong *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010bfa1e20();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c071280();
      _objc_release(uVar3);
      _objc_release(uVar5);
      if ((uVar4 & 1) == 0) {
        uVar3 = param_1 + 0x10;
        _objc_loadWeakRetained();
        uVar4 = uVar3;
        func_0x00010c06d080();
        if ((uVar4 & 1) == 0) {
          _objc_release(uVar3);
        }
        else {
          uVar6 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c0712e0();
          _objc_release(uVar6);
          _objc_release(uVar3);
          if ((int)uVar7 == 0) {
            return false;
          }
        }
        uVar6 = *(undefined8 *)(param_1 + 0x60);
        func_0x00010c240000(uVar6);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010bf30e80();
        _objc_release(uVar6);
        return (int)uVar7 != 2;
      }
    }
  }
  return false;
}



/* Entry: 105d9645c; end: 105d96557; -[SCPreviewFeaturePinningImpl shouldAllowGestureWhilePinning:] */

ulong FUN_105d9645c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar4 = *(ulong *)(param_1 + 0x90);
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  _objc_opt_isKindOfClass(uVar4,puVar1);
  uVar5 = *(ulong *)(param_1 + 0x90);
  if ((uVar4 & 1) == 0) {
    puVar1 = PTR_PTR_1126c4850;
    _objc_opt_class(PTR_PTR_1126c4850);
    _objc_opt_isKindOfClass(uVar5,puVar1);
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar2 = *(ulong *)(param_1 + 0x50);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bfa1b20();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010bf30100();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010c26c0a0();
      _objc_release(uVar3);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
  }
  else {
    func_0x00010c26c0a0(uVar5);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105d96558; end: 105d9664f; -[SCPreviewFeaturePinningImpl pinView:] */

void FUN_105d96558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  func_0x00010c109cc0(param_5);
  func_0x00010bf20c00(param_7);
  lVar1 = param_5;
  func_0x00010bece3c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf51460(param_1,param_2,param_3,param_4,param_7);
  _objc_release(param_7);
  _objc_release(lVar1);
  uVar2 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010be08ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar2,param_1,param_5,PTR_s__enablePinningForView_atPoint__11255fd50,
             *(undefined8 *)(param_5 + 0x90));
  return;
}



/* Entry: 105d96650; end: 105d967c7; -[SCPreviewFeaturePinningImpl preparePinningForView:] */

void FUN_105d96650(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  func_0x00010bf4b900(uVar1,param_3,param_4);
  if ((int)uVar1 != 0) {
    func_0x000108edefa8();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7efe0(param_2,param_3,param_4,uVar1);
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_2 + 0x80) = 1;
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_2 + 0x90) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar1);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c161880();
  _objc_release(lVar2);
  lVar2 = param_2 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c161840();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6160();
  _objc_release(uVar1);
  func_0x00010be01dc0(param_2,param_3,param_4);
  func_0x00010c14e120(param_4);
  *(undefined8 *)(param_2 + 0x78) = param_1;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105d967c8;
  puStack_40 = &UNK_110842e18;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105d968e8;
  puStack_68 = &UNK_110841f20;
  lStack_60 = param_2;
  lStack_38 = param_2;
  func_0x00010bf02ee0(0x3fb999999999999a,0,PTR__OBJC_CLASS___UIView_1126aec20,param_3,0,&puStack_58,
                      &puStack_80);
  _objc_release(param_4);
  return;
}



/* Entry: 105d967c8; end: 105d96877;  */

void FUN_105d967c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105d96878;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fe0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_68);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_105d968a4;
  puStack_78 = &UNK_110842e18;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0x3fe0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_90);
  return;
}



/* Entry: 105d96878; end: 105d968a3;  */

void FUN_105d96878(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(*(long *)(param_1 + 0x20) + 0x78);
  dVar2 = dVar1 + 0.25;
  dVar1 = dVar1 * 1.1;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90),PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105d968a4; end: 105d968e7;  */

void FUN_105d968a4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x90);
  func_0x00010c081660();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1f5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78),
             *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x90),PTR_s_setScale__11265b220);
  return;
}



/* Entry: 105d968e8; end: 105d968f3;  */

void FUN_105d968e8(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78) = 0;
  return;
}



/* Entry: 105d968f4; end: 105d96a6f; -[SCPreviewFeaturePinningImpl skimThroughVideoForPinningInReverse:completion:] */

void FUN_105d968f4(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x88;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c0fc620();
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161880();
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161840();
  _objc_release(lVar1);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105d96a70;
  puStack_60 = &UNK_110848708;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  ppuVar2 = &puStack_78;
  uStack_58 = param_4;
  _objc_retainBlock(ppuVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  if (param_3 == 0) {
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa0ce0();
  }
  else {
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c140680();
  }
  _objc_release(uVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 105d96a70; end: 105d96aa3;  */

void FUN_105d96a70(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be95b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d96aa4; end: 105d96b0b; -[SCPreviewFeaturePinningImpl presentTooltipFromView:] */

void FUN_105d96aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x000108edefc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7efe0(param_1,param_2,param_3,uVar1);
  _objc_release(uVar1);
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x68),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d96b0c; end: 105d96b37; -[SCPreviewFeaturePinningImpl hideTooltip] */

void FUN_105d96b0c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf82f40(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d96b38; end: 105d96c63; -[SCPreviewFeaturePinningImpl _enablePinningForView:atPoint:] */

void FUN_105d96b38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  *(undefined1 *)(param_3 + 0x81) = 1;
  _objc_initWeak(auStack_58,param_3);
  uVar1 = *(undefined8 *)(param_3 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x78);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  func_0x00010c0fc180(uVar2,param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 105d96c64; end: 105d96c97;  */

void FUN_105d96c64(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d96c98; end: 105d96cd3; -[SCPreviewFeaturePinningImpl _handlePinningCompleteForView:] */

void FUN_105d96c98(long param_1,undefined8 param_2)

{
  func_0x00010bece340();
  func_0x00010c23dea0(param_1,param_2,1,0);
  func_0x00010bfe2c20(param_1);
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 105d96cd4; end: 105d96d17; -[SCPreviewFeaturePinningImpl _resumeAfterPinningWithCompletion:] */

void FUN_105d96cd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  func_0x00010be176a0(param_1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d96d18; end: 105d96da7; -[SCPreviewFeaturePinningImpl _finishedSkimmingForPinning] */

void FUN_105d96d18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161880();
  _objc_release(lVar1);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c161840();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  _objc_retain(uVar2);
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x81) = 0;
  param_1 = param_1 + 0x88;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0fc600();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105d96da8; end: 105d96ee7; -[SCPreviewFeaturePinningImpl _presentTooltipFromView:withMessage:] */

void FUN_105d96da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bf20c00(param_7);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf51460(param_1,param_2,param_3,param_4,param_7,param_6,lVar1);
  _objc_release(param_7);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126b09c0;
  _objc_alloc();
  func_0x00010c051640();
  _objc_release(param_8);
  uVar3 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  lVar1 = param_5 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10c340(uVar3,param_1,0x4004000000000000,puVar2,param_6,lVar1);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_5 + 0x70);
  *(undefined **)(param_5 + 0x70) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105d96ee8; end: 105d96ff7; -[SCPreviewFeaturePinningImpl didFinishLongPressInPreviewContainerView:] */

undefined8 FUN_105d96ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c07a120();
  if ((((int)lVar1 == 0) || (*(long *)(param_1 + 0x90) == 0)) ||
     ((*(byte *)(param_1 + 0x81) & 1) != 0)) {
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27afa0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x90);
      lVar1 = param_1;
      func_0x00010bece3c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09ef00(param_3,param_2,lVar1);
      func_0x00010be08ec0(param_1,param_2,uVar3);
      _objc_release(lVar1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13dae0();
      _objc_release(uVar3);
      lVar1 = param_1 + 8;
      _objc_loadWeakRetained(lVar1);
      uVar3 = 1;
      func_0x00010c161840();
      _objc_release(lVar1);
      *(undefined1 *)(param_1 + 0x80) = 0;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105d96ff8; end: 105d96fff; -[SCPreviewFeaturePinningImpl featureType] */

undefined8 FUN_105d96ff8(void)

{
  return 1;
}



/* Entry: 105d97000; end: 105d97047; -[SCPreviewFeaturePinningImpl _trackingObjectContainerView] */

void FUN_105d97000(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c278f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d97048; end: 105d97097; -[SCPreviewFeaturePinningImpl _disableVideoTrackingForView:] */

void FUN_105d97048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf80c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d97098; end: 105d9716f; -[SCPreviewFeaturePinningImpl _trackingChangedForView:] */

void FUN_105d97098(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126c4850;
    _objc_opt_class(PTR_PTR_1126c4850);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if (((uVar2 & 1) != 0) && (uVar2 = param_3, func_0x00010c081660(), (int)uVar2 != 0)) {
      func_0x00010c160fc0(param_3);
    }
  }
  else {
    uVar2 = param_3;
    func_0x00010c081660();
    if ((int)uVar2 != 0) {
      param_1 = param_1 + 0x18;
      _objc_loadWeakRetained(param_1);
      uVar2 = param_3;
      func_0x00010c253880(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b0b80(param_1);
      _objc_release(uVar2);
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d97170; end: 105d97187; -[SCPreviewFeaturePinningImpl delegate] */

void FUN_105d97170(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105d97188; end: 105d97193; -[SCPreviewFeaturePinningImpl setDelegate:] */

void FUN_105d97188(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x88,param_3);
  return;
}



/* Entry: 105d97194; end: 105d9719b; -[SCPreviewFeaturePinningImpl viewToPin] */

undefined8 FUN_105d97194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105d9719c; end: 105d971a3; -[SCPreviewFeaturePinningImpl isPreparingPinning] */

undefined1 FUN_105d9719c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x80);
}



/* Entry: 105d971a4; end: 105d971ab; -[SCPreviewFeaturePinningImpl isCurrentlyPinning] */

undefined1 FUN_105d971a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x81);
}



/* Entry: 105d971ac; end: 105d97273; -[SCPreviewFeaturePinningImpl .cxx_destruct] */

void FUN_105d971ac(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105d97274; end: 105d9740b; -[SCPreviewFeaturePinningServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d97274(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_1 + _DAT_112735e40;
    _objc_loadWeakRetained();
  }
  uVar1 = uVar5;
  func_0x00010c08ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126afee0;
  _objc_opt_class(PTR_PTR_1126afee0);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar5 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c4860;
  _objc_alloc(PTR_PTR_1126c4860);
  func_0x00010c036040();
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112735e68);
  }
  _objc_retain(uVar6);
  func_0x00010bf9d660(uVar6);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar5);
  return;
}



/* Entry: 105d9740c; end: 105d9769f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d9740c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    puVar22 = PTR_PTR_1126c4858;
    _objc_alloc();
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = lVar1 + _DAT_112735e48;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c254980();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1 + _DAT_112735e4c;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010beffa20();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1 + _DAT_112735e50;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar1 + _DAT_112735e54;
    _objc_loadWeakRetained();
    lVar9 = lVar8;
    func_0x00010bf207a0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar1 + _DAT_112735e58;
    _objc_loadWeakRetained();
    lVar11 = lVar10;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar1 + _DAT_112735e5c;
    _objc_loadWeakRetained();
    lVar13 = lVar12;
    func_0x00010c29a960();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1 + _DAT_112735e5c;
    _objc_loadWeakRetained();
    lVar15 = lVar14;
    func_0x00010c29a700();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar1 + _DAT_112735e60;
    _objc_loadWeakRetained();
    lVar17 = lVar16;
    func_0x00010c0b82c0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1 + _DAT_112735e64;
    _objc_loadWeakRetained();
    lVar19 = lVar18;
    func_0x00010c29b9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar1 + _DAT_112735e44;
    _objc_loadWeakRetained();
    func_0x00010c039960(puVar22,param_2,uVar21,lVar3,lVar5,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,
                        lVar19,lVar20);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
  return;
}



/* Entry: 105d976a0; end: 105d97747; -[SCPreviewFeaturePinningServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d976a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112735e68,0);
  _objc_destroyWeak(param_1 + _DAT_112735e64);
  _objc_destroyWeak(param_1 + _DAT_112735e60);
  _objc_destroyWeak(param_1 + _DAT_112735e5c);
  _objc_destroyWeak(param_1 + _DAT_112735e58);
  _objc_destroyWeak(param_1 + _DAT_112735e54);
  _objc_destroyWeak(param_1 + _DAT_112735e50);
  _objc_destroyWeak(param_1 + _DAT_112735e4c);
  _objc_destroyWeak(param_1 + _DAT_112735e48);
  _objc_destroyWeak(param_1 + _DAT_112735e44);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735e40);
  return;
}



/* Entry: 105d97748; end: 105d977f3; -[SCPreviewFeaturePinningServicesPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d97748(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112735e6c;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010c1018e0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112735e74;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c0fc5e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60(lVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 105d977f4; end: 105d97837; -[SCPreviewFeaturePinningServicesPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d977f4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112735e74);
  _objc_destroyWeak(param_1 + _DAT_112735e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112735e6c);
  return;
}



/* Entry: 105d97838; end: 105d9799f; -[SCPreviewFeaturePollsStickerImpl initWithPollStickerCreationScopeExposer:stickerContainer:pollServices:circumstanceEngine:itemViewService:stickerInjector:] */

undefined1 *
FUN_105d97838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126ed0c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d979a0; end: 105d97a07; -[SCPreviewFeaturePollsStickerImpl configureWithView:] */

void FUN_105d979a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  uVar1 = param_3;
  func_0x00010c2737a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_storeWeak(param_1 + 0x30,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d97a08; end: 105d97bd7; -[SCPreviewFeaturePollsStickerImpl presentPollEditorWithDefaultTitle:automaticallyCloseToolbarOnCompletion:isFromCaption:completion:] */

void FUN_105d97a08(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  param_1[0x40] = param_4;
  if (*(long *)(param_1 + 0x38) != 0) {
    func_0x00010bdd8bc0(param_1,param_2,4);
  }
  param_1[0x41] = param_5;
  uVar1 = param_6;
  _objc_retainBlock();
  uVar7 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar7);
  puVar2 = param_1;
  func_0x00010be0bee0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b61b8;
    func_0x00010c0cb140(PTR_PTR_1126b61b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1deac0(puVar3,param_2,puVar4);
    _objc_release(puVar4);
    func_0x00010c216240(puVar3,param_2,param_3);
  }
  else {
    func_0x00010be35b60(param_1,param_2,puVar2);
    puVar3 = puVar2;
    func_0x00010c1031c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  puVar4 = param_1 + 0x60;
  _objc_loadWeakRetained(puVar4);
  puVar6 = puVar4;
  func_0x00010c0f3d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar5,param_2,puVar6,0);
  _objc_release(puVar6);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126c4868;
  _objc_alloc(PTR_PTR_1126c4868);
  func_0x00010c037a40();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c161880();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


