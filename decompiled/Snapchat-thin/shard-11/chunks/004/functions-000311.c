/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1085f22d0; end: 1085f240b; -[SCTalkManager setCallingToPauseIfNeeded:] */

void FUN_1085f22d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16c1e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar2 = *(long *)(param_1 + 0x70);
  func_0x00010c160780();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar1;
  func_0x00010bfb2040(lVar1,param_2,&PTR___NSConcreteGlobalBlock_110a5ad38);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    func_0x00010c287e20(lVar3,param_2,param_3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1085f240c; end: 1085f245f; -[SCTalkManager powerStateDidChange:] */

void FUN_1085f240c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined1 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1085f2460;
  puStack_20 = &UNK_110a5ad58;
  uStack_18 = param_3;
  func_0x00010c142ca0(*(undefined8 *)(param_1 + 0x68),param_2,&puStack_38);
  return;
}



/* Entry: 1085f2460; end: 1085f246b;  */

void FUN_1085f2460(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e5b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_onPowerStateChangeWithConnected__1126170e0,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085f246c; end: 1085f265f; -[SCTalkManager dismissCallsOtherThanTalkContext:] */

void FUN_1085f246c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c160780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(lVar2);
        }
        uVar11 = *(ulong *)(lStack_128 + lVar10 * 8);
        uVar3 = uVar11;
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c2688a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf4e8a0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_3;
        func_0x00010bf4e8a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar5;
        func_0x00010c0720c0(uVar5,param_2,lVar6);
        _objc_release(lVar6);
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((uVar7 & 1) == 0) {
          func_0x00010c296d80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c288f80();
          _objc_release(uVar11);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = *(undefined8 *)(param_3 + 0x70);
  func_0x00010c160760(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288f80();
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1085f2660; end: 1085f26b7; -[SCTalkManager endCallForTalkContext:] */

void FUN_1085f2660(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c160760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c288f80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085f26b8; end: 1085f26f3; -[SCTalkManager injectFrame:] */

void FUN_1085f26b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085f26f4; end: 1085f2703; -[SCTalkManager _isInvalidated] */

bool FUN_1085f26f4(long param_1)

{
  return *(long *)(param_1 + 8) == 0;
}



/* Entry: 1085f2704; end: 1085f27df; -[SCTalkManager _decryptSealedEnvelope:] */

void FUN_1085f2704(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  puVar3 = (undefined *)0x0;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(param_3);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf67800();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar2);
    uVar2 = uVar1;
    func_0x00010bf679e0();
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    if ((int)uVar2 == 0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      uVar2 = uVar1;
      func_0x00010bf67980(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uStack_38 = 0;
      func_0x00010bdc1900(puVar3,param_2,uVar2,0,&uStack_38);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085f27e0; end: 1085f28b3; -[SCTalkManager .cxx_destruct] */

void FUN_1085f27e0(long param_1)

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



/* Entry: 1085f28b4; end: 1085f2957; -[SCTalkNotificationsControllerImpl initWithHeadlessSessionController:currentPageTracker:] */

undefined1 *
FUN_1085f28b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd090;
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



/* Entry: 1085f2958; end: 1085f295f; -[SCTalkNotificationsControllerImpl notificationProcessor] */

void FUN_1085f2958(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0dc770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_notificationProcessor_112614bf0);
  return;
}



/* Entry: 1085f2960; end: 1085f29c7; -[SCTalkNotificationsControllerImpl handlePushKitIncomingCallNotification:withCompletionHandler:] */

void FUN_1085f2960(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c24fc40(uVar1,param_2,0x1e);
  func_0x00010bfd22a0(*(undefined8 *)(param_1 + 8),param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085f29c8; end: 1085f29cf; -[SCTalkNotificationsControllerImpl invalidate] */

void FUN_1085f29c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 1085f29d0; end: 1085f2a37; -[SCTalkNotificationsControllerImpl setModularCallLauncher:] */

void FUN_1085f29d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c1c8e80(uVar1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf27fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8e80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1085f2a38; end: 1085f2a67; -[SCTalkNotificationsControllerImpl .cxx_destruct] */

void FUN_1085f2a38(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085f2a68; end: 1085f2b63; -[SCTalkPresenceServiceDelegateImpl initWithPresenceStateProvider:callStateProvider:platformActiveConversationsInfoObservableProvider:performer:] */

undefined1 *
FUN_1085f2a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126fd098;
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



/* Entry: 1085f2b64; end: 1085f2cbf; -[SCTalkPresenceServiceDelegateImpl initializeActiveConversationsObservableForTSMode] */

void FUN_1085f2b64(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x30) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0fe1a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_58,auStack_48);
    uVar3 = uVar1;
    uStack_50 = param_2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1085f2cc0; end: 1085f2d53;  */

void FUN_1085f2cc0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cb80();
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28cb80();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f2d54; end: 1085f2d9b; -[SCTalkPresenceServiceDelegateImpl dealloc] */

void FUN_1085f2d54(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x30));
  puStack_28 = PTR_PTR_1126fd098;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085f2d9c; end: 1085f2dfb; -[SCTalkPresenceServiceDelegateImpl .cxx_destruct] */

void FUN_1085f2d9c(long param_1)

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



/* Entry: 1085f2dfc; end: 1085f2e6f; -[SCTalkRTCAudioSessionDelegateImpl_v141 initWithCrashLogger:] */

undefined1 * FUN_1085f2dfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fd0a0;
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



/* Entry: 1085f2e70; end: 1085f2f23; -[SCTalkRTCAudioSessionDelegateImpl_v141 audioSession:audioUnitStartFailedWithError:] */

void FUN_1085f2e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b3e90;
  if (*(long *)(param_1 + 8) != 0) {
    _objc_retain(param_4);
    _objc_alloc_init(puVar1);
    uVar3 = param_4;
    func_0x00010bf3ec40(param_4);
    _objc_release(param_4);
    func_0x00010b7ea704(puVar1,uVar3);
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar2 = PTR_PTR_1126b3e98;
    func_0x00010bf60460(PTR_PTR_1126b3e98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c133420(uVar3);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1085f2f24; end: 1085f2f2f; -[SCTalkRTCAudioSessionDelegateImpl_v141 .cxx_destruct] */

void FUN_1085f2f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085f2f30; end: 1085f36e7; -[SCTalkSessionProvider initWithTalkCoreProvider:bitmojiFlatlandInfoProvider:screenCaptureServices:chatTransportServices:identityServices:talkContextMutableFactory:cameraServices:networkServices:callKitCallManager:notificationPool:callStateProvider:valdiRuntimeProvider:networkConnectivityMonitorServices:applicationLifecycleEvents:friendsFeedGraphene:presenceRenderGrapheneLogger:talkCoreDispatcher:rendererManagerBridge:errorReporter:localFrameProvider:networkInfo:callOpsDataProvider:audioManager:grapheneLogger:circumstanceEngine:plusFeatureGating:plusFeatureLogging:callSuperResolutionServices:callPageConfig:platformPresenceServiceProvider:talkIntentDonator:currentPageTracker:crashLogger:] */

undefined8 *
FUN_1085f2f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
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
  _objc_retain(param_34);
  _objc_retain();
  puStack_70 = PTR_PTR_1126fd0a8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[10];
    puVar1[10] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[8];
    puVar1[8] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[9];
    puVar1[9] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 5,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_12;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 6,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_30);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_30;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_33);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_33;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_34;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_35;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 4) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c2a2b60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x26];
    puVar1[0x26] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,puVar1);
    uVar4 = puVar1[0x1b];
    func_0x00010c2a6fe0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    uVar2 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(param_35);
  _objc_release(param_34);
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



/* Entry: 1085f36e8; end: 1085f371f;  */

void FUN_1085f36e8(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf86e40(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f3720; end: 1085f3767; -[SCTalkSessionProvider dealloc] */

void FUN_1085f3720(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x130));
  puStack_28 = PTR_PTR_1126fd0a8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085f3768; end: 1085f3a43; -[SCTalkSessionProvider disposeWithReason:] */

void FUN_1085f3768(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bf51e00();
  lVar3 = lVar2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar4);
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar3);
        }
        uVar7 = *(undefined8 *)(lStack_1a8 + lVar11 * 8);
        uVar4 = uVar7;
        func_0x00010c296d80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1909a0();
        _objc_release(uVar4);
        func_0x00010c296d80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf86d40();
        _objc_release(uVar7);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  lVar9 = *(long *)(param_1 + 0x18);
  func_0x00010bf51e00();
  lVar2 = lVar9;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar11 = *plStack_1e0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1e0 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        uVar8 = *(ulong *)(lStack_1e8 + lVar10 * 8);
        uVar5 = uVar8;
        func_0x00010bf86e60();
        if ((uVar5 & 1) == 0) {
          func_0x00010bf86d40(uVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      lVar2 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_1f0,auStack_168,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x18));
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x120));
  cVar1 = *(char *)(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x128) = 0;
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x10));
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar4);
  _os_unfair_lock_unlock(param_1 + 0x20);
  if (cVar1 == '\x01') {
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d5c0();
    _objc_release(puVar6);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_lock(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  func_0x00010bf51e00(uVar4);
  _os_unfair_lock_unlock(lVar3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1085f3a44; end: 1085f3a93; -[SCTalkSessionProvider sessionWrappers] */

void FUN_1085f3a44(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf51e00(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085f3a94; end: 1085f3b2b; -[SCTalkSessionProvider sessionWrapperForTalkContext:] */

void FUN_1085f3a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1085f3b2c; end: 1085f3d3f; -[SCTalkSessionProvider createTalkChatSessionForConvoId:convoMetadata:dependencies:delegate:completion:] */

void FUN_1085f3b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183be0();
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c0f98a0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_68);
    _objc_retain(param_3);
    _objc_retain(param_5);
    _objc_retain(param_6);
    _objc_retain(param_7);
    uStack_70 = param_2;
    func_0x00010c12a2e0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_68);
  }
  else {
    (**(code **)(param_7 + 0x10))(param_7,0);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f3d40; end: 1085f3e6f;  */

void FUN_1085f3d40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdf4840(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f3e70; end: 1085f4153; -[SCTalkSessionProvider createModularCallSessionForTalkContext:callIntent:selectedLensInfoObservable:appliedLensObservable:sharedLensController:delegate:sourceType:talkManager:completion:] */

void FUN_1085f3e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,long param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf517c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183be0(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_initWeak(auStack_70,param_1);
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_12);
    uStack_78 = param_2;
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_11);
    _objc_retain(param_5);
    _objc_retain(param_8);
    func_0x00010bf54ee0(param_1);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_11);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_12);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(param_12 + 0x10))(param_12,0);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f4154; end: 1085f42a7;  */

