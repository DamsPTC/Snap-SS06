/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106a5c3dc; end: 106a5c3df; -[SCLensRemoteApiOAuthDeeplinkHandler processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_106a5c3dc(void)

{
  return;
}



/* Entry: 106a5c3e0; end: 106a5c3f3; -[SCLensRemoteApiOAuthDeeplinkHandler identifier] */

void FUN_106a5c3e0(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 106a5c3f4; end: 106a5c3fb; -[SCLensRemoteApiOAuthDeeplinkHandler priority] */

undefined8 FUN_106a5c3f4(void)

{
  return 1000;
}



/* Entry: 106a5c3fc; end: 106a5c40f; -[SCLensRemoteApiOAuthDeeplinkHandler canProvideProcessorForFeature:] */

void FUN_106a5c3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f838d8);
  return;
}



/* Entry: 106a5c410; end: 106a5c45b; -[SCLensRemoteApiOAuthDeeplinkHandler isValidDeepLink:] */

undefined8 FUN_106a5c410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2d2a0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 106a5c45c; end: 106a5c45f; -[SCLensRemoteApiOAuthDeeplinkHandler makeDeepLinkProcessor] */

void FUN_106a5c45c(void)

{
  return;
}



/* Entry: 106a5c460; end: 106a5c48f; -[SCLensRemoteApiOAuthDeeplinkHandler .cxx_destruct] */

void FUN_106a5c460(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106a5c490; end: 106a5c83f; -[SCDiscoverFeedUpNextV2PlaybackManager initWithUpNextOperaEventAnnouncer:upNextV2Requester:storiesConfigProvider:pageSessionId:circumstanceEngine:playableViewModelGenerator:discoverFeedDataMutator:networkConnectivityMonitor:disposableObserverLifecycle:storiesMetricServices:storiesMediaCoordinator:] */

undefined8 *
FUN_106a5c490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  puStack_68 = PTR_PTR_1126f4800;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = 0;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_10;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b1118;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = param_5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c2830e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf90d20();
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c043160();
    uVar6 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar1[0x13] = 0;
    uVar2 = param_12;
    func_0x00010c283040();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x18];
    puVar1[0x18] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    func_0x00010bec0de0(puVar1);
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



/* Entry: 106a5c840; end: 106a5c877;  */

void FUN_106a5c840(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a5c878; end: 106a5cbff; -[SCDiscoverFeedUpNextV2PlaybackManager _startOperaEventListening:disposableObserverLifecycle:] */

void FUN_106a5c878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106a5cc00;
  puStack_90 = &UNK_110958978;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar8 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf41860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0e0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106a5d0a4;
  puStack_b8 = &UNK_110958a48;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c0d7de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_80);
  uVar3 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a5cc00; end: 106a5ccf3;  */

void FUN_106a5cc00(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a5ccf4;
  puStack_50 = &UNK_1109588d8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bf420(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106a5ccf4; end: 106a5cddb;  */

void FUN_106a5ccf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e2a0();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a5cddc; end: 106a5ce4b;  */

void FUN_106a5cddc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dae0();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a5ce4c; end: 106a5ce4f;  */

void FUN_106a5ce4c(void)

{
  return;
}



/* Entry: 106a5ce50; end: 106a5cf23;  */

bool FUN_106a5ce50(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c0ead40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0ead40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == lVar3) {
    lVar4 = param_2;
    func_0x00010c0ff0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0ff0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != lVar5;
    _objc_release();
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106a5cf24; end: 106a5d03f;  */

void FUN_106a5cf24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cff90;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0ff0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0ead40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c089a60(param_3);
  func_0x00010c15e560();
  _objc_release(param_3);
  func_0x00010c15e560();
  uVar4 = param_2;
  func_0x00010c2830a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c9e0(param_2);
  _objc_release(param_2);
  func_0x00010c036ca0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a5d040; end: 106a5d15f;  */

uint FUN_106a5d040(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  func_0x00010c15e560();
  lVar1 = param_3;
  func_0x00010c15e560();
  if (param_2 == lVar1) {
    lVar1 = param_3;
    func_0x00010c07c9e0(param_3);
    uVar2 = (uint)lVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106a5d160; end: 106a5d173;  */

void FUN_106a5d160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010becfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__triggerNextUpNextRequestIsRetry_1125918d8,1,
             &PTR____CFConstantStringClassReference_110e68b78);
  return;
}



/* Entry: 106a5d174; end: 106a5d6cf; -[SCDiscoverFeedUpNextV2PlaybackManager _handlePlaybackOpenEventWithInitialDFStories:defaultFallbackStories:triggeringAction:triggeringSource:debugBlock:triggeringStoryId:triggeringFeedType:initialStoryIds:] */

/* WARNING: Possible PIC construction at 0x000106a5d668: Changing call to branch */

void FUN_106a5d174(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,int param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,int param_9,undefined4 param_10,
                  undefined8 param_11)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  uVar2 = param_3;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (uVar2 != 0) {
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    uVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_retain(param_8);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_8;
  _objc_release(uVar3);
  *(int *)(param_1 + 0x80) = param_5;
  *(int *)(param_1 + 0x84) = param_6;
  *(bool *)(param_1 + 0x89) = param_5 == 2;
  *(bool *)(param_1 + 0x8b) = param_6 == 9;
  *(bool *)(param_1 + 0x8a) = param_9 == 2;
  _objc_retain(param_4);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_release(uVar3);
  _objc_retain(param_11);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_11;
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar4;
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar4;
  _objc_release(uVar3);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    uVar2 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar2;
    func_0x00010c25b720();
    *(bool *)(param_1 + 0x88) = uVar9 == 5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (uVar2 != 0) {
      uVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar11 = *(undefined8 *)(uVar9 * 8);
        uVar3 = *(undefined8 *)(param_1 + 0x70);
        func_0x00010c259740(uVar11);
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar3);
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar3 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c259740(uVar11);
        func_0x00010c0df880(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(uVar3);
        _objc_release(puVar4);
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
      uVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  lVar10 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar10);
  lVar5 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar3 = *(undefined8 *)(lVar8 * 8);
      uVar11 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c259740(uVar3);
      func_0x00010c0df880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar11);
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c259740(uVar3);
      func_0x00010c0df880(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar11);
      _objc_release(puVar4);
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  uVar3 = param_7;
  _objc_retainBlock();
  uVar11 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  _objc_release(uVar11);
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    lVar5 = *(long *)(param_1 + 0x60);
    func_0x00010bf529e0();
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd8078;
    if (lVar5 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110ddf878;
    }
  }
  else {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd6058;
  }
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  _objc_retain(ppuVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0(param_3);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfa4340(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c0b24c0(uVar3);
  _objc_release(ppuVar6);
  _objc_release(uVar11);
  _objc_release(uVar3);
  uVar2 = param_3;
  uVar3 = param_4;
  func_0x00010be07ec0(param_1);
  if ((((*(byte *)(param_1 + 0x8b) & 1) == 0) &&
      (uVar9 = param_1, func_0x00010beb2f80(), (uVar9 & 1) == 0)) &&
     (uVar9 = param_1, func_0x00010beb2fa0(), (uVar9 & 1) == 0)) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd6058;
    param_3 = param_1;
  }
  else {
    _objc_release(param_11);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      return;
    }
    ___stack_chk_fail();
    uVar11 = *(undefined8 *)(param_3 + 200);
    _objc_retain(uVar3);
    _objc_retain(uVar2);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cff90;
    _objc_alloc(PTR_PTR_1126cff90);
    func_0x00010c036ca0();
    _objc_release(uVar3);
    func_0x00010c0d9840(uVar11);
    _objc_release(puVar4);
    _objc_release(uVar11);
    if (*(char *)(param_3 + 0x8b) == '\x01') {
      uVar9 = param_3;
      func_0x00010be60a40();
      _objc_release(uVar2);
      if ((uVar9 & 1) == 0) {
        return;
      }
    }
    else {
      uVar9 = param_3;
      func_0x00010beb6da0();
      _objc_release(uVar2);
      if ((int)uVar9 == 0) {
        return;
      }
    }
    ppuVar6 = &PTR____CFConstantStringClassReference_110e68b38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s__triggerNextUpNextRequestIsRetry_1125918d8,0,ppuVar6);
  return;
}



/* Entry: 106a5d6d0; end: 106a5d7e3; -[SCDiscoverFeedUpNextV2PlaybackManager _handlePaginationEventWithOperaPresenter:playbackDataProvider:lastPlaylistIndexBeforeUpNext:] */

void FUN_106a5d6d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 200);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cff90;
  _objc_alloc(PTR_PTR_1126cff90);
  func_0x00010c036ca0();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar1);
  _objc_release(uVar3);
  if (*(char *)(param_1 + 0x8b) == '\x01') {
    uVar2 = param_1;
    func_0x00010be60a40();
    _objc_release(param_3);
    if ((uVar2 & 1) != 0) {
LAB_106a5d7c0:
                    /* WARNING: Could not recover jumptable at 0x00010becfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__triggerNextUpNextRequestIsRetry_1125918d8,0,
                 &PTR____CFConstantStringClassReference_110e68b38);
      return;
    }
  }
  else {
    uVar2 = param_1;
    func_0x00010beb6da0();
    _objc_release(param_3);
    if ((int)uVar2 != 0) goto LAB_106a5d7c0;
  }
  return;
}



/* Entry: 106a5d7e4; end: 106a5d8cb; -[SCDiscoverFeedUpNextV2PlaybackManager _mixedCarouselShouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:] */

bool FUN_106a5d7e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  
  func_0x00010bf5fb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0(PTR_PTR_1126cff98,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010799b478(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010bfecde0(lVar3,param_2,uVar2);
    lVar4 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0(lVar4);
    bVar6 = true;
    if ((param_4 != 0) && (lVar3 != 0x7fffffffffffffff)) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar5 = 5;
      }
      else {
        func_0x00010be63a60(param_1);
        uVar5 = (ulong)(int)param_1;
      }
      bVar6 = (ulong)(lVar4 - lVar3) <= uVar5;
    }
    _objc_release(uVar2);
  }
  else {
    bVar6 = false;
  }
  _objc_release(param_3);
  return bVar6;
}



