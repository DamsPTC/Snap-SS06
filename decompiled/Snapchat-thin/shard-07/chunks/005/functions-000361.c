/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056938d4; end: 1056938db; -[SCAppBadFrameLogParametersBuilder withFrameBucket8:] */

void FUN_1056938d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 1056938dc; end: 105693913; -[SCAppBadFrameLogParametersBuilder withAttribution:] */

long FUN_1056938dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105693914; end: 10569394b; -[SCAppBadFrameLogParametersBuilder withPrev_attribution:] */

long FUN_105693914(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10569394c; end: 105693983; -[SCAppBadFrameLogParametersBuilder withUiEventName:] */

long FUN_10569394c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105693984; end: 1056939cb; -[SCAppBadFrameLogParametersBuilder .cxx_destruct] */

void FUN_105693984(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 1056939cc; end: 105693a9f; -[SCPlaybackAssetCompositorImpl initWithGrapheneRegistry:circumstanceEngine:] */

undefined1 * FUN_1056939cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e9960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar5 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0ff420();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105693aa0; end: 105693bdf; -[SCPlaybackAssetCompositorImpl createSubtitleAssetFromSubtitleBundle:bundleId:mediaContextType:assetRepository:] */

void FUN_105693aa0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 == 0) || (lVar1 = param_3, func_0x00010c2611c0(), lVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c2611a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105693c10;
    puStack_60 = &UNK_1108a6858;
    _objc_retain(param_4);
    lStack_58 = param_4;
    uStack_48 = param_5;
    _objc_retain(param_6);
    lVar2 = lVar1;
    uStack_50 = param_6;
    func_0x00010050471c(lVar1,&PTR___NSConcreteGlobalBlock_1108a6838,&puStack_78);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126bcb80;
    _objc_alloc(PTR_PTR_1126bcb80);
    func_0x00010c0216a0();
    _objc_release(lVar2);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105693be0; end: 105693c0f;  */

void FUN_105693be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c087ea0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInt__1126157f0,param_2);
  return;
}



/* Entry: 105693c10; end: 105693d93;  */

void FUN_105693c10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010c087ea0(param_2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bcb78;
  uVar3 = param_2;
  func_0x00010bf4bc60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c260e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf59440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfc5880();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f840(uVar3);
    _objc_release(puVar5);
  }
  uVar6 = uVar3;
  func_0x00010c0d5720(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105693d94; end: 105693ea7; -[SCPlaybackAssetCompositorImpl compositeVideoAsset:multiLanguageSubtitleAsset:subtitleConfig:completion:] */

void FUN_105693d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c087ec0(param_5);
  lVar1 = param_4;
  func_0x00010c087f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0(lVar1,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bcb80;
    _objc_alloc(PTR_PTR_1126bcb80);
    func_0x00010bfefc40();
  }
  func_0x00010bf45580(param_1,param_2,param_3,puVar3,param_6);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105693ea8; end: 10569413f; -[SCPlaybackAssetCompositorImpl compositeVideoAsset:subtitleAsset:completion:] */

void FUN_105693ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  code *pcStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  long lStack_1f0;
  undefined8 *puStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  long lStack_110;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  if (param_4 == (undefined *)0x0) {
    func_0x00010be50580(param_2);
    lVar8 = 0x65;
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    (**(code **)(param_6 + 0x10))(param_6,0);
    goto LAB_1056940e4;
  }
  puVar3 = param_4;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_5;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0 && lVar1 == 0) {
    lVar8 = 0x65;
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,0,puVar9);
    _objc_release(puVar9);
    puVar9 = (undefined *)0x0;
    func_0x00010be50580(param_2);
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      func_0x00010be50580(param_2);
      lVar8 = 0x65;
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      pcVar11 = *(code **)(param_6 + 0x10);
      puVar7 = (undefined *)0x0;
      puVar2 = puVar9;
