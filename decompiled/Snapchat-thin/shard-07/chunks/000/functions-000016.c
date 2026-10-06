/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105040198; end: 1050401eb; -[SCFriendUnifiedActionMenuSettingsActionHandler _logShareOutfitTap] */

void FUN_105040198(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c15ffa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af680(uVar2,param_2,uVar1,0x6a,*(undefined8 *)(param_1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050401ec; end: 105040313; -[SCFriendUnifiedActionMenuSettingsActionHandler _presentAvatarBuilderForAIBot] */

void FUN_1050401ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar2 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126afdc8;
  _objc_opt_new(PTR_PTR_1126afdc8);
  func_0x00010c2ae460();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8f40(puVar3,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b52c0(puVar3,param_2,2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0xa0);
  puVar4 = puVar3;
  func_0x00010bf21f60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23c20(uVar6,param_2,puVar1,puVar4,param_1,0x18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f040();
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105040314; end: 1050403c7; -[SCFriendUnifiedActionMenuSettingsActionHandler addFriendsActionHandler] */

void FUN_105040314(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b4128;
  _objc_alloc();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  puVar2 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar3 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c038f40(puVar2,param_2,lVar3,1);
  func_0x00010c049d60(puVar1,param_2,uVar4,puVar2,*(undefined8 *)(param_1 + 200));
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(lVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1050403c8; end: 10504048b; -[SCFriendUnifiedActionMenuSettingsActionHandler editNameActionHandler] */

void FUN_1050403c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126b4130;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar4 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c038f40(puVar3,param_2,lVar4,1);
  func_0x00010c049ce0(puVar2,param_2,uVar5,uVar1,uVar6,puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar2;
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10504048c; end: 1050404bf; -[SCFriendUnifiedActionMenuSettingsActionHandler shareFriendActionManagerTappedSendUsername] */

void FUN_10504048c(long param_1)

{
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb90c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050404c0; end: 1050404f3; -[SCFriendUnifiedActionMenuSettingsActionHandler shareFriendActionManagerDidSendUsername] */

void FUN_1050404c0(long param_1)

{
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb90a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050404f4; end: 105040527; -[SCFriendUnifiedActionMenuSettingsActionHandler shareFriendActionManagerWillDismissSendUsername] */

void FUN_1050404f4(long param_1)

{
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb90a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105040528; end: 10504052b; -[SCFriendUnifiedActionMenuSettingsActionHandler shareFriendActionManagerTappedExportURL] */

void FUN_105040528(void)

{
  return;
}



/* Entry: 10504052c; end: 10504052f; -[SCFriendUnifiedActionMenuSettingsActionHandler shareFriendActionManagerDidCompleteExport:completed:activityError:] */

void FUN_10504052c(void)

{
  return;
}



/* Entry: 105040530; end: 105040563; -[SCFriendUnifiedActionMenuSettingsActionHandler shareUsernameActionHandlerWillPresentShareFriendViewController] */

void FUN_105040530(long param_1)

{
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb90c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105040564; end: 105040597; -[SCFriendUnifiedActionMenuSettingsActionHandler shareUsernameActionHandlerWillDismissShareFriendViewController] */

void FUN_105040564(long param_1)

{
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb90a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105040598; end: 1050405cb; -[SCFriendUnifiedActionMenuSettingsActionHandler reportSnapchatterActionHandlerWillPresentReportPageViewController] */

void FUN_105040598(long param_1)

{
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb90c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1050405cc; end: 1050405ff; -[SCFriendUnifiedActionMenuSettingsActionHandler reportSnapchatterActionHandlerWillDismissReportPageViewController] */

void FUN_1050405cc(long param_1)

{
  param_1 = param_1 + 0xe0;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb90a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105040600; end: 105040647; -[SCFriendUnifiedActionMenuSettingsActionHandler shareFriendWorkflowCompleted] */

void FUN_105040600(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x60);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x60));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105040648; end: 1050406ef; -[SCFriendUnifiedActionMenuSettingsActionHandler _handleTapClearConversation] */

void FUN_105040648(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126b2a28;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf85460(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1050406f0; end: 105040723;  */

void FUN_1050406f0(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bde0140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105040724; end: 10504082b; -[SCFriendUnifiedActionMenuSettingsActionHandler _clearConversation] */

void FUN_105040724(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1 + 0xe0;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2a5c60(lVar1,param_2,param_1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c24a7c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2;
      func_0x00010bfa3d00();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
  }
  else {
    lVar4 = lVar1;
    func_0x00010bfa3d00();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3b440();
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10504082c; end: 1050409e7; -[SCFriendUnifiedActionMenuSettingsActionHandler _handleSettingsTapWithProfileId:] */

void FUN_10504082c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar2 = param_1 + 0xd8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f40(puVar1,param_2,lVar2,1);
  _objc_release(lVar2);
  puVar3 = PTR_PTR_1126b0ea8;
  _objc_opt_new(PTR_PTR_1126b0ea8);
  func_0x00010c19a840();
  puVar4 = PTR_PTR_1126b0eb0;
  _objc_opt_new(PTR_PTR_1126b0eb0);
  func_0x00010c1e4340(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c116d60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e4140();
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c116d60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c199d60();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c116d60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1acca0();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c116d60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b220();
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c116d60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ab40();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c0f14e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08c020();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050409e8; end: 105040a1b; -[SCFriendUnifiedActionMenuSettingsActionHandler bitmojiAvatarBuilderCancelled] */

void FUN_1050409e8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105040a1c; end: 105040a4f; -[SCFriendUnifiedActionMenuSettingsActionHandler bitmojiAvatarBuilderCompleted] */

void FUN_105040a1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105040a50; end: 105040a83; -[SCFriendUnifiedActionMenuSettingsActionHandler bitmojiAvatarBuilderFailedWithError:] */

void FUN_105040a50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105040a84; end: 105040acb; -[SCFriendUnifiedActionMenuSettingsActionHandler bitmojiFriendProfileSharingScopeDidDismiss:] */

void FUN_105040a84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x68);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x68));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105040acc; end: 105040ae3; -[SCFriendUnifiedActionMenuSettingsActionHandler presentingViewController] */

void FUN_105040acc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105040ae4; end: 105040afb; -[SCFriendUnifiedActionMenuSettingsActionHandler delegate] */

void FUN_105040ae4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105040afc; end: 105040b07; -[SCFriendUnifiedActionMenuSettingsActionHandler setDelegate:] */

void FUN_105040afc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xe0,param_3);
  return;
}



/* Entry: 105040b08; end: 105040c4f; -[SCFriendUnifiedActionMenuSettingsActionHandler .cxx_destruct] */

void FUN_105040b08(long param_1)

{
  _objc_destroyWeak(param_1 + 0xe0);
  _objc_destroyWeak(param_1 + 0xd8);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
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



/* Entry: 105040c50; end: 105040c63; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 tag] */

void FUN_105040c50(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 105040c64; end: 105040d7f; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 initWithDataSource:conversationServices:conversationServicesPerformer:circumstanceEngine:] */

undefined1 *
FUN_105040c64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e5bd0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b4138;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010c17c5e0(*(undefined8 *)((long)puVar1 + 8));
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105040d80; end: 105040e27; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 dispatchStartObservingScreenCapture] */

void FUN_105040d80(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105040e28; end: 105040e53;  */

void FUN_105040e28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105040e54; end: 105040efb; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 dispatchStopObservingScreenCapture] */

void FUN_105040e54(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105040efc; end: 105040f27;  */

void FUN_105040efc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105040f28; end: 105040fef; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 dispatchUpdateObservingScreenCaptureForSnapchatter] */

void FUN_105040f28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 105040ff0; end: 105041057;  */

void FUN_105040ff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100bf119c();
  _objc_release(uVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  if ((int)uVar2 == 0) {
    func_0x00010be72a60();
  }
  else {
    func_0x00010be72a20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105041058; end: 105041073; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 _performStartObservingScreenCaptureIfNeeded] */

void FUN_105041058(long param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c24fa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_startObservingScreenCapture_1126718b8);
  return;
}



/* Entry: 105041074; end: 10504108f; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 _performStopObservingScreenCaptureIfNeeded] */

void FUN_105041074(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010c2564f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 8),PTR_s_stopObservingScreenCapture_112673360);
    return;
  }
  return;
}



/* Entry: 105041090; end: 105041113; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 didScreenshot] */

void FUN_105041090(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf50600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf50280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503a0(uVar2,param_2,uVar3,0,1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105041114; end: 105041197; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 didScreenrecord] */

void FUN_105041114(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf50600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf50280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf503a0(uVar2,param_2,uVar3,1,1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105041198; end: 10504119f; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 isPrivateProfileTabActivated] */

undefined1 FUN_105041198(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 1050411a0; end: 1050411e7; -[SCFriendUnifiedActionScreenCaptureHelperImplV1 .cxx_destruct] */

void FUN_1050411a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050411e8; end: 10504128b; -[SCShareUsernameActionHandler initWithSnapchatter:shareFriendScopeExposer:] */

undefined1 *
FUN_1050411e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5bd8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10504128c; end: 10504142b; -[SCShareUsernameActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined ** FUN_10504128c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = &PTR____CFConstantStringClassReference_110eb9cf8;
  func_0x00010bfe5ec0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0(&PTR____CFConstantStringClassReference_110eb9cf8,param_2,param_4);
  _objc_release(param_4);
  if ((int)ppuVar4 != 0) {
    param_4 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(param_4,param_2,lVar1,1);
    _objc_release(lVar1);
    puVar2 = PTR_PTR_1126b4140;
    _objc_alloc(PTR_PTR_1126b4140);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = lVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057400(puVar2,param_2,param_4,uVar5,puVar3,param_1,param_1);
    _objc_release(puVar3);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b40d8;
    func_0x00010c10f280(PTR_PTR_1126b40d8,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_4);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar4;
  }
  ___stack_chk_fail();
  ppuVar4 = (undefined **)(param_4 + 0x20);
  _objc_loadWeakRetained(ppuVar4);
  func_0x00010c22b220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar4);
  return ppuVar4;
}



/* Entry: 10504142c; end: 105041457; -[SCShareUsernameActionHandler shareFriendViewControllerWillDismiss] */

void FUN_10504142c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c22b220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105041458; end: 10504149f; -[SCShareUsernameActionHandler shareFriendWorkflowCompleted] */

void FUN_105041458(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050414a0; end: 1050414b7; -[SCShareUsernameActionHandler presentingViewController] */

void FUN_1050414a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050414b8; end: 1050414c3; -[SCShareUsernameActionHandler setPresentingViewController:] */

void FUN_1050414b8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1050414c4; end: 1050414db; -[SCShareUsernameActionHandler delegate] */

void FUN_1050414c4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050414dc; end: 1050414e7; -[SCShareUsernameActionHandler setDelegate:] */

void FUN_1050414dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 1050414e8; end: 105041527; -[SCShareUsernameActionHandler .cxx_destruct] */

void FUN_1050414e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105041528; end: 105041baf; -[SCFriendProfileEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105041528(long param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  puVar3 = PTR_PTR_1126b4148;
  _objc_alloc();
  lVar4 = param_1 + _DAT_11271a2f4;
  _objc_loadWeakRetained(lVar4);
  func_0x00010c0301e0(puVar3,param_2,lVar4);
  _objc_release(lVar4);
  lVar4 = param_1 + _DAT_11271a2f8;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010bf1c460();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf5e220();
  *(long *)(param_1 + _DAT_11271a2fc) = lVar7;
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar8 = PTR_PTR_1126aeb48;
  _objc_alloc();
  func_0x00010c0404c0();
  puVar9 = PTR_PTR_1126b4150;
  _objc_alloc();
  lVar14 = (long)_DAT_11271a300;
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar4);
  lVar5 = param_1 + _DAT_11271a304;
  _objc_loadWeakRetained(lVar5);
  lVar6 = param_1 + _DAT_11271a308;
  _objc_loadWeakRetained(lVar6);
  lVar7 = param_1 + _DAT_11271a30c;
  _objc_loadWeakRetained(lVar7);
  lVar10 = param_1 + _DAT_11271a310;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c041e60(puVar9,param_2,lVar4,puVar8,lVar5,lVar6,lVar7,lVar11);
  lVar16 = (long)_DAT_11271a314;
  uVar15 = *(undefined8 *)(param_1 + lVar16);
  *(undefined **)(param_1 + lVar16) = puVar9;
  _objc_release(uVar15);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar9 = PTR_PTR_1126afdd8;
  lVar4 = param_1;
  func_0x00010bebe660(param_1);
  func_0x00010bfc8740(puVar9,param_2,lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    _objc_release(lVar4);
  }
  else {
    lVar6 = param_1 + lVar14;
    _objc_loadWeakRetained();
    lVar7 = lVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010c08fa60();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    if (lVar10 != 0) {
      lVar4 = param_1 + _DAT_11271a318;
      _objc_loadWeakRetained(lVar4);
      lVar5 = lVar4;
      func_0x00010bf5f860();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bebe660(param_1);
      func_0x00010c2514c0(lVar5,param_2,lVar6,0xeb);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1 + _DAT_11271a31c;
      _objc_loadWeakRetained();
      lVar5 = lVar4;
      func_0x00010c0f98e0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0f9920();
      _objc_retainAutoreleasedReturnValue();
      uVar15 = *(undefined8 *)(param_1 + _DAT_11271a320);
      *(long *)(param_1 + _DAT_11271a320) = lVar7;
      _objc_release(uVar15);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1 + lVar14;
      _objc_loadWeakRetained();
      lVar6 = lVar4;
      func_0x00010bfb8820();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = param_1 + lVar14;
      _objc_loadWeakRetained();
      lVar7 = lVar4;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1 + _DAT_11271a330;
      _objc_loadWeakRetained(lVar5);
      lVar10 = lVar5;
      func_0x00010c293740();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar7;
      func_0x00010c0720c0(lVar7,param_2,lVar11);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar5);
      _objc_release(lVar7);
      _objc_release(lVar4);
      if ((int)lVar12 == 0) {
        lVar14 = param_1 + lVar14;
        _objc_loadWeakRetained();
        lVar4 = lVar14;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0720c0();
        _objc_release(lVar4);
        _objc_release(lVar14);
        if ((int)lVar5 != 0) {
          puVar13 = PTR_PTR_1126b4158;
          func_0x00010c26ab40(PTR_PTR_1126b4158);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be7df20(param_1,param_2,puVar13);
          goto LAB_105041b64;
        }
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_105041bb0;
        puStack_70 = &UNK_110863f38;
        lStack_68 = param_1;
        func_0x00010bfa95e0(*(undefined8 *)(param_1 + lVar16),param_2,6,&puStack_88);
      }
      else {
        lVar4 = lVar6;
        func_0x00010c247980();
        if (lVar4 == 0x36) {
          lVar4 = lVar6;
          func_0x00010c0daca0();
          if ((lVar4 == -0x50fe1120) && (lVar4 = lVar6, func_0x00010c0dac60(), lVar4 == 0x30)) {
            lVar4 = param_1 + lVar14;
            _objc_loadWeakRetained(lVar4);
            lVar5 = lVar4;
            func_0x00010c08b520();
            bVar1 = lVar5 == 0;
            _objc_release(lVar4);
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
        lVar4 = lVar6;
        func_0x00010c247980();
        if ((lVar4 == 0x2b) && (lVar4 = lVar6, func_0x00010c0dac60(), lVar4 == 0x2f)) {
          lVar4 = param_1 + lVar14;
          _objc_loadWeakRetained(lVar4);
          lVar5 = lVar4;
          func_0x00010c08b520();
          bVar2 = lVar5 == 0;
          _objc_release(lVar4);
        }
        else {
          bVar2 = false;
        }
        puVar13 = PTR_PTR_1126b3550;
        _objc_alloc(PTR_PTR_1126b3550);
        lVar4 = param_1 + lVar14;
        _objc_loadWeakRetained(lVar4);
        lVar5 = lVar4;
        func_0x00010c27ece0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = param_1 + lVar14;
        _objc_loadWeakRetained(lVar14);
        lVar7 = lVar14;
        func_0x00010bfe2700();
        lVar10 = param_1;
        func_0x00010be6d980();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c058440(puVar13,param_2,lVar5,bVar1 | bVar2,lVar7,0,0,0,lVar10,param_1,0);
        _objc_release(lVar10);
        _objc_release(lVar14);
        _objc_release(lVar5);
        _objc_release(lVar4);
        param_1 = param_1 + _DAT_11271a324;
        _objc_loadWeakRetained(param_1);
        lVar4 = param_1;
        func_0x00010c0d48e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08b7c0();
        _objc_release(lVar4);
        _objc_release(param_1);
LAB_105041b64:
        _objc_release(puVar13);
      }
      _objc_release(lVar6);
      goto LAB_105041b78;
    }
  }
  func_0x00010bf756e0(*(undefined8 *)(param_1 + lVar16));
LAB_105041b78:
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar3);
  return;
}



/* Entry: 105041bb0; end: 105041bc7;  */

void FUN_105041bb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7dc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__presentProfileOf_usePublicProfi_11257d0c0,
             param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 105041bc8; end: 105041c67; -[SCFriendProfileEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105041bc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_11271a468);
  }
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_11271a468);
    }
    func_0x00010c12e1c0(uVar2);
  }
  func_0x00010be025c0(param_1);
  puStack_38 = PTR_PTR_1126e5be0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105041c68; end: 105041cd3; -[SCFriendProfileEntryPoint _setupABValues] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105041c68(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_11271a310;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000108fab140();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b2250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b4160,PTR_s_setIsLayoutOptimisationsEnabled__11264a2b8,0 < lVar2);
  return;
}



/* Entry: 105041cd4; end: 1050441cf; -[SCFriendProfileEntryPoint _createPresentedViewControllerOf:conversationId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105041cd4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
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
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  undefined *puVar35;
  undefined *puVar36;
  long lVar37;
  undefined *puVar38;
  undefined *puVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  long lVar82;
  long lVar83;
  long lVar84;
  long lVar85;
  long lVar86;
  long lVar87;
  long lVar88;
  long lVar89;
  long lVar90;
  long lVar91;
  long lVar92;
  long lVar93;
  long lVar94;
  long lVar95;
  long lVar96;
  undefined *puVar97;
  undefined *puVar98;
  undefined *puVar99;
  long lVar100;
  long lVar101;
  long lVar102;
  undefined *puVar103;
  undefined8 uVar104;
  undefined *puVar105;
  undefined *puVar106;
  undefined8 uVar107;
  undefined *puVar108;
  undefined *puVar109;
  undefined8 uVar110;
  undefined *puVar111;
  long lVar112;
  long lVar113;
  long lVar114;
  long lVar115;
  long lVar116;
  long lVar117;
  long lVar118;
  long lVar119;
  long lVar120;
  long lVar121;
  long lVar122;
  long lVar123;
  long lVar124;
  long lVar125;
  long lVar126;
  long lVar127;
  long lVar128;
  long lVar129;
  long lVar130;
  long lVar131;
  long lVar132;
  long lVar133;
  long lVar134;
  long lVar135;
  undefined8 uVar136;
  long lVar137;
  long lVar138;
  long lVar139;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar112 = (long)_DAT_11271a328;
  lVar2 = param_1 + lVar112;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar98 = PTR_DAT_1126a4ee8;
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,puVar98);
  lVar2 = lVar4;
  if ((int)lVar3 == 0) {
    lVar2 = 0;
  }
  _objc_retain();
  _objc_release(lVar4);
  lVar5 = param_1;
  func_0x00010bde47c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b4168;
  _objc_alloc();
  lVar129 = (long)_DAT_11271a304;
  lVar3 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar7 = lVar3;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar8 = lVar137;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bfb8b40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar132 = lVar11;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar119 = lVar12;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  lVar113 = (long)_DAT_11271a32c;
  lVar13 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar122 = lVar13;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar114 = (long)_DAT_11271a330;
  lVar14 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar123 = lVar14;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar123;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar115 = (long)_DAT_11271a334;
  lVar16 = param_1 + lVar115;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_11271a338;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010c0cb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar135 = param_1 + _DAT_11271a33c;
  _objc_loadWeakRetained();
  lVar133 = lVar135;
  func_0x00010c14c300();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11271a340;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c24a720();
  _objc_retainAutoreleasedReturnValue();
  lVar116 = (long)_DAT_11271a344;
  lVar138 = param_1 + lVar116;
  _objc_loadWeakRetained();
  lVar22 = lVar138;
  func_0x00010c258580();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_11271a348;
  _objc_loadWeakRetained();
  lVar24 = lVar23;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = (long)_DAT_11271a34c;
  lVar25 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar26 = lVar25;
  func_0x00010bf5b760();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar28 = lVar27;
  func_0x00010bf5b780();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar30 = lVar29;
  func_0x00010bf5b7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar117 = (long)_DAT_11271a350;
  lVar31 = param_1 + lVar117;
  _objc_loadWeakRetained();
  lVar32 = lVar31;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  lVar118 = (long)_DAT_11271a310;
  lVar33 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar34 = lVar33;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c048d20();
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar138);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar133);
  _objc_release(lVar135);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar123);
  _objc_release(lVar14);
  _objc_release(lVar122);
  _objc_release(lVar13);
  _objc_release(lVar119);
  _objc_release(lVar12);
  _objc_release(lVar132);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar137);
  _objc_release(lVar7);
  _objc_release(lVar3);
  puVar35 = PTR_PTR_1126b4170;
  _objc_alloc();
  lVar137 = (long)_DAT_11271a354;
  lVar3 = param_1 + lVar137;
  _objc_loadWeakRetained(lVar3);
  lVar11 = lVar3;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820();
  _objc_release(lVar9);
  _objc_release(lVar11);
  _objc_release(lVar3);
  puVar36 = PTR_PTR_1126b4178;
  _objc_alloc();
  lVar137 = param_1 + lVar137;
  _objc_loadWeakRetained(lVar137);
  lVar3 = lVar137;
  func_0x00010bf87660();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820();
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar137);
  lVar3 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar137 = lVar3;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar137;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar9;
  func_0x00010c293a00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar9);
  _objc_release(lVar137);
  _objc_release(lVar3);
  puVar38 = PTR_PTR_1126b4180;
  _objc_alloc();
  lVar3 = param_1 + _DAT_11271a358;
  _objc_loadWeakRetained();
  lVar132 = lVar3;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar132;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar15;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar119 = (long)_DAT_11271a35c;
  lVar137 = param_1 + lVar119;
  _objc_loadWeakRetained();
  lVar10 = lVar137;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar120 = (long)_DAT_11271a360;
  lVar9 = param_1 + lVar120;
  _objc_loadWeakRetained();
  lVar133 = lVar9;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar138 = (long)_DAT_11271a364;
  lVar11 = param_1 + lVar138;
  _objc_loadWeakRetained();
  lVar21 = lVar11;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar21;
  func_0x00010bf374e0();
  _objc_retainAutoreleasedReturnValue();
  puVar99 = puVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar103 = puVar6;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar98 = PTR_PTR_1126ae558;
  uVar107 = param_3;
  func_0x00010901d7c4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar105 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900();
  _objc_retainAutoreleasedReturnValue();
  lVar131 = (long)_DAT_11271a368;
  lVar12 = param_1 + lVar131;
  _objc_loadWeakRetained();
  lVar7 = lVar12;
  func_0x00010c1171e0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar131;
  _objc_loadWeakRetained();
  lVar8 = lVar13;
  func_0x00010c116740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar138;
  _objc_loadWeakRetained();
  lVar23 = lVar14;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar25 = lVar23;
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = (long)_DAT_11271a36c;
  lVar16 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar122 = (long)_DAT_11271a370;
  lVar18 = param_1 + lVar122;
  _objc_loadWeakRetained();
  lVar27 = lVar18;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar135 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar29 = lVar135;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar123 = (long)_DAT_11271a374;
  lVar20 = param_1 + lVar123;
  _objc_loadWeakRetained();
  lVar31 = lVar20;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0456c0();
  _objc_release(lVar31);
  _objc_release(lVar20);
  _objc_release(lVar29);
  _objc_release(lVar135);
  _objc_release(lVar27);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar25);
  _objc_release(lVar23);
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(puVar105);
  _objc_release(puVar98);
  _objc_release(uVar107);
  _objc_release(puVar103);
  _objc_release(puVar99);
  _objc_release(lVar33);
  _objc_release(lVar21);
  _objc_release(lVar11);
  _objc_release(lVar133);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(lVar10);
  _objc_release(lVar137);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar132);
  _objc_release(lVar3);
  puVar39 = PTR_PTR_1126b4188;
  _objc_alloc();
  lVar139 = (long)_DAT_11271a378;
  lVar3 = param_1 + lVar139;
  _objc_loadWeakRetained(lVar3);
  lVar137 = lVar3;
  func_0x00010bf35c80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar137;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffd7e0();
  _objc_release(lVar9);
  _objc_release(lVar137);
  _objc_release(lVar3);
  puVar97 = PTR_PTR_1126b4190;
  _objc_alloc();
  lVar3 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar137 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar40 = lVar137;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar116 = param_1 + lVar116;
  _objc_loadWeakRetained();
  lVar41 = lVar116;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar124 = (long)_DAT_11271a37c;
  lVar9 = param_1 + lVar124;
  _objc_loadWeakRetained();
  lVar42 = lVar9;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar115 = param_1 + lVar115;
  _objc_loadWeakRetained();
  lVar43 = lVar115;
  func_0x00010bfb9e20();
  _objc_retainAutoreleasedReturnValue();
  lVar138 = param_1 + lVar138;
  _objc_loadWeakRetained();
  lVar11 = param_1 + lVar112;
  _objc_loadWeakRetained();
  lVar44 = lVar11;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar45 = lVar12;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar139;
  _objc_loadWeakRetained();
  lVar46 = lVar13;
  func_0x00010bf35c80();
  _objc_retainAutoreleasedReturnValue();
  lVar47 = lVar46;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar139;
  _objc_loadWeakRetained();
  lVar48 = lVar14;
  func_0x00010bf35c60();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar48;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar50 = lVar16;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar101 = (long)_DAT_11271a384;
  lVar18 = param_1 + lVar101;
  _objc_loadWeakRetained();
  lVar51 = lVar18;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = (long)_DAT_11271a320;
  lVar135 = param_1 + _DAT_11271a324;
  _objc_loadWeakRetained();
  lVar20 = param_1 + _DAT_11271a494;
  _objc_loadWeakRetained();
  lVar23 = param_1 + _DAT_11271a390;
  _objc_loadWeakRetained();
  lVar52 = lVar23;
  func_0x00010bf0a280();
  _objc_retainAutoreleasedReturnValue();
  lVar125 = (long)_DAT_11271a394;
  lVar25 = param_1 + lVar125;
  _objc_loadWeakRetained();
  lVar27 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar126 = (long)_DAT_11271a318;
  lVar29 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar31 = param_1 + _DAT_11271a398;
  _objc_loadWeakRetained();
  lVar53 = lVar31;
  func_0x00010bf27540();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_11271a2f4;
  _objc_loadWeakRetained();
  lVar7 = param_1 + _DAT_11271a3a0;
  _objc_loadWeakRetained();
  lVar54 = lVar7;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar130 = param_1 + lVar130;
  _objc_loadWeakRetained();
  lVar8 = param_1 + _DAT_11271a3a4;
  _objc_loadWeakRetained();
  lVar132 = (long)_DAT_11271a3a8;
  lVar10 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar55 = lVar10;
  func_0x00010c08e1a0();
  _objc_retainAutoreleasedReturnValue();
  lVar132 = param_1 + lVar132;
  _objc_loadWeakRetained();
  lVar56 = lVar132;
  func_0x00010c08e1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar119 = param_1 + lVar119;
  _objc_loadWeakRetained();
  lVar122 = param_1 + lVar122;
  _objc_loadWeakRetained();
  lVar57 = lVar122;
  func_0x00010bf36240();
  _objc_retainAutoreleasedReturnValue();
  lVar123 = param_1 + lVar123;
  _objc_loadWeakRetained();
  lVar58 = lVar123;
  func_0x00010c0c4e40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1 + _DAT_11271a3b0;
  _objc_loadWeakRetained();
  lVar133 = (long)_DAT_11271a3b4;
  lVar17 = param_1 + lVar133;
  _objc_loadWeakRetained();
  lVar59 = lVar17;
  func_0x00010befc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + _DAT_11271a490;
  _objc_loadWeakRetained();
  lVar133 = param_1 + lVar133;
  _objc_loadWeakRetained();
  lVar60 = lVar133;
  func_0x00010bf36100();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1 + _DAT_11271a498;
  _objc_loadWeakRetained();
  lVar22 = param_1 + _DAT_11271a3b8;
  _objc_loadWeakRetained();
  lVar61 = lVar22;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11271a3bc;
  _objc_loadWeakRetained();
  lVar62 = lVar24;
  func_0x00010c243b20();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_11271a3c0;
  _objc_loadWeakRetained();
  lVar63 = lVar26;
  func_0x00010c112160();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11271a3c8;
  _objc_loadWeakRetained();
  lVar30 = param_1 + _DAT_11271a3d0;
  _objc_loadWeakRetained();
  lVar64 = lVar30;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_11271a3d4;
  _objc_loadWeakRetained();
  lVar65 = lVar32;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_11271a3d8;
  _objc_loadWeakRetained();
  lVar66 = lVar34;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar102 = param_1 + _DAT_11271a3dc;
  _objc_loadWeakRetained();
  lVar67 = lVar102;
  func_0x00010c101aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar100 = param_1 + _DAT_11271a3e0;
  _objc_loadWeakRetained();
  lVar68 = lVar100;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar69 = param_1 + _DAT_11271a3e8;
  _objc_loadWeakRetained();
  lVar70 = param_1 + _DAT_11271a3f0;
  _objc_loadWeakRetained();
  lVar71 = lVar70;
  func_0x00010bf1b320();
  _objc_retainAutoreleasedReturnValue();
  lVar72 = param_1 + _DAT_11271a3f4;
  _objc_loadWeakRetained();
  lVar73 = param_1 + _DAT_11271a3f8;
  _objc_loadWeakRetained();
  lVar74 = lVar73;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar75 = param_1 + _DAT_11271a3fc;
  _objc_loadWeakRetained();
  lVar76 = lVar75;
  func_0x00010c0ee220();
  _objc_retainAutoreleasedReturnValue();
  lVar77 = param_1 + _DAT_11271a400;
  _objc_loadWeakRetained();
  lVar78 = lVar77;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  lVar79 = param_1 + _DAT_11271a404;
  _objc_loadWeakRetained();
  lVar134 = (long)_DAT_11271a408;
  lVar80 = param_1 + lVar134;
  _objc_loadWeakRetained();
  lVar81 = lVar80;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar134 = param_1 + lVar134;
  _objc_loadWeakRetained();
  lVar82 = lVar134;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar83 = param_1 + _DAT_11271a40c;
  _objc_loadWeakRetained();
  lVar84 = lVar83;
  func_0x00010c242d80();
  _objc_retainAutoreleasedReturnValue();
  lVar85 = param_1 + _DAT_11271a414;
  _objc_loadWeakRetained();
  lVar86 = param_1 + _DAT_11271a41c;
  _objc_loadWeakRetained();
  lVar87 = param_1 + _DAT_11271a420;
  _objc_loadWeakRetained();
  lVar88 = param_1 + _DAT_11271a42c;
  _objc_loadWeakRetained();
  lVar89 = param_1 + _DAT_11271a430;
  _objc_loadWeakRetained();
  lVar90 = lVar89;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar127 = (long)_DAT_11271a300;
  lVar91 = param_1 + lVar127;
  _objc_loadWeakRetained();
  lVar92 = lVar91;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247980();
  lVar128 = (long)_DAT_11271a434;
  lVar93 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar94 = param_1 + _DAT_11271a438;
  _objc_loadWeakRetained();
  lVar95 = lVar94;
  func_0x00010bfa0c40();
  _objc_retainAutoreleasedReturnValue();
  lVar96 = lVar95;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015d80();
  _objc_release(lVar96);
  _objc_release(lVar95);
  _objc_release(lVar94);
  _objc_release(lVar93);
  _objc_release(lVar92);
  _objc_release(lVar91);
  _objc_release(lVar90);
  _objc_release(lVar89);
  _objc_release(lVar88);
  _objc_release(lVar87);
  _objc_release(lVar86);
  _objc_release(lVar85);
  _objc_release(lVar84);
  _objc_release(lVar83);
  _objc_release(lVar82);
  _objc_release(lVar134);
  _objc_release(lVar81);
  _objc_release(lVar80);
  _objc_release(lVar79);
  _objc_release(lVar78);
  _objc_release(lVar77);
  _objc_release(lVar76);
  _objc_release(lVar75);
  _objc_release(lVar74);
  _objc_release(lVar73);
  _objc_release(lVar72);
  _objc_release(lVar71);
  _objc_release(lVar70);
  _objc_release(lVar69);
  _objc_release(lVar68);
  _objc_release(lVar100);
  _objc_release(lVar67);
  _objc_release(lVar102);
  _objc_release(lVar66);
  _objc_release(lVar34);
  _objc_release(lVar65);
  _objc_release(lVar32);
  _objc_release(lVar64);
  _objc_release(lVar30);
  _objc_release(lVar28);
  _objc_release(lVar63);
  _objc_release(lVar26);
  _objc_release(lVar62);
  _objc_release(lVar24);
  _objc_release(lVar61);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar60);
  _objc_release(lVar133);
  _objc_release(lVar19);
  _objc_release(lVar59);
  _objc_release(lVar17);
  _objc_release(lVar15);
  _objc_release(lVar58);
  _objc_release(lVar123);
  _objc_release(lVar57);
  _objc_release(lVar122);
  _objc_release(lVar119);
  _objc_release(lVar56);
  _objc_release(lVar132);
  _objc_release(lVar55);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar130);
  _objc_release(lVar54);
  _objc_release(lVar7);
  _objc_release(lVar33);
  _objc_release(lVar53);
  _objc_release(lVar31);
  _objc_release(lVar29);
  _objc_release(lVar27);
  _objc_release(lVar25);
  _objc_release(lVar52);
  _objc_release(lVar23);
  _objc_release(lVar20);
  _objc_release(lVar135);
  _objc_release(lVar51);
  _objc_release(lVar18);
  _objc_release(lVar50);
  _objc_release(lVar16);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar14);
  _objc_release(lVar47);
  _objc_release(lVar46);
  _objc_release(lVar13);
  _objc_release(lVar45);
  _objc_release(lVar12);
  _objc_release(lVar44);
  _objc_release(lVar11);
  _objc_release(lVar138);
  _objc_release(lVar43);
  _objc_release(lVar115);
  _objc_release(lVar42);
  _objc_release(lVar9);
  _objc_release(lVar41);
  _objc_release(lVar116);
  _objc_release(lVar40);
  _objc_release(lVar137);
  _objc_release(lVar3);
  puVar98 = PTR_PTR_1126b16c0;
  _objc_alloc();
  lVar3 = param_1 + lVar129;
  _objc_loadWeakRetained(lVar3);
  lVar137 = lVar3;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015a40();
  _objc_release(lVar137);
  _objc_release(lVar3);
  puVar99 = PTR_PTR_1126b4198;
  _objc_alloc();
  lVar120 = param_1 + lVar120;
  _objc_loadWeakRetained();
  lVar8 = lVar120;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar114 = param_1 + lVar114;
  _objc_loadWeakRetained();
  lVar132 = lVar114;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar112 = param_1 + lVar112;
  _objc_loadWeakRetained();
  lVar119 = lVar112;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar115 = lVar119;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar33 = lVar3;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar116 = lVar137;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar31 = lVar9;
  func_0x00010bfb8b40();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar7 = lVar11;
  func_0x00010c244620();
  _objc_retainAutoreleasedReturnValue();
  lVar113 = param_1 + lVar113;
  _objc_loadWeakRetained();
  lVar130 = lVar113;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar139;
  _objc_loadWeakRetained();
  lVar100 = lVar12;
  func_0x00010bf35c80();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar100;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar131;
  _objc_loadWeakRetained();
  lVar22 = lVar13;
  func_0x00010c1171c0();
  _objc_retainAutoreleasedReturnValue();
  lVar131 = param_1 + lVar131;
  _objc_loadWeakRetained();
  lVar24 = lVar131;
  func_0x00010c116740();
  _objc_retainAutoreleasedReturnValue();
  lVar139 = param_1 + lVar139;
  _objc_loadWeakRetained();
  lVar26 = lVar139;
  func_0x00010bf35c60();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar26;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_11271a43c;
  _objc_loadWeakRetained();
  lVar30 = lVar14;
  func_0x00010c0b97a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11271a440;
  _objc_loadWeakRetained();
  lVar122 = lVar16;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar101 = param_1 + lVar101;
  _objc_loadWeakRetained();
  lVar123 = lVar101;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  lVar135 = (long)_DAT_11271a444;
  lVar18 = param_1 + lVar135;
  _objc_loadWeakRetained();
  lVar15 = lVar18;
  func_0x00010bf10340();
  _objc_retainAutoreleasedReturnValue();
  lVar135 = param_1 + lVar135;
  _objc_loadWeakRetained();
  lVar17 = lVar135;
  func_0x00010bf10360();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar19 = lVar20;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar138 = param_1 + _DAT_11271a448;
  _objc_loadWeakRetained();
  lVar133 = lVar138;
  func_0x00010bfb98e0();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar124 = param_1 + lVar124;
  _objc_loadWeakRetained();
  lVar25 = param_1 + _DAT_11271a44c;
  _objc_loadWeakRetained();
  lVar34 = lVar25;
  func_0x00010c23c760();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + _DAT_11271a450;
  _objc_loadWeakRetained();
  lVar102 = lVar27;
  func_0x00010c28f860();
  _objc_retainAutoreleasedReturnValue();
  lVar117 = param_1 + lVar117;
  _objc_loadWeakRetained();
  lVar32 = lVar117;
  func_0x00010bfb8f40();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = param_1 + _DAT_11271a454;
  _objc_loadWeakRetained();
  func_0x00010c009000();
  _objc_release(lVar29);
  _objc_release(lVar32);
  _objc_release(lVar117);
  _objc_release(lVar102);
  _objc_release(lVar27);
  _objc_release(lVar34);
  _objc_release(lVar25);
  _objc_release(lVar124);
  _objc_release(lVar23);
  _objc_release(lVar133);
  _objc_release(lVar138);
  _objc_release(lVar19);
  _objc_release(lVar20);
  _objc_release(lVar17);
  _objc_release(lVar135);
  _objc_release(lVar15);
  _objc_release(lVar18);
  _objc_release(lVar123);
  _objc_release(lVar101);
  _objc_release(lVar122);
  _objc_release(lVar16);
  _objc_release(lVar30);
  _objc_release(lVar14);
  _objc_release(lVar28);
  _objc_release(lVar26);
  _objc_release(lVar139);
  _objc_release(lVar24);
  _objc_release(lVar131);
  _objc_release(lVar22);
  _objc_release(lVar13);
  _objc_release(lVar21);
  _objc_release(lVar100);
  _objc_release(lVar12);
  _objc_release(lVar130);
  _objc_release(lVar113);
  _objc_release(lVar7);
  _objc_release(lVar11);
  _objc_release(lVar31);
  _objc_release(lVar9);
  _objc_release(lVar116);
  _objc_release(lVar137);
  _objc_release(lVar33);
  _objc_release(lVar3);
  _objc_release(lVar115);
  _objc_release(lVar119);
  _objc_release(lVar112);
  _objc_release(lVar132);
  _objc_release(lVar114);
  _objc_release(lVar10);
  _objc_release(lVar8);
  _objc_release(lVar120);
  puVar103 = PTR_PTR_1126b41a0;
  _objc_alloc();
  func_0x00010bfe2700(lVar5);
  func_0x00010c009120();
  lVar112 = param_1 + lVar127;
  _objc_loadWeakRetained();
  uVar104 = *(undefined8 *)(param_1 + lVar1);
  _objc_retain();
  puVar105 = puVar6;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  puVar106 = puVar105;
  func_0x00010bf51e00();
  _objc_release(puVar105);
  func_0x00010c18b5e0(puVar97);
  lVar3 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar137 = lVar3;
  func_0x00010c141800();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar137;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar105 = puVar6;
  func_0x00010c15ffa0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar9;
  func_0x00010bf5a3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar105);
  _objc_release(lVar9);
  _objc_release(lVar137);
  _objc_release(lVar3);
  func_0x00010beaa520(param_1);
  lVar3 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar137 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108fab210();
  _objc_release(lVar137);
  _objc_release(lVar3);
  uVar107 = param_3;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  puVar108 = PTR_PTR_1126ae560;
  _objc_opt_new();
  puVar105 = PTR_PTR_1126b41a8;
  _objc_alloc();
  puVar109 = puVar108;
  func_0x00010bfbc3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar126 = param_1 + lVar126;
  _objc_loadWeakRetained();
  lVar12 = lVar126;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar13 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar128 = param_1 + lVar128;
  _objc_loadWeakRetained();
  lVar16 = lVar128;
  func_0x00010c289740();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar16;
  func_0x00010c272140();
  _objc_retainAutoreleasedReturnValue();
  lVar137 = param_1 + _DAT_11271a458;
  _objc_loadWeakRetained();
  lVar135 = lVar137;
  func_0x00010c25e020();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271a45c;
  _objc_loadWeakRetained();
  lVar20 = lVar9;
  func_0x00010bf611e0();
  _objc_retainAutoreleasedReturnValue();
  uVar136 = param_3;
  func_0x00010c1022a0();
  _objc_retainAutoreleasedReturnValue();
  uVar110 = uVar136;
  func_0x00010c117320();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_11271a460;
  _objc_loadWeakRetained();
  lVar138 = lVar11;
  func_0x00010bfa2520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c040380();
  _objc_release(lVar138);
  _objc_release(lVar11);
  _objc_release(uVar110);
  _objc_release(uVar136);
  _objc_release(lVar20);
  _objc_release(lVar9);
  _objc_release(lVar135);
  _objc_release(lVar137);
  _objc_release(lVar18);
  _objc_release(lVar16);
  _objc_release(lVar128);
  _objc_release(lVar13);
  _objc_release(lVar3);
  _objc_release(lVar12);
  _objc_release(lVar126);
  _objc_release(puVar109);
  lVar3 = param_1 + lVar127;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c0797a0();
  func_0x00010c1b3200(puVar105);
  _objc_release(lVar3);
  lVar3 = param_1 + _DAT_11271a464;
  _objc_loadWeakRetained();
  lVar137 = lVar3;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar137;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  _objc_release(lVar9);
  _objc_release(lVar137);
  _objc_release(lVar3);
  _objc_initWeak(auStack_80,param_1);
  uVar136 = *(undefined8 *)(param_1 + _DAT_11271a468);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1050441d0;
  puStack_b8 = &UNK_110863f68;
  lStack_b0 = lVar112;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  _objc_retain(param_4);
  uStack_a0 = param_4;
  puStack_98 = puVar97;
  _objc_retain(puVar106);
  puStack_90 = puVar106;
  lStack_88 = lVar12;
  _objc_copyWeak(auStack_d8,auStack_80);
  _objc_retain(puVar106);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(puVar108);
  func_0x00010bf9d5c0(uVar136);
  func_0x00010c1797c0(*(undefined8 *)(param_1 + _DAT_11271a470));
  func_0x00010c21b680(puVar97);
  lVar3 = param_1 + lVar127;
  _objc_loadWeakRetained();
  lVar137 = lVar3;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar111 = PTR_PTR_1126b41c8;
  _objc_alloc();
  puVar109 = puVar6;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1;
  func_0x00010be6d980();
  _objc_retainAutoreleasedReturnValue();
  lVar121 = param_1 + lVar121;
  _objc_loadWeakRetained();
  lVar125 = param_1 + lVar125;
  _objc_loadWeakRetained();
  lVar127 = param_1 + lVar127;
  _objc_loadWeakRetained();
  lVar9 = lVar127;
  func_0x00010c247b60();
  _objc_retainAutoreleasedReturnValue();
  uVar136 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar129 = param_1 + lVar129;
  _objc_loadWeakRetained();
  lVar3 = param_1 + _DAT_11271a474;
  _objc_loadWeakRetained();
  lVar16 = lVar3;
  func_0x00010bf148a0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar137;
  func_0x00010beef3e0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar118;
  _objc_loadWeakRetained();
  lVar11 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03b2e0();
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar13);
  _objc_release(lVar16);
  _objc_release(lVar3);
  _objc_release(lVar129);
  _objc_release(uVar136);
  _objc_release(lVar9);
  _objc_release(lVar127);
  _objc_release(lVar125);
  _objc_release(lVar121);
  _objc_release(lVar18);
  _objc_release(puVar109);
  puVar109 = puVar105;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(puVar109);
  puVar109 = puVar105;
  func_0x00010bf99b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(puVar109);
  func_0x00010bef9980(puVar38);
  func_0x00010bef9980(puVar97);
  func_0x00010c1c07e0(puVar97);
  func_0x00010c18b5e0(puVar105);
  puVar109 = PTR_PTR_1126b41d0;
  _objc_alloc(PTR_PTR_1126b41d0);
  func_0x00010c0402e0();
  _objc_release(puVar111);
  _objc_release(lVar137);
  _objc_release(puVar108);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar106);
  _objc_destroyWeak(auStack_d8);
  _objc_release(puStack_90);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar12);
  _objc_release(puVar105);
  _objc_release(puVar108);
  _objc_release(uVar107);
  _objc_release(lVar14);
  _objc_release(puVar106);
  _objc_release(uVar104);
  _objc_release(lVar112);
  _objc_release(puVar103);
  _objc_release(puVar99);
  _objc_release(puVar98);
  _objc_release(puVar97);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_release(lVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar109);
  return;
}



/* Entry: 1050441d0; end: 1050442af;  */

void FUN_1050441d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b41b0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126b41b8;
  func_0x00010c2bd5e0(PTR_PTR_1126b41b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2700(*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb8820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c247980();
  func_0x00010c0374c0(puVar1);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1050442b0; end: 105044447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050442b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  func_0x00010c0d3c80();
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b41c0;
    _objc_alloc(PTR_PTR_1126b41c0);
    func_0x00010bfe2700();
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c247980();
    func_0x00010c032e60(puVar2);
    _objc_release(uVar3);
    lVar4 = lVar1 + _DAT_11271a48c;
    _objc_loadWeakRetained();
    lVar5 = lVar4;
    func_0x00010bf21f80();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c101e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11271a46c);
    *(long *)(lVar1 + _DAT_11271a46c) = lVar6;
    _objc_retain(lVar6);
    _objc_release(uVar3);
    func_0x00010befa160(param_2);
    _objc_release(lVar6);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar7 = param_2;
  func_0x000107d4f4cc(param_2,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar3);
  _objc_release(uVar7);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105044448; end: 105044453; -[SCFriendProfileEntryPoint dismissProfileViewController:animated:completionBlock:] */

void FUN_105044448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be025d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__dismissAnimated_completion__11255e310,param_4,param_5);
  return;
}



/* Entry: 105044454; end: 105044457; -[SCFriendProfileEntryPoint profileViewAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_105044454(void)

{
  return;
}



/* Entry: 105044458; end: 10504446b; -[SCFriendProfileEntryPoint profileViewControllerMovedToNilParentOrDealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105044458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a314),
             PTR_s_notifyDelegateDidDismissIfNeeded_112614dd8,0);
  return;
}



/* Entry: 10504446c; end: 10504447b; -[SCFriendProfileEntryPoint profileViewWillAppearWhilePresenting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504446c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a314),
             PTR_s_notifyDelegateWillAppearIfNeeded_112614de0);
  return;
}



/* Entry: 10504447c; end: 10504450f; -[SCFriendProfileEntryPoint profileViewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504447c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271a318;
  _objc_retain(param_3);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24fc40();
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = (long)_DAT_11271a314;
  func_0x00010c0dcea0(*(undefined8 *)(param_1 + lVar2));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bfd1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar2),PTR_s_handleLaunchBehavior_1125d1f00);
  return;
}



/* Entry: 105044510; end: 1050445bf; -[SCFriendProfileEntryPoint profileViewDidLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105044510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271a470);
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(uVar2,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1050445c0; end: 1050445c3; -[SCFriendProfileEntryPoint profileViewWillDisappear:] */

void FUN_1050445c0(void)

{
  return;
}



/* Entry: 1050445c4; end: 1050445c7; -[SCFriendProfileEntryPoint profileViewDidDisappearWhileDismissing] */

void FUN_1050445c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismiss_1125bac58);
  return;
}



/* Entry: 1050445c8; end: 1050445cb; -[SCFriendProfileEntryPoint myProfileDidDismiss] */

void FUN_1050445c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismiss_1125bac58);
  return;
}



/* Entry: 1050445cc; end: 1050445db; -[SCFriendProfileEntryPoint myProfileWillAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050445cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a314),
             PTR_s_notifyDelegateWillAppearIfNeeded_112614de0);
  return;
}



/* Entry: 1050445dc; end: 1050445eb; -[SCFriendProfileEntryPoint myProfileDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050445dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271a314),
             PTR_s_notifyDelegateDidAppearIfNeeded__112614dc0);
  return;
}



/* Entry: 1050445ec; end: 1050445ef; -[SCFriendProfileEntryPoint myProfileAskedLogOnScrollEventsForScrollViewDelegagte:] */

void FUN_1050445ec(void)

{
  return;
}



/* Entry: 1050445f0; end: 1050445fb; -[SCFriendProfileEntryPoint didDismiss] */

void FUN_1050445f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be025d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissAnimated_completion__11255e310,0,0);
  return;
}



/* Entry: 1050445fc; end: 1050446f3; -[SCFriendProfileEntryPoint friendProfilePageActionHandlerNavigateToChat:deepLinkURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050445fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + _DAT_11271a300;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1050446f4;
  puStack_70 = &UNK_1108475b0;
  lStack_68 = param_1;
  uStack_60 = param_3;
  uStack_58 = param_4;
  lStack_50 = lVar1;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010be025c0(param_1,param_2,1,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 1050446f4; end: 105044707;  */

void FUN_1050446f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__afterDetachNavigateToChat_deepL_11254ffe8,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Entry: 105044708; end: 105044847; -[SCFriendProfileEntryPoint friendProfilePageActionHandlerStartCallInChat:withMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105044708(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1 + _DAT_11271a300;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271a478;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105044848;
  puStack_80 = &UNK_110863fc8;
  lStack_78 = lVar2;
  lStack_70 = lVar1;
  uStack_68 = param_3;
  lStack_60 = lVar5;
  uStack_58 = param_4;
  _objc_retain(lVar5);
  _objc_retain(param_3);
  func_0x00010be025c0(param_1,param_2,0,&puStack_98);
  _objc_release(lStack_60);
  _objc_release(uStack_68);
  _objc_release(lVar5);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  return 1;
}



/* Entry: 105044848; end: 1050448a3;  */

void FUN_105044848(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_friendProfileDidDismiss_withRequ_1125cbb70);
  if ((uVar1 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    func_0x00010bfb8720();
    if ((uVar1 & 1) != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c24e090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_startCallForChatIdentifier_media_112671248,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),0xc);
  return;
}



/* Entry: 1050448a4; end: 1050448f7; -[SCFriendProfileEntryPoint showProfilePresenterDidFinishPresenting:profileViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050448a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271a314;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  _objc_retain(param_4);
  func_0x00010c0dcf20(uVar1);
  func_0x00010c0dcea0(*(undefined8 *)(param_1 + lVar2),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050448f8; end: 105044953; -[SCFriendProfileEntryPoint businessProfilesPresenterScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050448f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271a47c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismiss_1125bac58);
  return;
}



/* Entry: 105044954; end: 1050449fb; -[SCFriendProfileEntryPoint _sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_105044954(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271a300;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c247980();
  if (lVar3 == 0) {
    lVar3 = 0xea;
  }
  else {
    param_1 = param_1 + lVar4;
    _objc_loadWeakRetained(param_1);
    lVar4 = param_1;
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c247980();
    _objc_release(lVar4);
    _objc_release(param_1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3;
}



/* Entry: 1050449fc; end: 105044b53; -[SCFriendProfileEntryPoint _setupLegacyPresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050449fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11271a480;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar2 == 0) {
    lVar2 = param_1 + _DAT_11271a300;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11271a484;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(long *)(param_1 + lVar6) = lVar3;
    _objc_release(uVar5);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___UIViewController_1126af898;
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    _objc_retain(uVar5);
    _objc_opt_new();
    func_0x00010c18b480();
    func_0x00010c1c8b80(puVar4);
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_retain(puVar4);
    func_0x00010c0f9680(puVar1);
    _objc_storeWeak(param_1 + lVar7,puVar4);
    _objc_retain(puVar4);
    _objc_release(puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  else {
    puVar4 = (undefined *)(param_1 + lVar7);
    _objc_loadWeakRetained(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105044b54; end: 105044b5f;  */

void FUN_105044b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_attachUI__1125a0c08,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105044b60; end: 105044bef; -[SCFriendProfileEntryPoint _startChatDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105044b60(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11271a328;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010010fab4(lVar2,PTR_DAT_1126a4ee8);
  lVar1 = lVar2;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105044bf0; end: 105044cab; -[SCFriendProfileEntryPoint _configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105044bf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b41d8;
  _objc_alloc(PTR_PTR_1126b41d8);
  lVar6 = (long)_DAT_11271a300;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfe2700();
  lVar4 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0daca0();
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0dac60();
  func_0x00010c01a700(puVar1,param_2,lVar3,lVar5,lVar6,0);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105044cac; end: 105044dd7; -[SCFriendProfileEntryPoint _openingData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105044cac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_11271a300;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfb8820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = (undefined *)(param_1 + lVar6);
  _objc_loadWeakRetained();
  puVar4 = puVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0b3ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126afdd8;
  if (puVar5 == (undefined *)0x0) {
    func_0x00010c247980(lVar2);
    func_0x00010bfc8740(puVar3);
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010c0f1180(lVar2);
  }
  else {
    puVar3 = puVar5;
    func_0x00010c0f1e60(puVar5);
    func_0x00010bc9107c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f1180(puVar5);
    func_0x00010be83c40(param_1);
  }
  puVar4 = puVar3;
  func_0x000107cdc48c(puVar3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar5);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105044dd8; end: 105044e33; -[SCFriendProfileEntryPoint _presentProfileOf:usePublicProfile:conversationId:wrapInSwipeWrapper:] */

void FUN_105044dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_4 != 0) {
    func_0x00010c242760(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7de60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__presentFriendshipProfileOf_conv_11257c7f8,param_3,param_5,param_6);
  return;
}



/* Entry: 105044e34; end: 1050451d3; -[SCFriendProfileEntryPoint _presentFriendshipProfileOf:conversationId:wrapInSwipeWrapper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105044e34(long param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(ulong *)(param_1 + _DAT_11271a314);
  func_0x00010c070be0();
  if ((uVar2 & 1) == 0) {
    func_0x00010b83741c();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11271a470;
    uVar9 = *(undefined8 *)(param_1 + lVar12);
    *(ulong *)(param_1 + lVar12) = uVar2;
    _objc_release(uVar9);
    lVar3 = param_4;
    func_0x00010c08fa60();
    if (lVar3 != 0) {
      lVar3 = param_3;
      func_0x00010bfb8280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        lVar3 = param_1 + _DAT_11271a338;
        _objc_loadWeakRetained();
        lVar10 = lVar3;
        func_0x00010c0cb4c0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar10;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c0790e0();
        _objc_release(lVar4);
        _objc_release(lVar10);
        _objc_release(lVar3);
        if ((int)lVar5 != 0) {
          puVar6 = PTR_PTR_1126b0cd8;
          func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_4);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_1 + _DAT_11271a488;
          _objc_loadWeakRetained();
          lVar10 = lVar3;
          func_0x00010c0d5c60();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar10;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bfc7e20();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          _objc_release(lVar10);
          _objc_release(lVar3);
          if ((puVar6 != (undefined *)0x0) && (lVar5 != 0)) {
            puVar7 = PTR_PTR_1126b41e0;
            _objc_alloc(PTR_PTR_1126b41e0);
            func_0x00010c004e00();
            puVar8 = PTR_PTR_1126b41e8;
            _objc_alloc(PTR_PTR_1126b41e8);
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_90 = 0xc2000000;
            pcStack_88 = FUN_1050451d4;
            puStack_80 = &UNK_110863ff8;
            _objc_retain(param_4);
            puStack_c0 = puVar1;
            uStack_b8 = 0xc2000000;
            uStack_b0 = 0x1050451d8;
            puStack_a8 = &UNK_110855e40;
            lStack_78 = param_4;
            _objc_retain(param_4);
            lStack_a0 = param_4;
            func_0x00010c04f4c0(puVar8,param_2,&puStack_98,&puStack_c0);
            func_0x00010c2665a0(lVar5,param_2,puVar7,1,3,puVar8);
            _objc_release(puVar8);
            _objc_release(lStack_a0);
            _objc_release(lStack_78);
            _objc_release(puVar7);
          }
          _objc_release(lVar5);
          _objc_release(puVar6);
        }
      }
    }
    lVar4 = param_1;
    func_0x00010bdf1d60(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8b80();
    lVar10 = (long)_DAT_11271a300;
    lVar3 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar5 = lVar3;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = (long)_DAT_11271a484;
    uVar9 = *(undefined8 *)(param_1 + lVar11);
    *(long *)(param_1 + lVar11) = lVar5;
    _objc_release(uVar9);
    _objc_release(lVar3);
    if (param_5 == 0) {
      func_0x00010c219b20(lVar4,param_2,*(undefined8 *)(param_1 + lVar12));
      func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar11),param_2,lVar4);
    }
    else {
      lVar10 = param_1 + lVar10;
      _objc_loadWeakRetained();
      lVar3 = lVar10;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078840();
      _objc_release(lVar3);
      _objc_release(lVar10);
      puVar6 = PTR_PTR_1126b41f0;
      _objc_alloc(PTR_PTR_1126b41f0);
      func_0x00010c003fa0();
      func_0x00010c16afe0();
      func_0x00010bf0c980(*(undefined8 *)(param_1 + lVar11),param_2,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(lVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050451d4; end: 1050451db;  */

void FUN_1050451d4(void)

{
  return;
}



/* Entry: 1050451dc; end: 105045403; -[SCFriendProfileEntryPoint _presentPublicProfileWithSnapProId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050451dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11271a314);
  func_0x00010c070be0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b4158;
    _objc_alloc();
    lVar3 = param_1;
    func_0x00010bead840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126afdd8;
    lVar10 = (long)_DAT_11271a300;
    lVar4 = param_1 + lVar10;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c247980();
    func_0x00010bfc8740(puVar7,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    func_0x00010bb0584c(0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar9 = lVar6;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03bd00(puVar2,param_2,param_3,param_1,lVar3,puVar7,uVar8,1,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar4 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar6 = lVar4;
    func_0x00010c0daca0();
    _objc_release(lVar4);
    if (lVar6 == 0) {
      func_0x00010c1cd9a0(puVar2,param_2,0xffffffffcf5d0adf);
    }
    else {
      lVar4 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar4);
      lVar6 = lVar4;
      func_0x00010c0daca0();
      func_0x00010c1cd9a0(puVar2,param_2,lVar6);
      _objc_release(lVar4);
    }
    lVar4 = param_1 + lVar10;
    _objc_loadWeakRetained();
    lVar6 = lVar4;
    func_0x00010c0dac60();
    _objc_release(lVar4);
    if (lVar6 == 0x38) {
      lVar10 = param_1 + lVar10;
      _objc_loadWeakRetained(lVar10);
      lVar4 = lVar10;
      func_0x00010c0dac60();
      func_0x00010c1cd960(puVar2,param_2,lVar4);
      _objc_release(lVar10);
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271a47c),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105045404; end: 10504554b; -[SCFriendProfileEntryPoint _presentPublisherProfileWithSnapProId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105045404(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + _DAT_11271a314);
  func_0x00010c070be0();
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126b4158;
    _objc_alloc(PTR_PTR_1126b4158);
    lVar3 = param_1;
    func_0x00010bead840(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126afdd8;
    lVar4 = param_1 + _DAT_11271a300;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c247980();
    func_0x00010bfc8740(puVar7,param_2,lVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = 0;
    func_0x00010bb0584c(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03c160(puVar2,param_2,param_3,param_1,lVar3,puVar7,uVar8,0);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + _DAT_11271a47c),param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10504554c; end: 1050456af; -[SCFriendProfileEntryPoint _dismissAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504554c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  lVar6 = (long)_DAT_11271a314;
  func_0x00010c0dcf40(*(undefined8 *)(param_1 + lVar6));
  puVar2 = PTR_PTR_1126afdd8;
  lVar7 = (long)_DAT_11271a484;
  if (*(long *)(param_1 + lVar7) == 0) {
    func_0x00010c0dcf00(*(undefined8 *)(param_1 + lVar6),param_2,param_4);
  }
  else {
    lVar1 = param_1;
    func_0x00010bebe660(param_1);
    func_0x00010bfc8740(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1050456b0;
    puStack_70 = &UNK_11084a9e8;
    uStack_68 = uVar5;
    uStack_60 = uVar3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    _objc_retain(uVar3);
    ppuVar4 = &puStack_88;
    _objc_retainBlock();
    if (param_3 == 0) {
      func_0x00010c0f9680(PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar4);
    }
    else {
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    _objc_release(ppuVar4);
    _objc_release(uStack_58);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1050456b0; end: 10504572f;  */

void FUN_1050456b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105045730;
  puStack_38 = &UNK_11084aaa8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x00010bf6f440(uVar1,param_2,&puStack_50);
  _objc_release(uStack_28);
  return;
}



/* Entry: 105045730; end: 10504573b;  */

void FUN_105045730(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dcf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_notifyDelegateDidDismissIfNeeded_112614dd8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10504573c; end: 105045887; -[SCFriendProfileEntryPoint _afterDetachNavigateToChat:deepLinkURL:scope:delegate:] */

void FUN_10504573c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  _objc_opt_respondsToSelector(param_6,PTR_s_friendProfileDidDismiss_withRequ_1125cbb78);
  if ((uVar1 & 1) == 0) {
    func_0x00010bebfaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126afdd8;
    if (param_1 != 0) {
      uVar2 = param_5;
      func_0x00010bfb8820(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c247980();
      func_0x00010bfc8740(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bc92e28();
      func_0x00010c183a80(param_1);
      _objc_release(puVar3);
      _objc_release(uVar2);
      func_0x00010c0d5fa0(param_1);
    }
    _objc_release(param_1);
  }
  else {
    func_0x00010c13a640(PTR_PTR_1126b41f8);
    func_0x00010bfb8740(param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105045888; end: 1050458c3; -[SCFriendProfileEntryPoint _publicProfilePageEntryTypeToString:] */

undefined8 FUN_105045888(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db00f8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc3738;
  if (param_3 != 6) {
    ppuVar2 = ppuVar1;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc3758;
  if (param_3 != 0xc) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain();
  ppuVar2 = &PTR____CFConstantStringClassReference_110db00f8;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110db00f8,param_2,ppuVar1);
  if (ppuVar2 == (undefined **)0x0) {
    uVar3 = 0;
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_111007cf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007cf8,param_2,ppuVar1);
    if (ppuVar2 == (undefined **)0x0) {
      uVar3 = 1;
    }
    else {
      ppuVar2 = &PTR____CFConstantStringClassReference_111007d18;
      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007d18,param_2,ppuVar1);
      if (ppuVar2 == (undefined **)0x0) {
        uVar3 = 2;
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_111007d38;
        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007d38,param_2,ppuVar1);
        if (ppuVar2 == (undefined **)0x0) {
          uVar3 = 3;
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_111007d58;
          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007d58,param_2,ppuVar1);
          if (ppuVar2 == (undefined **)0x0) {
            uVar3 = 4;
          }
          else {
            ppuVar2 = &PTR____CFConstantStringClassReference_111007d78;
            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007d78,param_2,ppuVar1);
            if (ppuVar2 == (undefined **)0x0) {
              uVar3 = 5;
            }
            else {
              ppuVar2 = &PTR____CFConstantStringClassReference_110dc3738;
              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110dc3738,param_2,ppuVar1);
              if (ppuVar2 == (undefined **)0x0) {
                uVar3 = 6;
              }
              else {
                ppuVar2 = &PTR____CFConstantStringClassReference_111007d98;
                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007d98,param_2,ppuVar1
                                   );
                if (ppuVar2 == (undefined **)0x0) {
                  uVar3 = 7;
                }
                else {
                  ppuVar2 = &PTR____CFConstantStringClassReference_111007db8;
                  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007db8,param_2,
                                      ppuVar1);
                  if (ppuVar2 == (undefined **)0x0) {
                    uVar3 = 8;
                  }
                  else {
                    ppuVar2 = &PTR____CFConstantStringClassReference_111007dd8;
                    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007dd8,param_2,
                                        ppuVar1);
                    if (ppuVar2 == (undefined **)0x0) {
                      uVar3 = 9;
                    }
                    else {
                      ppuVar2 = &PTR____CFConstantStringClassReference_111007df8;
                      func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007df8,param_2,
                                          ppuVar1);
                      if (ppuVar2 == (undefined **)0x0) {
                        uVar3 = 10;
                      }
                      else {
                        ppuVar2 = &PTR____CFConstantStringClassReference_111007e18;
                        func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007e18,param_2
                                            ,ppuVar1);
                        if (ppuVar2 == (undefined **)0x0) {
                          uVar3 = 0xb;
                        }
                        else {
                          ppuVar2 = &PTR____CFConstantStringClassReference_111007e38;
                          func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007e38,
                                              param_2,ppuVar1);
                          if (ppuVar2 == (undefined **)0x0) {
                            uVar3 = 0xc;
                          }
                          else {
                            ppuVar2 = &PTR____CFConstantStringClassReference_111007e58;
                            func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007e58,
                                                param_2,ppuVar1);
                            if (ppuVar2 == (undefined **)0x0) {
                              uVar3 = 0x10;
                            }
                            else {
                              ppuVar2 = &PTR____CFConstantStringClassReference_111007e78;
                              func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007e78,
                                                  param_2,ppuVar1);
                              if (ppuVar2 == (undefined **)0x0) {
                                uVar3 = 0x11;
                              }
                              else {
                                ppuVar2 = &PTR____CFConstantStringClassReference_111007e98;
                                func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_111007e98
                                                    ,param_2,ppuVar1);
                                if (ppuVar2 == (undefined **)0x0) {
                                  uVar3 = 0x12;
                                }
                                else {
                                  ppuVar2 = &PTR____CFConstantStringClassReference_111007eb8;
                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007eb8,
                                                  param_2,ppuVar1);
                                  if (ppuVar2 == (undefined **)0x0) {
                                    uVar3 = 0x17;
                                  }
                                  else {
                                    ppuVar2 = &PTR____CFConstantStringClassReference_111007ed8;
                                    func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007ed8,
                                                  param_2,ppuVar1);
                                    if (ppuVar2 == (undefined **)0x0) {
                                      uVar3 = 0x13;
                                    }
                                    else {
                                      ppuVar2 = &PTR____CFConstantStringClassReference_111007ef8;
                                      func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007ef8,
                                                  param_2,ppuVar1);
                                      if (ppuVar2 == (undefined **)0x0) {
                                        uVar3 = 0xd;
                                      }
                                      else {
                                        ppuVar2 = &PTR____CFConstantStringClassReference_111007f18;
                                        func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007f18,
                                                  param_2,ppuVar1);
                                        if (ppuVar2 == (undefined **)0x0) {
                                          uVar3 = 0xe;
                                        }
                                        else {
                                          ppuVar2 = &PTR____CFConstantStringClassReference_111007f38
                                          ;
                                          func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007f38,
                                                  param_2,ppuVar1);
                                          if (ppuVar2 == (undefined **)0x0) {
                                            uVar3 = 0xf;
                                          }
                                          else {
                                            ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_111007f58;
                                            func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007f58,
                                                  param_2,ppuVar1);
                                            if (ppuVar2 == (undefined **)0x0) {
                                              uVar3 = 0x14;
                                            }
                                            else {
                                              ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_110eaa358;
                                              func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eaa358,
                                                  param_2,ppuVar1);
                                              if (ppuVar2 == (undefined **)0x0) {
                                                uVar3 = 0x15;
                                              }
                                              else {
                                                ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_110eaa378;
                                                func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eaa378,
                                                  param_2,ppuVar1);
                                                if (ppuVar2 == (undefined **)0x0) {
                                                  uVar3 = 0x16;
                                                }
                                                else {
                                                  ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_110eaa398;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_110eaa398,
                                                  param_2,ppuVar1);
                                                  if (ppuVar2 == (undefined **)0x0) {
                                                    uVar3 = 0x19;
                                                  }
                                                  else {
                                                    ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_111007f78;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007f78,
                                                  param_2,ppuVar1);
                                                  if (ppuVar2 == (undefined **)0x0) {
                                                    uVar3 = 0x18;
                                                  }
                                                  else {
                                                    ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_111007f98;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007f98,
                                                  param_2,ppuVar1);
                                                  if (ppuVar2 == (undefined **)0x0) {
                                                    uVar3 = 0x1a;
                                                  }
                                                  else {
                                                    ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_111007fb8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007fb8,
                                                  param_2,ppuVar1);
                                                  if (ppuVar2 == (undefined **)0x0) {
                                                    uVar3 = 0x1b;
                                                  }
                                                  else {
                                                    ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_111007fd8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007fd8,
                                                  param_2,ppuVar1);
                                                  if (ppuVar2 == (undefined **)0x0) {
                                                    uVar3 = 0x1c;
                                                  }
                                                  else {
                                                    ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_111007ff8;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111007ff8,
                                                  param_2,ppuVar1);
                                                  if (ppuVar2 == (undefined **)0x0) {
                                                    uVar3 = 0x1d;
                                                  }
                                                  else {
                                                    ppuVar2 = &
                                                  PTR____CFConstantStringClassReference_111008018;
                                                  func_0x00010bf32ee0(&
                                                  PTR____CFConstantStringClassReference_111008018,
                                                  param_2,ppuVar1);
                                                  uVar3 = 0x1e;
                                                  if (ppuVar2 != (undefined **)0x0) {
                                                    uVar3 = 0xffffffffffffffff;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(ppuVar1);
  return uVar3;
}



/* Entry: 1050458c4; end: 1050458c7; -[SCFriendProfileEntryPoint swipeInteractiveViewControllerDidFinishDismissing:] */

void FUN_1050458c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf74ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didDismiss_1125bac58);
  return;
}



/* Entry: 1050458c8; end: 1050458e7; -[SCFriendProfileEntryPoint sponsoredSnapAdResponseParserServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050458c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271a33c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050458e8; end: 1050458fb; -[SCFriendProfileEntryPoint setSponsoredSnapAdResponseParserServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050458e8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271a33c,param_3);
  return;
}



/* Entry: 1050458fc; end: 10504591b; -[SCFriendProfileEntryPoint sponsoredSnapBannerDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050458fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271a340);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10504591c; end: 10504592f; -[SCFriendProfileEntryPoint setSponsoredSnapBannerDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10504591c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271a340,param_3);
  return;
}



/* Entry: 105045930; end: 10504594f; -[SCFriendProfileEntryPoint discoverFeedLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105045930(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271a430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105045950; end: 105045963; -[SCFriendProfileEntryPoint setDiscoverFeedLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105045950(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271a430,param_3);
  return;
}



/* Entry: 105045964; end: 105045ebf; -[SCFriendProfileEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105045964(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271a498);
  _objc_destroyWeak(param_1 + _DAT_11271a454);
  _objc_destroyWeak(param_1 + _DAT_11271a42c);
  _objc_storeStrong(param_1 + _DAT_11271a428,0);
  _objc_storeStrong(param_1 + _DAT_11271a424,0);
  _objc_destroyWeak(param_1 + _DAT_11271a41c);
  _objc_storeStrong(param_1 + _DAT_11271a418,0);
  _objc_storeStrong(param_1 + _DAT_11271a3ec,0);
  _objc_storeStrong(param_1 + _DAT_11271a3e4,0);
  _objc_storeStrong(param_1 + _DAT_11271a3cc,0);
  _objc_destroyWeak(param_1 + _DAT_11271a3e8);
  _objc_destroyWeak(param_1 + _DAT_11271a3c8);
  _objc_storeStrong(param_1 + _DAT_11271a3c4,0);
  _objc_storeStrong(param_1 + _DAT_11271a3ac,0);
  _objc_storeStrong(param_1 + _DAT_11271a39c,0);
  _objc_storeStrong(param_1 + _DAT_11271a47c,0);
  _objc_storeStrong(param_1 + _DAT_11271a388,0);
  _objc_storeStrong(param_1 + _DAT_11271a410,0);
  _objc_storeStrong(param_1 + _DAT_11271a380,0);
  _objc_storeStrong(param_1 + _DAT_11271a468,0);
  _objc_storeStrong(param_1 + _DAT_11271a38c,0);
  _objc_destroyWeak(param_1 + _DAT_11271a414);
  _objc_destroyWeak(param_1 + _DAT_11271a494);
  _objc_destroyWeak(param_1 + _DAT_11271a458);
  _objc_destroyWeak(param_1 + _DAT_11271a438);
  _objc_destroyWeak(param_1 + _DAT_11271a464);
  _objc_destroyWeak(param_1 + _DAT_11271a2f8);
  _objc_destroyWeak(param_1 + _DAT_11271a430);
  _objc_destroyWeak(param_1 + _DAT_11271a40c);
  _objc_destroyWeak(param_1 + _DAT_11271a400);
  _objc_destroyWeak(param_1 + _DAT_11271a3dc);
  _objc_destroyWeak(param_1 + _DAT_11271a338);
  _objc_destroyWeak(param_1 + _DAT_11271a474);
  _objc_destroyWeak(param_1 + _DAT_11271a3f4);
  _objc_destroyWeak(param_1 + _DAT_11271a3f0);
  _objc_destroyWeak(param_1 + _DAT_11271a350);
  _objc_destroyWeak(param_1 + _DAT_11271a44c);
  _objc_destroyWeak(param_1 + _DAT_11271a450);
  _objc_destroyWeak(param_1 + _DAT_11271a3d8);
  _objc_destroyWeak(param_1 + _DAT_11271a3a8);
  _objc_destroyWeak(param_1 + _DAT_11271a3c0);
  _objc_destroyWeak(param_1 + _DAT_11271a490);
  _objc_destroyWeak(param_1 + _DAT_11271a3b4);
  _objc_destroyWeak(param_1 + _DAT_11271a3bc);
  _objc_destroyWeak(param_1 + _DAT_11271a3b8);
  _objc_destroyWeak(param_1 + _DAT_11271a374);
  _objc_destroyWeak(param_1 + _DAT_11271a3f8);
  _objc_destroyWeak(param_1 + _DAT_11271a3d0);
  _objc_destroyWeak(param_1 + _DAT_11271a390);
  _objc_destroyWeak(param_1 + _DAT_11271a420);
  _objc_destroyWeak(param_1 + _DAT_11271a404);
  _objc_destroyWeak(param_1 + _DAT_11271a408);
  _objc_destroyWeak(param_1 + _DAT_11271a35c);
  _objc_destroyWeak(param_1 + _DAT_11271a370);
  _objc_destroyWeak(param_1 + _DAT_11271a3a0);
  _objc_destroyWeak(param_1 + _DAT_11271a3a4);
  _objc_destroyWeak(param_1 + _DAT_11271a398);
  _objc_destroyWeak(param_1 + _DAT_11271a394);
  _objc_destroyWeak(param_1 + _DAT_11271a448);
  _objc_destroyWeak(param_1 + _DAT_11271a324);
  _objc_destroyWeak(param_1 + _DAT_11271a340);
  _objc_destroyWeak(param_1 + _DAT_11271a33c);
  _objc_destroyWeak(param_1 + _DAT_11271a2f4);
  _objc_destroyWeak(param_1 + _DAT_11271a30c);
  _objc_destroyWeak(param_1 + _DAT_11271a434);
  _objc_destroyWeak(param_1 + _DAT_11271a478);
  _objc_destroyWeak(param_1 + _DAT_11271a31c);
  _objc_destroyWeak(param_1 + _DAT_11271a460);
  _objc_destroyWeak(param_1 + _DAT_11271a45c);
  _objc_destroyWeak(param_1 + _DAT_11271a310);
  _objc_destroyWeak(param_1 + _DAT_11271a358);
  _objc_destroyWeak(param_1 + _DAT_11271a34c);
  _objc_destroyWeak(param_1 + _DAT_11271a444);
  _objc_destroyWeak(param_1 + _DAT_11271a384);
  _objc_destroyWeak(param_1 + _DAT_11271a440);
  _objc_destroyWeak(param_1 + _DAT_11271a43c);
  _objc_destroyWeak(param_1 + _DAT_11271a308);
  _objc_destroyWeak(param_1 + _DAT_11271a360);
  _objc_destroyWeak(param_1 + _DAT_11271a378);
  _objc_destroyWeak(param_1 + _DAT_11271a364);
  _objc_destroyWeak(param_1 + _DAT_11271a334);
  _objc_destroyWeak(param_1 + _DAT_11271a488);
  _objc_destroyWeak(param_1 + _DAT_11271a32c);
  _objc_destroyWeak(param_1 + _DAT_11271a37c);
  _objc_destroyWeak(param_1 + _DAT_11271a348);
  _objc_destroyWeak(param_1 + _DAT_11271a344);
  _objc_destroyWeak(param_1 + _DAT_11271a354);
  _objc_destroyWeak(param_1 + _DAT_11271a3d4);
  _objc_destroyWeak(param_1 + _DAT_11271a3fc);
  _objc_destroyWeak(param_1 + _DAT_11271a36c);
  _objc_destroyWeak(param_1 + _DAT_11271a368);
  _objc_destroyWeak(param_1 + _DAT_11271a318);
  _objc_destroyWeak(param_1 + _DAT_11271a304);
  _objc_destroyWeak(param_1 + _DAT_11271a3b0);
  _objc_destroyWeak(param_1 + _DAT_11271a328);
  _objc_destroyWeak(param_1 + _DAT_11271a330);
  _objc_destroyWeak(param_1 + _DAT_11271a48c);
  _objc_destroyWeak(param_1 + _DAT_11271a3e0);
  _objc_destroyWeak(param_1 + _DAT_11271a300);
  _objc_storeStrong(param_1 + _DAT_11271a46c,0);
  _objc_storeStrong(param_1 + _DAT_11271a314,0);
  _objc_storeStrong(param_1 + _DAT_11271a470,0);
  _objc_storeStrong(param_1 + _DAT_11271a320,0);
  _objc_storeStrong(param_1 + _DAT_11271a484,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271a480);
  return;
}



/* Entry: 105045ec0; end: 1050464d3; -[SCFriendUnifiedProfileSectionCreator initWithDataSource:imageDownloader:userSession:navigationDelegate:snapchattersDataFetcher:snapchattersDataTracker:friendStatusManagerCreator:snapchatterPublicInfoFetcher:userInfoProvider:labelInfoFetcher:actionHandler:profileChatMediaDataSource:chatAttachmentDataStore:charmsDataCoordinator:charmsViewingDataCoordinator:profileSavedAttachmentsFetcher:profileChatMessagesUpdateTracker:charmsBlizzardLogger:mapPersonLocationsProvider:bitmojiAvatarProvider:featureSettingsService:auraDataManager:auraFriendProfileEntryPointObserver:circumstanceEngine:friendmojiPresenter:grapheneServices:storiesSnapReadReceiptService:simpleContentFetcher:urlPreviewProvider:friendStorySettingMutator:ghostImageService:] */

undefined8 *
FUN_105045ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  puStack_70 = PTR_PTR_1126e5be8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_storeWeak(puVar1 + 5,param_5);
    _objc_storeWeak(puVar1 + 6,param_6);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[10];
    puVar1[10] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[2];
    puVar1[2] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    _objc_release(uVar2);
  }
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
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


