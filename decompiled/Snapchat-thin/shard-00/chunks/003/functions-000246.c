/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10058fab0; end: 10058fb57;  */

void FUN_10058fab0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11062e560;
  func_0x000107c613fc(&UNK_11062e560,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10058fb58;
  FUN_1000823a8(FUN_10058fb58,puVar1);
  FUN_100082720("SCCustomStatusBarScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10058fb58; end: 10058fb5f;  */

void FUN_10058fb58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11062e460;
  func_0x000107c613fc(&UNK_11062e460,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103272234;
  FUN_10058fa64(&UNK_103272234,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10058fb60; end: 10058fc23;  */

void FUN_10058fb60(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  FUN_100083b20(&uStack_38);
  FUN_10058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11062e460;
  func_0x000107c613fc(&UNK_11062e460,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_103272234;
  FUN_10058fa64(&UNK_103272234,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10058fc24; end: 10058fc47;  */

void FUN_10058fc24(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058fc48; end: 10058fc7f;  */

void FUN_10058fc48(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10058fc80; end: 10058fceb;  */

void FUN_10058fc80(undefined8 param_1)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(0x1130925e0,auStack_48,0x20,0);
  func_0x000107c61188();
  func_0x000107c614a8(auStack_48);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10058fcec; end: 10058fcf3;  */

void FUN_10058fcec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058fcf4; end: 10058fd8f;  */

void FUN_10058fcf4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058fd90; end: 10058fd93;  */

void FUN_10058fd90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058fd94; end: 10058fdbf;  */

void FUN_10058fd94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10058fdc0; end: 10058fdc7;  */

void FUN_10058fdc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112ecad40;
  FUN_1000285a8(0x112ecad40,&UNK_10daedf78);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10058fdc8; end: 10058fe53;  */

void FUN_10058fdc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112ecad40;
  FUN_1000285a8(0x112ecad40,&UNK_10daedf78);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10058fe54; end: 10058fe5b;  */

void FUN_10058fe54(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 10058fe5c; end: 10058fe6b; -[SCScopeExposerProxy exposeScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058fe5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787cec),PTR_s_exposeScope__1125c4f30);
  return;
}



/* Entry: 10058fe6c; end: 10058feb3;  */

void FUN_10058fe6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_10058feb4(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10058feb4; end: 10058ff67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058feb4(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *unaff_x20;
  undefined1 auStack_60 [16];
  long lStack_38;
  
  func_0x000107c614a4(param_1,*(undefined8 *)
                               ((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50),0,0,0)
  ;
  uVar1 = 0x113092408;
  FUN_1000285a8(0x113092408,&UNK_10dd38190);
  FUN_100087bd4(&lStack_38,FUN_10058ffcc,auStack_60,uVar1);
  if (lStack_38 != 0) {
    func_0x000107c42c1c(lStack_38);
    func_0x000107c61170(lStack_38);
  }
  return;
}



/* Entry: 10058ff68; end: 10058ffcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10058ff68(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130923f0);
  *(undefined8 *)(param_2 + _DAT_1130923f0) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c615e8(uVar1);
  *param_1 = *(undefined8 *)(param_2 + _DAT_113092400);
  func_0x000107c61174();
  return;
}



/* Entry: 10058ffcc; end: 10058ffe3;  */

void FUN_10058ffcc(void)

{
  long unaff_x20;
  
  FUN_10058ff68(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10058ffe4; end: 100590013; -[SCCustomStatusBarStyleContextController setCustomStatusBarScopeExposer:] */

void FUN_10058ffe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100590014; end: 10059004f;  */

void FUN_100590014(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100590050; end: 100590057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590050(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&lStack_48);
  lVar2 = *(long *)(lStack_48 + _DAT_1130815a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar5 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c3f0ec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar3;
      func_0x000107c4357c(lVar3);
      func_0x000107c615e8(lVar3);
    }
  }
  uVar4 = 0;
  FUN_1002b6144(0);
  func_0x000107c610f8();
  FUN_100590180(uVar1,lVar5,uVar4);
  *param_1 = uVar1;
  return;
}



/* Entry: 100590058; end: 100590167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590058(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_48;
  
  func_0x0001000ad7c4();
  FUN_100083b20(&lStack_48);
  lVar1 = *(long *)(lStack_48 + _DAT_1130815a8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_48);
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar4 != 0) {
    lVar1 = lVar4;
    func_0x000107c3f0ec();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c4357c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  uVar3 = 0;
  FUN_1002b6144(0);
  func_0x000107c610f8();
  FUN_100590180(param_2,lVar4,uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 100590168; end: 10059017f; -[SCCameraHardwareConfigurationImpl fingerDownWarmupEnabled] */

void FUN_100590168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110dd0cf8,0,0);
  return;
}



/* Entry: 100590180; end: 1005901e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590180(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113074ff0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_113074ff8) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1005901e4; end: 10059020f;  */

void FUN_1005901e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100590210; end: 10059021f; -[_TtC25SCCameraFingerDownWarming31CameraFingerDownWarmingServices fingerDownWarmer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113074ff0));
  return;
}



/* Entry: 100590220; end: 100590227; -[SCTopLevelFeatureScopeConfigProviderServices topLevelFeatureScopePreloadConfig] */

void FUN_100590220(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174();
  lVar2 = lRam00000001136c4660;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10050c154;
  puStack_40 = &UNK_110842e18;
  uStack_38 = uVar3;
  func_0x000107c61174(uVar3);
  uVar4 = uVar3;
  if (lVar2 != -1) {
    FUN_10002a2fc(0x1136c4660,&puStack_58);
    uVar4 = uStack_38;
  }
  uVar1 = uRam00000001136c4658;
  func_0x000107c61174(uRam00000001136c4658);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100590228; end: 100590237; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices friendStoriesPlaybackActionListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307edd8));
  return;
}



/* Entry: 100590238; end: 10059023f; -[SCImmediateUserFeatureLaunchServices communitiesProfileScopeLauncher] */

undefined8 FUN_100590238(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100590240; end: 100590247; -[SCPlusServices featureGating] */

undefined8 FUN_100590240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100590248; end: 10059024f; -[SCSnapProServices userProfileIdProvider] */

undefined8 FUN_100590248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100590250; end: 100590257; -[SCDeckRootContainerServices deckRootContainerProvider] */

undefined8 FUN_100590250(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100590258; end: 10059025f; -[SCPageLauncherServices pageLauncher] */

undefined8 FUN_100590258(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100590260; end: 10059026f; -[_TtC25SCSpotlightLaunchServices25SCSpotlightLaunchServices modularSpotlightLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feb6a8));
  return;
}



/* Entry: 100590270; end: 10059027f; -[_TtC20SCAdPrefetchServices20SCAdPrefetchServices userStoriesAdPrefetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2378));
  return;
}



/* Entry: 100590280; end: 100590297; -[_TtC27SCDeckServiceImplementation25DeckServiceImplementation primaryDeckHierarchy] */

void FUN_100590280(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100590298; end: 1005902a7; -[ComplianceRestrictedAppExperienceServices checker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100590298(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113046c80));
  return;
}



/* Entry: 1005902a8; end: 10059141f; -[SCActiveUserNGSNavigationRouter initWithPresenter:applicationLifecycleEvents:containerViewController:navigationController:header:navigationLogging:currentPageTracker:spectaclesAppRouter:circumstanceEngine:friendingExperimentReader:snapchattersDataMutator:appStartExperimentReader:userSession:customStatusBarStyleContextController:mainCameraScopeServices:friendsFeedScopeServices:discoverFeedScopeServices:chatScopeServices:mainCameraScopeExposer:discoverFeedScopeExposer:chatScopeExposer:friendsFeedScopeExposer:mapScopeExposer:spotlightScopeExposer:addFriendsScopeExposer:addFriendsScopeServices:searchScopeExposer:searchScopeServices:searchSuggestionsScopeExposer:searchSuggestionsScopeServices:mapSearchScopeExposer:mapSearchScopeServices:navigationItemBadgeProviderScopeExposer:navigationItemBadgePluginSaberService:userInfoService:fingerDownWarmer:locationSharingSettingsFactoryServices:profileScopeExposer:friendProfileScopeExposer:commerceShoppingScopeExposer:settingsScopeExposer:settingsScopeServices:changeUsernameScopeExposer:passwordSettingsScopeExposer:passwordSettingsScopeServices:bitmojiExtensionSettingsFactoryServices:contactSupportScopeExposer:contactSupportScopeServices:sessionManagementScopeExposer:sessionManagementScopeServices:bugsAndSuggestionsScopeExposer:findFriendsScopeExposer:findFriendsScopeServices:allContactsScopeExposer:taskManagementService:cameraConfigurationServices:messagingExperimentService:appGroupUserDefaults:memoriesSettingsUIScopeExposer:topLevelFeatureScopePreloadConfig:profileOnboardingScopeExposer:profileManagementScopeExposer:plusDeeplinkScopeFactoryServices:pageLoadMetricManager:communitiesOnboardingScopeExposer:friendStoriesPlaybackListener:memoriesNavigationServices:grapheneRegistry:appThemeServices:communitiesProfileScopeLauncher:storiesConfigProvider:communitiesPromptNotificationScopeExposer:plusDefaultTabScopeFactoryServices:phoneSettingsScopeExposer:phoneSettingsScopeServices:plusFeatureGating:userProfileIdProvider:deckTransitionEvents:deckRootContainerProvider:pageLauncher:barStyle:featureStartupEventBus:preferences:modularSpotlightLauncher:userStoriesAdPrefetcher:spotlightScopeServices:simpleSnapchatExperimentConfigProvider:primaryDeckHierarchy:activityFeedScopeExposer:notificationCenterFactoryServices:snapProProfilesProvider:topicViewerScopeExposer:topicViewerScopeServices:musicTopicViewerScopeExposer:musicTopicViewerScopeBuilderServices:mapComplianceServices:mapNavBarTooltipComplianceServices:fullMapScopeServices:complianceRestrictedAppExperienceChecker:] */

undefined8 *
FUN_1005902a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_49);
  func_0x000107c61174(param_50);
  func_0x000107c61174(param_51);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_54);
  func_0x000107c61174(param_55);
  func_0x000107c61174(param_56);
  func_0x000107c61174(param_57);
  func_0x000107c61174(param_58);
  func_0x000107c61174(param_59);
  func_0x000107c61174(param_60);
  func_0x000107c61174(param_61);
  func_0x000107c61174(param_62);
  func_0x000107c61174(param_63);
  func_0x000107c61174(param_64);
  func_0x000107c61174(param_65);
  func_0x000107c61174(param_66);
  func_0x000107c61174(param_67);
  func_0x000107c61174(param_68);
  func_0x000107c61174(param_69);
  func_0x000107c61174(param_70);
  func_0x000107c61174(in_stack_000001f0);
  func_0x000107c61174(in_stack_000001f8);
  func_0x000107c61174(in_stack_00000200);
  func_0x000107c61174(in_stack_00000208);
  func_0x000107c61174(in_stack_00000210);
  func_0x000107c61174(in_stack_00000218);
  func_0x000107c61174(in_stack_00000220);
  func_0x000107c61174(in_stack_00000228);
  func_0x000107c61174(in_stack_00000230);
  func_0x000107c61174(in_stack_00000238);
  func_0x000107c61174(in_stack_00000240);
  func_0x000107c61174(in_stack_00000248);
  func_0x000107c61174(in_stack_00000258);
  func_0x000107c61174(in_stack_00000260);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(in_stack_00000280);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(in_stack_000002a8);
  func_0x000107c61174(in_stack_000002b0);
  func_0x000107c61174(in_stack_000002b8);
  func_0x000107c61174(in_stack_000002c0);
  func_0x000107c61174(in_stack_000002c8);
  func_0x000107c61174(in_stack_000002d0);
  func_0x000107c61174(in_stack_000002d8);
  func_0x000107c61174(in_stack_000002e0);
  puStack_70 = PTR_PTR_1126f3570;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(in_stack_00000268);
    uVar2 = puVar1[0x70];
    puVar1[0x70] = in_stack_00000268;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000270);
    uVar2 = puVar1[0x71];
    puVar1[0x71] = in_stack_00000270;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000278);
    uVar2 = puVar1[0x72];
    puVar1[0x72] = in_stack_00000278;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 1,param_3);
    func_0x000107c611a0(puVar1 + 3,param_7);
    func_0x000107c611a0(puVar1 + 4,param_5);
    func_0x000107c61174();
    func_0x000107c59778(param_5);
    func_0x000107c61170(param_5);
    func_0x000107c611a0(puVar1 + 5,param_6);
    func_0x000107c611a0(puVar1 + 6,param_8);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 7,param_15);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x4f];
    puVar1[0x4f] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 9,param_17);
    func_0x000107c611a0(puVar1 + 10,param_18);
    func_0x000107c611a0(puVar1 + 0xb,param_19);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 8,param_21);
    func_0x000107c611a0(puVar1 + 0xd,param_22);
    func_0x000107c611a0(puVar1 + 0xe,param_24);
    func_0x000107c611a0(puVar1 + 0xf,param_23);
    func_0x000107c611a0(puVar1 + 0x10,param_25);
    func_0x000107c611a0(puVar1 + 0x11,param_26);
    func_0x000107c611a0(puVar1 + 0x12,param_27);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x49,param_29);
    func_0x000107c611a0(puVar1 + 0x4a,param_30);
    func_0x000107c611a0(puVar1 + 0x4b,param_31);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x4c];
    puVar1[0x4c] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x4d,param_33);
    func_0x000107c611a0(puVar1 + 0x4e,param_34);
    func_0x000107c611a0(puVar1 + 0x20,param_35);
    func_0x000107c611a0(puVar1 + 0x21,param_36);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c610fc();
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_13;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = puVar1[0x40];
    puVar1[0x40] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = puVar1[0x41];
    puVar1[0x41] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_59);
    uVar2 = puVar1[0x54];
    puVar1[0x54] = param_59;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_60);
    uVar2 = puVar1[0x55];
    puVar1[0x55] = param_60;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000280);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = in_stack_00000280;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000002a8);
    uVar2 = puVar1[0x78];
    puVar1[0x78] = in_stack_000002a8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000002b0);
    uVar2 = puVar1[0x79];
    puVar1[0x79] = in_stack_000002b0;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000002b8);
    uVar2 = puVar1[0x7a];
    puVar1[0x7a] = in_stack_000002b8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000002c0);
    uVar2 = puVar1[0x7b];
    puVar1[0x7b] = in_stack_000002c0;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x7d,in_stack_000002c8);
    func_0x000107c611a0(puVar1 + 0x7e,in_stack_000002d0);
    func_0x000107c61174(in_stack_000002d8);
    uVar2 = puVar1[0x80];
    puVar1[0x80] = in_stack_000002d8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000002e0);
    uVar2 = puVar1[0x81];
    puVar1[0x81] = in_stack_000002e0;
    func_0x000107c61170(uVar2);
    puVar1[0x34] = 0xffffffffffffffff;
    puVar1[0x36] = 0xffffffffffffffff;
    *(undefined1 *)(puVar1 + 0x38) = 0;
    func_0x000107c611a0(puVar1 + 0x47,param_37);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x48];
    puVar1[0x48] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x23,param_39);
    func_0x000107c611a0(puVar1 + 0x51,param_40);
    func_0x000107c611a0(puVar1 + 0x50,param_41);
    func_0x000107c611a0(puVar1 + 0x14,param_42);
    func_0x000107c611a0(puVar1 + 0x15,param_43);
    func_0x000107c61174(param_44);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_44;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x17,param_45);
    func_0x000107c611a0(puVar1 + 0x18,param_46);
    func_0x000107c61174(param_47);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_47;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x1a,param_48);
    func_0x000107c611a0(puVar1 + 0x1b,param_49);
    func_0x000107c611a0(puVar1 + 0x1c,param_50);
    func_0x000107c611a0(puVar1 + 0x25,in_stack_00000218);
    func_0x000107c61174(in_stack_00000220);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = in_stack_00000220;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x1d,param_51);
    func_0x000107c611a0(puVar1 + 0x1e,param_52);
    func_0x000107c611a0(puVar1 + 0x1f,param_53);
    func_0x000107c61174(param_54);
    uVar2 = puVar1[0x42];
    puVar1[0x42] = param_54;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x43,param_55);
    func_0x000107c61174(param_56);
    uVar2 = puVar1[0x44];
    puVar1[0x44] = param_56;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_57);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_57;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x53,param_58);
    func_0x000107c61174(param_61);
    uVar2 = puVar1[0x56];
    puVar1[0x56] = param_61;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_62);
    uVar2 = puVar1[0x57];
    puVar1[0x57] = param_62;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_63);
    uVar2 = puVar1[0x58];
    puVar1[0x58] = param_63;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_64);
    uVar2 = puVar1[0x5a];
    puVar1[0x5a] = param_64;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x5c,param_65);
    func_0x000107c61174(param_66);
    uVar2 = puVar1[0x65];
    puVar1[0x65] = param_66;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_67);
    uVar2 = puVar1[0x5e];
    puVar1[0x5e] = param_67;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_68);
    uVar2 = puVar1[0x66];
    puVar1[0x66] = param_68;
    func_0x000107c61170(uVar2);
    uVar2 = param_69;
    func_0x000107c4d524();
    func_0x000107c61180();
    uVar7 = puVar1[0x8b];
    puVar1[0x8b] = uVar2;
    func_0x000107c61170(uVar7);
    func_0x000107c61174(param_70);
    uVar2 = puVar1[0x6b];
    puVar1[0x6b] = param_70;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x5f,in_stack_000001f8);
    func_0x000107c61174(in_stack_00000258);
    uVar2 = puVar1[0x6e];
    puVar1[0x6e] = in_stack_00000258;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000260);
    uVar2 = puVar1[0x6f];
    puVar1[0x6f] = in_stack_00000260;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126aefc0;
    func_0x000107c61158(PTR_PTR_1126aefc0);
    uVar4 = param_6;
    func_0x000107c6115c(param_6,puVar3);
    if ((uVar4 & 1) != 0) {
      func_0x000107c57728(param_6);
    }
    func_0x000107c611a0(puVar1 + 0x27,in_stack_000001f0);
    func_0x000107c61174(in_stack_00000200);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = in_stack_00000200;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x24,in_stack_00000208);
    func_0x000107c611a0(puVar1 + 0x60,in_stack_00000210);
    func_0x000107c61174(in_stack_00000228);
    uVar2 = puVar1[0x62];
    puVar1[0x62] = in_stack_00000228;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000230);
    uVar2 = puVar1[99];
    puVar1[99] = in_stack_00000230;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000248);
    uVar2 = puVar1[0x68];
    puVar1[0x68] = in_stack_00000248;
    func_0x000107c61170(uVar2);
    puVar1[100] = in_stack_00000250;
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c4ecb0();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c43638();
    func_0x000107c61180();
    uVar2 = puVar1[0x7f];
    puVar1[0x7f] = puVar6;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61174(in_stack_00000238);
    uVar2 = puVar1[0x69];
    puVar1[0x69] = in_stack_00000238;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000240);
    uVar2 = puVar1[0x6d];
    puVar1[0x6d] = in_stack_00000240;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000288);
    uVar2 = puVar1[2];
    puVar1[2] = in_stack_00000288;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_000002a0);
    uVar2 = puVar1[0x76];
    puVar1[0x76] = in_stack_000002a0;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000290);
    uVar2 = puVar1[0x77];
    puVar1[0x77] = in_stack_00000290;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(in_stack_00000298);
    uVar2 = puVar1[0x75];
    puVar1[0x75] = in_stack_00000298;
    func_0x000107c61170(uVar2);
    func_0x000107c3c5d8(puVar1);
    func_0x000107c3c00c(puVar1);
  }
  func_0x000107c61170(in_stack_000002e0);
  func_0x000107c61170(in_stack_000002d8);
  func_0x000107c61170(in_stack_000002d0);
  func_0x000107c61170(in_stack_000002c8);
  func_0x000107c61170(in_stack_000002c0);
  func_0x000107c61170(in_stack_000002b8);
  func_0x000107c61170(in_stack_000002b0);
  func_0x000107c61170(in_stack_000002a8);
  func_0x000107c61170(in_stack_000002a0);
  func_0x000107c61170(in_stack_00000298);
  func_0x000107c61170(in_stack_00000290);
  func_0x000107c61170(in_stack_00000288);
  func_0x000107c61170(in_stack_00000280);
  func_0x000107c61170(in_stack_00000278);
  func_0x000107c61170(in_stack_00000270);
  func_0x000107c61170(in_stack_00000268);
  func_0x000107c61170(in_stack_00000260);
  func_0x000107c61170(in_stack_00000258);
  func_0x000107c61170(in_stack_00000248);
  func_0x000107c61170(in_stack_00000240);
  func_0x000107c61170(in_stack_00000238);
  func_0x000107c61170(in_stack_00000230);
  func_0x000107c61170(in_stack_00000228);
  func_0x000107c61170(in_stack_00000220);
  func_0x000107c61170(in_stack_00000218);
  func_0x000107c61170(in_stack_00000210);
  func_0x000107c61170(in_stack_00000208);
  func_0x000107c61170(in_stack_00000200);
  func_0x000107c61170(in_stack_000001f8);
  func_0x000107c61170(in_stack_000001f0);
  func_0x000107c61170(param_70);
  func_0x000107c61170(param_69);
  func_0x000107c61170(param_68);
  func_0x000107c61170(param_67);
  func_0x000107c61170(param_66);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_63);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100591420; end: 10059142f;  */