LAB_1056940d0:
      (*pcVar11)(param_6,puVar7);
    }
    else {
      if (lVar1 == 0) {
        func_0x00010be50580(param_2);
        puVar7 = PTR_PTR_1126bcb80;
        _objc_alloc();
        func_0x00010bfefc40();
        pcVar11 = *(code **)(param_6 + 0x10);
        puVar9 = (undefined *)0x0;
        puVar2 = puVar7;
        goto LAB_1056940d0;
      }
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      lVar8 = param_6;
      func_0x00010be4ec40(param_2);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
LAB_1056940e4:
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar9);
  _objc_retain(lVar8);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_1c0 = &uStack_1c8;
  uStack_1c8 = 0;
  uStack_1b8 = 0x3032000000;
  pcStack_1b0 = FUN_105694528;
  uStack_1a8 = 0x105694538;
  uStack_1a0 = 0;
  _objc_initWeak(auStack_1d0,param_4);
  puVar7 = PTR_PTR_1126bcb88;
  _objc_alloc();
  func_0x00010bf529e0(puVar9);
  puStack_220 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_218 = 0xc2000000;
  pcStack_210 = FUN_105694540;
  puStack_208 = &UNK_1108a6888;
  _objc_copyWeak(auStack_1e0,auStack_1d0);
  puStack_1e8 = &uStack_1c8;
  _objc_retain(puVar3);
  puStack_200 = puVar3;
  _objc_retain(lVar8);
  lStack_1f0 = lVar8;
  _objc_retain(puVar9);
  puStack_1f8 = puVar9;
  uStack_1d8 = param_1;
  func_0x00010c030440();
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_105694850;
  puStack_240 = &UNK_1108a68b8;
  puStack_228 = &uStack_1c8;
  _objc_retain(puVar3);
  puStack_238 = puVar3;
  _objc_retain(puVar7);
  ppuVar4 = &puStack_258;
  puStack_230 = puVar7;
  _objc_retainBlock();
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  puVar2 = puVar9;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    lVar10 = *plStack_290;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_290 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        uVar13 = *(undefined8 *)(lStack_298 + (long)puVar12 * 8);
        ppuStack_198 = &PTR____CFConstantStringClassReference_110e3c5d8;
        puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_2a8,auStack_1d0);
        _objc_retain(ppuVar4);
        func_0x00010c09c660(uVar13);
        _objc_release(puVar6);
        _objc_release(ppuVar4);
        _objc_destroyWeak(auStack_2a8);
        puVar12 = puVar12 + 1;
      } while (puVar5 != puVar12);
      puVar5 = puVar2;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(ppuVar4);
  _objc_release(puStack_230);
  _objc_release(puStack_238);
  _objc_release(puVar7);
  _objc_release(puStack_1f8);
  _objc_release(lStack_1f0);
  _objc_release(puStack_200);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d0);
  __Block_object_dispose(&uStack_1c8,8);
  _objc_release(uStack_1a0);
  _objc_release(puVar3);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d0);
  lVar8 = 8;
  __Block_object_dispose(&uStack_1c8);
  __Unwind_Resume();
  *(undefined8 *)(puVar9 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  return;
}



/* Entry: 105694140; end: 105694527; -[SCPlaybackAssetCompositorImpl _loadTracksToComposeFromAssets:startTime:completion:] */

void FUN_105694140(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_218 [8];
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined1 auStack_150 [8];
  undefined8 uStack_148;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined **ppuStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_105694528;
  uStack_118 = 0x105694538;
  uStack_110 = 0;
  _objc_initWeak(auStack_140,param_2);
  puVar2 = PTR_PTR_1126bcb88;
  _objc_alloc();
  func_0x00010bf529e0(param_4);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_105694540;
  puStack_178 = &UNK_1108a6888;
  _objc_copyWeak(auStack_150,auStack_140);
  puStack_158 = &uStack_138;
  _objc_retain(puVar1);
  puStack_170 = puVar1;
  _objc_retain(param_5);
  uStack_160 = param_5;
  _objc_retain(param_4);
  lStack_168 = param_4;
  uStack_148 = param_1;
  func_0x00010c030440();
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  pcStack_1b8 = FUN_105694850;
  puStack_1b0 = &UNK_1108a68b8;
  puStack_198 = &uStack_138;
  _objc_retain(puVar1);
  puStack_1a8 = puVar1;
  _objc_retain(puVar2);
  ppuVar3 = &puStack_1c8;
  puStack_1a0 = puVar2;
  _objc_retainBlock();
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  plStack_200 = (long *)0x0;
  lVar6 = param_4;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar6;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar7 = *plStack_200;
    do {
      lVar8 = 0;
      do {
        if (*plStack_200 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uVar9 = *(undefined8 *)(lStack_208 + lVar8 * 8);
        ppuStack_108 = &PTR____CFConstantStringClassReference_110e3c5d8;
        puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_218,auStack_140);
        _objc_retain(ppuVar3);
        func_0x00010c09c660(uVar9);
        _objc_release(puVar5);
        _objc_release(ppuVar3);
        _objc_destroyWeak(auStack_218);
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = lVar6;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar6);
  _objc_release(ppuVar3);
  _objc_release(puStack_1a0);
  _objc_release(puStack_1a8);
  _objc_release(puVar2);
  _objc_release(lStack_168);
  _objc_release(uStack_160);
  _objc_release(puStack_170);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_140);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_140);
  lVar6 = 8;
  __Block_object_dispose(&uStack_138);
  __Unwind_Resume();
  *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return;
}



