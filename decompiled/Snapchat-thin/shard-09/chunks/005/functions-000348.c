/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e5fd70; end: 106e5fdf3;  */

void FUN_106e5fd70(long param_1,long param_2)

{
  undefined *puVar1;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    puVar1 = PTR_PTR_1126b6400;
    _objc_alloc(PTR_PTR_1126b6400);
    func_0x00010c036b60();
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1,0);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e5fdf4; end: 106e5fdfb; -[SCComposerStoryCardFetcher shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106e5fdf4(void)

{
  return 0;
}



/* Entry: 106e5fdfc; end: 106e5fe07; -[SCComposerStoryCardFetcher pushToValdiMarshaller:] */

void FUN_106e5fdfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 106e5fe08; end: 106e5fe13; -[SCComposerStoryCardFetcher .cxx_destruct] */

void FUN_106e5fe08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e5fe14; end: 106e5fe87; -[SCComposerStoryFetcher initWithStoriesDataProvider:] */

undefined1 * FUN_106e5fe14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7438;
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



/* Entry: 106e5fe88; end: 106e60027; -[SCComposerStoryFetcher getNativeUserStoryWithUserId:callback:] */

void FUN_106e5fe88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x106e5ff5c;
    puStack_40 = &UNK_110980b50;
    _objc_retain(param_4);
    lStack_38 = param_4;
    func_0x00010bfaa9c0(uVar1,param_2,param_3,1,PTR___dispatch_main_q_11034be20,&puStack_58);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106e60028; end: 106e60047; +[SCComposerStoryFetcher _playbackStoryTypeFromSummaryType:] */

undefined8 FUN_106e60028(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 7) {
    return *(undefined8 *)(&UNK_10ddf0030 + param_3 * 8);
  }
  return 1;
}



/* Entry: 106e60048; end: 106e600f3; +[SCComposerStoryFetcher _operaPlayableDataModelFromSummary:] */

void FUN_106e60048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6500;
  uVar3 = param_3;
  func_0x00010c27dd80(param_3);
  _objc_release(param_3);
  func_0x00010be74f20(puVar4,param_2,uVar3);
  func_0x00010c04dcc0(puVar1,param_2,uVar2,puVar4,0,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e600f4; end: 106e600fb; -[SCComposerStoryFetcher shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106e600f4(void)

{
  return 0;
}



/* Entry: 106e600fc; end: 106e60107; -[SCComposerStoryFetcher pushToValdiMarshaller:] */

void FUN_106e600fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 106e60108; end: 106e60113; -[SCComposerStoryFetcher .cxx_destruct] */

void FUN_106e60108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e60114; end: 106e60187; -[SCComposerStoryFetcherDiscoverFeedStoryNativeItem initWithPlayableDataModel:] */

undefined1 * FUN_106e60114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7440;
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



/* Entry: 106e60188; end: 106e60193; -[SCComposerStoryFetcherDiscoverFeedStoryNativeItem pushToValdiMarshaller:] */

void FUN_106e60188(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 106e60194; end: 106e6019b; -[SCComposerStoryFetcherDiscoverFeedStoryNativeItem discoverFeedStory] */

undefined8 FUN_106e60194(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e6019c; end: 106e601a7; -[SCComposerStoryFetcherDiscoverFeedStoryNativeItem .cxx_destruct] */

void FUN_106e6019c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e601a8; end: 106e6021b; -[SCComposerStoryFetcherFriendStoriesNativeItem initWithPlayableDataModel:] */

undefined1 * FUN_106e601a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7448;
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



/* Entry: 106e6021c; end: 106e60227; -[SCComposerStoryFetcherFriendStoriesNativeItem pushToValdiMarshaller:] */

void FUN_106e6021c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b04af98(param_3,param_1);
  func_0x00010b04af88();
  func_0x00010b04af80();
  func_0x00010b04aef0();
  func_0x00010b04af30();
  return;
}



/* Entry: 106e60228; end: 106e6022f; -[SCComposerStoryFetcherFriendStoriesNativeItem friendStoriesPlayableDataModel] */

undefined8 FUN_106e60228(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e60230; end: 106e6023b; -[SCComposerStoryFetcherFriendStoriesNativeItem .cxx_destruct] */

void FUN_106e60230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6023c; end: 106e6033f; -[SCComposerFriendsFeedStatusHandler initWithMatcher:friendsFeedDataCoordinator:feedStatusConverter:] */

undefined1 *
FUN_106e6023c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7450;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e60340; end: 106e6034b; -[SCComposerFriendsFeedStatusHandler pushToValdiMarshaller:] */

undefined8 FUN_106e60340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df198;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af9fa48();
  func_0x00010af9fa58();
  return param_3;
}



/* Entry: 106e6034c; end: 106e60423; -[SCComposerFriendsFeedStatusHandler fetchWithCallback:] */

void FUN_106e6034c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106e60424; end: 106e605db;  */

void FUN_106e60424(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar4 = *(long *)(lVar2 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010bfba060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_retain(lVar7);
    param_4 = auStack_e8;
    lVar4 = lVar7;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar7);
        }
        lVar5 = *(long *)(lVar2 + 8);
        if ((lVar5 != 0) &&
           ((**(code **)(lVar5 + 0x10))(lVar5,*(undefined8 *)(lVar8 * 8)), (int)lVar5 != 0)) {
          uVar6 = *(undefined8 *)(lVar2 + 0x18);
          func_0x00010bfa4200();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      param_4 = auStack_e8;
      lVar4 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    param_3 = 0;
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar3);
    _objc_release(lVar7);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar4 == 0) {
LAB_106e606cc:
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + 0x28),PTR_s_dispose_1125bf4f8);
      return;
    }
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar5 = *(long *)(lVar2 + 8);
      if ((lVar5 != 0) &&
         ((**(code **)(lVar5 + 0x10))(lVar5,*(undefined8 *)(lVar8 * 8)), (int)lVar5 != 0)) {
        (**(code **)(param_4 + 0x10))(param_4);
        goto LAB_106e606cc;
      }
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106e605dc; end: 106e6071b; -[SCComposerFriendsFeedStatusHandler handleFriendsFeedObservableUpdate:callback:] */

