/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10674fe38; end: 10674ff4f; -[SCMapLocationContextFetcher locationContextGRPCService] */

void FUN_10674fe38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bc1b8;
    func_0x000106b13ab0(PTR_PTR_1126bc1b8,&PTR____CFConstantStringClassReference_110e5ad58,
                        *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x38),puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd698;
    _objc_alloc();
    func_0x00010c058f80();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar5);
  _os_unfair_lock_unlock(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10674ff50; end: 10674ff77; -[SCMapLocationContextFetcher contextUpdateObservable] */

void FUN_10674ff50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10674ff78; end: 106750053; -[SCMapLocationContextFetcher requestPeriodicUpdatesForOwner:friendIds:] */

void FUN_10674ff78(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) || (uVar1 = param_5, func_0x00010bf529e0(), uVar1 == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar1 = param_5;
    func_0x00010c069880(param_5,param_3,*(undefined8 *)(param_2 + 0x60));
    if ((uVar1 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      *(undefined8 *)(param_2 + 0x70) = param_1;
      _objc_release(puVar3);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      *(ulong *)(param_2 + 0x60) = param_5;
      _objc_release(uVar2);
      func_0x00010c1b8100(param_2,param_3,0);
    }
    puVar3 = PTR_PTR_1126cd6a0;
    _objc_alloc(PTR_PTR_1126cd6a0);
    func_0x00010c026ca0();
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106750054; end: 106750277; -[SCMapLocationContextFetcher registerPeriodicUpdatesForOwner:] */

void FUN_106750054(double param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    _os_unfair_lock_lock(param_2 + 0x50);
    uVar1 = *(ulong *)(param_2 + 0x58);
    func_0x00010bf4b900();
    if ((uVar1 & 1) == 0) {
      func_0x00010befa120(*(undefined8 *)(param_2 + 0x58));
    }
    _os_unfair_lock_unlock(param_2 + 0x50);
    dVar6 = *(double *)(param_2 + 0x70);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar6 = dVar6 - param_1;
    _objc_release(puVar2);
    if (0.0 < dVar6) {
      lVar3 = param_2;
      func_0x00010c0893e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126cd6a8;
        _objc_alloc(PTR_PTR_1126cd6a8);
        lVar3 = param_2;
        func_0x00010c0893e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c015820(*(undefined8 *)(param_2 + 0x78),puVar4);
        _objc_release(lVar3);
        func_0x00010be84100(param_2);
        _objc_initWeak(auStack_58,param_2);
        puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        _objc_copyWeak(auStack_60,auStack_58);
        func_0x00010c270920(dVar6,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
        func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befc020();
        _objc_release(puVar5);
        _objc_release(puVar2);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        _objc_release(puVar4);
        goto LAB_106750224;
      }
    }
    func_0x00010be91420(param_2);
  }
LAB_106750224:
  _objc_release(param_4);
  return;
}



/* Entry: 106750278; end: 1067502a3;  */

void FUN_106750278(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067502a4; end: 10675030b; -[SCMapLocationContextFetcher unregisterRequestedUpdatesForOwner:] */

void FUN_1067502a4(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x50);
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x58),param_2,param_3);
    _os_unfair_lock_unlock(param_1 + 0x50);
    func_0x00010bec3680(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10675030c; end: 10675033f; -[SCMapLocationContextFetcher _stopPollingIfNoLongerRequired] */

void FUN_10675030c(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010be33b80();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec36b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopPollingTimer_11258e750);
  return;
}



/* Entry: 106750340; end: 106750403; -[SCMapLocationContextFetcher _hasAnyPeriodicUpdateReferences] */

undefined1 * FUN_106750340(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar8 = *(long *)(param_1 + 0x58);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  _objc_release(lVar8);
  uVar2 = param_1 + 0x50;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return (undefined1 *)(ulong)(lVar1 != 0);
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar3 = *(undefined1 **)(uVar2 + 0x68);
  if ((puVar3 == (undefined1 *)0x0) || (func_0x00010c082b20(), ((ulong)puVar3 & 1) == 0)) {
    uVar4 = uVar2;
    func_0x00010be33b80();
    if ((uVar4 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return puVar6;
    }
    _objc_initWeak(auStack_148,uVar2);
    puVar6 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    uVar9 = *(undefined8 *)(uVar2 + 0x78);
    _objc_copyWeak(auStack_150,auStack_148);
    func_0x00010c270920(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
    _objc_release(puVar5);
    uVar9 = *(undefined8 *)(uVar2 + 0x68);
    *(undefined **)(uVar2 + 0x68) = puVar6;
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_150);
    puVar3 = auStack_148;
    _objc_destroyWeak(puVar3);
  }
  return puVar3;
}



/* Entry: 106750404; end: 106750567; -[SCMapLocationContextFetcher _startPollingTimerIfNecessary] */

void FUN_106750404(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x68);
  if ((uVar1 == 0) || (func_0x00010c082b20(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010be33b80();
    if ((uVar1 & 1) == 0) {
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    _objc_initWeak(auStack_48,param_1);
    puVar2 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    uVar4 = *(undefined8 *)(param_1 + 0x78);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c270920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc020();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar2;
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 106750568; end: 106750593;  */

void FUN_106750568(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010becc260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106750594; end: 1067505d3; -[SCMapLocationContextFetcher _timerDidFire] */

void FUN_106750594(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be33b80();
  if ((int)lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be91430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__requestLocationContextForFriend_112581ea8,
               *(undefined8 *)(param_1 + 0x60),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec36b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopPollingTimer_11258e750);
  return;
}



/* Entry: 1067505d4; end: 1067505e3; -[SCMapLocationContextFetcher _publishLocationContextResponse:] */

void FUN_1067505d4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_next__112614028);
    return;
  }
  return;
}



/* Entry: 1067505e4; end: 10675060f; -[SCMapLocationContextFetcher _stopPollingTimer] */

void FUN_1067505e4(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106750610; end: 106750737; -[SCMapLocationContextFetcher _requestLocationContextForFriendIds:wasPreviouslyMuted:] */

void FUN_106750610(undefined8 param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_48,param_1);
      puVar2 = PTR_PTR_1126cd658;
      _objc_alloc(PTR_PTR_1126cd658);
      func_0x00010c0157a0();
      uStack_50 = param_4;
      _objc_copyWeak(auStack_58,auStack_48);
      func_0x00010bfa83e0(param_1);
      _objc_destroyWeak(auStack_58);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106750738; end: 10675079b;  */

void FUN_106750738(long param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x28);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  if (cVar1 == '\x01') {
    func_0x00010be2f440();
  }
  else {
    func_0x00010be84100();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10675079c; end: 106750953; -[SCMapLocationContextFetcher _handleMutedFriendsList:] */

void FUN_10675079c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x50);
  lVar6 = *(long *)(param_1 + 0x88);
  _objc_retain(lVar6);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  _objc_release(uVar5);
  _os_unfair_lock_unlock(param_1 + 0x50);
  if (lVar6 != 0) {
    uVar1 = param_3;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    lVar2 = lVar6;
    func_0x00010c0d3c80();
    func_0x00010c0ce860();
    uVar5 = uVar1;
    func_0x00010c069880();
    if ((int)uVar5 == 0) {
      lVar4 = lVar2;
      func_0x00010c069880();
      if (((int)lVar4 != 0) && (lVar4 = param_1, func_0x00010be33b80(), (int)lVar4 != 0)) {
        func_0x00010c069840(lVar2);
        func_0x00010be91420(param_1);
      }
    }
    else {
      func_0x00010c069840(uVar1);
      uVar5 = uVar1;
      func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_110938c00);
      lVar4 = param_1;
      func_0x00010be203c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40));
      lVar3 = lVar4;
      func_0x00010bfb8440(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8100(param_1);
      _objc_release(lVar3);
      _objc_release(lVar4);
      _objc_release(uVar5);
    }
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  func_0x00010c09e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287e40();
  _objc_release(param_1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106750954; end: 1067509e3; -[SCMapLocationContextFetcher _handleResponseWithPreviouslyMutedFriends:] */

void FUN_106750954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfb8440(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010be203c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be84100(param_1,param_2,uVar1);
  uVar2 = uVar1;
  func_0x00010bfb8440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b8100(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067509e4; end: 106750b13; -[SCMapLocationContextFetcher _getLocationContextResponseWithMutedLocationContexts:] */

void FUN_1067509e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110938b60);
  lVar2 = param_1;
  func_0x00010c0893e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106750b1c;
  puStack_50 = &UNK_110938b80;
  uStack_48 = uVar1;
  _objc_retain(uVar1);
  lVar3 = lVar2;
  func_0x0001006372a4(lVar2,&puStack_68);
  lVar4 = lVar3;
  func_0x00010c0d3c80();
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010befa160(lVar4);
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126cd6a8;
  _objc_alloc(PTR_PTR_1126cd6a8);
  lVar2 = lVar4;
  func_0x00010bf51e00(lVar4);
  func_0x00010c015820(*(undefined8 *)(param_1 + 0x78),puVar5);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(uStack_48);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106750b14; end: 106750b1b;  */

void FUN_106750b14(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb81d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_friendId_1125cba18);
  return;
}



/* Entry: 106750b1c; end: 106750b67;  */

uint FUN_106750b1c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfb81c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106750b68; end: 106750b73; -[SCMapLocationContextFetcher lastLocationContextArray] */

void FUN_106750b68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x90,1);
  return;
}



/* Entry: 106750b74; end: 106750b7b; -[SCMapLocationContextFetcher setLastLocationContextArray:] */

void FUN_106750b74(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 106750b7c; end: 106750d67; -[SCMapLocationContextFetcher .cxx_destruct] */

void FUN_106750b7c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106750d68; end: 106750dff;  */

void FUN_106750d68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfb8460(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cd6a8;
  _objc_alloc(PTR_PTR_1126cd6a8);
  uVar1 = param_1;
  func_0x00010c0d9da0(param_1);
  _objc_release(param_1);
  func_0x00010c015820((double)(int)uVar1,puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106750e00; end: 106750eff;  */

void FUN_106750e00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c09ec40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010beef440();
  FUN_106750fa4();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd6c0;
  _objc_alloc(PTR_PTR_1126cd6c0);
  uVar4 = param_2;
  func_0x00010bfb81c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar4;
  func_0x000109189508(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010c015680(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106750f00; end: 106750f9b;  */

void FUN_106750f00(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cd6c8;
  _objc_retain();
  _objc_alloc_init(puVar1);
  uVar2 = param_1;
  func_0x00010bfb8200(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x000100504554(uVar2,&PTR___NSConcreteGlobalBlock_110938c60);
  uVar4 = uVar3;
  func_0x00010c0d3c80();
  func_0x00010c19fd80(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106750f9c; end: 106750fa3;  */

void FUN_106750f9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c3094c(param_2,auStack_28,auStack_30);
  if ((int)param_2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126afad0;
    _objc_alloc_init(PTR_PTR_1126afad0);
    func_0x00010c1a85a0();
    func_0x00010c1c0fe0(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106750fa4; end: 106750fff;  */

void FUN_106750fa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((int)param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106751000; end: 10675114f;  */

void FUN_106751000(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126cd6d0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c27dd80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c26b700(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf8d020(param_2);
  uVar5 = param_2;
  func_0x00010bf9c920(param_2);
  func_0x00010c113c80(param_2);
  func_0x00010befd140();
  uVar6 = param_2;
  func_0x00010c26fd00(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar7 = PTR_PTR_1126cd6d8;
  _objc_alloc(PTR_PTR_1126cd6d8);
  uVar8 = uVar6;
  func_0x00010c294ce0(uVar6);
  func_0x00010c05f960((double)(int)uVar8,puVar7);
  func_0x00010c0561e0((double)(int)uVar4,(double)(int)uVar5,puVar1);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106751150; end: 10675120f; -[SCMapLocationContextObserver initWithLocationContextFetcher:owner:] */

undefined1 *
FUN_106751150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2e70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    _objc_retain();
    func_0x00010c126dc0(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106751210; end: 106751253; -[SCMapLocationContextObserver dealloc] */

void FUN_106751210(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c281a60();
  puStack_28 = PTR_PTR_1126f2e70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106751254; end: 10675129f; -[SCMapLocationContextObserver unobserve] */

void FUN_106751254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2821c0(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1067512a0; end: 1067512cb; -[SCMapLocationContextObserver .cxx_destruct] */

void FUN_1067512a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067512cc; end: 1067513af; -[SCMapLocationContextServiceProvider provide] */

void FUN_1067512cc(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cd6e0;
  _objc_alloc(PTR_PTR_1126cd6e0);
  func_0x00010c026c80();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067513b0; end: 1067513ef;  */

void FUN_1067513b0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be4f560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067513f0; end: 1067515cf; -[SCMapLocationContextServiceProvider _locationContextFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067513f0(long param_1,undefined8 param_2)

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
  
  lVar1 = param_1 + _DAT_11274f58c;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cd6e8;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11274f590;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + _DAT_11274f594;
  _objc_loadWeakRetained(lVar2);
  lVar7 = lVar2;
  func_0x00010c0d4240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11274f598;
  _objc_loadWeakRetained(lVar3);
  lVar8 = lVar3;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11274f59c;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010c0d78c0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11274f5a0;
  _objc_loadWeakRetained(param_1);
  lVar11 = param_1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058d80(puVar5,param_2,lVar6,lVar7,lVar4,lVar8,lVar10,lVar11);
  _objc_release(lVar11);
  _objc_release(param_1);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar3);
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar6);
  _objc_release(lVar1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067515d0; end: 1067515ef; -[SCMapLocationContextServiceProvider userNavigationScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067515d0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274f5a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067515f0; end: 106751603; -[SCMapLocationContextServiceProvider setUserNavigationScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067515f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274f5a4,param_3);
  return;
}



/* Entry: 106751604; end: 106751623; -[SCMapLocationContextServiceProvider snapchatterServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106751604(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11274f5a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106751624; end: 106751637; -[SCMapLocationContextServiceProvider setSnapchatterServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106751624(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274f5a0,param_3);
  return;
}



/* Entry: 106751638; end: 1067516ab; -[SCMapLocationContextServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106751638(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f5a0);
  _objc_destroyWeak(param_1 + _DAT_11274f59c);
  _objc_destroyWeak(param_1 + _DAT_11274f598);
  _objc_destroyWeak(param_1 + _DAT_11274f594);
  _objc_destroyWeak(param_1 + _DAT_11274f58c);
  _objc_destroyWeak(param_1 + _DAT_11274f590);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f5a4);
  return;
}



/* Entry: 1067516ac; end: 10675171f; -[UNISCMLCLocationContext initWithUnifiedGrpcService:] */

undefined1 * FUN_1067516ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2e78;
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



/* Entry: 106751720; end: 106751803; -[UNISCMLCLocationContext getLocationContextWithRequest:callOptionsBuilder:handler:] */

void FUN_106751720(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd6f0;
  _objc_opt_class(PTR_PTR_1126cd6f0);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5ad78,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106751804; end: 1067518e7; -[UNISCMLCLocationContext getGroupLocationContextWithRequest:callOptionsBuilder:handler:] */

void FUN_106751804(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd6f8;
  _objc_opt_class(PTR_PTR_1126cd6f8);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5ad98,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067518e8; end: 1067519cb; -[UNISCMLCLocationContext getFriendsIconsWithRequest:callOptionsBuilder:handler:] */

void FUN_1067518e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd700;
  _objc_opt_class(PTR_PTR_1126cd700);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5adb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1067519cc; end: 1067519d7; -[UNISCMLCLocationContext .cxx_destruct] */

void FUN_1067519cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067519d8; end: 106751a3f; +[SCMLCGetLocationContextRequest descriptor] */

void FUN_1067519d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5360,
                        &PTR____CFConstantStringClassReference_110e5add8,&PTR_DAT_11315c0f8,
                        &PTR_s_friendIdsArray_11315c1b0,2,0x10,0x1c);
    puRam00000001136c3d28 = puVar1;
  }
  return;
}



/* Entry: 106751a40; end: 106751aa7; +[SCMLCGetLocationContextResponse descriptor] */

void FUN_106751a40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af53b0,
                        &PTR____CFConstantStringClassReference_110e5adf8,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c1f0,2,0x10,0x1c);
    puRam00000001136c3d30 = puVar1;
  }
  return;
}



/* Entry: 106751aa8; end: 106751b0f; +[SCMLCFriendLocationContext descriptor] */

void FUN_106751aa8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5400,
                        &PTR____CFConstantStringClassReference_110e5ae18,&PTR_DAT_11315c0f8,
                        &PTR_s_friendId_11315c310,5,0x28,0x1c);
    puRam00000001136c3d38 = puVar1;
  }
  return;
}



/* Entry: 106751b10; end: 106751b9b; +[SCMLCLocationContextCaption descriptor] */

undefined * FUN_106751b10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5450,
                        &PTR____CFConstantStringClassReference_110e5ae38,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c630,10,0x50,0x1c);
    func_0x00010c229040();
    puRam00000001136c3d40 = puVar1;
  }
  return puRam00000001136c3d40;
}



/* Entry: 106751b9c; end: 106751c03; +[SCMLCGradient descriptor] */

void FUN_106751b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af54a0,
                        &PTR____CFConstantStringClassReference_110e5ae58,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c2b0,3,0x18,0x1c);
    puRam00000001136c3d48 = puVar1;
  }
  return;
}



/* Entry: 106751c04; end: 106751c6b; +[SCMLCTimeZoneInfo descriptor] */

void FUN_106751c04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af54f0,
                        &PTR____CFConstantStringClassReference_110e5ae78,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c110,1,8,0x1c);
    puRam00000001136c3d50 = puVar1;
  }
  return;
}



/* Entry: 106751c6c; end: 106751cd3; +[SCMLCNearbyFriendInfo descriptor] */

void FUN_106751c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5540,
                        &PTR____CFConstantStringClassReference_110e5ae98,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c130,1,0x10,0x1c);
    puRam00000001136c3d58 = puVar1;
  }
  return;
}



/* Entry: 106751cd4; end: 106751d3b; +[SCMLCWidgetContext descriptor] */

void FUN_106751cd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5590,
                        &PTR____CFConstantStringClassReference_110e5aeb8,&PTR_DAT_11315c0f8,
                        &PTR_s_lat_11315c3b0,5,0x20,0x1c);
    puRam00000001136c3d60 = puVar1;
  }
  return;
}