void FUN_1085f4154(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (param_2 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0);
  }
  else {
    func_0x00010c169ac0(param_2);
    func_0x00010c1ff020(param_2);
    lVar7 = *(long *)(param_1 + 0x48);
    puVar2 = PTR_PTR_1126da6a0;
    _objc_alloc(PTR_PTR_1126da6a0);
    uVar3 = *(undefined8 *)(lVar1 + 0x78);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1 + 0x28;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0456e0(puVar2);
    (**(code **)(lVar7 + 0x10))(lVar7,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f42a8; end: 1085f4483; -[SCTalkSessionProvider createPipCallSessionForTalkContext:completion:] */

void FUN_1085f42a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010bf5e540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf517c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183be0(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    puVar6 = PTR_PTR_1126cf828;
    func_0x00010c13d1c0(PTR_PTR_1126cf828);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    uStack_60 = param_2;
    func_0x00010bf54ee0(param_1);
    _objc_release(puVar6);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f4484; end: 1085f454b;  */

void FUN_1085f4484(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 == 0) || (param_2 == 0)) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  }
  else {
    puVar2 = PTR_PTR_1126da6a8;
    _objc_alloc(PTR_PTR_1126da6a8);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c045720(puVar2);
    _objc_release(uVar3);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f454c; end: 1085f4717; -[SCTalkSessionProvider createHeadlessSessionForTalkContext:callIntent:remoteUserIds:delegate:sourceType:withCallKit:completion:] */

void FUN_1085f454c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    uVar2 = param_3;
    func_0x00010bf5e540(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf51800(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf517c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183be0(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_retain(param_9);
    _objc_retain(param_6);
    func_0x00010bf54ee0(param_1);
    _objc_release(param_6);
    _objc_release(param_9);
    _objc_release(uVar2);
  }
  else {
    (**(code **)(param_9 + 0x10))(param_9,0);
  }
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f4718; end: 1085f479b;  */

void FUN_1085f4718(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x28);
  if (param_2 == 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,0);
  }
  else {
    puVar1 = PTR_PTR_1126da6b0;
    _objc_alloc(PTR_PTR_1126da6b0);
    func_0x00010c045700();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f479c; end: 1085f4ba3; -[SCTalkSessionProvider createCallingSessionWrapper:remoteUserIds:callIntent:sourceType:withCallKit:completion:] */

void FUN_1085f479c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  func_0x00010bec8220(param_1);
  func_0x00010bec8700(param_1);
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar6 = *(undefined **)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (puVar6 == (undefined *)0x0) {
    uVar2 = param_3;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar7;
    func_0x00010c074920();
    _objc_release(uVar7);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cf818;
    func_0x00010bf28880(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar6;
    func_0x00010c2ac480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar2);
    _objc_release(puVar3);
    _objc_release(puVar6);
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126da6b8;
    lVar4 = param_1;
    func_0x00010bdebb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfbc3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaf00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_initWeak(auStack_70,*(undefined8 *)(param_1 + 0x80));
    puVar3 = puVar6;
    func_0x00010bfbc3e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1085f4ba4;
    puStack_90 = &UNK_110a5ae08;
    _objc_copyWeak(auStack_80,auStack_70);
    uStack_78 = (undefined1)uVar1;
    _objc_retain(param_5);
    uStack_88 = param_5;
    func_0x00010c297260(puVar3);
    _objc_release(puVar3);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_3;
    func_0x00010bf4e8a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar7);
    _objc_release(uVar2);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_initWeak(auStack_70,param_1);
  puVar3 = puVar6;
  func_0x00010bfbc3e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b8,auStack_70);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_retain(puVar6);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uStack_b0 = param_2;
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297280(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(puVar6);
  _objc_release(param_3);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_70);
  _objc_release(puVar6);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f4ba4; end: 1085f4c53;  */

void FUN_1085f4ba4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cf818;
  if (param_3 == 0) {
    func_0x00010bf28820(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf28860();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar2;
  func_0x00010c2ac480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b35a0(lVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f4c54; end: 1085f4d57;  */

void FUN_1085f4c54(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010be41400();
  if (((param_2 == 0) || (param_3 != 0)) || (lVar5 = param_2, (int)lVar3 != 0)) {
    _os_unfair_lock_lock(lVar1 + 0x20);
    lVar3 = *(long *)(lVar1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf4e8a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = *(long *)(param_1 + 0x28);
    _objc_release();
    _objc_release(uVar2);
    if (lVar3 == lVar5) {
      uVar4 = *(undefined8 *)(lVar1 + 8);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4e8a0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0(uVar4);
      _objc_release(uVar2);
    }
    _os_unfair_lock_unlock(lVar1 + 0x20);
    func_0x00010be41400(*(undefined8 *)(param_1 + 0x30));
    lVar5 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f4d58; end: 1085f4e2b; -[SCTalkSessionProvider isSessionActiveForTalkContext:] */

bool FUN_1085f4d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(uVar1);
  lVar3 = lVar2;
  func_0x00010c268a40(lVar2);
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
  return lVar3 == 2;
}



/* Entry: 1085f4e2c; end: 1085f50a3; -[SCTalkSessionProvider sessionWrapperDestroyed:] */

void FUN_1085f4e2c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be41400();
  if ((uVar1 & 1) == 0) {
    _os_unfair_lock_lock(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 8);
    uVar2 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4e8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar11,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bf6e200(*(undefined8 *)(param_1 + 0xd0),param_2,param_3);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4e8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0(uVar11,param_2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c3c0(param_3,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    lVar4 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12e320(lVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar6 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cf818;
    func_0x00010bf28840(PTR_PTR_1126cf818);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c2688a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5e540();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar3;
    func_0x00010bf51800();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar11;
    func_0x00010c074920();
    uVar9 = param_3;
    func_0x00010bf27f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar7;
    func_0x00010c2ac480(puVar7,param_2,uVar8,uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b35a0(uVar6,param_2,puVar10);
    _objc_release(puVar10);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _os_unfair_lock_unlock(param_1 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1085f50a4; end: 1085f5117; -[SCTalkSessionProvider _reachabilityChanged:] */

void FUN_1085f50a4(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 4) {
    func_0x00010c268920();
    func_0x00010c142ca0(*(undefined8 *)(param_1 + 0x108));
  }
  return;
}



/* Entry: 1085f5118; end: 1085f5123;  */

void FUN_1085f5118(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_onConnectivityNetworkTypeChangeW_112616668,
             *(undefined4 *)(param_1 + 0x28));
  return;
}



/* Entry: 1085f5124; end: 1085f5213; -[SCTalkSessionProvider _thermalStateChanged] */

void FUN_1085f5124(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  _objc_retain(uVar1);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_2;
  func_0x00010bf850c0(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1085f5214; end: 1085f52af;  */

void FUN_1085f5214(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c142ca0(uVar1);
  _objc_destroyWeak(auStack_40);
  return;
}



/* Entry: 1085f52b0; end: 1085f531b;  */

void FUN_1085f52b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  _objc_retain(param_2);
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26d100();
  _objc_release(puVar1);
  func_0x00010c0e71e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f531c; end: 1085f566f; -[SCTalkSessionProvider _createTalkChatSessionForConvoId:dependencies:remoteParticipants:delegate:completion:] */

void FUN_1085f531c(long param_1,undefined **param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,long param_7)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **unaff_x26;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 auStack_220 [8];
  undefined *puStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined1 auStack_148 [8];
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_3);
  ppuStack_198 = param_4;
  _objc_retain(param_4);
  ppuStack_1a0 = param_5;
  _objc_retain(param_5);
  ppuStack_190 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_1;
  func_0x00010be41400();
  if ((int)lVar1 == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined8 *)0x0;
    unaff_x26 = *(undefined ***)(param_1 + 0x18);
    ppuStack_1a8 = param_2;
    _objc_retain(unaff_x26);
    unaff_x27 = unaff_x26;
    func_0x00010bf52a60();
    if (unaff_x27 != (undefined **)0x0) {
      param_4 = (undefined **)*puStack_120;
      do {
        param_6 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_120 != param_4) {
            _objc_enumerationMutation(unaff_x26);
          }
          unaff_x28 = *(undefined ***)(lStack_128 + (long)param_6 * 8);
          param_2 = unaff_x28;
          func_0x00010bf517c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = param_2;
          ppuVar8 = param_3;
          func_0x00010c0720c0();
          if ((int)ppuVar7 == 0) {
            _objc_release(param_2);
          }
          else {
            param_5 = unaff_x28;
            func_0x00010bf86e60();
            _objc_release(param_2);
            if (((ulong)param_5 & 1) == 0) {
              ppuVar7 = unaff_x28;
              (**(code **)(param_7 + 0x10))(param_7);
              _objc_release(unaff_x26);
              goto LAB_1085f55e0;
            }
          }
          param_6 = (undefined **)((long)param_6 + 1);
        } while (unaff_x27 != param_6);
        unaff_x27 = unaff_x26;
        func_0x00010bf52a60();
      } while (unaff_x27 != (undefined **)0x0);
    }
    _objc_release(unaff_x26);
    _objc_initWeak(&puStack_138,param_1);
    unaff_x26 = *(undefined ***)(param_1 + 0x138);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x27 = unaff_x26;
    func_0x00010c0fe2e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x28 = unaff_x27;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_1085f5670;
    puStack_170 = &UNK_110a5aeb8;
    param_5 = &puStack_188;
    ppuVar7 = &puStack_138;
    _objc_copyWeak(auStack_148);
    _objc_retain(param_7);
    ppuStack_140 = ppuStack_1a8;
    lStack_150 = param_7;
    _objc_retain(param_3);
    ppuVar8 = ppuStack_198;
    ppuStack_168 = param_3;
    _objc_retain(ppuStack_198);
    param_4 = ppuStack_190;
    ppuStack_160 = ppuVar8;
    _objc_retain(ppuStack_190);
    ppuStack_158 = param_4;
    param_1 = *(long *)(param_1 + 0xf8);
    func_0x00010c0f98a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &puStack_188;
    func_0x00010c297260(unaff_x28);
    _objc_release(param_1);
    _objc_release(unaff_x28);
    _objc_release(unaff_x27);
    _objc_release(unaff_x26);
    _objc_release(ppuStack_158);
    _objc_release(ppuStack_160);
    _objc_release(ppuStack_168);
    _objc_release(lStack_150);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(&puStack_138);
  }
  else {
    ppuVar7 = (undefined **)0x0;
    (**(code **)(param_7 + 0x10))(param_7);
  }
LAB_1085f55e0:
  _objc_release(param_7);
  _objc_release(ppuStack_190);
  _objc_release(ppuStack_1a0);
  _objc_release(ppuStack_198);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(param_5 + 8);
    _objc_destroyWeak(&puStack_138);
    ppuVar2 = param_3;
    __Unwind_Resume();
    pcStack_1b8 = FUN_1085f5670;
    ppuStack_210 = unaff_x28;
    ppuStack_208 = unaff_x27;
    ppuStack_200 = unaff_x26;
    ppuStack_1f8 = param_2;
    lStack_1f0 = param_1;
    lStack_1e8 = param_7;
    ppuStack_1e0 = param_6;
    ppuStack_1d8 = param_5;
    ppuStack_1d0 = param_4;
    ppuStack_1c8 = param_3;
    puStack_1c0 = &stack0xfffffffffffffff0;
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar8);
    ppuVar3 = ppuVar2 + 8;
    _objc_loadWeakRetained();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (ppuVar3 == (undefined **)0x0) {
      (**(code **)(ppuVar2[7] + 0x10))(ppuVar2[7],0);
    }
    else {
      if ((ppuVar7 == (undefined **)0x0) || (ppuVar8 != (undefined **)0x0)) {
        _objc_opt_class();
        puVar5 = ppuVar2[9];
        _NSStringFromSelector();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14de00(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar5);
        func_0x00010c133800(ppuVar3[0x20]);
        (**(code **)(ppuVar2[7] + 0x10))(ppuVar2[7],0);
      }
      else {
        puVar6 = PTR_PTR_1126ae820;
        _objc_alloc_init();
        puVar5 = puVar6;
        func_0x00010c272120();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar7;
        func_0x00010bf57de0(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_220,ppuVar2 + 8);
        puVar10 = ppuVar2[7];
        _objc_retain(puVar10);
        puStack_218 = ppuVar2[9];
        puVar11 = ppuVar2[4];
        _objc_retain(puVar11);
        puVar12 = ppuVar2[5];
        _objc_retain(puVar12);
        puVar9 = ppuVar2[6];
        _objc_retain(puVar9);
        func_0x00010c0e3040(ppuVar4);
        _objc_release(ppuVar4);
        _objc_release(puVar5);
        _objc_release(puVar9);
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(puVar10);
        _objc_destroyWeak(auStack_220);
      }
      _objc_release(puVar6);
    }
    _objc_release(ppuVar3);
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    return;
  }
  return;
}



/* Entry: 1085f5670; end: 1085f58af;  */

void FUN_1085f5670(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
  }
  else {
    if ((param_2 == 0) || (param_3 != 0)) {
      _objc_opt_class();
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      func_0x00010c133800(*(undefined8 *)(lVar1 + 0x100));
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
    }
    else {
      puVar4 = PTR_PTR_1126ae820;
      _objc_alloc_init();
      puVar2 = puVar4;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010bf57de0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,param_1 + 0x40);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar6);
      uStack_68 = *(undefined8 *)(param_1 + 0x48);
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar7);
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar8);
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      _objc_retain(uVar5);
      func_0x00010c0e3040(lVar3);
      _objc_release(lVar3);
      _objc_release(puVar2);
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_destroyWeak(auStack_70);
    }
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1085f58b0; end: 1085f59f7;  */

void FUN_1085f58b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  else {
    if ((param_2 == 0) || (param_3 != 0)) {
      _objc_opt_class();
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x00010c133800(*(undefined8 *)(lVar1 + 0x100));
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
    }
    else {
      puVar3 = PTR_PTR_1126da6c0;
      _objc_alloc(PTR_PTR_1126da6c0);
      func_0x00010c036ae0();
      func_0x00010bdf4860(lVar1);
    }
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f59f8; end: 1085f5cd7; -[SCTalkSessionProvider _createCallingSessionWrapper:callIntent:sessionBridge:platformEventSubject:] */

void FUN_1085f59f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da6c8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc();
  uVar11 = *(undefined8 *)(param_1 + 0xf8);
  uVar2 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0xb8);
  uVar5 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  uVar15 = *(undefined8 *)(param_1 + 0xd8);
  uVar6 = *(undefined8 *)(param_1 + 0xe8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0505c0(puVar1,param_2,param_3,param_4,param_5,uVar11,uVar2,uVar3,uVar12,uVar4,uVar14,
                      uVar5,uVar13,uVar15,uVar6,param_6,uVar7,*(undefined8 *)(param_1 + 0x110));
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c18b5e0(puVar1,param_2,param_1);
  lVar8 = *(long *)(param_1 + 0xd0);
  if (lVar8 == 0) {
    puVar9 = PTR_PTR_1126da6d0;
    _objc_alloc();
    func_0x00010c02f520();
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined **)(param_1 + 0xd0) = puVar9;
    _objc_release(uVar2);
    lVar8 = *(long *)(param_1 + 0xd0);
  }
  func_0x00010c127040(lVar8,param_2,puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8240(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf4e8a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010be62ae0(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8240(puVar1,param_2,lVar8);
  _objc_release(lVar8);
  _objc_release(uVar2);
  lVar8 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar8);
  lVar10 = lVar8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8240(puVar1,param_2,lVar10);
  _objc_release(lVar10);
  _objc_release(lVar8);
  lVar8 = *(long *)(param_1 + 0x118);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar8 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8240(puVar1,param_2,uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085f5cd8; end: 1085f610f; -[SCTalkSessionProvider _createCallingSessionParametersWithConversationId:isGroup:callIntent:remoteUserIds:sourceType:withCallKit:] */

void FUN_1085f5cd8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126da6d8;
  _objc_alloc();
  func_0x00010c004fa0();
  if (param_7 != -1) {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207200(puVar1);
    _objc_release(puVar7);
    func_0x000100c6f294(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c207220(puVar1);
    _objc_release(param_7);
  }
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225e00(puVar1);
  _objc_release(puVar7);
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010bf32da0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179de0(puVar1);
  _objc_release(uVar2);
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x2020000000;
  uStack_a0 = 0;
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  _objc_retain(puVar1);
  func_0x00010c0bf2c0(param_5);
  puVar7 = puVar1;
  func_0x00010c0ee8a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined *)0x0) {
    puVar7 = puVar1;
    func_0x00010bfebd60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 != (undefined *)0x0) goto LAB_1085f5f14;
    puVar3 = puVar1;
    func_0x00010c0859a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar3 == (undefined *)0x0) {
      if (*(char *)(puStack_b0 + 3) == '\x01') {
        ppuStack_80 = &PTR____CFConstantStringClassReference_110ee5618;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        func_0x00010c1328a0(*(undefined8 *)(param_1 + 0x100));
      }
      else {
        ppuStack_90 = &PTR____CFConstantStringClassReference_110ee5638;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        uStack_98 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        func_0x00010c1328a0(*(undefined8 *)(param_1 + 0x100));
      }
      _objc_release(puVar7);
      puVar7 = (undefined *)0x0;
      goto LAB_1085f5f24;
    }
  }
  else {
LAB_1085f5f14:
    _objc_release();
  }
  _objc_retain(puVar1);
  puVar7 = puVar1;
LAB_1085f5f24:
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Block_object_dispose(&uStack_b8,8);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_b8,8);
  __Unwind_Resume();
  puVar1 = PTR_PTR_1126da618;
  _objc_alloc(PTR_PTR_1126da618);
  func_0x00010bff51e0();
  puVar7 = PTR_PTR_1126da6e0;
  _objc_alloc(PTR_PTR_1126da6e0);
  func_0x00010c04b940();
  func_0x00010c1d6e40(*(undefined8 *)(param_3 + 0x20));
  _objc_release(puVar7);
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf14060();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0ee8a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e740();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0ee8a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1a20();
  _objc_release(uVar2);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085f6110; end: 1085f6253;  */

void FUN_1085f6110(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126da618;
  _objc_alloc(PTR_PTR_1126da618);
  func_0x00010bff51e0();
  puVar2 = PTR_PTR_1126da6e0;
  _objc_alloc(PTR_PTR_1126da6e0);
  func_0x00010c04b940();
  func_0x00010c1d6e40(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf14060();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ee8a0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e740();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0ee8a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b1a20();
  _objc_release(uVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085f6254; end: 1085f6343;  */

void FUN_1085f6254(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126da6e8;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c034780();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c1abe80(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1085f6344; end: 1085f6357;  */

void FUN_1085f6344(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 1085f6358; end: 1085f6667; -[SCTalkSessionProvider _createCallingSessionWrapperPromise:callIntent:remoteUserIds:sourceType:withCallKit:] */

void FUN_1085f6358(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bf5e540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae560;
  _objc_opt_new();
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1085f6668;
  puStack_d0 = &UNK_110a5af18;
  _objc_copyWeak(auStack_a0,auStack_80);
  uStack_98 = param_2;
  _objc_retain(puVar3);
  puStack_c8 = puVar3;
  lStack_c0 = param_1;
  uStack_b8 = uVar2;
  _objc_retain(param_4);
  uStack_b0 = param_4;
  uStack_90 = param_6;
  uStack_88 = param_7;
  _objc_retain(param_3);
  ppuVar4 = &puStack_e8;
  uStack_a8 = param_3;
  _objc_retainBlock();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1085f6b34;
  puStack_100 = &UNK_1108e2d58;
  _objc_copyWeak(auStack_f0,auStack_80);
  ppuVar5 = &puStack_118;
  ppuStack_f8 = ppuVar4;
  _objc_retainBlock();
  if (param_5 == 0) {
    puStack_150 = puVar1;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_1085f6bf4;
    puStack_138 = &UNK_11085b960;
    _objc_copyWeak(auStack_120,auStack_80);
    _objc_retain(puVar3);
    ppuVar6 = &puStack_150;
    puStack_130 = puVar3;
    ppuStack_128 = ppuVar5;
    _objc_retainBlock(ppuVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010bf517c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010c0f98a0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12a2e0(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_retain(puVar3);
    _objc_release(ppuVar6);
    _objc_release(puStack_130);
    _objc_destroyWeak(auStack_120);
  }
  else {
    (*(code *)ppuVar5[2])(ppuVar5,param_5);
    _objc_retain(puVar3);
  }
  _objc_release(ppuVar5);
  _objc_destroyWeak(auStack_f0);
  _objc_release(ppuVar4);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1085f6668; end: 1085f69c3;  */

void FUN_1085f6668(long param_1,undefined *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_e0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be41400();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)lVar2 == 0) {
    if (param_2 != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 0x28);
      uVar11 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf517c0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf51800(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c074920();
      uVar9 = param_3;
      func_0x00010bf00560(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdebac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar10);
      _objc_release(uVar11);
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (puVar3 == (undefined *)0x0) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        uStack_88 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
        ppuStack_80 = &PTR____CFConstantStringClassReference_110ee5678;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = (undefined **)puVar6;
        func_0x00010bf43ca0(uVar11);
      }
      else {
        puVar5 = PTR_PTR_1126ae568;
        _objc_alloc_init();
        puVar4 = puVar5;
        func_0x00010c272120();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_2;
        func_0x00010bf54ec0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_1085f69c4;
        puStack_c8 = &UNK_110a5aee8;
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        lStack_c0 = lVar1;
        _objc_retain(uVar11);
        uVar9 = *(undefined8 *)(param_1 + 0x40);
        uStack_b8 = uVar11;
        _objc_retain(uVar9);
        uVar11 = *(undefined8 *)(param_1 + 0x38);
        uStack_b0 = uVar9;
        _objc_retain(uVar11);
        uStack_a8 = uVar11;
        puStack_a0 = puVar5;
        func_0x00010c0e3040(puVar6);
        _objc_release(uStack_a8);
        _objc_release(uStack_b0);
        _objc_release(uStack_b8);
      }
      _objc_release(puVar6);
      goto LAB_1085f6960;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uStack_98 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110ee5698;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110ee5658;
  }
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)puVar5;
  func_0x00010bf43ca0(uVar11);
LAB_1085f6960:
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(ppuVar8);
  uVar11 = *(undefined8 *)(param_2 + 0x28);
  uVar12 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0xf8);
  _objc_retain(uVar11);
  uVar9 = *(undefined8 *)(param_2 + 0x30);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_2 + 0x38);
  _objc_retain(uVar10);
  _objc_retain(puVar7);
  _objc_retain(ppuVar8);
  func_0x00010bf850c0(uVar12);
  _objc_release(puVar7);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(ppuVar8);
  _objc_release(puVar7);
  _objc_release(ppuVar8);
  return;
}



/* Entry: 1085f69c4; end: 1085f6ad3;  */

void FUN_1085f69c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010bf850c0(uVar4);
  _objc_release(param_2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f6ad4; end: 1085f6b33;  */

void FUN_1085f6ad4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_completeWithError__1125ae8d0);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bdebae0(uVar2,param_2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1085f6b34; end: 1085f6be3;  */

void FUN_1085f6b34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    _objc_retain(param_2);
    func_0x00010c142ca0(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1085f6be4; end: 1085f6bf3;  */

void FUN_1085f6be4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001085f6bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1085f6bf4; end: 1085f6d77;  */

void FUN_1085f6bf4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_c8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  puVar9 = puVar1;
  func_0x00010be41400();
  puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar9 == 0) {
    if (param_2 != (undefined *)0x0) {
      puVar9 = puVar1;
      puVar4 = param_2;
      func_0x00010be22140();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar9);
      goto LAB_1085f6d30;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x20);
  }
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x00010bf43ca0(uVar8);
  _objc_release(puVar7);
LAB_1085f6d30:
  _objc_release(puVar9);
  _objc_release(puVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    puVar5 = &uStack_190;
    lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    _objc_retain(puVar4);
    puVar7 = puVar4;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar6 = *plStack_180;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_180 != lVar6) {
            _objc_enumerationMutation(puVar4);
          }
          lVar2 = *(long *)(lStack_188 + (long)puVar9 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            func_0x00010befa120(puVar1);
          }
          _objc_release(lVar2);
          puVar9 = puVar9 + 1;
        } while (puVar7 != puVar9);
        puVar7 = puVar4;
        puVar5 = &uStack_190;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
      ___stack_chk_fail();
      puVar7 = *(undefined **)(puVar4 + 0x38);
      _objc_retain(puVar5);
      func_0x00010c269d40(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x00010bf50680();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(puVar7);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1085f6d78; end: 1085f6ebb; -[SCTalkSessionProvider _getRemoteParticipantUserIds:] */

void FUN_1085f6d78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar3 = *(long *)(lStack_118 + lVar8 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c08fa60();
        if (lVar4 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar3);
        }
        _objc_release(lVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60(param_3,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(param_3 + 0x38);
    _objc_retain(puVar5);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010bf50680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085f6ebc; end: 1085f6f27; -[SCTalkSessionProvider _getConversationMetadataForConvoId:] */

void FUN_1085f6ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf50680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085f6f28; end: 1085f6fcb; -[SCTalkSessionProvider _networkStatusLoggerForTalkContextId:] */

void FUN_1085f6f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126da6f8;
    _objc_alloc(PTR_PTR_1126da6f8);
    func_0x00010c02f520();
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x10),param_2,puVar1,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1085f6fcc; end: 1085f70f3; -[SCTalkSessionProvider _subscribeToReachabilityIfNeeded] */

void FUN_1085f6fcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x120) == 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    func_0x00010c0d79a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d7a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 1085f70f4; end: 1085f7153;  */

void FUN_1085f70f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5e480(param_2);
  _objc_release(param_2);
  func_0x00010be86020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f7154; end: 1085f71ef; -[SCTalkSessionProvider _subscribeToThermalStateIfNeeded] */

void FUN_1085f7154(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  _os_unfair_lock_lock(param_1 + 0x20);
  if (((*(byte *)(param_1 + 0x128) & 1) == 0) &&
     (lVar1 = param_1, func_0x00010be41400(), (int)lVar1 == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    *(undefined1 *)(param_1 + 0x128) = 1;
    _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010becb8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__thermalStateChanged_1125907d0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 1085f71f0; end: 1085f71ff; -[SCTalkSessionProvider _isInvalidated] */

bool FUN_1085f71f0(long param_1)

{
  return *(long *)(param_1 + 8) == 0;
}



/* Entry: 1085f7200; end: 1085f7377; -[SCTalkSessionProvider _createTalkChatSessionWithPresenceTSForConvoId:dependencies:delegate:presenceSession:completion:] */

void FUN_1085f7200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  func_0x00010c0f98a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1085f7378;
  puStack_88 = &UNK_1108ce318;
  uStack_80 = param_3;
  lStack_78 = param_1;
  uStack_70 = param_5;
  uStack_68 = param_4;
  uStack_60 = param_6;
  uStack_58 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c12a2e0(uVar1,param_2,param_3,0,uVar2,&puStack_a0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f7378; end: 1085f7487;  */

void FUN_1085f7378(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1085f7488;
  puStack_70 = &UNK_110866970;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_68 = param_2;
  _objc_retain(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = uVar1;
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = uVar2;
  uStack_50 = uVar3;
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = uVar1;
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_40 = uVar2;
  _objc_retain(uVar1);
  uStack_38 = uVar1;
  _objc_retain(param_2);
  func_0x000107c312cc("APPSTORE",&puStack_88);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_2);
  return;
}



/* Entry: 1085f7488; end: 1085f7693;  */

void FUN_1085f7488(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c296f60(uVar1,param_2,&PTR____CFConstantStringClassReference_110db1318);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126da700;
  _objc_alloc(PTR_PTR_1126da700);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c005a60(puVar2);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126da708;
  _objc_alloc(PTR_PTR_1126da708);
  func_0x00010c036ac0();
  func_0x00010c1e0f40(puVar2);
  _objc_initWeak(auStack_58,puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c160460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar5);
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18));
  func_0x00010c260300(puVar2);
  (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),puVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1085f7694; end: 1085f76db;  */

void FUN_1085f7694(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e5880();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1085f76dc; end: 1085f78bf; -[SCTalkSessionProvider .cxx_destruct] */

void FUN_1085f76dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
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
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085f78c0; end: 1085f7983; -[SCSuperResolutionRendererWrapper initWithDirectRendererCallback:callSuperResolutionSession:] */

undefined1 *
FUN_1085f78c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd0b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x20) = 0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1085f7984; end: 1085f798b; -[SCSuperResolutionRendererWrapper onFrame:] */

void FUN_1085f7984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_onFrame__112616b68);
  return;
}



/* Entry: 1085f798c; end: 1085f7c57; -[SCSuperResolutionRendererWrapper onNativeFrame:] */

void FUN_1085f798c(ulong param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  double dStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c2a5040();
  lVar4 = param_3;
  func_0x00010bfe0640();
  lVar8 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar8);
  uVar5 = param_1;
  func_0x00010bf28360();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c0f6280();
  if (((uVar6 & 1) == 0) && (lVar8 != 0)) {
    lVar7 = param_3;
    func_0x00010c06aea0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar7 != 0) {
      dVar11 = (double)(int)lVar3;
      dVar12 = (double)(int)lVar4;
      uVar6 = param_1;
      dVar9 = dVar11;
      dVar10 = dVar12;
      func_0x00010be44fa0();
      if ((int)uVar6 == 0) {
        lVar3 = param_3;
        func_0x00010c06aea0();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf21c40();
        iVar2 = (int)lVar4;
        _CVPixelBufferGetPixelFormatType();
        _objc_release(lVar3);
        _objc_release(lVar7);
        if (iVar2 == 0x34323066) {
          if (uVar5 != 0) {
            func_0x00010bfb7020(uVar5);
            bVar1 = false;
            if ((dVar9 == dVar11) && (bVar1 = false, !NAN(dVar10) && !NAN(dVar12))) {
              bVar1 = dVar10 == dVar12;
            }
            if (bVar1) {
              _objc_initWeak(auStack_68,param_1);
              lVar3 = param_3;
              func_0x00010c06aea0(param_3);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf21c40();
              func_0x00010c270c60(param_3);
              _objc_copyWeak(auStack_a8,auStack_68);
              _objc_retain(param_3);
              func_0x00010c114500(uVar5);
              _objc_release(lVar3);
              _objc_release(param_3);
              _objc_destroyWeak(auStack_a8);
              _objc_destroyWeak(auStack_68);
              goto LAB_1085f7a4c;
            }
          }
          uVar6 = param_1;
          func_0x00010c083960();
          if ((uVar6 & 1) == 0) {
            func_0x00010c1759a0(param_1);
            func_0x00010c1b5ae0(param_1);
            _objc_initWeak(auStack_68,param_1);
            puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_98 = 0xc2000000;
            pcStack_90 = FUN_1085f7c58;
            puStack_88 = &UNK_110a5af48;
            _objc_copyWeak(auStack_80,auStack_68);
            dStack_78 = dVar11;
            dStack_70 = dVar12;
            func_0x00010bf58040(dVar11,dVar12,lVar8);
            _objc_destroyWeak(auStack_80);
            _objc_destroyWeak(auStack_68);
          }
        }
        goto LAB_1085f7a40;
      }
    }
    _objc_release(lVar7);
  }
LAB_1085f7a40:
  func_0x00010c0e5460(*(undefined8 *)(param_1 + 8));
LAB_1085f7a4c:
  _objc_release(uVar5);
  _objc_release(lVar8);
  _objc_release(param_3);
  return;
}



/* Entry: 1085f7c58; end: 1085f7d47;  */

void FUN_1085f7c58(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      func_0x00010bdc8e60(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),lVar1);
    }
    func_0x00010c1759a0(lVar1);
    func_0x00010c1b5ae0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1085f7d48; end: 1085f7ddb; -[SCSuperResolutionRendererWrapper _isUnsupportedFrameSize:] */

undefined8 FUN_1085f7d48(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_3 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010bf4b900(uVar2,param_4,puVar1);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_3 + 0x20);
  return uVar2;
}



/* Entry: 1085f7ddc; end: 1085f7e5b; -[SCSuperResolutionRendererWrapper _addUnsupportedFrameSize:] */

void FUN_1085f7ddc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _os_unfair_lock_lock(param_3 + 0x20);
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c2971c0(param_1,param_2,PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_3 + 0x18),param_4,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_3 + 0x20);
  return;
}



/* Entry: 1085f7e5c; end: 1085f7e67; -[SCSuperResolutionRendererWrapper paused] */

byte FUN_1085f7e5c(long param_1)

{
  return *(byte *)(param_1 + 0x24) & 1;
}



/* Entry: 1085f7e68; end: 1085f7e6f; -[SCSuperResolutionRendererWrapper setPaused:] */

void FUN_1085f7e68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x24) = param_3;
  return;
}



