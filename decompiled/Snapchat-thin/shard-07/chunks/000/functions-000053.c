/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105100d0c; end: 105100d3b; -[SCCommunitiesProfileMembersSectionNativeBridge setMembersActionHandler:] */

void FUN_105100d0c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105100d3c; end: 105100d43; -[SCCommunitiesProfileMembersSectionNativeBridge navigator] */

undefined8 FUN_105100d3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105100d44; end: 105100d73; -[SCCommunitiesProfileMembersSectionNativeBridge setNavigator:] */

void FUN_105100d44(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105100d74; end: 105100d8b; -[SCCommunitiesProfileMembersSectionNativeBridge presentingViewController] */

void FUN_105100d74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105100d8c; end: 105100dcf; -[SCCommunitiesProfileMembersSectionNativeBridge .cxx_destruct] */

void FUN_105100d8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105100dd0; end: 105100e9b; -[SCCommunitiesProfileSaturnAppNativeBridge initWithValdiRuntimeProvider:saturnUpsellTrayScopeExposer:saturnSocialContextProvider:] */

undefined1 *
FUN_105100dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e62b8;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105100e9c; end: 105100fd7; -[SCCommunitiesProfileSaturnAppNativeBridge openSaturnAppOrShowUpsellWithUserId:schoolName:schoolColor:] */

void FUN_105100e9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      &PTR____CFConstantStringClassReference_110dc60b8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar4);
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80();
  _objc_release(puVar3);
  _objc_retain(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105100fd8; end: 10510103b;  */

void FUN_105100fd8(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfbb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar2,PTR_s_fulfillWithSuccessValue__1125cc768,PTR____kCFBooleanTrue_11034ab68);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be482f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__launchSaturnUpsellTray_11256fa58);
  return;
}



/* Entry: 10510103c; end: 10510114f; -[SCCommunitiesProfileSaturnAppNativeBridge _launchSaturnUpsellTray] */

void FUN_10510103c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      func_0x00010bfbb700();
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010be7e360(param_1);
    }
    else {
      _objc_initWeak(auStack_28,param_1);
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x00010bfaa580(lVar1);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
    _objc_release(lVar1);
  }
  return;
}



/* Entry: 105101150; end: 105101197;  */

void FUN_105101150(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e360();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105101198; end: 10510132b; -[SCCommunitiesProfileSaturnAppNativeBridge _presentSaturnUpsellTrayWithSocialContext:] */

void FUN_105101198(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    func_0x00010c08fa60();
    bVar1 = lVar2 != 0;
  }
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar3,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b3d58;
  _objc_alloc(PTR_PTR_1126b3d58);
  lVar2 = param_3;
  func_0x00010bfb8520(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_3;
  func_0x00010bfb7d00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_3;
  func_0x00010c154bc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_3;
    func_0x00010c276640();
  }
  func_0x00010c056c20(puVar4,param_2,puVar3,0,3,2,0,lVar2,lVar5,lVar6,lVar7,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),bVar1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar8);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10510132c; end: 10510139b; -[SCCommunitiesProfileSaturnAppNativeBridge saturnUpsellTrayDidDismiss] */

void FUN_10510132c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bfbb700(*(long *)(param_1 + 0x18),param_2,PTR____kCFBooleanFalse_11034ab60);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10510139c; end: 1051013a7; -[SCCommunitiesProfileSaturnAppNativeBridge pushToValdiMarshaller:] */

void FUN_10510139c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1051013a8; end: 1051013bf; -[SCCommunitiesProfileSaturnAppNativeBridge presentingViewController] */

void FUN_1051013a8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051013c0; end: 1051013cb; -[SCCommunitiesProfileSaturnAppNativeBridge setPresentingViewController:] */

void FUN_1051013c0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1051013cc; end: 105101433; -[SCCommunitiesProfileSaturnAppNativeBridge .cxx_destruct] */

void FUN_1051013cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 105101434; end: 1051014d7; -[SCCommunitiesProfileStorySectionNativeBridge initWithAddToStoryCameraScopeExposer:addToStoryCameraScopeBuilder:] */