/* Entry: 106751d3c; end: 106751da3; +[SCMLCGetFriendsIconsRequest descriptor] */

void FUN_106751d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af55e0,
                        &PTR____CFConstantStringClassReference_110e5aed8,&PTR_DAT_11315c0f8,
                        &PTR_s_friendIdsArray_11315c150,1,0x10,0x1c);
    puRam00000001136c3d68 = puVar1;
  }
  return;
}



/* Entry: 106751da4; end: 106751e0b; +[SCMLCGetFriendsIconsResponse descriptor] */

void FUN_106751da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5630,
                        &PTR____CFConstantStringClassReference_110e5aef8,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c170,1,0x10,0x1c);
    puRam00000001136c3d70 = puVar1;
  }
  return;
}



/* Entry: 106751e0c; end: 106751e73; +[SCMLCFriendIcons descriptor] */

void FUN_106751e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5680,
                        &PTR____CFConstantStringClassReference_110e5af18,&PTR_DAT_11315c0f8,
                        &PTR_s_friendId_11315c450,5,0x20,0x1c);
    puRam00000001136c3d78 = puVar1;
  }
  return;
}



/* Entry: 106751e74; end: 106751edb; +[SCMLCFriendsFeedLocationContext descriptor] */

void FUN_106751e74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af56d0,
                        &PTR____CFConstantStringClassReference_110e5af38,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c4f0,5,0x20,0x1c);
    puRam00000001136c3d80 = puVar1;
  }
  return;
}



