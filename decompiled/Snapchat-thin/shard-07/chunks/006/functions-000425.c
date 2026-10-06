/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057cdcdc; end: 1057cdd13; -[SCContextOperaUCCExperimentsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cdcdc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729bec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729be8);
  return;
}



/* Entry: 1057cdd14; end: 1057cdd2f;  */

void FUN_1057cdd14(void)

{
  _objc_opt_new(PTR_PTR_1126be608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057cdd30; end: 1057cdd77; -[SCContextPostStoryDataEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cdd30(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112729bf8,0);
  _objc_destroyWeak(param_1 + _DAT_112729bf4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729bf0);
  return;
}



/* Entry: 1057cdd78; end: 1057cdde7; -[SCContextPostStoryDataProvider init] */

undefined1 * FUN_1057cdd78(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ea500;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1057cdde8; end: 1057cdf93; -[SCContextPostStoryDataProvider actionIdForStory:justViewedStories:] */

void FUN_1057cdde8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c259cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if (((((uVar2 & 1) == 0) && (uVar1 = param_3, func_0x00010c259580(), ((uint)uVar1 >> 1 & 1) == 0))
      && (uVar1 = param_3, func_0x00010c259580(), ((uint)uVar1 >> 4 & 1) == 0)) &&
     ((uVar1 = param_3, func_0x00010c259580(), ((uint)uVar1 >> 5 & 1) == 0 &&
      (uVar1 = param_3, func_0x00010c259580(), ((uint)uVar1 >> 10 & 1) == 0)))) {
    uVar1 = param_3;
    func_0x00010c259cc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_3;
      func_0x00010c259cc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_4;
      func_0x00010bf4b900(param_4,param_2,uVar2);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (((int)uVar5 != 0) && (uVar1 = param_3, func_0x00010bfddf20(), (uVar1 & 1) == 0)) {
        uVar1 = param_3;
        func_0x00010c259cc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        _os_unfair_lock_lock(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c0e00e0(lVar3,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        _objc_release();
        if (lVar3 == 0) {
          func_0x00010011df08();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 8),param_2,lVar4,uVar1);
          _objc_release(lVar4);
        }
        uVar5 = *(undefined8 *)(param_1 + 8);
        func_0x00010c0e00e0(uVar5,param_2,uVar1);
        _objc_retainAutoreleasedReturnValue();
        _os_unfair_lock_unlock(param_1 + 0x10);
        _objc_release(uVar1);
        goto LAB_1057cdedc;
      }
    }
  }
  uVar5 = 0;
LAB_1057cdedc:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1057cdf94; end: 1057cdfd7; -[SCContextPostStoryDataProvider resetAllStoredActionIds] */

void FUN_1057cdf94(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1057cdfd8; end: 1057cdfe3; -[SCContextPostStoryDataProvider .cxx_destruct] */

void FUN_1057cdfd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cdfe4; end: 1057ce04b; -[SCFriendsFeedUpdateServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cdfe4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729c18);
  _objc_destroyWeak(param_1 + _DAT_112729c14);
  _objc_destroyWeak(param_1 + _DAT_112729c10);
  _objc_destroyWeak(param_1 + _DAT_112729c0c);
  _objc_destroyWeak(param_1 + _DAT_112729c08);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729c04);
  return;
}



/* Entry: 1057ce04c; end: 1057ce05b; -[SCFriendsFeedLifecycleServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ce04c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729c1c);
  return;
}



/* Entry: 1057ce05c; end: 1057ce093;  */

void FUN_1057ce05c(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057ce094; end: 1057ce09b; -[SCFriendsFeedViewLifecycleObserver friendsFeedFirstRenderHasUnviewedStoriesListener] */

undefined8 FUN_1057ce094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057ce09c; end: 1057ce0a3; -[SCFriendsFeedViewLifecycleObserver feedPageEventsListener] */

undefined8 FUN_1057ce09c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057ce0a4; end: 1057ce0df; -[SCFriendsFeedViewLifecycleObserver .cxx_destruct] */

void FUN_1057ce0a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057ce0e0; end: 1057ce1bb; -[SCFriendsFeedShortcutsLogger initWithUserTrackedLogger:performerProvider:] */

undefined1 *
FUN_1057ce0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea510;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057ce1bc; end: 1057ce29b; -[SCFriendsFeedShortcutsLogger sessionDidBeginWithSessionId:shortcutType:] */

void FUN_1057ce1bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1057ce29c; end: 1057ce2eb;  */

void FUN_1057ce29c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea75c0();
  _objc_release(lVar1);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea77c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ce2ec; end: 1057ce383; -[SCFriendsFeedShortcutsLogger sessionDidEndWithExitEvent:nextPage:] */

void FUN_1057ce2ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1057ce384;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 1057ce384; end: 1057ce393;  */

void FUN_1057ce384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sessionDidEndWithExitEvent_next_112585f48,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1057ce394; end: 1057ce44b; -[SCFriendsFeedShortcutsLogger logShortcutInventoryCount:] */

void FUN_1057ce394(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057ce44c; end: 1057ce47f;  */

void FUN_1057ce44c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ce480; end: 1057ce537; -[SCFriendsFeedShortcutsLogger logShortcutCellsRendered:] */

void FUN_1057ce480(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057ce538; end: 1057ce56b;  */

void FUN_1057ce538(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea6b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ce56c; end: 1057ce633; -[SCFriendsFeedShortcutsLogger logConversationSyncLatency:success:] */

void FUN_1057ce56c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1057ce634; end: 1057ce66b;  */

void FUN_1057ce634(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea30a0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057ce66c; end: 1057ce723; -[SCFriendsFeedShortcutsLogger logRenderLatencyStartTimestamp:] */

void FUN_1057ce66c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057ce724; end: 1057ce757;  */

void FUN_1057ce724(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea6c00(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057ce758; end: 1057ce80f; -[SCFriendsFeedShortcutsLogger logRenderLatencyEndTimestamp:] */

void FUN_1057ce758(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1057ce810; end: 1057ce843;  */

void FUN_1057ce810(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bea6be0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057ce844; end: 1057ce8eb; -[SCFriendsFeedShortcutsLogger logBatchCameraButtonClick] */

void FUN_1057ce844(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1057ce8ec; end: 1057ce917;  */

void FUN_1057ce8ec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea3660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057ce918; end: 1057ce973; -[SCFriendsFeedShortcutsLogger _createPerformerWithPerformerProvider:] */

void FUN_1057ce918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057ce974; end: 1057ce9a3; -[SCFriendsFeedShortcutsLogger _setSessionId:] */

void FUN_1057ce974(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057ce9a4; end: 1057ce9f3; -[SCFriendsFeedShortcutsLogger _sessionDidEndWithExitEvent:nextPage:] */

void FUN_1057ce9a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_4;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  func_0x00010be50b00(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be93af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetSession_112582858);
  return;
}



/* Entry: 1057ce9f4; end: 1057ceadb; -[SCFriendsFeedShortcutsLogger _logBlizzardMetric] */

void FUN_1057ce9f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126be638;
  _objc_opt_new(PTR_PTR_1126be638);
  func_0x00010c19b1c0();
  func_0x00010c1762a0(puVar1,param_2,*(undefined1 *)(param_1 + 0x28));
  if (*(double *)(param_1 + 0x30) != 0.0) {
    func_0x00010c183d80(puVar1);
    func_0x00010c17a520(puVar1,param_2,*(undefined1 *)(param_1 + 0x38));
  }
  if ((0.0 < *(double *)(param_1 + 0x40)) && (0.0 < *(double *)(param_1 + 0x48))) {
    func_0x00010c1ea800(*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x40),puVar1);
  }
  func_0x00010c1ffce0(puVar1,param_2,*(undefined8 *)(param_1 + 0x50));
  func_0x00010c1ffcc0(puVar1,param_2,*(undefined8 *)(param_1 + 0x58));
  func_0x00010c1cd480(puVar1,param_2,*(undefined8 *)(param_1 + 0x60));
  func_0x00010c198340(puVar1,param_2,*(undefined8 *)(param_1 + 0x68));
  func_0x00010c1a0a20(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057ceadc; end: 1057ceb2f; -[SCFriendsFeedShortcutsLogger _resetSession] */

void FUN_1057ceadc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  *(undefined8 *)(param_1 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 1057ceb30; end: 1057ceb3b; -[SCFriendsFeedShortcutsLogger _setDidClickBatchCameraButton] */

void FUN_1057ceb30(long param_1)

{
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}



/* Entry: 1057ceb3c; end: 1057ceb47; -[SCFriendsFeedShortcutsLogger _setConversationSyncLatency:success:] */

void FUN_1057ceb3c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined1 *)(param_2 + 0x38) = param_4;
  return;
}



/* Entry: 1057ceb48; end: 1057ceb4f; -[SCFriendsFeedShortcutsLogger _setRenderLatencyStartTimestamp:] */

void FUN_1057ceb48(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 1057ceb50; end: 1057ceb57; -[SCFriendsFeedShortcutsLogger _setRenderLatencyEndTimestamp:] */

void FUN_1057ceb50(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x48) = param_1;
  return;
}



/* Entry: 1057ceb58; end: 1057ceb5f; -[SCFriendsFeedShortcutsLogger _setRecipientsRendered:] */

void FUN_1057ceb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1057ceb60; end: 1057ceb67; -[SCFriendsFeedShortcutsLogger _setRecipientsInventory:] */

void FUN_1057ceb60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1057ceb68; end: 1057ceb6f; -[SCFriendsFeedShortcutsLogger _setShortcutType:] */

void FUN_1057ceb68(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1057ceb70; end: 1057cebb7; -[SCFriendsFeedShortcutsLogger .cxx_destruct] */

void FUN_1057ceb70(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057cebb8; end: 1057cec9b; -[SCFriendsFeedShortcutsLoggingServiceProvider provide] */

void FUN_1057cebb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126be640;
  _objc_alloc(PTR_PTR_1126be640);
  func_0x00010c016580();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057cec9c; end: 1057cecdb;  */

void FUN_1057cec9c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057cecdc; end: 1057ced97; -[SCFriendsFeedShortcutsLoggingServiceProvider _createShortcutsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057cecdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126be648;
  _objc_alloc(PTR_PTR_1126be648);
  lVar2 = param_1 + _DAT_112729c60;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112729c64;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f3a0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057ced98; end: 1057ceddb; -[SCFriendsFeedShortcutsLoggingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057ced98(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729c60);
  _objc_destroyWeak(param_1 + _DAT_112729c64);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729c68);
  return;
}



/* Entry: 1057ceddc; end: 1057cef2b; -[SCChatReactionAssetWarmer initWithReactionMetadataProvider:bitmoji3DStickerFetcher:avatarIdProvider:performerProvider:] */

undefined1 *
FUN_1057ceddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ea518;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057cef2c; end: 1057cefd3; -[SCChatReactionAssetWarmer warmSelectableReactionAssetsIfNeeded] */

void FUN_1057cef2c(long param_1)

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



/* Entry: 1057cefd4; end: 1057cefff;  */

void FUN_1057cefd4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057cf000; end: 1057cf22b; -[SCChatReactionAssetWarmer _warmIfNeeded] */

void FUN_1057cf000(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c08fa60();
  if ((uVar1 != 0) && (uVar1 = uVar2, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
    _objc_retain(uVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_68,param_1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c159200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c1591e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar3;
    func_0x00010bf41860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(uVar2);
    uVar8 = uVar7;
    func_0x00010c25ff60(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar2);
  return;
}



/* Entry: 1057cf22c; end: 1057cf233;  */

void FUN_1057cf22c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_arrayByAddingObjectsFromArray__1125a0188);
  return;
}



/* Entry: 1057cf234; end: 1057cf287;  */

void FUN_1057cf234(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010beea640();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057cf288; end: 1057cf4c7; -[SCChatReactionAssetWarmer _warmAssetsForReactions:avatarId:] */

void FUN_1057cf288(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    _objc_retain(param_3);
    lVar2 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        lVar10 = *(long *)(lVar9 * 8);
        func_0x00010bf034c0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar10;
        func_0x00010c26afc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar10);
        lVar10 = lVar3;
        func_0x00010c08fa60();
        if (lVar10 != 0) {
          uVar4 = *(undefined8 *)(param_1 + 0x10);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010bfa48a0();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c268560();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c25ff60();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0();
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        _objc_release(lVar3);
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0c0800(param_2);
  return;
}



/* Entry: 1057cf4c8; end: 1057cf543;  */

void FUN_1057cf4c8(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1057cf544;
  puStack_20 = &UNK_11084d858;
  uStack_40 = *(undefined8 *)(param_1 + 0x20);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1057cf548;
  puStack_48 = &UNK_110849810;
  uStack_18 = uStack_40;
  func_0x00010c0c0800(param_2,param_2,&puStack_38,&puStack_60);
  return;
}



/* Entry: 1057cf544; end: 1057cf54b;  */

void FUN_1057cf544(void)

{
  return;
}



/* Entry: 1057cf54c; end: 1057cf5ab; -[SCChatReactionAssetWarmer .cxx_destruct] */

void FUN_1057cf54c(long param_1)

{
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



/* Entry: 1057cf5ac; end: 1057cf7df; -[SCChatReactionMetadataProvider initWithReactionsProvider:chatGraphene:circumstanceEngine:] */

undefined8 *
FUN_1057cf5ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_78 = PTR_PTR_1126ea520;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
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
    puVar3 = PTR_PTR_1126ae720;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1057cf7e0;
    puStack_90 = &UNK_1108b2d18;
    _objc_retain(param_5);
    uStack_88 = param_5;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_b0,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_d8 = puVar4;
    uStack_d0 = 0xc2000000;
    pcStack_c8 = FUN_1057cf878;
    puStack_c0 = &UNK_110854530;
    _objc_copyWeak(auStack_b8,auStack_b0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_e0,auStack_b0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057cf7e0; end: 1057cf877;  */

void FUN_1057cf7e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c1195e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e03798,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be650;
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uStack_38 = 0;
  func_0x00010c0f40e0(puVar3,param_2,uVar2,&uStack_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057cf878; end: 1057cf8f7;  */

void FUN_1057cf878(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be9dd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057cf8f8; end: 1057cfa5f; -[SCChatReactionMetadataProvider reactionsForIntentIds:] */

void FUN_1057cf8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf00560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c120e80(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010bf870a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar1 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057cfa60; end: 1057cfbe7;  */

void FUN_1057cfa60(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1057cfbe8;
  uStack_60 = 0x1057cfbf8;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a8 = FUN_1057cfc00;
  puStack_a0 = &UNK_1108b2d48;
  uStack_b0 = 0xc2000000;
  puStack_78 = &uStack_80;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar1;
  puStack_90 = &uStack_80;
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_c0,param_1 + 0x28);
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar2);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057cfbe8; end: 1057cfbff;  */

void FUN_1057cfbe8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057cfc00; end: 1057cfc5f;  */

void FUN_1057cfc00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be07f20();
  _objc_release(lVar2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057cfc60; end: 1057cfcbb;  */

void FUN_1057cfc60(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be07ba0();
  _objc_release(lVar2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = PTR____NSDictionary0__struct_11034ab58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057cfcbc; end: 1057cfcc3; -[SCChatReactionMetadataProvider selectableReactions] */

void FUN_1057cfcbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1057cfcc4; end: 1057cfccb; -[SCChatReactionMetadataProvider selectablePlusExclusiveReactions] */

void FUN_1057cfcc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_target_112678178);
  return;
}



/* Entry: 1057cfccc; end: 1057cfd5b; -[SCChatReactionMetadataProvider selectablePlusExclusiveIntentIds] */

void FUN_1057cfccc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c102180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1057cfd5c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057cfd5c; end: 1057cfdeb;  */

void FUN_1057cfd5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain();
  _objc_opt_new();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1057d055c;
  puStack_30 = &UNK_1108b2e08;
  _objc_retain();
  puStack_28 = puVar1;
  func_0x00010bf980c0(param_1,param_2,&puStack_48);
  _objc_release(param_1);
  _objc_release(puStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057cfdec; end: 1057cfe77; -[SCChatReactionMetadataProvider _selectableReactions] */

void FUN_1057cfdec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1591a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1057cfd5c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be9dd60(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057cfe78; end: 1057cff03; -[SCChatReactionMetadataProvider _selectablePlusExclusiveReactions] */

void FUN_1057cfe78(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c102180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1057cfd5c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be9dd60(param_1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1057cff04; end: 1057d0093; -[SCChatReactionMetadataProvider _selectableReactionsWithIntentIds:] */

void FUN_1057cff04(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c120e80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_initWeak(auStack_48,param_1);
    puVar4 = puVar3;
    func_0x00010bf870a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    puVar5 = puVar4;
    func_0x00010c0b8600(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c11ac40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057d0094; end: 1057d021f;  */

void FUN_1057d0094(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1057cfbe8;
  uStack_60 = 0x1057cfbf8;
  uStack_58 = 0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a8 = FUN_1057d0220;
  puStack_a0 = &UNK_1108b2d48;
  uStack_b0 = 0xc2000000;
  puStack_78 = &uStack_80;
  _objc_copyWeak(auStack_88,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_90 = &uStack_80;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar1;
  _objc_retain(uVar2);
  _objc_copyWeak(auStack_c0,param_1 + 0x28);
  func_0x00010c0c0800(param_2);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar2);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_88);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1057d0220; end: 1057d02e7;  */

void FUN_1057d0220(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be07f40();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1057d02e8;
  puStack_40 = &UNK_1108b2da8;
  uStack_38 = param_2;
  _objc_retain(param_2);
  func_0x000100504554(uVar3,&puStack_58);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  _objc_release(uVar1);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057d02e8; end: 1057d02f3;  */

void FUN_1057d02e8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1057d02f4; end: 1057d034f;  */

void FUN_1057d02f4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be07ba0();
  _objc_release(lVar2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined **)(lVar2 + 0x28) = PTR____NSArray0__struct_11034ab48;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057d0350; end: 1057d0407; -[SCChatReactionMetadataProvider _emitFetchStatusMetricWithDimension:result:] */

void FUN_1057d0350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b2950;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c120c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1057d0408; end: 1057d0473; -[SCChatReactionMetadataProvider _emitMetricsForSelectableReactionsLoad:] */

void FUN_1057d0408(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df2558;
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110dab0d8;
    }
  }
  func_0x00010be07ba0(param_1,param_2,&PTR____CFConstantStringClassReference_110e03778,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d0474; end: 1057d0507; -[SCChatReactionMetadataProvider _emitMetricsForReactionsLoad:requestedIntentIds:] */

void FUN_1057d0474(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110df2558;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf529e0();
    uVar2 = param_4;
    func_0x00010bf529e0();
    ppuVar3 = &PTR____CFConstantStringClassReference_110df2538;
    if (uVar2 <= uVar1) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110dab0d8;
    }
  }
  func_0x00010be07ba0(param_1,param_2,&PTR____CFConstantStringClassReference_110e03758,ppuVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057d0508; end: 1057d05a3; -[SCChatReactionMetadataProvider .cxx_destruct] */

void FUN_1057d0508(long param_1)

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



/* Entry: 1057d05a4; end: 1057d0617; -[SCChatReactionSearcher initWithStickerSearcher:] */

undefined1 * FUN_1057d05a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea528;
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



/* Entry: 1057d0618; end: 1057d070b; -[SCChatReactionSearcher searchWithQuery:] */

void FUN_1057d0618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_retain(param_3);
  _objc_opt_new();
  lVar2 = param_1;
  func_0x00010bebc280(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1057d070c;
  puStack_48 = &UNK_110860d58;
  lStack_40 = lVar2;
  puStack_38 = puVar1;
  _objc_retain(lVar2);
  func_0x00010c154380(uVar3,param_2,param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_retain(puVar1);
  _objc_release(lStack_40);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d070c; end: 1057d09cf;  */

void FUN_1057d070c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1057d0880;
  puStack_60 = &UNK_1108b2e38;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  ppuVar6 = &puStack_78;
  uStack_58 = uVar7;
  func_0x000100504554();
  if (*(long *)(param_1 + 0x20) == 0) {
    func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    puVar8 = PTR_PTR_1126be658;
    _objc_opt_new();
    puVar1 = PTR_PTR_1126be660;
    _objc_alloc(PTR_PTR_1126be660);
    func_0x00010c00f540();
    func_0x00010c194460(puVar8);
    _objc_release(puVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf09f80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbb700(uVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar8);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar6);
  ppuVar3 = ppuVar6;
  func_0x00010c27dd80();
  puVar8 = PTR_PTR_1126b0d08;
  if (ppuVar3 != (undefined **)0x1) {
    puVar8 = (undefined *)0x0;
    goto LAB_1057d09b0;
  }
  _objc_retain(ppuVar6);
  _objc_opt_class(puVar8);
  ppuVar4 = ppuVar6;
  _objc_opt_isKindOfClass(ppuVar6,puVar8);
  ppuVar3 = ppuVar6;
  if (((ulong)ppuVar4 & 1) == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  _objc_retain(ppuVar3);
  _objc_release(ppuVar6);
  ppuVar4 = ppuVar3;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar4 == (undefined **)0x0) {
LAB_1057d0938:
    puVar8 = (undefined *)0x0;
  }
  else {
    ppuVar4 = ppuVar3;
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c0720c0();
    _objc_release(ppuVar4);
    if (((ulong)ppuVar5 & 1) != 0) goto LAB_1057d0938;
    puVar8 = PTR_PTR_1126be658;
    _objc_opt_new(PTR_PTR_1126be658);
    puVar1 = PTR_PTR_1126be660;
    _objc_alloc(PTR_PTR_1126be660);
    ppuVar4 = ppuVar3;
    func_0x00010c26b700(ppuVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f540(puVar1);
    func_0x00010c194460(puVar8);
    _objc_release(puVar1);
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar3);
LAB_1057d09b0:
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1057d09d0; end: 1057d0b77; -[SCChatReactionSearcher _singleEmojiFromQuery:] */

void FUN_1057d09d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c25d0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    uVar4 = 0;
    goto LAB_1057d0b2c;
  }
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1057d0b78;
  uStack_40 = 0x1057d0b88;
  uStack_38 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c08fa60(lVar2);
  func_0x00010bf98040(lVar2);
  if ((*(byte *)(puStack_78 + 3) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c071760();
    if ((int)puVar1 == 0) goto LAB_1057d0b00;
    uVar4 = puStack_58[5];
    _objc_retain(uVar4);
  }
  else {
LAB_1057d0b00:
    uVar4 = 0;
  }
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
LAB_1057d0b2c:
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1057d0b78; end: 1057d0b8f;  */

void FUN_1057d0b78(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1057d0b90; end: 1057d0c03;  */

void FUN_1057d0b90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *in_x6;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar2 + 0x28) == 0) {
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 1;
    *in_x6 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057d0c04; end: 1057d0c0f; -[SCChatReactionSearcher .cxx_destruct] */

void FUN_1057d0c04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057d0c10; end: 1057d0cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d0c10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar1 = param_1 + _DAT_112729ca4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcdfa0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1057d0cb8; end: 1057d0dcf;  */

void FUN_1057d0cb8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bddcf60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1057d0dd0; end: 1057d0eb7; -[SCChatReactionServiceProvider _chatReactionMetadataProviding:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d0dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126be670;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112729ca0;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010c120f20(lVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_1057d0eb8(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03d040(puVar1,param_2,lVar2,param_3,lVar3);
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d0eb8; end: 1057d0edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d0eb8(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112729ca8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057d0edc; end: 1057d0f73; -[SCChatReactionServiceProvider _composerChatReactionMetadataProvider:] */

void FUN_1057d0edc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126be678;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_1057d0f74(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03cf80(puVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d0f74; end: 1057d0f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d0f74(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112729cac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1057d0f98; end: 1057d101b; -[SCChatReactionServiceProvider _chatReactionSearcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d0f98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126be680;
  _objc_alloc(PTR_PTR_1126be680);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112729cb0;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c153220(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c940(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d101c; end: 1057d11a3; -[SCChatReactionServiceProvider _chatReactionAssetWarmer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d101c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar4 = param_1;
  FUN_1057d0eb8();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bf1f440();
  _objc_release(lVar1);
  _objc_release(lVar4);
  puVar5 = (undefined *)0x0;
  if ((int)lVar6 != 0) {
    puVar5 = PTR_PTR_1126be688;
    _objc_alloc(PTR_PTR_1126be688);
    if (param_1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_1 + _DAT_112729cb4;
      _objc_loadWeakRetained(lVar4);
    }
    lVar1 = lVar4;
    func_0x00010c253ec0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_1 + _DAT_112729cb8;
      _objc_loadWeakRetained(lVar6);
    }
    lVar2 = lVar6;
    func_0x00010bf1ad00(lVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_1057d0f74(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cf40(puVar5,param_2,param_3,lVar1,lVar2,lVar3);
    _objc_release(lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057d11a4; end: 1057d1223; -[SCChatReactionServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057d11a4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112729cb8);
  _objc_destroyWeak(param_1 + _DAT_112729cb4);
  _objc_destroyWeak(param_1 + _DAT_112729cb0);
  _objc_destroyWeak(param_1 + _DAT_112729cac);
  _objc_destroyWeak(param_1 + _DAT_112729ca8);
  _objc_destroyWeak(param_1 + _DAT_112729ca4);
  _objc_destroyWeak(param_1 + _DAT_112729ca0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112729c9c);
  return;
}



/* Entry: 1057d1224; end: 1057d13c3;  */

void FUN_1057d1224(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126be690;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c068100(param_1);
  func_0x00010c01e5c0((double)uVar2,puVar1);
  uVar2 = param_1;
  func_0x00010c0daa20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212c20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf034c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c26afc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167f80(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010c0daa40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cd8c0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf034e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c167ee0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c205d40(puVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d13c4; end: 1057d14bb; -[SCComposerChatReactionMetadataProvider initWithReactionMetadataProvider:performerProvider:] */

undefined1 *
FUN_1057d13c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea530;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057d14bc; end: 1057d1763; -[SCComposerChatReactionMetadataProvider fetchBitmojiReactionMetadataWithIntentIds:] */

void FUN_1057d14bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c1591c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c120e60();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010c25ffc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar9 = uVar8;
  func_0x00010bf87440(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar10 = uVar9;
  func_0x00010c25ff80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_retain(puVar1);
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1057d1764; end: 1057d17e7;  */

void FUN_1057d1764(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf00d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000100504554();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


