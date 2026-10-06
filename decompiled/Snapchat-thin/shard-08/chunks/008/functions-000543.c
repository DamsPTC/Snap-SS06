/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106644108; end: 10664410b; -[SCImpalaOwnedStoryRingOperaPlaylistPlugin operaViewDidSendEvent:page:params:] */

void FUN_106644108(void)

{
  return;
}



/* Entry: 10664410c; end: 106644117; -[SCImpalaOwnedStoryRingOperaPlaylistPlugin .cxx_destruct] */

void FUN_10664410c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106644118; end: 1066441a7; -[SCImpalaSingleSnapStoriesDataProvider initWithCircumstanceEngine:] */

undefined1 * FUN_106644118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2328;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066441a8; end: 10664425f; -[SCImpalaSingleSnapStoriesDataProvider insertSingleSnapStoryWithStoryId:displayName:discoverMetadata:storySnaps:] */

void FUN_1066441a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cc4e8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04d880();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106644260; end: 106644267; -[SCImpalaSingleSnapStoriesDataProvider customStoryPlaybackSequenceByPublicationId:clientId:] */

undefined8 FUN_106644260(void)

{
  return 0;
}



/* Entry: 106644268; end: 10664426f; -[SCImpalaSingleSnapStoriesDataProvider userStoryPlaybackSequenceByStoryId:clientId:] */

undefined8 FUN_106644268(void)

{
  return 0;
}



/* Entry: 106644270; end: 106644277; -[SCImpalaSingleSnapStoriesDataProvider ourStoryPlaybackSequenceByOurStoryId:clientId:] */

undefined8 FUN_106644270(void)

{
  return 0;
}



/* Entry: 106644278; end: 10664427f; -[SCImpalaSingleSnapStoriesDataProvider topicStoryPlaybackSequenceByTopicStoryId:] */

undefined8 FUN_106644278(void)

{
  return 0;
}



/* Entry: 106644280; end: 106644287; -[SCImpalaSingleSnapStoriesDataProvider singleSnapStoryPlaybackSequenceByStoryId:] */

void FUN_106644280(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 106644288; end: 10664428f; -[SCImpalaSingleSnapStoriesDataProvider mapStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106644288(void)

{
  return 0;
}



/* Entry: 106644290; end: 106644297; -[SCImpalaSingleSnapStoriesDataProvider savedStoryPlaybackSequenceByStoryId:] */

undefined8 FUN_106644290(void)

{
  return 0;
}



/* Entry: 106644298; end: 10664429f; -[SCImpalaSingleSnapStoriesDataProvider bundleStoryPlaybackSequenceByBundleStoryId:] */

undefined8 FUN_106644298(void)

{
  return 0;
}



/* Entry: 1066442a0; end: 106644453; -[SCImpalaSingleSnapStoriesDataProvider storiesPlaybackMetadataForStoryIds:completion:] */

void FUN_1066442a0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          lVar5 = lVar4;
          func_0x00010c25b340(lVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(lVar5);
        }
        _objc_release(lVar4);
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    (**(code **)(param_4 + 0x10))(param_4,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106644454; end: 106644457; -[SCImpalaSingleSnapStoriesDataProvider triggerPaginationByCompositeId:identifier:] */

void FUN_106644454(void)

{
  return;
}



/* Entry: 106644458; end: 10664449b; -[SCImpalaSingleSnapStoriesDataProvider prepareStoriesWithPlaybackOptions:options:viewSource:] */

void FUN_106644458(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x00010664ea98(param_3,param_4,param_5,*(undefined8 *)(param_1 + 0x10));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10664449c; end: 1066444ab; -[SCImpalaSingleSnapStoriesDataProvider clearCommentsPayload] */

void FUN_10664449c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066444ac; end: 1066444b3; -[SCImpalaSingleSnapStoriesDataProvider repliesTrayPayload] */

undefined8 FUN_1066444ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1066444b4; end: 1066444e3; -[SCImpalaSingleSnapStoriesDataProvider setRepliesTrayPayload:] */

void FUN_1066444b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066444e4; end: 10664451f; -[SCImpalaSingleSnapStoriesDataProvider .cxx_destruct] */

void FUN_1066444e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106644520; end: 106644657; -[SCImpalaStoryPlayer playStoryForBusinessProfileHandler:baseView:startWithUnviewed:useCircleTransition:contentViewSource:] */

void FUN_106644520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126caff0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01e460();
  _objc_release(param_4);
  uVar2 = param_3;
  FUN_10664e38c(param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126cc2b8;
  _objc_alloc(PTR_PTR_1126cc2b8);
  func_0x00010baf2e2c(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bc80(puVar3);
  _objc_release(param_7);
  func_0x00010c0fe700(param_1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106644658; end: 1066447ef;  */

void FUN_106644658(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  uVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  uVar8 = 0;
  if (uVar2 != 0) {
    do {
      uVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        puVar3 = PTR_PTR_1126b0f68;
        uVar7 = *(ulong *)(uVar8 * 8);
        _objc_retain(uVar7);
        _objc_opt_class(puVar3);
        uVar4 = uVar7;
        _objc_opt_isKindOfClass(uVar7,puVar3);
        uVar5 = uVar7;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
        }
        _objc_retain(uVar5);
        _objc_release(uVar7);
        uVar4 = uVar5;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar4;
        func_0x00010c08fa60();
        _objc_release(uVar4);
        if (uVar7 != 0) {
          uVar8 = uVar5;
          func_0x00010bf24ec0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          goto LAB_1066447a0;
        }
        _objc_release(uVar5);
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
      uVar2 = param_1;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
    uVar8 = 0;
  }
LAB_1066447a0:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain();
    puVar3 = PTR_PTR_1126ae720;
    _objc_opt_class(PTR_PTR_1126ae720);
    uVar8 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar3);
    uVar2 = param_1;
    if ((uVar8 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    puVar3 = PTR_DAT_1126a5570;
    uVar5 = param_1;
    if (uVar2 == 0) {
      _objc_retain(param_1);
      uVar8 = param_1;
      func_0x00010010fab4(param_1,puVar3);
      if ((int)uVar8 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_1);
    }
    else {
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = uVar5;
    func_0x00010c1168c0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    FUN_106644658();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1066447f0; end: 1066448df;  */

void FUN_1066447f0(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126ae720;
  _objc_opt_class(PTR_PTR_1126ae720);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_DAT_1126a5570;
  uVar3 = param_1;
  if (uVar1 == 0) {
    _objc_retain(param_1);
    uVar4 = param_1;
    func_0x00010010fab4(param_1,puVar2);
    if ((int)uVar4 == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_1);
  }
  else {
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar4 = uVar3;
  func_0x00010c1168c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_106644658();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1066448e0; end: 106644c7f; -[SCImpalaStoryPlayer initWithUserSession:navigationServices:presentingViewController:circumstanceEngine:storyPlayerPresenterCreator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:creatorSettingsDataFetcher:readReceiptCoordinator:publicStoryDataProvider:adConfigProvider:discoverFeedEventController:optInDataProvider:discoverFeedDataMutator:playableViewModelGenerator:] */

undefined8 *
FUN_1066448e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
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
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126f2330;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0x29,param_3);
    _objc_storeWeak(puVar1 + 0x2a,param_4);
    _objc_storeWeak(puVar1 + 0x27,param_5);
    puVar2 = PTR_PTR_1126cc4f0;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar3 = puVar1[2];
    puVar1[2] = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126cc4f8;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar3 = puVar1[3];
    puVar1[3] = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar3);
    _objc_retain(param_8);
    uVar3 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar3);
    _objc_retain(param_9);
    uVar3 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar3);
    _objc_retain(param_10);
    uVar3 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar3);
    _objc_retain(param_11);
    uVar3 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar3);
    _objc_retain(param_12);
    uVar3 = puVar1[0xc];
    puVar1[0xc] = param_12;
    _objc_release(uVar3);
    _objc_retain(param_13);
    uVar3 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar3);
    _objc_retain(param_14);
    uVar3 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = uVar3;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar3 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar3);
    _objc_retain(param_16);
    uVar3 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar3);
    _objc_retain(param_17);
    uVar3 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 300) = 0;
    puVar2 = PTR_PTR_1126cc500;
    _objc_opt_new();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_17);
  _objc_release(param_16);
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



/* Entry: 106644c80; end: 106644f77; -[SCImpalaStoryPlayer initWithUserSession:navigationServices:circumstanceEngine:storyPlayerPresenterCreator:bitmojiAvatarProvider:bitmojiFriendAvatarProvider:creatorSettingsDataFetcher:readReceiptCoordinator:publicStoryDataProvider:adConfigProvider:discoverFeedEventController:playableViewModelGenerator:] */

undefined8 *
FUN_106644c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f2330;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak(puVar1 + 0x29,param_3);
    _objc_storeWeak(puVar1 + 0x2a,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[6];
    puVar1[6] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc4f0;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cc4f8;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[7];
    puVar1[7] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[10];
    puVar1[10] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release();
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puVar1[0x10];
    puVar1[0x10] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b10e0;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 300) = 0;
    puVar3 = PTR_PTR_1126cc500;
    _objc_opt_new();
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = puVar3;
    _objc_release(uVar2);
  }
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



/* Entry: 106644f78; end: 106644f7f; -[SCImpalaStoryPlayer isPresenting] */

void FUN_106644f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_isPresenting_1125fc4e0);
  return;
}



