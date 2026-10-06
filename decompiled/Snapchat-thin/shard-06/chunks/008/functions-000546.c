/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104e7282c; end: 104e72aeb;  */

void FUN_104e7282c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b14b8;
    _objc_alloc(PTR_PTR_1126b14b8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010c14fa80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf1bae0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf14060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7be0(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    param_2 = PTR_PTR_1126b15c8;
    _objc_alloc();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2923e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf85d80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a6a0(*(undefined8 *)(param_1 + 0x20));
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05c0e0();
    _objc_release(uVar2);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar1);
  }
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_104e72aec;
  puStack_80 = &UNK_11084aaa8;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar6);
  puStack_78 = param_2;
  uStack_70 = uVar6;
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(puStack_78);
  _objc_release(uStack_70);
  _objc_release(param_2);
  return;
}



/* Entry: 104e72aec; end: 104e72afb;  */

void FUN_104e72aec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e72af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104e72afc; end: 104e72bf7; -[SCComposerAddFriendsContextProvider _presentUserProfileOnMainThread:section:] */

void FUN_104e72afc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b15c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008d20(puVar1);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
  uVar2 = param_4;
  func_0x0001079ec668(param_4);
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x000107d3e014(param_3,uVar2,1,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72bf8; end: 104e72cf7; -[SCComposerAddFriendsContextProvider _presentUserActionsOnMainThread:section:] */

void FUN_104e72bf8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b15c0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008d20(puVar1);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70));
  uVar2 = param_4;
  func_0x0001079ec668(param_4);
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x0001079ec0b0(param_3,uVar2,0x2e,8,*(undefined8 *)(param_1 + 0x138));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0));
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72cf8; end: 104e72df3; -[SCComposerAddFriendsContextProvider _presentUserChatOnMainThread:] */

void FUN_104e72cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b15c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008d20(puVar1,param_2,0,uVar2,0,0xc,0);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,puVar1);
  puVar3 = PTR_PTR_1126b1560;
  func_0x00010bf35fe0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x118),param_2,puVar3);
  uVar2 = param_3;
  func_0x000107cf1b4c(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0),param_2,0,uVar2,0);
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72df4; end: 104e72eef; -[SCComposerAddFriendsContextProvider _presentUserSnapOnMainThread:] */