undefined1 *
FUN_105101434(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e62c0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051014d8; end: 105101667; -[SCCommunitiesProfileStorySectionNativeBridge launchPostToGroupStoryFlowWithGroupId:] */

void FUN_1051014d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b47c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c01f260();
  puVar2 = PTR_PTR_1126ae6c0;
  func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  puVar4 = puVar3;
  func_0x000108f581a4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e6c0(puVar3,param_2,0,0,param_3,puVar4,0,0);
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar5 = PTR_PTR_1126b1bb0;
  func_0x00010bf81d20(PTR_PTR_1126b1bb0,param_2,puVar4,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  lVar6 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar6);
  func_0x00010bf237e0(uVar7,param_2,puVar5,lVar6,param_1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,uVar7);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105101668; end: 1051016d7; -[SCCommunitiesProfileStorySectionNativeBridge dismissCameraScope:] */

void FUN_105101668(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051016d8; end: 1051016e3; -[SCCommunitiesProfileStorySectionNativeBridge pushToValdiMarshaller:] */

void FUN_1051016d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1051016e4; end: 1051016fb; -[SCCommunitiesProfileStorySectionNativeBridge presentingViewController] */

void FUN_1051016e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051016fc; end: 105101707; -[SCCommunitiesProfileStorySectionNativeBridge setPresentingViewController:] */

void FUN_1051016fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105101708; end: 10510173f; -[SCCommunitiesProfileStorySectionNativeBridge .cxx_destruct] */

void FUN_105101708(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105101740; end: 1051019bb; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge initWithCustomStoriesDataFetcher:myStoriesDataCoordinator:readReceiptCoordinator:startChatDelegate:storiesPlaybackDataProvider:contentProductPlaybackScopeExposer:storiesGrapheneMetricsEmitter:friendUserId:currentUserId:docObjectContext:contentProductPlaybackScopeServices:] */

undefined8 *
FUN_105101740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126e62c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_storeWeak(puVar1 + 5,param_6);
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
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[9];
    puVar1[9] = param_13;
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



/* Entry: 1051019bc; end: 105101c47; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge getGroupDescriptionWithGroupId:] */

void FUN_1051019bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x58) == *(long *)(param_1 + 0x60)))
  {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c0f7460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x105101b00;
    puStack_40 = &UNK_110867908;
    _objc_retain(param_3);
    lVar1 = param_1;
    lStack_38 = param_3;
    func_0x00010c0b8600(param_1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lStack_38;
  }
  else {
    func_0x00010be1f840(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105101c48; end: 105101edb; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge getGroupStoryWithGroupId:] */

void FUN_105101c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_60 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf62640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0e0500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c258b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf625c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = auStack_68;
  _objc_copyWeak(auStack_70,puVar8);
  uVar6 = uVar5;
  func_0x00010bf41860(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar8,PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 105101edc; end: 105101ee3;  */

void FUN_105101edc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 105101ee4; end: 105101f63;  */

void FUN_105101ee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde2560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105101f64; end: 1051020a7; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge getGroupImageWithGroupId:] */

void FUN_105101f64(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x58) == 0) || (*(long *)(param_1 + 0x58) == *(long *)(param_1 + 0x60)))
  {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar1;
    func_0x00010c0f7460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1051020a8;
    puStack_40 = &UNK_110867a08;
    _objc_retain(param_3);
    lVar1 = param_1;
    lStack_38 = param_3;
    func_0x00010c0b8600(param_1,param_2,&puStack_58);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lStack_38;
  }
  else {
    func_0x00010be1f840(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1051020a8; end: 10510245b;  */

void FUN_1051020a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x00010bfa2680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_2;
      func_0x00010bfa2680();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf0a5c0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = lVar3;
      func_0x00010c120160();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c08fa60();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        puVar7 = (undefined *)0x0;
      }
      else {
        puVar7 = PTR_PTR_1126b1428;
        _objc_alloc(PTR_PTR_1126b1428);
        lVar1 = lVar3;
        func_0x00010c120160(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0038e0(puVar7);
        _objc_release(lVar1);
        puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        lVar1 = lVar3;
        func_0x00010c0c54a0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff6b20(puVar4);
        _objc_release(lVar1);
        puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        lVar1 = lVar3;
        func_0x00010c0c5480(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff6b20(puVar5);
        _objc_release(lVar1);
        puVar6 = PTR_PTR_1126b1430;
        _objc_alloc(PTR_PTR_1126b1430);
        func_0x00010c020ba0();
        func_0x00010c195c60(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      _objc_release(lVar3);
      goto LAB_105102274;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_105102274:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10510245c; end: 1051024bb; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge playGroupStoryWithGroupId:sourceView:] */

void FUN_10510245c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x50) = param_1;
  func_0x00010bde7f60(param_2,param_3,param_4,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051024bc; end: 10510271f; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge _contentPlaybackScopePlayGroupStoryWithGroupId:sourceView:] */

void FUN_1051024bc(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  puVar1 = PTR_PTR_1126b4d28;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c04dcc0();
  puVar2 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c04bca0(puVar2,param_3,7,0x90,(long)(param_1 * 1000.0),8,puVar1,param_4,0,0);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar5 = param_5;
  func_0x00010b9688dc(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar4 = param_2 + 0x68;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bff7200(puVar3,param_3,uVar5,lVar4,0,param_2,0,1,0,0);
  _objc_release(lVar4);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126b4d38;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf42f40(puVar6,param_3,uVar5,param_4,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  dVar10 = *(double *)(param_2 + 0x50);
  func_0x00010bff0a00(dVar10);
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  func_0x00010bf22a20(uVar5,param_3,puVar2,puVar3,0,7,puVar6,puVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  dVar11 = *(double *)(param_2 + 0x50);
  _CACurrentMediaTime();
  uVar8 = 8;
  func_0x000108534a80(8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar10 - dVar11) * 1000.0),uVar9,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,uVar8);
  _objc_release(uVar8);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x38),param_3,uVar5);
  _objc_release(uVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105102720; end: 1051027bf; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge _getGroupMetadataWithGroupId:] */

void FUN_105102720(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf62680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051027c0; end: 1051027cb; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge pushToValdiMarshaller:] */

void FUN_1051027c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8e4d4(param_3,param_1);
  func_0x00010af8e448();
  func_0x00010af8e440();
  func_0x00010af8e370();
  func_0x00010af8e3a0();
  return;
}



/* Entry: 1051027cc; end: 105102813; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge playbackPresenterDidTearDown:playbackScope:] */

void FUN_1051027cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105102814; end: 10510293b; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge _communitiesStorySummaryInfoFromStorySnapsWithPlaybackSequence:viewStates:metadata:] */

void FUN_105102814(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar3 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  lVar3 = 0;
  if ((param_5 != 0) && (lVar1 != 0)) {
    lVar1 = param_3;
    func_0x00010c11ac00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c25b340(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    FUN_1050f5288(lVar1,lVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      lVar1 = param_5;
      func_0x00010bf85d80(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20dac0(lVar3);
      _objc_release(lVar1);
      _objc_retain(lVar3);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10510293c; end: 105102953; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge presentingViewController] */

void FUN_10510293c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105102954; end: 10510295f; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge setPresentingViewController:] */

void FUN_105102954(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 105102960; end: 1051029ff; -[SCCommunitiesSiblingProfileIdentitySectionNativeBridge .cxx_destruct] */

void FUN_105102960(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105102a00; end: 105102ad7; -[SCNewChatsScope initWithUIContainer:preselectedUserIds:delegate:source:createButtonExtensionType:] */

undefined1 *
FUN_105102a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e62d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105102ad8; end: 105102adf; -[SCNewChatsScope uiContainer] */

undefined8 FUN_105102ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105102ae0; end: 105102b0f; -[SCNewChatsScope setUiContainer:] */

void FUN_105102ae0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105102b10; end: 105102b17; -[SCNewChatsScope preselectedUserIds] */

undefined8 FUN_105102b10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105102b18; end: 105102b47; -[SCNewChatsScope setPreselectedUserIds:] */

void FUN_105102b18(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105102b48; end: 105102b5f; -[SCNewChatsScope delegate] */

void FUN_105102b48(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105102b60; end: 105102b6b; -[SCNewChatsScope setDelegate:] */

void FUN_105102b60(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 105102b6c; end: 105102b73; -[SCNewChatsScope source] */

undefined8 FUN_105102b6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105102b74; end: 105102b7b; -[SCNewChatsScope setSource:] */

void FUN_105102b74(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 105102b7c; end: 105102b83; -[SCNewChatsScope createButtonExtensionType] */

undefined8 FUN_105102b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105102b84; end: 105102b8b; -[SCNewChatsScope setCreateButtonExtensionType:] */

void FUN_105102b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 105102b8c; end: 105102bc3; -[SCNewChatsScope .cxx_destruct] */

void FUN_105102b8c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105102bc4; end: 105102c37; -[SCCommunitiesMemberDataServices initWithMembersDataProvider:] */

undefined1 * FUN_105102bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e62d8;
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



/* Entry: 105102c38; end: 105102c3f; -[SCCommunitiesMemberDataServices membersDataProvider] */

undefined8 FUN_105102c38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105102c40; end: 105102c4b; -[SCCommunitiesMemberDataServices .cxx_destruct] */

void FUN_105102c40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105102c4c; end: 105102e77; -[SCCommunitiesPromptNotificationEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105102c4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105102e78;
  uStack_60 = 0x105102e88;
  lVar5 = (long)_DAT_11271c60c;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = lVar2;
  _objc_release(lVar1);
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained();
  _objc_initWeak(auStack_88,param_1);
  param_1 = param_1 + _DAT_11271c610;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar2);
  _objc_retain(lVar5);
  _objc_copyWeak(auStack_90,auStack_88);
  func_0x00010bf62500(lVar3);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_90);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar5);
  _objc_release(lVar2);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(lStack_58);
  return;
}



/* Entry: 105102e78; end: 105102e8f;  */

void FUN_105102e78(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105102e90; end: 105102f7b;  */

void FUN_105102e90(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    func_0x00010bf42e00(*(undefined8 *)(param_1 + 0x20));
  }
  lVar1 = param_2;
  func_0x00010bfa2680(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  func_0x00010c0bfcc0(lVar1);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 105102f7c; end: 105102f7f;  */

void FUN_105102f7c(void)

{
  return;
}



/* Entry: 105102f80; end: 105102fe3;  */

void FUN_105102f80(long param_1,undefined8 param_2)

{
  func_0x00010c22d240(param_2);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be48280();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105102fe4; end: 105102feb;  */

void FUN_105102fe4(void)

{
  return;
}



/* Entry: 105102fec; end: 1051031fb; -[SCCommunitiesPromptNotificationEntryPoint _launchReplyCameraWithDisplayName:groupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105102fec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  lVar1 = param_4;
  _objc_retain();
  func_0x000108f581a4();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    _objc_retain(param_3);
    _objc_release(lVar1);
    lVar1 = param_3;
  }
  puVar3 = PTR_PTR_1126b47c8;
  _objc_alloc();
  func_0x00010c01f260();
  puVar4 = PTR_PTR_1126ae6c0;
  func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  func_0x00010c03e6c0();
  _objc_release(param_4);
  puVar6 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar7 = PTR_PTR_1126b1bb0;
  func_0x00010bf81d20(PTR_PTR_1126b1bb0,param_2,puVar6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11271c614;
  _objc_loadWeakRetained(lVar2);
  lVar8 = param_1 + _DAT_11271c60c;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar2;
  func_0x00010bf237e0(lVar2,param_2,puVar7,lVar9,param_1,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271c618),param_2,lVar10);
  _objc_release(lVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051031fc; end: 1051032c3; -[SCCommunitiesPromptNotificationEntryPoint dismissCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051031fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_11271c618;
  lVar1 = *(long *)(param_1 + lVar2);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 == param_3) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar3 = (long)_DAT_11271c60c;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar3;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf42e00(lVar2,param_2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051032c4; end: 105103317; -[SCCommunitiesPromptNotificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051032c4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271c618,0);
  _objc_destroyWeak(param_1 + _DAT_11271c614);
  _objc_destroyWeak(param_1 + _DAT_11271c610);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c60c);
  return;
}



/* Entry: 105103318; end: 1051033bb; -[SCCommunitiesReengagementBillboardEligibilityProvider initWithCustomStoriesDataFetcher:circumstanceEngine:] */

undefined1 *
FUN_105103318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e62e0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051033bc; end: 1051033c3; -[SCCommunitiesReengagementBillboardEligibilityProvider preCheckSource] */

undefined8 FUN_1051033bc(void)

{
  return 0xb;
}



/* Entry: 1051033c4; end: 1051035df; -[SCCommunitiesReengagementBillboardEligibilityProvider eligibleWithRequestor:campaignName:] */

void FUN_1051033c4(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x000108060964();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf19e60();
  if ((uVar3 & 1) == 0) {
    puVar7 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar4 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010beffde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_retain(lVar5);
    lVar4 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        uVar9 = *(ulong *)(lVar10 * 8);
        uVar3 = uVar9;
        func_0x00010c27dd80();
        if ((uVar3 == 7) && (uVar3 = uVar9, func_0x00010bf60900(), (int)uVar3 != 0)) {
          func_0x00010c0f4aa0();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar9;
          func_0x00010bf529e0();
          uVar6 = uVar2;
          func_0x00010c0c78c0();
          _objc_release(uVar9);
          if ((ulong)(long)(int)uVar6 <= uVar3) {
            puVar7 = PTR_PTR_1126ae558;
            func_0x00010bfe9ca0(PTR_PTR_1126ae558);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar5);
            goto LAB_105103590;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar5;
      func_0x00010bf52a60();
    }
    _objc_release(lVar5);
    puVar7 = PTR_PTR_1126ae558;
    func_0x00010bfe9ca0(PTR_PTR_1126ae558);
    _objc_retainAutoreleasedReturnValue();
LAB_105103590:
    _objc_release(lVar5);
  }
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(uVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(uVar2 + 8,0);
  return;
}



/* Entry: 1051035e0; end: 10510360f; -[SCCommunitiesReengagementBillboardEligibilityProvider .cxx_destruct] */

void FUN_1051035e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105103610; end: 10510370f; -[SCCommunitiesReengagementBillboardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105103610(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b4d60;
  _objc_alloc(PTR_PTR_1126b4d60);
  lVar2 = param_1 + _DAT_11271c624;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11271c628;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007d80(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_11271c62c;
    _objc_loadWeakRetained(lVar2);
  }
  lVar4 = lVar2;
  func_0x00010c1018e0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105103710; end: 10510375f; -[SCCommunitiesReengagementBillboardEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105103710(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c624);
  _objc_destroyWeak(param_1 + _DAT_11271c628);
  _objc_destroyWeak(param_1 + _DAT_11271c630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c62c);
  return;
}



/* Entry: 105103760; end: 1051037cb; -[SCCommunitiesStorySnapThumbnailComposerLoader supportedURLSchemes] */

void FUN_105103760(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dc60d8;
  puVar6 = (undefined8 *)0x1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)pppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c08fa60();
    if (puVar3 == (undefined1 *)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dc6118;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar6 = ppuVar5;
    }
    else {
      puVar3 = (undefined1 *)pppuVar1;
      func_0x00010c0e00e0(pppuVar1,param_2,&PTR____CFConstantStringClassReference_110dba818);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c08fa60();
      if (puVar4 == (undefined1 *)0x0) {
        ppuVar5 = &PTR____CFConstantStringClassReference_110dc6138;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar6 = ppuVar5;
      }
      else {
        _objc_alloc(PTR_PTR_1126b4d68);
        func_0x00010c04da40();
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(pppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051037cc; end: 1051038cf; -[SCCommunitiesStorySnapThumbnailComposerLoader requestPayloadWithURL:error:] */

void FUN_1051037cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dc6118;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar5 = (undefined *)0x0;
    *param_4 = ppuVar4;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dba818);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110dc6138;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar5 = (undefined *)0x0;
      *param_4 = ppuVar4;
    }
    else {
      puVar5 = PTR_PTR_1126b4d68;
      _objc_alloc(PTR_PTR_1126b4d68);
      func_0x00010c04da40();
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1051038d0; end: 105103aaf; -[SCCommunitiesStorySnapThumbnailComposerLoader loadImageWithRequestPayload:parameters:completion:] */

void FUN_1051038d0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126b4d68;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b2798;
  _objc_opt_new();
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c259cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_80,auStack_68);
  _objc_retain(param_6);
  uStack_78 = param_4;
  uStack_70 = param_5;
  func_0x00010c11d5e0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_retain(puVar2);
  _objc_release(param_6);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105103ab0; end: 105103b0b;  */

void FUN_105103ab0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be140c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105103b0c; end: 105103d47; -[SCCommunitiesStorySnapThumbnailComposerLoader _fetchSnapWithThumbnailParams:playbackSequence:completion:cancelableGroup:parameters:] */

void FUN_105103b0c(undefined **param_1,undefined8 param_2,undefined **param_3,long param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined **unaff_x23;
  undefined8 uVar14;
  long unaff_x24;
  undefined **ppuVar15;
  long unaff_x27;
  undefined **unaff_x28;
  undefined *puVar16;
  undefined *puStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_1c8;
  long lStack_1c0;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined **ppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  ulong uStack_138;
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
  uVar10 = param_6;
  uStack_150 = param_7;
  uStack_148 = param_8;
  ppuStack_140 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_5);
  uStack_138 = param_6;
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_4;
  func_0x00010bf52a60();
  if (lVar11 != 0) {
    unaff_x24 = *plStack_120;
    unaff_x27 = lVar11;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_4);
        }
        ppuVar15 = *(undefined ***)(lStack_128 + lVar11 * 8);
        unaff_x28 = ppuVar15;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = param_3;
        func_0x00010c23f800();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = unaff_x28;
        ppuVar7 = ppuVar1;
        func_0x00010c0720c0();
        _objc_release(ppuVar1);
        _objc_release(unaff_x28);
        if (((ulong)unaff_x23 & 1) != 0) {
          _objc_retain(ppuVar15);
          _objc_release(param_4);
          ppuVar1 = ppuStack_140;
          if (ppuVar15 == (undefined **)0x0) goto LAB_105103c70;
          goto LAB_105103c8c;
        }
        lVar11 = lVar11 + 1;
      } while (unaff_x27 != lVar11);
      unaff_x27 = param_4;
      func_0x00010bf52a60();
    } while (unaff_x27 != 0);
  }
  _objc_release(param_4);
LAB_105103c70:
  ppuVar1 = ppuStack_140;
  ppuVar15 = ppuStack_140;
  ppuVar7 = param_3;
  func_0x00010be13f60();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar15 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc6158;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar1;
    (**(code **)(param_5 + 0x10))(param_5,0);
    _objc_release(ppuVar1);
    uVar12 = uStack_138;
  }
  else {
LAB_105103c8c:
    uVar12 = uStack_138;
    uVar2 = uStack_138;
    func_0x00010c06e0e0();
    if ((uVar2 & 1) == 0) {
      ppuVar7 = ppuVar15;
      uVar10 = param_5;
      func_0x00010be4eae0(ppuVar1);
    }
  }
  _objc_release(ppuVar15);
  _objc_release(uVar12);
  _objc_release(param_5);
  ppuVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_290;
  pcStack_158 = FUN_105103d48;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1b0 = unaff_x28;
  lStack_1a8 = unaff_x27;
  ppuStack_1a0 = ppuVar15;
  lStack_198 = param_4;
  lStack_190 = unaff_x24;
  ppuStack_188 = unaff_x23;
  ppuStack_180 = ppuVar1;
  uStack_178 = uVar12;
  uStack_170 = param_5;
  ppuStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar7);
  puVar4 = ppuVar3[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar7;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_1c8 = ppuVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf62640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  puStack_290 = (undefined *)0x0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  puVar13 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar13 = puVar4;
  func_0x00010bf52a60();
  if (puVar13 != (undefined *)0x0) {
    lVar11 = *plStack_280;
    do {
      puVar16 = (undefined *)0x0;
      do {
        if (*plStack_280 != lVar11) {
          _objc_enumerationMutation(puVar4);
        }
        uVar14 = *(undefined8 *)(lStack_288 + (long)puVar16 * 8);
        uVar9 = uVar14;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar7;
        func_0x00010c23f800();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar9;
        ppuVar8 = ppuVar1;
        func_0x00010c0720c0();
        _objc_release(ppuVar1);
        _objc_release(uVar9);
        if ((int)uVar6 != 0) {
          _objc_retain(uVar14);
          goto LAB_105103f08;
        }
        puVar16 = puVar16 + 1;
      } while (puVar13 != puVar16);
      puVar13 = puVar4;
      ppuVar8 = &puStack_290;
      func_0x00010bf52a60();
    } while (puVar13 != (undefined *)0x0);
  }
  uVar14 = 0;
LAB_105103f08:
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar10);
  _objc_retain(ppuVar8);
  ppuVar1 = ppuVar8;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar15 = ppuVar8;
    func_0x000107d22fdc(ppuVar8,0,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = ppuVar8;
    func_0x00010c26d760(ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar8);
    ppuVar15 = ppuVar3;
    func_0x000107d227d0(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar3;
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar1);
  puVar13 = ppuVar7[3];
  uVar9 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar10);
  func_0x00010c11da60(puVar13);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uVar10);
  _objc_release(ppuVar15);
  return;
}



/* Entry: 105103d48; end: 105103f5f; -[SCCommunitiesStorySnapThumbnailComposerLoader _fetchSnapForAdditionalStoriesWithThumbnailParams:] */

void FUN_105103d48(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 *puStack_78;
  long lStack_70;
  
  puVar8 = &uStack_140;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf62640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar1 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar13 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(lVar5);
        }
        uVar11 = *(undefined8 *)(lStack_138 + lVar13 * 8);
        uVar9 = uVar11;
        func_0x00010bf3cf60();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_3;
        func_0x00010c23f800();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        puVar8 = (undefined8 *)puVar2;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        _objc_release(uVar9);
        if ((int)uVar10 != 0) {
          _objc_retain(uVar11);
          goto LAB_105103f08;
        }
        lVar13 = lVar13 + 1;
      } while (lVar1 != lVar13);
      lVar1 = lVar5;
      puVar8 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar11 = 0;
LAB_105103f08:
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_6);
  _objc_retain(puVar8);
  puVar2 = (undefined1 *)puVar8;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined1 *)0x0) {
    puVar7 = (undefined1 *)puVar8;
    func_0x000107d22fdc(puVar8,0,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar6 = (undefined1 *)puVar8;
    func_0x00010c26d760(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    puVar7 = puVar6;
    func_0x000107d227d0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = (undefined8 *)puVar6;
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  uVar10 = *(undefined8 *)(param_3 + 0x18);
  uVar9 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c11da60(uVar10);
  _objc_release(uVar9);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(puVar7);
  return;
}



/* Entry: 105103f60; end: 1051040b3; -[SCCommunitiesStorySnapThumbnailComposerLoader _loadThumbnailForSnap:parameters:completion:] */

void FUN_105103f60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26d760();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_3;
    func_0x000107d22fdc(param_3,0,0,1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_3;
    func_0x00010c26d760(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = lVar2;
    func_0x000107d227d0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    param_3 = lVar2;
  }
  _objc_release(param_3);
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  func_0x00010c11da60(uVar5);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(lVar3);
  return;
}



/* Entry: 1051040b4; end: 105104167;  */

void FUN_1051040b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc6178;
    func_0x000108543ce4(&PTR____CFConstantStringClassReference_110dc6178);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,0,ppuVar2);
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar1,0);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 105104168; end: 1051041a3; -[SCCommunitiesStorySnapThumbnailComposerLoader .cxx_destruct] */

void FUN_105104168(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051041a4; end: 1051041f3; -[SCCommunitiesStorySnapThumbnailComposerLoaderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051041a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c648);
  _objc_destroyWeak(param_1 + _DAT_11271c640);
  _objc_destroyWeak(param_1 + _DAT_11271c644);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271c64c);
  return;
}



/* Entry: 1051041f4; end: 10510429f; -[SCCommunitiesStorySnapThumbnailParams initWithStoryId:snapClientId:] */

undefined1 *
FUN_1051041f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e62f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051042a0; end: 1051042c3; -[SCCommunitiesStorySnapThumbnailParams copyWithZone:] */

undefined8 FUN_1051042a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1051042c4; end: 105104337; -[SCCommunitiesStorySnapThumbnailParams hash] */

undefined8 * FUN_1051042c4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_1051043b8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1051043c4;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_1051043c4;
        }
        goto LAB_1051043b8;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1051043c4:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105104338; end: 1051043df; -[SCCommunitiesStorySnapThumbnailParams isEqual:] */

