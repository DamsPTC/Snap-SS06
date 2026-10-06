/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055245fc; end: 10552475f; -[SCNativeFeedManager fetchExpiredStreakFeedEntriesWithLimit:minStreakCount:minExpirationTimeMs:completion:] */

void FUN_1055245fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126ba4d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105524760;
  puStack_70 = &UNK_110859310;
  _objc_retain(param_6);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x10552477c;
  puStack_98 = &UNK_110852668;
  uStack_90 = param_6;
  uStack_68 = param_6;
  _objc_retain(param_6);
  func_0x00010c04f4c0(puVar2,param_2,&puStack_88,&puStack_b0);
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6b80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_6);
  return;
}



/* Entry: 105524760; end: 10552479b;  */

void FUN_105524760(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105524774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,param_2);
    return;
  }
  return;
}



/* Entry: 10552479c; end: 105524903; -[SCNativeFeedManager fetchFeedEntriesForUsers:completion:] */

void FUN_10552479c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110894ff8);
  puVar2 = PTR_PTR_1126ba4e0;
  _objc_alloc(PTR_PTR_1126ba4e0);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar2);
  func_0x00010be0ecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6b60();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105524904; end: 10552494f;  */

void FUN_105524904(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0cd8,PTR_s_UUIDWithString__11254e710,param_2);
  return;
}



/* Entry: 105524950; end: 105524a87; -[SCNativeFeedManager .cxx_destruct] */

void FUN_105524950(long param_1)

{
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105524a88; end: 105524b77; -[SCArroyoBackgroundTaskManager onTaskQueued:] */

void FUN_105524a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105524b18;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105524b78; end: 105524c73; -[SCArroyoBackgroundTaskManager onNetworkConstraintFailed:] */

void FUN_105524b78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105524c14;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105524c74; end: 105524d6f; -[SCArroyoBackgroundTaskManager onTaskStarted:] */

void FUN_105524c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x105524d10;
    puStack_48 = &UNK_110841f80;
    _objc_retain(param_3);
    uStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
    _objc_release(uStack_40);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105524d70; end: 105524e5b; -[SCArroyoBackgroundTaskManager onTaskComplete:taskResult:] */

void FUN_105524d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105524e00;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105524e5c; end: 105524eb3; -[SCArroyoBackgroundTaskManager _onDidEnterBackground] */

void FUN_105524e5c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105524eb4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 105524eb4; end: 105524ec3;  */

void FUN_105524eb4(long param_1)

{
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 1;
  return;
}



/* Entry: 105524ec4; end: 105524f1b; -[SCArroyoBackgroundTaskManager _onDidBecomeActive] */

void FUN_105524ec4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105524f1c;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 105524f1c; end: 105524f3b;  */

void FUN_105524f1c(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x38) == '\x01') {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010be882d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__refreshBackgroundTasks_11257fa50);
    return;
  }
  return;
}



/* Entry: 105524f3c; end: 105525153; -[SCArroyoBackgroundTaskManager _refreshBackgroundTasks] */

ulong FUN_105524f3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf529e0();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    param_3 = &uStack_130;
    lVar1 = lVar3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar10 = *plStack_120;
      uVar11 = *(ulong *)PTR__UIBackgroundTaskInvalid_110345af0;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          uVar4 = *(ulong *)(param_1 + 0x10);
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c2827c0();
          _objc_release(uVar4);
          if (uVar5 != uVar11 && uVar5 != 0xffffffffffffffff) {
            func_0x00010bf94260(uVar2);
          }
          uVar5 = uVar2;
          func_0x00010bf17d00();
          puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10));
          _objc_release(puVar6);
          uVar8 = *(undefined8 *)(param_1 + 0x28);
          if ((uVar5 == uVar11) ||
             (ppuVar9 = &PTR____CFConstantStringClassReference_110de9cb8,
             uVar5 == 0xffffffffffffffff)) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110de9cd8;
            if (uVar5 != 0xffffffffffffffff) {
              ppuVar9 = &PTR____CFConstantStringClassReference_110de9cf8;
            }
            _objc_retain(ppuVar9);
          }
          func_0x00010845f110(uVar8,ppuVar9,1);
          _objc_release(ppuVar9);
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        param_3 = &uStack_130;
        lVar1 = lVar3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  uVar11 = uVar2;
  func_0x00010be40f60();
  if ((uVar11 & 1) == 0) {
    uVar8 = *(undefined8 *)(uVar2 + 8);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17d00();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(uVar2 + 0x10));
    _objc_release(puVar6);
    _objc_release(uVar8);
  }
  _objc_release(param_3);
  return (ulong)((uint)uVar11 ^ 1);
}



