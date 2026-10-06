/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b08bccc; end: 10b08bd67;  */

void FUN_10b08bccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6b18;
  func_0x00010c22b6a0(PTR_PTR_1126b6b18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126df528;
  _objc_opt_new(PTR_PTR_1126df528);
  func_0x00010bf96420(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b6b18;
  func_0x00010c22b6a0(PTR_PTR_1126b6b18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126df528;
  _objc_opt_new(PTR_PTR_1126df528);
  func_0x00010bf96440(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b08bd68; end: 10b08be1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08bd68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = 0;
    lVar4 = (long)_DAT_11278c354;
    do {
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0dfd20(uVar1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b60();
      _objc_release(uVar1);
      lVar3 = lVar3 + 1;
    } while (lVar3 != 10000);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bfce1e0(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b08be1c; end: 10b08be5b; -[SCCATMStressTestButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08be1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278c358,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c354,0);
  return;
}



/* Entry: 10b08be5c; end: 10b08bfb3; -[SCQueuePerformerDebugUIEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08be5c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  lVar1 = param_1;
  func_0x00010bcb8544();
  if ((int)lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + _DAT_11278c35c);
    *(undefined **)(param_1 + _DAT_11278c35c) = puVar2;
    _objc_release(uVar5);
    param_1 = param_1 + _DAT_11278c364;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010bf07a00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf72840();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    lVar4 = lVar3;
    func_0x00010c25ff60(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  return;
}



/* Entry: 10b08bfb4; end: 10b08bfdf;  */

void FUN_10b08bfb4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b08bfe0; end: 10b08c037; -[SCQueuePerformerDebugUIEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08bfe0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + _DAT_11278c360));
  puStack_28 = PTR_PTR_1127054a0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b08c038; end: 10b08c0fb; -[SCQueuePerformerDebugUIEntryPoint _didBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08c038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11278c360;
  if (*(long *)(param_1 + lVar5) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126df530;
  _objc_opt_new();
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010befbb60(puVar3,param_2,*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b08c0fc; end: 10b08c153; -[SCQueuePerformerDebugUIEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08c0fc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278c368);
  _objc_destroyWeak(param_1 + _DAT_11278c364);
  _objc_storeStrong(param_1 + _DAT_11278c360,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278c35c,0);
  return;
}



/* Entry: 10b08c154; end: 10b08c1bf; -[SCDeckDefaultBridgingSCUIContainer initWithPresentingContainer:] */

undefined1 * FUN_10b08c154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127054a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08c1c0; end: 10b08c1ef; -[SCDeckDefaultBridgingSCUIContainer attachUI:] */

void FUN_10b08c1c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b08c1f0; end: 10b08c237; -[SCDeckDefaultBridgingSCUIContainer detachUI:] */

void FUN_10b08c1f0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b08c238; end: 10b08c277; -[SCDeckDefaultBridgingSCUIContainer attachToPresentingContext] */

void FUN_10b08c238(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf0c980();
  _objc_release(lVar1);
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 10b08c278; end: 10b08c2f3; -[SCDeckDefaultBridgingSCUIContainer detachFromPresentingContext] */

void FUN_10b08c278(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    param_1 = param_1 + 0x10;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf6f440();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 10b08c2f4; end: 10b08c2ff;  */

void FUN_10b08c2f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setAttachedToPresentingContext__112638608,0);
  return;
}



/* Entry: 10b08c300; end: 10b08c307; -[SCDeckDefaultBridgingSCUIContainer isAttachedToPresentingContext] */

undefined1 FUN_10b08c300(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 10b08c308; end: 10b08c30f; -[SCDeckDefaultBridgingSCUIContainer setAttachedToPresentingContext:] */

void FUN_10b08c308(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b08c310; end: 10b08c33b; -[SCDeckDefaultBridgingSCUIContainer .cxx_destruct] */

void FUN_10b08c310(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08c33c; end: 10b08c34f; -[SCDeckNoopBridgingSCUIContainer detachUI:] */

void FUN_10b08c33c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b08c348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10b08c350; end: 10b08c35b; -[SCDeckNoopBridgingSCUIContainer attachToPresentingContext] */

void FUN_10b08c350(long param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



/* Entry: 10b08c35c; end: 10b08c363; -[SCDeckNoopBridgingSCUIContainer detachFromPresentingContext] */

void FUN_10b08c35c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c16afb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setAttachedToPresentingContext__112638608,0);
  return;
}



/* Entry: 10b08c364; end: 10b08c36b; -[SCDeckNoopBridgingSCUIContainer isAttachedToPresentingContext] */

undefined1 FUN_10b08c364(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b08c36c; end: 10b08c373; -[SCDeckNoopBridgingSCUIContainer setAttachedToPresentingContext:] */

void FUN_10b08c36c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b08c374; end: 10b08c37b; -[SCDeckUIKitModalBridgingSCUIContainer initWithPresentingViewController:] */

void FUN_10b08c374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c038f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPresentingViewController_1125ebdd0,param_3,0);
  return;
}



/* Entry: 10b08c37c; end: 10b08c3f7; -[SCDeckUIKitModalBridgingSCUIContainer initWithPresentingViewController:animated:] */

undefined1 *
FUN_10b08c37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1127054b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined1 *)((long)puVar1 + 0x18) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08c3f8; end: 10b08c467; -[SCDeckUIKitModalBridgingSCUIContainer attachUI:] */

void FUN_10b08c3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c10eda0();
  _objc_release(lVar1);
  _objc_storeWeak(param_1 + 0x10,param_3);
  _objc_release(param_3);
  *(undefined1 *)(param_1 + 0x19) = 1;
  return;
}



/* Entry: 10b08c468; end: 10b08c577; -[SCDeckUIKitModalBridgingSCUIContainer detachUI:] */

void FUN_10b08c468(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x19) == '\x01') {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      *(undefined1 *)(param_1 + 0x19) = 0;
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(param_3);
      }
    }
    else {
      lVar1 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c10fd00();
      _objc_retainAutoreleasedReturnValue();
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_10b08c578;
      puStack_48 = &UNK_11084aaa8;
      lStack_40 = param_1;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010bf84b00(lVar2,param_2,0,&puStack_60);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b08c578; end: 10b08c5b7;  */

void FUN_10b08c578(long param_1,undefined8 param_2)

{
  func_0x00010c16afa0(*(undefined8 *)(param_1 + 0x20),param_2,0);
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b08c5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b08c5b8; end: 10b08c5bb; -[SCDeckUIKitModalBridgingSCUIContainer attachToPresentingContext] */

void FUN_10b08c5b8(void)

{
  return;
}



/* Entry: 10b08c5bc; end: 10b08c5bf; -[SCDeckUIKitModalBridgingSCUIContainer detachFromPresentingContext] */

void FUN_10b08c5bc(void)

{
  return;
}



/* Entry: 10b08c5c0; end: 10b08c5c7; -[SCDeckUIKitModalBridgingSCUIContainer isAttachedToPresentingContext] */

undefined1 FUN_10b08c5c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x19);
}



/* Entry: 10b08c5c8; end: 10b08c5cf; -[SCDeckUIKitModalBridgingSCUIContainer setAttachedToPresentingContext:] */

void FUN_10b08c5c8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x19) = param_3;
  return;
}



/* Entry: 10b08c5d0; end: 10b08c5f7; -[SCDeckUIKitModalBridgingSCUIContainer .cxx_destruct] */

void FUN_10b08c5d0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b08c5f8; end: 10b08c69b; -[SCCDeckContainer initWithPlatformDeckContainer:valdiRuntimeProvider:] */

undefined1 *
FUN_10b08c5f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127054b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126df538;
    _objc_alloc();
    func_0x00010c0600c0();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08c69c; end: 10b08c6a3; -[SCCDeckContainer deckContainerFactory] */

undefined8 FUN_10b08c69c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b08c6a4; end: 10b08c6d3; -[SCCDeckContainer setDeckContainerFactory:] */

void FUN_10b08c6a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b08c6d4; end: 10b08c6df; -[SCCDeckContainer .cxx_destruct] */

void FUN_10b08c6d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08c6e0; end: 10b08c6e7; -[SCCDeckContainerFactory initWithValdiRuntimeProvider:platformDeckContainerFactory:] */

void FUN_10b08c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c000870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithComposerRuntimeProvider__1125ddbe0,param_3,param_4,0);
  return;
}