/* Entry: 106751edc; end: 106751f57; +[SCMLCIcon descriptor] */

undefined * FUN_106751edc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5720,
                        &PTR____CFConstantStringClassReference_110dac678,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c230,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c3d88 = puVar1;
  }
  return puRam00000001136c3d88;
}



/* Entry: 106751f58; end: 106751fbf; +[SCMLCGetGroupLocationContextRequest descriptor] */

void FUN_106751f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5770,
                        &PTR____CFConstantStringClassReference_110e5af58,&PTR_DAT_11315c0f8,
                        &PTR_s_userIdsArray_11315c190,1,0x10,0x1c);
    puRam00000001136c3d90 = puVar1;
  }
  return;
}



/* Entry: 106751fc0; end: 106752027; +[SCMLCGetGroupLocationContextResponse descriptor] */

void FUN_106751fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af57c0,
                        &PTR____CFConstantStringClassReference_110e5af78,&PTR_DAT_11315c0f8,
                        &PTR_DAT_11315c270,2,0x10,0x1c);
    puRam00000001136c3d98 = puVar1;
  }
  return;
}



/* Entry: 106752028; end: 10675208f; +[SCMLCGroupLocationContextCaption descriptor] */

void FUN_106752028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5810,
                        &PTR____CFConstantStringClassReference_110e5af98,&PTR_DAT_11315c0f8,
                        &PTR_s_userIdsArray_11315c590,5,0x28,0x1c);
    puRam00000001136c3da0 = puVar1;
  }
  return;
}