void FUN_100591420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)(param_1,&UNK_10dde32a0,param_3,0x301);
  return;
}



/* Entry: 100591430; end: 100591437; -[SCMemoriesNavigationServices navigationService] */

undefined8 FUN_100591430(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100591438; end: 10059144b; -[SCBareboneNavigationController setPresentationDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100591438(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11278e2fc,param_3);
  return;
}



/* Entry: 10059144c; end: 100591c0b; -[SCActiveUserNGSNavigationRouter _setUpContainers] */

undefined ** FUN_10059144c(undefined **param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  float fVar19;
  undefined1 auStack_3f0 [8];
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined8 uStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_1;
  func_0x000107c3b168();
  func_0x000107c61180();
  puVar10 = param_1[0x33];
  param_1[0x33] = (undefined *)ppuVar13;
  func_0x000107c61170(puVar10);
  ppuVar13 = param_1;
  func_0x000107c3cdf0();
  func_0x000107c61180();
  puVar10 = param_1[0x31];
  param_1[0x31] = (undefined *)ppuVar13;
  func_0x000107c61170(puVar10);
  puVar10 = param_1[0x6d];
  ppuVar13 = param_1 + 1;
  func_0x000107c61148();
  func_0x000107c5a1dc(puVar10);
  func_0x000107c61170(ppuVar13);
  puVar10 = param_1[2];
  func_0x000107c508d0(puVar10);
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar10);
  ppuVar13 = param_1;
  func_0x000107c3b394();
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c610fc();
  uVar16 = 0;
  lStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  puVar14 = param_1[0x33];
  func_0x000107c61174(puVar14);
  puVar11 = puVar14;
  func_0x000107c4080c();
  fVar19 = (float)uVar16;
  if (puVar11 != (undefined *)0x0) {
    lVar12 = *plStack_2c0;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_2c0 != lVar12) {
          func_0x000107c61128(puVar14);
        }
        func_0x000107c49820(*(undefined8 *)(lStack_2c8 + (long)puVar17 * 8));
        func_0x000107c3c098(param_1);
        ppuVar9 = ppuVar13;
        func_0x000107c3d8b0(ppuVar13);
        func_0x000107c61180();
        func_0x000107c5a2cc();
        func_0x000107c56bd8(puVar10);
        func_0x000107c4fc3c(ppuVar9);
        func_0x000107c61170(ppuVar9);
        puVar17 = puVar17 + 1;
      } while (puVar11 != puVar17);
      puVar11 = puVar14;
      func_0x000107c4080c();
      fVar19 = (float)uVar16;
    } while (puVar11 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar14);
  ppuVar9 = ppuVar13;
  func_0x000107c3ecc8();
  func_0x000107c61180();
  puVar11 = param_1[0x30];
  param_1[0x30] = (undefined *)ppuVar9;
  func_0x000107c61170(puVar11);
  func_0x000107c61174(puVar10);
  puVar11 = param_1[0x32];
  param_1[0x32] = puVar10;
  func_0x000107c61170(puVar11);
  FUN_100597aac();
  if ((1.0 < fVar19) && ((double)fVar19 <= 1.6)) {
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    lStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    plStack_300 = (long *)0x0;
    puVar11 = puVar10;
    func_0x000107c3dbc0();
    func_0x000107c61180();
    puVar14 = puVar11;
    func_0x000107c4080c();
    if (puVar14 != (undefined *)0x0) {
      lVar12 = *plStack_300;
      do {
        puVar17 = (undefined *)0x0;
        do {
          if (*plStack_300 != lVar12) {
            func_0x000107c61128(puVar11);
          }
          uVar15 = *(ulong *)(lStack_308 + (long)puVar17 * 8);
          uVar1 = uVar15;
          func_0x000107c4d4bc();
          func_0x000107c61180();
          uVar2 = uVar1;
          func_0x000107c4a7c4();
          func_0x000107c61180();
          uVar3 = uVar2;
          func_0x000107c61164();
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar1);
          if ((uVar3 & 1) != 0) {
            func_0x000107c4d4bc(uVar15);
            func_0x000107c61180();
            uVar1 = uVar15;
            func_0x000107c4a7c4();
            func_0x000107c61180();
            func_0x000107c52eb4((double)fVar19);
            func_0x000107c61170(uVar1);
            func_0x000107c61170(uVar15);
          }
          puVar17 = puVar17 + 1;
        } while (puVar14 != puVar17);
        puVar14 = puVar11;
        func_0x000107c4080c();
      } while (puVar14 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar11);
  }
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  lStack_348 = 0;
  uStack_350 = 0;
  uStack_338 = 0;
  plStack_340 = (long *)0x0;
  puVar14 = param_1[0x33];
  func_0x000107c61174(puVar14);
  puVar11 = puVar14;
  func_0x000107c4080c();
  if (puVar11 != (undefined *)0x0) {
    lVar12 = *plStack_340;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (*plStack_340 != lVar12) {
          func_0x000107c61128(puVar14);
        }
        uVar16 = *(undefined8 *)(lStack_348 + (long)puVar17 * 8);
        puVar18 = puVar10;
        func_0x000107c4d9e8(puVar10);
        func_0x000107c61180();
        puVar4 = param_1[0x62];
        func_0x000107c5c734();
        func_0x000107c61180();
        puVar5 = puVar4;
        func_0x000107c4162c();
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c41050();
        func_0x000107c61180();
        puVar7 = puVar6;
        func_0x000107c5bcc0();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        if (puVar7 != (undefined *)0x0) {
          func_0x000107c61144(auStack_358,param_1);
          puVar5 = puVar18;
          func_0x000107c4d500(puVar18);
          func_0x000107c61180();
          puStack_380 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_378 = 0xc2000000;
          puStack_370 = &UNK_1067fa66c;
          puStack_368 = &UNK_110914e08;
          func_0x000107c6111c(auStack_360,auStack_358);
          func_0x000107c5613c(puVar5);
          func_0x000107c61170(puVar5);
          func_0x000107c61120(auStack_360);
          func_0x000107c61120(auStack_358);
        }
        puVar5 = puVar18;
        func_0x000107c4d4bc(puVar18);
        func_0x000107c61180();
        func_0x000107c49820(uVar16);
        puVar7 = param_1[0x31];
        func_0x000107c4d9e8(puVar7);
        func_0x000107c61180();
        puVar6 = PTR_PTR_1126ce4c0;
        func_0x000107c610f4(PTR_PTR_1126ce4c0);
        func_0x000107c46fc4();
        func_0x000107c54af4(puVar7);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar18);
        puVar17 = puVar17 + 1;
      } while (puVar11 != puVar17);
      puVar11 = puVar14;
      func_0x000107c4080c();
    } while (puVar11 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar14);
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c41988();
  func_0x000107c61180();
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_3a8 = 0;
  plStack_3b0 = (long *)0x0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  puVar17 = param_1[0x33];
  func_0x000107c61174(puVar17);
  puVar14 = puVar17;
  func_0x000107c4080c();
  if (puVar14 != (undefined *)0x0) {
    lVar12 = *plStack_3b0;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (*plStack_3b0 != lVar12) {
          func_0x000107c61128(puVar17);
        }
        func_0x000107c49820(*(undefined8 *)(lStack_3b8 + (long)puVar18 * 8));
        puVar5 = puVar10;
        func_0x000107c4d9e8(puVar10);
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c4d500();
        func_0x000107c61180();
        func_0x000107c56bd8(puVar11);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        puVar18 = puVar18 + 1;
      } while (puVar14 != puVar18);
      puVar14 = puVar17;
      func_0x000107c4080c();
    } while (puVar14 != (undefined *)0x0);
  }
  func_0x000107c61170(puVar17);
  func_0x000107c61144(auStack_358,param_1);
  ppuVar9 = param_1 + 0x20;
  func_0x000107c61148(ppuVar9);
  puStack_3e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3e0 = 0xc2000000;
  pcStack_3d8 = FUN_100b43e4c;
  puStack_3d0 = &UNK_1108d4780;
  func_0x000107c61174(puVar11);
  puStack_3c8 = puVar11;
  func_0x000107c6111c(auStack_3f0,auStack_358);
  func_0x000107c61174(puVar11);
  func_0x000107c42c14(ppuVar9);
  func_0x000107c61170(ppuVar9);
  func_0x000107c3c488(param_1);
  func_0x000107c61170(puVar11);
  func_0x000107c61120(auStack_3f0);
  func_0x000107c61170(puStack_3c8);
  func_0x000107c61120(auStack_358);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return ppuVar13;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_3f0);
  func_0x000107c61120(auStack_358);
  func_0x000107c60bd8();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = ppuVar13;
  func_0x000107c3bb40();
  ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((ulong)ppuVar8 & 1) == 0) {
    if (ppuVar13[100] == (undefined *)0x1) {
      func_0x000107c3b768(ppuVar13);
      func_0x000107c4d960();
      func_0x000107c61180();
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c();
      func_0x000107c61180();
      ppuVar8 = ppuVar9;
    }
    else {
      func_0x000107c3b74c(ppuVar13);
      func_0x000107c4d960();
      func_0x000107c61180();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c3b768(ppuVar13);
      func_0x000107c4d960();
      func_0x000107c61180();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c3b724(ppuVar13);
      func_0x000107c4d960();
      func_0x000107c61180();
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      ppuVar8 = ppuVar9;
    }
    func_0x000107c61170();
  }
  else {
    ppuVar13 = &PTR__OBJC_CLASS___NSConstantArray_111180c08;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar13);
    return ppuVar13;
  }
  func_0x000107c60e78();
  puVar11 = ppuVar8[0x81];
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar10 = puVar11;
  func_0x000107c4a348();
  if (((ulong)puVar10 & 1) == 0) {
    ppuVar9 = (undefined **)ppuVar8[0x2e];
    func_0x000107c5c734(ppuVar9);
    func_0x000107c61180();
    puVar10 = PTR_PTR_1126c63a0;
    func_0x000107c4b6b4(PTR_PTR_1126c63a0);
    func_0x000107c61180();
    ppuVar13 = ppuVar9;
    func_0x000107c3ebc4(ppuVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(ppuVar9);
  }
  else {
    ppuVar13 = (undefined **)0x1;
  }
  func_0x000107c61170(puVar11);
  return ppuVar13;
}



