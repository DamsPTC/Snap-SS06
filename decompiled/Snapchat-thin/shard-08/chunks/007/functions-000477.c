/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1064f7aa8; end: 1064f7b37;  */

void FUN_1064f7aa8(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1064f7b38;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064f7b38; end: 1064f7b63;  */

void FUN_1064f7b38(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f7b64; end: 1064f7bf3;  */

void FUN_1064f7b64(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1064f7bf4;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1064f7bf4; end: 1064f7c1f;  */

void FUN_1064f7bf4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be92920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f7c20; end: 1064f7c27; -[SCChatTypingHandler _resetCurrentRequest] */

void FUN_1064f7c20(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 1064f7c28; end: 1064f7cd7; -[SCChatTypingHandler _shouldTriggerNotificationAfterTypingStateUpdate:] */

byte FUN_1064f7c28(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  byte bVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x18));
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e0a4d8);
    if ((int)uVar1 != 0) {
      puVar3 = PTR_PTR_1126b6b08;
      func_0x00010c22b6a0(PTR_PTR_1126b6b08);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b2e20();
      _objc_release(puVar3);
      bVar4 = *(byte *)(param_1 + 0x20) ^ 1;
      goto LAB_1064f7cbc;
    }
  }
  bVar4 = 0;
LAB_1064f7cbc:
  _objc_release(param_3);
  return bVar4 & 1;
}



/* Entry: 1064f7cd8; end: 1064f7dab; -[SCChatTypingHandler _updateTalkSessionWithTypingState:typingActivityType:] */

void FUN_1064f7cd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (lRam00000001136c3a00 != -1) {
    func_0x00010002a2fc(0x1136c3a00,&PTR___NSConcreteGlobalBlock_110929260);
  }
  lVar1 = lRam00000001136c3a08;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if ((param_4 != 0) && (lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b60f8;
    _objc_alloc(PTR_PTR_1126b60f8);
    func_0x00010c0134e0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064f7dac; end: 1064f7de7; -[SCChatTypingHandler .cxx_destruct] */

void FUN_1064f7dac(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f7de8; end: 1064f7eaf;  */

undefined1 * FUN_1064f7de8(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e53198;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e0a4d8;
  ppuStack_38 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6280;
  ppuStack_30 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6298;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dcbb98;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e531b8;
  ppuStack_28 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c62b0;
  ppuStack_20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c62c8;
  pppuVar5 = &ppuStack_38;
  pppuVar6 = &ppuStack_58;
  uVar7 = 4;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puRam00000001136c3a08;
  puRam00000001136c3a08 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar3 = &puStack_b0;
  _objc_retain(pppuVar6);
  _objc_retain(uVar7);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  puStack_a8 = PTR_PTR_1126f1948;
  puStack_b0 = puVar2;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined1 **)0x0) {
    *(undefined ****)((long)ppuVar3 + 8) = pppuVar5;
    uRam00000001136c3a10 = 0xffffffffffffffff;
    *(undefined8 *)((long)ppuVar3 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)((long)ppuVar3 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)((long)ppuVar3 + 0x50) = 0xffffffffffffffff;
    _objc_retain(pppuVar6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x68);
    *(undefined ****)((long)ppuVar3 + 0x68) = pppuVar6;
    _objc_release(uVar4);
    _objc_retain(uVar7);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x70);
    *(undefined8 *)((long)ppuVar3 + 0x70) = uVar7;
    _objc_release(uVar4);
    _objc_retain(in_x5);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x78);
    *(undefined8 *)((long)ppuVar3 + 0x78) = in_x5;
    _objc_release(uVar4);
    _objc_retain(in_x6);
    uVar4 = *(undefined8 *)((long)ppuVar3 + 0x80);
    *(undefined8 *)((long)ppuVar3 + 0x80) = in_x6;
    _objc_release(uVar4);
  }
  _objc_release(in_x6);
  _objc_release(in_x5);
  _objc_release(uVar7);
  _objc_release(pppuVar6);
  return (undefined1 *)ppuVar3;
}



/* Entry: 1064f7eb0; end: 1064f7fc7; -[SCChatViewLogger initWithPageViewName:chatLogger:friendsFeedDataCoordinator:currentPageTracker:userTraceLogger:] */

undefined1 *
FUN_1064f7eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1948;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uRam00000001136c3a10 = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)((long)puVar1 + 0x50) = 0xffffffffffffffff;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined8 *)((long)puVar1 + 0x78) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f7fc8; end: 1064f7fcf; -[SCChatViewLogger setNewUnreadChatViewed:snapViewed:] */

void FUN_1064f7fc8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  *(undefined8 *)(param_1 + 0xa0) = param_4;
  return;
}



/* Entry: 1064f7fd0; end: 1064f7fdb; -[SCChatViewLogger setChatExitEvent:] */

void FUN_1064f7fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uRam00000001136c3a10 = param_3;
  return;
}



/* Entry: 1064f7fdc; end: 1064f7fe7; -[SCChatViewLogger getChatExitEvent] */

undefined8 FUN_1064f7fdc(void)

{
  return uRam00000001136c3a10;
}



/* Entry: 1064f7fe8; end: 1064f8017; -[SCChatViewLogger setChatHeaderSubtextsAvailable:] */

void FUN_1064f7fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064f8018; end: 1064f8047; -[SCChatViewLogger setChatHeaderSubtextsRendered:] */

void FUN_1064f8018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064f8048; end: 1064f804f; -[SCChatViewLogger setStoryViewType:] */

void FUN_1064f8048(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1064f8050; end: 1064f8057; -[SCChatViewLogger setChatPageSource:] */

void FUN_1064f8050(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1064f8058; end: 1064f805f; -[SCChatViewLogger setChatEntryEvent:] */

void FUN_1064f8058(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed4fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateCellState_112592d98);
  return;
}



/* Entry: 1064f8060; end: 1064f80b7; -[SCChatViewLogger didConversationViewModelChange:metricsTracker:] */

void FUN_1064f8060(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c075860();
  if ((uVar1 & 1) == 0) {
    _objc_storeWeak(param_1 + 0x18,param_3);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      func_0x00010be57fe0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064f80b8; end: 1064f80bb; -[SCChatViewLogger viewDidSwipeOut] */

void FUN_1064f80b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onExitChatView_112616a18);
  return;
}



/* Entry: 1064f80bc; end: 1064f80bf; -[SCChatViewLogger viewDidSwipeIn] */

void FUN_1064f80bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onEnterChatView_1126169c0);
  return;
}



/* Entry: 1064f80c0; end: 1064f80c3; -[SCChatViewLogger viewWillResignActive] */

void FUN_1064f80c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onExitChatView_112616a18);
  return;
}