long FUN_105104338(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1051043b8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1051043c4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_1051043c4;
        }
        goto LAB_1051043b8;
      }
    }
    lVar3 = 0;
  }
LAB_1051043c4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1051043e0; end: 1051043e7; -[SCCommunitiesStorySnapThumbnailParams storyId] */

undefined8 FUN_1051043e0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1051043e8; end: 1051043ef; -[SCCommunitiesStorySnapThumbnailParams snapClientId] */

undefined8 FUN_1051043e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1051043f0; end: 10510441f; -[SCCommunitiesStorySnapThumbnailParams .cxx_destruct] */

void FUN_1051043f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105104420; end: 105104807; -[SCCommunityActionMenuEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105104420(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  
  lVar15 = (long)_DAT_11271c658;
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_11271c65c;
  _objc_loadWeakRetained();
  lVar17 = lVar1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar17);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126b4d78;
  _objc_alloc();
  lVar17 = (long)_DAT_11271c660;
  lVar1 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c08e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar7 = lVar17;
  func_0x00010c08e1c0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + _DAT_11271c664);
  lVar3 = param_1 + _DAT_11271c668;
  _objc_loadWeakRetained();
  lVar18 = lVar3;
  func_0x00010befc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271c688;
  _objc_loadWeakRetained(lVar8);
  lVar9 = param_1 + _DAT_11271c66c;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf42de0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271c670;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0391a0(puVar5,param_2,lVar2,lVar6,lVar7,uVar16,lVar18,lVar8,lVar10,lVar12,
                      *(undefined8 *)(param_1 + _DAT_11271c674));
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar18);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar13 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar14 = PTR_PTR_1126b4d80;
  _objc_alloc();
  lVar1 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1 + _DAT_11271c678;
  _objc_loadWeakRetained();
  lVar6 = lVar17;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar15;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + lVar15;
  _objc_loadWeakRetained(lVar15);
  lVar18 = lVar15;
  func_0x00010c08bda0();
  lVar8 = param_1 + _DAT_11271c67c;
  _objc_loadWeakRetained();
  lVar10 = lVar8;
  func_0x00010bf1cf00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271c680;
  _objc_loadWeakRetained();
  lVar12 = lVar9;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c018fa0(puVar14,param_2,lVar11,lVar4,lVar6,puVar13,lVar7,lVar18,lVar10,lVar12);
  lVar18 = (long)_DAT_11271c684;
  uVar16 = *(undefined8 *)(param_1 + lVar18);
  *(undefined **)(param_1 + lVar18) = puVar14;
  _objc_release(uVar16);
  _objc_release(lVar12);
  _objc_release(lVar9);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar15);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar17);
  _objc_release(lVar11);
  _objc_release(lVar1);
  func_0x00010bf192c0(*(undefined8 *)(param_1 + lVar18));
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105104808; end: 1051048ff; -[SCCommunityActionMenuEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105104808(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271c66c);
  _objc_storeStrong(param_1 + _DAT_11271c674,0);
  _objc_storeStrong(param_1 + _DAT_11271c664,0);
  _objc_destroyWeak(param_1 + _DAT_11271c670);
  _objc_destroyWeak(param_1 + _DAT_11271c698);
  _objc_destroyWeak(param_1 + _DAT_11271c694);
  _objc_destroyWeak(param_1 + _DAT_11271c690);
  _objc_destroyWeak(param_1 + _DAT_11271c680);
  _objc_destroyWeak(param_1 + _DAT_11271c68c);
  _objc_destroyWeak(param_1 + _DAT_11271c688);
  _objc_destroyWeak(param_1 + _DAT_11271c668);
  _objc_destroyWeak(param_1 + _DAT_11271c67c);
  _objc_destroyWeak(param_1 + _DAT_11271c660);
  _objc_destroyWeak(param_1 + _DAT_11271c65c);
  _objc_destroyWeak(param_1 + _DAT_11271c678);
  _objc_destroyWeak(param_1 + _DAT_11271c658);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271c684,0);
  return;
}