/* Entry: 100591c0c; end: 100591db3; -[SCActiveUserNGSNavigationRouter _containerViewTypes] */

undefined ** FUN_100591c0c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x000107c3bb40();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (((ulong)puVar1 & 1) == 0) {
    if (*(long *)(param_1 + 800) == 1) {
      ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70d8;
      ppuStack_48 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70f0;
      func_0x000107c3b768(param_1);
      func_0x000107c4d960(puVar2,param_2,param_1);
      func_0x000107c61180();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_40 = puVar2;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_50,3);
      func_0x000107c61180();
      puVar1 = puVar2;
    }
    else {
      puVar1 = param_1;
      func_0x000107c3b74c(param_1);
      func_0x000107c4d960(puVar2,param_2,puVar1);
      func_0x000107c61180();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70d8;
      ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70f0;
      puVar3 = param_1;
      puStack_78 = puVar2;
      func_0x000107c3b768(param_1);
      func_0x000107c4d960(puVar1,param_2,puVar3);
      func_0x000107c61180();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puStack_60 = puVar1;
      func_0x000107c3b724(param_1);
      func_0x000107c4d960(puVar3,param_2,param_1);
      func_0x000107c61180();
      ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_58 = puVar3;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_78,5);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar1);
      puVar1 = puVar2;
    }
    func_0x000107c61170();
  }
  else {
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantArray_111180c08;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
    return ppuVar7;
  }
  func_0x000107c60e78();
  uVar4 = *(ulong *)(puVar1 + 0x408);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4a348();
  if ((uVar5 & 1) == 0) {
    ppuVar6 = *(undefined ***)(puVar1 + 0x170);
    func_0x000107c5c734(ppuVar6);
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126c63a0;
    func_0x000107c4b6b4(PTR_PTR_1126c63a0);
    func_0x000107c61180();
    ppuVar7 = ppuVar6;
    func_0x000107c3ebc4(ppuVar6,param_2,puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(ppuVar6);
  }
  else {
    ppuVar7 = (undefined **)0x1;
  }
  func_0x000107c61170(uVar4);
  return ppuVar7;
}



