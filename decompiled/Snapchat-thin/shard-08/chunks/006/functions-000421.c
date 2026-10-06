/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1063a2c74; end: 1063a2c7b; -[SCAdOperaEventStateTracker currentItem] */

undefined8 FUN_1063a2c74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1063a2c7c; end: 1063a2cab; -[SCAdOperaEventStateTracker setCurrentItem:] */

void FUN_1063a2c7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1063a2cac; end: 1063a2cb3; -[SCAdOperaEventStateTracker currentAdIdentifier] */

undefined8 FUN_1063a2cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1063a2cb4; end: 1063a2cbb; -[SCAdOperaEventStateTracker setCurrentAdIdentifier:] */

void FUN_1063a2cb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1063a2cbc; end: 1063a2cc3; -[SCAdOperaEventStateTracker currentSnapIndex] */

undefined8 FUN_1063a2cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1063a2cc4; end: 1063a2ccb; -[SCAdOperaEventStateTracker setCurrentSnapIndex:] */

void FUN_1063a2cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1063a2ccc; end: 1063a2cd3; -[SCAdOperaEventStateTracker lastCollectionItemIndex] */

undefined8 FUN_1063a2ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1063a2cd4; end: 1063a2cdb; -[SCAdOperaEventStateTracker setLastCollectionItemIndex:] */

void FUN_1063a2cd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1063a2cdc; end: 1063a2ce3; -[SCAdOperaEventStateTracker lastLifecycleEvent] */

undefined8 FUN_1063a2cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1063a2ce4; end: 1063a2ceb; -[SCAdOperaEventStateTracker lastInteractionEvent] */

undefined8 FUN_1063a2ce4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1063a2cec; end: 1063a2cf3; -[SCAdOperaEventStateTracker currentViewSessionStarted] */

undefined1 FUN_1063a2cec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1063a2cf4; end: 1063a2cfb; -[SCAdOperaEventStateTracker setCurrentViewSessionStarted:] */

void FUN_1063a2cf4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1063a2cfc; end: 1063a2d03; -[SCAdOperaEventStateTracker onAttachment] */

undefined1 FUN_1063a2cfc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



/* Entry: 1063a2d04; end: 1063a2d0b; -[SCAdOperaEventStateTracker setOnAttachment:] */

void FUN_1063a2d04(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x21) = param_3;
  return;
}



/* Entry: 1063a2d0c; end: 1063a2da7; -[SCAdOperaEventStateTracker .cxx_destruct] */

void FUN_1063a2d0c(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063a2da8; end: 1063a2e37; -[SCAdSessionDismissTracker initWithAdDataSource:] */

undefined1 * FUN_1063a2da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f1118;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca368;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063a2e38; end: 1063a2e3f; -[SCAdSessionDismissTracker totalTimeItemUnviewedSeconds] */

void FUN_1063a2e38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c276e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_totalTimeItemUnviewedSeconds_11267b5b8);
  return;
}



/* Entry: 1063a2e40; end: 1063a2e43; -[SCAdSessionDismissTracker itemDismissStarted:] */

void FUN_1063a2e40(void)

{
  return;
}



/* Entry: 1063a2e44; end: 1063a2e47; -[SCAdSessionDismissTracker itemDismissCancelled:] */

void FUN_1063a2e44(void)

{
  return;
}



/* Entry: 1063a2e48; end: 1063a2e4b; -[SCAdSessionDismissTracker reset] */

void FUN_1063a2e48(void)

{
  return;
}



/* Entry: 1063a2e4c; end: 1063a2f27; -[SCAdSessionDismissTracker registeredEventsForOperaSession] */

void FUN_1063a2e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar8 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2330;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2330;
  puStack_50 = puVar1;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  puStack_48 = puVar2;
  func_0x00010bf2e260();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 3;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar8);
  func_0x00010be36bc0(uVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1 + 0x18;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    lVar11 = *(long *)(puVar1 + 8);
    puVar2 = puVar3;
    func_0x00010be36bc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(lVar11,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar5 = lVar11;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    puVar2 = PTR_PTR_1126b2330;
    func_0x00010bf17f80(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined1 *)ppuVar8;
    func_0x00010c0720c0(ppuVar8,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)puVar7 == 0) {
      puVar2 = PTR_PTR_1126b2330;
      func_0x00010bf2e260(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined1 *)ppuVar8;
      func_0x00010c0720c0(ppuVar8,param_2,puVar2);
      _objc_release(puVar2);
      if ((int)puVar7 == 0) {
        puVar2 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = (undefined1 *)ppuVar8;
        func_0x00010c0720c0(ppuVar8,param_2,puVar2);
        _objc_release(puVar2);
        if ((int)puVar7 != 0) {
          func_0x00010c137fe0(*(undefined8 *)(puVar1 + 0x10));
        }
      }
      else if (lVar6 != 0) {
        uVar10 = *(undefined8 *)(puVar1 + 0x10);
        _CACurrentMediaTime();
        func_0x00010c0842a0(uVar10);
      }
    }
    else if (lVar6 != 0) {
      uVar10 = *(undefined8 *)(puVar1 + 0x10);
      _CACurrentMediaTime();
      func_0x00010c0842c0(uVar10);
    }
    _objc_release(lVar11);
  }
  _objc_release(puVar3);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 1063a2f28; end: 1063a310f; -[SCAdSessionDismissTracker operaViewDidSendEvent:page:params:] */

void FUN_1063a2f28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    lVar1 = lVar2;
    func_0x00010be36bc0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(lVar6,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar6;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126b2330;
    func_0x00010bf17f80(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar4);
    _objc_release(puVar4);
    if ((int)uVar5 == 0) {
      puVar4 = PTR_PTR_1126b2330;
      func_0x00010bf2e260(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c0720c0(param_3,param_2,puVar4);
      _objc_release(puVar4);
      if ((int)uVar5 == 0) {
        puVar4 = PTR_PTR_1126b2330;
        func_0x00010bf3df00(PTR_PTR_1126b2330);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c0720c0(param_3,param_2,puVar4);
        _objc_release(puVar4);
        if ((int)uVar5 != 0) {
          func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x10));
        }
      }
      else if (lVar3 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x10);
        _CACurrentMediaTime();
        func_0x00010c0842a0(uVar5);
      }
    }
    else if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      _CACurrentMediaTime();
      func_0x00010c0842c0(uVar5);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a3110; end: 1063a3127; -[SCAdSessionDismissTracker playlistItemController] */