/* Entry: 1064f80c4; end: 1064f80c7; -[SCChatViewLogger viewDidBecomeActive] */

void FUN_1064f80c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onEnterChatView_1126169c0);
  return;
}



/* Entry: 1064f80c8; end: 1064f80cb; -[SCChatViewLogger profileOverlayDidDisappear] */

void FUN_1064f80c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_onEnterChatView_1126169c0);
  return;
}



/* Entry: 1064f80cc; end: 1064f8113; -[SCChatViewLogger viewDidAppearAtPercentage:] */

void FUN_1064f80cc(double param_1,long param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  func_0x00010be00a40();
  if ((iVar1 != 0) && ((*(byte *)(param_2 + 0x10) & 1) == 0)) {
    if (param_1 <= *(double *)(param_2 + 0x58)) {
      param_1 = *(double *)(param_2 + 0x58);
    }
    *(double *)(param_2 + 0x58) = param_1;
  }
  return;
}



/* Entry: 1064f8114; end: 1064f821b; -[SCChatViewLogger onEnterChatView] */

void FUN_1064f8114(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    return;
  }
  *(undefined8 *)(param_2 + 0x58) = 0x3ff0000000000000;
  *(undefined1 *)(param_2 + 0x10) = 1;
  _CACurrentMediaTime();
  *(double *)(param_2 + 0x20) = param_1;
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  *(double *)(param_2 + 0x28) = (double)(long)(param_1 * 1000.0);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined **)(param_2 + 0x30) = puVar2;
  _objc_release(uVar3);
  _objc_release(puVar1);
  func_0x00010c24fc40(*(undefined8 *)(param_2 + 0x78));
  lVar4 = *(long *)(param_2 + 0x80);
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126afdd8;
    func_0x00010bfc8740(PTR_PTR_1126afdd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20(lVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be57ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__logSCAChatCreate_112573998);
  return;
}



/* Entry: 1064f821c; end: 1064f851f; -[SCChatViewLogger onExitChatView] */

void FUN_1064f821c(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  
  if ((((*(byte *)(param_2 + 0x60) & 1) == 0) && ((*(byte *)(param_2 + 0x10) & 1) == 0)) &&
     (lVar1 = param_2, func_0x00010be00a40(), (int)lVar1 != 0)) {
    func_0x00010be57fe0(param_2);
  }
  *(undefined1 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  if (*(char *)(param_2 + 0x10) == '\x01') {
    _CACurrentMediaTime();
    dVar9 = param_1 - *(double *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    lVar1 = param_2 + 0x18;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c074920();
    _objc_release(lVar1);
    if ((int)lVar2 == 0) {
      uVar4 = param_2 + 0x18;
      _objc_loadWeakRetained();
      puVar5 = PTR_PTR_1126cb2f0;
      _objc_opt_class(PTR_PTR_1126cb2f0);
      uVar6 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar5);
      uVar7 = uVar4;
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar4);
      if (uVar7 == 0) {
        return;
      }
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar5);
      uVar3 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar4;
      func_0x00010c122e00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf50280(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf50920(uVar4);
      uVar8 = uVar4;
      func_0x00010bf50940(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aea40(dVar9,*(undefined8 *)(param_2 + 0x28),(double)(long)(param_1 * 1000.0),
                          uVar3);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar3);
      uVar7 = uVar4;
      func_0x00010c122e00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar4;
      func_0x00010bf50280(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be518c0(param_2);
      _objc_release(uVar6);
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_2 + 0x18;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0aea20(dVar9,uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar3);
      uVar4 = param_2 + 0x18;
      _objc_loadWeakRetained(uVar4);
      uVar7 = uVar4;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be518c0(param_2);
    }
    _objc_release(uVar7);
    _objc_release(uVar4);
    uRam00000001136c3a10 = 0xffffffffffffffff;
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
    _objc_release(uVar3);
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



/* Entry: 1064f8520; end: 1064f878f; -[SCChatViewLogger _updateCellState] */

void FUN_1064f8520(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  double dVar13;
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
  uVar2 = param_1 + 0x18;
  _objc_loadWeakRetained();
  uVar1 = uVar2;
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bfba060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar3 = param_1 + 0x18;
    _objc_loadWeakRetained();
    lVar4 = lVar3;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar1);
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uVar2 = uVar1;
    func_0x00010bf52a60(uVar1,param_2,&uStack_130,auStack_f0,0x10);
    if (uVar2 == 0) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      lVar12 = *plStack_120;
      do {
        uVar10 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(uVar1);
          }
          lVar11 = *(long *)(lStack_128 + uVar10 * 8);
          lVar5 = lVar11;
          func_0x00010bef0c80();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar4;
          func_0x00010c0720c0(lVar4,param_2,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar5);
          if ((int)lVar7 != 0) {
            func_0x00010bef0c80();
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar11;
            func_0x00010c0cb340();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar11);
            lVar5 = lVar12;
            func_0x000100bf3858();
            if ((int)lVar5 == 0) {
              uVar2 = 0xffffffffffffffff;
            }
            else {
              lVar5 = lVar12;
              func_0x000107cfd54c();
              _objc_retainAutoreleasedReturnValue();
              if (lVar5 == 0) {
                uVar2 = 2;
              }
              else {
                lVar6 = lVar5;
                func_0x00010c2420e0();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010bfdc680();
                uVar2 = (ulong)((uint)lVar7 ^ 1);
                _objc_release(lVar6);
              }
              _objc_release(lVar5);
            }
            _objc_release(lVar12);
            goto LAB_1064f8730;
          }
          uVar10 = uVar10 + 1;
        } while (uVar2 != uVar10);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_2,&uStack_130,auStack_f0,0x10);
      } while (uVar2 != 0);
      uVar2 = 0xffffffffffffffff;
    }