/* Entry: 100591db4; end: 100591e53; -[SCActiveUserNGSNavigationRouter _isLiteMapThirdTabEnabled] */

undefined8 FUN_100591db4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x408);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a348();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x170);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126c63a0;
    func_0x000107c4b6b4(PTR_PTR_1126c63a0);
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c3ebc4(uVar3,param_2,puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
  }
  else {
    uVar5 = 1;
  }
  func_0x000107c61170(uVar1);
  return uVar5;
}



/* Entry: 100591e54; end: 100591e8b;  */

void FUN_100591e54(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100591e8c; end: 100591eaf;  */

undefined8 FUN_100591e8c(void)

{
  undefined8 uStack_18;
  
  FUN_100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 100591eb0; end: 100591ebb;  */

void FUN_100591eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100591ebc();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  FUN_100591f50(uVar2,uVar1,uVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 100591ebc; end: 100591edb;  */

void FUN_100591ebc(void)

{
  func_0x000107c61168(&PTR_PTR_1127e8aa8);
  return;
}



/* Entry: 100591edc; end: 100591f4f;  */

void FUN_100591edc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100591ebc();
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_100591f50(param_2,param_3,param_4);
  *param_1 = param_2;
  return;
}



/* Entry: 100591f50; end: 100592167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100591f50(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar12 = param_2;
  func_0x000107c614f0();
  FUN_100083b20(&lStack_70);
  lVar10 = lStack_70;
  FUN_100083b20(&lStack_70);
  lVar5 = lStack_70;
  uVar6 = *(ulong *)(lStack_70 + _DAT_113091ad8);
  func_0x000107c61174();
  func_0x000107c61170(lVar5);
  uVar7 = uVar6;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  uVar6 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  FUN_100083b20(&lStack_70);
  func_0x000107c614f0(lStack_70);
  puVar8 = PTR_PTR_1126b1278;
  func_0x000107c61168();
  func_0x000107c4fa84();
  func_0x000107c61180();
  puVar9 = puVar8;
  (**(code **)(lStack_68 + 8))();
  func_0x000107c615e8(lStack_70);
  func_0x000107c61170(puVar8);
  uVar7 = uVar6;
  FUN_100592538(uVar6,uVar12);
  *(long *)(unaff_x20 + _DAT_112dc6440) = lVar10;
  puVar1 = (ulong *)(unaff_x20 + _DAT_112dc6448);
  *puVar1 = uVar6;
  puVar1[1] = uVar12;
  uVar2 = ((uint)puVar9 ^ 0xffffffff) & 1;
  uVar4 = (undefined1)uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_112dc6428) = uVar4;
  uVar3 = 0;
  if ((uVar7 & 1) == 0) {
    uVar3 = uVar4;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112dc6430) = uVar3;
  *(byte *)(unaff_x20 + _DAT_112dc6438) = (byte)uVar7 & 1 & (byte)puVar9;
  puVar8 = PTR_s_init_1125d9248;
  func_0x000107c61174(lVar10);
  func_0x000107c61434(uVar12);
  puVar11 = &stack0xffffffffffffff80;
  func_0x000107c61154(puVar11,puVar8);
  func_0x000107c61180();
  FUN_100592604(uVar2,uVar6,uVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61170(lVar10);
  func_0x000107c6142c(uVar12);
  return puVar11;
}



/* Entry: 100592168; end: 1005921df; +[SCNComplianceFeature recommendationFeeds] */

void FUN_100592168(void)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((bRam00000001137f7730 & 1) == 0) {
    iVar2 = 0x137f7730;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      FUN_1005921e0();
      func_0x000107c610f4();
      func_0x000107c46d34();
      func_0x000100592234(0x1137f7728);
    }
  }
  uVar1 = uRam00000001137f7728;
  func_0x000100592240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1005921e0; end: 1005921eb;  */

undefined * FUN_1005921e0(void)

{
  return PTR_PTR_1126b1278;
}



/* Entry: 1005921ec; end: 100592233; -[SCNComplianceFeature initWithId:] */

void FUN_1005921ec(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127072c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100592234; end: 10059224f;  */

void FUN_100592234(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_release_110346be8)(param_1 + 1);
  return;
}



/* Entry: 100592250; end: 100592397;  */

undefined1  [16] FUN_100592250(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efb9c00);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  uVar2 = 0;
  if (iVar3 != 0) {
    FUN_100083b20(&uStack_40,0,0);
    uVar1 = uStack_40;
    uVar2 = uStack_38;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 100592398; end: 1005923b3;  */

uint FUN_100592398(uint param_1)

{
  func_0x0001005922d8();
  return param_1 & 0xff01;
}



/* Entry: 1005923b4; end: 1005923bb;  */

void FUN_1005923b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe5d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1005923bc; end: 1005923c3; -[SCNComplianceFeature id] */

undefined4 FUN_1005923bc(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 1005923c4; end: 100592537;  */

char * FUN_1005923c4(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    func_0x000107c61174(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
    func_0x000107c61170(param_2);
    FUN_10002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_10007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110883e48,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    FUN_10007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      func_0x000107c60e14(auStack_60[0]);
    }
  }
  pcVar1 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8(pcVar1);
  func_0x000107c5fb78();
  uVar2 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010efba1e0);
  func_0x000107c6142c(0x800000010efba1e0);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    pcVar4 = pcVar1;
    func_0x000107c6148c(pcVar1,puVar3);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      func_0x000107c3ebcc();
    }
    func_0x000107c615e8(pcVar1);
  }
  return pcVar4;
}



