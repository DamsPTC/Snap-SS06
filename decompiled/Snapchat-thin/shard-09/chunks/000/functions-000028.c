/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10684aab0; end: 10684ab13; -[SCMainCameraInteractiveModalTransitionControllerImpl _attachGestureRecognizerToAttachedUIIfNeeded] */

void FUN_10684aab0(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010bed0c40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10684ab14; end: 10684ab7b; -[SCMainCameraInteractiveModalTransitionControllerImpl _attachGestureRecognizerToContainerViewIfNeeded] */

void FUN_10684ab14(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bef9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + 0x28),PTR_s_addGestureRecognizer__11259bdb8);
    return;
  }
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c9c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10684ab7c; end: 10684ab8b; -[SCMainCameraInteractiveModalTransitionControllerImpl _didPan:] */

void FUN_10684ab7c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf78210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_didPan_panGestureRecognizer__1125bba28,param_1,
             param_3);
  return;
}



/* Entry: 10684ab8c; end: 10684ac03; -[SCMainCameraInteractiveModalTransitionControllerImpl _dismissalStyle] */

void FUN_10684ab8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c10f6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf84f20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x000100593844();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10684ac04; end: 10684ac7b; -[SCMainCameraInteractiveModalTransitionControllerImpl _presentationStyle] */

void FUN_10684ac04(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c10f6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10f6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001005937d8();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10684ac7c; end: 10684ace3; -[SCMainCameraInteractiveModalTransitionControllerImpl reset] */

void FUN_10684ac7c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_10684ace4;
    puStack_20 = &UNK_110842e18;
    lStack_18 = param_1;
    func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38);
  }
  return;
}



/* Entry: 10684ace4; end: 10684acef;  */

void FUN_10684ace4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 10684acf0; end: 10684ad17; -[SCMainCameraInteractiveModalTransitionControllerImpl _ui] */

void FUN_10684acf0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10684ad18; end: 10684ad2f; -[SCMainCameraInteractiveModalTransitionControllerImpl delegate] */

void FUN_10684ad18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10684ad30; end: 10684ad3b; -[SCMainCameraInteractiveModalTransitionControllerImpl setDelegate:] */

void FUN_10684ad30(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 10684ad3c; end: 10684ad43; -[SCMainCameraInteractiveModalTransitionControllerImpl isUIPresented] */

undefined1 FUN_10684ad3c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10684ad44; end: 10684ad4b; -[SCMainCameraInteractiveModalTransitionControllerImpl presentationStyleProvider] */

undefined8 FUN_10684ad44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10684ad4c; end: 10684ad7b; -[SCMainCameraInteractiveModalTransitionControllerImpl setPresentationStyleProvider:] */

void FUN_10684ad4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10684ad7c; end: 10684adfb; -[SCMainCameraInteractiveModalTransitionControllerImpl .cxx_destruct] */

void FUN_10684ad7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10684adfc; end: 10684b02f;  */

void FUN_10684adfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar7 = param_1;
  func_0x00010c11c420();
  iVar2 = (int)uVar7;
  func_0x000107fba1e4();
  if (iVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = param_1;
    func_0x000107fba258(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  if (puRam00000001136c4698 == (undefined *)0x0) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    uVar3 = param_2;
    _objc_retain(param_2);
    func_0x0001004fa310();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126afea0);
    uVar4 = uVar3;
    func_0x00010beecc40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar5 = PTR_PTR_1126ce6f8;
    _objc_alloc();
    puVar6 = puVar5;
    func_0x000107d6fab4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c038fc0();
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_2);
    puVar1 = puRam00000001136c4698;
    puRam00000001136c4698 = puVar5;
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(uVar4);
  }
  puVar1 = puRam00000001136c4698;
  _objc_retain(puRam00000001136c4698);
  uVar3 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684b030; end: 10684b037;  */

void FUN_10684b030(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf623f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_customStoryMembersScopeLauncher_1125b62a0);
  return;
}



/* Entry: 10684b038; end: 10684b197; -[SCInteractiveStickersNotificationActionHandler initWithPresentingViewController:customStoriesDataSyncer:customStoryMembersScopeLauncher:startChatDelegate:navigationDelegate:spotlightNavigationDelegate:onInviteAccepted:] */