/* Entry: 106752090; end: 1067521a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106752090(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126cd708;
    _objc_alloc(PTR_PTR_1126cd708);
    lVar1 = param_1 + _DAT_11274f5b4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf523a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11274f5b8;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c26c760();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1 + _DAT_11274f5bc;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010bf9e360();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005e20(puVar7,param_2,lVar2,lVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067521a4; end: 106752203; -[SCMapMessagingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067521a4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274f5ac,0);
  _objc_destroyWeak(param_1 + _DAT_11274f5bc);
  _objc_destroyWeak(param_1 + _DAT_11274f5b8);
  _objc_destroyWeak(param_1 + _DAT_11274f5b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f5b0);
  return;
}



/* Entry: 106752204; end: 1067522cf; -[SCMapMessagesSender initWithCoreMessageSender:textMessageSender:externalMediaPreparer:] */

undefined1 *
FUN_106752204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f2e80;
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



/* Entry: 1067522d0; end: 106752687; -[SCMapMessagesSender sendMapSnapShareMessage:conversations:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_1067522d0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) && (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
    lVar2 = param_3;
    func_0x00010befd440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uStack_80 = (undefined *)0x0;
    }
    else {
      uStack_80 = PTR_PTR_1126be800;
      _objc_alloc();
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      lVar3 = param_3;
      func_0x00010befd440(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar4,param_2,lVar3);
      func_0x00010c051920(uStack_80,param_2,puVar4,0,param_6);
      _objc_release(puVar4);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cd718;
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_opt_new(puVar4);
    lVar2 = param_3;
    func_0x00010c259cc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20d1a0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c0c6c20(param_3);
    func_0x00010b67b220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c5440(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c102a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1de8c0(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126be930;
    _objc_opt_new();
    func_0x00010c1c1d00();
    puVar7 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c1fea60();
    lVar2 = param_3;
    func_0x00010c102a20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = 0x14;
    if (lVar2 == 0) {
      uVar1 = 0x15;
    }
    _objc_release();
    puVar8 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    lVar2 = param_3;
    func_0x00010c0c6c20(param_3);
    _objc_release(param_3);
    func_0x000107d6b2ec(lVar2);
    func_0x00010c02b8e0(puVar8,param_2,uVar1,lVar2);
    puVar9 = puVar8;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar10 = puVar7;
    func_0x00010bf63640(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar8,param_2,puVar10,4,puVar11,1);
    puVar12 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    func_0x00010c15c260(uVar5,param_2,puVar12,uStack_80,param_4,0,param_7,param_8);
    _objc_release(puVar12);
    _objc_release(uVar5);
    _objc_release(uStack_80);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106752688; end: 106752a9f; -[SCMapMessagesSender sendDropShare:conversations:platformAnalytics:completionQueue:completionHandler:] */