/* Entry: 1085f7e70; end: 1085f7e7b; -[SCSuperResolutionRendererWrapper callSuperResolutionProcessor] */

void FUN_1085f7e70(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 1085f7e7c; end: 1085f7e83; -[SCSuperResolutionRendererWrapper setCallSuperResolutionProcessor:] */

void FUN_1085f7e7c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1085f7e84; end: 1085f7e8f; -[SCSuperResolutionRendererWrapper isWaitingForProcessor] */

byte FUN_1085f7e84(long param_1)

{
  return *(byte *)(param_1 + 0x25) & 1;
}



/* Entry: 1085f7e90; end: 1085f7e97; -[SCSuperResolutionRendererWrapper setIsWaitingForProcessor:] */

void FUN_1085f7e90(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x25) = param_3;
  return;
}



/* Entry: 1085f7e98; end: 1085f7edf; -[SCSuperResolutionRendererWrapper .cxx_destruct] */

void FUN_1085f7e98(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085f7ee0; end: 1085f7f6f; -[SCTalkNativeVideoFrame initWithImageBuffer:timestampUs:] */

undefined1 *
FUN_1085f7ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd0b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    puVar2 = PTR_PTR_1126da718;
    _CVPixelBufferRetain(param_3);
    func_0x00010bdc1ce0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1085f7f70; end: 1085f7f77; -[SCTalkNativeVideoFrame android] */

undefined8 FUN_1085f7f70(void)

{
  return 0;
}



/* Entry: 1085f7f78; end: 1085f7f93; -[SCTalkNativeVideoFrame height] */

void FUN_1085f7f78(long param_1)

{
  func_0x00010bf21c40(*(undefined8 *)(param_1 + 8));
  _CVPixelBufferGetHeight();
  return;
}



/* Entry: 1085f7f94; end: 1085f7fbb; -[SCTalkNativeVideoFrame ios] */

void FUN_1085f7f94(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1085f7fbc; end: 1085f7fbf; -[SCTalkNativeVideoFrame releaseFrame] */

void FUN_1085f7fbc(void)

{
  return;
}



/* Entry: 1085f7fc0; end: 1085f7fc3; -[SCTalkNativeVideoFrame retainFrame] */

void FUN_1085f7fc0(void)

{
  return;
}



/* Entry: 1085f7fc4; end: 1085f7fcb; -[SCTalkNativeVideoFrame timestampUs] */

undefined8 FUN_1085f7fc4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1085f7fcc; end: 1085f7fe7; -[SCTalkNativeVideoFrame width] */

void FUN_1085f7fcc(long param_1)

{
  func_0x00010bf21c40(*(undefined8 *)(param_1 + 8));
  _CVPixelBufferGetWidth();
  return;
}



/* Entry: 1085f7fe8; end: 1085f8033; -[SCTalkNativeVideoFrame dealloc] */

void FUN_1085f7fe8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf21c40(*(undefined8 *)(param_1 + 8));
  _CVPixelBufferRelease();
  puStack_28 = PTR_PTR_1126fd0b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1085f8034; end: 1085f803f; -[SCTalkNativeVideoFrame .cxx_destruct] */

void FUN_1085f8034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1085f8040; end: 1085f8043; -[ADLLoggerImpl log:tag:message:] */

void FUN_1085f8040(void)

{
  return;
}



/* Entry: 1085f8044; end: 1085f818b;  */

ulong FUN_1085f8044(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00010c0ef240();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  uVar4 = 0;
  if (lVar1 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        func_0x00010c104100(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010bf4b900(param_3,param_2,uVar2);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) {
          uVar4 = 1;
          goto LAB_1085f8140;
        }
        lVar6 = lVar6 + 1;
      } while (lVar1 != lVar6);
      lVar1 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
    uVar4 = 0;
  }
LAB_1085f8140:
  _objc_release(param_1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar4;
  }
  ___stack_chk_fail();
  puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      *(undefined8 *)PTR__AVAudioSessionPortBuiltInReceiver_11034ced0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be056c0(param_3,param_2,puVar3);
  _objc_release(puVar3);
  return param_3;
}



/* Entry: 1085f818c; end: 1085f82df;  */

undefined8 FUN_1085f818c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c226900(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,
                      *(undefined8 *)PTR__AVAudioSessionPortBuiltInReceiver_11034ced0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be056c0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}


