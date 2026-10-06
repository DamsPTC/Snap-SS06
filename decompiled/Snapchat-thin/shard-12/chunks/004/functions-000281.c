/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090b657c; end: 1090b65ef; -[SCNeoPlayerItemFactory initWithMediaQueue:] */

undefined1 * FUN_1090b657c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127005c8;
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



/* Entry: 1090b65f0; end: 1090b6717; -[SCNeoPlayerItemFactory createItemWithURL:playerConfiguration:mediaAssetConfiguration:dataProviderFactory:videoRendererPerformanceMetricsProvider:subtitlesUrl:externalIdentifier:error:] */

void FUN_1090b65f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010bf53a00();
  ppuVar1 = &PTR_PTR_1126dd4b8;
  if ((int)uVar2 == 0) {
    ppuVar1 = &PTR_PTR_1126dd540;
  }
  puVar3 = *ppuVar1;
  _objc_alloc(puVar3);
  func_0x00010c057ac0();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1090b6718; end: 1090b6723; -[SCNeoPlayerItemFactory .cxx_destruct] */

void FUN_1090b6718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b6724; end: 1090b6a73; -[SCNeoPlayerItemObjc initWithURL:mediaAssetConfiguration:playerConfiguration:dataProviderFactory:videoRendererPerformanceMetricsProvider:subtitlesUrl:externalIdentifier:mediaQueue:error:] */

undefined8 *
FUN_1090b6724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,long param_9,
             undefined8 param_10)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
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
  puStack_68 = PTR_PTR_1127005d0;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001090b6ca0();
    uVar3 = puVar2[4];
    puVar2[4] = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = puVar2[6];
    puVar2[6] = param_4;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar2[5];
    puVar2[5] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar2[2];
    puVar2[2] = param_10;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126dd538;
    _objc_alloc();
    func_0x00010c001f60();
    uVar3 = puVar2[3];
    puVar2[3] = puVar4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    puStack_78 = param_6;
    if (param_6 == (undefined *)0x0) {
      uVar3 = param_3;
      func_0x00010c072e60();
      ppuVar1 = &PTR_PTR_1126dd4b0;
      if ((int)uVar3 == 0) {
        ppuVar1 = &PTR_PTR_1126dd378;
      }
      puStack_78 = *ppuVar1;
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar5 = param_5;
    func_0x00010c0f48a0();
    if (lVar5 - 1U < 2) {
      puVar4 = PTR_PTR_1126dd548;
      _objc_alloc();
    }
    else {
      puVar4 = PTR_PTR_1126dd550;
      _objc_alloc();
    }
    func_0x00010c0579c0();
    uVar3 = puVar2[1];
    puVar2[1] = puVar4;
    _objc_release(uVar3);
    lVar5 = param_9;
    func_0x00010c08fa60();
    if (lVar5 != 0) {
      func_0x00010bf99fe0(puVar2[3]);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf77e00();
      func_0x0001090b6c90();
      uVar3 = puVar2[3];
      func_0x00010c2778c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0bfe0(uVar3);
      func_0x0001090b6c98();
      func_0x0001090b6c90();
    }
    _objc_release(puStack_78);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  func_0x0001090b6c98();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1090b6a74; end: 1090b6aff; -[SCNeoPlayerItemObjc seekToTime:toleranceBefore:toleranceAfter:] */

void FUN_1090b6a74(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1090b6b00;
  puStack_68 = &UNK_110ad8690;
  uStack_50 = param_3[1];
  uStack_58 = *param_3;
  uStack_48 = param_3[2];
  uStack_38 = param_4[1];
  uStack_40 = *param_4;
  uStack_30 = param_4[2];
  uStack_18 = param_5[2];
  uStack_20 = param_5[1];
  uStack_28 = *param_5;
  lStack_60 = param_1;
  func_0x00010bf850c0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_80);
  return;
}



/* Entry: 1090b6b00; end: 1090b6b67;  */

void FUN_1090b6b00(long param_1,undefined8 param_2)

{
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c1572c0(auStack_88,*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,&uStack_30,
                      &uStack_50,&uStack_70);
  return;
}



/* Entry: 1090b6b68; end: 1090b6b6b; -[SCNeoPlayerItemObjc loadTimeRange:completion:] */

void FUN_1090b6b68(void)

{
  return;
}



/* Entry: 1090b6b6c; end: 1090b6b8f; -[SCNeoPlayerItemObjc underlyingSampleBufferProvider] */

void FUN_1090b6b6c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001090b6ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090b6b90; end: 1090b6b97; -[SCNeoPlayerItemObjc trackInfos] */

void FUN_1090b6b90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c277fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_trackInfos_11267ba10);
  return;
}



/* Entry: 1090b6b98; end: 1090b6b9f; -[SCNeoPlayerItemObjc loadedTimeRanges] */

void FUN_1090b6b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09ca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_loadedTimeRanges_112604ca8);
  return;
}



/* Entry: 1090b6ba0; end: 1090b6bb7; -[SCNeoPlayerItemObjc duration] */

void FUN_1090b6ba0(undefined8 *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf8b170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(long *)(param_2 + 8),PTR_s_duration_1125c0600);
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1090b6bb8; end: 1090b6bbf; -[SCNeoPlayerItemObjc error] */

void FUN_1090b6bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf987f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_error_1125c3ba0);
  return;
}



/* Entry: 1090b6bc0; end: 1090b6c07; -[SCNeoPlayerItemObjc updateSubtitlesUrl:] */

void FUN_1090b6bc0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) != param_3) {
    func_0x0001090b6ca0();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1090b6c08; end: 1090b6c0f; -[SCNeoPlayerItemObjc instruments] */

undefined8 FUN_1090b6c08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1090b6c10; end: 1090b6c23; -[SCNeoPlayerItemObjc currentTime] */

void FUN_1090b6c10(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x48);
  return;
}



/* Entry: 1090b6c24; end: 1090b6c2b; -[SCNeoPlayerItemObjc url] */

undefined8 FUN_1090b6c24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1090b6c2c; end: 1090b6c33; -[SCNeoPlayerItemObjc subtitlesUrl] */

undefined8 FUN_1090b6c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1090b6c34; end: 1090b6c3b; -[SCNeoPlayerItemObjc mediaAssetConfiguration] */

undefined8 FUN_1090b6c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1090b6c3c; end: 1090b6c87; -[SCNeoPlayerItemObjc .cxx_destruct] */

void FUN_1090b6c3c(long param_1)