void FUN_1063a3110(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a3128; end: 1063a3133; -[SCAdSessionDismissTracker setPlaylistItemController:] */

void FUN_1063a3128(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1063a3134; end: 1063a316b; -[SCAdSessionDismissTracker .cxx_destruct] */

void FUN_1063a3134(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063a316c; end: 1063a326f; -[SCAdSessionSKViewThroughImpressionTracker initWithAdConfigProvider:adDataSource:skAdNetworkMetricsManager:appImpressionTracker:viewLocation:] */

undefined1 *
FUN_1063a316c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  puStack_48 = PTR_PTR_1126f1120;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063a3270; end: 1063a32b7; -[SCAdSessionSKViewThroughImpressionTracker triggerSKAdViewThroughImpressionWithResponse:adSnap:] */

void FUN_1063a3270(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdccb40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c24efc0(*(undefined8 *)(param_1 + 0x28),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x30),&PTR___NSConcreteGlobalBlock_11091fd48);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063a32b8; end: 1063a32bb;  */

void FUN_1063a32b8(void)

{
  return;
}



/* Entry: 1063a32bc; end: 1063a3377; -[SCAdSessionSKViewThroughImpressionTracker endStoryImpressionWithAdResponse:adSnap:] */

void FUN_1063a32bc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bef60a0();
  if (lVar1 == 5) {
    lVar1 = param_1;
    func_0x00010bdccb40(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_3;
      func_0x00010bef4240();
      if (lVar2 == 4) {
        func_0x00010c0f5d60(*(undefined8 *)(param_1 + 0x28),param_2,lVar1,
                            *(undefined8 *)(param_1 + 0x30),&PTR___NSConcreteGlobalBlock_11091fd68);
      }
      else {
        func_0x00010bf94ac0(*(undefined8 *)(param_1 + 0x28),param_2,lVar1,
                            *(undefined8 *)(param_1 + 0x30),&PTR___NSConcreteGlobalBlock_11091fd88);
      }
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a3378; end: 1063a337f;  */

void FUN_1063a3378(void)

{
  return;
}



/* Entry: 1063a3380; end: 1063a350b; -[SCAdSessionSKViewThroughImpressionTracker endStoryImpressionWithPagedFromItem:pagedToItem:] */

void FUN_1063a3380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(param_4);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef37c0(lVar5,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar5;
  func_0x00010c09c880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(param_3);
  lVar5 = lVar1;
  func_0x00010bef4a60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bef4b20(lVar6,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (((lVar5 != 0) && (lVar6 == 0)) && (lVar3 = lVar5, func_0x00010bef60a0(), lVar3 == 5)) {
    lVar3 = lVar1;
    func_0x00010bef52a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdccb40(param_1,param_2,lVar5,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar5;
      func_0x00010bef4240();
      if (lVar3 == 4) {
        func_0x00010c0f5d60(*(undefined8 *)(param_1 + 0x28),param_2,lVar4,
                            *(undefined8 *)(param_1 + 0x30),&PTR___NSConcreteGlobalBlock_11091fda8);
      }
      else {
        func_0x00010bf94ac0(*(undefined8 *)(param_1 + 0x28),param_2,lVar4,
                            *(undefined8 *)(param_1 + 0x30),&PTR___NSConcreteGlobalBlock_11091fdc8);
      }
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063a350c; end: 1063a3513;  */

void FUN_1063a350c(void)

{
  return;
}



/* Entry: 1063a3514; end: 1063a3593; -[SCAdSessionSKViewThroughImpressionTracker _appInstallParamsForAdResponse:adSnap:] */

void FUN_1063a3514(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bef4240();
  uVar1 = 3;
  if (lVar2 == 4) {
    uVar1 = 4;
  }
  puVar3 = PTR_PTR_1126bdcd0;
  func_0x00010bfbaa40(PTR_PTR_1126bdcd0,param_2,param_3,param_4,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1063a3594; end: 1063a35e7; -[SCAdSessionSKViewThroughImpressionTracker .cxx_destruct] */

void FUN_1063a3594(long param_1)

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



/* Entry: 1063a35e8; end: 1063a36eb; -[SCAdSharingSession initWithAdDataSource:viewLocation:adBlizzardLogger:adTrackerHelper:sharingPresenterProvider:] */

undefined1 *
FUN_1063a35e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f1128;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1063a36ec; end: 1063a3843; -[SCAdSharingSession extraPropertiesForItem:] */

void FUN_1063a36ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar11 = param_3;
  FUN_106441bb4(param_3,lVar1);
  _objc_release(param_3);
  _objc_release(lVar1);
  if (((int)uVar11 != 0) && (lVar1 = *(long *)(param_1 + 0x48), lVar1 != 0)) {
    func_0x00010c252440();
    if (lVar1 == 1) {
      param_5 = 3;
    }
    else {
      if (lVar1 != 0) goto LAB_1063a3814;
      param_5 = 1;
    }
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_1063a3814:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_e0;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2ea8;
  puStack_e0 = puVar2;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2ea8;
  puStack_d8 = puVar13;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2d30;
  puStack_d0 = puVar3;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  puStack_c8 = puVar4;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = 5;
  puStack_c0 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar13);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar10);
  _objc_retain(uVar11);
  _objc_retain(param_5);
  uVar6 = uVar11;
  func_0x00010be36bc0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar2 + 0x58;
  _objc_loadWeakRetained();
  puVar3 = puVar13;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar13 = puVar2 + 0x58;
  _objc_loadWeakRetained(puVar13);
  puVar4 = puVar3;
  FUN_106441bb4(puVar3,puVar13);
  _objc_release(puVar13);
  if ((int)puVar4 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar3);
    puVar13 = puVar3;
  }
  uVar7 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined **)(puVar2 + 0x28) = puVar13;
  _objc_release(uVar7);
  if (*(long *)(puVar2 + 0x28) == 0) goto LAB_1063a3c5c;
  puVar13 = puVar2;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar13;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  puVar13 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar13);
  puVar13 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar13 = (undefined *)0x0;
  }
  _objc_retain(puVar13);
  _objc_release(puVar4);
  uVar15 = *(undefined8 *)(puVar2 + 0x28);
  puVar4 = puVar2 + 0x58;
  _objc_loadWeakRetained(puVar4);
  FUN_106441da4(uVar15,puVar4);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126ca2b0;
  uVar7 = uVar11;
  func_0x00010c118b40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b900();
  _objc_release(uVar7);
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = puVar13;
    func_0x00010c07db60();
    puVar4 = PTR_PTR_1126b2340;
    if (((ulong)puVar5 & 1) == 0) {
      uVar7 = uVar11;
      func_0x00010c118b40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      puVar5 = PTR_PTR_1126b2340;
      if (((ulong)puVar4 & 1) == 0) {
        _objc_release(uVar7);
      }
      else {
        uVar14 = uVar11;
        func_0x00010c118b40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0771c0();
        _objc_release(uVar14);
        _objc_release(uVar7);
        if ((int)puVar5 == 0) goto LAB_1063a3c54;
      }
    }
    uVar7 = uVar11;
    func_0x00010bf51e00();
    uVar14 = *(undefined8 *)(puVar2 + 0x40);
    *(undefined8 *)(puVar2 + 0x40) = uVar7;
    _objc_release(uVar14);
    func_0x00010bea3ae0(puVar2);
    puVar8 = (undefined1 *)ppuVar10;
    func_0x000107b27f14(ppuVar10,uVar11,param_5);
    if (((ulong)puVar8 & 1) == 0) {
      puVar4 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined1 *)ppuVar10;
      func_0x00010c0720c0();
      if ((int)puVar8 == 0) {
        puVar5 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = (undefined1 *)ppuVar10;
        func_0x00010c0720c0();
        _objc_release(puVar5);
        _objc_release(puVar4);
        if ((int)puVar8 == 0) {
          puVar4 = PTR_PTR_1126b2d30;
          func_0x00010bf940a0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = (undefined1 *)ppuVar10;
          func_0x00010c0720c0();
          _objc_release(puVar4);
          if ((int)puVar8 == 0) {
            puVar4 = PTR_PTR_1126b2d30;
            func_0x00010c15c9e0(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = (undefined1 *)ppuVar10;
            func_0x00010c0720c0();
            _objc_release(puVar4);
            if ((int)puVar8 == 0) {
              puVar4 = PTR_PTR_1126b2330;
              func_0x00010c0e9c40(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = (undefined1 *)ppuVar10;
              func_0x00010c0720c0();
              _objc_release(puVar4);
              if ((int)puVar8 != 0) {
                puVar2[0x50] = 0;
              }
            }
            else {
              puVar4 = PTR_PTR_1126b5bf0;
              func_0x00010c22ab20(PTR_PTR_1126b5bf0);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar15 = uVar7;
              func_0x00010bf1f3c0();
              _objc_release(uVar7);
              _objc_release(puVar4);
              if ((int)uVar15 == 0) {
                uVar15 = *(undefined8 *)(puVar2 + 0x48);
                puVar2 = puVar2 + 0x60;
                _objc_loadWeakRetained();
                puVar4 = puVar2;
                func_0x00010c27f040();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar4;
                func_0x00010c0f1880();
                _objc_retainAutoreleasedReturnValue();
                puVar9 = PTR_PTR_1126b2cf0;
                func_0x00010bf4f080(PTR_PTR_1126b2cf0);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = param_5;
                func_0x00010c0e00e0(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c15c4a0(uVar15);
                _objc_release(uVar7);
                _objc_release(puVar9);
                _objc_release(puVar5);
                _objc_release(puVar4);
                goto LAB_1063a3f5c;
              }
              puVar2[0x50] = 1;
              _objc_initWeak(auStack_148,puVar2);
              _objc_copyWeak(auStack_150,auStack_148);
              _objc_retain(uVar11);
              _objc_retain(param_5);
              func_0x00010be79200(puVar2);
              if (*(long *)(puVar2 + 0x28) != 0) {
                func_0x00010bef53c0(*(undefined8 *)(puVar2 + 8));
                uVar7 = *(undefined8 *)(puVar2 + 8);
                func_0x00010bef4800(uVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e2560(*(undefined8 *)(puVar2 + 0x10));
                _objc_release(uVar7);
              }
              _objc_release(param_5);
              _objc_release(uVar11);
              _objc_destroyWeak(auStack_150);
              _objc_destroyWeak(auStack_148);
            }
          }
          else {
            func_0x00010bf954a0(*(undefined8 *)(puVar2 + 0x48));
            uVar7 = *(undefined8 *)(puVar2 + 0x48);
            *(undefined8 *)(puVar2 + 0x48) = 0;
            _objc_release(uVar7);
            if ((int)uVar15 != 0) {
              puVar2 = puVar2 + 0x60;
              _objc_loadWeakRetained(puVar2);
              puVar4 = puVar2;
              func_0x00010c29e000();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c13c000();
              _objc_release(puVar4);
LAB_1063a3f5c:
              _objc_release(puVar2);
            }
          }
          goto LAB_1063a3c54;
        }
      }
      else {
        _objc_release(puVar4);
      }
      func_0x00010be79200(puVar2);
    }
  }
LAB_1063a3c54:
  _objc_release(puVar13);
LAB_1063a3c5c:
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(uVar11);
  _objc_release(ppuVar10);
  return;
}



/* Entry: 1063a3844; end: 1063a396f; -[SCAdSharingSession registeredEventsForOperaSession] */

void FUN_1063a3844(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 in_x4;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  ppuVar9 = &puStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b2d30;
  func_0x00010bf940a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2ea8;
  puStack_70 = puVar1;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2ea8;
  puStack_68 = puVar11;
  func_0x00010c235940();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2d30;
  puStack_60 = puVar2;
  func_0x00010c15c9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  puStack_58 = puVar3;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 5;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar9);
  _objc_retain(uVar10);
  _objc_retain(in_x4);
  uVar6 = uVar10;
  func_0x00010be36bc0(uVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar1 + 0x58;
  _objc_loadWeakRetained();
  puVar2 = puVar11;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = puVar1 + 0x58;
  _objc_loadWeakRetained(puVar11);
  puVar3 = puVar2;
  FUN_106441bb4(puVar2,puVar11);
  _objc_release(puVar11);
  if ((int)puVar3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar2);
    puVar11 = puVar2;
  }
  uVar7 = *(undefined8 *)(puVar1 + 0x28);
  *(undefined **)(puVar1 + 0x28) = puVar11;
  _objc_release(uVar7);
  if (*(long *)(puVar1 + 0x28) == 0) goto LAB_1063a3c5c;
  puVar11 = puVar1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  puVar11 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  puVar4 = puVar3;
  _objc_opt_isKindOfClass(puVar3,puVar11);
  puVar11 = puVar3;
  if (((ulong)puVar4 & 1) == 0) {
    puVar11 = (undefined *)0x0;
  }
  _objc_retain(puVar11);
  _objc_release(puVar3);
  uVar13 = *(undefined8 *)(puVar1 + 0x28);
  puVar3 = puVar1 + 0x58;
  _objc_loadWeakRetained(puVar3);
  FUN_106441da4(uVar13,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126ca2b0;
  uVar7 = uVar10;
  func_0x00010c118b40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b900();
  _objc_release(uVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = puVar11;
    func_0x00010c07db60();
    puVar3 = PTR_PTR_1126b2340;
    if (((ulong)puVar4 & 1) == 0) {
      uVar7 = uVar10;
      func_0x00010c118b40(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      puVar4 = PTR_PTR_1126b2340;
      if (((ulong)puVar3 & 1) == 0) {
        _objc_release(uVar7);
      }
      else {
        uVar12 = uVar10;
        func_0x00010c118b40(uVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0771c0();
        _objc_release(uVar12);
        _objc_release(uVar7);
        if ((int)puVar4 == 0) goto LAB_1063a3c54;
      }
    }
    uVar7 = uVar10;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(puVar1 + 0x40);
    *(undefined8 *)(puVar1 + 0x40) = uVar7;
    _objc_release(uVar12);
    func_0x00010bea3ae0(puVar1);
    puVar8 = (undefined1 *)ppuVar9;
    func_0x000107b27f14(ppuVar9,uVar10,in_x4);
    if (((ulong)puVar8 & 1) == 0) {
      puVar3 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined1 *)ppuVar9;
      func_0x00010c0720c0();
      if ((int)puVar8 == 0) {
        puVar4 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = (undefined1 *)ppuVar9;
        func_0x00010c0720c0();
        _objc_release(puVar4);
        _objc_release(puVar3);
        if ((int)puVar8 == 0) {
          puVar3 = PTR_PTR_1126b2d30;
          func_0x00010bf940a0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = (undefined1 *)ppuVar9;
          func_0x00010c0720c0();
          _objc_release(puVar3);
          if ((int)puVar8 == 0) {
            puVar3 = PTR_PTR_1126b2d30;
            func_0x00010c15c9e0(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = (undefined1 *)ppuVar9;
            func_0x00010c0720c0();
            _objc_release(puVar3);
            if ((int)puVar8 == 0) {
              puVar3 = PTR_PTR_1126b2330;
              func_0x00010c0e9c40(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = (undefined1 *)ppuVar9;
              func_0x00010c0720c0();
              _objc_release(puVar3);
              if ((int)puVar8 != 0) {
                puVar1[0x50] = 0;
              }
            }
            else {
              puVar3 = PTR_PTR_1126b5bf0;
              func_0x00010c22ab20(PTR_PTR_1126b5bf0);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar7;
              func_0x00010bf1f3c0();
              _objc_release(uVar7);
              _objc_release(puVar3);
              if ((int)uVar13 == 0) {
                uVar13 = *(undefined8 *)(puVar1 + 0x48);
                puVar1 = puVar1 + 0x60;
                _objc_loadWeakRetained();
                puVar3 = puVar1;
                func_0x00010c27f040();
                _objc_retainAutoreleasedReturnValue();
                puVar4 = puVar3;
                func_0x00010c0f1880();
                _objc_retainAutoreleasedReturnValue();
                puVar5 = PTR_PTR_1126b2cf0;
                func_0x00010bf4f080(PTR_PTR_1126b2cf0);
                _objc_retainAutoreleasedReturnValue();
                uVar7 = in_x4;
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c15c4a0(uVar13);
                _objc_release(uVar7);
                _objc_release(puVar5);
                _objc_release(puVar4);
                _objc_release(puVar3);
                goto LAB_1063a3f5c;
              }
              puVar1[0x50] = 1;
              _objc_initWeak(auStack_d8,puVar1);
              _objc_copyWeak(auStack_e0,auStack_d8);
              _objc_retain(uVar10);
              _objc_retain(in_x4);
              func_0x00010be79200(puVar1);
              if (*(long *)(puVar1 + 0x28) != 0) {
                func_0x00010bef53c0(*(undefined8 *)(puVar1 + 8));
                uVar7 = *(undefined8 *)(puVar1 + 8);
                func_0x00010bef4800(uVar7);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e2560(*(undefined8 *)(puVar1 + 0x10));
                _objc_release(uVar7);
              }
              _objc_release(in_x4);
              _objc_release(uVar10);
              _objc_destroyWeak(auStack_e0);
              _objc_destroyWeak(auStack_d8);
            }
          }
          else {
            func_0x00010bf954a0(*(undefined8 *)(puVar1 + 0x48));
            uVar7 = *(undefined8 *)(puVar1 + 0x48);
            *(undefined8 *)(puVar1 + 0x48) = 0;
            _objc_release(uVar7);
            if ((int)uVar13 != 0) {
              puVar1 = puVar1 + 0x60;
              _objc_loadWeakRetained(puVar1);
              puVar3 = puVar1;
              func_0x00010c29e000();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c13c000();
              _objc_release(puVar3);
LAB_1063a3f5c:
              _objc_release(puVar1);
            }
          }
          goto LAB_1063a3c54;
        }
      }
      else {
        _objc_release(puVar3);
      }
      func_0x00010be79200(puVar1);
    }
  }
LAB_1063a3c54:
  _objc_release(puVar11);
LAB_1063a3c5c:
  _objc_release(puVar2);
  _objc_release(uVar6);
  _objc_release(in_x4);
  _objc_release(uVar10);
  _objc_release(ppuVar9);
  return;
}



/* Entry: 1063a3970; end: 1063a3f87; -[SCAdSharingSession operaViewDidSendEvent:page:params:] */

void FUN_1063a3970(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + 0x58;
  _objc_loadWeakRetained();
  lVar2 = lVar11;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar11);
  lVar11 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar11);
  lVar3 = lVar2;
  FUN_106441bb4(lVar2,lVar11);
  _objc_release(lVar11);
  if ((int)lVar3 == 0) {
    lVar11 = 0;
  }
  else {
    _objc_retain(lVar2);
    lVar11 = lVar2;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar11;
  _objc_release(uVar4);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_1063a3c5c;
  uVar5 = param_1;
  func_0x00010c1013e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar8 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar7);
  uVar5 = uVar6;
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(uVar6);
  uVar13 = *(undefined8 *)(param_1 + 0x28);
  lVar11 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar11);
  FUN_106441da4(uVar13,lVar11);
  _objc_release(lVar11);
  puVar7 = PTR_PTR_1126ca2b0;
  uVar4 = param_4;
  func_0x00010c118b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06b900();
  _objc_release(uVar4);
  if (((ulong)puVar7 & 1) == 0) {
    uVar6 = uVar5;
    func_0x00010c07db60();
    puVar7 = PTR_PTR_1126b2340;
    if ((uVar6 & 1) == 0) {
      uVar4 = param_4;
      func_0x00010c118b40(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771a0();
      puVar9 = PTR_PTR_1126b2340;
      if (((ulong)puVar7 & 1) == 0) {
        _objc_release(uVar4);
      }
      else {
        uVar12 = param_4;
        func_0x00010c118b40(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0771c0();
        _objc_release(uVar12);
        _objc_release(uVar4);
        if ((int)puVar9 == 0) goto LAB_1063a3c54;
      }
    }
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    _objc_release(uVar12);
    func_0x00010bea3ae0(param_1);
    uVar6 = param_3;
    func_0x000107b27f14(param_3,param_4,param_5);
    if ((uVar6 & 1) == 0) {
      puVar7 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      func_0x00010c0720c0();
      if ((int)uVar6 == 0) {
        puVar9 = PTR_PTR_1126b2ea8;
        func_0x00010c235940(PTR_PTR_1126b2ea8);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = param_3;
        func_0x00010c0720c0();
        _objc_release(puVar9);
        _objc_release(puVar7);
        if ((int)uVar6 == 0) {
          puVar7 = PTR_PTR_1126b2d30;
          func_0x00010bf940a0(PTR_PTR_1126b2d30);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0720c0();
          _objc_release(puVar7);
          if ((int)uVar6 == 0) {
            puVar7 = PTR_PTR_1126b2d30;
            func_0x00010c15c9e0(PTR_PTR_1126b2d30);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar7);
            if ((int)uVar6 == 0) {
              puVar7 = PTR_PTR_1126b2330;
              func_0x00010c0e9c40(PTR_PTR_1126b2330);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = param_3;
              func_0x00010c0720c0();
              _objc_release(puVar7);
              if ((int)uVar6 != 0) {
                *(undefined1 *)(param_1 + 0x50) = 0;
              }
            }
            else {
              puVar7 = PTR_PTR_1126b5bf0;
              func_0x00010c22ab20(PTR_PTR_1126b5bf0);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = param_5;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              uVar13 = uVar4;
              func_0x00010bf1f3c0();
              _objc_release(uVar4);
              _objc_release(puVar7);
              if ((int)uVar13 == 0) {
                uVar13 = *(undefined8 *)(param_1 + 0x48);
                lVar11 = param_1 + 0x60;
                _objc_loadWeakRetained();
                lVar3 = lVar11;
                func_0x00010c27f040();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar3;
                func_0x00010c0f1880();
                _objc_retainAutoreleasedReturnValue();
                puVar7 = PTR_PTR_1126b2cf0;
                func_0x00010bf4f080(PTR_PTR_1126b2cf0);
                _objc_retainAutoreleasedReturnValue();
                uVar4 = param_5;
                func_0x00010c0e00e0(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c15c4a0(uVar13);
                _objc_release(uVar4);
                _objc_release(puVar7);
                _objc_release(lVar10);
                _objc_release(lVar3);
                goto LAB_1063a3f5c;
              }
              *(undefined1 *)(param_1 + 0x50) = 1;
              _objc_initWeak(auStack_68,param_1);
              _objc_copyWeak(auStack_70,auStack_68);
              _objc_retain(param_4);
              _objc_retain(param_5);
              func_0x00010be79200(param_1);
              if (*(long *)(param_1 + 0x28) != 0) {
                func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
                uVar4 = *(undefined8 *)(param_1 + 8);
                func_0x00010bef4800(uVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e2560(*(undefined8 *)(param_1 + 0x10));
                _objc_release(uVar4);
              }
              _objc_release(param_5);
              _objc_release(param_4);
              _objc_destroyWeak(auStack_70);
              _objc_destroyWeak(auStack_68);
            }
          }
          else {
            func_0x00010bf954a0(*(undefined8 *)(param_1 + 0x48));
            uVar4 = *(undefined8 *)(param_1 + 0x48);
            *(undefined8 *)(param_1 + 0x48) = 0;
            _objc_release(uVar4);
            if ((int)uVar13 != 0) {
              lVar11 = param_1 + 0x60;
              _objc_loadWeakRetained(lVar11);
              lVar3 = lVar11;
              func_0x00010c29e000();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c13c000();
              _objc_release(lVar3);
LAB_1063a3f5c:
              _objc_release(lVar11);
            }
          }
          goto LAB_1063a3c54;
        }
      }
      else {
        _objc_release(puVar7);
      }
      func_0x00010be79200(param_1);
    }
  }
LAB_1063a3c54:
  _objc_release(uVar5);
LAB_1063a3c5c:
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1063a3f88; end: 1063a406f;  */

void FUN_1063a3f88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar8 = *(undefined8 *)(lVar2 + 0x48);
    lVar3 = lVar2 + 0x60;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c0f1880();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puVar6 = PTR_PTR_1126b2cf0;
    func_0x00010bf4f080(PTR_PTR_1126b2cf0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15c4e0(uVar8,param_2,lVar5,uVar1,uVar7);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1063a4070; end: 1063a414f; -[SCAdSharingSession _setEntryEvent:] */

void FUN_1063a4070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((int)uVar2 == 0) {
    puVar3 = PTR_PTR_1126b2ea8;
    func_0x00010c235940(PTR_PTR_1126b2ea8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_1063a4138;
  }
  else {
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b2ea8;
  func_0x00010c235940(PTR_PTR_1126b2ea8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  uVar2 = 1;
  if ((int)uVar4 != 0) {
    uVar2 = 2;
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(puVar1);
LAB_1063a4138:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a4150; end: 1063a422f; -[SCAdSharingSession _logAdShareCreate] */

void FUN_1063a4150(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    FUN_106441c8c(lVar4,lVar1);
    _objc_release(lVar1);
    if ((int)lVar4 != 0) {
      lVar4 = param_1;
      func_0x00010be56e00(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126ca2b0;
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c118b40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c081440();
      _objc_release(uVar2);
      if ((int)puVar3 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x18);
        lVar1 = lVar4;
        func_0x00010bf21f60(lVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b0f20(uVar2);
        _objc_release(lVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar4);
      return;
    }
  }
  return;
}



/* Entry: 1063a4230; end: 1063a439f; -[SCAdSharingSession _logAdShareSentWithParams:] */

void FUN_1063a4230(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be56e00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067fc0();
  func_0x00010c2a7d00(lVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 != 0) {
    func_0x00010bf885a0(lVar2);
    func_0x00010c2bb520(lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lVar3 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar3);
  FUN_106441c8c(uVar5,lVar3);
  _objc_release(lVar3);
  puVar4 = PTR_PTR_1126ca2b0;
  if ((int)uVar5 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c118b40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c081440();
    _objc_release(uVar5);
    if ((int)puVar4 == 0) goto LAB_1063a437c;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = lVar1;
  func_0x00010bf21f60(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b0f40(uVar5);
  _objc_release(lVar3);
LAB_1063a437c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1063a43a0; end: 1063a4497; -[SCAdSharingSession _logParamBuilderForCurrentSharedItem] */

void FUN_1063a43a0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126ca2e0;
  _objc_opt_new(PTR_PTR_1126ca2e0);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  FUN_10643d83c(puVar1,uVar3,lVar2,*(undefined8 *)(param_1 + 8),0,*(undefined8 *)(param_1 + 0x38));
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = param_1 + 0x58;
  _objc_loadWeakRetained(lVar2);
  FUN_106441da4(uVar3,lVar2);
  _objc_release(lVar2);
  func_0x00010c2b3b00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7ce0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010beb2020(param_1);
  func_0x00010c2b3b00(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063a4498; end: 1063a473b; -[SCAdSharingSession _prepareSharingControllerWithZoomInOpera:completion:] */

void FUN_1063a4498(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_4);
  func_0x00010bef5040(param_1);
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c22b5a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22b620();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x000107b26d90();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be36bc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar6 = param_1 + 0x58;
  _objc_loadWeakRetained();
  uVar7 = uVar6;
  func_0x00010bf63e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  uVar9 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar8);
  uVar6 = uVar7;
  if ((uVar9 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1 + 0x60;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar3;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010c22c680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar12 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  _objc_release(uVar12);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar10);
  lVar1 = lVar4;
  func_0x00010bfb15a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    lVar1 = lVar4;
    func_0x00010bfb15a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x60;
    _objc_loadWeakRetained(param_1);
    lVar2 = param_1;
    func_0x00010c27f040();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c22b340(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(uVar13);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063a473c; end: 1063a4857; -[SCAdSharingSession _sharedItemMediaType] */

undefined8 FUN_1063a473c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b2340;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c118b40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c075040(puVar2,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b2340;
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c118b40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c083240(puVar3,param_2,uVar1);
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126b2340;
    if (((ulong)puVar3 & 1) == 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010c118b40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0771c0(puVar2,param_2,uVar1);
      _objc_release(uVar1);
      puVar3 = PTR_PTR_1126c9a58;
      if (((ulong)puVar2 & 1) == 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x40);
        func_0x00010c118b40(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c07fc00(puVar3,param_2,uVar1);
        _objc_release(uVar1);
        uVar1 = 4;
        if ((int)puVar3 == 0) {
          uVar1 = 0xffffffffffffffff;
        }
      }
      else {
        uVar1 = 10;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 1063a4858; end: 1063a486b; -[SCAdSharingSession updateViewLocation:] */

void FUN_1063a4858(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x38)) {
    *(long *)(param_1 + 0x38) = param_3;
  }
  return;
}



/* Entry: 1063a486c; end: 1063a495b; -[SCAdSharingSession adSharingPresenterDidChangeState] */

void FUN_1063a486c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_1 + 0x48);
  func_0x00010c252440();
  if (lVar1 == 1) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    lVar1 = param_1;
    func_0x00010bf99b80(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ca370;
    func_0x00010bf84fa0(PTR_PTR_1126ca370);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb780(lVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  if (lVar1 != 0) {
    lVar1 = param_1 + 0x58;
    _objc_loadWeakRetained(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010be36bc0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101400(lVar1,param_2,uVar4);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1063a495c; end: 1063a4a87; -[SCAdSharingSession adSharingPresenterDidCompleteSharing:withParameters:] */

void FUN_1063a495c(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126afca8;
  if (param_3 != 0) {
    _objc_retain(param_4);
    ppuVar2 = &PTR____CFConstantStringClassReference_110e1f218;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e1f218,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238760(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(ppuVar2);
    func_0x00010be4fe80(param_1);
    _objc_release(param_4);
    *(undefined1 *)(param_1 + 0x50) = 0;
    if (*(long *)(param_1 + 0x28) != 0) {
      func_0x00010bef53c0(*(undefined8 *)(param_1 + 8));
      uVar5 = *(undefined8 *)(param_1 + 8);
      func_0x00010bef4800(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e2580(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 1063a4a88; end: 1063a4aeb; -[SCAdSharingSession adSharingPresenterDidBeginSharing] */

void FUN_1063a4a88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010be4fe60();
  func_0x00010bf99b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ca370;
  func_0x00010c10f820(PTR_PTR_1126ca370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a4aec; end: 1063a4af3; -[SCAdSharingSession adSharingPresenterDidExitPreview] */

ulong FUN_1063a4aec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  _objc_retain();
  uVar5 = uVar1;
  func_0x00010c118b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  if ((int)uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar1;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126b2390;
    _objc_opt_class(PTR_PTR_1126b2390);
    uVar3 = uVar2;
    _objc_opt_isKindOfClass(uVar2,puVar4);
    uVar5 = uVar2;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar2);
    uVar2 = uVar5;
    func_0x00010bf46560(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c06b5c0(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 1063a4af4; end: 1063a4b4f; -[SCAdSharingSession adSharingPresenterDidDismiss] */

void FUN_1063a4af4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 0x50) = 0;
  func_0x00010bf99b80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126ca370;
  func_0x00010bf84fa0(PTR_PTR_1126ca370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb780(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a4b50; end: 1063a4b67; -[SCAdSharingSession playlistItemController] */

void FUN_1063a4b50(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a4b68; end: 1063a4b73; -[SCAdSharingSession setPlaylistItemController:] */

void FUN_1063a4b68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1063a4b74; end: 1063a4b8b; -[SCAdSharingSession operaControlling] */

void FUN_1063a4b74(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a4b8c; end: 1063a4b97; -[SCAdSharingSession setOperaControlling:] */

void FUN_1063a4b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x60,param_3);
  return;
}



/* Entry: 1063a4b98; end: 1063a4b9f; -[SCAdSharingSession isPresentingSendToView] */

undefined1 FUN_1063a4b98(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1063a4ba0; end: 1063a4bb7; -[SCAdSharingSession eventAnnouncing] */

void FUN_1063a4ba0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1063a4bb8; end: 1063a4bc3; -[SCAdSharingSession setEventAnnouncing:] */

void FUN_1063a4bb8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x68,param_3);
  return;
}



/* Entry: 1063a4bc4; end: 1063a4c47; -[SCAdSharingSession .cxx_destruct] */

void FUN_1063a4bc4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x68);
  _objc_destroyWeak(param_1 + 0x60);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1063a4c48; end: 1063a5b7b; -[SCAdViewingSession initWithUserSession:adDataSource:analyticsSession:viewLocation:storySessionId:deepLinkId:adTrackerHelper:unskippableAdManager:navigationStyle:adBlizzardLogger:expandStateManager:skAdNetworkMetricsManager:trackMetricsManager:adConfigProvider:adConfigProviderV2:adReportEventTrackerProvider:p2pDataSource:notificationPool:grapheneRegistry:streamingMediaFetcher:userPreferences:notificationManager:adPodManager:adNetwork:appImpressionTracker:circumstanceEngine:adEOVTimerProvider:sessionViewingHistory:audioSession:internalErrorMetricsManager:memoryPressureState:appInstallAdsDisplayedSubject:applicationLifecycleEvents:boostCoordinator:contextExperimentService:skOverlayPreloader:skOverlayLifecycleTracker:adCrashLogger:adBrowserLifecycleService:chromeInteractionSession:sharingSession:skViewThroughImpressionTracker:operaEventStateTracker:dismissTracker:adTrackHandler:applicationPreferences:attachmentPreloader:imageSourceProvider:imageFetchingService:storiesConfigProvider:dpaConfigProvider:playbackAssetRepository:promotedStoryStateProvider:mediaMetricsManager:localNotificationScheduler:] */

undefined8 *
FUN_1063a4c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
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
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain();
  _objc_retain(param_56);
  _objc_retain(param_57);
  puStack_80 = PTR_PTR_1126f1130;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[7];
    puVar1[7] = param_4;
    _objc_release(uVar2);
    puVar1[0x1a] = param_6;
    puVar1[4] = param_11;
    _objc_retain(param_20);
    uVar2 = puVar1[5];
    puVar1[5] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_50);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_50;
    _objc_release(uVar2);
    _objc_retain(param_51);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_51;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[6];
    puVar1[6] = param_26;
    _objc_release(uVar2);
    _objc_retain(param_31);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_31;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_28;
    _objc_release(uVar2);
    _objc_retain(param_52);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_52;
    _objc_release(uVar2);
    _objc_retain(param_35);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_35;
    _objc_release(uVar2);
    _objc_retain(param_32);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_32;
    _objc_release(uVar2);
    _objc_retain(param_37);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_37;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x41];
    puVar1[0x41] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_40);
    uVar2 = puVar1[0x4b];
    puVar1[0x4b] = param_40;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_55);
    uVar2 = puVar1[0x4d];
    puVar1[0x4d] = param_55;
    _objc_release(uVar2);
    if (param_6 != 0x1c) {
      _objc_retain(param_9);
      uVar2 = puVar1[0x18];
      puVar1[0x18] = param_9;
      _objc_release(uVar2);
    }
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    _objc_retain(param_10);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_29);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_29;
    _objc_release(uVar2);
    _objc_retain(param_34);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_34;
    _objc_release(uVar2);
    uVar2 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0ec0c0();
    _objc_release(uVar2);
    if ((param_6 != 0x1c) || ((int)uVar5 != 0)) {
      puVar3 = PTR_PTR_1126ca378;
      _objc_alloc();
      uVar2 = puVar1[0x18];
      func_0x00010c2a3b60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff1120();
      uVar5 = puVar1[0x16];
      puVar1[0x16] = puVar3;
      _objc_release(uVar5);
      _objc_release(uVar2);
      if (param_6 != 0x1c) {
        _objc_retain(param_43);
        uVar2 = puVar1[0xf];
        puVar1[0xf] = param_43;
        _objc_release(uVar2);
        puVar3 = PTR_PTR_1126ca380;
        _objc_alloc();
        func_0x00010bff1480();
        uVar2 = puVar1[0x10];
        puVar1[0x10] = puVar3;
        _objc_release(uVar2);
        _objc_retain(param_5);
        uVar2 = puVar1[0xc];
        puVar1[0xc] = param_5;
        _objc_release(uVar2);
        puVar3 = PTR_PTR_1126ca388;
        _objc_alloc();
        func_0x00010bff1480();
        uVar2 = puVar1[0xe];
        puVar1[0xe] = puVar3;
        _objc_release(uVar2);
        _objc_retain(param_42);
        uVar2 = puVar1[0xd];
        puVar1[0xd] = param_42;
        _objc_release(uVar2);
        uVar2 = param_16;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf90a60();
        _objc_release(uVar2);
        if ((int)uVar5 != 0) {
          puVar3 = PTR_PTR_1126ca390;
          _objc_alloc();
          func_0x00010bff12e0();
          uVar2 = puVar1[0x15];
          puVar1[0x15] = puVar3;
          _objc_release(uVar2);
        }
      }
    }
    puVar3 = PTR_PTR_1126ca398;
    _objc_alloc();
    uVar2 = param_16;
    func_0x00010c269d40(param_16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff14c0();
    uVar5 = puVar1[0x11];
    puVar1[0x11] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca3a0;
    _objc_alloc();
    func_0x00010bff1560();
    uVar2 = puVar1[0x12];
    puVar1[0x12] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca3a8;
    _objc_alloc();
    uVar2 = param_16;
    func_0x00010c269d40(param_16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff14c0();
    uVar5 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca3b0;
    _objc_alloc();
    uVar2 = param_17;
    func_0x00010c269d40(param_17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f480();
    func_0x00010bff1600();
    uVar5 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_53);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_53;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca3b8;
    _objc_opt_new();
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_13;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = puVar1[0x22];
    puVar1[0x22] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca3c0;
    _objc_alloc();
    uVar5 = puVar1[0x29];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff15e0();
    uVar6 = puVar1[0x24];
    puVar1[0x24] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_retain(param_36);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_36;
    _objc_release(uVar2);
    uVar2 = puVar1[0x32];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    uVar2 = param_56;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_44);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_44;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_35;
    func_0x00010bf75dc0(param_35);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1063a5b7c;
    puStack_a0 = &UNK_110846510;
    _objc_copyWeak(auStack_98,auStack_90);
    uVar5 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_retain(param_45);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_45;
    _objc_release(uVar2);
    _objc_retain(param_46);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_46;
    _objc_release(uVar2);
    _objc_retain(param_47);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_47;
    _objc_release(uVar2);
    uVar2 = puVar1[0x46];
    puVar1[0x46] = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ca1b0;
    _objc_opt_new();
    uVar2 = puVar1[0x19];
    puVar1[0x19] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_c0,puVar1);
    puVar3 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar2 = puVar1[0x40];
    puVar1[0x40] = puVar3;
    _objc_release(uVar2);
    uVar5 = puVar1[0x37];
    func_0x00010c2a6a00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_c8,auStack_c0);
    uVar2 = uVar5;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_retain(param_54);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_54;
    _objc_release(uVar2);
    puVar4 = puVar1;
    func_0x00010be6daa0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x4e];
    puVar1[0x4e] = puVar4;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
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
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1063a5b7c; end: 1063a5bd3;  */

void FUN_1063a5b7c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee94a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a5bd4; end: 1063a5c37; -[SCAdViewingSession dealloc] */

void FUN_1063a5bd4(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 400);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f1130;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1063a5c38; end: 1063a604b; -[SCAdViewingSession setEventAnnouncing:] */

void FUN_1063a5c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x298);
  *(undefined8 *)(param_1 + 0x298) = param_3;
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010c127820(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,param_1,lVar4);
  _objc_release(lVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = uVar3;
  func_0x00010c127820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(param_3,param_2,uVar3,uVar1);
  _objc_release(uVar1);
  func_0x00010c197680(*(undefined8 *)(param_1 + 0x78),param_2,*(undefined8 *)(param_1 + 0x298));
  uVar3 = *(undefined8 *)(param_1 + 0x298);
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = uVar6;
  func_0x00010c127820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar3,param_2,uVar6,uVar1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x298);
  uVar6 = *(undefined8 *)(param_1 + 0x108);
  uVar1 = uVar6;
  func_0x00010c127820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar3,param_2,uVar6,uVar1);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x298);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = uVar6;
  func_0x00010c127820(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef99a0(uVar3,param_2,uVar6,uVar1);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x68);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
  }
  func_0x00010c197680(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  func_0x00010c197660(*(undefined8 *)(param_1 + 0x108),param_2,param_3);
  lVar4 = *(long *)(param_1 + 0x120);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
  }
  lVar4 = *(long *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
    func_0x00010c197680(*(undefined8 *)(param_1 + 0xb0),param_2,param_3);
  }
  lVar4 = *(long *)(param_1 + 0x88);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
    func_0x00010c197660(*(undefined8 *)(param_1 + 0x88),param_2,param_3);
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
  }
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
    func_0x00010c197660(*(undefined8 *)(param_1 + 0x98),param_2,param_3);
  }
  lVar4 = *(long *)(param_1 + 0xa0);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
    func_0x00010c197660(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
  }
  lVar4 = *(long *)(param_1 + 0xa8);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
  }
  lVar4 = *(long *)(param_1 + 0x188);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x298);
    uVar3 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar6;
    func_0x00010c127820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar5,param_2,uVar3,uVar1);
    _objc_release(uVar1);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  lVar4 = *(long *)(param_1 + 0x1e8);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x298);
    lVar2 = lVar4;
    func_0x00010c127820(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef99a0(uVar1,param_2,lVar4,lVar2);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a604c; end: 1063a632f; -[SCAdViewingSession setEventSubscriber:] */

void FUN_1063a604c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + 0x260) == 0)) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x260);
    *(long *)(param_1 + 0x260) = param_3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x260);
    func_0x00010c0eb860(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1063a6330;
    puStack_88 = &UNK_11091fde8;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar2 = uVar3;
    func_0x00010c0e55e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1063a6398;
    puStack_b0 = &UNK_11091fe18;
    _objc_copyWeak(auStack_a8,auStack_78);
    func_0x00010c0e5600(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x260);
    func_0x00010c0ea780(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_1063a6400;
    puStack_d8 = &UNK_11091fe48;
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar2 = uVar4;
    func_0x00010c0e52a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    uStack_108 = 0x1063a6448;
    puStack_100 = &UNK_11091fe78;
    _objc_copyWeak(auStack_f8,auStack_78);
    uVar3 = uVar2;
    func_0x00010c0e4820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_120,auStack_78);
    func_0x00010c0e7840(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_f8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1063a6330; end: 1063a63ff;  */

void FUN_1063a6330(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d6a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a6400; end: 1063a648f;  */

void FUN_1063a6400(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c2e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a6490; end: 1063a64f7;  */

void FUN_1063a6490(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be330e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a64f8; end: 1063a65cf; -[SCAdViewingSession setOperaControlling:] */

void FUN_1063a64f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  _objc_retain(param_3);
  func_0x00010c1d53c0(uVar1);
  _objc_storeWeak(param_1 + 0x280,param_3);
  uVar1 = param_3;
  func_0x00010c0688c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x290,uVar1);
  _objc_release(uVar1);
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c1d53c0(*(undefined8 *)(param_1 + 0x120));
  func_0x00010c1d53a0(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c1d53a0(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c1d53a0(*(undefined8 *)(param_1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a65d0; end: 1063a66d3; -[SCAdViewingSession setPlaylistItemController:] */

void FUN_1063a65d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  _objc_retain(param_3);
  func_0x00010c1ddde0(uVar1);
  _objc_storeWeak(param_1 + 0x278,param_3);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x78));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x70));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x120));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x108));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x68));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x88));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0xa0));
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ddde0();
  _objc_release(uVar1);
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010c1ddde0(*(undefined8 *)(param_1 + 0x1e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a66d4; end: 1063a673b; -[SCAdViewingSession setOperaConfiguration:] */

void FUN_1063a66d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  _objc_retain(param_3);
  func_0x00010c1d5360(uVar1);
  _objc_storeWeak(param_1 + 0x288,param_3);
  func_0x00010c1d5360(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c1d5360(*(undefined8 *)(param_1 + 0x120));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a673c; end: 1063a6a2f; -[SCAdViewingSession beginObservationWithAdUnifiedEventStreams:] */

void FUN_1063a673c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  func_0x00010bf18580(*(undefined8 *)(param_1 + 0xb0));
  func_0x00010bf18580(*(undefined8 *)(param_1 + 0x60));
  func_0x00010bf18580(*(undefined8 *)(param_1 + 0x80));
  func_0x00010bf18580(*(undefined8 *)(param_1 + 0x90));
  _objc_initWeak(auStack_78,param_1);
  uVar2 = param_3;
  func_0x00010bef3280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1063a6a30;
  puStack_88 = &UNK_110887e20;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef2720(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x1063a6a78;
  puStack_b0 = &UNK_110887e50;
  _objc_copyWeak(auStack_a8,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef1be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x1063a6ac0;
  puStack_d8 = &UNK_110888910;
  _objc_copyWeak(auStack_d0,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bef1b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_f8,auStack_78);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_d0);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 1063a6a30; end: 1063a6b4f;  */

void FUN_1063a6a30(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be676c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063a6b50; end: 1063a6c33; -[SCAdViewingSession _handleLifecycleEvent:] */

void FUN_1063a6b50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c25e900();
  lVar2 = param_3;
  if (lVar1 == 8) {
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bef60a0();
    lVar3 = param_3;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf3fe80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be25ea0(param_1,param_2,lVar1,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    if (lVar1 != 7) goto LAB_1063a6c1c;
    func_0x00010bf428e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bef60a0();
    func_0x00010be25e80(param_1,param_2,lVar1);
  }
  _objc_release(lVar2);
LAB_1063a6c1c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a6c34; end: 1063a6d4b; -[SCAdViewingSession _onAdLifecycleEvent:] */

void FUN_1063a6c34(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(lVar3 + 0x18);
    _objc_release();
    lVar3 = param_3;
    if (lVar2 == 8) {
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(lVar3 + 0x58);
      }
      lVar2 = param_3;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar2 + 0x48);
      }
      _objc_retain(uVar4);
      func_0x00010be25ea0(param_1,param_2,uVar1,uVar4);
      _objc_release(uVar4);
      _objc_release(lVar2);
    }
    else {
      if (lVar2 != 7) goto LAB_1063a6d14;
      func_0x00010bf428e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(lVar3 + 0x58);
      }
      func_0x00010be25e80(param_1,param_2,uVar1);
    }
  }
  _objc_release(lVar3);
LAB_1063a6d14:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a6d4c; end: 1063a70cf; -[SCAdViewingSession _onAdDeeplinkEvent:] */

void FUN_1063a6d4c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  _NSStringFromSelector(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar2 + 0x10);
  }
  _objc_retain(lVar7);
  _objc_release(lVar7);
  if (lVar7 == 0) {
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x10);
    }
    _objc_retain(uVar3);
    func_0x00010be24e60(param_1);
    _objc_release(uVar3);
    goto LAB_1063a7068;
  }
  _objc_initWeak(auStack_78,param_1);
  lVar7 = param_3;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
LAB_1063a7044:
    _objc_release();
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x18);
    _objc_release();
    if (lVar7 < 4) {
      if (lVar7 == 1) {
        uVar3 = *(undefined8 *)(param_1 + 0x230);
        *(undefined8 *)(param_1 + 0x230) = 0;
        _objc_release(uVar3);
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_1063a70d0;
        puStack_90 = &UNK_11091fed8;
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(param_3);
        ppuVar4 = &puStack_a8;
        lStack_88 = param_3;
        _objc_retainBlock();
        uVar3 = *(undefined8 *)(param_1 + 0x238);
        *(undefined ***)(param_1 + 0x238) = ppuVar4;
        _objc_release(uVar3);
        puStack_d8 = puVar1;
        uStack_d0 = 0xc2000000;
        pcStack_c8 = FUN_1063a7214;
        puStack_c0 = &UNK_11091ff08;
        _objc_copyWeak(auStack_b0,auStack_78);
        _objc_retain(param_3);
        ppuVar4 = &puStack_d8;
        lStack_b8 = param_3;
        _objc_retainBlock();
        uVar3 = *(undefined8 *)(param_1 + 0x248);
        *(undefined ***)(param_1 + 0x248) = ppuVar4;
        _objc_release(uVar3);
        puStack_108 = puVar1;
        uStack_100 = 0xc2000000;
        uStack_f8 = 0x1063a7320;
        puStack_f0 = &UNK_11091ff08;
        _objc_copyWeak(auStack_e0,auStack_78);
        _objc_retain(param_3);
        ppuVar4 = &puStack_108;
        lStack_e8 = param_3;
        _objc_retainBlock();
        uVar3 = *(undefined8 *)(param_1 + 0x240);
        *(undefined ***)(param_1 + 0x240) = ppuVar4;
        _objc_release(uVar3);
        puStack_138 = puVar1;
        uStack_130 = 0xc2000000;
        uStack_128 = 0x1063a7580;
        puStack_120 = &UNK_11091ff08;
        _objc_copyWeak(auStack_110,auStack_78);
        _objc_retain(param_3);
        ppuVar4 = &puStack_138;
        lStack_118 = param_3;
        _objc_retainBlock();
        uVar3 = *(undefined8 *)(param_1 + 0x250);
        *(undefined ***)(param_1 + 0x250) = ppuVar4;
        _objc_release(uVar3);
        _objc_release(lStack_118);
        _objc_destroyWeak(auStack_110);
        _objc_release(lStack_e8);
        _objc_destroyWeak(auStack_e0);
        _objc_release(lStack_b8);
        _objc_destroyWeak(auStack_b0);
        _objc_release(lStack_88);
        _objc_destroyWeak(auStack_80);
      }
      else if (lVar7 == 2) {
        lVar7 = *(long *)(param_1 + 0x238);
        if (lVar7 != 0) {
          lVar5 = param_3;
          func_0x00010bf99b20();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            bVar6 = 0;
          }
          else {
            bVar6 = *(byte *)(lVar5 + 9);
          }
          (**(code **)(lVar7 + 0x10))(lVar7,lVar2,bVar6 & 1);
          goto LAB_1063a7044;
        }
      }
      else if (lVar7 == 3) {
        lVar7 = *(long *)(param_1 + 0x248);
        goto joined_r0x0001063a7050;
      }
    }
    else {
      if (lVar7 == 4) {
        lVar7 = *(long *)(param_1 + 0x250);
      }
      else {
        if (lVar7 != 5) {
          if (lVar7 == 9) {
            *(undefined8 *)(param_1 + 0x230) = 0;
            goto LAB_1063a7044;
          }
          goto LAB_1063a7060;
        }
        lVar7 = *(long *)(param_1 + 0x240);
      }
joined_r0x0001063a7050:
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x10))(lVar7,lVar2);
      }
    }
  }
LAB_1063a7060:
  _objc_destroyWeak(auStack_78);
LAB_1063a7068:
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1063a70d0; end: 1063a7213;  */

void FUN_1063a70d0(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0xc0);
    if (param_2 == 0) {
      _objc_retain(0);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(uVar3);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
    }
    _objc_retain(uVar5);
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x48);
    }
    _objc_retain(uVar6);
    func_0x00010c0e3540(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar3);
    uVar4 = 0;
    if (param_3 != 0) {
      if (param_2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x10);
      }
      _objc_retain(uVar4);
    }
    uVar3 = *(undefined8 *)(lVar1 + 0x230);
    *(undefined8 *)(lVar1 + 0x230) = uVar4;
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063a7214; end: 1063a768b;  */

