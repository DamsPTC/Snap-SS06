/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067bb6cc; end: 1067bb6d3; -[SCBirthdayPageHandler dismissCameraScope:] */

void FUN_1067bb6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 1067bb6d4; end: 1067bb6d7; -[SCBirthdayPageHandler captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_1067bb6d4(void)

{
  return;
}



/* Entry: 1067bb6d8; end: 1067bb6df; -[SCBirthdayPageHandler friendProfileDidDismiss:] */

void FUN_1067bb6d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf94c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_endLaunchedFeatureWithScope__1125c2cc8);
  return;
}



/* Entry: 1067bb6e0; end: 1067bb74b; -[SCBirthdayPageHandler .cxx_destruct] */

void FUN_1067bb6e0(long param_1)

{
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



/* Entry: 1067bb74c; end: 1067bb757; -[SCBirthdayPageProvider pushToValdiMarshaller:] */

undefined8 FUN_1067bb74c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b0472c8(param_3,param_1);
  func_0x00010b0472c0();
  func_0x00010b04728c();
  func_0x00010b04729c();
  return param_3;
}



/* Entry: 1067bb758; end: 1067bb75f; -[SCBirthdayPageProvider friendStore] */

undefined8 FUN_1067bb758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067bb760; end: 1067bb78f; -[SCBirthdayPageProvider setFriendStore:] */

void FUN_1067bb760(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067bb790; end: 1067bb797; -[SCBirthdayPageProvider userInfoProvider] */

undefined8 FUN_1067bb790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067bb798; end: 1067bb7c7; -[SCBirthdayPageProvider setUserInfoProvider:] */

void FUN_1067bb798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067bb7c8; end: 1067bb7cf; -[SCBirthdayPageProvider friendmojiProvider] */

undefined8 FUN_1067bb7c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067bb7d0; end: 1067bb7ff; -[SCBirthdayPageProvider setFriendmojiProvider:] */

void FUN_1067bb7d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067bb800; end: 1067bb807; -[SCBirthdayPageProvider blizzardLogger] */

undefined8 FUN_1067bb800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067bb808; end: 1067bb837; -[SCBirthdayPageProvider setBlizzardLogger:] */

void FUN_1067bb808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067bb838; end: 1067bb83f; -[SCBirthdayPageProvider cofStore] */

undefined8 FUN_1067bb838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067bb840; end: 1067bb86f; -[SCBirthdayPageProvider setCofStore:] */

void FUN_1067bb840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067bb870; end: 1067bb8c3; -[SCBirthdayPageProvider .cxx_destruct] */

void FUN_1067bb870(long param_1)

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



/* Entry: 1067bb8c4; end: 1067bb8db; +[SCMyProfileBirthdayPageABHelper isBirthdayPageEnabledForMyProfilePage:] */

void FUN_1067bb8c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e5f4f8,0,0);
  return;
}



/* Entry: 1067bb8dc; end: 1067bb90f; -[SCActivityCenterFullscreenContainerViewController initWithValdiView:] */

void FUN_1067bb8dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3268;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithValdiView__1125f5a88);
  return;
}



/* Entry: 1067bb910; end: 1067bb917; -[SCActivityCenterFullscreenContainerViewController modalPresentationStyle] */

undefined8 FUN_1067bb910(void)

{
  return 0;
}



/* Entry: 1067bb918; end: 1067bb91f; -[SCActivityCenterFullscreenContainerViewController prefersStatusBarHidden] */

undefined8 FUN_1067bb918(void)

{
  return 1;
}



/* Entry: 1067bb920; end: 1067bb97f; -[SCActivityCenterFullscreenNavigator initWithRuntime:] */

undefined1 * FUN_1067bb920(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithRuntime__1125edce0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126ce070);
    func_0x00010c181960(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067bb980; end: 1067bb993; -[SCActivityCenterFullscreenNavigator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067bb980(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750594,0);
  return;
}



/* Entry: 1067bb994; end: 1067bb9ab; +[SCCountdownsProfileBadgingABHelpers isProfileBadgingEnabled:] */

void FUN_1067bb994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e5f518,0,0);
  return;
}



/* Entry: 1067bb9ac; end: 1067bb9f7; -[SCPreferences setProfileIconCountdownsBadgingHasBeenShown:] */

void FUN_1067bb9ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e5f538);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067bb9f8; end: 1067bba3b; -[SCPreferences profileIconCountdownsBadgingHasBeenShown] */

undefined8 FUN_1067bb9f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e5f538);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1067bba3c; end: 1067bba87; -[SCPreferences setCountdownCellIconBadgingHasBeenShown:] */

void FUN_1067bba3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(param_1,param_2,puVar1,&PTR____CFConstantStringClassReference_110e5f558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067bba88; end: 1067bbacb; -[SCPreferences countdownCellIconBadgingHasBeenShown] */

undefined8 FUN_1067bba88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110e5f558);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1f3c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1067bbacc; end: 1067bbb6b; +[SCTopViewControllerNavigationHelper findTopViewController:] */