{
  FUN_1090b6c88(param_1 + 0x30);
  FUN_1090b6c88(param_1 + 0x28);
  FUN_1090b6c88(param_1 + 0x20);
  FUN_1090b6c88(param_1 + 0x18);
  FUN_1090b6c88(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b6c88; end: 1090b6ca7;  */

void FUN_1090b6c88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 1090b6ca8; end: 1090b6cb3; -[SCNeoPlayerLayerNoAnimationDelegate actionForLayer:forKey:] */

void FUN_1090b6ca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return;
}



/* Entry: 1090b6cb4; end: 1090b6d07; +[SCNeoPlayerLayerNoAnimationDelegate sharedInstance] */

void FUN_1090b6cb4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137309d0 != -1) {
    func_0x000107c27d9c(0x1137309d0,&PTR___NSConcreteGlobalBlock_110ad86c0);
  }
  uVar1 = uRam00000001137309d8;
  _objc_retain(uRam00000001137309d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090b6d08; end: 1090b6d33;  */

void FUN_1090b6d08(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126dd338;
  _objc_opt_new();
  uVar1 = puRam00000001137309d8;
  puRam00000001137309d8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090b6d34; end: 1090b6d97;  */

uint FUN_1090b6d34(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bfde980(param_1);
    uVar2 = (int)uVar1 + (int)(uVar1 / 0xffff) * -0xffff;
  }
  _objc_release(param_1);
  return uVar2 & 0xffff;
}



/* Entry: 1090b6d98; end: 1090b6de7; -[SCNeoPlayerMetalVideoLayer init] */

undefined1 * FUN_1090b6d98(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127005d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf42980(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1090b6de8; end: 1090b6e8b; -[SCNeoPlayerMetalVideoLayer commonInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b6de8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  _MTLCreateSystemDefaultDevice();
  lVar4 = (long)_DAT_1127817a8;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  func_0x0001090b7b54(uVar2);
  func_0x00010c18c700(param_1);
  func_0x00010c1dc0a0(param_1);
  func_0x00010c19f5e0(param_1);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c0d8720();
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127817ac);
  *(undefined8 *)(param_1 + _DAT_1127817ac) = uVar2;
  func_0x0001090b7b54(uVar3);
  _CVMetalTextureCacheCreate
            (*(undefined8 *)PTR__kCFAllocatorDefault_11034ab78,0,*(undefined8 *)(param_1 + lVar4),0,
             param_1 + _DAT_1127817b0);
                    /* WARNING: Could not recover jumptable at 0x00010bf22510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_buildPipelines_1125a62e8);
  return;
}



/* Entry: 1090b6e8c; end: 1090b6edf; -[SCNeoPlayerMetalVideoLayer dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b6e8c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + _DAT_1127817b0) != 0) {
    _CFRelease();
  }
  puStack_28 = PTR_PTR_1127005d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090b6ee0; end: 1090b7173; -[SCNeoPlayerMetalVideoLayer buildPipelines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b6ee0(long param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_1127817a8;
  uVar11 = *(undefined8 *)(param_1 + lVar7);
  _objc_retain(uVar11);
  lVar8 = lRam00000001137309e8;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1090b7a08;
  puStack_100 = &UNK_110842e18;
  uStack_f8 = uVar11;
  _objc_retain(uVar11);
  uVar2 = lVar8 == -1;
  if (!(bool)uVar2) {
    func_0x000107c27d9c(0x1137309e8,&puStack_118);
  }
  puVar1 = puRam00000001137309e0;
  puVar3 = puRam00000001137309e0;
  _objc_retain();
  func_0x0001090b7b04();
  func_0x0001090b7b14();
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  func_0x0001090b7b5c();
  puVar6 = &uStack_160;
  func_0x00010bf52a60();
  puVar4 = (undefined *)0x0;
  if (puVar3 != (undefined *)0x0) {
    lVar8 = *plStack_150;
    do {
      puVar12 = (undefined *)0x0;
      do {
        if (*plStack_150 != lVar8) {
          func_0x0001090b7b5c();
          _objc_enumerationMutation();
        }
        puVar4 = PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
        _objc_opt_new();
        func_0x00010c0d8900(puVar1);
        func_0x00010c220f80(puVar4);
        func_0x0001090b7b0c();
        func_0x00010c0d8900(puVar1);
        func_0x00010c19f060(puVar4);
        func_0x0001090b7b0c();
        func_0x00010c0fca60(param_1);
        func_0x00010bf40cc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1dc0a0();
        func_0x0001090b7b04();
        func_0x0001090b7b4c();
        uVar11 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c0d8ec0();
        lVar5 = 0;
        _objc_retain();
        func_0x0001090b7b44();
        lVar9 = (long)_DAT_1127817b4;
        func_0x0001090b7b5c();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2827c0();
        uVar10 = *(undefined8 *)(param_1 + lVar9 + lVar5 * 8);
        *(undefined8 *)(param_1 + lVar9 + lVar5 * 8) = uVar11;
        func_0x0001090b7b54(uVar10);
        func_0x0001090b7b44();
        _objc_release();
        puVar12 = puVar12 + 1;
        uVar2 = puVar12 == puVar3;
      } while (puVar12 < puVar3);
      puVar6 = &uStack_160;
      func_0x0001090b7b5c();
      func_0x00010bf52a60();
      puVar3 = puVar4;
    } while (puVar4 != (undefined *)0x0);
    func_0x0001090b7b0c();
  }
  func_0x0001090b7b3c();
  func_0x0001090b7b68(uStack_70);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    _CVPixelBufferRetain(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bf89ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s_drawPixelBuffer__1125c0050,puVar6);
    return;
  }
  return;
}



/* Entry: 1090b7174; end: 1090b71a3; -[SCNeoPlayerMetalVideoLayer displayPixelBuffer:] */

void FUN_1090b7174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _CVPixelBufferRetain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bf89ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_drawPixelBuffer__1125c0050,param_3);
  return;
}



/* Entry: 1090b71a4; end: 1090b7357; -[SCNeoPlayerMetalVideoLayer clearDisplayedPixelBuffer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b71a4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c0d99c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
    func_0x00010c12fe20(PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ce20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf40cc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2139e0();
    func_0x0001090b7b44();
    func_0x0001090b7b1c();
    func_0x0001090b7b04();
    func_0x00010bf40cc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be600();
    func_0x0001090b7b1c();
    func_0x0001090b7b04();
    func_0x00010bf40cc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20c1c0();
    func_0x0001090b7b1c();
    func_0x0001090b7b04();
    func_0x00010bf40cc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17c800(0,0,0,0);
    func_0x0001090b7b1c();
    func_0x0001090b7b04();
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127817ac);
    func_0x00010bf41ae0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12f840();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf94840();
    func_0x00010c10bf00(uVar3,param_2,lVar1);
    func_0x00010bf42760(uVar3);
    func_0x0001090b7b04();
    func_0x0001090b7b14();
    func_0x0001090b7b3c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1090b7358; end: 1090b7837; -[SCNeoPlayerMetalVideoLayer drawPixelBuffer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b7358(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long alStack_80 [4];
  
  alStack_80[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf89d80();
  uVar1 = param_1 == 0.0;
  if (param_1 <= 0.0) {
LAB_1090b73ac:
    uVar2 = param_5;
    _CVPixelBufferGetWidth();
    uVar3 = param_5;
    _CVPixelBufferGetHeight();
    if ((uVar2 != 0) && (uVar3 != 0)) {
      func_0x00010c191800((double)uVar2,(double)uVar3,param_3);
    }
  }
  else {
    func_0x00010bf89d80(param_3);
    uVar1 = param_2 == 0.0;
    if (param_2 <= 0.0) goto LAB_1090b73ac;
  }
  uVar2 = param_3;
  func_0x00010c0d99c0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_3;
    func_0x00010bfca340();
    uVar1 = uVar3 == 4;
    if (uVar3 < 4) {
      _objc_retain();
      uVar4 = param_5;
      _CVPixelBufferGetWidthOfPlane(param_5,0);
      func_0x0001090b7b34();
      uVar8 = param_5;
      _CVPixelBufferGetWidthOfPlane(param_5,uVar4 != 1);
      func_0x0001090b7b34();
      uVar8 = uVar8 - 1;
      if (1 < uVar8) {
        uVar8 = 2;
      }
      _CVPixelBufferGetWidthOfPlane(param_5,uVar8);
      uVar4 = param_5;
      _CVPixelBufferGetHeightOfPlane(param_5,0);
      func_0x0001090b7b34();
      uVar8 = param_5;
      _CVPixelBufferGetHeightOfPlane(param_5,uVar4 != 1);
      func_0x0001090b7b34();
      uVar8 = uVar8 - 1;
      if (1 < uVar8) {
        uVar8 = 2;
      }
      _CVPixelBufferGetHeightOfPlane(param_5,uVar8);
      lStack_90 = 0;
      lStack_88 = 0;
      lStack_98 = 0;
      alStack_80[0] = 0;
      alStack_80[1] = 0;
      alStack_80[2] = 0;
      _CVPixelBufferLockBaseAddress(param_5,1);
      if (uVar3 == 3) {
        func_0x0001090b7ae0(&lStack_88);
        func_0x0001090b7af4();
        func_0x0001090b7ae0(&lStack_90);
        func_0x0001090b7b24();
        func_0x0001090b7ae0(&lStack_98);
        _CVMetalTextureCacheCreateTextureFromImage();
        lVar9 = lStack_88;
        _CVMetalTextureGetTexture();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lStack_90;
        alStack_80[0] = lVar9;
        _CVMetalTextureGetTexture();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lStack_98;
        alStack_80[1] = lVar11;
        _CVMetalTextureGetTexture();
        _objc_retainAutoreleasedReturnValue();
        alStack_80[2] = lVar10;
      }
      else if (uVar3 == 0) {
        func_0x0001090b7ae0(&lStack_88);
        func_0x0001090b7af4();
        lVar9 = lStack_88;
        _CVMetalTextureGetTexture();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = 0;
        lVar11 = 0;
        alStack_80[0] = lVar9;
      }
      else {
        func_0x0001090b7ae0(&lStack_88);
        func_0x0001090b7af4();
        func_0x0001090b7ae0(&lStack_90);
        func_0x0001090b7b24();
        lVar9 = lStack_88;
        _CVMetalTextureGetTexture();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lStack_90;
        alStack_80[0] = lVar9;
        _CVMetalTextureGetTexture();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = 0;
        alStack_80[1] = lVar11;
      }
      _CVPixelBufferUnlockBaseAddress(param_5,1);
      puVar5 = PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230;
      func_0x00010c12fe20(PTR__OBJC_CLASS___MTLRenderPassDescriptor_1126d4230);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26ce20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf40cc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2139e0();
      func_0x0001090b7b4c();
      func_0x0001090b7b0c();
      func_0x0001090b7b14();
      func_0x00010bf40cc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1be600();
      func_0x0001090b7b0c();
      func_0x0001090b7b14();
      func_0x00010bf40cc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20c1c0();
      func_0x0001090b7b0c();
      func_0x0001090b7b14();
      uVar6 = *(undefined8 *)(param_3 + (long)_DAT_1127817ac);
      func_0x00010bf41ae0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c12f840();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ea880();
      if (lVar9 != 0) {
        func_0x00010c19f0c0(uVar7);
      }
      if (lVar11 != 0) {
        func_0x00010c19f0c0(uVar7);
      }
      if (lVar10 != 0) {
        func_0x00010c19f0c0(uVar7);
      }
      func_0x00010bf89b00(uVar7);
      func_0x00010bf94840(uVar7);
      func_0x00010c10bf00(uVar6);
      func_0x00010bef78a0(uVar6);
      func_0x00010bf42760(uVar6);
      func_0x0001090b7b0c();
      func_0x0001090b7b04();
      func_0x0001090b7b1c();
      lVar9 = 0x10;
      do {
        _objc_release(*(undefined8 *)((long)alStack_80 + lVar9));
        lVar9 = lVar9 + -8;
        uVar1 = lVar9 == -8;
      } while (!(bool)uVar1);
      func_0x0001090b7b4c();
      goto LAB_1090b7800;
    }
  }
  _CVPixelBufferRelease(param_5);
LAB_1090b7800:
  _objc_release();
  func_0x0001090b7b68(alStack_80[3]);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  _CVPixelBufferRelease(*(undefined8 *)(uVar2 + 0x20));
  if (*(long *)(uVar2 + 0x28) != 0) {
    _CFRelease();
  }
  if (*(long *)(uVar2 + 0x30) != 0) {
    _CFRelease();
  }
  if (*(long *)(uVar2 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 1090b7838; end: 1090b7887;  */

void FUN_1090b7838(long param_1)

{
  _CVPixelBufferRelease(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFRelease();
  }
  if (*(long *)(param_1 + 0x38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)();
    return;
  }
  return;
}



/* Entry: 1090b7888; end: 1090b793b; -[SCNeoPlayerMetalVideoLayer getShaderForPB:] */

undefined8 FUN_1090b7888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  _CVPixelBufferGetPixelFormatType();
  iVar1 = (int)uVar2;
  if (((iVar1 == 0x20 || iVar1 == 0x41424752) || iVar1 == 0x42475241) || iVar1 == 0x52474241) {
    uVar2 = 0;
  }
  else if (iVar1 == 0x79343230) {
    uVar2 = 3;
  }
  else {
    func_0x00010c06b240(param_1,param_2,param_3);
    uVar2 = 1;
    if ((int)param_1 == 0) {
      uVar2 = 2;
    }
    if (iVar1 != 0x34343466 && iVar1 != 0x34323066) {
      uVar2 = 0xffffffffffffffff;
    }
  }
  return uVar2;
}