void FUN_104e72df4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b15c0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008d20(puVar1,param_2,0,uVar2,0,0xd,0);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x70),param_2,puVar1);
  puVar3 = PTR_PTR_1126b1560;
  func_0x00010c23f600(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x118),param_2,puVar3);
  uVar2 = param_3;
  func_0x000107cf1ac8(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0),param_2,0,uVar2,0);
  _objc_release(uVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e72ef0; end: 104e72f3b; -[SCComposerAddFriendsContextProvider _presentInvitesPageOnMainThread] */

void FUN_104e72ef0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107d3df94(0,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e72f3c; end: 104e72fb3; -[SCComposerAddFriendsContextProvider _presentFacebookFriendsPageOnMainThread] */

void FUN_104e72f3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x130),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110be1e0,
                      &PTR____CFConstantStringClassReference_110db7f38);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x130));
  uVar1 = 0;
  func_0x000107d3df94(0,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e72fb4; end: 104e7304b; -[SCComposerAddFriendsContextProvider _composerContactPermissionStateFromPermissionInfoProvider:] */

undefined4 FUN_104e72fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfcdc00();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfcdbe0();
    _objc_release(uVar1);
    uVar3 = 1;
    if ((int)uVar2 != 0) {
      uVar3 = 2;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 104e7304c; end: 104e7306b; -[SCComposerAddFriendsContextProvider recentlyActiveEducationAlertScopeDidDismiss:] */

void FUN_104e7304c(long param_1)

{
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xf8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 104e7306c; end: 104e7312f; -[SCComposerAddFriendsContextProvider _setupWebLauncher] */

void FUN_104e7306c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126ae630;
  func_0x00010bfe6000(PTR_PTR_1126ae630);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2b9b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126afe88;
  _objc_alloc(PTR_PTR_1126afe88);
  func_0x00010c062da0();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104e73130; end: 104e73137; -[SCComposerAddFriendsContextProvider previousStatusBarStyle] */

undefined8 FUN_104e73130(long param_1)

{
  return *(undefined8 *)(param_1 + 0x198);
}



/* Entry: 104e73138; end: 104e7313f; -[SCComposerAddFriendsContextProvider setPreviousStatusBarStyle:] */

void FUN_104e73138(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



/* Entry: 104e73140; end: 104e73147; -[SCComposerAddFriendsContextProvider actionHandler] */

undefined8 FUN_104e73140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a0);
}



/* Entry: 104e73148; end: 104e73177; -[SCComposerAddFriendsContextProvider setActionHandler:] */

void FUN_104e73148(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e73178; end: 104e7317f; -[SCComposerAddFriendsContextProvider addFriendsActionEventObservable] */

undefined8 FUN_104e73178(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 104e73180; end: 104e731af; -[SCComposerAddFriendsContextProvider setAddFriendsActionEventObservable:] */

void FUN_104e73180(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e731b0; end: 104e731c7; -[SCComposerAddFriendsContextProvider uiContainer] */

void FUN_104e731b0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e731c8; end: 104e731d3; -[SCComposerAddFriendsContextProvider setUiContainer:] */

void FUN_104e731c8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1a8,param_3);
  return;
}



/* Entry: 104e731d4; end: 104e731db; -[SCComposerAddFriendsContextProvider notificationPool] */

undefined8 FUN_104e731d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 104e731dc; end: 104e7320b; -[SCComposerAddFriendsContextProvider setNotificationPool:] */

void FUN_104e731dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e7320c; end: 104e7347b; -[SCComposerAddFriendsContextProvider .cxx_destruct] */

void FUN_104e7320c(long param_1)

{
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_destroyWeak(param_1 + 0x1a8);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
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
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e7347c; end: 104e73707; -[SCComposerAddFriendsHooksProvider initWithSeenAndAddEventLogger:activeStoryFetcher:pageEventDataSubject:hideSuggestionLogger:incomingFriendStore:placement:circumstanceEngine:quickAddRefresher:debuggingInfoFetcher:pageLoadMetricManager:performerProvider:] */

undefined8 *
FUN_104e7347c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126e4950;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    puVar1[8] = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
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
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xc];
    puVar1[0xc] = uVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar4;
    _objc_release(uVar2);
    puVar5 = puVar1;
    func_0x00010bdef060();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar5;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e73708; end: 104e7370f; -[SCComposerAddFriendsHooksProvider defaultHooks] */

void FUN_104e73708(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 104e73710; end: 104e737c7; -[SCComposerAddFriendsHooksProvider _createLazyAddFriendsHooks] */

void FUN_104e73710(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e737c8; end: 104e73807;  */

void FUN_104e737c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdea760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104e73808; end: 104e73ce7; -[SCComposerAddFriendsHooksProvider _createAddFriendsHooks] */

void FUN_104e73808(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_268 [8];
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined1 auStack_218 [8];
  undefined *puStack_210;
  undefined8 uStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
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
  
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126b15d0;
  _objc_opt_new(PTR_PTR_1126b15d0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104e73ce8;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c1d2720(puVar2);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x104e73d14;
  puStack_b8 = &UNK_110855430;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c1d26c0(puVar2);
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x104e73d5c;
  puStack_e0 = &UNK_110855460;
  _objc_copyWeak(auStack_d8,auStack_80);
  func_0x00010c1d2700(puVar2);
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x104e73da4;
  puStack_108 = &UNK_110855490;
  _objc_copyWeak(auStack_100,auStack_80);
  func_0x00010c1d1640(puVar2);
  puStack_148 = puVar1;
  uStack_140 = 0xc2000000;
  uStack_138 = 0x104e73dec;
  puStack_130 = &UNK_1108554c0;
  _objc_copyWeak(auStack_128,auStack_80);
  func_0x00010c1d1680(puVar2);
  puStack_170 = puVar1;
  uStack_168 = 0xc2000000;
  uStack_160 = 0x104e73e34;
  puStack_158 = &UNK_1108554f0;
  _objc_copyWeak(auStack_150,auStack_80);
  func_0x00010c1d16a0(puVar2);
  puStack_198 = puVar1;
  uStack_190 = 0xc2000000;
  uStack_188 = 0x104e73e7c;
  puStack_180 = &UNK_110843540;
  _objc_copyWeak(auStack_178,auStack_80);
  func_0x00010c1d16c0(puVar2);
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_104e73ec4;
  puStack_1a8 = &UNK_110855520;
  _objc_copyWeak(auStack_1a0,auStack_80);
  func_0x00010c1d1700(puVar2);
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x104e73f2c;
  puStack_1d0 = &UNK_110855520;
  _objc_copyWeak(auStack_1c8,auStack_80);
  func_0x00010c1d16e0(puVar2);
  puStack_210 = puVar1;
  uStack_208 = 0xc2000000;
  pcStack_200 = FUN_104e73f94;
  puStack_1f8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_1f0,auStack_80);
  func_0x00010c1d1660(puVar2);
  puStack_238 = puVar1;
  uStack_230 = 0xc2000000;
  uStack_228 = 0x104e73fc0;
  puStack_220 = &UNK_1108434b0;
  _objc_copyWeak(auStack_218,auStack_80);
  func_0x00010c1d4320(puVar2);
  puStack_260 = puVar1;
  uStack_258 = 0xc2000000;
  uStack_250 = 0x104e73fec;
  puStack_248 = &UNK_1108434b0;
  _objc_copyWeak(auStack_240,auStack_80);
  func_0x00010c1d1500(puVar2);
  _objc_copyWeak(auStack_268,auStack_80);
  func_0x00010c1d1960(puVar2);
  _objc_destroyWeak(auStack_268);
  _objc_destroyWeak(auStack_240);
  _objc_destroyWeak(auStack_218);
  _objc_destroyWeak(auStack_1f0);
  _objc_destroyWeak(auStack_1c8);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_178);
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_128);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e73ce8; end: 104e73ec3;  */

void FUN_104e73ce8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be694a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e73ec4; end: 104e73f93;  */

void FUN_104e73ec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be680a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e73f94; end: 104e7405f;  */

void FUN_104e73f94(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be68000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e74060; end: 104e74087; -[SCComposerAddFriendsHooksProvider _onFirstUserCellImpression] */

void FUN_104e74060(long param_1)

{
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0f1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_pageLoadCompletes__112619f70,
             &PTR____CFConstantStringClassReference_110eb5718);
  return;
}



/* Entry: 104e74088; end: 104e74127; -[SCComposerAddFriendsHooksProvider _onClickAddedMeDebugger:] */

void FUN_104e74088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e74128;
  puStack_30 = &UNK_110848438;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfa6380(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104e74128; end: 104e74133;  */

void FUN_104e74128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104e74130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104e74134; end: 104e7427b; -[SCComposerAddFriendsHooksProvider _onImpressionIncomingFriendCell:] */

void FUN_104e74134(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b15d8;
  _objc_opt_class(PTR_PTR_1126b15d8);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  _objc_initWeak(auStack_38,param_1);
  uVar5 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfebea0(uVar1);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104e7427c; end: 104e74393;  */

void FUN_104e7427c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfec9e0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfdcea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfd3c00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c07be00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c07a0a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010be698e0(lVar1);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104e74394; end: 104e744d3; -[SCComposerAddFriendsHooksProvider _onImpressionIncomingFriend:index:hasSubtext:hasActiveStory:hasGreenDot:isPinned:] */

void FUN_104e74394(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (param_3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_3);
    func_0x00010c0bb700(uVar6,param_2,param_3);
    puVar1 = PTR_PTR_1126b15e0;
    _objc_alloc(PTR_PTR_1126b15e0);
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bfebe20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar4 = lVar3;
    func_0x00010c073820(lVar3);
    func_0x00010c043720(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea8ff8,param_4,
                        lVar2,(uint)lVar4 ^ 1,param_5,param_6,param_7);
    _objc_release(lVar3);
    _objc_release(lVar2);
    puVar5 = PTR_PTR_1126b1560;
    func_0x00010c2a6080(PTR_PTR_1126b1560,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar5);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104e744d4; end: 104e745db; -[SCComposerAddFriendsHooksProvider _onImpressionSuggestedFriendCell:] */

void FUN_104e744d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010699eb74();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(uVar1);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104e745dc; end: 104e746a7;  */

void FUN_104e745dc(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = param_2 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bfec9e0(*(undefined8 *)(param_2 + 0x28));
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010c07be00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfdcea0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf1f3c0();
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfd3c00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf1f3c0();
  func_0x00010be69920(lVar2,param_3,uVar1,(long)param_1,uVar3,uVar5,uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104e746a8; end: 104e74853; -[SCComposerAddFriendsHooksProvider _onImpressionSuggestedFriend:index:isRecentlyActive:hasSubtext:hasActiveStory:] */

void FUN_104e746a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c0df780(puVar1,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbbc0(uVar4,param_2,param_3,puVar1,param_5);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126b15e0;
    _objc_alloc(PTR_PTR_1126b15e0);
    lVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010bf1f3c0();
    _objc_release(param_5);
    func_0x00010c043720(puVar1,param_2,&PTR____CFConstantStringClassReference_110ea9018,param_4,
                        lVar2,0,param_6,param_7,(char)uVar4);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126b1560;
    func_0x00010c2a6080(PTR_PTR_1126b1560,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaaa40();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbbe0();
    _objc_release(param_3);
    _objc_release(uVar4);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104e74854; end: 104e7498f; -[SCComposerAddFriendsHooksProvider _onBeforeAddFriend:] */

void FUN_104e74854(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    lVar2 = param_1;
    func_0x00010bdf7ea0(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010bf858a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c067fc0();
    lVar7 = param_3;
    func_0x00010c2626c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010c08fa60();
    uVar1 = 4;
    if (lVar8 != 0) {
      uVar1 = 0;
    }
    func_0x00010c008d20(puVar4,param_2,lVar2,lVar3,lVar6,uVar1,0);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar4);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e74990; end: 104e74b2b; -[SCComposerAddFriendsHooksProvider _dataRequestFromAddFriendRequest:placement:] */

void FUN_104e74990(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong in_stack_ffffffffffffff28;
  
  puVar2 = PTR_PTR_1126b15c8;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  lVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c0e0(puVar2,param_2,lVar3,0,&PTR____CFConstantStringClassReference_110daafd8,0,0,0,
                      0,in_stack_ffffffffffffff28 & 0xffffffffffffff00,0,0,0,0,0,0,0,0);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126ae5c0;
  lVar3 = param_3;
  func_0x00010c2626c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  uVar1 = 0x248de666;
  if (lVar4 != 0) {
    uVar1 = 0x1a0e6a1a;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  lVar4 = param_3;
  func_0x00010bf858a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar5 = lVar4;
  func_0x00010c067fc0(lVar4);
  func_0x00010befca80(puVar6,param_2,puVar2,uVar1,uVar8,lVar5,0,0,0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR_PTR_1126b15e8;
  func_0x00010c2894a0(PTR_PTR_1126b15e8,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 104e74b2c; end: 104e74c0f; -[SCComposerAddFriendsHooksProvider _onBeforeHideIncomingFriend:] */

void FUN_104e74b2c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf858a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c008d20(puVar3,param_2,0,lVar1,lVar4,6,0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e74c10; end: 104e74d17; -[SCComposerAddFriendsHooksProvider _onBeforeHideSuggestedFriend:] */

void FUN_104e74c10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    lVar1 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bfec9e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c008d20(puVar3,param_2,0,lVar1,lVar4,5,0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7c40();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e74d18; end: 104e74df7; -[SCComposerAddFriendsHooksProvider _onBeforeShareMySnapcode:] */

void FUN_104e74d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1133bb470;
  func_0x00010c0720c0(PTR_PTR_1133bb470,param_2,param_3);
  if ((int)puVar1 == 0) {
    puVar1 = PTR_PTR_1133bb478;
    func_0x00010c0720c0(PTR_PTR_1133bb478,param_2,param_3);
    if ((int)puVar1 == 0) {
      puVar1 = PTR_PTR_1133bb480;
      func_0x00010c0720c0(PTR_PTR_1133bb480,param_2,param_3);
      if ((int)puVar1 == 0) {
        puVar1 = (undefined *)0x0;
      }
      else {
        puVar1 = PTR_PTR_1126b1560;
        func_0x00010c22b100(PTR_PTR_1126b1560);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar1 = PTR_PTR_1126b1560;
      func_0x00010c22b0e0(PTR_PTR_1126b1560);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    puVar1 = PTR_PTR_1126b1560;
    func_0x00010c22b120(PTR_PTR_1126b1560);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e74df8; end: 104e74e3b; -[SCComposerAddFriendsHooksProvider _onUserPullToRefresh] */

void FUN_104e74df8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c2933a0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e74e3c; end: 104e74edb; -[SCComposerAddFriendsHooksProvider _onBeforeUndoIgnoreIncomingFriend:index:] */

void FUN_104e74e3c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    uVar3 = param_4;
    func_0x00010c067fc0(param_4);
    func_0x00010c008d20(puVar2,param_2,0,param_3,uVar3,6,2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e74edc; end: 104e74f9b; -[SCComposerAddFriendsHooksProvider _onBeforeUndoHideSuggestedFriend:index:] */

void FUN_104e74edc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b15c0;
    _objc_alloc(PTR_PTR_1126b15c0);
    uVar3 = param_4;
    func_0x00010c067fc0(param_4);
    func_0x00010c008d20(puVar2,param_2,0,param_3,uVar3,5,2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2240();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e74f9c; end: 104e74fcf; -[SCComposerAddFriendsHooksProvider _onBeforeHideFeedback] */

void FUN_104e74f9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0af440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e74fd0; end: 104e75013; -[SCComposerAddFriendsHooksProvider _onAddedMeSectionViewMoreTapped] */

void FUN_104e74fd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1560;
  func_0x00010c29dde0(PTR_PTR_1126b1560);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e75014; end: 104e7501b; -[SCComposerAddFriendsHooksProvider addFriendsActionEventObservable] */

undefined8 FUN_104e75014(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104e7501c; end: 104e7504b; -[SCComposerAddFriendsHooksProvider setAddFriendsActionEventObservable:] */

void FUN_104e7501c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 104e7504c; end: 104e750f3; -[SCComposerAddFriendsHooksProvider .cxx_destruct] */

void FUN_104e7504c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 104e750f4; end: 104e75487; -[SCFriendingGrapheneLogger initWithPageEventObservable:actionEventObservable:friendingActiveStoryLogger:performerProvider:badgeLogger:userPreferences:friendingMetadataLogger:] */

undefined8 *
FUN_104e750f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_78 = PTR_PTR_1126e4958;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[1];
    puVar1[1] = param_5;
    _objc_release(uVar2);
    puVar3 = puVar1;
    func_0x00010bdef1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_9;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[7];
    puVar1[7] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar4;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar4;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104e75488;
    puStack_98 = &UNK_110855580;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar2 = param_3;
    func_0x00010c25ff60(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar2 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 104e75488; end: 104e75517;  */

void FUN_104e75488(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6f100();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e75518; end: 104e7560b; -[SCFriendingGrapheneLogger _createLazyPerformerWithPerformerProvider:] */

void FUN_104e75518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e755b0;
  puStack_30 = &UNK_1108545f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104e7560c; end: 104e75703; -[SCFriendingGrapheneLogger _pageEventReceived:] */

void FUN_104e7560c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e75704; end: 104e75737;  */

void FUN_104e75704(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be6f120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e75738; end: 104e7582f; -[SCFriendingGrapheneLogger _actionEventReceived:] */

void FUN_104e75738(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104e75830; end: 104e75863;  */

void FUN_104e75830(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc4320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104e75864; end: 104e75923; -[SCFriendingGrapheneLogger _pageEventReceivedInPerformer:] */

void FUN_104e75864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104e75924;
  puStack_30 = &UNK_110842e18;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x104e7592c;
  puStack_58 = &UNK_110842e18;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104e75934;
  puStack_80 = &UNK_1108555e0;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0c15e0(param_3,param_2,&puStack_48,0,0,0,0,&puStack_70,0,0,0,0,0,0,0,0,0,&puStack_98,
                      0,0,0,0,0);
  return;
}



/* Entry: 104e75924; end: 104e7593f;  */

void FUN_104e75924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee9530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__viewDidLoad_112597ef0);
  return;
}



/* Entry: 104e75940; end: 104e75997; -[SCFriendingGrapheneLogger _viewDidLoad] */

void FUN_104e75940(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e75998;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 104e75998; end: 104e759cf;  */

void FUN_104e75998(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e759d0; end: 104e759d3; -[SCFriendingGrapheneLogger _willDealloc] */

void FUN_104e759d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__uploadPageEndEvent_112597098);
  return;
}



/* Entry: 104e759d4; end: 104e75b3b; -[SCFriendingGrapheneLogger _uploadPageEndEvent] */

void FUN_104e759d4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf529e0(uVar2);
  func_0x00010c0a6ec0(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010bf529e0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bf529e0(uVar3);
  func_0x00010c0a0ca0(uVar1,param_2,uVar2,uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf529e0(uVar2);
  func_0x00010c0a8840(uVar1,param_2,uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf529e0(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bf529e0(uVar3);
  func_0x00010c0a0c80(uVar1,param_2,uVar2,uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aef80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aefc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e75b3c; end: 104e75cd3; -[SCFriendingGrapheneLogger _willDisplayCell:] */

void FUN_104e75b3c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar2 == 0) goto LAB_104e75cbc;
  uVar1 = param_3;
  func_0x00010c156900();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  uVar1 = param_3;
  if ((int)uVar2 == 0) {
    uVar2 = param_3;
    func_0x00010c156900();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_104e75cbc;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x68),param_2,uVar1);
    uVar2 = param_3;
    func_0x00010bfdcea0();
    if ((int)uVar2 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x38),param_2,uVar1);
    }
    uVar2 = param_3;
    func_0x00010bfd78a0();
    if ((int)uVar2 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x48),param_2,uVar1);
    }
    uVar2 = param_3;
    func_0x00010bfd3c00();
    if ((int)uVar2 != 0) {
      lVar4 = 0x58;
      goto LAB_104e75ca8;
    }
  }
  else {
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x60),param_2,uVar1);
    uVar2 = param_3;
    func_0x00010bfdcea0();
    if ((int)uVar2 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x30),param_2,uVar1);
    }
    uVar2 = param_3;
    func_0x00010bfd78a0();
    if ((int)uVar2 != 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x40),param_2,uVar1);
    }
    uVar2 = param_3;
    func_0x00010bfd3c00();
    if ((uVar2 & 1) != 0) {
      lVar4 = 0x50;
LAB_104e75ca8:
      func_0x00010befa120(*(undefined8 *)(param_1 + lVar4),param_2,uVar1);
    }
  }
  _objc_release(uVar1);
LAB_104e75cbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e75cd4; end: 104e75d57; -[SCFriendingGrapheneLogger _actionEventReceivedInPerformer:] */

void FUN_104e75cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf64280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bdd00();
  _objc_release(param_3);
  return;
}



/* Entry: 104e75d58; end: 104e75d63;  */

void FUN_104e75d58(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateDataRequestTriggered__112593440,param_2);
  return;
}



/* Entry: 104e75d64; end: 104e75dd3; -[SCFriendingGrapheneLogger _updateDataRequestTriggered:] */

void FUN_104e75d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_104e75dd4;
  puStack_20 = &UNK_110855640;
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_18 = param_1;
  func_0x00010c0bc6c0(param_3,param_2,&puStack_38,0,0,0,0,0,0,0,0);
  return;
}



/* Entry: 104e75dd4; end: 104e75ddf;  */

void FUN_104e75dd4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bebd690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__snapchatterIsAdded__11258cf48,param_2);
  return;
}



/* Entry: 104e75de0; end: 104e75f43; -[SCFriendingGrapheneLogger _snapchatterIsAdded:] */

void FUN_104e75de0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bfebe20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = *(ulong *)(param_1 + 0x60);
    func_0x00010bf4b900(uVar3,param_2,lVar1);
    if ((uVar3 & 1) != 0) goto LAB_104e75e40;
    lVar2 = param_3;
    func_0x00010c262240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar3 = *(ulong *)(param_1 + 0x68);
      func_0x00010bf4b900(uVar3,param_2,lVar1);
      if ((uVar3 & 1) == 0) goto LAB_104e75ea0;
    }
    else {
      _objc_release();
    }
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x28),param_2,lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6ea0();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010bf4b900(uVar5,param_2,lVar1);
    func_0x00010befbba0(uVar4,param_2,uVar5);
  }
  else {
    _objc_release();
LAB_104e75e40:
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a8820();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010bf4b900(uVar5,param_2,lVar1);
    func_0x00010bef92a0(uVar4,param_2,uVar5);
  }
  _objc_release(uVar4);
LAB_104e75ea0:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104e75f44; end: 104e7601b; -[SCFriendingGrapheneLogger .cxx_destruct] */

void FUN_104e75f44(long param_1)

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



/* Entry: 104e7601c; end: 104e7608f; -[SCFriendingMetadataGrapheneLogger initWithFriendingMetadataMetric:] */

undefined1 * FUN_104e7601c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4960;
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



/* Entry: 104e76090; end: 104e76487; -[SCFriendingMetadataGrapheneLogger logSeenIncomingFriends:addedIncomingFriends:incomingFriendsHaveActiveStory:incomingFriendsHaveSubtext:incomingFriendsHaveGreenDot:] */

void FUN_104e76090(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  long lVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_6;
  uVar7 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar9 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar9 == 0) {
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar15 = 0;
    lVar10 = 0;
    lVar14 = 0;
  }
  else {
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar15 = 0;
    lVar10 = 0;
    lVar14 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar5 = param_6;
        func_0x00010bf4b900(param_6);
        lVar10 = lVar10 + (ulong)((uint)uVar5 ^ 1);
        lVar14 = lVar14 + (uVar5 & 0xffffffff);
        uVar5 = param_5;
        func_0x00010bf4b900(param_5);
        lVar18 = lVar18 + (uVar5 & 0xffffffff);
        lVar17 = lVar17 + (ulong)((uint)uVar5 ^ 1);
        uVar5 = param_7;
        func_0x00010bf4b900(param_7);
        lVar16 = lVar16 + (uVar5 & 0xffffffff);
        lVar15 = lVar15 + (ulong)((uint)uVar5 ^ 1);
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      lVar9 = param_3;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  FUN_104e7aa74(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar14);
  FUN_104e7aa74(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar10);
  FUN_104e7ac60(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar18);
  FUN_104e7ac60(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar17);
  FUN_104e7ae4c(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar16);
  FUN_104e7ae4c(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar15);
  _objc_retain(param_4);
  uVar5 = 0x10;
  lVar9 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar9 == 0) {
    lVar14 = 0;
    lVar10 = 0;
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar15 = 0;
  }
  else {
    lVar14 = 0;
    lVar10 = 0;
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar15 = 0;
    do {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar5 = param_6;
        func_0x00010bf4b900();
        lVar14 = lVar14 + (uVar5 & 0xffffffff);
        lVar10 = lVar10 + (ulong)((uint)uVar5 ^ 1);
        uVar5 = param_5;
        func_0x00010bf4b900();
        lVar18 = lVar18 + (uVar5 & 0xffffffff);
        lVar17 = lVar17 + (ulong)((uint)uVar5 ^ 1);
        uVar5 = param_7;
        func_0x00010bf4b900();
        lVar16 = lVar16 + (uVar5 & 0xffffffff);
        lVar15 = lVar15 + (ulong)((uint)uVar5 ^ 1);
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      uVar5 = 0x10;
      lVar9 = param_4;
      func_0x00010bf52a60();
    } while (lVar9 != 0);
  }
  _objc_release(param_4);
  ppuVar4 = &PTR____CFConstantStringClassReference_110db80d8;
  FUN_104e7aa74(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar14);
  FUN_104e7aa74(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar10);
  FUN_104e7ac60(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar18);
  FUN_104e7ac60(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar17);
  FUN_104e7ae4c(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar16);
  FUN_104e7ae4c(*(undefined8 *)(param_1 + 8),0);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(ppuVar4);
  _objc_retain(lVar15);
  _objc_retain(uVar5);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  ppuVar2 = ppuVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (ppuVar2 == (undefined **)0x0) {
    lVar14 = 0;
    lVar10 = 0;
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar8 = 0;
  }
  else {
    lVar14 = 0;
    lVar10 = 0;
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar8 = 0;
    do {
      ppuVar12 = (undefined **)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar3 = uVar6;
        func_0x00010bf4b900(uVar6);
        lVar16 = lVar16 + (ulong)((uint)uVar3 ^ 1);
        lVar8 = lVar8 + (uVar3 & 0xffffffff);
        uVar3 = uVar5;
        func_0x00010bf4b900(uVar5);
        lVar14 = lVar14 + (uVar3 & 0xffffffff);
        lVar10 = lVar10 + (ulong)((uint)uVar3 ^ 1);
        uVar3 = uVar7;
        func_0x00010bf4b900(uVar7);
        lVar18 = lVar18 + (uVar3 & 0xffffffff);
        lVar17 = lVar17 + (ulong)((uint)uVar3 ^ 1);
        ppuVar12 = (undefined **)((long)ppuVar12 + 1);
      } while (ppuVar2 != ppuVar12);
      ppuVar2 = ppuVar4;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  FUN_104e7b038(*(undefined8 *)(param_3 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar8);
  FUN_104e7b038(*(undefined8 *)(param_3 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar16);
  FUN_104e7b224(*(undefined8 *)(param_3 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar14);
  FUN_104e7b224(*(undefined8 *)(param_3 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar10);
  FUN_104e7b410(*(undefined8 *)(param_3 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar18);
  FUN_104e7b410(*(undefined8 *)(param_3 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar17);
  _objc_retain(lVar15);
  lVar8 = lVar15;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar8 == 0) {
    lVar14 = 0;
    lVar10 = 0;
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar11 = 0;
  }
  else {
    lVar14 = 0;
    lVar10 = 0;
    lVar18 = 0;
    lVar17 = 0;
    lVar16 = 0;
    lVar11 = 0;
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar15);
        }
        uVar3 = uVar6;
        func_0x00010bf4b900(uVar6);
        lVar14 = lVar14 + (uVar3 & 0xffffffff);
        lVar10 = lVar10 + (ulong)((uint)uVar3 ^ 1);
        uVar3 = uVar5;
        func_0x00010bf4b900(uVar5);
        lVar18 = lVar18 + (uVar3 & 0xffffffff);
        lVar17 = lVar17 + (ulong)((uint)uVar3 ^ 1);
        uVar3 = uVar7;
        func_0x00010bf4b900(uVar7);
        lVar16 = lVar16 + (uVar3 & 0xffffffff);
        lVar11 = lVar11 + (ulong)((uint)uVar3 ^ 1);
        lVar13 = lVar13 + 1;
      } while (lVar8 != lVar13);
      lVar8 = lVar15;
      func_0x00010bf52a60();
    } while (lVar8 != 0);
  }
  _objc_release(lVar15);
  FUN_104e7b038(*(undefined8 *)(param_3 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar14);
  FUN_104e7b038(*(undefined8 *)(param_3 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar10);
  FUN_104e7b224(*(undefined8 *)(param_3 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar18);
  FUN_104e7b224(*(undefined8 *)(param_3 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar17);
  FUN_104e7b410(*(undefined8 *)(param_3 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar16);
  FUN_104e7b410(*(undefined8 *)(param_3 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar11);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(lVar15);
  _objc_release(ppuVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(ppuVar4 + 1,0);
    return;
  }
  return;
}



/* Entry: 104e76488; end: 104e7687f; -[SCFriendingMetadataGrapheneLogger logSeenSuggestedFriends:addedSuggestedFriends:suggestedFriendsHaveActiveStory:suggestedFriendsHaveSubtext:suggestedFriendsHaveGreenDot:] */

void FUN_104e76488(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  ulong param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
    lVar5 = 0;
    lVar7 = 0;
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = param_6;
        func_0x00010bf4b900(param_6);
        lVar5 = lVar5 + (ulong)((uint)uVar3 ^ 1);
        lVar7 = lVar7 + (uVar3 & 0xffffffff);
        uVar3 = param_5;
        func_0x00010bf4b900(param_5);
        lVar11 = lVar11 + (uVar3 & 0xffffffff);
        lVar10 = lVar10 + (ulong)((uint)uVar3 ^ 1);
        uVar3 = param_7;
        func_0x00010bf4b900(param_7);
        lVar9 = lVar9 + (uVar3 & 0xffffffff);
        lVar8 = lVar8 + (ulong)((uint)uVar3 ^ 1);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_3;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  FUN_104e7b038(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar7);
  FUN_104e7b038(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar5);
  FUN_104e7b224(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar11);
  FUN_104e7b224(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar10);
  FUN_104e7b410(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80b8,
                lVar9);
  FUN_104e7b410(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80b8,
                lVar8);
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    lVar7 = 0;
    lVar5 = 0;
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    lVar5 = 0;
    lVar11 = 0;
    lVar10 = 0;
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_4);
        }
        uVar3 = param_6;
        func_0x00010bf4b900(param_6);
        lVar7 = lVar7 + (uVar3 & 0xffffffff);
        lVar5 = lVar5 + (ulong)((uint)uVar3 ^ 1);
        uVar3 = param_5;
        func_0x00010bf4b900(param_5);
        lVar11 = lVar11 + (uVar3 & 0xffffffff);
        lVar10 = lVar10 + (ulong)((uint)uVar3 ^ 1);
        uVar3 = param_7;
        func_0x00010bf4b900(param_7);
        lVar9 = lVar9 + (uVar3 & 0xffffffff);
        lVar8 = lVar8 + (ulong)((uint)uVar3 ^ 1);
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_4;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_4);
  FUN_104e7b038(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar7);
  FUN_104e7b038(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar5);
  FUN_104e7b224(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar11);
  FUN_104e7b224(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar10);
  FUN_104e7b410(*(undefined8 *)(param_1 + 8),1,&PTR____CFConstantStringClassReference_110db80d8,
                lVar9);
  FUN_104e7b410(*(undefined8 *)(param_1 + 8),0,&PTR____CFConstantStringClassReference_110db80d8,
                lVar8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
    return;
  }
  return;
}



/* Entry: 104e76880; end: 104e7688b; -[SCFriendingMetadataGrapheneLogger .cxx_destruct] */

void FUN_104e76880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e7688c; end: 104e768ff; -[SCHideSuggestionLogger initWithGrapheneRegistry:] */

undefined1 * FUN_104e7688c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4968;
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



/* Entry: 104e76900; end: 104e769b7; -[SCHideSuggestionLogger logHideWithFeedbackEnabled:] */

void FUN_104e76900(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe2a40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b15f0;
  func_0x00010bfe1560(PTR_PTR_1126b15f0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e769b8; end: 104e76a33; -[SCHideSuggestionLogger logSetFeedback] */

void FUN_104e769b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe2a40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b15f0;
  func_0x00010c19b240(PTR_PTR_1126b15f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e76a34; end: 104e76aaf; -[SCHideSuggestionLogger logUnhide] */

void FUN_104e76a34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe2a40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b15f0;
  func_0x00010c27fbc0(PTR_PTR_1126b15f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104e76ab0; end: 104e76c6b; -[SCHideSuggestionLogger logHideCachedWithSuccess:hiddenSuggestionsCount:hiddenSuggestionsWithFeedbackCount:] */

void FUN_104e76ab0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe2a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15f0;
    func_0x00010bf42760(PTR_PTR_1126b15f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar2,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe2a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15f0;
    func_0x00010bfe13c0(PTR_PTR_1126b15f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(uVar2,param_2,puVar3,param_4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe2a40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b15f0;
    func_0x00010bfa4560(PTR_PTR_1126b15f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(uVar2,param_2,puVar3,(long)(((double)param_5 * 100.0) / (double)param_4));
    _objc_release(puVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104e76c6c; end: 104e76c77; -[SCHideSuggestionLogger .cxx_destruct] */

void FUN_104e76c6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e76c78; end: 104e76d37; -[SCAddFriendsPagePerformanceAutomationLoggerImpl logAddFriendsPage:withRenderingTimeMillis:] */

void FUN_104e76c78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b15f8;
  _objc_alloc(PTR_PTR_1126b15f8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c010cc0(puVar1,param_3,&PTR____CFConstantStringClassReference_110db8158,0,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126b1600;
  func_0x00010c22bdc0(PTR_PTR_1126b1600);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0aa440();
  _objc_release(puVar2);
  *(undefined1 *)(param_2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e76d38; end: 104e76dab; -[SCAddFriendsFindFriendsPermissionUpsellTrayDismissLogger initWithUserTrackedLogger:] */

undefined1 * FUN_104e76d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4970;
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



/* Entry: 104e76dac; end: 104e76e8b; -[SCAddFriendsFindFriendsPermissionUpsellTrayDismissLogger logFindFriendsPermissionUpsellTrayDismissWithDismissSource:source:addFriendsPageSessionId:durationMillis:learnMoreClickCount:] */

void FUN_104e76dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b1608;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c18f720();
  func_0x00010c206c40(puVar1,param_2,param_4);
  _objc_release(param_4);
  if (param_5 != 0) {
    func_0x00010c165320(puVar1,param_2,param_5);
  }
  func_0x00010c192e40(puVar1,param_2,param_6);
  func_0x00010c1ba060(puVar1,param_2,param_7);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 104e76e8c; end: 104e76e97; -[SCAddFriendsFindFriendsPermissionUpsellTrayDismissLogger .cxx_destruct] */

void FUN_104e76e8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104e76e98; end: 104e770a7; -[SCAddFriendsPageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e76e98(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = (long)_DAT_112714f1c;
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bef8c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f1e60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    return;
  }
  lVar1 = param_1;
  FUN_104e770a8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c291fc0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010be500a0();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112714f20);
  *(long *)(param_1 + _DAT_112714f20) = lVar1;
  _objc_release(uVar9);
  puVar4 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar9 = *(undefined8 *)(param_1 + _DAT_112714f24);
  *(undefined **)(param_1 + _DAT_112714f24) = puVar4;
  _objc_release(uVar9);
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  lVar5 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar2);
  lVar6 = lVar2;
  func_0x00010c0fdba0();
  lVar3 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar3);
  lVar7 = lVar3;
  func_0x00010bef8fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010bdea7c0(param_1,param_2,lVar5,lVar6,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar5);
  _objc_release(lVar1);
  lVar1 = param_1 + lVar10;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c294b20();
  func_0x00010c202fa0(lVar8,param_2,lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + lVar10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 104e770a8; end: 104e770cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e770a8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112715024);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e770cc; end: 104e771d3; -[SCAddFriendsPageEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e770cc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  lVar5 = (long)_DAT_112714f1c;
  lVar4 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c294b20();
  _objc_release(lVar4);
  if ((int)lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112714f24);
    puVar2 = PTR_PTR_1126b1560;
    func_0x00010c2a5e20(PTR_PTR_1126b1560);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3);
    _objc_release(puVar2);
  }
  lVar4 = (long)_DAT_112714f28;
  func_0x00010bf3a2a0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  func_0x00010be50080(param_1);
  lVar5 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar5);
  lVar4 = lVar5;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar4);
  _objc_release(lVar5);
  puStack_38 = PTR_PTR_1126e4978;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e771d4; end: 104e77253; -[SCAddFriendsPageEntryPoint _logAddFriendsPageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e771d4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1610;
  _objc_opt_new(PTR_PTR_1126b1610);
  param_1 = param_1 + _DAT_112714f1c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0fdba0();
  func_0x00010901fab4();
  _objc_retainAutoreleasedReturnValue();
  FUN_104e7b670(puVar1,lVar2,1);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e77254; end: 104e772d3; -[SCAddFriendsPageEntryPoint _logAddFriendsPageExit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e77254(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1610;
  _objc_opt_new(PTR_PTR_1126b1610);
  param_1 = param_1 + _DAT_112714f1c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0fdba0();
  func_0x00010901fab4();
  _objc_retainAutoreleasedReturnValue();
  FUN_104e7b7e4(puVar1,lVar2,1);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104e772d4; end: 104e77e13; -[SCAddFriendsPageEntryPoint _createAddFriendsValdiViewControllerWithUIContainer:placement:addFriendsWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e772d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  undefined *puVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  
  _objc_retain(param_3);
  lVar33 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar33;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1;
  func_0x000104e77e38();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar33;
  func_0x00010bef1100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112714fcc;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar33;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar33;
  func_0x00010c29ec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112714fc4;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar33;
  func_0x00010bf5f860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1;
  func_0x000104e77e5c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar33;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  if (param_1 == 0) {
    lVar33 = 0;
  }
  else {
    lVar33 = param_1 + _DAT_112714fb0;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar33;
  func_0x00010c11e240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = lVar7;
  func_0x00010c11e260();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112714f28);
  *(long *)(param_1 + _DAT_112714f28) = lVar33;
  _objc_release(uVar30);
  lVar33 = param_1 + _DAT_112714f2c;
  _objc_loadWeakRetained();
  lVar8 = lVar33;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  puVar9 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  FUN_104e77eb0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar33;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar33;
  func_0x00010bfe1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1;
  func_0x000104e77ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar33;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1;
  func_0x000104e77e5c();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar33;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar33);
  lVar33 = param_1;
  func_0x000104e77e38();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar33;
  func_0x00010bfb9340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1 + _DAT_112715000;
  _objc_loadWeakRetained();
  lVar16 = lVar33;
  func_0x00010c11e2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  puVar17 = PTR_PTR_1126ae568;
  _objc_opt_new();
  lVar33 = param_1;
  FUN_104e770a8();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar33;
  func_0x00010c0f1680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  func_0x00010c0652e0(lVar18);
  puVar19 = PTR_PTR_1126b1620;
  _objc_alloc();
  lVar33 = param_1 + _DAT_112714f30;
  _objc_loadWeakRetained();
  lVar20 = lVar33;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = (long)_DAT_112714f34;
  lVar13 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar22 = lVar13;
  func_0x00010bf15380();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1 + _DAT_112714f38;
  _objc_loadWeakRetained();
  lVar35 = lVar23;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c007240();
  _objc_release(lVar35);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar13);
  _objc_release(puVar21);
  _objc_release(lVar20);
  _objc_release(lVar33);
  func_0x00010c065280(lVar18);
  lVar33 = param_1;
  func_0x000104e77f14(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c7c620(lVar12,lVar33);
  _objc_release(lVar33);
  lVar13 = param_1;
  func_0x00010bdea720();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = lVar13;
  func_0x00010bfebe40();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x000104e77f38();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar33;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar20;
  func_0x00010bf66920();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = lVar22;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar24;
  func_0x00010bf55bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112714f3c);
  *(long *)(param_1 + _DAT_112714f3c) = lVar35;
  _objc_release(uVar30);
  _objc_release(lVar24);
  _objc_release(lVar22);
  _objc_release(lVar20);
  _objc_release(lVar33);
  lVar33 = param_1;
  func_0x00010bdc6ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_112714f40;
  uVar30 = *(undefined8 *)(param_1 + lVar35);
  *(long *)(param_1 + lVar35) = lVar33;
  _objc_release(uVar30);
  lVar33 = param_1 + _DAT_112714f44;
  _objc_loadWeakRetained();
  lVar22 = lVar33;
  func_0x00010bf66620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  lVar33 = param_1;
  func_0x00010bdc6f00();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = (long)_DAT_112714f48;
  uVar30 = *(undefined8 *)(param_1 + lVar34);
  *(long *)(param_1 + lVar34) = lVar33;
  _objc_release(uVar30);
  uVar25 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010bf69100();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bf69840();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a90a0(uVar25);
  lVar33 = param_1 + _DAT_112714f1c;
  _objc_loadWeakRetained();
  lVar20 = lVar33;
  func_0x00010c0e2e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d19c0(uVar25);
  _objc_release(lVar20);
  _objc_release(lVar33);
  lVar27 = param_1;
  func_0x00010bdea700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161980(*(undefined8 *)(param_1 + lVar35));
  func_0x00010c21b220(*(undefined8 *)(param_1 + lVar35));
  _objc_release(param_3);
  func_0x00010c1652a0(puVar19);
  puVar21 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14cde0();
  func_0x00010c1e27a0(*(undefined8 *)(param_1 + lVar35));
  _objc_release(puVar21);
  puVar28 = puVar19;
  func_0x00010c0f11a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b1630;
  _objc_alloc();
  func_0x00010c032f00();
  uVar30 = *(undefined8 *)(param_1 + _DAT_112714f4c);
  *(undefined **)(param_1 + _DAT_112714f4c) = puVar21;
  _objc_release(uVar30);
  lVar33 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar29 = lVar33;
  func_0x00010c244f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar33);
  puVar21 = PTR_PTR_1126b1638;
  _objc_alloc();
  lVar24 = lVar29;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar24;
  func_0x00010c244ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1 + _DAT_112714f50;
  _objc_loadWeakRetained();
  lVar20 = lVar33;
  func_0x00010bfb9560();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_4;
  func_0x00010901fab4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77390();
  func_0x00010901fab4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010ba77940();
  func_0x00010c049f20();
  uVar32 = *(undefined8 *)(param_1 + _DAT_112714f54);
  *(undefined **)(param_1 + _DAT_112714f54) = puVar21;
  _objc_release(uVar32);
  _objc_release(param_4);
  _objc_release(uVar30);
  _objc_release(lVar20);
  _objc_release(lVar33);
  _objc_release(lVar35);
  _objc_release(lVar24);
  puVar21 = PTR_PTR_1126b1640;
  _objc_alloc();
  uVar30 = *(undefined8 *)(param_1 + lVar34);
  func_0x00010bef8ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = param_1 + lVar31;
  _objc_loadWeakRetained();
  lVar20 = lVar31;
  func_0x00010bf15360();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = param_1;
  func_0x00010be49cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c032ee0();
  uVar32 = *(undefined8 *)(param_1 + _DAT_112714f58);
  *(undefined **)(param_1 + _DAT_112714f58) = puVar21;
  _objc_release(uVar32);
  _objc_release(lVar33);
  _objc_release(lVar20);
  _objc_release(lVar31);
  _objc_release(uVar30);
  func_0x00010c1c8b80(puVar19);
  _objc_release(lVar29);
  _objc_release(puVar28);
  _objc_release(lVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(lVar22);
  _objc_release(lVar23);
  _objc_release(lVar13);
  _objc_release(lVar18);
  _objc_release(puVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 104e77e14; end: 104e77e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e77e14(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112714fac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e77e80; end: 104e77eaf;  */

void FUN_104e77e80(void)

{
  _objc_alloc(PTR_PTR_1126b1618);
  func_0x00010c0184a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e77eb0; end: 104e77f5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e77eb0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112714fc8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e77f5c; end: 104e78013; -[SCAddFriendsPageEntryPoint _lazyfriendingMetadataLogger] */

void FUN_104e77f5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b1648;
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x104e77fe4;
  puStack_30 = &UNK_1108556e0;
  puVar2 = PTR_PTR_1126ae720;
  puStack_28 = puVar1;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104e78014; end: 104e7848f; -[SCAddFriendsPageEntryPoint _createAddFriendsComposerStoresProviderWithPlacement:pageChangeObservable:presentingViewController:isUserEligibleForTwilio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e78014(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar18 = param_1;
  func_0x000104e77ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar18;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar18;
  func_0x00010bfb7ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar18;
  func_0x00010bfebe60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar18;
  func_0x00010c261ee0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar18;
  func_0x00010bf1d860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  func_0x000104e784b4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar18;
  func_0x00010bf4a820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  func_0x000104e784b4();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar18;
  func_0x00010bf49be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  puVar9 = PTR_PTR_1126aead8;
  _objc_alloc();
  func_0x00010c038f40();
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_11271500c;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar18;
  func_0x00010c154620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112715028;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar18;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar18;
  func_0x00010c122480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112715004;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar18;
  func_0x00010c0d6fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar18;
  func_0x00010c122800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar18 = param_1;
  FUN_104e78490();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar18;
  func_0x00010bfba6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  if (param_1 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = param_1 + _DAT_112714ffc;
    _objc_loadWeakRetained();
  }
  lVar16 = lVar18;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  func_0x00010bee7080(param_1,param_2,lVar10,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar17 = PTR_PTR_1126b1658;
  _objc_alloc();
  func_0x00010bffeac0();
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
  return;
}



/* Entry: 104e78490; end: 104e784d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e78490(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112714ff8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104e784d8; end: 104e78e4b; -[SCAddFriendsPageEntryPoint _addFriendsContextProviderFromStoresProvider:incomingFriendStore:pageChangeObservable:presentingViewController:isUserEligibleForTwilio:pageEventDataSubject:valdiRuntimeProvider:pageSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e784d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined8 uVar44;
  long lVar45;
  
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c244be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_104e77e14();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c29ec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_104e78e4c();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf49f40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  FUN_104e78e4c();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf49f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x000104e77ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + _DAT_112714ff4);
  }
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bde3b80();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_112714fb4;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar45;
  func_0x00010c06a600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar45);
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_112714fd8;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar45;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar45);
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_112714fdc;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar45;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar45);
  puVar13 = PTR_PTR_1126b1660;
  if (param_1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(param_1 + _DAT_112715010);
  }
  _objc_retain();
  _objc_alloc();
  if (param_1 == 0) {
    lVar45 = 0;
  }
  else {
    lVar45 = param_1 + _DAT_112714fd0;
    _objc_loadWeakRetained(lVar45);
  }
  lVar14 = lVar45;
  func_0x00010c293fc0(lVar45);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0();
  uVar44 = *(undefined8 *)(param_1 + _DAT_112714f5c);
  *(undefined **)(param_1 + _DAT_112714f5c) = puVar13;
  _objc_release(uVar44);
  _objc_release(lVar14);
  _objc_release(lVar45);
  puVar13 = PTR_DAT_1126a4ea0;
  _objc_retain(param_6);
  uVar15 = param_6;
  func_0x00010010fab4(param_6,puVar13);
  uVar44 = param_6;
  if ((int)uVar15 == 0) {
    uVar44 = 0;
  }
  _objc_retain(uVar44);
  _objc_release(param_6);
  lVar16 = param_1;
  func_0x00010be36700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar44);
  lVar45 = param_1;
  func_0x000104e77e5c();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar45;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  _objc_release(lVar45);
  puVar13 = PTR_PTR_1126b1590;
  _objc_alloc();
  uVar44 = param_3;
  func_0x00010bfb8b60();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = param_3;
  func_0x00010bfb7aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c261ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010bf4a800();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = param_3;
  func_0x00010bf49bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_3;
  func_0x00010bf1d860();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_3;
  func_0x00010c122480();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010c0d6fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = param_3;
  func_0x00010c122800();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010bf3f680();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = param_1 + _DAT_112715014;
  _objc_loadWeakRetained();
  uVar26 = param_3;
  func_0x00010bfb9900();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010bfba6a0();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = param_3;
  func_0x00010c293620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar29 = param_1;
  func_0x00010bdc4520();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1;
  func_0x000104e77f38();
  _objc_retainAutoreleasedReturnValue();
  lVar31 = lVar30;
  func_0x00010bf66980();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = lVar31;
  func_0x00010bf44a60();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112714f64;
  _objc_loadWeakRetained();
  lVar33 = lVar14;
  func_0x00010bf4a700();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112714f1c;
  _objc_loadWeakRetained();
  func_0x00010c294b20();
  lVar35 = param_1 + _DAT_112714f68;
  _objc_loadWeakRetained();
  lVar36 = lVar35;
  func_0x00010bf280c0();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126b1668;
  _objc_alloc();
  lVar38 = param_1;
  func_0x000104e77eb0();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = param_1;
  func_0x000104e77f14();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1 + _DAT_11271501c;
  _objc_loadWeakRetained();
  lVar41 = lVar40;
  func_0x00010bfb93e0();
  _objc_retainAutoreleasedReturnValue();
  lVar42 = lVar41;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000a00();
  lVar43 = param_1;
  func_0x000104e77f14();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015b60();
  _objc_release(uVar12);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(lVar43);
  _objc_release(puVar37);
  _objc_release(lVar42);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar14);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(lVar45);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar15);
  _objc_release(uVar44);
  param_1 = param_1 + _DAT_112714f6c;
  _objc_loadWeakRetained();
  lVar14 = param_1;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  lVar45 = lVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ce4a0(puVar13);
  _objc_release(lVar45);
  _objc_release(lVar14);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(uVar8);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104e78e4c; end: 104e78e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104e78e4c(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112714fec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