void FUN_1067bbacc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  while (lVar2 != 0) {
    lVar3 = lVar1;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar1 = lVar3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067bbb6c; end: 1067bbceb; +[SCTopViewControllerNavigationHelper modalContainerFromNavigationDelegate:animated:] */

void FUN_1067bbb6c(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a5618);
  puVar1 = param_3;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  puVar2 = puVar1;
  _objc_opt_respondsToSelector(puVar1,PTR_s_visibleViewController_112685a88);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = puVar1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    while (puVar5 = PTR_PTR_1126aead8, puVar3 != (undefined *)0x0) {
      puVar5 = puVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c06d1a0();
      _objc_release(puVar5);
      _objc_release(puVar3);
      puVar5 = PTR_PTR_1126aead8;
      if (((ulong)puVar4 & 1) != 0) break;
      puVar5 = puVar2;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar3 = puVar5;
      func_0x00010c10f940();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
    }
    PTR_PTR_1126aead8 = puVar5;
    if (puVar2 != (undefined *)0x0) {
      _objc_alloc(puVar5);
      func_0x00010c038f40();
      _objc_release(puVar2);
      goto LAB_1067bbcc0;
    }
  }
  puVar2 = puVar1;
  _objc_opt_respondsToSelector(puVar1,PTR_s_modalContainer__112611880);
  if (((ulong)puVar2 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar1;
    func_0x00010c0cf9a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1067bbcc0:
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067bbcec; end: 1067bbd07; -[SCBillboardSignalDependencyServiceProvider provide] */

void FUN_1067bbcec(void)

{
  _objc_opt_new(PTR_PTR_1126ce078);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067bbd08; end: 1067bbd3f; -[SCBillboardSignalDependencyServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067bbd08(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275059c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750598);
  return;
}



/* Entry: 1067bbd40; end: 1067bbda3; -[SCDefaultInAppNotificationParamProvider init] */

undefined1 * FUN_1067bbd40(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ce080;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067bbda4; end: 1067bbdbf; -[SCDefaultInAppNotificationParamProvider shouldUseComposerPresenter:] */

uint FUN_1067bbda4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0x2c) & (uint)(0xc8000000106 >> (param_3 & 0x3f));
}



/* Entry: 1067bbdc0; end: 1067bbdc7; -[SCDefaultInAppNotificationParamProvider displayDurationSecs:] */

void FUN_1067bbdc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf856b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_displayDurationSecsFor__1125bef50);
  return;
}



/* Entry: 1067bbdc8; end: 1067bbdd3; -[SCDefaultInAppNotificationParamProvider .cxx_destruct] */

void FUN_1067bbdc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067bbdd4; end: 1067bc1cf; -[SCDefaultInAppNotificationPresentingPlugin initWithNotificationPool:bitmojiSelfieFetcher:bitmojiSelfieProvider:bitmojiAvatarProvider:snapchattersDataFetcher:groupsDataFetcher:grapheneRegistry:notificationEmitter:userId:asyncQueueProvider:imageFetchingService:composerRuntimeProvider:paramProvider:] */

undefined8 *
FUN_1067bbdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  puStack_80 = PTR_PTR_1126f3280;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[3];
    puVar1[3] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[4];
    puVar1[4] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar4 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_15;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1067bc1d0;
    puStack_a8 = &UNK_11093c6d0;
    _objc_copyWeak(auStack_98,auStack_90);
    _objc_retain(param_11);
    uStack_a0 = param_11;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_c8,auStack_90);
    _objc_retain(param_12);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_12);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
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



/* Entry: 1067bc1d0; end: 1067bc22b;  */

void FUN_1067bc1d0(long param_1)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126cbc48;
    _objc_alloc(PTR_PTR_1126cbc48);
    func_0x00010bff8260();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067bc22c; end: 1067bc2a7;  */

void FUN_1067bc22c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11e0e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1067bc2a8; end: 1067bc2af; -[SCDefaultInAppNotificationPresentingPlugin presentInAppNotification:delegate:] */

undefined8 FUN_1067bc2a8(void)

{
  return 0;
}



/* Entry: 1067bc2b0; end: 1067bc5e7; -[SCDefaultInAppNotificationPresentingPlugin presentInAppNotificationAsync:delegate:] */