/* Entry: 1090b793c; end: 1090b7993; -[SCNeoPlayerMetalVideoLayer is601YCbCrMatrix:] */

undefined8 FUN_1090b793c(undefined8 param_1,undefined8 param_2,long param_3)

{
  _CVBufferGetAttachment(param_3,*(undefined8 *)PTR__kCVImageBufferYCbCrMatrixKey_11034a350,0);
  if ((param_3 != 0) && (_CFStringCompare(), param_3 == 0)) {
    return 1;
  }
  return 0;
}



/* Entry: 1090b7994; end: 1090b7a07; -[SCNeoPlayerMetalVideoLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090b7994(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_1127817b4 + param_1 + 0x18;
  lVar2 = -0x20;
  do {
    _objc_storeStrong(lVar1,0);
    lVar1 = lVar1 + -8;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0);
  _objc_storeStrong(param_1 + _DAT_1127817ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127817a8,0);
  return;
}



/* Entry: 1090b7a08; end: 1090b7adf;  */

void FUN_1090b7a08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uStack_48;
  
  _CFAbsoluteTimeGetCurrent();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,PTR_DAT_1132c1d78,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20);
  uStack_48 = 0;
  func_0x00010c0d8bc0(lVar3,param_2,puVar2,0,&uStack_48);
  _objc_retain(uStack_48);
  uVar1 = lRam00000001137309e0;
  lRam00000001137309e0 = lVar3;
  _objc_release(uVar1);
  if (lRam00000001137309e0 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110f20f78;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    ppuVar4 = &PTR____CFConstantStringClassReference_110f20f98;
  }
  _NSLog(ppuVar4);
  _objc_release(puVar2);
  func_0x0001090b7b3c();
  return;
}