/* Entry: 106644f80; end: 1066450c7; -[SCImpalaStoryPlayer configureOwnedStoryPlaybackJoiningWithMyStoriesDataCoordinator:currentUserId:publicStoryStateObserver:snapProProfilesProvider:] */

void FUN_106644f80(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x000108f485b4();
  if ((uVar1 & 1) == 0) {
    func_0x00010becada0(param_1);
    goto LAB_106645098;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    if (*(long *)(param_1 + 0xa8) == param_3) {
      uVar2 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c0720c0(uVar2,param_2,param_4);
      if ((((int)uVar2 != 0) && (*(long *)(param_1 + 0xb8) == param_5)) &&
         (*(long *)(param_1 + 0xc0) == param_6)) goto LAB_106645018;
    }
    func_0x00010becada0(param_1);
  }
LAB_106645018:
  uVar1 = *(ulong *)(param_1 + 0xb0);
  func_0x00010c0720c0(uVar1,param_2,param_4);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf3a660(*(undefined8 *)(param_1 + 0xe0));
  }
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(long *)(param_1 + 0xa8) = param_3;
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = uVar2;
  _objc_release(uVar3);
  _objc_retain(param_5);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xb8) = param_5;
  _objc_release(uVar2);
  _objc_retain(param_6);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  *(long *)(param_1 + 0xc0) = param_6;
  _objc_release(uVar2);
  func_0x00010be80140(param_1);
LAB_106645098:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066450c8; end: 106645297; -[SCImpalaStoryPlayer setOwnedStoryJoinedStateHandler:] */