/* Entry: 10b08c6e8; end: 10b08c7a3; -[SCCDeckContainerFactory initWithComposerRuntimeProvider:platformDeckContainerFactory:circumstanceEngine:] */

undefined1 *
FUN_10b08c6e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1127054c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08c7a4; end: 10b08c7ab; -[SCCDeckContainerFactory initWithComposerRuntimeProvider:platformDeckContainerFactory:] */

void FUN_10b08c7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c000870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithComposerRuntimeProvider__1125ddbe0,param_3,param_4,0);
  return;
}



/* Entry: 10b08c7ac; end: 10b08ca73; -[SCCDeckContainerFactory createModalContainerWithConfig:] */

void FUN_10b08c7ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f0d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f0be0();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c10f3c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be74500(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0cfbe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be74520(param_1,param_2,lVar1);
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c081840();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_74 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c081840();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    uStack_74 = (undefined4)lVar3;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c12d2a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_78 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010c12d2a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    uStack_78 = (undefined4)lVar3;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = PTR_PTR_1126b0320;
  func_0x00010c0cf9c0(PTR_PTR_1126b0320);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b52c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c2b5c20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf809a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf1f3c0();
  puVar7 = puVar6;
  func_0x00010c2ac5a0(puVar6,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b40a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa00(uVar9,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126df540;
  _objc_alloc(PTR_PTR_1126df540);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_3;
  func_0x00010c0f0d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036a60(puVar4,param_2,uVar9,lVar1,param_1,lVar2,uStack_74,uStack_78);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar1);
  _objc_release(uVar9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b08ca74; end: 10b08cccb; -[SCCDeckContainerFactory createNavigationContainerWithConfig:] */

void FUN_10b08ca74(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b0ad8;
  func_0x00010c0d6620(PTR_PTR_1126b0ad8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf8dec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf8dec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2acd40(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf8f6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf8f6e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c2ace80(puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  uVar4 = *(ulong *)(param_1 + 0x18);
  func_0x00010c0d6640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf809a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    func_0x00010c1a4840(uVar4);
  }
  else {
    lVar3 = param_3;
    func_0x00010bf809a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    func_0x00010c1a4840(uVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf8dec0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    lVar5 = param_3;
    func_0x00010bf8dec0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf1f3c0();
    _objc_release(lVar5);
    _objc_release(lVar3);
    puVar7 = PTR_PTR_1126df548;
    if ((int)lVar6 != 0) {
      _objc_retain(uVar4);
      _objc_opt_class(puVar7);
      uVar8 = uVar4;
      _objc_opt_isKindOfClass(uVar4,puVar7);
      uVar1 = uVar4;
      if ((uVar8 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar4);
      if (uVar1 != 0) {
        func_0x00010c194360(uVar4);
      }
      _objc_release(uVar1);
    }
  }
  puVar7 = PTR_PTR_1126df550;
  _objc_alloc(PTR_PTR_1126df550);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c036a40(puVar7);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b08cccc; end: 10b08cceb; -[SCCDeckContainerFactory _platformPresentationDirectionFromComposerPresentationDirection:] */

bool FUN_10b08cccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c067fc0(param_3);
  return (int)param_3 != 0;
}



/* Entry: 10b08ccec; end: 10b08cd17; -[SCCDeckContainerFactory _platformPresentationStyleFromComposerPresentationStyle:] */

undefined1 FUN_10b08ccec(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  
  func_0x00010c067fc0();
  uVar1 = 5;
  if (param_3 != 2) {
    uVar1 = param_3 == 1;
  }
  return uVar1;
}



/* Entry: 10b08cd18; end: 10b08cd1f; -[SCCDeckContainerFactory platformDeckContainerFactory] */

undefined8 FUN_10b08cd18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b08cd20; end: 10b08cd53; -[SCCDeckContainerFactory .cxx_destruct] */

void FUN_10b08cd20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b08cd54; end: 10b08ce9b; -[SCCDeckHierarchy initWithPlatformDeckHierarchy:valdiRuntimeProvider:] */

undefined1 *
FUN_10b08cd54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127054c8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126df538;
    _objc_alloc();
    uVar3 = param_3;
    func_0x00010bf668c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_3;
    func_0x00010bf398e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000860();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar6);
    _objc_release(uVar7);
    _objc_release(uVar3);
    uVar3 = param_3;
    func_0x00010bf669c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bde4000();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08ce9c; end: 10b08cf6b; -[SCCDeckHierarchy _composerTransitionEventObservableFromPlatformObservable:] */

void FUN_10b08ce9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b08cf6c; end: 10b08d117;  */

void FUN_10b08cf6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  puStack_c8 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_10b08d118;
  uStack_70 = 0x10b08d128;
  uStack_68 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x2020000000;
  uStack_98 = 0;
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_10b08d130;
  puStack_d0 = &UNK_110cb6610;
  puStack_a8 = &uStack_b0;
  puStack_88 = puStack_c8;
  _objc_copyWeak(auStack_b8,param_1 + 0x20);
  puStack_c0 = &uStack_b0;
  _objc_copyWeak(auStack_f0,param_1 + 0x20);
  func_0x00010c0c1a00(param_2);
  puVar1 = PTR_PTR_1126df558;
  _objc_alloc(PTR_PTR_1126df558);
  func_0x00010c008520();
  _objc_destroyWeak(auStack_f0);
  _objc_destroyWeak(auStack_b8);
  __Block_object_dispose(&uStack_b0,8);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08d118; end: 10b08d12f;  */

void FUN_10b08d118(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10b08d130; end: 10b08d233;  */

void FUN_10b08d130(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bde3cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar2;
  _objc_release(uVar3);
  _objc_release(lVar1);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  return;
}



/* Entry: 10b08d234; end: 10b08d317; -[SCCDeckHierarchy _composerDataFromPlatformData:] */

void FUN_10b08d234(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf9a440(param_3);
  puVar2 = PTR_PTR_1126df560;
  _objc_alloc(PTR_PTR_1126df560);
  lVar3 = param_3;
  func_0x00010bf06840(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf034a0();
  func_0x00010bff2e00(puVar2,param_2,lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126df568;
  _objc_alloc(PTR_PTR_1126df568);
  lVar3 = param_3;
  func_0x00010c110220(param_3);
  lVar4 = param_3;
  func_0x00010c0d8d80(param_3);
  _objc_release(param_3);
  func_0x00010c0395e0((double)(int)lVar3,(double)(int)lVar4,puVar5,param_2,lVar1 == 1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b08d318; end: 10b08d323; -[SCCDeckHierarchy _composerEventTypeFromPlatformType:] */

bool FUN_10b08d318(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & 0xfffffffffffffffd) != 0;
}



/* Entry: 10b08d324; end: 10b08d32b; -[SCCDeckHierarchy deckContainerFactory] */

undefined8 FUN_10b08d324(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b08d32c; end: 10b08d35b; -[SCCDeckHierarchy setDeckContainerFactory:] */

void FUN_10b08d32c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b08d35c; end: 10b08d363; -[SCCDeckHierarchy deckTransitionEvents] */

undefined8 FUN_10b08d35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b08d364; end: 10b08d393; -[SCCDeckHierarchy setDeckTransitionEvents:] */

void FUN_10b08d364(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b08d394; end: 10b08d3cf; -[SCCDeckHierarchy .cxx_destruct] */

void FUN_10b08d394(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08d3d0; end: 10b08d3e3; -[SCCModalContainer initWithPlatformDeckContainer:valdiRuntimeProvider:pageConfig:] */

void FUN_10b08d3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c036a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithPlatformDeckContainer_va_1125eb498,param_3,param_4,0,param_5,0,0)
  ;
  return;
}



/* Entry: 10b08d3e4; end: 10b08d51b; -[SCCModalContainer initWithPlatformDeckContainer:valdiRuntimeProvider:circumstance:pageConfig:isTrayPresentation:removePageSheetBackground:] */

undefined1 *
FUN_10b08d3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1127054d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
    *(undefined1 *)((long)puVar1 + 0x29) = param_8;
    puVar3 = PTR_PTR_1126df538;
    _objc_alloc();
    func_0x00010c000860();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08d51c; end: 10b08d5b3; -[SCCModalContainer presentWithAnimated:] */

void FUN_10b08d51c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b08d5b4;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08d5b4; end: 10b08d6bf;  */

void FUN_10b08d5b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  lVar4 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010be5b780(lVar4,param_2,*(undefined8 *)(lVar4 + 0x20),lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222400(*(undefined8 *)(param_1 + 0x20),param_2,lVar4);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b08d6c0;
  puStack_50 = &UNK_110841f20;
  func_0x00010c10eda0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,lVar4,
                      *(undefined1 *)(param_1 + 0x30),&puStack_68);
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



/* Entry: 10b08d6c0; end: 10b08d707;  */

void FUN_10b08d6c0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df570;
  _objc_alloc(PTR_PTR_1126df570);
  func_0x00010c04f580();
  func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b08d708; end: 10b08d79f; -[SCCModalContainer dismissWithAnimated:] */

void FUN_10b08d708(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b08d7a0;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08d7a0; end: 10b08d863;  */

void FUN_10b08d7a0(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = 0x10b08d81c;
  puStack_30 = &UNK_110841f20;
  uStack_40 = 0xc2000000;
  func_0x00010bf84b00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined1 *)(param_1 + 0x30),&puStack_48);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c222400(*(undefined8 *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 10b08d864; end: 10b08d88b; -[SCCModalContainer platformDeckContainer] */

void FUN_10b08d864(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b08d88c; end: 10b08daab; -[SCCModalContainer _makeContainerViewControllerWithPage:parentComposerContext:] */

void FUN_10b08d88c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afcc8;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010bf44480(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bf445a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf443a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar7 = param_2 + 8;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000640(puVar1,param_3,uVar2,0,uVar8,uVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar2);
  if (param_5 != 0) {
    puVar6 = puVar1;
    func_0x00010c295200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d90a0();
    _objc_release(puVar6);
  }
  lVar7 = *(long *)(param_2 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    uVar9 = 1;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar8;
    func_0x00010bf1f440();
    _objc_release(uVar8);
    uVar9 = (uint)uVar2 ^ 1;
  }
  puVar6 = PTR_PTR_1126df578;
  _objc_alloc(PTR_PTR_1126df578);
  func_0x00010c0f0be0(*(undefined8 *)(param_2 + 0x20));
  func_0x00010c060240(puVar6,param_3,puVar1,(int)param_1,*(byte *)(param_2 + 0x28) & uVar9 & 1);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    uVar9 = *(byte *)(param_2 + 0x29) & uVar9;
  }
  else {
    uVar9 = 0;
  }
  func_0x00010c200d20(puVar6,param_3,uVar9 & 1);
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10b08daac; end: 10b08dab3; -[SCCModalContainer deckContainerFactory] */

undefined8 FUN_10b08daac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10b08dab4; end: 10b08dae3; -[SCCModalContainer setDeckContainerFactory:] */

void FUN_10b08dab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b08dae4; end: 10b08dafb; -[SCCModalContainer viewController] */

void FUN_10b08dae4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b08dafc; end: 10b08db07; -[SCCModalContainer setViewController:] */

void FUN_10b08dafc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 10b08db08; end: 10b08db5f; -[SCCModalContainer .cxx_destruct] */

void FUN_10b08db08(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b08db60; end: 10b08dc23; -[SCCNavigationContainer initWithPlatformDeckContainer:valdiRuntimeProvider:] */

undefined1 *
FUN_10b08db60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127054d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    puVar3 = PTR_PTR_1126df538;
    _objc_alloc();
    func_0x00010c0600c0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08dc24; end: 10b08de1b; -[SCCNavigationContainer createNavigationItemWithConfig:] */

void FUN_10b08dc24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010c0f0d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(uVar1);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0f0be0(uVar1);
  uVar3 = uVar1;
  func_0x00010c0f1360(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6940(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = uVar5;
  func_0x00010c098ce0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar2);
  func_0x00010c0e3aa0(uVar3);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126df580;
  _objc_alloc(PTR_PTR_1126df580);
  func_0x00010c036aa0();
  _objc_release(puVar2);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10b08de1c; end: 10b08dee3;  */

void FUN_10b08de1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar1 + 8;
    _objc_loadWeakRetained(lVar5);
    lVar2 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5e500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar5);
    lVar5 = lVar1;
    func_0x00010be5b780(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10b08dee4; end: 10b08df6b;  */

void FUN_10b08dee4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bfe6360();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x00010c2954c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if ((uVar3 != 0) && (uVar2 = uVar3, func_0x00010bf6f140(), (uVar2 & 1) == 0)) {
      func_0x00010bf6ef60(uVar3);
    }
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b08df6c; end: 10b08e10b; -[SCCNavigationContainer pushWithNavigationItem:animated:] */

void FUN_10b08df6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b08e02c;
  puStack_58 = &UNK_110858b70;
  uStack_50 = param_3;
  uStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x000107c312cc("APPSTORE",&puStack_70);
  _objc_retain(puVar1);
  _objc_release(uStack_50);
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08e10c; end: 10b08e153;  */

void FUN_10b08e10c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df570;
  _objc_alloc(PTR_PTR_1126df570);
  func_0x00010c04f580();
  func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b08e154; end: 10b08e1eb; -[SCCNavigationContainer popWithAnimated:] */

void FUN_10b08e154(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b08e1ec;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08e1ec; end: 10b08e24b;  */

void FUN_10b08e1ec(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b08e24c;
  puStack_20 = &UNK_110841f20;
  func_0x00010c103900(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined1 *)(param_1 + 0x30),&puStack_38);
  return;
}



/* Entry: 10b08e24c; end: 10b08e293;  */

void FUN_10b08e24c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df570;
  _objc_alloc(PTR_PTR_1126df570);
  func_0x00010c04f580();
  func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b08e294; end: 10b08e32b; -[SCCNavigationContainer popToRootWithAnimated:] */

void FUN_10b08e294(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 uStack_38;
  
  puVar1 = PTR_PTR_1126b1588;
  _objc_opt_new();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b08e32c;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_1;
  puStack_40 = puVar1;
  uStack_38 = param_3;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_retain(puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b08e32c; end: 10b08e38b;  */

void FUN_10b08e32c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10b08e38c;
  puStack_20 = &UNK_110841f20;
  func_0x00010c103940(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,
                      *(undefined1 *)(param_1 + 0x30),&puStack_38);
  return;
}



/* Entry: 10b08e38c; end: 10b08e3d3;  */

void FUN_10b08e38c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df570;
  _objc_alloc(PTR_PTR_1126df570);
  func_0x00010c04f580();
  func_0x00010bfbb700(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b08e3d4; end: 10b08e5b7; -[SCCNavigationContainer _makeContainerViewControllerWithPage:parentComposerContext:] */

void FUN_10b08e3d4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126afcc8;
  _objc_alloc(PTR_PTR_1126afcc8);
  uVar2 = param_4;
  func_0x00010bf44480(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf445a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010bf443a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + 8;
  _objc_loadWeakRetained(param_2);
  lVar5 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000640(puVar1,param_3,uVar2,0,uVar3,uVar4,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (param_5 != 0) {
    puVar7 = puVar1;
    func_0x00010c295200(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d90a0();
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126df578;
  _objc_alloc(PTR_PTR_1126df578);
  func_0x00010c0f0be0(param_4);
  uVar2 = param_4;
  func_0x00010c0f1360(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060200(puVar7,param_3,puVar1,(int)param_1,uVar2);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c071140(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c071ae0();
  func_0x00010c1931e0(puVar7,param_3,uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10b08e5b8; end: 10b08e5bf; -[SCCNavigationContainer deckContainerFactory] */

undefined8 FUN_10b08e5b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b08e5c0; end: 10b08e5ef; -[SCCNavigationContainer setDeckContainerFactory:] */

void FUN_10b08e5c0(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b08e5f0; end: 10b08e627; -[SCCNavigationContainer .cxx_destruct] */

void FUN_10b08e5f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b08e628; end: 10b08e69b; -[SCCNavigationItem initWithPlatformItem:] */

undefined1 * FUN_10b08e628(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127054e0;
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



/* Entry: 10b08e69c; end: 10b08e6a3; -[SCCNavigationItem platformItem] */

undefined8 FUN_10b08e69c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b08e6a4; end: 10b08e6af; -[SCCNavigationItem .cxx_destruct] */

void FUN_10b08e6a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b08e6b0; end: 10b08e6b7; -[SCDeckDefaultComposerViewController initWithValdiView:page:] */

void FUN_10b08e6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValdiView_page_shouldRem_1125f5aa0,param_3,param_4,0);
  return;
}



/* Entry: 10b08e6b8; end: 10b08e6bf; -[SCDeckDefaultComposerViewController initWithValdiView:page:pageInstanceId:] */

void FUN_10b08e6b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithValdiView_page_pageInsta_1125f5a98);
  return;
}



/* Entry: 10b08e6c0; end: 10b08e6cb; -[SCDeckDefaultComposerViewController initWithValdiView:page:shouldRemoveShadow:] */

void FUN_10b08e6c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c060230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithValdiView_page_pageInsta_1125f5a98,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10b08e6cc; end: 10b08e77b; -[SCDeckDefaultComposerViewController initWithValdiView:page:pageInstanceId:shouldRemoveShadow:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b08e6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127054e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithValdiView__1125f5a88,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + (long)_DAT_11278c3dc) = param_4;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278c3e0) = param_6;
    lVar3 = (long)_DAT_11278c3e4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b08e77c; end: 10b08e78b; -[SCDeckDefaultComposerViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b08e77c(long param_1)

{
  switch(*(int *)(param_1 + _DAT_11278c3dc)) {
  case 1:
    return 0x1f;
  case 2:
  case 3:
  case 4:
  case 5:
  case 9:
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
    goto code_r0x00010087823c;
  case 6:
    return 0x67;
  case 7:
    return 0x4c;
  case 8:
    return 0x6c;
  case 10:
    return 0x27;
  case 0xb:
    return 0x93;
  case 0xc:
    return 0x13c;
  case 0xd:
    return 0xe3;
  case 0xe:
    return 0x14a;
  case 0xf:
    return 0x51;
  case 0x10:
    return 0x53;
  case 0x11:
    return 0x8b;
  case 0x12:
    return 0x60;
  case 0x13:
    return 0x62;
  case 0x14:
    return 0x61;
  case 0x17:
    return 8;
  case 0x18:
    return 0xcf;
  case 0x1a:
    return 0xd5;
  case 0x1b:
    return 0x40;
  case 0x1c:
    return 0x41;
  case 0x1d:
    return 0x42;
  case 0x1e:
    return 0xd3;
  case 0x1f:
    return 0xd4;
  case 0x20:
    return 0xd1;
  case 0x21:
    return 0xd0;
  case 0x2e:
    return 0x117;
  case 0x2f:
    return 0x118;
  case 0x30:
    return 0x11d;
  case 0x31:
    return 0x120;
  case 0x32:
    return 0x110;
  default:
    if (*(int *)(param_1 + _DAT_11278c3dc) == 0x5d) {
      return 0xb2;
    }
code_r0x00010087823c:
    return 0;
  }
}



/* Entry: 10b08e78c; end: 10b08e94b; -[SCDeckDefaultComposerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b08e78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar2 = param_1;
  func_0x00010bf66a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7960();
  _objc_release(lVar2);
  puStack_48 = PTR_PTR_1127054e8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewWillAppear__1126853f0,param_3);
  iVar1 = 2;
  func_0x000107c31924(2,0x1a,0,0);
  if ((iVar1 != 0) && (*(char *)(param_1 + _DAT_11278c3e0) == '\x01')) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(lVar2);
    _objc_release(puVar3);
    lVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4c20();
    _objc_release(lVar2);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b08e94c;
    puStack_60 = &UNK_110842e18;
    ppuVar4 = &puStack_78;
    lStack_58 = param_1;
    _objc_retainBlock();
    func_0x00010c27a780();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      (*(code *)ppuVar4[2])(ppuVar4);
    }
    else {
      _objc_retain(ppuVar4);
      func_0x00010bf02c20(param_1);
      _objc_release(ppuVar4);
    }
    _objc_release(param_1);
    _objc_release(ppuVar4);
  }
  return;
}



/* Entry: 10b08e94c; end: 10b08e95f;  */

void FUN_10b08e94c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be98890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sanitizePresentationBackgrounds_112583bc0);
  return;
}



/* Entry: 10b08e960; end: 10b08e9cf; -[SCDeckDefaultComposerViewController viewDidAppear:] */

void FUN_10b08e960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = param_1;
  func_0x00010bf66a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e78c0();
  _objc_release(uVar1);
  puStack_38 = PTR_PTR_1127054e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidAppear__112684bd0,param_3);
  return;
}



/* Entry: 10b08e9d0; end: 10b08ea37; -[SCDeckDefaultComposerViewController viewWillDisappear:] */

void FUN_10b08e9d0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127054e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillDisappear__112685438);
  func_0x00010bf66a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e79a0();
  _objc_release(param_1);
  return;
}



/* Entry: 10b08ea38; end: 10b08ea9f; -[SCDeckDefaultComposerViewController viewDidDisappear:] */

void FUN_10b08ea38(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1127054e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  func_0x00010bf66a60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e7900();
  _objc_release(param_1);
  return;
}