/* Entry: 1090b7ae0; end: 1090b7ba3;  */

undefined8 FUN_1090b7ae0(void)

{
  return 0;
}



/* Entry: 1090b7ba4; end: 1090b7bfb; -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput initWithPlayerOutput:] */

undefined1 * FUN_1090b7ba4(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x0001090bc2d0();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001090bc424();
    func_0x0001090bc738();
  }
  func_0x0001090bc390();
  return puVar1;
}



/* Entry: 1090b7bfc; end: 1090b7c03; -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput cancelReadyToEnqueueSampleBuffer] */

void FUN_1090b7bfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ed10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelReadyToEnqueueVideoSampleB_1125a94e8);
  return;
}



/* Entry: 1090b7c04; end: 1090b7c0b; -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput enqueueSampleBuffer:] */

void FUN_1090b7c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf964f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_enqueueVideoSampleBuffer__1125c32e0);
  return;
}



/* Entry: 1090b7c0c; end: 1090b7c13; -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput isReadyToEnqueueSampleBuffer] */

void FUN_1090b7c0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canEnqueueVideoSampleBuffer_1125a8c00);
  return;
}



/* Entry: 1090b7c14; end: 1090b7c1b; -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput onReadyToEnqueueSampleBuffer:queue:] */

void FUN_1090b7c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onReadyToEnqueueVideoSampleBuffe_1126171b0);
  return;
}



/* Entry: 1090b7c1c; end: 1090b7c3f; -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput supportsFormatDescription:] */

void FUN_1090b7c1c(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001090bc720();
                    /* WARNING: Could not recover jumptable at 0x00010c263570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x19 + 8),PTR_s_supportsCodec__112676780,param_1);
  return;
}



/* Entry: 1090b7c40; end: 1090b7c43; -[SCNeoMediaSampleBufferProcessingPipelineVideoOutput .cxx_destruct] */

void FUN_1090b7c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b7c44; end: 1090b7c9b; -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput initWithPlayerOutput:] */

undefined1 * FUN_1090b7c44(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x0001090bc2d0();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001090bc424();
    func_0x0001090bc738();
  }
  func_0x0001090bc390();
  return puVar1;
}



/* Entry: 1090b7c9c; end: 1090b7ca3; -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput cancelReadyToEnqueueSampleBuffer] */

void FUN_1090b7c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_cancelReadyToEnqueueAudioSampleB_1125a94d8);
  return;
}



/* Entry: 1090b7ca4; end: 1090b7cab; -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput enqueueSampleBuffer:] */

void FUN_1090b7ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf96290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_enqueueAudioSampleBuffer__1125c3248);
  return;
}



/* Entry: 1090b7cac; end: 1090b7cb3; -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput isReadyToEnqueueSampleBuffer] */

void FUN_1090b7cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_canEnqueueAudioSampleBuffer_1125a8bf0);
  return;
}



/* Entry: 1090b7cb4; end: 1090b7cbb; -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput onReadyToEnqueueSampleBuffer:queue:] */

void FUN_1090b7cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onReadyToEnqueueAudioSampleBuffe_1126171a0);
  return;
}



/* Entry: 1090b7cbc; end: 1090b7cdf; -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput supportsFormatDescription:] */

void FUN_1090b7cbc(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001090bc720();
                    /* WARNING: Could not recover jumptable at 0x00010c263570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x19 + 8),PTR_s_supportsCodec__112676780,param_1);
  return;
}



/* Entry: 1090b7ce0; end: 1090b7ce3; -[SCNeoMediaSampleBufferProcessingPipelineAudioOutput .cxx_destruct] */

void FUN_1090b7ce0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090b7ce4; end: 1090b7d3f;  */

void FUN_1090b7ce4(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126dd540;
    _objc_opt_class(PTR_PTR_1126dd540);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) != 0) {
      func_0x0001090bc424();
      goto LAB_1090b7d28;
    }
  }
  param_1 = 0;
LAB_1090b7d28:
  func_0x0001090bc390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1090b7d40; end: 1090b7dab; -[SCNeoPlayerObjC _logTag] */