undefined1 *
FUN_10684b038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f37b0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10684b198; end: 10684b2c7; -[SCInteractiveStickersNotificationActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_10684b198(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c071ae0();
  _objc_release(uVar1);
  if ((int)uVar5 != 0) {
    uVar5 = param_4;
    func_0x00010beee2e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ce700;
    _objc_opt_class(PTR_PTR_1126ce700);
    uVar3 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar2);
    uVar1 = uVar5;
    if ((uVar3 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar5);
    uVar3 = uVar1;
    func_0x00010c0dbb80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar5 = (ulong)(uVar3 != 0);
    if (uVar3 != 0) {
      uVar3 = uVar1;
      func_0x00010c0dbb80(uVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x000107fba30c(uVar3,lVar4,*(undefined8 *)(param_1 + 0x10),
                          *(undefined8 *)(param_1 + 0x18),param_1,*(undefined8 *)(param_1 + 0x38));
      _objc_release(lVar4);
      _objc_release(uVar3);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 10684b2c8; end: 10684b2fb; -[SCInteractiveStickersNotificationActionHandler didDismissCustomStoryMembers] */

void FUN_10684b2c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfe63a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf94c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10684b2fc; end: 10684b357; -[SCInteractiveStickersNotificationActionHandler .cxx_destruct] */

void FUN_10684b2fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10684b358; end: 10684b53f;  */

/* WARNING: Removing unreachable block (ram,0x00010684b42c) */

void FUN_10684b358(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ce708;
  _objc_opt_class(PTR_PTR_1126ce708);
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar3 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar2);
    if ((uVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc();
      func_0x00010bff6b20();
      if (puVar2 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99260();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar5 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar2);
        _objc_alloc(puVar5);
        func_0x00010c008360();
        _objc_release(puVar2);
        puVar4 = (undefined *)0x0;
        _objc_retain(0);
        _objc_retain(puVar5);
        _objc_release(puVar5);
        _objc_release(0);
      }
      _objc_release(puVar2);
      goto LAB_10684b4ec;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99260();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  puVar5 = (undefined *)0x0;
LAB_10684b4ec:
  _objc_release(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  if (puVar4 == (undefined *)0x0) {
    _objc_retain(puVar5);
    puVar2 = puVar5;
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10684b540; end: 10684b57b;  */

void FUN_10684b540(long param_1,ulong param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (((param_2 & 1) == 0) && (param_1 != 0)) {
    func_0x00010bec7fc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684b57c; end: 10684b57f; -[SCDiscoverFeedNavigationServiceImpl showDiscoverFeedWithCompletion:] */

void FUN_10684b57c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beb8bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showDiscoverFeedWithCompletion__11258bc98);
  return;
}



/* Entry: 10684b580; end: 10684b653; -[SCDiscoverFeedNavigationServiceImpl showDiscoverFeedWithNotification:] */

void FUN_10684b580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010beb8bc0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10684b654; end: 10684b687;  */

void FUN_10684b654(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2cfa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684b688; end: 10684b6df; -[SCDiscoverFeedNavigationServiceImpl showDiscoverFeedWithDeepLinkURL:additionalInfo:completion:] */

void FUN_10684b688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010bed8000(param_1,param_2,param_3,param_4);
  func_0x00010beb8bc0(param_1,param_2,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10684b6e0; end: 10684b737; -[SCDiscoverFeedNavigationServiceImpl refreshLocalizedTabBarLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684b6e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be36200();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_112751cc4;
  func_0x00010c216240(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
  func_0x00010c161020(*(undefined8 *)(param_1 + lVar2),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10684b738; end: 10684b93f; -[SCDiscoverFeedNavigationServiceImpl _tabBarItemTapped:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684b738(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined1 auStack_58 [8];
  byte bStack_50;
  byte bStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_112751ca8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c198340();
  _objc_release(lVar1);
  func_0x00010c291fc0(*(undefined8 *)(param_1 + _DAT_112751cc0));
  uVar2 = *(undefined8 *)(param_1 + _DAT_112751cb4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf82300();
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_112751ccc));
  if (*(char *)(param_1 + _DAT_112751cdc) == '\x01') {
    bVar6 = *(byte *)(param_1 + _DAT_112751ce4);
  }
  else {
    bVar6 = 0;
  }
  uVar5 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010010fab4();
  uVar2 = uVar5;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c26d800();
  if ((int)uVar5 != 0) {
    func_0x00010bed7fc0(param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112751cd8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1080a0();
    _objc_release(uVar5);
  }
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  bStack_50 = bVar6 & 1;
  bStack_4f = (byte)((ulong)uVar3 >> 0x3f) ^ 1;
  func_0x00010c10b1c0(param_1);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 10684b940; end: 10684b9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684b940(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      func_0x00010be2fb40(lVar1);
    }
    else if (((*(byte *)(param_1 + 0x29) & 1) != 0) || (*(long *)(lVar1 + _DAT_112751ce8) == 1)) {
      func_0x00010c0d9840(*(undefined8 *)(lVar1 + _DAT_112751ccc));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10684b9cc; end: 10684ba5f; -[SCDiscoverFeedNavigationServiceImpl _getSelectedImageWithName:withFilledButton:] */

void FUN_10684b9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_4 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10684ba60; end: 10684bae7; -[SCDiscoverFeedNavigationServiceImpl attachViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684ba60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112751cec;
  lVar1 = *(long *)(param_1 + lVar3);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar2);
  }
  puStack_38 = PTR_PTR_1126f37b8;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_attachViewController__1125a0c38,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10684bae8; end: 10684bcc3; -[SCDiscoverFeedNavigationServiceImpl exposeFeatureScopeIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684bae8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar4 = (long)_DAT_112751cb8;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 != 0) {
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      return;
    }
  }
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR_PTR_1126aeaf8;
    _objc_alloc(PTR_PTR_1126aeaf8);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c0311a0(puVar2);
    if (*(long *)(param_1 + lVar4) != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_112751cb0);
      lVar1 = param_1 + _DAT_112751cac;
      _objc_loadWeakRetained(lVar1);
      func_0x00010bf24400(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4));
      _objc_release(uVar3);
    }
    func_0x00010c0652e0(*(undefined8 *)(param_1 + _DAT_112751cc0));
    func_0x00010c2652e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09c7a0();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 10684bcc4; end: 10684bd0b;  */

void FUN_10684bcc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0ca40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684bd0c; end: 10684bd0f;  */

void FUN_10684bd0c(void)

{
  return;
}



/* Entry: 10684bd10; end: 10684bd67; -[SCDiscoverFeedNavigationServiceImpl _showDiscoverFeedWithCompletion:] */

void FUN_10684bd10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_retain(param_3);
  func_0x00010bf098c0(puVar1);
  func_0x00010c10b1c0(param_1,param_2,puVar1,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684bd68; end: 10684bdf3; -[SCDiscoverFeedNavigationServiceImpl _handleNotificationPressed:] */

void FUN_10684bd68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010010fab4();
  _objc_release(lVar1);
  if ((lVar1 != 0) && ((int)lVar2 != 0)) {
    func_0x00010c29c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd19a0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684bdf4; end: 10684be4f; -[SCDiscoverFeedNavigationServiceImpl _updateFeedPageEntryTypeWithDeepLinkURL:additionalInfo:] */

void FUN_10684bdf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110ea1438);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c08fa60();
  uVar1 = 10;
  if (lVar2 != 0) {
    uVar1 = 0x21;
  }
  func_0x00010bed7fc0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10684be50; end: 10684bf8b; -[SCDiscoverFeedNavigationServiceImpl _updateFeedPageEntryType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684be50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc0000000;
  uStack_48 = 0x10684bf24;
  puStack_40 = &UNK_110944348;
  ppuVar1 = &puStack_58;
  uStack_38 = param_3;
  _objc_retainBlock();
  lVar3 = param_1;
  func_0x00010c29c100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    ppuVar2 = ppuVar1;
    _objc_retainBlock();
    lVar3 = *(long *)(param_1 + _DAT_112751cec);
    *(undefined ***)(param_1 + _DAT_112751cec) = ppuVar2;
  }
  else {
    func_0x00010c29c100(param_1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar1[2])(ppuVar1,param_1);
    lVar3 = param_1;
  }
  _objc_release(lVar3);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 10684bf8c; end: 10684bff3; -[SCDiscoverFeedNavigationServiceImpl searchWorkflowDidEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684bf8c(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + _DAT_112751cdc) = 1;
  lVar2 = (long)_DAT_112751cd0;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10684bff4; end: 10684c0d3; -[SCDiscoverFeedNavigationServiceImpl _handleSearchViewTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684bff4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112751cd0;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126b5f80;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112751cac;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c038f40(puVar2,param_2,lVar1,0);
  _objc_release(lVar1);
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112751cd4);
    func_0x00010bf23ea0(uVar3,param_2,puVar2,4,param_1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar4),param_2,uVar3);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10684c0d4; end: 10684c1cf; -[SCDiscoverFeedNavigationServiceImpl _subscribeToPageChangeEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684c0d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751ce0);
  func_0x00010bf5f7c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10684c1d0; end: 10684c217;  */

void FUN_10684c1d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc860();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684c218; end: 10684c2e7; -[SCDiscoverFeedNavigationServiceImpl _didChangeCurrentPageEvent:] */

void FUN_10684c218(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0c02c0(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10684c2e8; end: 10684c363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684c2e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    *(char *)(param_1 + _DAT_112751cdc) = (char)puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10684c364; end: 10684c36f;  */

void FUN_10684c364(void)

{
  return;
}



/* Entry: 10684c370; end: 10684c37f; -[SCDiscoverFeedNavigationServiceImpl fromSwipeViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10684c370(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112751ce8);
}



/* Entry: 10684c380; end: 10684c38f; -[SCDiscoverFeedNavigationServiceImpl setFromSwipeViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684c380(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112751ce8) = param_3;
  return;
}



/* Entry: 10684c390; end: 10684c4c3; -[SCDiscoverFeedNavigationServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684c390(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112751cd8,0);
  _objc_storeStrong(param_1 + _DAT_112751cd4,0);
  _objc_storeStrong(param_1 + _DAT_112751cd0,0);
  _objc_storeStrong(param_1 + _DAT_112751cec,0);
  _objc_storeStrong(param_1 + _DAT_112751ce0,0);
  _objc_storeStrong(param_1 + _DAT_112751cc8,0);
  _objc_storeStrong(param_1 + _DAT_112751cb4,0);
  _objc_storeStrong(param_1 + _DAT_112751cc0,0);
  _objc_storeStrong(param_1 + _DAT_112751ccc,0);
  _objc_storeStrong(param_1 + _DAT_112751cbc,0);
  _objc_storeStrong(param_1 + _DAT_112751cc4,0);
  _objc_storeStrong(param_1 + _DAT_112751ca0,0);
  _objc_storeStrong(param_1 + _DAT_112751cb0,0);
  _objc_storeStrong(param_1 + _DAT_112751cb8,0);
  _objc_destroyWeak(param_1 + _DAT_112751cac);
  _objc_destroyWeak(param_1 + _DAT_112751ca8);
  _objc_destroyWeak(param_1 + _DAT_112751ca4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112751c9c,0);
  return;
}



/* Entry: 10684c4c4; end: 10684c537; -[SCGrapheneDfDeeplinkMetric2 init] */

undefined1 * FUN_10684c4c4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f37c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10684c538; end: 10684c5bf; -[SCSpotlightDataProvider initWithSpotlightSpotlightPlaybackManagerInfo:] */

undefined1 * FUN_10684c538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f37c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10684c5c0; end: 10684c5ff; -[SCSpotlightDataProvider currentPageSessionId] */

void FUN_10684c5c0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10684c600; end: 10684c627; -[SCSpotlightDataProvider feedEventEventObservable] */

void FUN_10684c600(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10684c628; end: 10684c66b; -[SCSpotlightDataProvider spotlightViewControllerWillAppear] */

void FUN_10684c628(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126ce710;
  func_0x00010c2a5820(PTR_PTR_1126ce710);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10684c66c; end: 10684c6af; -[SCSpotlightDataProvider spotlightViewControllerDidDisappear] */

void FUN_10684c66c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126ce710;
  func_0x00010bf74a00(PTR_PTR_1126ce710);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10684c6b0; end: 10684c757; -[SCSpotlightDataProvider playbackManagerDidRequestPagination] */

void FUN_10684c6b0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1561c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126ce710;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    lVar1 = lVar2;
    func_0x00010bfa4340(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c067fc0();
    func_0x00010bf79ec0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10684c758; end: 10684c79b; -[SCSpotlightDataProvider spotlightViewControllerWillSwitchFeedType:] */

void FUN_10684c758(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126ce710;
  func_0x00010c2a6f60(PTR_PTR_1126ce710);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10684c79c; end: 10684c7df; -[SCSpotlightDataProvider spotlightViewControllerDidStartPlayingStoryWithId:feedType:] */

void FUN_10684c79c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126ce710;
  func_0x00010bf7bdc0(PTR_PTR_1126ce710);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10684c7e0; end: 10684c80b; -[SCSpotlightDataProvider .cxx_destruct] */

void FUN_10684c7e0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10684c80c; end: 10684c87f; -[SCSpotlightSubFeedContentFetcher initWithSpotlightQueryCoordinator:] */

undefined1 * FUN_10684c80c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f37d0;
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



/* Entry: 10684c880; end: 10684ca83; -[SCSpotlightSubFeedContentFetcher fetchMetadataForFeedType:storiesNumber:querySource:pageSessionId:] */

void FUN_10684c880(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  puVar3 = (undefined *)0x0;
  if (param_4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puStack_68 = puVar1;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_60 = puVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&puStack_68,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b1138;
  _objc_alloc(PTR_PTR_1126b1138);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0127e0(puVar1,param_2,puVar4,puVar3,param_6,5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1158;
  _objc_alloc();
  lVar5 = param_1;
  func_0x00010be5cd60(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c440(puVar2,param_2,lVar5,0,0,0,puVar1);
  _objc_release(lVar5);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c13cfe0();
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (puVar4 < (undefined *)0x8) {
    param_6 = *(undefined8 *)(&PTR_PTR_1109443c8)[(long)puVar4];
    _objc_retain(param_6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 10684ca84; end: 10684cabf; -[SCSpotlightSubFeedContentFetcher _mapQuerySource:] */

void FUN_10684ca84(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 unaff_x19;
  
  if (param_3 < 8) {
    unaff_x19 = *(undefined8 *)(&PTR_PTR_1109443c8)[param_3];
    _objc_retain(unaff_x19);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 10684cac0; end: 10684cacb; -[SCSpotlightSubFeedContentFetcher .cxx_destruct] */

void FUN_10684cac0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10684cacc; end: 10684cb7f; -[SCContentFeedContainerViewController initWithFeedIdentifier:panPolicy:panGestureDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10684cacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f37d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ce718;
    _objc_alloc();
    func_0x00010c0125a0();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112751d00);
    *(undefined **)((long)puVar1 + (long)_DAT_112751d00) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10684cb80; end: 10684cbf3; -[SCContentFeedContainerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684cb80(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f37d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751d00);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c6c0(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 10684cbf4; end: 10684cc67; -[SCContentFeedContainerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684cbf4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f37d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112751d00);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f2c0(uVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 10684cc68; end: 10684cc6f; -[SCContentFeedContainerViewController pageViewName] */

undefined8 FUN_10684cc68(void)

{
  return 0x13c;
}



/* Entry: 10684cc70; end: 10684d00f; -[SCContentFeedContainerViewController _addFullscreenChildViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684cc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar21 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar21);
  func_0x00010bef7700(param_1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2,param_2,uVar21);
  _objc_release(uVar21);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar21;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar22;
  func_0x00010bf493a0(lVar22,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  lStack_90 = lVar4;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar6;
  func_0x00010bf493a0(lVar6,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  lStack_88 = lVar9;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar11;
  func_0x00010bf493a0(lVar11,param_2,uVar13);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  lStack_80 = lVar14;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar16;
  func_0x00010bf493a0(lVar16,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_90,4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1,param_2,puVar20);
  _objc_release(puVar20);
  _objc_release(lVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar21);
  _objc_release(lVar22);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf77e80(param_3);
  _objc_release(param_3);
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  lVar22 = (long)_DAT_112751d04;
  if (*(long *)(param_1 + lVar22) == 0) {
    func_0x00010bdc6f80(param_1,param_2,lVar2);
    _objc_retain(lVar2);
    uVar21 = *(undefined8 *)(param_1 + lVar22);
    *(long *)(param_1 + lVar22) = lVar2;
    _objc_release(uVar21);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10684d010; end: 10684d073; -[SCContentFeedContainerViewController attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684d010(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112751d04;
  if (*(long *)(param_1 + lVar2) == 0) {
    func_0x00010bdc6f80(param_1,param_2,param_3);
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684d074; end: 10684d0d7; -[SCContentFeedContainerViewController detachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684d074(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112751d04;
  func_0x00010bdfb4a0(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684d0d8; end: 10684d133; -[SCContentFeedContainerViewController _detachChildViewController:] */

void FUN_10684d0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c2a6740(param_3,param_2,0);
  uVar1 = param_3;
  func_0x00010c29bf00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
  func_0x00010c12c8e0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10684d134; end: 10684d173; -[SCContentFeedContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10684d134(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112751d04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112751d00,0);
  return;
}



/* Entry: 10684d174; end: 10684d29f; -[SCContentSubFeedTransition initWithPreparation:animation:completion:] */

undefined8 *
FUN_10684d174(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f37e0;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
    puVar2 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    _objc_alloc();
    func_0x00010c00ea00(0x3fc999999999999a);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    if (param_5 != 0) {
      uVar3 = puVar1[1];
      _objc_retain(param_5);
      func_0x00010bef78c0(uVar3);
      _objc_release(param_5);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10684d2a0; end: 10684d2b3;  */

void FUN_10684d2a0(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010684d2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 10684d2b4; end: 10684d2bb; -[SCContentSubFeedTransition updateProgress:] */

void FUN_10684d2b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19efb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setFractionComplete__112645608);
  return;
}



/* Entry: 10684d2bc; end: 10684d2c3; -[SCContentSubFeedTransition complete] */

void FUN_10684d2bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startAnimation_112671138);
  return;
}



/* Entry: 10684d2c4; end: 10684d2ef; -[SCContentSubFeedTransition cancel] */

void FUN_10684d2c4(long param_1,undefined8 param_2)

{
  func_0x00010c1ede40(*(undefined8 *)(param_1 + 8),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010c24dc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startAnimation_112671138);
  return;
}



/* Entry: 10684d2f0; end: 10684d2fb; -[SCContentSubFeedTransition .cxx_destruct] */

void FUN_10684d2f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10684d2fc; end: 10684d4cb; -[SCSpotlightDynamicRanker initWithStoriesConfigProvider:] */

undefined1 * FUN_10684d2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f37e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_new(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x00010c0d9840(uVar4);
    _objc_release(puVar2);
    *(undefined1 *)((long)puVar1 + 0x58) = 1;
    uVar4 = param_3;
    func_0x00010c24afa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf8b9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c1088;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10684d4cc; end: 10684d55b; -[SCSpotlightDynamicRanker updateTrackedStories:] */

void FUN_10684d4cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10684d55c;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10684d55c; end: 10684d567;  */

void FUN_10684d55c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee2850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateTrackedStories__1125963b8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10684d568; end: 10684d60f; -[SCSpotlightDynamicRanker handleInteractionForDedupeFp:sentimentPolarity:confidence:] */

void FUN_10684d568(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10684d610;
  puStack_60 = &UNK_1108763e0;
  lStack_58 = param_2;
  uStack_50 = param_4;
  uStack_48 = param_1;
  uStack_44 = param_5;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_3,&puStack_78);
  _objc_release(uStack_50);
  _objc_release(param_4);
  return;
}



/* Entry: 10684d610; end: 10684d623;  */

void FUN_10684d610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined4 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             PTR_s__handleInteractionForDedupeFp_se_112568508,*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x34));
  return;
}



/* Entry: 10684d624; end: 10684d717; -[SCSpotlightDynamicRanker queryProximitiesFromStory:completionQueue:completion:] */

void FUN_10684d624(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10684d718;
    puStack_68 = &UNK_1108465d0;
    lStack_60 = param_1;
    _objc_retain(param_3);
    uStack_58 = param_3;
    _objc_retain(param_4);
    lStack_50 = param_4;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
    _objc_release(lStack_48);
    _objc_release(lStack_50);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10684d718; end: 10684d727;  */

void FUN_10684d718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__queryProximitiesFromStory_compl_11257eeb0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}



/* Entry: 10684d728; end: 10684d74f; -[SCSpotlightDynamicRanker boostValuesByDedupeFp] */

void FUN_10684d728(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10684d750; end: 10684da8b; -[SCSpotlightDynamicRanker _updateTrackedStories:] */

void FUN_10684d750(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar16;
  undefined8 *unaff_x26;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *puStack_518;
  undefined8 uStack_510;
  code *pcStack_508;
  undefined *puStack_500;
  undefined8 *puStack_4f8;
  undefined8 *puStack_4f0;
  undefined *puStack_4e8;
  undefined8 uStack_4e0;
  code *pcStack_4d8;
  undefined *puStack_4d0;
  undefined8 *puStack_4c8;
  undefined8 *puStack_4c0;
  undefined8 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined **ppuStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined1 **ppuStack_480;
  code *pcStack_478;
  undefined8 *puStack_468;
  undefined8 *puStack_460;
  undefined8 *puStack_458;
  long lStack_450;
  undefined8 *puStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined *apuStack_330 [16];
  long lStack_2b0;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar4 = &uStack_1b0;
  ppuVar15 = apuStack_f0;
  puVar11 = (undefined8 *)0x10;
  puVar3 = param_3;
  puStack_1f8 = param_3;
  func_0x00010bf52a60();
  fVar18 = (float)uVar2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    puVar16 = (undefined8 *)0x0;
    lVar14 = *plStack_1a0;
    lStack_210 = lVar14;
    puStack_208 = puVar13;
    do {
      param_3 = (undefined8 *)0x0;
      puStack_200 = puVar3;
      do {
        if (*plStack_1a0 != lVar14) {
          _objc_enumerationMutation(puStack_1f8);
        }
        unaff_x23 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
        unaff_x24 = *(undefined8 **)(lStack_1a8 + (long)param_3 * 8);
        func_0x00010c259740(unaff_x24);
        func_0x00010c0df880();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar13;
        func_0x00010bf4b900();
        if ((int)puVar4 == 0) {
          puVar4 = unaff_x24;
          func_0x00010bf8dd20();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = puVar4;
          func_0x00010bf529e0();
          _objc_release(puVar4);
          if (unaff_x26 == (undefined8 *)0x0) {
            puVar16 = (undefined8 *)0x1;
          }
          else {
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28));
            func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x30));
            uVar2 = 0;
            uStack_1c8 = 0;
            uStack_1d0 = 0;
            uStack_1b8 = 0;
            uStack_1c0 = 0;
            lStack_1e8 = 0;
            uStack_1f0 = 0;
            uStack_1d8 = 0;
            plStack_1e0 = (long *)0x0;
            func_0x00010bf8dd20();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = unaff_x24;
            func_0x00010bf52a60();
            if (puVar4 != (undefined8 *)0x0) {
              lVar14 = *plStack_1e0;
              do {
                puVar13 = (undefined8 *)0x0;
                do {
                  if (*plStack_1e0 != lVar14) {
                    _objc_enumerationMutation(unaff_x24);
                  }
                  unaff_x26 = *(undefined8 **)(lStack_1e8 + (long)puVar13 * 8);
                  puVar3 = unaff_x26;
                  func_0x00010bf8dd00(unaff_x26);
                  _objc_retainAutoreleasedReturnValue();
                  lVar17 = param_1;
                  func_0x00010be076e0(param_1);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar3);
                  func_0x00010c1d0640(lVar17);
                  _objc_release(lVar17);
                  puVar13 = (undefined8 *)((long)puVar13 + 1);
                } while (puVar4 != puVar13);
                puVar4 = unaff_x24;
                func_0x00010bf52a60();
              } while (puVar4 != (undefined8 *)0x0);
            }
            _objc_release(unaff_x24);
            puVar16 = (undefined8 *)0x1;
            puVar13 = puStack_208;
            lVar14 = lStack_210;
            puVar3 = puStack_200;
          }
        }
        else {
          func_0x00010c12d360(puVar13);
        }
        _objc_release(unaff_x23);
        param_3 = (undefined8 *)((long)param_3 + 1);
      } while (param_3 != puVar3);
      puVar4 = &uStack_1b0;
      ppuVar15 = apuStack_f0;
      puVar11 = (undefined8 *)0x10;
      puVar3 = puStack_1f8;
      func_0x00010bf52a60();
      fVar18 = (float)uVar2;
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puStack_1f8);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar4 = puVar13;
    func_0x00010bed2200(param_1);
  }
  if ((int)puVar16 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c139420();
    if (iVar1 != 0) {
      func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
      puVar4 = (undefined8 *)PTR____NSDictionary0__struct_11034ab58;
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x50));
    }
  }
  _objc_release(puVar13);
  puVar3 = puStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_10684da8c;
  lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar4;
  ppuVar10 = ppuVar15;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  if (puVar4 == (undefined8 *)0x0) goto LAB_10684deec;
  uVar5 = puVar3[7];
  puVar9 = puVar4;
  func_0x00010bf4b900();
  if ((fVar18 <= 0.0) || ((uVar5 & 1) != 0)) goto LAB_10684deec;
  func_0x00010befa120(puVar3[7]);
  unaff_x23 = (undefined8 *)puVar3[6];
  puVar9 = puVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_468 = unaff_x23;
  func_0x00010bf8dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = unaff_x23;
  func_0x00010bf529e0();
  _objc_release(unaff_x23);
  unaff_x24 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    fVar19 = 1.0;
    uVar2 = 0x3f800000;
    fVar23 = fVar19;
    if (fVar18 <= 1.0) {
      fVar23 = fVar18;
    }
    if ((int)ppuVar15 == 0) {
      fVar19 = -1.0;
    }
    uVar6 = puVar3[9];
    func_0x00010c0e00e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar6);
    ppuVar15 = (undefined **)puVar3[4];
    unaff_x23 = puVar3;
    func_0x00010be75720(uVar2);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = puVar3;
    func_0x00010be75720(fVar19);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852f288(ppuVar15,unaff_x23,unaff_x24,1);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    if ((float)uVar2 != 0.0) {
      func_0x00010852f4b8(puVar3[4],(long)(fVar19 * (float)uVar2 * 1000.0));
    }
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
    lStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    plStack_3e0 = (long *)0x0;
    param_3 = puStack_468;
    func_0x00010bf8dd20();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = &uStack_3f0;
    ppuVar10 = apuStack_330;
    puVar11 = (undefined8 *)0x10;
    puVar12 = param_3;
    func_0x00010bf52a60();
    puStack_448 = puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
      lStack_450 = *plStack_3e0;
      ppuVar15 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puStack_460 = param_3;
      puStack_458 = puVar4;
      do {
        puVar13 = (undefined8 *)0x0;
        do {
          if (*plStack_3e0 != lStack_450) {
            _objc_enumerationMutation(puStack_460);
          }
          puVar16 = *(undefined8 **)(lStack_3e8 + (long)puVar13 * 8);
          unaff_x26 = puVar16;
          func_0x00010bf8dd00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = puVar3;
          func_0x00010be076e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          puVar11 = unaff_x23;
          func_0x00010bf529e0();
          if (puVar11 != (undefined8 *)0x0) {
            puVar16 = puVar3;
            puStack_440 = unaff_x23;
            puStack_438 = puVar13;
            func_0x00010be6e4c0();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = 0;
            lStack_428 = 0;
            uStack_430 = 0;
            uStack_418 = 0;
            puStack_420 = (undefined8 *)0x0;
            uStack_408 = 0;
            uStack_410 = 0;
            uStack_3f8 = 0;
            uStack_400 = 0;
            puVar4 = puVar16;
            func_0x00010bf52a60();
            if (puVar4 != (undefined8 *)0x0) {
              unaff_x24 = (undefined8 *)*puStack_420;
              do {
                puVar13 = (undefined8 *)0x0;
                do {
                  if ((undefined8 *)*puStack_420 != unaff_x24) {
                    _objc_enumerationMutation(puVar16);
                  }
                  lVar17 = *(long *)(lStack_428 + (long)puVar13 * 8);
                  lVar14 = lVar17;
                  func_0x00010bf67b00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  fVar18 = (float)uVar5;
                  if (lVar14 != 0) {
                    uVar2 = puVar3[9];
                    lVar14 = lVar17;
                    func_0x00010bf67b00(lVar17);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0e00e0(uVar2);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfb2c80();
                    fVar22 = fVar18;
                    _objc_release(uVar2);
                    _objc_release(lVar14);
                    func_0x00010c150c20(lVar17);
                    fVar20 = fVar22;
                    func_0x00010bf6a220(puVar3[3]);
                    fVar21 = fVar20;
                    func_0x00010bf66640(puVar3[3]);
                    fVar24 = fVar18;
                    if (0.0 < fVar21) {
                      func_0x00010bf66640(puVar3[3]);
                      fVar24 = fVar18 * fVar21;
                    }
                    fVar22 = fVar22 - fVar20;
                    fVar21 = fVar22;
                    if (fVar22 < 0.0) {
                      iVar1 = (int)puVar3[3];
                      func_0x00010c0e8ae0();
                      fVar21 = 0.0;
                      if (iVar1 == 0) {
                        fVar21 = fVar22;
                      }
                    }
                    fVar24 = fVar24 + fVar21 * fVar19 * fVar23;
                    uVar5 = (ulong)(uint)fVar24;
                    if (fVar24 != fVar18) {
                      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      uVar2 = puVar3[9];
                      func_0x00010bf67b00(lVar17);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(uVar2);
                      _objc_release(lVar17);
                      _objc_release(puVar7);
                      puVar12 = (undefined8 *)0x1;
                    }
                  }
                  puVar13 = (undefined8 *)((long)puVar13 + 1);
                } while (puVar4 != puVar13);
                puVar4 = puVar16;
                func_0x00010bf52a60();
                unaff_x26 = (undefined8 *)0x0;
              } while (puVar4 != (undefined8 *)0x0);
            }
            _objc_release(puVar16);
            puVar13 = puStack_438;
            unaff_x23 = puStack_440;
            puVar4 = puStack_458;
          }
          _objc_release(unaff_x23);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar13 != puStack_448);
        puVar9 = &uStack_3f0;
        ppuVar10 = apuStack_330;
        puVar11 = (undefined8 *)0x10;
        puVar8 = puStack_460;
        func_0x00010bf52a60();
        puStack_448 = puVar8;
      } while (puVar8 != (undefined8 *)0x0);
      _objc_release(puStack_460);
      param_3 = puVar12;
      if ((int)puVar12 == 0) goto LAB_10684dee4;
      param_3 = (undefined8 *)puVar3[9];
      puVar13 = (undefined8 *)puVar3[10];
      func_0x00010bf51e00();
      puVar9 = param_3;
      func_0x00010c0d9840(puVar13);
    }
    _objc_release(param_3);
  }
LAB_10684dee4:
  _objc_release(puStack_468);
LAB_10684deec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_478 = FUN_10684df3c;
  puStack_4c0 = unaff_x26;
  puStack_4b8 = puVar16;
  puStack_4b0 = unaff_x24;
  puStack_4a8 = unaff_x23;
  ppuStack_4a0 = ppuVar15;
  puStack_498 = puVar13;
  puStack_490 = puVar3;
  puStack_488 = param_3;
  ppuStack_480 = &puStack_220;
  _objc_retain(puVar9);
  _objc_retain(ppuVar10);
  _objc_retain(puVar11);
  puVar13 = puVar9;
  func_0x00010bf8dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar13;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar16 = puVar3;
  func_0x00010bf8dd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar13 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar16 == (undefined8 *)0x0) {
    puStack_4e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4e0 = 0xc2000000;
    pcStack_4d8 = FUN_10684e164;
    puStack_4d0 = &UNK_110849530;
    puStack_4c8 = puVar11;
    _objc_retain(puVar11);
    func_0x00010007380c(ppuVar10,&puStack_4e8);
    puVar16 = puStack_4c8;
  }
  else {
    func_0x00010c259740(puVar9);
    func_0x00010c0df880(puVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010bf8dd00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar4;
    func_0x00010be076e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar12);
    func_0x00010be6e4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar4;
    func_0x00010050471c();
    puStack_518 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_510 = 0xc2000000;
    pcStack_508 = FUN_10684e1ac;
    puStack_500 = &UNK_11084aaa8;
    puStack_4f8 = puVar12;
    puStack_4f0 = puVar11;
    _objc_retain();
    _objc_retain(puVar11);
    func_0x00010007380c(ppuVar10,&puStack_518);
    _objc_release(puStack_4f8);
    _objc_release(puStack_4f0);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar4);
    puVar11 = puVar13;
  }
  _objc_release(puVar16);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(ppuVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 10684da8c; end: 10684df3b; -[SCSpotlightDynamicRanker _handleInteractionForDedupeFp:sentimentPolarity:confidence:] */

void FUN_10684da8c(float param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined **param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 *unaff_x19;
  undefined8 *puVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *puVar11;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined *puStack_308;
  undefined8 uStack_300;
  code *pcStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined **ppuStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  undefined8 *puStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *apuStack_120 [16];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  ppuVar9 = param_5;
  _objc_retain(param_4);
  if (param_4 == (undefined8 *)0x0) goto LAB_10684deec;
  uVar2 = param_2[7];
  puVar4 = param_4;
  func_0x00010bf4b900();
  if ((param_1 <= 0.0) || ((uVar2 & 1) != 0)) goto LAB_10684deec;
  func_0x00010befa120(param_2[7]);
  unaff_x23 = (undefined8 *)param_2[6];
  puVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = unaff_x23;
  func_0x00010bf8dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = unaff_x23;
  func_0x00010bf529e0();
  _objc_release(unaff_x23);
  unaff_x24 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    fVar14 = 1.0;
    uVar13 = 0x3f800000;
    fVar19 = fVar14;
    if (param_1 <= 1.0) {
      fVar19 = param_1;
    }
    if ((int)param_5 == 0) {
      fVar14 = -1.0;
    }
    uVar3 = param_2[9];
    func_0x00010c0e00e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb2c80();
    _objc_release(uVar3);
    param_5 = (undefined **)param_2[4];
    unaff_x23 = param_2;
    func_0x00010be75720(uVar13);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_2;
    func_0x00010be75720(fVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010852f288(param_5,unaff_x23,unaff_x24,1);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    if ((float)uVar13 != 0.0) {
      func_0x00010852f4b8(param_2[4],(long)(fVar14 * (float)uVar13 * 1000.0));
    }
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    lStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    plStack_1d0 = (long *)0x0;
    unaff_x19 = puStack_258;
    func_0x00010bf8dd20();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = &uStack_1e0;
    ppuVar9 = apuStack_120;
    param_6 = (undefined8 *)0x10;
    puVar10 = unaff_x19;
    func_0x00010bf52a60();
    puStack_238 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
      lStack_240 = *plStack_1d0;
      param_5 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      puStack_250 = unaff_x19;
      puStack_248 = param_4;
      do {
        unaff_x21 = (undefined8 *)0x0;
        do {
          if (*plStack_1d0 != lStack_240) {
            _objc_enumerationMutation(puStack_250);
          }
          unaff_x25 = *(undefined8 **)(lStack_1d8 + (long)unaff_x21 * 8);
          unaff_x26 = unaff_x25;
          func_0x00010bf8dd00();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = param_2;
          func_0x00010be076e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x26);
          puVar4 = unaff_x23;
          func_0x00010bf529e0();
          if (puVar4 != (undefined8 *)0x0) {
            unaff_x25 = param_2;
            puStack_230 = unaff_x23;
            puStack_228 = unaff_x21;
            func_0x00010be6e4c0();
            _objc_retainAutoreleasedReturnValue();
            uVar2 = 0;
            lStack_218 = 0;
            uStack_220 = 0;
            uStack_208 = 0;
            puStack_210 = (undefined8 *)0x0;
            uStack_1f8 = 0;
            uStack_200 = 0;
            uStack_1e8 = 0;
            uStack_1f0 = 0;
            puVar4 = unaff_x25;
            func_0x00010bf52a60();
            if (puVar4 != (undefined8 *)0x0) {
              unaff_x24 = (undefined8 *)*puStack_210;
              do {
                puVar11 = (undefined8 *)0x0;
                do {
                  if ((undefined8 *)*puStack_210 != unaff_x24) {
                    _objc_enumerationMutation(unaff_x25);
                  }
                  lVar12 = *(long *)(lStack_218 + (long)puVar11 * 8);
                  lVar5 = lVar12;
                  func_0x00010bf67b00();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release();
                  fVar15 = (float)uVar2;
                  if (lVar5 != 0) {
                    uVar13 = param_2[9];
                    lVar5 = lVar12;
                    func_0x00010bf67b00(lVar12);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c0e00e0(uVar13);
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010bfb2c80();
                    fVar18 = fVar15;
                    _objc_release(uVar13);
                    _objc_release(lVar5);
                    func_0x00010c150c20(lVar12);
                    fVar16 = fVar18;
                    func_0x00010bf6a220(param_2[3]);
                    fVar17 = fVar16;
                    func_0x00010bf66640(param_2[3]);
                    fVar20 = fVar15;
                    if (0.0 < fVar17) {
                      func_0x00010bf66640(param_2[3]);
                      fVar20 = fVar15 * fVar17;
                    }
                    fVar18 = fVar18 - fVar16;
                    fVar17 = fVar18;
                    if (fVar18 < 0.0) {
                      iVar1 = (int)param_2[3];
                      func_0x00010c0e8ae0();
                      fVar17 = 0.0;
                      if (iVar1 == 0) {
                        fVar17 = fVar18;
                      }
                    }
                    fVar20 = fVar20 + fVar17 * fVar14 * fVar19;
                    uVar2 = (ulong)(uint)fVar20;
                    if (fVar20 != fVar15) {
                      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                      func_0x00010c0df740(PTR__OBJC_CLASS___NSNumber_1126ae570);
                      _objc_retainAutoreleasedReturnValue();
                      uVar13 = param_2[9];
                      func_0x00010bf67b00(lVar12);
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c1d0640(uVar13);
                      _objc_release(lVar12);
                      _objc_release(puVar6);
                      puVar10 = (undefined8 *)0x1;
                    }
                  }
                  puVar11 = (undefined8 *)((long)puVar11 + 1);
                } while (puVar4 != puVar11);
                puVar4 = unaff_x25;
                func_0x00010bf52a60();
                unaff_x26 = (undefined8 *)0x0;
              } while (puVar4 != (undefined8 *)0x0);
            }
            _objc_release(unaff_x25);
            unaff_x21 = puStack_228;
            unaff_x23 = puStack_230;
            param_4 = puStack_248;
          }
          _objc_release(unaff_x23);
          unaff_x21 = (undefined8 *)((long)unaff_x21 + 1);
        } while (unaff_x21 != puStack_238);
        puVar4 = &uStack_1e0;
        ppuVar9 = apuStack_120;
        param_6 = (undefined8 *)0x10;
        puVar11 = puStack_250;
        func_0x00010bf52a60();
        puStack_238 = puVar11;
      } while (puVar11 != (undefined8 *)0x0);
      _objc_release(puStack_250);
      unaff_x19 = puVar10;
      if ((int)puVar10 == 0) goto LAB_10684dee4;
      unaff_x19 = (undefined8 *)param_2[9];
      unaff_x21 = (undefined8 *)param_2[10];
      func_0x00010bf51e00();
      puVar4 = unaff_x19;
      func_0x00010c0d9840(unaff_x21);
    }
    _objc_release(unaff_x19);
  }
LAB_10684dee4:
  _objc_release(puStack_258);
LAB_10684deec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_268 = FUN_10684df3c;
  puStack_2b0 = unaff_x26;
  puStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  ppuStack_290 = param_5;
  puStack_288 = unaff_x21;
  puStack_280 = param_2;
  puStack_278 = unaff_x19;
  puStack_270 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(ppuVar9);
  _objc_retain(param_6);
  puVar10 = puVar4;
  func_0x00010bf8dd20();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  puVar7 = puVar11;
  func_0x00010bf8dd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar7 == (undefined8 *)0x0) {
    puStack_2d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2d0 = 0xc2000000;
    pcStack_2c8 = FUN_10684e164;
    puStack_2c0 = &UNK_110849530;
    puStack_2b8 = param_6;
    _objc_retain(param_6);
    func_0x00010007380c(ppuVar9,&puStack_2d8);
    puVar7 = puStack_2b8;
  }
  else {
    func_0x00010c259740(puVar4);
    func_0x00010c0df880(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar11;
    func_0x00010bf8dd00(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_4;
    func_0x00010be076e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010be6e4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_4;
    func_0x00010050471c();
    puStack_308 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_300 = 0xc2000000;
    pcStack_2f8 = FUN_10684e1ac;
    puStack_2f0 = &UNK_11084aaa8;
    puStack_2e8 = puVar8;
    puStack_2e0 = param_6;
    _objc_retain();
    _objc_retain(param_6);
    func_0x00010007380c(ppuVar9,&puStack_308);
    _objc_release(puStack_2e8);
    _objc_release(puStack_2e0);
    _objc_release(puVar8);
    _objc_release(param_6);
    _objc_release(param_4);
    param_6 = puVar10;
  }
  _objc_release(puVar7);
  _objc_release(param_6);
  _objc_release(puVar11);
  _objc_release(ppuVar9);
  _objc_release(puVar4);
  return;
}



/* Entry: 10684df3c; end: 10684e163; -[SCSpotlightDynamicRanker _queryProximitiesFromStory:completionQueue:completion:] */

void FUN_10684df3c(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf8dd20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf8dd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10684e164;
    puStack_60 = &UNK_110849530;
    puStack_58 = param_5;
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_78);
    puVar4 = puStack_58;
  }
  else {
    func_0x00010c259740(param_3);
    func_0x00010c0df880(puVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf8dd00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010be076e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010be6e4c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = param_1;
    func_0x00010050471c();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10684e1ac;
    puStack_90 = &UNK_11084aaa8;
    puStack_88 = puVar5;
    puStack_80 = param_5;
    _objc_retain();
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_a8);
    _objc_release(puStack_88);
    _objc_release(puStack_80);
    _objc_release(puVar5);
    _objc_release(param_5);
    _objc_release(param_1);
    param_5 = puVar3;
  }
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10684e164; end: 10684e17f;  */

void FUN_10684e164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010684e174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSDictionary0__struct_11034ab58);
  return;
}



/* Entry: 10684e180; end: 10684e1ab;  */

void FUN_10684e180(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c150c20(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithFloat__1126157e8);
  return;
}



/* Entry: 10684e1ac; end: 10684e1bb;  */

void FUN_10684e1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010684e1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10684e1bc; end: 10684e257; -[SCSpotlightDynamicRanker _embeddingDictionaryForId:] */

void FUN_10684e1bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x40);
    func_0x00010c0e00e0(puVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar2,param_3);
    }
    _objc_retain(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10684e258; end: 10684e407; -[SCSpotlightDynamicRanker _untrackDedupeFps:] */

long FUN_10684e258(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar5 = *plStack_1a0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1a0 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_1a8 + lVar6 * 8);
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,0,uVar4);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        lVar2 = *(long *)(param_1 + 0x40);
        func_0x00010bf00d20();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf52a60();
        if (lVar3 != 0) {
          lVar7 = *plStack_1e0;
          do {
            lVar8 = 0;
            do {
              if (*plStack_1e0 != lVar7) {
                _objc_enumerationMutation(lVar2);
              }
              func_0x00010c1d0640(*(undefined8 *)(lStack_1e8 + lVar8 * 8),param_2,0,uVar4);
              lVar8 = lVar8 + 1;
            } while (lVar3 != lVar8);
            lVar3 = lVar2;
            func_0x00010bf52a60(lVar2,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar2);
        lVar6 = lVar6 + 1;
      } while (lVar6 != lVar1);
      lVar1 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  return 0;
}



/* Entry: 10684e408; end: 10684e40f; -[SCSpotlightDynamicRanker _calculateBoostDeltasForEmbedding:targetDedupeFp:embeddingsByDedupeFp:sentimentPolarity:confidence:] */

undefined8 FUN_10684e408(void)

{
  return 0;
}



/* Entry: 10684e410; end: 10684e767; -[SCSpotlightDynamicRanker _orderedTokensByDistanceFrom:targetDedupeFp:scoringMethod:embeddingsByDedupeFp:] */

undefined **
FUN_10684e410(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
             long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 unaff_d8;
  undefined8 uStack_4140;
  long lStack_4138;
  long *plStack_4130;
  undefined8 uStack_4128;
  undefined8 uStack_4120;
  undefined8 uStack_4118;
  undefined8 uStack_4110;
  undefined8 uStack_4108;
  undefined1 auStack_4100 [128];
  undefined4 auStack_4080 [4096];
  long lStack_80;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  lVar10 = param_4;
  func_0x00010c297980();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar10;
  func_0x00010bf529e0();
  _objc_release(lVar10);
  lVar10 = param_4;
  func_0x00010bf8dd00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010c08fa60();
  _objc_release(lVar10);
  fVar14 = (float)param_1;
  ppuVar9 = (undefined **)0x0;
  if ((lVar2 != 0) && (lVar1 != 0)) {
    lVar10 = param_7;
    func_0x00010bf529e0();
    fVar14 = (float)param_1;
    ppuVar9 = (undefined **)0x0;
    if ((lVar10 != 0) && (lVar1 < 0x1001)) {
      if (0 < lVar1) {
        lVar10 = 0;
        do {
          lVar2 = param_4;
          func_0x00010c297980(param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb2c80();
          auStack_4080[lVar10] = (int)param_1;
          _objc_release(lVar13);
          _objc_release(lVar2);
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
      }
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      lVar10 = param_7;
      func_0x00010bf529e0(param_7);
      func_0x00010bf0a0e0(ppuVar3,param_3,lVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar15 = 0;
      lStack_4138 = 0;
      uStack_4140 = 0;
      uStack_4128 = 0;
      plStack_4130 = (long *)0x0;
      uStack_4118 = 0;
      uStack_4120 = 0;
      uStack_4108 = 0;
      uStack_4110 = 0;
      lVar10 = param_7;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar10;
      func_0x00010bf52a60();
      fVar14 = (float)uVar15;
      if (lVar2 != 0) {
        lVar13 = *plStack_4130;
        do {
          lVar12 = 0;
          do {
            if (*plStack_4130 != lVar13) {
              _objc_enumerationMutation(lVar10);
            }
            uVar11 = *(undefined8 *)(lStack_4138 + lVar12 * 8);
            uVar4 = param_5;
            func_0x00010c071f40(param_5,param_3,uVar11);
            if ((uVar4 & 1) == 0) {
              lVar5 = param_7;
              func_0x00010c0e00e0(param_7,param_3,uVar11);
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010c297980();
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar6;
              func_0x00010bf529e0();
              _objc_release(lVar6);
              if (lVar7 == lVar1) {
                if (param_6 == 1) {
                  func_0x00010be053a0(param_2,param_3,auStack_4080,lVar1,lVar5);
                  unaff_d8 = uVar15;
                }
                else if (param_6 == 0) {
                  func_0x00010bde9f00(param_2,param_3,auStack_4080,lVar1,lVar5);
                  unaff_d8 = uVar15;
                }
                puVar8 = PTR_PTR_1126ce720;
                _objc_alloc(PTR_PTR_1126ce720);
                uVar15 = unaff_d8;
                func_0x00010c0099c0();
                func_0x00010befa120(ppuVar3,param_3,puVar8);
                _objc_release(puVar8);
              }
              _objc_release(lVar5);
            }
            lVar12 = lVar12 + 1;
          } while (lVar2 != lVar12);
          lVar2 = lVar10;
          func_0x00010bf52a60(lVar10,param_3,&uStack_4140,auStack_4100,0x10);
          fVar14 = (float)uVar15;
        } while (lVar2 != 0);
      }
      _objc_release(lVar10);
      func_0x00010c246be0(ppuVar3,param_3,PTR_s_compare__1125ae690);
      ppuVar9 = ppuVar3;
      func_0x00010bf51e00(ppuVar3);
      _objc_release(ppuVar3);
    }
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    return ppuVar9;
  }
  ___stack_chk_fail();
  ppuVar9 = &PTR____CFConstantStringClassReference_110e61dd8;
  if (fVar14 == 0.0 || fVar14 < 0.0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110e61df8;
  }
  ppuVar3 = &PTR____CFConstantStringClassReference_110e61db8;
  if (fVar14 != 0.0) {
    ppuVar3 = ppuVar9;
  }
  return ppuVar3;
}



/* Entry: 10684e768; end: 10684e78f; -[SCSpotlightDynamicRanker _polarityString:] */

undefined ** FUN_10684e768(float param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e61dd8;
  if (param_1 == 0.0 || param_1 < 0.0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e61df8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e61db8;
  if (param_1 != 0.0) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10684e790; end: 10684e8df; -[SCSpotlightDynamicRanker _distanceSquaredBetween:vectorCount:embedding:] */

ulong FUN_10684e790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  uint uStack_2413c;
  undefined1 auStack_24138 [16384];
  undefined4 auStack_20138 [4096];
  long lStack_1c138;
  float fStack_1c0d4;
  float fStack_1c0d0;
  float fStack_1c0cc;
  undefined1 auStack_1c0c8 [16384];
  undefined1 auStack_180c8 [16384];
  undefined1 auStack_140c8 [16384];
  undefined4 auStack_100c8 [4096];
  long lStack_c0c8;
  uint uStack_c05c;
  undefined1 auStack_c058 [16384];
  undefined1 auStack_8058 [16384];
  undefined4 auStack_4058 [4096];
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < param_5) {
    lVar9 = 0;
    do {
      uVar2 = param_6;
      func_0x00010c297980();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      auStack_4058[lVar9] = (int)param_1;
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar9 = lVar9 + 1;
    } while (param_5 != lVar9);
  }
  _vDSP_vsub(auStack_4058,1,param_4,1,auStack_8058,1,param_5);
  puVar6 = auStack_c058;
  _vDSP_vmul(auStack_8058,1,auStack_8058,1,puVar6,1,param_5);
  puVar7 = &uStack_c05c;
  _vDSP_sve(auStack_c058,1);
  uVar10 = (ulong)uStack_c05c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar10;
  }
  ___stack_chk_fail();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c0c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar6);
  if (0 < param_5) {
    lVar9 = 0;
    do {
      puVar4 = puVar6;
      func_0x00010c297980();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      auStack_100c8[lVar9] = (int)uVar10;
      _objc_release(puVar5);
      _objc_release(puVar4);
      lVar9 = lVar9 + 1;
    } while (param_5 != lVar9);
  }
  _vDSP_vmul(puVar7,1,auStack_100c8,1,auStack_140c8,1,param_5);
  _vDSP_sve(auStack_140c8,1,&fStack_1c0cc,param_5);
  _vDSP_vmul(puVar7,1,puVar7,1,auStack_180c8,1,param_5);
  _vDSP_sve(auStack_180c8,1,&fStack_1c0d0,param_5);
  puVar4 = auStack_1c0c8;
  _vDSP_vmul(auStack_100c8,1,auStack_100c8,1,puVar4,1,param_5);
  pfVar8 = &fStack_1c0d4;
  _vDSP_sve(auStack_1c0c8,1);
  fVar1 = SQRT(fStack_1c0d0) * SQRT(fStack_1c0d4);
  uVar10 = (ulong)(uint)fVar1;
  fVar11 = 0.0;
  if (fVar1 != 0.0) {
    fVar11 = fStack_1c0cc / fVar1;
  }
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0c8) {
    return (ulong)(uint)fVar11;
  }
  ___stack_chk_fail();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1c138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < param_5) {
    lVar9 = 0;
    do {
      puVar6 = puVar4;
      func_0x00010c297980(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      auStack_20138[lVar9] = (int)uVar10;
      _objc_release(puVar5);
      _objc_release(puVar6);
      lVar9 = lVar9 + 1;
    } while (param_5 != lVar9);
  }
  _vDSP_vmul(pfVar8,1,auStack_20138,1,auStack_24138,1,param_5);
  puVar6 = auStack_24138;
  _vDSP_sve(puVar6,1,&uStack_2413c,param_5);
  uVar10 = (ulong)uStack_2413c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c138) {
    return uVar10;
  }
  ___stack_chk_fail(uVar10);
  _objc_storeStrong(puVar6 + 0x50,0);
  _objc_storeStrong(puVar6 + 0x48,0);
  _objc_storeStrong(puVar6 + 0x40,0);
  _objc_storeStrong(puVar6 + 0x38,0);
  _objc_storeStrong(puVar6 + 0x30,0);
  _objc_storeStrong(puVar6 + 0x28,0);
  _objc_storeStrong(puVar6 + 0x20,0);
  _objc_storeStrong(puVar6 + 0x18,0);
  _objc_storeStrong(puVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 8,0);
  return uVar10;
}



/* Entry: 10684e8e0; end: 10684eacf; -[SCSpotlightDynamicRanker _cosineSimilarityBetween:vectorCount:embedding:] */

ulong FUN_10684e8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long param_5,undefined8 param_6)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  uint uStack_180dc;
  undefined1 auStack_180d8 [16384];
  undefined4 auStack_140d8 [4096];
  long lStack_100d8;
  float fStack_10074;
  float fStack_10070;
  float fStack_1006c;
  undefined1 auStack_10068 [16384];
  undefined1 auStack_c068 [16384];
  undefined1 auStack_8068 [16384];
  undefined4 auStack_4068 [4096];
  long lStack_68;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  if (0 < param_5) {
    lVar8 = 0;
    do {
      uVar2 = param_6;
      func_0x00010c297980();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      auStack_4068[lVar8] = (int)param_1;
      _objc_release(uVar3);
      _objc_release(uVar2);
      lVar8 = lVar8 + 1;
    } while (param_5 != lVar8);
  }
  _vDSP_vmul(param_4,1,auStack_4068,1,auStack_8068,1,param_5);
  _vDSP_sve(auStack_8068,1,&fStack_1006c,param_5);
  _vDSP_vmul(param_4,1,param_4,1,auStack_c068,1,param_5);
  _vDSP_sve(auStack_c068,1,&fStack_10070,param_5);
  puVar6 = auStack_10068;
  _vDSP_vmul(auStack_4068,1,auStack_4068,1,puVar6,1,param_5);
  pfVar7 = &fStack_10074;
  _vDSP_sve(auStack_10068,1);
  fVar1 = SQRT(fStack_10070) * SQRT(fStack_10074);
  uVar9 = (ulong)(uint)fVar1;
  fVar10 = 0.0;
  if (fVar1 != 0.0) {
    fVar10 = fStack_1006c / fVar1;
  }
  _objc_release(param_6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lStack_100d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if (0 < param_5) {
      lVar8 = 0;
      do {
        puVar4 = puVar6;
        func_0x00010c297980(puVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        auStack_140d8[lVar8] = (int)uVar9;
        _objc_release(puVar5);
        _objc_release(puVar4);
        lVar8 = lVar8 + 1;
      } while (param_5 != lVar8);
    }
    _vDSP_vmul(pfVar7,1,auStack_140d8,1,auStack_180d8,1,param_5);
    puVar6 = auStack_180d8;
    _vDSP_sve(puVar6,1,&uStack_180dc,param_5);
    uVar9 = (ulong)uStack_180dc;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_100d8) {
      return uVar9;
    }
    ___stack_chk_fail(uVar9);
    _objc_storeStrong(puVar6 + 0x50,0);
    _objc_storeStrong(puVar6 + 0x48,0);
    _objc_storeStrong(puVar6 + 0x40,0);
    _objc_storeStrong(puVar6 + 0x38,0);
    _objc_storeStrong(puVar6 + 0x30,0);
    _objc_storeStrong(puVar6 + 0x28,0);
    _objc_storeStrong(puVar6 + 0x20,0);
    _objc_storeStrong(puVar6 + 0x18,0);
    _objc_storeStrong(puVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(puVar6 + 8,0);
    return uVar9;
  }
  return (ulong)(uint)fVar10;
}



/* Entry: 10684ead0; end: 10684ebf3; -[SCSpotlightDynamicRanker _dotProductBetween:vectorCount:embedding:] */

void FUN_10684ead0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined4 uStack_805c;
  undefined1 auStack_8058 [16384];
  undefined4 auStack_4058 [4096];
  long lStack_58;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (0 < param_5) {
    lVar4 = 0;
    do {
      uVar1 = param_6;
      func_0x00010c297980(param_6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      auStack_4058[lVar4] = param_1;
      _objc_release(uVar2);
      _objc_release(uVar1);
      lVar4 = lVar4 + 1;
    } while (param_5 != lVar4);
  }
  _vDSP_vmul(param_4,1,auStack_4058,1,auStack_8058,1,param_5);
  puVar3 = auStack_8058;
  _vDSP_sve(puVar3,1,&uStack_805c,param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail(uStack_805c);
  _objc_storeStrong(puVar3 + 0x50,0);
  _objc_storeStrong(puVar3 + 0x48,0);
  _objc_storeStrong(puVar3 + 0x40,0);
  _objc_storeStrong(puVar3 + 0x38,0);
  _objc_storeStrong(puVar3 + 0x30,0);
  _objc_storeStrong(puVar3 + 0x28,0);
  _objc_storeStrong(puVar3 + 0x20,0);
  _objc_storeStrong(puVar3 + 0x18,0);
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 8,0);
  return;
}



/* Entry: 10684ebf4; end: 10684ec83; -[SCSpotlightDynamicRanker .cxx_destruct] */

void FUN_10684ebf4(long param_1)

{
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