/* Entry: 106a5d8cc; end: 106a5da53; -[SCDiscoverFeedUpNextV2PlaybackManager _shouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:] */

bool FUN_106a5d8cc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  func_0x00010bf5fb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0(PTR_PTR_1126cff98,param_2,param_3);
  if (((ulong)puVar4 & 1) != 0) {
    bVar2 = false;
    goto LAB_106a5d97c;
  }
  uVar5 = param_3;
  func_0x00010799b478(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x48);
  func_0x00010bfecde0(lVar6,param_2,uVar5);
  lVar7 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0(lVar7);
  if (*(long *)(param_1 + 0x98) == 0) {
    uVar8 = param_1;
    func_0x00010beb2f80();
    if (((uVar8 & 1) == 0) && (uVar8 = param_1, func_0x00010beb2fa0(), (int)uVar8 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if ((param_4 != 0) && (lVar6 != 0x7fffffffffffffff)) {
        lVar9 = *(long *)(param_1 + 0x60);
        func_0x00010bf529e0(lVar9);
        if (*(char *)(param_1 + 0x89) == '\x01') {
          uVar8 = param_1;
          func_0x00010be19b60();
          iVar3 = (int)uVar8;
        }
        else {
          uVar8 = param_1;
          func_0x00010bec6880();
          iVar3 = (int)uVar8;
        }
        lVar11 = (long)iVar3;
        if (iVar3 < 0) {
          lVar11 = (param_4 - lVar9) + 1 + lVar11;
          bVar1 = SBORROW8(lVar6,lVar11);
          bVar2 = lVar6 - lVar11 < 0;
        }
        else {
          lVar10 = *(long *)(param_1 + 0x60);
          func_0x00010bf529e0();
          if (lVar10 < lVar11) {
            bVar2 = lVar6 == lVar7 + -1;
            goto LAB_106a5d974;
          }
          lVar7 = *(long *)(param_1 + 0x60);
          func_0x00010bf529e0();
          lVar11 = (param_4 - lVar9) + lVar11;
          bVar2 = false;
          bVar1 = false;
          if (lVar7 != 0) {
            bVar1 = SBORROW8(lVar6,lVar11);
            bVar2 = lVar6 - lVar11 < 0;
          }
        }
        bVar2 = bVar2 == bVar1;
      }
    }
  }
  else {
    func_0x00010be63a60(param_1);
    bVar2 = lVar6 == 0x7fffffffffffffff || (ulong)(lVar7 - lVar6) <= (ulong)(long)(int)param_1;
  }
LAB_106a5d974:
  _objc_release(uVar5);
LAB_106a5d97c:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106a5da54; end: 106a5daeb; -[SCDiscoverFeedUpNextV2PlaybackManager _nextPageTriggeringThresholdOnNetworkCondition] */

undefined8 FUN_106a5da54(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf48f60();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  if (lVar2 == 2) {
    func_0x00010c0d9ce0();
  }
  else {
    func_0x00010c0d9d00();
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  return uVar5;
}



/* Entry: 106a5daec; end: 106a5db4b; -[SCDiscoverFeedUpNextV2PlaybackManager _fsAutoAdvanceTriggeringOffset] */

undefined8 FUN_106a5daec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbb420();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106a5db4c; end: 106a5dbab; -[SCDiscoverFeedUpNextV2PlaybackManager _subsAutoAdvanceTriggeringOffset] */

undefined8 FUN_106a5db4c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25fa60();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106a5dbac; end: 106a5dbdb; -[SCDiscoverFeedUpNextV2PlaybackManager _shouldDeferSendingInitialUpNextRequestForFS] */

bool FUN_106a5dbac(long param_1)

{
  if (*(char *)(param_1 + 0x89) == '\x01') {
    func_0x00010be19b60();
    return (int)param_1 != 0;
  }
  return false;
}



/* Entry: 106a5dbdc; end: 106a5dc0b; -[SCDiscoverFeedUpNextV2PlaybackManager _shouldDeferSendingInitialUpNextRequestForSubs] */

bool FUN_106a5dbdc(long param_1)

{
  if (*(char *)(param_1 + 0x8a) == '\x01') {
    func_0x00010bec6880();
    return (int)param_1 != 0;
  }
  return false;
}



/* Entry: 106a5dc0c; end: 106a5dc67; -[SCDiscoverFeedUpNextV2PlaybackManager _currentNetworkDimension] */

void FUN_106a5dc0c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf48f60();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e68bb8;
  if (lVar3 != 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e68bd8;
  }
  _objc_retain(ppuVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106a5dc68; end: 106a5deab; -[SCDiscoverFeedUpNextV2PlaybackManager _triggerNextUpNextRequestIsRetry:reason:] */

void FUN_106a5dc68(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bdf6d40(param_1);
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010c0b2560(uVar3);
    _objc_release(uVar3);
  }
  else {
    func_0x00010c0b2560(uVar3);
    _objc_release(uVar3);
    if (param_3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(param_1 + 0xa0) + 1;
    }
    *(long *)(param_1 + 0xa0) = lVar5;
    *(undefined1 *)(param_1 + 0x50) = 1;
    _objc_initWeak(auStack_80,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    func_0x000108f51d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106a5deac;
    puStack_90 = &UNK_110958a78;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_copyWeak(auStack_b8,auStack_80);
    uStack_b0 = (undefined1)param_3;
    func_0x00010c15d880(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 106a5deac; end: 106a5dfd3;  */

void FUN_106a5deac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be36680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a5dfd4; end: 106a5e0b3; -[SCDiscoverFeedUpNextV2PlaybackManager _receivedUpnextStories:debugHTML:error:isRetry:] */

void FUN_106a5dfd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (param_5 == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    }
    uVar2 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cff90;
    _objc_alloc(PTR_PTR_1126cff90);
    func_0x00010c036ca0();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a5e0b4; end: 106a5e567; -[SCDiscoverFeedUpNextV2PlaybackManager _appendNewUpnextStories:] */

void FUN_106a5e0b4(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  puVar1 = param_2;
  func_0x00010bed6660();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    lVar6 = param_4;
    func_0x00010c2830a0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar7 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0xb0);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2480();
      _objc_release(uVar3);
    }
    func_0x00010becfcc0(param_2);
    goto LAB_106a5e538;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b25a0();
  _objc_release(uVar3);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  lVar6 = param_4;
  func_0x00010c0ff0a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcd560(param_2);
  _objc_release(lVar6);
  func_0x00010be084e0(param_1,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c0feda0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106a5e568;
  puStack_88 = &UNK_1109057d0;
  uVar4 = uVar3;
  puStack_80 = param_2;
  func_0x000100504554(uVar3,&puStack_a0);
  _objc_release(uVar3);
  lVar6 = param_4;
  func_0x00010c0ead40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_2;
  func_0x00010be6da20(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = param_4;
  func_0x00010c0ead40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  lVar6 = lVar7;
  func_0x000107d005a8();
  if (lVar6 == 0) {
    bVar9 = param_2[0x8b];
LAB_106a5e3d4:
    puVar8 = puVar2;
    func_0x00010bf09f80(bVar9,puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    iVar10 = (int)*(undefined8 *)(param_2 + 0x68);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar5);
    iVar11 = (int)*(undefined8 *)(param_2 + 0x70);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar5);
    bVar9 = param_2[0x8b];
    if ((bVar9 & 1) != 0) goto LAB_106a5e3d4;
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (iVar11 == 0) {
      if (iVar10 == 0) goto LAB_106a5e3d4;
      _objc_opt_new();
      _objc_retain(lVar7);
      _objc_retain(puVar5);
      func_0x00010bf97e80(puVar2);
      puVar8 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010be8eac0(param_2);
      _objc_release(puVar8);
      func_0x00010befa160(puVar5);
      puVar8 = puVar5;
      func_0x00010bf51e00(puVar5);
      _objc_release(lVar7);
    }
    else {
      _objc_opt_new();
      _objc_retain();
      func_0x00010bf97e80(puVar2);
      puVar8 = puVar5;
      func_0x00010bf51e00(puVar5);
      func_0x00010be8eac0(param_2);
      _objc_release(puVar8);
      func_0x00010befa160(puVar5);
      puVar8 = puVar5;
      func_0x00010bf51e00(puVar5);
    }
    _objc_release(puVar5);
    _objc_release(puVar5);
  }
  func_0x00010bdcd000(param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  _objc_release(uVar3);
  lVar6 = param_4;
  func_0x00010c0ead40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar8;
  func_0x00010bf51e00(puVar8);
  func_0x00010c2889e0(lVar6);
  _objc_release(puVar5);
  _objc_release(lVar6);
  func_0x00010be084e0(param_1,param_2);
  *(long *)(param_2 + 0x98) = *(long *)(param_2 + 0x98) + 1;
  _objc_release(puVar8);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(uVar4);
LAB_106a5e538:
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a5e568; end: 106a5e57b;  */

void FUN_106a5e568(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain();
  _objc_retain(uVar5);
  uVar1 = uVar5;
  func_0x00010bfa4340(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107d0049c();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  puVar3 = PTR_PTR_1126bdd30;
  uVar6 = param_2;
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    puVar3 = PTR_PTR_1126bdd28;
    if ((uVar4 & 1) == 0) {
      _objc_retain(param_2);
      uVar4 = param_2;
      goto code_r0x000107d00474;
    }
    _objc_retain(param_2);
    _objc_opt_class(puVar3);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_2);
    func_0x00010bfa4340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x000107d0050c(uVar6,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar3);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_2);
    func_0x00010bfa4340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x000107cffe1c(uVar6,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
code_r0x000107d00474:
  _objc_release(uVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a5e57c; end: 106a5e61f;  */

void FUN_106a5e57c(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x000107d005a8();
  if (lVar1 != 0) {
    iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    _objc_release(puVar2);
    if (iVar3 == 0) {
      *param_4 = 1;
      goto LAB_106a5e608;
    }
  }
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
LAB_106a5e608:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a5e620; end: 106a5e67f;  */

void FUN_106a5e620(long param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010befa120(uVar2);
  lVar1 = *(long *)(param_1 + 0x28);
  _objc_release(param_2);
  if (lVar1 == param_2) {
    *param_4 = 1;
  }
  return;
}



/* Entry: 106a5e680; end: 106a5e70b; -[SCDiscoverFeedUpNextV2PlaybackManager _appendStoriesToPlaybackDataProvider:playbackDataProvider:] */

void FUN_106a5e680(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28a480();
  _objc_release(uVar1);
  uVar2 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_insertAdditionalDiscoverFeedStor_1125f7360);
  if ((uVar2 & 1) != 0) {
    func_0x00010c066540(param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a5e70c; end: 106a5e743; -[SCDiscoverFeedUpNextV2PlaybackManager _replaceCurrentPlaylistIdsWithPlaylist:] */

void FUN_106a5e70c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110958b28);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a5e744; end: 106a5e74b;  */

void FUN_106a5e744(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar1);
  puVar1 = PTR_PTR_1126bdd30;
  uVar2 = param_2;
  if ((uVar3 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    puVar1 = PTR_PTR_1126bdd28;
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR_PTR_1126c2118;
      _objc_opt_class(PTR_PTR_1126c2118);
      uVar3 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar1);
      puVar1 = PTR_PTR_1126c2118;
      if ((uVar3 & 1) == 0) {
        uVar3 = 0;
        goto code_r0x00010799b594;
      }
      _objc_retain(param_2);
      _objc_opt_class(puVar1);
      uVar3 = param_2;
      _objc_opt_isKindOfClass(param_2,puVar1);
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_2);
      puStack_68 = &uStack_70;
      uStack_70 = 0;
      uStack_60 = 0x3032000000;
      puStack_58 = &UNK_10799ab48;
      puStack_50 = &UNK_10799ab58;
      uStack_48 = 0;
      func_0x00010c0bdf40(uVar2);
      uVar3 = puStack_68[5];
      _objc_retain(uVar3);
      __Block_object_dispose(&uStack_70,8);
      _objc_release(uStack_48);
    }
    else {
      _objc_retain(param_2);
      _objc_opt_class(puVar1);
      _objc_opt_isKindOfClass(param_2,puVar1);
      uVar3 = param_2;
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(param_2);
      uVar2 = uVar3;
      func_0x00010bf454e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = uVar2;
      func_0x000108f51f98(uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar1);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar1);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_2);
    uVar3 = uVar2;
    func_0x00010bf45500(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
code_r0x00010799b594:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106a5e74c; end: 106a5e7d7; -[SCDiscoverFeedUpNextV2PlaybackManager _appendCurrentPlaylistWithNewStories:newPlaylist:] */

void FUN_106a5e74c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110958b48);
  _objc_release(param_3);
  func_0x00010befa160(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106a5e7d8; end: 106a5e81f;  */

void FUN_106a5e7d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a5e820; end: 106a5e993; -[SCDiscoverFeedUpNextV2PlaybackManager _operaCurrentPlaylistExcludingAdsWithOperaPresenter:] */

undefined * FUN_106a5e820(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010c101480();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a5e994;
  puStack_60 = &UNK_1108f1638;
  ppuVar5 = &puStack_78;
  puVar1 = puVar6;
  lStack_58 = param_1;
  func_0x0001006372a4();
  _objc_release(puVar6);
  puVar6 = puVar1;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    puVar2 = param_3;
    func_0x00010c101480();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126cff98;
      func_0x00010c06b8a0();
      if ((int)puVar2 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_50 = puVar3;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar6 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0();
  if (((ulong)puVar6 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010be428e0(uVar4);
    puVar6 = (undefined *)(ulong)((uint)uVar4 ^ 1);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(ppuVar5);
  return puVar6;
}



/* Entry: 106a5e994; end: 106a5e9f3;  */

uint FUN_106a5e994(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be428e0(uVar2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106a5e9f4; end: 106a5eb0f; -[SCDiscoverFeedUpNextV2PlaybackManager _updateCurrentPlaybackSessionData:] */

void FUN_106a5e9f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c2830a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a5eb10;
  puStack_60 = &UNK_110958b68;
  lStack_58 = param_1;
  uStack_50 = param_3;
  uStack_48 = uVar1;
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010bd86420(uVar2,&puStack_78);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c2830a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf529e0(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2460();
  _objc_release(uVar2);
  _objc_release(uStack_50);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a5eb10; end: 106a5ee0f;  */

void FUN_106a5eb10(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    _objc_retain(param_2);
    _objc_retain(uVar9);
    _objc_retain(uVar11);
    func_0x00010c089a60();
    puVar3 = PTR_PTR_1126c6d78;
    func_0x00010bf82080(PTR_PTR_1126c6d78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2140;
    uVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126c22b0;
    uVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf81ce0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010c2b1b40(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b67e0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126cffa0;
    _objc_alloc(PTR_PTR_1126cffa0);
    uVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar6 = uVar4;
    func_0x00010c11fd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c25c580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04aca0(puVar10);
    _objc_release(uVar11);
    _objc_release(uVar9);
    func_0x00010c2b4e80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar10 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106a5ee10; end: 106a5effb; -[SCDiscoverFeedUpNextV2PlaybackManager _hydrateLoggingInfoToStory:requestId:hpoPb:] */

void FUN_106a5ee10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c6d78;
  _objc_retain(param_3);
  func_0x00010bf82080(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2140;
  uVar2 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82100(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c22b0;
  uVar2 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c11fd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81ce0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c2ba820(puVar5,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af880(puVar5,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b67e0(puVar3,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c2b1940(puVar3,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar1,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a5effc; end: 106a5f0c7; -[SCDiscoverFeedUpNextV2PlaybackManager _isPayToPromoteStory:] */

ulong FUN_106a5effc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bdd28;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010c079c60(uVar3);
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_3;
    func_0x00010c079c60(param_3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106a5f0c8; end: 106a5f193; -[SCDiscoverFeedUpNextV2PlaybackManager _emitMediaResidentForInitialStories:defaultStories:] */

void FUN_106a5f0c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0xb8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bfa4340(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    _objc_release(uVar2);
    func_0x00010be85400(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110dd6058,
                        uVar3,lVar1);
    func_0x00010be85400(param_1,param_2,param_4,&PTR____CFConstantStringClassReference_110ddf878,
                        uVar3,lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a5f194; end: 106a5f2fb; -[SCDiscoverFeedUpNextV2PlaybackManager _queryMediaResidentForStories:source:feedType:coordinator:] */

void FUN_106a5f194(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110958bb8);
    lVar2 = lVar1;
    func_0x00010bf529e0();
    if (lVar2 != 0) {
      _objc_initWeak(auStack_58,param_1);
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_copyWeak(auStack_68,auStack_58);
      _objc_retain(param_4);
      uStack_60 = param_5;
      func_0x00010bf170e0(param_6);
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_68);
      _objc_destroyWeak(auStack_58);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a5f2fc; end: 106a5f39b;  */

void FUN_106a5f2fc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x000108f4bad8();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000107d03060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = lVar2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a5f39c; end: 106a5f503;  */

void FUN_106a5f39c(double param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  param_2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    param_1 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar1 = param_3;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar5 = *plStack_120;
      do {
        lVar6 = 0;
        do {
          if (*plStack_120 != lVar5) {
            _objc_enumerationMutation(lVar1);
          }
          func_0x00010c067fc0(*(undefined8 *)(lStack_128 + lVar6 * 8));
          uVar3 = *(undefined8 *)(param_2 + 0xb0);
          func_0x00010c269d40(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0b24a0();
          _objc_release(uVar3);
          lVar6 = lVar6 + 1;
        } while (lVar2 != lVar6);
        lVar2 = lVar1;
        puVar4 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar1);
    param_4 = (undefined1 *)puVar4;
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(param_3 + 0xb0);
  dVar7 = param_1;
  _objc_retain(param_4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar7 - param_1) * 1000.0),uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106a5f504; end: 106a5f58f; -[SCDiscoverFeedUpNextV2PlaybackManager _emitTimeMetricsWithStartTime:step:sequence:] */

void FUN_106a5f504(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0xb0);
  dVar2 = param_1;
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010c0b24e0((double)(long)((dVar2 - param_1) * 1000.0),uVar1,param_3,param_4,param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106a5f590; end: 106a5f697; -[SCDiscoverFeedUpNextV2PlaybackManager .cxx_destruct] */

void FUN_106a5f590(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 106a5f698; end: 106a5fb8b; -[SCDiscoverFeedUpNextV2PlaybackSessionEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a5f698(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
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
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  lVar10 = (long)_DAT_1127567f4;
  uVar8 = *(undefined8 *)(param_1 + lVar10);
  *(undefined **)(param_1 + lVar10) = puVar1;
  _objc_release(uVar8);
  uStack_88 = param_1 + _DAT_1127567f8;
  lVar9 = uStack_88;
  _objc_loadWeakRetained();
  lVar2 = lVar9;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c283160();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar9);
  if ((int)lVar4 == 0) {
    puVar1 = PTR_PTR_1126cffb0;
    _objc_alloc();
    uStack_90 = param_1 + _DAT_112756808;
    _objc_loadWeakRetained();
    uStack_70 = uStack_90;
    func_0x00010c283080();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = param_1 + _DAT_11275680c;
    _objc_loadWeakRetained();
    uStack_80 = uStack_a8;
    func_0x00010c283120();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar2 = uStack_88;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = param_1 + _DAT_112756808;
    _objc_loadWeakRetained();
    lVar3 = uStack_98;
    func_0x00010bf5e6c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = param_1 + _DAT_112756810;
    _objc_loadWeakRetained();
    uStack_78 = uStack_a0;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = param_1 + _DAT_112756814;
    _objc_loadWeakRetained();
    lVar4 = uStack_b0;
    func_0x00010c29d900();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = param_1 + _DAT_112756818;
    _objc_loadWeakRetained();
    uStack_c0 = uStack_b8;
    func_0x00010c08d440();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = param_1 + _DAT_1127567fc;
    _objc_loadWeakRetained();
    uStack_d0 = uStack_c8;
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    uStack_d8 = param_1 + _DAT_11275681c;
    _objc_loadWeakRetained();
    uStack_e0 = param_1 + _DAT_11275682c;
    _objc_loadWeakRetained();
    lVar10 = uStack_e0;
    func_0x00010c2587e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059720(puVar1,param_2,uStack_70,uStack_80,lVar2,lVar3,uStack_78,lVar4,uStack_c0,
                        uStack_d0,uVar8,uStack_d8,lVar10);
    lVar9 = *(long *)(param_1 + _DAT_112756804);
    *(undefined **)(param_1 + _DAT_112756804) = puVar1;
  }
  else {
    puVar1 = PTR_PTR_1126cffa8;
    _objc_alloc();
    uStack_90 = param_1 + _DAT_112756808;
    _objc_loadWeakRetained();
    uStack_70 = uStack_90;
    func_0x00010c283080();
    _objc_retainAutoreleasedReturnValue();
    uStack_a8 = param_1 + _DAT_11275680c;
    _objc_loadWeakRetained();
    uStack_80 = uStack_a8;
    func_0x00010c283120();
    _objc_retainAutoreleasedReturnValue();
    _objc_loadWeakRetained();
    lVar2 = uStack_88;
    func_0x00010c258480();
    _objc_retainAutoreleasedReturnValue();
    uStack_98 = param_1 + _DAT_112756808;
    _objc_loadWeakRetained();
    lVar3 = uStack_98;
    func_0x00010bf5e6c0();
    _objc_retainAutoreleasedReturnValue();
    uStack_a0 = param_1 + _DAT_112756810;
    _objc_loadWeakRetained();
    uStack_78 = uStack_a0;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = param_1 + _DAT_112756814;
    _objc_loadWeakRetained();
    lVar4 = uStack_b0;
    func_0x00010c29d900();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = param_1 + _DAT_112756818;
    _objc_loadWeakRetained();
    uStack_c0 = uStack_b8;
    func_0x00010c08d440();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = param_1 + _DAT_1127567fc;
    _objc_loadWeakRetained();
    uStack_d0 = uStack_c8;
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + lVar10);
    uStack_d8 = param_1 + _DAT_11275681c;
    _objc_loadWeakRetained();
    uStack_e0 = param_1 + _DAT_112756820;
    _objc_loadWeakRetained();
    lVar10 = uStack_e0;
    func_0x00010c24b1e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1 + _DAT_112756824;
    _objc_loadWeakRetained();
    lVar5 = lVar9;
    func_0x00010c24b680();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + _DAT_112756828;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c24c420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059700(puVar1,param_2,uStack_70,uStack_80,lVar2,lVar3,uStack_78,lVar4,uStack_c0,
                        uStack_d0,uVar8,uStack_d8,lVar10,lVar5,lVar7);
    uVar8 = *(undefined8 *)(param_1 + _DAT_112756800);
    *(undefined **)(param_1 + _DAT_112756800) = puVar1;
    _objc_release(uVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(uStack_e0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(uStack_c8);
  _objc_release(uStack_c0);
  _objc_release(uStack_b8);
  _objc_release(lVar4);
  _objc_release(uStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_a0);
  _objc_release(lVar3);
  _objc_release(uStack_98);
  _objc_release(lVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_80);
  _objc_release(uStack_a8);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_90);
  return;
}



/* Entry: 106a5fb8c; end: 106a5fbdb; -[SCDiscoverFeedUpNextV2PlaybackSessionEntryPoint dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a5fb8c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_1127567f4));
  puStack_28 = PTR_PTR_1126f4808;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a5fbdc; end: 106a5fcbb; -[SCDiscoverFeedUpNextV2PlaybackSessionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106a5fbdc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275682c);
  _objc_destroyWeak(param_1 + _DAT_112756828);
  _objc_destroyWeak(param_1 + _DAT_112756824);
  _objc_destroyWeak(param_1 + _DAT_112756820);
  _objc_destroyWeak(param_1 + _DAT_11275681c);
  _objc_destroyWeak(param_1 + _DAT_1127567fc);
  _objc_destroyWeak(param_1 + _DAT_112756818);
  _objc_destroyWeak(param_1 + _DAT_112756814);
  _objc_destroyWeak(param_1 + _DAT_112756810);
  _objc_destroyWeak(param_1 + _DAT_1127567f8);
  _objc_destroyWeak(param_1 + _DAT_11275680c);
  _objc_destroyWeak(param_1 + _DAT_112756808);
  _objc_storeStrong(param_1 + _DAT_1127567f4,0);
  _objc_storeStrong(param_1 + _DAT_112756800,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112756804,0);
  return;
}



/* Entry: 106a5fcbc; end: 106a60203; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager initWithUpNextOperaEventAnnouncer:upNextV2Requester:storiesConfigProvider:pageSessionId:circumstanceEngine:playableViewModelGenerator:discoverFeedDataMutator:networkConnectivityMonitor:disposableObserverLifecycle:storiesMetricServices:spotlightDisplayOrdererFactor:spotlightMediaFetcherFactory:spotlightStoriesPrefetcherFactory:] */

undefined8 *
FUN_106a5fcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_70 = PTR_PTR_1126f4810;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = 0;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b1118;
    _objc_alloc();
    func_0x00010c043160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar1[0x13] = 0;
    uVar2 = param_12;
    func_0x00010c283040();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_14);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x23];
    puVar1[0x23] = puVar3;
    _objc_release(uVar2);
    uVar4 = puVar1[0x17];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c24c440();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x24];
    puVar1[0x24] = uVar5;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar4);
    func_0x00010c24f160(puVar1[0x24]);
    uVar4 = puVar1[0x18];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[3];
    func_0x00010bfa4340(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067fc0();
    uVar2 = uVar4;
    func_0x00010c24b200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x19];
    puVar1[0x19] = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar2);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010c0dd860();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_11;
    _objc_release(uVar2);
    func_0x00010be66000(puVar1);
    func_0x00010bec0de0(puVar1);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x25];
    puVar1[0x25] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x27];
    puVar1[0x27] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 106a60204; end: 106a60273;  */

void FUN_106a60204(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106a60274; end: 106a602a7; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager dealloc] */

void FUN_106a60274(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f4810;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106a602a8; end: 106a6062f; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _startOperaEventListening:disposableObserverLifecycle:] */

void FUN_106a602a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_80,param_1);
  uVar1 = param_3;
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_106a60630;
  puStack_90 = &UNK_110958978;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar8 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x110);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x118);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bf41860(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010c0e0e60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010bf870c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106a60ae0;
  puStack_b8 = &UNK_110958a48;
  _objc_copyWeak(auStack_b0,auStack_80);
  uVar7 = uVar6;
  func_0x00010c25ff60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar8 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar8;
  func_0x00010c0d7de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_d8,auStack_80);
  uVar3 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106a60630; end: 106a60723;  */

void FUN_106a60630(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a60724;
  puStack_50 = &UNK_1109588d8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0bf420(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 106a60724; end: 106a60817;  */

void FUN_106a60724(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  _objc_retain(param_11);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2e280();
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a60818; end: 106a60887;  */

void FUN_106a60818(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dae0();
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a60888; end: 106a6088b;  */

void FUN_106a60888(void)

{
  return;
}



/* Entry: 106a6088c; end: 106a6095f;  */

bool FUN_106a6088c(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c0ead40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0ead40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == lVar3) {
    lVar4 = param_2;
    func_0x00010c0ff0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0ff0a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar4 != lVar5;
    _objc_release();
    _objc_release(lVar4);
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 106a60960; end: 106a60a7b;  */

void FUN_106a60960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cff90;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0ff0a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0ead40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c089a60(param_3);
  func_0x00010c15e560();
  _objc_release(param_3);
  func_0x00010c15e560();
  uVar4 = param_2;
  func_0x00010c2830a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c9e0(param_2);
  _objc_release(param_2);
  func_0x00010c036ca0(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106a60a7c; end: 106a60b57;  */

uint FUN_106a60a7c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  func_0x00010c15e560();
  lVar1 = param_3;
  func_0x00010c15e560();
  if (param_2 == lVar1) {
    lVar1 = param_3;
    func_0x00010c07c9e0(param_3);
    uVar2 = (uint)lVar1 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106a60b58; end: 106a60f73; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _handlePlaybackOpenEventWithInitialDFStories:defaultFallbackStories:triggeringAction:triggeringSource:debugBlock:triggeringStoryId:initialStoryIds:presentingViewController:] */

void FUN_106a60b58(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = *plStack_1a0;
    do {
      if (*plStack_1a0 != lVar5) {
        _objc_enumerationMutation(param_3);
      }
      lVar1 = lVar1 + -1;
    } while ((lVar1 != 0) || (lVar1 = param_3, func_0x00010bf52a60(), lVar1 != 0));
  }
  _objc_release(param_3);
  _objc_retain(param_8);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_8;
  _objc_release(uVar2);
  *(int *)(param_1 + 0x80) = param_5;
  *(int *)(param_1 + 0x84) = param_6;
  *(bool *)(param_1 + 0x89) = param_5 == 2;
  *(bool *)(param_1 + 0x8a) = param_6 == 9;
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_release(uVar2);
  _objc_retain(param_9);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_9;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined **)(param_1 + 0x68) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar3;
  _objc_release(uVar2);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c25b720();
    *(bool *)(param_1 + 0x88) = lVar5 == 5;
    _objc_release(lVar1);
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar5 = *plStack_1e0;
      do {
        lVar6 = 0;
        do {
          if (*plStack_1e0 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar2 = *(undefined8 *)(lStack_1e8 + lVar6 * 8);
          uVar7 = *(undefined8 *)(param_1 + 0x70);
          func_0x00010c259740(uVar2);
          func_0x00010c0df880(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar7);
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar7 = *(undefined8 *)(param_1 + 0x40);
          func_0x00010c259740(uVar2);
          func_0x00010c0df880(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(uVar7);
          _objc_release(puVar3);
          lVar6 = lVar6 + 1;
        } while (lVar1 != lVar6);
        lVar1 = param_3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
  }
  _objc_initWeak(auStack_1f8,param_1);
  _objc_copyWeak(auStack_200,auStack_1f8);
  func_0x00010be1e580(param_1);
  uVar2 = param_7;
  _objc_retainBlock();
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  _objc_release(uVar7);
  uVar2 = param_10;
  _objc_storeWeak(param_1 + 0x140,param_10);
  if (((*(byte *)(param_1 + 0x8a) & 1) == 0) &&
     (uVar4 = param_1, func_0x00010beb2f80(), (uVar4 & 1) == 0)) {
    func_0x00010becfca0(param_1);
  }
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1f8);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_200);
  _objc_destroyWeak(auStack_1f8);
  __Unwind_Resume(param_3);
  _objc_retain(uVar2);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010bee08e0();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a60f74; end: 106a60fbb;  */

void FUN_106a60f74(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee08e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106a60fbc; end: 106a61187; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _handlePaginationEventWithOperaPresenter:playbackDataProvider:lastPlaylistIndexBeforeUpNext:] */

void FUN_106a60fbc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cff90;
  _objc_alloc(PTR_PTR_1126cff90);
  func_0x00010c036ca0();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
  lVar2 = param_3;
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_1;
    func_0x00010be020c0(param_1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = lVar3;
    _objc_release(uVar4);
    lVar3 = lVar2;
    func_0x000107d005a8(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0xe0);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df880(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar4,param_2,puVar1);
    _objc_release(puVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x138);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar4);
  }
  lVar3 = param_1;
  func_0x00010bf6eae0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010bf529e0();
  if ((lVar5 == 0) || (lVar5 = param_3, func_0x00010c07ab40(), (int)lVar5 == 0)) {
    _objc_release(lVar3);
  }
  else {
    lVar5 = *(long *)(param_1 + 0xf8);
    _objc_release(lVar3);
    if (lVar5 != 0) {
      func_0x00010bedd720(param_1,param_2,*(undefined8 *)(param_1 + 0xf8),0,param_3);
    }
  }
  lVar3 = param_1;
  func_0x00010beb5560(param_1,param_2,param_3);
  if ((int)lVar3 != 0) {
    func_0x00010becfca0(param_1,param_2,0);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a61188; end: 106a61323; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _triggerNextUpNextRequestIsRetry:] */

void FUN_106a61188(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [8];
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    _objc_initWeak(auStack_80,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    func_0x000108f51d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106a61324;
    puStack_90 = &UNK_110958a78;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_copyWeak(auStack_b8,auStack_80);
    uStack_b0 = param_3;
    func_0x00010c15d880(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  return;
}



/* Entry: 106a61324; end: 106a6144b;  */

void FUN_106a61324(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be36680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106a6144c; end: 106a6152b; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _receivedUpnextStories:debugHTML:error:isRetry:] */

void FUN_106a6144c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (param_5 == 0) {
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,param_4);
    }
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cff90;
    _objc_alloc(PTR_PTR_1126cff90);
    func_0x00010c036ca0();
    func_0x00010c0d9840(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a6152c; end: 106a6168f; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _shouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:] */

bool FUN_106a6152c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  func_0x00010bf5fb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0(PTR_PTR_1126cff98,param_2,param_3);
  if (((ulong)puVar3 & 1) != 0) {
    bVar2 = false;
    goto LAB_106a6166c;
  }
  uVar4 = param_3;
  func_0x00010799b478(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 0x48);
  func_0x00010bfecde0(lVar5,param_2,uVar4);
  lVar6 = *(long *)(param_1 + 0x48);
  func_0x00010bf529e0(lVar6);
  if (*(long *)(param_1 + 0x98) == 0) {
    lVar9 = param_1;
    func_0x00010beb2f80();
    if ((int)lVar9 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if ((param_4 != 0) && (lVar5 != 0x7fffffffffffffff)) {
        lVar7 = *(long *)(param_1 + 0x60);
        func_0x00010bf529e0(lVar7);
        lVar8 = param_1;
        func_0x00010be19b60();
        lVar9 = (long)(int)lVar8;
        if ((int)lVar8 < 0) {
          lVar6 = (param_4 - lVar7) + lVar9 + 1;
          bVar1 = SBORROW8(lVar5,lVar6);
          bVar2 = lVar5 - lVar6 < 0;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x60);
          func_0x00010bf529e0();
          if (lVar8 < lVar9) {
            bVar2 = lVar5 == lVar6 + -1;
            goto LAB_106a61664;
          }
          lVar6 = *(long *)(param_1 + 0x60);
          func_0x00010bf529e0();
          lVar9 = (param_4 - lVar7) + lVar9;
          bVar2 = false;
          bVar1 = false;
          if (lVar6 != 0) {
            bVar1 = SBORROW8(lVar5,lVar9);
            bVar2 = lVar5 - lVar9 < 0;
          }
        }
        bVar2 = bVar2 == bVar1;
      }
    }
  }
  else {
    func_0x00010be63a60(param_1);
    bVar2 = lVar5 == 0x7fffffffffffffff || (ulong)(lVar6 - lVar5) <= (ulong)(long)(int)param_1;
  }
LAB_106a61664:
  _objc_release(uVar4);
LAB_106a6166c:
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106a61690; end: 106a61707; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _shouldDeferSendingInitialUpNextRequestForFS] */

bool FUN_106a61690(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x89) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2830e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfbb420();
    bVar1 = (int)uVar4 != 0;
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 106a61708; end: 106a617ef; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _mixedCarouselShouldTriggerRequestWithOperaPresenter:lastPlaylistIndexBeforeUpNext:] */

bool FUN_106a61708(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  
  func_0x00010bf5fb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0(PTR_PTR_1126cff98,param_2,param_3);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010799b478(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x48);
    func_0x00010bfecde0(lVar3,param_2,uVar2);
    lVar4 = *(long *)(param_1 + 0x48);
    func_0x00010bf529e0(lVar4);
    bVar6 = true;
    if ((param_4 != 0) && (lVar3 != 0x7fffffffffffffff)) {
      if (*(long *)(param_1 + 0x98) == 0) {
        uVar5 = 5;
      }
      else {
        func_0x00010be63a60(param_1);
        uVar5 = (ulong)(int)param_1;
      }
      bVar6 = (ulong)(lVar4 - lVar3) <= uVar5;
    }
    _objc_release(uVar2);
  }
  else {
    bVar6 = false;
  }
  _objc_release(param_3);
  return bVar6;
}



/* Entry: 106a617f0; end: 106a61887; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _nextPageTriggeringThresholdOnNetworkCondition] */

undefined8 FUN_106a617f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf48f60();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  if (lVar2 == 2) {
    func_0x00010c0d9ce0();
  }
  else {
    func_0x00010c0d9d00();
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  return uVar5;
}



/* Entry: 106a61888; end: 106a618e7; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _fsAutoAdvanceTriggeringOffset] */

undefined8 FUN_106a61888(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2830e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbb420();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 106a618e8; end: 106a61a5b; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _operaCurrentPlaylistExcludingAdsWithOperaPresenter:] */

undefined * FUN_106a618e8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar6 = param_3;
  func_0x00010c101480();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106a61a5c;
  puStack_60 = &UNK_1108f1638;
  ppuVar5 = &puStack_78;
  puVar1 = puVar6;
  lStack_58 = param_1;
  func_0x0001006372a4();
  _objc_release(puVar6);
  puVar6 = puVar1;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    puVar2 = param_3;
    func_0x00010c101480();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = PTR_PTR_1126cff98;
      func_0x00010c06b8a0();
      if ((int)puVar2 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_50 = puVar3;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010bf09f80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  puVar6 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0();
  if (((ulong)puVar6 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010be428e0(uVar4);
    puVar6 = (undefined *)(ulong)((uint)uVar4 ^ 1);
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  _objc_release(ppuVar5);
  return puVar6;
}



/* Entry: 106a61a5c; end: 106a61abb;  */

uint FUN_106a61a5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126cff98;
  func_0x00010c06b8a0();
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010be428e0(uVar2);
    uVar3 = (uint)uVar2 ^ 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106a61abc; end: 106a61b87; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _isPayToPromoteStory:] */

ulong FUN_106a61abc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bdd28;
  if (uVar1 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    uVar4 = uVar3;
    func_0x00010c079c60(uVar3);
    _objc_release(uVar3);
  }
  else {
    uVar4 = param_3;
    func_0x00010c079c60(param_3);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106a61b88; end: 106a61c9f; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _appendNewUpnextStories:] */

void FUN_106a61b88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  lVar1 = param_2;
  func_0x00010bed6660(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    func_0x00010becfca0(param_2,param_3,1);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070a0();
    _objc_release(uVar3);
    func_0x00010c277ee0(*(undefined8 *)(param_2 + 200),param_3,lVar1);
    uVar3 = param_4;
    func_0x00010c0ff0a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdcd560(param_2,param_3,lVar1,uVar3);
    _objc_release(uVar3);
    func_0x00010be084e0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e68c18,
                        *(undefined8 *)(param_2 + 0x98));
    func_0x00010be084e0(param_1,param_2,param_3,&PTR____CFConstantStringClassReference_110e68c38,
                        *(undefined8 *)(param_2 + 0x98));
    *(long *)(param_2 + 0x98) = *(long *)(param_2 + 0x98) + 1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106a61ca0; end: 106a61d5f; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _updateCurrentPlaybackSessionData:] */

void FUN_106a61ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bf529e0();
  uVar2 = param_3;
  func_0x00010c2830a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a61d60;
  puStack_50 = &UNK_110958b68;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = uVar1;
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010bd86420(uVar2,&puStack_68);
  _objc_release(uVar2);
  _objc_release(uStack_40);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a61d60; end: 106a6205f;  */

void FUN_106a61d60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010bf4b900();
  if ((uVar2 & 1) == 0) {
    func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    _objc_retain(param_2);
    _objc_retain(uVar9);
    _objc_retain(uVar11);
    func_0x00010c089a60();
    puVar3 = PTR_PTR_1126c6d78;
    func_0x00010bf82080(PTR_PTR_1126c6d78);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126c2140;
    uVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf82100();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar7 = PTR_PTR_1126c22b0;
    uVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c11fd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf81ce0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010c2b1b40(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b67e0(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba4e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126cffa0;
    _objc_alloc(PTR_PTR_1126cffa0);
    uVar4 = param_2;
    func_0x00010c25a160(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar6 = uVar4;
    func_0x00010c11fd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c25c580();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04aca0(puVar10);
    _objc_release(uVar11);
    _objc_release(uVar9);
    func_0x00010c2b4e80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar10 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  else {
    puVar10 = (undefined *)0x0;
  }
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106a62060; end: 106a620bb; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _appendStoriesToPlaybackDataProvider:playbackDataProvider:] */

void FUN_106a62060(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  _objc_opt_respondsToSelector(param_4,PTR_s_insertAdditionalDiscoverFeedStor_1125f7360);
  if ((uVar1 & 1) != 0) {
    func_0x00010c066540(param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a620bc; end: 106a62147; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _appendCurrentPlaylistWithNewStories:newPlaylist:] */

void FUN_106a620bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(param_3);
  func_0x00010c0d3c80();
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110958d08);
  _objc_release(param_3);
  func_0x00010befa160(uVar3);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 106a62148; end: 106a6218f;  */

void FUN_106a62148(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106a62190; end: 106a6237b; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _hydrateLoggingInfoToStory:requestId:hpoPb:] */

void FUN_106a62190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c6d78;
  _objc_retain(param_3);
  func_0x00010bf82080(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c2140;
  uVar2 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf82100(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c22b0;
  uVar2 = param_3;
  func_0x00010c25a160(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar2;
  func_0x00010c11fd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf81ce0(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  func_0x00010c2ba820(puVar5,param_2,param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af880(puVar5,param_2,param_5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b67e0(puVar3,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  func_0x00010c2b1940(puVar3,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba4e0(puVar1,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106a6237c; end: 106a62383; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager desiredPlaylistOrderingObservable] */

void FUN_106a6237c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ece30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 200),PTR_s_orderedStories_112618da0);
  return;
}



/* Entry: 106a62384; end: 106a6286f; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _updatePlaylistWithDesiredPlaylistReorderingAndNextStory:switchToDedupeFp:operaPresenter:] */

undefined *
FUN_106a62384(ulong param_1,undefined **param_2,undefined *param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  ulong uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = param_1;
  func_0x00010bf6eae0();
  _objc_retainAutoreleasedReturnValue();
  if (((param_3 != (undefined *)0x0) && (uVar14 = param_5, func_0x00010c07ab40(), (int)uVar14 != 0))
     && (uVar4 = uVar3, func_0x00010bf529e0(), uVar4 != 0)) {
    uVar4 = param_1;
    func_0x00010be6da20();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar4;
    func_0x00010bf529e0();
    bVar1 = false;
    if (uVar15 != 0) {
      uVar15 = 0;
      do {
        uVar7 = uVar4;
        func_0x00010c0dfd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107d005a8();
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar8;
        func_0x00010c2827c0();
        if (puVar9 == (undefined *)0x0) {
LAB_106a62534:
          _objc_release(puVar8);
          _objc_release(uVar7);
          break;
        }
        uVar10 = *(ulong *)(param_1 + 0xe0);
        func_0x00010bf4b900();
        if ((uVar10 & 1) == 0) {
          if (bVar1) {
            bVar1 = true;
            goto LAB_106a62534;
          }
          func_0x00010befa120(*(undefined8 *)(param_1 + 0xe0));
        }
        func_0x00010befa120(puVar5);
        func_0x00010befa120(puVar6);
        puVar9 = puVar8;
        func_0x00010c2827c0();
        puVar11 = param_3;
        func_0x00010c259740();
        bVar1 = (bool)(puVar9 == puVar11 | bVar1);
        _objc_release(puVar8);
        _objc_release(uVar7);
        uVar15 = uVar15 + 1;
        uVar7 = uVar4;
        func_0x00010bf529e0();
      } while (uVar15 < uVar7);
    }
    puVar9 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    if (bVar1) {
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_106a62870;
      puStack_110 = &UNK_1108f1040;
      _objc_retain(puVar9);
      uVar7 = uVar3;
      puStack_108 = puVar9;
      func_0x0001006372a4(uVar3,&puStack_128);
      puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
      uVar15 = uVar7;
      func_0x000100504554();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar15);
      puVar12 = puVar11;
      func_0x00010c0d3c80();
      puStack_158 = puVar8;
      uStack_150 = 0xc2000000;
      uStack_148 = 0x106a62900;
      puStack_140 = &UNK_110958d48;
      _objc_retain();
      uVar15 = uVar3;
      puStack_138 = puVar12;
      uStack_130 = param_1;
      func_0x000100504554(uVar3,&puStack_158);
      func_0x00010be8d760(param_1);
      _objc_release(uVar15);
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar13;
      func_0x00010c0feda0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      puStack_180 = puVar8;
      uStack_178 = 0xc2000000;
      pcStack_170 = FUN_106a62988;
      puStack_168 = &UNK_1109057d0;
      param_2 = &puStack_180;
      uVar13 = uVar14;
      uStack_160 = param_1;
      func_0x000100504554(uVar14,param_2);
      _objc_release(uVar14);
      func_0x00010befa160(puVar5);
      _objc_retain(uVar7);
      uVar15 = uVar7;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (uVar15 != 0) {
        uVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(uVar7);
          }
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c259740(*(undefined8 *)(uVar10 * 8));
          func_0x00010c0df880(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar6);
          func_0x00010befa120(*(undefined8 *)(param_1 + 0x40));
          _objc_release(puVar8);
          uVar10 = uVar10 + 1;
        } while (uVar15 != uVar10);
        uVar15 = uVar7;
        func_0x00010bf52a60();
      }
      _objc_release(uVar7);
      func_0x00010c2889e0(param_5);
      func_0x00010c18c200(param_1);
      puVar8 = puVar6;
      func_0x00010bf51e00();
      uVar14 = *(undefined8 *)(param_1 + 0xf0);
      *(undefined **)(param_1 + 0xf0) = puVar8;
      _objc_release(uVar14);
      _objc_release(uVar13);
      _objc_release(puStack_138);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(uVar7);
      _objc_release(puStack_108);
    }
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
  func_0x00010c0df880(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf4b900(uVar14);
  _objc_release(puVar5);
  return (undefined *)(ulong)((uint)uVar14 ^ 1);
}



/* Entry: 106a62870; end: 106a62987;  */

uint FUN_106a62870(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c259740(param_2);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 106a62988; end: 106a6299b;  */

void FUN_106a62988(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  _objc_retain();
  _objc_retain(uVar5);
  uVar1 = uVar5;
  func_0x00010bfa4340(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000107d0049c();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bdd30;
  _objc_opt_class(PTR_PTR_1126bdd30);
  uVar4 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar3);
  puVar3 = PTR_PTR_1126bdd30;
  uVar6 = param_2;
  uVar1 = uVar5;
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR_PTR_1126bdd28;
    _objc_opt_class(PTR_PTR_1126bdd28);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    puVar3 = PTR_PTR_1126bdd28;
    if ((uVar4 & 1) == 0) {
      _objc_retain(param_2);
      uVar4 = param_2;
      goto code_r0x000107d00474;
    }
    _objc_retain(param_2);
    _objc_opt_class(puVar3);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_2);
    func_0x00010bfa4340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x000107d0050c(uVar6,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_2);
    _objc_opt_class(puVar3);
    uVar4 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(param_2);
    func_0x00010bfa4340(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x000107cffe1c(uVar6,uVar1,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  _objc_release(uVar1);
code_r0x000107d00474:
  _objc_release(uVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106a6299c; end: 106a62adb; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _observeDesiredPlaylistOrdering:] */

void FUN_106a6299c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010bf6eac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0e0ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 106a62adc; end: 106a62b3f;  */

void FUN_106a62adc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c18c200(param_1);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = param_2;
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106a62b40; end: 106a62ca7; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _discoverFeedStoryFromGroupDataModel:] */

long FUN_106a62b40(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107d005a8();
  if (param_3 == 0) {
    lVar11 = 0;
    lVar4 = 0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0xe8);
    _objc_retain(lVar4);
    lVar11 = lVar4;
    func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      lVar6 = 0;
      lVar9 = *plStack_110;
      do {
        lVar10 = 0;
        lVar1 = lVar6;
        do {
          if (*plStack_110 != lVar9) {
            _objc_enumerationMutation(lVar4);
          }
          lVar6 = *(long *)(lStack_118 + lVar10 * 8);
          _objc_retain(lVar6);
          _objc_release(lVar1);
          lVar1 = lVar6;
          func_0x00010c259740();
          if (lVar1 == param_3) {
            _objc_retain(lVar6);
            lVar9 = lVar4;
            lVar11 = lVar6;
            goto LAB_106a62c50;
          }
          lVar10 = lVar10 + 1;
          lVar1 = lVar6;
        } while (lVar11 != lVar10);
        lVar11 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar11 != 0);
      lVar9 = lVar6;
      lVar6 = lVar4;
      lVar11 = 0;
LAB_106a62c50:
      _objc_release(lVar9);
      lVar4 = lVar6;
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar11);
    return lVar11;
  }
  ___stack_chk_fail();
  uVar5 = *(ulong *)(lVar4 + 0xf0);
  _objc_retain(uVar5);
  uVar2 = uVar5;
  func_0x00010bf529e0();
  if (uVar2 != 0) {
    puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_190 = 0xc2000000;
    pcStack_188 = FUN_106a62e0c;
    puStack_180 = &UNK_110958d78;
    uVar2 = uVar5;
    lStack_178 = lVar4;
    func_0x00010bfece40(uVar5,param_2,&puStack_198);
    if (uVar2 == 0x7fffffffffffffff) {
LAB_106a62d28:
      lVar4 = 0;
      goto LAB_106a62de4;
    }
    uVar2 = uVar2 + 1;
    uVar3 = uVar5;
    func_0x00010bf529e0();
    if (uVar2 < uVar3) {
      lVar11 = 0;
      do {
        uVar7 = *(ulong *)(lVar4 + 0xd0);
        uVar3 = uVar5;
        func_0x00010c0dfd40(uVar5,param_2,uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar7,param_2,uVar3);
        if ((uVar7 & 1) == 0) {
          _objc_release(uVar3);
LAB_106a62dc0:
          if (3 < lVar11) goto LAB_106a62d28;
          lVar11 = lVar11 + 1;
        }
        else {
          uVar8 = *(undefined8 *)(lVar4 + 0x70);
          uVar7 = uVar5;
          func_0x00010c0dfd40(uVar5,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900(uVar8,param_2,uVar7);
          _objc_release(uVar7);
          _objc_release(uVar3);
          if ((int)uVar8 != 0) goto LAB_106a62dc0;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar5;
        func_0x00010bf529e0();
      } while (uVar2 < uVar3);
    }
  }
  lVar4 = 1;
LAB_106a62de4:
  _objc_release(uVar5);
  return lVar4;
}



/* Entry: 106a62ca8; end: 106a62e0b; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _shouldRequestMoreStoriesWithOperaPresenter:] */

undefined8 FUN_106a62ca8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  uVar3 = *(ulong *)(param_1 + 0xf0);
  _objc_retain(uVar3);
  uVar1 = uVar3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106a62e0c;
    puStack_60 = &UNK_110958d78;
    uVar1 = uVar3;
    lStack_58 = param_1;
    func_0x00010bfece40(uVar3,param_2,&puStack_78);
    if (uVar1 == 0x7fffffffffffffff) {
LAB_106a62d28:
      uVar4 = 0;
      goto LAB_106a62de4;
    }
    uVar1 = uVar1 + 1;
    uVar2 = uVar3;
    func_0x00010bf529e0();
    if (uVar1 < uVar2) {
      lVar6 = 0;
      do {
        uVar5 = *(ulong *)(param_1 + 0xd0);
        uVar2 = uVar3;
        func_0x00010c0dfd40(uVar3,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar5,param_2,uVar2);
        if ((uVar5 & 1) == 0) {
          _objc_release(uVar2);
LAB_106a62dc0:
          if (3 < lVar6) goto LAB_106a62d28;
          lVar6 = lVar6 + 1;
        }
        else {
          uVar4 = *(undefined8 *)(param_1 + 0x70);
          uVar5 = uVar3;
          func_0x00010c0dfd40(uVar3,param_2,uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf4b900(uVar4,param_2,uVar5);
          _objc_release(uVar5);
          _objc_release(uVar2);
          if ((int)uVar4 != 0) goto LAB_106a62dc0;
        }
        uVar1 = uVar1 + 1;
        uVar2 = uVar3;
        func_0x00010bf529e0();
      } while (uVar1 < uVar2);
    }
  }
  uVar4 = 1;
LAB_106a62de4:
  _objc_release(uVar3);
  return uVar4;
}



/* Entry: 106a62e0c; end: 106a62e47;  */

bool FUN_106a62e0c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c2827c0(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0xf8);
  func_0x00010c259740(lVar1);
  return param_2 == lVar1;
}



/* Entry: 106a62e48; end: 106a62ee7; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _updateStaleDedupeFpsFromStories:] */

void FUN_106a62e48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106a62ee8;
  puStack_40 = &UNK_110947278;
  lStack_38 = param_1;
  func_0x000100504554(param_3,&puStack_58);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined **)(param_1 + 0xd0) = puVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 106a62ee8; end: 106a62f97;  */

void FUN_106a62ee8(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c13bd00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f3c0();
  dVar3 = param_1;
  func_0x00010c26f3c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0xd8));
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (dVar3 <= param_1) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010c259740(param_3);
    func_0x00010c0df880(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106a62f98; end: 106a63047; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _removeStoriesInDataMutatorWithDedupeFps:] */

void FUN_106a62f98(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar4);
  if ((lVar4 != 0) && (lVar1 = param_3, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x90);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bfa4340(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c067fc0();
    func_0x00010c12e660(uVar2,param_2,param_3,lVar3,PTR___dispatch_main_q_11034be20,0);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106a63048; end: 106a6312b; -[SCDiscoverFeedUpNextV2PrefetchV2PlaybackManager _getCurrentStoriesDisplayOrderWithCompletion:] */

void FUN_106a63048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  func_0x00010bf6eac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106a6312c;
  puStack_50 = &UNK_110859310;
  uStack_48 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}