void FUN_1090b7d40(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = *(undefined ***)(param_1 + 0x78);
  func_0x00010c067d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f1f8d8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  func_0x0001090bc4d4();
  func_0x0001090bc398();
  func_0x0001090bc390();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1090b7dac; end: 1090b7dcb; -[SCNeoPlayerObjC videoRendererPerformanceMetricsProvider] */

void FUN_1090b7dac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x0001090bc424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090b7dcc; end: 1090b826b; -[SCNeoPlayerObjC initWithConfiguration:] */

undefined1 * FUN_1090b7dcc(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong unaff_x19;
  undefined1 *puVar6;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  func_0x0001090bc2d0();
  puVar1 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = unaff_x19;
    func_0x00010bf911e0();
    puVar3 = PTR_PTR_1126dd490;
    if ((int)uVar2 == 0) {
      _objc_alloc();
      func_0x00010bfee360();
    }
    else {
      _objc_alloc();
      func_0x00010c0c60e0();
      func_0x00010c037140();
    }
    _objc_retain();
    uVar4 = *(undefined8 *)(puVar1 + 0xb8);
    *(undefined **)(puVar1 + 0xb8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126dd498;
    _objc_alloc();
    func_0x00010c029b80();
    uVar4 = *(undefined8 *)(puVar1 + 0xc0);
    *(undefined **)(puVar1 + 0xc0) = puVar3;
    func_0x0001090bc4bc(uVar4);
    puVar3 = PTR_PTR_1126dd558;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(puVar1 + 0x48);
    *(undefined **)(puVar1 + 0x48) = puVar3;
    func_0x0001090bc4bc(uVar4);
    func_0x0001090bc424();
    uVar4 = *(undefined8 *)(puVar1 + 0x38);
    *(ulong *)(puVar1 + 0x38) = unaff_x19;
    _objc_release(uVar4);
    puVar3 = PTR_PTR_1126dd4a8;
    _objc_alloc();
    func_0x00010c130640();
    func_0x00010bf8f620();
    func_0x00010bf905c0();
    func_0x00010bf91860();
    func_0x00010bf9e6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03e260();
    uVar4 = *(undefined8 *)(puVar1 + 8);
    *(undefined **)(puVar1 + 8) = puVar3;
    func_0x0001090bc4bc(uVar4);
    func_0x0001090bc414();
    func_0x00010bf916a0();
    func_0x00010c29bc60(*(undefined8 *)(puVar1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ec980();
    func_0x0001090bc3a0();
    uVar2 = unaff_x19;
    func_0x00010bf9e6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1[0x83] = uVar2 != 0;
    _objc_release();
    lVar5 = *(long *)(puVar1 + 8);
    func_0x00010c26fdc0();
    puVar6 = (undefined1 *)0x0;
    if (lVar5 == 0) goto LAB_1090b81c0;
    puVar3 = PTR_PTR_1126dd560;
    _objc_alloc();
    func_0x00010c11de00(*(undefined8 *)(puVar1 + 0xb8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22e920(*(undefined8 *)(puVar1 + 0x38));
    func_0x0001090bc788();
    func_0x00010c052680();
    uVar4 = *(undefined8 *)(puVar1 + 0x50);
    *(undefined **)(puVar1 + 0x50) = puVar3;
    func_0x0001090bc4bc(uVar4);
    func_0x0001090bc3a0();
    _objc_initWeak(auStack_78,puVar1);
    puVar3 = PTR_PTR_1126dd568;
    _objc_alloc();
    if (*(long *)(puVar1 + 0x38) == 0) {
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      func_0x00010bf60580(&uStack_90);
    }
    func_0x00010c11de00(*(undefined8 *)(puVar1 + 0xb8));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090bc434();
    func_0x0001090bc774(FUN_1090b826c,0xc2000000);
    _objc_copyWeak(auStack_98,auStack_78);
    func_0x00010c0526a0();
    uVar4 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined **)(puVar1 + 0x40) = puVar3;
    func_0x0001090bc4bc(uVar4);
    func_0x0001090bc3b8();
    *(undefined2 *)(puVar1 + 0x80) = 0;
    *(undefined8 *)(puVar1 + 0x94) = 0x3f80000000000000;
    *(undefined8 *)(puVar1 + 0x70) = 0;
    *(undefined2 *)(puVar1 + 0x6d) = 0;
    puVar1[0x58] = 0;
    *(undefined4 *)(puVar1 + 0xb0) = 0;
    func_0x00010bf8f620();
    if (((unaff_x19 & 1) == 0) && (puVar1[0x83] != '\x01')) {
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc538();
      func_0x0001090bc3a0();
      puVar1[0x6c] = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf07b60();
      func_0x0001090bc3a0();
      puVar1[0x6c] = puVar3 == (undefined *)0x2;
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc538();
      func_0x0001090bc3a0();
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc538();
      func_0x0001090bc3a0();
    }
    func_0x0001090bc664();
    _objc_destroyWeak(auStack_78);
  }
  func_0x0001090bc510();
  puVar6 = puVar1;
LAB_1090b81c0:
  func_0x0001090bc390();
  func_0x0001090bc398();
  return puVar6;
}



/* Entry: 1090b826c; end: 1090b8297;  */

void FUN_1090b826c(undefined8 param_1)

{
  func_0x0001090bc3c0();
  func_0x00010be6bfc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b8298; end: 1090b829b; -[SCNeoPlayerObjC handleAppDidBecomeActiveRevamped] */

void FUN_1090b8298(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__recoverRenderersFromBackground_11257f8f8);
  return;
}



/* Entry: 1090b829c; end: 1090b8353; -[SCNeoPlayerObjC _recoverRenderersFromBackground] */

void FUN_1090b829c(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  pbVar1 = (byte *)(param_1 + 0x6c);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  func_0x0001090bc5b4(auStack_38);
  func_0x0001090bc434();
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  func_0x0001090bc2fc(FUN_1090b8354,0xc2000000);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf850c0(uVar6);
  func_0x0001090bc658(param_1 + 0x6d);
  if ((!(bool)in_ZR) || ((bVar2 & 1) == 0)) {
    iVar5 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c232980();
    if (iVar5 == 0) goto LAB_1090b832c;
  }
  func_0x00010be93820(param_1);
LAB_1090b832c:
  func_0x0001090bc550();
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1090b8354; end: 1090b839b;  */

void FUN_1090b8354(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x84) = 0;
    func_0x0001090bc658(param_1 + 0x6d);
    if ((bool)in_ZR) {
      func_0x00010c221600(*(undefined8 *)(param_1 + 8),param_2,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b839c; end: 1090b839f; -[SCNeoPlayerObjC handleAppDidBecomeActive] */

void FUN_1090b839c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be93850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetRenderersIfNecessary_1125827b0);
  return;
}



/* Entry: 1090b83a0; end: 1090b8413; -[SCNeoPlayerObjC handleAppDidEnterBackground] */

void FUN_1090b83a0(long param_1)

{
  undefined1 auStack_28 [8];
  
  *(undefined1 *)(param_1 + 0x6c) = 1;
  func_0x0001090bc5b4(auStack_28);
  func_0x0001090bc434();
  func_0x0001090bc2fc(FUN_1090b8414,0xc2000000);
  func_0x0001090bc600();
  func_0x0001090bc628();
  func_0x0001090bc4dc();
  func_0x0001090bc4e4();
  return;
}



/* Entry: 1090b8414; end: 1090b845b;  */

void FUN_1090b8414(long param_1,undefined8 param_2)

{
  func_0x0001090bc3c0();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x83) & 1) == 0)) {
    func_0x00010bf6f120(*(undefined8 *)(param_1 + 8));
    func_0x00010c221600(*(undefined8 *)(param_1 + 8),param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b845c; end: 1090b859f; -[SCNeoPlayerObjC dealloc] */

void FUN_1090b845c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0xa8));
  if (*(long *)(param_1 + 0x28) != 0) {
    _CFRelease();
  }
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x0001090bc510();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  func_0x00010c26ac40(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001090bc4d4();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001090bc580();
  uVar3 = *(undefined8 *)(param_1 + 0xb8);
  func_0x0001090bc434();
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1090b85a0;
  puStack_58 = &UNK_110883780;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  func_0x0001090bc580();
  func_0x0001090bc4d4();
  func_0x00010bf850c0(uVar3);
  func_0x0001090bc508();
  func_0x0001090bc5f8();
  func_0x0001090bc3a0();
  func_0x0001090bc3a8();
  func_0x0001090bc398();
  puStack_78 = PTR_PTR_1127005f0;
  lStack_80 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090b85a0; end: 1090b85c7;  */

/* WARNING: Possible PIC construction at 0x0001090b85b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090b85b8) */

void FUN_1090b85a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c137ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_reset_11262ba18);
  return;
}



/* Entry: 1090b85c8; end: 1090b860b; -[SCNeoPlayerObjC _onTimerFired] */

void FUN_1090b85c8(void)

{
  func_0x0001090bc480();
  func_0x0001090bc434();
  func_0x0001090bc2a4(FUN_1090b860c,0xc2000000);
  func_0x0001090bc310();
  func_0x0001090bc5f0();
  func_0x0001090bc4e4();
  return;
}



/* Entry: 1090b860c; end: 1090b86b7;  */

void FUN_1090b860c(long param_1)

{
  ulong unaff_x21;
  undefined1 auStack_48 [24];
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    func_0x00010bf60480(auStack_48,param_1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x0001090bc35c();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c100740();
      func_0x0001090bc398();
    }
  }
  func_0x0001090bc390();
  return;
}