/* Entry: 105694528; end: 10569453f;  */

void FUN_105694528(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105694540; end: 10569484f;  */

void FUN_105694540(long param_1,undefined8 *param_2,undefined1 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x48);
      lVar8 = *(long *)(param_1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar8;
      func_0x00010c0d5720();
      _objc_retainAutoreleasedReturnValue();
      if (lVar7 == 0) {
        uStack_140 = 0;
        lStack_138 = 0;
        plStack_130 = (long *)0x0;
      }
      else {
        func_0x00010bf8b160(&uStack_140,lVar7);
      }
      uStack_158 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uStack_160 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_150 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      param_2 = &uStack_140;
      _CMTimeRangeMake(auStack_f8,&uStack_160);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      param_3 = auStack_f8;
      func_0x00010bde40e0(uVar10,lVar1);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(lVar7);
      _objc_release(lVar8);
    }
    else {
      lVar8 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar8);
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      _objc_retain(lVar8);
      lVar7 = lVar8;
      func_0x00010bf52a60();
      if (lVar7 != 0) {
        lVar11 = *plStack_130;
        do {
          lVar12 = 0;
          do {
            if (*plStack_130 != lVar11) {
              _objc_enumerationMutation(lVar8);
            }
            uVar2 = *(ulong *)(lStack_138 + lVar12 * 8);
            func_0x00010c0c6c20();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uVar2;
            func_0x00010c0720c0();
            _objc_release(uVar2);
            if ((uVar3 & 1) != 0) {
              _objc_release(lVar8);
              _objc_release(lVar8);
              lVar7 = *(long *)(param_1 + 0x30);
              puVar9 = (undefined8 *)PTR_PTR_1126bcb80;
              _objc_alloc();
              uVar4 = *(undefined8 *)(param_1 + 0x28);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar4;
              func_0x00010c0d5720();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfefc40();
              param_2 = puVar9;
              (**(code **)(lVar7 + 0x10))
                        (lVar7,puVar9,
                         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
              _objc_release(puVar9);
              _objc_release(uVar10);
              _objc_release(uVar4);
              goto LAB_105694718;
            }
            lVar12 = lVar12 + 1;
          } while (lVar7 != lVar12);
          lVar7 = lVar8;
          func_0x00010bf52a60();
        } while (lVar7 != 0);
      }
      _objc_release(lVar8);
      _objc_release(lVar8);
      param_2 = (undefined8 *)0x0;
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),0,
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
LAB_105694718:
      param_3 = (undefined1 *)0x0;
      func_0x00010be50580(*(undefined8 *)(param_1 + 0x48),lVar1);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == (undefined1 *)0x0) &&
     (puVar9 = param_2, func_0x00010c277be0(), puVar9 != (undefined8 *)0x0)) {
    uVar10 = *(undefined8 *)(lVar1 + 0x20);
    puVar9 = param_2;
    func_0x00010c2791a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar10);
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = *(long *)(*(long *)(lVar1 + 0x30) + 8);
    puVar9 = *(undefined8 **)(lVar7 + 0x28);
    *(undefined **)(lVar7 + 0x28) = puVar6;
  }
  _objc_release(puVar9);
  func_0x00010c0e7120(*(undefined8 *)(lVar1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105694850; end: 105694a0b;  */

void FUN_105694850(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) && (lVar3 = param_2, func_0x00010c277be0(), lVar3 != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = param_2;
    func_0x00010c2791a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(uVar4);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar3 = *(long *)(lVar2 + 0x28);
    *(undefined **)(lVar2 + 0x28) = puVar1;
  }
  _objc_release(lVar3);
  func_0x00010c0e7120(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105694a0c; end: 105694a1f;  */

void FUN_105694a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105694a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105694a20; end: 105694ca7; -[SCPlaybackAssetCompositorImpl _compositeWithStartTime:timeRange:tracks:mediaAsset:completion:] */

void FUN_105694a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar8 = param_6;
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar8;
  func_0x00010bf4d420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  func_0x00010c0c46a0();
  puVar3 = PTR_PTR_1126bcb90;
  _objc_alloc();
  uVar8 = param_6;
  func_0x00010c0d5720(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029000();
  _objc_release(uVar8);
  _objc_retain(param_5);
  lVar4 = param_5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_5);
      }
      func_0x00010be3caa0(param_2);
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = param_5;
    func_0x00010bf52a60();
  }
  _objc_release(param_5);
  puVar5 = PTR_PTR_1126bcb80;
  _objc_alloc(PTR_PTR_1126bcb80);
  uVar8 = param_6;
  func_0x00010c08d3e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bfefc60(puVar5);
  _objc_release(uVar8);
  puVar6 = puVar5;
  func_0x00010c0d5720(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182680();
  _objc_release(puVar6);
  func_0x00010c1c43a0(puVar5);
  (**(code **)(param_7 + 0x10))(param_7,puVar5,0);
  uVar8 = 1;
  func_0x00010be50580(param_1,param_2);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar9);
  _objc_retain(uVar8);
  uVar2 = uVar9;
  func_0x00010c0c6c20(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  func_0x00010bef9f20(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar2);
  func_0x00010c067160(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar7);
  return;
}



/* Entry: 105694ca8; end: 105694d83; -[SCPlaybackAssetCompositorImpl _insertToAssetsComposition:withTrack:timeRange:] */

void FUN_105694ca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c0c6c20(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bef9f20(param_3,param_2,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  uStack_68 = param_5[1];
  uStack_70 = *param_5;
  uStack_58 = param_5[3];
  uStack_60 = param_5[2];
  uStack_48 = param_5[5];
  uStack_50 = param_5[4];
  uStack_88 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  uStack_90 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  uStack_80 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
  func_0x00010c067160(uVar2,param_2,&uStack_70,param_4,&uStack_90,0);
  _objc_release(param_4);
  _objc_release(uVar2);
  return;
}



/* Entry: 105694d84; end: 105694e23; -[SCPlaybackAssetCompositorImpl _logAssetCompositionWithSuccess:startTime:] */

void FUN_105694d84(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  puVar1 = PTR_PTR_1126bcb98;
  dVar4 = param_1;
  func_0x00010bf0b080(PTR_PTR_1126bcb98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 8);
  _CACurrentMediaTime();
  func_0x00010befc000(dVar4 - param_1,uVar3,param_3,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105694e24; end: 105694e53; -[SCPlaybackAssetCompositorImpl .cxx_destruct] */

void FUN_105694e24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105694e54; end: 105694ec7; -[SCPlaybackAssetRepositoryFactoryImpl initWithAssetRepository:] */

undefined1 * FUN_105694e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9968;
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



/* Entry: 105694ec8; end: 105694eef; -[SCPlaybackAssetRepositoryFactoryImpl create] */

void FUN_105694ec8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105694ef0; end: 105694efb; -[SCPlaybackAssetRepositoryFactoryImpl .cxx_destruct] */

void FUN_105694ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105694efc; end: 105694f2b;  */

void FUN_105694efc(void)

{
  _objc_alloc(PTR_PTR_1126bcba0);
  func_0x00010bff45a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105694f2c; end: 105694f5b; -[SCPlaybackAssetScopedRepositoryFactoryImpl .cxx_destruct] */

void FUN_105694f2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105694f5c; end: 105695027; -[SCPlaybackAssetRepositoryImpl initWithStreamingResourceLoader:assetCompositor:bufferedContentFetcher:] */

undefined1 *
FUN_105694f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e9978;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105695028; end: 1056950af; -[SCPlaybackAssetRepositoryImpl createAssetFromContentResult:resourceId:] */

void FUN_105695028(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf57a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056950b0; end: 105695137; -[SCPlaybackAssetRepositoryImpl createSubtitleAssetFromContentResult:resourceId:] */

void FUN_1056950b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf57a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105695138; end: 1056952b7; -[SCPlaybackAssetRepositoryImpl createPlaybackAssetFromContentBundle:metadata:] */

void FUN_105695138(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x24;
  long unaff_x26;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010bf93ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  uVar6 = param_3;
  if (lVar4 != 0) {
    unaff_x24 = param_4;
    func_0x00010bf93de0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = unaff_x24;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      lStack_68 = param_4;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = param_4;
      func_0x00010bf93de0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2ad2a0(param_3,param_2,lStack_68,unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      goto LAB_105695224;
    }
  }
  bVar1 = false;
LAB_105695224:
  lVar5 = param_4;
  func_0x00010c0c46a0(param_4);
  uVar7 = uVar2;
  func_0x00010bf579e0(uVar2,param_2,uVar6,1,lVar5);
  _objc_retainAutoreleasedReturnValue();
  if (bVar1) {
    _objc_release(uVar6);
    _objc_release(unaff_x26);
    _objc_release(lStack_68);
  }
  if (lVar4 != 0) {
    _objc_release(unaff_x24);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1056952b8; end: 10569540f; -[SCPlaybackAssetRepositoryImpl createPlaybackAssetFromUrl:mediaContextType:] */

void FUN_1056952b8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bcba8;
  func_0x00010c25c820(PTR_PTR_1126bcba8,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if (puVar1 == (undefined *)0x1) {
    func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    ppuStack_58 = &PTR____CFConstantStringClassReference_110df4f18;
    ppuStack_50 = &PTR____CFConstantStringClassReference_110f61658;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&ppuStack_58,1
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057ae0(puVar2,param_2,param_3,puVar3);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126bcb80;
  _objc_alloc(PTR_PTR_1126bcb80);
  func_0x00010bfefc40();
  func_0x00010c1c43a0();
  if (puVar1 == (undefined *)0x1) {
    param_4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c1741e0(puVar3,param_2,param_4);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(param_4);
    puVar1 = PTR_PTR_1126bcb78;
    uVar4 = param_4;
    func_0x00010c0c6c20(param_4);
    func_0x00010c2610a0(puVar1,param_2,uVar4);
    if (puVar1 == (undefined *)0x2) {
      func_0x00010bdf4460(param_3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
    }
    else if (puVar1 == (undefined *)0x1) {
      func_0x00010bdf5700(param_3,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_3;
    }
    else {
      puVar3 = (undefined *)0x0;
    }
    _objc_release(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105695410; end: 1056954af; -[SCPlaybackAssetRepositoryImpl createAssetFromSingleResolutionResult:] */

void FUN_105695410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bcb78;
  uVar1 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c2610a0(puVar2,param_2,uVar1);
  if (puVar2 == (undefined *)0x2) {
    func_0x00010bdf4460(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (puVar2 == (undefined *)0x1) {
    func_0x00010bdf5700(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_1 = 0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056954b0; end: 1056957df; -[SCPlaybackAssetRepositoryImpl createAssetFromResolutionResult:completion:] */

void FUN_1056954b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_1056957e0;
  uStack_110 = 0x1056957f0;
  uStack_108 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_1056957e0;
  uStack_140 = 0x1056957f0;
  uStack_138 = 0;
  lStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  plStack_190 = (long *)0x0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  lVar5 = param_3;
  func_0x00010bf007e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar8 = 0;
  if (lVar1 != 0) {
    lVar6 = *plStack_190;
    do {
      lVar7 = 0;
      do {
        if (*plStack_190 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        lVar9 = *(long *)(lStack_198 + lVar7 * 8);
        lVar2 = lVar9;
        func_0x00010c0c6c20();
        if (lVar2 == 3) {
          lVar2 = param_1;
          func_0x00010bf54a20(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar8);
          lVar8 = lVar2;
        }
        else {
          lVar2 = lVar9;
          func_0x00010c0c6c20();
          if (lVar2 == 9) {
            puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_1d8 = 0xc2000000;
            pcStack_1d0 = FUN_1056957fc;
            puStack_1c8 = &UNK_1108a6968;
            puStack_1b0 = &uStack_160;
            puStack_1a8 = &uStack_130;
            lStack_1c0 = param_1;
            lStack_1b8 = lVar9;
            func_0x00010c0c1140(lVar9);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_10569589c;
  puStack_1f8 = &UNK_1108a69f8;
  puStack_1e8 = &uStack_160;
  _objc_retain(param_4);
  ppuVar3 = &puStack_210;
  uStack_1f0 = param_4;
  _objc_retainBlock(ppuVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf45580();
  _objc_release(uVar4);
  _objc_release(ppuVar3);
  _objc_release(uStack_1f0);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(uStack_138);
  _objc_release(lVar8);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_160,8);
  lVar5 = 8;
  __Block_object_dispose(&uStack_130);
  __Unwind_Resume();
  *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}



/* Entry: 1056957e0; end: 1056957fb;  */

void FUN_1056957e0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1056957fc; end: 105695893;  */

void FUN_1056957fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfc5880(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf54a20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105695894; end: 10569589b;  */

void FUN_105695894(void)

{
  return;
}



/* Entry: 10569589c; end: 10569590f;  */

void FUN_10569589c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010c20f840(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105695910; end: 105695a17; -[SCPlaybackAssetRepositoryImpl observeAssetErrors] */

void FUN_105695910(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13b380();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105695a18; end: 105695a1b; -[SCPlaybackAssetRepositoryImpl releaseAsset:] */

void FUN_105695a18(void)

{
  return;
}



/* Entry: 105695a1c; end: 105695b47; -[SCPlaybackAssetRepositoryImpl cancelContentResultForAsset:] */

void FUN_105695a1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010c0d5720();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bcb90;
  _objc_opt_class(PTR_PTR_1126bcb90);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = param_3;
  if (uVar1 == 0) {
    _objc_retain();
  }
  else {
    func_0x00010c0c40e0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  _objc_opt_class(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar5 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c13b360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar4 = uVar5;
  func_0x00010010fab4(uVar5,PTR_DAT_1126a4fb0);
  uVar3 = uVar5;
  if ((int)uVar4 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar5);
  func_0x00010bf2dba0(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105695b48; end: 105695b4b; -[SCPlaybackAssetRepositoryImpl releaseAllAssets] */

void FUN_105695b48(void)

{
  return;
}



/* Entry: 105695b4c; end: 105695cc3; -[SCPlaybackAssetRepositoryImpl _createVideoAssetFromSingleResolutionResult:] */

void FUN_105695b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1056957e0;
  uStack_60 = 0x1056957f0;
  uStack_58 = 0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0c1140(param_3);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105695cc4; end: 105695d3f;  */

void FUN_105695cc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c46a0(*(undefined8 *)(param_1 + 0x28));
  func_0x00010bf57a40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105695d40; end: 105695f27;  */

void FUN_105695d40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc68a0();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if ((int)uVar1 == 0) {
    uVar1 = param_2;
    func_0x00010bfc5880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c46a0(*(undefined8 *)(param_1 + 0x28));
    func_0x00010bf57a40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar1;
  }
  else {
    puVar2 = *(undefined **)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_2;
    func_0x00010bfc40e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf57a20();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined **)(lVar5 + 0x28) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105695f28; end: 105695f2b;  */

void FUN_105695f28(void)

{
  return;
}



/* Entry: 105695f2c; end: 10569603f; -[SCPlaybackAssetRepositoryImpl _createSubtitleAssetFromSingleResolutionResult:] */

void FUN_105695f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1056957e0;
  uStack_30 = 0x1056957f0;
  uStack_28 = 0;
  func_0x00010c0c1140(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105696040; end: 1056960a7;  */

void FUN_105696040(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf4480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056960a8; end: 105696157;  */

void FUN_1056960a8(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfc68a0();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if ((uVar1 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bfc5880(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bdf4480();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105696158; end: 10569615f;  */

void FUN_105696158(void)

{
  return;
}



/* Entry: 105696160; end: 10569625b; -[SCPlaybackAssetRepositoryImpl _createSubtitleAssetFromUrl:] */

void FUN_105696160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057ae0();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126bcb80;
  _objc_alloc();
  func_0x00010bfefc40();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10569625c; end: 105696297; -[SCPlaybackAssetRepositoryImpl .cxx_destruct] */

void FUN_10569625c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105696298; end: 10569635f; -[SCPlaybackAssetScopedRepositoryImpl initWithAssetRepository:withPerformer:] */

undefined1 *
FUN_105696298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105696360; end: 105696437; -[SCPlaybackAssetScopedRepositoryImpl _trackAsset:] */

void FUN_105696360(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105696438; end: 105696473;  */

void FUN_105696438(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105696474; end: 10569650f; -[SCPlaybackAssetScopedRepositoryImpl createAssetFromContentResult:resourceId:] */

void FUN_105696474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf549c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010becdd00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105696510; end: 1056965ab; -[SCPlaybackAssetScopedRepositoryImpl createSubtitleAssetFromContentResult:resourceId:] */

void FUN_105696510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf59440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010becdd00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056965ac; end: 105696647; -[SCPlaybackAssetScopedRepositoryImpl createPlaybackAssetFromContentBundle:metadata:] */

void FUN_1056965ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf57a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010becdd00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105696648; end: 1056966cb; -[SCPlaybackAssetScopedRepositoryImpl createPlaybackAssetFromUrl:mediaContextType:] */

void FUN_105696648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf57a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010becdd00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056966cc; end: 105696747; -[SCPlaybackAssetScopedRepositoryImpl createAssetFromSingleResolutionResult:] */

void FUN_1056966cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf54a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
  func_0x00010becdd00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105696748; end: 105696857; -[SCPlaybackAssetScopedRepositoryImpl createAssetFromResolutionResult:completion:] */

void FUN_105696748(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54a00(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105696858; end: 1056968c7;  */

void FUN_105696858(long param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,param_3);
  if (param_2 != 0) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010becdd00();
      _objc_release(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056968c8; end: 10569690f; -[SCPlaybackAssetScopedRepositoryImpl observeAssetErrors] */

void FUN_1056968c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105696910; end: 1056969eb; -[SCPlaybackAssetScopedRepositoryImpl releaseAsset:] */

void FUN_105696910(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1056969ec; end: 105696a53;  */

void FUN_1056969ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(lVar1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128420();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105696a54; end: 105696aab; -[SCPlaybackAssetScopedRepositoryImpl releaseAllAssets] */

void FUN_105696a54(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105696aac;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 105696aac; end: 105696c0b;  */

void FUN_105696aac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  _objc_retain(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x00010c2a2b60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x10) = puVar1;
  _objc_release(uVar4);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        if (*(long *)(lStack_118 + lVar7 * 8) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c128420();
          _objc_release(uVar4);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      puVar3 = &uStack_120;
      func_0x00010bf52a60(lVar5,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  uVar4 = *(undefined8 *)(lVar5 + 8);
  _objc_retain(puVar3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e120();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 105696c0c; end: 105696c5b; -[SCPlaybackAssetScopedRepositoryImpl cancelContentResultForAsset:] */

void FUN_105696c0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e120();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105696c5c; end: 105696d1f; -[SCPlaybackAssetScopedRepositoryImpl .cxx_destruct] */

void FUN_105696c5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105696d20; end: 105696e63; -[SCPlaybackAssetServiceEntryPoint _streamingResourceLoader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105696d20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126bcbc0;
  _objc_alloc(PTR_PTR_1126bcbc0);
  lVar2 = param_1;
  FUN_105696e64(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x000105696e88(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x000105696eac(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_1127277b4;
    _objc_loadWeakRetained(lVar8);
  }
  lVar9 = lVar8;
  func_0x00010bf4c500(lVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001400(puVar1,param_2,lVar3,lVar5,lVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105696e64; end: 105696ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105696e64(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_1127277b0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105696ed0; end: 105696f17;  */

void FUN_105696ed0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf17e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105696f18; end: 105696fcf; -[SCPlaybackAssetServiceEntryPoint _createPlaybackAssetRepositoryWithResourceLoader:assetCompositor:] */

void FUN_105696f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bcbd0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x000105696eac(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf21e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e7c0(puVar1,param_2,param_3,param_4,uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105696fd0; end: 10569708b; -[SCPlaybackAssetServiceEntryPoint _assetCompositorImplWithResourceLoader:] */

void FUN_105696fd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bcbd8;
  _objc_alloc(PTR_PTR_1126bcbd8);
  uVar2 = param_1;
  func_0x000105696e88(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105696e64(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018500(puVar1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10569708c; end: 105697117; -[SCPlaybackAssetServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10569708c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127277a0,0);
  _objc_destroyWeak(param_1 + _DAT_1127277bc);
  _objc_destroyWeak(param_1 + _DAT_1127277b8);
  _objc_destroyWeak(param_1 + _DAT_1127277b4);
  _objc_destroyWeak(param_1 + _DAT_1127277b0);
  _objc_destroyWeak(param_1 + _DAT_1127277ac);
  _objc_storeStrong(param_1 + _DAT_1127277a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127277a8,0);
  return;
}



/* Entry: 105697118; end: 10569720f; -[SCPlusPinBestFriendServiceImpl initWithPerformerProvider:grpcClientFactory:snapchattersObservables:snapchattersDataMutator:] */

undefined1 *
FUN_105697118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9988;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000106c77ff0(param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105697210; end: 10569725b; -[SCPlusPinBestFriendServiceImpl pinnedBestFriend] */

void FUN_105697210(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fc3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10569725c; end: 105697347; -[SCPlusPinBestFriendServiceImpl pinBestFriendWithUserId:] */

void FUN_10569725c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105697348; end: 10569740b;  */

void FUN_105697348(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  _objc_retain(puVar1);
  func_0x00010be73e60(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10569740c; end: 105697647; -[SCPlusPinBestFriendServiceImpl _pinBestFriendWithUserId:observer:] */

void FUN_10569740c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bcbe0;
  _objc_opt_new(PTR_PTR_1126bcbe0);
  uVar6 = param_3;
  FUN_105697648(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a03c0(puVar1);
  _objc_release(uVar6);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_opt_class(PTR_PTR_1126bcbe8);
  func_0x00010c0199c0(puVar2);
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  puVar5 = puVar3;
  func_0x00010bef9140(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar6);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105697648; end: 10569769b;  */

void FUN_105697648(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000100576d08(param_1,auStack_28,auStack_30);
  puVar1 = PTR_PTR_1126bcbf8;
  _objc_alloc_init(PTR_PTR_1126bcbf8);
  func_0x00010c1a85a0();
  func_0x00010c1c0fe0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10569769c; end: 10569771f;  */

void FUN_10569769c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2 != 0 && param_3 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (param_2 != 0 && param_3 == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bec99c0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105697720; end: 105697817; -[SCPlusPinBestFriendServiceImpl unpinBestFriend] */

void FUN_105697720(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0fc3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105697818; end: 105697943;  */

void FUN_105697818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105697944;
  uStack_40 = 0x105697954;
  uStack_38 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10569795c;
  puStack_70 = &UNK_110845bb0;
  puStack_58 = puStack_68;
  _objc_copyWeak(auStack_90,param_1 + 0x20);
  func_0x00010c0bf0a0(param_2);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_90);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105697944; end: 10569795b;  */

void FUN_105697944(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10569795c; end: 1056979a7;  */

void FUN_10569795c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1480
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1056979a8; end: 105697a37;  */

void FUN_1056979a8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar3 = lVar1;
  func_0x00010bed1c00();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(long *)(lVar5 + 0x28) = lVar3;
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105697a38; end: 105697b23; -[SCPlusPinBestFriendServiceImpl _unpinBestFriendWithUserId:] */

void FUN_105697a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105697b24; end: 105697be7;  */

void FUN_105697b24(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = auStack_38;
  _objc_initWeak(puVar1,param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  _objc_retain(puVar1);
  func_0x00010bed1c20(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105697be8; end: 105697e23; -[SCPlusPinBestFriendServiceImpl _unpinBestFriendWithUserId:observer:] */

void FUN_105697be8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bcbf0;
  _objc_opt_new(PTR_PTR_1126bcbf0);
  uVar6 = param_3;
  FUN_105697648(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a03c0(puVar1);
  _objc_release(uVar6);
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126ae988;
  _objc_alloc(PTR_PTR_1126ae988);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_opt_class(PTR_PTR_1126bcbe8);
  func_0x00010c0199c0(puVar2);
  puVar3 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  puVar5 = puVar3;
  func_0x00010bef9140(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bf63640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27f2c0(uVar6);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105697e24; end: 105697ea7;  */

void FUN_105697e24(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2 != 0 && param_3 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  if (param_2 != 0 && param_3 == 0) {
    lVar2 = param_1 + 0x28;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bec99c0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 105697ea8; end: 105697f13; -[SCPlusPinBestFriendServiceImpl _syncFriendsResponse] */

void FUN_105697ea8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bb6f8;
  func_0x00010bfa6d80(PTR_PTR_1126bb6f8,param_2,4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2900(uVar1,param_2,puVar2,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105697f14; end: 105697f4f; -[SCPlusPinBestFriendServiceImpl .cxx_destruct] */

void FUN_105697f14(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105697f50; end: 10569809f; -[SCPlusPinBestFriendServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105697f50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126bcc00;
  _objc_alloc(PTR_PTR_1126bcc00);
  lVar2 = param_1 + _DAT_1127277cc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_1127277d0;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_1127277d4;
  lVar6 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar9;
  _objc_loadWeakRetained(param_1);
  lVar9 = param_1;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035380(puVar1,param_2,lVar3,lVar5,lVar7,lVar9);
  _objc_release(lVar9);
  _objc_release(param_1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar8 = PTR_PTR_1126bcc08;
  _objc_alloc(PTR_PTR_1126bcc08);
  func_0x00010c035fa0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1056980a0; end: 1056980ef; -[SCPlusPinBestFriendServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1056980a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127277d4);
  _objc_destroyWeak(param_1 + _DAT_1127277cc);
  _objc_destroyWeak(param_1 + _DAT_1127277d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127277d8);
  return;
}



/* Entry: 1056980f0; end: 105698157; +[PinBestFriendRequest descriptor] */

void FUN_1056980f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a557c0,
                        &PTR____CFConstantStringClassReference_110df4f78,&PTR_DAT_1130f0b18,
                        &PTR_s_friendUserId_1130f0b30,1,0x10,0x1c);
    puRam00000001136bd468 = puVar1;
  }
  return;
}



/* Entry: 105698158; end: 1056981bf; +[PinBestFriendResponse descriptor] */

void FUN_105698158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a55810,
                        &PTR____CFConstantStringClassReference_110df4f98,&PTR_DAT_1130f0b18,0,0,4,
                        0x1c);
    puRam00000001136bd470 = puVar1;
  }
  return;
}



/* Entry: 1056981c0; end: 105698227; +[UnpinBestFriendRequest descriptor] */

void FUN_1056981c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd478 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a558b0,
                        &PTR____CFConstantStringClassReference_110df4fb8,&PTR_DAT_1130f0b50,
                        &PTR_s_friendUserId_1130f0b68,1,0x10,0x1c);
    puRam00000001136bd478 = puVar1;
  }
  return;
}



/* Entry: 105698228; end: 1056982d7; +[UnpinBestFriendResponse descriptor] */

void FUN_105698228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a55900,
                        &PTR____CFConstantStringClassReference_110df4fd8,&PTR_DAT_1130f0b50,0,0,4,
                        0x1c);
    puRam00000001136bd480 = puVar1;
  }
  return;
}



/* Entry: 1056982d8; end: 1056982e3;  */

undefined ** FUN_1056982d8(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 1056982e4; end: 105698357; -[SCPayoutsConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_1056982e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9990;
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



/* Entry: 105698358; end: 10569835f; -[SCPayoutsConfigurationImpl isSpotlightTabEnabled] */

long FUN_105698358(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (lVar1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e16b98,1,0);
    return lVar1;
  }
  return 1;
}