void FUN_106e605dc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_106e606cc:
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_3 + 0x28),PTR_s_dispose_1125bf4f8);
      return;
    }
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 != 0) &&
         ((**(code **)(lVar3 + 0x10))(lVar3,*(undefined8 *)(lVar5 * 8)), (int)lVar3 != 0)) {
        (**(code **)(param_4 + 0x10))(param_4);
        goto LAB_106e606cc;
      }
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106e6071c; end: 106e60723; -[SCComposerFriendsFeedStatusHandler unsubscribeFromFriendsFeedObservable] */

void FUN_106e6071c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 106e60724; end: 106e60907; -[SCComposerFriendsFeedStatusHandler subscribeWithCallback:] */

void FUN_106e60724(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfba080();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106e60908;
  puStack_70 = &UNK_11084e370;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  uVar4 = uVar3;
  uStack_68 = param_3;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126afd78;
  _objc_alloc();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106e6095c;
  puStack_98 = &UNK_1108434b0;
  _objc_copyWeak(auStack_90,auStack_58);
  func_0x00010bffae00();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106e60988;
  puStack_c0 = &UNK_110842e18;
  puStack_b8 = puVar5;
  _objc_retain();
  ppuVar6 = &puStack_d8;
  _objc_retainBlock(ppuVar6);
  _objc_release(puStack_b8);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_90);
  _objc_release(uStack_68);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 106e60908; end: 106e6095b;  */