/* Entry: 100592538; end: 100592603;  */

long FUN_100592538(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  
  func_0x000107c5fb78();
  uVar1 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010efba1e0);
  func_0x000107c6142c(0x800000010efba1e0);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    lVar3 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c61168(PTR__OBJC_CLASS___NSNumber_1126ae570);
    lVar3 = unaff_x20;
    func_0x000107c6148c(unaff_x20,puVar2);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000107c3ebcc();
    }
    func_0x000107c615e8(unaff_x20);
  }
  return lVar3;
}



/* Entry: 100592604; end: 1005926bb;  */

/* WARNING: Possible PIC construction at 0x00010059269c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005926a0) */

void FUN_100592604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fadc(0xd000000000000034,0x800000010efba1e0);
  func_0x000107c6142c(0x800000010efba1e0);
  func_0x000107c56bcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1005926bc; end: 1005926ef;  */

void FUN_1005926bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005926f0; end: 1005926f7;  */

void FUN_1005926f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1005926f8; end: 100592707; -[_TtC44ComplianceRestrictedAppExperienceServiceImpl40ComplianceRestrictedAppExperienceChecker isRestrictedAppExperience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1005926f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112dc6428);
}



/* Entry: 100592708; end: 100592723; +[SCContentNavigationConfigKeys liteMapThirdTabEnabled] */