void FUN_1066450c8(double param_1,long param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  double dVar11;
  undefined1 *puStack_50;
  long lStack_48;
  
  ppuVar7 = &puStack_50;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_4;
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_2 + 300);
  lVar8 = *(long *)(param_2 + 200);
  if (param_4 == (undefined1 *)0x0) {
    *(undefined8 *)(param_2 + 200) = 0;
    _objc_release(lVar8);
  }
  else {
    puVar9 = param_4;
    func_0x00010bf51e00();
    puVar10 = puVar9;
    _objc_retainBlock();
    puVar3 = puVar10;
    func_0x00010bf09f60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar8 == 0) {
      puVar3 = param_4;
      func_0x00010bf51e00();
      param_5 = 1;
      puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = puVar3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_2 + 200);
      *(undefined **)(param_2 + 200) = puVar4;
      _objc_release(uVar2);
      _objc_release(puVar3);
      puVar3 = (undefined1 *)ppuVar7;
    }
    else {
      _objc_retain(lVar8);
      uVar2 = *(undefined8 *)(param_2 + 200);
      *(long *)(param_2 + 200) = lVar8;
      _objc_release(uVar2);
    }
    _objc_release(lVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  lVar8 = *(long *)(param_2 + 0xf0);
  func_0x00010bf51e00();
  bVar1 = *(byte *)(param_2 + 0xf8);
  puVar9 = (undefined1 *)(ulong)bVar1;
  uVar2 = *(undefined8 *)(param_2 + 0xe8);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(param_2 + 300);
  if (((param_4 != (undefined1 *)0x0) && (lVar8 != 0)) &&
     ((lVar5 = lVar8, func_0x00010bf529e0(), (lVar5 == 0 & bVar1) != 0 ||
      (lVar5 = lVar8, puVar3 = puVar9, func_0x0001066434bc(lVar8,uVar2), (int)lVar5 != 0)))) {
    (**(code **)(param_4 + 0x10))(param_4,lVar8);
    puVar3 = puVar9;
  }
  _objc_release(uVar2);
  _objc_release(lVar8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_2 + 300);
  __Unwind_Resume(param_4);
  _objc_retain(puVar3);
  _objc_retain(param_6);
  _objc_retain(param_5);
  puVar9 = puVar3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf529e0();
  _objc_release(puVar9);
  func_0x00010c252020(puVar3);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar11 = (double)(puVar10 + -1);
  if (param_1 <= (double)(puVar10 + -1)) {
    dVar11 = param_1;
  }
  puVar9 = puVar3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf529e0();
  if ((undefined1 *)(long)dVar11 < puVar10) {
    puVar6 = puVar3;
    func_0x00010c084fc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar6;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
  }
  else {
    puVar10 = (undefined1 *)0x0;
  }
  _objc_release(puVar9);
  _objc_retain(puVar3);
  puVar9 = puVar10;
  func_0x00010bf16300(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe700(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar9);
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(puVar10);
  return;
}



/* Entry: 106645298; end: 10664543b; -[SCImpalaStoryPlayer playItems:options:callback:] */

void FUN_106645298(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  func_0x00010c252020(param_4);
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar4 = (double)(uVar3 - 1);
  if (param_1 <= (double)(uVar3 - 1)) {
    dVar4 = param_1;
  }
  uVar1 = param_4;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf529e0();
  if ((ulong)(long)dVar4 < uVar3) {
    uVar2 = param_4;
    func_0x00010c084fc0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10664543c;
  puStack_60 = &UNK_110931470;
  uStack_58 = param_4;
  _objc_retain(param_4);
  uVar1 = uVar3;
  func_0x00010bf16300(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0fe700(param_2,param_3,&puStack_78,uVar1,param_5,param_6,0,0,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(uVar3);
  return;
}



/* Entry: 10664543c; end: 10664545b;  */

void FUN_10664543c(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106645454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 10664545c; end: 106645e47; -[SCImpalaStoryPlayer playItemsWithItemProvider:baseView:options:callback:currentlyFinishedPlayback:paginatedItems:storyPlayerDependencies:] */

void FUN_10664545c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_298 [8];
  undefined *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [8];
  byte bStack_80;
  byte bStack_7f;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if (param_3 == 0) goto LAB_106645d44;
  lVar2 = param_1;
  func_0x00010be6ee80();
  _objc_retainAutoreleasedReturnValue();
  puStack_1e0 = &uStack_1e8;
  uStack_1e8 = 0;
  uStack_1d8 = 0x3032000000;
  pcStack_1d0 = FUN_106645e48;
  uStack_1c8 = 0x106645e58;
  uStack_1c0 = 0;
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar3 = param_3;
    _objc_retainBlock();
  }
  else {
    puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_208 = 0xc2000000;
    pcStack_200 = FUN_106645e60;
    puStack_1f8 = &UNK_1109314a0;
    puStack_1f0 = &uStack_1e8;
    lVar4 = param_1;
    func_0x00010be6eea0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    _objc_retainBlock();
    _objc_release(lVar4);
  }
  _objc_retain();
  puStack_100 = &uStack_108;
  uStack_108 = 0;
  uStack_f8 = 0x2020000000;
  uStack_f0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x2020000000;
  uStack_110 = 0;
  puStack_150 = &uStack_158;
  uStack_158 = 0;
  uStack_148 = 0x3032000000;
  pcStack_140 = FUN_106645e48;
  uStack_138 = 0x106645e58;
  uStack_130 = 0;
  puStack_180 = &uStack_188;
  uStack_188 = 0;
  uStack_178 = 0x3032000000;
  pcStack_170 = FUN_106645e48;
  uStack_168 = 0x106645e58;
  uStack_160 = 0;
  puStack_1b0 = &uStack_1b8;
  uStack_1b8 = 0;
  uStack_1a8 = 0x3032000000;
  pcStack_1a0 = FUN_106645e48;
  uStack_198 = 0x106645e58;
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bad10;
  puStack_190 = puVar5;
  _objc_opt_new();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10664ab20;
  puStack_d0 = &UNK_1109317d0;
  puStack_b8 = &uStack_128;
  puStack_b0 = &uStack_158;
  puStack_a8 = &uStack_188;
  puStack_a0 = &uStack_1b8;
  puStack_98 = &uStack_108;
  puStack_c8 = puVar6;
  lStack_c0 = lVar3;
  _objc_retain();
  _objc_retain(lVar3);
  ppuVar7 = &puStack_e8;
  _objc_retainBlock();
  _objc_release(lStack_c0);
  _objc_release(puStack_c8);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_1b8,8);
  _objc_release(puStack_190);
  __Block_object_dispose(&uStack_188,8);
  _objc_release(uStack_160);
  __Block_object_dispose(&uStack_158,8);
  _objc_release(uStack_130);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_128,8);
  __Block_object_dispose(&uStack_108,8);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef0c0();
  _objc_release(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  func_0x00010bf56880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar9);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar8;
  _objc_release(uVar9);
  uVar10 = param_5;
  func_0x00010c07f400();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf1f3c0();
  if ((uVar11 & 1) == 0) {
    _objc_release(uVar10);
LAB_106645814:
    uVar10 = param_5;
    func_0x00010c07f400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(uVar10);
  }
  else {
    uVar11 = param_5;
    func_0x00010bf4de00();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x1e;
    func_0x00010baf2e2c(0x1e);
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c0720c0();
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(uVar10);
    if ((uVar12 & 1) == 0) goto LAB_106645814;
  }
  func_0x00010c229160(uVar8);
  lVar4 = param_1;
  func_0x00010bf80660();
  lVar13 = param_1;
  func_0x00010bf7fb80();
  uVar9 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  uVar20 = *(undefined8 *)(param_1 + 0x50);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  uVar18 = *(undefined8 *)(param_1 + 0x68);
  uVar19 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(ppuVar7);
  _objc_retain(param_5);
  _objc_retain(uVar9);
  _objc_retain(uVar16);
  _objc_retain(uVar20);
  _objc_retain(uVar17);
  _objc_retain(uVar18);
  _objc_retain(uVar19);
  _objc_initWeak(&uStack_158,uVar8);
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10664af90;
  puStack_d0 = &UNK_1109318a0;
  puStack_c8 = (undefined *)param_5;
  lStack_c0 = uVar9;
  puStack_b8 = (undefined8 *)uVar16;
  puStack_b0 = (undefined8 *)uVar20;
  puStack_a8 = (undefined8 *)uVar17;
  puStack_a0 = (undefined8 *)uVar18;
  puStack_98 = (undefined8 *)uVar19;
  ppuStack_90 = ppuVar7;
  bStack_80 = (byte)lVar4 ^ 1;
  bStack_7f = (byte)lVar13 ^ 1;
  _objc_retain(ppuVar7);
  _objc_retain(param_5);
  _objc_retain(uVar9);
  _objc_retain(uVar16);
  _objc_retain(uVar20);
  _objc_retain(uVar17);
  _objc_retain(uVar18);
  _objc_retain(uVar19);
  _objc_copyWeak(auStack_88,&uStack_158);
  ppuVar14 = &puStack_e8;
  _objc_retainBlock();
  _objc_destroyWeak(auStack_88);
  _objc_release(puStack_98);
  _objc_release(puStack_a0);
  _objc_release(puStack_a8);
  _objc_release(puStack_b0);
  _objc_release(puStack_b8);
  _objc_release(lStack_c0);
  _objc_release(puStack_c8);
  _objc_release(ppuStack_90);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar20);
  _objc_release(uVar16);
  _objc_release(uVar9);
  _objc_release(ppuVar7);
  _objc_release(param_5);
  _objc_destroyWeak(&uStack_158);
  puVar5 = PTR_PTR_1126cc508;
  _objc_alloc();
  func_0x00010c008780();
  func_0x00010c189620();
  puVar1 = puStack_1e0;
  _objc_retain(puVar5);
  uVar9 = puVar1[5];
  puVar1[5] = puVar5;
  _objc_release(uVar9);
  uVar9 = param_8;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  _objc_release(uVar16);
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_initWeak(&puStack_e8,param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    puStack_240 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_238 = 0xc2000000;
    pcStack_230 = FUN_106645e90;
    puStack_228 = &UNK_1109314d0;
    _objc_copyWeak(auStack_218,&puStack_e8);
    puStack_220 = puVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar9;
    _objc_release(uVar16);
    _objc_destroyWeak(auStack_218);
    _objc_destroyWeak(&puStack_e8);
  }
  uVar10 = param_5;
  func_0x00010c07f400();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf1f3c0();
  if ((uVar11 & 1) == 0) {
    _objc_release(uVar10);
LAB_106645c2c:
    _objc_initWeak(&puStack_e8,param_1);
    puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_288 = 0xc2000000;
    pcStack_280 = FUN_106645ee4;
    puStack_278 = &UNK_110931500;
    _objc_copyWeak(auStack_248,&puStack_e8);
    _objc_retain(param_6);
    uStack_258 = param_6;
    _objc_retain(param_4);
    uStack_270 = param_4;
    _objc_retain(param_5);
    uStack_268 = param_5;
    _objc_retain(param_7);
    uStack_250 = param_7;
    _objc_retain(uVar8);
    uStack_260 = uVar8;
    (*(code *)ppuVar14[2])(ppuVar14,&puStack_290);
    _objc_release(uStack_260);
    _objc_release(uStack_250);
    _objc_release(uStack_268);
    _objc_release(uStack_270);
    _objc_release(uStack_258);
    puVar15 = auStack_248;
  }
  else {
    uVar11 = param_5;
    func_0x00010c290020();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010bf1f3c0();
    _objc_release(uVar11);
    _objc_release(uVar10);
    if ((int)uVar12 != 0) goto LAB_106645c2c;
    _objc_initWeak(&puStack_e8,param_1);
    uVar9 = *(undefined8 *)(param_1 + 0x80);
    _objc_copyWeak(auStack_298,&puStack_e8);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(uVar8);
    func_0x00010c0f7fc0(uVar9);
    _objc_release(uVar8);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(param_5);
    _objc_release(param_4);
    puVar15 = auStack_298;
  }
  _objc_destroyWeak(puVar15);
  _objc_destroyWeak(&puStack_e8);
  _objc_release(puVar5);
  _objc_release(ppuVar14);
  _objc_release(uVar8);
  _objc_release(ppuVar7);
  _objc_release(lVar3);
  __Block_object_dispose(&uStack_1e8,8);
  _objc_release(uStack_1c0);
  _objc_release(lVar2);
LAB_106645d44:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106645e48; end: 106645e5f;  */

void FUN_106645e48(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106645e60; end: 106645e8f;  */

void FUN_106645e60(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106645e90; end: 106645ee3;  */

void FUN_106645e90(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6a9a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106645ee4; end: 106645fcf;  */

void FUN_106645ee4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_4 == 0) || (lVar3 = *(long *)(param_1 + 0x38), lVar3 == 0)) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x00010b9688dc(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be3b320(lVar1);
    }
    else {
      lVar2 = param_4;
      func_0x00010c09e4e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106645fd0; end: 1066460d3;  */

void FUN_106645fd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010b9688dc(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar4 = uVar3;
    func_0x00010bf4de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010baf2e4c();
    func_0x00010bdcc300(lVar1,param_2,uVar3,uVar5);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1066460d4;
    puStack_50 = &UNK_110931560;
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar5);
    uStack_48 = uVar5;
    func_0x00010bec1a60(lVar1,param_2,uVar4,&puStack_68,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x48),uVar2,*(undefined8 *)(param_1 + 0x38));
    _objc_release(uStack_48);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1066460d4; end: 106646187;  */

void FUN_1066460d4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106646188;
    puStack_50 = &UNK_110931530;
    _objc_retain(param_4);
    uStack_48 = param_4;
    (**(code **)(lVar1 + 0x10))((double)param_2,lVar1,param_3,&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106646188; end: 1066461cb;  */

void FUN_106646188(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010b9688dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066461cc; end: 1066463e7; -[SCImpalaStoryPlayer _initializeContentPlaybackScopeOnMainThread:playlistStartingIndex:baseView:options:callback:currentlyFinishedPlayback:overridePlaybackDataProvider:presenter:] */

void FUN_1066461cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_1;
  func_0x00010be78420();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = auStack_68;
  _objc_initWeak(puVar2,param_1);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_70 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  func_0x00010c0f7fc0(puVar2);
  _objc_release(puVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1066463e8; end: 10664643f;  */

void FUN_1066463e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be3b300(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38),
                        *(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106646440; end: 106646733; -[SCImpalaStoryPlayer _initializeContentPlaybackScope:playlistStartingIndex:baseView:options:callback:currentlyFinishedPlayback:overridePlaybackDataProvider:presenter:] */

void FUN_106646440(long param_1,undefined **param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_f0;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  lVar7 = param_6;
  func_0x00010bf4de00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010baf2e4c();
  lVar4 = param_6;
  func_0x00010bdcc300(param_1);
  _objc_release(lVar7);
  param_1 = param_1 + 0x138;
  _objc_loadWeakRetained();
  lVar7 = param_1;
  func_0x000108f04e30();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (param_10 == 0) {
    if (param_7 == 0) goto LAB_1066466b4;
    pcVar6 = *(code **)(param_7 + 0x10);
    param_2 = &PTR____CFConstantStringClassReference_110e57f98;
  }
  else {
    if (lVar7 != 0) {
      if (param_5 == 0) {
        puStack_f0 = PTR____NSArray0__struct_11034ab48;
      }
      else {
        puStack_f0 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c28ff80(param_6);
      lVar1 = param_6;
      func_0x00010c259120();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfa40c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_6;
      func_0x00010bf4de00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010baf2e4c();
      _objc_retain(param_8);
      _objc_retain(param_7);
      lVar4 = param_3;
      func_0x00010c10bbc0(param_10);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_7);
      _objc_release(param_8);
      _objc_release(puStack_f0);
      lVar1 = param_4;
      goto LAB_1066466b4;
    }
    if (param_7 == 0) goto LAB_1066466b4;
    pcVar6 = *(code **)(param_7 + 0x10);
    param_2 = &PTR____CFConstantStringClassReference_110e57fb8;
  }
  (*pcVar6)(param_7,param_2);
LAB_1066466b4:
  _objc_release(lVar7);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar1);
  lVar7 = *(long *)(param_3 + 0x20);
  if (lVar7 != 0) {
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_1066467e8;
    puStack_190 = &UNK_110931530;
    _objc_retain(lVar1);
    lStack_188 = lVar1;
    (**(code **)(lVar7 + 0x10))((double)param_2,lVar7,lVar4,&puStack_1a8);
    _objc_release(lStack_188);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106646734; end: 1066467e7;  */

void FUN_106646734(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1066467e8;
    puStack_50 = &UNK_110931530;
    _objc_retain(param_4);
    uStack_48 = param_4;
    (**(code **)(lVar1 + 0x10))((double)param_2,lVar1,param_3,&puStack_68);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1066467e8; end: 10664688f;  */

void FUN_1066467e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010b9688dc(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106646890; end: 106646eff; -[SCImpalaStoryPlayer _prepareForContentPlaybackScopeWithDataModels:options:] */

void FUN_106646890(long param_1,undefined8 param_2,undefined *param_3,ulong param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010c07f400();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  if ((int)uVar3 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = param_4;
    func_0x00010c0b8220();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = uVar3 != 0;
    _objc_release();
  }
  _objc_release(uVar2);
  puVar10 = param_3;
  func_0x00010bf529e0();
  if (puVar10 != (undefined *)0x0) {
    func_0x00010c201540(*(undefined8 *)(param_1 + 0x18));
    uVar2 = param_4;
    func_0x00010c07f400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    puVar10 = (undefined *)0x0;
    if ((int)uVar3 != 0) {
      uVar3 = param_4;
      func_0x00010c0b8220();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar11 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar4 = puVar11;
        _objc_opt_isKindOfClass(puVar11,puVar10);
        if (((ulong)puVar4 & 1) == 0) {
          puVar10 = (undefined *)0x0;
        }
        else {
          puVar4 = param_3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR_PTR_1126cc4e0;
          _objc_opt_class(PTR_PTR_1126cc4e0);
          puVar10 = puVar5;
          _objc_opt_isKindOfClass(puVar5,puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        _objc_release(puVar11);
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c07f400();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_4;
      func_0x00010c0b8220();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar4 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
        puVar5 = puVar4;
        _objc_opt_isKindOfClass(puVar4,puVar11);
        if (((ulong)puVar5 & 1) == 0) {
          puVar11 = (undefined *)0x0;
        }
        else {
          puVar5 = param_3;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126cc4e0;
          _objc_opt_class(PTR_PTR_1126cc4e0);
          puVar11 = puVar6;
          _objc_opt_isKindOfClass(puVar6,puVar7);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        _objc_release(puVar4);
      }
      _objc_release(uVar3);
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    _objc_release(uVar2);
    if (((ulong)puVar10 & 1) != 0) {
      func_0x00010c201540(*(undefined8 *)(param_1 + 0x18));
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      puVar10 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1270a0(uVar9);
      _objc_release(puVar10);
      puVar11 = PTR_PTR_1126b1338;
      _objc_alloc();
      puVar4 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dbe0();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_88 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar4);
      goto LAB_106646e8c;
    }
    if (bVar1) {
      func_0x00010c201540(*(undefined8 *)(param_1 + 0x18));
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      puVar10 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1270a0(uVar9);
      _objc_release(puVar10);
      puVar11 = PTR_PTR_1126b1338;
      _objc_alloc();
      puVar4 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dbe0();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_90 = puVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      _objc_release(puVar4);
      goto LAB_106646e8c;
    }
    if (((ulong)puVar11 & 1) != 0) {
      func_0x00010c201540(*(undefined8 *)(param_1 + 0x18));
      puStack_c0 = &uStack_c8;
      uStack_c8 = 0;
      uStack_b8 = 0x3032000000;
      pcStack_b0 = FUN_106645e48;
      uStack_a8 = 0x106645e58;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110daafd8;
      puVar10 = param_3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar10 = puVar11;
      func_0x00010bf0e700(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar11);
      func_0x00010c0c1340(puVar10);
      _objc_release(puVar10);
      uVar9 = *(undefined8 *)(param_1 + 0x18);
      puVar10 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1270a0(uVar9);
      _objc_release(puVar10);
      puVar4 = PTR_PTR_1126b1338;
      _objc_alloc();
      puVar5 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04dbe0();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar4;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar11);
      _objc_release(puVar11);
      __Block_object_dispose(&uStack_c8,8);
      _objc_release(ppuStack_a0);
      goto LAB_106646e8c;
    }
  }
  _objc_retain(param_3);
  puVar10 = param_3;
LAB_106646e8c:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_c8,8);
  __Unwind_Resume();
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x28);
  *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x28) + 8) + 0x28) = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 106646f00; end: 106646f7f;  */

void FUN_106646f00(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106646f80; end: 106647147; -[SCImpalaStoryPlayer _registerJoinedOwnedStorySnapPlaybackInfos:] */

void FUN_106646f80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_106647148();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x3032000000;
    pcStack_78 = FUN_106645e48;
    uStack_70 = 0x106645e58;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110daafd8;
    lVar2 = lVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar2);
    func_0x00010c0c1340(lVar3);
    _objc_release(lVar3);
    lVar3 = puStack_88[5];
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      func_0x00010c201540(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c1270a0(*(undefined8 *)(param_1 + 0x18));
    }
    _objc_release(lVar2);
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_90,8);
    _objc_release(ppuStack_68);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106647148; end: 1066471df;  */

void FUN_106647148(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = param_1;
  func_0x00010bf529e0();
  if (puVar1 < (undefined *)0x2) {
    puVar2 = param_1;
    func_0x00010bf51e00();
    _objc_release(param_1);
    puVar1 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
    }
    _objc_retain(puVar1);
    param_1 = puVar2;
  }
  else {
    puVar1 = param_1;
    func_0x00010c246d20(param_1,param_2,0x10,&PTR___NSConcreteGlobalBlock_110931820);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066471e0; end: 10664725f;  */

void FUN_1066471e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5bbc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106647260; end: 106647543; -[SCImpalaStoryPlayer _onPaginatedItemsUpdate:playlistFetcher:] */

void FUN_106647260(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  if (uVar2 == 0) goto LAB_106647394;
  uVar1 = param_3;
  func_0x00010c084fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c24b8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  if (uVar1 == 0) {
    uVar1 = uVar2;
    func_0x00010bfa3780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) goto LAB_106647324;
    uVar1 = uVar2;
    func_0x00010c259880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010c0f7fc0(uVar5);
      _objc_release(param_3);
      goto LAB_106647384;
    }
    uVar1 = uVar2;
    func_0x00010c0d5a20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cc4c8;
    _objc_opt_class(PTR_PTR_1126cc4c8);
    uVar4 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar3);
    _objc_release(uVar1);
    if ((uVar4 & 1) != 0) {
      uVar1 = param_3;
      func_0x00010c084fc0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x0001066432e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (uVar4 == 0) {
        uVar1 = uVar2;
        func_0x00010c0d5a20();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c242520();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
      }
      uVar1 = uVar4;
      FUN_106647148();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      _objc_retain();
      func_0x00010c0f7fc0(uVar5);
      _objc_release(uVar1);
      _objc_release(uVar1);
      goto LAB_106647384;
    }
  }
  else {
    _objc_release();
LAB_106647324:
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(param_3);
LAB_106647384:
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
LAB_106647394:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106647544; end: 106647603;  */

void FUN_106647544(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfa79c0(lVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c07ab40();
  if ((iVar1 != 0) && (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 != 0)) {
    func_0x00010c288a20(*(undefined8 *)(*(long *)(param_1 + 0x30) + 8),param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106647604; end: 106647707;  */

ulong FUN_106647604(long param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c07ab40();
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010bf529e0();
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
      _objc_retain(uVar2);
      iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      func_0x000108f485b4();
      if ((iVar1 == 0) ||
         (uVar9 = uVar2,
         _objc_opt_respondsToSelector(uVar2,PTR_s_refreshCurrentPlaylistGroupWithC_112626ea0),
         (uVar9 & 1) == 0)) {
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
        puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
        func_0x00010bf0a140();
        _objc_retainAutoreleasedReturnValue();
        param_3 = puVar4;
        func_0x00010c288a20(uVar8);
        _objc_release(puVar4);
      }
      else {
        func_0x00010be897e0(*(undefined8 *)(param_1 + 0x20));
        param_3 = (undefined *)0x0;
        func_0x00010c125200(uVar2);
      }
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(uVar2 + 0x30);
  func_0x000108f485b4();
  uVar9 = 0;
  if ((param_3 != (undefined *)0x0) && (iVar1 != 0)) {
    puVar4 = param_3;
    func_0x00010c0b8220();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c137500();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010bf1f3c0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    if ((int)puVar6 != 0) {
      puVar4 = param_3;
      func_0x00010c290400();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bf1f3c0();
      _objc_release(puVar4);
      if ((int)puVar5 != 0) {
        puVar4 = param_3;
        func_0x00010c07f400();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010bf1f3c0();
        _objc_release(puVar4);
        if (((((ulong)puVar5 & 1) == 0) && (*(long *)(uVar2 + 0xa8) != 0)) &&
           (*(long *)(uVar2 + 0xb8) != 0)) {
          lVar7 = *(long *)(uVar2 + 0xb0);
          func_0x00010c08fa60();
          if ((lVar7 != 0) && (*(long *)(uVar2 + 0xc0) != 0)) {
            puVar4 = param_3;
            func_0x00010bf4de00();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010baf2e4c();
            _objc_release(puVar4);
            uVar9 = (ulong)(puVar5 == (undefined *)0x6f || puVar5 == (undefined *)0x56);
            goto LAB_106647830;
          }
        }
      }
    }
    uVar9 = 0;
  }
LAB_106647830:
  _objc_release(param_3);
  return uVar9;
}



/* Entry: 106647708; end: 10664784f; -[SCImpalaStoryPlayer _shouldAttemptJoinedOwnedStoryPlaybackForOptions:] */

bool FUN_106647708(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x000108f485b4();
  bVar1 = false;
  if ((param_3 != 0) && (iVar2 != 0)) {
    uVar3 = param_3;
    func_0x00010c0b8220();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c137500();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      uVar3 = param_3;
      func_0x00010c290400();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      if ((int)uVar4 != 0) {
        uVar3 = param_3;
        func_0x00010c07f400();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf1f3c0();
        _objc_release(uVar3);
        if ((((uVar4 & 1) == 0) && (*(long *)(param_1 + 0xa8) != 0)) &&
           (*(long *)(param_1 + 0xb8) != 0)) {
          lVar6 = *(long *)(param_1 + 0xb0);
          func_0x00010c08fa60();
          if ((lVar6 != 0) && (*(long *)(param_1 + 0xc0) != 0)) {
            uVar3 = param_3;
            func_0x00010bf4de00();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            func_0x00010baf2e4c();
            _objc_release(uVar3);
            bVar1 = uVar4 == 0x6f || uVar4 == 0x56;
            goto LAB_106647830;
          }
        }
      }
    }
    bVar1 = false;
  }
LAB_106647830:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106647850; end: 1066479a7; -[SCImpalaStoryPlayer _ownedStoryRingBusinessProfileIdForNativeInitialProvider:] */

void FUN_106647850(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010beb2880(param_1,param_2,param_3);
  if ((int)lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_3;
    func_0x00010c0b8220();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf25140();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    _objc_release(lVar4);
    if (lVar2 == 0) {
      _os_unfair_lock_lock(param_1 + 300);
      lVar2 = *(long *)(param_1 + 0xe8);
      func_0x00010bf51e00();
      _os_unfair_lock_unlock(param_1 + 300);
      lVar3 = *(long *)(param_1 + 0xc0);
      FUN_1066447f0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c08fa60();
      lVar1 = lVar3;
      if (lVar4 != 0) {
        lVar1 = lVar2;
      }
      _objc_retain(lVar1);
      lVar4 = lVar1;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        _objc_retain(lVar1);
        lVar4 = lVar1;
      }
      _objc_release(lVar1);
      _objc_release(lVar3);
    }
    else {
      lVar2 = param_3;
      func_0x00010c0b8220(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf25140();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1066479a8; end: 106647adb; -[SCImpalaStoryPlayer _ownedStoryMyStoriesDataCoordinatorLazy] */

void FUN_1066479a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126ae720;
  puVar5 = *(undefined **)(param_1 + 0xa8);
  _objc_retain(puVar5);
  _objc_opt_class(puVar2);
  puVar3 = puVar5;
  _objc_opt_isKindOfClass(puVar5,puVar2);
  puVar2 = puVar5;
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar5);
  if (puVar2 == (undefined *)0x0) {
    lVar6 = *(long *)(param_1 + 0xa8);
    _objc_retain(lVar6);
    lVar4 = lVar6;
    func_0x00010010fab4(lVar6,PTR_DAT_1126a5578);
    lVar1 = lVar6;
    if ((int)lVar4 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    puVar5 = PTR_PTR_1126ae720;
    if (lVar1 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      _objc_retain(lVar6);
      func_0x00010bf11fe0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
    }
    _objc_release(lVar1);
    _objc_release(lVar6);
  }
  else {
    _objc_retain(puVar5);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106647adc; end: 106647b03;  */

void FUN_106647adc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106647b04; end: 106647c13; -[SCImpalaStoryPlayer _ownedStoryRingJoinedItemProviderWithBusinessProfileId:baseViewRef:controlProvider:playlistFetcher:] */

void FUN_106647b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106647c14;
  puStack_70 = &UNK_110931620;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  ppuVar1 = &puStack_88;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106647c14; end: 106647ce3;  */

void FUN_106647c14(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      (**(code **)(lVar2 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        _os_unfair_lock_lock(lVar1 + 300);
        _objc_retain(lVar2);
        uVar3 = *(undefined8 *)(lVar1 + 0x108);
        *(long *)(lVar1 + 0x108) = lVar2;
        _objc_release(uVar3);
        _os_unfair_lock_unlock(lVar1 + 300);
      }
    }
    lVar4 = lVar1;
    func_0x00010be6eec0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))();
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106647ce4; end: 106647dc3; -[SCImpalaStoryPlayer _ownedStoryRingNativeInitialItemProviderWithBusinessProfileId:baseViewRef:] */

void FUN_106647ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106647dc4;
  puStack_58 = &UNK_110931650;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106647dc4; end: 106647eab;  */

void FUN_106647dc4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if ((param_2 != 0) && (lVar2 != 0)) {
      _os_unfair_lock_lock(uVar1 + 300);
      lVar2 = param_2;
      func_0x00010bf51e00();
      uVar4 = *(undefined8 *)(uVar1 + 0x110);
      *(long *)(uVar1 + 0x110) = lVar2;
      _objc_release(uVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      uVar4 = *(undefined8 *)(uVar1 + 0x118);
      *(undefined8 *)(uVar1 + 0x118) = uVar5;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf51e00();
      uVar5 = *(undefined8 *)(uVar1 + 0x120);
      *(undefined8 *)(uVar1 + 0x120) = uVar4;
      _objc_release(uVar5);
      *(undefined1 *)(uVar1 + 0x128) = 0;
      _os_unfair_lock_unlock(uVar1 + 300);
      uVar3 = uVar1;
      func_0x00010bdfaaa0();
      if ((uVar3 & 1) == 0) {
        func_0x00010bec02a0(uVar1);
      }
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106647eac; end: 106647f2f; -[SCImpalaStoryPlayer _prewarmJoinedOwnedStoryStreamIfPossible] */

void FUN_106647eac(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x000108f485b4();
  if ((iVar1 != 0) && (*(long *)(param_1 + 0xb8) != 0)) {
    lVar2 = *(long *)(param_1 + 0xb0);
    func_0x00010c08fa60();
    if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0xc0), lVar2 != 0)) {
      FUN_1066447f0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c08fa60();
      if (lVar3 == 0) {
        func_0x00010bec0280(param_1);
      }
      else {
        func_0x00010bec02a0(param_1,param_2,lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 106647f30; end: 106648117; -[SCImpalaStoryPlayer _startJoinedOwnedStoryStreamWhenProfileHandlersReady] */

void FUN_106647f30(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126ae720;
  uVar5 = *(ulong *)(param_1 + 0xc0);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  puVar2 = PTR_DAT_1126a5570;
  if (uVar1 == 0) {
    uVar6 = *(ulong *)(param_1 + 0xc0);
    _objc_retain(uVar6);
    uVar3 = uVar6;
    func_0x00010010fab4(uVar6,puVar2);
    uVar5 = uVar6;
    if ((int)uVar3 == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
  }
  if ((uVar5 != 0) && (*(long *)(param_1 + 0xd0) == 0)) {
    _objc_initWeak(auStack_48,param_1);
    puStack_60 = &uStack_68;
    uStack_68 = 0;
    uStack_58 = 0x2020000000;
    uStack_50 = 0;
    _objc_copyWeak(auStack_70,auStack_48);
    uVar3 = uVar5;
    func_0x00010c116900();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
    *(ulong *)(param_1 + 0xd0) = uVar3;
    _objc_release(uVar4);
    if (*(char *)(puStack_60 + 3) == '\x01') {
      func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xd0));
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_70);
    __Block_object_dispose(&uStack_68,8);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  return;
}



/* Entry: 106648118; end: 1066481eb;  */

void FUN_106648118(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [8];
  
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1066481ec; end: 106648277;  */

void FUN_1066481ec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    FUN_106644658();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
      func_0x00010bf2dba0(*(undefined8 *)(lVar1 + 0xd0));
      uVar4 = *(undefined8 *)(lVar1 + 0xd0);
      *(undefined8 *)(lVar1 + 0xd0) = 0;
      _objc_release(uVar4);
      func_0x00010bec02a0(lVar1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106648278; end: 10664859b; -[SCImpalaStoryPlayer _startJoinedOwnedStoryStreamWithBusinessProfileId:] */

void FUN_106648278(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x000108f485b4();
  if ((iVar1 == 0) || (*(long *)(param_1 + 0xb8) == 0)) goto LAB_106648544;
  _os_unfair_lock_lock(param_1 + 300);
  uVar2 = *(ulong *)(param_1 + 0xe8);
  func_0x00010bf51e00();
  _os_unfair_lock_unlock(param_1 + 300);
  if ((*(long *)(param_1 + 0xd8) != 0) && (uVar3 = uVar2, func_0x00010c0720c0(), (uVar3 & 1) == 0))
  {
    func_0x00010becada0(param_1);
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xd0));
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0xd8) == 0) {
    lVar5 = param_1;
    func_0x00010be6ee60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      puVar9 = *(undefined **)(param_1 + 0xc0);
      _objc_retain(puVar9);
      puVar6 = PTR_PTR_1126ae720;
      _objc_retain(puVar9);
      _objc_opt_class(puVar6);
      puVar7 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar6);
      puVar6 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar9);
      puVar7 = PTR_PTR_1126ae720;
      puVar10 = puVar9;
      if (puVar6 == (undefined *)0x0) {
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_10664859c;
        puStack_60 = &UNK_110931680;
        _objc_retain(puVar9);
        puStack_58 = puVar9;
        func_0x00010bf11fe0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puStack_58);
        puVar10 = puVar7;
      }
      puVar6 = PTR_PTR_1126cc510;
      _objc_alloc();
      func_0x00010c03bdc0();
      uVar4 = *(undefined8 *)(param_1 + 0xd8);
      *(undefined **)(param_1 + 0xd8) = puVar6;
      _objc_release(uVar4);
      _os_unfair_lock_lock(param_1 + 300);
      uVar4 = param_3;
      func_0x00010bf51e00();
      uVar8 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe8) = uVar4;
      _objc_release(uVar8);
      uVar4 = *(undefined8 *)(param_1 + 0xf0);
      *(undefined **)(param_1 + 0xf0) = PTR____NSArray0__struct_11034ab48;
      _objc_release(uVar4);
      *(undefined1 *)(param_1 + 0xf8) = 0;
      _os_unfair_lock_unlock(param_1 + 300);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(lVar5);
      goto LAB_106648464;
    }
  }
  else {
LAB_106648464:
    puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 300);
    _objc_retain(puVar6);
    uVar4 = *(undefined8 *)(param_1 + 0x100);
    *(undefined **)(param_1 + 0x100) = puVar6;
    _objc_release(uVar4);
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = uVar4;
    _objc_release(uVar8);
    _os_unfair_lock_unlock(param_1 + 300);
    _objc_initWeak(auStack_80,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0xd8);
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(puVar6);
    func_0x00010c25ff60(uVar4);
    _objc_release(puVar6);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar6);
  }
  _objc_release(uVar2);
LAB_106648544:
  _objc_release(param_3);
  return;
}



/* Entry: 10664859c; end: 1066485ef;  */

void FUN_10664859c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_1126a5570;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar3 = uVar4;
  func_0x00010010fab4(uVar4,puVar2);
  uVar1 = uVar4;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066485f0; end: 106648653;  */

void FUN_1066485f0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2b120(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106648654; end: 1066489fb; -[SCImpalaStoryPlayer _handleJoinedOwnedStoryEmission:sessionToken:publicSourceSettledEmpty:] */

undefined8 *
FUN_106648654(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 300);
  iVar3 = (int)*(undefined8 *)(param_1 + 0x100);
  puVar11 = param_4;
  func_0x00010c071ae0();
  if (iVar3 == 0) {
    _os_unfair_lock_unlock(param_1 + 300);
    uStack_140 = 0;
    lStack_138 = 0;
    uVar16 = 0;
  }
  else {
    uStack_140 = *(undefined8 *)(param_1 + 0xe8);
    func_0x00010bf51e00();
    lStack_138 = *(long *)(param_1 + 0x108);
    _objc_retain();
    uVar16 = *(undefined8 *)(param_1 + 0x118);
    _objc_retain(uVar16);
    _os_unfair_lock_unlock(param_1 + 300);
    puVar11 = param_3;
    func_0x00010bf529e0();
    uVar1 = 0;
    if (puVar11 == (undefined8 *)0x0) {
      uVar1 = (uint)param_5;
    }
    if (((uVar1 & 1) != 0) ||
       (puVar18 = param_3, puVar11 = param_5, func_0x0001066434bc(param_3,uStack_140,param_5),
       ((ulong)puVar18 & 1) != 0)) {
      puVar18 = param_3;
      FUN_106647148();
      _objc_retainAutoreleasedReturnValue();
      _os_unfair_lock_lock(param_1 + 300);
      iVar3 = (int)*(undefined8 *)(param_1 + 0x100);
      puVar11 = param_4;
      func_0x00010c071ae0();
      if (iVar3 == 0) {
        _os_unfair_lock_unlock(param_1 + 300);
      }
      else {
        puVar11 = param_3;
        func_0x00010bf51e00();
        uVar12 = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 **)(param_1 + 0xf0) = puVar11;
        _objc_release(uVar12);
        *(char *)(param_1 + 0xf8) = (char)param_5;
        if (*(long *)(param_1 + 0x110) == 0) {
          bVar2 = 0;
        }
        else {
          bVar2 = *(byte *)(param_1 + 0x128) ^ 1;
        }
        puVar4 = *(undefined8 **)(param_1 + 0x120);
        func_0x00010bf51e00();
        _os_unfair_lock_unlock(param_1 + 300);
        _os_unfair_lock_lock(param_1 + 300);
        lVar5 = *(long *)(param_1 + 200);
        func_0x00010bf51e00();
        _os_unfair_lock_unlock(param_1 + 300);
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        _objc_retain(lVar5);
        puVar11 = &uStack_130;
        lVar9 = lVar5;
        func_0x00010bf52a60();
        puVar14 = PTR____NSArray0__struct_11034ab48;
        if (lVar9 != 0) {
          lVar17 = *plStack_120;
          do {
            lVar13 = 0;
            do {
              if (*plStack_120 != lVar17) {
                _objc_enumerationMutation(lVar5);
              }
              lVar15 = *(long *)(lStack_128 + lVar13 * 8);
              puVar6 = param_3;
              func_0x00010bf51e00();
              puVar11 = (undefined8 *)puVar14;
              if (puVar6 != (undefined8 *)0x0) {
                puVar11 = puVar6;
              }
              (**(code **)(lVar15 + 0x10))(lVar15,puVar11,param_5);
              _objc_release(puVar6);
              lVar13 = lVar13 + 1;
            } while (lVar9 != lVar13);
            puVar11 = &uStack_130;
            lVar9 = lVar5;
            func_0x00010bf52a60();
          } while (lVar9 != 0);
        }
        _objc_release(lVar5);
        if ((uVar1 & 1) == 0) {
          if ((bVar2 & 1) == 0) {
            uVar19 = *(ulong *)(param_1 + 8);
            _objc_retain(uVar19);
            iVar3 = (int)*(undefined8 *)(param_1 + 0x30);
            func_0x000108f485b4();
            if ((iVar3 == 0) ||
               (uVar7 = uVar19,
               _objc_opt_respondsToSelector(uVar19,PTR_s_refreshCurrentPlaylistGroupWithC_112626ea0)
               , (uVar7 & 1) == 0)) {
              puVar6 = puVar18;
              FUN_106643648(puVar18,uVar16);
              _objc_retainAutoreleasedReturnValue();
              if (lStack_138 != 0) {
                puVar11 = puVar6;
                func_0x00010be6a9a0(param_1);
              }
              _objc_release(puVar6);
            }
            else if ((lStack_138 != 0) && (lVar9 = param_1, func_0x00010c07ab40(), (int)lVar9 != 0))
            {
              func_0x00010be897e0(param_1);
              puVar11 = (undefined8 *)0x0;
              func_0x00010c125200(uVar19);
            }
            _objc_release(uVar19);
          }
          else {
            puVar11 = puVar4;
            func_0x00010bdfaaa0(param_1);
          }
        }
        _objc_release(lVar5);
        _objc_release(puVar4);
      }
      _objc_release(puVar18);
    }
  }
  _objc_release(uVar16);
  _objc_release(lStack_138);
  _objc_release(uStack_140);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 300);
  __Unwind_Resume();
  _objc_retain(puVar11);
  _os_unfair_lock_lock((undefined *)((long)param_3 + 300));
  if ((param_3[0x22] == 0) || ((*(byte *)(param_3 + 0x25) & 1) != 0)) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar8 = (undefined *)param_3[0x1e];
    func_0x00010bf51e00();
    puVar14 = PTR____NSArray0__struct_11034ab48;
    if (puVar8 != (undefined *)0x0) {
      puVar14 = puVar8;
    }
    _objc_retain(puVar14);
    _objc_release(puVar8);
    puVar8 = puVar14;
    func_0x0001066434bc(puVar14,puVar11,*(undefined1 *)(param_3 + 0x1f));
    if ((int)puVar8 != 0) {
      lVar9 = param_3[0x22];
      func_0x00010bf51e00();
      puVar18 = (undefined8 *)0x1;
      *(undefined1 *)(param_3 + 0x25) = 1;
      uVar16 = param_3[0x22];
      uVar12 = param_3[0x23];
      param_3[0x22] = 0;
      _objc_retain(uVar12);
      _objc_release(uVar16);
      uVar16 = param_3[0x23];
      param_3[0x23] = 0;
      _objc_release(uVar16);
      uVar16 = param_3[0x24];
      param_3[0x24] = 0;
      _objc_release(uVar16);
      _os_unfair_lock_unlock((undefined *)((long)param_3 + 300));
      puVar8 = puVar14;
      FUN_106647148(puVar14);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      FUN_106643648();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar9 + 0x10))(lVar9,puVar10,0);
      _objc_release(puVar10);
      _objc_release(puVar8);
      _objc_release(uVar12);
      _objc_release(lVar9);
      goto LAB_106648a4c;
    }
  }
  _os_unfair_lock_unlock((undefined *)((long)param_3 + 300));
  puVar18 = (undefined8 *)0x0;
LAB_106648a4c:
  _objc_release(puVar14);
  _objc_release(puVar11);
  return puVar18;
}



/* Entry: 1066489fc; end: 106648b77; -[SCImpalaStoryPlayer _deliverLatestJoinedStoryItemsIfReadyForBusinessProfileId:] */

undefined8 FUN_1066489fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 300);
  if ((*(long *)(param_1 + 0x110) == 0) || ((*(byte *)(param_1 + 0x128) & 1) != 0)) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0xf0);
    func_0x00010bf51e00();
    puVar6 = PTR____NSArray0__struct_11034ab48;
    if (puVar2 != (undefined *)0x0) {
      puVar6 = puVar2;
    }
    _objc_retain(puVar6);
    _objc_release(puVar2);
    puVar2 = puVar6;
    func_0x0001066434bc(puVar6,param_3,*(undefined1 *)(param_1 + 0xf8));
    if ((int)puVar2 != 0) {
      lVar3 = *(long *)(param_1 + 0x110);
      func_0x00010bf51e00();
      uVar7 = 1;
      *(undefined1 *)(param_1 + 0x128) = 1;
      uVar4 = *(undefined8 *)(param_1 + 0x110);
      uVar1 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x110) = 0;
      _objc_retain(uVar1);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x118);
      *(undefined8 *)(param_1 + 0x118) = 0;
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x120);
      *(undefined8 *)(param_1 + 0x120) = 0;
      _objc_release(uVar4);
      _os_unfair_lock_unlock(param_1 + 300);
      puVar2 = puVar6;
      FUN_106647148(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      FUN_106643648();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,puVar5,0);
      _objc_release(puVar5);
      _objc_release(puVar2);
      _objc_release(uVar1);
      _objc_release(lVar3);
      goto LAB_106648a4c;
    }
  }
  _os_unfair_lock_unlock(param_1 + 300);
  uVar7 = 0;