void FUN_106e60908(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd12c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e6095c; end: 106e60987;  */

void FUN_106e6095c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c282a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e60988; end: 106e6098f;  */

void FUN_106e60988(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 106e60990; end: 106e609e3; -[SCComposerFriendsFeedStatusHandler .cxx_destruct] */

void FUN_106e60990(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e609e4; end: 106e60b6b; -[SCComposerFriendsFeedStatusHandlerProvider initWithFriendsFeedDataCoordinator:friendsFeedActionTextGenerator:friendsFeedIconGenerator:] */

undefined8 *
FUN_106e609e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f7458;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_5);
    _objc_release(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106e60b6c; end: 106e60bbf;  */

void FUN_106e60b6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d2dc8;
  _objc_alloc(PTR_PTR_1126d2dc8);
  func_0x00010c016220();
  puVar2 = puVar1;
  func_0x00010bfa4200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e60bc0; end: 106e60bc7; -[SCComposerFriendsFeedStatusHandlerProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106e60bc0(void)

{
  return 0;
}



/* Entry: 106e60bc8; end: 106e60bd3; -[SCComposerFriendsFeedStatusHandlerProvider pushToValdiMarshaller:] */

undefined8 FUN_106e60bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df190;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af9fa48();
  func_0x00010af9fa58();
  return param_3;
}



/* Entry: 106e60bd4; end: 106e60d03; -[SCComposerFriendsFeedStatusHandlerProvider getHandlerForUsersWithIds:feedStatusConverter:callback:] */

void FUN_106e60bd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e60d04; end: 106e60df3;  */

void FUN_106e60d04(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106e60df4;
    puStack_50 = &UNK_110855120;
    ppuVar3 = &puStack_68;
    puStack_48 = puVar2;
    _objc_retainBlock(ppuVar3);
    puVar4 = PTR_PTR_1126d2dd0;
    _objc_alloc(PTR_PTR_1126d2dd0);
    func_0x00010c028b60();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar4,0);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106e60df4; end: 106e60ee3;  */

undefined1 FUN_106e60df4(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf96da0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0020();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106e60ee4; end: 106e60f3b;  */

void FUN_106e60ee4(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e60f3c; end: 106e60f43;  */

void FUN_106e60f3c(void)

{
  return;
}



/* Entry: 106e60f44; end: 106e60fc7; -[SCComposerFriendsFeedStatusHandlerProvider getHandlerForUsersWithIds:callback:] */

void FUN_106e60f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2dc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016240();
  func_0x00010bfc6260(param_1,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e60fc8; end: 106e6104b; -[SCComposerFriendsFeedStatusHandlerProvider getCondensedHandlerForUsersWithIds:callback:] */

void FUN_106e60fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2dc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016240();
  func_0x00010bfc6260(param_1,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e6104c; end: 106e6117b; -[SCComposerFriendsFeedStatusHandlerProvider getHandlerForGroupsWithIds:feedStatusConverter:callback:] */

void FUN_106e6104c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106e6117c; end: 106e6126b;  */

void FUN_106e6117c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106e6126c;
    puStack_50 = &UNK_110855120;
    ppuVar3 = &puStack_68;
    puStack_48 = puVar2;
    _objc_retainBlock(ppuVar3);
    puVar4 = PTR_PTR_1126d2dd0;
    _objc_alloc(PTR_PTR_1126d2dd0);
    func_0x00010c028b60();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar4,0);
    _objc_release(puVar4);
    _objc_release(ppuVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106e6126c; end: 106e612d7;  */

undefined8 FUN_106e6126c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef0c80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 106e612d8; end: 106e6135b; -[SCComposerFriendsFeedStatusHandlerProvider getHandlerForGroupsWithIds:callback:] */

void FUN_106e612d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2dc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016240();
  func_0x00010bfc6240(param_1,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e6135c; end: 106e613df; -[SCComposerFriendsFeedStatusHandlerProvider getCondensedHandlerForGroupsWithIds:callback:] */

void FUN_106e6135c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d2dc8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016240();
  func_0x00010bfc6240(param_1,param_2,param_3,puVar1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106e613e0; end: 106e613e7; -[SCComposerFriendsFeedStatusHandlerProvider getDefaultFeedStatus] */

void FUN_106e613e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 106e613e8; end: 106e6143b; -[SCComposerFriendsFeedStatusHandlerProvider .cxx_destruct] */

void FUN_106e613e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e6143c; end: 106e61453;  */

void FUN_106e6143c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e61454; end: 106e618af;  */

void FUN_106e61454(long param_1,undefined **param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined **ppuVar16;
  ulong unaff_x24;
  undefined **ppuStack_140;
  undefined *puStack_138;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf0e4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_retain(param_2);
  ppuVar10 = param_2;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (ppuVar10 == (undefined **)0x0) {
    ppuStack_140 = (undefined **)0x0;
    puStack_138 = (undefined *)0x0;
  }
  else {
    ppuStack_140 = (undefined **)0x0;
    puStack_138 = (undefined *)0x0;
    do {
      ppuVar16 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        iVar15 = (int)*(undefined8 *)((long)ppuVar16 * 8);
        ppuVar4 = param_2;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        iVar1 = iVar15;
        func_0x00010c0720c0();
        ppuVar6 = ppuVar4;
        if (iVar1 == 0) {
LAB_106e615f4:
          func_0x00010c0720c0();
          if (iVar15 != 0) {
            puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
            _objc_opt_class(PTR__OBJC_CLASS___UIColor_1126aea70);
            ppuVar5 = ppuVar4;
            _objc_opt_isKindOfClass(ppuVar4,puVar8);
            if (((ulong)ppuVar5 & 1) != 0) {
              func_0x00010bfe1180(ppuVar4);
              _objc_retainAutoreleasedReturnValue();
              ppuVar5 = &PTR____CFConstantStringClassReference_110dbf518;
              func_0x00010c25ce40();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = ppuStack_140;
              ppuStack_140 = ppuVar5;
              goto LAB_106e61658;
            }
          }
        }
        else {
          puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
          _objc_opt_class(PTR__OBJC_CLASS___UIFont_1126aec38);
          ppuVar5 = ppuVar4;
          _objc_opt_isKindOfClass(ppuVar4,puVar8);
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (((ulong)ppuVar5 & 1) == 0) goto LAB_106e615f4;
          _objc_retain(ppuVar4);
          func_0x00010bfb3f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c102de0(ppuVar4);
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puStack_138);
          ppuVar7 = ppuVar4;
          puStack_138 = puVar8;
LAB_106e61658:
          _objc_release(ppuVar7);
          _objc_release(ppuVar6);
        }
        _objc_release(ppuVar4);
        ppuVar16 = (undefined **)((long)ppuVar16 + 1);
      } while (ppuVar10 != ppuVar16);
      ppuVar10 = param_2;
      func_0x00010bf52a60();
    } while (ppuVar10 != (undefined **)0x0);
    unaff_x24 = 0;
  }
  _objc_release(param_2);
  puVar8 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (puVar8 == (undefined *)0x0) {
LAB_106e6178c:
    puVar8 = PTR_PTR_1126d2dd8;
    _objc_alloc();
    func_0x00010c002b20();
    func_0x00010c19e480();
    func_0x00010c17e800(puVar8);
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28));
    lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar14 = *(undefined8 *)(lVar13 + 0x28);
    *(undefined **)(lVar13 + 0x28) = puVar8;
  }
  else {
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 != puStack_138) {
      unaff_x24 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = unaff_x24;
      func_0x00010c0720c0();
      if ((uVar9 & 1) == 0) {
        _objc_release(unaff_x24);
        _objc_release(puVar8);
        goto LAB_106e6178c;
      }
    }
    ppuVar10 = *(undefined ***)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf40c40();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar10 == ppuStack_140) {
      _objc_release(ppuVar10);
      if (puVar8 != puStack_138) {
        _objc_release(unaff_x24);
      }
      _objc_release(puVar8);
    }
    else {
      uVar11 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
      func_0x00010bf40c40();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar11;
      func_0x00010c0720c0();
      _objc_release(uVar11);
      _objc_release(ppuVar10);
      if (puVar8 != puStack_138) {
        _objc_release(unaff_x24);
      }
      _objc_release(puVar8);
      if ((uVar9 & 1) == 0) goto LAB_106e6178c;
    }
    uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    func_0x00010bf4bc60(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar14;
    func_0x00010c25ce40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c181b40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    _objc_release(uVar2);
  }
  _objc_release(uVar14);
  _objc_release(ppuStack_140);
  _objc_release(puStack_138);
  _objc_release(uVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c016250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 106e618b0; end: 106e618b7; -[SCFriendsFeedStatusConverter initWithFriendsFeedActionTextGenerator:friendsFeedIconGenerator:] */

void FUN_106e618b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c016250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithFriendsFeedActionTextGen_1125e3270,param_3,param_4,0);
  return;
}



/* Entry: 106e618b8; end: 106e61963; -[SCFriendsFeedStatusConverter initWithFriendsFeedActionTextGenerator:friendsFeedIconGenerator:renderCondensed:] */

undefined1 *
FUN_106e618b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7460;
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
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e61964; end: 106e61ce7; -[SCFriendsFeedStatusConverter feedStatusForFeedItem:] */

void FUN_106e61964(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puStack_108 = &uStack_110;
  uStack_110 = 0;
  uStack_100 = 0x3032000000;
  pcStack_f8 = FUN_106e6143c;
  uStack_f0 = 0x106e6144c;
  uStack_e8 = 0;
  uVar6 = param_3;
  func_0x00010bf96da0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  _objc_retain(param_3);
  func_0x00010c0c0020(uVar6);
  _objc_release(uVar6);
  if (puStack_108[5] == 0) {
    puVar2 = PTR_PTR_1126d2de0;
    _objc_alloc();
    func_0x00010c055e00();
    uVar6 = puStack_108[5];
    puStack_108[5] = puVar2;
    _objc_release(uVar6);
  }
  uVar6 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf45c80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010beef160();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bfe55e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126d2de8;
  _objc_alloc();
  uVar4 = uVar3;
  func_0x00010c25cd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_106e6143c;
  uStack_88 = 0x106e6144c;
  uStack_80 = 0;
  puStack_a0 = &uStack_a8;
  func_0x00010c08fa60(uVar3);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_106e61454;
  puStack_c8 = &UNK_110980bf0;
  _objc_retain(uVar3);
  uStack_c0 = uVar3;
  puStack_b0 = &uStack_a8;
  _objc_retain(puVar5);
  puStack_b8 = puVar5;
  func_0x00010bf97b20(uVar3);
  puVar1 = puStack_b8;
  _objc_retain(puVar5);
  _objc_release(puVar1);
  _objc_release(uStack_c0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(puVar5);
  _objc_release(uVar3);
  func_0x000100bf377c(param_3);
  func_0x00010c00ffe0(puVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_110,8);
  _objc_release(uStack_e8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106e61ce8; end: 106e61dff;  */

void FUN_106e61ce8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d2de0;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c055e00();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e61e00; end: 106e61e03;  */

void FUN_106e61e00(void)

{
  return;
}



/* Entry: 106e61e04; end: 106e61e33; -[SCFriendsFeedStatusConverter .cxx_destruct] */

void FUN_106e61e04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e61e34; end: 106e61edf; -[SCComposerCameraPresenter initWithPageSource:chatCameraScopeExposer:chatCameraScopeServices:] */

undefined1 *
FUN_106e61e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f7468;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
  return (undefined1 *)puVar1;
}



/* Entry: 106e61ee0; end: 106e61eeb; -[SCComposerCameraPresenter pushToValdiMarshaller:] */

undefined8 FUN_106e61ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df188;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 106e61eec; end: 106e620c7; -[SCComposerCameraPresenter presentWithContext:] */

void FUN_106e61eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c122a80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067fc0();
  _objc_release(uVar1);
  if ((int)uVar2 == 2) {
    puVar3 = PTR_PTR_1126d2df8;
    func_0x00010c0e0120(PTR_PTR_1126d2df8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_106e622f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010bfceb20(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb300(puVar5);
    _objc_release(puVar4);
  }
  else {
    if ((int)uVar2 != 1) goto LAB_106e620b0;
    puVar3 = PTR_PTR_1126d2df0;
    func_0x00010c0e0120(PTR_PTR_1126d2df0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_106e622f8();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c294420(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb300(puVar5);
    _objc_release(puVar4);
    puVar4 = puVar3;
    func_0x00010c2923e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb2e0(puVar5);
    _objc_release(puVar4);
  }
  func_0x00010c1b2900(puVar5);
  puVar4 = puVar5;
  func_0x00010c271a20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010c10b760(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_106e620b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e620c8; end: 106e62197; -[SCComposerCameraPresenter presentCameraWithReplyConfiguration:] */

void FUN_106e620c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106e62198;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 106e62198; end: 106e62253;  */

void FUN_106e62198(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x10);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = lVar1 + 0x20;
      _objc_loadWeakRetained(lVar2);
      func_0x00010bf23680(uVar3,param_2,lVar2,*(undefined8 *)(param_1 + 0x20),lVar1,1,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 0x10),param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e62254; end: 106e6229b; -[SCComposerCameraPresenter dismissCameraScope:] */

void FUN_106e62254(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106e6229c; end: 106e622b3; -[SCComposerCameraPresenter presentingViewController] */

void FUN_106e6229c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e622b4; end: 106e622bf; -[SCComposerCameraPresenter setPresentingViewController:] */

void FUN_106e622b4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106e622c0; end: 106e622f7; -[SCComposerCameraPresenter .cxx_destruct] */

void FUN_106e622c0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e622f8; end: 106e62377;  */

void FUN_106e622f8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1010;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c02ec80();
  func_0x00010c1eb080();
  _objc_release(param_1);
  func_0x00010c1d86a0(puVar1);
  func_0x00010c1eb2c0(puVar1);
  func_0x00010c1eb220(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106e62378; end: 106e623fb; -[SCLensSearchEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e62378(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7470;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(double *)((long)puVar1 + (long)_DAT_11275fc48) = param_1 * 1000.0;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e623fc; end: 106e6257b; -[SCLensSearchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e623fc(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1 + _DAT_11275fc4c;
  _objc_loadWeakRetained(lVar1);
  lVar11 = (long)_DAT_11275fc50;
  lVar2 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be18020(param_1);
  lVar5 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar11;
  _objc_loadWeakRetained(lVar7);
  lVar8 = lVar7;
  func_0x00010c095c00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar11;
  _objc_loadWeakRetained();
  lVar9 = lVar11;
  func_0x00010c08b5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar1;
  func_0x00010bf23d60(*(undefined8 *)(param_1 + _DAT_11275fc48),lVar1,param_2,lVar3,lVar4,lVar6,0,
                      lVar8,0,lVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11275fc54),param_2,lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar10);
  return;
}



/* Entry: 106e6257c; end: 106e625c7; -[SCLensSearchEntryPoint _flavorContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106e6257c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  param_1 = param_1 + _DAT_11275fc50;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c154600();
  _objc_release(param_1);
  uVar2 = 0xc;
  if (lVar1 != 0) {
    uVar2 = 0x10;
  }
  return uVar2;
}



/* Entry: 106e625c8; end: 106e6260f; -[SCLensSearchEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e625c8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275fc54,0);
  _objc_destroyWeak(param_1 + _DAT_11275fc4c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fc50);
  return;
}



/* Entry: 106e62610; end: 106e62693; -[SCMapSearchEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e62610(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7478;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(double *)((long)puVar1 + (long)_DAT_11275fc58) = param_1 * 1000.0;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e62694; end: 106e627d7; -[SCMapSearchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e62694(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1 + _DAT_11275fc5c;
  _objc_loadWeakRetained(lVar1);
  lVar9 = (long)_DAT_11275fc60;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be18020(param_1);
  lVar5 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010c0b8e20();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf23d60(*(undefined8 *)(param_1 + _DAT_11275fc58),lVar1,param_2,lVar3,lVar4,lVar6,
                      lVar7,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11275fc64),param_2,lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 106e627d8; end: 106e6281f; -[SCMapSearchEntryPoint _flavorContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106e627d8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  param_1 = param_1 + _DAT_11275fc60;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0ccca0();
  _objc_release(param_1);
  uVar2 = 4;
  if (lVar1 != 0) {
    uVar2 = 5;
  }
  return uVar2;
}



/* Entry: 106e62820; end: 106e62867; -[SCMapSearchEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e62820(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275fc64,0);
  _objc_destroyWeak(param_1 + _DAT_11275fc5c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fc60);
  return;
}



/* Entry: 106e62868; end: 106e628eb; -[SCSearchEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e62868(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7480;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(double *)((long)puVar1 + (long)_DAT_11275fc68) = param_1 * 1000.0;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e628ec; end: 106e62a2f; -[SCSearchEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e628ec(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1 + _DAT_11275fc6c;
  _objc_loadWeakRetained(lVar1);
  lVar9 = (long)_DAT_11275fc70;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010be18020(param_1);
  lVar5 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c2bd480();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar9);
  lVar7 = lVar9;
  func_0x00010c064240();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar1;
  func_0x00010bf23d60(*(undefined8 *)(param_1 + _DAT_11275fc68),lVar1,param_2,lVar3,lVar4,lVar6,0,0,
                      lVar7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11275fc74),param_2,lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 106e62a30; end: 106e62a87; -[SCSearchEntryPoint _flavorContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_106e62a30(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1 + _DAT_11275fc70;
  _objc_loadWeakRetained();
  uVar3 = uVar2;
  func_0x00010c0ccca0();
  _objc_release(uVar2);
  if (uVar3 < 0xe) {
    uVar1 = *(undefined4 *)(&UNK_10ddf0068 + uVar3 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 106e62a88; end: 106e62acf; -[SCSearchEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e62a88(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275fc74,0);
  _objc_destroyWeak(param_1 + _DAT_11275fc6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fc70);
  return;
}



/* Entry: 106e62ad0; end: 106e62b53; -[SCSearchSuggestionsEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e62ad0(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f7488;
  uStack_30 = param_2;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    *(double *)((long)puVar1 + (long)_DAT_11275fc78) = param_1 * 1000.0;
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e62b54; end: 106e62c23; -[SCSearchSuggestionsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e62b54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1 + _DAT_11275fc7c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + _DAT_11275fc80;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf23d60(*(undefined8 *)(param_1 + _DAT_11275fc78),lVar1,param_2,lVar3,6,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11275fc84),param_2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 106e62c24; end: 106e62c6b; -[SCSearchSuggestionsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e62c24(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275fc84,0);
  _objc_destroyWeak(param_1 + _DAT_11275fc7c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275fc80);
  return;
}



/* Entry: 106e62c6c; end: 106e62dbf; -[SCSearchBaseScope initWithUIContainer:flavorContext:delegate:mapDestinationSubject:lensPickerDelegate:initialQuery:lensSearchLaunchConfig:presentationTimeMs:] */

undefined1 *
FUN_106e62c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f7490;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_8);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x40) = param_1;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e62dc0; end: 106e62dc7; -[SCSearchBaseScope uiContainer] */

undefined8 FUN_106e62dc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e62dc8; end: 106e62dcf; -[SCSearchBaseScope flavorContext] */

undefined4 FUN_106e62dc8(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 106e62dd0; end: 106e62de7; -[SCSearchBaseScope workflowDelegate] */

void FUN_106e62dd0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e62de8; end: 106e62dff; -[SCSearchBaseScope mapDestinationSubject] */

void FUN_106e62de8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e62e00; end: 106e62e17; -[SCSearchBaseScope lensPickerDelegate] */

void FUN_106e62e00(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e62e18; end: 106e62e1f; -[SCSearchBaseScope initialQuery] */

undefined8 FUN_106e62e18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e62e20; end: 106e62e27; -[SCSearchBaseScope lensSearchLaunchConfig] */

undefined8 FUN_106e62e20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e62e28; end: 106e62e2f; -[SCSearchBaseScope presentationTimeMs] */

undefined8 FUN_106e62e28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e62e30; end: 106e62e83; -[SCSearchBaseScope .cxx_destruct] */

void FUN_106e62e30(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e62e84; end: 106e62f77; -[SCLensSearchScope initWithUIContainer:delegate:lensPickerDelegate:searchType:launchConfig:] */

undefined1 *
FUN_106e62e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f7498;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e62f78; end: 106e62f7f; -[SCLensSearchScope uiContainer] */

undefined8 FUN_106e62f78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e62f80; end: 106e62f97; -[SCLensSearchScope workflowDelegate] */

void FUN_106e62f80(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e62f98; end: 106e62faf; -[SCLensSearchScope lensPickerDelegate] */

void FUN_106e62f98(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106e62fb0; end: 106e62fb7; -[SCLensSearchScope searchType] */

undefined8 FUN_106e62fb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e62fb8; end: 106e62fbf; -[SCLensSearchScope launchConfig] */

undefined8 FUN_106e62fb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e62fc0; end: 106e62fff; -[SCLensSearchScope .cxx_destruct] */

void FUN_106e62fc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e63000; end: 106e630cb; -[SCLensSearchLaunchConfig initWithDisableScreenInsetPadding:useTransparentBackground:preselectedLensId:themeTypeOverride:lensInfoCardEnabled:] */

undefined1 *
FUN_106e63000(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f74a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106e630cc; end: 106e630ef; -[SCLensSearchLaunchConfig copyWithZone:] */

undefined8 FUN_106e630cc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