void FUN_1063a7214(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0xc0);
    if (param_2 == 0) {
      _objc_retain(0);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      _objc_retain(uVar3);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar2 + 0x20);
    }
    _objc_retain(uVar5);
    if (param_2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(param_2 + 0x48);
    }
    _objc_retain(uVar6);
    func_0x00010c0e3540(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063a768c; end: 1063a7acb; -[SCAdViewingSession _onAdAppInstallEvent:] */

void FUN_1063a768c(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _NSStringFromSelector(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf428e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + 0x10);
  }
  _objc_retain(lVar7);
  lVar6 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  if (lVar6 == 0) {
    if (lVar1 == 0) goto LAB_1063a7a64;
    lVar7 = *(long *)(lVar1 + 0x10);
    goto LAB_1063a778c;
  }
  lVar7 = param_4;
  func_0x00010bf99b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) goto LAB_1063a79fc;
  lVar6 = *(long *)(lVar7 + 0x18);
  if (lVar6 < 3) {
    if (lVar6 == 1) {
      if (lVar1 == 0) {
        _objc_retain(0);
        puStack_90 = (undefined *)0x0;
      }
      else {
        puStack_90 = *(undefined **)(lVar1 + 0x10);
        _objc_retain(puStack_90);
      }
      func_0x00010be6ba80(param_2);
    }
    else {
      if (lVar6 != 2) goto LAB_1063a79fc;
      param_2 = *(undefined **)(param_2 + 0x298);
      puStack_90 = PTR_PTR_1126b2638;
      func_0x00010c288220(PTR_PTR_1126b2638);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b6008;
      func_0x00010c0ea660();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7e0(param_2);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
  }
  else if (lVar6 == 3) {
    if (lVar1 == 0) {
      _objc_retain(0);
      puStack_90 = (undefined *)0x0;
      uVar8 = 0;
    }
    else {
      puStack_90 = *(undefined **)(lVar1 + 0x10);
      _objc_retain();
      uVar8 = *(undefined8 *)(lVar1 + 0x28);
    }
    _objc_retain(uVar8);
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    _objc_retain(uVar4);
    func_0x00010bf885a0(uVar4);
    if (lVar1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar1 + 0x48);
    }
    _objc_retain(uVar9);
    func_0x00010be30ec0(param_1,param_2);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(uVar8);
    param_2 = puStack_90;
  }
  else if (lVar6 == 5) {
    uVar4 = *(undefined8 *)(param_2 + 0x148);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar4;
    func_0x00010bf8f3c0();
    _objc_release(uVar4);
    if ((int)uVar8 == 0) goto LAB_1063a79fc;
    puVar2 = param_2 + 0x278;
    _objc_loadWeakRetained();
    if (lVar1 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar1 + 0x28);
    }
    _objc_retain(uVar8);
    puStack_90 = puVar2;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(puVar2);
    func_0x00010bef53c0(*(undefined8 *)(param_2 + 0x38));
    uVar8 = *(undefined8 *)(param_2 + 0xc0);
    if (lVar1 == 0) {
      param_2 = (undefined *)0x0;
    }
    else {
      param_2 = *(undefined **)(lVar1 + 0x10);
    }
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    _objc_retain(uVar4);
    func_0x00010bf885a0(uVar4);
    if (lVar1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar1 + 0x48);
    }
    _objc_retain(uVar9);
    func_0x00010c0e7560(param_1,uVar8);
    _objc_release(uVar9);
    _objc_release(uVar4);
    _objc_release(param_2);
  }
  else {
    if (lVar6 != 4) goto LAB_1063a79fc;
    if (lVar1 == 0) {
      _objc_retain(0);
      puStack_90 = (undefined *)0x0;
    }
    else {
      puStack_90 = *(undefined **)(lVar1 + 0x10);
      _objc_retain(puStack_90);
    }
    func_0x00010be30ee0(param_2);
  }
  _objc_release(puStack_90);
LAB_1063a79fc:
  while( true ) {
    _objc_release(lVar7);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_release(param_4);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) break;
    ___stack_chk_fail();
LAB_1063a7a64:
    lVar7 = 0;
LAB_1063a778c:
    _objc_retain(lVar7);
    func_0x00010be24e60(param_2);
  }
  return;
}



/* Entry: 1063a7acc; end: 1063a7d1b; -[SCAdViewingSession _onAdAdToMessageEvent:] */