/* Entry: 1090b86b8; end: 1090b86ef; -[SCNeoPlayerObjC _onSubtitleTimerFired] */

void FUN_1090b86b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf60480(auStack_38);
  func_0x00010c28c6a0(uVar1,param_2,auStack_38);
  return;
}



/* Entry: 1090b86f0; end: 1090b8773; -[SCNeoPlayerObjC play] */

void FUN_1090b86f0(long param_1)

{
  undefined1 in_NG;
  undefined1 in_ZR;
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x38);
  func_0x00010bf8f620();
  if (iVar1 == 0) {
    func_0x00010be93840(param_1);
  }
  else if (((*(byte *)(param_1 + 0x83) & 1) == 0) &&
          (func_0x0001090bc658(param_1 + 0x6c), (bool)in_ZR)) {
    func_0x00010be87d60(param_1);
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c232980();
    if (iVar1 != 0) {
      func_0x00010be93820(param_1);
    }
  }
  func_0x0001090bc758();
  func_0x0001090bc63c();
  if ((bool)in_NG) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0x3f800000,param_1,PTR_s_setRate__1126577b8);
    return;
  }
  return;
}



/* Entry: 1090b8774; end: 1090b877b; -[SCNeoPlayerObjC pause] */

void FUN_1090b8774(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setRate__1126577b8);
  return;
}



/* Entry: 1090b877c; end: 1090b883b; -[SCNeoPlayerObjC setRate:] */

void FUN_1090b877c(float param_1,long param_2)