void FUN_100592708(void)

{
  if (lRam0000000113517dd8 != -1) {
    func_0x000107c61568(0x113517dd8,0x100592768);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138071e8);
  return;
}



/* Entry: 100592724; end: 1005927b7;  */

void FUN_100592724(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 1005927b8; end: 100592843; -[SCActiveUserNGSNavigationRouter _firstTabType] */

undefined8 FUN_1005927b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c63a0;
  func_0x000107c5b8f8(PTR_PTR_1126c63a0);
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c3ebc4(uVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  if ((int)uVar3 != 0) {
    uVar4 = *(ulong *)(param_1 + 0x140);
    FUN_1005929c0();
    if ((uVar4 & 1) != 0) {
      return 5;
    }
  }
  return 0;
}



/* Entry: 100592844; end: 10059285f; +[SCContentNavigationConfigKeys spotlightMapsTabSwapEnabled] */

void FUN_100592844(void)

{
  if (lRam0000000113517dd0 != -1) {
    func_0x000107c61568(0x113517dd0,FUN_100592860);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138071e0);
  return;
}



/* Entry: 100592860; end: 1005928af;  */

void FUN_100592860(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd00000000000001f;
  func_0x000100442ccc(0xd00000000000001f,0x800000010f1352d0,0);
  uRam00000001138071e0 = uVar1;
  return;
}



/* Entry: 1005928b0; end: 10059293f; -[SCActiveUserNGSNavigationRouter _fourthTabType] */

undefined8 FUN_1005928b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 800) == 1) {
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x140);
    FUN_1005929c0();
  }
  else {
    uVar3 = 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c518();
  if ((int)uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)*(undefined8 *)(param_1 + 0x140);
    FUN_1005929c0();
  }
  func_0x000107c61170(uVar1);
  uVar2 = 5;
  if (((uVar3 | uVar4) & 1) == 0) {
    uVar2 = 3;
  }
  return uVar2;
}



