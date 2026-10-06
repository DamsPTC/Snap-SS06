/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105ebc6ec; end: 105ebc74b;  */

void FUN_105ebc6ec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2f718;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110e2f718,
                      &PTR____CFConstantStringClassReference_110e2f6f8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105ebc74c; end: 105ebc777;  */

void FUN_105ebc74c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be66220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ebc778; end: 105ebc8ff; -[SCAddFriendsButtonBadgeUpdater _observeFriendingBadgeRepository] */

void FUN_105ebc778(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c071800();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf15420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  else {
    lVar4 = param_1;
    func_0x00010bdeb2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c0e0e60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar6 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(lVar4);
  return;
}



/* Entry: 105ebc900; end: 105ebc947;  */

void FUN_105ebc900(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcdb40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105ebc948; end: 105ebca0b; -[SCAddFriendsButtonBadgeUpdater _applyBadgeResult:] */

void FUN_105ebc948(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c16ee00(uVar3,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0d6960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c067ec0(param_3);
  func_0x00010c165240(uVar3,param_2,~(uint)uVar2 >> 0x1f);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c067fc0(param_3);
  _objc_release(param_3);
  func_0x00010c132ba0(uVar2,param_2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105ebca0c; end: 105ebcb2b; -[SCAddFriendsButtonBadgeUpdater _createBadgeResultObservable] */

void FUN_105ebca0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&PTR___NSConcreteGlobalBlock_1108f1b80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1468;
  _objc_alloc(PTR_PTR_1126b1468);
  func_0x00010c055e20();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c1270c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c13cc80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105ebcb2c; end: 105ebcb97;  */

void FUN_105ebcb2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c067ec0();
  puVar2 = PTR_PTR_1126b1460;
  if ((int)uVar1 < 0) {
    func_0x00010c0db7e0(PTR_PTR_1126b1460);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bef0400();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105ebcb98; end: 105ebcc27;  */

void FUN_105ebcb98(undefined8 param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_2);
  ppuVar1 = param_2;
  func_0x00010c06b700();
  if ((int)ppuVar1 == 0) {
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f10;
  }
  else {
    ppuVar2 = param_2;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar2 == (undefined **)0x0) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c3f10;
    }
    else {
      ppuVar1 = param_2;
      func_0x00010c296d80(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(ppuVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105ebcc28; end: 105ebcc9f; -[SCAddFriendsButtonBadgeUpdater .cxx_destruct] */

void FUN_105ebcc28(long param_1)

{
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



/* Entry: 105ebcca0; end: 105ebcddf; -[SCAddFriendsButtonMutator setBadgeWithBadgeResult:] */

void FUN_105ebcca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c067ec0();
  if ((int)uVar2 < 0) {
    func_0x00010c1b1a80(*(undefined8 *)(param_1 + 8),param_2,1);
  }
  else {
    uVar2 = param_3;
    func_0x00010c067ec0();
    if ((int)uVar2 == 0) {
      func_0x00010c212f20(*(undefined8 *)(param_1 + 8),param_2,
                          &PTR____CFConstantStringClassReference_110daafd8);
      func_0x00010c20eaa0(*(undefined8 *)(param_1 + 8),param_2,0);
      func_0x00010c1b1a80(*(undefined8 *)(param_1 + 8),param_2,0);
    }
    else {
      uVar2 = param_3;
      func_0x00010c067ec0();
      uVar6 = (ulong)(int)uVar2;
      func_0x00010c1b1a80(*(undefined8 *)(param_1 + 8),param_2,0);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      uVar1 = uVar6;
      if (0x62 < uVar6) {
        uVar1 = 99;
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110dc4658);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(*(undefined8 *)(param_1 + 8),param_2,puVar4);
      _objc_release(puVar4);
      _objc_release(puVar3);
      lVar5 = param_1;
      func_0x00010be1d260(param_1,param_2,uVar6);
      func_0x00010c20eaa0(*(undefined8 *)(param_1 + 8),param_2,lVar5);
    }
    func_0x00010c17e800(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x10));
  }
  func_0x00010bea1ac0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105ebcde0; end: 105ebcdfb; -[SCAddFriendsButtonMutator _getBadgeStyle:] */

undefined8 FUN_105ebcde0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 3;
  if (param_3 < 10) {
    uVar1 = 0;
  }
  uVar2 = 4;
  if (param_3 < 100) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 105ebcdfc; end: 105ebce0b; -[SCAddFriendsButtonMutator _setAddFriendsBadgeAccessibilityIdentifier] */

void FUN_105ebcdfc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c160fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setAccessibilityIdentifier__112635e10,
             &PTR____CFConstantStringClassReference_110e2f798);
  return;
}



/* Entry: 105ebce0c; end: 105ebce17; -[SCAddFriendsButtonMutator .cxx_destruct] */

void FUN_105ebce0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebce18; end: 105ebce43; +[SCGrapheneFriendingMetric contactSyncIssue] */

void FUN_105ebce18(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebce44; end: 105ebce6f; +[SCGrapheneFriendingMetric friendRequestSend] */

void FUN_105ebce44(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebce70; end: 105ebce9b; +[SCGrapheneFriendingMetric friendRequestResponse] */

void FUN_105ebce70(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebce9c; end: 105ebcec7; +[SCGrapheneFriendingMetric friendRequestLatency] */

void FUN_105ebce9c(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcec8; end: 105ebcef3; +[SCGrapheneFriendingMetric inconsistentWithAllUpdates] */

void FUN_105ebcec8(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcef4; end: 105ebcf1f; +[SCGrapheneFriendingMetric addFriendsFirstImpression] */

void FUN_105ebcef4(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcf20; end: 105ebcf4b; +[SCGrapheneFriendingMetric seenSuggestion] */

void FUN_105ebcf20(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcf4c; end: 105ebcf77; +[SCGrapheneFriendingMetric addedSuggestion] */

void FUN_105ebcf4c(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcf78; end: 105ebcfa3; +[SCGrapheneFriendingMetric impressedFromCamera] */

void FUN_105ebcf78(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcfa4; end: 105ebcfcf; +[SCGrapheneFriendingMetric impressedFromDiscoverFeed] */

void FUN_105ebcfa4(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcfd0; end: 105ebcffb; +[SCGrapheneFriendingMetric impressedFromFriendsFeed] */

void FUN_105ebcfd0(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebcffc; end: 105ebd027; +[SCGrapheneFriendingMetric impressedFromSearch] */

void FUN_105ebcffc(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd028; end: 105ebd053; +[SCGrapheneFriendingMetric impressedOnFriendsFeed] */

void FUN_105ebd028(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd054; end: 105ebd07f; +[SCGrapheneFriendingMetric impressedFromProfile] */

void FUN_105ebd054(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd080; end: 105ebd0ab; +[SCGrapheneFriendingMetric impressedFromDiscoverFeedCta] */

void FUN_105ebd080(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd0ac; end: 105ebd0d7; +[SCGrapheneFriendingMetric impressedFromInlineSuggestion] */

void FUN_105ebd0ac(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd0d8; end: 105ebd103; +[SCGrapheneFriendingMetric allOtherSites] */

void FUN_105ebd0d8(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd104; end: 105ebd12f; +[SCGrapheneFriendingMetric appsFromSnap] */

void FUN_105ebd104(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd130; end: 105ebd15b; +[SCGrapheneFriendingMetric publicStory] */

void FUN_105ebd130(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd15c; end: 105ebd187; +[SCGrapheneFriendingMetric contactSyncMainApp] */

void FUN_105ebd15c(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd188; end: 105ebd1b3; +[SCGrapheneFriendingMetric contactSyncGap] */

void FUN_105ebd188(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd1b4; end: 105ebd1df; +[SCGrapheneFriendingMetric pageView] */

void FUN_105ebd1b4(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd1e0; end: 105ebd20b; +[SCGrapheneFriendingMetric pageExit] */

void FUN_105ebd1e0(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd20c; end: 105ebd237; +[SCGrapheneFriendingMetric fetchSuggestions] */

void FUN_105ebd20c(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd238; end: 105ebd263; +[SCGrapheneFriendingMetric fetchSuggestionsSuccess] */

void FUN_105ebd238(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd264; end: 105ebd28f; +[SCGrapheneFriendingMetric fetchSuggestionsFail] */

void FUN_105ebd264(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd290; end: 105ebd2bb; +[SCGrapheneFriendingMetric fetchSuggestionsOk] */

void FUN_105ebd290(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd2bc; end: 105ebd2e7; +[SCGrapheneFriendingMetric fetchSuggestionsError] */

void FUN_105ebd2bc(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd2e8; end: 105ebd313; +[SCGrapheneFriendingMetric contactSyncServer] */

void FUN_105ebd2e8(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd314; end: 105ebd33f; +[SCGrapheneFriendingMetric contactSyncClient] */

void FUN_105ebd314(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd340; end: 105ebd36b; +[SCGrapheneFriendingMetric contactSyncChange] */

void FUN_105ebd340(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd36c; end: 105ebd397; +[SCGrapheneFriendingMetric contactSyncPermission] */

void FUN_105ebd36c(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd398; end: 105ebd3c3; +[SCGrapheneFriendingMetric contactSyncDelta] */

void FUN_105ebd398(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd3c4; end: 105ebd3ef; +[SCGrapheneFriendingMetric leaveWithoutSuggestionSeen] */

void FUN_105ebd3c4(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd3f0; end: 105ebd41b; +[SCGrapheneFriendingMetric addFriendsButtonBadged] */

void FUN_105ebd3f0(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd41c; end: 105ebd447; +[SCGrapheneFriendingMetric addFriendsButtonNumBadged] */

void FUN_105ebd41c(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd448; end: 105ebd473; +[SCGrapheneFriendingMetric addFriendsButtonBadgeNumber] */

void FUN_105ebd448(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd474; end: 105ebd49f; +[SCGrapheneFriendingMetric friendRequestsBadgeNumber] */

void FUN_105ebd474(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd4a0; end: 105ebd4cb; +[SCGrapheneFriendingMetric notificationsBadgeNumber] */

void FUN_105ebd4a0(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd4cc; end: 105ebd4f7; +[SCGrapheneFriendingMetric nearbyFriendsBadgeNumber] */

void FUN_105ebd4cc(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd4f8; end: 105ebd523; +[SCGrapheneFriendingMetric suggestionsBadgeNumber] */

void FUN_105ebd4f8(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd524; end: 105ebd54f; +[SCGrapheneFriendingMetric contactsOnSnapchatMaxIndex] */

void FUN_105ebd524(void)

{
  _objc_alloc(PTR_PTR_1126b17f0);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd550; end: 105ebd5ef; -[SCGrapheneFriendingMetric description] */

void FUN_105ebd550(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2f7b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e2f7b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126edb50;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105ebd5f0; end: 105ebd677; -[SCGrapheneRegistry friendingGraphene] */

void FUN_105ebd5f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ebd678;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c2380 != -1) {
    func_0x00010002a2fc(0x1136c2380,&puStack_48);
  }
  uVar1 = uRam00000001136c2378;
  _objc_retain(uRam00000001136c2378);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ebd678; end: 105ebd8d3;  */

void FUN_105ebd678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
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
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_188 = &PTR____CFConstantStringClassReference_110e2f7d8;
  ppuStack_180 = &PTR____CFConstantStringClassReference_110e2f7f8;
  ppuStack_178 = &PTR____CFConstantStringClassReference_110e2f818;
  ppuStack_170 = &PTR____CFConstantStringClassReference_110e2f838;
  ppuStack_168 = &PTR____CFConstantStringClassReference_110e2f858;
  ppuStack_160 = &PTR____CFConstantStringClassReference_110e2f878;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110e2f898;
  ppuStack_150 = &PTR____CFConstantStringClassReference_110e2f8b8;
  ppuStack_148 = &PTR____CFConstantStringClassReference_110e2f8d8;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110e2f8f8;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110e2f918;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110e2f938;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110e2f958;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110e2f978;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110e2f998;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110e2f9b8;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110e2f9d8;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110e2f9f8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110e2fa18;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e2fa38;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110e2fa58;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110db7a38;
  ppuStack_d8 = &PTR____CFConstantStringClassReference_110e2fa78;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e2fa98;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e2fab8;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e2fad8;
  ppuStack_b8 = &PTR____CFConstantStringClassReference_110e2faf8;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110e2fb18;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e2fb38;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e2fb58;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e2fb78;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110e2fb98;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e2fbb8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e2fbd8;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e2fbf8;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e2fc18;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e2fc38;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e2fc58;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e2fc78;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e2fc98;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e2fcb8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e2fcd8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_188,0x2a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126d60(uVar3,param_2,&PTR____CFConstantStringClassReference_110e2f7b8,
                      &PTR____CFConstantStringClassReference_110daafd8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uRam00000001136c2378;
  uRam00000001136c2378 = uVar3;
  _objc_release(uVar1);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_alloc(PTR_PTR_1126bee88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd8d4; end: 105ebd8ff; +[SCGrapheneReliablePinningUpdateMetric seenPinnedCnt] */

void FUN_105ebd8d4(void)

{
  _objc_alloc(PTR_PTR_1126bee88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd900; end: 105ebd92b; +[SCGrapheneReliablePinningUpdateMetric seenSuggestionsCnt] */

void FUN_105ebd900(void)

{
  _objc_alloc(PTR_PTR_1126bee88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd92c; end: 105ebd957; +[SCGrapheneReliablePinningUpdateMetric addedPinnedCnt] */

void FUN_105ebd92c(void)

{
  _objc_alloc(PTR_PTR_1126bee88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd958; end: 105ebd983; +[SCGrapheneReliablePinningUpdateMetric addedSuggestionsCnt] */

void FUN_105ebd958(void)

{
  _objc_alloc(PTR_PTR_1126bee88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd984; end: 105ebd9af; +[SCGrapheneReliablePinningUpdateMetric incSuc] */

void FUN_105ebd984(void)

{
  _objc_alloc(PTR_PTR_1126bee88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd9b0; end: 105ebd9db; +[SCGrapheneReliablePinningUpdateMetric incFail] */

void FUN_105ebd9b0(void)

{
  _objc_alloc(PTR_PTR_1126bee88);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebd9dc; end: 105ebda7b; -[SCGrapheneReliablePinningUpdateMetric description] */

void FUN_105ebd9dc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fcf8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e2fcf8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126edb58;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105ebda7c; end: 105ebdbef; -[SCGrapheneRegistry reliablePinningUpdateGraphene] */

void FUN_105ebda7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105ebdb04;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c2390 != -1) {
    func_0x00010002a2fc(0x1136c2390,&puStack_48);
  }
  uVar1 = uRam00000001136c2388;
  _objc_retain(uRam00000001136c2388);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ebdbf0; end: 105ebdc1b; +[SCGrapheneFriendingSuggestionMetric reliablePinning] */

void FUN_105ebdbf0(void)

{
  _objc_alloc(PTR_PTR_1126c5878);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebdc1c; end: 105ebdcbb; -[SCGrapheneFriendingSuggestionMetric description] */

void FUN_105ebdc1c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110e2fdd8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110e2fdd8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126edb60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105ebdcbc; end: 105ebddff; -[SCGrapheneRegistry friendingSuggestionGraphene] */

void FUN_105ebdcbc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105ebdd44;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136c23a0 != -1) {
    func_0x00010002a2fc(0x1136c23a0,&puStack_48);
  }
  uVar1 = uRam00000001136c2398;
  _objc_retain(uRam00000001136c2398);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105ebde00; end: 105ebde73; -[SCLensDeeplinkShareLauncher initWithSendToScopeExposer:] */

undefined1 * FUN_105ebde00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126edb68;
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



/* Entry: 105ebde74; end: 105ebdf77; -[SCLensDeeplinkShareLauncher launchDeeplinkSharingFromViewController:lensMetadata:url:attachedImageFuture:] */

void FUN_105ebde74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b1b28;
  func_0x00010c0981a0(PTR_PTR_1126b1b28,param_2,param_5,param_4,param_6,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126b1b30;
  _objc_alloc(PTR_PTR_1126b1b30);
  func_0x00010c056660();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ebdf78; end: 105ebe003; -[SCLensDeeplinkShareLauncher didDismissWithRecipientsCount:groupsCount:] */

void FUN_105ebdf78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c150520(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c27ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6f440();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105ebe004; end: 105ebe00f; -[SCLensDeeplinkShareLauncher .cxx_destruct] */

void FUN_105ebe004(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebe010; end: 105ebe167; -[SCLensInfoCardActionHandler initWithCreatorProfilePresenter:lensAttachmentLauncher:deeplinkSharingLauncher:webpageLauncher:appDeeplinkLauncher:creatorProfileDismissBlock:] */

undefined1 *
FUN_105ebe010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
  puStack_58 = PTR_PTR_1126edb70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ebe168; end: 105ebe16f; -[SCLensInfoCardActionHandler creatorProfilePresenter] */

void FUN_105ebe168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 105ebe170; end: 105ebe177; -[SCLensInfoCardActionHandler lensAttachmentLauncher] */

void FUN_105ebe170(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 105ebe178; end: 105ebe27f; -[SCLensInfoCardActionHandler handleInfoCardAction:] */

void FUN_105ebe178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105ebe284;
  puStack_30 = &UNK_1108f1c00;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105ebe318;
  puStack_58 = &UNK_110850398;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x105ebe3b0;
  puStack_80 = &UNK_1108450c8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x105ebe444;
  puStack_a8 = &UNK_1108f1c30;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  uStack_d8 = 0x105ebe4c0;
  puStack_d0 = &UNK_1108480f8;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x105ebe524;
  puStack_f8 = &UNK_1108480f8;
  uStack_f0 = param_1;
  uStack_c8 = param_1;
  uStack_a0 = param_1;
  uStack_78 = param_1;
  uStack_50 = param_1;
  uStack_28 = param_1;
  func_0x00010c0bf160(param_3,param_2,&PTR___NSConcreteGlobalBlock_1108f1be0,&puStack_48,&puStack_70
                      ,&puStack_98,&puStack_c0,&puStack_e8,&puStack_110);
  return;
}



/* Entry: 105ebe280; end: 105ebe283;  */

void FUN_105ebe280(void)

{
  return;
}



/* Entry: 105ebe284; end: 105ebe317;  */

void FUN_105ebe284(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar2 = lVar2 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c08b700(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105ebe318; end: 105ebe57f;  */

void FUN_105ebe318(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b6560;
  func_0x00010bf430e0(PTR_PTR_1126b6560,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5b680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x20) + 0x30;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c10bd00(uVar2);
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105ebe580; end: 105ebe58b; -[SCLensInfoCardActionHandler configureWithViewController:] */

void FUN_105ebe580(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 105ebe58c; end: 105ebe5e3; -[SCLensInfoCardActionHandler _uiContainer] */

void FUN_105ebe58c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ebe5e4; end: 105ebe64b; -[SCLensInfoCardActionHandler .cxx_destruct] */

void FUN_105ebe5e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebe64c; end: 105ebe6ef; -[SCLensInfoCardActionHandlerFactory initWithSendToScopeExposer:webBrowsingExposer:] */

undefined1 *
FUN_105ebe64c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126edb78;
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



/* Entry: 105ebe6f0; end: 105ebe7ef; -[SCLensInfoCardActionHandlerFactory createActionHandlerWithCreatorProfilePresenter:lensAttachmentLauncher:creatorProfileDismissBlock:] */

void FUN_105ebe6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5880;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010bdecce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beeab00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdcc980(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0069c0(puVar1,param_2,param_3,param_4,uVar2,uVar3,param_1,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ebe7f0; end: 105ebe81f; -[SCLensInfoCardActionHandlerFactory _createDeeplinkSharingLauncher] */

void FUN_105ebe7f0(void)

{
  _objc_alloc(PTR_PTR_1126b5920);
  func_0x00010c0444e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105ebe820; end: 105ebe887; -[SCLensInfoCardActionHandlerFactory _webPageLauncher] */

void FUN_105ebe820(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c5888;
  _objc_alloc(PTR_PTR_1126c5888);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar2 = puVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062c60(puVar1,param_2,uVar3,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ebe888; end: 105ebe90f; -[SCLensInfoCardActionHandlerFactory _appDeeplinkLauncher] */

void FUN_105ebe888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c5890;
  _objc_alloc(PTR_PTR_1126c5890);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff38e0(puVar1,param_2,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105ebe910; end: 105ebe93f; -[SCLensInfoCardActionHandlerFactory .cxx_destruct] */

void FUN_105ebe910(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebe940; end: 105ebea07; -[SCLensInfocardAppDeeplinkLauncher initWithApplication:notificationCenter:] */

undefined1 *
FUN_105ebe940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126edb80;
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
    func_0x00010befa240(*(undefined8 *)((long)puVar1 + 0x10));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105ebea08; end: 105ebeacb; -[SCLensInfocardAppDeeplinkLauncher launchAppWithURL:presentingViewController:] */

void FUN_105ebea08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105ebeacc;
  puStack_50 = &UNK_1108500c8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0e9b80(uVar1,param_2,param_3,PTR____NSDictionary0__struct_11034ab58,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105ebeacc; end: 105ebeae3;  */

void FUN_105ebeacc(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c08b4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_launchAppStoreWithFallbackURL_pr_112600738,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105ebeae4; end: 105ebeaf7; -[SCLensInfocardAppDeeplinkLauncher launchAppStoreWithFallbackURL:presentingViewController:] */

void FUN_105ebeae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_presentAppStoreLinkModallyWithAp_1126206b0,
             &PTR____CFConstantStringClassReference_110e2fe18,param_3,param_4);
  return;
}



/* Entry: 105ebeaf8; end: 105ebec7b; -[SCLensInfocardAppDeeplinkLauncher presentAppStoreLinkModallyWithAppID:fallbackURL:presentingViewController:] */

void FUN_105ebeaf8(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf3a5a0(param_1);
  }
  puVar1 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
  _objc_alloc_init();
  func_0x00010c18b5e0();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_retain(puVar1);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c09bf80(puVar1);
  _objc_release(puVar2);
  func_0x00010c10eda0(param_5);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_3 + 0x20) + 8),
             PTR_s_openURL_options_completionHandle_1126180f8,*(undefined8 *)(param_3 + 0x28),
             PTR____NSDictionary0__struct_11034ab58,0);
  return;
}



/* Entry: 105ebec7c; end: 105ebec9b;  */

void FUN_105ebec7c(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0e9b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_openURL_options_completionHandle_1126180f8,*(undefined8 *)(param_1 + 0x28),
             PTR____NSDictionary0__struct_11034ab58,0);
  return;
}



/* Entry: 105ebec9c; end: 105ebecab; -[SCLensInfocardAppDeeplinkLauncher applicationWillResignActive:] */

void FUN_105ebec9c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf3a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanupStoreViewController__1125ac310);
    return;
  }
  return;
}



/* Entry: 105ebecac; end: 105ebece7; -[SCLensInfocardAppDeeplinkLauncher cleanupStoreViewController:] */

void FUN_105ebecac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    func_0x00010bf84b00(param_3,param_2,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105ebece8; end: 105ebeceb; -[SCLensInfocardAppDeeplinkLauncher productViewControllerDidFinish:] */

void FUN_105ebece8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_cleanupStoreViewController__1125ac310);
  return;
}



/* Entry: 105ebecec; end: 105ebed27; -[SCLensInfocardAppDeeplinkLauncher .cxx_destruct] */

void FUN_105ebecec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105ebed28; end: 105ebedcb; -[SCLensInfocardWebScopeLauncher initWithWebBrowsingExposer:performer:] */

undefined1 *
FUN_105ebed28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126edb88;
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