{
  float fVar1;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  
  fVar1 = *(float *)(param_2 + 0x94);
  if (param_1 != fVar1) {
    *(float *)(param_2 + 0x94) = param_1;
    func_0x0001090bc5b4(auStack_48);
    func_0x0001090bc434();
    _objc_copyWeak(auStack_58,auStack_48);
    fStack_50 = fVar1;
    fStack_4c = param_1;
    func_0x0001090bc628();
    func_0x0001090bc550();
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1090b883c; end: 1090b888b;  */

void FUN_1090b883c(long param_1)

{
  long unaff_x20;
  
  func_0x0001090bc384();
  if (((param_1 != 0) && (func_0x0001090bc750(), *(float *)(unaff_x20 + 0x28) == 0.0)) &&
     (0.0 < *(float *)(unaff_x20 + 0x2c))) {
    func_0x00010bdfaa40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b888c; end: 1090b88cf; -[SCNeoPlayerObjC _deliverDeferredReachEndOnMainIfNeeded] */

void FUN_1090b888c(void)

{
  func_0x0001090bc480();
  func_0x0001090bc434();
  func_0x0001090bc2a4(FUN_1090b88d0,0xc2000000);
  func_0x0001090bc310();
  func_0x0001090bc5f0();
  func_0x0001090bc4e4();
  return;
}



/* Entry: 1090b88d0; end: 1090b897f;  */

void FUN_1090b88d0(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  ulong unaff_x21;
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    uVar1 = (int)(*(byte *)(param_1 + 0x91) - 1) < 0;
    if (*(byte *)(param_1 + 0x91) == 1) {
      func_0x0001090bc758();
      func_0x0001090bc63c();
      if (!(bool)uVar1) {
        lVar2 = param_1;
        func_0x00010c252440();
        *(undefined1 *)(param_1 + 0x91) = 0;
        if (lVar2 == 5) {
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_opt_respondsToSelector();
          func_0x0001090bc35c();
          if ((unaff_x21 & 1) != 0) {
            func_0x00010bf6b020(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x0001090bc630();
            func_0x00010c100960();
            func_0x0001090bc398();
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b8980; end: 1090b89c3; -[SCNeoPlayerObjC _discardDeferredReachEndDelivery] */

void FUN_1090b8980(void)

{
  func_0x0001090bc480();
  func_0x0001090bc434();
  func_0x0001090bc2a4(FUN_1090b89c4,0xc2000000);
  func_0x0001090bc310();
  func_0x0001090bc5f0();
  func_0x0001090bc4e4();
  return;
}



/* Entry: 1090b89c4; end: 1090b89df;  */

void FUN_1090b89c4(long param_1)

{
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090b89e0; end: 1090b8a7f; -[SCNeoPlayerObjC setVolume:] */

void FUN_1090b89e0(float param_1,long param_2)

{
  undefined1 auStack_48 [8];
  float fStack_40;
  undefined1 auStack_38 [8];
  
  if (*(float *)(param_2 + 0x98) != param_1) {
    *(float *)(param_2 + 0x98) = param_1;
    func_0x0001090bc5b4(auStack_38);
    func_0x0001090bc434();
    func_0x0001090bc4f8(auStack_48);
    fStack_40 = param_1;
    func_0x0001090bc628();
    func_0x0001090bc4dc();
    func_0x0001090bc42c();
  }
  return;
}



/* Entry: 1090b8a80; end: 1090b8ab7;  */

void FUN_1090b8a80(long param_1)

{
  long unaff_x20;
  
  func_0x0001090bc384();
  if (param_1 != 0) {
    func_0x00010c2241a0(*(undefined4 *)(unaff_x20 + 0x28),*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b8ab8; end: 1090b8abf; -[SCNeoPlayerObjC volume] */

undefined4 FUN_1090b8ab8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x98);
}



/* Entry: 1090b8ac0; end: 1090b8b43; -[SCNeoPlayerObjC setMuted:] */

void FUN_1090b8ac0(long param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  
  if (*(byte *)(param_1 + 0x82) != param_3) {
    *(char *)(param_1 + 0x82) = (char)param_3;
    func_0x0001090bc440();
    func_0x0001090bc3f8();
    func_0x0001090bc4f8(auStack_48);
    uStack_40 = (char)param_3;
    func_0x0001090bc44c();
    func_0x0001090bc550();
    func_0x0001090bc42c();
  }
  return;
}



/* Entry: 1090b8b44; end: 1090b8b7b;  */

void FUN_1090b8b44(long param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x0001090bc384();
  if (param_1 != 0) {
    func_0x00010c1ca6a0(*(undefined8 *)(param_1 + 8),param_2,*(undefined1 *)(unaff_x20 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b8b7c; end: 1090b8b83; -[SCNeoPlayerObjC muted] */

undefined1 FUN_1090b8b7c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x82);
}



/* Entry: 1090b8b84; end: 1090b8b93; -[SCNeoPlayerObjC rate] */

undefined4 FUN_1090b8b84(long param_1)

{
  return *(undefined4 *)(param_1 + 0x94);
}



/* Entry: 1090b8b94; end: 1090b8b9f; -[SCNeoPlayerObjC setLoopEnabled:] */

void FUN_1090b8b94(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x6e) = param_3;
  return;
}



/* Entry: 1090b8ba0; end: 1090b8bab; -[SCNeoPlayerObjC loopEnabled] */

undefined1 FUN_1090b8ba0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x6e);
}



/* Entry: 1090b8bac; end: 1090b8bb7; -[SCNeoPlayerObjC state] */

undefined8 FUN_1090b8bac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1090b8bb8; end: 1090b8bbf; -[SCNeoPlayerObjC _applyRate:] */

void FUN_1090b8bb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_setRate__1126577b8);
  return;
}



/* Entry: 1090b8bc0; end: 1090b8bc7; -[SCNeoPlayerObjC view] */

void FUN_1090b8bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_videoView_112684940);
  return;
}



/* Entry: 1090b8bc8; end: 1090b8c07; -[SCNeoPlayerObjC videoGravity] */

void FUN_1090b8bc8(long param_1)

{
  func_0x00010c29bc60(*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29a3e0();
  func_0x0001090bc2c4();
  return;
}



/* Entry: 1090b8c08; end: 1090b8c47; -[SCNeoPlayerObjC setVideoGravity:] */

void FUN_1090b8c08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c29bc60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2218a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090b8c48; end: 1090b8c77; -[SCNeoPlayerObjC _resetRenderersIfNecessary] */

void FUN_1090b8c48(int param_1)

{
  func_0x0001090bc64c();
  func_0x00010c232960();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be93830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1090b8c78; end: 1090b8d17; -[SCNeoPlayerObjC _resetRenderers] */

void FUN_1090b8c78(void)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x0001090bc64c();
  func_0x0001090bc500();
  func_0x00010c26fdc0(*(undefined8 *)(unaff_x19 + 8));
  _CMTimebaseGetTime(auStack_48);
  func_0x0001090bc744(auStack_60);
  func_0x0001090bc3c8();
  func_0x00010c1572c0();
  func_0x00010c067d80(*(undefined8 *)(unaff_x19 + 0x78));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77740();
  func_0x0001090bc398();
  func_0x0001090bc390();
  return;
}



/* Entry: 1090b8d18; end: 1090b8d8f; -[SCNeoPlayerObjC _resetForNewItem] */

void FUN_1090b8d18(long param_1)

{
  undefined1 auStack_28 [8];
  
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  func_0x0001090bc5b4(auStack_28);
  func_0x0001090bc434();
  func_0x0001090bc2fc(FUN_1090b8d90,0xc2000000);
  func_0x0001090bc600();
  func_0x0001090bc628();
  func_0x0001090bc4dc();
  func_0x0001090bc4e4();
  return;
}



/* Entry: 1090b8d90; end: 1090b8f2b;  */

void FUN_1090b8d90(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    func_0x00010be01ee0(param_1);
    func_0x00010c195460(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c195460(*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(param_1 + 0x6d) = 0;
    *(undefined2 *)(param_1 + 0x80) = 0;
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c137fe0(uVar1);
    lVar2 = *(long *)(param_1 + 0x28);
    if (lVar2 != 0) {
      _CMClockGetHostTimeClock();
      _CMTimebaseSetSourceClock(lVar2,uVar1);
      _CMTimebaseSetRate(0,*(undefined8 *)(param_1 + 0x28));
      _CFRelease(*(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
    func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    func_0x0001090bc398();
    func_0x0001090bc3a8();
    func_0x00010c067d80(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1003c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2f260();
    func_0x0001090bc398();
    func_0x0001090bc3a8();
    *(undefined4 *)(param_1 + 0x68) = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar1);
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x48));
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x90) = 0;
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 8));
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x50));
    func_0x0001090bc750();
    lVar2 = *(long *)(param_1 + 0x38);
    func_0x00010c261080();
    if (lVar2 == 0) {
      func_0x00010c069d00(*(undefined8 *)(param_1 + 0xa8));
      func_0x0001090bc6bc();
    }
    func_0x00010c137fe0(*(undefined8 *)(param_1 + 0xa0));
    func_0x0001090bc6f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b8f2c; end: 1090b90bb; -[SCNeoPlayerObjC _setupWithSampleBufferProvider:playerItem:] */

void FUN_1090b8f2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x0001090bc494();
  func_0x0001090bc510();
  func_0x00010c067d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2778c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090bc6a8();
  func_0x0001090bc3a0();
  func_0x0001090bc3a8();
  func_0x0001090bc4d4();
  func_0x0001090bc580();
  _objc_initWeak(auStack_58,param_1);
  func_0x0001090bc434();
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  _objc_copyWeak(auStack_68,auStack_58);
  func_0x0001090bc424();
  func_0x0001090bc510();
  uStack_60 = param_4;
  func_0x0001090bc580();
  func_0x0001090bc4d4();
  func_0x00010bf850c0(uVar1);
  func_0x0001090bc5f8();
  func_0x0001090bc590();
  func_0x0001090bc588();
  func_0x0001090bc49c();
  func_0x0001090bc3a0();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  func_0x0001090bc3a8();
  func_0x0001090bc398();
  func_0x0001090bc390();
  return;
}



/* Entry: 1090b90bc; end: 1090b9703;  */

void FUN_1090b90bc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *extraout_x8;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    func_0x0001090bc578(*(undefined8 *)(param_1 + 0x20));
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001090bc4d4();
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = uVar5;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26fdc0();
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    func_0x0001090bc4d4();
    uVar3 = *(undefined8 *)(lVar2 + 0x78);
    *(undefined8 *)(lVar2 + 0x78) = uVar5;
    _objc_release(uVar3);
    func_0x00010c067d80(*(undefined8 *)(lVar2 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090bc458();
    func_0x0001090bc3a8();
    if (*(long *)(lVar2 + 0x18) == 0) {
      puVar4 = PTR_PTR_1126dd570;
      _objc_alloc();
      _objc_alloc();
      func_0x00010c037220();
      func_0x00010c22ba80(PTR_PTR_1126dd3c0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26fdc0(*(undefined8 *)(lVar2 + 8));
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21d80(*(undefined8 *)(lVar2 + 0x38));
      func_0x00010c11de00(*(undefined8 *)(lVar2 + 0xb8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c2000();
      uVar3 = *(undefined8 *)(lVar2 + 0x50);
      func_0x00010bf10180();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc788();
      func_0x0001090bc5d0();
      uVar5 = *(undefined8 *)(lVar2 + 0x18);
      *(undefined **)(lVar2 + 0x18) = puVar4;
      func_0x0001090bc4bc(uVar5);
      _objc_release(uVar3);
      func_0x0001090bc40c();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
      func_0x0001090bc578(*(undefined8 *)(lVar2 + 0x18));
    }
    else {
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc458();
      func_0x0001090bc3a8();
    }
    if (*(long *)(lVar2 + 0x20) == 0) {
      puVar4 = PTR_PTR_1126dd570;
      _objc_alloc();
      _objc_alloc();
      func_0x00010c037220();
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26fdc0(*(undefined8 *)(lVar2 + 8));
      func_0x00010c067d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf21d80(*(undefined8 *)(lVar2 + 0x38));
      func_0x00010c11de00(*(undefined8 *)(lVar2 + 0xb8));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c2000();
      func_0x00010c0c2240();
      func_0x00010bf810a0();
      func_0x00010c29b840();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc788();
      func_0x0001090bc5d0();
      uVar3 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined **)(lVar2 + 0x20) = puVar4;
      func_0x0001090bc4bc(uVar3);
      func_0x0001090bc414();
      func_0x0001090bc40c();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
      func_0x0001090bc3a8();
      func_0x0001090bc578(*(undefined8 *)(lVar2 + 0x20));
    }
    else {
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc458();
      func_0x0001090bc3a8();
    }
    func_0x00010c1e3a20(*(undefined8 *)(lVar2 + 0x20));
    func_0x00010c1e3a20(*(undefined8 *)(lVar2 + 0x18));
    lVar6 = *(long *)(lVar2 + 0x28);
    if (lVar6 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 8);
      func_0x00010c26fdc0(uVar3);
      _CMTimebaseSetSourceTimebase(lVar6,uVar3);
      func_0x0001090bc5bc();
      uVar3 = *(undefined8 *)(lVar2 + 0x28);
      uStack_78 = extraout_x8[1];
      uStack_80 = *extraout_x8;
      uStack_70 = extraout_x8[2];
      func_0x00010c26fdc0(*(undefined8 *)(lVar2 + 8));
      _CMTimebaseGetTime(auStack_98);
      _CMTimebaseSetRateAndAnchorTime(0x3ff0000000000000,uVar3,&uStack_80,auStack_98);
      _CFRetain(*(undefined8 *)(lVar2 + 0x28));
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c09ca80();
    if (iVar1 != 0) {
      func_0x00010c1496a0(lVar2);
    }
    lVar6 = *(long *)(param_1 + 0x28);
    func_0x00010c261300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc6a8();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
      puVar4 = PTR_PTR_1126dd588;
      _objc_alloc();
      func_0x00010c261300(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04f2e0();
      uVar3 = *(undefined8 *)(lVar2 + 0xa0);
      *(undefined **)(lVar2 + 0xa0) = puVar4;
      func_0x0001090bc4bc(uVar3);
      func_0x0001090bc40c();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
      func_0x0001090bc578(*(undefined8 *)(lVar2 + 0xa0));
      lVar6 = *(long *)(lVar2 + 0x38);
      func_0x00010c261080();
      if (lVar6 == 1) {
        func_0x00010c21c680(*(undefined8 *)(lVar2 + 0xa0));
        uVar3 = *(undefined8 *)(lVar2 + 0xa0);
        func_0x00010c26fdc0(*(undefined8 *)(lVar2 + 8));
        func_0x00010c11de00(*(undefined8 *)(lVar2 + 0xb8));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0c940(uVar3);
      }
      else {
        func_0x00010c21c680(*(undefined8 *)(lVar2 + 0xa0));
        lVar6 = lVar2;
        func_0x00010bf59480();
        _objc_retainAutoreleasedReturnValue();
        *(long *)(lVar2 + 0xa8) = lVar6;
      }
      func_0x0001090bc3a0();
      func_0x00010c067d80(*(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2778c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf941e0();
      func_0x0001090bc3b8();
      func_0x0001090bc3a0();
    }
    func_0x0001090bc750();
    func_0x00010c067d80(*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2778c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    func_0x0001090bc3a0();
    func_0x0001090bc3a8();
  }
  func_0x0001090bc390();
  return;
}



/* Entry: 1090b9704; end: 1090b9747; -[SCNeoPlayerObjC _notifyLoop] */

void FUN_1090b9704(void)

{
  func_0x0001090bc480();
  func_0x0001090bc434();
  func_0x0001090bc2a4(FUN_1090b9748,0xc2000000);
  func_0x0001090bc310();
  func_0x0001090bc5f0();
  func_0x0001090bc4e4();
  return;
}



/* Entry: 1090b9748; end: 1090b97cb;  */

void FUN_1090b9748(long param_1)

{
  ulong unaff_x21;
  
  func_0x0001090bc3c0();
  if (param_1 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_respondsToSelector();
    func_0x0001090bc35c();
    if ((unaff_x21 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090bc630();
      func_0x00010c100920();
      func_0x0001090bc398();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090b97cc; end: 1090b994b; -[SCNeoPlayerObjC _updateState] */

void FUN_1090b97cc(long param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010bf0ae00(*(undefined8 *)(param_1 + 0xb8));
  puVar5 = PTR_PTR_1126dd590;
  _objc_alloc(PTR_PTR_1126dd590);
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x80);
  fVar1 = *(float *)(param_1 + 0x94);
  lVar7 = *(long *)(param_1 + 0x88);
  uVar3 = *(undefined1 *)(param_1 + 0x90);
  if (*(char *)(param_1 + 0x81) == '\x01') {
    func_0x00010c0c4100(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21dc0();
  }
  else {
    func_0x00010c0c4100(*(undefined8 *)(param_1 + 0x78));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21de0();
  }
  func_0x00010c019d60(puVar5,param_2,lVar6 != 0,uVar2,0.0 < fVar1,lVar7 != 0,uVar3);
  func_0x0001090bc340();
  if (*(long *)(param_1 + 0x50) == 0) {
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010bfbfca0(&uStack_78,*(long *)(param_1 + 0x50),param_2,puVar5);
    uStack_88 = uStack_70;
    uStack_80 = (undefined2)uStack_68;
  }
  uVar4 = uStack_78;
  uStack_70 = 0;
  _objc_release(0);
  uStack_90 = uVar4;
  func_0x0001090bc510();
  func_0x00010becf040(param_1,param_2,&uStack_90);
  func_0x0001090bc3a8();
  func_0x0001090bc398();
  return;
}



/* Entry: 1090b994c; end: 1090b9953; -[SCNeoPlayerObjC _onError:] */

void FUN_1090b994c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be690d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__onError_deferrable__112577dd0,param_3,0);
  return;
}



/* Entry: 1090b9954; end: 1090b99af; -[SCNeoPlayerObjC _onError:deferrable:] */

void FUN_1090b9954(void)

{
  undefined8 uVar1;
  byte in_w3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  func_0x0001090bc2d0();
  if ((*(long *)(unaff_x20 + 0x88) == 0) ||
     (((in_w3 & 1) == 0 && ((*(byte *)(unaff_x20 + 0x90) & 1) != 0)))) {
    func_0x0001090bc424();
    uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(unaff_x20 + 0x88) = unaff_x19;
    _objc_release(uVar1);
    *(byte *)(unaff_x20 + 0x90) = in_w3;
    func_0x00010bee0980();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