/* Entry: 105525154; end: 105525207; -[SCArroyoBackgroundTaskManager _beginBackgroundTaskIfAbsentForTaskId:] */

uint FUN_105525154(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be40f60(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf17d00();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,puVar4,param_3);
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (uint)uVar1 ^ 1;
}



/* Entry: 105525208; end: 105525283; -[SCArroyoBackgroundTaskManager _isHoldingBackgroundTaskForTaskId:] */

bool FUN_105525208(long param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    bVar3 = false;
  }
  else if (*(char *)(param_1 + 0x21) == '\x01') {
    lVar2 = lVar1;
    func_0x00010c2827c0();
    bVar3 = lVar2 != -1 && lVar2 != *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  }
  else {
    bVar3 = true;
  }
  _objc_release(lVar1);
  return bVar3;
}



/* Entry: 105525284; end: 10552535b; -[SCArroyoBackgroundTaskManager _endBackgroundTaskIfPresentForTaskId:] */

undefined8 FUN_105525284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) ||
     ((func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,0,param_3),
      *(char *)(param_1 + 0x21) == '\x01' &&
      (lVar2 = lVar1, func_0x00010c2827c0(),
      lVar2 == -1 || lVar2 == *(long *)PTR__UIBackgroundTaskInvalid_110345af0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2827c0(lVar1);
    func_0x00010bf94260(uVar3,param_2,lVar2);
    _objc_release(uVar3);
    uVar3 = 1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10552535c; end: 1055253af; -[SCArroyoBackgroundTaskManager .cxx_destruct] */

void FUN_10552535c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055253b0; end: 10552547b; -[SCChatMessageWindowManagerDelegateImpl initWithWindowUpdatesSubject:windowErrorsSubject:windowDestroyedSubject:] */

undefined1 *
FUN_1055253b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e8db8;
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



/* Entry: 10552547c; end: 10552553b; -[SCChatMessageWindowManagerDelegateImpl onWindowUpdated:op:update:] */

void FUN_10552547c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba4f8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c005380(puVar1,param_2,uVar2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10552553c; end: 1055255db; -[SCChatMessageWindowManagerDelegateImpl onWindowInteractionError:op:status:] */

void FUN_10552553c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba500;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c005360(puVar1,param_2,uVar2,param_4,param_5);
  _objc_release(uVar2);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055255dc; end: 10552561b; -[SCChatMessageWindowManagerDelegateImpl onWindowDestroyed:] */

void FUN_1055255dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10552561c; end: 105525657; -[SCChatMessageWindowManagerDelegateImpl .cxx_destruct] */

void FUN_10552561c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105525658; end: 105525807; -[SCConversationAdsManagerDelegateImpl buildAdRequest:buildAdRequestMetadata:] */

void FUN_105525658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c0deda0(param_4);
  uVar2 = param_4;
  func_0x00010c0df140(param_4);
  uVar3 = param_4;
  func_0x00010c0df5a0(param_4);
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10552574c;
  puStack_50 = &UNK_110895018;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc9360(uVar4,param_2,uVar1,uVar2,uVar3,&puStack_68);
  _objc_release(uVar4);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105525808; end: 10552587f; -[SCConversationAdsManagerDelegateImpl onAdRequestBuildStart:trigger:] */

void FUN_105525808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba508;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e23e0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105525880; end: 1055258ef; -[SCConversationAdsManagerDelegateImpl onAdRequestBuildSuccess:] */

void FUN_105525880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba508;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2420(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055258f0; end: 10552597b; -[SCConversationAdsManagerDelegateImpl onAdResponseSuccess:adResponseBytes:] */

void FUN_1055258f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba508;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e24e0(puVar1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10552597c; end: 105525a17; -[SCConversationAdsManagerDelegateImpl onSponsoredSnapInserted:isNoFill:adResponseBytes:] */

void FUN_10552597c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba508;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6960(puVar1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105525a18; end: 105525ab3; -[SCConversationAdsManagerDelegateImpl onSponsoredSnapHidden:isNoFill:adResponseBytes:] */

void FUN_105525a18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ba508;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6920(puVar1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105525ab4; end: 105525b63; -[SCConversationAdsManagerDelegateImpl onFeedEntered:feedSessionId:] */

void FUN_105525ab4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126ba508;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010c272380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c272380(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c0e42a0(puVar2,param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105525b64; end: 105525ba7; -[SCConversationAdsManagerDelegateImpl onSponsoredSnapBannerInserted:] */

void FUN_105525b64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105525ba8; end: 105525beb; -[SCConversationAdsManagerDelegateImpl onSponsoredSnapBannerHidden] */

void FUN_105525ba8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105525bec; end: 105525c27; -[SCConversationAdsManagerDelegateImpl .cxx_destruct] */

void FUN_105525bec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105525c28; end: 105525c9b; -[SCConversationDataFetcher initWithNativeMessagingSessionManager:] */

undefined1 * FUN_105525c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8dc8;
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



/* Entry: 105525c9c; end: 105525ce3; -[SCConversationDataFetcher _nativeConversationManager] */

void FUN_105525c9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc7e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105525ce4; end: 105525df3; -[SCConversationDataFetcher fetchMessageAndConversationWithId:messageId:completion:] */

void FUN_105525ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_retain(param_5);
  _objc_copyWeak(auStack_58,auStack_48);
  uStack_50 = param_4;
  _objc_retain(param_3);
  func_0x00010be10a60(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105525df4; end: 105525edb;  */

void FUN_105525df4(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,0);
  }
  else {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_retain(param_2);
    func_0x00010bfa8a00(lVar2);
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105525edc; end: 105525ef7;  */

void FUN_105525edc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000105525ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar1,param_2);
  return;
}



/* Entry: 105525ef8; end: 105525fe7; -[SCConversationDataFetcher fetchMessagesForConversation:startingMessageId:pageSize:matchingCase:completion:] */

void FUN_105525ef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be1e1a0(param_1,param_2,param_3,param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126b2798;
    _objc_opt_new(PTR_PTR_1126b2798);
    func_0x00010be12940(param_1,param_2,lVar1,param_4,PTR____NSArray0__struct_11034ab48,param_5,1,
                        puVar2,param_6,param_7);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105525fe8; end: 10552618f; -[SCConversationDataFetcher fetchMessagesInclusiveForConversation:startingMessageId:pageSize:matchingCase:completion:] */

void FUN_105525fe8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be1e1a0(param_1,param_2,param_3,param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b2798;
    _objc_opt_new();
    uVar2 = param_4;
    func_0x00010c067ec0(param_4);
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105526190;
    puStack_a0 = &UNK_1108950a8;
    _objc_retain(puVar3);
    puStack_98 = puVar3;
    lStack_90 = param_1;
    _objc_retain(param_7);
    uStack_78 = param_7;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(lVar1);
    lStack_88 = lVar1;
    _objc_retain(param_4);
    uStack_80 = param_4;
    uStack_68 = param_5;
    func_0x00010bfa8a00(param_1,param_2,(long)(int)uVar2,param_3,&puStack_b8);
    uVar2 = uStack_80;
    _objc_retain(puVar3);
    _objc_release(uVar2);
    _objc_release(lStack_88);
    _objc_release(uStack_70);
    _objc_release(uStack_78);
    _objc_release(puStack_98);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105526190; end: 1055262af;  */

void FUN_105526190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if (iVar1 == 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x0001006372a4();
      _objc_release(puVar2);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    param_4 = *(undefined8 *)(param_1 + 0x38);
    param_5 = puVar3;
    func_0x00010be12940(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
  }
  else {
    uVar6 = 0;
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != (undefined *)0x0) {
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_105526478;
    puStack_e0 = &UNK_110894fc8;
    uStack_c8 = uVar6;
    _objc_retain(param_4);
    uStack_d8 = param_4;
    _objc_retain(param_5);
    ppuVar4 = &puStack_f8;
    puStack_d0 = param_5;
    _objc_retainBlock();
    puVar3 = PTR_PTR_1126ba510;
    _objc_alloc(PTR_PTR_1126ba510);
    _objc_retain(param_5);
    func_0x00010c04f4c0(puVar3);
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      (*(code *)ppuVar4[2])(ppuVar4,0);
    }
    else {
      puVar5 = PTR_PTR_1126ba518;
      _objc_alloc(PTR_PTR_1126ba518);
      func_0x00010c044c00();
      func_0x00010be61f80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa8980();
      _objc_release(param_2);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(param_5);
    _objc_release(ppuVar4);
    _objc_release(puStack_d0);
    _objc_release(uStack_d8);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055262b0; end: 105526477; -[SCConversationDataFetcher fetchMessageWithServerId:conversationId:completion:] */

void FUN_1055262b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105526478;
    puStack_80 = &UNK_110894fc8;
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_5);
    ppuVar1 = &puStack_98;
    lStack_70 = param_5;
    _objc_retainBlock();
    puVar2 = PTR_PTR_1126ba510;
    _objc_alloc(PTR_PTR_1126ba510);
    _objc_retain(param_5);
    func_0x00010c04f4c0(puVar2);
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      (*(code *)ppuVar1[2])(ppuVar1,0);
    }
    else {
      puVar4 = PTR_PTR_1126ba518;
      _objc_alloc(PTR_PTR_1126ba518);
      func_0x00010c044c00();
      func_0x00010be61f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa8980();
      _objc_release(param_1);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(ppuVar1);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105526478; end: 105526493;  */

void FUN_105526478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105526484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105526494; end: 10552662f; -[SCConversationDataFetcher fetchQuotedMessageForConversationId:messageId:completion:] */

void FUN_105526494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar1 = PTR_PTR_1126b27a0;
    _objc_alloc(PTR_PTR_1126b27a0);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105526630;
    puStack_60 = &UNK_11085d260;
    _objc_retain(param_5);
    puStack_b0 = puVar2;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10552663c;
    puStack_98 = &UNK_110875d70;
    lStack_58 = param_5;
    _objc_retain(param_3);
    uStack_90 = param_3;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(param_5);
    lStack_80 = param_5;
    func_0x00010c04f4c0(puVar1,param_2,&puStack_78,&puStack_b0);
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0b4ca0(param_4);
    func_0x00010bfa89c0(param_1,param_2,puVar2,uVar3,puVar1);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105526630; end: 10552664b;  */

void FUN_105526630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105526638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10552664c; end: 105526803; -[SCConversationDataFetcher fetchMessagesInBundle:bundleId:completion:] */

void FUN_10552664c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar1 = PTR_PTR_1126ba520;
    _objc_alloc(PTR_PTR_1126ba520);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_105526804;
    puStack_70 = &UNK_1108950d8;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    puStack_c0 = puVar2;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x105526810;
    puStack_a8 = &UNK_110875d70;
    lStack_58 = param_5;
    _objc_retain(param_3);
    uStack_a0 = param_3;
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_5);
    lStack_90 = param_5;
    func_0x00010c04f540(puVar1,param_2,&puStack_88,&puStack_c0);
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa8a60();
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105526804; end: 10552681f;  */

void FUN_105526804(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010552680c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 105526820; end: 1055269e3; -[SCConversationDataFetcher fetchPlayableMediaMessages:initialMessageId:completion:] */

void FUN_105526820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puVar1 = PTR_PTR_1126ba520;
    _objc_alloc(PTR_PTR_1126ba520);
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1055269e4;
    puStack_70 = &UNK_1108950d8;
    _objc_retain(param_4);
    uStack_68 = param_4;
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_5);
    puStack_c0 = puVar2;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1055269f0;
    puStack_a8 = &UNK_110875d70;
    lStack_58 = param_5;
    _objc_retain(param_4);
    uStack_a0 = param_4;
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(param_5);
    lStack_90 = param_5;
    func_0x00010c04f540(puVar1,param_2,&puStack_88,&puStack_c0);
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be61f80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c067ec0(param_4);
    func_0x00010bfa9440(param_1,param_2,puVar2,(long)(int)uVar3,puVar1);
    _objc_release(param_1);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(lStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055269e4; end: 1055269ff;  */

void FUN_1055269e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055269ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
  return;
}



/* Entry: 105526a00; end: 105526bbb; -[SCConversationDataFetcher fetchConversationMetadata:completion:] */

void FUN_105526a00(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  ppuVar2 = &puStack_c0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if ((param_3 != 0) && (param_4 != 0)) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105526bbc;
    puStack_78 = &UNK_110895108;
    _objc_retain(param_3);
    lStack_70 = param_3;
    _objc_retain(param_4);
    ppuVar1 = &puStack_90;
    lStack_68 = param_4;
    _objc_retainBlock(ppuVar1);
    puStack_c0 = puVar3;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x105526bc8;
    puStack_a8 = &UNK_110875d40;
    _objc_retain(param_3);
    lStack_a0 = param_3;
    _objc_retain(param_4);
    lStack_98 = param_4;
    _objc_retainBlock();
    puVar3 = PTR_PTR_1126ba338;
    _objc_alloc(PTR_PTR_1126ba338);
    func_0x00010c04f540();
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      (**(code **)((long)ppuVar2 + 0x10))(ppuVar2,0);
    }
    else {
      func_0x00010be61f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa5f00();
      _objc_release(param_1);
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    _objc_release(lStack_98);
    _objc_release(lStack_a0);
    _objc_release(ppuVar1);
    _objc_release(lStack_68);
    _objc_release(lStack_70);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105526bbc; end: 105526bd7;  */

void FUN_105526bbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105526bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 105526bd8; end: 105526c87; -[SCConversationDataFetcher _getConversationUUIDForConversation:pageSize:completion:] */

void FUN_105526bd8(void)

{
  undefined *puVar1;
  long in_x3;
  long in_x4;
  undefined *puVar2;
  
  _objc_retain(in_x4);
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0();
  _objc_retainAutoreleasedReturnValue();
  if (in_x4 != 0) {
    if (puVar1 != (undefined *)0x0) {
      if (in_x3 == 0) {
        (**(code **)(in_x4 + 0x10))(in_x4,0,0);
        puVar2 = (undefined *)0x0;
      }
      else {
        _objc_retain(puVar1);
        puVar2 = puVar1;
      }
      goto LAB_105526c4c;
    }
    (**(code **)(in_x4 + 0x10))(in_x4,0,0);
  }
  puVar2 = (undefined *)0x0;
LAB_105526c4c:
  _objc_release(puVar1);
  _objc_release(in_x4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105526c88; end: 105526f93; -[SCConversationDataFetcher _fetchMessagesForConversation:startingMessageId:matchingMessages:pageSize:hasMoreMessages:cancelable:matchingCase:completion:] */

void FUN_105526c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,int param_7,undefined8 param_8,undefined8 param_9,
                  long param_10)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [8];
  ulong uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uVar1 = param_8;
  func_0x00010c06e0e0();
  uVar5 = param_4;
  if ((int)uVar1 == 0) {
    uVar2 = param_5;
    func_0x00010bf529e0();
    if ((param_7 == 0) || (param_6 <= uVar2)) {
      if (param_7 == 0) {
        uVar5 = 0;
      }
      _objc_retain(uVar5);
      _objc_release(param_4);
      (**(code **)(param_10 + 0x10))(param_10,param_5,uVar5);
    }
    else {
      _objc_initWeak(auStack_80,param_1);
      puVar3 = PTR_PTR_1126b46e0;
      _objc_alloc(PTR_PTR_1126b46e0);
      _objc_retain(param_5);
      _objc_retain(param_9);
      uStack_88 = param_6;
      _objc_retain(param_10);
      _objc_copyWeak(auStack_90,auStack_80);
      _objc_retain(param_3);
      _objc_retain(param_8);
      _objc_retain(param_3);
      _objc_retain(param_10);
      _objc_retain(param_5);
      func_0x00010c04f560(puVar3);
      func_0x00010be61f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa6000(param_1);
      _objc_release(puVar4);
      _objc_release(param_1);
      _objc_release(puVar3);
      _objc_release(param_5);
      _objc_release(param_10);
      _objc_release(param_3);
      _objc_release(param_8);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_90);
      _objc_release(param_10);
      _objc_release(param_9);
      _objc_release(param_5);
      _objc_destroyWeak(auStack_80);
    }
  }
  else {
    (**(code **)(param_10 + 0x10))(param_10,0,0);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 105526f94; end: 105527227;  */

void FUN_105526f94(long param_1,undefined8 param_2,undefined *param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0d3c80();
  puVar3 = param_3;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar6 == (undefined *)0x0) {
      _objc_release(puVar3);
      if (param_4 != 0) {
        func_0x00010bf529e0(param_3);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar6 = param_3;
      func_0x00010bfb1920(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf6e760();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb5a0();
      func_0x00010c0df7c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar6);
      puVar6 = (undefined *)(param_1 + 0x50);
      _objc_loadWeakRetained(puVar6);
      func_0x00010be12940();
LAB_1055271cc:
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
        return;
      }
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000105527238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(param_3 + 0x38) + 0x10))
                (*(long *)(param_3 + 0x38),*(undefined8 *)(param_3 + 0x30),0);
      return;
    }
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar3);
      }
      puVar7 = *(undefined **)((long)puVar8 * 8);
      lVar4 = *(long *)(param_1 + 0x40);
      if ((lVar4 == 0) || ((**(code **)(lVar4 + 0x10))(lVar4,puVar7), (int)lVar4 != 0)) {
        func_0x00010befa120(lVar2);
      }
      lVar4 = lVar2;
      func_0x00010bf529e0();
      if (lVar4 == *(long *)(param_1 + 0x58)) {
        puVar8 = param_3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (((param_4 & 1) == 0) && (puVar7 == puVar8)) {
          puVar6 = (undefined *)0x0;
        }
        else {
          func_0x00010bf6e760(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0cb5a0();
          func_0x00010c0df7c0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
        }
        (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),lVar2,puVar6);
        goto LAB_1055271cc;
      }
      puVar8 = puVar8 + 1;
    } while (puVar6 != puVar8);
    puVar6 = puVar3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 105527228; end: 10552723b;  */

void FUN_105527228(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105527238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10552723c; end: 10552738b; -[SCConversationDataFetcher _fetchConversationWithId:completion:] */

void FUN_10552723c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10552738c;
    puStack_58 = &UNK_110875d40;
    _objc_retain(param_3);
    lStack_50 = param_3;
    _objc_retain(param_4);
    uStack_48 = param_4;
    _objc_retainBlock();
    puVar2 = PTR_PTR_1126ba338;
    _objc_alloc(PTR_PTR_1126ba338);
    func_0x00010c04f540();
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1,0);
    }
    else {
      func_0x00010be61f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa5f00();
      _objc_release(param_1);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(ppuVar1);
    _objc_release(uStack_48);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10552738c; end: 10552739b;  */

void FUN_10552738c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105527398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10552739c; end: 10552753f; -[SCConversationDataFetcher fetchMessageWithId:conversationId:completion:] */

void FUN_10552739c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_105527540;
    puStack_80 = &UNK_110894fc8;
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_5);
    ppuVar1 = &puStack_98;
    lStack_70 = param_5;
    _objc_retainBlock();
    puVar2 = PTR_PTR_1126ba510;
    _objc_alloc(PTR_PTR_1126ba510);
    _objc_retain(param_5);
    func_0x00010c04f4c0(puVar2);
    puVar3 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      (*(code *)ppuVar1[2])(ppuVar1,0);
    }
    else {
      func_0x00010be61f80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa8940();
      _objc_release(param_1);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_5);
    _objc_release(ppuVar1);
    _objc_release(lStack_70);
    _objc_release(uStack_78);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105527540; end: 10552755b;  */

void FUN_105527540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010552754c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10552755c; end: 10552756f; -[SCConversationDataFetcher .cxx_destruct] */

void FUN_10552755c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105527570; end: 1055275ab; -[SCGroupsDataPublisher .cxx_destruct] */

void FUN_105527570(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055275ac; end: 10552763f; -[SCNativeConversationAdsManager logImpression:] */

void FUN_1055275ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010bde8b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a8160();
    _objc_release(lVar1);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105527640; end: 105527667; -[SCNativeConversationAdsManager adImpressionObservable] */

void FUN_105527640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527668; end: 10552768f; -[SCNativeConversationAdsManager sponsoredSnapFeedLifecycleEventObservable] */

void FUN_105527668(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527690; end: 1055276b7; -[SCNativeConversationAdsManager sponsoredSnapFeedActiveBannerObservable] */

void FUN_105527690(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055276b8; end: 1055276f7; -[SCNativeConversationAdsManager _conversationAdsManager] */

void FUN_1055276b8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc41a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055276f8; end: 10552773b; -[SCNativeConversationAdsManager .cxx_destruct] */

void FUN_1055276f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10552773c; end: 10552782f; -[SCNativeMessageWindowManager initWithNativeSession:windowUpdatesObservable:windowErrorsObservable:windowDestroyedObservable:] */

undefined1 *
FUN_10552773c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e8de0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105527830; end: 105527857; -[SCNativeMessageWindowManager windowUpdatesObservable] */

void FUN_105527830(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527858; end: 10552787f; -[SCNativeMessageWindowManager windowErrorsObservable] */

void FUN_105527858(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527880; end: 1055278a7; -[SCNativeMessageWindowManager windowDestroyedObservable] */

void FUN_105527880(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055278a8; end: 10552793f; -[SCNativeMessageWindowManager createWindowForConversationWithId:params:isReset:] */

void FUN_1055278a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  _objc_retain(param_4);
  func_0x00010bdc35c0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5ffe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfef980();
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105527940; end: 1055279ab; -[SCNativeMessageWindowManager moveWindowBackForConversationId:numMessages:] */

void FUN_105527940(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5ffe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d1380();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055279ac; end: 105527a17; -[SCNativeMessageWindowManager moveWindowForwardForConversationId:numMessages:] */

void FUN_1055279ac(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5ffe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d14c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105527a18; end: 105527a57; -[SCNativeMessageWindowManager _messageWindowManager] */

void FUN_105527a18(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfc7800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105527a58; end: 105527a9b; -[SCNativeMessageWindowManager .cxx_destruct] */

void FUN_105527a58(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105527a9c; end: 105527acf; -[SCNativeMessagingSessionManager dealloc] */

void FUN_105527a9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e8de8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105527ad0; end: 105527af7; -[SCNativeMessagingSessionManager getCommunityGroupsFeedManager] */

void FUN_105527ad0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527af8; end: 105527b1f; -[SCNativeMessagingSessionManager getSnapManager] */

void FUN_105527af8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 200);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527b20; end: 105527b47; -[SCNativeMessagingSessionManager getConversationAdsManager] */

void FUN_105527b20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527b48; end: 105527b6f; -[SCNativeMessagingSessionManager getMessageWindowManager] */

void FUN_105527b48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105527b70; end: 105527bc3; -[SCNativeMessagingSessionManager endSession] */

void FUN_105527b70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x180));
  func_0x00010bf3b120(PTR_PTR_1126ba578,param_2,*(undefined8 *)(param_1 + 0x40));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  uVar1 = uRam0000000113829b30;
  uRam0000000113829b30 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105527bc4; end: 105527c0f; -[SCNativeMessagingSessionManager dispose] */

void FUN_105527bc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010bfe6360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d40();
  _objc_release(uVar1);
  func_0x00010bf953c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105527c10; end: 105527c17; -[SCNativeMessagingSessionManager getNativeStorySendManager] */

void FUN_105527c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfcad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_getStorySendManager_1125d04f8);
  return;
}



/* Entry: 105527c18; end: 105527c1f; -[SCNativeMessagingSessionManager getNotificationCenterManager] */

void FUN_105527c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc8190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_getNotificationCenterManager_1125cfa08);
  return;
}



/* Entry: 105527c20; end: 105527c2f; -[SCNativeMessagingSessionManager onDataWipe:dataWipeParams:] */

void FUN_105527c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 0x130) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010c0e6c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_onSuccess_112617530);
  return;
}



/* Entry: 105527c30; end: 105527ec3; -[SCNativeMessagingSessionManager .cxx_destruct] */

void FUN_105527c30(long param_1)

{
  _objc_storeStrong(param_1 + 0x1b8,0);
  _objc_storeStrong(param_1 + 0x1b0,0);
  _objc_storeStrong(param_1 + 0x1a8,0);
  _objc_storeStrong(param_1 + 0x1a0,0);
  _objc_storeStrong(param_1 + 0x198,0);
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x188,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x160,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
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
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105527ec4; end: 105527f03; -[SCNativeSnapManager nativeSnapManager] */

void FUN_105527ec4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfca700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105527f04; end: 1055280f3; -[SCNativeSnapManager updateSnapInteractionWithType:conversationId:messageId:] */

void FUN_105527f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ba5a8;
  _objc_alloc(PTR_PTR_1126ba5a8);
  uStack_70 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c04f4c0(puVar1);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b4ca0(param_5);
  func_0x00010c0e6800(param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1055280f4; end: 10552824f;  */

void FUN_1055280f4(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      iVar2 = (int)*(undefined8 *)(lVar7 * 8);
      func_0x00010c067ec0();
      if (iVar2 == 0) {
        lVar4 = param_1 + 0x30;
        _objc_loadWeakRetained();
        if (lVar4 == 0) goto LAB_105528204;
        puVar5 = PTR_PTR_1126ba5b0;
        _objc_alloc(PTR_PTR_1126ba5b0);
        func_0x00010c004b80();
        func_0x00010c0d9840(*(undefined8 *)(lVar4 + 0x10));
        _objc_release(puVar5);
        _objc_release(lVar4);
      }
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    lVar3 = param_2;
    func_0x00010bf52a60();
  }
LAB_105528204:
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 105528250; end: 105528253;  */

void FUN_105528250(void)

{
  return;
}



/* Entry: 105528254; end: 1055283df; -[SCNativeSnapManager updateSnapDownloadStatus:conversationId:messageId:] */

void FUN_105528254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1055283e0;
  puStack_70 = &UNK_110844b80;
  _objc_retain(param_5);
  uStack_68 = param_5;
  _objc_retain(param_4);
  puStack_c0 = puVar2;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1055283e4;
  puStack_a8 = &UNK_1108951c0;
  uStack_a0 = param_5;
  uStack_98 = param_4;
  uStack_90 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_3;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c04f4c0(puVar1,param_2,&puStack_88,&puStack_c0);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  func_0x00010c0b4ca0(param_5);
  func_0x00010c0e67e0(param_1,param_2,param_3,puVar2,uVar3,puVar1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 1055283e0; end: 1055283e7;  */

void FUN_1055283e0(void)

{
  return;
}



/* Entry: 1055283e8; end: 105528557; -[SCNativeSnapManager requestSnapReplayForConversationId:completion:] */

void FUN_1055283e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105528558;
  puStack_68 = &UNK_11084aaa8;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105528570;
  puStack_98 = &UNK_110875d40;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1,param_2,&puStack_80,&puStack_b0);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6840();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105528558; end: 105528587;  */

void FUN_105528558(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105528568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105528588; end: 1055286f7; -[SCNativeSnapManager saveSnapsForConversationId:completion:] */

void FUN_105528588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b2730;
  _objc_alloc(PTR_PTR_1126b2730);
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1055286f8;
  puStack_68 = &UNK_11084aaa8;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_b0 = puVar2;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105528710;
  puStack_98 = &UNK_110875d40;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c04f4c0(puVar1,param_2,&puStack_80,&puStack_b0);
  puVar2 = PTR_PTR_1126b0cd8;
  func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e6860();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055286f8; end: 105528727;  */

void FUN_1055286f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105528708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 105528728; end: 105528753; -[SCNativeSnapManager .cxx_destruct] */

void FUN_105528728(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105528754; end: 1055287ff; -[SCSnapInteractionCallback initWithSuccessCallback:failureCallback:] */

undefined1 *
FUN_105528754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e8df8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105528800; end: 10552880f; -[SCSnapInteractionCallback onError:] */

void FUN_105528800(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010552880c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}