void FUN_1067bc2b0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    uVar6 = 0;
    func_0x00010c11c460(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be901c0(param_1);
    _objc_release(uVar6);
    goto LAB_1067bc574;
  }
  _objc_initWeak(auStack_80,param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1067bc5e8;
  puStack_98 = &UNK_110841fb0;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  ppuVar2 = &puStack_b0;
  lStack_90 = param_3;
  _objc_retainBlock();
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1067bc61c;
  puStack_c8 = &UNK_1108510e8;
  _objc_copyWeak(auStack_b8,auStack_80);
  _objc_retain(param_3);
  ppuVar3 = &puStack_e0;
  lStack_c0 = param_3;
  _objc_retainBlock();
  lVar4 = param_3;
  func_0x00010bfeb000();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c08fa60();
  _objc_release(lVar4);
  if (lVar5 == 0) {
    lVar4 = param_3;
    func_0x00010c22f3c0();
    if ((int)lVar4 == 0) {
      lVar4 = param_3;
      func_0x00010bfeafc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be174e0(param_1);
      goto LAB_1067bc520;
    }
    _objc_initWeak(auStack_e8,param_1);
    _objc_copyWeak(auStack_f0,auStack_e8);
    _objc_retain(param_3);
    _objc_retain(ppuVar2);
    _objc_retain(ppuVar3);
    func_0x00010bdf1de0(param_1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_e8);
  }
  else {
    lVar5 = param_3;
    func_0x00010bfeb000(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010be373a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010be17160(param_1);
LAB_1067bc520:
    _objc_release(lVar4);
  }
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = param_3;
  _objc_release(uVar6);
  _objc_release(ppuVar3);
  _objc_release(lStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(ppuVar2);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
LAB_1067bc574:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067bc5e8; end: 1067bc65f;  */

void FUN_1067bc5e8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd09e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067bc660; end: 1067bc763;  */

void FUN_1067bc660(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1067bc764;
  puStack_60 = &UNK_110861a58;
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = param_2;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar2;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_78);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 1067bc764; end: 1067bc7cf;  */

void FUN_1067bc764(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfeafc0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be174e0(lVar2,param_2,uVar1,uVar3,*(undefined8 *)(param_1 + 0x28),1,
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1067bc7d0; end: 1067bc81b; -[SCDefaultInAppNotificationPresentingPlugin dismissInAppNotification] */

void FUN_1067bc7d0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      uVar1 = 0;
    }
    else {
      func_0x00010bf84200();
      uVar1 = *(undefined8 *)(param_1 + 8);
    }
    *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1067bc81c; end: 1067bc823; -[SCDefaultInAppNotificationPresentingPlugin shouldHandleAppNotification:] */

undefined8 FUN_1067bc81c(void)

{
  return 0;
}



/* Entry: 1067bc824; end: 1067bcb93; -[SCDefaultInAppNotificationPresentingPlugin _createPresenterWithBitmojiFetch:callbackBlock:] */

void FUN_1067bc824(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_78,param_1);
  lVar2 = param_3;
  func_0x00010bf1aa20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar3 == 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1067bcb94;
    puStack_a0 = &UNK_11093c760;
    puVar8 = auStack_88;
    _objc_copyWeak(puVar8,auStack_78);
    uStack_80 = param_2;
    _objc_retain(lVar2);
    lStack_98 = lVar2;
    _objc_retain(param_4);
    ppuVar6 = &puStack_b8;
    lStack_90 = param_4;
    _objc_retainBlock();
    lVar3 = lVar2;
    func_0x00010c0720c0();
    if ((int)lVar3 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_1067bccb0;
      puStack_c8 = &UNK_11086d228;
      ppuStack_c0 = ppuVar6;
      func_0x00010c2448c0(uVar4);
      _objc_release(uVar7);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      uVar7 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      (*(code *)ppuVar6[2])(ppuVar6,uVar4,uVar5,0);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(ppuVar6);
    _objc_release(lStack_90);
    lVar3 = lStack_98;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfce860(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = auStack_f0;
    _objc_copyWeak(puVar8,auStack_78);
    uStack_e8 = param_2;
    _objc_retain(param_4);
    _objc_retain(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc6120(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(lVar3);
    _objc_release(uVar4);
    _objc_release(lVar2);
    lVar3 = param_4;
  }
  _objc_release(lVar3);
  _objc_destroyWeak(puVar8);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067bcb94; end: 1067bcca3;  */

void FUN_1067bcb94(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    if (((param_3 == 0) || (param_2 == 0)) || (param_4 != 0)) {
      lVar1 = *(long *)(param_1 + 0x28);
      lVar3 = lVar2;
      func_0x00010be229a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    }
    else {
      lVar3 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar3);
      func_0x00010be1d420(lVar2);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1067bcca4; end: 1067bccaf;  */

void FUN_1067bcca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067bccac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1067bccb0; end: 1067bcec3;  */

void FUN_1067bccb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1acc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bf1c0a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(lVar5,uVar2,uVar4,param_3);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067bcec4; end: 1067bcecf;  */

void FUN_1067bcec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067bcecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1067bced0; end: 1067bd16f; -[SCDefaultInAppNotificationPresentingPlugin _getBitmojiForUserId:withBitmojiAvatarId:andBitmojiSelfieId:completion:] */

void FUN_1067bced0(undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126afd38;
      _objc_opt_new();
      func_0x00010c2bc360();
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2a8ea0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b8160(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2b78c0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c2bcea0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_initWeak(auStack_80,param_1);
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_1067bd170;
      puStack_b0 = &UNK_11093c7c0;
      _objc_copyWeak(auStack_90,auStack_80);
      puStack_a8 = param_1;
      uStack_88 = param_2;
      _objc_retain(param_6);
      lStack_98 = param_6;
      _objc_retain(param_3);
      ppuVar3 = &puStack_c8;
      uStack_a0 = param_3;
      _objc_retainBlock();
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar2);
      _objc_retain(ppuVar3);
      func_0x00010c0f7fc0(uVar4);
      _objc_release(uVar4);
      _objc_release(ppuVar3);
      _objc_release(puVar2);
      _objc_release(ppuVar3);
      _objc_release(uStack_a0);
      _objc_release(lStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_80);
      param_1 = puVar2;
      goto LAB_1067bd108;
    }
  }
  func_0x00010be229a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_6 + 0x10))(param_6,param_1);
LAB_1067bd108:
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067bd170; end: 1067bd287;  */

void FUN_1067bd170(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (param_2 == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010be229a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
      _objc_release(uVar2);
    }
    else {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067bd288; end: 1067bd33f; -[SCDefaultInAppNotificationPresentingPlugin _reportSIGNotificationNotSubmitted:] */

void FUN_1067bd288(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_3);
  func_0x00010c23b860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067bd340; end: 1067bd467; -[SCDefaultInAppNotificationPresentingPlugin _reportSIGNotificationSubmitted:notification:] */

void FUN_1067bd340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b7a20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c23b900(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ce088;
  func_0x00010bf75500(PTR_PTR_1126ce088,param_2,param_4,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c11ad40(uVar4,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067bd468; end: 1067bd4db; -[SCDefaultInAppNotificationPresentingPlugin _getSilouetteImage:] */

void FUN_1067bd468(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  func_0x000108ffe710();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = 1;
  func_0x000108ffef38(1,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067bd4dc; end: 1067bd5f3; -[SCDefaultInAppNotificationPresentingPlugin _finishWithConcreteImage:rightImage:notification:scaleImage:actionHandler:dismissReasonHandler:] */

void FUN_1067bd4dc(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  _objc_retain(param_3);
  uVar1 = param_5;
  func_0x00010c11c420(param_5);
  func_0x00010c235260(uVar3,param_2,uVar1);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010be17160(param_1,param_2,puVar2,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    func_0x00010be17100(param_1,param_2,param_3,param_4,param_5,param_7);
    puVar2 = param_3;
  }
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067bd5f4; end: 1067bd897; -[SCDefaultInAppNotificationPresentingPlugin _finishPresentingSIGNotification:rightImage:notification:scaleImage:actionHandler:dismissReasonHandler:] */

void FUN_1067bd5f4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126c3378;
  if (param_7 == 0) {
    func_0x00010bfe56a0(PTR_PTR_1126c3378,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c088060();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c23d0a0(param_5);
  dVar9 = 48.0;
  if (param_1 <= 48.0) {
    func_0x00010c23d0a0(param_5);
    param_1 = 48.0;
    if (dVar9 <= 48.0) {
      puVar2 = PTR_PTR_1126b15a0;
      func_0x00010bf255e0(PTR_PTR_1126b15a0,param_3,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1067bd708;
    }
  }
  puVar2 = PTR_PTR_1126b15a0;
  func_0x00010bf25620(PTR_PTR_1126b15a0,param_3,param_5,1);
  _objc_retainAutoreleasedReturnValue();
LAB_1067bd708:
  puVar6 = PTR_PTR_1126b0ae0;
  uVar7 = param_6;
  func_0x00010bfeb320(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_6;
  func_0x00010bfeb340(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010bfeb2a0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf85680(*(undefined8 *)(param_2 + 0x78),param_3,param_6);
  uVar5 = param_6;
  func_0x00010bfeb320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57e20(param_1,puVar6,param_3,puVar1,uVar7,0x14,uVar3,uVar4,6,param_8,puVar2,param_8,
                      0,param_9,1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  *(undefined **)(param_2 + 0x10) = puVar6;
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar7);
  uVar7 = param_6;
  func_0x00010c11c460(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be901e0(param_2,param_3,uVar7,param_6);
  _objc_release(uVar7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067bd898; end: 1067bdb1f; -[SCDefaultInAppNotificationPresentingPlugin _finishPresentingComposerNotification:rightImage:notification:actionHandler:] */

void FUN_1067bd898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 0x80);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126ce090;
    _objc_alloc();
    uVar7 = param_5;
    func_0x00010bfeb320(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03a0a0(0,puVar4,param_2,uVar7,lVar3);
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010bfeb2a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155140(puVar4,param_2,uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    lVar5 = param_1;
    func_0x00010bec5ba0(param_1,param_2,param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25e860(puVar4,param_2,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = param_1;
    _objc_opt_class();
    iVar1 = (int)lVar5;
    func_0x00010be44e00();
    uVar7 = 0;
    if (iVar1 == 0) {
      uVar7 = param_4;
    }
    func_0x00010c260f00(puVar4,param_2,uVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = param_1;
    _objc_opt_class(param_1);
    uVar2 = (uint)lVar5;
    func_0x00010be44e00();
    func_0x00010bf8eb00(puVar4,param_2,uVar2 ^ 1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf13200(puVar4,param_2,param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar5 = param_1;
    _objc_opt_class(param_1);
    func_0x00010be44e00();
    func_0x00010bf02c40(puVar4,param_2,lVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010beee480(puVar4,param_2,param_6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c264f00(puVar4,param_2,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf85680(*(undefined8 *)(param_1 + 0x78),param_2,param_5);
    func_0x00010c10f400(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = puVar6;
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25f340();
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010c11c460(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be901e0(param_1,param_2,uVar7,param_5);
    _objc_release(uVar7);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067bdb20; end: 1067bdbfb; -[SCDefaultInAppNotificationPresentingPlugin _subTitleColorNumber:] */

void FUN_1067bdb20(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_opt_class();
  func_0x00010be44e00();
  if ((param_1 & 1) == 0) {
    lVar1 = param_3;
    func_0x00010bf412a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    if (lVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf415c0(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (puVar3 == (undefined *)0x0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar4 = puVar3;
        func_0x00010bf09c20(puVar3);
        func_0x00010c0df720((double)(int)puVar4,puVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar3);
    }
    _objc_release(lVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067bdbfc; end: 1067bdc53; +[SCDefaultInAppNotificationPresentingPlugin _isTyping:] */

bool FUN_1067bdbfc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c11c420();
  if (lVar2 == 1) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010c11c420(param_3);
    bVar1 = lVar2 == 0x2a;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1067bdc54; end: 1067bde9f; -[SCDefaultInAppNotificationPresentingPlugin _imageFutureForUrl:] */

void FUN_1067bdc54(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar8 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR_PTR_1126b08b0;
    func_0x00010bf33760(PTR_PTR_1126b08b0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b17d8;
    _objc_alloc(PTR_PTR_1126b17d8);
    func_0x00010c003a80();
    func_0x00010c1c5440();
    puVar4 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    lVar1 = param_1;
    _objc_opt_class(param_1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar4,param_2,lVar1,0x22);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126b85a0;
    puVar8 = puVar3;
    func_0x00010bf220e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23c900(puVar5,param_2,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar6 = PTR_PTR_1126b85a8;
    _objc_alloc(PTR_PTR_1126b85a8);
    puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c01cf00(puVar6,param_2,puVar5,puVar4);
    _objc_release(puVar8);
    puVar7 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1067bdea0;
    puStack_60 = &UNK_110849f28;
    puStack_58 = puVar7;
    _objc_retain();
    func_0x00010bfa7900(uVar9,param_2,puVar6,&puStack_78);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bfbc3e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puStack_58);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1067bdea0; end: 1067bdf5b;  */

void FUN_1067bdea0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1067bdf5c; end: 1067bdf9b;  */

void FUN_1067bdf5c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067bdf9c; end: 1067bdfa7;  */

void FUN_1067bdf9c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeWithError__1125ae8d0,param_2);
  return;
}



/* Entry: 1067bdfa8; end: 1067be07f; -[SCDefaultInAppNotificationPresentingPlugin .cxx_destruct] */

void FUN_1067bdfa8(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067be080; end: 1067be14b; -[SCInAppNotificationPlugInCollector initWithPlugins:defaultPlugin:paramProvider:] */

undefined1 *
FUN_1067be080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3288;
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



/* Entry: 1067be14c; end: 1067be243; -[SCInAppNotificationPlugInCollector _SCIsReadyForDefaultSIGPlugin:] */

undefined8 FUN_1067be14c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11c420();
  if ((uVar1 == 1) || (uVar1 = param_3, func_0x00010c11c420(), uVar1 == 0x2a)) {
    uVar2 = *(ulong *)(param_1 + 0x18);
    uVar1 = param_3;
    func_0x00010c11c420(param_3);
    func_0x00010c235260(uVar2,param_2,uVar1);
    if ((uVar2 & 1) == 0) goto LAB_1067be1ac;
  }
  else {
LAB_1067be1ac:
    uVar1 = param_3;
    func_0x00010c11c420();
    uVar3 = 0;
    if ((long)uVar1 < 0x72) {
      if ((uVar1 - 0x3d < 0xf) || ((uVar1 < 0x2b && ((1L << (uVar1 & 0x3f) & 0x40000000082U) != 0)))
         ) goto LAB_1067be208;
    }
    else if (((uVar1 - 0x72 < 0x38) && ((1L << (uVar1 - 0x72 & 0x3f) & 0x960e021a7f8007U) != 0)) ||
            (uVar1 - 0xc0 < 4)) goto LAB_1067be208;
  }
  uVar3 = 1;
LAB_1067be208:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1067be244; end: 1067be39b; -[SCInAppNotificationPlugInCollector pluginForNotification:] */

void FUN_1067be244(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar3 == 0) {
      _objc_release(lVar5);
      lVar3 = param_1;
      func_0x00010bdc3a60();
      if ((int)lVar3 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(ulong *)(param_1 + 0x10);
        _objc_retain(uVar6);
      }
LAB_1067be358:
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
        return;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar5 = *(long *)(param_3 + 8);
      _objc_retain(lVar5);
      lVar3 = lVar5;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar7 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar5);
          }
          func_0x00010bf83b60(*(undefined8 *)(lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar5;
        func_0x00010bf52a60();
      }
      _objc_release(lVar5);
      lVar3 = *(long *)(param_3 + 0x10);
      func_0x00010bf83b60(lVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      _objc_storeStrong(lVar3 + 0x18,0);
      _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
      return;
    }
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar6 = *(ulong *)(lVar7 * 8);
      uVar2 = uVar6;
      func_0x00010c2309e0();
      if ((uVar2 & 1) != 0) {
        _objc_retain(uVar6);
        _objc_release(lVar5);
        goto LAB_1067be358;
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1067be39c; end: 1067be497; -[SCInAppNotificationPlugInCollector dismissPluginsInAppNotification] */

void FUN_1067be39c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bf83b60(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010bf83b60(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar2 + 0x18,0);
  _objc_storeStrong(lVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar2 + 8,0);
  return;
}



/* Entry: 1067be498; end: 1067be513; -[SCInAppNotificationPlugInCollector .cxx_destruct] */

void FUN_1067be498(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067be514; end: 1067be8b7; -[SCNotificationCustomUIEntryPoint _pluginCollector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067be514(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
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
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  
  puVar1 = PTR_PTR_1126ce0a0;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126ce0a8;
  _objc_alloc();
  lVar3 = param_1 + _DAT_1127505f0;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = (long)_DAT_1127505f4;
  lVar5 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c15ada0();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + lVar29;
  _objc_loadWeakRetained();
  lVar7 = lVar29;
  func_0x00010c15afc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_1127505f8;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_1127505fc;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112750600;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112750604;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112750608;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c0dbfc0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11275060c;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_112750610;
  _objc_loadWeakRetained();
  lVar22 = lVar21;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112750614;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010bfe7760();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = param_1 + _DAT_112750618;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c030040(puVar2,param_2,lVar4,lVar6,lVar7,lVar9,lVar11,lVar13,lVar15,lVar17,lVar20,
                      lVar22,lVar24,lVar26,puVar1);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
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
  _objc_release(lVar29);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar27 = PTR__OBJC_CLASS___NSSet_1126ae870;
  param_1 = param_1 + _DAT_11275061c;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf22660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar27,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(param_1);
  puVar28 = PTR_PTR_1126ce0b0;
  _objc_alloc(PTR_PTR_1126ce0b0);
  func_0x00010c0376a0();
  _objc_release(puVar27);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar28);
  return;
}



/* Entry: 1067be8b8; end: 1067be983; -[SCNotificationCustomUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067be8b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750624,0);
  _objc_destroyWeak(param_1 + _DAT_112750614);
  _objc_destroyWeak(param_1 + _DAT_112750618);
  _objc_destroyWeak(param_1 + _DAT_112750608);
  _objc_destroyWeak(param_1 + _DAT_112750610);
  _objc_destroyWeak(param_1 + _DAT_112750604);
  _objc_destroyWeak(param_1 + _DAT_112750600);
  _objc_destroyWeak(param_1 + _DAT_1127505fc);
  _objc_destroyWeak(param_1 + _DAT_1127505f8);
  _objc_destroyWeak(param_1 + _DAT_1127505f4);
  _objc_destroyWeak(param_1 + _DAT_1127505f0);
  _objc_destroyWeak(param_1 + _DAT_11275060c);
  _objc_destroyWeak(param_1 + _DAT_11275061c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750620);
  return;
}



/* Entry: 1067be984; end: 1067bea8f; -[SCExtensionBitmojiAvatarImageGenerator initWithBitmojiSelfieFetcher:currentUserId:] */

undefined1 *
FUN_1067be984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f3290;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067bea90; end: 1067beed3; -[SCExtensionBitmojiAvatarImageGenerator generateGroupBitmojiAvatarImageForGroup:scale:completionQueue:completion:] */

void FUN_1067bea90(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_5 != 0) && (param_3 != 0)) && (param_6 != 0)) {
    uVar1 = param_3;
    func_0x000108ef2144(param_3,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar1;
    func_0x00010bf529e0();
    uVar2 = uVar1;
    if (3 < uVar9) {
      func_0x00010c25e980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    uVar1 = uVar2;
    func_0x00010bf529e0();
    if (uVar1 == 0) {
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_1067beed4;
      puStack_110 = &UNK_110849530;
      _objc_retain(param_6);
      lStack_108 = param_6;
      func_0x00010007380c(param_5,&puStack_128);
      _objc_release(lStack_108);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puVar4 = puVar3;
    _dispatch_group_create();
    _objc_initWeak(auStack_130,param_1);
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    lStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    plStack_160 = (long *)0x0;
    _objc_retain(uVar2);
    uVar1 = uVar2;
    func_0x00010bf52a60();
    if (uVar1 != 0) {
      lVar10 = *plStack_160;
      do {
        uVar9 = 0;
        do {
          if (*plStack_160 != lVar10) {
            _objc_enumerationMutation(uVar2);
          }
          uVar8 = *(undefined8 *)(lStack_168 + uVar9 * 8);
          _dispatch_group_enter(puVar4);
          uVar7 = uVar8;
          func_0x00010c2923e0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar8;
          func_0x00010bf1acc0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(&PTR____CFConstantStringClassReference_110dd70d8);
          uVar6 = uVar8;
          func_0x00010bf40c40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_1a8 = 0xc2000000;
          pcStack_1a0 = FUN_1067beee4;
          puStack_198 = &UNK_11093c820;
          _objc_copyWeak(auStack_178,auStack_130);
          _objc_retain(puVar3);
          puStack_190 = puVar3;
          uStack_188 = uVar8;
          _objc_retain(puVar4);
          puStack_180 = puVar4;
          func_0x00010be13f00(param_1);
          _objc_release(uVar6);
          _objc_release(&PTR____CFConstantStringClassReference_110dd70d8);
          _objc_release(uVar5);
          _objc_release(uVar7);
          _objc_release(puStack_180);
          _objc_release(puStack_190);
          _objc_destroyWeak(auStack_178);
          uVar9 = uVar9 + 1;
        } while (uVar1 != uVar9);
        uVar1 = uVar2;
        func_0x00010bf52a60();
      } while (uVar1 != 0);
    }
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e8 = 0xc2000000;
    pcStack_1e0 = FUN_1067bf064;
    puStack_1d8 = &UNK_1108465d0;
    uStack_1d0 = uVar2;
    puStack_1c8 = puVar3;
    _objc_retain(param_5);
    lStack_1c0 = param_5;
    _objc_retain(param_6);
    lStack_1b8 = param_6;
    _objc_retain(puVar3);
    _objc_retain(uVar2);
    func_0x000100bc0718(puVar4,uVar7,&puStack_1f0);
    _objc_release(uVar7);
    _objc_release(lStack_1b8);
    _objc_release(lStack_1c0);
    _objc_release(puStack_1c8);
    _objc_release(uStack_1d0);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_130);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_130);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x0001067beee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 1067beed4; end: 1067beee3;  */

void FUN_1067beed4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067beee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1067beee4; end: 1067befcf;  */

void FUN_1067beee4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1067befd0; end: 1067bf063;  */

void FUN_1067befd0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ce0b8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    func_0x00010c23c6a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf1c700(PTR_PTR_1126ce0b8,param_2,*(undefined8 *)(param_1 + 0x30));
    _objc_retainAutoreleasedReturnValue();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar1,param_2,puVar2,uVar3);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 1067bf064; end: 1067bf15b;  */

void FUN_1067bf064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067bf15c;
  puStack_50 = &UNK_11093c850;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uStack_48 = uVar1;
  func_0x000100504554(uVar4,&puStack_68);
  uVar5 = uVar4;
  FUN_1067bf580();
  _objc_retainAutoreleasedReturnValue();
  puStack_98 = puVar3;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1067bf1b0;
  puStack_80 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar2);
  uStack_78 = uVar5;
  uStack_70 = uVar2;
  _objc_retain(uVar5);
  func_0x00010007380c(uVar1,&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1067bf15c; end: 1067bf1af;  */

void FUN_1067bf15c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067bf1b0; end: 1067bf1bf;  */

void FUN_1067bf1b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067bf1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1067bf1c0; end: 1067bf4d7; -[SCExtensionBitmojiAvatarImageGenerator _fetchSingleUserBitmojiOrFallbackSilhouette:bitmojiAvatarId:bitmojiSelfieId:optionalColor:scale:completion:] */

void FUN_1067bf1c0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_6 == 0) {
    lVar1 = param_3;
    func_0x000108ffe710();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_6);
    lVar1 = param_6;
  }
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puVar8 = (undefined *)0x1;
    func_0x000108ffef38(1,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    (**(code **)(param_8 + 0x10))(param_8,puVar8,1);
  }
  else {
    puVar9 = PTR_PTR_1126afd38;
    func_0x00010bf1b4c0(PTR_PTR_1126afd38);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c2bc360();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2a8ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2b8160();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010c2b78c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar9);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0xffffffffffff8000;
    puVar9 = (undefined *)0x0;
    func_0x0001000819a8(0xffffffffffff8000);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    _objc_retain(lVar1);
    func_0x00010bfaa020(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(lVar1);
    _objc_release(param_8);
  }
  _objc_release(puVar8);
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  if (puVar9 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001067bf500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_3 + 0x28) + 0x10))();
    return;
  }
  uVar6 = 1;
  func_0x000108ffef38(1,*(undefined8 *)(param_3 + 0x20),0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),uVar6,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1067bf4d8; end: 1067bf543;  */

void FUN_1067bf4d8(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067bf500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,0);
    return;
  }
  uVar1 = 1;
  func_0x000108ffef38(1,*(undefined8 *)(param_1 + 0x20),0);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067bf544; end: 1067bf57f; -[SCExtensionBitmojiAvatarImageGenerator .cxx_destruct] */

void FUN_1067bf544(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067bf580; end: 1067bf64f;  */

void FUN_1067bf580(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010bf529e0();
    lVar2 = param_1;
    if (lVar1 == 3) {
      FUN_1067bf650(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1067bf634;
    }
    lVar1 = param_1;
    func_0x00010bf529e0();
    if (lVar1 == 2) {
      FUN_1067bf984(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1067bf634;
    }
    lVar1 = param_1;
    func_0x00010bf529e0();
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010bfb1920(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_1067bfbcc();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto LAB_1067bf634;
    }
  }
  lVar2 = 0;
LAB_1067bf634:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1067bf650; end: 1067bf983;  */

void FUN_1067bf650(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfb1920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1067bfd08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c089820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_1067bfd08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0dfd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  FUN_1067bfd08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  FUN_1067bfdf8();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  FUN_1067bfdf8();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar8 = uVar2;
  FUN_1067bfdf8();
  _objc_release(uVar2);
  dVar19 = 150.0;
  dVar9 = dVar19;
  dVar15 = dVar19;
  FUN_1067bfeb4(0x4062c00000000000,0x4062c00000000000,0x3fe8a3d70a3d70a4,uVar3,uVar6,0);
  dVar10 = dVar19;
  dVar16 = dVar19;
  FUN_1067bfeb4(0x4062c00000000000,0x4062c00000000000,0x3fe8a3d70a3d70a4,uVar4,uVar7,1);
  dVar17 = dVar19;
  FUN_1067bfeb4(0x4062c00000000000,0x4062c00000000000,0x3fe8a3d70a3d70a4,uVar5,uVar8,1);
  dVar11 = (150.0 - dVar15) + 9.0;
  if ((int)uVar6 == 0) {
    dVar11 = 150.0 - dVar15;
  }
  dVar12 = (150.0 - dVar16) + -7.5;
  bVar1 = (int)uVar7 == 0;
  dVar13 = dVar12 + 9.0;
  if (bVar1) {
    dVar13 = dVar12;
  }
  uVar2 = 0xc01dffffffffffff;
  if (bVar1) {
    uVar2 = 0xc036800000000000;
  }
  dVar14 = (150.0 - dVar19) + 22.5;
  dVar18 = (150.0 - dVar17) + -7.5;
  dVar20 = dVar14 + -15.0;
  dVar12 = dVar18 + 9.0;
  if ((int)uVar8 == 0) {
    dVar20 = dVar14;
    dVar12 = dVar18;
  }
  _UIGraphicsBeginImageContextWithOptions(0x4062c00000000000,0x4062c00000000000,0,0);
  func_0x00010bf89940(uVar2,dVar13,dVar10,dVar16,0x3fe3333333333333,uVar4);
  func_0x00010bf89940(dVar20,dVar12,dVar19,dVar17,0x3fe3333333333333,uVar5);
  uVar2 = uVar3;
  func_0x00010bf89920((150.0 - dVar9) * 0.5,dVar11,dVar9,dVar15,uVar3);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  uVar6 = uVar2;
  func_0x0001067bff5c(0x4062c00000000000,0x4062c00000000000,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1067bf984; end: 1067bfbcb;  */

void FUN_1067bf984(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bfb1920(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1067bfd08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c089820(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_1067bfd08();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  FUN_1067bfdf8();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar6 = uVar2;
  FUN_1067bfdf8();
  _objc_release(uVar2);
  dVar11 = 150.0;
  dVar7 = dVar11;
  dVar9 = dVar11;
  FUN_1067bfeb4(0x4062c00000000000,0x4062c00000000000,0x3febd70a3d70a3d7,uVar3,uVar5,0);
  dVar10 = dVar11;
  FUN_1067bfeb4(0x4062c00000000000,0x4062c00000000000,0x3febd70a3d70a3d7,uVar4,uVar6,1);
  dVar8 = (150.0 - dVar9) + 9.0;
  if ((int)uVar5 == 0) {
    dVar8 = 150.0 - dVar9;
  }
  bVar1 = (int)uVar6 == 0;
  dVar12 = (150.0 - dVar10) + 9.0;
  if (bVar1) {
    dVar12 = 150.0 - dVar10;
  }
  uVar2 = 0xc030800000000000;
  if (bVar1) {
    uVar2 = 0xc03f800000000000;
  }
  _UIGraphicsBeginImageContextWithOptions(0x4062c00000000000,0x4062c00000000000,0,0);
  func_0x00010bf89940(uVar2,dVar12,dVar11,dVar10,0x3fe3333333333333,uVar4);
  uVar2 = uVar3;
  func_0x00010bf89920((150.0 - dVar7) * 0.5 + 15.0,dVar8,dVar7,dVar9,uVar3);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  uVar5 = uVar2;
  func_0x0001067bff5c(0x4062c00000000000,0x4062c00000000000,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1067bfbcc; end: 1067bfd07;  */

void FUN_1067bfbcc(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain();
  uVar1 = param_3;
  FUN_1067bfd08(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_1067bfdf8();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    func_0x00010c23d0a0(uVar1);
    uVar2 = uVar1;
    func_0x0001067bff5c(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain();
    func_0x00010c23d0a0(uVar1);
    func_0x00010c23d0a0(uVar1);
    _objc_release(uVar1);
    dVar4 = (param_1 / param_2) * 138.0;
    _UIGraphicsBeginImageContextWithOptions(0x4062c00000000000,0x4062c00000000000,0,0);
    uVar3 = uVar1;
    func_0x00010bf89920((150.0 - dVar4) * 0.5,0x4035000000000000,dVar4,0x4061400000000000,uVar1);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    uVar2 = uVar3;
    func_0x0001067bff5c(0x4062c00000000000,0x4062c00000000000,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067bfd08; end: 1067bfdf7;  */

void FUN_1067bfd08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1067c0048;
  uStack_30 = 0x1067c0058;
  uStack_28 = 0;
  func_0x00010c0bcb80(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067bfdf8; end: 1067bfeb3;  */

undefined1 FUN_1067bfdf8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bcb80(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1067bfeb4; end: 1067c0047;  */

undefined1  [16]
FUN_1067bfeb4(double param_1,double param_2,double param_3,undefined8 param_4,int param_5,
             int param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if (param_5 == 0) {
    dVar1 = param_1 * 0.92 * param_3;
    dVar2 = param_2 * 0.92 * param_3;
    if (param_6 == 0) {
      dVar1 = param_1 * 0.92;
      dVar2 = param_2 * 0.92;
    }
  }
  else {
    dVar1 = param_2;
    _objc_retain();
    func_0x00010c23d0a0(param_4);
    func_0x00010c23d0a0(param_4);
    _objc_release(param_4);
    dVar2 = param_2 * 0.92 * param_3;
    if (param_6 == 0) {
      dVar2 = param_2 * 0.92;
    }
    dVar1 = dVar2 * (param_1 / dVar1);
  }
  auVar3._8_8_ = dVar2;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 1067c0048; end: 1067c005f;  */

void FUN_1067c0048(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067c0060; end: 1067c00cf;  */

void FUN_1067c0060(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067c00d0; end: 1067c00e7;  */

void FUN_1067c00d0(void)

{
  return;
}



/* Entry: 1067c00e8; end: 1067c014b; +[SCExtensionGroupAvatarBitmoji bitmojiWithImage:] */

void FUN_1067c00e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ce0b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067c014c; end: 1067c01b7; +[SCExtensionGroupAvatarBitmoji silhouetteWithImage:] */

void FUN_1067c014c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ce0b8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067c01b8; end: 1067c01db; -[SCExtensionGroupAvatarBitmoji copyWithZone:] */

undefined8 FUN_1067c01b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1067c01dc; end: 1067c0253; -[SCExtensionGroupAvatarBitmoji hash] */

void FUN_1067c01dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1126f3298;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067c0254; end: 1067c0297; -[SCExtensionGroupAvatarBitmoji internalInit] */

void FUN_1067c0254(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f3298;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067c0298; end: 1067c034f; -[SCExtensionGroupAvatarBitmoji isEqual:] */

long FUN_1067c0298(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1067c0328:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1067c0334;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_1067c0334;
        }
        goto LAB_1067c0328;
      }
    }
    lVar3 = 0;
  }
LAB_1067c0334:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1067c0350; end: 1067c03d3; -[SCExtensionGroupAvatarBitmoji matchBitmoji:silhouette:] */

void FUN_1067c0350(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_1067c03b8;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_1067c03b8;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1067c03b8:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