LAB_106648a4c:
  _objc_release(puVar6);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 106648b78; end: 106648bdf; -[SCImpalaStoryPlayer _resetJoinedStoryPlaybackSession] */

void FUN_106648b78(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 300);
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x120) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x128) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 300);
  return;
}



/* Entry: 106648be0; end: 106648c4f; -[SCImpalaStoryPlayer _tearDownJoinedStoryStream] */

void FUN_106648be0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be93060();
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0xd0));
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x00010c26ab80();
    uVar1 = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    _objc_release(uVar1);
  }
  _os_unfair_lock_lock(param_1 + 300);
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 300);
  return;
}



/* Entry: 106648c50; end: 106648c93; -[SCImpalaStoryPlayer dismissWithAnimation:] */

void FUN_106648c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x00010be93060();
  lVar1 = param_1;
  func_0x00010c07ab40();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf84cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_dismissWithAnimation__1125becd8,param_3);
    return;
  }
  return;
}



/* Entry: 106648c94; end: 106648ed7; -[SCImpalaStoryPlayer _announcePageTypeChangeForStoryPlayerLoggingIfNeeded:conentViewSource:] */

undefined ** FUN_106648c94(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x88) != 0) goto LAB_106648e9c;
  ppuVar1 = param_3;
  func_0x00010c259120();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    if (param_4 < 0x4b) {
      if (param_4 < 0x3e) {
        if (param_4 != 9) {
          if (param_4 != 0x1e) goto LAB_106648e9c;
          func_0x00010c1dcc60(PTR_PTR_1126c55c0,param_2,
                              &PTR____CFConstantStringClassReference_110db9e78);
          param_4 = 0x10;
        }
      }
      else {
        if (param_4 == 0x3e) {
LAB_106648dcc:
          func_0x00010c1dcc60(PTR_PTR_1126c55c0,param_2,
                              &PTR____CFConstantStringClassReference_110e57fd8);
        }
        else if (param_4 != 0x41) goto LAB_106648e9c;
        param_4 = 0xd;
      }
    }
    else {
      uVar6 = param_4 - 0x6d;
      if (uVar6 < 0x23) {
        if ((1L << (uVar6 & 0x3f) & 0x1fffe00U) == 0) {
          if ((1L << (uVar6 & 0x3f) & 0x6000001f0U) == 0) {
            if ((1L << (uVar6 & 0x3f) & 7U) != 0) goto LAB_106648dcc;
            goto LAB_106648de8;
          }
          param_4 = 0xe;
        }
        else {
          param_4 = 0x82;
        }
      }
      else {
LAB_106648de8:
        if ((param_4 != 0x4b) && (param_4 != 0x66)) goto LAB_106648e9c;
        param_4 = 0x5c;
      }
    }
  }
  else {
    param_4 = param_1;
    ppuVar8 = param_3;
    func_0x00010be6f920();
    if (param_4 == -1) goto LAB_106648e9c;
  }
  ppuStack_58 = &PTR____CFConstantStringClassReference_110dcad78;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_50 = puVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined **)(param_1 + 0x88) = puVar4;
  _objc_release(uVar5);
  _objc_release(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = &PTR____CFConstantStringClassReference_110f417b8;
  func_0x00010bf7dbc0();
  _objc_release(uVar5);
LAB_106648e9c:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c259120();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar8;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c067ec0();
  _objc_release(ppuVar1);
  _objc_release(ppuVar8);
  puVar3 = PTR_PTR_1126c55c0;
  iVar7 = (int)ppuVar2;
  if (iVar7 == 4) {
    ppuVar8 = (undefined **)0xe;
  }
  else {
    if (iVar7 == 2) {
      ppuVar8 = (undefined **)0x10;
      uVar5 = 0x10;
    }
    else {
      if (iVar7 != 1) {
        return (undefined **)0xffffffffffffffff;
      }
      ppuVar8 = (undefined **)0xd;
      uVar5 = 0xd;
    }
    func_0x00010bc9107c(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcc60(puVar3,param_2,uVar5);
    _objc_release(uVar5);
  }
  return ppuVar8;
}



/* Entry: 106648ed8; end: 106648fa7; -[SCImpalaStoryPlayer _pageTypeFromComposerOptions:] */

undefined8 FUN_106648ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  func_0x00010c259120();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0f1e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c067ec0();
  _objc_release(uVar4);
  _objc_release(param_3);
  puVar1 = PTR_PTR_1126c55c0;
  iVar3 = (int)uVar2;
  if (iVar3 == 4) {
    uVar4 = 0xe;
  }
  else {
    if (iVar3 == 2) {
      uVar4 = 0x10;
      uVar2 = 0x10;
    }
    else {
      if (iVar3 != 1) {
        return 0xffffffffffffffff;
      }
      uVar4 = 0xd;
      uVar2 = 0xd;
    }
    func_0x00010bc9107c(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcc60(puVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  return uVar4;
}



/* Entry: 106648fa8; end: 1066491f3; -[SCImpalaStoryPlayer playFeedCardsWithPaginatedItems:startingIndex:baseView:options:onFeedCardPlaybackCompleted:] */

void FUN_106648fa8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf56880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  _objc_release(uVar1);
  func_0x00010c229160(uVar2);
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x2020000000;
  uStack_78 = 1;
  _objc_initWeak(auStack_98,param_2);
  uVar1 = param_4;
  func_0x00010c272160();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_98);
  uStack_a0 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(uVar2);
  uVar3 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_98);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1066491f4; end: 106649283;  */

void FUN_1066491f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    if (*(char *)(lVar2 + 0x18) == '\x01') {
      *(undefined1 *)(lVar2 + 0x18) = 0;
      func_0x00010bec1a40(*(undefined8 *)(param_1 + 0x50),lVar1);
    }
    else {
      func_0x00010be6a980(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106649284; end: 1066492e3;  */

void FUN_106649284(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x48,param_2 + 0x48);
  return;
}



/* Entry: 1066492e4; end: 1066497bf; -[SCImpalaStoryPlayer _startStoryPlayerPresenterWithFeedCards:startingIndex:baseView:circumstanceEngine:options:onFeedCardPlaybackCompleted:presenter:] */

void FUN_1066492e4(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined1 auStack_118 [8];
  undefined1 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = param_4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf935c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar5 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0xa0);
  uVar12 = *(undefined8 *)(param_2 + 0x60);
  _objc_retain(param_4);
  _objc_retain(uVar5);
  _objc_retain(param_6);
  _objc_retain(uVar13);
  _objc_retain(uVar12);
  _objc_initWeak(auStack_80,param_9);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_10664d6b0;
  puStack_c8 = &UNK_1109318d0;
  lStack_c0 = param_4;
  uStack_b8 = param_6;
  uStack_b0 = uVar13;
  uStack_a8 = uVar12;
  lStack_90 = (long)param_1;
  uStack_88 = lVar4 == 0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(uVar13);
  _objc_retain(uVar12);
  _objc_copyWeak(auStack_98,auStack_80);
  uStack_a0 = uVar5;
  _objc_retain(uVar5);
  ppuVar6 = &puStack_e0;
  _objc_retainBlock();
  _objc_release(uStack_a0);
  _objc_destroyWeak(auStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(lStack_c0);
  _objc_release(uVar5);
  _objc_release(uVar12);
  _objc_release(uVar13);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126cc508;
  _objc_alloc();
  func_0x00010c008780();
  func_0x00010c189620();
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1066497c0;
  puStack_f0 = &UNK_110931740;
  _objc_retain(param_8);
  ppuVar8 = &puStack_108;
  uStack_e8 = param_8;
  _objc_retainBlock();
  uVar9 = param_7;
  func_0x00010c07f400();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010bf1f3c0();
  _objc_release(uVar9);
  if ((uVar10 & 1) == 0) {
    _objc_initWeak(&puStack_e0,param_2);
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    pcStack_148 = FUN_1066498ec;
    puStack_140 = &UNK_110931770;
    _objc_copyWeak(auStack_118,&puStack_e0);
    _objc_retain(param_5);
    uStack_138 = param_5;
    _objc_retain(param_7);
    uStack_130 = param_7;
    _objc_retain(ppuVar8);
    ppuStack_120 = ppuVar8;
    uStack_110 = lVar4 == 0;
    _objc_retain(param_9);
    uStack_128 = param_9;
    (*(code *)ppuVar6[2])(ppuVar6,&puStack_158);
    _objc_release(uStack_128);
    _objc_release(ppuStack_120);
    _objc_release(uStack_130);
    _objc_release(uStack_138);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(&puStack_e0);
  }
  else {
    ppuVar11 = &puStack_e0;
    _objc_initWeak(ppuVar11,param_2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_160,&puStack_e0);
    _objc_retain(param_7);
    _objc_retain(param_8);
    _objc_retain(param_5);
    _objc_retain(param_9);
    func_0x00010c0f7fc0(ppuVar11);
    _objc_release(ppuVar11);
    _objc_release(param_9);
    _objc_release(param_5);
    _objc_release(param_8);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(&puStack_e0);
  }
  _objc_release(ppuVar8);
  _objc_release(uStack_e8);
  _objc_release(puVar7);
  _objc_release(ppuVar6);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1066497c0; end: 1066498eb;  */

void FUN_1066497c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10664985c;
  puStack_40 = &UNK_110931710;
  pcVar2 = *(code **)(lVar1 + 0x10);
  uStack_38 = param_3;
  _objc_retain(param_3);
  (*pcVar2)(lVar1,param_2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066498ec; end: 106649ab3;  */

void FUN_1066498ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if ((param_4 == 0) && (lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3b320(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106649ab4; end: 106649b4f;  */

void FUN_106649ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106649b50;
  puStack_40 = &UNK_110931710;
  pcVar2 = *(code **)(lVar1 + 0x10);
  uStack_38 = param_4;
  _objc_retain(param_4);
  (*pcVar2)(lVar1,param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106649b50; end: 106649b93;  */

void FUN_106649b50(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106649b94; end: 106649cc7; +[SCImpalaStoryPlayer _SCDiscoverFeedStoryFromStoryCardItem:requestId:responseTimestamp:position:circumstanceEngine:] */

void FUN_106649b94(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined *puVar3;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x6);
  puVar1 = PTR_PTR_1126b0ef0;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)0x0;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0ef8;
    _objc_alloc(PTR_PTR_1126b0ef8);
    func_0x00010c03ef40();
    puVar3 = puVar1;
    func_0x000108482f84(puVar1,puVar2,in_x5,0,0,0,0,0x101,0,0,in_x6,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(in_x6);
  _objc_release(in_x4);
  _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106649cc8; end: 106649dc7; -[SCImpalaStoryPlayer _onPaginatedFeedCardsUpdate:] */

void FUN_106649cc8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puVar2 = auStack_38;
    _objc_initWeak(puVar2,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106649dc8; end: 10664a067;  */

void FUN_106649dc8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = lVar1, func_0x00010c07ab40(), (int)lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf935c0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar3);
    puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (lVar4 == 0) {
      puVar6 = *(undefined **)(param_1 + 0x20);
      FUN_106651388();
      _objc_retainAutoreleasedReturnValue();
      FUN_10664f804();
      puVar7 = puVar6;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        func_0x00010c288a20(*(undefined8 *)(lVar1 + 8));
      }
    }
    else {
      func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 0x20);
      _objc_retain(lVar3);
      lVar2 = lVar3;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (lVar2 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(lVar3);
          }
          puVar6 = PTR_PTR_1126cc1e8;
          uVar5 = *(undefined8 *)(lVar10 * 8);
          func_0x00010bf935c0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3a20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          if (puVar6 == (undefined *)0x0) {
            ppuVar8 = &PTR____CFConstantStringClassReference_110dad2d8;
          }
          else {
            func_0x00010befa120(puVar7);
            ppuVar8 = &PTR____CFConstantStringClassReference_110dab0d8;
          }
          func_0x000108f37f40(*(undefined8 *)(lVar1 + 0xa0),ppuVar8,
                              &PTR____CFConstantStringClassReference_110e52f18,1);
          _objc_release(puVar6);
          lVar10 = lVar10 + 1;
        } while (lVar2 != lVar10);
        lVar2 = lVar3;
        func_0x00010bf52a60();
      }
      _objc_release(lVar3);
      puVar6 = puVar7;
      func_0x00010bf51e00();
      func_0x00010c066720(*(undefined8 *)(lVar1 + 0x60));
      _objc_release(puVar7);
      puVar7 = puVar6;
      func_0x00010bf529e0();
      if (puVar7 != (undefined *)0x0) {
        func_0x00010c2889c0(*(undefined8 *)(lVar1 + 8));
      }
    }
    _objc_release(puVar6);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + 0x158;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c25a860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10664a068; end: 10664a093; -[SCImpalaStoryPlayer storyPlayerPresenterWillBeginDismissing:] */

void FUN_10664a068(long param_1)

{
  param_1 = param_1 + 0x158;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25a860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10664a094; end: 10664a0ff; -[SCImpalaStoryPlayer storyPlayerPresenterWillBeginPresenting:] */

void FUN_10664a094(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x138;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94800();
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x158;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25a880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10664a100; end: 10664a13b; -[SCImpalaStoryPlayer storyPlayerPresenterDidFinishDismissing:] */

void FUN_10664a100(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf86d40();
  }
  param_1 = param_1 + 0x158;
  _objc_loadWeakRetained(param_1);
  func_0x00010c25a7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10664a13c; end: 10664a1a3; -[SCImpalaStoryPlayer storyPlayerPresenterDidTearDown:] */

void FUN_10664a13c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf7dbc0();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10664a1a4; end: 10664a1af; -[SCImpalaStoryPlayer pushToValdiMarshaller:] */

void FUN_10664a1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 10664a1b0; end: 10664a307; -[SCImpalaStoryPlayer playStoryForStoryCard:baseView:startWithUnviewed:useCircleTransition:showMetricsFooterBar:contentViewSource:storyAnalyticOptions:callback:] */

void FUN_10664a1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_PTR_1126caff0;
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000000);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01e460();
  _objc_release(param_4);
  uVar2 = param_3;
  FUN_10664ddb8(param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126cc2b8;
  _objc_alloc(PTR_PTR_1126cc2b8);
  func_0x00010baf2e2c(in_x7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bc80(puVar3);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  func_0x00010c0fe6e0(param_1);
  _objc_release(in_stack_00000008);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10664a308; end: 10664a453; -[SCImpalaStoryPlayer playStoryForFeedCard:baseView:startWithUnviewed:useCircleTransition:showMetricsFooterBar:contentViewSource:startingSnapId:] */

void FUN_10664a308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  puVar1 = PTR_PTR_1126caff0;
  _objc_retain(in_stack_00000000);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01e460();
  _objc_release(param_4);
  uVar2 = param_3;
  FUN_10664df7c(param_3,puVar1,in_stack_00000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_stack_00000000);
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126cc2b8;
  _objc_alloc(PTR_PTR_1126cc2b8);
  func_0x00010baf2e2c(in_x7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bc80(puVar3);
  _objc_release(in_x7);
  func_0x00010c0fe6e0(param_1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10664a454; end: 10664a7d3; -[SCImpalaStoryPlayer _startStoryPresenterWithPlaylistFetcher:playbackCompletion:options:callback:baseView:presenter:] */

void FUN_10664a454(long param_1,undefined **param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,ulong param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_b0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_8 == 0) {
    if (param_6 != 0) {
      param_2 = &PTR____CFConstantStringClassReference_110e58018;
      (**(code **)(param_6 + 0x10))(param_6,&PTR____CFConstantStringClassReference_110e58018);
    }
  }
  else {
    uVar1 = param_8;
    func_0x00010c07ab40();
    if ((uVar1 & 1) == 0) {
      func_0x00010bfa9500(param_3);
      lVar2 = param_1 + 0x138;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x000108f04e30();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 == 0) {
        if (param_6 != 0) {
          param_2 = &PTR____CFConstantStringClassReference_110e57fb8;
          (**(code **)(param_6 + 0x10))(param_6,&PTR____CFConstantStringClassReference_110e57fb8);
        }
      }
      else {
        if (param_7 == 0) {
          puStack_b0 = PTR____NSArray0__struct_11034ab48;
        }
        else {
          puStack_b0 = PTR__OBJC_CLASS___NSArray_1126ae530;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010c251ce0();
        lVar2 = param_5;
        func_0x00010c0f0840();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 != 0) {
          lVar4 = param_5;
          func_0x00010c0f0840();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c233400();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1f3c0();
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        _objc_release(lVar2);
        func_0x00010c28ff80();
        lVar4 = param_5;
        func_0x00010c259120();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfa40c0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1 + 0x148;
        _objc_loadWeakRetained();
        param_1 = param_1 + 0x150;
        _objc_loadWeakRetained();
        lVar6 = param_5;
        func_0x00010bf4de00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010baf2e4c();
        lVar7 = param_5;
        func_0x00010c0b8220();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c237ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1f3c0();
        _objc_retain(param_6);
        func_0x00010c10f160(param_8);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lVar6);
        _objc_release(param_1);
        _objc_release(lVar2);
        _objc_release(lVar5);
        _objc_release(lVar4);
        _objc_release(param_6);
        _objc_release(puStack_b0);
      }
      _objc_release(lVar3);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(param_3 + 0x20);
  if (lVar9 != 0) {
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10664a7d4; end: 10664a827;  */

void FUN_10664a7d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010c09e4e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10664a828; end: 10664a873; -[SCImpalaStoryPlayer dealloc] */

void FUN_10664a828(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010becada0();
  func_0x00010bf3a660(*(undefined8 *)(param_1 + 0xe0));
  puStack_28 = PTR_PTR_1126f2330;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10664a874; end: 10664a88b; -[SCImpalaStoryPlayer presentingViewController] */

void FUN_10664a874(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10664a88c; end: 10664a897; -[SCImpalaStoryPlayer setPresentingViewController:] */

void FUN_10664a88c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x138,param_3);
  return;
}



/* Entry: 10664a898; end: 10664a89f; -[SCImpalaStoryPlayer getPresentingViewController] */

undefined8 FUN_10664a898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x140);
}



/* Entry: 10664a8a0; end: 10664a8a7; -[SCImpalaStoryPlayer setGetPresentingViewController:] */

void FUN_10664a8a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10664a8a8; end: 10664a8bf; -[SCImpalaStoryPlayer userSession] */

void FUN_10664a8a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x148);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10664a8c0; end: 10664a8d7; -[SCImpalaStoryPlayer navigationServices] */

void FUN_10664a8c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10664a8d8; end: 10664a8ef; -[SCImpalaStoryPlayer delegate] */

void FUN_10664a8d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