LAB_1064f8730:
    _objc_release(uVar1);
    *(ulong *)(param_1 + 0x50) = uVar2;
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(uVar1 + 0x60) & 1) == 0) {
    lVar3 = uVar1 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar3 != 0) {
      dVar13 = *(double *)(uVar1 + 0x58);
      if (1.0 <= dVar13) {
        uVar9 = 100;
      }
      else if (0.75 <= dVar13) {
        uVar9 = 0x4b;
      }
      else if (0.5 <= dVar13) {
        uVar9 = 0x32;
      }
      else if (0.25 <= dVar13) {
        uVar9 = 0x19;
      }
      else {
        uVar2 = uVar1;
        func_0x00010be00a40();
        if ((uVar2 & 1) != 0) {
          return;
        }
        uVar9 = 0;
      }
      lVar3 = 0;
      if (*(long *)(uVar1 + 0x40) != -1) {
        lVar3 = *(long *)(uVar1 + 0x40);
      }
      lVar4 = uVar1 + 0x18;
      _objc_loadWeakRetained();
      lVar12 = lVar4;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar12;
      func_0x00010c2a1920();
      _objc_release(lVar12);
      _objc_release(lVar4);
      lVar4 = uVar1 + 0x18;
      _objc_loadWeakRetained();
      lVar12 = lVar4;
      func_0x00010c074920();
      _objc_release(lVar4);
      lVar4 = uVar1 + 0x18;
      _objc_loadWeakRetained();
      if ((int)lVar12 == 0) {
        lVar12 = lVar4;
        func_0x00010c122e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        uVar8 = *(undefined8 *)(uVar1 + 0x68);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = uVar1 + 0x18;
        _objc_loadWeakRetained(lVar4);
        lVar6 = lVar4;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ae920(uVar8,param_2,lVar3,lVar6,lVar12,*(undefined8 *)(uVar1 + 0x48),uVar9,
                            *(undefined8 *)(uVar1 + 0x50),lVar5);
      }
      else {
        lVar6 = lVar4;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar6;
        func_0x00010c06ecc0();
        if ((int)lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          lVar7 = uVar1 + 0x18;
          _objc_loadWeakRetained(lVar7);
          lVar11 = lVar7;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar11;
          func_0x00010bf33480();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar11);
          _objc_release(lVar7);
        }
        _objc_release(lVar6);
        _objc_release(lVar4);
        uVar8 = *(undefined8 *)(uVar1 + 0x68);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = uVar1 + 0x18;
        _objc_loadWeakRetained(lVar4);
        lVar6 = lVar4;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ae8e0(uVar8,param_2,lVar6,lVar12,*(undefined8 *)(uVar1 + 0x48),lVar3,uVar9,
                            *(undefined8 *)(uVar1 + 0x50),lVar5);
      }
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(uVar8);
      _objc_release(lVar12);
      *(undefined8 *)(uVar1 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(uVar1 + 0x50) = 0xffffffffffffffff;
      *(undefined1 *)(uVar1 + 0x60) = 1;
    }
  }
  return;
}



/* Entry: 1064f8790; end: 1064f8a17; -[SCChatViewLogger _logSCAChatCreate] */

void FUN_1064f8790(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  double dVar11;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar1 != 0) {
      dVar11 = *(double *)(param_1 + 0x58);
      if (1.0 <= dVar11) {
        uVar9 = 100;
      }
      else if (0.75 <= dVar11) {
        uVar9 = 0x4b;
      }
      else if (0.5 <= dVar11) {
        uVar9 = 0x32;
      }
      else if (0.25 <= dVar11) {
        uVar9 = 0x19;
      }
      else {
        uVar2 = param_1;
        func_0x00010be00a40();
        if ((uVar2 & 1) != 0) {
          return;
        }
        uVar9 = 0;
      }
      lVar1 = 0;
      if (*(long *)(param_1 + 0x40) != -1) {
        lVar1 = *(long *)(param_1 + 0x40);
      }
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar10 = lVar3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar10;
      func_0x00010c2a1920();
      _objc_release(lVar10);
      _objc_release(lVar3);
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained();
      lVar10 = lVar3;
      func_0x00010c074920();
      _objc_release(lVar3);
      lVar3 = param_1 + 0x18;
      _objc_loadWeakRetained();
      if ((int)lVar10 == 0) {
        lVar10 = lVar3;
        func_0x00010c122e00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1 + 0x18;
        _objc_loadWeakRetained(lVar3);
        lVar7 = lVar3;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ae920(uVar8,param_2,lVar1,lVar7,lVar10,*(undefined8 *)(param_1 + 0x48),uVar9,
                            *(undefined8 *)(param_1 + 0x50),lVar4);
      }
      else {
        lVar7 = lVar3;
        func_0x00010bfce400();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar7;
        func_0x00010c06ecc0();
        if ((int)lVar10 == 0) {
          lVar10 = 0;
        }
        else {
          lVar5 = param_1 + 0x18;
          _objc_loadWeakRetained(lVar5);
          lVar6 = lVar5;
          func_0x00010bfce400();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar6;
          func_0x00010bf33480();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar6);
          _objc_release(lVar5);
        }
        _objc_release(lVar7);
        _objc_release(lVar3);
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1 + 0x18;
        _objc_loadWeakRetained(lVar3);
        lVar7 = lVar3;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ae8e0(uVar8,param_2,lVar7,lVar10,*(undefined8 *)(param_1 + 0x48),lVar1,uVar9,
                            *(undefined8 *)(param_1 + 0x50),lVar4);
      }
      _objc_release(lVar7);
      _objc_release(lVar3);
      _objc_release(uVar8);
      _objc_release(lVar10);
      *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
      *(undefined1 *)(param_1 + 0x60) = 1;
    }
  }
  return;
}



/* Entry: 1064f8a18; end: 1064f8a2b; -[SCChatViewLogger _didSwipeToEnter] */

bool FUN_1064f8a18(long param_1)

{
  return (*(ulong *)(param_1 + 0x48) & 0xfffffffffffffffe) == 2;
}



/* Entry: 1064f8a2c; end: 1064f8b5b; -[SCChatViewLogger _logChatHeaderMetricsWithCorrespondentId:isGroupConversation:conversationId:] */

void FUN_1064f8a2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 0x88) != 0) && (*(long *)(param_1 + 0x90) != 0)) {
    func_0x00010bf4b900(*(long *)(param_1 + 0x88),param_2,
                        &PTR____CFConstantStringClassReference_110dad538);
    func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x90),param_2,
                        &PTR____CFConstantStringClassReference_110dad538);
    func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x88),param_2,
                        &PTR____CFConstantStringClassReference_110e52f98);
    func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x90),param_2,
                        &PTR____CFConstantStringClassReference_110e52f98);
    func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x88),param_2,
                        &PTR____CFConstantStringClassReference_110e99af8);
    func_0x00010bf4b900(*(undefined8 *)(param_1 + 0x90),param_2,
                        &PTR____CFConstantStringClassReference_110e99af8);
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ae980();
    _objc_release(uVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064f8b5c; end: 1064f8bcf; -[SCChatViewLogger .cxx_destruct] */

void FUN_1064f8b5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x18);
  return;
}



/* Entry: 1064f8bd0; end: 1064f8c3b; -[SCCChatScrollHandler initWithGestureHandler:] */

undefined1 * FUN_1064f8bd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f8c3c; end: 1064f8c6b; -[SCCChatScrollHandler onHorizontalScrollStart] */

void FUN_1064f8c3c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c221080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f8c6c; end: 1064f8c9b; -[SCCChatScrollHandler onHorizontalScrollEnd] */