void FUN_106752688(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  
  if (((param_5 != 0) && (param_6 != 0)) && (param_7 != 0)) {
    uVar13 = *(undefined8 *)(param_3 + 8);
    _objc_retain(param_9);
    _objc_retain(param_8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd720;
    _objc_retain(param_7);
    _objc_retain(param_5);
    _objc_alloc_init(puVar1);
    func_0x00010bf51c80(param_5);
    func_0x00010c1b9520(puVar1);
    func_0x00010bf51c80(param_5);
    func_0x00010c1c0e80(param_2,puVar1);
    lVar2 = param_5;
    func_0x00010bf8aa80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dbb20(puVar1,param_4,lVar2);
    _objc_release(lVar2);
    lVar2 = param_5;
    func_0x00010c231c80(param_5);
    func_0x00010c190c20(puVar1,param_4,(uint)lVar2 ^ 1);
    lVar2 = param_5;
    func_0x00010c0fc060(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194460(puVar1,param_4,lVar2);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126bc778;
    _objc_opt_new();
    puVar4 = PTR_PTR_1126b0cd8;
    lVar2 = param_5;
    func_0x00010bf5b460(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar4,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar5 = puVar4;
    func_0x00010bfe5d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar3,param_4,puVar5);
    _objc_release(puVar5);
    func_0x00010c1dba80(puVar1,param_4,puVar3);
    puVar6 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    puVar5 = PTR_PTR_1126b0cd8;
    lVar2 = param_5;
    func_0x00010bf8aa20(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    func_0x00010bdc35c0(puVar5,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar7 = puVar5;
    func_0x00010bfe5d80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar6,param_4,puVar7);
    _objc_release(puVar7);
    func_0x00010c1dbac0(puVar1,param_4,puVar6);
    func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c185340(puVar1,param_4,(long)param_2);
    puVar7 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    puVar8 = puVar7;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c1fa0();
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar9 = puVar8;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar10 = puVar7;
    func_0x00010bf63640(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar8,param_4,puVar10,4,puVar11,1);
    puVar12 = puVar8;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    _objc_release(param_7);
    _objc_release(param_5);
    func_0x00010c15c280(uVar13,param_4,puVar12,param_6,0,param_8,param_9);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(param_6);
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar13);
    return;
  }
  return;
}



/* Entry: 106752aa0; end: 106752def; -[SCMapMessagesSender sendPlaceShareForPlaceID:additionalText:conversations:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_106752aa0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && ((lVar1 = param_4, func_0x00010c08fa60(), param_7 != 0 || (lVar1 == 0)))) {
    lVar1 = param_4;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      uStack_80 = (undefined *)0x0;
    }
    else {
      uStack_80 = PTR_PTR_1126be800;
      _objc_alloc();
      puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      func_0x00010c051920(uStack_80,param_2,puVar2,0,param_7);
      _objc_release(puVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cd728;
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_alloc_init();
    puVar4 = PTR_PTR_1126bc778;
    _objc_opt_new();
    puVar5 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    puVar6 = puVar5;
    func_0x00010bfe5d80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar4,param_2,puVar6);
    _objc_release(puVar6);
    func_0x00010c1dc3a0(puVar2,param_2,puVar4);
    puVar6 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    puVar7 = puVar6;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dc840();
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar8 = puVar7;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_6);
    _objc_release(puVar7);
    puVar7 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar9 = puVar6;
    func_0x00010bf63640(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar7,param_2,puVar9,4,puVar10,1);
    puVar11 = puVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c15c260(uVar3,param_2,puVar11,uStack_80,param_5,0,param_8,param_9);
    _objc_release(puVar11);
    _objc_release(uVar3);
    _objc_release(uStack_80);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106752df0; end: 106753043; -[SCMapMessagesSender sendLocationShareToConversationId:platformAnalytics:completionQueue:completionHandler:] */

void FUN_106752df0(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lStack_180;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  uVar14 = param_5;
  uVar15 = param_6;
  if (param_3 != 0) {
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd730;
    _objc_retain(param_4);
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    puVar3 = puVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bfc00();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar4 = puVar3;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar5 = puVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0();
    puVar7 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_4);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar14 = 0;
    puVar1 = puVar7;
    param_4 = puVar2;
    uVar15 = param_5;
    param_7 = param_6;
    func_0x00010c15c280(param_1);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  uVar16 = uVar15;
  if (puVar1 != (undefined *)0x0) {
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_7);
    _objc_retain(uVar15);
    _objc_retain(uVar14);
    _objc_retain(puVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cd738;
    _objc_retain(uVar14);
    _objc_alloc_init();
    func_0x00010c21acc0();
    puVar3 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    puVar4 = puVar3;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf860();
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar5 = puVar4;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010bf63640(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0();
    puVar8 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(uVar14);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar14 = 0;
    puVar2 = puVar8;
    param_4 = puVar3;
    func_0x00010c15c280(param_1);
    _objc_release(param_7);
    _objc_release(uVar15);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  uVar15 = uVar14;
  uVar17 = uVar16;
  if (puVar2 != (undefined *)0x0) {
    lStack_180 = *(long *)(param_1 + 8);
    _objc_retain(uVar16);
    _objc_retain(uVar14);
    _objc_retain(puVar2);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd740;
    _objc_alloc_init();
    func_0x00010c20a500();
    puVar3 = PTR_PTR_1126be6c0;
    _objc_alloc_init();
    func_0x00010c1bfdc0();
    puVar4 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    func_0x00010c20a420();
    puVar5 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar6 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar7 = puVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0();
    puVar9 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar1);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uVar15 = 0;
    puVar1 = puVar9;
    param_4 = puVar3;
    uVar17 = uVar14;
    func_0x00010c15c280(lStack_180);
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(puVar3);
    _objc_release(puVar9);
    param_1 = lStack_180;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  if (puVar1 != (undefined *)0x0) {
    _objc_retain();
    _objc_retain(param_8);
    _objc_retain(uVar17);
    _objc_retain(uVar15);
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = puVar3;
    func_0x0001086063f4(puVar3,param_4,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b1a40;
    _objc_opt_new();
    puVar1 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c2b9b80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd748;
    _objc_retain(uVar17);
    _objc_retain(uVar15);
    _objc_retain(puVar5);
    _objc_alloc_init(puVar1);
    puVar6 = PTR_PTR_1126bc778;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    puVar8 = puVar7;
    func_0x00010bfe5d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar6);
    _objc_release(puVar8);
    func_0x00010c223e00(puVar1);
    func_0x00010c223de0(puVar1);
    _objc_release(uVar17);
    puVar8 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    puVar9 = puVar8;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcea0();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar10 = puVar9;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar11 = puVar8;
    func_0x00010bf63640(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf21f60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar9);
    puVar13 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(uVar17);
    _objc_release(uVar15);
    func_0x00010c15c280(uVar14);
    _objc_release(lStack_180);
    _objc_release(param_8);
    _objc_release(puVar13);
    _objc_release(uVar14);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106753044; end: 1067532d7; -[SCMapMessagesSender sendLocationCardMessageToConversationId:type:platformAnalytics:completionQueue:completionHandler:] */

void FUN_106753044(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_100;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  uVar10 = param_6;
  if (param_3 != 0) {
    param_1 = *(long *)(param_1 + 8);
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd738;
    _objc_retain(param_5);
    _objc_alloc_init();
    func_0x00010c21acc0();
    puVar2 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    puVar3 = puVar2;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf860();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar4 = puVar3;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar5 = puVar2;
    func_0x00010bf63640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0();
    puVar7 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_5);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    param_5 = 0;
    puVar1 = puVar7;
    param_4 = puVar2;
    func_0x00010c15c280(param_1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  uVar15 = param_5;
  uVar16 = uVar10;
  if (puVar1 != (undefined *)0x0) {
    lStack_100 = *(long *)(param_1 + 8);
    _objc_retain(uVar10);
    _objc_retain(param_5);
    _objc_retain(puVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126cd740;
    _objc_alloc_init();
    func_0x00010c20a500();
    puVar3 = PTR_PTR_1126be6c0;
    _objc_alloc_init();
    func_0x00010c1bfdc0();
    puVar4 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    func_0x00010c20a420();
    puVar5 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar6 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar7 = puVar4;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar5;
    func_0x00010bf21f60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0();
    puVar9 = puVar6;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar15 = 0;
    puVar2 = puVar9;
    param_4 = puVar3;
    uVar16 = param_5;
    func_0x00010c15c280(lStack_100);
    _objc_release(uVar10);
    _objc_release(param_5);
    _objc_release(puVar3);
    _objc_release(puVar9);
    param_1 = lStack_100;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  if (puVar2 != (undefined *)0x0) {
    _objc_retain();
    _objc_retain(param_8);
    _objc_retain(uVar16);
    _objc_retain(uVar15);
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x0001086063f4(puVar1,param_4,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = PTR_PTR_1126b1a40;
    _objc_opt_new();
    puVar1 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c2b9b80(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd748;
    _objc_retain(uVar16);
    _objc_retain(uVar15);
    _objc_retain(puVar5);
    _objc_alloc_init(puVar1);
    puVar6 = PTR_PTR_1126bc778;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    puVar8 = puVar7;
    func_0x00010bfe5d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar6);
    _objc_release(puVar8);
    func_0x00010c223e00(puVar1);
    func_0x00010c223de0(puVar1);
    _objc_release(uVar16);
    puVar8 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    puVar9 = puVar8;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcea0();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar11 = puVar9;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar12 = puVar8;
    func_0x00010bf63640(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf21f60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar9);
    puVar14 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(uVar16);
    _objc_release(uVar15);
    func_0x00010c15c280(uVar10);
    _objc_release(lStack_100);
    _objc_release(param_8);
    _objc_release(puVar14);
    _objc_release(uVar10);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1067532d8; end: 106753503; -[SCMapMessagesSender sendLocationStatusAcceptedRequestToConversationId:isLiveRequest:completionQueue:completionHandler:] */

void FUN_1067532d8(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lStack_80;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined *)0x0;
  uVar15 = param_5;
  uVar16 = param_6;
  if (param_3 != 0) {
    lStack_80 = *(long *)(param_1 + 8);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd740;
    _objc_alloc_init();
    func_0x00010c20a500();
    puVar2 = PTR_PTR_1126be6c0;
    _objc_alloc_init();
    func_0x00010c1bfdc0();
    puVar3 = PTR_PTR_1126ba668;
    _objc_alloc_init();
    func_0x00010c20a420();
    puVar4 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar5 = PTR_PTR_1126be6d0;
    _objc_alloc();
    puVar6 = puVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0();
    puVar8 = puVar5;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar15 = 0;
    puVar1 = puVar8;
    param_4 = puVar2;
    uVar16 = param_5;
    func_0x00010c15c280(lStack_80);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(puVar2);
    _objc_release(puVar8);
    param_1 = lStack_80;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  if (puVar1 != (undefined *)0x0) {
    _objc_retain();
    _objc_retain(param_8);
    _objc_retain(uVar16);
    _objc_retain(uVar15);
    _objc_retain(puVar1);
    puVar2 = puVar1;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar4 = puVar3;
    func_0x0001086063f4(puVar3,param_4,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b1a40;
    _objc_opt_new();
    puVar1 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    func_0x00010c2b9b80(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126cd748;
    _objc_retain(uVar16);
    _objc_retain(uVar15);
    _objc_retain(puVar5);
    _objc_alloc_init(puVar1);
    puVar6 = PTR_PTR_1126bc778;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar15);
    puVar8 = puVar7;
    func_0x00010bfe5d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar6);
    _objc_release(puVar8);
    func_0x00010c223e00(puVar1);
    func_0x00010c223de0(puVar1);
    _objc_release(uVar16);
    puVar8 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    puVar10 = puVar8;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcea0();
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar11 = puVar10;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar12 = puVar8;
    func_0x00010bf63640(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar11;
    func_0x00010bf21f60(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar10);
    puVar14 = puVar10;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar1);
    _objc_release(uVar16);
    _objc_release(uVar15);
    func_0x00010c15c280(uVar9);
    _objc_release(lStack_80);
    _objc_release(param_8);
    _objc_release(puVar14);
    _objc_release(uVar9);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106753504; end: 1067538c3; -[SCMapMessagesSender sendVisitedByCardToConversations:recipientCount:visitedByUserId:placesId:source:completionQueue:completionHandler:] */

void FUN_106753504(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  
  if (param_3 != 0) {
    _objc_retain();
    _objc_retain(param_8);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf50b20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf026a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar3 = lVar2;
    func_0x0001086063f4(lVar2,param_4,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126b1a40;
    _objc_opt_new();
    puVar5 = puVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c2b9b80(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2ac2e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126cd748;
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(puVar6);
    _objc_alloc_init(puVar5);
    puVar8 = PTR_PTR_1126bc778;
    _objc_opt_new();
    puVar9 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    puVar10 = puVar9;
    func_0x00010bfe5d80(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar8);
    _objc_release(puVar10);
    func_0x00010c223e00(puVar5);
    func_0x00010c223de0(puVar5);
    _objc_release(param_6);
    puVar10 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    puVar11 = puVar10;
    func_0x00010c22a700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dcea0();
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar12 = puVar11;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar11);
    puVar11 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar13 = puVar10;
    func_0x00010bf63640(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = puVar12;
    func_0x00010bf21f60(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar11);
    puVar15 = puVar11;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar14);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(param_6);
    _objc_release(param_5);
    func_0x00010c15c280(uVar7);
    _objc_release(param_9);
    _objc_release(param_8);
    _objc_release(puVar15);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1067538c4; end: 1067538ff; -[SCMapMessagesSender .cxx_destruct] */

void FUN_1067538c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106753900; end: 106753973; -[UNIValhalla initWithUnifiedGrpcService:] */

undefined1 * FUN_106753900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2e88;
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



/* Entry: 106753974; end: 106753a57; -[UNIValhalla getRouteWithRequest:callOptionsBuilder:handler:] */

void FUN_106753974(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae988;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR_PTR_1126cd750;
  _objc_opt_class(PTR_PTR_1126cd750);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e5afb8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106753a58; end: 106753a63; -[UNIValhalla .cxx_destruct] */

void FUN_106753a58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106753a64; end: 106753aaf;  */

void FUN_106753a64(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc1b8;
  func_0x000106b13b74(PTR_PTR_1126bc1b8,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eeba0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106753ab0; end: 106753b57;  */

void FUN_106753ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c09abc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cd758;
  _objc_retain();
  _objc_alloc_init(puVar1);
  func_0x00010c08b3c0(param_3);
  func_0x00010c1b9120(puVar1);
  func_0x00010c0b55a0(param_3);
  _objc_release(param_3);
  func_0x00010c1be5e0(param_1,puVar1);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126cd760;
  _objc_alloc_init(PTR_PTR_1126cd760);
  func_0x00010c1be5a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106753b58; end: 106753cc3;  */

void FUN_106753b58(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126cd768;
  _objc_retain();
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126cd770;
  _objc_alloc_init(PTR_PTR_1126cd770);
  uVar3 = param_1;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2807e0();
  func_0x00010c21b940(puVar2);
  _objc_release(uVar3);
  func_0x00010c19ec40(puVar2);
  uVar3 = param_1;
  func_0x00010c0ec860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf52900();
  func_0x00010c184640(puVar2);
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x00010c0ec860(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = uVar3;
  func_0x00010c09f9e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x000100504554();
  uVar6 = uVar5;
  func_0x00010c0d3c80();
  _objc_release(uVar5);
  func_0x00010c1bff20(puVar2);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010c1d5fe0(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106753cc4; end: 106753d47;  */

void FUN_106753cc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf7f140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c142100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100504554();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126cd790;
  _objc_alloc(PTR_PTR_1126cd790);
  func_0x00010c028400();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106753d48; end: 106753eb3;  */

void FUN_106753d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126cd788;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c08fa20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar4 = uVar3;
  func_0x00010c262900(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cd778;
  _objc_retain();
  _objc_alloc(puVar5);
  func_0x00010c08fa60(uVar4);
  uVar7 = param_1;
  func_0x00010c26f000(uVar4);
  _objc_release(uVar4);
  func_0x00010c022680(param_1,uVar7,puVar5);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126cd780;
  _objc_alloc(PTR_PTR_1126cd780);
  uVar4 = uVar3;
  func_0x00010c22a600(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c04f780(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar5);
  func_0x00010c022120(puVar1);
  _objc_release(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106753eb4; end: 106753f37;  */

void FUN_106753eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b2028;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0590a0();
  _objc_release(param_2);
  puVar2 = PTR_PTR_1126b2030;
  _objc_alloc(PTR_PTR_1126b2030);
  func_0x00010c0321a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106753f38; end: 106753faf;  */

void FUN_106753f38(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _CLLocationCoordinate2DIsValid();
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b20e0;
    _objc_alloc(PTR_PTR_1126b20e0);
    func_0x00010c021a60(param_1,param_2);
    puVar2 = PTR_PTR_1126b20e8;
    _objc_alloc(PTR_PTR_1126b20e8);
    func_0x00010c026580();
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106753fb0; end: 106754053; -[SCMapNavigationRouteFetcher initWithUnifiedGRPCClientFactory:workerQueue:] */

undefined1 *
FUN_106753fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2e90;
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



/* Entry: 106754054; end: 10675413f; -[SCMapNavigationRouteFetcher mapNavigationRouteGRPCService] */

void FUN_106754054(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 == 0) {
    puVar1 = PTR_PTR_1126ae728;
    func_0x00010bf24820(PTR_PTR_1126ae728);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196320();
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c214be0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c17ca40(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bc1b8;
    func_0x000106b13ab0(PTR_PTR_1126bc1b8,&PTR____CFConstantStringClassReference_110e5afd8,
                        *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd798;
    _objc_alloc();
    func_0x00010c058f80();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar3;
    _objc_release(uVar4);
    _objc_release(puVar2);
    _objc_release(puVar1);
    lVar5 = *(long *)(param_1 + 0x18);
  }
  _objc_retain(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 106754140; end: 106754237; -[SCMapNavigationRouteFetcher getRouteWithRequest:handler:] */

void FUN_106754140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0b95e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  FUN_106753b58(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  FUN_106753a64();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106754238;
  puStack_40 = &UNK_110938da0;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bfc9ae0(param_1,param_2,uVar1,param_3,&puStack_58);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106754238; end: 10675429b;  */

void FUN_106754238(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000106754260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  FUN_106753cc4(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10675429c; end: 1067544b3; -[SCMapNavigationRouteFetcher getRouteWithStartLocation:endLocation:routeMode:completion:] */

void FUN_10675429c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_8;
  _objc_retain();
  FUN_106753f38(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_106753f38(param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (lVar2 == 0)) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72040(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar5;
    (**(code **)(param_8 + 0x10))(param_8,0);
    _objc_release(param_8);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4000(puVar5);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010c294b00();
    _objc_release(puVar4);
    FUN_106753eb4(param_7,puVar5,(uint)puVar3 ^ 1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_7;
    func_0x00010bfc9b00(param_5);
    _objc_release(param_8);
    _objc_release(param_7);
  }
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined **)(lVar1 + 0x18) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar6);
  return;
}



/* Entry: 1067544b4; end: 1067544e3; -[SCMapNavigationRouteFetcher setMapNavigationRouteGRPCService:] */

void FUN_1067544b4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1067544e4; end: 10675451f; -[SCMapNavigationRouteFetcher .cxx_destruct] */

void FUN_1067544e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106754520; end: 106754603; -[SCMapNavigationServiceProvider provide] */

void FUN_106754520(undefined8 param_1)

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
  puVar2 = PTR_PTR_1126cd7a0;
  _objc_alloc(PTR_PTR_1126cd7a0);
  func_0x00010c02ea20();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106754604; end: 106754643;  */

void FUN_106754604(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be624e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106754644; end: 106754737; -[SCMapNavigationServiceProvider _navigationRouteFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106754644(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + _DAT_11274f5dc;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf0c120();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126cd7a8;
  _objc_alloc(PTR_PTR_1126cd7a8);
  param_1 = param_1 + _DAT_11274f5e0;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058e40(puVar5,param_2,lVar1,lVar4);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 106754738; end: 1067547f7; -[SCMapNavigationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106754738(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f5dc);
  _objc_destroyWeak(param_1 + _DAT_11274f5e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f5e4);
  return;
}



/* Entry: 1067547f8; end: 10675480f;  */

uint FUN_1067547f8(uint param_1)

{
  return (uint)(param_1 < 0xc) & 0xfbfU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 106754810; end: 10675488b;  */

undefined * FUN_106754810(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3db0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5b058,
                        &UNK_10dddea44,&UNK_10dddea58,2,FUN_10675488c,0);
    do {
      if (puRam00000001136c3db0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3db0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3db0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3db0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3db0;
}



/* Entry: 10675488c; end: 106754897;  */

bool FUN_10675488c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106754898; end: 106754913;  */

undefined * FUN_106754898(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c3db8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e5b078,
                        &UNK_10dddea60,&UNK_10dddea6c,2,FUN_106754914,0);
    do {
      if (puRam00000001136c3db8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c3db8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c3db8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c3db8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c3db8;
}



/* Entry: 106754914; end: 106754923;  */

bool FUN_106754914(int param_1)

{
  return param_1 == 0 || param_1 == 3;
}



/* Entry: 106754924; end: 1067549af; +[LatLng descriptor] */

undefined * FUN_106754924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c3dc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112af5a40,
                        &PTR____CFConstantStringClassReference_110e5b098,&PTR_DAT_11315c848,
                        &PTR_s_lat_11315c920,2,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c3dc0 = puVar1;
  }
  return puRam00000001136c3dc0;
}