/* Entry: 100592940; end: 1005929bf; -[SCStoriesConfigProviderImplementation switchDiscoverFeedAndSpotlightTab] */

undefined8 FUN_100592940(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3ebcc();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1005929c0; end: 1005929df;  */

long FUN_1005929c0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
               &PTR____CFConstantStringClassReference_110e16b98,1,0);
    return param_1;
  }
  return 1;
}



/* Entry: 1005929e0; end: 100592a73; -[SCActiveUserNGSNavigationRouter _fifthTabType] */

undefined8 FUN_1005929e0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x140);
  FUN_1005929c0();
  lVar2 = param_1;
  func_0x000107c3b74c();
  uVar3 = *(undefined8 *)(param_1 + 0x170);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5c518();
  if ((int)uVar4 == 0) {
    uVar4 = 5;
  }
  else {
    func_0x000107c3b768();
    uVar4 = 3;
    if (param_1 != 5) {
      uVar4 = 5;
    }
  }
  func_0x000107c61170(uVar3);
  if (iVar1 == 0) {
    uVar4 = 4;
  }
  uVar3 = 0;
  if (lVar2 != 5) {
    uVar3 = uVar4;
  }
  return uVar3;
}



/* Entry: 100592a74; end: 100592be3; -[SCActiveUserNGSNavigationRouter _viewTypeToContainerMapWithViewTypes:] */

void FUN_100592a74(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  ppuStack_98 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70f0;
  ppuStack_90 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c70d8;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110dcf0d8;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e607b8;
  ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7150;
  ppuStack_80 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c71b0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e4fe78;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e607d8;
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7108;
  ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c7180;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e607f8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e43018;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c419ac();
  func_0x000107c61180();
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_100592c0c;
  puStack_b8 = &UNK_1109410f0;
  ppuStack_b0 = param_3;
  uStack_a8 = param_1;
  puStack_a0 = puVar1;
  func_0x000107c61174(param_3);
  ppuVar3 = &PTR___NSConcreteGlobalBlock_1109410d0;
  ppuVar2 = param_3;
  FUN_10050471c(param_3,&PTR___NSConcreteGlobalBlock_1109410d0,&puStack_d0);
  func_0x000107c61170(ppuStack_b0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ppuVar2 = ppuVar3;
    func_0x000107c60e78();
    func_0x000107c61174(ppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100592be4; end: 100592c0b;  */

void FUN_100592be4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 100592c0c; end: 100592d27;  */

void FUN_100592c0c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c45340();
  func_0x000107c40808();
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x000107c3bae4();
  func_0x000107c49cec(param_2);
  if ((((uVar2 & 1) == 0) && (lVar1 == 0)) && (*(long *)(*(long *)(param_1 + 0x28) + 800) == 1)) {
    func_0x000107c3bb40();
  }
  func_0x000107c3b434(*(undefined8 *)(param_1 + 0x28));
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c3b16c(uVar4);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c4d9e8(uVar3);
  func_0x000107c61180();
  func_0x000107c53e74(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 100592d28; end: 100592d2f; -[SCActiveUserNGSNavigationRouter _isDeckGestureManagementEnabled] */

undefined8 FUN_100592d28(void)

{
  return 0;
}



/* Entry: 100592d30; end: 100592d37; -[SCActiveUserNGSNavigationRouter _defaultAllowedDirectionsForViewType:] */

undefined8 FUN_100592d30(void)

{
  return 0;
}



/* Entry: 100592d38; end: 100592db7; -[SCActiveUserNGSNavigationRouter _containerWithAllowedDirections:] */

void FUN_100592d38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6e70;
  func_0x000107c610fc(PTR_PTR_1126c6e70);
  func_0x000107c52680();
  func_0x000107c55464(puVar1,param_2,param_1);
  func_0x000107c53fcc(puVar1,param_2,param_1);
  if (*(long *)(param_1 + 800) == 1) {
    func_0x000107c44e50(puVar1,param_2,1);
  }
  func_0x000107c57f28(puVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100592db8; end: 100592f87; -[SCSwipeViewContainerViewController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100592db8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126fce80;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b0ea0;
    func_0x000107c610fc();
    lVar5 = (long)_DAT_112776b04;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c41c10(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126c9ee0;
    func_0x000107c610fc();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776b08);
    *(undefined **)((long)puVar1 + (long)_DAT_112776b08) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61144(auStack_68,puVar1);
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776b0c);
    *(undefined **)((long)puVar1 + (long)_DAT_112776b0c) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(puVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61174(puVar2);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112776b10);
    *(undefined **)((long)puVar1 + (long)_DAT_112776b10) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  return puVar1;
}



/* Entry: 100592f88; end: 100592f8f; -[SCPageLoadTrace init] */

void FUN_100592f88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c033190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithPageName__1125ea660,0);
  return;
}



/* Entry: 100592f90; end: 10059302f; -[SCPageLoadTrace initWithPageName:] */

undefined1 * FUN_100592f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fce88;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
    *(undefined8 *)((long)puVar1 + 0x18) = 0;
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 0;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100593030; end: 10059308f; -[SCSwipeViewContainerViewController setAllowedDirections:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100593030(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_112776b14) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_112776b14) = param_3;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b0c);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c52680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100593090; end: 10059310b;  */

void FUN_100593090(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126da290;
  func_0x000107c610fc(PTR_PTR_1126da290);
  lVar2 = param_1 + 0x20;
  func_0x000107c61148(lVar2);
  func_0x000107c53fcc(puVar1,param_2,lVar2);
  func_0x000107c61170(lVar2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar2 = param_1;
  func_0x000107c3dc20();
  func_0x000107c52680(puVar1,param_2,lVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10059310c; end: 100593193; -[SCPanningTransitionCoordinator init] */

undefined1 * FUN_10059310c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705678;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f4();
    func_0x000107c48c2c();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 0x40));
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100593194; end: 10059319f; -[SCPanningTransitionCoordinator setDelegate:] */

void FUN_100593194(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1005931a0; end: 1005931af; -[SCSwipeViewContainerViewController allowedDirections] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005931a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112776b14);
}



/* Entry: 1005931b0; end: 1005931b7; -[SCPanningTransitionCoordinator setAllowedDirections:] */

void FUN_1005931b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1005931b8; end: 1005931cb; -[SCSwipeViewContainerViewController setInteractionControllerProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005931b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112776b3c,param_3);
  return;
}