void FUN_1064f8c6c(long param_1)

{
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c221080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064f8c9c; end: 1064f8ca7; -[SCCChatScrollHandler pushToValdiMarshaller:] */

undefined8 FUN_1064f8c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df4f0;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  func_0x00010b05f0d4();
  return param_3;
}



/* Entry: 1064f8ca8; end: 1064f8caf; -[SCCChatScrollHandler .cxx_destruct] */

void FUN_1064f8ca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1064f8cb0; end: 1064f8dc3;  */

void FUN_1064f8cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bf490e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_retain(uVar1);
  uVar2 = param_2;
  func_0x00010bf43280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064f8dc4; end: 1064f8eff;  */

void FUN_1064f8dc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064f8f00;
  uStack_40 = 0x1064f8f10;
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064f8f00; end: 1064f8f17;  */

void FUN_1064f8f00(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064f8f18; end: 1064f90bb;  */

void FUN_1064f8f18(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf507c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010bf60a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c244a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar5 = lVar1;
  func_0x00010c0cbb60();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  if (lVar9 == 0) {
    lVar10 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  puVar7 = PTR_PTR_1126cb2f8;
  lVar5 = lVar3;
  func_0x00010c2923e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb8c0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d8e0(*(undefined8 *)(param_1 + 0x40));
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar7;
  _objc_release(uVar8);
  _objc_release(lVar10);
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1064f90bc; end: 1064f91ff; -[SCChatActiveConversationInformationMixer initWithSourceInformation:activeConversationViewModel:quotedMessageData:remoteUserPresenceInformation:saturnStatusVisible:] */

undefined1 *
FUN_1064f90bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1958;
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdc51e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f9200; end: 1064f9227; -[SCChatActiveConversationInformationMixer activeConversationInformation] */

void FUN_1064f9200(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064f9228; end: 1064f9363; -[SCChatActiveConversationInformationMixer _activeConversationInformation] */

void FUN_1064f9228(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar11 = uVar6;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar11 == 0) {
LAB_1064f94f4:
    puVar1 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar12 = uVar7;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar12 == 0) {
      _objc_release(uVar11);
      goto LAB_1064f94f4;
    }
    uVar13 = uVar7;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar13;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    if (uVar14 == 0) goto LAB_1064f94f4;
    uVar11 = uVar6;
    func_0x00010bfb50e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar7;
    func_0x00010bfb50e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bf50940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2be20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar13);
    uVar13 = uVar12;
    func_0x00010c074920();
    if ((uVar13 & 1) == 0) {
      uVar13 = uVar12;
      func_0x00010c122da0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010c122e00(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100bec1f0(uVar13,uVar14);
      _objc_release(uVar14);
      _objc_release(uVar13);
    }
    uVar13 = uVar12;
    func_0x00010c074920();
    if ((uVar13 & 1) == 0) {
      uVar13 = uVar12;
      func_0x00010c122da0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar12;
      func_0x00010c122e00(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100bf0c60(uVar13,uVar14);
      _objc_release(uVar14);
      _objc_release(uVar13);
    }
    puVar4 = PTR_PTR_1126cb300;
    _objc_opt_new(PTR_PTR_1126cb300);
    uVar13 = uVar12;
    func_0x00010bf50280(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab180(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar13);
    func_0x00010bf50920(uVar12);
    func_0x00010c2ab1c0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf37160(uVar11);
    func_0x00010c2aa600(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x00010bfe5ec0(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa560(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar13);
    puVar1 = PTR_PTR_1126b6100;
    _objc_retain(uVar8);
    _objc_alloc(puVar1);
    func_0x00010c0df180(uVar8);
    func_0x00010c0df160(uVar8);
    _objc_release(uVar8);
    func_0x00010c030580(puVar1);
    func_0x00010c2b5be0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar13 = uVar9;
    func_0x00010c0ec5e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b66a0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar13);
    func_0x00010c2af3e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b03e0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6920(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b6900(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c074920();
    if ((uVar13 & 1) == 0) {
      uVar13 = uVar12;
      func_0x00010c122e00(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b6960(puVar4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar13);
    }
    puVar1 = PTR_PTR_1126ae750;
    puVar5 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar12);
    _objc_release(uVar11);
  }
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1064f9364; end: 1064f9833;  */

void FUN_1064f9364(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar1;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar6 != 0) {
    uVar7 = uVar2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar7 == 0) {
      _objc_release(uVar6);
    }
    else {
      uVar8 = uVar2;
      func_0x00010c0ec5e0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010bf50280();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      if (uVar9 != 0) {
        uVar6 = uVar1;
        func_0x00010bfb50e0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar2;
        func_0x00010bfb50e0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf50940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2be20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar8);
        uVar8 = uVar7;
        func_0x00010c074920();
        if ((uVar8 & 1) == 0) {
          uVar8 = uVar7;
          func_0x00010c122da0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c122e00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x000100bec1f0(uVar8,uVar9);
          _objc_release(uVar9);
          _objc_release(uVar8);
        }
        uVar8 = uVar7;
        func_0x00010c074920();
        if ((uVar8 & 1) == 0) {
          uVar8 = uVar7;
          func_0x00010c122da0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar7;
          func_0x00010c122e00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x000100bf0c60(uVar8,uVar9);
          _objc_release(uVar9);
          _objc_release(uVar8);
        }
        puVar11 = PTR_PTR_1126cb300;
        _objc_opt_new(PTR_PTR_1126cb300);
        uVar8 = uVar7;
        func_0x00010bf50280(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2ab180(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        func_0x00010bf50920(uVar7);
        func_0x00010c2ab1c0(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010bf37160(uVar6);
        func_0x00010c2aa600(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar8 = uVar6;
        func_0x00010bfe5ec0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2aa560(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        puVar10 = PTR_PTR_1126b6100;
        _objc_retain(uVar3);
        _objc_alloc(puVar10);
        func_0x00010c0df180(uVar3);
        func_0x00010c0df160(uVar3);
        _objc_release(uVar3);
        func_0x00010c030580(puVar10);
        func_0x00010c2b5be0(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        uVar8 = uVar4;
        func_0x00010c0ec5e0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b66a0(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar8);
        func_0x00010c2af3e0(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b03e0(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b6920(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x00010c2b6900(puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c074920();
        if ((uVar8 & 1) == 0) {
          uVar8 = uVar7;
          func_0x00010c122e00(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b6960(puVar11);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar8);
        }
        puVar10 = PTR_PTR_1126ae750;
        puVar12 = puVar11;
        func_0x00010bf21f60(puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2468a0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar12);
        _objc_release(puVar11);
        _objc_release(uVar7);
        _objc_release(uVar6);
        goto LAB_1064f97e8;
      }
    }
  }
  puVar10 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
LAB_1064f97e8:
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1064f9834; end: 1064f9893; -[SCChatActiveConversationInformationMixer .cxx_destruct] */

void FUN_1064f9834(long param_1)

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



/* Entry: 1064f9894; end: 1064f9a83; +[SCChatMessageIndexHelper messageIndexForLongPress:forViewModel:inTableView:includeWhitespace:] */

ulong FUN_1064f9894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,ulong param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c09ef00(param_5);
  uVar2 = param_7;
  func_0x00010bfed080(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_7;
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cb308;
  _objc_retain(param_6);
  _objc_opt_class(puVar4);
  uVar6 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar4);
  uVar1 = param_6;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_6);
  puVar4 = PTR_PTR_1126cb310;
  _objc_opt_class(PTR_PTR_1126cb310);
  uVar6 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  if ((uVar6 & 1) == 0) {
LAB_1064f99e0:
    puVar4 = PTR_PTR_1126cb318;
    _objc_opt_class(PTR_PTR_1126cb318);
    uVar6 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      goto LAB_1064f9a34;
    }
    _objc_retain(uVar3);
    func_0x00010bf512a0(param_1,param_2,param_7);
    uVar6 = uVar3;
    func_0x00010beeeb40(uVar3);
  }
  else {
    uVar6 = uVar1;
    func_0x00010c0cbb20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010bf529e0();
    _objc_release(uVar6);
    if (uVar5 < 2) goto LAB_1064f99e0;
    _objc_retain(uVar3);
    func_0x00010bf512a0(param_1,param_2,param_7);
    uVar5 = uVar3;
    func_0x00010bfed120();
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar5;
      func_0x00010c142240();
      _objc_release(uVar5);
    }
  }
  _objc_release(uVar3);
LAB_1064f9a34:
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  return uVar6;
}



/* Entry: 1064f9a84; end: 1064f9bbf; +[SCChatMessageIndexHelper messageIndexForIndexPath:locationInView:tableView:] */

ulong FUN_1064f9a84(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong in_x3;
  ulong uVar6;
  
  _objc_retain(in_x3);
  uVar3 = in_x3;
  func_0x00010bf33b80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cb318;
  _objc_opt_class(PTR_PTR_1126cb318);
  uVar6 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar4 = PTR_PTR_1126cb320;
  uVar6 = uVar3;
  if (uVar1 == 0) {
    _objc_retain(uVar3);
    _objc_opt_class(puVar4);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    if (uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      func_0x00010bf512a0(param_1,param_2,in_x3);
      func_0x00010bfecb80(uVar3);
    }
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf512a0(param_1,param_2,in_x3);
    func_0x00010beeeb40(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(in_x3);
  return uVar6;
}



/* Entry: 1064f9bc0; end: 1064f9c3f;  */

void FUN_1064f9bc0(undefined8 param_1,uint param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  func_0x00010c2544c0();
  if ((param_2 | 2) == 3) {
    uVar2 = param_1;
    func_0x00010c06d4a0();
    ppuVar1 = &PTR_PTR_1126cb328;
    if ((int)uVar2 == 0) {
      ppuVar1 = &PTR_PTR_1126cb330;
    }
    puVar3 = *ppuVar1;
    _objc_opt_class(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1064f9c40; end: 1064f9c8f;  */

void FUN_1064f9c40(undefined8 param_1,uint param_2)

{
  func_0x00010c2533e0();
  if ((param_2 < 0xb) && ((1 << (ulong)(param_2 & 0x1f) & 0x418U) != 0)) {
    _objc_opt_class(PTR_PTR_1126cb338);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1064f9c90; end: 1064f9d63; -[SCChatPluginPresentationTrackingUIContainer initWithContainer:onAttach:onDetach:] */

undefined1 *
FUN_1064f9c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f1960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1064f9d64; end: 1064f9d6b; -[SCChatPluginPresentationTrackingUIContainer attachUI:] */

void FUN_1064f9d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attachUI_completion__1125a0c10,param_3,0);
  return;
}



/* Entry: 1064f9d6c; end: 1064f9e87; -[SCChatPluginPresentationTrackingUIContainer attachUI:completion:] */

void FUN_1064f9d6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_attachUI_completion__1125a0c10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if ((uVar1 & 1) == 0) {
    func_0x00010bf0c980(uVar3);
    _objc_release(param_3);
    (**(code **)(lVar2 + 0x10))(lVar2);
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    _objc_retain(lVar2);
    _objc_retain(param_4);
    func_0x00010bf0c9a0(uVar3);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1064f9e88; end: 1064f9ec7;  */

void FUN_1064f9e88(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064f9eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1064f9ec8; end: 1064f9f7b; -[SCChatPluginPresentationTrackingUIContainer detachUI:] */

void FUN_1064f9ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1064f9f7c;
  puStack_48 = &UNK_11088fcb8;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010bf6f440(uVar2,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1064f9f7c; end: 1064f9fbb;  */

void FUN_1064f9f7c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001064f9fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1064f9fbc; end: 1064f9ff7; -[SCChatPluginPresentationTrackingUIContainer .cxx_destruct] */

void FUN_1064f9fbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064f9ff8; end: 1064fa0ef;  */

void FUN_1064f9ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1064fa0f0;
  uStack_30 = 0x1064fa100;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  puStack_28 = puVar1;
  func_0x00010c0c0800(param_2);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064fa0f0; end: 1064fa107;  */

void FUN_1064fa0f0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064fa108; end: 1064fa25f;  */

void FUN_1064fa108(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cbb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126ae750;
  puVar3 = PTR_PTR_1126cb340;
  _objc_alloc(PTR_PTR_1126cb340);
  uVar1 = param_2;
  func_0x00010bf507c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf60a00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c244a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar6 = uVar5;
  func_0x00010bd869d0(uVar5,&PTR___NSConcreteGlobalBlock_11098cf80,
                      &PTR___NSConcreteGlobalBlock_11098cfc0);
  func_0x00010c0058a0(puVar3);
  func_0x00010c2468a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar8 = *(undefined8 *)(lVar9 + 0x28);
  *(undefined **)(lVar9 + 0x28) = puVar7;
  _objc_release(uVar8);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1064fa260; end: 1064fa263;  */

void FUN_1064fa260(void)

{
  return;
}



/* Entry: 1064fa264; end: 1064fa2fb;  */

void FUN_1064fa264(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae750;
  if (param_2 == 0) {
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010c11ecc0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2468a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1064fa2fc; end: 1064fa3c7; -[SCChatWallpaperContainer initWithWallpaper:conversationId:wallpaperImage:] */

undefined1 *
FUN_1064fa2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1968;
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



/* Entry: 1064fa3c8; end: 1064fa48f; -[SCChatWallpaperContainer isEqual:] */

undefined8 FUN_1064fa3c8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) goto LAB_1064fa468;
  uVar4 = 0;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_1064fa474;
  uVar1 = param_1;
  _objc_opt_class(param_1);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,uVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    goto LAB_1064fa474;
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 == *(long *)(param_3 + 8)) {
LAB_1064fa468:
    uVar4 = 1;
  }
  else {
    func_0x00010c071ae0();
    if ((int)lVar3 != 0) {
      lVar3 = *(long *)(param_1 + 0x10);
      if (((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) &&
         (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) goto LAB_1064fa468;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c071ae0(uVar4);
  }
LAB_1064fa474:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1064fa490; end: 1064fa497; -[SCChatWallpaperContainer wallpaper] */

undefined8 FUN_1064fa490(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1064fa498; end: 1064fa4c7; -[SCChatWallpaperContainer setWallpaper:] */

void FUN_1064fa498(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064fa4c8; end: 1064fa4cf; -[SCChatWallpaperContainer conversationId] */

undefined8 FUN_1064fa4c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1064fa4d0; end: 1064fa4ff; -[SCChatWallpaperContainer setConversationId:] */

void FUN_1064fa4d0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064fa500; end: 1064fa507; -[SCChatWallpaperContainer wallpaperImage] */

undefined8 FUN_1064fa500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1064fa508; end: 1064fa537; -[SCChatWallpaperContainer setWallpaperImage:] */

void FUN_1064fa508(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1064fa538; end: 1064fa573; -[SCChatWallpaperContainer .cxx_destruct] */

void FUN_1064fa538(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1064fa574; end: 1064fa643;  */

void FUN_1064fa574(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  func_0x00010bf870a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  uVar1 = param_1;
  func_0x00010bfb26a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1064fa644; end: 1064fa76f;  */

void FUN_1064fa644(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfa4cc0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bfad7a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1064fa770; end: 1064fa7a7;  */

bool FUN_1064fa770(undefined8 param_1,long param_2)

{
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 != 0;
}



/* Entry: 1064fa7a8; end: 1064fa8a3;  */

void FUN_1064fa7a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126cb348;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010bf500c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf37ac0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf50280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar5 = uVar4;
  func_0x00010c272380(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c062840(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126ae750;
  func_0x00010c2468a0(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1064fa8a4; end: 1064fa963;  */

void FUN_1064fa8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  FUN_1064fa574(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb26a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1064fa964; end: 1064fadeb;  */

void FUN_1064fa964(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c2a1840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar9 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar8 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar9);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_2;
    func_0x00010c2a1840();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf50280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0c61c0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    lVar4 = lVar1;
    func_0x00010c09dbc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeea60();
    _objc_release(lVar5);
    _objc_release(lVar4);
    func_0x00010c1ec620(puVar8);
    puVar6 = puVar8;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c3108;
    _objc_opt_class(PTR_PTR_1126c3108);
    puVar7 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar9);
    puVar9 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar9 = (undefined *)0x0;
    }
    _objc_retain(puVar9);
    puVar7 = puVar9;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126ae6b8;
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    _objc_retain(param_2);
    _objc_retain(lVar2);
    _objc_retain(puVar7);
    _objc_retain(lVar3);
    _objc_retain(lVar1);
    func_0x00010bf54280(puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    _objc_release(lVar2);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar10);
    _objc_release(lVar2);
    _objc_release(puVar7);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(puVar6);
  }
  _objc_release(puVar8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1064fadec; end: 1064faef3;  */

void FUN_1064fadec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar4 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
  }
  else {
    puVar4 = PTR_PTR_1126cb348;
    _objc_alloc(PTR_PTR_1126cb348);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c2a1840(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bf50280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c062840(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c2468a0(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064faef4; end: 1064fafbf;  */

void FUN_1064faef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x00010c0b8600(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1064fafc0; end: 1064fb0f7;  */

void FUN_1064fafc0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_2);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064fb0f8;
  uStack_40 = 0x1064fb108;
  puVar1 = PTR_PTR_1126ae750;
  func_0x00010c0db140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puStack_38 = puVar1;
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010c0c0800(param_2);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1064fb0f8; end: 1064fb10f;  */

void FUN_1064fb0f8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064fb110; end: 1064fb45f;  */

void FUN_1064fb110(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  _objc_retain(param_2);
  lVar15 = param_2;
  func_0x00010bf500c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar15;
  func_0x00010c0cbb60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar13;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar13);
  _objc_release(lVar15);
  if (lVar1 == 0) {
    puVar11 = PTR_PTR_1126ae750;
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar15 = *(long *)(lVar13 + 0x28);
    *(undefined **)(lVar13 + 0x28) = puVar11;
  }
  else {
    lVar15 = param_2;
    func_0x00010bf500c0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = param_2;
    func_0x00010bf507c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010bf60a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c244a80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bd869d0();
    lVar5 = param_2;
    func_0x00010bf50800();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126cb350;
    _objc_alloc();
    lVar7 = lVar1;
    func_0x00010bf50280(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010bf490e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005160();
    _objc_release(lVar14);
    _objc_release(lVar7);
    puVar8 = PTR_PTR_1126cb2f8;
    lVar7 = lVar2;
    func_0x00010c2923e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar1;
    func_0x00010c0cb8c0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d8e0(*(undefined8 *)(param_1 + 0x38),puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    _objc_release(lVar7);
    lVar7 = lVar13;
    func_0x000108ef5474(lVar13);
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar5;
    func_0x00010c120c00(lVar5);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar1;
    func_0x0001070b072c(lVar1,lVar2,lVar4,lVar7,lVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar14);
    puVar11 = PTR_PTR_1126ae750;
    puVar10 = PTR_PTR_1126cb358;
    _objc_alloc(PTR_PTR_1126cb358);
    func_0x00010c07bba0(lVar1);
    func_0x00010c005780(puVar10);
    func_0x00010c2468a0();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar12 = *(undefined8 *)(lVar14 + 0x28);
    *(undefined **)(lVar14 + 0x28) = puVar11;
    _objc_release(uVar12);
    _objc_release(puVar10);
    _objc_release(lVar9);
    _objc_release(lVar7);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar13);
  }
  _objc_release(lVar15);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064fb460; end: 1064fb463;  */

void FUN_1064fb460(void)

{
  return;
}



/* Entry: 1064fb464; end: 1064fc157; -[SCChatConversationUpdater initWithPolaroidViewTransitionResolver:pluginManager:accessoryPluginManager:messageViewModelFactory:animationDataCoordinator:pageLoadMetricsEmitter:userSession:legacyChatTooltipsService:messagingExperimentService:featureSettingsService:customStoriesDataFetcher:plusFeatureGating:plusServices:locationContextFetcher:circumstanceEngine:chatEligibilityProvider:chatDisplayReadyLogger:storiesReplayManager:remoteStoriesDataProvider:schedulingPerformer:viewModelGenerationPerformer:notificationOSSettingsRetriever:groupsCustomColorsFetcher:friendshipFlashbacksDataManager:chatTooltipsService:addToGroupCardStateObservable:locationPreferencesProvider:mapUpsellRequestService:userBirthdayProvider:saturnExperimentProvider:saturnStatusProvider:snapchattersSynchronousDataFetcher:streakMilestoneProvider:streakProvider:activeArrivalNotificationTracker:myAIExperimentServices:] */

undefined8 *
FUN_1064fb464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_188 [8];
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  _objc_retain();
  _objc_retain();
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
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_37);
  _objc_retain();
  puStack_80 = PTR_PTR_1126f1970;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb360;
    _objc_alloc_init();
    uVar7 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar7 = puVar1[7];
    puVar1[7] = puVar2;
    _objc_release(uVar7);
    _objc_retain(param_22);
    uVar7 = puVar1[2];
    puVar1[2] = param_22;
    _objc_release(uVar7);
    _objc_retain(param_23);
    uVar7 = puVar1[3];
    puVar1[3] = param_23;
    _objc_release(uVar7);
    _objc_retain(param_3);
    uVar7 = puVar1[0xb];
    puVar1[0xb] = param_3;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar7 = puVar1[0xc];
    puVar1[0xc] = puVar2;
    _objc_release(uVar7);
    _objc_retain(param_8);
    uVar7 = puVar1[0xd];
    puVar1[0xd] = param_8;
    _objc_release(uVar7);
    _objc_retain(param_6);
    uVar7 = puVar1[9];
    puVar1[9] = param_6;
    _objc_release(uVar7);
    _objc_retain(param_7);
    uVar7 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar7);
    _objc_retain(param_11);
    uVar7 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar7);
    _objc_retain(param_12);
    uVar7 = puVar1[0x1c];
    puVar1[0x1c] = param_12;
    _objc_release(uVar7);
    _objc_retain(param_13);
    uVar7 = puVar1[0x20];
    puVar1[0x20] = param_13;
    _objc_release(uVar7);
    _objc_retain(param_9);
    uVar7 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar7);
    _objc_retain(param_4);
    uVar7 = puVar1[0xe];
    puVar1[0xe] = param_4;
    _objc_release(uVar7);
    _objc_retain(param_10);
    uVar7 = puVar1[0xf];
    puVar1[0xf] = param_10;
    _objc_release(uVar7);
    _objc_retain(param_16);
    uVar7 = puVar1[0x13];
    puVar1[0x13] = param_16;
    _objc_release(uVar7);
    _objc_retain(param_21);
    uVar7 = puVar1[0x23];
    puVar1[0x23] = param_21;
    _objc_release(uVar7);
    _objc_retain(param_17);
    uVar7 = puVar1[0x18];
    puVar1[0x18] = param_17;
    _objc_release(uVar7);
    _objc_retain(param_38);
    uVar7 = puVar1[0x19];
    puVar1[0x19] = param_38;
    _objc_release(uVar7);
    _objc_retain(param_18);
    uVar7 = puVar1[0x1b];
    puVar1[0x1b] = param_18;
    _objc_release(uVar7);
    _objc_retain(param_19);
    uVar7 = puVar1[0x21];
    puVar1[0x21] = param_19;
    _objc_release(uVar7);
    _objc_retain(param_14);
    uVar7 = puVar1[0x1d];
    puVar1[0x1d] = param_14;
    _objc_release(uVar7);
    _objc_retain(param_15);
    uVar7 = puVar1[0x1e];
    puVar1[0x1e] = param_15;
    _objc_release(uVar7);
    _objc_retain(param_20);
    uVar7 = puVar1[0x17];
    puVar1[0x17] = param_20;
    _objc_release(uVar7);
    _objc_retain(param_24);
    uVar7 = puVar1[0x11];
    puVar1[0x11] = param_24;
    _objc_release(uVar7);
    _objc_retain(param_25);
    uVar7 = puVar1[0x12];
    puVar1[0x12] = param_25;
    _objc_release(uVar7);
    _objc_retain(param_26);
    uVar7 = puVar1[0x24];
    puVar1[0x24] = param_26;
    _objc_release(uVar7);
    _objc_retain(param_27);
    uVar7 = puVar1[0x26];
    puVar1[0x26] = param_27;
    _objc_release(uVar7);
    _objc_retain(param_29);
    uVar7 = puVar1[0x27];
    puVar1[0x27] = param_29;
    _objc_release(uVar7);
    _objc_retain(param_30);
    uVar7 = puVar1[0x28];
    puVar1[0x28] = param_30;
    _objc_release(uVar7);
    _objc_retain(param_31);
    uVar7 = puVar1[0x2c];
    puVar1[0x2c] = param_31;
    _objc_release(uVar7);
    _objc_retain(param_32);
    uVar7 = puVar1[0x2d];
    puVar1[0x2d] = param_32;
    _objc_release(uVar7);
    _objc_retain(param_33);
    uVar7 = puVar1[0x2e];
    puVar1[0x2e] = param_33;
    _objc_release(uVar7);
    _objc_retain(param_34);
    uVar7 = puVar1[0x2f];
    puVar1[0x2f] = param_34;
    _objc_release(uVar7);
    _objc_retain(param_36);
    uVar7 = puVar1[0x30];
    puVar1[0x30] = param_36;
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126cb368;
    _objc_opt_new();
    uVar7 = puVar1[0x35];
    puVar1[0x35] = puVar2;
    _objc_release(uVar7);
    _objc_retain(param_35);
    uVar7 = puVar1[0x36];
    puVar1[0x36] = param_35;
    _objc_release(uVar7);
    _objc_retain(param_37);
    uVar7 = puVar1[0x2a];
    puVar1[0x2a] = param_37;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae720;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_1064fc158;
    puStack_98 = &UNK_1108429c8;
    _objc_retain(param_17);
    uStack_90 = param_17;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c183b40();
    _objc_release(uVar7);
    _objc_initWeak(auStack_b8,puVar1);
    uVar7 = param_4;
    func_0x00010c269d40(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar7;
    func_0x00010c28d7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c26d5a0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puStack_e0 = puVar2;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1064fc198;
    puStack_c8 = &UNK_110843540;
    _objc_copyWeak(auStack_c0,auStack_b8);
    uVar6 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar7);
    uVar7 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar7;
    func_0x00010c28d7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c26d5a0(0x3fc999999999999a);
    _objc_retainAutoreleasedReturnValue();
    puStack_108 = puVar2;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1064fc2b8;
    puStack_f0 = &UNK_110842a38;
    _objc_copyWeak(auStack_e8,auStack_b8);
    uVar4 = uVar5;
    func_0x00010c25ff60(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar7);
    uVar5 = puVar1[0x13];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf4f440();
    _objc_retainAutoreleasedReturnValue();
    puStack_130 = puVar2;
    uStack_128 = 0xc2000000;
    uStack_120 = 0x1064fc3a0;
    puStack_118 = &UNK_1109294b0;
    _objc_copyWeak(auStack_110,auStack_b8);
    uVar4 = uVar7;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar5);
    uVar6 = puVar1[0x1d];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c0caea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c28d760();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar2;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x1064fc524;
    puStack_140 = &UNK_1108560f0;
    _objc_copyWeak(auStack_138,auStack_b8);
    uVar7 = uVar4;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar6);
    puStack_180 = puVar2;
    uStack_178 = 0xc2000000;
    pcStack_170 = FUN_1064fc5ec;
    puStack_168 = &UNK_1109294e0;
    _objc_copyWeak(auStack_160,auStack_b8);
    uVar7 = param_28;
    func_0x00010c25ff60(param_28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[2];
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_188,auStack_b8);
    uVar4 = uVar7;
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0x1f];
    puVar1[0x1f] = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(uVar7);
    _objc_destroyWeak(auStack_188);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_90);
  }
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
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



/* Entry: 1064fc158; end: 1064fc197;  */

void FUN_1064fc158(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e531f8,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 1064fc198; end: 1064fc2b7;  */

void FUN_1064fc198(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126cb370;
    func_0x00010bf37380(PTR_PTR_1126cb370);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c0cce60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2786a0(uVar4);
    _objc_release(puVar5);
    _objc_release(uVar4);
    func_0x00010be9af00(param_1);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1064fc2b8; end: 1064fc5df;  */

void FUN_1064fc2b8(long param_1,int param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010bf1f3c0();
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      puVar1 = PTR_PTR_1126cb370;
      func_0x00010bf373a0(PTR_PTR_1126cb370);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      func_0x00010c0cce60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2786a0(uVar2);
      _objc_release(puVar3);
      _objc_release(uVar2);
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be9af00(param_1);
      _objc_release(uVar2);
      _objc_release(puVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1064fc5e0; end: 1064fc5eb;  */

void FUN_1064fc5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be2c3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__handleMerlinBioSubscriptionUpda_112568a90,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1064fc5ec; end: 1064fc6a7;  */

void FUN_1064fc5ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_1);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
    _objc_release(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 1064fc6a8; end: 1064fc6b3;  */

void FUN_1064fc6a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__processAddToGroupCardState__11257dab8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1064fc6b4; end: 1064fc6df;  */

void FUN_1064fc6b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1064fc6e0; end: 1064fcb17; -[SCChatConversationUpdater initWithPolaroidViewTransitionResolver:pluginManager:accessoryPluginManager:messageViewModelFactory:animationDataCoordinator:pageLoadMetricsEmitter:userSession:legacyChatTooltipsService:messagingExperimentService:featureSettingsService:customStoriesDataFetcher:plusFeatureGating:plusServices:locationContextFetcher:circumstanceEngine:chatEligibilityProvider:chatDisplayReadyLogger:storiesReplayManager:remoteStoriesDataProvider:viewModelGenerationPerformer:notificationOSSettingsRetriever:groupsCustomColorsFetcher:friendshipFlashbacksDataManager:chatTooltipsService:addToGroupCardStateObservable:locationPreferencesProvider:mapUpsellRequestService:userBirthdayProvider:saturnExperimentProvider:saturnStatusProvider:snapchattersSynchronousDataFetcher:streakMilestoneProvider:streakProvider:activeArrivalNotificationTracker:myAIExperimentServices:] */

undefined8
FUN_1064fc6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37)

{
  long lVar1;
  
  lVar1 = lRam00000001136c3a18;
  _objc_retain();
  _objc_retain(param_36);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_33);
  _objc_retain(param_32);
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  if (lVar1 != -1) {
    func_0x00010002a2fc(0x1136c3a18,&PTR___NSConcreteGlobalBlock_1109297a0);
  }
  func_0x00010c0379c0();
  _objc_release(param_37);
  _objc_release(param_36);
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
  return param_1;
}



/* Entry: 1064fcb18; end: 1064fcbaf; -[SCChatConversationUpdater addListener:] */

void FUN_1064fcb18(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x00010bef9980(*(undefined8 *)(param_1 + 8));
  lVar1 = param_1;
  func_0x00010bf50ac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf74300(param_3);
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (uVar2 = param_3,
     _objc_opt_respondsToSelector(param_3,PTR_s_didInitialConversationFetchFailF_1125bb708),
     (uVar2 & 1) != 0)) {
    func_0x00010bf77580(param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1064fcbb0; end: 1064fcbb7; -[SCChatConversationUpdater removeListener:] */

void FUN_1064fcbb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 1064fcbb8; end: 1064fcc0f; -[SCChatConversationUpdater regenerateViewModelsForContentSizeCategoryChange] */

void FUN_1064fcbb8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1064fcc10;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 1064fcc10; end: 1064fcc7f;  */

void FUN_1064fcc10(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bef06a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  _objc_release();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9af00(uVar3,param_2,lVar2,0,0x17);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 1064fcc80; end: 1064fcd37; -[SCChatConversationUpdater _setActiveConversationId:configuration:] */

void FUN_1064fcc80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x00010c1bf940(param_1,param_2,0);
  func_0x00010c1bf8e0(param_1,param_2,0);
  func_0x00010c1bf8c0(param_1,param_2,0);
  func_0x00010c1bf900(0,param_1);
  func_0x00010c1620e0(param_1,param_2,0);
  func_0x00010c1b0a60(param_1,param_2,0);
  func_0x00010c1b0a20(param_1,param_2,0);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x158));
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  _objc_release(uVar1);
  func_0x00010c180a40(param_1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c177ac0(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1064fcd38; end: 1064fce8b; -[SCChatConversationUpdater _fetchFriendLocationContextCaptions:] */

void FUN_1064fcd38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1064fce8c;
  uStack_40 = 0x1064fce9c;
  uStack_38 = 0;
  func_0x00010c0be1a0(param_3);
  lVar1 = puStack_58[5];
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c1361a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1064fce8c; end: 1064fcea3;  */

void FUN_1064fce8c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1064fcea4; end: 1064fcedb;  */

void FUN_1064fcea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