void FUN_1063a7acc(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  func_0x00010c2023e0(*(undefined8 *)(param_1 + 0x60),param_2,0);
  lVar2 = param_1 + 0x280;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0f1b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf5f780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar3 = lVar4;
  func_0x00010be36bc0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x278;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c101440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar5;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = lVar5;
    func_0x00010be36bc0(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4b20(uVar9,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar6 = uVar9;
    func_0x00010bfe5ec0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010bf99b20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(long *)(lVar2 + 0x10) == 1;
    }
    _objc_release();
    lVar2 = param_1 + 0x280;
    _objc_loadWeakRetained(lVar2);
    lVar7 = lVar2;
    func_0x00010c29dfe0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf60c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar2);
    uVar11 = *(undefined8 *)(param_1 + 0x60);
    lVar2 = param_1 + 0x290;
    _objc_loadWeakRetained(lVar2);
    lVar7 = lVar2;
    func_0x00010c089060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a3120(0,uVar11,param_2,lVar5,lVar4,lVar8,lVar7);
    _objc_release(lVar7);
    _objc_release(lVar2);
    uVar10 = *(undefined8 *)(param_1 + 0xc0);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010bef53c0(uVar11,param_2,lVar5);
    func_0x00010c0e2680(uVar10,param_2,uVar6,uVar11,bVar1);
    _objc_release(lVar8);
    _objc_release(uVar6);
    _objc_release(uVar9);
  }
  _objc_release(lVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1063a7d1c; end: 1063a7d33; -[SCAdViewingSession _handleAttachmentDidAppear:] */

void FUN_1063a7d1c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0x15) {
                    /* WARNING: Could not recover jumptable at 0x00010c2023f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_setShowingCustomAttachment__11265e320,1);
    return;
  }
  return;
}



/* Entry: 1063a7d34; end: 1063a7fd3; -[SCAdViewingSession _handleAttachmentDidDisappear:collectionItemIndex:] */

void FUN_1063a7d34(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  
  _objc_retain(param_4);
  if (param_3 == 0x15) {
    func_0x00010c2023e0(*(undefined8 *)(param_1 + 0x60),param_2,0);
    lVar1 = param_1 + 0x280;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0f1b80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf5f780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = lVar3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1 + 0x278;
    _objc_loadWeakRetained();
    lVar4 = lVar1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar4 != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x00010bef37e0(lVar5,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar5;
      func_0x00010c09c880();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010bef52a0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf20500();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar8 == 0) {
        puVar16 = (undefined *)0x0;
      }
      else {
        lVar9 = lVar5;
        func_0x00010c09c880();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar9;
        func_0x00010bef52a0();
        _objc_retainAutoreleasedReturnValue();
        lVar11 = lVar10;
        func_0x00010bf20500();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bf3fc80();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = lVar13;
        func_0x00010bf529e0();
        func_0x00010c0df840(puVar16,param_2,lVar14);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar13);
        _objc_release(lVar12);
        _objc_release(lVar11);
        _objc_release(lVar10);
        _objc_release(lVar9);
      }
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar1);
      uVar15 = *(undefined8 *)(param_1 + 0x60);
      param_1 = param_1 + 0x290;
      _objc_loadWeakRetained(param_1);
      lVar1 = param_1;
      func_0x00010c089060();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar1;
      func_0x00010c27dd80();
      func_0x00010c0a3760(uVar15,param_2,lVar4,puVar16,param_4,lVar6);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_release(puVar16);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063a7fd4; end: 1063a85f7; -[SCAdViewingSession registeredEventsForOperaSession] */

void FUN_1063a7fd4(double param_1,double param_2,double param_3,double param_4,undefined *param_5)

{
  bool bVar1;
  int iVar2;
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
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  ulong uVar40;
  ulong uVar41;
  undefined8 uVar42;
  undefined **ppuVar43;
  undefined **ppuVar44;
  undefined8 uVar45;
  long lVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  long lVar52;
  undefined *in_x4;
  long lVar53;
  undefined *puVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined **ppuVar58;
  float fVar59;
  float fVar60;
  double dVar61;
  double dVar62;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_450;
  undefined8 uStack_440;
  
  lVar53 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107ae81c0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2330;
  func_0x00010c29e700();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2330;
  func_0x00010bf3df00();
  _objc_retainAutoreleasedReturnValue();
  puVar50 = PTR_PTR_1126b2330;
  func_0x00010bfaf7a0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b2338;
  func_0x00010bfe8ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar54 = PTR_PTR_1126b2338;
  func_0x00010c0c6900();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = PTR_PTR_1126b2ea8;
  func_0x00010c0b4cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = PTR_PTR_1126c9460;
  func_0x00010c0f2620();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9460;
  func_0x00010c0f2580();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9460;
  func_0x00010c0f25e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9460;
  func_0x00010c0f2560();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c9460;
  func_0x00010c0f25a0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9460;
  func_0x00010c0f2600();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2338;
  func_0x00010c29b4c0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126b2330;
  func_0x00010bf17f80();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2330;
  func_0x00010bf2e260();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b2338;
  func_0x00010c29aaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126ca1e0;
  func_0x00010c069100();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126ca1e0;
  func_0x00010bf76600();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126ca2c0;
  func_0x00010c0ebf60();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126c9cf0;
  func_0x00010c0ff280();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = PTR_PTR_1126b2338;
  func_0x00010c299d40();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126b2638;
  func_0x00010bf112e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126ca1c0;
  func_0x00010bf7c360();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126c9460;
  func_0x00010c27c060();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = PTR_PTR_1126ca1c0;
  func_0x00010bf7c600();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126b2638;
  func_0x00010bf0a200();
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR_PTR_1126c9a00;
  func_0x00010c2a4300();
  _objc_retainAutoreleasedReturnValue();
  puVar28 = PTR_PTR_1126b2638;
  func_0x00010bf7a500();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = PTR_PTR_1126c9a08;
  func_0x00010c0fc7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar30 = PTR_PTR_1126c9400;
  func_0x00010c157400();
  _objc_retainAutoreleasedReturnValue();
  puVar31 = PTR_PTR_1126c7d70;
  func_0x00010bf3c700();
  _objc_retainAutoreleasedReturnValue();
  puVar32 = PTR_PTR_1126ca3c8;
  func_0x00010c254420();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR_PTR_1126ca1e8;
  func_0x00010bf7dba0();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR_PTR_1126b2ce8;
  func_0x00010beeeae0();
  _objc_retainAutoreleasedReturnValue();
  puVar35 = PTR_PTR_1126ca1c8;
  func_0x00010bf7c980();
  _objc_retainAutoreleasedReturnValue();
  puVar36 = PTR_PTR_1126b5b08;
  func_0x00010c269720();
  _objc_retainAutoreleasedReturnValue();
  puVar37 = PTR_PTR_1126c9a10;
  func_0x00010c063ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar52 = 0x29;
  puVar38 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = param_5;
  puVar51 = puVar38;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar38);
  _objc_release(puVar37);
  _objc_release(puVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
  _objc_release(puVar33);
  _objc_release(puVar32);
  _objc_release(puVar31);
  _objc_release(puVar30);
  _objc_release(puVar29);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar47);
  _objc_release(puVar49);
  _objc_release(puVar54);
  _objc_release(puVar6);
  _objc_release(puVar50);
  _objc_release(puVar5);
  _objc_release(puVar48);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar53) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar39);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar51);
  _objc_retain(lVar52);
  _objc_retain(in_x4);
  puVar3 = param_5;
  func_0x00010bdd38c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x00010bdf6b80();
  _objc_retainAutoreleasedReturnValue();
  puVar48 = puVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar48 == (undefined *)0x0) {
    func_0x00010be09be0(param_5);
    goto LAB_1063a9ecc;
  }
  puVar54 = *(undefined **)(param_5 + 0x38);
  puVar48 = puVar4;
  func_0x00010be36bc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar48);
  puVar5 = puVar54;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef53c0();
  puVar48 = param_5 + 0x290;
  _objc_loadWeakRetained();
  puVar50 = puVar48;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar50;
  func_0x00010c27dd80();
  _objc_release(puVar50);
  _objc_release(puVar48);
  puVar48 = puVar5;
  func_0x00010c08fa60();
  func_0x00010bef4240();
  if (puVar48 != (undefined *)0x0) {
    puVar50 = PTR_PTR_1126b2338;
    func_0x00010c29aaa0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(puVar51);
    _objc_release(puVar50);
  }
  puVar50 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar51;
  func_0x00010c0720c0();
  _objc_release(puVar50);
  if ((int)puVar49 != 0) {
    func_0x00010c13a920(*(undefined8 *)(param_5 + 200));
  }
  puVar50 = param_5;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar50;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar49;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bfce400(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar47;
  func_0x00010c0720c0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar47);
  _objc_release(puVar49);
  _objc_release(puVar50);
  puVar50 = PTR_PTR_1126c9a10;
  func_0x00010c063ee0(PTR_PTR_1126c9a10);
  _objc_retainAutoreleasedReturnValue();
  puVar49 = puVar51;
  func_0x00010c0720c0();
  _objc_release(puVar50);
  puVar50 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar47 = puVar51;
  func_0x00010c0720c0();
  _objc_release(puVar50);
  if (((((uint)puVar47 | (uint)puVar49) & 1) != 0) && (((ulong)puVar9 & 1) == 0)) {
    puVar50 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60(puVar50);
    _objc_release(puVar49);
    _objc_release(puVar50);
    uVar55 = *(undefined8 *)(param_5 + 0x38);
    puVar50 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284f00(uVar55);
    _objc_release(puVar50);
    uVar55 = *(undefined8 *)(param_5 + 0x38);
    puVar50 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = param_5;
    func_0x00010bf5f0a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar49;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251940(uVar55);
    _objc_release(puVar47);
    _objc_release(puVar49);
    _objc_release(puVar50);
    uVar40 = *(ulong *)(param_5 + 0x160);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar50;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar41 = uVar40;
    func_0x00010c075a20();
    _objc_release(puVar49);
    _objc_release(puVar50);
    _objc_release(uVar40);
    if ((uVar41 & 1) == 0) {
      uVar55 = *(undefined8 *)(param_5 + 0x160);
      func_0x00010c269d40(uVar55);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187840();
      _objc_release(uVar55);
    }
    puVar50 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar50);
  }
  puVar50 = puVar51;
  FUN_106441940(puVar51,lVar52);
  if ((int)puVar50 != 0) {
    uVar42 = *(undefined8 *)(param_5 + 0x160);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar50 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar50;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar55 = uVar42;
    func_0x00010c075a20();
    if ((int)uVar55 != 0) {
      uVar40 = *(ulong *)(param_5 + 0x160);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar41 = uVar40;
      func_0x00010bf5f8e0();
      _objc_release(uVar40);
      _objc_release(puVar49);
      _objc_release(puVar50);
      _objc_release(uVar42);
      if ((uVar41 & 1) != 0) goto LAB_1063a90c0;
      uVar55 = *(undefined8 *)(param_5 + 0x160);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar50 = puVar4;
      func_0x00010bfce400(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar49 = puVar50;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar42 = uVar55;
      func_0x00010c067260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar49);
      _objc_release(puVar50);
      _objc_release(uVar55);
      puVar50 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      ppuVar43 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar57 = *(undefined8 *)(param_5 + 0xd0);
      uVar55 = *(undefined8 *)(param_5 + 0x150);
      func_0x00010c269d40(uVar55);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001084c0d90(uVar57,uVar55);
      func_0x00010c0df780(ppuVar43);
      _objc_retainAutoreleasedReturnValue();
      puVar49 = PTR_PTR_1126b92c8;
      func_0x00010c125020(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar50);
      _objc_release(puVar49);
      _objc_release(ppuVar43);
      _objc_release(uVar55);
      puVar47 = param_5 + 0x278;
      _objc_loadWeakRetained();
      puVar7 = puVar4;
      func_0x00010bfce400(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar49 = puVar47;
      func_0x00010bf63e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar47);
      puVar47 = PTR_PTR_1126bdd30;
      _objc_retain(puVar49);
      _objc_opt_class(puVar47);
      puVar7 = puVar49;
      _objc_opt_isKindOfClass(puVar49,puVar47);
      puVar47 = puVar49;
      if (((ulong)puVar7 & 1) == 0) {
        puVar47 = (undefined *)0x0;
      }
      _objc_retain(puVar47);
      _objc_release(puVar49);
      puVar7 = PTR_PTR_1126bdd28;
      _objc_retain(puVar49);
      _objc_opt_class(puVar7);
      puVar8 = puVar49;
      _objc_opt_isKindOfClass(puVar49,puVar7);
      puVar7 = puVar49;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar49);
      puVar8 = puVar47;
      func_0x00010c11b1e0();
      ppuVar44 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      bVar1 = puVar8 == (undefined *)0x0;
      if (puVar8 == (undefined *)0x0) {
        puVar9 = puVar7;
        func_0x00010c11b1e0();
        ppuVar44 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar9 == (undefined *)0x0) {
          bVar1 = false;
          ppuVar58 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        else {
          func_0x00010c11b1e0(puVar7);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar58 = ppuVar44;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_470 = ppuVar44;
        }
      }
      else {
        func_0x00010c11b1e0(puVar47);
        func_0x00010c0df7c0(ppuVar44);
        _objc_retainAutoreleasedReturnValue();
        ppuVar58 = ppuVar44;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar43 = ppuVar44;
      }
      puVar9 = PTR_PTR_1126b92c8;
      func_0x00010c11b1e0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar50);
      _objc_release(puVar9);
      if (bVar1) {
        _objc_release(ppuVar58);
        _objc_release(ppuStack_470);
      }
      if (puVar8 != (undefined *)0x0) {
        _objc_release(ppuVar58);
        _objc_release(ppuVar43);
      }
      puVar9 = puVar47;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x00010c11b3a0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar10 = PTR_PTR_1126b92c8;
      func_0x00010c11b3a0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar50);
      _objc_release(puVar10);
      if (puVar9 == (undefined *)0x0) {
        _objc_release(puVar8);
      }
      _objc_release(puVar9);
      uVar55 = uVar42;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar57 = uVar55;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar56 = uVar57;
      func_0x00010c117ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar45 = uVar56;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b92c8;
      func_0x00010bf8c980(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar50);
      _objc_release(puVar8);
      _objc_release(uVar45);
      _objc_release(uVar56);
      _objc_release(uVar57);
      _objc_release(uVar55);
      puVar8 = puVar7;
      func_0x00010bf8c980();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      if (puVar9 != (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x00010bf8c980(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b92c8;
        func_0x00010c0ecf40(PTR_PTR_1126b92c8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar50);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      puVar8 = puVar7;
      func_0x00010bfe4640();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      if (puVar9 != (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x00010bfe4640(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b92c8;
        func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar50);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c077680(puVar7);
      func_0x00010c0df6e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b92c8;
      func_0x00010c260660(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar50);
      _objc_release(puVar9);
      _objc_release(puVar8);
      uVar55 = *(undefined8 *)(param_5 + 0xc0);
      puVar8 = puVar50;
      func_0x00010bf51e00(puVar50);
      func_0x00010c278440(uVar55);
      _objc_release(puVar8);
      uVar55 = *(undefined8 *)(param_5 + 0x160);
      func_0x00010c269d40(uVar55);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187840();
      _objc_release(uVar55);
      _objc_release(puVar7);
      _objc_release(puVar47);
    }
    _objc_release(puVar49);
    _objc_release(puVar50);
    _objc_release(uVar42);
  }
LAB_1063a90c0:
  _objc_retain(puVar51);
  _objc_retain(lVar52);
  puVar50 = PTR_PTR_1126b2340;
  lVar53 = lVar52;
  func_0x00010c118b40(lVar52);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0();
  _objc_release(lVar53);
  if ((int)puVar50 == 0) {
    puVar50 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar51;
    func_0x00010c0720c0();
    _objc_release(puVar50);
    puVar50 = PTR_PTR_1126b2340;
    if ((int)puVar49 == 0) {
      puVar50 = PTR_PTR_1126b2330;
      func_0x00010c0e9c60(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar47 = puVar51;
      func_0x00010c0720c0();
      _objc_release(puVar50);
      puVar49 = PTR_PTR_1126b2340;
      if ((int)puVar47 == 0) {
        puVar49 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        puVar50 = puVar51;
        func_0x00010c0720c0();
        _objc_release(puVar49);
      }
      else {
        lVar53 = lVar52;
        func_0x00010c118b40(lVar52);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c075040();
        puVar50 = PTR_PTR_1126ca2b0;
        if ((int)puVar49 != 0) {
          _objc_release(lVar53);
          goto LAB_1063a92f0;
        }
        lVar46 = lVar52;
        func_0x00010c118b40(lVar52);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06eec0();
        _objc_release(lVar46);
        _objc_release(lVar53);
      }
joined_r0x0001063a9298:
      if (((ulong)puVar50 & 1) == 0) goto LAB_1063a929c;
    }
    else {
      lVar53 = lVar52;
      func_0x00010c118b40(lVar52);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079440();
      _objc_release(lVar53);
      puVar49 = PTR_PTR_1126b2340;
      lVar53 = lVar52;
      func_0x00010c118b40(lVar52);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c076c60();
      _objc_release(lVar53);
      if (((ulong)puVar49 & 1) == 0) goto joined_r0x0001063a9298;
    }
LAB_1063a92f0:
    _objc_release(lVar52);
    _objc_release(puVar51);
LAB_1063a9300:
    func_0x00010c251920(*(undefined8 *)(param_5 + 0x38));
    if (puVar54 != (undefined *)0x0) {
      puVar50 = *(undefined **)(param_5 + 0x180);
      func_0x00010c269d40(puVar50);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7bd60();
LAB_1063a9334:
      _objc_release(puVar50);
    }
  }
  else {
    puVar50 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60();
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar51;
    func_0x00010c0720c0();
    _objc_release(puVar50);
    if (((ulong)puVar49 & 1) == 0) {
LAB_1063a929c:
      _objc_release(lVar52);
      puVar50 = puVar51;
      goto LAB_1063a9334;
    }
    _objc_release(lVar52);
    _objc_release(puVar51);
    if (puVar6 == (undefined *)0x2) goto LAB_1063a9300;
  }
  puVar50 = puVar51;
  FUN_1063a2154();
  if ((int)puVar50 != 0) {
    func_0x00010c1874e0(param_5);
    *(undefined8 *)(param_5 + 0x10) = 0;
  }
  puVar50 = in_x4;
  func_0x00010bf51e00(in_x4);
  func_0x00010c187740(param_5);
  _objc_release(puVar50);
  func_0x00010bee2d80(param_5);
  lVar53 = *(long *)(param_5 + 0x230);
  func_0x00010c08fa60();
  if (((lVar53 == 0) || (puVar50 = puVar5, func_0x00010c0720c0(), (int)puVar50 == 0)) ||
     (puVar50 = puVar54, func_0x00010bef60a0(), puVar50 != (undefined *)0x5)) {
    iVar2 = 0;
  }
  else {
    puVar50 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar51;
    func_0x00010c0720c0();
    iVar2 = (int)puVar49;
    _objc_release(puVar50);
  }
  puVar50 = puVar51;
  func_0x000106441ad0(puVar51,lVar52,puVar6 == (undefined *)0x2,puVar48 != (undefined *)0x0);
  if ((((ulong)puVar50 & 1) != 0) || (iVar2 != 0)) {
    func_0x00010becdca0(param_5);
    param_5[0xe2] = 0;
    uVar55 = *(undefined8 *)(param_5 + 0x230);
    *(undefined8 *)(param_5 + 0x230) = 0;
    _objc_release(uVar55);
  }
  _objc_retain(puVar51);
  puVar50 = PTR_PTR_1126c9460;
  func_0x00010c0f25a0(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar51;
  func_0x00010c0720c0();
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = PTR_PTR_1126c9460;
    func_0x00010c0f2600(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = puVar51;
    func_0x00010c0720c0();
    if (((ulong)puVar49 & 1) != 0) {
LAB_1063a9534:
      _objc_release(puVar6);
      goto LAB_1063a9540;
    }
    puVar49 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar47 = puVar51;
    func_0x00010c0720c0();
    if (((ulong)puVar47 & 1) != 0) {
LAB_1063a9528:
      _objc_release(puVar49);
      goto LAB_1063a9534;
    }
    puVar47 = PTR_PTR_1126c9460;
    func_0x00010c0f2620(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar51;
    func_0x00010c0720c0();
    if (((ulong)puVar7 & 1) != 0) {
LAB_1063a951c:
      _objc_release(puVar47);
      goto LAB_1063a9528;
    }
    puVar7 = PTR_PTR_1126c9460;
    func_0x00010c0f2560(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar51;
    func_0x00010c0720c0();
    if (((ulong)puVar8 & 1) != 0) {
      _objc_release(puVar7);
      goto LAB_1063a951c;
    }
    puVar8 = PTR_PTR_1126c9460;
    func_0x00010c0f2580(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar51;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar47);
    _objc_release(puVar49);
    _objc_release(puVar6);
    _objc_release(puVar50);
    _objc_release(puVar51);
    if (((ulong)puVar9 & 1) != 0) goto LAB_1063a9550;
  }
  else {
LAB_1063a9540:
    _objc_release(puVar50);
    _objc_release(puVar51);
LAB_1063a9550:
    _objc_retain(puVar51);
    uVar55 = *(undefined8 *)(param_5 + 0xd8);
    *(undefined **)(param_5 + 0xd8) = puVar51;
    _objc_release(uVar55);
  }
  uVar55 = *(undefined8 *)(param_5 + 0x38);
  puVar50 = puVar4;
  func_0x00010be36bc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar50);
  if (puVar5 == (undefined *)0x0) {
    uStack_450 = 0;
    uStack_440 = 0;
    uStack_468 = 0;
  }
  else {
    uStack_468 = uVar55;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    uStack_440 = uVar55;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    uStack_450 = uVar55;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(uVar55);
  }
  puVar50 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar51;
  func_0x00010c0720c0();
  _objc_release(puVar50);
  if ((int)puVar6 != 0) {
    if (*(long *)(param_5 + 0x260) == 0) {
      puVar48 = PTR_PTR_1126b2348;
      func_0x00010c0c5ec0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar50 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar48);
      puVar48 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar6 = puVar50;
      _objc_opt_isKindOfClass(puVar50,puVar48);
      puVar48 = puVar50;
      if (((ulong)puVar6 & 1) == 0) {
        puVar48 = (undefined *)0x0;
      }
      _objc_retain(puVar48);
      _objc_release(puVar50);
      puVar50 = PTR_PTR_1126c9a20;
      func_0x00010c06c7e0(PTR_PTR_1126c9a20);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar50);
      puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar49 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar50);
      puVar50 = puVar6;
      if (((ulong)puVar49 & 1) == 0) {
        puVar50 = (undefined *)0x0;
      }
      _objc_retain(puVar50);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c9a20;
      func_0x00010c0725c0(PTR_PTR_1126c9a20);
      _objc_retainAutoreleasedReturnValue();
      puVar49 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar47 = puVar49;
      _objc_opt_isKindOfClass(puVar49,puVar6);
      puVar6 = puVar49;
      if (((ulong)puVar47 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar49);
      puVar49 = PTR_PTR_1126c9db8;
      _objc_alloc(PTR_PTR_1126c9db8);
      func_0x00010bf1f3c0(puVar50);
      _objc_release(puVar50);
      func_0x00010bf1f3c0(puVar6);
      _objc_release(puVar6);
      func_0x00010c029aa0(puVar49);
      _objc_release(puVar48);
      func_0x00010be2d6a0(param_5);
      goto LAB_1063a99f8;
    }
    goto LAB_1063a9e88;
  }
  puVar50 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar51;
  func_0x00010c0720c0();
  _objc_release(puVar50);
  if ((int)puVar6 == 0) {
    puVar50 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar51;
    func_0x00010c0720c0();
    _objc_release(puVar50);
    puVar50 = PTR_PTR_1126b2340;
    if ((int)puVar6 == 0) {
      puVar50 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar51;
      func_0x00010c0720c0();
      _objc_release(puVar50);
      if ((int)puVar6 == 0) {
        puVar50 = PTR_PTR_1126c9460;
        func_0x00010c0f2620(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar51;
        func_0x00010c0720c0();
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = PTR_PTR_1126c9460;
          func_0x00010c0f2580(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar49 = puVar51;
          func_0x00010c0720c0();
          if (((ulong)puVar49 & 1) != 0) {
LAB_1063a9be8:
            _objc_release(puVar6);
            goto LAB_1063a9bf0;
          }
          puVar49 = PTR_PTR_1126c9460;
          func_0x00010c0f25e0(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar47 = puVar51;
          func_0x00010c0720c0();
          if ((int)puVar47 != 0) {
            _objc_release(puVar49);
            goto LAB_1063a9be8;
          }
          puVar47 = PTR_PTR_1126c9460;
          func_0x00010c0f2560(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar51;
          func_0x00010c0720c0();
          _objc_release(puVar47);
          _objc_release(puVar49);
          _objc_release(puVar6);
          _objc_release(puVar50);
          if (((ulong)puVar7 & 1) != 0) goto LAB_1063a9bf8;
          puVar50 = PTR_PTR_1126b2338;
          func_0x00010c29b4c0(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar51;
          func_0x00010c0720c0();
          if (((int)puVar6 == 0) || (puVar48 == (undefined *)0x0)) {
            _objc_release(puVar50);
          }
          else {
            lVar53 = lVar52;
            FUN_106449b58();
            _objc_release(puVar50);
            if ((int)lVar53 != 0) {
              FUN_10644a2b8(lVar52);
              uVar42 = *(undefined8 *)(param_5 + 0x100);
              puVar50 = puVar4;
              func_0x00010be36bc0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar48 = param_5 + 0x278;
              _objc_loadWeakRetained(puVar48);
              func_0x00010bef4240(puVar54);
              func_0x00010bf77120(param_1,uVar42);
              _objc_release(puVar48);
              _objc_release(puVar50);
              goto LAB_1063a9e88;
            }
          }
          puVar50 = PTR_PTR_1126b2330;
          func_0x00010bf17f80(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar51;
          func_0x00010c0720c0();
          _objc_release(puVar50);
          puVar49 = param_5;
          if ((int)puVar6 == 0) {
            puVar50 = PTR_PTR_1126b2330;
            func_0x00010bf2e260(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              if (puVar48 != (undefined *)0x0) {
                func_0x00010bef2820(param_5);
                _objc_retainAutoreleasedReturnValue();
                _CACurrentMediaTime();
                func_0x00010c0842a0(puVar49);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126b2338;
            func_0x00010c29aaa0(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              if (*(long *)(param_5 + 0x260) == 0) {
                puVar48 = PTR_PTR_1126b2348;
                func_0x00010bf8b340(PTR_PTR_1126b2348);
                fVar59 = SUB84(param_1,0);
                _objc_retainAutoreleasedReturnValue();
                puVar50 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar48);
                puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                puVar6 = puVar50;
                _objc_opt_isKindOfClass(puVar50,puVar48);
                puVar48 = puVar50;
                if (((ulong)puVar6 & 1) == 0) {
                  puVar48 = (undefined *)0x0;
                }
                _objc_retain(puVar48);
                _objc_release(puVar50);
                puVar50 = PTR_PTR_1126b2348;
                func_0x00010bf5fb40(PTR_PTR_1126b2348);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar50);
                puVar50 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                puVar49 = puVar6;
                _objc_opt_isKindOfClass(puVar6,puVar50);
                puVar50 = puVar6;
                if (((ulong)puVar49 & 1) == 0) {
                  puVar50 = (undefined *)0x0;
                }
                _objc_retain(puVar50);
                _objc_release(puVar6);
                puVar49 = PTR_PTR_1126ca3d0;
                _objc_alloc(PTR_PTR_1126ca3d0);
                func_0x00010bfb2c80(puVar48);
                fVar60 = fVar59;
                _objc_release(puVar48);
                func_0x00010bfb2c80(puVar50);
                _objc_release(puVar50);
                func_0x00010c00eb40((double)fVar59,(double)fVar60,puVar49);
                func_0x00010be330e0(param_5);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126ca1e0;
            func_0x00010bf76600(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            if ((int)puVar6 != 0) {
              _objc_release(puVar50);
LAB_1063aa2d0:
              func_0x00010bef53c0();
              func_0x00010c278b20(*(undefined8 *)(param_5 + 0xc0));
              goto LAB_1063a9e88;
            }
            puVar6 = PTR_PTR_1126ca1e0;
            func_0x00010c069100(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            puVar47 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar50);
            if ((int)puVar47 != 0) goto LAB_1063aa2d0;
            puVar50 = PTR_PTR_1126ca2c0;
            func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            puVar50 = PTR_PTR_1126b2340;
            if ((int)puVar6 != 0) {
              lVar53 = lVar52;
              func_0x00010c118b40(lVar52);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c079440();
              _objc_release(lVar53);
              if (((int)puVar50 != 0) && (puVar48 != (undefined *)0x0)) {
                uVar42 = *(undefined8 *)(param_5 + 0x110);
                puVar48 = puVar4;
                func_0x00010bfce400(puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar50 = puVar48;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(uVar42);
                _objc_release(puVar50);
                _objc_release(puVar48);
                uVar42 = *(undefined8 *)(param_5 + 0x38);
                puVar48 = puVar4;
                func_0x00010bfce400(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c256ea0(uVar42);
                _objc_release(puVar48);
                puVar49 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar49);
                puVar48 = puVar4;
                func_0x00010be36bc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c101400(puVar49);
                _objc_release(puVar48);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126c9cf0;
            func_0x00010c0ff280(PTR_PTR_1126c9cf0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              puVar48 = PTR_PTR_1126c9cf8;
              func_0x00010c27c520(PTR_PTR_1126c9cf8);
              _objc_retainAutoreleasedReturnValue();
              puVar50 = in_x4;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar48);
              if (puVar50 != (undefined *)0x0) {
                puVar48 = PTR_PTR_1126c9cf8;
                func_0x00010c27c520(PTR_PTR_1126c9cf8);
                _objc_retainAutoreleasedReturnValue();
                puVar50 = in_x4;
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067fc0();
                _objc_release(puVar50);
                _objc_release(puVar48);
                func_0x00010c285980(*(undefined8 *)(param_5 + 0x38));
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126b2330;
            func_0x00010bfaf7a0(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              uVar42 = *(undefined8 *)(param_5 + 0x1f0);
              puVar48 = puVar54;
              func_0x00010bef52e0(puVar54);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf95520(uVar42);
              _objc_release(puVar48);
              func_0x00010be592c0(param_5);
              goto LAB_1063a9e88;
            }
            puVar50 = puVar51;
            func_0x000107ae801c(puVar51,lVar52,in_x4);
            if ((int)puVar50 != 0) {
              uVar57 = *(undefined8 *)(param_5 + 0x38);
              puVar50 = puVar4;
              func_0x00010be36bc0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef4b20();
              _objc_retainAutoreleasedReturnValue();
              uVar56 = *(undefined8 *)(param_5 + 0x38);
              func_0x00010bef53c0(uVar56);
              uVar42 = uVar57;
              FUN_1063aba6c(uVar57,uVar56);
              _objc_release(uVar57);
              _objc_release(puVar50);
              if ((int)uVar42 != 0) {
                param_5[0xe1] = 1;
                puVar50 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar50);
                puVar6 = puVar4;
                func_0x00010be36bc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c101400(puVar50);
                _objc_release(puVar6);
                _objc_release(puVar50);
              }
              if (puVar48 != (undefined *)0x0) {
                uVar42 = *(undefined8 *)(param_5 + 0xc0);
                puVar48 = PTR_PTR_1126ca300;
                func_0x00010bf3ca20(PTR_PTR_1126ca300);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e4e20(uVar42);
                _objc_release(puVar48);
              }
              if (lVar52 == 0) {
                puVar49 = *(undefined **)(param_5 + 0x1c0);
                func_0x00010c269d40(puVar49);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0a0640();
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126c95c8;
            func_0x00010c09d2c0(PTR_PTR_1126c95c8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              if (puVar48 != (undefined *)0x0) {
                uVar42 = *(undefined8 *)(param_5 + 0x38);
                func_0x00010bf5f0a0(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf7cc80(uVar42);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar50 = puVar51;
            func_0x00010c0720c0();
            if ((int)puVar50 != 0) {
              puVar48 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar48 != (undefined *)0x0) {
                puVar49 = in_x4;
                func_0x00010c0e00e0(in_x4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067ec0();
                func_0x00010c28bee0(param_5);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126b2338;
            func_0x00010c299d40(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              func_0x00010be6c560(param_5);
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126c7d70;
            func_0x00010bf3c700(PTR_PTR_1126c7d70);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              puVar50 = *(undefined **)(param_5 + 0x140);
              func_0x00010c269d40(puVar50);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126c7d78;
              func_0x00010c13ca20();
              _objc_retainAutoreleasedReturnValue();
              puVar49 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f3c0();
              puVar47 = PTR_PTR_1126c7d78;
              func_0x00010bf987e0(PTR_PTR_1126c7d78);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = in_x4;
              func_0x00010c0e00e0(in_x4);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR_PTR_1126c7d78;
              func_0x00010c08ad40(PTR_PTR_1126c7d78);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = in_x4;
              func_0x00010c0e00e0(in_x4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              puVar48 = PTR_PTR_1126c7d78;
              func_0x00010c1082c0(PTR_PTR_1126c7d78);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar48);
              puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar11 = puVar10;
              _objc_opt_isKindOfClass(puVar10,puVar48);
              puVar48 = puVar10;
              if (((ulong)puVar11 & 1) == 0) {
                puVar48 = (undefined *)0x0;
              }
              _objc_retain(puVar48);
              _objc_release(puVar10);
              func_0x00010c0aea60(param_1,puVar50);
              _objc_release(puVar48);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar47);
              _objc_release(puVar49);
              _objc_release(puVar6);
              goto LAB_1063aa990;
            }
            puVar50 = PTR_PTR_1126b2638;
            func_0x00010bf112e0(PTR_PTR_1126b2638);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              if ((puVar48 != (undefined *)0x0) &&
                 (lVar53 = lVar52, FUN_106449b58(), (int)lVar53 != 0)) {
                FUN_10644a2b8(lVar52);
                uVar42 = *(undefined8 *)(param_5 + 0x100);
                puVar50 = puVar4;
                func_0x00010be36bc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar48 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar48);
                func_0x00010bef4240(puVar54);
                func_0x00010bf77120(param_1,uVar42);
                _objc_release(puVar48);
                _objc_release(puVar50);
              }
              func_0x00010be5b000(param_5);
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126c9a00;
            func_0x00010c2a4300(PTR_PTR_1126c9a00);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if (((int)puVar6 != 0) && (puVar48 != (undefined *)0x0)) {
              uVar42 = *(undefined8 *)(param_5 + 0xc0);
              puVar48 = PTR_PTR_1126ca300;
              func_0x00010c0f1780(PTR_PTR_1126ca300);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e4e20(uVar42);
LAB_1063aaad0:
              _objc_release(puVar48);
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126c9a08;
            func_0x00010c0fc7e0(PTR_PTR_1126c9a08);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if (((int)puVar6 != 0) && (puVar48 != (undefined *)0x0)) {
              puVar48 = PTR_PTR_1126c9a68;
              func_0x00010c06b400(PTR_PTR_1126c9a68);
              _objc_retainAutoreleasedReturnValue();
              puVar50 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar50;
              func_0x00010bf1f3c0();
              _objc_release(puVar50);
              _objc_release(puVar48);
              if (((ulong)puVar6 & 1) == 0) {
                func_0x00010c0e72a0(*(undefined8 *)(param_5 + 0xc0));
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126c9400;
            func_0x00010c157400(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if (((int)puVar6 != 0) && (puVar48 == (undefined *)0x0)) {
              puVar48 = PTR_PTR_1126c9408;
              func_0x00010c157060(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              puVar50 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar48);
              puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar6 = puVar50;
              _objc_opt_isKindOfClass(puVar50,puVar48);
              puVar48 = puVar50;
              if (((ulong)puVar6 & 1) == 0) {
                puVar48 = (undefined *)0x0;
              }
              _objc_retain(puVar48);
              _objc_release(puVar50);
              puVar50 = puVar48;
              func_0x00010c067ec0();
              _objc_release(puVar48);
              if ((int)puVar50 == 1) {
                puVar48 = PTR_PTR_1126c9408;
                func_0x00010c157360(PTR_PTR_1126c9408);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = in_x4;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar48);
                puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                puVar49 = puVar6;
                _objc_opt_isKindOfClass(puVar6,puVar48);
                puVar50 = puVar6;
                if (((ulong)puVar49 & 1) == 0) {
                  puVar50 = (undefined *)0x0;
                }
                _objc_retain(puVar50);
                _objc_release(puVar6);
                puVar48 = puVar50;
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar50);
                if (puVar48 != (undefined *)0x0) {
                  puVar6 = puVar4;
                  func_0x00010be36bc0(puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  puVar50 = puVar6;
                  func_0x00010c25ce40();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar6);
                  func_0x00010c2518e0(*(undefined8 *)(param_5 + 0x38));
LAB_1063aad20:
                  _objc_release(puVar50);
                }
                goto LAB_1063aaad0;
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126ca3c8;
            func_0x00010c254420(PTR_PTR_1126ca3c8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if (((int)puVar6 != 0) && (puVar48 != (undefined *)0x0)) {
              uVar42 = *(undefined8 *)(param_5 + 0xc0);
              puVar48 = PTR_PTR_1126ca3d8;
              func_0x00010c254400(PTR_PTR_1126ca3d8);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar48);
              puVar48 = PTR__OBJC_CLASS___NSArray_1126ae530;
              _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
              puVar49 = puVar6;
              _objc_opt_isKindOfClass(puVar6,puVar48);
              puVar50 = puVar6;
              if (((ulong)puVar49 & 1) == 0) {
                puVar50 = (undefined *)0x0;
              }
              _objc_retain(puVar50);
              _objc_release(puVar6);
              func_0x00010c0e6a60(uVar42);
LAB_1063aa990:
              _objc_release(puVar50);
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126ca1e8;
            func_0x00010bf7dba0(PTR_PTR_1126ca1e8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              puVar48 = puVar54;
              func_0x00010bef52c0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar48;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              puVar49 = puVar6;
              func_0x00010bf20500();
              _objc_retainAutoreleasedReturnValue();
              puVar47 = puVar49;
              func_0x00010bf3fc80();
              _objc_retainAutoreleasedReturnValue();
              puVar50 = puVar47;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar47);
              _objc_release(puVar49);
              _objc_release(puVar6);
              _objc_release(puVar48);
              puVar48 = puVar54;
              func_0x00010bef52c0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar48;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              puVar49 = puVar6;
              func_0x00010bf3fd80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
              _objc_release(puVar48);
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010beec800(*(undefined8 *)(param_5 + 0x200));
              func_0x00010c0df720(param_1 * 1000.0);
              _objc_retainAutoreleasedReturnValue();
              puVar48 = PTR_PTR_1126ca228;
              func_0x00010c274bc0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar47 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar48);
              puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar7 = puVar47;
              _objc_opt_isKindOfClass(puVar47,puVar48);
              puVar48 = puVar47;
              if (((ulong)puVar7 & 1) == 0) {
                puVar48 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar47);
              puVar47 = PTR_PTR_1126ca228;
              func_0x00010c274ae0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar47);
              puVar47 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar8 = puVar7;
              _objc_opt_isKindOfClass(puVar7,puVar47);
              puVar47 = puVar7;
              if (((ulong)puVar8 & 1) == 0) {
                puVar47 = (undefined *)0x0;
              }
              _objc_retain(puVar47);
              _objc_release(puVar7);
              func_0x00010bf1f3c0();
              _objc_release(puVar47);
              puVar47 = PTR_PTR_1126ca228;
              func_0x00010c274c00(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar47);
              puVar47 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar8 = puVar7;
              _objc_opt_isKindOfClass(puVar7,puVar47);
              puVar47 = puVar7;
              if (((ulong)puVar8 & 1) == 0) {
                puVar47 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar7);
              puVar7 = PTR_PTR_1126ca228;
              func_0x00010c274b00(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar9 = puVar8;
              _objc_opt_isKindOfClass(puVar8,puVar7);
              puVar7 = puVar8;
              if (((ulong)puVar9 & 1) == 0) {
                puVar7 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar8);
              puVar8 = PTR_PTR_1126ca228;
              func_0x00010c274be0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar10 = puVar9;
              _objc_opt_isKindOfClass(puVar9,puVar8);
              puVar8 = puVar9;
              if (((ulong)puVar10 & 1) == 0) {
                puVar8 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126ca228;
              func_0x00010c274b60(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar10 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar11 = puVar10;
              _objc_opt_isKindOfClass(puVar10,puVar9);
              puVar9 = puVar10;
              if (((ulong)puVar11 & 1) == 0) {
                puVar9 = (undefined *)0x0;
              }
              _objc_retain(puVar9);
              _objc_release(puVar10);
              puVar10 = PTR_PTR_1126ca228;
              func_0x00010c274b40(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar11 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar10);
              puVar10 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar12 = puVar11;
              _objc_opt_isKindOfClass(puVar11,puVar10);
              puVar10 = puVar11;
              if (((ulong)puVar12 & 1) == 0) {
                puVar10 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar11);
              puVar11 = PTR_PTR_1126ca228;
              func_0x00010c274b80(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar12 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar13 = puVar12;
              _objc_opt_isKindOfClass(puVar12,puVar11);
              puVar11 = puVar12;
              if (((ulong)puVar13 & 1) == 0) {
                puVar11 = (undefined *)0x0;
              }
              _objc_retain(puVar11);
              _objc_release(puVar12);
              puVar12 = PTR_PTR_1126ca228;
              func_0x00010c274ba0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar13 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar14 = puVar13;
              _objc_opt_isKindOfClass(puVar13,puVar12);
              puVar12 = puVar13;
              if (((ulong)puVar14 & 1) == 0) {
                puVar12 = (undefined *)0x0;
              }
              _objc_retain(puVar12);
              _objc_release(puVar13);
              func_0x00010c0a5400(*(undefined8 *)(param_5 + 0xc0));
              _objc_release(puVar12);
              _objc_release(puVar11);
              _objc_release(puVar10);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar47);
              _objc_release(puVar48);
              _objc_release(puVar6);
              _objc_release(puVar49);
              goto LAB_1063aa990;
            }
            puVar50 = PTR_PTR_1126b2ce8;
            func_0x00010beeeae0(PTR_PTR_1126b2ce8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              if (puVar48 != (undefined *)0x0) {
                func_0x00010be68700(param_5);
              }
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126ca1c8;
            func_0x00010bf7c980(PTR_PTR_1126ca1c8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              puVar48 = PTR_PTR_1126ca1a0;
              func_0x00010c269160(PTR_PTR_1126ca1a0);
              _objc_retainAutoreleasedReturnValue();
              puVar50 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar48);
              puVar48 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar6 = puVar50;
              _objc_opt_isKindOfClass(puVar50,puVar48);
              puVar48 = puVar50;
              if (((ulong)puVar6 & 1) == 0) {
                puVar48 = (undefined *)0x0;
              }
              _objc_retain(puVar48);
              _objc_release(puVar50);
              func_0x00010bdc1060(puVar48);
              _objc_release(puVar48);
              puVar48 = PTR_PTR_1126ca1a0;
              func_0x00010c084640(PTR_PTR_1126ca1a0);
              _objc_retainAutoreleasedReturnValue();
              puVar50 = in_x4;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar48);
              puVar48 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar6 = puVar50;
              _objc_opt_isKindOfClass(puVar50,puVar48);
              puVar48 = puVar50;
              if (((ulong)puVar6 & 1) == 0) {
                puVar48 = (undefined *)0x0;
              }
              _objc_retain(puVar48);
              _objc_release(puVar50);
              puVar50 = PTR__OBJC_CLASS___UIScreen_1126aea10;
              func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14c760();
              _objc_release(puVar50);
              dVar61 = 0.0;
              if (param_3 != 0.0) {
                dVar61 = param_1 / param_3;
              }
              dVar62 = 0.0;
              if (param_4 != 0.0) {
                dVar62 = param_2 / param_4;
              }
              uVar42 = *(undefined8 *)(param_5 + 0x58);
              func_0x00010c067fc0(puVar48);
              _objc_release(puVar48);
              func_0x00010c0a51e0(param_1,param_2,dVar61,dVar62,uVar42);
              goto LAB_1063a9e88;
            }
            puVar50 = PTR_PTR_1126b5b08;
            func_0x00010c269720(PTR_PTR_1126b5b08);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((int)puVar6 != 0) {
              puVar50 = param_5;
              func_0x00010bf5f0a0();
              _objc_retainAutoreleasedReturnValue();
              puVar48 = puVar50;
              func_0x00010bfce400();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar50);
              puVar50 = puVar48;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar50;
              func_0x00010c0720c0();
              _objc_release(puVar50);
              puVar50 = puVar48;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              if ((int)puVar6 == 0) {
                func_0x00010bfece40();
                _objc_release(puVar50);
                puVar50 = puVar48;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar50;
                func_0x00010bfece40();
                _objc_release(puVar50);
                puVar50 = puVar48;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                puVar49 = puVar50;
                func_0x00010bf529e0();
                _objc_release(puVar50);
                if (puVar6 < puVar49) {
                  puVar6 = puVar48;
                  func_0x00010c084fc0(puVar48);
                  _objc_retainAutoreleasedReturnValue();
                  puVar49 = puVar6;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar50 = puVar49;
                  func_0x00010be36bc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar49);
                  _objc_release(puVar6);
                  puVar6 = param_5 + 0x278;
                  _objc_loadWeakRetained(puVar6);
                  func_0x00010c1ddd40();
                }
                else {
                  puVar50 = param_5 + 0x280;
                  _objc_loadWeakRetained(puVar50);
                  puVar6 = puVar50;
                  func_0x00010c0d6240();
                  _objc_retainAutoreleasedReturnValue();
                  puVar49 = param_5 + 0x290;
                  _objc_loadWeakRetained(puVar49);
                  puVar47 = puVar49;
                  func_0x00010c089060();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0d6060(puVar6);
                  _objc_release(puVar47);
                  _objc_release(puVar49);
                }
                _objc_release(puVar6);
              }
              else {
                puVar6 = puVar50;
                func_0x00010bf529e0();
                _objc_release(puVar50);
                if (puVar6 == (undefined *)0x0) goto LAB_1063aaad0;
                puVar6 = puVar48;
                func_0x00010c084fc0(puVar48);
                _objc_retainAutoreleasedReturnValue();
                puVar49 = puVar6;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                puVar50 = puVar49;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar49);
                _objc_release(puVar6);
                puVar6 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar6);
                func_0x00010c1ddd40();
                _objc_release(puVar6);
              }
              goto LAB_1063aad20;
            }
            puVar50 = PTR_PTR_1126b2330;
            func_0x00010c29e700(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar51;
            func_0x00010c0720c0();
            _objc_release(puVar50);
            if ((((int)puVar6 == 0) || (puVar48 == (undefined *)0x0)) ||
               (lVar53 = lVar52, func_0x000106449c18(), (int)lVar53 == 0)) goto LAB_1063a9e88;
            uVar42 = *(undefined8 *)(param_5 + 0x100);
            puVar49 = puVar4;
            func_0x00010be36bc0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar48 = param_5 + 0x278;
            _objc_loadWeakRetained(puVar48);
            func_0x00010c29e760(uVar42);
            goto LAB_1063a99f0;
          }
          if (puVar48 == (undefined *)0x0) goto LAB_1063a9e88;
          func_0x00010bef2820(param_5);
          _objc_retainAutoreleasedReturnValue();
          _CACurrentMediaTime();
          func_0x00010c0842c0(puVar49);
          goto LAB_1063a99f8;
        }
LAB_1063a9bf0:
        _objc_release(puVar50);
LAB_1063a9bf8:
        puVar48 = param_5;
        func_0x00010bf5f0a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        func_0x00010bf95540(*(undefined8 *)(param_5 + 0x1f0));
        func_0x00010be592c0(param_5);
        func_0x00010be42840();
        uVar42 = *(undefined8 *)(param_5 + 0x38);
        func_0x00010c23e660(uVar42);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        func_0x00010bf97e80(uVar42);
        puVar50 = PTR_PTR_1126c9460;
        func_0x00010c0f2620(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar51;
        func_0x00010c0720c0();
        if ((int)puVar6 == 0) {
          puVar6 = PTR_PTR_1126c9460;
          func_0x00010c0f25e0(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar49 = puVar51;
          func_0x00010c0720c0();
          _objc_release(puVar6);
          _objc_release(puVar50);
          if ((int)puVar49 != 0) goto LAB_1063a9d90;
        }
        else {
          _objc_release(puVar50);
LAB_1063a9d90:
          uVar57 = *(undefined8 *)(param_5 + 0x38);
          puVar50 = puVar4;
          func_0x00010bfce400(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23e640(uVar57);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar50);
          _objc_retain(puVar4);
          func_0x00010bf97e80(uVar57);
          uVar56 = *(undefined8 *)(param_5 + 0x38);
          puVar50 = puVar48;
          func_0x00010bfce400(puVar48);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar50;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c256ec0(uVar56);
          _objc_release(puVar6);
          _objc_release(puVar50);
          _objc_release(puVar4);
          _objc_release(uVar57);
        }
        _objc_release(puVar4);
        _objc_release(uVar42);
        _objc_release(puVar4);
        _objc_release(puVar48);
      }
      else if (puVar48 != (undefined *)0x0) {
        uVar42 = *(undefined8 *)(param_5 + 0xc0);
        func_0x00010bef53c0(*(undefined8 *)(param_5 + 0x38));
        func_0x00010c278220(uVar42);
      }
    }
    else {
      lVar53 = lVar52;
      func_0x00010c118b40(lVar52);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079440();
      _objc_release(lVar53);
      if (((int)puVar50 == 0) || (puVar48 == (undefined *)0x0)) {
        puVar48 = param_5 + 0x290;
        _objc_loadWeakRetained(puVar48);
        puVar50 = puVar48;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde1700(param_5);
        _objc_release(puVar50);
        _objc_release(puVar48);
        puVar48 = param_5;
        func_0x00010bef2820(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137fe0();
      }
      else {
        uVar42 = *(undefined8 *)(param_5 + 0x38);
        puVar48 = puVar4;
        func_0x00010bfce400(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c256ea0(uVar42);
      }
      _objc_release(puVar48);
    }
  }
  else {
    if (*(long *)(param_5 + 0x260) != 0) goto LAB_1063a9e88;
    puVar50 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar50);
    puVar50 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar49 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar50);
    puVar50 = puVar6;
    if (((ulong)puVar49 & 1) == 0) {
      puVar50 = (undefined *)0x0;
    }
    _objc_retain(puVar50);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010c08c740(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    puVar49 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar47 = puVar49;
    _objc_opt_isKindOfClass(puVar49,puVar6);
    puVar6 = puVar49;
    if (((ulong)puVar47 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar49);
    puVar49 = PTR_PTR_1126c9dc8;
    _objc_alloc(PTR_PTR_1126c9dc8);
    func_0x00010bf1f3c0(puVar6);
    _objc_release(puVar6);
    func_0x00010c029ac0(puVar49);
    _objc_release(puVar50);
    func_0x00010be2d680(param_5);
    puVar47 = *(undefined **)(param_5 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar47;
    func_0x00010bf1f480();
    puVar50 = PTR_PTR_1126ca2b0;
    if (((int)puVar6 == 0) || (puVar48 == (undefined *)0x0)) {
LAB_1063a99e0:
      _objc_release(puVar47);
    }
    else {
      lVar53 = lVar52;
      func_0x00010c118b40(lVar52);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c320();
      _objc_release(lVar53);
      _objc_release(puVar47);
      if ((int)puVar50 != 0) {
        uVar42 = *(undefined8 *)(param_5 + 0xc0);
        puVar47 = PTR_PTR_1126ca300;
        func_0x00010bf0d240(PTR_PTR_1126ca300);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e4e20(uVar42);
        goto LAB_1063a99e0;
      }
    }
    puVar48 = *(undefined **)(param_5 + 0x230);
    *(undefined8 *)(param_5 + 0x230) = 0;
LAB_1063a99f0:
    _objc_release(puVar48);
LAB_1063a99f8:
    _objc_release(puVar49);
  }
LAB_1063a9e88:
  func_0x00010be09be0(param_5);
  _objc_release(uStack_450);
  _objc_release(uStack_440);
  _objc_release(uStack_468);
  _objc_release(uVar55);
  _objc_release(puVar5);
  _objc_release(puVar54);
LAB_1063a9ecc:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(in_x4);
  _objc_release(lVar52);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar51);
  return;
}



/* Entry: 1063a85f8; end: 1063ab88b; -[SCAdViewingSession operaViewDidSendEvent:page:params:] */

void FUN_1063a85f8(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                  undefined8 param_6,undefined *param_7,long param_8,undefined *param_9)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined **ppuVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_190;
  undefined8 uStack_180;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar3 = param_5;
  func_0x00010bdd38c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_5;
  func_0x00010bdf6b80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar20 == (undefined *)0x0) {
    func_0x00010be09be0(param_5);
    goto LAB_1063a9ecc;
  }
  puVar27 = *(undefined **)(param_5 + 0x38);
  puVar20 = puVar4;
  func_0x00010be36bc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar5 = puVar27;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef53c0();
  puVar20 = param_5 + 0x290;
  _objc_loadWeakRetained();
  puVar22 = puVar20;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar22;
  func_0x00010c27dd80();
  _objc_release(puVar22);
  _objc_release(puVar20);
  puVar20 = puVar5;
  func_0x00010c08fa60();
  func_0x00010bef4240();
  if (puVar20 != (undefined *)0x0) {
    puVar22 = PTR_PTR_1126b2338;
    func_0x00010c29aaa0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0(param_7);
    _objc_release(puVar22);
  }
  puVar22 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar22);
  if ((int)puVar21 != 0) {
    func_0x00010c13a920(*(undefined8 *)(param_5 + 200));
  }
  puVar22 = param_5;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar22;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar21;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010bfce400(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar19;
  func_0x00010c0720c0();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar19);
  _objc_release(puVar21);
  _objc_release(puVar22);
  puVar22 = PTR_PTR_1126c9a10;
  func_0x00010c063ee0(PTR_PTR_1126c9a10);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar22);
  puVar22 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar22);
  if (((((uint)puVar19 | (uint)puVar21) & 1) != 0) && (((ulong)puVar9 & 1) == 0)) {
    puVar22 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60(puVar22);
    _objc_release(puVar21);
    _objc_release(puVar22);
    uVar28 = *(undefined8 *)(param_5 + 0x38);
    puVar22 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c284f00(uVar28);
    _objc_release(puVar22);
    uVar28 = *(undefined8 *)(param_5 + 0x38);
    puVar22 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_5;
    func_0x00010bf5f0a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = puVar21;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c251940(uVar28);
    _objc_release(puVar19);
    _objc_release(puVar21);
    _objc_release(puVar22);
    uVar10 = *(ulong *)(param_5 + 0x160);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar22;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c075a20();
    _objc_release(puVar21);
    _objc_release(puVar22);
    _objc_release(uVar10);
    if ((uVar11 & 1) == 0) {
      uVar28 = *(undefined8 *)(param_5 + 0x160);
      func_0x00010c269d40(uVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187840();
      _objc_release(uVar28);
    }
    puVar22 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar22);
  }
  puVar22 = param_7;
  FUN_106441940(param_7,param_8);
  if ((int)puVar22 != 0) {
    uVar12 = *(undefined8 *)(param_5 + 0x160);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar4;
    func_0x00010bfce400(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar22;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar28 = uVar12;
    func_0x00010c075a20();
    if ((int)uVar28 != 0) {
      uVar10 = *(ulong *)(param_5 + 0x160);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf5f8e0();
      _objc_release(uVar10);
      _objc_release(puVar21);
      _objc_release(puVar22);
      _objc_release(uVar12);
      if ((uVar11 & 1) != 0) goto LAB_1063a90c0;
      uVar28 = *(undefined8 *)(param_5 + 0x160);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar4;
      func_0x00010bfce400(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar22;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar28;
      func_0x00010c067260();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar21);
      _objc_release(puVar22);
      _objc_release(uVar28);
      puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar30 = *(undefined8 *)(param_5 + 0xd0);
      uVar28 = *(undefined8 *)(param_5 + 0x150);
      func_0x00010c269d40(uVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001084c0d90(uVar30,uVar28);
      func_0x00010c0df780(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = PTR_PTR_1126b92c8;
      func_0x00010c125020(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar22);
      _objc_release(puVar21);
      _objc_release(ppuVar13);
      _objc_release(uVar28);
      puVar19 = param_5 + 0x278;
      _objc_loadWeakRetained();
      puVar7 = puVar4;
      func_0x00010bfce400(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar19;
      func_0x00010bf63e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar19);
      puVar19 = PTR_PTR_1126bdd30;
      _objc_retain(puVar21);
      _objc_opt_class(puVar19);
      puVar7 = puVar21;
      _objc_opt_isKindOfClass(puVar21,puVar19);
      puVar19 = puVar21;
      if (((ulong)puVar7 & 1) == 0) {
        puVar19 = (undefined *)0x0;
      }
      _objc_retain(puVar19);
      _objc_release(puVar21);
      puVar7 = PTR_PTR_1126bdd28;
      _objc_retain(puVar21);
      _objc_opt_class(puVar7);
      puVar8 = puVar21;
      _objc_opt_isKindOfClass(puVar21,puVar7);
      puVar7 = puVar21;
      if (((ulong)puVar8 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar21);
      puVar8 = puVar19;
      func_0x00010c11b1e0();
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      bVar1 = puVar8 == (undefined *)0x0;
      if (puVar8 == (undefined *)0x0) {
        puVar9 = puVar7;
        func_0x00010c11b1e0();
        ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (puVar9 == (undefined *)0x0) {
          bVar1 = false;
          ppuVar31 = &PTR____CFConstantStringClassReference_110daafd8;
        }
        else {
          func_0x00010c11b1e0(puVar7);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar31 = ppuVar14;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_1b0 = ppuVar14;
        }
      }
      else {
        func_0x00010c11b1e0(puVar19);
        func_0x00010c0df7c0(ppuVar14);
        _objc_retainAutoreleasedReturnValue();
        ppuVar31 = ppuVar14;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar14;
      }
      puVar9 = PTR_PTR_1126b92c8;
      func_0x00010c11b1e0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar22);
      _objc_release(puVar9);
      if (bVar1) {
        _objc_release(ppuVar31);
        _objc_release(ppuStack_1b0);
      }
      if (puVar8 != (undefined *)0x0) {
        _objc_release(ppuVar31);
        _objc_release(ppuVar13);
      }
      puVar9 = puVar19;
      func_0x00010c11b3a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x00010c11b3a0();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar15 = PTR_PTR_1126b92c8;
      func_0x00010c11b3a0(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar22);
      _objc_release(puVar15);
      if (puVar9 == (undefined *)0x0) {
        _objc_release(puVar8);
      }
      _objc_release(puVar9);
      uVar28 = uVar12;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar30 = uVar28;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar29 = uVar30;
      func_0x00010c117ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = uVar29;
      func_0x00010c259cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b92c8;
      func_0x00010bf8c980(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar22);
      _objc_release(puVar8);
      _objc_release(uVar16);
      _objc_release(uVar29);
      _objc_release(uVar30);
      _objc_release(uVar28);
      puVar8 = puVar7;
      func_0x00010bf8c980();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      if (puVar9 != (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x00010bf8c980(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b92c8;
        func_0x00010c0ecf40(PTR_PTR_1126b92c8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar22);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      puVar8 = puVar7;
      func_0x00010bfe4640();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c08fa60();
      _objc_release(puVar8);
      if (puVar9 != (undefined *)0x0) {
        puVar8 = puVar7;
        func_0x00010bfe4640(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR_PTR_1126b92c8;
        func_0x00010c0ecfc0(PTR_PTR_1126b92c8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar22);
        _objc_release(puVar9);
        _objc_release(puVar8);
      }
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c077680(puVar7);
      func_0x00010c0df6e0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b92c8;
      func_0x00010c260660(PTR_PTR_1126b92c8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar22);
      _objc_release(puVar9);
      _objc_release(puVar8);
      uVar28 = *(undefined8 *)(param_5 + 0xc0);
      puVar8 = puVar22;
      func_0x00010bf51e00(puVar22);
      func_0x00010c278440(uVar28);
      _objc_release(puVar8);
      uVar28 = *(undefined8 *)(param_5 + 0x160);
      func_0x00010c269d40(uVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c187840();
      _objc_release(uVar28);
      _objc_release(puVar7);
      _objc_release(puVar19);
    }
    _objc_release(puVar21);
    _objc_release(puVar22);
    _objc_release(uVar12);
  }
LAB_1063a90c0:
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar22 = PTR_PTR_1126b2340;
  lVar18 = param_8;
  func_0x00010c118b40(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0771a0();
  _objc_release(lVar18);
  if ((int)puVar22 == 0) {
    puVar22 = PTR_PTR_1126b2330;
    func_0x00010c0e9c40(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_7;
    func_0x00010c0720c0();
    _objc_release(puVar22);
    puVar22 = PTR_PTR_1126b2340;
    if ((int)puVar21 == 0) {
      puVar22 = PTR_PTR_1126b2330;
      func_0x00010c0e9c60(PTR_PTR_1126b2330);
      _objc_retainAutoreleasedReturnValue();
      puVar19 = param_7;
      func_0x00010c0720c0();
      _objc_release(puVar22);
      puVar21 = PTR_PTR_1126b2340;
      if ((int)puVar19 == 0) {
        puVar21 = PTR_PTR_1126b2338;
        func_0x00010c0c6900(PTR_PTR_1126b2338);
        _objc_retainAutoreleasedReturnValue();
        puVar22 = param_7;
        func_0x00010c0720c0();
        _objc_release(puVar21);
      }
      else {
        lVar18 = param_8;
        func_0x00010c118b40(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c075040();
        puVar22 = PTR_PTR_1126ca2b0;
        if ((int)puVar21 != 0) {
          _objc_release(lVar18);
          goto LAB_1063a92f0;
        }
        lVar17 = param_8;
        func_0x00010c118b40(param_8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c06eec0();
        _objc_release(lVar17);
        _objc_release(lVar18);
      }
joined_r0x0001063a9298:
      if (((ulong)puVar22 & 1) == 0) goto LAB_1063a929c;
    }
    else {
      lVar18 = param_8;
      func_0x00010c118b40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079440();
      _objc_release(lVar18);
      puVar21 = PTR_PTR_1126b2340;
      lVar18 = param_8;
      func_0x00010c118b40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c076c60();
      _objc_release(lVar18);
      if (((ulong)puVar21 & 1) == 0) goto joined_r0x0001063a9298;
    }
LAB_1063a92f0:
    _objc_release(param_8);
    _objc_release(param_7);
LAB_1063a9300:
    func_0x00010c251920(*(undefined8 *)(param_5 + 0x38));
    if (puVar27 != (undefined *)0x0) {
      puVar22 = *(undefined **)(param_5 + 0x180);
      func_0x00010c269d40(puVar22);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf7bd60();
LAB_1063a9334:
      _objc_release(puVar22);
    }
  }
  else {
    puVar22 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_7;
    func_0x00010c0720c0();
    _objc_release(puVar22);
    if (((ulong)puVar21 & 1) == 0) {
LAB_1063a929c:
      _objc_release(param_8);
      puVar22 = param_7;
      goto LAB_1063a9334;
    }
    _objc_release(param_8);
    _objc_release(param_7);
    if (puVar6 == (undefined *)0x2) goto LAB_1063a9300;
  }
  puVar22 = param_7;
  FUN_1063a2154();
  if ((int)puVar22 != 0) {
    func_0x00010c1874e0(param_5);
    *(undefined8 *)(param_5 + 0x10) = 0;
  }
  puVar22 = param_9;
  func_0x00010bf51e00(param_9);
  func_0x00010c187740(param_5);
  _objc_release(puVar22);
  func_0x00010bee2d80(param_5);
  lVar18 = *(long *)(param_5 + 0x230);
  func_0x00010c08fa60();
  if (((lVar18 == 0) || (puVar22 = puVar5, func_0x00010c0720c0(), (int)puVar22 == 0)) ||
     (puVar22 = puVar27, func_0x00010bef60a0(), puVar22 != (undefined *)0x5)) {
    iVar2 = 0;
  }
  else {
    puVar22 = PTR_PTR_1126b2330;
    func_0x00010c0e9c60(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_7;
    func_0x00010c0720c0();
    iVar2 = (int)puVar21;
    _objc_release(puVar22);
  }
  puVar22 = param_7;
  func_0x000106441ad0(param_7,param_8,puVar6 == (undefined *)0x2,puVar20 != (undefined *)0x0);
  if ((((ulong)puVar22 & 1) != 0) || (iVar2 != 0)) {
    func_0x00010becdca0(param_5);
    param_5[0xe2] = 0;
    uVar28 = *(undefined8 *)(param_5 + 0x230);
    *(undefined8 *)(param_5 + 0x230) = 0;
    _objc_release(uVar28);
  }
  _objc_retain(param_7);
  puVar22 = PTR_PTR_1126c9460;
  func_0x00010c0f25a0(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_7;
  func_0x00010c0720c0();
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = PTR_PTR_1126c9460;
    func_0x00010c0f2600(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_7;
    func_0x00010c0720c0();
    if (((ulong)puVar21 & 1) != 0) {
LAB_1063a9534:
      _objc_release(puVar6);
      goto LAB_1063a9540;
    }
    puVar21 = PTR_PTR_1126c9460;
    func_0x00010c0f25e0(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar19 = param_7;
    func_0x00010c0720c0();
    if (((ulong)puVar19 & 1) != 0) {
LAB_1063a9528:
      _objc_release(puVar21);
      goto LAB_1063a9534;
    }
    puVar19 = PTR_PTR_1126c9460;
    func_0x00010c0f2620(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_7;
    func_0x00010c0720c0();
    if (((ulong)puVar7 & 1) != 0) {
LAB_1063a951c:
      _objc_release(puVar19);
      goto LAB_1063a9528;
    }
    puVar7 = PTR_PTR_1126c9460;
    func_0x00010c0f2560(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_7;
    func_0x00010c0720c0();
    if (((ulong)puVar8 & 1) != 0) {
      _objc_release(puVar7);
      goto LAB_1063a951c;
    }
    puVar8 = PTR_PTR_1126c9460;
    func_0x00010c0f2580(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = param_7;
    func_0x00010c0720c0();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar19);
    _objc_release(puVar21);
    _objc_release(puVar6);
    _objc_release(puVar22);
    _objc_release(param_7);
    if (((ulong)puVar9 & 1) != 0) goto LAB_1063a9550;
  }
  else {
LAB_1063a9540:
    _objc_release(puVar22);
    _objc_release(param_7);
LAB_1063a9550:
    _objc_retain(param_7);
    uVar28 = *(undefined8 *)(param_5 + 0xd8);
    *(undefined **)(param_5 + 0xd8) = param_7;
    _objc_release(uVar28);
  }
  uVar28 = *(undefined8 *)(param_5 + 0x38);
  puVar22 = puVar4;
  func_0x00010be36bc0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  if (puVar5 == (undefined *)0x0) {
    uStack_190 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
  }
  else {
    uStack_1a8 = uVar28;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    uStack_180 = uVar28;
    func_0x00010bef4d80();
    _objc_retainAutoreleasedReturnValue();
    uStack_190 = uVar28;
    func_0x00010c15ed20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef4240(uVar28);
  }
  puVar22 = PTR_PTR_1126b2330;
  func_0x00010c0e9c40(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar22);
  if ((int)puVar6 != 0) {
    if (*(long *)(param_5 + 0x260) == 0) {
      puVar20 = PTR_PTR_1126b2348;
      func_0x00010c0c5ec0(PTR_PTR_1126b2348);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar6 = puVar22;
      _objc_opt_isKindOfClass(puVar22,puVar20);
      puVar20 = puVar22;
      if (((ulong)puVar6 & 1) == 0) {
        puVar20 = (undefined *)0x0;
      }
      _objc_retain(puVar20);
      _objc_release(puVar22);
      puVar22 = PTR_PTR_1126c9a20;
      func_0x00010c06c7e0(PTR_PTR_1126c9a20);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar21 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar22);
      puVar22 = puVar6;
      if (((ulong)puVar21 & 1) == 0) {
        puVar22 = (undefined *)0x0;
      }
      _objc_retain(puVar22);
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126c9a20;
      func_0x00010c0725c0(PTR_PTR_1126c9a20);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = param_9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar19 = puVar21;
      _objc_opt_isKindOfClass(puVar21,puVar6);
      puVar6 = puVar21;
      if (((ulong)puVar19 & 1) == 0) {
        puVar6 = (undefined *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar21);
      puVar21 = PTR_PTR_1126c9db8;
      _objc_alloc(PTR_PTR_1126c9db8);
      func_0x00010bf1f3c0(puVar22);
      _objc_release(puVar22);
      func_0x00010bf1f3c0(puVar6);
      _objc_release(puVar6);
      func_0x00010c029aa0(puVar21);
      _objc_release(puVar20);
      func_0x00010be2d6a0(param_5);
      goto LAB_1063a99f8;
    }
    goto LAB_1063a9e88;
  }
  puVar22 = PTR_PTR_1126b2330;
  func_0x00010c0e9c60(PTR_PTR_1126b2330);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_7;
  func_0x00010c0720c0();
  _objc_release(puVar22);
  if ((int)puVar6 == 0) {
    puVar22 = PTR_PTR_1126b2330;
    func_0x00010bf3df00(PTR_PTR_1126b2330);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_7;
    func_0x00010c0720c0();
    _objc_release(puVar22);
    puVar22 = PTR_PTR_1126b2340;
    if ((int)puVar6 == 0) {
      puVar22 = PTR_PTR_1126b2ea8;
      func_0x00010c0b4cc0(PTR_PTR_1126b2ea8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_7;
      func_0x00010c0720c0();
      _objc_release(puVar22);
      if ((int)puVar6 == 0) {
        puVar22 = PTR_PTR_1126c9460;
        func_0x00010c0f2620(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_7;
        func_0x00010c0720c0();
        if (((ulong)puVar6 & 1) == 0) {
          puVar6 = PTR_PTR_1126c9460;
          func_0x00010c0f2580(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = param_7;
          func_0x00010c0720c0();
          if (((ulong)puVar21 & 1) != 0) {
LAB_1063a9be8:
            _objc_release(puVar6);
            goto LAB_1063a9bf0;
          }
          puVar21 = PTR_PTR_1126c9460;
          func_0x00010c0f25e0(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar19 = param_7;
          func_0x00010c0720c0();
          if ((int)puVar19 != 0) {
            _objc_release(puVar21);
            goto LAB_1063a9be8;
          }
          puVar19 = PTR_PTR_1126c9460;
          func_0x00010c0f2560(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = param_7;
          func_0x00010c0720c0();
          _objc_release(puVar19);
          _objc_release(puVar21);
          _objc_release(puVar6);
          _objc_release(puVar22);
          if (((ulong)puVar7 & 1) != 0) goto LAB_1063a9bf8;
          puVar22 = PTR_PTR_1126b2338;
          func_0x00010c29b4c0(PTR_PTR_1126b2338);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_7;
          func_0x00010c0720c0();
          if (((int)puVar6 == 0) || (puVar20 == (undefined *)0x0)) {
            _objc_release(puVar22);
          }
          else {
            lVar18 = param_8;
            FUN_106449b58();
            _objc_release(puVar22);
            if ((int)lVar18 != 0) {
              FUN_10644a2b8(param_8);
              uVar12 = *(undefined8 *)(param_5 + 0x100);
              puVar22 = puVar4;
              func_0x00010be36bc0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar20 = param_5 + 0x278;
              _objc_loadWeakRetained(puVar20);
              func_0x00010bef4240(puVar27);
              func_0x00010bf77120(param_1,uVar12);
              _objc_release(puVar20);
              _objc_release(puVar22);
              goto LAB_1063a9e88;
            }
          }
          puVar22 = PTR_PTR_1126b2330;
          func_0x00010bf17f80(PTR_PTR_1126b2330);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = param_7;
          func_0x00010c0720c0();
          _objc_release(puVar22);
          puVar21 = param_5;
          if ((int)puVar6 == 0) {
            puVar22 = PTR_PTR_1126b2330;
            func_0x00010bf2e260(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              if (puVar20 != (undefined *)0x0) {
                func_0x00010bef2820(param_5);
                _objc_retainAutoreleasedReturnValue();
                _CACurrentMediaTime();
                func_0x00010c0842a0(puVar21);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126b2338;
            func_0x00010c29aaa0(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              if (*(long *)(param_5 + 0x260) == 0) {
                puVar20 = PTR_PTR_1126b2348;
                func_0x00010bf8b340(PTR_PTR_1126b2348);
                fVar32 = SUB84(param_1,0);
                _objc_retainAutoreleasedReturnValue();
                puVar22 = param_9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar20);
                puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                puVar6 = puVar22;
                _objc_opt_isKindOfClass(puVar22,puVar20);
                puVar20 = puVar22;
                if (((ulong)puVar6 & 1) == 0) {
                  puVar20 = (undefined *)0x0;
                }
                _objc_retain(puVar20);
                _objc_release(puVar22);
                puVar22 = PTR_PTR_1126b2348;
                func_0x00010bf5fb40(PTR_PTR_1126b2348);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = param_9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar22);
                puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                puVar21 = puVar6;
                _objc_opt_isKindOfClass(puVar6,puVar22);
                puVar22 = puVar6;
                if (((ulong)puVar21 & 1) == 0) {
                  puVar22 = (undefined *)0x0;
                }
                _objc_retain(puVar22);
                _objc_release(puVar6);
                puVar21 = PTR_PTR_1126ca3d0;
                _objc_alloc(PTR_PTR_1126ca3d0);
                func_0x00010bfb2c80(puVar20);
                fVar33 = fVar32;
                _objc_release(puVar20);
                func_0x00010bfb2c80(puVar22);
                _objc_release(puVar22);
                func_0x00010c00eb40((double)fVar32,(double)fVar33,puVar21);
                func_0x00010be330e0(param_5);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126ca1e0;
            func_0x00010bf76600(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            if ((int)puVar6 != 0) {
              _objc_release(puVar22);
LAB_1063aa2d0:
              func_0x00010bef53c0();
              func_0x00010c278b20(*(undefined8 *)(param_5 + 0xc0));
              goto LAB_1063a9e88;
            }
            puVar6 = PTR_PTR_1126ca1e0;
            func_0x00010c069100(PTR_PTR_1126ca1e0);
            _objc_retainAutoreleasedReturnValue();
            puVar19 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar22);
            if ((int)puVar19 != 0) goto LAB_1063aa2d0;
            puVar22 = PTR_PTR_1126ca2c0;
            func_0x00010c0ebf60(PTR_PTR_1126ca2c0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            puVar22 = PTR_PTR_1126b2340;
            if ((int)puVar6 != 0) {
              lVar18 = param_8;
              func_0x00010c118b40(param_8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c079440();
              _objc_release(lVar18);
              if (((int)puVar22 != 0) && (puVar20 != (undefined *)0x0)) {
                uVar12 = *(undefined8 *)(param_5 + 0x110);
                puVar20 = puVar4;
                func_0x00010bfce400(puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar22 = puVar20;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befa120(uVar12);
                _objc_release(puVar22);
                _objc_release(puVar20);
                uVar12 = *(undefined8 *)(param_5 + 0x38);
                puVar20 = puVar4;
                func_0x00010bfce400(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c256ea0(uVar12);
                _objc_release(puVar20);
                puVar21 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar21);
                puVar20 = puVar4;
                func_0x00010be36bc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c101400(puVar21);
                _objc_release(puVar20);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126c9cf0;
            func_0x00010c0ff280(PTR_PTR_1126c9cf0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              puVar20 = PTR_PTR_1126c9cf8;
              func_0x00010c27c520(PTR_PTR_1126c9cf8);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = param_9;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar20);
              if (puVar22 != (undefined *)0x0) {
                puVar20 = PTR_PTR_1126c9cf8;
                func_0x00010c27c520(PTR_PTR_1126c9cf8);
                _objc_retainAutoreleasedReturnValue();
                puVar22 = param_9;
                func_0x00010c0e00e0(param_9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067fc0();
                _objc_release(puVar22);
                _objc_release(puVar20);
                func_0x00010c285980(*(undefined8 *)(param_5 + 0x38));
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126b2330;
            func_0x00010bfaf7a0(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              uVar12 = *(undefined8 *)(param_5 + 0x1f0);
              puVar20 = puVar27;
              func_0x00010bef52e0(puVar27);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf95520(uVar12);
              _objc_release(puVar20);
              func_0x00010be592c0(param_5);
              goto LAB_1063a9e88;
            }
            puVar22 = param_7;
            func_0x000107ae801c(param_7,param_8,param_9);
            if ((int)puVar22 != 0) {
              uVar30 = *(undefined8 *)(param_5 + 0x38);
              puVar22 = puVar4;
              func_0x00010be36bc0(puVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef4b20();
              _objc_retainAutoreleasedReturnValue();
              uVar29 = *(undefined8 *)(param_5 + 0x38);
              func_0x00010bef53c0(uVar29);
              uVar12 = uVar30;
              FUN_1063aba6c(uVar30,uVar29);
              _objc_release(uVar30);
              _objc_release(puVar22);
              if ((int)uVar12 != 0) {
                param_5[0xe1] = 1;
                puVar22 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar22);
                puVar6 = puVar4;
                func_0x00010be36bc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c101400(puVar22);
                _objc_release(puVar6);
                _objc_release(puVar22);
              }
              if (puVar20 != (undefined *)0x0) {
                uVar12 = *(undefined8 *)(param_5 + 0xc0);
                puVar20 = PTR_PTR_1126ca300;
                func_0x00010bf3ca20(PTR_PTR_1126ca300);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0e4e20(uVar12);
                _objc_release(puVar20);
              }
              if (param_8 == 0) {
                puVar21 = *(undefined **)(param_5 + 0x1c0);
                func_0x00010c269d40(puVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c0a0640();
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126c95c8;
            func_0x00010c09d2c0(PTR_PTR_1126c95c8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              if (puVar20 != (undefined *)0x0) {
                uVar12 = *(undefined8 *)(param_5 + 0x38);
                func_0x00010bf5f0a0(param_5);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf7cc80(uVar12);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar22 = param_7;
            func_0x00010c0720c0();
            if ((int)puVar22 != 0) {
              puVar20 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (puVar20 != (undefined *)0x0) {
                puVar21 = param_9;
                func_0x00010c0e00e0(param_9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c067ec0();
                func_0x00010c28bee0(param_5);
                goto LAB_1063a99f8;
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126b2338;
            func_0x00010c299d40(PTR_PTR_1126b2338);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              func_0x00010be6c560(param_5);
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126c7d70;
            func_0x00010bf3c700(PTR_PTR_1126c7d70);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              puVar22 = *(undefined **)(param_5 + 0x140);
              func_0x00010c269d40(puVar22);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = PTR_PTR_1126c7d78;
              func_0x00010c13ca20();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf1f3c0();
              puVar19 = PTR_PTR_1126c7d78;
              func_0x00010bf987e0(PTR_PTR_1126c7d78);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = param_9;
              func_0x00010c0e00e0(param_9);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = PTR_PTR_1126c7d78;
              func_0x00010c08ad40(PTR_PTR_1126c7d78);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = param_9;
              func_0x00010c0e00e0(param_9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf885a0();
              puVar20 = PTR_PTR_1126c7d78;
              func_0x00010c1082c0(PTR_PTR_1126c7d78);
              _objc_retainAutoreleasedReturnValue();
              puVar15 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar23 = puVar15;
              _objc_opt_isKindOfClass(puVar15,puVar20);
              puVar20 = puVar15;
              if (((ulong)puVar23 & 1) == 0) {
                puVar20 = (undefined *)0x0;
              }
              _objc_retain(puVar20);
              _objc_release(puVar15);
              func_0x00010c0aea60(param_1,puVar22);
              _objc_release(puVar20);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar19);
              _objc_release(puVar21);
              _objc_release(puVar6);
              goto LAB_1063aa990;
            }
            puVar22 = PTR_PTR_1126b2638;
            func_0x00010bf112e0(PTR_PTR_1126b2638);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              if ((puVar20 != (undefined *)0x0) &&
                 (lVar18 = param_8, FUN_106449b58(), (int)lVar18 != 0)) {
                FUN_10644a2b8(param_8);
                uVar12 = *(undefined8 *)(param_5 + 0x100);
                puVar22 = puVar4;
                func_0x00010be36bc0(puVar4);
                _objc_retainAutoreleasedReturnValue();
                puVar20 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar20);
                func_0x00010bef4240(puVar27);
                func_0x00010bf77120(param_1,uVar12);
                _objc_release(puVar20);
                _objc_release(puVar22);
              }
              func_0x00010be5b000(param_5);
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126c9a00;
            func_0x00010c2a4300(PTR_PTR_1126c9a00);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if (((int)puVar6 != 0) && (puVar20 != (undefined *)0x0)) {
              uVar12 = *(undefined8 *)(param_5 + 0xc0);
              puVar20 = PTR_PTR_1126ca300;
              func_0x00010c0f1780(PTR_PTR_1126ca300);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c0e4e20(uVar12);
LAB_1063aaad0:
              _objc_release(puVar20);
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126c9a08;
            func_0x00010c0fc7e0(PTR_PTR_1126c9a08);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if (((int)puVar6 != 0) && (puVar20 != (undefined *)0x0)) {
              puVar20 = PTR_PTR_1126c9a68;
              func_0x00010c06b400(PTR_PTR_1126c9a68);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar22;
              func_0x00010bf1f3c0();
              _objc_release(puVar22);
              _objc_release(puVar20);
              if (((ulong)puVar6 & 1) == 0) {
                func_0x00010c0e72a0(*(undefined8 *)(param_5 + 0xc0));
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126c9400;
            func_0x00010c157400(PTR_PTR_1126c9400);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if (((int)puVar6 != 0) && (puVar20 == (undefined *)0x0)) {
              puVar20 = PTR_PTR_1126c9408;
              func_0x00010c157060(PTR_PTR_1126c9408);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar6 = puVar22;
              _objc_opt_isKindOfClass(puVar22,puVar20);
              puVar20 = puVar22;
              if (((ulong)puVar6 & 1) == 0) {
                puVar20 = (undefined *)0x0;
              }
              _objc_retain(puVar20);
              _objc_release(puVar22);
              puVar22 = puVar20;
              func_0x00010c067ec0();
              _objc_release(puVar20);
              if ((int)puVar22 == 1) {
                puVar20 = PTR_PTR_1126c9408;
                func_0x00010c157360(PTR_PTR_1126c9408);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = param_9;
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar20);
                puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
                _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
                puVar21 = puVar6;
                _objc_opt_isKindOfClass(puVar6,puVar20);
                puVar22 = puVar6;
                if (((ulong)puVar21 & 1) == 0) {
                  puVar22 = (undefined *)0x0;
                }
                _objc_retain(puVar22);
                _objc_release(puVar6);
                puVar20 = puVar22;
                func_0x00010c25d700();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar22);
                if (puVar20 != (undefined *)0x0) {
                  puVar6 = puVar4;
                  func_0x00010be36bc0(puVar4);
                  _objc_retainAutoreleasedReturnValue();
                  puVar22 = puVar6;
                  func_0x00010c25ce40();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar6);
                  func_0x00010c2518e0(*(undefined8 *)(param_5 + 0x38));
LAB_1063aad20:
                  _objc_release(puVar22);
                }
                goto LAB_1063aaad0;
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126ca3c8;
            func_0x00010c254420(PTR_PTR_1126ca3c8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if (((int)puVar6 != 0) && (puVar20 != (undefined *)0x0)) {
              uVar12 = *(undefined8 *)(param_5 + 0xc0);
              puVar20 = PTR_PTR_1126ca3d8;
              func_0x00010c254400(PTR_PTR_1126ca3d8);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
              _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
              puVar21 = puVar6;
              _objc_opt_isKindOfClass(puVar6,puVar20);
              puVar22 = puVar6;
              if (((ulong)puVar21 & 1) == 0) {
                puVar22 = (undefined *)0x0;
              }
              _objc_retain(puVar22);
              _objc_release(puVar6);
              func_0x00010c0e6a60(uVar12);
LAB_1063aa990:
              _objc_release(puVar22);
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126ca1e8;
            func_0x00010bf7dba0(PTR_PTR_1126ca1e8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              puVar20 = puVar27;
              func_0x00010bef52c0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar20;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar6;
              func_0x00010bf20500();
              _objc_retainAutoreleasedReturnValue();
              puVar19 = puVar21;
              func_0x00010bf3fc80();
              _objc_retainAutoreleasedReturnValue();
              puVar22 = puVar19;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
              _objc_release(puVar21);
              _objc_release(puVar6);
              _objc_release(puVar20);
              puVar20 = puVar27;
              func_0x00010bef52c0();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar20;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              puVar21 = puVar6;
              func_0x00010bf3fd80();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar6);
              _objc_release(puVar20);
              puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              func_0x00010beec800(*(undefined8 *)(param_5 + 0x200));
              func_0x00010c0df720(param_1 * 1000.0);
              _objc_retainAutoreleasedReturnValue();
              puVar20 = PTR_PTR_1126ca228;
              func_0x00010c274bc0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar19 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar7 = puVar19;
              _objc_opt_isKindOfClass(puVar19,puVar20);
              puVar20 = puVar19;
              if (((ulong)puVar7 & 1) == 0) {
                puVar20 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126ca228;
              func_0x00010c274ae0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
              puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar8 = puVar7;
              _objc_opt_isKindOfClass(puVar7,puVar19);
              puVar19 = puVar7;
              if (((ulong)puVar8 & 1) == 0) {
                puVar19 = (undefined *)0x0;
              }
              _objc_retain(puVar19);
              _objc_release(puVar7);
              func_0x00010bf1f3c0();
              _objc_release(puVar19);
              puVar19 = PTR_PTR_1126ca228;
              func_0x00010c274c00(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar19);
              puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar8 = puVar7;
              _objc_opt_isKindOfClass(puVar7,puVar19);
              puVar19 = puVar7;
              if (((ulong)puVar8 & 1) == 0) {
                puVar19 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar7);
              puVar7 = PTR_PTR_1126ca228;
              func_0x00010c274b00(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar8 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar7);
              puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar9 = puVar8;
              _objc_opt_isKindOfClass(puVar8,puVar7);
              puVar7 = puVar8;
              if (((ulong)puVar9 & 1) == 0) {
                puVar7 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar8);
              puVar8 = PTR_PTR_1126ca228;
              func_0x00010c274be0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar9 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar8);
              puVar8 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar15 = puVar9;
              _objc_opt_isKindOfClass(puVar9,puVar8);
              puVar8 = puVar9;
              if (((ulong)puVar15 & 1) == 0) {
                puVar8 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar9);
              puVar9 = PTR_PTR_1126ca228;
              func_0x00010c274b60(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar15 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              puVar9 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar23 = puVar15;
              _objc_opt_isKindOfClass(puVar15,puVar9);
              puVar9 = puVar15;
              if (((ulong)puVar23 & 1) == 0) {
                puVar9 = (undefined *)0x0;
              }
              _objc_retain(puVar9);
              _objc_release(puVar15);
              puVar15 = PTR_PTR_1126ca228;
              func_0x00010c274b40(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar23 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar15);
              puVar15 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar24 = puVar23;
              _objc_opt_isKindOfClass(puVar23,puVar15);
              puVar15 = puVar23;
              if (((ulong)puVar24 & 1) == 0) {
                puVar15 = (undefined *)0x0;
              }
              _objc_retain();
              _objc_release(puVar23);
              puVar23 = PTR_PTR_1126ca228;
              func_0x00010c274b80(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar24 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar23);
              puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar25 = puVar24;
              _objc_opt_isKindOfClass(puVar24,puVar23);
              puVar23 = puVar24;
              if (((ulong)puVar25 & 1) == 0) {
                puVar23 = (undefined *)0x0;
              }
              _objc_retain(puVar23);
              _objc_release(puVar24);
              puVar24 = PTR_PTR_1126ca228;
              func_0x00010c274ba0(PTR_PTR_1126ca228);
              _objc_retainAutoreleasedReturnValue();
              puVar25 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar24);
              puVar24 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar26 = puVar25;
              _objc_opt_isKindOfClass(puVar25,puVar24);
              puVar24 = puVar25;
              if (((ulong)puVar26 & 1) == 0) {
                puVar24 = (undefined *)0x0;
              }
              _objc_retain(puVar24);
              _objc_release(puVar25);
              func_0x00010c0a5400(*(undefined8 *)(param_5 + 0xc0));
              _objc_release(puVar24);
              _objc_release(puVar23);
              _objc_release(puVar15);
              _objc_release(puVar9);
              _objc_release(puVar8);
              _objc_release(puVar7);
              _objc_release(puVar19);
              _objc_release(puVar20);
              _objc_release(puVar6);
              _objc_release(puVar21);
              goto LAB_1063aa990;
            }
            puVar22 = PTR_PTR_1126b2ce8;
            func_0x00010beeeae0(PTR_PTR_1126b2ce8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              if (puVar20 != (undefined *)0x0) {
                func_0x00010be68700(param_5);
              }
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126ca1c8;
            func_0x00010bf7c980(PTR_PTR_1126ca1c8);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              puVar20 = PTR_PTR_1126ca1a0;
              func_0x00010c269160(PTR_PTR_1126ca1a0);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSValue_1126afdf8;
              _objc_opt_class(PTR__OBJC_CLASS___NSValue_1126afdf8);
              puVar6 = puVar22;
              _objc_opt_isKindOfClass(puVar22,puVar20);
              puVar20 = puVar22;
              if (((ulong)puVar6 & 1) == 0) {
                puVar20 = (undefined *)0x0;
              }
              _objc_retain(puVar20);
              _objc_release(puVar22);
              func_0x00010bdc1060(puVar20);
              _objc_release(puVar20);
              puVar20 = PTR_PTR_1126ca1a0;
              func_0x00010c084640(PTR_PTR_1126ca1a0);
              _objc_retainAutoreleasedReturnValue();
              puVar22 = param_9;
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar20);
              puVar20 = PTR__OBJC_CLASS___NSNumber_1126ae570;
              _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
              puVar6 = puVar22;
              _objc_opt_isKindOfClass(puVar22,puVar20);
              puVar20 = puVar22;
              if (((ulong)puVar6 & 1) == 0) {
                puVar20 = (undefined *)0x0;
              }
              _objc_retain(puVar20);
              _objc_release(puVar22);
              puVar22 = PTR__OBJC_CLASS___UIScreen_1126aea10;
              func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c14c760();
              _objc_release(puVar22);
              dVar34 = 0.0;
              if (param_3 != 0.0) {
                dVar34 = param_1 / param_3;
              }
              dVar35 = 0.0;
              if (param_4 != 0.0) {
                dVar35 = param_2 / param_4;
              }
              uVar12 = *(undefined8 *)(param_5 + 0x58);
              func_0x00010c067fc0(puVar20);
              _objc_release(puVar20);
              func_0x00010c0a51e0(param_1,param_2,dVar34,dVar35,uVar12);
              goto LAB_1063a9e88;
            }
            puVar22 = PTR_PTR_1126b5b08;
            func_0x00010c269720(PTR_PTR_1126b5b08);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((int)puVar6 != 0) {
              puVar22 = param_5;
              func_0x00010bf5f0a0();
              _objc_retainAutoreleasedReturnValue();
              puVar20 = puVar22;
              func_0x00010bfce400();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar22);
              puVar22 = puVar20;
              func_0x00010c27dd80();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar22;
              func_0x00010c0720c0();
              _objc_release(puVar22);
              puVar22 = puVar20;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              if ((int)puVar6 == 0) {
                func_0x00010bfece40();
                _objc_release(puVar22);
                puVar22 = puVar20;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar22;
                func_0x00010bfece40();
                _objc_release(puVar22);
                puVar22 = puVar20;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                puVar21 = puVar22;
                func_0x00010bf529e0();
                _objc_release(puVar22);
                if (puVar6 < puVar21) {
                  puVar6 = puVar20;
                  func_0x00010c084fc0(puVar20);
                  _objc_retainAutoreleasedReturnValue();
                  puVar21 = puVar6;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar22 = puVar21;
                  func_0x00010be36bc0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar21);
                  _objc_release(puVar6);
                  puVar6 = param_5 + 0x278;
                  _objc_loadWeakRetained(puVar6);
                  func_0x00010c1ddd40();
                }
                else {
                  puVar22 = param_5 + 0x280;
                  _objc_loadWeakRetained(puVar22);
                  puVar6 = puVar22;
                  func_0x00010c0d6240();
                  _objc_retainAutoreleasedReturnValue();
                  puVar21 = param_5 + 0x290;
                  _objc_loadWeakRetained(puVar21);
                  puVar19 = puVar21;
                  func_0x00010c089060();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c0d6060(puVar6);
                  _objc_release(puVar19);
                  _objc_release(puVar21);
                }
                _objc_release(puVar6);
              }
              else {
                puVar6 = puVar22;
                func_0x00010bf529e0();
                _objc_release(puVar22);
                if (puVar6 == (undefined *)0x0) goto LAB_1063aaad0;
                puVar6 = puVar20;
                func_0x00010c084fc0(puVar20);
                _objc_retainAutoreleasedReturnValue();
                puVar21 = puVar6;
                func_0x00010c0dfd40();
                _objc_retainAutoreleasedReturnValue();
                puVar22 = puVar21;
                func_0x00010be36bc0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar21);
                _objc_release(puVar6);
                puVar6 = param_5 + 0x278;
                _objc_loadWeakRetained(puVar6);
                func_0x00010c1ddd40();
                _objc_release(puVar6);
              }
              goto LAB_1063aad20;
            }
            puVar22 = PTR_PTR_1126b2330;
            func_0x00010c29e700(PTR_PTR_1126b2330);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = param_7;
            func_0x00010c0720c0();
            _objc_release(puVar22);
            if ((((int)puVar6 == 0) || (puVar20 == (undefined *)0x0)) ||
               (lVar18 = param_8, func_0x000106449c18(), (int)lVar18 == 0)) goto LAB_1063a9e88;
            uVar12 = *(undefined8 *)(param_5 + 0x100);
            puVar21 = puVar4;
            func_0x00010be36bc0(puVar4);
            _objc_retainAutoreleasedReturnValue();
            puVar20 = param_5 + 0x278;
            _objc_loadWeakRetained(puVar20);
            func_0x00010c29e760(uVar12);
            goto LAB_1063a99f0;
          }
          if (puVar20 == (undefined *)0x0) goto LAB_1063a9e88;
          func_0x00010bef2820(param_5);
          _objc_retainAutoreleasedReturnValue();
          _CACurrentMediaTime();
          func_0x00010c0842c0(puVar21);
          goto LAB_1063a99f8;
        }
LAB_1063a9bf0:
        _objc_release(puVar22);
LAB_1063a9bf8:
        puVar20 = param_5;
        func_0x00010bf5f0a0(param_5);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        func_0x00010bf95540(*(undefined8 *)(param_5 + 0x1f0));
        func_0x00010be592c0(param_5);
        func_0x00010be42840();
        uVar12 = *(undefined8 *)(param_5 + 0x38);
        func_0x00010c23e660(uVar12);
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(puVar4);
        func_0x00010bf97e80(uVar12);
        puVar22 = PTR_PTR_1126c9460;
        func_0x00010c0f2620(PTR_PTR_1126c9460);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = param_7;
        func_0x00010c0720c0();
        if ((int)puVar6 == 0) {
          puVar6 = PTR_PTR_1126c9460;
          func_0x00010c0f25e0(PTR_PTR_1126c9460);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = param_7;
          func_0x00010c0720c0();
          _objc_release(puVar6);
          _objc_release(puVar22);
          if ((int)puVar21 != 0) goto LAB_1063a9d90;
        }
        else {
          _objc_release(puVar22);
LAB_1063a9d90:
          uVar30 = *(undefined8 *)(param_5 + 0x38);
          puVar22 = puVar4;
          func_0x00010bfce400(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23e640(uVar30);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar22);
          _objc_retain(puVar4);
          func_0x00010bf97e80(uVar30);
          uVar29 = *(undefined8 *)(param_5 + 0x38);
          puVar22 = puVar20;
          func_0x00010bfce400(puVar20);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar22;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c256ec0(uVar29);
          _objc_release(puVar6);
          _objc_release(puVar22);
          _objc_release(puVar4);
          _objc_release(uVar30);
        }
        _objc_release(puVar4);
        _objc_release(uVar12);
        _objc_release(puVar4);
        _objc_release(puVar20);
      }
      else if (puVar20 != (undefined *)0x0) {
        uVar12 = *(undefined8 *)(param_5 + 0xc0);
        func_0x00010bef53c0(*(undefined8 *)(param_5 + 0x38));
        func_0x00010c278220(uVar12);
      }
    }
    else {
      lVar18 = param_8;
      func_0x00010c118b40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c079440();
      _objc_release(lVar18);
      if (((int)puVar22 == 0) || (puVar20 == (undefined *)0x0)) {
        puVar20 = param_5 + 0x290;
        _objc_loadWeakRetained(puVar20);
        puVar22 = puVar20;
        func_0x00010c089060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde1700(param_5);
        _objc_release(puVar22);
        _objc_release(puVar20);
        puVar20 = param_5;
        func_0x00010bef2820(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c137fe0();
      }
      else {
        uVar12 = *(undefined8 *)(param_5 + 0x38);
        puVar20 = puVar4;
        func_0x00010bfce400(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c256ea0(uVar12);
      }
      _objc_release(puVar20);
    }
  }
  else {
    if (*(long *)(param_5 + 0x260) != 0) goto LAB_1063a9e88;
    puVar22 = PTR_PTR_1126b2348;
    func_0x00010c0c5ec0(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    puVar22 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar21 = puVar6;
    _objc_opt_isKindOfClass(puVar6,puVar22);
    puVar22 = puVar6;
    if (((ulong)puVar21 & 1) == 0) {
      puVar22 = (undefined *)0x0;
    }
    _objc_retain(puVar22);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b2348;
    func_0x00010c08c740(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = param_9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar19 = puVar21;
    _objc_opt_isKindOfClass(puVar21,puVar6);
    puVar6 = puVar21;
    if (((ulong)puVar19 & 1) == 0) {
      puVar6 = (undefined *)0x0;
    }
    _objc_retain(puVar6);
    _objc_release(puVar21);
    puVar21 = PTR_PTR_1126c9dc8;
    _objc_alloc(PTR_PTR_1126c9dc8);
    func_0x00010bf1f3c0(puVar6);
    _objc_release(puVar6);
    func_0x00010c029ac0(puVar21);
    _objc_release(puVar22);
    func_0x00010be2d680(param_5);
    puVar19 = *(undefined **)(param_5 + 0x150);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar19;
    func_0x00010bf1f480();
    puVar22 = PTR_PTR_1126ca2b0;
    if (((int)puVar6 == 0) || (puVar20 == (undefined *)0x0)) {
LAB_1063a99e0:
      _objc_release(puVar19);
    }
    else {
      lVar18 = param_8;
      func_0x00010c118b40(param_8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07c320();
      _objc_release(lVar18);
      _objc_release(puVar19);
      if ((int)puVar22 != 0) {
        uVar12 = *(undefined8 *)(param_5 + 0xc0);
        puVar19 = PTR_PTR_1126ca300;
        func_0x00010bf0d240(PTR_PTR_1126ca300);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e4e20(uVar12);
        goto LAB_1063a99e0;
      }
    }
    puVar20 = *(undefined **)(param_5 + 0x230);
    *(undefined8 *)(param_5 + 0x230) = 0;
LAB_1063a99f0:
    _objc_release(puVar20);
LAB_1063a99f8:
    _objc_release(puVar21);
  }
LAB_1063a9e88:
  func_0x00010be09be0(param_5);
  _objc_release(uStack_190);
  _objc_release(uStack_180);
  _objc_release(uStack_1a8);
  _objc_release(uVar28);
  _objc_release(puVar5);
  _objc_release(puVar27);
LAB_1063a9ecc:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_9);
  _objc_release(param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1063ab88c; end: 1063aba6b;  */

void FUN_1063ab88c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  func_0x00010c256ee0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
  iVar1 = (int)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c078c60();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010bef4b20(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    func_0x00010bef6280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    func_0x00010c278340(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  func_0x00010c0a0860(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1063aba6c; end: 1063abcc3;  */

bool FUN_1063aba6c(ulong param_1,ulong param_2)

{
  bool bVar1;
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
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (param_2 < uVar3) {
    uVar2 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c242040();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf3fc80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf68c60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c23aec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (uVar7 == 0) {
      uVar2 = uVar3;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010bf20540();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf3fc80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bf68c60();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c2a4760();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c2a4740();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if (uVar9 == 0) {
        bVar1 = false;
      }
      else {
        puVar10 = PTR_PTR_1126b1068;
        _objc_alloc(PTR_PTR_1126b1068);
        puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c057c40(puVar10);
        _objc_release(puVar11);
        puVar11 = puVar10;
        func_0x00010bf423e0(puVar10);
        bVar1 = puVar11 == (undefined *)0x3;
        _objc_release(puVar10);
      }
      _objc_release(uVar9);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar3);
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 1063abcc4; end: 1063abd4b;  */

undefined8 FUN_1063abcc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010be36bc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf5f0a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c0720c0(param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1063abd4c; end: 1063abda7;  */

uint FUN_1063abd4c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*(ulong *)(param_1 + 0x20) < param_3) {
    func_0x00010c27dd80(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010c0720c0();
    uVar2 = (uint)uVar1 ^ 1;
    _objc_release(param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 1063abda8; end: 1063ac05b; -[SCAdViewingSession _verticalEndCardPagePropertiesForItem:dataModel:] */

void FUN_1063abda8(undefined8 param_1,undefined8 param_2,long param_3,undefined ***param_4)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined ***pppuVar12;
  long lVar13;
  undefined ***pppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar17 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126ca220;
  puVar1 = PTR_PTR_1126ca218;
  _objc_opt_class(PTR_PTR_1126ca218);
  pppuVar2 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar1);
  pppuVar4 = param_4;
  if (((ulong)pppuVar2 & 1) == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  _objc_retain(pppuVar4);
  ppuVar16 = (undefined **)pppuVar4;
  func_0x00010c2356e0();
  _objc_release(pppuVar4);
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if ((int)puVar3 != 0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e4e458;
    puStack_60 = PTR____kCFBooleanTrue_11034ab68;
    pppuVar17 = &ppuStack_68;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010c0d3c80();
    _objc_release(puVar3);
    lVar13 = param_3;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = &PTR____CFConstantStringClassReference_110e4e438;
    lVar6 = lVar13;
    func_0x00010bfdcf80();
    _objc_release(lVar13);
    if ((int)lVar6 != 0) {
      func_0x00010c1d0640(puVar1);
      func_0x00010c1d0640(puVar1);
      func_0x00010c1d0640(puVar1);
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      pppuVar4 = (undefined ***)PTR_PTR_1126ca3e0;
      func_0x00010c29d920();
      _objc_retainAutoreleasedReturnValue();
      pppuVar17 = pppuVar4;
      func_0x00010c1d0640(puVar1);
      _objc_release(pppuVar4);
      _objc_release(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar13 = param_3;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar13);
      pppuVar4 = (undefined ***)PTR_PTR_1126b2368;
      _objc_opt_new();
      pppuVar2 = pppuVar4;
      func_0x00010c2b53a0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar2;
      func_0x00010c1531a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = (undefined **)pppuVar5;
      func_0x00010bef7f60(puVar1);
      _objc_release(pppuVar5);
      _objc_release(pppuVar2);
      _objc_release(pppuVar4);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  _objc_retain(ppuVar16);
  _objc_retain(pppuVar17);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar13 = param_3;
  func_0x00010bee8880(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(lVar13);
  lVar6 = *(long *)(param_3 + 0x38);
  func_0x00010bef4800();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = *(undefined8 *)(param_3 + 0x38);
  pppuVar4 = pppuVar17;
  func_0x00010be36bc0(pppuVar17);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar4);
  lVar13 = lVar6;
  func_0x00010c08fa60();
  if (lVar13 != 0) {
    func_0x00010bef53c0(*(undefined8 *)(param_3 + 0x38));
    uVar7 = uVar19;
    func_0x00010bef52e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b9250;
    func_0x00010bef60a0();
    func_0x00010bef4240(uVar19);
    uVar8 = *(undefined8 *)(param_3 + 0x148);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x150);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_3 + 0x158);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44a40();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    uVar8 = *(undefined8 *)(param_3 + 0x148);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(param_3 + 0x150);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 1;
    FUN_106449e40(0,1,uVar19,uVar8,uVar9,*(undefined8 *)(param_3 + 0x100),
                  *(undefined8 *)(param_3 + 0x1c8),0,0,*(undefined8 *)(param_3 + 0xd0),
                  (int)puVar3 == 4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    pppuVar4 = (undefined ***)ppuVar16;
    FUN_10643b2ac();
    if ((int)pppuVar4 != 0) {
      uVar8 = *(undefined8 *)(param_3 + 0xf8);
      func_0x00010bf9e960(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar1);
      _objc_release(uVar8);
    }
    lVar11 = *(long *)(param_3 + 0x78);
    func_0x00010bf9eaa0();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar11;
    func_0x00010bf529e0();
    if (lVar13 != 0) {
      func_0x00010bef7f60(puVar1);
    }
    lVar13 = param_3;
    func_0x00010bdc4480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar13);
    func_0x00010c1d0640(puVar1);
    pppuVar2 = pppuVar17;
    func_0x00010bfce400();
    _objc_retainAutoreleasedReturnValue();
    pppuVar4 = pppuVar2;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (pppuVar4 == pppuVar17) {
      uVar18 = *(ulong *)(param_3 + 0x110);
      pppuVar5 = pppuVar17;
      func_0x00010bfce400(pppuVar17);
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = pppuVar5;
      func_0x00010be36bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900();
      if ((uVar18 & 1) != 0) {
LAB_1063ac3d0:
        _objc_release(pppuVar12);
        _objc_release(pppuVar5);
        goto LAB_1063ac3e0;
      }
      lVar13 = *(long *)(param_3 + 0xd0);
      _objc_release(pppuVar12);
      _objc_release(pppuVar5);
      _objc_release(pppuVar4);
      _objc_release(pppuVar2);
      if (lVar13 == 0x1c) {
        pppuVar4 = (undefined ***)(param_3 + 0x278);
        _objc_loadWeakRetained();
        pppuVar5 = pppuVar17;
        func_0x00010bfce400(pppuVar17);
        _objc_retainAutoreleasedReturnValue();
        pppuVar2 = pppuVar4;
        func_0x00010bf63e80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar5);
        _objc_release(pppuVar4);
        puVar3 = PTR_PTR_1126b8e08;
        _objc_retain(pppuVar2);
        _objc_opt_class(puVar3);
        pppuVar5 = pppuVar2;
        _objc_opt_isKindOfClass(pppuVar2,puVar3);
        pppuVar4 = pppuVar2;
        if (((ulong)pppuVar5 & 1) == 0) {
          pppuVar4 = (undefined ***)0x0;
        }
        _objc_retain(pppuVar4);
        _objc_release(pppuVar2);
        pppuVar5 = pppuVar4;
        func_0x00010bef60a0();
        if (pppuVar5 != (undefined ***)0x5) goto LAB_1063ac3e0;
        uVar9 = *(undefined8 *)(param_3 + 0x150);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar9;
        func_0x00010bf1f480();
        _objc_release(uVar9);
        if ((int)uVar8 == 0) {
          pppuVar5 = pppuVar4;
          func_0x0001084c2260(pppuVar4,*(undefined8 *)(param_3 + 0x148));
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          pppuVar5 = (undefined ***)PTR_PTR_1126ca2e8;
          func_0x00010bf82060();
          _objc_retainAutoreleasedReturnValue();
        }
        pppuVar14 = pppuVar5;
        func_0x00010c259560();
        _objc_retainAutoreleasedReturnValue();
        pppuVar12 = pppuVar14;
        func_0x00010afef744();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar14);
        if (pppuVar12 != (undefined ***)0x0) {
          ppuVar15 = &PTR____CFConstantStringClassReference_110e4d098;
          func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4d098,0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(ppuVar15);
          func_0x00010c1d0640(puVar1);
          func_0x00010c1d0640(puVar1);
          puVar3 = PTR_PTR_1126ca3e8;
          _objc_alloc(PTR_PTR_1126ca3e8);
          func_0x00010bffe0a0();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c259740(pppuVar5);
          func_0x00010c0df880(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar1);
          _objc_release(puVar3);
        }
        goto LAB_1063ac3d0;
      }
    }
    else {
LAB_1063ac3e0:
      _objc_release(pppuVar4);
      _objc_release(pppuVar2);
    }
    lVar13 = *(long *)(param_3 + 0x1d0);
    if (lVar13 != 0) {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(lVar13);
    }
    _objc_release(lVar11);
    _objc_release(uVar7);
  }
  _objc_release(uVar19);
  _objc_release(lVar6);
  _objc_release(pppuVar17);
  _objc_release(ppuVar16);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063ac05c; end: 1063ac6f7; -[SCAdViewingSession extraPropertiesForDataModel:item:] */

void FUN_1063ac05c(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  lVar12 = param_1;
  func_0x00010bee8880(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(lVar12);
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bef4800();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  puVar3 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  lVar12 = lVar2;
  func_0x00010c08fa60();
  if (lVar12 == 0) goto LAB_1063ac444;
  func_0x00010bef53c0(*(undefined8 *)(param_1 + 0x38));
  uVar4 = uVar16;
  func_0x00010bef52e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b9250;
  func_0x00010bef60a0();
  func_0x00010bef4240(uVar16);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x158);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf44a40();
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 1;
  FUN_106449e40(0,1,uVar16,uVar5,uVar6,*(undefined8 *)(param_1 + 0x100),
                *(undefined8 *)(param_1 + 0x1c8),0,0,*(undefined8 *)(param_1 + 0xd0),
                (int)puVar3 == 4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_3;
  FUN_10643b2ac();
  if ((int)uVar5 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xf8);
    func_0x00010bf9e960(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar1);
    _objc_release(uVar5);
  }
  lVar8 = *(long *)(param_1 + 0x78);
  func_0x00010bf9eaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar8;
  func_0x00010bf529e0();
  if (lVar12 != 0) {
    func_0x00010bef7f60(puVar1);
  }
  lVar12 = param_1;
  func_0x00010bdc4480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(lVar12);
  func_0x00010c1d0640(puVar1);
  puVar9 = param_4;
  func_0x00010bfce400();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == param_4) {
    uVar15 = *(ulong *)(param_1 + 0x110);
    puVar10 = param_4;
    func_0x00010bfce400(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar10;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    if ((uVar15 & 1) != 0) {
LAB_1063ac3d0:
      _objc_release(puVar11);
      _objc_release(puVar10);
      goto LAB_1063ac3e0;
    }
    lVar12 = *(long *)(param_1 + 0xd0);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar3);
    _objc_release(puVar9);
    if (lVar12 == 0x1c) {
      puVar3 = (undefined *)(param_1 + 0x278);
      _objc_loadWeakRetained();
      puVar10 = param_4;
      func_0x00010bfce400(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010bf63e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126b8e08;
      _objc_retain(puVar9);
      _objc_opt_class(puVar3);
      puVar10 = puVar9;
      _objc_opt_isKindOfClass(puVar9,puVar3);
      puVar3 = puVar9;
      if (((ulong)puVar10 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar9);
      puVar10 = puVar3;
      func_0x00010bef60a0();
      if (puVar10 != (undefined *)0x5) goto LAB_1063ac3e0;
      uVar6 = *(undefined8 *)(param_1 + 0x150);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010bf1f480();
      _objc_release(uVar6);
      if ((int)uVar5 == 0) {
        puVar10 = puVar3;
        func_0x0001084c2260(puVar3,*(undefined8 *)(param_1 + 0x148));
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar10 = PTR_PTR_1126ca2e8;
        func_0x00010bf82060();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar13 = puVar10;
      func_0x00010c259560();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar13;
      func_0x00010afef744();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      if (puVar11 != (undefined *)0x0) {
        ppuVar14 = &PTR____CFConstantStringClassReference_110e4d098;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e4d098,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(ppuVar14);
        func_0x00010c1d0640(puVar1);
        func_0x00010c1d0640(puVar1);
        puVar13 = PTR_PTR_1126ca3e8;
        _objc_alloc(PTR_PTR_1126ca3e8);
        func_0x00010bffe0a0();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar13);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c259740(puVar10);
        func_0x00010c0df880(puVar13);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(puVar13);
      }
      goto LAB_1063ac3d0;
    }
  }
  else {
LAB_1063ac3e0:
    _objc_release(puVar3);
    _objc_release(puVar9);
  }
  lVar12 = *(long *)(param_1 + 0x1d0);
  if (lVar12 != 0) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(lVar12);
  }
  _objc_release(lVar8);
  _objc_release(uVar4);
LAB_1063ac444:
  _objc_release(uVar16);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1063ac6f8; end: 1063ac85b; -[SCAdViewingSession extraAttachmentPropertiesForDataModel:item:] */

/* WARNING: Possible PIC construction at 0x0001063ac878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001063ac898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001063ac87c) */
/* WARNING: Removing unreachable block (ram,0x0001063ac89c) */

void FUN_1063ac6f8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = param_4;
  func_0x00010be36bc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bef53c0(uVar3);
  _objc_release(param_4);
  uVar4 = uVar6;
  FUN_1063aba6c(uVar6,uVar3);
  _objc_release(uVar6);
  _objc_release();
  if (((int)uVar4 != 0) && (*(char *)(param_1 + 0xe1) == '\x01')) {
    _objc_opt_class();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar2);
    puVar2 = puVar1;
    func_0x00010c1d0640();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf42760(*(undefined8 *)(puVar2 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(puVar2 + 0x60),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 1063ac85c; end: 1063ac8ab; -[SCAdViewingSession tearDown] */

/* WARNING: Possible PIC construction at 0x0001063ac878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001063ac898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001063ac87c) */
/* WARNING: Removing unreachable block (ram,0x0001063ac89c) */

void FUN_1063ac85c(long param_1)

{
  func_0x00010bf42760(*(undefined8 *)(param_1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010c26ab90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_tearDown_112678508);
  return;
}



/* Entry: 1063ac8ac; end: 1063ac9a3; -[SCAdViewingSession _onStoreViewClosed:page:params:adRequestClientId:] */

void FUN_1063ac8ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x290;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c089060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde1700(param_1,param_2,param_3,param_6,param_4,param_5,lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x280;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c29e000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d1c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1063ac9a4; end: 1063ac9a7; -[SCAdViewingSession _onVideoDidFinishLooping:page:adResponse:] */

void FUN_1063ac9a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5b010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__loopStoryIfNeeded_page_adRespon_1125745a0);
  return;
}



/* Entry: 1063ac9a8; end: 1063accf3; -[SCAdViewingSession _loopStoryIfNeeded:page:adResponse:] */

undefined8 *
FUN_1063ac9a8(ulong param_1,undefined8 param_2,undefined8 *param_3,uint param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
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
  _objc_retain(param_5);
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  puVar4 = param_3;
  func_0x00010bef53c0();
  if (-1 < (long)puVar1) {
    puVar2 = param_5;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bf529e0();
    _objc_release(puVar2);
    if (puVar1 < puVar3) {
      puVar4 = param_5;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      puVar4 = param_5;
      func_0x00010bef60a0(param_5);
      puVar3 = puVar2;
      func_0x00010c077800(puVar2);
      param_4 = (uint)puVar3;
      uVar5 = param_1;
      func_0x00010be5b020();
      if (uVar5 != 0) {
        puVar4 = param_5;
        func_0x00010bef52c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010bf529e0();
        _objc_release(puVar4);
        lVar6 = *(long *)(param_1 + 0x108);
        puVar4 = param_5;
        func_0x00010bf9bec0();
        param_4 = (uint)puVar4;
        puVar10 = param_5;
        func_0x00010bef52c0(param_5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar10;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar2;
        puVar4 = puVar7;
        func_0x00010c071ae0();
        _objc_release(puVar7);
        _objc_release(puVar10);
        if ((puVar1 == (undefined8 *)((long)puVar3 + -1)) || (lVar6 == 1)) {
          *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
        }
        if ((puVar1 == (undefined8 *)((long)puVar3 + -1)) ||
           (lVar6 == 1 && ((ulong)puVar8 & 1) == 0)) {
          puVar1 = param_5;
          func_0x00010bef52c0();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          func_0x00010bf529e0();
          _objc_release(puVar1);
          if ((uVar5 == 2) && ((undefined8 *)0x1 < puVar3)) {
            puVar4 = param_3;
            func_0x00010c0f3aa0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (puVar4 == (undefined8 *)0x0) {
              puVar1 = param_3;
              func_0x00010bfce400(param_3);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = puVar1;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = param_5;
              puVar10 = puVar3;
              func_0x00010be74680(param_1);
              param_4 = (uint)puVar10;
              _objc_release(puVar3);
            }
            else {
              uStack_108 = 0;
              uStack_110 = 0;
              uStack_f8 = 0;
              uStack_100 = 0;
              lStack_128 = 0;
              uStack_130 = 0;
              uStack_118 = 0;
              plStack_120 = (long *)0x0;
              puVar4 = param_3;
              func_0x00010c0f3aa0();
              _objc_retainAutoreleasedReturnValue();
              puVar1 = puVar4;
              func_0x00010c25e580();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar4);
              puVar4 = &uStack_130;
              param_4 = (uint)auStack_f0;
              puVar3 = puVar1;
              func_0x00010bf52a60();
              if (puVar3 != (undefined8 *)0x0) {
                lVar6 = *plStack_120;
                do {
                  puVar10 = (undefined8 *)0x0;
                  do {
                    if (*plStack_120 != lVar6) {
                      _objc_enumerationMutation(puVar1);
                    }
                    param_4 = (uint)*(undefined8 *)(lStack_128 + (long)puVar10 * 8);
                    uVar5 = param_1;
                    puVar4 = param_5;
                    func_0x00010be74680();
                    if ((uVar5 & 1) != 0) goto LAB_1063acc98;
                    puVar10 = (undefined8 *)((long)puVar10 + 1);
                  } while (puVar3 != puVar10);
                  puVar4 = &uStack_130;
                  param_4 = (uint)auStack_f0;
                  puVar3 = puVar1;
                  func_0x00010bf52a60();
                } while (puVar3 != (undefined8 *)0x0);
              }
            }
LAB_1063acc98:
            _objc_release(puVar1);
          }
        }
      }
      _objc_release(puVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  puVar9 = PTR_PTR_1126b8ca8;
  func_0x00010bf90ba0();
  if ((int)puVar9 == 0) {
    return (undefined8 *)(ulong)((uint)(puVar4 != (undefined8 *)0x5) & (param_4 ^ 0xffffffff));
  }
  puVar4 = (undefined8 *)PTR_PTR_1126b8ca8;
                    /* WARNING: Could not recover jumptable at 0x00010c0b5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8ca8,PTR_s_loopingBehavior_11260b028);
  return puVar4;
}



/* Entry: 1063accf4; end: 1063acd4b; -[SCAdViewingSession _loopingBehaviorForAdType:isComposerMedia:] */

undefined * FUN_1063accf4(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b8ca8;
  func_0x00010bf90ba0();
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126b8ca8;
                    /* WARNING: Could not recover jumptable at 0x00010c0b5850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b8ca8,PTR_s_loopingBehavior_11260b028);
    return puVar1;
  }
  return (undefined *)(ulong)((uint)(param_3 != 5) & (param_4 ^ 0xffffffff));
}



/* Entry: 1063acd4c; end: 1063acf7b; -[SCAdViewingSession _playFirstSnapIn:items:] */

undefined1 * FUN_1063acd4c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
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
  _objc_retain(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_4);
  puVar2 = &uStack_130;
  puVar9 = auStack_f0;
  lVar1 = param_4;
  func_0x00010bf52a60(param_4,param_2,puVar2,puVar9,0x10);
  if (lVar1 != 0) {
    lVar16 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar16) {
          _objc_enumerationMutation(param_4);
        }
        puVar14 = *(undefined8 **)(lStack_128 + lVar10 * 8);
        puVar2 = puVar14;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1126c9a78;
        func_0x00010c1015e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        func_0x00010c0720c0(puVar2,param_2,puVar3);
        _objc_release(puVar3);
        _objc_release(puVar2);
        if ((int)puVar4 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x38);
          puVar2 = puVar14;
          func_0x00010be36bc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef4b20(uVar15,param_2,puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          uVar12 = uVar15;
          func_0x00010c071ae0(uVar15,param_2,param_3);
          if ((int)uVar12 != 0) {
            lVar5 = *(long *)(param_1 + 0x38);
            func_0x00010bef53c0(lVar5,param_2,puVar14);
            if (lVar5 == 0) {
              func_0x00010c1013e0(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010be36bc0();
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar14;
              func_0x00010c1ddd40(param_1,param_2,puVar14);
              _objc_release(puVar14);
              _objc_release(param_1);
              _objc_release(uVar15);
              puVar11 = (undefined1 *)0x1;
              goto LAB_1063acf24;
            }
          }
          _objc_release(uVar15);
        }
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      puVar2 = &uStack_130;
      puVar9 = auStack_f0;
      lVar1 = param_4;
      func_0x00010bf52a60(param_4,param_2,puVar2,puVar9,0x10);
    } while (lVar1 != 0);
  }
  puVar11 = (undefined1 *)0x0;
LAB_1063acf24:
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  uVar12 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010be36bc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(uVar12,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar13 = *(ulong *)(param_3 + 0x38);
  puVar11 = puVar9;
  func_0x00010be36bc0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(uVar13,param_2,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  uVar6 = uVar13;
  func_0x00010bef60a0();
  if ((uVar6 == 5) && (uVar6 = uVar13, func_0x00010c071ae0(uVar13,param_2,uVar12), (uVar6 & 1) == 0)
     ) {
    uVar6 = *(ulong *)(param_3 + 0x38);
    func_0x00010bef53c0(uVar6,param_2,puVar9);
    if (-1 < (long)uVar6) {
      uVar7 = uVar13;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf529e0();
      _objc_release(uVar7);
      if (uVar6 < uVar8) {
        uVar15 = *(undefined8 *)(param_3 + 0x60);
        uVar6 = uVar13;
        func_0x00010bef52c0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b0f80(uVar15,param_2,uVar13,uVar7,*(undefined8 *)(param_3 + 0x18));
        _objc_release(uVar7);
        _objc_release(uVar6);
        *(undefined8 *)(param_3 + 0x18) = 0;
      }
    }
  }
  _objc_release(uVar13);
  _objc_release(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return puVar9;
}



/* Entry: 1063acf7c; end: 1063ad0f7; -[SCAdViewingSession _logStoryAdViewedIfNeeded:pagedFromItem:] */

void FUN_1063acf7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(ulong *)(param_1 + 0x38);
  uVar6 = param_4;
  func_0x00010be36bc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef4b20(uVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  uVar1 = uVar5;
  func_0x00010bef60a0();
  if ((uVar1 == 5) && (uVar1 = uVar5, func_0x00010c071ae0(uVar5,param_2,uVar4), (uVar1 & 1) == 0)) {
    uVar1 = *(ulong *)(param_1 + 0x38);
    func_0x00010bef53c0(uVar1,param_2,param_4);
    if (-1 < (long)uVar1) {
      uVar2 = uVar5;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      if (uVar1 < uVar3) {
        uVar6 = *(undefined8 *)(param_1 + 0x60);
        uVar1 = uVar5;
        func_0x00010bef52c0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0b0f80(uVar6,param_2,uVar5,uVar2,*(undefined8 *)(param_1 + 0x18));
        _objc_release(uVar2);
        _objc_release(uVar1);
        *(undefined8 *)(param_1 + 0x18) = 0;
      }
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1063ad0f8; end: 1063ad1d7; -[SCAdViewingSession audioSession:didChangeVolume:] */

void FUN_1063ad0f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2 + 0x278;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar1;
  FUN_106441e74(lVar1,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  lVar2 = lVar3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bf73020(param_1,uVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010bf5f0a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef53c0(uVar5);
    func_0x00010bf73020(param_1,uVar4);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1063ad1d8; end: 1063ad24f; -[SCAdViewingSession updateViewLocation:] */

/* WARNING: Possible PIC construction at 0x0001063ad220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001063ad238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001063ad224) */
/* WARNING: Removing unreachable block (ram,0x0001063ad23c) */

void FUN_1063ad1d8(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *(long *)(param_1 + 0xd0) - 0x2b;
  if ((0x28 < uVar1 || (1L << (uVar1 & 0x3f) & 0x10000000007U) == 0) ||
      param_3 == *(long *)(param_1 + 0xd0)) {
    return;
  }
  *(long *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c28bef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_updateViewLocation__1126809e0);
  return;
}



/* Entry: 1063ad250; end: 1063ad2eb; +[SCAdViewingSession _isPageLeftForEvent:] */

ulong FUN_1063ad250(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c9460;
  func_0x00010c0f2620(PTR_PTR_1126c9460);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  if ((uVar3 & 1) == 0) {
    puVar2 = PTR_PTR_1126c9460;
    func_0x00010c0f2580(PTR_PTR_1126c9460);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  return uVar3;
}