/* Entry: 105104900; end: 105104ac7; -[SCCommunityActionMenuRouteActionsImpl initWithPresentingViewController:leaveCustomStoryLauncher:leaveCustomStoryScopeServices:communitiesOnboardingScopeExposer:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:communitiesProfileScopeLauncher:circumstanceEngine:communitySharingScopeExposer:] */

undefined1 *
FUN_105104900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

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
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126e62f8;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
    _objc_release(uVar2);
  }
  _objc_release(param_11);
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



/* Entry: 105104ac8; end: 105104f07; -[SCCommunityActionMenuRouteActionsImpl presentMyProfileCommunityActionMenuWithDelegate:] */

void FUN_105104ac8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = param_1 + 0x50;
  lVar8 = param_3;
  _objc_storeWeak(lVar6,param_3);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000108f57de4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar2 = puVar1;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar6);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000108f57acc();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f180();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar3 = puVar1;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar6);
  puVar1 = PTR_PTR_1126b10a0;
  func_0x000108f58d74();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ec240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar4 = puVar1;
  func_0x00010bf1d200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(lVar6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  lVar6 = *(long *)(param_1 + 0x40);
  func_0x0001080608cc();
  puVar5 = PTR_PTR_1126b10a0;
  if ((int)lVar6 != 0) {
    func_0x000108061d08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15cfa0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    puVar7 = puVar5;
    func_0x00010bf1d200(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar6);
    func_0x00010befa120(puVar1);
    _objc_release(puVar7);
    lVar6 = param_3;
    _objc_release(param_3);
  }
  puVar5 = PTR_PTR_1126b10a0;
  func_0x000108f57b2c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb42c0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  puVar7 = puVar5;
  func_0x00010bf1d200(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar6);
  puVar5 = PTR_PTR_1126b10a8;
  _objc_alloc(PTR_PTR_1126b10a8);
  func_0x00010c019f40();
  lVar6 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c18b5e0(puVar5);
  _objc_release(lVar6);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10af80();
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(uVar10);
  func_0x00010bf83000(lVar8);
  _objc_release(uVar10);
  return;
}



/* Entry: 105104f08; end: 105104f7b;  */

void FUN_105104f08(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105104f7c; end: 105104f83;  */

void FUN_105104f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectLaunchCommunityProfile_1125bc450);
  return;
}



/* Entry: 105104f84; end: 105104ff7;  */

void FUN_105104f84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105104ff8; end: 105104fff;  */

void FUN_105104ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectLeaveCommunity_1125bc458);
  return;
}



/* Entry: 105105000; end: 105105073;  */

void FUN_105105000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 105105074; end: 10510507b;  */

void FUN_105105074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7a650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectAddToStory_1125bc338);
  return;
}



/* Entry: 10510507c; end: 1051050ef;  */

void FUN_10510507c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1051050f0; end: 1051050f7;  */

void FUN_1051050f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7aff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didSelectShareCommunity_1125bc5a0);
  return;
}



/* Entry: 1051050f8; end: 10510516b;  */

void FUN_1051050f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010bf83000(param_2);
  _objc_release(uVar1);
  return;
}



/* Entry: 10510516c; end: 105105173;  */

void FUN_10510516c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf73c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_didComplete_1125ba8c8);
  return;
}