/* Entry: 1005931cc; end: 1005931df; -[SCSwipeViewContainerViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005931cc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112776b28,param_3);
  return;
}



/* Entry: 1005931e0; end: 1005931f3; -[SCSwipeViewContainerViewController setRoundCornerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005931e0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112776b40,param_3);
  return;
}



/* Entry: 1005931f4; end: 10059322b; -[SCSwipeViewContainerViewController setDebugName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005931f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112776b34);
  *(undefined8 *)(param_1 + _DAT_112776b34) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10059322c; end: 100593263; -[SCDeckRootContainerProvider setUpDeckRootContainerWithPresenter:] */

void FUN_10059322c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c40b18();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100593264; end: 100593323;  */

void FUN_100593264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df610;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c610fc(puVar1);
  puVar2 = PTR_PTR_1126df608;
  func_0x000107c610f4(PTR_PTR_1126df608);
  func_0x000107c48058();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100593324; end: 100593393; -[SCDeckHierarchyImpl createPrimaryDeckHierarchyRootContainerWithPresenter:] */

void FUN_100593324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  FUN_100593264(param_3,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0x10));
  func_0x000107c61180();
  func_0x000107c611a0(param_1 + 0x20,param_3);
  puVar1 = PTR_PTR_1126df5a8;
  func_0x000107c610f4();
  func_0x000107c480e4();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 100593394; end: 1005936b3; -[SCRootContainer initWithPresenter:bridgingSCUIContainer:transitionEventAnnouncer:currentPageTracker:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100593394(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar2 = PTR_PTR_1126df620;
  func_0x000107c610f4();
  func_0x000107c48e78();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11278c524);
  *(undefined **)(param_1 + _DAT_11278c524) = puVar2;
  func_0x000107c61170(uVar7);
  FUN_1005937d8();
  func_0x000107c61180();
  uVar6 = uVar7;
  FUN_100593844();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126df628;
  func_0x000107c610f4();
  puVar3 = PTR_PTR_1126df630;
  func_0x000107c610fc(PTR_PTR_1126df630);
  func_0x000107c4641c();
  puStack_68 = PTR_PTR_112705558;
  plVar4 = &lStack_70;
  lStack_70 = param_1;
  func_0x000107c61154(plVar4,PTR_s_initWithPresenter_parentContaine_1125ebcb0,param_3,0,uVar7,uVar6,
                      0,0,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  puVar2 = PTR_PTR_1126ce4d0;
  if (plVar4 != (long *)0x0) {
    func_0x000107c61174(param_3);
    func_0x000107c61158(puVar2);
    uVar5 = param_3;
    func_0x000107c6115c(param_3,puVar2);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
    lVar8 = (long)_DAT_11278c528;
    func_0x000107c61174(param_5);
    uVar6 = *(undefined8 *)((long)plVar4 + lVar8);
    *(undefined8 *)((long)plVar4 + lVar8) = param_5;
    func_0x000107c61170(uVar6);
    lVar9 = (long)_DAT_11278c52c;
    uVar6 = *(undefined8 *)((long)plVar4 + lVar9);
    *(ulong *)((long)plVar4 + lVar9) = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c61170(uVar6);
    func_0x000107c592b8(*(undefined8 *)((long)plVar4 + lVar9));
    func_0x000107c5a14c(*(undefined8 *)((long)plVar4 + lVar9));
    lVar8 = (long)_DAT_11278c530;
    func_0x000107c61174(param_4);
    uVar6 = *(undefined8 *)((long)plVar4 + lVar8);
    *(undefined8 *)((long)plVar4 + lVar8) = param_4;
    func_0x000107c61170(uVar6);
    puVar2 = PTR_PTR_1126df638;
    func_0x000107c610f4(PTR_PTR_1126df638);
    func_0x000107c47ac0();
    func_0x000107c5a5ec(plVar4);
    func_0x000107c61170(puVar2);
    func_0x000107c5677c(*(undefined8 *)((long)plVar4 + lVar9));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c3fa94(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)plVar4 + lVar9);
    func_0x000107c5de64(uVar6);
    func_0x000107c61180();
    func_0x000107c52b50();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c3e2c0(*(undefined8 *)((long)plVar4 + lVar8));
    func_0x000107c3be94(plVar4);
    puVar2 = PTR_PTR_1126df640;
    func_0x000107c610f4();
    func_0x000107c47480();
    uVar6 = *(undefined8 *)((long)plVar4 + (long)_DAT_11278c534);
    *(undefined **)((long)plVar4 + (long)_DAT_11278c534) = puVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return plVar4;
}



/* Entry: 1005936b4; end: 100593763; -[SCDeckContainerTransitioner initWithTransitionEventAnnouncer:] */

undefined1 * FUN_1005936b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1127055c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR_PTR_1126df6b8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x20) = 0;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100593764; end: 1005937d7; -[SCGrapheneDeckMetric2 init] */

undefined1 * FUN_100593764(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127055e8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1005937d8; end: 1005937fb;  */

void FUN_1005937d8(void)

{
  func_0x000107c610f4(PTR_PTR_1126df788);
  func_0x000107c46594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1005937fc; end: 100593843; -[SIGModalPresentationPresentationStyle initWithDirection:] */

void FUN_1005937fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112705680;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
  }
  return;
}


